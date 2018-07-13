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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	vector3 vLocal_30 = { 0f, 0f, 0f };
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	struct<328> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
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
	var uLocal_76 = 4;
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
	var uLocal_91 = 4;
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
	var uLocal_106 = 4;
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
	var uLocal_121 = 4;
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
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[5] = { 0, 0, 0, 0, 0 };
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
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
	var uLocal_217 = 10;
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
	var uLocal_228 = 2;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 8;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 8;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	float fLocal_250 = 0f;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	var uLocal_255 = 35;
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
	var uLocal_571 = 50;
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
	var uLocal_675 = 40;
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
	var uLocal_1024 = 0;
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
	var uLocal_1050 = 0;
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
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
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
	var uLocal_1231 = 1;
	var uLocal_1232 = 0;
	var uLocal_1233 = 1;
	var uLocal_1234 = 1;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 1;
	var uLocal_1239 = 1;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 3;
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
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 4;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
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
	var uLocal_1310 = 0;
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
	var uLocal_1325 = 0;
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
	var uLocal_1340 = 0;
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
	var uLocal_1355 = 2;
	var uLocal_1356 = 0;
	var uLocal_1357 = 4;
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
	var uLocal_1370 = 0;
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
	var uLocal_1385 = 0;
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
	var uLocal_1400 = 0;
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
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 4;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 12;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 3;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	int iLocal_1679 = 0;
	var uLocal_1680 = 0;
	int iLocal_1681 = 0;
	int iLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	int iLocal_1695 = 0;
	int iLocal_1696 = 0;
	int iLocal_1697 = 0;
	int iLocal_1698 = 0;
	int iLocal_1699 = 0;
	int iLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	int iLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	int iLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	int iLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	int iLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	int iLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	int iLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	int iLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	int iLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	int iLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	int iLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	int iLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	int iLocal_1738 = 0;
	int iLocal_1739 = 0;
	int iLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	int iLocal_1745[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1746[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1747[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	int iLocal_1750 = 0;
	float fLocal_1751 = 0f;
	int iLocal_1752 = 0;
	int iLocal_1753 = 0;
	int iLocal_1754 = 0;
	int iLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 16;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	char* sLocal_1924 = NULL;
	float fLocal_1925 = 0f;
	float fLocal_1926 = 0f;
	bool bLocal_1927 = 0;
	bool bLocal_1928 = 0;
	vector3 vLocal_1929 = { 0f, 0f, 0f };
	vector3 vLocal_1930 = { 0f, 0f, 0f };
	vector3 vLocal_1931 = { 0f, 0f, 0f };
	float fLocal_1932 = 0f;
	float fLocal_1933 = 0f;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = -1;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 1000;
	var uLocal_1944 = 1000;
	var uLocal_1945 = 0;
	char[] cLocal_1946[8] = 0;
	char* sLocal_1947 = NULL;
	bool bLocal_1948 = 0;
	int iLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	int iLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	int iLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	bool bLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	struct<7> Local_1961 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	int iLocal_1967 = 0;
	int iLocal_1968 = 0;
	char* sLocal_1969 = NULL;
	char* sLocal_1970 = NULL;
	char* sLocal_1971 = NULL;
	vector3 vLocal_1972 = { 0f, 0f, 0f };
	vector3 vLocal_1973 = { 0f, 0f, 0f };
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	struct<7> Local_1982 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 1132396544;
	var uLocal_1987 = 1132396544;
	var uLocal_1988 = 1132396544;
	var uLocal_1989 = 0;
	var uLocal_1990 = -1082130432;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 8;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = -1;
	var uLocal_2051 = 1092616192;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	int iLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	int iLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	bool bLocal_2062 = 0;
	bool bLocal_2063 = 0;
	int iLocal_2064 = 0;
	bool bLocal_2065 = 0;
	int iLocal_2066 = 0;
	struct<2863> Local_2067 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2068 = 1;
	var uLocal_2069 = 0;
	int iLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	vector3 vLocal_2073 = { 0f, 0f, 0f };
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	vLocal_43 = { 1691,228f, 3251,785f, 44,2574f };
	vLocal_44 = { 2,5652f, 0f, -4,1481f };
	vLocal_184 = { 500f, 500f, 500f };
	iLocal_185 = -1;
	iLocal_194 = 1;
	fLocal_197 = 0,008f;
	fLocal_198 = 0,013f;
	fLocal_250 = ((0,05f + 0,275f) - 0,01f);
	fLocal_1751 = -1f;
	iLocal_1752 = 1;
	fLocal_1925 = 0,2f;
	fLocal_1926 = 0,2f;
	fLocal_1933 = 0f;
	cLocal_1946 = "SPR_UI_FAILD";
	sLocal_1947 = "SPR_UI_FRETRY";
	sLocal_1969 = "CHECKPOINT_NORMAL";
	sLocal_1970 = "CHECKPOINT_MISSED";
	sLocal_1971 = "CHECKPOINT_PERFECT";
	vLocal_1972 = { 1694,74f, 3276,502f, 41,2796f };
	vLocal_1973 = { 8,79494f, 0,59893f, 154,8464f };
	bLocal_2062 = true;
	bLocal_2063 = true;
	bLocal_2065 = true;
	vLocal_2073 = { -1497,708f, -3449,576f, 7,3477f };
	if (unk_0x7D9C4B359376D38A(114))
	{
		func_592();
	}
	unk_0xBC03901A15107317(1);
	Local_1982.f_1 = 0;
	Local_1982.f_5 = 0;
	Local_1982.f_6 = 0;
	while (true)
	{
		func_591();
		switch (Local_1982.f_1)
		{
			case 0:
				if (!func_580())
				{
					Local_1982.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_1982.f_1 = 2;
				}
				break;
			
			case 2:
				func_592();
				break;
		}
		system::wait(0);
	}
}

int func_1()//Position - 0x1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
	}
	if (unk_0x6ADD12BF4D6D2587(Local_45.f_1))
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_45.f_1, 0))
		{
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_45.f_1, 0))
			{
				if (unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))
				{
					Local_45.f_1 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
				}
			}
		}
	}
	else if (unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))
	{
		Local_45.f_1 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
	}
	else
	{
		Local_45.f_1 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2067.f_2861 != 0)
	{
		Local_2067.f_2862 = (Local_2067.f_2862 - 25);
		if (Local_2067.f_2862 <= 0)
		{
			unk_0x3416C016AC81BB77(Local_2067.f_2861);
			Local_2067.f_2861 = 0;
			bLocal_1948 = false;
		}
		else
		{
			if (bLocal_1948)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_577(func_578(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0x88ABD17FCFD44427(Local_2067.f_2861, iVar0, iVar1, iVar2, func_576(system::ceil((1,5f * IntToFloat(Local_2067.f_2862))), 255));
			unk_0xF0FA937EE7A3225B(Local_2067.f_2861, iVar0, iVar1, iVar2, Local_2067.f_2862);
		}
	}
	func_575();
	unk_0x2FD2EFCC6AD2A2DD("AMMUNATION");
	unk_0x4FB260623DD93924(0, 99, 1);
	unk_0x4FB260623DD93924(0, 100, 1);
	if (Local_1982.f_6 == 4)
	{
		unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f);
		if (unk_0xB8DE76287EDC4957(Local_45.f_1, 0))
		{
			if (unk_0x6B4C37F2EEC636CC(Local_45.f_1))
			{
				unk_0x102FB2F64757EA51(Local_45.f_1);
			}
		}
	}
	switch (Local_1982.f_6)
	{
		case 0:
			unk_0xB31CEFB00C146C91(false);
			Local_1982 = -1;
			Local_45.f_10 = 0;
			unk_0x4C15495E88D71C61(1734,802f, 3224,105f, 41,3709f, 1762,067f, 3258,69f, 40,5188f, false, 1);
			if (unk_0x6ADD12BF4D6D2587(Local_45.f_1))
			{
				unk_0x4BEFCD5DAE410A90(Local_45.f_1, 1);
				Local_2067.f_2859 = 0;
				Local_1982.f_6 = 3;
			}
			else
			{
				Local_1982.f_6 = 1;
			}
			break;
		
		case 1:
			Local_1982.f_6 = 18;
			break;
		
		case 2:
			if (unk_0x6ADD12BF4D6D2587(Local_45.f_1))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 512);
				unk_0x4BEFCD5DAE410A90(Local_45.f_1, 1);
				Local_2067.f_2859 = 0;
				Local_1982.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2067)
			{
			}
			else if ((unk_0x8EA3C8E091EA5BA4(iLocal_1738) && unk_0xD85097DDDA5447BE(iLocal_1738)) && unk_0x9F7B586A14398C40())
			{
				if (unk_0x8EA3C8E091EA5BA4(Local_2067.f_2858))
				{
					unk_0x02934BABFD4CD384(Local_2067.f_2858, 0);
				}
				unk_0x704F5ADD5B29DB63("MinigameTransitionOut");
				unk_0xA91E83FF512776B6("MinigameTransitionIn", 0, 1);
				Local_2067.f_2858 = unk_0x5AC38B4D80D4E352(26379945, vLocal_43, vLocal_44, 34,9705f, 1, 2);
				unk_0xD1B67496F304AB6F(0);
				unk_0xBC3B7443617858A0(false);
				unk_0xA91E83FF512776B6("MinigameTransitionOut", 0, 0);
				unk_0xA215B2F25E63FA31(iLocal_1738, vLocal_43.x, vLocal_43.y, (vLocal_43.z + 1000f));
				unk_0xBEBD5CAE3510CD2A(iLocal_1738, 90f, vLocal_44.y, vLocal_44.z, 2);
				unk_0xF10DA1539629CC3F(Local_2067.f_2858, iLocal_1738, 500, 1, 1);
				unk_0x4AFBCBFDE748D4E0(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			}
			else
			{
				func_574(500);
				if (unk_0x8EA3C8E091EA5BA4(Local_2067.f_2858))
				{
					unk_0x02934BABFD4CD384(Local_2067.f_2858, 0);
				}
				Local_2067.f_2858 = unk_0x5AC38B4D80D4E352(26379945, vLocal_43, vLocal_44, 34,9705f, 1, 2);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			}
			func_573(&iLocal_1962);
			func_572(1);
			unk_0x97580242FB655BD5();
			Local_1982.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(Local_45.f_1, 0))
			{
				unk_0xA15269351F50F113(Local_45.f_1, true, false, 0);
			}
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x4FB260623DD93924(2, 199, 1);
			}
			unk_0x4FB260623DD93924(2, 200, 1);
			unk_0x9B47B379EE749C38(false);
			Local_2067.f_2 = Local_2067;
			if (Local_2067)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_2067.f_358[0 /*189*/].f_9))
				{
					unk_0x4BEFCD5DAE410A90(Local_2067.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1682 = 0;
				Local_2067 = 0;
				func_541();
				Local_1982.f_6 = 8;
			}
			else if (Local_2067.f_2859)
			{
				if (unk_0x5616476F69B90F14())
				{
					if ((Local_2067.f_2859 && unk_0x58F436C557A0FD7A(2, 202)) && system::timera() > 500)
					{
						unk_0xA6C2E334E1C8C5C7(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2067.f_2859 = 0;
						Local_2067.f_2860 = 1;
						func_540(&(Local_45.f_119));
						system::settimera(0);
					}
					if (!Local_2067.f_2860 && func_539(&uLocal_1242))
					{
						Local_2067.f_2860 = 1;
						func_537(Local_2067.f_2860);
					}
					func_475(&(Local_45.f_118), Global_103585, &(Local_45.f_24[Global_103585 /*8*/]));
				}
				else if (func_465(&iLocal_1679, 0))
				{
					Local_2067.f_2859 = 0;
					iLocal_1679 = 0;
					func_540(&(Local_45.f_119));
					system::settimera(0);
				}
			}
			else
			{
				if ((func_428(&Local_2067, 0) && !iLocal_192) && !bLocal_191)
				{
					func_540(&(Local_45.f_119));
				}
				if (iLocal_195 && unk_0x5616476F69B90F14())
				{
					func_540(&(Local_45.f_119));
					iLocal_195 = 0;
				}
				if ((((!Local_2067.f_2859 && !iLocal_192) && !bLocal_191) && (iLocal_194 || !unk_0x5616476F69B90F14())) && (unk_0x58F436C557A0FD7A(2, 211) || unk_0x3D96C1C362D3E31D(2, 211)))
				{
					Local_2067.f_2859 = 1;
					unk_0xA6C2E334E1C8C5C7(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_427(&uLocal_1242);
					Local_2067.f_2860 = func_539(&uLocal_1242);
					func_537(Local_2067.f_2860);
					system::settimera(0);
				}
				if (func_368(&uLocal_2068, &(Local_2067.f_1)))
				{
					iLocal_1682 = 0;
					if (Local_45.f_10 != -1)
					{
						func_360();
						func_541();
						if (unk_0x0C88267282FD588F(Local_45.f_1, vLocal_1972, 5f, 5f, 5f, false, true, 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(Local_45.f_1, 0))
							{
								func_359(&iLocal_2070);
								Local_1982.f_6 = 8;
							}
						}
						else if (!unk_0x191BE1BC8F26F3C1(Local_45.f_1, 0))
						{
							Local_1982.f_6 = 8;
						}
					}
					else
					{
						Local_1982.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x36853D5037847BF3();
			if (unk_0xB8DE76287EDC4957(Local_45.f_1, 0))
			{
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				Local_1982.f_6 = 18;
			}
			else
			{
				if (unk_0x6ADD12BF4D6D2587(Local_2067.f_358[0 /*189*/].f_9))
				{
					unk_0xEDC33A771FAEB393(Local_2067.f_358[0 /*189*/].f_9, false);
				}
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_1972, 1, false, 0, 1);
				unk_0x59AF3B40AE222194(unk_0xFC1458A37D98B502(), vLocal_1973, 2, 1);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xACE486395AA1867D(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1084227584);
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				if (unk_0x6ADD12BF4D6D2587(Local_2067.f_358[0 /*189*/].f_9))
				{
					if (!unk_0x40189ECE75CF9724())
					{
						unk_0xDCBF71199890F355(vLocal_1972, unk_0xCE3B2111021F7234(unk_0xFC1458A37D98B502()), 500f, 0);
					}
					if (unk_0x64D098EABB2F6F13())
					{
						unk_0x81BCCFFE3F019672();
						Local_1982.f_6 = 18;
					}
				}
				else
				{
					Local_1982.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x391612227A0274F1();
			if (Local_45.f_10 == 0)
			{
				unk_0x7674774BB9279265(Local_45.f_1);
				if (func_358(iLocal_1959, 16))
				{
					func_356(&iLocal_1959, 16);
				}
				unk_0xA15269351F50F113(Local_45.f_1, true, true, 0);
				unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), Local_45.f_1, -1);
				unk_0xB3C8DB09F4A4DE89(Local_45.f_1);
				func_355();
				iLocal_1738 = unk_0x5AC38B4D80D4E352(26379945, 1702,487f, 3279,545f, 41,9968f, -2,9399f, 0f, 110,4428f, 45,0218f, 1, 2);
				unk_0x7849794435F39D49(Local_2067.f_2858, false);
				Local_1982.f_6 = 9;
			}
			else if (func_354(1000))
			{
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0xB3C8DB09F4A4DE89(Local_45.f_1);
				unk_0x7674774BB9279265(Local_45.f_1);
				if (unk_0x3E9CABD07B829173())
				{
					func_355();
					Local_1982.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0xD85097DDDA5447BE(iLocal_1738) && unk_0xCED06F4C77332FC6(iLocal_1738)) || (unk_0xD85097DDDA5447BE(Local_2067.f_2858) && unk_0xCED06F4C77332FC6(Local_2067.f_2858))))
			{
				unk_0x90CE99E954B80CFF(1, 0, 3, 0);
				func_355();
				Local_1982.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2067.f_25 = 0;
			Local_1982.f_6 = 11;
			break;
		
		case 11:
			if (!func_340(&Local_2067))
			{
				func_572(1);
				if (Local_2067.f_2)
				{
					unk_0xDCBF71199890F355(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xCE3B2111021F7234(unk_0xFC1458A37D98B502()), 500f, 0);
				}
				if (Local_45.f_10 == 0)
				{
					func_339("SPR_TAXI_GATE", 10000, 1);
					if (!func_358(iLocal_1959, 16))
					{
						func_331(&Local_2067, 0, 1);
						func_330(&iLocal_1959, 16);
					}
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xEDC33A771FAEB393(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false);
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					}
					unk_0x4255E93FCCDE108E(true);
					unk_0x9B47B379EE749C38(true);
					Local_1982.f_6 = 13;
				}
				else
				{
					Local_1982.f_6 = 13;
				}
				Local_2067.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x40189ECE75CF9724() || unk_0x64D098EABB2F6F13())
			{
				if (unk_0x40189ECE75CF9724())
				{
					unk_0x81BCCFFE3F019672();
				}
				unk_0xD1B67496F304AB6F(0);
				unk_0xBC3B7443617858A0(true);
				unk_0xEDC33A771FAEB393(Local_2067.f_358[0 /*189*/].f_9, false);
				func_355();
				if (func_358(iLocal_1959, 16))
				{
					func_356(&iLocal_1959, 16);
				}
				if (Local_45.f_10 == 0)
				{
					if (func_574(500))
					{
						Local_2067.f_26 = 0;
						Local_1982.f_6 = 14;
					}
				}
				else
				{
					func_329(&Local_2067);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					if (func_574(500))
					{
						Local_2067.f_26 = 0;
						Local_1982.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_1982 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2067))
			{
				return 1;
			}
			iLocal_1682 = 3;
			func_23();
			func_13();
			if (!Local_2067)
			{
				func_10(&(Local_2067.f_6));
				func_9(&(Local_2067.f_358[0 /*189*/]), Local_45.f_3, Local_45.f_6, 0f);
				if (unk_0x6ADD12BF4D6D2587(Local_2067.f_358[0 /*189*/].f_9))
				{
					unk_0xACE486395AA1867D(Local_2067.f_358[0 /*189*/].f_9, 1084227584);
				}
				if (unk_0xDCBF71199890F355(vLocal_43, func_8(vLocal_44), 4500f, 0))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					while (!unk_0x64D098EABB2F6F13() && func_5(&(Local_2067.f_6)) < 20f)
					{
						system::wait(0);
					}
					unk_0x81BCCFFE3F019672();
					unk_0x593C7101945C1D9E(vLocal_43, func_8(vLocal_44));
					func_4(&(Local_2067.f_6));
					Local_1982.f_6 = 15;
				}
				else if (func_2(&(Local_2067.f_6), 20f))
				{
					func_4(&(Local_2067.f_6));
					Local_1982.f_6 = 15;
				}
			}
			else
			{
				Local_1982.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x4BEFCD5DAE410A90(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
			}
			Local_2067.f_2859 = 0;
			Local_1982.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x4BEFCD5DAE410A90(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
			}
			func_428(&Local_2067, 1);
			if (unk_0x3E9CABD07B829173())
			{
				func_574(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(int iParam0, float fParam1)//Position - 0xCE2
{
	if (func_3(iParam0))
	{
		if (func_5(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(int iParam0)//Position - 0xD04
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

void func_4(var uParam0)//Position - 0xD14
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(int iParam0)//Position - 0xD2A
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_6(bool bParam0)//Position - 0xD69
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

bool func_7(int iParam0)//Position - 0xDC1
{
	return unk_0xC80D31E4B587871C(*iParam0, 2);
}

Vector3 func_8(vector3 vParam0)//Position - 0xDD1
{
	return (-system::sin(vParam0.z) * system::cos(vParam0.x)), (system::cos(vParam0.z) * system::cos(vParam0.x)), system::sin(vParam0.x);
}

void func_9(var uParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0xDFE
{
	unk_0xBD8D47FDC6902B2D(uParam0->f_9, vParam1, 1, false, 0, 1);
	unk_0x48ED7B2293A96722(uParam0->f_9, fParam2);
	unk_0xFB2E9855F95E3BD3(uParam0->f_9, fParam3);
}

void func_10(int iParam0)//Position - 0xE2A
{
	if (!func_3(iParam0))
	{
		func_359(iParam0);
	}
	else
	{
		func_11(iParam0);
	}
}

void func_11(int iParam0)//Position - 0xE4B
{
	func_12(iParam0, 0f);
}

void func_12(int iParam0, float fParam1)//Position - 0xE5A
{
	iParam0->f_1 = (func_6(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_13()//Position - 0xE88
{
	if (Global_104555.f_19013.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_104555.f_19013.f_6[4] > 0f)
		{
			if (Global_104555.f_19013.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)//Position - 0xED9
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
		func_20((891 + iParam0), 1, -1, 1);
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
		func_15();
	}
}

void func_15()//Position - 0xFC1
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
		func_19(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_18() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()//Position - 0x1482
{
	if (func_17(0))
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

bool func_17(bool bParam0)//Position - 0x14CD
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_18()//Position - 0x14F8
{
	return Global_25233;
}

int func_19(int iParam0, int iParam1)//Position - 0x1503
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

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1554
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
		iParam2 = func_21();
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

int func_21()//Position - 0x1A1A
{
	return Global_1312736;
}

float func_22(int iParam0)//Position - 0x1A26
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x1A8B
{
	iLocal_1974 = 0;
	iLocal_1975 = 0;
	iLocal_1976 = 0;
	iLocal_1977 = 0;
	iLocal_1978 = 0;
	iLocal_1979 = 0;
	iLocal_1980 = 0;
	iLocal_1981 = 0;
}

int func_24(var uParam0)//Position - 0x1AB3
{
	switch (uParam0->f_26)
	{
		case 0:
			func_356(&iLocal_1959, 4);
			unk_0x553231E7FC3C570D(2);
			func_328(uParam0);
			uParam0->f_17 = func_327();
			if (Local_45.f_10 == 0)
			{
				if (!func_358(iLocal_1959, 16))
				{
					func_331(uParam0, 0, 1);
					func_331(uParam0, 1, 0);
					func_330(&iLocal_1959, 16);
				}
			}
			else
			{
				func_329(uParam0);
				if (!func_358(iLocal_1959, 16))
				{
					func_331(uParam0, 0, 1);
					func_331(uParam0, 1, 0);
					func_330(&iLocal_1959, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_1967 = 0;
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0x553231E7FC3C570D(2);
			if (Local_45.f_10 == 0)
			{
				if (func_358(iLocal_1959, 16))
				{
					func_356(&iLocal_1959, 16);
				}
				func_325(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_329(uParam0);
				if (!func_300(&(uParam0->f_14)))
				{
					if (!unk_0x152F67E110EC8505())
					{
						unk_0x3458550DF8E9B453(false, true, 3000, 1, 0, 0);
					}
					if (func_358(iLocal_1959, 16))
					{
						func_356(&iLocal_1959, 16);
					}
					unk_0x4255E93FCCDE108E(true);
					func_325(uParam0);
					if (Local_45.f_10 == 0 && (Global_104555.f_19013.f_6[0] > Local_45.f_112[0] || Global_104555.f_19013.f_6[0] == 0f))
					{
						func_299("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_358(iLocal_1959, 1))
			{
				system::settimera(0);
				func_260(uParam0);
				func_259(&(Local_45.f_119), 0, 0, 1, 1);
				func_258(&(Local_45.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_257(&(Local_45.f_119), 1);
				func_330(&iLocal_1959, 1);
			}
			if (unk_0xF491DD47B88AA84E())
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (func_256("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x84CDD933AFA470D2();
			}
			if (unk_0xF491DD47B88AA84E())
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (func_256("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x84CDD933AFA470D2();
			}
			system::settimera(0);
			func_254();
			func_253(0);
			unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			unk_0xE07EA0C969E9EEAC(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x4FB260623DD93924(0, 75, 1);
			func_252(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0x4FB260623DD93924(0, 75, 1);
			func_250();
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				if (!unk_0x841ED61760A7D07B(uParam0->f_358[0 /*189*/].f_9) && unk_0x8EA3C8E091EA5BA4(iLocal_1739))
				{
					unk_0xA6EB123F0C0560D9(iLocal_1739, 2);
					unk_0xB3A8974D2C811672(uParam0->f_358[0 /*189*/].f_9, false, 0);
					unk_0xEDC33A771FAEB393(uParam0->f_358[0 /*189*/].f_9, true);
					func_249();
				}
			}
			if (!func_235(uParam0, bLocal_2062, bLocal_2063))
			{
				func_249();
				func_234(0);
				unk_0x3E80C2F7BC665259(1);
				if (func_358(iLocal_1959, 1))
				{
					func_356(&iLocal_1959, 1);
				}
				func_233(0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				}
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0xBB9A3C553EECB180(0f);
				unk_0xB31CEFB00C146C91(false);
				iLocal_2066 = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				func_4(&iLocal_1949);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0xBD8D47FDC6902B2D(uParam0->f_358[0 /*189*/].f_9, vLocal_1972, 1, false, 0, 1);
				unk_0x59AF3B40AE222194(uParam0->f_358[0 /*189*/].f_9, vLocal_1973, 2, 1);
				unk_0xB3A8974D2C811672(uParam0->f_358[0 /*189*/].f_9, true, 0);
				unk_0x4FB260623DD93924(0, 75, 1);
				unk_0xACE486395AA1867D(uParam0->f_358[0 /*189*/].f_9, 1084227584);
				unk_0x1A0806871323CD16(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_2061 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0x0EB9853DF8BC0D87(iLocal_1962, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_358(iLocal_1959, 16))
			{
				func_331(uParam0, 0, 1);
				func_331(uParam0, 1, 0);
				func_330(&iLocal_1959, 16);
				func_253(1);
				func_232(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_199(uParam0);
				func_197(uParam0);
			}
			else
			{
				func_194(&uLocal_1934, 0);
				func_249();
				unk_0xBC3B7443617858A0(false);
			}
			if (!func_41(uParam0, Local_45))
			{
				unk_0x8810DC630928B398("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0x4FB260623DD93924(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_249();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1F64
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_358(uLocal_1748, iVar0))
		{
			func_356(&uLocal_1748, iVar0);
		}
		if (func_358(uLocal_1749, iVar0))
		{
			func_356(&uLocal_1749, iVar0);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1746[iVar0]))
		{
			unk_0xC91FE17AD7353B70(&(iLocal_1746[iVar0]));
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1747[iVar0]))
		{
			unk_0x68433819717660CF(&(iLocal_1747[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_1745);
	iVar0 = 0;
	while (iVar0 < iLocal_1745)
	{
		iLocal_1745[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)//Position - 0x1FFD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x14776E43F90DD454((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)//Position - 0x202D
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0xA68F7B004463AB6F(iParam0);
		*iParam0 = 0;
	}
}

void func_28(var uParam0)//Position - 0x2049
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0x1A0806871323CD16(uParam0->f_358[0 /*189*/].f_9, true);
	unk_0x4FB260623DD93924(0, 75, 1);
	func_39(uParam0);
	if (Local_45 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)//Position - 0x20C9
{
}

void func_30(var uParam0)//Position - 0x20D1
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		if (Local_45 != 0)
		{
			func_31();
		}
	}
}

void func_31()//Position - 0x20F0
{
}

void func_32(var uParam0)//Position - 0x20F8
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar0 /*189*/].f_8, 0))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0xFC1458A37D98B502())
			{
				iVar1 = func_37(Local_45.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_45.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_45.f_10);
				func_34(Local_45.f_10, system::to_float(system::ceil(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_45.f_10, system::to_float(system::ceil(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x21CE
{
	Global_104555.f_19013.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x21E5
{
	Local_45.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x21F7
{
	var uVar0;
	
	uVar0 = Global_104555.f_19013.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x2210
{
	Global_104555.f_19013[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x2225
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_104555.f_19013[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x223F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x22A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0x5B811202FCBE9E9D(0,5f, 2,5f)));
		}
		iVar0++;
	}
}

void func_40(int iParam0)//Position - 0x230D
{
	if (func_3(iParam0))
	{
		if (!func_7(iParam0))
		{
			iParam0->f_2 = (func_6(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
			unk_0x872F1C1F8587CCC7(iParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)//Position - 0x2347
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	
	if (Local_45.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_358(iLocal_1960, 131072))
			{
				unk_0x3E7969E14572DEED(uParam0->f_358[0 /*189*/].f_9, 4);
				func_356(&iLocal_1960, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_358(iLocal_1960, 131072))
		{
			func_299("SPR_INFO_BON", 10000);
			func_330(&iLocal_1960, 131072);
			if (func_358(iLocal_1960, 262144))
			{
				func_356(&iLocal_1960, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_358(iLocal_1960, 262144))
		{
			func_299("SPR_INFO_RESET", 10000);
			func_330(&iLocal_1960, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_176(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0x4FB260623DD93924(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar5 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0xFC1458A37D98B502())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_12 - 1))
			{
				Var3 = { uParam0->f_27[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_45.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&iLocal_2054))
					{
						func_359(&iLocal_2054);
					}
					if (func_5(&iLocal_2057) >= 6,5f)
					{
						if (!unk_0xF2B58F79D29425B4(2, 222))
						{
							func_11(&iLocal_2054);
						}
						else if (func_5(&iLocal_2054) >= 1,5f)
						{
							uParam0->f_1 = 0;
							func_356(&iLocal_1960, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0xF2B58F79D29425B4(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6,5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1960, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1960, 32768, 0);
						}
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_45 == 0 && func_3(&iLocal_1955))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_359(&(uParam0->f_14));
						}
						if (func_358(iLocal_1959, 8))
						{
							func_331(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_12 - 1))
							{
								func_331(uParam0, iVar4 + 1, 0);
							}
							func_356(&iLocal_1959, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var3, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar5, uParam0->f_11);
						}
						bLocal_1948 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar4 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_12)
							{
								iVar6 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									unk_0x84CDD933AFA470D2();
									sLocal_1947 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_331(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_12 - 1))
								{
									func_331(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar4 == system::round((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_45 != 2)
							{
								if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_8, 0))
								{
									func_29(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_45 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_45.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2065)
									{
										if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_9, 0))
										{
											if (unk_0x78F50AA8F955BEFC(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0x84EF7D14703E1230(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, unk_0x617EA99D340A37ED(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_45 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2064);
		func_64(uParam0, &iLocal_2064);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_45.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2AD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x2918F48A30D03841())
	{
		unk_0x9B47B379EE749C38(true);
	}
	if (!func_3(&iLocal_1755))
	{
		iLocal_1753 = 0;
		iLocal_1754 = 0;
		func_359(&iLocal_1755);
	}
	if (system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_1754)
	{
		iLocal_1753 = (system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_1754);
		iLocal_1754 = system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&iLocal_1755);
	}
	iVar0 = (system::floor((func_5(&(uParam0->f_3)) * 100f)) * 10 - system::ceil((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&iLocal_1755) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_1753;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = system::floor((Global_104555.f_19013.f_6[Local_45.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_45.f_106[Local_45.f_10] * 1000f))
	{
		iVar3 = system::floor((Local_45.f_106[Local_45.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = system::floor(((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_45.f_112[Local_45.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = system::floor((Local_45.f_112[Local_45.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2D04
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	func_44(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2EB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_45(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = uParam4;
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

void func_45(int iParam0, int iParam1)//Position - 0x3000
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)//Position - 0x3019
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3032
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_45(5, iVar0);
		Global_1359035.f_3456[iVar0] = iParam0;
		Global_1359035.f_3456.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1359035.f_3456.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_3456.f_194[iVar0] = uParam3;
		Global_1359035.f_3456.f_183[iVar0] = uParam4;
		Global_1359035.f_3456.f_216[iVar0] = iParam5;
		Global_1359035.f_3456.f_227[iVar0] = iParam6;
		Global_1359035.f_3456.f_270[iVar0] = iParam7;
		Global_1359035.f_3456.f_281[iVar0] = iParam8;
		Global_1359035.f_3456.f_292[iVar0] = iParam9;
		Global_1359035.f_3456.f_303[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3122
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_45(3, iVar0);
		Global_1359035.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_2623.f_183[iVar0] = uParam3;
		Global_1359035.f_2623.f_172[iVar0] = uParam2;
		Global_1359035.f_2623.f_205[iVar0] = iParam4;
		Global_1359035.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_2623.f_420[iVar0] = iParam7;
		Global_1359035.f_2623.f_453[iVar0] = iParam8;
		Global_1359035.f_2623.f_431[iVar0] = iParam9;
		Global_1359035.f_2623.f_442[iVar0] = iParam10;
		Global_1359035.f_2623.f_464[iVar0] = iParam11;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x3234
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_45(0, iVar0);
		Global_1359035.f_1093[iVar0] = iParam0;
		Global_1359035.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1359035.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_1093.f_194[iVar0] = uParam3;
		Global_1359035.f_1093.f_183[iVar0] = uParam4;
		Global_1359035.f_1093.f_216[iVar0] = iParam5;
		Global_1359035.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1359035.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1359035.f_1093.f_258[iVar0] = iParam8;
		Global_1359035.f_1093.f_269[iVar0] = iParam9;
		Global_1359035.f_1093.f_312[iVar0] = iParam10;
		Global_1359035.f_1093.f_323[iVar0] = iParam11;
		Global_1359035.f_1093.f_334[iVar0] = iParam12;
		Global_1359035.f_1093.f_345[iVar0] = iParam13;
		Global_1359035.f_1088 = 1;
		Global_1359035.f_1093.f_356[iVar0] = iParam14;
		Global_1359035.f_1093.f_367[iVar0] = iParam15;
		Global_1359035.f_1093.f_378[iVar0] = iParam16;
		Global_1359035.f_1093.f_389[iVar0] = iParam17;
		Global_1359035.f_1093.f_400[iVar0] = iParam18;
		Global_1359035.f_1093.f_411[iVar0] = iParam19;
		Global_1359035.f_1093.f_422[iVar0] = iParam20;
		Global_1359035.f_1093.f_433[iVar0] = iParam21;
		Global_1359035.f_1093.f_444[iVar0] = iParam22;
		Global_1359035.f_1093.f_455[iVar0] = iParam23;
	}
}

int func_50(char* sParam0)//Position - 0x33FD
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

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x3437
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
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_45(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = uParam3;
		Global_1359035.f_3770.f_172[iVar0] = uParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = fParam8;
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
		if (iParam15 == 5 && func_53())
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
			if (func_52())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_52()//Position - 0x3699
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

int func_53()//Position - 0x36BD
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x36FB
{
	return iLocal_1752;
}

void func_55()//Position - 0x3706
{
	Global_1359035.f_1088 = 1;
}

void func_56(var uParam0)//Position - 0x3716
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()//Position - 0x3726
{
	if (Local_45 == 0)
	{
		unk_0x71842E52F79163A6(0, 0, -1);
		unk_0x71842E52F79163A6(1, 0, -1);
		unk_0x71842E52F79163A6(2, 0, -1);
		unk_0x71842E52F79163A6(3, 0, -1);
	}
}

void func_58(var uParam0)//Position - 0x3754
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x90D5DFB054818BA7(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&iLocal_1952))
			{
				func_10(&iLocal_1952);
			}
			else if (func_5(&iLocal_1952) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1960, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&iLocal_1952);
				func_11(&iLocal_1949);
				uParam0->f_1 = 0;
				unk_0x84CDD933AFA470D2();
				sLocal_1947 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&iLocal_1952) > 30f)
			{
				if (!func_358(iLocal_1959, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1959, 32, 0);
				}
			}
		}
		else if (func_3(&iLocal_1952))
		{
			func_356(&iLocal_1959, 32);
			func_11(&iLocal_1952);
		}
	}
	else if (func_3(&iLocal_1952))
	{
		func_356(&iLocal_1959, 32);
		func_11(&iLocal_1952);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x38D4
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)//Position - 0x38FD
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)//Position - 0x390E
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)//Position - 0x3927
{
	return (uParam0 && uParam1) != 0;
}

void func_63()//Position - 0x3936
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	}
}

void func_64(var uParam0, int iParam1)//Position - 0x3952
{
	if (uParam0->f_1)
	{
		if ((!unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0xDE523AF6F7B269AB(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			func_11(&iLocal_1949);
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0xE30CF11C0EE14316(iParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x84CDD933AFA470D2();
			sLocal_1947 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, int iParam1)//Position - 0x3A59
{
	if (Local_45 == 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
		{
			if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				unk_0x84CDD933AFA470D2();
				unk_0xB31CEFB00C146C91(false);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				if (unk_0xA6DECE14FC9A8C51(*iParam1))
				{
					unk_0xE30CF11C0EE14316(iParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xA6DECE14FC9A8C51(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0x3ED68ABD7299EAA3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x84CDD933AFA470D2();
				sLocal_1947 = "SPR_RETR_DES";
				func_66(&(Local_45.f_321), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x3B5B
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x1CF95440F1970B4F("OFFMISSION_WASTED", false, -1);
}

void func_67(var uParam0)//Position - 0x3B7D
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x3B98
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xDE523AF6F7B269AB(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		iVar1 = system::round(unk_0xA7B0253B80B52B2B(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_45 == 2)
		{
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_1958 = true;
				}
			}
			if (bLocal_1958)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0x23F2F89E3D1CB7C4())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0x23F2F89E3D1CB7C4())
			{
				unk_0x84CDD933AFA470D2();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
		}
	}
	if (Local_45 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0x23F2F89E3D1CB7C4())
			{
				unk_0x84CDD933AFA470D2();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1960, 2);
		}
	}
}

void func_69()//Position - 0x3CCB
{
	Global_14622 = 0;
	func_70();
}

void func_70()//Position - 0x3CDB
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

int func_71()//Position - 0x3D32
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)//Position - 0x3D54
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	
	vVar0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		vVar1 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		vVar1 = { 0f, 0f, 0f };
	}
	fVar2 = unk_0xBE3C4023003180FC(vVar0, vVar1, true);
	fVar3 = fVar2;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	vVar4 = { unk_0xB3328BA8976B416C(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(vVar1, 0f, 0f, 0f, 1056964608, 0))
	{
		vVar5 = { vVar0 };
	}
	else
	{
		vVar5 = { unk_0x1F6BCB690FB61F9A(vVar4, vVar1, vVar0, 1) };
	}
	fVar6 = unk_0xBE3C4023003180FC(vVar5, vVar4, true);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_45 == 1)
	{
		if (unk_0xE97272C977DEADD3((vVar5.z - vVar4.z)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		func_11(&iLocal_1949);
		uParam0->f_1 = 0;
		unk_0x84CDD933AFA470D2();
		func_252(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_259(&(Local_45.f_119), 0, 0, 1, 1);
		func_258(&(Local_45.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_258(&(Local_45.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x8810DC630928B398("MGSP_FAIL");
		sLocal_1947 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			func_299("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1960, 4);
		}
	}
	else
	{
		unk_0x166954C5648772B6("SPR_HELP_WARN");
		if (func_358(iLocal_1960, 4))
		{
			func_356(&iLocal_1960, 4);
		}
	}
}

int func_73(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x3F33
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

void func_74()//Position - 0x3FAE
{
	if (iLocal_1684 == 1)
	{
		if (func_3(&iLocal_1714))
		{
			if (func_5(&iLocal_1714) <= 2,5f)
			{
				iLocal_1750 = "GATEMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1684 = 0;
			}
		}
	}
	if (iLocal_1685 == 1)
	{
		if (func_3(&iLocal_1720))
		{
			if (func_5(&iLocal_1720) <= 2,5f)
			{
				iLocal_1750 = "GATEINNER";
				fLocal_1751 = 1f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1685 = 0;
			}
		}
	}
	if (iLocal_1686 == 1)
	{
		if (func_3(&iLocal_1717))
		{
			if (func_5(&iLocal_1717) <= 2,5f)
			{
				iLocal_1750 = "GATEOUTTER";
				fLocal_1751 = 0f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1686 = 0;
			}
		}
	}
	if (iLocal_1687 == 1)
	{
		if (func_3(&iLocal_1729))
		{
			if (func_5(&iLocal_1729) <= 2,5f)
			{
				iLocal_1750 = "GATEKNIFEINNER";
				fLocal_1751 = 2,5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1687 = 0;
			}
		}
	}
	if (iLocal_1688 == 1)
	{
		if (func_3(&iLocal_1732))
		{
			if (func_5(&iLocal_1732) <= 2,5f)
			{
				iLocal_1750 = "GATEINVERTEDIN";
				fLocal_1751 = 3f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1688 = 0;
			}
		}
	}
	if (iLocal_1689 == 1)
	{
		if (func_3(&iLocal_1723))
		{
			if (func_5(&iLocal_1723) <= 2,5f)
			{
				iLocal_1750 = "GATEKNIFEOUTTER";
				fLocal_1751 = 1,5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1689 = 0;
			}
		}
	}
	if (iLocal_1690 == 1)
	{
		if (func_3(&iLocal_1726))
		{
			if (func_5(&iLocal_1726) <= 2,5f)
			{
				iLocal_1750 = "GATEINVERTEDOUT";
				fLocal_1751 = 2f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1690 = 0;
			}
		}
	}
	if (iLocal_1691 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFELEFT";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1691 = 0;
			}
		}
	}
	if (iLocal_1692 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFELEFTHIT";
				fLocal_1751 = 1,5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1692 = 0;
			}
		}
	}
	if (iLocal_1693 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFELEFTMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1693 = 0;
			}
		}
	}
	if (iLocal_1694 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHT";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1694 = 0;
			}
		}
	}
	if (iLocal_1695 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHTHIT";
				fLocal_1751 = 1,5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1695 = 0;
			}
		}
	}
	if (iLocal_1696 == 1)
	{
		if (func_3(&iLocal_1702))
		{
			if (func_5(&iLocal_1702) <= 2,5f)
			{
				iLocal_1750 = "STUNTKNIFERIGHTMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1696 = 0;
			}
		}
	}
	if (iLocal_1697 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2,5f)
			{
				iLocal_1750 = "STUNTINVERTED";
				fLocal_1751 = 4f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1697 = 0;
			}
		}
	}
	if (iLocal_1698 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2,5f)
			{
				iLocal_1750 = "STUNTINVERTEDHIT";
				fLocal_1751 = 1,5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1698 = 0;
			}
		}
	}
	if (iLocal_1699 == 1)
	{
		if (func_3(&iLocal_1705))
		{
			if (func_5(&iLocal_1705) <= 2,5f)
			{
				iLocal_1750 = "STUNTINVERTEDMISS";
				fLocal_1751 = 5f;
				iLocal_1752 = 1;
			}
			else
			{
				iLocal_1750 = 0;
				fLocal_1751 = -1f;
				iLocal_1752 = 1;
				iLocal_1699 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x43FD
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			if (unk_0xA8D0477084E86A92(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0x617EA99D340A37ED(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0,69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0xAAA8D20859E2D36D(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0x8EE3A848975DDF21(uParam0->f_358[iParam1 /*189*/].f_9, -1, 0))
					{
						unk_0xBB0358802AA14401(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0x77142E6A702D63D1(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam4, int iParam5)//Position - 0x4517
{
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (Local_45 == 1)
		{
			if (!unk_0x191BE1BC8F26F3C1(iParam2, 0))
			{
				unk_0x87A3E70B0AB01608(iParam1, iParam2, vParam3, unk_0x617EA99D340A37ED(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_45 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, vParam3, iParam5);
		}
	}
}

void func_77(var uParam0, vector3 vParam1, var uParam2)//Position - 0x456E
{
	uParam0->f_12 = uParam0->f_12;
	vParam1 = { vParam1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)//Position - 0x458A
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x45FE
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)//Position - 0x460E
{
	if (*uParam0 != 0)
	{
		unk_0x3416C016AC81BB77(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x4628
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1948)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_577(func_578(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		unk_0x88ABD17FCFD44427(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		unk_0xF0FA937EE7A3225B(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x4696
{
	func_83(&(uParam0->f_5));
}

void func_83(int iParam0)//Position - 0x46A6
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

int func_84(int iParam0)//Position - 0x46BE
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x4714
{
	if (bParam1)
	{
		if (Local_45 == 0)
		{
			if (func_3(&iLocal_1714))
			{
				func_89(&iLocal_1714, 3f);
			}
			if (func_3(&iLocal_1708))
			{
				func_89(&iLocal_1708, 3f);
			}
			if (func_3(&iLocal_1702))
			{
				func_89(&iLocal_1702, 3f);
			}
			if (func_3(&iLocal_1711))
			{
				func_89(&iLocal_1711, 3f);
			}
			if (func_3(&iLocal_1705))
			{
				func_89(&iLocal_1705, 3f);
			}
			if (func_3(&iLocal_1717))
			{
				func_89(&iLocal_1717, 3f);
			}
			if (func_3(&iLocal_1720))
			{
				func_89(&iLocal_1720, 3f);
			}
			if (func_3(&iLocal_1723))
			{
				func_89(&iLocal_1723, 3f);
			}
			if (func_3(&iLocal_1726))
			{
				func_89(&iLocal_1726, 3f);
			}
			if (func_3(&iLocal_1729))
			{
				func_89(&iLocal_1729, 3f);
			}
			if (func_3(&iLocal_1732))
			{
				func_89(&iLocal_1732, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1684 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 1:
					iLocal_1685 = 1;
					func_11(&iLocal_1720);
					break;
				
				case 2:
					iLocal_1686 = 1;
					func_11(&iLocal_1717);
					break;
				
				case 3:
					iLocal_1687 = 1;
					func_11(&iLocal_1729);
					break;
				
				case 4:
					iLocal_1688 = 1;
					func_11(&iLocal_1732);
					break;
				
				case 5:
					iLocal_1689 = 1;
					func_11(&iLocal_1723);
					break;
				
				case 6:
					iLocal_1690 = 1;
					func_11(&iLocal_1726);
					break;
				
				case 8:
					iLocal_1691 = 1;
					func_11(&iLocal_1702);
					break;
				
				case 9:
					iLocal_1692 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 10:
					iLocal_1693 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 11:
					iLocal_1694 = 1;
					func_11(&iLocal_1702);
					break;
				
				case 12:
					iLocal_1695 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 13:
					iLocal_1696 = 1;
					func_11(&iLocal_1714);
					break;
				
				case 14:
					iLocal_1697 = 1;
					func_11(&iLocal_1705);
					break;
				
				case 15:
					iLocal_1698 = 1;
					func_11(&iLocal_1711);
					break;
				
				case 16:
					iLocal_1699 = 1;
					func_11(&iLocal_1714);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x493C
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1,5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2,5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1,5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1,5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1,5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x4A68
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)//Position - 0x4A83
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(int iParam0, float fParam1)//Position - 0x4A9F
{
	if (func_3(iParam0))
	{
		func_12(iParam0, (func_5(iParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)//Position - 0x4AC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_577(func_578(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0x88ABD17FCFD44427(uParam0->f_6, iVar0, iVar1, iVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_577(func_578(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0x88ABD17FCFD44427(uParam1->f_6, iVar0, iVar1, iVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(vector3 vParam0, int iParam1, int iParam2)//Position - 0x4B8C
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		fVar2 = unk_0xBE3C4023003180FC(vParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - system::ceil((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_92()//Position - 0x4BF8
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4C02
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_45 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_358(iLocal_1981, 262144))
						{
							func_98("Gate_PK", &iLocal_1980);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 262144);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 524288))
						{
							func_98("Con_PK", &iLocal_1980);
							func_330(&iLocal_1981, 524288);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 1048576))
						{
							func_98("Con_PK", &iLocal_1980);
							func_330(&iLocal_1981, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1980);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!func_358(iLocal_1981, 262144))
						{
							func_98("Gate_PK", &iLocal_1980);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 262144);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 524288))
						{
							func_98("Con_PK", &iLocal_1980);
							func_330(&iLocal_1981, 524288);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 1048576))
						{
							func_98("Con_PK", &iLocal_1980);
							func_330(&iLocal_1981, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1980);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x4D7E0C2794433BDF(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!func_358(iLocal_1981, 32768))
							{
								func_98("Gate_PI", &iLocal_1979);
								iLocal_1981 = 0;
								func_330(&iLocal_1981, 32768);
								return iVar4;
							}
							else if (!func_358(iLocal_1981, 65536))
							{
								func_98("Con_PI", &iLocal_1979);
								func_330(&iLocal_1981, 65536);
								return iVar4;
							}
							else if (!func_358(iLocal_1981, 131072))
							{
								func_98("Con_PI", &iLocal_1979);
								func_330(&iLocal_1981, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1979);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!func_358(iLocal_1981, 4096))
						{
							func_98("Get_Perf", &iLocal_1976);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 4096);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 8192))
						{
							func_98("Con_Perf", &iLocal_1976);
							func_330(&iLocal_1981, 8192);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 16384))
						{
							func_98("Con_Perf", &iLocal_1976);
							func_330(&iLocal_1981, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1976);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_358(iLocal_1981, 64))
						{
							func_98("Gate_Kni", &iLocal_1978);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 64);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 128))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_330(&iLocal_1981, 128);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 256))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_330(&iLocal_1981, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1978);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!func_358(iLocal_1981, 64))
						{
							func_98("Gate_Kni", &iLocal_1978);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 64);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 128))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_330(&iLocal_1981, 128);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 256))
						{
							func_98("Con_Kni", &iLocal_1978);
							func_330(&iLocal_1981, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1978);
							return iVar4;
						}
					}
				}
				else
				{
					unk_0x4D7E0C2794433BDF(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &vVar2, &uVar3);
					if (vVar2.z <= -0,866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!func_358(iLocal_1981, 512))
							{
								func_98("Gate_Inv", &iLocal_1977);
								iLocal_1981 = 0;
								func_330(&iLocal_1981, 512);
								return iVar4;
							}
							else if (!func_358(iLocal_1981, 1024))
							{
								func_98("Con_Inv", &iLocal_1977);
								func_330(&iLocal_1981, 1024);
								return iVar4;
							}
							else if (!func_358(iLocal_1981, 2048))
							{
								func_98("Con_Inv", &iLocal_1977);
								func_330(&iLocal_1981, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1977);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!func_358(iLocal_1981, 8))
						{
							func_98("Gate_Hit", &iLocal_1975);
							iLocal_1981 = 0;
							func_330(&iLocal_1981, 8);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 16))
						{
							func_98("Con_Hit", &iLocal_1975);
							func_330(&iLocal_1981, 16);
							return iVar4;
						}
						else if (!func_358(iLocal_1981, 32))
						{
							func_98("Con_Hit", &iLocal_1975);
							func_330(&iLocal_1981, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1975);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!func_358(iLocal_1981, 1))
					{
						func_98("Gate_Miss", &iLocal_1974);
						iLocal_1981 = 0;
						func_330(&iLocal_1981, 1);
						return iVar4;
					}
					else if (!func_358(iLocal_1981, 2))
					{
						func_98("Con_Miss", &iLocal_1974);
						func_330(&iLocal_1981, 2);
						return iVar4;
					}
					else if (!func_358(iLocal_1981, 4))
					{
						func_98("Con_Miss", &iLocal_1974);
						func_330(&iLocal_1981, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1974);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!func_358(iLocal_1981, 1))
				{
					func_98("Gate_Miss", &iLocal_1974);
					iLocal_1981 = 0;
					func_330(&iLocal_1981, 1);
					return iVar4;
				}
				else if (!func_358(iLocal_1981, 2))
				{
					func_98("Con_Miss", &iLocal_1974);
					func_330(&iLocal_1981, 2);
					return iVar4;
				}
				else if (!func_358(iLocal_1981, 4))
				{
					func_98("Con_Miss", &iLocal_1974);
					func_330(&iLocal_1981, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1974);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x5567
{
	float fVar0;
	vector3 vVar1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x0C88267282FD588F(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			vVar1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0xB3328BA8976B416C(iParam2, 1), vVar1) - func_95(*uParam0, vVar1)) > 15f)
			{
				unk_0x4AFBCBFDE748D4E0(-1, sLocal_1970, "HUD_MINI_GAME_SOUNDSET", true);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(vector3 vParam0, vector3 vParam1)//Position - 0x55EA
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_96(vector3 vParam0)//Position - 0x560B
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

bool func_97(int iParam0)//Position - 0x564A
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	unk_0x4D7E0C2794433BDF(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0xE97272C977DEADD3(vVar2.z) > 0,342f)
	{
		return 0;
	}
	return vVar1.z < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x5689
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_358(*uParam1, 1))
	{
		if (!iLocal_1683)
		{
			iLocal_1683 = 1;
			func_330(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1683 = 0;
			if (unk_0x74C475EB8E73D398(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_358(*uParam1, 1))
	{
		if (!func_358(*uParam1, 2))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_330(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x74C475EB8E73D398(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_358(*uParam1, 2))
	{
		if (!func_358(*uParam1, 4))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_330(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x74C475EB8E73D398(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_358(*uParam1, 4))
	{
		if (!func_358(*uParam1, 8))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_330(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x74C475EB8E73D398(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_358(*uParam1, 8))
	{
		if (!func_358(*uParam1, 16))
		{
			if (!iLocal_1683)
			{
				iLocal_1683 = 1;
				func_330(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1683 = 0;
				if (unk_0x74C475EB8E73D398(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x5814
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	unk_0x4D7E0C2794433BDF(iParam0, &uVar0, &vVar1, &vVar2, &uVar3);
	if (unk_0xE97272C977DEADD3(vVar2.z) > 0,342f)
	{
		return 0;
	}
	return vVar1.z > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x5853
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vVar0 = { *uParam0 };
	unk_0x4D7E0C2794433BDF(iParam1, &vVar4, &vVar2, &vVar3, &vVar1);
	vVar5 = { vVar0 - vVar1 };
	fVar6 = unk_0xE97272C977DEADD3(func_95(vVar5, vVar4));
	fVar7 = unk_0xE97272C977DEADD3(func_95(vVar5, vVar3));
	fVar8 = unk_0xE97272C977DEADD3(func_95(vVar5, vVar2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6,5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == unk_0xFC1458A37D98B502())
			{
				func_194(&uLocal_1934, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == unk_0xFC1458A37D98B502())
			{
				func_194(&uLocal_1934, 0);
			}
			unk_0x4AFBCBFDE748D4E0(-1, sLocal_1969, "HUD_MINI_GAME_SOUNDSET", true);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0xFC1458A37D98B502())
			{
				func_194(&uLocal_1934, 0);
			}
			unk_0x4AFBCBFDE748D4E0(-1, sLocal_1969, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x5946
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x191BE1BC8F26F3C1(Var2.f_8, 0))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar3 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar4 = func_102(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

float func_102(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x5A55
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), vParam1, bParam2);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5A7F
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_299(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)//Position - 0x5AB4
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x5ACA
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_175(uParam0);
			func_249();
			func_259(&(Local_45.f_119), 0, 0, 1, 1);
			func_258(&(Local_45.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_258(&(Local_45.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_252(1);
			unk_0x8810DC630928B398("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_169(&(Local_45.f_321), &(Local_45.f_327), &(uParam0->f_17), cLocal_1946, sLocal_1947, uParam0, 78))
			{
				iLocal_2061 = 0;
				if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x4BEFCD5DAE410A90(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_256("SPR_HELP_DAMG", 0, 0))
				{
					unk_0x166954C5648772B6("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_45.f_321), 1);
				if (*uParam0)
				{
					func_162(0, 0);
					func_161(0, 0);
					func_160();
					if (func_256("SPR_RETR_DES", 0, 0))
					{
						unk_0x166954C5648772B6("SPR_RETR_DES");
					}
					func_252(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_162(0, 0);
					func_161(0, 0);
					func_160();
					func_89(&iLocal_1949, 10f);
					func_252(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_152(&(Local_45.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0xE8C126B7ADBB9D63(2, 201))
			{
				func_162(0, 0);
				func_161(0, 0);
				func_160();
				iLocal_2066 = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				if (func_256("SPR_RETR_DES", 0, 0))
				{
					unk_0x166954C5648772B6("SPR_RETR_DES");
				}
				func_252(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 202))
			{
				func_162(0, 0);
				func_161(0, 0);
				func_160();
				iLocal_2066 = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iLocal_2066, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
				func_89(&iLocal_1949, 10f);
				func_252(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					func_259(&(Local_45.f_119), 0, 0, 1, 1);
					func_258(&(Local_45.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_258(&(Local_45.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0x4BEFCD5DAE410A90(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&iLocal_1949) <= 10f)
			{
				if (bParam2)
				{
					unk_0x553231E7FC3C570D(9);
					unk_0x553231E7FC3C570D(7);
					unk_0x4FB260623DD93924(0, 99, 1);
					unk_0x4FB260623DD93924(0, 100, 1);
					func_152(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0xE8C126B7ADBB9D63(2, 201))
					{
						*uParam0 = 1;
						iLocal_2066 = unk_0xD0CA83418A236CB4();
						unk_0x4AFBCBFDE748D4E0(iLocal_2066, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
					else if (unk_0xE8C126B7ADBB9D63(2, 202))
					{
						*uParam0 = 0;
						func_89(&iLocal_1949, 10f);
						iLocal_2066 = unk_0xD0CA83418A236CB4();
						unk_0x4AFBCBFDE748D4E0(iLocal_2066, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x84CDD933AFA470D2();
				sLocal_1947 = "SPR_RETR_DES";
				func_66(&(Local_45.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_354(500))
			{
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_135())
			{
				if (unk_0x3E9CABD07B829173())
				{
					func_175(uParam0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					if (unk_0x6ADD12BF4D6D2587(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0xD91B0600CD72C5F7(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0xE01CE1EBCD7EE551(uParam0->f_358[0 /*189*/].f_9, unk_0xC1643F33913289BD(uParam0->f_358[0 /*189*/].f_9), 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_133(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						if (Local_45 == 0)
						{
							unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_131(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_130(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0xBB9A3C553EECB180(0f);
				func_11(&iLocal_2057);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_162(0, 0);
			func_161(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_45.f_3, Local_45.f_6, 0f);
			system::settimera(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0x40189ECE75CF9724() || unk_0x64D098EABB2F6F13())
			{
				uParam0->f_1 = 1;
				func_11(&iLocal_2057);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_574(500))
				{
					unk_0x81BCCFFE3F019672();
					if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[0 /*189*/].f_9, 0))
					{
						unk_0xBB0358802AA14401(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_45 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0x40189ECE75CF9724())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&iLocal_2057))
					{
						if (func_107(&iLocal_2057) >= 3f)
						{
							unk_0x81BCCFFE3F019672();
						}
					}
					else
					{
						func_10(&iLocal_2057);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!unk_0x191BE1BC8F26F3C1(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&iLocal_1949);
						sLocal_1947 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_175(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x619C
{
	if (uParam0->f_22 != 0)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), uParam0->f_9, 0))
			{
				if (unk_0x90D5DFB054818BA7(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0x20D66D71CF476CDB(uParam0->f_9) < 3f || unk_0x9A3C64A7BB4588B3(uParam0->f_9))
						{
							if (unk_0xF69AD934E7664A7C(uParam0->f_9) && unk_0x20D66D71CF476CDB(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0xB6579D6FEB63269C(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0xB6579D6FEB63269C(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0xB6579D6FEB63269C(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0xB6579D6FEB63269C(uParam0->f_9, 3, 10000))
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

float func_107(int iParam0)//Position - 0x626B
{
	if (func_3(iParam0))
	{
		if (func_7(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x62A7
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		if (unk_0x849A8CFD71854E02(uParam0->f_22))
		{
			vVar0 = { unk_0xDB824D597B53CC40(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, vVar0.x, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x62E3
{
	vector3 vVar0;
	bool bVar1;
	float fVar2;
	
	unk_0x4FB260623DD93924(0, 75, 1);
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	if (unk_0x90D5DFB054818BA7(iParam0) < fParam1)
	{
		unk_0xFB2E9855F95E3BD3(iParam0, fParam1);
	}
	vVar0 = { unk_0xDB824D597B53CC40(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (unk_0x46C19C2753391FBF() * 45f);
		if (vVar0.x < -fVar2)
		{
			bVar1 = true;
			vVar0.x = (vVar0.x + fVar2);
		}
		else if (vVar0.x < fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar2)
		{
			bVar1 = true;
			vVar0.x = (vVar0.x - fVar2);
		}
		else if (vVar0.x > fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar2)
		{
			bVar1 = true;
			vVar0.y = (vVar0.y + fVar2);
		}
		else if (vVar0.y < fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
		else if (vVar0.y > fVar2)
		{
			bVar1 = true;
			vVar0.y = (vVar0.y - fVar2);
		}
		else if (vVar0.y > fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar1 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar1 = true;
			vVar0.y = fParam4;
		}
	}
	if (bVar1)
	{
		unk_0x59AF3B40AE222194(iParam0, vVar0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)//Position - 0x6415
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_9))
		{
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0) || !unk_0xB8DE76287EDC4957(uParam0->f_9, 0))
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x957CEE967C939968(uParam0->f_8);
					unk_0xDD29FF4BAB8AFF9C(uParam0->f_9, true, 1);
					unk_0xC91FE17AD7353B70(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xBD8D47FDC6902B2D(uParam0->f_8, uParam0->f_16, 1, false, 0, 1);
				}
				if (unk_0xA8D0477084E86A92(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0xDD29FF4BAB8AFF9C(uParam0->f_9, true, 1);
					unk_0xC91FE17AD7353B70(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		unk_0xE01CE1EBCD7EE551(uParam0->f_9, 1000, 0);
		unk_0xB3C8DB09F4A4DE89(uParam0->f_9);
		unk_0xB38E13EF2EC6F0E9(uParam0->f_9, 1000f);
		unk_0xBD8D47FDC6902B2D(uParam0->f_9, uParam0->f_16, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(uParam0->f_9, uParam0->f_19);
		unk_0xACE486395AA1867D(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0xEA60F3B426BB095B(joaat("stunt"), uParam0->f_16, uParam0->f_19, true, true, false);
		if (unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x4BEFCD5DAE410A90(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 4);
		}
		unk_0x438D30A195B65156(uParam0->f_9, true);
		func_111(uParam0->f_9, &(Local_45.f_243), 0, 1);
	}
	unk_0x7325D4860DD6C1C6(uParam0->f_9, 0);
	unk_0xA15269351F50F113(uParam0->f_9, true, true, 0);
	unk_0xFDAFE1354D61AE41(uParam0->f_9);
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0))
	{
		if (!unk_0xAAA8D20859E2D36D(uParam0->f_8, uParam0->f_9))
		{
			unk_0xBB0358802AA14401(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0x9761C10D57B68069(uParam0->f_9))
	{
		unk_0xDD29FF4BAB8AFF9C(uParam0->f_9, true, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0xE6B7D51E977A41B6(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0xFCCA919ED2F54615(uParam0->f_9, 0);
		Local_45.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6615
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_122(iParam0))
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
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_121(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_121(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_121(iVar1 + 1));
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
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_120(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_119())
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
						func_117(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_69);
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
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_121(iVar2 + 1)))
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

int func_112(int iParam0, var uParam1, var uParam2)//Position - 0x6B65
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
	if (func_116(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, true);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_113(int iParam0)//Position - 0x6CE3
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

void func_114(var uParam0)//Position - 0x6DBF
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

int func_115(int iParam0, int iParam1)//Position - 0x6DFF
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

int func_116(int iParam0, int iParam1)//Position - 0x6EE4
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

void func_117(int iParam0, int iParam1)//Position - 0x7157
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

int func_118(int iParam0)//Position - 0x71BC
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

bool func_119()//Position - 0x71DC
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_120(int iParam0)//Position - 0x71ED
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

int func_121(int iParam0)//Position - 0x7238
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

int func_122(int iParam0)//Position - 0x72E8
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_128(unk_0x9EB17624F44A8DA4(), -1))
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
	if (func_124(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_123(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x736F
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

int func_124(int iParam0)//Position - 0x739E
{
	if (func_127(iParam0) == 233)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)//Position - 0x73BB
{
	if (func_126(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_126(int iParam0, int iParam1)//Position - 0x73DE
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x7419
{
	if (func_126(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)//Position - 0x743C
{
	int iVar0;
	
	if (func_129(iParam0, 1, 1))
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

int func_129(int iParam0, bool bParam1, bool bParam2)//Position - 0x7489
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

void func_130(vector3 vParam0, int iParam1, vector3 vParam2, bool bParam3)//Position - 0x74D3
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (bParam3 && Local_45.f_10 == 0)
		{
			unk_0xBD8D47FDC6902B2D(iParam1, 1705,039f, 3251,13f, 40,0016f, 1, false, 0, 1);
		}
		vVar6 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		unk_0x80087D63083C560C(vVar6);
		unk_0x7367FB97975F1E29(vVar6, &fVar5, 0, 0);
		vVar3 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		if (bParam3)
		{
			vVar4 = { vParam0 - vParam2 };
		}
		else
		{
			vVar4 = { vParam2 - vVar3 };
		}
		fVar0 = unk_0xA67DD8488EBA5F6D(vVar4.x, vVar4.y);
		fVar1 = (unk_0xA67DD8488EBA5F6D(vVar4.x, vVar4.z) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - unk_0xE97272C977DEADD3(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0xE97272C977DEADD3(fVar1));
		}
		if (unk_0xE97272C977DEADD3((vVar6.z - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			vVar6.z = (fVar5 + 25f);
			unk_0xBD8D47FDC6902B2D(iParam1, vVar6, 1, false, 0, 1);
		}
		unk_0xEDC33A771FAEB393(iParam1, true);
		vVar2 = { unk_0xDB824D597B53CC40(iParam1, 2) };
		vVar2.x = fVar1;
		vVar2.z = fVar0;
		unk_0x59AF3B40AE222194(iParam1, vVar2, 2, 1);
		unk_0xEDC33A771FAEB393(iParam1, false);
		unk_0xDCBF71199890F355(vVar6, unk_0xCE3B2111021F7234(iParam1), 500f, 0);
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)//Position - 0x766A
{
	func_132(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_132(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7689
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x191BE1BC8F26F3C1(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	vVar0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	fVar1 = unk_0xA67DD8488EBA5F6D(vVar0.x, vVar0.y);
	fVar2 = 0f;
	if (unk_0x125CDF69FA6EF560(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 0f;
	}
	else if (unk_0xC1514CFCEC68CA4A(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 25f;
	}
	else if (unk_0x849A8CFD71854E02(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], fVar1, fVar2);
}

int func_133(var uParam0, bool bParam1)//Position - 0x7795
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_134(var uParam0)//Position - 0x77BB
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0))
	{
		unk_0xE01CE1EBCD7EE551(uParam0->f_8, 1000, 0);
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
		{
			if (!unk_0xAAA8D20859E2D36D(uParam0->f_8, uParam0->f_9))
			{
				unk_0xBB0358802AA14401(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0xBD8D47FDC6902B2D(uParam0->f_8, uParam0->f_16, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0x00D1A9572426E8DD(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, true);
		if (unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0xAC992EFAD62C33BF(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, true);
		if (unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0x9761C10D57B68069(uParam0->f_8))
		{
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_8, true, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x296D39391436DC64(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_135()//Position - 0x78D5
{
	if (!unk_0xC80D31E4B587871C(iLocal_41, 0) && !unk_0xC80D31E4B587871C(iLocal_41, 1))
	{
		system::settimera(0);
		func_162(1, 0);
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
		if (!unk_0xC80D31E4B587871C(iLocal_41, 1))
		{
			func_161(1, 0);
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
			else if (iLocal_42 == 0)
			{
				iLocal_42 = unk_0x53C562FD2B9E3AB0() + 1000;
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				func_151(0, 2, 1);
				func_143(1, 1, 1, 0);
				func_137(1);
				unk_0x6CE951479F1EADC6(0);
				unk_0x37A5AD3D447F2796(0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				}
				func_162(0, 0);
				func_136(0);
			}
			else if (unk_0x53C562FD2B9E3AB0() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136(int iParam0)//Position - 0x7A19
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_41, 3))
			{
				unk_0x6ACDC20166AA3FAC(1);
				unk_0x872F1C1F8587CCC7(&iLocal_41, 3);
			}
		}
		else if (unk_0xC80D31E4B587871C(iLocal_41, 3))
		{
			unk_0x6ACDC20166AA3FAC(0);
			unk_0x0EE72DB1CD8A3B86(&iLocal_41, 3);
		}
	}
}

void func_137(bool bParam0)//Position - 0x7A60
{
	if (bParam0)
	{
		func_142();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_141(0))
		{
			func_138(0);
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

void func_138(int iParam0)//Position - 0x7AC3
{
	if (Global_14615)
	{
		func_140(0, 0);
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
	if (!func_139())
	{
		Global_14453.f_1 = 3;
	}
}

int func_139()//Position - 0x7B33
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_140(bool bParam0, bool bParam1)//Position - 0x7B5A
{
	if (bParam0)
	{
		if (func_141(0))
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

int func_141(int iParam0)//Position - 0x7BCE
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

void func_142()//Position - 0x7C28
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_143(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7C51
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_150(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_139())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_149(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_150(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_149(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_147(unk_0x9EB17624F44A8DA4())) && !func_145(unk_0x9EB17624F44A8DA4(), 0)) && !func_144())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_147(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_144()//Position - 0x7D6A
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_145(int iParam0, int iParam1)//Position - 0x7D87
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_146(-1, 0) == 8;
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

int func_146(int iParam0, bool bParam1)//Position - 0x7DD2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_147(int iParam0)//Position - 0x7E13
{
	if (func_145(iParam0, 0))
	{
		return 1;
	}
	if (func_148())
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

bool func_148()//Position - 0x7E55
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_149(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x7E66
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

void func_150(int iParam0)//Position - 0x7E99
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

void func_151(int iParam0, int iParam1, int iParam2)//Position - 0x7EBC
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_41, 2);
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
		if (unk_0xC80D31E4B587871C(iLocal_41, 2) || iParam2)
		{
			if (!unk_0x3A711520F83BAE98())
			{
				unk_0x41390D2B41D5502D(1f);
			}
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_41, 2);
	}
}

void func_152(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x7F1D
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
	if (!func_159(uParam0))
	{
		return;
	}
	unk_0x2F18DFDBFA4AA0E4();
	unk_0x5A66A86A47AC3B57(iParam2);
	if (!func_158(uParam0->f_1, 256) || (func_158(uParam0->f_1, 8192) && unk_0x8CFF76532FEF34D4(2)))
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
			unk_0x1869584A8A72FEDD(func_158(uParam0->f_1, 4096));
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
							func_157(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xAB019B170BF1309C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_156(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (func_158(uParam0->f_1, 4096))
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
		fVar8 = func_155(bParam4, func_155(func_158(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x9499D7329FB840A2(fVar8);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(80f);
		unk_0x271AA5469AF471B3();
		func_154(&(uParam0->f_1), 256);
		func_153(&(uParam0->f_1), 128);
	}
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 0, 0);
}

void func_153(var uParam0, int iParam1)//Position - 0x81DE
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_154(var uParam0, int iParam1)//Position - 0x81F3
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_155(bool bParam0, float fParam1, float fParam2)//Position - 0x8204
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_156(char* sParam0)//Position - 0x821B
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_157(char* sParam0)//Position - 0x822D
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_158(var uParam0, int iParam1)//Position - 0x823B
{
	return (uParam0 && iParam1) != 0;
}

int func_159(var uParam0)//Position - 0x824A
{
	if (*uParam0 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			func_154(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_160()//Position - 0x8271
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_143(0, 1, 1, 0);
	func_137(1);
}

void func_161(int iParam0, int iParam1)//Position - 0x828C
{
	if (iParam0 == 1)
	{
		func_162(0, 0);
		unk_0xA91E83FF512776B6("DeathFailOut", 0, 0);
		unk_0x872F1C1F8587CCC7(&iLocal_41, 1);
		func_151(1, 2, 0);
		unk_0x2F22BABDCF836C82(2);
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_41, 1) || iParam1)
		{
			unk_0x704F5ADD5B29DB63("DeathFailOut");
			func_151(0, 2, 1);
			unk_0x2F22BABDCF836C82(0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_41, 1);
	}
}

void func_162(int iParam0, int iParam1)//Position - 0x82ED
{
	char* sVar0;
	
	switch (func_163())
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
		if (!unk_0xC80D31E4B587871C(iLocal_41, 0) || iParam1)
		{
			unk_0xA91E83FF512776B6(sVar0, 0, 0);
			unk_0x872F1C1F8587CCC7(&iLocal_41, 0);
			func_151(1, 1, 0);
			unk_0x2F22BABDCF836C82(1);
		}
	}
	else
	{
		if (unk_0xC80D31E4B587871C(iLocal_41, 0) || iParam1)
		{
			unk_0x704F5ADD5B29DB63(sVar0);
			func_151(0, 1, 1);
			unk_0x2F22BABDCF836C82(0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_41, 0);
	}
}

int func_163()//Position - 0x838D
{
	func_164();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_164()//Position - 0x83A6
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_168(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_167(unk_0xFC1458A37D98B502());
			if (func_166(iVar0) && (!func_165(14) || Global_103506))
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

bool func_165(int iParam0)//Position - 0x84A3
{
	return Global_35861 == iParam0;
}

bool func_166(int iParam0)//Position - 0x84B1
{
	return iParam0 < 3;
}

int func_167(int iParam0)//Position - 0x84BD
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_168(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_168(int iParam0)//Position - 0x84FA
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

int func_169(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x8524
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xE859EF37EA7362D3("DEATH_SCENE");
			unk_0x4AFBCBFDE748D4E0(-1, "ScreenFlash", "WastedSounds", true);
			func_10(&(uParam0->f_1));
			func_160();
			func_174(uParam1, (0,15f * 0,075f), 0,5f);
			unk_0x7635EA803CE40962(true);
			break;
		
		case 1:
			if (func_135() || unk_0x3E9CABD07B829173())
			{
				*uParam0 = 2;
			}
			if (!func_358(uParam0->f_4, 4))
			{
				if (unk_0x1CF95440F1970B4F("OFFMISSION_WASTED", false, -1))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Bed", "WastedSounds", true);
					func_330(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(system::timera()) > (1500f * 0,2f))
			{
				if (!func_358(uParam0->f_4, 2))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "TextHit", "WastedSounds", true);
					func_330(&(uParam0->f_4), 2);
				}
				func_171(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_171(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_162(0, 1);
				func_161(0, 1);
				func_160();
				if (*uParam5)
				{
					unk_0x6FC90B7B2FA9328D(1);
				}
				else if (!uParam0->f_5)
				{
					func_170(0);
				}
				unk_0x7635EA803CE40962(false);
				unk_0x781BE21C7452AB1B(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xC623E2691C004001(1);
				func_162(0, 1);
				func_161(0, 1);
				unk_0xE02E32C69260FBB7("DEATH_SCENE");
				unk_0x7635EA803CE40962(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7635EA803CE40962(false);
			return 1;
			break;
	}
	return 0;
}

void func_170(bool bParam0)//Position - 0x86E5
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

int func_171(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x872B
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
				unk_0x7635EA803CE40962(true);
			}
			unk_0x41390D2B41D5502D(0,2f);
			if (func_158(iParam5, 4))
			{
				if (unk_0x1CF95440F1970B4F("generic_failed", false, -1))
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
			func_156(sParam3);
			unk_0xD07D5CD276368D36(100);
			unk_0x1869584A8A72FEDD(true);
			unk_0x8E8D3D52EE7CEFD3();
			if (func_158(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "TRANSITION_UP");
					unk_0x9499D7329FB840A2(uParam1->f_134);
					unk_0x271AA5469AF471B3();
					uParam1->f_136 = 1;
				}
			}
			if (!func_158(iParam5, 1))
			{
				unk_0x0DD783ABAB85FEE2(0);
			}
			func_259(&(uParam1->f_10), 0, 1, 1, 1);
			func_258(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_258(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_158(iParam5, 4))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_158(iParam5, 8))
			{
				switch (func_163())
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
			if (!func_3(&(uParam1->f_1)))
			{
				func_359(&(uParam1->f_1));
			}
			if (func_158(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_359(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x2F18DFDBFA4AA0E4();
			if (func_158(iParam5, 32))
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
			func_173(uParam0, 0, 0);
			if (!func_158(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x3E9CABD07B829173()))
			{
				func_152(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x15F5D3F996CB934F();
				if (unk_0x58F436C557A0FD7A(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x4AFBCBFDE748D4E0(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_172(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x58F436C557A0FD7A(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_172(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_158(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_158(iParam5, 1))
					{
						unk_0x46164D0CA90153BF(0);
					}
					func_172(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_173(uParam0, 0, 0);
			unk_0x41390D2B41D5502D(1f);
			if (uParam1->f_138 || !((unk_0x74C475EB8E73D398("stunt_plane_races", unk_0x436287B7DB306165()) || unk_0x74C475EB8E73D398("pilot_school", unk_0x436287B7DB306165())) || (unk_0x74C475EB8E73D398("bj", unk_0x436287B7DB306165()) && unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))))
			{
				unk_0x59C3AC31C7544A28(2500);
			}
			if (func_158(iParam5, 64) && uParam1->f_138)
			{
				unk_0xAE83ED4C9081AE6F(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x7635EA803CE40962(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0,1f)
			{
				func_173(uParam0, 0, 0);
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

void func_172(int iParam0)//Position - 0x8B0E
{
	if (*iParam0 != 0)
	{
		unk_0xA68F7B004463AB6F(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

int func_173(var uParam0, bool bParam1, bool bParam2)//Position - 0x8B31
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
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
	if (func_5(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_174(var uParam0, float fParam1, float fParam2)//Position - 0x8BC3
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_172(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_175(var uParam0)//Position - 0x8C13
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_176(int iParam0, bool bParam1)//Position - 0x8C38
{
	switch (iLocal_1682)
	{
		case 0:
			func_25();
			func_193();
			func_189();
			iLocal_1682 = 1;
			break;
		
		case 1:
			if (func_188())
			{
				iLocal_1682 = 2;
			}
			break;
		
		case 2:
			func_177(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1682 = 0;
			}
			break;
	}
}

void func_177(int iParam0)//Position - 0x8C96
{
	switch (Local_45.f_10)
	{
		case 3:
			func_187(iParam0);
			func_186(iParam0);
			break;
		
		case 0:
			func_185(iParam0);
			func_184(iParam0);
			break;
		
		case 1:
			func_183(iParam0);
			func_181(iParam0);
			break;
		
		case 2:
			func_180(iParam0);
			func_179(iParam0);
			break;
		
		case 4:
			func_178(iParam0);
			break;
	}
}

void func_178(int iParam0)//Position - 0x8D0A
{
	if (iParam0 == 5)
	{
		if (!func_358(uLocal_1758, 1))
		{
			func_330(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_358(uLocal_1758, 2))
		{
			func_330(&uLocal_1758, 2);
		}
	}
}

void func_179(int iParam0)//Position - 0x8D47
{
	if (iParam0 >= 4)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[0]) && !func_358(uLocal_1748, 1))
		{
			iLocal_1746[0] = unk_0xEA60F3B426BB095B(joaat("hauler"), -449,6041f, -2271,693f, 6,6086f, 267,5199f, true, true, false);
			iLocal_1746[1] = unk_0xEA60F3B426BB095B(joaat("tanker"), -449,6041f, -2271,693f, 6,6086f, 267,5199f, true, true, false);
			unk_0x7A23B5BE4EB8A66F(iLocal_1746[0], iLocal_1746[1], 1065353216);
			iLocal_1747[0] = unk_0x00D1A9572426E8DD(iLocal_1746[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			func_330(&uLocal_1748, 1);
		}
		if (unk_0xC316B5E3E7ACF515("SPR_Fluff_01"))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_1747[0], 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_1747[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0x84EF7D14703E1230(iLocal_1747[0], iLocal_1746[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0x617EA99D340A37ED(iLocal_1746[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_180(int iParam0)//Position - 0x8E63
{
	if (iParam0 == 4)
	{
		if (!func_358(uLocal_1758, 1))
		{
			func_330(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_358(uLocal_1758, 2))
		{
			func_330(&uLocal_1758, 2);
		}
	}
}

void func_181(int iParam0)//Position - 0x8EA0
{
	if (iParam0 >= 1)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[0]))
		{
			if (!func_358(uLocal_1748, 1))
			{
				if (func_182(&iLocal_1745))
				{
					iLocal_1746[0] = unk_0xEA60F3B426BB095B(joaat("sanchez"), -2586,901f, 386,4225f, 208,0505f, 349,0836f, true, true, false);
					func_330(&uLocal_1748, 1);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1746[0]))
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_1747[0]))
			{
				if (!func_358(uLocal_1748, 2))
				{
					iLocal_1747[0] = unk_0x00D1A9572426E8DD(iLocal_1746[0], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_330(&uLocal_1748, 2);
				}
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[0]) && !unk_0x6ADD12BF4D6D2587(iLocal_1747[0]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_1747[0], 0))
			{
				if (!unk_0x0C88267282FD588F(iLocal_1746[0], -2530,873f, 608,701f, 238,9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_1747[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x87A3E70B0AB01608(iLocal_1747[0], iLocal_1746[0], -2530,873f, 608,701f, 238,9111f, unk_0x617EA99D340A37ED(iLocal_1746[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[1]))
		{
			if (!func_358(uLocal_1749, 1))
			{
				if (func_182(&iLocal_1745))
				{
					iLocal_1746[1] = unk_0xEA60F3B426BB095B(joaat("sanchez"), -2582,93f, 384,918f, 208,5764f, 336,8248f, true, true, false);
					func_330(&uLocal_1749, 1);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1746[1]))
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_1747[1]))
			{
				if (!func_358(uLocal_1749, 2))
				{
					iLocal_1747[1] = unk_0x00D1A9572426E8DD(iLocal_1746[1], 4, joaat("a_m_y_motox_01"), -1, 1, true);
					func_330(&uLocal_1749, 2);
				}
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[1]) && !unk_0x6ADD12BF4D6D2587(iLocal_1747[1]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[1], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_1747[1], 0))
			{
				if (!unk_0x0C88267282FD588F(iLocal_1746[1], -2527,712f, 609,6833f, 239,2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_1747[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x87A3E70B0AB01608(iLocal_1747[1], iLocal_1746[1], -2527,712f, 609,6833f, 239,2568f, unk_0x617EA99D340A37ED(iLocal_1746[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_182(int iParam0)//Position - 0x9144
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0x9A0B2ED5055D3F0B((*iParam0)[iVar0]))
			{
				if (!unk_0x9A0B2ED5055D3F0B((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_183(int iParam0)//Position - 0x918B
{
	if (iParam0 == 9)
	{
		if (!func_358(uLocal_1758, 1))
		{
			func_330(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_358(uLocal_1758, 2))
		{
			func_330(&uLocal_1758, 2);
		}
	}
}

void func_184(int iParam0)//Position - 0x91C9
{
	if (iParam0 == 6)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[0]) && !func_358(uLocal_1748, 1))
		{
			iLocal_1746[0] = unk_0xEA60F3B426BB095B(joaat("jetmax"), -1429,102f, 2602,645f, -1,0709f, 85,2614f, true, true, false);
			iLocal_1747[0] = unk_0x00D1A9572426E8DD(iLocal_1746[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, true);
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_1747[0], 0))
			{
				if (!unk_0x0C88267282FD588F(iLocal_1746[0], -1552,281f, 2641,609f, -0,8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_1747[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0x2931C350CED41AD3(iLocal_1747[0], iLocal_1746[0], -1552,281f, 2641,609f, -0,8283f, 4, unk_0x617EA99D340A37ED(iLocal_1746[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_330(&uLocal_1748, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_358(uLocal_1748, 1))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1747[0], 0))
			{
				unk_0x68433819717660CF(&(iLocal_1747[0]));
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_1746[0]));
			}
		}
	}
}

void func_185(int iParam0)//Position - 0x930E
{
	if (iParam0 == 7)
	{
		if (!func_358(uLocal_1758, 1))
		{
			func_330(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_358(uLocal_1758, 2))
		{
			func_330(&uLocal_1758, 2);
		}
	}
}

void func_186(int iParam0)//Position - 0x934B
{
	if (!func_358(uLocal_1748, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x0840F461D7BD8859(101, "SPRStuntAF"))
			{
				unk_0x80087D63083C560C(-943,8105f, -3173,692f, 12,9445f);
				if (!unk_0x6ADD12BF4D6D2587(iLocal_1746[0]))
				{
					iLocal_1746[0] = unk_0xEA60F3B426BB095B(joaat("jet"), -943,8105f, -3173,692f, 12,9445f, 60,537f, true, true, false);
					unk_0xACE486395AA1867D(iLocal_1746[0], 1084227584);
					unk_0xA15269351F50F113(iLocal_1746[0], true, true, 0);
					if (Local_45 == 0)
					{
						unk_0xFDAFE1354D61AE41(iLocal_1746[0]);
					}
					iLocal_1747[0] = unk_0x00D1A9572426E8DD(iLocal_1746[0], 4, joaat("s_m_m_highsec_01"), -1, 1, true);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0))
				{
					if (unk_0x0C88267282FD588F(iLocal_1746[0], -943,8105f, -3173,692f, 12,9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!unk_0x8DDE799D31A3D099(iLocal_1746[0]))
						{
							unk_0x8D7ABC97ED508270(iLocal_1746[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0x8DDE799D31A3D099(iLocal_1746[0]))
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_1747[0], 0))
						{
							if (!unk_0x78F50AA8F955BEFC(iLocal_1747[0], -1817882002) == 1)
							{
								unk_0x87A3E70B0AB01608(iLocal_1747[0], iLocal_1746[0], -6793,876f, -557,0385f, 781,0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_1746[0]))
			{
				unk_0x7674774BB9279265(iLocal_1746[0]);
			}
			else
			{
				unk_0xC91FE17AD7353B70(&(iLocal_1746[0]));
				func_330(&uLocal_1748, 1);
			}
		}
	}
	else if (!unk_0x191BE1BC8F26F3C1(iLocal_1746[0], 0))
	{
		unk_0x80087D63083C560C(unk_0xB3328BA8976B416C(iLocal_1746[0], 1));
	}
}

void func_187(int iParam0)//Position - 0x951F
{
	if (iParam0 == 6)
	{
		if (!func_358(uLocal_1758, 1))
		{
			func_330(&uLocal_1758, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_358(uLocal_1758, 2))
		{
			func_330(&uLocal_1758, 2);
		}
	}
}

int func_188()//Position - 0x955C
{
	switch (Local_45.f_10)
	{
		case 3:
			if (func_182(&iLocal_1745) && unk_0x0840F461D7BD8859(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_182(&iLocal_1745))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_182(&iLocal_1745))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_182(&iLocal_1745) && unk_0xC316B5E3E7ACF515("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_189()//Position - 0x960B
{
	switch (Local_45.f_10)
	{
		case 3:
			func_191(&iLocal_1745, joaat("jet"));
			func_191(&iLocal_1745, joaat("s_m_m_highsec_01"));
			unk_0x0D9525F20FB71C52(101, "SPRStuntAF");
			break;
		
		case 0:
			func_191(&iLocal_1745, joaat("jetmax"));
			func_191(&iLocal_1745, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_191(&iLocal_1745, joaat("sanchez"));
			func_191(&iLocal_1745, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_191(&iLocal_1745, joaat("hauler"));
			func_191(&iLocal_1745, joaat("tanker"));
			func_191(&iLocal_1745, joaat("s_m_m_dockwork_01"));
			unk_0x307EAE14C924E2E7("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_190(&iLocal_1745);
}

void func_190(int iParam0)//Position - 0x96D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0x6FF834D85E2DD4C6((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_191(int iParam0, int iParam1)//Position - 0x9707
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_192(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_192(var uParam0)//Position - 0x9764
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_193()//Position - 0x9790
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_358(uLocal_1758, iVar0))
		{
			func_356(&uLocal_1758, iVar0);
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1)//Position - 0x97BF
{
	func_195(uParam0, iParam1, 0);
}

void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x97D0
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
		if (func_196(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_196(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_196(char* sParam0)//Position - 0x98AD
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_197(var uParam0)//Position - 0x98C0
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = system::vdist(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_198());
		if (!unk_0xB774D40D7819292F(iLocal_1968))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), func_198()) <= ((fVar0 * 1,5f) * (fVar0 * 1,5f)))
			{
				iLocal_1968 = unk_0xC167CBCBE7230263(func_198(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_198(), 2000f, 12, 127);
			}
		}
		else if (!system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), func_198()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_249();
		}
	}
}

Vector3 func_198()//Position - 0x9970
{
	switch (Local_45.f_10)
	{
		case 0:
			return -2591,965f, 2483,167f, 60,8904f;
			break;
		
		case 1:
			return 1827,956f, 585,8948f, 287,6289f;
			break;
		
		case 2:
			return 991,1072f, -2389,983f, 83,3701f;
			break;
		
		case 3:
			return -1721,049f, -2792,948f, 75,4149f;
			break;
		
		case 4:
			return -578,6125f, 5436,721f, 150,1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_199(var uParam0)//Position - 0x9A0B
{
	if (func_231())
	{
		if (!Local_1961)
		{
			Local_1961 = 1;
			Local_1961.f_1 = 1;
		}
		else
		{
			Local_1961.f_1 = 0;
		}
	}
	else if (func_230())
	{
		if (!Local_1961.f_1 || func_229() >= 1f)
		{
			if (Local_1961)
			{
				Local_1961 = 0;
			}
		}
	}
	if (func_230())
	{
		func_228();
	}
	else
	{
		func_227();
	}
	if (Local_1961)
	{
		if (!func_226(Local_1961.f_2) && !func_224(Local_1961.f_2))
		{
			func_201(&uLocal_1934, Local_1961.f_2);
		}
		else
		{
			if (unk_0x8EA3C8E091EA5BA4(Local_1961.f_6))
			{
				unk_0x02934BABFD4CD384(Local_1961.f_6, 0);
			}
			if (func_224(Local_1961.f_2))
			{
				Local_1961.f_2 = { func_200(uParam0) };
			}
			func_194(&uLocal_1934, 0);
			Local_1961 = 0;
		}
	}
	else if (unk_0x8EA3C8E091EA5BA4(Local_1961.f_6))
	{
		unk_0x02934BABFD4CD384(Local_1961.f_6, 0);
	}
	else
	{
		if (func_224(Local_1961.f_2))
		{
			Local_1961.f_2 = { func_200(uParam0) };
		}
		func_194(&uLocal_1934, 0);
		Local_1961 = 0;
	}
}

Vector3 func_200(var uParam0)//Position - 0x9B26
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_45.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_201(var uParam0, vector3 vParam1)//Position - 0x9B5B
{
	func_202(uParam0, vParam1, 0, 0, 1, 1, 1);
}

void func_202(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x9B72
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_195(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_203(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_203(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x9BA8
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_196(iVar0))
	{
		func_223();
	}
	if (!unk_0x38DF88792E2574E5())
	{
		if (func_218(uParam0, bParam4, bParam6, 0))
		{
			func_217(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_208(iVar0))
			{
				if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && uParam5)
					{
						if (!func_196(iVar0))
						{
							func_299(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_207(1);
							}
						}
					}
				}
			}
		}
		else if (func_208(iVar0))
		{
			if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
			{
				if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && uParam5)
				{
					if (!func_196(iVar0))
					{
						func_299(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
						{
							func_207(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x8C1C362CA8299475(iVar0))
		{
			if (func_196(iVar0) && unk_0xF491DD47B88AA84E())
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
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					func_195(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				func_195(uParam0, iVar0, 1);
			}
		}
		if (!func_218(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_206(uParam0))
			{
				func_204(uParam0);
			}
		}
	}
}

void func_204(var uParam0)//Position - 0x9E82
{
	if (func_205(unk_0xFC1458A37D98B502()))
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

int func_205(int iParam0)//Position - 0x9EEB
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

int func_206(var uParam0)//Position - 0x9F46
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

int func_207(bool bParam0)//Position - 0x9F71
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

int func_208(char* sParam0)//Position - 0xA01B
{
	if (!func_209(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_196(sParam0)) || func_196("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_207(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_207(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_207(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_209(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA0B4
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
	if (func_141(0))
	{
		return 0;
	}
	if (func_216())
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
	if ((func_215() || func_214(Global_4456448.f_143970)) || func_213())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_212(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_212(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_212(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_210(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0)//Position - 0xA2DF
{
	if (iParam0 != func_211())
	{
		if (func_129(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_129(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_211()//Position - 0xA345
{
	return -1;
}

int func_212(int iParam0, int iParam1)//Position - 0xA34E
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

var func_213()//Position - 0xA3D3
{
	return Global_2447174.f_16;
}

bool func_214(int iParam0)//Position - 0xA3E1
{
	return iParam0 == 51;
}

var func_215()//Position - 0xA3EE
{
	return Global_2447174.f_15;
}

bool func_216()//Position - 0xA3FC
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_217(var uParam0, vector3 vParam1, int iParam2)//Position - 0xA411
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xBC3B7443617858A0(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x7777A5D8CAFB91D7(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), vParam1, -1, iVar2, iVar3);
	unk_0xA91E83FF512776B6("FocusIn", 0, 0);
	unk_0xE859EF37EA7362D3("HINT_CAM_SCENE");
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_218(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA4AD
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
					if (func_222(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_221(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_221(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_222(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_206(uParam0))
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
						if (!func_222(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_222(bParam1, bParam2, bParam3))
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
					if (!func_222(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_221(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_221(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_222(bParam1, bParam2, bParam3))
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
						if (func_220(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_219(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_219(bParam1, bParam2, bParam3))
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
					else if (func_220(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_206(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_209(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_223();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_219(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA819
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_220(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA86B
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_221(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA8B4
{
	if (!func_209(bParam0, bParam1, bParam2))
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

int func_222(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA913
{
	if (!func_209(bParam0, bParam1, bParam2))
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

void func_223()//Position - 0xA969
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_224(vector3 vParam0)//Position - 0xA979
{
	float fVar0;
	
	fVar0 = unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502());
	if (system::vdist2(vParam0, func_225(unk_0x9EB17624F44A8DA4())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_225(int iParam0)//Position - 0xA9AF
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_226(vector3 vParam0)//Position - 0xA9C2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_227()//Position - 0xA9EC
{
	Local_1961.f_5 = 0f;
}

void func_228()//Position - 0xA9FA
{
	Local_1961.f_5 = (Local_1961.f_5 + unk_0x46C19C2753391FBF());
}

float func_229()//Position - 0xAA11
{
	return Local_1961.f_5;
}

bool func_230()//Position - 0xAA1E
{
	return unk_0x58F436C557A0FD7A(0, 80);
}

bool func_231()//Position - 0xAA2D
{
	return unk_0xF2B58F79D29425B4(0, 80);
}

void func_232(vector3 vParam0)//Position - 0xAA3C
{
	func_194(&uLocal_1934, 0);
	Local_1961.f_2 = { vParam0 };
}

void func_233(int iParam0, int iParam1)//Position - 0xAA57
{
	Global_92872.f_7 = iParam0;
	Global_92872.f_8 = iParam1;
}

void func_234(int iParam0)//Position - 0xAA6F
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

int func_235(var uParam0, bool bParam1, bool bParam2)//Position - 0xAA83
{
	unk_0x14B39B55DD447033(0);
	switch (iLocal_1681)
	{
		case 0:
			iLocal_194 = 0;
			vLocal_1930 = { func_198() };
			vLocal_1931 = { func_248() };
			fLocal_1932 = func_247();
			unk_0x9B47B379EE749C38(false);
			unk_0x3E80C2F7BC665259(1);
			unk_0x84CDD933AFA470D2();
			iLocal_1681 = 1;
			break;
		
		case 1:
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (func_163() == 0)
				{
					unk_0xA91E83FF512776B6("MinigameEndMichael", 0, 0);
				}
				else if (func_163() == 1)
				{
					unk_0xA91E83FF512776B6("MinigameEndFranklin", 0, 0);
				}
				else if (func_163() == 2)
				{
					unk_0xA91E83FF512776B6("MinigameEndTrevor", 0, 0);
				}
				iLocal_1739 = unk_0x5AC38B4D80D4E352(26379945, vLocal_1930, vLocal_1931, fLocal_1932, 1, 2);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x7E4FCDC8BAD0CF6D(iLocal_1739, "HAND_SHAKE", 0,07f);
				}
				if (unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0x0ACC2116170FA204(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x2931C350CED41AD3(unk_0xFC1458A37D98B502(), uParam0->f_358[0 /*189*/].f_9, vLocal_1930.x, vLocal_1930.y, (vLocal_1930.z + 15f), 4, unk_0x90D5DFB054818BA7(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0x220653007034AE1F(iLocal_1739, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
				iLocal_1681 = 2;
			}
			break;
		
		case 2:
			unk_0x6B21CB5B873D3277(iLocal_1739);
			func_246(iLocal_1739);
			func_10(&iLocal_1735);
			iLocal_1681 = 3;
			break;
		
		case 3:
			if (func_245(&iLocal_1735, fLocal_1933))
			{
				func_10(&iLocal_1735);
				func_246(iLocal_1739);
				iLocal_1681 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x841ED61760A7D07B(uParam0->f_358[0 /*189*/].f_9) && unk_0x0ACC2116170FA204(uParam0->f_358[0 /*189*/].f_9))
				{
					vLocal_1929 = { unk_0xB3328BA8976B416C(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&iLocal_1735);
				}
				func_242(iLocal_1739, vLocal_1929);
			}
			if (func_107(&iLocal_1735) >= 1f)
			{
				iLocal_1681 = 5;
			}
			break;
		
		case 5:
			func_11(&iLocal_1735);
			if (unk_0x8EA3C8E091EA5BA4(iLocal_1738))
			{
				unk_0x02934BABFD4CD384(iLocal_1738, 0);
			}
			unk_0xA91E83FF512776B6("MinigameTransitionIn", 0, 1);
			unk_0x3C6F9A723015D90F(iLocal_1739, 0);
			vLocal_1930 = { unk_0x358591F279CE2987(iLocal_1739) };
			vLocal_1931 = { unk_0xA6EB123F0C0560D9(iLocal_1739, 2) };
			iLocal_1738 = unk_0x5AC38B4D80D4E352(26379945, vLocal_1930.x, vLocal_1930.y, (vLocal_1930.z + 1000f), 90f, vLocal_1931.y, vLocal_1931.z, fLocal_1932, 0, 2);
			unk_0xF10DA1539629CC3F(iLocal_1738, iLocal_1739, 500, 1, 1);
			unk_0x4AFBCBFDE748D4E0(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1681 = 6;
			break;
		
		case 6:
			if (!unk_0xCED06F4C77332FC6(iLocal_1738) && !unk_0xCED06F4C77332FC6(iLocal_1739))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					unk_0x4AFBCBFDE748D4E0(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					unk_0x4AFBCBFDE748D4E0(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					func_241(1);
				}
				iLocal_1681 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
			}
			func_239(uParam0);
			func_66(&(Local_45.f_321), 1);
			func_11(&iLocal_1735);
			if (unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_1924 = unk_0x046EF496879E839B();
				unk_0x47E2FD029BB8567C(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_1681 = 8;
			break;
		
		case 8:
			if (func_238(uParam0))
			{
				iLocal_1681 = 9;
			}
			break;
		
		case 9:
			unk_0xA91E83FF512776B6("MinigameTransitionOut", 0, 0);
			func_237(&iLocal_1740);
			func_233(1, 0);
			func_236(uParam0);
			func_16();
			func_233(0, 0);
			iLocal_1681 = 0;
			return 0;
			break;
	}
	func_428(uParam0, 0);
	return 1;
}

int func_236(var uParam0)//Position - 0xAEA0
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
	{
		unk_0xE3C33644878DCCFD(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return unk_0x0EA322F91D915C08("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
	{
		unk_0xE3C33644878DCCFD(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return unk_0x0EA322F91D915C08("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
	{
		unk_0xE3C33644878DCCFD(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return unk_0x0EA322F91D915C08("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_237(int iParam0)//Position - 0xAF7B
{
	unk_0xA68F7B004463AB6F(iParam0);
	*iParam0 = 0;
}

int func_238(var uParam0)//Position - 0xAF8D
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_1700)
	{
		if (fVar0 > 1f)
		{
			iLocal_1700 = 1;
		}
	}
	if (!iLocal_1701)
	{
		if (fVar0 > 4,25f)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_17, "TRANSITION_OUT");
			unk_0x9499D7329FB840A2(0,5f);
			unk_0x271AA5469AF471B3();
			iLocal_1701 = 1;
		}
	}
	unk_0x28E092B1E386EB67(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_1700 = 0;
		iLocal_1701 = 0;
		return 1;
	}
	return 0;
}

void func_239(var uParam0)//Position - 0xB02E
{
	char* sVar0;
	
	sVar0 = func_240(2);
	unk_0x008F3E3CC076EA0E(uParam0->f_17, "RESET_MOVIE");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_17, sVar0);
	unk_0x7E099EB35339C80D("STRING");
	unk_0xA6D2B267C377D7B2("SPR_UI_PASS");
	unk_0x9748595E4799A2CF();
	unk_0x7E099EB35339C80D(&(Local_45.f_24[Local_45.f_10 /*8*/]));
	unk_0x9748595E4799A2CF();
	unk_0x9499D7329FB840A2(100f);
	unk_0x1869584A8A72FEDD(true);
	unk_0x271AA5469AF471B3();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_1700 = 0;
	iLocal_1701 = 0;
}

char* func_240(int iParam0)//Position - 0xB0AC
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_241(bool bParam0)//Position - 0xB127
{
	char* sVar0;
	
	unk_0xA3A57BA8F775CAFF(0);
	switch (func_163())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xA212266606E6ECA8(sVar0);
}

void func_242(int iParam0, vector3 vParam1)//Position - 0xB19A
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if (!unk_0x8EA3C8E091EA5BA4(iParam0))
	{
		return;
	}
	if (!unk_0xD85097DDDA5447BE(iParam0))
	{
		return;
	}
	vVar1 = { unk_0xA6EB123F0C0560D9(iParam0, 2) };
	vVar2 = { unk_0x358591F279CE2987(iParam0) };
	vVar3 = { func_8(vVar1.x, vVar1.y, (vVar1.z + 90f)) };
	vVar4 = { vParam1 - vVar2 };
	vVar4 = { func_96(vVar4) };
	fVar5 = unk_0xF5596B3A7E5F3C68((vParam1.z - vVar2.z), unk_0xBE3C4023003180FC(vParam1, vVar2, false));
	fVar6 = unk_0xA67DD8488EBA5F6D((vParam1.x - vVar2.x), (vParam1.y - vVar2.y));
	fVar6 = func_244(fVar6, -180f, 180f);
	fVar0 = func_95(func_8(fVar5, vVar1.y, vVar1.z), vVar3);
	fVar7 = (fVar5 - vVar1.x);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (vVar1.x + fVar7);
	if ((bLocal_1928 && fVar5 > vVar1.x) || (!bLocal_1928 && fVar5 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1925 = (fLocal_1925 * 0,9f);
		vVar1.x = func_243(vVar1.x, fVar5, fLocal_1925);
	}
	fVar8 = (fVar6 - vVar1.z);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (vVar1.z + fVar8);
	if ((bLocal_1927 && (vVar1.z - fVar6) < 0f) || (!bLocal_1927 && (vVar1.z - fVar6) > 0f))
	{
		if (!bLocal_1927 && (vVar1.z - fVar6) > 0f)
		{
		}
		else if (bLocal_1927 && (vVar1.z - fVar6) < 0f)
		{
		}
		fLocal_1926 = (fLocal_1926 * 0,9f);
		vVar1.z = func_243(vVar1.z, fVar6, fLocal_1926);
	}
	unk_0xBEBD5CAE3510CD2A(iParam0, vVar1, 2);
}

float func_243(float fParam0, float fParam1, float fParam2)//Position - 0xB3B0
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_244(float fParam0, float fParam1, float fParam2)//Position - 0xB3C5
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

int func_245(int iParam0, float fParam1)//Position - 0xB407
{
	if (func_2(iParam0, fParam1))
	{
		func_4(iParam0);
		return 1;
	}
	return 0;
}

void func_246(int iParam0)//Position - 0xB425
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	
	unk_0x4D7E0C2794433BDF(unk_0xFC1458A37D98B502(), &vVar0, &uVar6, &uVar6, &vVar1);
	vVar5 = { unk_0xA6EB123F0C0560D9(iParam0, 2) };
	vVar4 = { unk_0x358591F279CE2987(iParam0) };
	vVar2 = { func_8((vVar5.x + 90f), vVar5.y, vVar5.z) };
	vVar3 = { func_8(vVar5.x, vVar5.y, (vVar5.z + 90f)) };
	fLocal_1925 = 0,2f;
	fLocal_1926 = 0,5f;
	vVar7 = { unk_0x358591F279CE2987(iParam0) - vVar1 };
	vVar8 = { vVar1 + FtoV(func_95(vVar7, vVar0)) * vVar0 };
	if (vVar8.z > vVar4.z)
	{
		bLocal_1928 = true;
	}
	else
	{
		bLocal_1928 = false;
	}
	fVar9 = func_95(vVar8, vVar2);
	fVar10 = func_95(vVar8, vVar3);
	if (fVar9 < 0f)
	{
		bLocal_1927 = true;
	}
	else
	{
		bLocal_1927 = false;
	}
}

float func_247()//Position - 0xB501
{
	switch (Local_45.f_10)
	{
		case 0:
			return 46,9415f;
			break;
		
		case 1:
			return 37,9558f;
			break;
		
		case 2:
			return 48,4122f;
			break;
		
		case 3:
			return 35,2464f;
			break;
		
		case 4:
			return 42,5338f;
			break;
	}
	return 0f;
}

Vector3 func_248()//Position - 0xB568
{
	switch (Local_45.f_10)
	{
		case 0:
			return -7,5758f, 0f, 148,5448f;
			break;
		
		case 1:
			return -1,0194f, 0,7478f, 23,0628f;
			break;
		
		case 2:
			return -5,3368f, 0,0006f, 158,257f;
			break;
		
		case 3:
			return -1,3523f, 0f, 0,0891f;
			break;
		
		case 4:
			return 18,1009f, -0,5992f, -103,0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_249()//Position - 0xB5FB
{
	unk_0x81BCCFFE3F019672();
	if (unk_0xB774D40D7819292F(iLocal_1968))
	{
		unk_0x48B475D0F512A41A(iLocal_1968);
	}
}

void func_250()//Position - 0xB618
{
	unk_0x9B16F08390FCC31C();
	func_251();
}

void func_251()//Position - 0xB628
{
	Global_17162.f_134 = 1;
}

void func_252(int iParam0)//Position - 0xB636
{
	if (Global_35861 == 9 || Global_35861 == 10)
	{
		Global_103205 = iParam0;
	}
	else
	{
		Global_103205 = 0;
	}
}

void func_253(bool bParam0)//Position - 0xB661
{
	unk_0xBC3B7443617858A0(!bParam0);
}

void func_254()//Position - 0xB670
{
	func_255();
	unk_0xBC3B7443617858A0(true);
}

void func_255()//Position - 0xB681
{
	Local_1961 = 0;
	Local_1961.f_1 = 0;
	Local_1961.f_2 = { 0f, 0f, 0f };
	Local_1961.f_6 = 0;
	Local_1961.f_5 = 0f;
}

bool func_256(char* sParam0, int iParam1, char* sParam2)//Position - 0xB6A9
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_257(var uParam0, bool bParam1)//Position - 0xB6C7
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 16);
	}
	else
	{
		func_153(&(uParam0->f_1), 16);
	}
}

int func_258(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB6EB
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

void func_259(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB7B4
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4A8BF4917A66587B("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 32);
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		func_154(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6A0C4AD62ABCE665(*uParam0, 1);
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (bParam3)
		{
			func_154(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_154(&(uParam0->f_1), 8192);
	}
}

void func_260(var uParam0)//Position - 0xB82E
{
	func_261(uParam0);
	system::settimera(0);
	func_233(1, 0);
	func_16();
}

void func_261(var uParam0)//Position - 0xB84C
{
	func_298(&(uParam0->f_1871));
	func_276(&(uParam0->f_1871.f_741));
	func_262(&(uParam0->f_1871));
}

void func_262(var uParam0)//Position - 0xB872
{
	func_275(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_275(&(uParam0->f_316[1 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 127f, 1);
	func_275(&(uParam0->f_316[2 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 297f, 1);
	func_275(&(uParam0->f_316[3 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 324f, 1);
	func_275(&(uParam0->f_316[4 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 351f, 1);
	func_275(&(uParam0->f_316[5 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 378f, 1);
	func_275(&(uParam0->f_316[6 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 405f, 1);
	func_275(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_275(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_275(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_275(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_275(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_275(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_275(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_275(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_271(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_270(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_271(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_270(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_270(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[6 /*9*/], 258,5f, 482,5f, 80f, 80f, 1);
	func_270(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[5 /*9*/], 344f, 482,5f, 80f, 80f, 1);
	func_270(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[4 /*9*/], 429,5f, 482,5f, 80f, 80f, 1);
	func_270(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_265(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_264(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_265(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_264(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_265(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_263(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_263(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_263(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_263(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_263(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_263(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_265(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_263(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_265(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_263(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_263(var uParam0, int iParam1, bool bParam2)//Position - 0xBE22
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBE55
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_265(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xBE75
{
	func_269(uParam0, fParam3, fParam4);
	func_266(uParam0, fParam1, fParam2, bParam5);
}

void func_266(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xBE93
{
	*uParam0 = func_268(fParam1, 1280);
	uParam0->f_1 = func_267(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_267(float fParam0, int iParam1)//Position - 0xBED5
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x9A72C8F89A53C2D1(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_268(float fParam0, int iParam1)//Position - 0xBEF1
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x9A72C8F89A53C2D1(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_269(var uParam0, float fParam1, float fParam2)//Position - 0xBF0D
{
	uParam0->f_2 = func_268(fParam1, 1280);
	uParam0->f_3 = func_267(fParam2, 720);
}

void func_270(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBF2F
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_271(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xBF4F
{
	func_273(fParam0, fParam3, fParam4);
	func_272(fParam0, fParam1, fParam2, bParam5);
}

void func_272(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xBF6D
{
	*uParam0 = func_268(fParam1, 1280);
	uParam0->f_1 = func_267(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_273(var uParam0, float fParam1, float fParam2)//Position - 0xBFAF
{
	uParam0->f_2 = func_268(fParam1, 1280);
	uParam0->f_3 = func_267(fParam2, 720);
}

float func_274(float fParam0, int iParam1, bool bParam2)//Position - 0xBFD1
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x9A72C8F89A53C2D1(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return system::to_float(system::round(fVar1));
	}
	return fVar1;
}

void func_275(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xC005
{
	*uParam0 = func_268(fParam1, 1280);
	uParam0->f_1 = func_267(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_276(var uParam0)//Position - 0xC02C
{
	func_297(uParam0, 0);
	func_296(&(uParam0->f_11), 0);
	func_295(&(uParam0->f_66), 0);
	func_294(&(uParam0->f_77), 0);
	func_293(&(uParam0->f_33), 0);
	func_292(&(uParam0->f_44), 0);
	func_291(&(uParam0->f_55), 0);
	func_290(&(uParam0->f_143), 0);
	func_289(&(uParam0->f_22), 0);
	func_288(&(uParam0->f_154), 0);
	func_287(&(uParam0->f_88), 0, 0);
	func_286(&(uParam0->f_99), 0, 5);
	func_285(&(uParam0->f_110), 0);
	func_284(&(uParam0->f_121), 0);
	func_283(&(uParam0->f_132), 0);
	func_282(&(uParam0->f_165), 0);
	func_281(&(uParam0->f_176), 0);
	func_280(&(uParam0->f_187), 0);
	func_279(&(uParam0->f_198), 0);
	func_278(&(uParam0->f_209), 0);
	func_277(&(uParam0->f_220), 0);
}

void func_277(var uParam0, int iParam1)//Position - 0xC0F1
{
	*uParam0 = 4;
	uParam0->f_1 = 0,45f;
	uParam0->f_2 = 0,45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_278(var uParam0, int iParam1)//Position - 0xC13A
{
	*uParam0 = 0;
	uParam0->f_1 = 0,275f;
	uParam0->f_2 = 0,275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_279(var uParam0, int iParam1)//Position - 0xC183
{
	*uParam0 = 0;
	uParam0->f_1 = 0,3375f;
	uParam0->f_2 = 0,3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_280(var uParam0, int iParam1)//Position - 0xC1CC
{
	*uParam0 = 0;
	uParam0->f_1 = 0,35f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_281(var uParam0, int iParam1)//Position - 0xC215
{
	*uParam0 = 0;
	uParam0->f_1 = 0,325f;
	uParam0->f_2 = 0,325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_282(var uParam0, int iParam1)//Position - 0xC25E
{
	*uParam0 = 0;
	uParam0->f_1 = 0,6f;
	uParam0->f_2 = 0,6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_283(var uParam0, int iParam1)//Position - 0xC2AA
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,315f + 0,183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_284(var uParam0, int iParam1)//Position - 0xC2FC
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,5f + 0,004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_285(var uParam0, int iParam1)//Position - 0xC34E
{
	*uParam0 = 5;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((0,628f - 0,18f) - 0,058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_286(var uParam0, int iParam1, int iParam2)//Position - 0xC3A6
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = (0,889f - 0,01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_287(var uParam0, int iParam1, int iParam2)//Position - 0xC3F9
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = ((((((0,469f + 0,096f) - 0,017f) + 0,022f) - 0,062f) - 0,001f) - 0,013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_288(var uParam0, int iParam1)//Position - 0xC46A
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_289(var uParam0, int iParam1)//Position - 0xC4B6
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_290(var uParam0, int iParam1)//Position - 0xC501
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_291(var uParam0, int iParam1)//Position - 0xC54D
{
	*uParam0 = 4;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_292(var uParam0, int iParam1)//Position - 0xC598
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_293(var uParam0, int iParam1)//Position - 0xC5E3
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_294(var uParam0, int iParam1)//Position - 0xC62E
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_295(var uParam0, int iParam1)//Position - 0xC67A
{
	*uParam0 = 0;
	uParam0->f_1 = 0,332f;
	uParam0->f_2 = 0,628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_296(var uParam0, int iParam1)//Position - 0xC6C5
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_297(var uParam0, int iParam1)//Position - 0xC710
{
	*uParam0 = 0;
	uParam0->f_1 = 0,202f;
	uParam0->f_2 = 0,781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_298(var uParam0)//Position - 0xC75B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_299(char* sParam0, int iParam1)//Position - 0xC7C6
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_300(int iParam0)//Position - 0xC7DD
{
	func_305();
	switch (iLocal_1967)
	{
		case 0:
			func_10(iParam0);
			func_304(&iLocal_1962, 3);
			iLocal_1967 = 1;
			break;
		
		case 1:
			if (func_2(iParam0, 1f))
			{
				func_301(&iLocal_1962, 1, 0, 1, 3, 1, 0, 0);
				iLocal_1967 = 2;
			}
			break;
		
		case 2:
			if (func_301(&iLocal_1962, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_301(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC855
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_303(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x5A66A86A47AC3B57(1);
	unk_0x0EB9853DF8BC0D87(*uParam0, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_358(uParam0->f_1, 1))
					{
						func_330(&(uParam0->f_1), 8);
						unk_0x31758B9A51671C43(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x008F3E3CC076EA0E(*uParam0, "SET_MESSAGE");
						func_156("CNTDWN_GO");
						unk_0xD07D5CD276368D36(iVar5);
						unk_0xD07D5CD276368D36(iVar6);
						unk_0xD07D5CD276368D36(iVar7);
						unk_0x1869584A8A72FEDD(true);
						unk_0x271AA5469AF471B3();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = system::floor(fVar3);
	}
	else
	{
		iVar4 = system::floor(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_358(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_358(uParam0->f_1, 1))
		{
			func_330(&(uParam0->f_1), 1);
			unk_0x4AFBCBFDE748D4E0(-1, sVar0, sVar2, true);
			func_304(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_358(uParam0->f_1, 2))
		{
			func_330(&(uParam0->f_1), 2);
			unk_0x4AFBCBFDE748D4E0(-1, sVar0, sVar2, true);
			func_304(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_358(uParam0->f_1, 4))
		{
			func_330(&(uParam0->f_1), 4);
			unk_0x4AFBCBFDE748D4E0(-1, sVar0, sVar2, true);
			func_304(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_358(uParam0->f_1, 16))
		{
			if (unk_0xE97272C977DEADD3((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0,65f)
			{
				if (bParam5 || bParam6)
				{
					func_330(&(uParam0->f_1), 16);
					unk_0x4AFBCBFDE748D4E0(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !func_358(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x4AFBCBFDE748D4E0(-1, sVar1, sVar2, true);
			}
			func_330(&(uParam0->f_1), 8);
			unk_0x31758B9A51671C43(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x008F3E3CC076EA0E(*uParam0, "SET_MESSAGE");
			func_156("CNTDWN_GO");
			unk_0xD07D5CD276368D36(iVar11);
			unk_0xD07D5CD276368D36(iVar12);
			unk_0xD07D5CD276368D36(iVar13);
			unk_0x1869584A8A72FEDD(true);
			unk_0x271AA5469AF471B3();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_302()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_302()//Position - 0xCB75
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 18) || unk_0xF2B58F79D29425B4(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_303(int iParam0, bool bParam1)//Position - 0xCBA7
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(iParam0, 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(iParam0, 4);
	}
	if (unk_0xC80D31E4B587871C(*iParam0, 4))
	{
	}
}

void func_304(var uParam0, int iParam1)//Position - 0xCBD3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x008F3E3CC076EA0E(*uParam0, "SET_MESSAGE");
	unk_0xF92B835A141C6BDD(-1);
	unk_0x7E099EB35339C80D("NUMBER");
	unk_0x6223D539BCD39E76(unk_0xB89BB11E0945F6F0(iParam1));
	unk_0x9748595E4799A2CF();
	unk_0xD07D5CD276368D36(iVar0);
	unk_0xD07D5CD276368D36(iVar1);
	unk_0xD07D5CD276368D36(iVar2);
	unk_0x1869584A8A72FEDD(true);
	unk_0x271AA5469AF471B3();
}

void func_305()//Position - 0xCC2B
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_103585;
	func_306(Var0, 0, 0, 0, 0, iVar1);
}

void func_306(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCC47
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_71110 != 6)
	{
		if (Global_71112 == -1)
		{
			if (func_320(1, Param0))
			{
				if (Global_71113 == 3)
				{
					fVar0 = 1,5f;
				}
				else
				{
					fVar0 = 2,5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_71112 = unk_0x53C562FD2B9E3AB0();
					vLocal_30 = { unk_0x7576873621B2EA9C(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0x46C19C2753391FBF());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_320(0, Param0))
			{
				Global_71112 = (unk_0x53C562FD2B9E3AB0() - 9000);
			}
			unk_0x553231E7FC3C570D(7);
			unk_0x553231E7FC3C570D(6);
			unk_0x553231E7FC3C570D(8);
			unk_0x553231E7FC3C570D(9);
			iVar1 = (unk_0x53C562FD2B9E3AB0() - Global_71112);
			if (iVar1 < 9000 && !unk_0x3E9CABD07B829173())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = system::ceil(((system::to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = system::ceil(((system::to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71110)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0,035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0,014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0,014f;
						break;
				}
				unk_0x73509F6FDA1DB386(82, 66);
				unk_0x8F5DFDE59FA7D0D0(1);
				unk_0xA2E2179985C59E40(2);
				iVar11 = func_163();
				if (Global_71113 == 1 && Global_71111 == 62)
				{
					iVar11 = Global_104555.f_2353.f_539.f_4302;
				}
				switch (iVar11)
				{
					case 0:
						unk_0x31758B9A51671C43(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0x31758B9A51671C43(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0x31758B9A51671C43(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0xA54B8BFDEBB2AF89(iVar7, iVar8, iVar9, iVar2);
				unk_0x7985C5E9307C5D5B();
				Var4 = { func_309(Global_71111, Global_71113, iParam5) };
				if (fVar6 == -0,014f)
				{
				}
				unk_0xE7C11B6F2CF973B6(fVar5, fVar6, 0f, 0,01f);
				unk_0x8D95497078BC0E3B(0,67f, 0,67f);
				if (!unk_0x41226DC6540EC9AA() && !unk_0x76FE7B23D5962731())
				{
					fLocal_32 = 0,14f;
				}
				else
				{
					fLocal_32 = 0,17f;
				}
				if (fVar6 == -0,014f)
				{
					if (func_308(&Var4) > fLocal_32)
					{
						if (unk_0x170B4D4E7CE48DA5(15))
						{
							unk_0x76F7AB2157E33DD9(15, vLocal_30.x, (vLocal_30.y + fLocal_31));
							Global_71115 = 1;
						}
					}
				}
				unk_0x76CCD673085CBF57(&Var4);
				unk_0xD3DA9EADE295C3C5(fVar5, fVar6, 0);
				unk_0x189EEBAACC5D380A();
				if (Global_71114 == 1)
				{
					func_307();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_307();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_307()//Position - 0xCF2C
{
	if (Global_71110 != 6)
	{
	}
	if (Global_71115)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_71115 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71110 = 6;
	Global_71112 = -1;
	Global_71111 = -1;
}

float func_308(char* sParam0)//Position - 0xCF64
{
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

struct<2> func_309(int iParam0, int iParam1, int iParam2)//Position - 0xCF77
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_319(iParam0) };
			break;
		
		case 7:
			Var0 = { func_317(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_316(iParam2) };
					break;
				
				case 8:
					Var0 = { func_315(iParam2) };
					break;
				
				case 7:
					Var0 = { func_314(iParam2) };
					break;
				
				case 10:
					Var0 = { func_313(iParam2) };
					break;
				
				case 5:
					Var0 = { func_312(iParam2) };
					break;
				
				case 4:
					Var0 = { func_311(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_310(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_310(int iParam0)//Position - 0xD04E
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_311(int iParam0)//Position - 0xD1A1
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_312(int iParam0)//Position - 0xD1D5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_313(int iParam0)//Position - 0xD209
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_314(int iParam0)//Position - 0xD23D
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_315(int iParam0)//Position - 0xD271
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)//Position - 0xD2AF
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)//Position - 0xD2E3
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_318(iParam0) };
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

struct<2> func_318(int iParam0)//Position - 0xD31B
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

struct<2> func_319(int iParam0)//Position - 0xD768
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83766[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104555.f_9055.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_320(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xD7D1
{
	if (((!func_322(0) || Global_71125) || Global_71114 == 1) || !unk_0x9F7B586A14398C40())
	{
		return 0;
	}
	switch (Global_71110)
	{
		case 0:
			if (unk_0x74C475EB8E73D398(&uParam1, "NONE") || unk_0xAB019B170BF1309C(&uParam1))
			{
				Global_71110 = 3;
			}
			else
			{
				Global_71110 = 1;
			}
			break;
		
		case 1:
			if (unk_0xA3DDC3767EC660CD())
			{
				Global_71110 = 2;
			}
			break;
		
		case 2:
			if (unk_0xA8113D347D14630F())
			{
				Global_71110 = 4;
				return 1;
			}
			else if (!unk_0x6C97EEC6339FB45C())
			{
				Global_71110 = 3;
			}
			break;
		
		case 3:
			if (unk_0xA8113D347D14630F())
			{
			}
			else
			{
				Global_71110 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0xA8113D347D14630F())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71110 = 5;
			}
			break;
		
		case 5:
			if ((unk_0xA8113D347D14630F() || func_141(0)) || func_321(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_321(bool bParam0)//Position - 0xD8E9
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_322(int iParam0)//Position - 0xD912
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_323(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_323(int iParam0)//Position - 0xD934
{
	return func_324(iParam0, Global_35861);
}

int func_324(int iParam0, int iParam1)//Position - 0xD945
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

void func_325(var uParam0)//Position - 0xDB26
{
	char cVar0[16];
	int iVar1;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_45.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_1754 = 0;
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	if (Local_45 == 0)
	{
		unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&iLocal_2057);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		func_326(&(uParam0->f_358[iVar1 /*189*/]));
		if (Local_45 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2065)
		{
			if (iVar1 > 0)
			{
				if (!unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_358[iVar1 /*189*/].f_9, 0))
				{
					if (iVar1 == 1 && Local_45.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x84EF7D14703E1230(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0x617EA99D340A37ED(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (unk_0xB8DE76287EDC4957(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0x47E2FD029BB8567C(uParam0->f_358[0 /*189*/].f_9, true);
		if (!unk_0xAB019B170BF1309C(sLocal_1924))
		{
			unk_0x1D4B7CAF5F26DD3E(sLocal_1924);
			unk_0xDFC63F22B454FFF5(uParam0->f_358[0 /*189*/].f_9, sLocal_1924);
		}
	}
}

void func_326(var uParam0)//Position - 0xDD0B
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0))
		{
			if (unk_0x8DDE799D31A3D099(uParam0->f_9))
			{
				unk_0x7674774BB9279265(uParam0->f_9);
			}
			unk_0x771A86309E0CA47B(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0))
	{
		if (!unk_0x125CDF69FA6EF560(uParam0->f_22))
		{
			unk_0xA15269351F50F113(uParam0->f_9, true, true, 0);
		}
	}
}

int func_327()//Position - 0xDD72
{
	return unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
}

void func_328(var uParam0)//Position - 0xDD82
{
	uParam0->f_12 = uParam0->f_12;
}

void func_329(var uParam0)//Position - 0xDD92
{
	int iVar0;
	
	if (unk_0x036D7C18EE783AB5(unk_0x98EC0789D9F0703B()))
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_330(int iParam0, int iParam1)//Position - 0xDDD9
{
	func_60(iParam0, iParam1);
}

int func_331(var uParam0, int iParam1, bool bParam2)//Position - 0xDDE9
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1,2f;
	if (!bParam2)
	{
		fVar2 = 0,7f;
	}
	if (!func_337(&(uParam0->f_27[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		vVar3 = { uParam0->f_27[iParam1 /*10*/] };
		vVar4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				vVar3 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_45 == 1)
		{
			if (Local_45.f_10 == 1)
			{
				if (func_358(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_356(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			vVar4 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_332(vVar4, &(uParam0->f_27[iParam1 /*10*/]), vVar3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				vVar0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				vVar0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_332(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), vVar0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_332(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0xDF68
{
	if (!func_333(vParam0, uParam1, vParam2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_333(vector3 vParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0xDF89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	vParam0 = { vParam0 };
	func_80(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		iVar0 = func_335(uParam1->f_7, vParam0, *uParam1, vParam2);
		func_577(func_578(func_92()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam1->f_6 = unk_0x4F46BC851CC85AE5(iVar0, *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			func_577(func_578(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x4F46BC851CC85AE5(func_334(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			func_577(func_578(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = unk_0x4F46BC851CC85AE5(func_334(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, iVar1, iVar2, iVar3, func_91(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = unk_0x4F46BC851CC85AE5(func_334(uParam1->f_7, uParam1->f_8), *uParam1, vParam2, fParam3, 254, 207, 12, func_91(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0, int iParam1)//Position - 0xE0E6
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}

int func_335(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xE1B1
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	fVar3 = 180f;
	fVar4 = 140f;
	fVar5 = 80f;
	if (iParam0 == 0)
	{
		iVar6 = 5;
		iVar7 = 6;
		iVar8 = 7;
	}
	else if (iParam0 == 2)
	{
		iVar6 = 10;
		iVar7 = 11;
		iVar8 = 12;
	}
	else if (iParam0 == 5)
	{
		iVar6 = 25;
		iVar7 = 26;
		iVar8 = 27;
	}
	else if (iParam0 == 6)
	{
		iVar6 = 30;
		iVar7 = 31;
		iVar8 = 32;
	}
	else if (iParam0 == 7)
	{
		iVar6 = 20;
		iVar7 = 21;
		iVar8 = 22;
	}
	if (!func_336(vParam1, 0f, 0f, 0f, 0))
	{
		vVar0 = { vParam1 - vParam2 };
		vVar1 = { vParam3 - vParam2 };
		fVar2 = unk_0xAF3D7D969F2C195C(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
		if (fVar2 > 180f)
		{
			fVar2 = (360f - fVar2);
		}
		if (fVar2 < fVar5)
		{
			return iVar8;
		}
		else if (fVar2 < fVar4)
		{
			return iVar7;
		}
		else if (fVar2 < fVar3)
		{
			return iVar6;
		}
	}
	return iVar6;
}

bool func_336(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xE2B1
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_337(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xE2F8
{
	if (!func_338(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0, vector3 vParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE321
{
	func_83(iParam0);
	*iParam0 = unk_0x6F4378873333A0C2(vParam1);
	if (!unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		unk_0x4B4040A0EC7DBA81(*iParam0, iParam2);
	}
	unk_0xA5D25D3F884FF516(*iParam0, fParam3);
	unk_0x3ED68ABD7299EAA3(*iParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		unk_0x0C71C8E276E3EC54(*iParam0, 2);
	}
	if (iParam6 == 1)
	{
		unk_0x0C71C8E276E3EC54(*iParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		unk_0xDFC5BBDAEC7D6330("GATEBLIPFIN");
		unk_0x476C008681363650(*iParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			unk_0xDFC5BBDAEC7D6330("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			unk_0xDFC5BBDAEC7D6330("GATEBLIPKNF");
		}
		else
		{
			unk_0xDFC5BBDAEC7D6330("GATEBLIPDEF");
		}
		unk_0x476C008681363650(*iParam0);
	}
	return 1;
}

void func_339(char* sParam0, int iParam1, int iParam2)//Position - 0xE3E8
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 0);
}

int func_340(var uParam0)//Position - 0xE401
{
	switch (uParam0->f_25)
	{
		case 0:
			func_137(1);
			unk_0x128A5DCCD09CCA17("MPHUD", false);
			Local_45.f_118 = func_353();
			switch (Local_45)
			{
				case 0:
					unk_0x128A5DCCD09CCA17("SPRRaces", false);
					unk_0x128A5DCCD09CCA17("MPMedals_FEED", false);
					break;
				
				case 1:
					unk_0x128A5DCCD09CCA17("SPROffroad", false);
					break;
				
				case 2:
					unk_0x128A5DCCD09CCA17("Triathlon", false);
					unk_0x128A5DCCD09CCA17("MPMedals_FEED", false);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_348(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_343(uParam0))
			{
				if (unk_0xA51ADD51711B4A15("MPHUD"))
				{
					if (unk_0x34D11AB5BA7922C2(Local_45.f_118))
					{
						switch (Local_45)
						{
							case 0:
								if (unk_0xA51ADD51711B4A15("SPRRaces") && unk_0xA51ADD51711B4A15("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0xA51ADD51711B4A15("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0xA51ADD51711B4A15("Triathlon") && unk_0xA51ADD51711B4A15("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			if (Local_45.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_341(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_45.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0x6ADD12BF4D6D2587(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0xEDC33A771FAEB393(uParam0->f_358[0 /*189*/].f_9, true);
				}
				if (!unk_0x40189ECE75CF9724())
				{
					unk_0x80087D63083C560C(uParam0->f_358[0 /*189*/].f_16);
					unk_0xDCBF71199890F355(uParam0->f_358[0 /*189*/].f_16, unk_0xCE3B2111021F7234(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0x64D098EABB2F6F13())
				{
					unk_0x81BCCFFE3F019672();
					if (unk_0x6ADD12BF4D6D2587(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0xEDC33A771FAEB393(uParam0->f_358[0 /*189*/].f_9, false);
					}
					func_329(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_341(var uParam0)//Position - 0xE625
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_342(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_342(var uParam0, int iParam1)//Position - 0xE656
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_133(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_133(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_343(var uParam0)//Position - 0xE69B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_344(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_344(var uParam0, int iParam1)//Position - 0xE6CC
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_345(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_345(var uParam0)//Position - 0xE6F6
{
	if (!func_347(uParam0) || !func_346(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_346(var uParam0)//Position - 0xE71A
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0x9A0B2ED5055D3F0B(uParam0->f_22);
}

bool func_347(var uParam0)//Position - 0xE736
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0x9A0B2ED5055D3F0B(uParam0->f_21);
}

void func_348(var uParam0)//Position - 0xE752
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_349(uParam0, iVar0);
		iVar0++;
	}
}

void func_349(var uParam0, int iParam1)//Position - 0xE777
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_350(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_350(var uParam0)//Position - 0xE7A0
{
	func_352(uParam0);
	func_351(uParam0);
}

void func_351(var uParam0)//Position - 0xE7B4
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0x6FF834D85E2DD4C6(uParam0->f_22);
}

void func_352(var uParam0)//Position - 0xE7CF
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0x6FF834D85E2DD4C6(uParam0->f_21);
}

int func_353()//Position - 0xE7EA
{
	return unk_0xD704C81492296A37("SC_LEADERBOARD");
}

int func_354(int iParam0)//Position - 0xE7FA
{
	if (unk_0x9F7B586A14398C40())
	{
		unk_0xAE83ED4C9081AE6F(iParam0);
	}
	else if (unk_0x3E9CABD07B829173())
	{
		return 1;
	}
	return 0;
}

void func_355()//Position - 0xE81E
{
	if (unk_0x8EA3C8E091EA5BA4(iLocal_1738))
	{
		if (unk_0xD85097DDDA5447BE(iLocal_1738))
		{
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x7849794435F39D49(iLocal_1738, false);
		}
		unk_0x02934BABFD4CD384(iLocal_1738, 0);
	}
}

void func_356(int iParam0, int iParam1)//Position - 0xE856
{
	func_357(iParam0, iParam1);
}

void func_357(var uParam0, var uParam1)//Position - 0xE866
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_358(int iParam0, int iParam1)//Position - 0xE87B
{
	return (iParam0 && iParam1) != 0;
}

void func_359(int iParam0)//Position - 0xE88A
{
	if (!func_3(iParam0))
	{
		func_11(iParam0);
	}
}

void func_360()//Position - 0xE8A2
{
	func_361(&uLocal_1242);
}

void func_361(var uParam0)//Position - 0xE8B1
{
	if (uParam0->f_4 != 0)
	{
		func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_427(uParam0);
		func_366(uParam0);
		func_365(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_363();
	}
	if (unk_0x771D0F8F56A5FE6C("LEADERBOARD_SCENE"))
	{
		unk_0xE02E32C69260FBB7("LEADERBOARD_SCENE");
	}
	if (unk_0xDEC0EB6EAE9BC575())
	{
		func_362(&(Global_1840922.f_49));
	}
	Global_2512808.f_3935 = 0;
}

void func_362(var uParam0)//Position - 0xE952
{
	uParam0->f_1 = 0;
}

void func_363()//Position - 0xE95F
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_364(&(Global_1835390.f_2780));
	func_362(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_362(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_362(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_364(var uParam0)//Position - 0xEACB
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_365(var uParam0)//Position - 0xEB23
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_362(&(Global_1835390.f_2830));
}

void func_366(var uParam0)//Position - 0xEC05
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_362(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_367(var uParam0, var uParam1, var uParam2)//Position - 0xEC8D
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_362(&(Global_1835008.f_1));
	unk_0xB480C77695DDCB0B(*uParam2, uParam2->f_1, -1);
}

int func_368(var uParam0, var uParam1)//Position - 0xECB9
{
	if (!func_419())
	{
		return 0;
	}
	if (func_413(&bLocal_190, uParam0))
	{
		if (iLocal_192 || bLocal_191)
		{
			ui::_set_warning_message_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1, 0);
			if (!*uParam1)
			{
				if (iLocal_192)
				{
					if (func_3(&iLocal_187))
					{
						if (func_245(&iLocal_187, system::to_float(0)))
						{
							iLocal_192 = 0;
							bLocal_191 = !bLocal_191;
						}
					}
					else
					{
						func_11(&iLocal_187);
					}
				}
				else
				{
					unk_0x553231E7FC3C570D(9);
					unk_0x553231E7FC3C570D(7);
					func_152(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_373();
		}
		return 0;
	}
	if (bLocal_190)
	{
		func_372();
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x94433067C90B34A5(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), true);
		}
	}
	else
	{
		Local_45.f_10 = -1;
	}
	func_369();
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x94433067C90B34A5(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), true);
	}
	return 1;
}

void func_369()//Position - 0xEDB5
{
	unk_0x3E80C2F7BC665259(1);
	unk_0xF40900F61CC88931(3, true);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	if (unk_0x26A2D532795E03F2("MinigameTransitionIn"))
	{
		unk_0x704F5ADD5B29DB63("MinigameTransitionIn");
	}
	unk_0xA91E83FF512776B6("MinigameTransitionOut", 0, 0);
	iLocal_186 = 0;
	unk_0x6ACDC20166AA3FAC(0);
	func_137(0);
	func_370();
}

void func_370()//Position - 0xEE0A
{
	Global_14622 = 0;
	func_371();
}

void func_371()//Position - 0xEE1A
{
	if (unk_0x42111BD51D233AAB())
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

void func_372()//Position - 0xEE3E
{
	switch (Global_103585)
	{
		case 0:
			Local_45.f_10 = 0;
			break;
		
		case 1:
			Local_45.f_10 = 1;
			break;
		
		case 2:
			Local_45.f_10 = 2;
			break;
		
		case 3:
			Local_45.f_10 = 3;
			break;
		
		case 4:
			Local_45.f_10 = 4;
			break;
	}
}

void func_373()//Position - 0xEE95
{
	unk_0x36853D5037847BF3();
	func_374(&uLocal_255);
}

void func_374(var uParam0)//Position - 0xEEA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	
	if (!bLocal_254)
	{
		if (!unk_0xB9D80B12FE4456A5())
		{
			unk_0xFF628B03B1937369(1);
		}
	}
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(7);
	func_152(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_405("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_400(uParam0->f_420[0 /*8*/], 0, 0);
	func_400(uParam0->f_420[1 /*8*/], 0, 0);
	func_400(uParam0->f_420[2 /*8*/], 0, 0);
	func_400(uParam0->f_420[3 /*8*/], 0, 0);
	func_400(uParam0->f_420[4 /*8*/], 0, 0);
	func_400(uParam0->f_420[5 /*8*/], 0, 0);
	func_400(uParam0->f_420[6 /*8*/], 0, 0);
	func_400(uParam0->f_420[7 /*8*/], 0, 0);
	func_400(uParam0->f_420[8 /*8*/], 0, 0);
	func_400(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0x5A66A86A47AC3B57(1);
	func_399(&(uParam0->f_741.f_165));
	func_398(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0x5A66A86A47AC3B57(4);
	func_396(&(uParam0->f_741.f_176));
	func_395(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_393(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_392(&(uParam0->f_741.f_176));
	func_395(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_393(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_392(&(uParam0->f_741.f_176));
	func_395(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_393(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_392(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_400(uParam0->f_420[16 /*8*/], 0, 0);
	func_400(uParam0->f_420[17 /*8*/], 0, 0);
	func_400(uParam0->f_420[18 /*8*/], 0, 0);
	func_400(uParam0->f_420[19 /*8*/], 0, 0);
	func_400(uParam0->f_420[20 /*8*/], 0, 0);
	func_400(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_104555.f_19013.f_6[iVar0] > 0f)
			{
				iLocal_196[iVar0] = system::ceil(Global_104555.f_19013.f_6[iVar0]);
			}
			else
			{
				iLocal_196[iVar0] = -1;
			}
			if (iVar0 == Global_103585)
			{
				func_263(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_400(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_396(&(uParam0->f_741.f_198));
				switch (Global_104555.f_19013.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_104555.f_19013.f_6[iVar0] <= 0f)
							{
								func_271(&Var5, 269f, 0f, 32f, 32f, 0);
								func_270(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_254)
								{
									func_391(&Var5, 0);
								}
								func_390(&Var5, 1);
								func_405("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_254)
								{
									func_389(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_103585)
				{
					func_396(&(uParam0->f_741.f_198));
				}
				func_392(&(uParam0->f_741.f_198));
				func_398(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				func_399(&(uParam0->f_741.f_198));
				func_390(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_399(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198));
				}
				func_399(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && iLocal_196[iVar0] > 1)
				{
					func_390(uParam0[iVar3 /*9*/], 1);
					func_390(uParam0[9 /*9*/], 1);
					func_405("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_398(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && IntToFloat(iLocal_196[iVar0]) > Local_45.f_106[iVar0])
				{
					func_390(uParam0[iVar3 /*9*/], 1);
					func_390(uParam0[9 /*9*/], 1);
					func_405("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_398(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && IntToFloat(iLocal_196[iVar0]) > (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					func_390(uParam0[iVar3 /*9*/], 1);
					func_390(uParam0[9 /*9*/], 1);
					func_405("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_398(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) > Local_45.f_112[iVar0] || iLocal_196[iVar0] == -1)
				{
					func_390(uParam0[iVar3 /*9*/], 1);
					func_390(uParam0[9 /*9*/], 1);
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_398(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x349A5770112EAA3C(0);
					func_405("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_388(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_390(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && !iLocal_196[iVar0] == -1)
				{
					func_390(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && !iLocal_196[iVar0] == -1)
				{
					func_390(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = system::round((255f * 0,3f));
				}
				func_405("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_405("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_405("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_399(&(uParam0->f_741.f_198));
				if (Global_104555.f_19013.f_6[Global_103585] > 0f)
				{
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_383(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), system::floor((Global_104555.f_19013.f_6[Global_103585] * 1000f)), 6, "", 0, 1);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
				}
				else
				{
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_398(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
				}
				func_398(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_45.f_18[Global_103585] > 0f)
				{
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_383(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), system::floor((Local_45.f_18[Global_103585] * 1000f)), 6, "", 0, 1);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
					func_399(&(uParam0->f_741.f_198));
				}
				else
				{
					func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0,0047f, 0,0055f);
					unk_0x349A5770112EAA3C(1);
					func_393(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0x349A5770112EAA3C(0);
					func_392(&(uParam0->f_741.f_198));
					func_399(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_382(&(uParam0->f_420[iVar1 /*8*/]));
				func_263(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_400(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_390(uParam0[iVar3 /*9*/], 1);
				switch (Global_104555.f_19013.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_390(uParam0[iVar3 /*9*/], 1);
						func_399(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_399(&(uParam0->f_741.f_198));
							if (Global_104555.f_19013.f_6[iVar0] <= 0f)
							{
								func_271(&Var5, 269f, 0f, 32f, 32f, 0);
								func_270(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6 = (Var5 + fLocal_197);
								if (!bLocal_254)
								{
									func_391(&Var5, 0);
								}
								func_390(&Var5, 1);
								func_405("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_254)
								{
									func_389(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_103585)
				{
					func_396(&(uParam0->f_741.f_198));
				}
				func_392(&(uParam0->f_741.f_198));
				func_398(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				func_399(&(uParam0->f_741.f_198));
				func_390(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_104555.f_19013.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_405("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_196[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					func_381(uParam0[iVar3 /*9*/]);
					func_405("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					func_380(uParam0[iVar3 /*9*/]);
					func_405("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					func_378(uParam0[iVar3 /*9*/]);
					func_405("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (func_377(0))
	{
		unk_0xFA3CE529DBB66C85(joaat("sp0_flying_ability"), &iVar7, -1);
	}
	else if (func_377(1))
	{
		unk_0xFA3CE529DBB66C85(joaat("sp1_flying_ability"), &iVar7, -1);
	}
	else if (func_377(2))
	{
		unk_0xFA3CE529DBB66C85(joaat("sp2_flying_ability"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0,0047f, 0,0055f);
		unk_0x4E55BC7DE7AF6FFC(1);
		Var8 = { uParam0->f_316[22 /*2*/] };
		Var9 = { uParam0->f_741.f_198 };
		if (!bLocal_254)
		{
			Var9.f_9 = (Var9.f_9 - 0,08f);
			func_389(&Var8, &Var9);
		}
		if (bLocal_254)
		{
			func_375(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			func_375(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1,55f, 5, 106f);
		}
		func_400(uParam0->f_420[14 /*8*/], 0, 0);
		func_405("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_398(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_392(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_103585 + 1, 16);
	func_390(uParam0[7 /*9*/], 1);
	func_405("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0,0047f, 0,0055f);
	unk_0x4E55BC7DE7AF6FFC(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_103585 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_316[16 /*2*/] };
	Var13 = { uParam0->f_741.f_198 };
	if (!bLocal_254)
	{
		Var13.f_9 = (Var13.f_9 - 0,108f);
		func_389(&Var12, &Var13);
	}
	if (bLocal_254)
	{
		func_375(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		func_375(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1,55f, 5, 106f);
	}
	func_400(uParam0->f_420[25 /*8*/], 0, 0);
	func_398(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar11, 0);
	func_392(&(uParam0->f_741.f_198));
	func_399(&(uParam0->f_741.f_198));
	func_398(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_398(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_396(&(uParam0->f_741.f_198));
	func_400(uParam0->f_420[22 /*8*/], 0, 0);
	func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_383(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), system::floor(Local_45.f_112[Global_103585]) * 1000, 6, "", 1, 0);
	func_392(&(uParam0->f_741.f_198));
	func_400(uParam0->f_420[23 /*8*/], 0, 0);
	func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_383(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), system::floor((((Local_45.f_112[Global_103585] - Local_45.f_106[Global_103585]) / 2f) + Local_45.f_106[Global_103585])) * 1000, 6, "", 1, 0);
	func_392(&(uParam0->f_741.f_198));
	func_400(uParam0->f_420[24 /*8*/], 0, 0);
	func_395(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_383(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), system::floor(Local_45.f_106[Global_103585]) * 1000, 6, "", 1, 0);
	func_392(&(uParam0->f_741.f_198));
	func_399(&(uParam0->f_741.f_198));
}

float func_375(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xFED8
{
	int iVar0;
	int iVar1;
	
	func_376(uParam3, 0);
	unk_0x359D94A1D62654F7(sParam1);
	iVar0 = unk_0x019EBC578ADE3C09(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x41226DC6540EC9AA())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_267(((system::to_float(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_267(((fParam7 + ((system::to_float(iParam6) + (system::to_float(iVar0) * 0,5f)) * fParam4)) - (fParam5 * 0,5f)), iVar1);
	return 0f;
}

void func_376(var uParam0, bool bParam1)//Position - 0xFF4F
{
	unk_0x8F5DFDE59FA7D0D0(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xEDC290CB1C56B732(uParam0->f_8, uParam0->f_9);
	}
	unk_0x8D95497078BC0E3B(uParam0->f_1, uParam0->f_2);
	unk_0xA54B8BFDEBB2AF89(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x39A6925DBA332248();
			unk_0x7985C5E9307C5D5B();
			break;
		
		case 3:
			unk_0x7985C5E9307C5D5B();
			break;
		
		case 2:
			unk_0x39A6925DBA332248();
			break;
	}
	if (bParam1)
	{
		unk_0x5A66A86A47AC3B57(4);
	}
}

bool func_377(int iParam0)//Position - 0xFFE8
{
	func_164();
	return iParam0 == Global_104555.f_2353.f_539.f_4301;
}

void func_378(var uParam0)//Position - 0x10007
{
	func_379(uParam0, 107);
}

void func_379(var uParam0, int iParam1)//Position - 0x10017
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_380(var uParam0)//Position - 0x1003F
{
	func_379(uParam0, 108);
}

void func_381(var uParam0)//Position - 0x1004F
{
	func_379(uParam0, 109);
}

void func_382(var uParam0)//Position - 0x1005F
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_383(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1007C
{
	char* sVar0;
	
	if (func_386())
	{
		func_376(uParam1, 0);
		unk_0x349A5770112EAA3C(iParam6);
		unk_0x0BC5BE26BB7006D2(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x76CCD673085CBF57(sVar0);
		unk_0xFD1DB5DD208735A3(iParam2, iParam3);
		unk_0xD3DA9EADE295C3C5(func_385(*uParam0), func_384(uParam0->f_1), 0);
	}
}

float func_384(float fParam0)//Position - 0x100D6
{
	return (fParam0 + fLocal_13);
}

float func_385(float fParam0)//Position - 0x100E3
{
	return (fParam0 + fLocal_12);
}

int func_386()//Position - 0x100F0
{
	if (func_387())
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

bool func_387()//Position - 0x1012F
{
	return Global_1312438;
}

void func_388(var uParam0)//Position - 0x1013B
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_389(float fParam0, var uParam1)//Position - 0x10158
{
	*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_8 = (((uParam1->f_8 - 0,5f) * 1,33f) + 0,5f);
	uParam1->f_9 = (((uParam1->f_9 - 0,5f) * 1,33f) + 0,5f);
}

void func_390(float fParam0, int iParam1)//Position - 0x101AC
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_391(float fParam0, bool bParam1)//Position - 0x101D2
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0,5f) * 1,33f) + 0,5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1,33f);
}

void func_392(var uParam0)//Position - 0x10206
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_393(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x10218
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_50(sVar0))
	{
		if (func_386())
		{
			func_376(uParam1, 0);
			unk_0x349A5770112EAA3C(iParam4);
			unk_0x0BC5BE26BB7006D2(iParam3);
			func_394(func_385(*uParam0), func_384(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_394(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x1025E
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam3);
}

void func_395(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0x10276
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_396(var uParam0)//Position - 0x102B0
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_397(uParam0, 2);
}

void func_397(var uParam0, int iParam1)//Position - 0x102CE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x31758B9A51671C43(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_398(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x102F6
{
	if (bParam3)
	{
		unk_0x5A66A86A47AC3B57(1);
	}
	func_393(fParam0, uParam1, sParam2, 0, 0);
}

void func_399(var uParam0)//Position - 0x10314
{
	func_397(uParam0, 1);
}

void func_400(struct<8> Param0, int iParam1, int iParam2)//Position - 0x10323
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_404(&Var0);
			break;
		
		case 1:
			func_403(&Var0);
			break;
		
		case 3:
			func_402(&Var0);
			break;
		
		case 4:
			func_401(&Var0);
			break;
	}
	if (func_386())
	{
		if (iParam2 == 1)
		{
			unk_0x09C2CBFA4CD804AC(func_385(Var0), func_384(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x09C2CBFA4CD804AC(func_385(Var0), func_384(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_401(var uParam0)//Position - 0x103DE
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_402(var uParam0)//Position - 0x103FE
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_403(var uParam0)//Position - 0x1041E
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_404(var uParam0)//Position - 0x10447
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_405(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10464
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_412(&Var0);
			break;
		
		case 1:
			func_411(&Var0);
			break;
		
		case 5:
			func_410(&Var0);
			break;
		
		case 6:
			func_409(&Var0);
			break;
		
		case 7:
			func_408(&Var0);
			break;
		
		case 8:
			func_407(&Var0);
			break;
		
		case 9:
			func_406(&Var0);
			break;
	}
	if (func_386())
	{
		unk_0x5A66A86A47AC3B57(iParam5);
		if (iParam3 == 1)
		{
			unk_0xEFB3EC0CDCC33841(sParam0, sParam1, func_385(Var0), func_384(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xEFB3EC0CDCC33841(sParam0, sParam1, func_385(Var0), func_384(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x5A66A86A47AC3B57(4);
	}
}

void func_406(var uParam0)//Position - 0x10569
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_407(var uParam0)//Position - 0x10583
{
	uParam0->f_7 = 2;
}

void func_408(var uParam0)//Position - 0x10590
{
	uParam0->f_7 = 5;
}

void func_409(var uParam0)//Position - 0x1059D
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_410(var uParam0)//Position - 0x105BA
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_411(var uParam0)//Position - 0x105D7
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_412(var uParam0)//Position - 0x10600
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_413(var uParam0, var uParam1)//Position - 0x10628
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_192 == 1)
	{
		return 1;
	}
	if (iLocal_193)
	{
		return 0;
	}
	if (system::timera() < 500)
	{
		return 1;
	}
	if (bLocal_191)
	{
		if (unk_0x58F436C557A0FD7A(2, 201))
		{
			iLocal_185 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(iLocal_185, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_192 = 1;
			iLocal_193 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0x58F436C557A0FD7A(2, 202))
		{
			iLocal_185 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(iLocal_185, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			unk_0x3E80C2F7BC665259(1);
			func_540(&(Local_45.f_119));
			iLocal_192 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x58F436C557A0FD7A(2, 202) || unk_0x58F436C557A0FD7A(2, 238))
	{
		iLocal_185 = unk_0xD0CA83418A236CB4();
		unk_0x4AFBCBFDE748D4E0(iLocal_185, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_259(&(Local_45.f_119), 0, 0, 1, 1);
		func_258(&(Local_45.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_258(&(Local_45.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&iLocal_187);
		iLocal_192 = 1;
		unk_0x3E80C2F7BC665259(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5() && bLocal_191 == 0)
	{
		if (unk_0x2E4EC2FA6A038490(2))
		{
			Global_4265875 = func_417(0,201f, 0,222f, 0,198f, 0,0375f, 0,034f, 5, 255, 0, 1);
			func_416(0, Global_103585, 1);
			if (func_415())
			{
				if (Global_4265875 == Global_103585)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_185 = unk_0xD0CA83418A236CB4();
					unk_0xA6C2E334E1C8C5C7(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_103585 = Global_4265875;
					func_540(&(Local_45.f_119));
				}
			}
		}
	}
	if (unk_0x58F436C557A0FD7A(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_104555.f_19013.f_12[Global_103585 /*8*/].f_4 == 0)
		{
			iLocal_185 = unk_0xD0CA83418A236CB4();
			unk_0xA6C2E334E1C8C5C7(iLocal_185, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_185 = unk_0xD0CA83418A236CB4();
			unk_0xA6C2E334E1C8C5C7(iLocal_185, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0x58F436C557A0FD7A(2, 188) || func_414(0, uParam1)) || unk_0xE8C126B7ADBB9D63(2, 241))
	{
		iVar1 = (Global_103585 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_185 = unk_0xD0CA83418A236CB4();
		unk_0xA6C2E334E1C8C5C7(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103585 = iVar1;
		func_540(&(Local_45.f_119));
	}
	if ((unk_0x58F436C557A0FD7A(2, 187) || func_414(1, uParam1)) || unk_0xE8C126B7ADBB9D63(2, 242))
	{
		iVar2 = Global_103585 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_185 = unk_0xD0CA83418A236CB4();
		unk_0xA6C2E334E1C8C5C7(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103585 = iVar2;
		func_540(&(Local_45.f_119));
	}
	return 1;
}

bool func_414(int iParam0, var uParam1)//Position - 0x108E6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x9473DAD46D61B987(2, 195);
	iVar2 = unk_0x9473DAD46D61B987(2, 196);
	if (unk_0xB89BB11E0945F6F0(iVar1) < 28 && unk_0xB89BB11E0945F6F0(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x53C562FD2B9E3AB0() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x53C562FD2B9E3AB0();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_415()//Position - 0x109AB
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

int func_416(int iParam0, var uParam1, bool bParam2)//Position - 0x109D2
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

int func_417(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x10AB2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return -1;
	}
	unk_0x4FB260623DD93924(2, 200, 1);
	unk_0x15F5D3F996CB934F();
	if (bParam8)
	{
		if (!unk_0x41226DC6540EC9AA())
		{
			fParam0 = (((fParam0 - 0,5f) * 1,33f) + 0,5f);
			fParam2 = (fParam2 * 1,33f);
		}
	}
	if (bParam7)
	{
		unk_0x73509F6FDA1DB386(76, 84);
		unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0xB3BC3A562B00E8B9(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x189EEBAACC5D380A();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x869308DF4F5FB0C3(2, 239);
	fVar3 = unk_0x869308DF4F5FB0C3(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = system::floor((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x73509F6FDA1DB386(76, 84);
			unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
			func_418(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x189EEBAACC5D380A();
		}
		else
		{
			func_418(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_418(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x10BEE
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_419()//Position - 0x10C1D
{
	int iVar0;
	
	switch (iLocal_186)
	{
		case 0:
			unk_0x3E80C2F7BC665259(1);
			unk_0xBCBC53983EC3B1BA("SP_SPR", 3);
			unk_0x128A5DCCD09CCA17("SPRRaces", false);
			unk_0x128A5DCCD09CCA17("MPHUD", false);
			iLocal_186 = 1;
			break;
		
		case 1:
			if (unk_0x1A0FBC430E1424B4("SP_SPR", 3))
			{
				if (unk_0xA51ADD51711B4A15("SPRRaces"))
				{
					if (unk_0xA51ADD51711B4A15("MPHUD"))
					{
						iLocal_186 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0xA68F7B004463AB6F(&(Local_45.f_119));
			Local_45.f_119 = 0;
			func_540(&(Local_45.f_119));
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 512);
			}
			func_137(1);
			unk_0x5BB655320D4DDEF6(1);
			unk_0x4BEFCD5DAE410A90(Local_45.f_1, 4);
			func_370();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_45.f_11)
			{
				iLocal_196[iVar0] = -1;
				iVar0++;
			}
			func_423(&uLocal_255);
			func_420();
			unk_0xA91E83FF512776B6("MinigameTransitionIn", 0, 1);
			iLocal_186 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_420()//Position - 0x10D25
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_104555.f_19013.f_12[iVar0 /*8*/] = { func_422(iVar0) };
		MemCopy(&(Local_45.f_24[iVar0 /*8*/]), {Global_104555.f_19013.f_12[iVar0 /*8*/]}, 8);
		Local_45.f_106[iVar0] = func_421(iVar0);
		Local_45.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_104555.f_19013.f_6[iVar0] > Local_45.f_112[iVar0] || Global_104555.f_19013.f_6[iVar0] <= 0f)
			{
				Global_104555.f_19013.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_104555.f_19013.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_104555.f_19013.f_12[0 /*8*/].f_4 = 1;
}

float func_421(int iParam0)//Position - 0x10DFA
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_422(int iParam0)//Position - 0x10E5F
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_423(var uParam0)//Position - 0x10ECF
{
	func_426();
	bLocal_254 = unk_0x41226DC6540EC9AA();
	func_298(uParam0);
	func_276(&(uParam0->f_741));
	func_424(uParam0);
}

void func_424(var uParam0)//Position - 0x10EF7
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x41226DC6540EC9AA();
	func_275(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_425(0,00278f, 720, 1)), 1);
	func_275(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_425(0,00417f, 720, 1)), 1);
	func_275(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_425(0,00417f, 720, 1)), 1);
	func_275(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_425(0,00417f, 720, 1)), 1);
	func_275(&(uParam0->f_316[17 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 162f, 1);
	func_275(&(uParam0->f_316[18 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 189f, 1);
	func_275(&(uParam0->f_316[19 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 216f, 1);
	func_275(&(uParam0->f_316[20 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 243f, 1);
	func_275(&(uParam0->f_316[21 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 270f, 1);
	func_275(&(uParam0->f_316[22 /*2*/]), (257f + func_274(0,0047f, 1280, 1)), 297f, 1);
	func_275(&(uParam0->f_316[16 /*2*/]), (513f + func_274(0,0047f, 1280, 1)), (299f - func_425(0,00278f, 720, 1)), 1);
	func_275(&(uParam0->f_316[4 /*2*/]), (769f + func_274(0,0047f, 1280, 1)), 297f, 1);
	func_275(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_275(&(uParam0->f_316[8 /*2*/]), (769f + func_274(0,0047f, 1280, 1)), 351f, 1);
	func_275(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_275(&(uParam0->f_316[6 /*2*/]), (769f + func_274(0,0047f, 1280, 1)), (324f - func_425(0,00278f, 720, 1)), 1);
	func_275(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_425(0,00278f, 720, 1)), 1);
	func_275(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_275(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_275(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_271(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0x31758B9A51671C43(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_270(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_271(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_270(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_270(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_270(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_270(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_270(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[6 /*9*/], (486f + func_274(0,0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_270(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_270(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_270(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[13 /*9*/], 770,5f, 374,5f, 80f, 80f, 1);
	func_270(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[12 /*9*/], 856f, 374,5f, 80f, 80f, 1);
	func_270(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_271(uParam0[11 /*9*/], 941,5f, 374,5f, 80f, 80f, 1);
	func_270(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_265(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_264(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_265(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_264(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_265(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_264(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_265(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_263(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_265(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_263(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_265(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_263(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_265(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_263(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_263(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_263(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_265(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_263(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_263(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_265(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_263(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_263(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_263(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_263(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_265(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_263(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_265(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_263(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_265(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_263(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0,5f) * 1,33f) + 0,5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1,33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0,5f) * 1,33f) + 0,5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0,5f) * 1,33f) + 0,5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1,33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_425(float fParam0, int iParam1, bool bParam2)//Position - 0x119FC
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x9A72C8F89A53C2D1(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return system::to_float(system::round(fVar1));
	}
	return fVar1;
}

void func_426()//Position - 0x11A2E
{
	int iVar0;
	
	unk_0x8C6A66A466AE31CF();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_427(var uParam0)//Position - 0x11A57
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_428(var uParam0, bool bParam1)//Position - 0x11B25
{
	int iVar0;
	
	if (unk_0x5616476F69B90F14())
	{
		if (!iLocal_194)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_456(Local_45.f_10, &(Local_45.f_65[Local_45.f_10 /*8*/]));
			if (bParam1)
			{
				func_453(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_194 = 1;
				return 1;
			}
			else if (func_429(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_194 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_194 = 1;
	}
	return 0;
}

int func_429(int iParam0, float fParam1, int iParam2)//Position - 0x11C24
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_453(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_430(&uLocal_1242))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_430(var uParam0)//Position - 0x11C66
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_452(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_451(unk_0x9EB17624F44A8DA4()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_450(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_449(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0CA30140FFC760AC(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_448(uParam0->f_44, iVar4))
					{
						if (func_447(uParam0->f_44, 4, iVar4))
						{
							unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xEE7624F5005BED95(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_446(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_448(uParam0->f_44, iVar4))
								{
									if (func_447(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = unk_0x94F79AC74CA452DD(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = unk_0xCC9CBA19D9301571(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xA9D092030AE0E916();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_445();
				if (Global_1835013.f_4)
				{
					if (func_444(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xE22885E349E8965D(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x3A711520F83BAE98() && func_443())
			{
				if (func_442())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_444(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				unk_0xE22885E349E8965D(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_431(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_449(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xEE7624F5005BED95(0, &Var0);
						if (unk_0x74C475EB8E73D398(&(Var0.f_13), ""))
						{
							Global_979643.f_1 = -1;
						}
						else
						{
							Global_979643.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979643.f_1 = -1;
					}
					unk_0xA9D092030AE0E916();
				}
				else
				{
					Global_979643.f_1 = -1;
				}
				Global_1835013 = 999;
				func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_431(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x1208A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_438() && !func_434())
			{
				func_432(*uParam2);
				if (bParam5)
				{
					if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x0C2485FB694DCEB1(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xB9947ABF0431F783(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x1EA93F2CF7ED697D(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_432(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0x121C2
{
	Global_1835008 = 1;
	func_433(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_433(var uParam0, bool bParam1, bool bParam2)//Position - 0x121ED
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

int func_434()//Position - 0x1222A
{
	if (unk_0x0F30C1F1717A6437() && !func_435())
	{
		return 1;
	}
	return 0;
}

bool func_435()//Position - 0x12248
{
	return func_436(unk_0x9EB17624F44A8DA4());
}

int func_436(int iParam0)//Position - 0x12258
{
	switch (func_437(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_437(int iParam0)//Position - 0x122B8
{
	return Global_1595693[iParam0 /*680*/].f_196;
}

int func_438()//Position - 0x122CB
{
	if (unk_0x7F3CC73A6E3ECD53() || Global_1835008)
	{
		func_439();
		return 1;
	}
	return 0;
}

void func_439()//Position - 0x122ED
{
	if (func_440(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xB480C77695DDCB0B(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_362(&(Global_1835008.f_1));
	}
}

int func_440(var uParam0, int iParam1, bool bParam2)//Position - 0x12328
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_441(uParam0, bParam2, 0);
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

void func_441(var uParam0, bool bParam1, bool bParam2)//Position - 0x12386
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

bool func_442()//Position - 0x123CB
{
	return unk_0xC80D31E4B587871C(Global_971064.f_8, 1);
}

var func_443()//Position - 0x123DE
{
	return Global_2455152.f_3;
}

int func_444(int iParam0)//Position - 0x123EC
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_445()//Position - 0x124BD
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_446(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1251D
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

int func_447(int iParam0, int iParam1, int iParam2)//Position - 0x1252D
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xA87731E5249F4E3E(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_448(int iParam0, int iParam1)//Position - 0x1262F
{
	if (unk_0x9F44B8E99C907628(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_449(var uParam0, var uParam1)//Position - 0x1268A
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_450(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x126A5
{
	switch (*uParam0)
	{
		case 0:
			if (!func_438() && !func_434())
			{
				func_432(*uParam2);
				if (unk_0x5D0FE7B4F9908F64(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_451(int iParam0)//Position - 0x12759
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_452(int iParam0)//Position - 0x12770
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_453(int iParam0, float fParam1, int iParam2)//Position - 0x12792
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_455(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_454(817, 131, -system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_454(817, 131, 0, 0f, 0);
		}
		func_454(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_454(817, 2, system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_454(817, 147, system::ceil((fParam1 * 100f)) * 10, 0f, 0);
		func_454(817, 149, 0, 0f, 0);
		func_454(817, 148, 0, 0f, 0);
		func_454(817, 109, 1, 0f, 0);
		func_454(817, 157, iVar0, 0f, 0);
		func_454(817, 158, iVar1, 0f, 0);
		func_454(817, 86, iVar2, 0f, 0);
	}
}

void func_454(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x12959
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0xEC4FA25E0FA458DA(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0CA30140FFC760AC(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_447(iParam0, 4, iVar1))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x9F44B8E99C907628(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_455(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x12A74
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
				Var2 = { func_451(unk_0x9EB17624F44A8DA4()) };
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

void func_456(int iParam0, char[4] cParam1)//Position - 0x12BA8
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&vVar0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&vVar0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&vVar0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&vVar0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_457(&uLocal_1242, 86, &vVar0, cParam1, -1, -1, 0, 0);
}

void func_457(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x12C3B
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xAB019B170BF1309C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_464())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_464())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_464())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_464())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_464())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_464())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_464())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_463(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_55 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_462(Global_4456448.f_143970) || func_459(Global_4456448.f_143970))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835390.f_2708)
	{
		if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835390.f_2826 = func_458(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_458(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x17110
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_452(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x8B948C59217A295D(&cVar0);
}

var func_459(int iParam0)//Position - 0x17182
{
	return (func_461(iParam0) || func_460(iParam0));
}

bool func_460(int iParam0)//Position - 0x1719C
{
	return iParam0 == 44;
}

bool func_461(int iParam0)//Position - 0x171A9
{
	return iParam0 == 45;
}

bool func_462(int iParam0)//Position - 0x171B6
{
	return iParam0 == 12;
}

struct<6> func_463(int iParam0)//Position - 0x171C3
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_464()//Position - 0x1734C
{
	if ((((((((Global_4456448.f_50256 == 1 || Global_4456448.f_50256 == 3) || Global_4456448.f_50256 == 5) || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 19) || Global_4456448.f_50256 == 8) || Global_4456448.f_50256 == 9) || Global_4456448.f_50256 == 11) || Global_4456448.f_50256 == 13)
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0, bool bParam1)//Position - 0x173FD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x4B64A8D052027742() && Global_1840922.f_2 > 0)
	{
		func_362(&Global_1840922);
		func_362(&(Global_1840922.f_49));
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_474(0);
	}
	Global_1840922.f_2 = unk_0x4B64A8D052027742();
	iVar1 = -1;
	if (unk_0xFD6215BABFD843F2())
	{
		if (unk_0x5E0DB1D22F6E9304() == 0)
		{
			iVar1 = unk_0xFDE2FB8906E5B1C3();
		}
	}
	if ((unk_0xFD6215BABFD843F2() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_472() && unk_0xDEC0EB6EAE9BC575()))
	{
		if (unk_0x961852460B030BEE())
		{
			func_469(&(Global_1840922.f_3), func_471(&(Global_1840922.f_3)));
			if (!unk_0xC80D31E4B587871C(*iParam0, 4))
			{
				unk_0x872F1C1F8587CCC7(iParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_467(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_472())
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xC80D31E4B587871C(*iParam0, 0))
			{
				if (!unk_0xF2B58F79D29425B4(2, 201))
				{
					unk_0x872F1C1F8587CCC7(iParam0, 0);
				}
			}
			else if (unk_0x58F436C557A0FD7A(2, 201))
			{
				func_362(&(Global_1840922.f_49));
				func_362(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_474(0);
				return 1;
			}
		}
	}
	else
	{
		func_469(&(Global_1840922.f_3), func_471(&(Global_1840922.f_3)));
		if ((func_466(&(Global_1840922.f_49)) && !func_440(&(Global_1840922.f_49), 2000, 1)) && !unk_0xDEC0EB6EAE9BC575())
		{
			unk_0x872F1C1F8587CCC7(iParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_467(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xC80D31E4B587871C(*iParam0, 3))
		{
			if (!unk_0xC80D31E4B587871C(*iParam0, 1))
			{
				unk_0xB50D7608173794C6(0);
				unk_0x872F1C1F8587CCC7(iParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_467(&(Global_1840922.f_3), 0);
			}
		}
		if (func_466(&Global_1840922))
		{
			if (!func_440(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xDEC0EB6EAE9BC575())
				{
					if (unk_0x73955C3D74019930())
					{
						ui::_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x04D7390E1D7464B7())
					{
						if (!unk_0xC80D31E4B587871C(*iParam0, 0))
						{
							if (!unk_0xF2B58F79D29425B4(2, 201))
							{
								unk_0x872F1C1F8587CCC7(iParam0, 0);
							}
						}
						else if (unk_0x58F436C557A0FD7A(2, 201))
						{
							func_362(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_474(0);
							return 1;
						}
					}
				}
				else
				{
					func_362(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_474(0);
					return 1;
				}
			}
			else if (unk_0xC80D31E4B587871C(*iParam0, 3))
			{
				if (unk_0x73955C3D74019930())
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (!unk_0xF2B58F79D29425B4(2, 201))
					{
						unk_0x872F1C1F8587CCC7(iParam0, 0);
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 201))
				{
					func_362(&(Global_1840922.f_49));
					func_362(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_474(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x73955C3D74019930())
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x04D7390E1D7464B7())
				{
					if (!unk_0xC80D31E4B587871C(*iParam0, 0))
					{
						if (!unk_0xF2B58F79D29425B4(2, 201))
						{
							unk_0x872F1C1F8587CCC7(iParam0, 0);
						}
					}
					else if (unk_0x58F436C557A0FD7A(2, 201))
					{
						func_362(&(Global_1840922.f_49));
						func_362(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_474(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_466(var uParam0)//Position - 0x17874
{
	return uParam0->f_1;
}

void func_467(var uParam0, bool bParam1)//Position - 0x17880
{
	func_468(uParam0);
	if (bParam1)
	{
		func_474(0);
	}
	uParam0->f_35 = 1;
}

void func_468(var uParam0)//Position - 0x1789D
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_469(var uParam0, int iParam1)//Position - 0x178B8
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_470(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0x6223D539BCD39E76(uParam0->f_34);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x854FACC4E5F40C82(&(uParam0->f_17));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0x6223D539BCD39E76(uParam0->f_34);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x854FACC4E5F40C82(&(uParam0->f_17));
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0xFD1DB5DD208735A3(uParam0->f_33, 70);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_470(var uParam0)//Position - 0x179B6
{
	uParam0->f_35 = 0;
}

int func_471(var uParam0)//Position - 0x179C3
{
	return uParam0->f_35;
}

int func_472()//Position - 0x179CF
{
	if (func_473())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_473()//Position - 0x179EF
{
	return Global_2457327;
}

void func_474(bool bParam0)//Position - 0x179FB
{
	unk_0x6F9D12DB7F437EA4();
	if (bParam0)
	{
		unk_0xC01EC70746CD8A05();
	}
}

void func_475(var uParam0, int iParam1, char[4] cParam2)//Position - 0x17A10
{
	func_152(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(7);
	func_456(iParam1, cParam2);
	func_476(uParam0, &uLocal_1242);
}

void func_476(var uParam0, var uParam1)//Position - 0x17A49
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_433(&(Global_1840922.f_49), 1, 0);
	unk_0x873070BEE2844FE5();
	func_536();
	func_535(0);
	unk_0x36853D5037847BF3();
	func_533();
	unk_0x553231E7FC3C570D(10);
	func_532(1);
	func_531(1);
	if (!func_435())
	{
		if (!unk_0x771D0F8F56A5FE6C("LEADERBOARD_SCENE"))
		{
			unk_0xE859EF37EA7362D3("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam1->f_42, 3))
	{
		*uParam0 = func_353();
		unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 3);
	}
	Var10 = { func_451(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (((!unk_0xE9F0A7BEA240607F() || !unk_0x5616476F69B90F14()) || (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x5616476F69B90F14())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xE9F0A7BEA240607F())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xC80D31E4B587871C(uParam1->f_42, 1))
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x271AA5469AF471B3();
				func_530(*uParam0, Global_1835390.f_2780);
				if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_452(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835390.f_2780.f_9 };
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_528(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 4);
				func_527(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 5);
				func_527(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 6);
				func_527(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 1);
				func_526(*uParam0);
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
				unk_0x3E80C2F7BC665259(1);
			}
			else
			{
				func_526(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_498(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
				if (!unk_0xC80D31E4B587871C(uParam1->f_42, 0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271AA5469AF471B3();
					func_530(*uParam0, Global_1835390.f_2780);
					if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_452(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_528(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 0);
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 4);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 5);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 6);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 7);
						func_497(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_362(&(Global_1835390.f_2823));
				}
				else if (func_440(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 4);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 5);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 6);
							func_527(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 7);
						func_497(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_362(&(Global_1835390.f_2823));
				}
				func_526(*uParam0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 0);
				if (!unk_0xC80D31E4B587871C(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271AA5469AF471B3();
					func_530(*uParam0, Global_1835390.f_2780);
					if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_452(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_529(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_528(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xC80D31E4B587871C(uParam1->f_42, 6))
					{
						func_365(&Global_1839721);
						func_493(uParam1, &Global_1839721);
						func_492(uParam1, &Global_1839721);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_452(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 4);
									func_527(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_452(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_527(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_527(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 6);
									if (!unk_0x851744C54849FD9D())
									{
										bVar14 = true;
									}
									else if (!unk_0xFF3CFF3D74A5AD30())
									{
										bVar14 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_452(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_527(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_527(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_446(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_452(uParam1->f_44))
								{
									unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &uVar11);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0x74C475EB8E73D398(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_491(&(Global_1839721[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x872F1C1F8587CCC7(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x872F1C1F8587CCC7(&iVar9, 3);
											}
										}
									}
									if (func_452(uParam1->f_44))
									{
										Var6 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xAB019B170BF1309C(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0x74C475EB8E73D398(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_490(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &Var6, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_490(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar5 = false;
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_485(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_485(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_482(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_482(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_481();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x872F1C1F8587CCC7(&iVar9, 2);
											unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_480(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 4);
						func_527(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 5);
						func_527(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 6);
						func_527(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 1);
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
					func_526(*uParam0);
					unk_0x3E80C2F7BC665259(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_480(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_526(*uParam0);
					func_477(uParam0, uParam1);
				}
			}
		}
	}
}

void func_477(var uParam0, var uParam1)//Position - 0x18A27
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x4C4813CAAD70E814(2))
	{
		unk_0x15F5D3F996CB934F();
		unk_0x01B48CB2F72AE113(2, 239);
		unk_0x01B48CB2F72AE113(2, 240);
		unk_0x01B48CB2F72AE113(2, 237);
		unk_0x01B48CB2F72AE113(2, 238);
		unk_0x4FB260623DD93924(2, 200, 1);
		if (unk_0x5A632962B08A1872(2, 241))
		{
			unk_0x47EF3E74CCFB613A(2, 188, 1f);
		}
		if (unk_0x5A632962B08A1872(2, 242))
		{
			unk_0x47EF3E74CCFB613A(2, 187, 1f);
		}
		if (unk_0xAB5E04183ECB28D3(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					bVar0 = true;
				}
				else
				{
					unk_0x47EF3E74CCFB613A(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x4C4813CAAD70E814(2))
	{
		func_479(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xC80D31E4B587871C(uParam1->f_246, 0))
		{
			if ((unk_0xF2B58F79D29425B4(2, 188) || unk_0x5A632962B08A1872(2, 188)) || iVar6 < -100)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 0);
				func_362(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_478(uParam1, 188))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 0);
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_246, 1))
		{
			if ((unk_0xF2B58F79D29425B4(2, 187) || unk_0x5A632962B08A1872(2, 187)) || iVar6 > 100)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1++;
				unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 1);
				func_362(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_478(uParam1, 187))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam1->f_246, 3))
	{
		if ((unk_0xF2B58F79D29425B4(2, 204) || unk_0x4CD14B4B1E8BD8BA(2, 204)) || unk_0xE8C126B7ADBB9D63(2, 237))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 3);
			func_362(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_478(uParam1, 204))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_480(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_480(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
		}
		if (func_446(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_246, 2))
			{
				if (unk_0xF2B58F79D29425B4(2, 217) || unk_0x4CD14B4B1E8BD8BA(2, 217))
				{
					if (!unk_0x04D7390E1D7464B7())
					{
						unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", true);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 2);
						unk_0x695CFD2C14C7E4A7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xF2B58F79D29425B4(2, 217))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_478(var uParam0, int iParam1)//Position - 0x18DC8
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_479(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xF2B58F79D29425B4(2, iParam1) && !unk_0x5A632962B08A1872(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_440(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xF2B58F79D29425B4(2, iParam1) && !unk_0x5A632962B08A1872(2, iParam1)) || func_440(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_479(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x18E67
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

void func_480(int iParam0, int iParam1, int iParam2)//Position - 0x18F3C
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT_STATE");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0x271AA5469AF471B3();
}

void func_481()//Position - 0x18F5F
{
	unk_0x271AA5469AF471B3();
}

void func_482(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x18F6B
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x32AD2F36F6EF5A1F(fParam15, 2);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(system::floor(fParam15));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x485A7F3B0AD1A79D())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_484(fParam15);
					}
					else
					{
						fParam15 = func_483(fParam15);
					}
				}
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x32AD2F36F6EF5A1F(fParam15, 2);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 0:
			break;
	}
}

float func_483(float fParam0)//Position - 0x1908D
{
	return (fParam0 / 0,3048f);
}

float func_484(float fParam0)//Position - 0x1909D
{
	return (fParam0 / 1609,344f);
}

void func_485(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x190AD
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(-iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 6);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x7E099EB35339C80D("SC_LB_EMPTY");
					unk_0x9748595E4799A2CF();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 6);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xA8698D7EBA72C3DA(iParam15))
				{
					unk_0x7E099EB35339C80D("SCLB_VEH_CUST");
					unk_0xA6D2B267C377D7B2(unk_0x8C8DF9FA5116BB9A(iParam15));
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("SC_LB_EMPTY");
					unk_0x9748595E4799A2CF();
				}
			}
			else if (unk_0xA8698D7EBA72C3DA(iParam15))
			{
				unk_0x7E099EB35339C80D(unk_0x8C8DF9FA5116BB9A(iParam15));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 8:
			if (func_489(iParam15) != 0)
			{
				unk_0x7E099EB35339C80D(func_486(func_489(iParam15), 0));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x485A7F3B0AD1A79D())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = system::floor(func_484(system::to_float(iParam15)));
					}
					else
					{
						iParam15 = system::floor(func_483(system::to_float(iParam15)));
					}
				}
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_486(int iParam0, bool bParam1)//Position - 0x19447
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		default:
			if (func_488(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_487(&(Var0.f_31));
				}
				else
				{
					return func_487(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_487(var uParam0)//Position - 0x1A047
{
	return uParam0;
}

int func_488(int iParam0, var uParam1)//Position - 0x1A051
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

int func_489(int iParam0)//Position - 0x1A08C
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_490(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x1A1FF
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	if (iParam3 > 0)
	{
		unk_0x7E099EB35339C80D("NUMBER");
		unk_0x6223D539BCD39E76(iParam3);
		unk_0x9748595E4799A2CF();
	}
	else
	{
		unk_0x7E099EB35339C80D("SC_LB_EMPTY");
		unk_0x9748595E4799A2CF();
	}
	unk_0x8686005F83E832AE(sParam4);
	unk_0x8686005F83E832AE(sParam5);
}

int func_491(var uParam0, var uParam1)//Position - 0x1A251
{
	if (!func_446(*uParam0))
	{
		return 0;
	}
	if (!func_446(*uParam1))
	{
		return 0;
	}
	if (unk_0x621B42AE8C13A226(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0, var uParam1)//Position - 0x1A28B
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 5) && !unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_493(var uParam0, var uParam1)//Position - 0x1A3FC
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 5) && !unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_496(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_496(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_496(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_494(uParam1);
	}
}

void func_494(var uParam0)//Position - 0x1A4B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_451(unk_0x9EB17624F44A8DA4()) };
	if (unk_0xDAA07938DBBD5115(Global_1835390.f_2826))
	{
		iVar4 = unk_0x82B059ADE497253C(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_495(&Global_1839591);
				iVar2 = 0;
				unk_0xC51C24039D0684CA(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_491(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xC80D31E4B587871C(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_495(var uParam0)//Position - 0x1A6D1
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_496(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A747
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_451(unk_0x9EB17624F44A8DA4()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = system::floor(system::to_float((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_497(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x1A9F0
{
	unk_0x872F1C1F8587CCC7(&iParam2, 7);
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0x7E099EB35339C80D(sParam3);
	unk_0xDED957EFB8EBDAF3();
	unk_0x271AA5469AF471B3();
}

int func_498(var uParam0)//Position - 0x1AA24
{
	if (!Global_1835388)
	{
		if (!func_466(&(Global_1835390.f_2827)))
		{
			func_441(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_440(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xE9F0A7BEA240607F() || !unk_0x5616476F69B90F14()) || (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())) || Global_1835390.f_2832 != 0)
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 4))
	{
		func_525(uParam0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_523(uParam0))
	{
		return 0;
	}
	if (!func_521(uParam0))
	{
		return 0;
	}
	if (!func_514(uParam0))
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		func_365(&Global_1839721);
		func_493(uParam0, &Global_1839721);
		func_492(uParam0, &Global_1839721);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 6);
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 7))
	{
		if (!func_466(&(Global_1835390.f_2830)))
		{
			func_441(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_440(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 7);
		}
		if (func_511(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_508(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_502(&Global_1839721))
		{
			func_499(&Global_1839721);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 7);
			func_499(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_499(var uParam0)//Position - 0x1ABE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_501(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_500(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_495(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x74C475EB8E73D398(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_446((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1839591.f_61), 0);
			}
			unk_0x872F1C1F8587CCC7(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xC80D31E4B587871C(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			unk_0x07D3AFB23B70B97F(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_225(unk_0x9EB17624F44A8DA4()) };
}

void func_500(int iParam0, int iParam1)//Position - 0x1ADD3
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xDAA07938DBBD5115(Global_1838575.f_81[iParam1]))
		{
			unk_0x1ABBB6404F13C38C(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xDAA07938DBBD5115(iParam0))
		{
			unk_0x1ABBB6404F13C38C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_501(int iParam0)//Position - 0x1AE4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xDAA07938DBBD5115(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x12B40AAFCD236FA4(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_502(var uParam0)//Position - 0x1AEE2
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_506(uParam0);
			if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_446((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_505(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_503(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_446((uParam0[iVar0 /*100*/])->f_32) && func_446(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x621B42AE8C13A226(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_503(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1B085
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x8C0754E02475E0AE())
			{
			}
			else
			{
				unk_0xB5EFDB00213645DF();
				unk_0x87581986560DE8DD(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x8C0754E02475E0AE())
			{
				if (unk_0xFCDA894345E1CE74())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x942604BF4EFDE42D(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_504(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x8C0754E02475E0AE())
			{
				unk_0xEFCD5E1CC442F83B();
			}
			else
			{
				unk_0xB5EFDB00213645DF();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_504(var uParam0, char* sParam1)//Position - 0x1B13E
{
	unk_0x22889E844C3772CE(uParam0, 35, sParam1);
}

int func_505(var uParam0, var uParam1)//Position - 0x1B150
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_446(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x621B42AE8C13A226(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_506(var uParam0)//Position - 0x1B18F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_507(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x8C0754E02475E0AE())
		{
			unk_0xB5EFDB00213645DF();
		}
	}
	if (unk_0x8C0754E02475E0AE())
	{
		unk_0xEFCD5E1CC442F83B();
	}
	Global_1841018.f_206 = 0;
}

void func_507(var uParam0)//Position - 0x1B200
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

int func_508(var uParam0)//Position - 0x1B248
{
	int iVar0;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		return 1;
	}
	else if (unk_0x177281F5FA205A38())
	{
		if (!func_510(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_509(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_509(var uParam0, var uParam1, char* sParam2)//Position - 0x1B2AC
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_446(*uParam1))
			{
				if (!unk_0xC3E4E13EDB2F7D88(uParam1))
				{
					if (unk_0x177281F5FA205A38())
					{
						if (unk_0x8AF3CF4F442045D9(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x04E8D1E1170F25E1())
					{
						if (unk_0x8AF3CF4F442045D9(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x7ED645C78531134E(uParam1), 64);
						if (unk_0x8A81E55A71641BC1())
						{
						}
						else if (unk_0xFD6215BABFD843F2())
						{
						}
						else if (unk_0xB9D80B12FE4456A5())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xC3E4E13EDB2F7D88(uParam1))
			{
				if (!unk_0xF433424C80A7F6F1())
				{
					if (unk_0xDA8F35ED05C0DEC4())
					{
						StringCopy(sParam2, unk_0x7ED645C78531134E(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_510(var uParam0)//Position - 0x1B3B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x177281F5FA205A38())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_507(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_446((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xB2CD7FC41B52C9AB(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6FF071973F3F6F18((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_446((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_511(var uParam0)//Position - 0x1B53F
{
	int iVar0;
	
	if (unk_0x177281F5FA205A38())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_513(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_512(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_512(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0x1B5D2
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB019B170BF1309C(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCE1B21C2EC68CB5(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_446(Var0))
			{
				if (!unk_0xC3E4E13EDB2F7D88(&Var0))
				{
					if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
					{
						if (unk_0x8AF3CF4F442045D9(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x7ED645C78531134E(&Var0), 64);
						if (unk_0x8A81E55A71641BC1())
						{
						}
						else if (unk_0xFD6215BABFD843F2())
						{
						}
						else if (unk_0xB9D80B12FE4456A5())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xC3E4E13EDB2F7D88(&Var0))
			{
				if (!unk_0xF433424C80A7F6F1())
				{
					if (unk_0xDA8F35ED05C0DEC4())
					{
						StringCopy(sParam17, unk_0x7ED645C78531134E(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_513(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x1B6EA
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x177281F5FA205A38())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB019B170BF1309C(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCE1B21C2EC68CB5(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_446(Var1[0 /*13*/]))
			{
				if (!unk_0xC3E4E13EDB2F7D88(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xB2CD7FC41B52C9AB(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6FF071973F3F6F18(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_514(var uParam0)//Position - 0x1B7E6
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_451(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835390.f_2775[iVar9] = -1;
			Global_1835390.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x15DBBAF9E2085C7A())
			{
				if (unk_0xA84F967541249268(&Var12))
				{
					if (unk_0x5CF21D71A8C4CFA6(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_431(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_520(), 0, 0, 0))
			{
				func_449(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_520())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xEE7624F5005BED95(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_491(&Var0, &Var12) || func_491(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_519(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xEE7624F5005BED95(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_520() && iVar5 == 0)
								{
									func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar9] = 0;
									Global_1835390.f_2704[iVar9]++;
								}
								if (func_520() && (func_491(&Var0, &Var12) || func_491(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_491(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835390.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_517(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_452(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835390.f_2704[iVar9]++;
						}
						if (!func_520())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_519(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar7, &Var0);
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_520() && iVar5 == iVar7)
								{
									if (!func_491(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_520() && (func_491(&Var0, &Var12) || func_491(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									if (func_446(Var0) && !func_491(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_491(&Var0, &Var12))
										{
											if (Global_1835390.f_2775[iVar9] < 0)
											{
												Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_517(uParam0->f_44))
										{
											iVar4 = unk_0x94F79AC74CA452DD(iVar7, Global_1835390.f_2709);
											if (iVar4 == 1)
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_452(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(iVar7, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(iVar7, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_519(&Var0);
							iVar7++;
						}
						unk_0xA9D092030AE0E916();
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835390.f_2775[iVar9] == -1 && func_520())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1835390.f_2704[iVar9]++;
						}
						unk_0xA9D092030AE0E916();
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_516(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_449(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xEE7624F5005BED95(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835390.f_2704[iVar9] < 12 || bVar10)
							{
								if (func_520() && (func_491(&Var0, &Var12) || func_491(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_517(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_452(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835390.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_517(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(iVar2, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_452(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(iVar2, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(iVar2, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_519(&Var0);
							iVar2++;
						}
					}
					unk_0xA9D092030AE0E916();
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xA9D092030AE0E916();
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar9);
					Global_1835390.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835390.f_2775[iVar9] == -1 && func_520())
				{
					if (Global_1835390.f_2704[iVar9] >= 1)
					{
						func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
					Global_1835390.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_515(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_515(int iParam0, int iParam1)//Position - 0x1C61B
{
	int iVar0;
	
	if ((func_520() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_520())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_516(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x1C740
{
	switch (*uParam0)
	{
		case 0:
			if (!func_438() && !func_434())
			{
				func_432(*uParam2);
				if (unk_0x03C36DFE4351B0CC(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x1C7F6
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_518(var uParam0, char* sParam1, int iParam2)//Position - 0x1C854
{
	int iVar0;
	int iVar1;
	
	if (func_452(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 64);
		sParam1->f_32 = { func_451(unk_0x9EB17624F44A8DA4()) };
	}
	sParam1->f_59 = iParam2;
	if (func_517(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_519(var uParam0)//Position - 0x1C961
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_520()//Position - 0x1CA0F
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_521(var uParam0)//Position - 0x1CA2C
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_451(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x806EA87864D816ED();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_520())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_522(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar8, 0, 100))
				{
					func_449(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
					{
						if (func_520())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xEE7624F5005BED95(iVar6, &Var0);
									if (func_452(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_491(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_519(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_520() && iVar4 == 0)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								Global_1835390.f_2775[iVar9] = 0;
								Global_1835390.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xEE7624F5005BED95(0, &Var0);
							if (func_520() && (func_491(&Var0, &Var10) || func_491(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_446(Var0) && Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_491(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_517(uParam0->f_44))
								{
									iVar7 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
									if (iVar7 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_452(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835390.f_2708)
								{
									if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar2]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_519(&Var0);
								unk_0xA9D092030AE0E916();
								func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar9] == -1 && func_520())
								{
									if (Global_1835390.f_2704[iVar9] >= 1)
									{
										func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
									Global_1835390.f_2704[iVar9]++;
								}
								return 0;
							}
							func_519(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_519(&Var0);
							unk_0xA9D092030AE0E916();
							func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar9] == -1 && func_520())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_520())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar6, &Var0);
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_520() && iVar4 == iVar6)
								{
									if (!func_491(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_520() && (func_491(&Var0, &Var10) || func_491(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_446(Var0) && !func_491(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_491(&Var0, &Var10))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_517(uParam0->f_44))
										{
											iVar7 = unk_0x94F79AC74CA452DD(iVar6, Global_1835390.f_2709);
											if (iVar7 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_452(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(iVar6, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(iVar6, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_519(&Var0);
							iVar6++;
						}
						unk_0xA9D092030AE0E916();
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar9] == -1 && func_520())
						{
							if (Global_1835390.f_2704[iVar9] >= 1)
							{
								func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_518(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
							Global_1835390.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_515(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1D42F
{
	switch (*uParam0)
	{
		case 0:
			if (!func_438() && !func_434())
			{
				func_432(*uParam2);
				if (stats::leaderboards2_read_friends_by_row(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_523(var uParam0)//Position - 0x1D4EB
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_451(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835390.f_2775[iVar10] = -1;
			Global_1835390.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_524(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_431(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_520(), 0, 0, 0))
			{
				func_449(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_520())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xEE7624F5005BED95(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_491(&Var1, &Var0) || func_491(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_519(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xEE7624F5005BED95(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar10] < 12)
							{
								if (func_520() && iVar6 == 0)
								{
									func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835390.f_2775[iVar10] = 0;
									Global_1835390.f_2704[iVar10]++;
								}
								if (func_520() && (func_491(&Var1, &Var0) || func_491(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_491(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835390.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_517(uParam0->f_44))
									{
										iVar5 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar5 == 1)
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_452(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835390.f_2704[iVar10]++;
						}
						if (!func_520())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_519(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar8, &Var1);
							if (Global_1835390.f_2704[iVar10] < 12 && Var1.f_96 > 1)
							{
								if (func_520() && iVar6 == iVar8)
								{
									if (!func_491(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
										Global_1835390.f_2704[iVar10]++;
									}
								}
								if (func_520() && (func_491(&Var1, &Var0) || func_491(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar10] < 12)
								{
									if (func_446(Var1) && !func_491(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_491(&Var1, &Var0))
										{
											if (Global_1835390.f_2775[iVar10] < 0)
											{
												Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_517(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(iVar8, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_452(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(iVar8, Global_1835390.f_2710[iVar3]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(iVar8, Global_1835390.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835390.f_2704[iVar10]++;
									}
								}
							}
							func_519(&Var1);
							iVar8++;
						}
						unk_0xA9D092030AE0E916();
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835390.f_2775[iVar10] == -1 && func_520())
							{
								if (Global_1835390.f_2704[iVar10] >= 1)
								{
									func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
								Global_1835390.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1835390.f_2704[iVar10]++;
						}
						unk_0xA9D092030AE0E916();
						func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_516(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_449(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xEE7624F5005BED95(iVar3, &Var1);
							if (func_520() && (func_491(&Var1, &Var0) || func_491(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835390.f_2704[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_517(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_452(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xCC9CBA19D9301571(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835390.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar10]++;
											}
										}
										else if (Global_1835390.f_2704[iVar10] == 1 && Global_1835390.f_2775[iVar10] == -1)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
									else if (Global_1835390.f_2704[iVar10] < 12)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_517(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_452(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0xCC9CBA19D9301571(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
								}
							}
							func_519(&Var1);
							iVar3++;
						}
					}
					unk_0xA9D092030AE0E916();
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar10);
					func_367(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar10] == -1 && func_520())
			{
				if (Global_1835390.f_2704[iVar10] >= 1)
				{
					func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_518(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
				Global_1835390.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_515(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_524(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0x1E326
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x74C475EB8E73D398(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x74C475EB8E73D398(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_525(var uParam0)//Position - 0x1E3BE
{
	int iVar0;
	
	if (unk_0xDAA07938DBBD5115(Global_1835390.f_2826))
	{
		iVar0 = unk_0x12B40AAFCD236FA4(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_42), 5);
			func_500(Global_1835390.f_2826, -1);
		}
	}
}

void func_526(int iParam0)//Position - 0x1E40E
{
	if (unk_0x34D11AB5BA7922C2(iParam0))
	{
		unk_0x28E092B1E386EB67(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1E42E
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xC80D31E4B587871C(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xC80D31E4B587871C(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xC80D31E4B587871C(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xDEC0EB6EAE9BC575() && unk_0x15DBBAF9E2085C7A())
		{
			if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_451(unk_0x9EB17624F44A8DA4()) };
				if (unk_0xA84F967541249268(&Var4))
				{
					unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var4);
					if (!unk_0xAB019B170BF1309C(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(*iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	if (bVar3)
	{
		unk_0x7E099EB35339C80D(sVar0);
		unk_0x4ADDDBC65685A05E(&Var2);
		unk_0x9748595E4799A2CF();
	}
	else
	{
		unk_0x7E099EB35339C80D(sVar0);
		unk_0x9748595E4799A2CF();
	}
	unk_0x271AA5469AF471B3();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x872F1C1F8587CCC7(&iVar5, 7);
		unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
		unk_0xD07D5CD276368D36(*iParam1);
		unk_0xD07D5CD276368D36(iVar5);
		if (!unk_0xDEC0EB6EAE9BC575())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xE9F0A7BEA240607F())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x7E099EB35339C80D(sVar0);
		unk_0xDED957EFB8EBDAF3();
		unk_0x271AA5469AF471B3();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xC80D31E4B587871C(iParam2, 5))
		{
			if (unk_0x806EA87864D816ED() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xC80D31E4B587871C(iParam2, 6))
		{
			if (unk_0x851744C54849FD9D())
			{
				if (unk_0xFF3CFF3D74A5AD30())
				{
					if (unk_0xDEC0EB6EAE9BC575() && unk_0x15DBBAF9E2085C7A())
					{
						if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_451(unk_0x9EB17624F44A8DA4()) };
							if (unk_0xA84F967541249268(&Var6))
							{
								unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var6);
								if (!unk_0xAB019B170BF1309C(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x872F1C1F8587CCC7(&iVar7, 7);
		unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
		unk_0xD07D5CD276368D36(*iParam1);
		unk_0xD07D5CD276368D36(iVar7);
		if (bVar3)
		{
			unk_0x7E099EB35339C80D(sVar0);
			unk_0x4ADDDBC65685A05E(&Var2);
			unk_0xDED957EFB8EBDAF3();
		}
		else
		{
			unk_0x7E099EB35339C80D(sVar0);
			unk_0xDED957EFB8EBDAF3();
		}
		unk_0x271AA5469AF471B3();
		*iParam1++;
	}
}

void func_528(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x1E704
{
	int iVar0;
	
	unk_0x008F3E3CC076EA0E(iParam0, "SET_TITLE");
	unk_0x7E099EB35339C80D(sParam1);
	unk_0x9748595E4799A2CF();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x7E099EB35339C80D(uParam2[iVar0 /*6*/]);
		unk_0x9748595E4799A2CF();
		iVar0++;
	}
	unk_0x271AA5469AF471B3();
}

void func_529(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x1E746
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x7E099EB35339C80D(sParam1);
	if (!unk_0xAB019B170BF1309C(sParam2))
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				unk_0x4ADDDBC65685A05E(sParam3);
			}
		}
		else if (!unk_0xAB019B170BF1309C(sParam3))
		{
			unk_0xA6D2B267C377D7B2(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				unk_0x4ADDDBC65685A05E(sParam3);
			}
		}
		else if (!unk_0xAB019B170BF1309C(sParam3))
		{
			unk_0xA6D2B267C377D7B2(sParam3);
		}
		unk_0x6223D539BCD39E76(iParam5);
	}
	unk_0x9748595E4799A2CF();
	unk_0x271AA5469AF471B3();
}

void func_530(int iParam0, int iParam1)//Position - 0x1E7D6
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_DISPLAY_TYPE");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

void func_531(int iParam0)//Position - 0x1E7F3
{
	Global_1315692 = iParam0;
}

void func_532(int iParam0)//Position - 0x1E801
{
	Global_1359035.f_1079 = iParam0;
}

void func_533()//Position - 0x1E812
{
	func_536();
	func_534(4, -1);
	func_534(6, -1);
	func_534(7, -1);
	func_534(3, -1);
	func_534(1, -1);
	func_534(2, -1);
	func_534(11, -1);
	func_534(13, -1);
	func_534(14, -1);
	func_534(16, -1);
}

void func_534(int iParam0, int iParam1)//Position - 0x1E85E
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

void func_535(int iParam0)//Position - 0x1E894
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_141(0))
		{
			func_138(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_536()//Position - 0x1E8BD
{
	Global_2512808.f_4500 = 0;
}

void func_537(bool bParam0)//Position - 0x1E8CD
{
	if (bParam0)
	{
		func_259(&(Local_45.f_119), 0, 0, 1, 1);
		func_258(&(Local_45.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_258(&(Local_45.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_538(&(Local_45.f_119), 1);
	}
	else
	{
		func_259(&(Local_45.f_119), 0, 0, 1, 1);
		func_258(&(Local_45.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_538(&(Local_45.f_119), 1);
	}
}

void func_538(var uParam0, bool bParam1)//Position - 0x1E940
{
	if (bParam1)
	{
		func_154(&(uParam0->f_1), 1024);
	}
	else
	{
		func_153(&(uParam0->f_1), 1024);
	}
}

int func_539(var uParam0)//Position - 0x1E966
{
	if ((unk_0xC80D31E4B587871C(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_540(var uParam0)//Position - 0x1E99D
{
	if (Global_103585 != 0 && Global_104555.f_19013.f_12[Global_103585 /*8*/].f_4 == 0)
	{
		func_259(uParam0, 0, 0, 1, 1);
		func_258(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x5616476F69B90F14())
		{
			func_258(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (unk_0x5616476F69B90F14() && iLocal_194)
		{
			func_258(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	else
	{
		func_259(uParam0, 0, 0, 1, 1);
		func_258(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_258(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x5616476F69B90F14())
		{
			func_258(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (unk_0x5616476F69B90F14() && iLocal_194)
		{
			func_258(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	func_538(&(Local_45.f_119), 1);
}

void func_541()//Position - 0x1EAAF
{
	func_570();
	func_426();
	func_569(&(Local_2067.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_569(&uLocal_1759, 0, 0, "PilotDispatch", 0, 1);
	func_558(&Local_2067);
	func_542(&Local_2067, Local_45.f_10);
	if (unk_0x6ADD12BF4D6D2587(Local_2067.f_358[0 /*189*/].f_9))
	{
		unk_0x4BEFCD5DAE410A90(Local_2067.f_358[0 /*189*/].f_9, 4);
	}
}

void func_542(var uParam0, int iParam1)//Position - 0x1EB19
{
	switch (iParam1)
	{
		case 0:
			func_557(&Local_2067);
			break;
		
		case 1:
			func_556(&Local_2067);
			break;
		
		case 2:
			func_555(&Local_2067);
			func_554(&(Local_2067.f_27[2 /*10*/]), 1);
			func_554(&(Local_2067.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_553(&Local_2067);
			break;
		
		case 4:
			func_543(&Local_2067);
			break;
	}
}

void func_543(var uParam0)//Position - 0x1EB92
{
	func_558(uParam0);
	uParam0->f_12 = 32;
	func_552(&(uParam0->f_27[0 /*10*/]), 947,1314f, 4146,46f, 80,494f, 30f, 2, 0);
	func_552(&(uParam0->f_27[1 /*10*/]), 762,498f, 4589,213f, 105,5935f, 30f, 2, 0);
	func_552(&(uParam0->f_27[2 /*10*/]), 659,2919f, 4806,028f, 175,759f, 30f, 2, 0);
	func_552(&(uParam0->f_27[3 /*10*/]), 621,3849f, 5032,051f, 343,6387f, 30f, 2, 0);
	func_552(&(uParam0->f_27[4 /*10*/]), 503,8404f, 5297,335f, 508,6478f, 30f, 2, 0);
	func_552(&(uParam0->f_27[5 /*10*/]), 555,4404f, 5426,935f, 708,948f, 30f, 2, 0);
	func_552(&(uParam0->f_27[6 /*10*/]), 637,6946f, 5491,08f, 717,522f, 30f, 2, 0);
	func_552(&(uParam0->f_27[7 /*10*/]), 790,3913f, 5491,866f, 566,103f, 30f, 2, 0);
	func_552(&(uParam0->f_27[8 /*10*/]), 910,6804f, 5313,552f, 388,8567f, 30f, 2, 0);
	func_552(&(uParam0->f_27[9 /*10*/]), 1159,749f, 5183,155f, 253,1068f, 30f, 2, 0);
	func_552(&(uParam0->f_27[10 /*10*/]), 1354,13f, 4998,078f, 141,6288f, 30f, 2, 0);
	func_552(&(uParam0->f_27[11 /*10*/]), 1612,532f, 4941,23f, 61,8549f, 30f, 2, 0);
	func_552(&(uParam0->f_27[12 /*10*/]), 2200,396f, 4800,332f, 69,9321f, 30f, 3, 2);
	func_552(&(uParam0->f_27[13 /*10*/]), 2527,632f, 5144,98f, 66,763f, 30f, 3, 2);
	func_552(&(uParam0->f_27[14 /*10*/]), 2527,131f, 5275,334f, 62,3622f, 30f, 2, 0);
	func_552(&(uParam0->f_27[15 /*10*/]), 2413,345f, 5443,203f, 99,4297f, 30f, 2, 0);
	func_552(&(uParam0->f_27[16 /*10*/]), 2236,067f, 5524,246f, 108,3291f, 30f, 2, 0);
	func_552(&(uParam0->f_27[17 /*10*/]), 1944,463f, 5520,007f, 177,2808f, 30f, 2, 0);
	func_552(&(uParam0->f_27[18 /*10*/]), 1712,477f, 5624,937f, 324,9427f, 30f, 2, 0);
	func_552(&(uParam0->f_27[19 /*10*/]), 1601,158f, 5663,75f, 335,8832f, 30f, 2, 0);
	func_552(&(uParam0->f_27[20 /*10*/]), 1410,764f, 5675,836f, 425,9678f, 30f, 2, 0);
	func_552(&(uParam0->f_27[21 /*10*/]), 1225,682f, 5678,654f, 497,3169f, 30f, 2, 0);
	func_552(&(uParam0->f_27[22 /*10*/]), 1094,47f, 5664,07f, 563,0829f, 30f, 2, 0);
	func_552(&(uParam0->f_27[23 /*10*/]), 1001,427f, 5633,827f, 633,2537f, 30f, 2, 0);
	func_552(&(uParam0->f_27[24 /*10*/]), 875,5358f, 5642,667f, 682,5352f, 30f, 2, 0);
	func_552(&(uParam0->f_27[25 /*10*/]), 741,3275f, 5688,046f, 709,5683f, 30f, 2, 0);
	func_552(&(uParam0->f_27[26 /*10*/]), 487,2532f, 5654,821f, 802,0096f, 30f, 3, 1);
	func_552(&(uParam0->f_27[27 /*10*/]), 362,6602f, 5620,538f, 723,2353f, 30f, 2, 0);
	func_552(&(uParam0->f_27[28 /*10*/]), 134,4865f, 5555,637f, 520,3109f, 30f, 2, 0);
	func_552(&(uParam0->f_27[29 /*10*/]), -128,2242f, 5510,46f, 307,4505f, 30f, 2, 0);
	func_552(&(uParam0->f_27[30 /*10*/]), -397,7556f, 5438,69f, 175,4529f, 30f, 2, 0);
	func_552(&(uParam0->f_27[31 /*10*/]), -520,8975f, 5424,283f, 165,285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_551(&(uParam0->f_358[0 /*189*/]));
	func_550(&(uParam0->f_358[0 /*189*/]), "Player");
	func_546(&(uParam0->f_358[0 /*189*/]), unk_0xFC1458A37D98B502(), Local_45.f_1);
	func_545(&(uParam0->f_358[0 /*189*/]), 1135,682f, 3700,644f, 80,494f, 22,3451f);
	func_544(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_544(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1F04A
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_545(var uParam0, vector3 vParam1, float fParam2)//Position - 0x1F064
{
	uParam0->f_16 = { vParam1 };
	uParam0->f_19 = fParam2;
}

void func_546(var uParam0, int iParam1, int iParam2)//Position - 0x1F07C
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	func_547(iParam2, &(Local_45.f_243));
}

void func_547(int iParam0, var uParam1)//Position - 0x1F09A
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_549(uParam1);
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
		func_548(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_121(iVar0 + 1));
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

int func_548(int iParam0, var uParam1, var uParam2)//Position - 0x1F345
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

void func_549(var uParam0)//Position - 0x1F41F
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

void func_550(char* sParam0, char* sParam1)//Position - 0x1F4D0
{
	StringCopy(sParam0, sParam1, 32);
}

void func_551(var uParam0)//Position - 0x1F4DE
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_552(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)//Position - 0x1F500
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_553(var uParam0)//Position - 0x1F522
{
	func_558(uParam0);
	uParam0->f_12 = 28;
	func_552(&(uParam0->f_27[0 /*10*/]), -1737,725f, -2720,967f, 38f, 30f, 2, 0);
	func_552(&(uParam0->f_27[1 /*10*/]), -1384,515f, -2880,773f, 38f, 30f, 2, 0);
	func_552(&(uParam0->f_27[2 /*10*/]), -1156,435f, -2957,284f, 40f, 30f, 2, 0);
	func_552(&(uParam0->f_27[3 /*10*/]), -795,3043f, -2987,754f, 60f, 30f, 2, 0);
	func_552(&(uParam0->f_27[4 /*10*/]), -429,0231f, -2969,528f, 30f, 30f, 3, 1);
	func_552(&(uParam0->f_27[5 /*10*/]), -15,5168f, -2912,484f, 60f, 30f, 2, 0);
	func_552(&(uParam0->f_27[6 /*10*/]), 656,9059f, -2798,444f, 80f, 30f, 3, 2);
	func_552(&(uParam0->f_27[7 /*10*/]), 990,7529f, -2452,092f, 70f, 30f, 2, 0);
	func_552(&(uParam0->f_27[8 /*10*/]), 1019,531f, -2182,119f, 60f, 30f, 2, 0);
	func_552(&(uParam0->f_27[9 /*10*/]), 1019,899f, -1886,15f, 60f, 30f, 2, 0);
	func_552(&(uParam0->f_27[10 /*10*/]), 944,9045f, -1488,589f, 107,7f, 30f, 2, 0);
	func_552(&(uParam0->f_27[11 /*10*/]), 698,908f, -1013,024f, 100,5f, 30f, 3, 2);
	func_552(&(uParam0->f_27[12 /*10*/]), 388,7276f, -822,8241f, 90f, 30f, 2, 0);
	func_552(&(uParam0->f_27[13 /*10*/]), 20,7016f, -653,9637f, 101,8f, 30f, 3, 2);
	func_552(&(uParam0->f_27[14 /*10*/]), -135,3874f, -670,6069f, 112f, 30f, 3, 3);
	func_552(&(uParam0->f_27[15 /*10*/]), -360,3365f, -655,137f, 90f, 30f, 2, 0);
	func_552(&(uParam0->f_27[16 /*10*/]), -700,3533f, -657,1476f, 70f, 30f, 2, 0);
	func_552(&(uParam0->f_27[17 /*10*/]), -951,5859f, -654,0262f, 68f, 30f, 3, 2);
	func_552(&(uParam0->f_27[18 /*10*/]), -1125,587f, -769,7247f, 67f, 30f, 2, 0);
	func_552(&(uParam0->f_27[19 /*10*/]), -1281,291f, -851,0229f, 82f, 30f, 3, 1);
	func_552(&(uParam0->f_27[20 /*10*/]), -1580,865f, -1009,944f, 40f, 30f, 2, 0);
	func_552(&(uParam0->f_27[21 /*10*/]), -1877,52f, -1152,927f, 30f, 30f, 2, 0);
	func_552(&(uParam0->f_27[22 /*10*/]), -2101,111f, -1330,267f, 20f, 30f, 2, 0);
	func_552(&(uParam0->f_27[23 /*10*/]), -2230,15f, -1555,89f, 10f, 30f, 3, 2);
	func_552(&(uParam0->f_27[24 /*10*/]), -2214,946f, -1978,262f, 10f, 30f, 2, 0);
	func_552(&(uParam0->f_27[25 /*10*/]), -2055,091f, -2359,626f, 20f, 30f, 2, 0);
	func_552(&(uParam0->f_27[26 /*10*/]), -1893,392f, -2559,46f, 22f, 30f, 2, 0);
	func_552(&(uParam0->f_27[27 /*10*/]), -1737,725f, -2720,967f, 83,7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_551(&(uParam0->f_358[0 /*189*/]));
	func_550(&(uParam0->f_358[0 /*189*/]), "Player");
	func_546(&(uParam0->f_358[0 /*189*/]), unk_0xFC1458A37D98B502(), Local_45.f_1);
	func_545(&(uParam0->f_358[0 /*189*/]), -2102,16f, -2556,082f, 38f, 245,6561f);
	func_544(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_554(var uParam0, int iParam1)//Position - 0x1F952
{
	func_330(&(uParam0->f_9), iParam1);
}

void func_555(var uParam0)//Position - 0x1F964
{
	func_558(uParam0);
	uParam0->f_12 = 21;
	func_552(&(uParam0->f_27[0 /*10*/]), 1167,2f, -2557,195f, 90f, 30f, 2, 0);
	func_552(&(uParam0->f_27[1 /*10*/]), 869,9235f, -2613,705f, 57,8325f, 30f, 2, 0);
	func_552(&(uParam0->f_27[2 /*10*/]), 652,3818f, -2651,991f, 54,935f, 30f, 2, 0);
	func_552(&(uParam0->f_27[3 /*10*/]), 249,3849f, -2579,821f, 60,1264f, 30f, 3, 2);
	func_552(&(uParam0->f_27[4 /*10*/]), -31,7179f, -2590,793f, 19,9452f, 30f, 2, 0);
	func_552(&(uParam0->f_27[5 /*10*/]), -317,409f, -2582,66f, 48,7654f, 30f, 3, 3);
	func_552(&(uParam0->f_27[6 /*10*/]), -395,6915f, -2334,057f, 39,3612f, 30f, 2, 0);
	func_552(&(uParam0->f_27[7 /*10*/]), -300,2367f, -2118,431f, 53,3728f, 30f, 2, 0);
	func_552(&(uParam0->f_27[8 /*10*/]), -157,1812f, -1967,885f, 56,4093f, 30f, 3, 2);
	func_552(&(uParam0->f_27[9 /*10*/]), -199,4688f, -1803,328f, 13,6363f, 30f, 2, 0);
	func_552(&(uParam0->f_27[10 /*10*/]), -383,5264f, -1738,067f, 60,8194f, 30f, 2, 0);
	func_552(&(uParam0->f_27[11 /*10*/]), -649,8698f, -1710,374f, 61,3036f, 30f, 2, 0);
	func_552(&(uParam0->f_27[12 /*10*/]), -861,6902f, -1857,194f, 77,0621f, 30f, 3, 2);
	func_552(&(uParam0->f_27[13 /*10*/]), -716,8034f, -2111,744f, 65,9868f, 30f, 2, 0);
	func_552(&(uParam0->f_27[14 /*10*/]), -548,7557f, -2230,616f, 97,2887f, 30f, 2, 0);
	func_552(&(uParam0->f_27[15 /*10*/]), -270,7834f, -2425,144f, 96,7744f, 30f, 3, 1);
	func_552(&(uParam0->f_27[16 /*10*/]), 5,435f, -2665,31f, 46,2903f, 30f, 2, 0);
	func_552(&(uParam0->f_27[17 /*10*/]), 299,0821f, -2834,288f, 27,0191f, 30f, 2, 0);
	func_552(&(uParam0->f_27[18 /*10*/]), 514,295f, -2880,863f, 42,0956f, 30f, 3, 2);
	func_552(&(uParam0->f_27[19 /*10*/]), 842,6024f, -2599,042f, 25,978f, 30f, 2, 0);
	func_552(&(uParam0->f_27[20 /*10*/]), 991,974f, -2468,436f, 87,493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_551(&(uParam0->f_358[0 /*189*/]));
	func_550(&(uParam0->f_358[0 /*189*/]), "Player");
	func_546(&(uParam0->f_358[0 /*189*/]), unk_0xFC1458A37D98B502(), Local_45.f_1);
	func_545(&(uParam0->f_358[0 /*189*/]), 1788,044f, -2438,835f, 130,9346f, 100,0275f);
	func_544(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_556(var uParam0)//Position - 0x1FCA6
{
	func_558(uParam0);
	uParam0->f_12 = 19;
	func_552(&(uParam0->f_27[0 /*10*/]), -2819,07f, -81,2779f, 76,1411f, 30f, 2, 0);
	func_552(&(uParam0->f_27[1 /*10*/]), -2737,77f, 342,665f, 175,645f, 30f, 2, 0);
	func_552(&(uParam0->f_27[2 /*10*/]), -2631,929f, 499,7495f, 210,0935f, 30f, 2, 0);
	func_552(&(uParam0->f_27[3 /*10*/]), -2438,01f, 692,3843f, 285,745f, 30f, 3, 3);
	func_552(&(uParam0->f_27[4 /*10*/]), -2039,406f, 708,7898f, 170,6556f, 30f, 2, 0);
	func_552(&(uParam0->f_27[5 /*10*/]), -1633,076f, 751,8171f, 220,188f, 30f, 2, 0);
	func_552(&(uParam0->f_27[6 /*10*/]), -1187,955f, 874,4288f, 246,4972f, 30f, 3, 1);
	func_552(&(uParam0->f_27[7 /*10*/]), -893,826f, 994,239f, 239,512f, 30f, 2, 0);
	func_552(&(uParam0->f_27[8 /*10*/]), -565,788f, 1098,308f, 349,0507f, 30f, 2, 0);
	func_552(&(uParam0->f_27[9 /*10*/]), -326,8564f, 1129,9f, 336,1296f, 30f, 2, 0);
	func_552(&(uParam0->f_27[10 /*10*/]), -155,9212f, 1149,858f, 312,2522f, 30f, 2, 0);
	func_552(&(uParam0->f_27[11 /*10*/]), 145,603f, 1162,599f, 277,7465f, 30f, 3, 1);
	func_552(&(uParam0->f_27[12 /*10*/]), 355,6647f, 1234,464f, 287,6501f, 30f, 2, 0);
	func_552(&(uParam0->f_27[13 /*10*/]), 640,85f, 1191,643f, 329,783f, 30f, 2, 0);
	func_552(&(uParam0->f_27[14 /*10*/]), 783,3697f, 1157,395f, 329,0691f, 30f, 3, 3);
	func_552(&(uParam0->f_27[15 /*10*/]), 1016,378f, 1000,386f, 252,4894f, 30f, 2, 0);
	func_552(&(uParam0->f_27[16 /*10*/]), 1243,37f, 945,084f, 150,5214f, 30f, 2, 0);
	func_552(&(uParam0->f_27[17 /*10*/]), 1494,048f, 863,8886f, 110,4097f, 30f, 2, 0);
	func_552(&(uParam0->f_27[18 /*10*/]), 1751,842f, 687,7875f, 296,787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_551(&(uParam0->f_358[0 /*189*/]));
	func_550(&(uParam0->f_358[0 /*189*/]), "Player");
	func_546(&(uParam0->f_358[0 /*189*/]), unk_0xFC1458A37D98B502(), Local_45.f_1);
	func_545(&(uParam0->f_358[0 /*189*/]), -2818,17f, -500,178f, 76,1411f, 0f);
	func_544(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_557(var uParam0)//Position - 0x1FFA0
{
	func_558(uParam0);
	uParam0->f_12 = 18;
	func_552(&(uParam0->f_27[0 /*10*/]), 1025,724f, 3073,133f, 70f, 30f, 2, 0);
	func_552(&(uParam0->f_27[1 /*10*/]), 847,4132f, 3025,239f, 80f, 30f, 2, 0);
	func_552(&(uParam0->f_27[2 /*10*/]), 624,897f, 2968,416f, 80f, 30f, 3, 1);
	func_552(&(uParam0->f_27[3 /*10*/]), 398,5529f, 2921,654f, 75f, 30f, 2, 0);
	func_552(&(uParam0->f_27[4 /*10*/]), 68,1f, 2896,4f, 80f, 30f, 2, 0);
	func_552(&(uParam0->f_27[5 /*10*/]), -290,7f, 2895,4f, 80f, 30f, 2, 0);
	func_552(&(uParam0->f_27[6 /*10*/]), -1033,31f, 2832,959f, 37,5f, 30f, 3, 2);
	func_552(&(uParam0->f_27[7 /*10*/]), -1195,153f, 2729,109f, 18f, 30f, 2, 0);
	func_552(&(uParam0->f_27[8 /*10*/]), -1414,6f, 2636,365f, 8,25f, 30f, 2, 0);
	func_552(&(uParam0->f_27[9 /*10*/]), -1684,856f, 2630,035f, 10f, 30f, 2, 0);
	func_552(&(uParam0->f_27[10 /*10*/]), -2024,536f, 2677,336f, 30f, 30f, 3, 1);
	func_552(&(uParam0->f_27[11 /*10*/]), -2659,106f, 2670,574f, 5,4745f, 30f, 2, 0);
	func_552(&(uParam0->f_27[12 /*10*/]), -2880,136f, 2732,084f, 21,0365f, 30f, 2, 0);
	func_552(&(uParam0->f_27[13 /*10*/]), -3200,826f, 2826,548f, 40f, 30f, 3, 2);
	func_552(&(uParam0->f_27[14 /*10*/]), -3363,374f, 2580,812f, 50f, 30f, 2, 0);
	func_552(&(uParam0->f_27[15 /*10*/]), -3242,432f, 2370,19f, 40f, 30f, 2, 0);
	func_552(&(uParam0->f_27[16 /*10*/]), -2879,09f, 2382,111f, 20f, 30f, 2, 0);
	func_552(&(uParam0->f_27[17 /*10*/]), -2650,532f, 2450,207f, 66,6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_551(&(uParam0->f_358[0 /*189*/]));
	func_550(&(uParam0->f_358[0 /*189*/]), "Player");
	func_546(&(uParam0->f_358[0 /*189*/]), unk_0xFC1458A37D98B502(), Local_45.f_1);
	func_545(&(uParam0->f_358[0 /*189*/]), vLocal_1972, 154,8464f);
	func_544(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_558(var uParam0)//Position - 0x20273
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_45.f_10 != -1)
	{
		fVar0 = func_35(Local_45.f_10);
		if (fVar0 <= 0f || fVar0 > Local_45.f_12[Local_45.f_10])
		{
			fVar0 = Local_45.f_12[Local_45.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_566(uParam0);
	uParam0->f_12 = 0;
	func_559(uParam0);
	uParam0->f_13 = 0;
}

void func_559(var uParam0)//Position - 0x202E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_560(uParam0, iVar0);
		iVar0++;
	}
}

void func_560(var uParam0, int iParam1)//Position - 0x20306
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_562(&(uParam0->f_358[iParam1 /*189*/]));
	func_561(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_561(char* sParam0)//Position - 0x2033C
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_45.f_3 };
	sParam0->f_19 = Local_45.f_6;
	sParam0->f_20 = Local_45.f_7;
	sParam0->f_21 = Local_45.f_8;
	sParam0->f_22 = Local_45.f_9;
}

void func_562(var uParam0)//Position - 0x203A6
{
	func_565(uParam0);
	func_564(uParam0);
	func_563(uParam0);
}

void func_563(var uParam0)//Position - 0x203C0
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_45.f_1)
		{
			if (!(unk_0x191BE1BC8F26F3C1(uParam0->f_8, 0) || unk_0x191BE1BC8F26F3C1(uParam0->f_9, 0)))
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x957CEE967C939968(uParam0->f_8);
				}
			}
			unk_0xC91FE17AD7353B70(&(uParam0->f_9));
		}
	}
}

void func_564(var uParam0)//Position - 0x2041A
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0xFC1458A37D98B502())
		{
			unk_0x68433819717660CF(&(uParam0->f_8));
		}
	}
}

void func_565(var uParam0)//Position - 0x20440
{
	func_83(&(uParam0->f_10));
}

void func_566(var uParam0)//Position - 0x20450
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_567(uParam0, iVar0);
		iVar0++;
	}
}

void func_567(var uParam0, int iParam1)//Position - 0x20475
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_568(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_568(var uParam0)//Position - 0x204B6
{
	*uParam0 = { Local_45.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_569(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x204DF
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

void func_570()//Position - 0x2057A
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_571(&(Global_1835013.f_73));
	func_571(&(Global_1835013.f_142));
	func_571(&(Global_1835013.f_211));
	func_571(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_507(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_571(var uParam0)//Position - 0x2061E
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_572(bool bParam0)//Position - 0x20659
{
	if (bParam0)
	{
		unk_0xC623E2691C004001(0);
		unk_0x781BE21C7452AB1B(1);
		unk_0x7FCF3574F3FBD460(0);
		func_170(1);
		Global_88236 = 1;
	}
	else
	{
		unk_0xC623E2691C004001(1);
		unk_0x781BE21C7452AB1B(0);
		unk_0x7FCF3574F3FBD460(1);
		func_170(0);
		Global_88236 = 0;
	}
}

void func_573(var uParam0)//Position - 0x2069B
{
	*uParam0 = unk_0xD704C81492296A37("COUNTDOWN");
	unk_0x1CF95440F1970B4F("HUD_321_GO", false, -1);
}

int func_574(int iParam0)//Position - 0x206B9
{
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x59C3AC31C7544A28(iParam0);
	}
	else if (unk_0x9F7B586A14398C40())
	{
		return 1;
	}
	return 0;
}

void func_575()//Position - 0x206DD
{
	int iVar0;
	
	if (!iLocal_2061)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					if (unk_0x0ACC2116170FA204(iVar0))
					{
						if (!unk_0x3E9CABD07B829173())
						{
							unk_0x8810DC630928B398("MGSP_START");
							iLocal_2061 = 1;
						}
					}
				}
			}
		}
	}
}

int func_576(int iParam0, int iParam1)//Position - 0x20744
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_577(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x2075A
{
	*iParam1 = unk_0x53E140A02F0B3D1A(iParam0, 24, 31);
	*iParam2 = unk_0x53E140A02F0B3D1A(iParam0, 16, 23);
	*iParam3 = unk_0x53E140A02F0B3D1A(iParam0, 8, 15);
	*uParam4 = unk_0x53E140A02F0B3D1A(iParam0, 0, 7);
}

int func_578(int iParam0)//Position - 0x20791
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_579(iVar0, iVar1, iVar2, iVar3);
}

var func_579(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x207B3
{
	var uVar0;
	
	unk_0x5A269A13022C028E(&uVar0, 24, 31, iParam0);
	unk_0x5A269A13022C028E(&uVar0, 16, 23, iParam1);
	unk_0x5A269A13022C028E(&uVar0, 8, 15, iParam2);
	unk_0x5A269A13022C028E(&uVar0, 0, 7, iParam3);
	return uVar0;
}

int func_580()//Position - 0x207E8
{
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	func_590(23, 1);
	func_589(10);
	switch (Local_1982.f_5)
	{
		case 0:
			unk_0xC0EBC1452FCAB15C(0);
			unk_0xD941F8E30D7231AD("EXTRASUNNY", 10f);
			func_588();
			func_587(2, 0);
			func_587(1, 0);
			func_587(3, 0);
			func_587(4, 0);
			func_587(5, 0);
			func_587(6, 0);
			func_587(7, 0);
			unk_0xA896149A4DE38DEA(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f, 0);
			unk_0x9B8406983378711E(vLocal_2073, 600f, 0, 0, 0, 0, false, 0);
			func_581(&Local_2067, Local_45.f_10);
			unk_0xE07EA0C969E9EEAC(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 512);
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))
			{
				Local_1982.f_5 = 2;
			}
			else
			{
				Local_1982.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_354(1000))
			{
				Local_1982.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0xBCBC53983EC3B1BA("SP_SPR", 3);
			unk_0x128A5DCCD09CCA17("Shared", false);
			while (!unk_0xA51ADD51711B4A15("Shared"))
			{
				system::wait(0);
			}
			unk_0x1CF95440F1970B4F("HUD_AWARDS", false, -1);
			Local_1982.f_5 = 3;
			break;
		
		case 3:
			if (unk_0x9F0887BCBFCF3C2F(3))
			{
				Local_1982.f_5 = 4;
			}
			break;
		
		case 4:
			Local_1982.f_5 = 5;
			func_11(&(Local_1982.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_1982.f_2), 0,5f))
			{
				Local_1982.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				Local_1982.f_5 = 9;
			}
			else
			{
				Local_1982.f_5 = 7;
				func_11(&(Local_1982.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_1982.f_2), 0,5f))
			{
				Local_1982.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_574(5000))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				Local_1982.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_1982.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_581(var uParam0, int iParam1)//Position - 0x20A0F
{
	Local_45 = 0;
	Local_45.f_1 = 0;
	Local_45.f_2 = 2;
	Local_45.f_3 = { vLocal_1972 };
	Local_45.f_6 = 154,8464f;
	Local_45.f_7 = 4;
	Local_45.f_8 = joaat("a_m_y_genstreet_01");
	Local_45.f_9 = joaat("stunt");
	StringCopy(&(Local_45.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_45.f_12[0] = 165f;
	StringCopy(&(Local_45.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_45.f_12[1] = 80f;
	StringCopy(&(Local_45.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_45.f_12[2] = 165f;
	StringCopy(&(Local_45.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_45.f_12[3] = 165f;
	StringCopy(&(Local_45.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_45.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_586(&Local_2067);
			break;
		
		case 1:
			func_585(&Local_2067);
			break;
		
		case 2:
			func_584(&Local_2067);
			break;
		
		case 3:
			func_583(&Local_2067);
			break;
		
		case 4:
			func_582(&Local_2067);
			break;
	}
}

void func_582(var uParam0)//Position - 0x20B23
{
}

void func_583(var uParam0)//Position - 0x20B2B
{
}

void func_584(var uParam0)//Position - 0x20B33
{
}

void func_585(var uParam0)//Position - 0x20B3B
{
}

void func_586(var uParam0)//Position - 0x20B43
{
}

void func_587(int iParam0, int iParam1)//Position - 0x20B4B
{
	unk_0x872F1C1F8587CCC7(&Global_25391, iParam0);
	StringCopy(&(Global_25392[iParam0 /*6*/]), unk_0x436287B7DB306165(), 24);
	Global_25447[iParam0] = iParam1;
}

void func_588()//Position - 0x20B72
{
	Global_17162.f_5 = 1;
}

void func_589(int iParam0)//Position - 0x20B80
{
	func_307();
	Global_71111 = iParam0;
	Global_71110 = 0;
	Global_71113 = 3;
}

void func_590(int iParam0, bool bParam1)//Position - 0x20B9C
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

void func_591()//Position - 0x20BBE
{
}

void func_592()//Position - 0x20BC6
{
	unk_0x36853D5037847BF3();
	func_360();
	func_426();
	func_570();
	func_590(23, 0);
	func_572(0);
	unk_0xC0EBC1452FCAB15C(5);
	unk_0x97580242FB655BD5();
	func_307();
	func_234(0);
	func_252(0);
	unk_0x087D097B0C8C07B9();
	unk_0xF4D9AAA3F4BCC684("MGSP_START");
	unk_0xF4D9AAA3F4BCC684("MGSP_FAIL");
	unk_0xF4D9AAA3F4BCC684("MGTR_COMPLETE");
	unk_0x8810DC630928B398("MGSP_END");
	unk_0x77A208B3324C04F2();
	func_600(2, 0);
	func_600(1, 0);
	func_600(3, 0);
	func_600(4, 0);
	func_600(5, 0);
	func_600(6, 0);
	func_600(7, 0);
	unk_0xE07EA0C969E9EEAC(unk_0x9EB17624F44A8DA4(), 1);
	unk_0x087BB7BACBB5FD0B();
	func_598(&(Local_45.f_118));
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0x8FA21D9CF7681249(unk_0x9EB17624F44A8DA4(), 0);
	unk_0xF40900F61CC88931(3, true);
	unk_0x137FC8E0F58D9E0B("PilotSchool");
	func_596(&Local_2067, 1);
	unk_0x9E6ACDF1473CD846(103, "SPRTaxi");
	unk_0x9E6ACDF1473CD846(104, "SPRTaxi");
	unk_0x3E80C2F7BC665259(1);
	unk_0x84CDD933AFA470D2();
	func_595();
	unk_0x4255E93FCCDE108E(true);
	unk_0x9B47B379EE749C38(true);
	func_249();
	unk_0xBC3B7443617858A0(true);
	func_593();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_593()//Position - 0x20CD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_89911[iVar0 /*17*/] && !Global_89911[iVar0 /*17*/].f_1)
		{
			if (Global_89911[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89911[iVar0 /*17*/].f_5 != 88 && Global_89911[iVar0 /*17*/].f_5 != 89) && Global_89911[iVar0 /*17*/].f_5 != 92)
				{
					func_594(Global_89911[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_594(int iParam0, bool bParam1)//Position - 0x20D58
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

void func_595()//Position - 0x20D96
{
	Global_17162.f_5 = 0;
}

void func_596(var uParam0, bool bParam1)//Position - 0x20DA4
{
	if (bParam1)
	{
		func_558(uParam0);
	}
	else
	{
		func_597(uParam0);
	}
	func_137(0);
	func_27(&(uParam0->f_17));
	unk_0x3E80C2F7BC665259(1);
	unk_0x84CDD933AFA470D2();
	if (iLocal_2060)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2060 = 0;
	}
}

void func_597(var uParam0)//Position - 0x20DEC
{
}

void func_598(var uParam0)//Position - 0x20DF4
{
	func_599(*uParam0);
}

void func_599(var uParam0)//Position - 0x20E03
{
	unk_0xA68F7B004463AB6F(&uParam0);
}

void func_600(int iParam0, bool bParam1)//Position - 0x20E11
{
	if (unk_0xC80D31E4B587871C(Global_25391, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_25391, iParam0);
			StringCopy(&(Global_25392[iParam0 /*6*/]), "NULL", 24);
			Global_25447[iParam0] = bParam1;
		}
	}
}

