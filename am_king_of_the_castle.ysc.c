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
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<284> Local_98 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<5> Local_102[32];
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<18> Local_108[32];
	vector3 vLocal_109[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	struct<68> Local_117[1];
	struct<42> Local_118[32];
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
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 1;
	var uLocal_156 = 0;
	var uLocal_157 = 32;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = -1;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = -1;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = -1;
	var uLocal_178 = 0;
	var uLocal_179 = -1;
	var uLocal_180 = 0;
	var uLocal_181 = -1;
	var uLocal_182 = 0;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = -1;
	var uLocal_186 = 0;
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = 0;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = 0;
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = -1;
	var uLocal_230 = -1;
	var uLocal_231 = -1;
	var uLocal_232 = -1;
	var uLocal_233 = 32;
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
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	var uLocal_662 = 0;
	int iLocal_663 = 0;
	var uLocal_664 = 0;
	struct<21> Local_665 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	iLocal_100 = -1;
	iLocal_659 = -1;
	if (unk_0x3A711520F83BAE98() && func_717(unk_0x9EB17624F44A8DA4(), 0, 1))
	{
		func_702(ScriptParam_665);
	}
	else
	{
		func_671();
	}
	while (true)
	{
		func_670();
		if (func_663())
		{
			func_671();
		}
		if (func_660(29))
		{
			func_671();
		}
		if (func_658())
		{
			func_671();
		}
		if (func_657())
		{
			func_671();
		}
		iLocal_659 = -1;
		if (unk_0xC80D31E4B587871C(iLocal_651, unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xC80D31E4B587871C(iLocal_652, unk_0x622FF3AE4B1D07C3()))
			{
				if (!func_655(unk_0x9EB17624F44A8DA4()))
				{
					iLocal_659 = unk_0x622FF3AE4B1D07C3();
				}
				else if (func_654() && !func_653())
				{
					iVar2 = func_651();
					if (unk_0x1417A5CC924DE120(iVar2))
					{
						iVar3 = unk_0xDF35170AEEFB473B(iVar2);
						if (unk_0xDE597476C8B96D1A(iVar3))
						{
							iVar4 = unk_0x87678BB8392EFD41(iVar3);
							iLocal_659 = iVar4;
						}
					}
				}
			}
		}
		func_630();
		if (func_629() < 2)
		{
			if (func_626(2, 0, 1, 0, 0))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_103, 24);
				func_586(0, -1);
				func_671();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_585(iVar0, -1);
			func_584(iVar0, -1);
			func_583(iVar0, uVar1);
			unk_0x0EE72DB1CD8A3B86(&iLocal_103, 0);
			iVar0++;
		}
		func_535();
		func_506();
		func_503();
		func_483();
		switch (func_482(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_481() == 1)
				{
					func_473(141, func_480(0), 0, 0);
					func_472(1);
				}
				else if (func_481() == 4)
				{
					func_472(4);
				}
				break;
			
			case 1:
				if (func_481() == 1)
				{
					func_20();
				}
				else if (func_481() == 4)
				{
					func_19(&(Local_98.f_211));
					func_472(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_98.f_211)))
				{
					if (func_17(&(Local_98.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_472(4);
				}
				break;
			
			case 2:
				func_472(4);
			
			case 4:
				func_671();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_481())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()//Position - 0x2B6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_629())
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Local_98.f_213, 0))
			{
				if (!func_18(&(Local_98.f_1.f_3)))
				{
					func_11(&(Local_98.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0xC80D31E4B587871C(Local_98.f_213, 2))
			{
				iVar2 = Global_262145.f_10529;
				if (func_18(&(Local_98.f_1.f_1)))
				{
					if (func_9(&(Local_98.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_10530;
				if (func_18(&(Local_98.f_1.f_3)))
				{
					if (func_9(&(Local_98.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Local_98.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x3C3
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_98.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (unk_0xC80D31E4B587871C(iLocal_652, iVar0))
		{
			if (unk_0xC80D31E4B587871C(iLocal_651, iVar1))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_653, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_98.f_1.f_1)))
					{
						if (!func_18(&(Local_98.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_98.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_98.f_1.f_1), 0, 0) <= Global_262145.f_10529) && func_629() != 2)
						{
							iVar7 = func_9(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = system::to_float(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_10533 * 1000));
							fVar4 = (system::to_float(Global_262145.f_10532) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_98.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)//Position - 0x533
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)//Position - 0x540
{
	Local_98.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)//Position - 0x558
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

float func_6(int iParam0, int iParam1)//Position - 0x5B6
{
	return Local_98.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)//Position - 0x5CC
{
	return Local_98.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)//Position - 0x5DE
{
	return Local_98.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x5F0
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_10(int iParam0)//Position - 0x637
{
	Local_98.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)//Position - 0x645
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

void func_12()//Position - 0x68A
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_98.f_1.f_1)))
					{
						Local_98.f_1.f_3 = { Var1 };
						func_11(&(Local_98.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_98.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_98.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!unk_0xC80D31E4B587871C(Local_98.f_213, 2))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)//Position - 0x759
{
	Local_98.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)//Position - 0x76B
{
	return Local_117[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)//Position - 0x77C
{
	return Local_98.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)//Position - 0x78C
{
	Local_98 = iParam0;
}

int func_17(var uParam0)//Position - 0x798
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

bool func_18(var uParam0)//Position - 0x7C1
{
	return uParam0->f_1;
}

void func_19(var uParam0)//Position - 0x7CD
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()//Position - 0x7EC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_454();
	func_453();
	func_451();
	if (func_449())
	{
		func_330(iVar0);
	}
	func_314(141, func_329(0), &uLocal_664, system::to_float(Global_262145.f_10838), 1148846080, iLocal_663);
	if (func_273(0, 1))
	{
		func_272();
	}
	switch (func_629())
	{
		case 0:
			break;
		
		case 1:
			func_271();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_236(iVar0);
				func_235(iVar0);
				func_233(iVar0);
				if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
				{
					if (!func_230(1, 0))
					{
						if (func_229(unk_0x622FF3AE4B1D07C3(), iVar0))
						{
							if (func_228(unk_0x9EB17624F44A8DA4()) == 141)
							{
								if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 2))
								{
									unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 2);
									func_217(1);
								}
							}
							if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 5))
							{
								unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x622FF3AE4B1D07C3())
							{
								if (!unk_0xC80D31E4B587871C(iLocal_103, 20))
								{
									unk_0x872F1C1F8587CCC7(&iLocal_103, 20);
								}
							}
						}
						if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x622FF3AE4B1D07C3())
							{
								unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 2))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 2);
						}
						if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 5))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 5);
						}
						if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 4))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 4);
						}
						if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 6))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 6);
						}
						if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 7))
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0xC80D31E4B587871C(iLocal_103, 8))
					{
						if (!unk_0xF491DD47B88AA84E())
						{
							if (!func_216())
							{
								if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
								{
									if (!func_273(0, 0))
									{
										if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
										{
											if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
											{
												func_215("KOTC_1STHELP", 30000);
												func_214(0);
												unk_0x4AFBCBFDE748D4E0(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0x872F1C1F8587CCC7(&iLocal_103, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_213("KOTC_1STHELP"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (!unk_0xC80D31E4B587871C(iLocal_103, 8))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_103, 8);
					}
				}
				if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
				{
					if (func_212(iVar0) <= 500f)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_103, 9))
						{
							unk_0x94BD6F0436473406(0f);
							unk_0x872F1C1F8587CCC7(&iLocal_103, 9);
						}
					}
					else if (unk_0xC80D31E4B587871C(iLocal_103, 9))
					{
						unk_0x94BD6F0436473406(1f);
						unk_0x0EE72DB1CD8A3B86(&iLocal_103, 9);
					}
				}
				if (iLocal_659 != -1)
				{
					if (unk_0xC80D31E4B587871C(iLocal_103, 14) && func_8(iVar0) != iLocal_659)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_103, 21))
						{
							func_211(81);
							unk_0x872F1C1F8587CCC7(&iLocal_103, 21);
						}
					}
					else if (unk_0xC80D31E4B587871C(iLocal_103, 21))
					{
						unk_0x0EE72DB1CD8A3B86(&iLocal_103, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0xC80D31E4B587871C(iLocal_103, 26))
					{
						func_187(141, 0f, 0f, 0, 0, 0, 0);
						unk_0x872F1C1F8587CCC7(&iLocal_103, 26);
					}
					if (!unk_0xC80D31E4B587871C(iLocal_103, 1))
					{
						if (iLocal_659 != -1)
						{
							if (!func_273(0, 0))
							{
								if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iLocal_659 /*18*/].f_1))
								{
									if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[iLocal_659 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_659)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_186(unk_0x9EB17624F44A8DA4(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_184(81, sVar1, unk_0xDE2D3B9654C31EB3(func_7(iVar0)), func_185(), -1, "KOTC_START", func_185());
											}
											else
											{
												func_183(81, "KOTC_START2", "KOTC_STRAP1", func_185(), -1, func_185());
												unk_0x872F1C1F8587CCC7(&iLocal_103, 14);
												unk_0x872F1C1F8587CCC7(&iLocal_103, 15);
											}
										}
										else
										{
											func_183(81, "KOTC_START", "KOTC_STRAP3", func_185(), -1, func_185());
										}
										unk_0x872F1C1F8587CCC7(&iLocal_103, 1);
									}
								}
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(iLocal_103, 2))
					{
						if (func_182(81))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 2);
						}
					}
					else if (iLocal_659 != -1)
					{
						if (func_8(iVar0) == iLocal_659)
						{
							if (!unk_0xC80D31E4B587871C(iLocal_103, 14))
							{
								if (!func_273(0, 0))
								{
									if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iLocal_659 /*18*/].f_1))
									{
										if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[iLocal_659 /*18*/].f_1))
										{
											func_183(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0x872F1C1F8587CCC7(&iLocal_103, 14);
										}
									}
								}
							}
							else if (!unk_0xC80D31E4B587871C(iLocal_103, 15))
							{
								if (func_182(81))
								{
									unk_0x872F1C1F8587CCC7(&iLocal_103, 15);
								}
							}
						}
						else
						{
							if (unk_0xC80D31E4B587871C(iLocal_103, 14))
							{
								unk_0x0EE72DB1CD8A3B86(&iLocal_103, 14);
							}
							if (unk_0xC80D31E4B587871C(iLocal_103, 15))
							{
								unk_0x0EE72DB1CD8A3B86(&iLocal_103, 15);
							}
						}
					}
					else
					{
						if (unk_0xC80D31E4B587871C(iLocal_103, 14))
						{
							unk_0x0EE72DB1CD8A3B86(&iLocal_103, 14);
						}
						if (unk_0xC80D31E4B587871C(iLocal_103, 15))
						{
							unk_0x0EE72DB1CD8A3B86(&iLocal_103, 15);
						}
					}
				}
				else
				{
					func_181();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_659 != -1)
						{
							if (func_8(iVar0) == iLocal_659)
							{
								if (!func_273(1, 0))
								{
									func_178("KOTC_KINGOB1", 0);
								}
								else
								{
									func_181();
								}
								if (unk_0xC80D31E4B587871C(iLocal_103, 10))
								{
									if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
									{
										if (!unk_0xF491DD47B88AA84E())
										{
											if (!func_216())
											{
												if (!func_273(0, 0))
												{
													if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
													{
														if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
														{
															if (unk_0xC80D31E4B587871C(iLocal_103, 2))
															{
																if (!func_186(unk_0x9EB17624F44A8DA4(), func_7(iVar0)))
																{
																	if (!unk_0xC80D31E4B587871C(iLocal_103, 10))
																	{
																		func_215("KOTC_YOUKNG", 30000);
																		func_214(1);
																		unk_0x872F1C1F8587CCC7(&iLocal_103, 6);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
								{
									if (!unk_0xC80D31E4B587871C(iLocal_103, 7))
									{
										if (func_177(unk_0x622FF3AE4B1D07C3()))
										{
											if (!unk_0xF491DD47B88AA84E())
											{
												if (!func_216())
												{
													if (!func_273(0, 0))
													{
														if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
														{
															if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
															{
																if (unk_0xC80D31E4B587871C(iLocal_103, 2))
																{
																	if (!func_186(unk_0x9EB17624F44A8DA4(), func_7(iVar0)))
																	{
																		if (!unk_0xC80D31E4B587871C(iLocal_103, 7))
																		{
																			func_215("KOTC_OTHRKG", 30000);
																			func_214(1);
																			unk_0x872F1C1F8587CCC7(&iLocal_103, 7);
																		}
																	}
																	else if (!unk_0xC80D31E4B587871C(iLocal_103, 11))
																	{
																		func_154("KOTC_OTHRKGGN", func_176(), 1, "KOTC_KINGBLIP", func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0), -1);
																		func_214(1);
																		unk_0x872F1C1F8587CCC7(&iLocal_103, 11);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_177(iLocal_659) || unk_0xC80D31E4B587871C(Local_102[iLocal_659 /*5*/].f_4, 12)) && unk_0xC80D31E4B587871C(iLocal_652, func_8(iVar0))) && !func_273(1, 0))
								{
									if (func_186(unk_0x9EB17624F44A8DA4(), func_7(iVar0)))
									{
										func_151("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0), 0);
									}
									else
									{
										func_140("KOTC_PERMKNG", &(Local_108[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_181();
								}
							}
						}
						else
						{
							func_181();
						}
					}
					else if (iLocal_659 != -1)
					{
						if (!func_273(1, 0))
						{
							if (func_229(unk_0x622FF3AE4B1D07C3(), iVar0))
							{
								func_178("KOTC_KLLALL", 0);
							}
							else
							{
								func_178("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_181();
						}
						if (!unk_0xC80D31E4B587871C(iLocal_103, 10))
						{
							if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
							{
								if (func_177(unk_0x622FF3AE4B1D07C3()))
								{
									if (!unk_0xF491DD47B88AA84E())
									{
										if (!func_216())
										{
											if (!func_273(0, 0))
											{
												if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
												{
													if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
													{
														if (func_139(iVar0))
														{
															func_215("KOTC_CONTS", 30000);
															func_214(1);
															unk_0x872F1C1F8587CCC7(&iLocal_103, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_181();
					}
				}
				if (iLocal_659 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_177(unk_0x622FF3AE4B1D07C3()) && !func_273(1, 0))
						{
							func_178("KOTC_ENTER", 0);
						}
						else
						{
							func_181();
						}
					}
				}
				else
				{
					func_181();
				}
				func_112(iVar0);
				if (func_228(unk_0x9EB17624F44A8DA4()) == 141)
				{
					func_86(iVar0);
				}
				func_85();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_83(iVar0);
				func_81(iVar0);
				iVar0++;
			}
			func_181();
			func_272();
			func_77();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_659 != -1)
				{
					if (unk_0xC80D31E4B587871C(iLocal_103, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_659)
							{
								if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_112(iVar0);
				if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!unk_0xC80D31E4B587871C(iLocal_652, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_99.f_5 = 1;
			}
			if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 1) && func_76())
			{
				if (!unk_0xC80D31E4B587871C(iLocal_103, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_273(0, 0))
							{
								func_75("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_659 != -1)
							{
								if (!func_273(0, 0))
								{
									if (!func_273(0, 0))
									{
										if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iLocal_659 /*18*/].f_1))
										{
											if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[iLocal_659 /*18*/].f_1))
											{
												if (func_177(iLocal_659))
												{
													func_183(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_75("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_659 != -1)
							{
								if (!func_273(0, 0))
								{
									if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iLocal_659 /*18*/].f_1))
									{
										if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[iLocal_659 /*18*/].f_1))
										{
											if (func_177(iLocal_659))
											{
												func_73(64, func_74(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_72(sVar5, func_74(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_659 != -1)
						{
							if (!func_273(0, 0))
							{
								if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iLocal_659 /*18*/].f_1))
								{
									if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[iLocal_659 /*18*/].f_1))
									{
										if (func_177(iLocal_659))
										{
											sVar5 = "KOTC_OVER3";
											if (func_70(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_60(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0xDE2D3B9654C31EB3(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(72, func_74(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_74(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
					{
						if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 3);
						}
					}
				}
				if (unk_0xC80D31E4B587871C(iLocal_103, 3))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_103, 4))
					{
						if (iLocal_659 != -1)
						{
							if (((((((func_182(64) || func_182(72)) || func_182(68)) || !func_177(iLocal_659)) || func_273(1, 1)) || unk_0x0F30C1F1717A6437()) || func_15(0) == 0) || iLocal_659 == -1)
							{
								unk_0x872F1C1F8587CCC7(&iLocal_103, 4);
							}
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 4);
						}
					}
				}
				if (unk_0xC80D31E4B587871C(iLocal_103, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_586(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_273(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_659 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_110, bVar10) && unk_0xC80D31E4B587871C(iLocal_103, 4))
			{
				if (!func_216() || unk_0x0F30C1F1717A6437())
				{
					unk_0x872F1C1F8587CCC7(&iLocal_103, 17);
					if (unk_0xC80D31E4B587871C(iLocal_103, 5))
					{
						unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 1);
						func_472(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)//Position - 0x1603
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_216()) && !(func_31(unk_0x9EB17624F44A8DA4(), 0) && (func_30(unk_0x9EB17624F44A8DA4()) || func_28(unk_0x9EB17624F44A8DA4())))) && !func_25(unk_0x9EB17624F44A8DA4()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
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
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_213("AMEV_LBD_HELP"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

void func_22()//Position - 0x177F
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173())
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_215("AMEV_LBD_HELP", -1);
			func_214(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)//Position - 0x1802
{
	*uParam0 = iParam1;
}

void func_24()//Position - 0x180F
{
	Global_2458365 = 1;
}

int func_25(int iParam0)//Position - 0x181C
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1862
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

int func_27()//Position - 0x1B26
{
	return -1;
}

bool func_28(int iParam0)//Position - 0x1B2F
{
	return func_29(iParam0, 19);
}

bool func_29(int iParam0, int iParam1)//Position - 0x1B3F
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_30(int iParam0)//Position - 0x1B5A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_29(iParam0, 9);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)//Position - 0x1B78
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_32(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)//Position - 0x1BB3
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(iParam2);
		unk_0x854FACC4E5F40C82(func_42(&Var1));
		unk_0x6223D539BCD39E76(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
		else
		{
			Global_2492157 = { func_41(iParam1) };
			if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
			{
				iVar2 = 0;
				if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2492087.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam8)
				{
					if (bParam9)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = unk_0x679630D62246D8FF(iVar3, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, &Var1, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = unk_0xFEAF1A64BAF2011F(iVar3, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = unk_0x65F0733C4A64907A(0, 1);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1D1A
{
	int iVar0;
	
	if ((!func_39() || !unk_0x4916190900E76373()) || !func_36(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)//Position - 0x1E22
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_35(int iParam0)//Position - 0x1E84
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)//Position - 0x1EBD
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)//Position - 0x1F08
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()//Position - 0x1F49
{
	return Global_1312736;
}

bool func_39()//Position - 0x1F55
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

struct<16> func_40(char* sParam0)//Position - 0x1F66
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(int iParam0)//Position - 0x1F91
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)//Position - 0x1FA8
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)//Position - 0x1FCC
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1FD6
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_59(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_24), sParam3, 64);
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)//Position - 0x2043
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_58(uParam0, uParam0->f_16);
	func_56(uParam0);
	if (func_55())
	{
		func_56(uParam0);
	}
	if (func_54(uParam0->f_1))
	{
		func_47();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_47();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_46(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x2204
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_47()//Position - 0x2284
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_48();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_48()//Position - 0x22B7
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_52(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_49(&(Global_2436181.f_2912.f_1));
}

void func_49(var uParam0)//Position - 0x22F8
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
		unk_0x7635EA803CE40962(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_51(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_50(0);
}

void func_50(int iParam0)//Position - 0x239F
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_51(bool bParam0)//Position - 0x23B3
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_52(var uParam0)//Position - 0x23DE
{
	func_53(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_53(var uParam0)//Position - 0x2408
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

int func_54(int iParam0)//Position - 0x2487
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_55()//Position - 0x2589
{
	return Global_2447174.f_16;
}

void func_56(var uParam0)//Position - 0x2597
{
	if (func_57(uParam0->f_1))
	{
		uParam0->f_71 = func_185();
	}
}

int func_57(int iParam0)//Position - 0x25B2
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_58(var uParam0, int iParam1)//Position - 0x2644
{
	if (func_57(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_27() || !func_717(iParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_155(iParam1, -2, 0, 0);
		}
	}
}

void func_59(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x269A
{
	uParam1->f_16 = func_27();
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
	uParam1->f_19 = func_27();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

char* func_60(int iParam0)//Position - 0x2715
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		sVar0 = func_69(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		sVar0 = func_64(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(unk_0x9EB17624F44A8DA4(), 28)) || func_63(iParam0)) && !func_62(iParam0))
	{
		return func_64(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_64(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_69(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar0))
		{
			return func_64(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_61(int iParam0)//Position - 0x281C
{
	if (iParam0 != func_27())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_27();
}

int func_62(int iParam0)//Position - 0x283F
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x286F
{
	struct<13> Var0;
	
	if (iParam0 != func_27())
	{
		Var0 = { func_41(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_64(int iParam0, bool bParam1)//Position - 0x28C8
{
	if (!bParam1)
	{
		if (func_66(iParam0, 1))
		{
			return func_65();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_65()//Position - 0x28EF
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

bool func_66(int iParam0, bool bParam1)//Position - 0x28FF
{
	return func_67(iParam0, bParam1, 1);
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x2910
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_68(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_27() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)//Position - 0x296C
{
	if (iParam0 != func_27())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_27())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_69(var uParam0)//Position - 0x29BB
{
	return uParam0;
}

bool func_70(int iParam0, bool bParam1)//Position - 0x29C5
{
	if (!bParam1)
	{
		if (func_71(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_27();
}

int func_71(int iParam0)//Position - 0x29F0
{
	if (iParam0 != func_27())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_27())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_72(char* sParam0, int iParam1, int iParam2)//Position - 0x2A25
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_73(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2A5B
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_59(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_70 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam7;
	return func_45(&Var0);
}

int func_74(float fParam0)//Position - 0x2AC6
{
	int iVar0;
	
	iVar0 = system::floor(fParam0);
	iVar0 = (iVar0 / Global_262145.f_10532);
	iVar0 = (iVar0 * Global_262145.f_10532);
	return iVar0;
}

int func_75(char* sParam0, int iParam1)//Position - 0x2AF0
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_76()//Position - 0x2B1C
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 25);
}

void func_77()//Position - 0x2B30
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_78(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_78(int iParam0, int iParam1)//Position - 0x2B65
{
	int iVar0;
	
	iVar0 = func_480(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0xC80D31E4B587871C(iLocal_104, iVar0))
	{
		unk_0x71842E52F79163A6(func_80(iParam0, 0), 0, func_79(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0x71842E52F79163A6(func_80(iParam0, 1), 0, func_79(iParam0, 1));
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_104, iVar0);
	}
}

int func_79(int iParam0, bool bParam1)//Position - 0x2BC2
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == unk_0x622FF3AE4B1D07C3())
	{
		return 9;
	}
	else if (func_186(unk_0x9EB17624F44A8DA4(), func_7(iParam0)))
	{
		return func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0);
	}
	return 6;
}

int func_80(int iParam0, bool bParam1)//Position - 0x2C1D
{
	switch (func_480(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_81(int iParam0)//Position - 0x2C98
{
	if (unk_0xA6DECE14FC9A8C51(func_82(iParam0)))
	{
		unk_0xE30CF11C0EE14316(&(Local_117[iParam0 /*68*/].f_28));
	}
}

var func_82(int iParam0)//Position - 0x2CBA
{
	return Local_117[iParam0 /*68*/].f_28;
}

void func_83(int iParam0)//Position - 0x2CCB
{
	if (unk_0xA6DECE14FC9A8C51(func_84(iParam0)))
	{
		unk_0xE30CF11C0EE14316(&(Local_117[iParam0 /*68*/].f_27));
	}
}

var func_84(int iParam0)//Position - 0x2CED
{
	return Local_117[iParam0 /*68*/].f_27;
}

void func_85()//Position - 0x2CFE
{
	bool bVar0;
	
	if (iLocal_659 != -1)
	{
		if (func_177(iLocal_659))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0xC80D31E4B587871C(iLocal_103, 16))
		{
			unk_0xE859EF37EA7362D3("MP_Deathmatch_Type_Challenge_Scene");
			unk_0x872F1C1F8587CCC7(&iLocal_103, 16);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_103, 16))
	{
		unk_0xE02E32C69260FBB7("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x0EE72DB1CD8A3B86(&iLocal_103, 16);
	}
}

void func_86(int iParam0)//Position - 0x2D5E
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_177(unk_0x622FF3AE4B1D07C3()) && !func_273(1, 1)) && iLocal_659 == unk_0x622FF3AE4B1D07C3()) && !func_105(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1)) && !func_104(unk_0x9EB17624F44A8DA4())) && !func_103())
	{
		if (!unk_0xC80D31E4B587871C(iLocal_103, 18))
		{
			if (iLocal_663 == 0)
			{
				iLocal_663 = 1;
			}
			func_96(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_92();
			unk_0x872F1C1F8587CCC7(&iLocal_103, 18);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_103, 18))
	{
		if (iLocal_663)
		{
			iLocal_663 = 0;
		}
		func_87();
		func_96(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x0EE72DB1CD8A3B86(&iLocal_103, 18);
	}
}

void func_87()//Position - 0x2E5E
{
	if (func_91() && !func_90())
	{
		func_89();
	}
	func_88();
	Global_2405047.f_687 = 0;
}

void func_88()//Position - 0x2E87
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_89()//Position - 0x2EC2
{
	if (func_90())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_90()//Position - 0x2F30
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

int func_91()//Position - 0x2F6F
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_92()//Position - 0x2FAE
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_94(func_480(iVar0), iVar1, &vVar2, &uVar3, &uVar4);
			func_93(vVar2, uVar3, uVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_93(vector3 vParam0, var uParam1, var uParam2)//Position - 0x2FF9
{
	if (!Global_2405047.f_1720)
	{
	}
	if (Global_2405047.f_687 < 100)
	{
		if (system::vmag(vParam0) <= 0,01f)
		{
			return;
		}
		Global_2405047.f_687.f_1[Global_2405047.f_687 /*5*/] = { vParam0 };
		Global_2405047.f_687.f_1[Global_2405047.f_687 /*5*/].f_3 = uParam1;
		Global_2405047.f_687.f_1[Global_2405047.f_687 /*5*/].f_4 = uParam2;
		Global_2405047.f_687++;
	}
}

void func_94(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3083
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221,708f, -1849,335f, 1,251f };
					*uParam3 = 337,5771f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237,67f, -1835,705f, 1,2517f };
					*uParam3 = 323,4358f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249,548f, -1817,355f, 1,2506f };
					*uParam3 = 297,8504f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248,685f, -1803,257f, 1,3833f };
					*uParam3 = 286,9426f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248,991f, -1791,148f, 1,6577f };
					*uParam3 = 279,8152f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255,678f, -1781,741f, 1,5292f };
					*uParam3 = 271,3008f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245,86f, -1762,165f, 1,7061f };
					*uParam3 = 232,2266f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245,333f, -1747,114f, 2,0783f };
					*uParam3 = 246,9348f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231,577f, -1747,278f, 2,2692f };
					*uParam3 = 208,6838f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220,947f, -1735,378f, 3,3682f };
					*uParam3 = 201,3756f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210,075f, -1736,36f, 3,2672f };
					*uParam3 = 188,154f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198,247f, -1731,74f, 3,3204f };
					*uParam3 = 194,4361f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181,951f, -1730,004f, 3,3951f };
					*uParam3 = 177,6483f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170,59f, -1719,653f, 3,3414f };
					*uParam3 = 159,2419f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159,548f, -1712,506f, 3,327f };
					*uParam3 = 173,1471f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164,51f, -1729,84f, 3,2972f };
					*uParam3 = 164,5387f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153,682f, -1723,684f, 3,2673f };
					*uParam3 = 159,7204f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144,7f, -1734,572f, 3,2823f };
					*uParam3 = 132,856f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128,272f, -1755,871f, 3,0265f };
					*uParam3 = 111,5717f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140,422f, -1768,454f, 3,1609f };
					*uParam3 = 108,3239f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236,169f, -1851,284f, 1,2074f };
					*uParam3 = 330,7894f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250,026f, -1849,988f, 0,8113f };
					*uParam3 = 315,2169f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249,307f, -1832,01f, 1,2365f };
					*uParam3 = 308,724f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262,08f, -1826,342f, 0,88f };
					*uParam3 = 291,1317f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262,728f, -1810,021f, 1,2095f };
					*uParam3 = 279,2619f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260,259f, -1797,316f, 1,24f };
					*uParam3 = 266,2758f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274,153f, -1773,825f, 1,229f };
					*uParam3 = 253,8689f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260,69f, -1766,211f, 1,6755f };
					*uParam3 = 244,6821f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266,035f, -1751,414f, 1,7303f };
					*uParam3 = 225,9904f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208,952f, -1720,76f, 3,4325f };
					*uParam3 = 190,2951f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195,125f, -1711,339f, 3,4745f };
					*uParam3 = 177,7994f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186,983f, -1699,157f, 3,4862f };
					*uParam3 = 185,7234f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174,999f, -1703,776f, 3,4646f };
					*uParam3 = 172,7709f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163,133f, -1699,905f, 3,4278f };
					*uParam3 = 169,2118f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150,336f, -1701,652f, 3,3947f };
					*uParam3 = 148,2826f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144,078f, -1687,13f, 3,4853f };
					*uParam3 = 149,4927f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138,136f, -1707,854f, 3,387f };
					*uParam3 = 133,8241f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140,055f, -1722,341f, 3,3376f };
					*uParam3 = 127,5326f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116,763f, -1746,22f, 3,1299f };
					*uParam3 = 107,5649f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108,207f, -1735,964f, 3,2643f };
					*uParam3 = 123,7412f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227,086f, -1873,856f, 4,935f };
					*uParam3 = 337,0957f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215,905f, -1861,876f, 4,9443f };
					*uParam3 = 346,5332f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206,479f, -1854,022f, 5,0039f };
					*uParam3 = 346,756f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234,57f, -1863,302f, 0,4019f };
					*uParam3 = 334,4932f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261,542f, -1840,843f, 0,429f };
					*uParam3 = 308,3732f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271,821f, -1799,404f, 0,9933f };
					*uParam3 = 276,274f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284,195f, -1789,106f, 0,6971f };
					*uParam3 = 266,1992f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257,971f, -1736,858f, 2,0784f };
					*uParam3 = 227,487f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247,267f, -1725,901f, 3,2245f };
					*uParam3 = 214,7514f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234,988f, -1722,898f, 3,5186f };
					*uParam3 = 220,7502f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235,874f, -1703,238f, 3,0997f };
					*uParam3 = 214,0405f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231,588f, -1682,849f, 2,571f };
					*uParam3 = 203,4435f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215,568f, -1695,777f, 3,1209f };
					*uParam3 = 196,5891f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132,415f, -1669,435f, 3,5755f };
					*uParam3 = 148,2112f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159,309f, -1677,777f, 3,4694f };
					*uParam3 = 175,6314f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129,18f, -1690,502f, 3,4678f };
					*uParam3 = 143,3497f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119,669f, -1702,988f, 3,4241f };
					*uParam3 = 129,3894f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120,063f, -1717,326f, 3,3807f };
					*uParam3 = 123,5869f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111,901f, -1758,692f, 4,7663f };
					*uParam3 = 93,7592f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122,059f, -1769,543f, 4,9921f };
					*uParam3 = 93,2178f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692,861f, -80,4741f, 174,6247f };
					*uParam3 = 22,7116f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699,049f, -73,278f, 175,3116f };
					*uParam3 = 36,6067f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686,15f, -72,261f, 173,9488f };
					*uParam3 = 33,5969f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673,573f, -76,8662f, 172,6441f };
					*uParam3 = 358,3647f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668,303f, -68,8711f, 172,6008f };
					*uParam3 = 344,7672f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664,004f, -81,4696f, 171,3247f };
					*uParam3 = 335,9399f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653,943f, -82,7018f, 170,2733f };
					*uParam3 = 316,5097f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642,184f, 16,9022f, 172,8744f };
					*uParam3 = 213,6659f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647,117f, 26,0881f, 172,469f };
					*uParam3 = 200,4823f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643,251f, 34,2645f, 171,8502f };
					*uParam3 = 198,3856f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652,155f, 38,4683f, 171,5731f };
					*uParam3 = 167,6548f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647,521f, 46,6361f, 171,515f };
					*uParam3 = 173,6852f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658,341f, 46,5354f, 171,4155f };
					*uParam3 = 142,775f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654,557f, 54,9274f, 171,5186f };
					*uParam3 = 158,0565f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679,687f, -62,2895f, 172,8752f };
					*uParam3 = 19,1425f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648,26f, -92,0332f, 169,0467f };
					*uParam3 = 320,4252f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641,12f, -90,8545f, 167,3707f };
					*uParam3 = 340,133f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632,839f, -88,4347f, 166,232f };
					*uParam3 = 275,8517f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624,526f, -82,0814f, 165,1201f };
					*uParam3 = 268,6114f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709,025f, -79,3046f, 176,215f };
					*uParam3 = 47,9711f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709,47f, -89,1149f, 176,8704f };
					*uParam3 = 45,0986f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719,762f, -89,4824f, 177,2371f };
					*uParam3 = 40,521f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715,411f, -97,7661f, 177,0435f };
					*uParam3 = 39,9521f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725,27f, -101,2808f, 177,3414f };
					*uParam3 = 28,2699f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664,762f, 51,6959f, 171,2758f };
					*uParam3 = 125,1599f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659,656f, 60,4243f, 171,7457f };
					*uParam3 = 155,8516f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671,615f, 58,2652f, 171,0533f };
					*uParam3 = 130,5652f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670,401f, 68,8127f, 170,8255f };
					*uParam3 = 142,8485f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680,824f, 64,6627f, 170,8684f };
					*uParam3 = 171,7255f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686,476f, 72,1055f, 170,6706f };
					*uParam3 = 118,2492f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724,498f, 78,3834f, 169,7617f };
					*uParam3 = 122,1907f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716,555f, 77,9f, 170,125f };
					*uParam3 = 133,2787f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718,658f, 69,3794f, 169,7158f };
					*uParam3 = 123,6501f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708,223f, 67,7488f, 170,122f };
					*uParam3 = 125,7215f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696,666f, 67,5787f, 170,4112f };
					*uParam3 = 130,5078f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688,924f, 64,4787f, 170,5247f };
					*uParam3 = 116,7526f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654,409f, 85,3155f, 178,6964f };
					*uParam3 = 185,1295f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642,521f, 61,9855f, 183,7891f };
					*uParam3 = 187,6025f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663,522f, 37,8715f, 170,7838f };
					*uParam3 = 181,9699f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663,431f, 25,7403f, 167,747f };
					*uParam3 = 165,7094f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660,156f, 12,794f, 165,1707f };
					*uParam3 = 184,4829f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658,881f, -53,3581f, 167,4092f };
					*uParam3 = 340,2356f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650,805f, -63,341f, 163,7801f };
					*uParam3 = 325,3763f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619,019f, -87,1216f, 164,7846f };
					*uParam3 = 285,7851f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616,216f, -76,6892f, 164,2788f };
					*uParam3 = 277,6688f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611,567f, -84,1719f, 164,6911f };
					*uParam3 = 279,2012f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606,564f, -73,1815f, 163,3484f };
					*uParam3 = 256,1666f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595,997f, -78,4415f, 162,1879f };
					*uParam3 = 273,5168f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596,441f, -69,8807f, 162,1016f };
					*uParam3 = 260,1767f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587,161f, -67,6343f, 161,2196f };
					*uParam3 = 253,1009f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582,353f, -76,1702f, 160,4171f };
					*uParam3 = 265,3223f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725,676f, -110,6558f, 177,8831f };
					*uParam3 = 34,6784f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736,203f, -108,6194f, 179,2085f };
					*uParam3 = 50,2519f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746,135f, -106,5357f, 180,7151f };
					*uParam3 = 65,9975f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749,594f, -96,7965f, 182,065f };
					*uParam3 = 79,3328f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758,513f, -98,7928f, 182,982f };
					*uParam3 = 82,5892f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760,473f, -88,7761f, 184,3481f };
					*uParam3 = 83,4158f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770,153f, -89,9473f, 186,0895f };
					*uParam3 = 69,9826f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772,731f, -80,3556f, 187,6041f };
					*uParam3 = 87,3442f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782,038f, -81,4923f, 188,8666f };
					*uParam3 = 92,9392f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358,9362f, 6101,992f, 30,5445f };
					*uParam3 = 124,1256f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348,5437f, 6102,846f, 30,5442f };
					*uParam3 = 115,8979f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354,9039f, 6112,223f, 30,5402f };
					*uParam3 = 155,6832f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341,2615f, 6111,447f, 30,542f };
					*uParam3 = 114,7182f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347,4731f, 6120,339f, 30,5401f };
					*uParam3 = 161,4131f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376,9227f, 6129,001f, 30,5322f };
					*uParam3 = 153,5222f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384,3775f, 6136,947f, 30,4047f };
					*uParam3 = 187,2874f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389,1951f, 6129,617f, 30,5795f };
					*uParam3 = 181,9189f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399,0005f, 6127,275f, 30,549f };
					*uParam3 = 204,8398f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383,5045f, 6120,464f, 30,5795f };
					*uParam3 = 140,9251f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391,13f, 6120,804f, 30,4824f };
					*uParam3 = 201,1372f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402,7893f, 6117,366f, 30,403f };
					*uParam3 = 226,6899f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412,6236f, 6114,75f, 30,403f };
					*uParam3 = 226,6899f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394,3771f, 6111,254f, 30,4438f };
					*uParam3 = 239,3517f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389,6141f, 6105,142f, 30,5445f };
					*uParam3 = 223,9884f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393,7008f, 6063,039f, 30,6001f };
					*uParam3 = 307,3006f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390,5935f, 6052,42f, 30,6001f };
					*uParam3 = 318,0318f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370,7218f, 6062,16f, 30,6001f };
					*uParam3 = 22,496f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360,3093f, 6063,834f, 30,6001f };
					*uParam3 = 37,8362f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342,4209f, 6079,654f, 30,3972f };
					*uParam3 = 68,9811f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341,2047f, 6070,171f, 30,4855f };
					*uParam3 = 63,9301f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329,9387f, 6066,402f, 30,3113f };
					*uParam3 = 44,5343f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335,7858f, 6122,277f, 31,2548f };
					*uParam3 = 129,6423f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342,0471f, 6128,171f, 31,2548f };
					*uParam3 = 142,1917f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349,7313f, 6135,283f, 31,2548f };
					*uParam3 = 158,8037f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356,2828f, 6125,203f, 30,5402f };
					*uParam3 = 199,7626f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359,0895f, 6139,214f, 30,5635f };
					*uParam3 = 124,4663f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369,4224f, 6152,725f, 30,4406f };
					*uParam3 = 161,3973f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375,9839f, 6141,022f, 30,4406f };
					*uParam3 = 161,3973f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369,7337f, 6134,166f, 30,5525f };
					*uParam3 = 136,8736f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359,228f, 6073,3f, 30,5975f };
					*uParam3 = 40,8648f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350,0499f, 6083,418f, 30,3773f };
					*uParam3 = 81,9925f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332,9335f, 6056,562f, 30,218f };
					*uParam3 = 34,6386f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319,7262f, 6071,655f, 30,4404f };
					*uParam3 = 98,0741f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305,5597f, 6086,671f, 30,3145f };
					*uParam3 = 105,1401f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315,9f, 6098,8f, 30,5622f };
					*uParam3 = 68,0701f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321,8067f, 6105,211f, 30,5847f };
					*uParam3 = 77,1148f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333,3944f, 6102,061f, 30,5452f };
					*uParam3 = 94,9811f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328,1533f, 6111,544f, 30,5992f };
					*uParam3 = 112,3565f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346,6402f, 6170,479f, 30,5104f };
					*uParam3 = 153,9383f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348,4091f, 6161,741f, 30,5903f };
					*uParam3 = 127,3381f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357,501f, 6164,666f, 30,3218f };
					*uParam3 = 165,9396f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362,3921f, 6158,998f, 30,4267f };
					*uParam3 = 164,6814f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299,2778f, 6094,682f, 30,3967f };
					*uParam3 = 97,7633f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403,1499f, 6144,179f, 30,5344f };
					*uParam3 = 192,2655f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419,8507f, 6128,894f, 30,3768f };
					*uParam3 = 226,1505f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403,4776f, 6109,125f, 30,432f };
					*uParam3 = 231,4631f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418,8898f, 6102,594f, 30,5063f };
					*uParam3 = 250,378f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423,8823f, 6087,721f, 30,3067f };
					*uParam3 = 249,7169f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409,3334f, 6087,301f, 30,6001f };
					*uParam3 = 255,2337f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415,4413f, 6074,564f, 30,6001f };
					*uParam3 = 295,8184f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424,9092f, 6072,749f, 30,4263f };
					*uParam3 = 283,0375f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420,9166f, 6060,098f, 30,5557f };
					*uParam3 = 253,9669f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410,8875f, 6060,549f, 30,6001f };
					*uParam3 = 233,6391f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401,7228f, 6048,293f, 30,6001f };
					*uParam3 = 316,9792f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410,8336f, 6049,957f, 30,7181f };
					*uParam3 = 282,7038f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388,0199f, 6039,768f, 30,5993f };
					*uParam3 = 17,0043f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395,2367f, 6033,086f, 30,6906f };
					*uParam3 = 344,4481f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385,8562f, 6026,026f, 30,7199f };
					*uParam3 = 19,855f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380,7711f, 6033,284f, 30,5989f };
					*uParam3 = 40,8827f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692,3021f, 5591,033f, 31,803f };
					*uParam3 = 74,8653f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688,3215f, 5575,978f, 38,7867f };
					*uParam3 = 59,0735f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697,7473f, 5566,13f, 37,8698f };
					*uParam3 = 50,5049f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707,0853f, 5561,903f, 37,7135f };
					*uParam3 = 46,5953f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718,0601f, 5562,404f, 35,1231f };
					*uParam3 = 35,9231f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729,6589f, 5559,356f, 33,8316f };
					*uParam3 = 2,3291f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723,8281f, 5544,737f, 34,8933f };
					*uParam3 = 18,3278f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780,6183f, 5563,971f, 32,6778f };
					*uParam3 = 329,6704f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767,3f, 5569,303f, 35,3f };
					*uParam3 = 331,3245f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772,2f, 5581,6f, 32,6824f };
					*uParam3 = 301,3555f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778,3644f, 5588,715f, 32,6826f };
					*uParam3 = 270,8067f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768,7381f, 5595,103f, 32,6827f };
					*uParam3 = 230,1011f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782,3171f, 5573,262f, 32,6847f };
					*uParam3 = 294,6598f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781,341f, 5582,1f, 32,6771f };
					*uParam3 = 336,2302f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753,9799f, 5627,107f, 27,1403f };
					*uParam3 = 171,4856f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730,2549f, 5635,994f, 27,8518f };
					*uParam3 = 162,9716f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723,6004f, 5622,383f, 28,385f };
					*uParam3 = 172,2795f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718,595f, 5631,016f, 27,7666f };
					*uParam3 = 172,2795f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708,1818f, 5621,512f, 29,6452f };
					*uParam3 = 126,8752f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696,5601f, 5615,674f, 29,9981f };
					*uParam3 = 125,8635f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708,3126f, 5550,206f, 36,7429f };
					*uParam3 = 29,6831f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766,3f, 5544,3f, 32,6826f };
					*uParam3 = 30,2344f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749,5f, 5527,9f, 33,1f };
					*uParam3 = 346,3935f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768,97f, 5520,835f, 32,6799f };
					*uParam3 = 340,5899f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763,8516f, 5533,312f, 32,6785f };
					*uParam3 = 1,7896f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775,123f, 5542,04f, 32,6934f };
					*uParam3 = 349,4598f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766,6f, 5553,1f, 34,4f };
					*uParam3 = 1,046f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771,2969f, 5556,745f, 32,6834f };
					*uParam3 = 349,9529f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781,6904f, 5555,604f, 32,6802f };
					*uParam3 = 351,5664f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769,5516f, 5621,658f, 26,7823f };
					*uParam3 = 235,7381f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761,2958f, 5636,444f, 25,4519f };
					*uParam3 = 168,4409f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760,2766f, 5661,296f, 22,954f };
					*uParam3 = 164,5044f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741,7708f, 5648,583f, 25,8433f };
					*uParam3 = 171,5803f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731,1522f, 5650,561f, 27,2619f };
					*uParam3 = 172,6602f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721,4506f, 5664,842f, 26,6086f };
					*uParam3 = 175,8839f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719,6653f, 5647,082f, 28,1182f };
					*uParam3 = 166,6596f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708,6494f, 5641,488f, 29,7045f };
					*uParam3 = 139,2498f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698,6087f, 5635,278f, 31,1732f };
					*uParam3 = 130,991f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764,6f, 5648,1f, 23,8802f };
					*uParam3 = 183,034f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750,9f, 5666,5f, 23,3295f };
					*uParam3 = 231,3595f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719,377f, 5680,363f, 25,3398f };
					*uParam3 = 160,6696f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698,3569f, 5694,537f, 26,6459f };
					*uParam3 = 147,8193f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680,2346f, 5676,271f, 30,6741f };
					*uParam3 = 86,9398f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676,3746f, 5655,031f, 32,0498f };
					*uParam3 = 139,4649f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680,2036f, 5638,799f, 32,6927f };
					*uParam3 = 134,8275f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650,3818f, 5653,84f, 33,0871f };
					*uParam3 = 123,0167f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670,8715f, 5583,509f, 38,7761f };
					*uParam3 = 85,3828f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743,9585f, 5544,044f, 32,6886f };
					*uParam3 = 10,6683f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786,1422f, 5543,069f, 32,7461f };
					*uParam3 = 320,9388f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800,3854f, 5544,438f, 32,1822f };
					*uParam3 = 318,5256f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808,8489f, 5557,178f, 31,0331f };
					*uParam3 = 284,0945f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804,6185f, 5577,981f, 30,1522f };
					*uParam3 = 312,7694f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804,7294f, 5593,23f, 28,3762f };
					*uParam3 = 257,0917f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796,4553f, 5614,668f, 26,6406f };
					*uParam3 = 245,4986f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790,2338f, 5632,483f, 25,0732f };
					*uParam3 = 224,0737f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807,922f, 5624,847f, 24,5138f };
					*uParam3 = 240,116f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778,2f, 5620,3f, 27f };
					*uParam3 = 221,8036f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820,9523f, 5595,459f, 24,6204f };
					*uParam3 = 248,8524f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712,2f, 5689,9f, 26f };
					*uParam3 = 156,9858f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699,6256f, 5678,481f, 29,242f };
					*uParam3 = 137,245f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504,708f, 3832,864f, 44,2233f };
					*uParam3 = 183,6139f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470,234f, 3832,214f, 39,2978f };
					*uParam3 = 221,0469f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469,984f, 3815,587f, 39,1223f };
					*uParam3 = 236,1043f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472,682f, 3802,595f, 39,5029f };
					*uParam3 = 252,6169f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448,337f, 3799,731f, 39,2155f };
					*uParam3 = 245,4931f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429,278f, 3803,292f, 38,8134f };
					*uParam3 = 251,2017f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461,768f, 3786,931f, 40,1218f };
					*uParam3 = 273,0054f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446,433f, 3784,864f, 39,6849f };
					*uParam3 = 253,3649f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431,84f, 3775,977f, 39,5771f };
					*uParam3 = 262,8813f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426,948f, 3759,106f, 40,5694f };
					*uParam3 = 286,9683f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413,091f, 3747,124f, 40,6396f };
					*uParam3 = 291,6124f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435,193f, 3749,984f, 41,1655f };
					*uParam3 = 292,603f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447,66f, 3752,583f, 41,4906f };
					*uParam3 = 297,6301f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458,258f, 3758,142f, 41,1153f };
					*uParam3 = 303,2986f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467,802f, 3750,602f, 41,4918f };
					*uParam3 = 303,2986f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473,253f, 3734,285f, 41,4643f };
					*uParam3 = 319,8912f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474,793f, 3718,189f, 43,5229f };
					*uParam3 = 353,5786f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494,569f, 3724,297f, 42,2386f };
					*uParam3 = 354,6885f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336,604f, 3786,805f, 35,4554f };
					*uParam3 = 271,7747f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449,885f, 3769,517f, 40,3259f };
					*uParam3 = 284,606f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486,191f, 3708,932f, 42,8584f };
					*uParam3 = 338,9825f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441,525f, 3726,493f, 49,833f };
					*uParam3 = 305,777f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435,716f, 3718,48f, 50,9846f };
					*uParam3 = 316,2304f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414,73f, 3734,144f, 41,656f };
					*uParam3 = 304,645f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397,829f, 3753,812f, 38,2667f };
					*uParam3 = 277,5322f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413,961f, 3768,889f, 38,9386f };
					*uParam3 = 262,8003f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418,116f, 3784,66f, 38,7937f };
					*uParam3 = 271,0046f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402,416f, 3792,671f, 38,1692f };
					*uParam3 = 252,6272f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392,174f, 3800,214f, 37,3174f };
					*uParam3 = 233,5119f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379,034f, 3800,104f, 36,6627f };
					*uParam3 = 253,7779f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421,42f, 3819,218f, 36,6498f };
					*uParam3 = 240,598f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433,665f, 3833,4f, 36,8711f };
					*uParam3 = 235,1875f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446,784f, 3840,43f, 36,9341f };
					*uParam3 = 232,4636f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462,195f, 3846,708f, 37,3552f };
					*uParam3 = 199,2328f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477,133f, 3855,754f, 37,2602f };
					*uParam3 = 202,825f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450,037f, 3811,51f, 39,475f };
					*uParam3 = 250,1392f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485,065f, 3829,442f, 39,1108f };
					*uParam3 = 211,7988f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484,83f, 3814,141f, 39,3918f };
					*uParam3 = 229,5693f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566,085f, 3806,854f, 64,6304f };
					*uParam3 = 105,4003f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585,664f, 3806,854f, 71,7304f };
					*uParam3 = 110,9439f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620,499f, 3798,988f, 78,4414f };
					*uParam3 = 80,1436f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612,831f, 3816,725f, 77,148f };
					*uParam3 = 105,885f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481,003f, 3874,722f, 38,2954f };
					*uParam3 = 168,6165f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439,931f, 3869,727f, 36,8359f };
					*uParam3 = 194,6768f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415,056f, 3867,74f, 36,4367f };
					*uParam3 = 227,8888f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405,057f, 3840,129f, 37,6172f };
					*uParam3 = 237,4134f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402,643f, 3831,987f, 37,3666f };
					*uParam3 = 243,847f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393,434f, 3820,804f, 37,399f };
					*uParam3 = 274,6625f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379,645f, 3814,471f, 37,141f };
					*uParam3 = 261,4475f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362,336f, 3795,185f, 36,6862f };
					*uParam3 = 270,3616f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347,031f, 3771,605f, 36,6862f };
					*uParam3 = 270,3616f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390,352f, 3771,605f, 37,0186f };
					*uParam3 = 277,3893f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376,869f, 3747,89f, 43,6471f };
					*uParam3 = 283,6571f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397,29f, 3720,224f, 45,2658f };
					*uParam3 = 309,3541f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389,842f, 3708,438f, 48,8025f };
					*uParam3 = 328,7773f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414,263f, 3688,072f, 55,1156f };
					*uParam3 = 318,0387f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425,977f, 3703,052f, 52,2051f };
					*uParam3 = 321,8817f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457,983f, 3723,803f, 47,774f };
					*uParam3 = 320,001f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467,429f, 3686,109f, 46,7001f };
					*uParam3 = 326,4034f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500,671f, 3701,153f, 40,9656f };
					*uParam3 = 343,9347f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393,9336f, 1106,463f, 324,963f };
					*uParam3 = 3,7402f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410,0362f, 1109,404f, 324,9667f };
					*uParam3 = 333,049f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428,784f, 1115,099f, 325,868f };
					*uParam3 = 300,9811f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447,0386f, 1119,385f, 324,9694f };
					*uParam3 = 291,3791f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442,3369f, 1130,731f, 324,9604f };
					*uParam3 = 277,1605f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440,9719f, 1142,607f, 324,9557f };
					*uParam3 = 250,3044f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446,4467f, 1154,628f, 325,0045f };
					*uParam3 = 248,4445f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434,5363f, 1160,321f, 324,9632f };
					*uParam3 = 230,0039f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424,4414f, 1172,293f, 325,0043f };
					*uParam3 = 219,6946f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421,9871f, 1161,774f, 325,0063f };
					*uParam3 = 219,721f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427,4456f, 1148,051f, 325,0044f };
					*uParam3 = 230,6394f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428,7997f, 1136,869f, 325,0044f };
					*uParam3 = 260,5906f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431,5406f, 1126,397f, 325,0403f };
					*uParam3 = 280,8301f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416,0247f, 1120,771f, 324,9593f };
					*uParam3 = 308,4634f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419,4272f, 1131,455f, 325,0045f };
					*uParam3 = 267,8754f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418,7003f, 1142,939f, 324,962f };
					*uParam3 = 234,7959f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408,7494f, 1158,555f, 325,0084f };
					*uParam3 = 202,298f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411,2803f, 1169,951f, 324,9431f };
					*uParam3 = 205,6539f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398,8847f, 1164,101f, 325,0133f };
					*uParam3 = 184,3107f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388,1964f, 1173,05f, 324,8147f };
					*uParam3 = 166,4872f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368,8524f, 1165,414f, 324,8589f };
					*uParam3 = 143,9187f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378,9884f, 1168,124f, 324,9442f };
					*uParam3 = 138,8804f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386,2831f, 1186,969f, 324,8583f };
					*uParam3 = 168,679f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424,0227f, 1207,077f, 324,8583f };
					*uParam3 = 192,8885f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425,9954f, 1196,52f, 324,8583f };
					*uParam3 = 182,6931f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400,9391f, 1177,741f, 324,7394f };
					*uParam3 = 183,8522f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414,3408f, 1178,525f, 324,7417f };
					*uParam3 = 190,7249f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424,777f, 1183,848f, 324,7417f };
					*uParam3 = 204,1173f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438,3099f, 1184,969f, 324,9972f };
					*uParam3 = 216,3494f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440,8298f, 1174,33f, 324,9674f };
					*uParam3 = 236,8431f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450,9589f, 1165,905f, 324,9547f };
					*uParam3 = 238,6017f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459,008f, 1156,905f, 324,9622f };
					*uParam3 = 235,1455f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466,6086f, 1151,548f, 324,9625f };
					*uParam3 = 262,671f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463,0775f, 1140,172f, 325,0044f };
					*uParam3 = 255,8193f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453,6404f, 1141,622f, 325,0044f };
					*uParam3 = 270,7759f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468,3044f, 1126,492f, 324,9643f };
					*uParam3 = 263,469f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457,6102f, 1126,904f, 324,9546f };
					*uParam3 = 262,384f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385,6385f, 1102,252f, 324,7293f };
					*uParam3 = 25,2881f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383,8219f, 1093,566f, 324,3149f };
					*uParam3 = 2,7963f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390,1671f, 1092,119f, 325,2136f };
					*uParam3 = 20,6423f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399,5618f, 1081,56f, 326,7102f };
					*uParam3 = 304,4997f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390,9579f, 1075,828f, 323,3234f };
					*uParam3 = 339,4828f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386,3601f, 1084,166f, 323,7919f };
					*uParam3 = 354,7784f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343,6368f, 1155,187f, 324,7273f };
					*uParam3 = 115,9307f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350,9581f, 1163,98f, 324,5156f };
					*uParam3 = 116,0754f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359,8979f, 1158,566f, 324,6362f };
					*uParam3 = 120,9973f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399,4072f, 1196,483f, 324,7383f };
					*uParam3 = 182,8968f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400,8836f, 1210,983f, 325,0406f };
					*uParam3 = 195,0742f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381,3676f, 1203,004f, 324,8555f };
					*uParam3 = 162,6808f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377,298f, 1218,699f, 324,8556f };
					*uParam3 = 161,6516f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416,3955f, 1238,681f, 324,8614f };
					*uParam3 = 196,7896f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420,2233f, 1223,627f, 324,8551f };
					*uParam3 = 195,917f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449,2621f, 1187,425f, 324,988f };
					*uParam3 = 245,0986f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462,3227f, 1187,615f, 324,7824f };
					*uParam3 = 250,3676f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472,915f, 1142,98f, 324,9524f };
					*uParam3 = 260,1427f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476,2405f, 1120,76f, 324,9513f };
					*uParam3 = 281,8387f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480,6375f, 1107,113f, 324,9517f };
					*uParam3 = 330,5185f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467,9135f, 1119,13f, 324,975f };
					*uParam3 = 291,4161f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472,083f, 1186,256f, 324,4922f };
					*uParam3 = 248,7844f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336,9653f, 1155,261f, 324,8132f };
					*uParam3 = 116,8097f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457,789f, -1306,329f, 28,3817f };
					*uParam3 = 213,4484f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462,9742f, -1315,816f, 28,3365f };
					*uParam3 = 211,6687f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491,3282f, -1343,662f, 28,3462f };
					*uParam3 = 29,1021f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488,5634f, -1353,807f, 28,365f };
					*uParam3 = 350,4963f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489,778f, -1362,178f, 28,3936f };
					*uParam3 = 333,8013f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487,9373f, -1371,324f, 28,3937f };
					*uParam3 = 350,2063f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491,692f, -1377,681f, 28,4808f };
					*uParam3 = 6,2341f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508,4521f, -1332,725f, 28,8217f };
					*uParam3 = 81,6066f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482,3437f, -1302,914f, 28,3646f };
					*uParam3 = 185,9192f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489,6881f, -1306,12f, 28,375f };
					*uParam3 = 181,4375f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486,8906f, -1314,552f, 28,3349f };
					*uParam3 = 201,3654f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510,3459f, -1328,159f, 28,4041f };
					*uParam3 = 38,9104f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503,6635f, -1316,644f, 28,254f };
					*uParam3 = 78,5885f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498,5652f, -1306,801f, 28,375f };
					*uParam3 = 181,4375f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494,3388f, -1296,788f, 27,8975f };
					*uParam3 = 181,588f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445,3724f, -1312,777f, 33,034f };
					*uParam3 = 231,2194f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494,6642f, -1289,089f, 28,3994f };
					*uParam3 = 190,9093f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512,1788f, -1296,798f, 29,0244f };
					*uParam3 = 127,6323f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516,3178f, -1306,591f, 29,0325f };
					*uParam3 = 105,4519f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522,4741f, -1315,716f, 28,6153f };
					*uParam3 = 86,1907f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530,4f, -1324,764f, 28,611f };
					*uParam3 = 86,0417f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512,5676f, -1266,132f, 29,2571f };
					*uParam3 = 138,7522f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503,5058f, -1408,527f, 28,4094f };
					*uParam3 = 38,8401f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494,4435f, -1405,518f, 28,4094f };
					*uParam3 = 10,3526f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480,3399f, -1404,552f, 28,3783f };
					*uParam3 = 327,4608f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486,9532f, -1397,729f, 28,4044f };
					*uParam3 = 9,2252f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478,9936f, -1390,911f, 28,4649f };
					*uParam3 = 301,6067f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491,3508f, -1387,024f, 28,4781f };
					*uParam3 = 349,894f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423,8583f, -1342,402f, 34,9472f };
					*uParam3 = 261,565f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436,9487f, -1354,909f, 32,8767f };
					*uParam3 = 281,1848f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418,0431f, -1351,691f, 30,4924f };
					*uParam3 = 242,0479f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420,5738f, -1360,155f, 31,3616f };
					*uParam3 = 258,2115f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427,6197f, -1367,648f, 32,4927f };
					*uParam3 = 295,2934f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464,2118f, -1407,325f, 28,4406f };
					*uParam3 = 264,6266f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473,348f, -1411,325f, 28,4462f };
					*uParam3 = 282,62f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482,7524f, -1415,458f, 28,2625f };
					*uParam3 = 321,8356f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495,2037f, -1418,058f, 28,2691f };
					*uParam3 = 7,1158f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503,2256f, -1399,498f, 29,6255f };
					*uParam3 = 163,0629f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504,0861f, -1418,874f, 28,399f };
					*uParam3 = 19,1681f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515,1004f, -1418,266f, 28,4334f };
					*uParam3 = 70,436f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526,7444f, -1417,327f, 28,3217f };
					*uParam3 = 77,2632f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537,8759f, -1339,477f, 28,7478f };
					*uParam3 = 32,234f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523,1588f, -1342,832f, 28,402f };
					*uParam3 = 44,3382f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516,2181f, -1333,808f, 28,4019f };
					*uParam3 = 42,2223f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545,4319f, -1321,294f, 28,8519f };
					*uParam3 = 82,4327f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543,2325f, -1310,26f, 29,2949f };
					*uParam3 = 90,2737f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519,066f, -1293,935f, 27,1144f };
					*uParam3 = 165,5317f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526,7755f, -1289,459f, 29,7686f };
					*uParam3 = 143,1124f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523,58f, -1272,328f, 30,0824f };
					*uParam3 = 138,49f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524,081f, -1260,682f, 29,5842f };
					*uParam3 = 132,1786f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517,0681f, -1239,373f, 29,9303f };
					*uParam3 = 154,6133f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516,2507f, -1253,02f, 29,6427f };
					*uParam3 = 162,9373f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513,244f, -1278,351f, 29,7743f };
					*uParam3 = 150,8734f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493,7339f, -1268,213f, 28,392f };
					*uParam3 = 179,546f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494,1401f, -1281,491f, 28,394f };
					*uParam3 = 175,0507f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555,4178f, -1356,743f, 28,7709f };
					*uParam3 = 50,8085f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475,9386f, -1304,794f, 32,0473f };
					*uParam3 = 112,0399f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465,516f, -1301,604f, 32,0473f };
					*uParam3 = 189,1235f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440,8456f, -1321,148f, 30,3086f };
					*uParam3 = 235,1875f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421,228f, -1316,188f, 30,3078f };
					*uParam3 = 236,0292f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432,451f, 236,9887f, 59,1671f };
					*uParam3 = 127,6804f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434,54f, 243,4075f, 59,3382f };
					*uParam3 = 176,5221f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425,965f, 233,6748f, 58,9327f };
					*uParam3 = 67,1914f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431,833f, 176,7196f, 55,6359f };
					*uParam3 = 115,4533f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436,571f, 168,3388f, 54,8029f };
					*uParam3 = 42,4646f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441,14f, 162,3594f, 54,1846f };
					*uParam3 = 5,2323f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526,297f, 160,2353f, 53,2037f };
					*uParam3 = 277,6807f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518,497f, 145,7663f, 54,7527f };
					*uParam3 = 310,257f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506,654f, 132,8194f, 54,7529f };
					*uParam3 = 324,8665f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495,287f, 118,9496f, 54,7569f };
					*uParam3 = 328,5237f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482,5f, 114,8686f, 54,589f };
					*uParam3 = 341,3174f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465,16f, 114,8327f, 52,2589f };
					*uParam3 = 357,6763f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451,507f, 64,7578f, 51,4041f };
					*uParam3 = 91,7588f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461,18f, 63,8165f, 51,8802f };
					*uParam3 = 26,7651f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502,689f, 44,4251f, 53,8926f };
					*uParam3 = 308,9227f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470,511f, 65,7823f, 52,315f };
					*uParam3 = 20,0152f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485,597f, 73,3039f, 53,7206f };
					*uParam3 = 353,3321f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598,528f, 149,7495f, 58,6949f };
					*uParam3 = 277,3246f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583,425f, 155,9397f, 57,9714f };
					*uParam3 = 236,3493f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561,721f, 153,229f, 56,9434f };
					*uParam3 = 282,9456f;
					*uParam4 = func_95(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597,874f, 138,8909f, 58,9224f };
					*uParam3 = 291,1977f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624,61f, 118,2495f, 60,9528f };
					*uParam3 = 286,5444f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635,546f, 98,7833f, 61,5816f };
					*uParam3 = 307,8016f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615,593f, 74,5104f, 60,5005f };
					*uParam3 = 358,8846f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623,266f, 72,784f, 60,7418f };
					*uParam3 = 303,1707f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611,091f, 66,0932f, 60,1192f };
					*uParam3 = 8,1702f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485,756f, 49,183f, 53,0408f };
					*uParam3 = 329,1895f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464,841f, 52,066f, 52,0575f };
					*uParam3 = 26,7727f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450,809f, 49,7653f, 51,6797f };
					*uParam3 = 42,6481f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462,326f, 88,4265f, 53,8826f };
					*uParam3 = 353,3917f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491,87f, 95,0945f, 54,1122f };
					*uParam3 = 314,473f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476,808f, 108,3742f, 53,8967f };
					*uParam3 = 348,5514f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443,964f, 153,6641f, 53,4228f };
					*uParam3 = 5,4015f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422,558f, 161,544f, 55,0401f };
					*uParam3 = 41,9873f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425,595f, 187,9517f, 56,689f };
					*uParam3 = 129,5252f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411,395f, 239,4108f, 58,8958f };
					*uParam3 = 94,2972f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415,572f, 249,2832f, 59,1409f };
					*uParam3 = 122,1957f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459,738f, 238,6189f, 58,7949f };
					*uParam3 = 180,7222f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573,812f, 161,2271f, 57,4846f };
					*uParam3 = 134,8161f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589,462f, 172,0972f, 57,9565f };
					*uParam3 = 211,4448f;
					*uParam4 = func_95(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599,631f, 177,347f, 58,4655f };
					*uParam3 = 218,6622f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605,247f, 166,7319f, 58,6104f };
					*uParam3 = 240,273f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610,489f, 133,2583f, 59,7152f };
					*uParam3 = 286,0001f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609,133f, 118,5496f, 59,985f };
					*uParam3 = 309,8568f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600,147f, 104,7807f, 60,079f };
					*uParam3 = 345,0445f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595,336f, 88,6422f, 59,9101f };
					*uParam3 = 325,4662f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571,039f, 95,7035f, 57,4104f };
					*uParam3 = 320,9921f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528,822f, 60,1519f, 56,3681f };
					*uParam3 = 299,9443f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581,063f, 69,4907f, 59,9072f };
					*uParam3 = 302,81f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502,428f, 75,9977f, 54,5965f };
					*uParam3 = 333,9787f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533,281f, 81,1755f, 55,8724f };
					*uParam3 = 288,1328f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533,984f, 102,1409f, 55,8727f };
					*uParam3 = 232,9465f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598,389f, 49,5038f, 59,7089f };
					*uParam3 = 24,7707f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613,303f, 45,0376f, 60,9909f };
					*uParam3 = 352,9884f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632,785f, 50,5315f, 61,543f };
					*uParam3 = 325,0906f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636,258f, 69,9035f, 61,7993f };
					*uParam3 = 291,5305f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429,691f, 143,2913f, 53,2468f };
					*uParam3 = 17,521f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408,523f, 152,6476f, 54,6591f };
					*uParam3 = 54,2465f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403,501f, 245,4762f, 59,2192f };
					*uParam3 = 112,9726f;
					*uParam4 = func_95(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417,563f, 260,8751f, 59,5187f };
					*uParam3 = 146,682f;
					*uParam4 = func_95(iParam0, 2);
					break;
			}
			break;
	}
}

float func_95(int iParam0, int iParam1)//Position - 0x8759
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10750;
				
				case 1:
					return Global_262145.f_10751;
				
				case 2:
					return Global_262145.f_10752;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10753;
				
				case 1:
					return Global_262145.f_10754;
				
				case 2:
					return Global_262145.f_10755;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10756;
				
				case 1:
					return Global_262145.f_10757;
				
				case 2:
					return Global_262145.f_10758;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10759;
				
				case 1:
					return Global_262145.f_10760;
				
				case 2:
					return Global_262145.f_10761;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10762;
				
				case 1:
					return Global_262145.f_10763;
				
				case 2:
					return Global_262145.f_10764;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10765;
				
				case 1:
					return Global_262145.f_10766;
				
				case 2:
					return Global_262145.f_10767;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10768;
				
				case 1:
					return Global_262145.f_10769;
				
				case 2:
					return Global_262145.f_10770;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_10771;
				
				case 1:
					return Global_262145.f_10772;
				
				case 2:
					return Global_262145.f_10773;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_96(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x8969
{
	if (bParam0)
	{
		if (func_91())
		{
			func_89();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_87();
		func_99(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_97();
	}
}

void func_97()//Position - 0x8A30
{
	if (func_91() && !func_90())
	{
		func_89();
	}
	if (func_90())
	{
		func_98();
	}
	else
	{
		func_87();
		func_99(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_98()//Position - 0x8A78
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8AC0
{
	if (Global_2436181.f_1777.f_690.f_16 != func_27())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_100())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_100()//Position - 0x8B5F
{
	if (((func_102(unk_0x9EB17624F44A8DA4()) == 229 || func_102(unk_0x9EB17624F44A8DA4()) == 191) || func_101()) || func_103())
	{
		return 0;
	}
	return 1;
}

int func_101()//Position - 0x8B9F
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x8BB4
{
	if (func_31(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

bool func_103()//Position - 0x8BD7
{
	return Global_1574307;
}

int func_104(int iParam0)//Position - 0x8BE3
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x8C22
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_111(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_25(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_110(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_109(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_108(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_107(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_106(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x8CE8
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_27())
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x8D48
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x8D8F
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x8DD5
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x8E1B
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x8E61
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_112(int iParam0)//Position - 0x8EA7
{
	if (func_15(iParam0) != 0)
	{
		func_330(iParam0);
		func_113(iParam0);
	}
}

void func_113(int iParam0)//Position - 0x8EC5
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[3];
	
	if (iLocal_659 == -1)
	{
		return;
	}
	if (func_273(0, 0))
	{
		return;
	}
	iVar3 = (Global_262145.f_10529 + 1000 - func_9(&(Local_98.f_1.f_1), 0, 0));
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar3 > 30000)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = 6;
	}
	if (!unk_0xC80D31E4B587871C(Local_102[iLocal_659 /*5*/].f_4, 12))
	{
		if (!func_177(iLocal_659))
		{
			func_136(iVar3, iVar4, func_137());
			return;
		}
	}
	func_135(iVar3);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = system::to_float(func_74(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_74(Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar5[iVar0] = 0;
		if (func_134(1))
		{
			if (Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (unk_0x552F39AE86E07792(Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_70(Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar5[iVar0] = func_155(Local_117[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar2 = func_74(func_132(iParam0, iLocal_659));
	func_115(Local_117[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_117[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_117[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar2, iVar3, &uLocal_662, iVar4, func_137(), 1, iVar5[0], iVar5[1], iVar5[2]);
	if (Local_117[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x622FF3AE4B1D07C3())
	{
		if (!unk_0xC80D31E4B587871C(iLocal_103, 23))
		{
			if (func_114(1))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x872F1C1F8587CCC7(&iLocal_103, 23);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_103, 23))
	{
		if (func_114(1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_103, 23);
	}
}

bool func_114(bool bParam0)//Position - 0x91D4
{
	return func_66(unk_0x9EB17624F44A8DA4(), bParam0);
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)//Position - 0x91E6
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_129(0) == 0)
	{
		return;
	}
	func_128();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_127(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_124(iParam3, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_127(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_124(iParam4, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_127(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_124(iParam5, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_27())
			{
				if (func_120(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_124(iParam6, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_120(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_124(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_120(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_124(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_119(sParam10))
	{
		sVar2 = sParam10;
	}
	func_116(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
	*uParam8 = 0;
}

void func_116(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x947A
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_118(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_117(7, iVar0);
		Global_1359035.f_4388[iVar0] = uParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = uParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = uParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_117(int iParam0, int iParam1)//Position - 0x95C8
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_118(int iParam0, int iParam1)//Position - 0x95E1
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

int func_119(char* sParam0)//Position - 0x95FA
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

bool func_120(int iParam0)//Position - 0x9634
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		if ((func_123() && !func_122()) || func_121(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1574409.f_13)))
		{
			if (!func_5(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574409.f_13));
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9);
}

bool func_121(int iParam0, int iParam1)//Position - 0x96C6
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

bool func_122()//Position - 0x96DF
{
	return Global_1312416.f_1;
}

bool func_123()//Position - 0x96ED
{
	return Global_1312416;
}

void func_124(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x96F9
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
			if (func_118(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_117(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = iParam8;
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
		if (iParam15 == 5 && func_126())
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
			if (func_125())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_125()//Position - 0x995B
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

int func_126()//Position - 0x997F
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_127(int iParam0, char* sParam1)//Position - 0x99BD
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_128()//Position - 0x9A5F
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
}

int func_129(bool bParam0)//Position - 0x9A82
{
	if (func_131())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_717(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_130()//Position - 0x9AB9
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_131()//Position - 0x9AD0
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
}

float func_132(int iParam0, int iParam1)//Position - 0x9AE2
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_133(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_133(int iParam0, int iParam1)//Position - 0x9B03
{
	return Local_98.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_134(bool bParam0)//Position - 0x9B19
{
	return func_70(unk_0x9EB17624F44A8DA4(), bParam0);
}

void func_135(int iParam0)//Position - 0x9B2B
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
			{
				unk_0x1D4B7CAF5F26DD3E(&(Global_2512808.f_4695));
			}
			unk_0x22456E02F195550C(1);
			unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
			unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
			Global_2512808.f_4693 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					if (unk_0x4395F3F89845A398())
					{
						if ((!unk_0x74C475EB8E73D398(unk_0xC45B242943C8D6AD(unk_0x832CFDD4BD296987()), "OFF") && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
						{
							StringCopy(&(Global_2512808.f_4695), "", 32);
							unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
							unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
							unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
							unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
							unk_0x22456E02F195550C(1);
							unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
						}
					}
				}
				else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xC80D31E4B587871C(Global_2512808.f_4693, 5))
				{
					unk_0x1D4B7CAF5F26DD3E("OFF");
				}
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_30S");
				}
				unk_0xE859EF37EA7362D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x8D0D3BB074DAEB2C() != 0)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x94F5A25C597E9666())
						{
							StringCopy(&(Global_2512808.f_4695), unk_0x046EF496879E839B(), 32);
							unk_0x1D4B7CAF5F26DD3E("OFF");
						}
						unk_0x22456E02F195550C(1);
						unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 3))
				{
					Global_2512808.f_4703 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(Global_2512808.f_4703, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
			{
				Global_2512808.f_4693 = 0;
				Global_2512808.f_4703 = -1;
				unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
				unk_0x22456E02F195550C(0);
				unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
				unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
				unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
				unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			Global_2512808.f_4693 = 0;
			Global_2512808.f_4703 = -1;
			unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
			unk_0x22456E02F195550C(0);
			unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
			}
		}
	}
}

void func_136(int iParam0, int iParam1, char* sParam2)//Position - 0x9F0F
{
	char* sVar0;
	
	if (func_129(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_119(sParam2))
	{
		sVar0 = sParam2;
	}
	func_116(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0);
}

char* func_137()//Position - 0x9F50
{
	return "HUD_COUNTDOWN";
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_138())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_138()//Position - 0xA0FB
{
	if (func_228(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

bool func_139(int iParam0)//Position - 0xA11E
{
	return Local_98.f_6[iParam0 /*204*/].f_72;
}

int func_140(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xA130
{
	var uVar0;
	
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 63)
	{
		return 0;
	}
	if (func_150(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312576.f_54;
	func_144();
	Global_1312576 = 9;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	Global_1312576.f_54 = uVar0;
	func_143();
	func_142(bParam2);
	func_141();
	return 1;
}

void func_141()//Position - 0xA1FA
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_142(bool bParam0)//Position - 0xA20D
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_143()//Position - 0xA233
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_144()//Position - 0xA258
{
	func_146();
	func_145(0);
}

void func_145(bool bParam0)//Position - 0xA269
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_146()//Position - 0xA2FF
{
	if (!func_149())
	{
	}
	if (func_148())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_147();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_147()//Position - 0xA328
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_148()//Position - 0xA59A
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_149()//Position - 0xA5B0
{
	if (!func_148())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_147();
	return unk_0xC20F7134D3568246();
}

bool func_150(char* sParam0, char* sParam1)//Position - 0xA5D6
{
	if (!func_148())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

void func_151(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xA62E
{
	if (func_152(sParam0, unk_0xDE2D3B9654C31EB3(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = iParam4;
		Global_1312576.f_54 = iParam1;
	}
}

int func_152(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0xA669
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 63)
	{
		return 0;
	}
	if (func_153(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_144();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_143();
	func_142(bParam3);
	func_141();
	return 1;
}

bool func_153(char* sParam0, char* sParam1, char* sParam2)//Position - 0xA74B
{
	if (!func_148())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam2) == unk_0x8B948C59217A295D(&(Global_1312576.f_32));
}

void func_154(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA7C9
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam4);
	}
	unk_0xA6D2B267C377D7B2(sParam3);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam5);
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xA808
{
	int iVar0;
	int iVar1;
	
	if (func_655(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_655(unk_0x9EB17624F44A8DA4()) || (func_175() && func_654())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_174();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_717(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_172(iParam1, iParam0, 0);
							}
							else
							{
								return func_163(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_163(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_172(iParam1, iParam0, 0);
				}
				else
				{
					return func_156(0, -1, 0);
				}
			}
			else
			{
				return func_156(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_172(iParam1, iParam0, 0);
		}
		else
		{
			return func_163(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_163(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_156(bool bParam0, int iParam1, bool bParam2)//Position - 0xA9D8
{
	return func_157(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_157(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xA9EE
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_162(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_161(1);
				}
				else
				{
					return func_161(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_158(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_158(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_161(1);
	}
	return func_161(0);
}

int func_158(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xAAB2
{
	int iVar0;
	
	iVar0 = func_160(iParam0, iParam1, iParam3);
	if (func_159(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_159(int iParam0)//Position - 0xABC9
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0xAC02
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_162(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_161(bool bParam0)//Position - 0xAC49
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0xAC60
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xAE2B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_169(1))
			{
				iVar3 = func_168(iParam0);
				if (!iVar3 == -1)
				{
					return func_166(iVar3);
				}
			}
			if ((func_165(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_162(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_161(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_164(1);
			}
			else
			{
				return func_157(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_161(1);
			}
			else
			{
				return func_157(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_168(iParam0);
	if (!iVar4 == -1)
	{
		return func_166(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_164(bool bParam0)//Position - 0xAFCF
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_165(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAFE6
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_166(int iParam0)//Position - 0xB05E
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_167(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_167(int iParam0)//Position - 0xB121
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_168(int iParam0)//Position - 0xB138
{
	if (!iParam0 == func_27())
	{
		if (func_70(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_169(int iParam0)//Position - 0xB16A
{
	if ((func_171() || func_170()) || (func_55() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_170()//Position - 0xB199
{
	return Global_2447174.f_15;
}

var func_171()//Position - 0xB1A7
{
	return Global_2447174.f_14;
}

int func_172(int iParam0, int iParam1, bool bParam2)//Position - 0xB1B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_169(1))
	{
		iVar2 = func_168(iParam1);
		if (!iVar2 == -1)
		{
			return func_166(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_27())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_157(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_173(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_173(int iParam0)//Position - 0xB31A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_174()//Position - 0xB3EF
{
	return Global_2359302.f_2;
}

bool func_175()//Position - 0xB3FD
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

char* func_176()//Position - 0xB41A
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_61(unk_0x9EB17624F44A8DA4());
	if (iVar0 != func_27())
	{
		if (iVar0 != unk_0x9EB17624F44A8DA4())
		{
			if (((func_29(iVar0, 28) || func_29(unk_0x9EB17624F44A8DA4(), 28)) || func_63(iVar0)) && !func_62(iVar0))
			{
				return func_64(iVar0, 0);
			}
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_64(iVar0, 0);
			}
		}
		sVar1 = func_69(&(Global_1627537[iVar0 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar1))
		{
			return func_64(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_177(int iParam0)//Position - 0xB4CC
{
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_178(char* sParam0, bool bParam1)//Position - 0xB519
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_179(sParam0))
	{
		return;
	}
	func_144();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_143();
	func_142(bParam1);
	func_141();
}

bool func_179(char* sParam0)//Position - 0xB584
{
	if (!func_148())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_180(sParam0);
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_180(char* sParam0)//Position - 0xB5C8
{
	if (!func_148())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

void func_181()//Position - 0xB5FA
{
	if (!func_148())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_144();
}

bool func_182(int iParam0)//Position - 0xB627
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

int func_183(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB63E
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_59(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_45(&Var0);
}

int func_184(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xB6A2
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_59(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_24), sParam2, 64);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam6;
	return func_45(&Var0);
}

int func_185()//Position - 0xB70E
{
	return 21;
}

int func_186(int iParam0, int iParam1)//Position - 0xB718
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_61(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_187(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB743
{
	bool bVar0;
	
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_31(unk_0x9EB17624F44A8DA4(), 0) && func_30(unk_0x9EB17624F44A8DA4()));
	if (bParam6)
	{
		func_210(21, 1);
	}
	else
	{
		func_207(iParam0, -1);
		if (func_206(unk_0x9EB17624F44A8DA4()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_205(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_206(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 5);
		}
		if ((func_123() && !func_122()) || func_121(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 4);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 20);
		if (func_204(iParam0))
		{
			func_203();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_200(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x94BD6F0436473406(fParam2);
			if (iParam0 == 146)
			{
				unk_0xC0EBC1452FCAB15C(0);
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			}
		}
		if (func_198(iParam0))
		{
			unk_0xC0EBC1452FCAB15C(0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_196(1);
				if (func_193(0))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_191(1);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_190();
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_188(iParam0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_188(int iParam0)//Position - 0xB90D
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_189())
	{
		return 1;
	}
	return 0;
}

int func_189()//Position - 0xB962
{
	switch (func_138())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_190()//Position - 0xB990
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4694), 0);
}

void func_191(bool bParam0)//Position - 0xB9A4
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92885.f_8 = 1;
	}
	else
	{
		Global_92885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_192(iVar0);
		iVar0++;
	}
}

void func_192(int iParam0)//Position - 0xB9DB
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

int func_193(int iParam0)//Position - 0xB9F5
{
	int iVar0;
	
	iVar0 = func_194(2523, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 0) && unk_0xC80D31E4B587871C(iVar0, 1)) && unk_0xC80D31E4B587871C(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 3) && unk_0xC80D31E4B587871C(iVar0, 4)) && unk_0xC80D31E4B587871C(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 6) && unk_0xC80D31E4B587871C(iVar0, 7)) && unk_0xC80D31E4B587871C(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 9) && unk_0xC80D31E4B587871C(iVar0, 10)) && unk_0xC80D31E4B587871C(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xBAC6
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_195(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0xBAF8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

void func_196(int iParam0)//Position - 0xBB2C
{
	if (func_197() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_197()//Position - 0xBB61
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xBBA7
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_199(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0xBBE5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_200(float fParam0)//Position - 0xBC0B
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_201())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

int func_201()//Position - 0xBC77
{
	switch (func_202())
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

int func_202()//Position - 0xBCAB
{
	return Global_25233;
}

void func_203()//Position - 0xBCB6
{
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_215 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4529), 1);
}

int func_204(int iParam0)//Position - 0xBCD8
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_205(int iParam0)//Position - 0xBCF2
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/] = iParam0;
}

bool func_206(int iParam0)//Position - 0xBD07
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_207(int iParam0, int iParam1)//Position - 0xBD1F
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_209(0) || func_209(func_208(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
	}
}

int func_208(int iParam0)//Position - 0xBD85
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 14;
}

bool func_209(int iParam0)//Position - 0xBE08
{
	int iVar0;
	
	iVar0 = func_194(2469, -1, 0);
	return unk_0xC80D31E4B587871C(iVar0, iParam0);
}

void func_210(int iParam0, bool bParam1)//Position - 0xBE23
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
	}
}

void func_211(int iParam0)//Position - 0xBE86
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_1 == iParam0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

float func_212(int iParam0)//Position - 0xBED2
{
	return Local_117[iParam0 /*68*/].f_40;
}

int func_213(char* sParam0)//Position - 0xBEE3
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_214(int iParam0)//Position - 0xBEF6
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_216())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_215(char* sParam0, int iParam1)//Position - 0xBF24
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam1);
}

bool func_216()//Position - 0xBF3B
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_217(bool bParam0)//Position - 0xBF51
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
		{
			if (func_123())
			{
				func_220(0);
				func_219();
			}
			if (func_209(0))
			{
				uVar0 = func_194(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, 0);
				func_219();
			}
			if (func_209(func_208(func_228(unk_0x9EB17624F44A8DA4()))))
			{
				uVar0 = func_194(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, func_208(func_228(unk_0x9EB17624F44A8DA4())));
				func_219();
			}
			if (func_218())
			{
				func_219();
			}
			if (func_228(unk_0x9EB17624F44A8DA4()) > -1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
	}
}

int func_218()//Position - 0xC02A
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_219()//Position - 0xC044
{
	if (func_218())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_220(int iParam0)//Position - 0xC05D
{
	if (func_123())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_227(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_227(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_226(1);
		}
		if ((!unk_0x4916190900E76373() && !func_225()) && !func_221(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_221(int iParam0)//Position - 0xC0F7
{
	if (func_222(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0, bool bParam1)//Position - 0xC11B
{
	if (bParam1)
	{
		if (func_223(iParam0))
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

bool func_223(int iParam0)//Position - 0xC147
{
	return func_224(iParam0);
}

bool func_224(int iParam0)//Position - 0xC155
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_225()//Position - 0xC16F
{
	return Global_2447174.f_727;
}

void func_226(bool bParam0)//Position - 0xC17E
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_123())
		{
			if (func_717(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_717(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, true);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0,5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

void func_227(var uParam0, bool bParam1, bool bParam2)//Position - 0xC277
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

int func_228(int iParam0)//Position - 0xC2B4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

bool func_229(int iParam0, int iParam1)//Position - 0xC2D3
{
	return Local_102[iParam0 /*5*/].f_1[iParam1];
}

int func_230(bool bParam0, bool bParam1)//Position - 0xC2E8
{
	if (func_232(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_120(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_231(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_231(int iParam0)//Position - 0xC328
{
	return func_36(iParam0, 0);
}

bool func_232(int iParam0)//Position - 0xC337
{
	if (func_206(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

void func_233(int iParam0)//Position - 0xC35D
{
	if (!unk_0xC80D31E4B587871C(iLocal_103, 22))
	{
		if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
		{
			if (func_177(unk_0x622FF3AE4B1D07C3()))
			{
				if (!func_273(1, 1))
				{
					if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x622FF3AE4B1D07C3())
							{
								if (!func_186(unk_0x9EB17624F44A8DA4(), Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_234();
									unk_0x872F1C1F8587CCC7(&iLocal_103, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_234()//Position - 0xC3F2
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 19);
}

void func_235(int iParam0)//Position - 0xC407
{
	if (iLocal_100 != func_8(iParam0))
	{
		iLocal_100 = func_8(iParam0);
		if (iLocal_100 > -1)
		{
			iLocal_101++;
			unk_0x872F1C1F8587CCC7(&iLocal_103, 25);
		}
	}
}

void func_236(int iParam0)//Position - 0xC43F
{
	if (func_629() == 1)
	{
		if (func_8(iParam0) == unk_0x622FF3AE4B1D07C3() && !func_230(1, 0))
		{
			if (!func_199(unk_0x9EB17624F44A8DA4()))
			{
				func_237(1);
			}
		}
		else if (func_199(unk_0x9EB17624F44A8DA4()))
		{
			func_237(0);
		}
	}
}

void func_237(bool bParam0)//Position - 0xC48D
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 0))
		{
			Global_2458997 = func_228(unk_0x9EB17624F44A8DA4());
			if (Global_2458997 == -1)
			{
				Global_2458997 = Global_1574409.f_4;
			}
			if (func_270(Global_2458997) == 0)
			{
				if (func_269(1) > 0)
				{
					func_268(26, -1);
				}
			}
			if (func_123())
			{
				func_220(0);
				func_219();
			}
			if (func_209(0))
			{
				uVar1 = func_194(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar1, 0);
				func_219();
			}
			if (func_209(func_208(func_228(unk_0x9EB17624F44A8DA4()))))
			{
				uVar1 = func_194(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar1, func_208(func_228(unk_0x9EB17624F44A8DA4())));
				func_219();
			}
			if (func_218())
			{
				func_219();
			}
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 0))
	{
		if ((!func_267() && !func_266()) && !func_265())
		{
			Global_2458997 = -1;
			func_264(26, -1);
		}
		else if (func_270(Global_2458997) == 0)
		{
			iVar0 = func_249(1);
			if (iVar0 > 0)
			{
				func_244(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_240(1929, 1, -1);
				func_244(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_238(26, -1))
		{
			Global_2458997 = -1;
			func_264(26, -1);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 0);
	}
}

bool func_238(int iParam0, int iParam1)//Position - 0xC611
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = func_239(iParam1);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	return unk_0xC80D31E4B587871C(iVar1, iParam0);
}

int func_239(int iParam0)//Position - 0xC63D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_240(int iParam0, int iParam1, int iParam2)//Position - 0xC6A0
{
	int iVar0;
	
	iVar0 = func_194(iParam0, func_195(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_243(iParam0))
	{
		func_242(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_241(iParam0, iVar0, iParam2, 1);
	}
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC6E2
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_195(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_195(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_195(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_195(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_195(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_195(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_195(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_195(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_195(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_195(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_195(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_195(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_195(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_195(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_195(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_195(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_195(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_195(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_195(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_195(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_195(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_195(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_195(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_195(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_195(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_195(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_195(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_195(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_195(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_195(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_195(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_242(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xCDAD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_243(int iParam0)//Position - 0xCDDD
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

void func_244(int iParam0, int iParam1)//Position - 0xCF93
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_247(iParam0))
	{
		func_246(iParam0, iVar0);
	}
	else
	{
		func_245(iParam0, iVar0);
	}
}

void func_245(int iParam0, int iParam1)//Position - 0xCFC7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_246(int iParam0, int iParam1)//Position - 0xD0EC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_247(int iParam0)//Position - 0xD108
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xD18C
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0xD1AA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2457883 == 0)
	{
		return 0;
	}
	if (func_265())
	{
		if (unk_0x4916190900E76373() || (func_263() || func_261()))
		{
			Global_2456834 = 1;
		}
	}
	Global_2457883 = 0;
	if (Global_1315680)
	{
		iVar0 = 1;
	}
	if (Global_2456834)
	{
		iVar0 = 1;
	}
	if (Global_2456833)
	{
		iVar0 = 1;
	}
	if (func_260(Global_103583.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2456759)
	{
		iVar0 = 1;
	}
	if (func_259(512))
	{
		iVar0 = 1;
	}
	if (func_258(128))
	{
		iVar0 = 1;
	}
	if (Global_1315704 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_257())
	{
		iVar0 = 0;
	}
	if (Global_2457322)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_255())
		{
			if (Global_4456448.f_122948 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = 0;
	}
	if (func_254())
	{
		iVar0 = 0;
	}
	if ((Global_2456834 || Global_2456833) || Global_1315680)
	{
		if (func_261())
		{
			iVar0 = 0;
		}
	}
	Global_2457322 = 0;
	Global_2456833 = 0;
	Global_2456834 = 0;
	Global_1315680 = 0;
	Global_2456759 = 0;
	func_252(&(Global_103583.f_1), 32);
	func_251(512);
	func_250(128);
	return iVar0;
}

void func_250(int iParam0)//Position - 0xD2FD
{
	Global_103640 = (Global_103640 - (Global_103640 && iParam0));
}

void func_251(int iParam0)//Position - 0xD315
{
	Global_103641 = (Global_103641 - (Global_103641 && iParam0));
}

void func_252(var uParam0, int iParam1)//Position - 0xD32D
{
	func_253(uParam0, iParam1);
}

void func_253(var uParam0, var uParam1)//Position - 0xD33D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_254()//Position - 0xD352
{
	if (((Global_1574329 || Global_1574300) || func_36(unk_0x9EB17624F44A8DA4(), 0)) || func_175())
	{
		return 1;
	}
	return 0;
}

int func_255()//Position - 0xD389
{
	switch (func_256())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_256()//Position - 0xD3C3
{
	return Global_2447954.f_1.f_2819;
}

bool func_257()//Position - 0xD3D4
{
	return Global_1312831;
}

bool func_258(int iParam0)//Position - 0xD3E0
{
	return (Global_103640 && iParam0) != 0;
}

bool func_259(int iParam0)//Position - 0xD3F1
{
	return (Global_103641 && iParam0) != 0;
}

bool func_260(var uParam0, int iParam1)//Position - 0xD402
{
	return (uParam0 && iParam1) != 0;
}

int func_261()//Position - 0xD411
{
	if (func_270(Global_2458997))
	{
		return 0;
	}
	if (func_262(unk_0x9EB17624F44A8DA4(), 146))
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1)//Position - 0xD43A
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_199(iParam0);
	}
	return 0;
}

int func_263()//Position - 0xD45A
{
	if (func_270(Global_2458997))
	{
		return 0;
	}
	if (func_199(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0, int iParam1)//Position - 0xD481
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD1EA64C8648E82BA(0, iParam1);
			break;
		
		default:
			iVar1 = func_239(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x0EE72DB1CD8A3B86(&iVar0, iParam0);
				unk_0xD1EA64C8648E82BA(iVar0, iParam1);
			}
			break;
	}
}

bool func_265()//Position - 0xD4DD
{
	return unk_0xC80D31E4B587871C(Global_1312423, 0);
}

bool func_266()//Position - 0xD4EE
{
	return Global_1312823;
}

bool func_267()//Position - 0xD4FA
{
	return Global_1312854;
}

void func_268(int iParam0, int iParam1)//Position - 0xD506
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD1EA64C8648E82BA(0, iParam1);
			break;
		
		default:
			iVar1 = func_239(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (!unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, iParam0);
				unk_0xD1EA64C8648E82BA(iVar0, iParam1);
			}
			break;
	}
}

int func_269(int iParam0)//Position - 0xD563
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315704 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_257())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_255())
		{
			if (Global_4456448.f_122948 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = 0;
	}
	if (func_254())
	{
		iVar0 = 0;
	}
	Global_2457883 = 1;
	return iVar0;
}

int func_270(int iParam0)//Position - 0xD5CF
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10730)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10732)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10729)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10733)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10734)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10735)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10731)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10736)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10737)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10738)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10739)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_271()//Position - 0xD6DC
{
	if (func_273(0, 0))
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(iLocal_103, 25))
	{
		if (iLocal_100 == unk_0x622FF3AE4B1D07C3())
		{
			if (Local_99.f_11 == 0)
			{
				Local_99.f_11 = unk_0xE3CCAFB1555348DF();
			}
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_103, 25);
	}
}

void func_272()//Position - 0xD721
{
	if (func_213("KOTC_1STHELP"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (func_213("KOTC_OTHRKG"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (func_213("KOTC_YOUKNG"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (func_213("KOTC_CONTS"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

int func_273(bool bParam0, bool bParam1)//Position - 0xD765
{
	if (bParam0)
	{
	}
	if (unk_0xC80D31E4B587871C(iLocal_103, 17))
	{
		return 1;
	}
	if (func_313(unk_0x9EB17624F44A8DA4(), 1, 0))
	{
		return 1;
	}
	if (func_130())
	{
		return 1;
	}
	if (func_209(9))
	{
		return 1;
	}
	if (func_209(0))
	{
		return 1;
	}
	if (!func_288())
	{
		return 1;
	}
	if (func_281())
	{
		return 1;
	}
	if (func_276(4))
	{
		return 1;
	}
	if (func_275())
	{
		return 1;
	}
	if (func_230(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1655673)
	{
		return 1;
	}
	if (func_274(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0xD80F
{
	if (!func_717(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

bool func_275()//Position - 0xD832
{
	return Global_92885.f_316 > 0;
}

int func_276(int iParam0)//Position - 0xD843
{
	int iVar0;
	
	if (func_275())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_280(iVar0) == iParam0)
			{
				if (func_277(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_277(int iParam0)//Position - 0xD87E
{
	return func_278(iParam0, 6, 1);
}

int func_278(int iParam0, int iParam1, bool bParam2)//Position - 0xD88E
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_202() == 0)
		{
			return unk_0xC80D31E4B587871C(func_194(func_279(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_279(int iParam0)//Position - 0xD8EE
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

int func_280(int iParam0)//Position - 0xDBD3
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

int func_281()//Position - 0xDE60
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_376.f_5, 0))
	{
		return 1;
	}
	if (func_283() && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 != 3)
	{
		return 1;
	}
	if (func_282() && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574409.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_282()//Position - 0xDED4
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

int func_283()//Position - 0xDEE5
{
	if (((func_287() || func_286()) || func_285()) || func_284())
	{
		return 1;
	}
	return 0;
}

bool func_284()//Position - 0xDF17
{
	return unk_0xC80D31E4B587871C(Global_2447174, 1);
}

bool func_285()//Position - 0xDF28
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_286()//Position - 0xDF39
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_287()//Position - 0xDF4B
{
	return Global_2447174.f_586;
}

int func_288()//Position - 0xDF5A
{
	if (func_312(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_121(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (unk_0xB01117EF93F91860())
	{
		return 0;
	}
	if (unk_0x78E929955680CA05())
	{
		return 0;
	}
	if (func_221(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_311())
	{
		return 0;
	}
	if (func_310(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_309())
	{
		return 0;
	}
	if (func_299(unk_0x9EB17624F44A8DA4()) == 3)
	{
		return 0;
	}
	if (func_297(func_298()))
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_223(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_295())
	{
		return 0;
	}
	if (func_121(unk_0x9EB17624F44A8DA4(), 0) || func_121(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_121(unk_0x9EB17624F44A8DA4(), 12) || func_121(unk_0x9EB17624F44A8DA4(), 14)) || func_121(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_105(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_294(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_274(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_293())
	{
		return 0;
	}
	if (func_291(unk_0x9EB17624F44A8DA4()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_109(unk_0x9EB17624F44A8DA4()) || func_290(unk_0x9EB17624F44A8DA4())) || func_108(unk_0x9EB17624F44A8DA4())) || func_106(unk_0x9EB17624F44A8DA4())) || func_107(unk_0x9EB17624F44A8DA4())) || func_289())
	{
		return 0;
	}
	return 1;
}

var func_289()//Position - 0xE13B
{
	return Global_1669535.f_28;
}

int func_290(int iParam0)//Position - 0xE149
{
	if (iParam0 != func_27())
	{
		if (func_717(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_27())
			{
				return func_26(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_291(int iParam0)//Position - 0xE1A8
{
	if (func_292(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)//Position - 0xE1CA
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

int func_293()//Position - 0xE1F9
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_294(int iParam0)//Position - 0xE211
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

int func_295()//Position - 0xE22D
{
	if (func_296() == 0)
	{
		return 1;
	}
	return 0;
}

int func_296()//Position - 0xE242
{
	return Global_1312466.f_18;
}

int func_297(int iParam0)//Position - 0xE250
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_298()//Position - 0xE294
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

int func_299(int iParam0)//Position - 0xE2A8
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_308(iParam0) && !func_206(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_307(iParam0);
	bVar3 = func_123();
	uVar4 = func_301();
	if ((bVar1 && (func_300(iParam0) || func_199(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(iParam0)) && !func_28(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

int func_300(int iParam0)//Position - 0xE366
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_301()//Position - 0xE38C
{
	if ((func_29(unk_0x9EB17624F44A8DA4(), 21) || func_29(unk_0x9EB17624F44A8DA4(), 22)) || func_305())
	{
		return 1;
	}
	if (func_303())
	{
		func_302(22);
		return 1;
	}
	return 0;
}

void func_302(int iParam0)//Position - 0xE3D1
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_303()//Position - 0xE3EE
{
	if (func_31(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_123() && !func_122()) || func_121(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_304(27);
		}
	}
	return 0;
}

void func_304(int iParam0)//Position - 0xE431
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_305()//Position - 0xE44E
{
	return func_306(306, -1);
}

int func_306(int iParam0, int iParam1)//Position - 0xE45E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_195(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_307(int iParam0)//Position - 0xE48A
{
	return func_29(iParam0, 20);
}

int func_308(int iParam0)//Position - 0xE49A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

bool func_309()//Position - 0xE4BB
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

int func_310(int iParam0)//Position - 0xE4D0
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_311()//Position - 0xE504
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_312(int iParam0, int iParam1)//Position - 0xE520
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_313(int iParam0, bool bParam1, bool bParam2)//Position - 0xE53B
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_314(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, var uParam5)//Position - 0xE5A5
{
	float fVar0;
	int iVar1;
	
	Global_1574409.f_6 = { vParam1 };
	fVar0 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vParam1);
	if (fVar0 < fParam3 && !func_206(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam0 != 146 && !func_121(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_328(vParam1, 1, 0);
		}
		if ((!*uParam2 || unk_0xC80D31E4B587871C(Global_1574409.f_1, 3)) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			*uParam2 = 1;
			func_200(func_327(iParam0));
			unk_0x94BD6F0436473406(func_326(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_325(iParam0);
				unk_0xC0EBC1452FCAB15C(iVar1);
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > iVar1)
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), iVar1, 1);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 8);
			}
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 3);
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam4) && !func_206(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 3) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			func_324();
			unk_0x94BD6F0436473406(Global_262145.f_10742);
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 3);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 3);
		}
	}
	else if ((*uParam2 || unk_0xC80D31E4B587871C(Global_1574409.f_1, 3)) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		*uParam2 = 0;
		func_324();
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 8);
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 3);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 3);
		if (iParam0 != 146 && uParam5)
		{
			func_315();
		}
	}
}

void func_315()//Position - 0xE786
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_322();
	func_318(1, 1, 0);
	func_316();
}

void func_316()//Position - 0xE7BC
{
	func_317(0, 0);
}

void func_317(int iParam0, int iParam1)//Position - 0xE7CA
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_318(bool bParam0, bool bParam1, bool bParam2)//Position - 0xE7E2
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_321();
	}
	if (!bParam2)
	{
		func_96(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_320(0);
	func_319();
}

void func_319()//Position - 0xE881
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_320(bool bParam0)//Position - 0xE8A6
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_321()//Position - 0xE8C6
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_322()//Position - 0xE8DF
{
	func_323();
	Global_2405047.f_2229 = 0;
}

void func_323()//Position - 0xE8F3
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_324()//Position - 0xE91F
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

int func_325(int iParam0)//Position - 0xE966
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_326(int iParam0)//Position - 0xE9A8
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_327(int iParam0)//Position - 0xEA24
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_328(vector3 vParam0, int iParam1, int iParam2)//Position - 0xEA68
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

Vector3 func_329(int iParam0)//Position - 0xEA92
{
	return Local_117[iParam0 /*68*/].f_24;
}

void func_330(int iParam0)//Position - 0xEAA5
{
	int iVar0;
	
	if (func_273(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_118[iVar0 /*42*/] = -1;
		Local_118[iVar0 /*42*/].f_1 = func_27();
		Local_118[iVar0 /*42*/].f_9 = 0;
		Local_118[iVar0 /*42*/].f_31 = -1;
		if (Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_118[iVar0 /*42*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_118[iVar0 /*42*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_118[iVar0 /*42*/].f_9 = func_74(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_331(&Local_118, &(Local_117[iParam0 /*68*/].f_66), 26, &uLocal_119, &uLocal_233, -1, 0);
}

void func_331(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xEB6C
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_448(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_446() || iParam2 == 27)
	{
		if (func_401(uParam1, iParam2, uParam3, Global_1574123, 0, func_449()))
		{
			func_400(1);
			if ((!func_399() && !func_398()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_397())
				{
					func_395();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_394(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_393(uParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_717(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
									if (!func_36(iVar3, 0))
									{
										if ((func_392(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_391(iVar3))
										{
											iVar9 = iVar3;
											if (func_71(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_388(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_385(unk_0x9EB17624F44A8DA4(), 0) && func_102(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_384())
							{
								if (func_717(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
								}
								else
								{
									iVar3 = func_27();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_383(iVar3) && func_380(iVar3, iParam2)) && func_717(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_375(iVar3) };
								if (iVar3 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
								iVar5 = func_369(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF85532D53BDB3017(iVar5);
								}
								Global_1574123++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_384())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_364(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_363(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_362(iVar3, 0);
								if (bVar2)
								{
									if (func_70(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_361(iParam5))
								{
									func_360(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_360(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF6A72924028F588B(iVar17);
							if (func_717(iVar3, 0, 1) && !unk_0xC80D31E4B587871C(iVar14, iVar3))
							{
								iVar3 = unk_0xF6A72924028F588B(iVar17);
							}
							else
							{
								iVar3 = func_27();
							}
							if (func_383(iVar3))
							{
								if (func_717(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_375(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
									iVar5 = func_369(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF85532D53BDB3017(iVar5);
									}
									Global_1574123++;
									iVar16 = func_362(iVar3, 1);
									if (bVar2)
									{
										if (func_70(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_344(iVar3, unk_0xDE2D3B9654C31EB3(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_341(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_340();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_339(uParam3, uParam1);
							func_338(uParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_339(uParam3, uParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_334(uParam3))
						{
							Global_1574308 = 1;
						}
						func_332(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*uParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*uParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_340();
			func_394(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_332(var uParam0)//Position - 0xF1BB
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_333(0);
	}
}

void func_333(bool bParam0)//Position - 0xF1F7
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_334(var uParam0)//Position - 0xF23D
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar3 != func_27() && func_717(iVar3, 0, 1))
	{
		Var2 = { func_41(iVar3) };
		iVar1 = func_337(uParam0, uParam0->f_37);
		if (func_336(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_335(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_335(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_335(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_335(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar4 = 1;
							func_335(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_335(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_335(var uParam0, int iParam1, int iParam2)//Position - 0xF36A
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_336(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xF37C
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_337(var uParam0, int iParam1)//Position - 0xF38C
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_338(var uParam0, bool bParam1, int iParam2)//Position - 0xF39C
{
	if (unk_0x008F3E3CC076EA0E(*uParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(bParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_339(var uParam0, var uParam1)//Position - 0xF3D4
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*uParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_340()//Position - 0xF40C
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_341(var uParam0, var uParam1)//Position - 0xF421
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_27())
		{
			if (func_717(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_343(uParam0->f_38[iVar0 /*2*/], 0);
					func_342(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_342(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF494
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_343(int iParam0, bool bParam1)//Position - 0xF4D1
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_344(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xF505
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_359() && iParam4 < func_358())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*uParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_357("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_357(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_357("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_357("");
			if (uParam3->f_108 == 6)
			{
				func_357("");
			}
			else
			{
				func_357(&sParam5);
			}
			func_349(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_348(uParam3))
			{
				func_347("DPAD_FRIEND");
			}
			else if (func_346(uParam3))
			{
				func_347("DPAD_FRIEND");
			}
			else if (func_345(uParam3))
			{
				func_347("DPAD_CREW");
			}
			else
			{
				func_347("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_345(var uParam0)//Position - 0xF634
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_346(var uParam0)//Position - 0xF645
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_347(char* sParam0)//Position - 0xF656
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_348(var uParam0)//Position - 0xF668
{
	if (func_346(uParam0) && func_345(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_349(var uParam0, int iParam1)//Position - 0xF689
{
	if (func_356(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_353(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_350())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_350()//Position - 0xF70A
{
	if (unk_0x4916190900E76373())
	{
		if (func_351() || func_171())
		{
			return 1;
		}
	}
	return 0;
}

int func_351()//Position - 0xF72F
{
	if (unk_0x4916190900E76373())
	{
		return func_171();
	}
	return func_352(Global_4456448.f_122309);
}

int func_352(int iParam0)//Position - 0xF753
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(int iParam0)//Position - 0xF78D
{
	if ((func_717(iParam0, 0, 1) && func_354()) && func_66(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_354()//Position - 0xF7BA
{
	if (func_308(unk_0x9EB17624F44A8DA4()) || func_355())
	{
		return 0;
	}
	return 1;
}

int func_355()//Position - 0xF7DC
{
	switch (func_102(unk_0x9EB17624F44A8DA4()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_356(int iParam0)//Position - 0xF81A
{
	if (func_350())
	{
		if (func_717(iParam0, 0, 1))
		{
			return func_71(iParam0);
		}
	}
	if ((func_717(iParam0, 0, 1) && func_354()) && func_68(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_357(char* sParam0)//Position - 0xF862
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_358()//Position - 0xF870
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_359()//Position - 0xF88C
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_360(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xF8A4
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_359() && iParam3 < func_358())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*uParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*uParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_357("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_347(sParam16);
				}
				else
				{
					func_357(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_357("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_384())
				{
					func_357("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_347(&(uParam2->f_104));
					}
					else
					{
						func_357("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_357("");
				}
				if (uParam2->f_108 == 6)
				{
					func_357("");
				}
				else
				{
					func_357(&sParam4);
				}
				func_349(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_357("");
					func_357("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_348(uParam2))
				{
					func_347("DPAD_FRIEND");
				}
				else if (func_346(uParam2))
				{
					func_347("DPAD_FRIEND");
				}
				else if (func_345(uParam2))
				{
					func_347("DPAD_CREW");
				}
				else
				{
					func_347("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_361(int iParam0)//Position - 0xFC07
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_362(int iParam0, bool bParam1)//Position - 0xFC2B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_308(iParam0)) && !func_307(iParam0))
	{
		iVar0 = func_185();
	}
	iVar1 = func_168(iParam0);
	if (!iVar1 == -1)
	{
		return func_166(iVar1);
	}
	return iVar0;
}

char* func_363(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xFC75
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_364(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xFE05
{
	if (func_368(iParam3))
	{
		*fParam1 = (func_365(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_361(iParam3))
	{
		*fParam1 = (func_365(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_365(int iParam0, int iParam1)//Position - 0xFE55
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_367(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_366(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_366(float fParam0)//Position - 0xFEF8
{
	return (fParam0 / 1,609344f);
}

float func_367(float fParam0)//Position - 0xFF08
{
	return (fParam0 / 0,3048f);
}

int func_368(int iParam0)//Position - 0xFF18
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_369(int iParam0)//Position - 0xFF74
{
	int iVar0;
	
	iVar0 = func_372(iParam0);
	if (iVar0 == -1)
	{
		func_370(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_370(int iParam0, bool bParam1)//Position - 0xFFAA
{
	if (!func_717(iParam0, 0, 1))
	{
		return;
	}
	if (func_372(iParam0) != -1)
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
	if (func_371(iParam0))
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

int func_371(int iParam0)//Position - 0x10018
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

int func_372(int iParam0)//Position - 0x1004A
{
	int iVar0;
	
	if (!func_717(iParam0, 0, 1))
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
			func_373(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_373(int iParam0)//Position - 0x100C9
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
	func_374(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_374(var uParam0)//Position - 0x1017F
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_375(int iParam0)//Position - 0x101AC
{
	char cVar0[32];
	
	if (func_717(iParam0, 0, 1))
	{
		Global_2492157 = { func_41(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_336(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return cVar0;
		}
		if (func_379(&Global_2492157))
		{
			Global_2492087 = { func_377(iParam0) };
			func_376(&Global_2492087, &cVar0);
		}
	}
	return cVar0;
}

void func_376(var uParam0, char* sParam1)//Position - 0x1022D
{
	unk_0x22889E844C3772CE(uParam0, 35, sParam1);
}

struct<35> func_377(int iParam0)//Position - 0x1023F
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_378(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var0);
	return Var1;
}

int func_378(int iParam0)//Position - 0x1027B
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_379(var uParam0)//Position - 0x10291
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1)//Position - 0x102B7
{
	if (iParam1 == 26)
	{
		if ((func_206(iParam0) || func_382(iParam0)) || func_232(iParam0))
		{
			return 0;
		}
	}
	if (!func_381(iParam0))
	{
		return 0;
	}
	if ((!func_392(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_391(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_381(int iParam0)//Position - 0x10326
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_382(int iParam0)//Position - 0x1033F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x1037D
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_384()//Position - 0x103C2
{
	switch (func_102(unk_0x9EB17624F44A8DA4()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_307(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_102(unk_0x9EB17624F44A8DA4()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_385(int iParam0, int iParam1)//Position - 0x104ED
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_386(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_386(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x10553
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_387(iParam0, 0);
	return 0;
}

int func_387(int iParam0, int iParam1)//Position - 0x105A1
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x105F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_717(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_392(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_391(iVar1))
				{
					if (func_389(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_389(int iParam0, int iParam1, bool bParam2)//Position - 0x10680
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_390(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_27())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1)//Position - 0x106CA
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_27())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_391(int iParam0)//Position - 0x1070F
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_392(int iParam0)//Position - 0x10724
{
	if (func_717(iParam0, 0, 1))
	{
		if (func_717(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_102(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_393(var uParam0)//Position - 0x10765
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_394(bool bParam0)//Position - 0x1078C
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_395()//Position - 0x107BE
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_216())
		{
			func_396();
		}
	}
}

void func_396()//Position - 0x107E0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_397()//Position - 0x1082B
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_216())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_216())
	{
		return 1;
	}
	return 0;
}

int func_398()//Position - 0x1086C
{
	if (func_216())
	{
		if (func_46(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_399()//Position - 0x10893
{
	if (func_216())
	{
		if (func_57(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_400(int iParam0)//Position - 0x108BA
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_401(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x108E8
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_445(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_444();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_443())
		{
			if (func_442() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar4);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_433())
		{
			func_432(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_432(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_442() == 1)
		{
			func_431(bVar3, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_432(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_442() == 0 && !bParam5))
		{
			func_432(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_430();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_430();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (func_431(bVar3, uParam0, 0))
				{
					func_393(uParam0);
					sVar1 = func_428(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_426(iParam1) };
					if (bParam4)
					{
						func_423(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_417(uParam0, func_420(uParam2), func_418(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_409(uParam0, func_411(uParam2), func_410(), -1);
					}
					else if (func_350())
					{
						uParam2->f_34 = Global_1574124;
						func_423(uParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_423(uParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_402(iParam1);
						func_423(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)//Position - 0x10B9E
{
	int iVar0;
	
	iVar0 = -1;
	if (func_408())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_407(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_406(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_405(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_403())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_403()//Position - 0x10CAE
{
	if (unk_0x4916190900E76373())
	{
		return func_55();
	}
	return func_404(Global_4456448.f_122309);
}

int func_404(int iParam0)//Position - 0x10CD2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_405(int iParam0)//Position - 0x10D0C
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_406(int iParam0)//Position - 0x10D21
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_407(int iParam0)//Position - 0x10D36
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_408()//Position - 0x10D4B
{
	return Global_4456448.f_1 == 0;
}

void func_409(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x10D5B
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_347(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_347("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_410()//Position - 0x10DBB
{
	switch (func_102(unk_0x9EB17624F44A8DA4()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_411(var uParam0)//Position - 0x10E14
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_102(unk_0x9EB17624F44A8DA4()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_413())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_114(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_114(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_412(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_412(int iParam0)//Position - 0x11241
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_413()//Position - 0x11273
{
	return (func_416() && func_414(func_415()));
}

int func_414(int iParam0)//Position - 0x1128C
{
	return func_68(iParam0, 1);
}

int func_415()//Position - 0x1129B
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_416()//Position - 0x112B2
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_417(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x112C8
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_347(sParam1);
		}
		else if (func_228(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_347("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_418(var uParam0)//Position - 0x11350
{
	int iVar0;
	
	iVar0 = func_228(unk_0x9EB17624F44A8DA4());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_138())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_419()//Position - 0x11500
{
	return Global_1595566;
}

char* func_420(var uParam0)//Position - 0x1150C
{
	int iVar0;
	
	iVar0 = func_228(unk_0x9EB17624F44A8DA4());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_422() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_422() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_138())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_421() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_421()//Position - 0x11702
{
	return Global_2512808.f_4780;
}

int func_422()//Position - 0x11711
{
	if (func_228(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_423(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11734
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_357(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(sParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_347(sParam1);
		}
		if (func_443() && iParam6)
		{
			if (func_425())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_347(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_424(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_55())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_424(int iParam0)//Position - 0x117F5
{
	if (func_407(iParam0) || func_406(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_425()//Position - 0x11817
{
	return Global_1574125;
}

struct<4> func_426(int iParam0)//Position - 0x11823
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_427(unk_0x9EB17624F44A8DA4()) || func_405(unk_0x9EB17624F44A8DA4()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_350() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_427(int iParam0)//Position - 0x118BF
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_428(int iParam0, char* sParam1, bool bParam2)//Position - 0x118D4
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_350() || unk_0xAB019B170BF1309C(sParam1)))
	{
		uVar0 = func_429();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_429()//Position - 0x11A32
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_430()//Position - 0x11A76
{
	Global_36765 = 1;
}

bool func_431(bool bParam0, var uParam1, bool bParam2)//Position - 0x11A82
{
	if (bParam0)
	{
		*uParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*uParam1);
}

void func_432(var uParam0, var uParam1, bool bParam2)//Position - 0x11AC2
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_340();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0xA68F7B004463AB6F(uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_433()//Position - 0x11B28
{
	if (func_441())
	{
		return 0;
	}
	if (func_309())
	{
		return 0;
	}
	if (!func_439())
	{
		return 0;
	}
	if (!func_295())
	{
		return 0;
	}
	if (func_438(8, -1))
	{
		return 0;
	}
	if (func_442() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_130())
	{
		return 0;
	}
	else if (!func_222(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_437(1) || func_435(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_655(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_434(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_434(int iParam0)//Position - 0x11C70
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_435(bool bParam0)//Position - 0x11C87
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_436(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)//Position - 0x11D72
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_437(bool bParam0)//Position - 0x11DCF
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_438(int iParam0, int iParam1)//Position - 0x11DF8
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

int func_439()//Position - 0x11E33
{
	if (func_440())
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

bool func_440()//Position - 0x11E72
{
	return Global_1312438;
}

bool func_441()//Position - 0x11E7E
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_442()//Position - 0x11E93
{
	return Global_1357530.f_68;
}

int func_443()//Position - 0x11EA1
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_444()//Position - 0x11EB7
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_445(int iParam0)//Position - 0x11EDB
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_446()//Position - 0x11F04
{
	if (func_449())
	{
		return 1;
	}
	if (func_232(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_419())
	{
		return 1;
	}
	if (func_308(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_228(unk_0x9EB17624F44A8DA4()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_447(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_447(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_447(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_447(int iParam0)//Position - 0x11FDF
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_448(int iParam0)//Position - 0x11FF7
{
	if ((iParam0 == 27 && func_308(unk_0x9EB17624F44A8DA4())) && !func_307(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_31(unk_0x9EB17624F44A8DA4(), 0) && func_307(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_299(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_449()//Position - 0x1205B
{
	if (func_450(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x12076
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_36(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

void func_451()//Position - 0x12099
{
	if (!func_18(&uLocal_106))
	{
		if (func_452(unk_0x622FF3AE4B1D07C3()))
		{
			func_11(&uLocal_106, 0, 1);
		}
	}
}

int func_452(int iParam0)//Position - 0x120C0
{
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_102[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_453()//Position - 0x1211D
{
	if (func_273(1, 1))
	{
		if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 8))
		{
			unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 8);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 8))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 8);
	}
	if (func_273(0, 1))
	{
		if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 9))
		{
			unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 9);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 9))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 9);
	}
	if (func_273(1, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 10))
		{
			unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 10))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 10);
	}
	if (func_273(0, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 11))
		{
			unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 11);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 11))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 11);
	}
}

void func_454()//Position - 0x12281
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_461(iVar0);
		func_455(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_455(int iParam0)//Position - 0x122CD
{
	if (func_273(0, 0) || iLocal_659 == -1)
	{
		func_81(iParam0);
		func_83(iParam0);
		func_78(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_229(unk_0x622FF3AE4B1D07C3(), iParam0))
		{
			func_83(iParam0);
		}
		else
		{
			func_457(iParam0);
		}
	}
	else
	{
		func_83(iParam0);
	}
	if (iLocal_660 != func_79(iParam0, 1))
	{
		switch (iLocal_661)
		{
			case 0:
				func_78(iParam0, -1);
				iLocal_661++;
				break;
			
			case 1:
				func_456(iParam0);
				iLocal_660 = func_79(iParam0, 1);
				iLocal_661 = 0;
				break;
			}
	}
}

void func_456(int iParam0)//Position - 0x12378
{
	if (!unk_0xC80D31E4B587871C(iLocal_104, func_480(iParam0)))
	{
		unk_0x71842E52F79163A6(func_80(iParam0, 0), 1, func_79(iParam0, 1));
		if (func_480(iParam0) == 4)
		{
			unk_0x71842E52F79163A6(func_80(iParam0, 1), 1, func_79(iParam0, 1));
		}
		unk_0x872F1C1F8587CCC7(&iLocal_104, func_480(iParam0));
	}
}

void func_457(int iParam0)//Position - 0x123D0
{
	if (!unk_0xA6DECE14FC9A8C51(func_84(iParam0)))
	{
		func_460(iParam0, unk_0x6F4378873333A0C2(func_329(iParam0)));
		unk_0xF27F72CA15E148EE(func_84(iParam0), 12);
		if (unk_0xA1800C71952C596F("KOTC_AREANAME"))
		{
			unk_0x62BD54E491535B76(func_84(iParam0), "KOTC_AREANAME");
		}
		unk_0x4B4040A0EC7DBA81(func_84(iParam0), 438);
		func_458(&(Local_117[iParam0 /*68*/].f_27), func_79(iParam0, 1));
		if (!unk_0xC80D31E4B587871C(iLocal_103, 13))
		{
			unk_0x0A8FD2D5529E1737(Local_117[iParam0 /*68*/].f_27, 1);
			unk_0xAA75C45BC4449A40(Local_117[iParam0 /*68*/].f_27, 7000);
			unk_0x872F1C1F8587CCC7(&iLocal_103, 13);
		}
		if (!unk_0xC80D31E4B587871C(iLocal_103, 12))
		{
			unk_0xE56ECFD267E53FC5();
			unk_0x872F1C1F8587CCC7(&iLocal_103, 12);
		}
		unk_0x9C27373CC69ECF87(func_84(iParam0), 1);
		unk_0x103AA766DC1F5AAF(func_84(iParam0), 1);
	}
	else
	{
		func_458(&(Local_117[iParam0 /*68*/].f_27), func_79(iParam0, 0));
		if (unk_0xA6DECE14FC9A8C51(func_84(iParam0)))
		{
			if (unk_0xA1800C71952C596F("KOTC_AREANAME"))
			{
				unk_0x62BD54E491535B76(func_84(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_458(var uParam0, int iParam1)//Position - 0x124E3
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		iVar0 = func_459(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, iVar0);
	}
}

int func_459(int iParam0)//Position - 0x12509
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_460(int iParam0, int iParam1)//Position - 0x12771
{
	Local_117[iParam0 /*68*/].f_27 = iParam1;
}

void func_461(int iParam0)//Position - 0x12784
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar2[3];
	var uVar3[3];
	vector3 vVar4[3];
	var uVar5[3];
	bool bVar6;
	float fVar7;
	float fVar8;
	
	fVar7 = 10f;
	fVar8 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_480(iParam0) == 7)
		{
			fVar7 = 5f;
			fVar8 = 9f;
		}
		vVar1[iVar0 /*3*/] = { func_471(iParam0, iVar0) };
		vVar2[iVar0 /*3*/] = { func_470(iParam0, iVar0) };
		uVar3[iVar0] = func_469(iParam0, iVar0);
		func_468(iParam0, iVar0, &(vVar4[iVar0 /*3*/]), &(uVar5[iVar0]));
		if (unk_0xC80D31E4B587871C(iLocal_652, unk_0x622FF3AE4B1D07C3()))
		{
			if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_653, Local_108[unk_0x622FF3AE4B1D07C3() /*18*/].f_1))
				{
					if (!func_273(1, 1))
					{
						if (iLocal_659 == unk_0x622FF3AE4B1D07C3())
						{
							if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
							{
								if ((!func_467(vVar1[iVar0 /*3*/]) && !func_467(vVar2[iVar0 /*3*/])) && uVar3[iVar0] > 0f)
								{
									if (unk_0x0F3033474C49912D(vLocal_109[unk_0x9EB17624F44A8DA4() /*3*/].f_2, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 1, 0))
									{
										bVar6 = true;
									}
								}
								if (func_480(iParam0) == 7)
								{
									if (func_466(iParam0) < 0f)
									{
										if (func_466(iParam0) <= fVar7 && func_466(iParam0) >= (fVar7 * -1f))
										{
											if (func_465(iParam0) <= fVar8)
											{
												bVar6 = true;
											}
										}
									}
								}
								else if (!func_467(vVar4[iVar0 /*3*/]))
								{
									if (func_464(iParam0, iVar0) < 0f)
									{
										if (func_464(iParam0, iVar0) >= (uVar5[iVar0] * -1f))
										{
											if (func_463(iParam0, iVar0) <= uVar5[iVar0])
											{
												bVar6 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_462(iParam0, bVar6);
}

void func_462(int iParam0, bool bParam1)//Position - 0x12963
{
	Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_3), iParam0);
	}
}

float func_463(int iParam0, int iParam1)//Position - 0x129A6
{
	return Local_117[iParam0 /*68*/].f_41[iParam1];
}

float func_464(int iParam0, int iParam1)//Position - 0x129BB
{
	return Local_117[iParam0 /*68*/].f_45[iParam1];
}

float func_465(int iParam0)//Position - 0x129D0
{
	return Local_117[iParam0 /*68*/].f_38;
}

float func_466(int iParam0)//Position - 0x129E1
{
	return Local_117[iParam0 /*68*/].f_39;
}

int func_467(vector3 vParam0)//Position - 0x129F2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_468(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x12A1C
{
	switch (iParam1)
	{
		case 0:
			switch (func_480(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515,966f, 3777,477f, 51,767f };
					*fParam3 = 5,3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_480(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515,315f, 3789,364f, 52,088f };
					*fParam3 = 3,35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_480(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_469(int iParam0, int iParam1)//Position - 0x12C67
{
	return Local_117[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_470(int iParam0, int iParam1)//Position - 0x12C7C
{
	return Local_117[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_471(int iParam0, int iParam1)//Position - 0x12C93
{
	return Local_117[iParam0 /*68*/][iParam1 /*3*/];
}

void func_472(int iParam0)//Position - 0x12CA8
{
	Local_102[unk_0x622FF3AE4B1D07C3() /*5*/] = iParam0;
}

void func_473(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12CBB
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_474("kwUfKUus6EuQyNSL8KpY-w");
					func_474("yMTOFLfO2UKwzKrmgPP7kg");
					func_474("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_474("tP5HSeCA0UiHnkRzakdO2Q");
					func_474("uEkrqoerQEmQ0uZRtp4rkw");
					func_474("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_474("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_474("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_474("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_474("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_474("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_474("uEkrqoerQEmQ0uZRtp4rkw");
					func_474("92t91kL3Wkqvl2Kc82cNSA");
					func_474("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_474("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_474("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_474("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_474("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_474("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_474("fOfm7nzMLkav0ldcSCNAzA");
					func_474("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_474("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_474("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_474("Ma78E44OMkGfYPmCPZXUNA");
					func_474("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_474("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_474("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_474("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_474("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_474("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_474("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_474("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_474("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_474("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_474("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_474("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_474("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_474("fOfm7nzMLkav0ldcSCNAzA");
							func_474("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_474("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_474("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_474("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_474("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_474("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_474("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_474("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_474("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_474("fOfm7nzMLkav0ldcSCNAzA");
							func_474("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_474("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_474("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_474("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_474("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_474("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_474("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_474("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_474("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_474("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_474("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_474("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_474("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_474("aGBjo2rKi0yMDLl3a2ATGA");
									func_474("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_474("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_474("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_474("f2lnL6wZPkGWUowu0yLm1Q");
									func_474("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_474("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_474("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_474("W-OJzHlM-0ym9PsIASYZtw");
									func_474("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_474("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_474("TjGz31AMYE6bGCjAIitu6w");
									func_474("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_474("QmlvLMLCwkOvoZlkAstYxw");
									func_474("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_474("BktATxH9R0Wp2x0kWSbqjw");
									func_474("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_474("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_474("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_474("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_474("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_474("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_474("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_474("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_474("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_474("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_474("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_474(char* sParam0)//Position - 0x13449
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xC80D31E4B587871C(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_475(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xC80D31E4B587871C(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0x872F1C1F8587CCC7(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_475(var uParam0)//Position - 0x134CD
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_477(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_476(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_476(var uParam0)//Position - 0x13534
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_477(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_98389[iVar1 /*13*/];
		
		case 62:
			return Global_907706.f_18805[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_477(var uParam0)//Position - 0x135AB
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_479(uParam0->f_1))
	{
		if (func_478(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_478(var uParam0)//Position - 0x1381B
{
	if (Global_2398103)
	{
		if (unk_0x74C475EB8E73D398(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_479(int iParam0)//Position - 0x13840
{
	return iParam0 == 9999;
}

int func_480(int iParam0)//Position - 0x1384E
{
	return Local_98.f_6[iParam0 /*204*/].f_69;
}

int func_481()//Position - 0x13860
{
	return Local_98;
}

int func_482(int iParam0)//Position - 0x1386A
{
	return Local_102[iParam0 /*5*/];
}

void func_483()//Position - 0x13879
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_480(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_501(iVar2, iVar3, func_502(iVar2, iVar3));
					func_499(iVar2, iVar3, func_500(iVar2, iVar3));
					func_497(iVar2, func_498(iVar2));
					func_495(iVar2, iVar3, func_496(iVar2, iVar3));
					unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			if (func_494(iVar2) <= 1)
			{
				func_493(iVar2, 0);
			}
			else
			{
				func_493(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_139(iVar2))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0x8E1421E2A2A2FBD4())
			{
				func_493(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_139(iVar2))
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					if (iVar0 > -1)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_652, iVar0))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_651, iVar0))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
						}
						if (unk_0xC80D31E4B587871C(iLocal_653, iVar0))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
						}
						if (!func_229(iVar0, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0xC80D31E4B587871C(iLocal_652, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0xC80D31E4B587871C(iLocal_651, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0xC80D31E4B587871C(iLocal_653, iVar1))
				{
					bVar5 = true;
				}
				if (!func_229(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				func_492(iVar2, -1);
				func_491(iVar2, -1);
			}
			func_490(iVar2, uVar4);
		}
		if (unk_0xC80D31E4B587871C(iLocal_103, 0))
		{
			if (func_489(iVar2) > -1 && func_488(iVar2) > -1)
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					func_492(iVar2, func_489(iVar2));
					func_491(iVar2, func_488(iVar2));
					func_490(iVar2, func_487(iVar2));
					if (!unk_0xC80D31E4B587871C(Local_98.f_6[iVar2 /*204*/].f_203, func_489(iVar2)))
					{
						unk_0x872F1C1F8587CCC7(&(Local_98.f_6[iVar2 /*204*/].f_203), func_489(iVar2));
					}
				}
			}
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_484(iVar2);
		}
		iVar2++;
	}
}

void func_484(int iParam0)//Position - 0x13AEF
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar3 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar4 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar5 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar3;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar4;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar5;
				}
				if ((iVar1 - 1) == 0 && Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_98.f_283 == Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_98.f_283 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 417846470;
						Var2.f_10 = unk_0xF6A72924028F588B(Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_485(Var2, func_486(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_485(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x13C9D
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_486(int iParam0)//Position - 0x13CCA
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
			if (func_717(iVar2, 0, 0))
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

var func_487(int iParam0)//Position - 0x13D27
{
	return Local_117[iParam0 /*68*/].f_31;
}

int func_488(int iParam0)//Position - 0x13D38
{
	return Local_117[iParam0 /*68*/].f_35;
}

int func_489(int iParam0)//Position - 0x13D49
{
	return Local_117[iParam0 /*68*/].f_34;
}

void func_490(int iParam0, var uParam1)//Position - 0x13D5A
{
	Local_117[iParam0 /*68*/].f_30 = uParam1;
}

void func_491(int iParam0, int iParam1)//Position - 0x13D6D
{
	Local_98.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_492(int iParam0, int iParam1)//Position - 0x13D81
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_98.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_493(int iParam0, int iParam1)//Position - 0x13DA0
{
	Local_98.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_494(int iParam0)//Position - 0x13DB4
{
	return Local_117[iParam0 /*68*/].f_37;
}

void func_495(int iParam0, int iParam1, var uParam2)//Position - 0x13DC5
{
	Local_117[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_496(int iParam0, int iParam1)//Position - 0x13DDC
{
	switch (iParam1)
	{
		case 0:
			switch (func_480(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8,25f;
				
				case 3:
					return 16,5f;
				
				case 5:
					return 9,65f;
				
				case 6:
					return 9,15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_480(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3,5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_480(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_497(int iParam0, vector3 vParam1)//Position - 0x13F38
{
	Local_117[iParam0 /*68*/].f_24 = { vParam1 };
}

Vector3 func_498(int iParam0)//Position - 0x13F4F
{
	switch (func_480(iParam0))
	{
		case 0:
			return -1195,435f, -1788,217f, 14,6269f;
		
		case 2:
			return -379,8141f, 6087,215f, 43,2552f;
		
		case 4:
			return 2516,59f, 3784,677f, 52,0053f;
		
		case 1:
			return 1667,193f, -27,4697f, 183,774f;
		
		case 3:
			return -746,2f, 5594,6f, 41,7f;
		
		case 5:
			return -389,3f, 1135,7f, 322,6f;
		
		case 6:
			return 473,6f, -1339,1f, 35,2f;
		
		case 7:
			return -1459,651f, 179,275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_499(int iParam0, int iParam1, vector3 vParam2)//Position - 0x1402A
{
	Local_117[iParam0 /*68*/].f_10[iParam1 /*3*/] = { vParam2 };
}

Vector3 func_500(int iParam0, int iParam1)//Position - 0x14045
{
	switch (iParam1)
	{
		case 0:
			switch (func_480(iParam0))
			{
				case 0:
					return -1178,575f, -1795,219f, 22,42828f;
				
				case 2:
					return -377,4193f, 6083,058f, 46,63536f;
				
				case 4:
					return 2518,118f, 3772,498f, 58,13546f;
				
				case 1:
					return 1673,975f, -24,62664f, 199,2563f;
				
				case 3:
					return -756,4877f, 5594,868f, 44,17008f;
				
				case 5:
					return -391,5381f, 1125,141f, 325,0288f;
				
				case 6:
					return 470,2388f, -1335,768f, 38,44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_480(iParam0))
			{
				case 0:
					return -1180,375f, -1777,348f, 22,48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676,203f, -25,81484f, 200,1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_480(iParam0))
			{
				case 0:
					return -1194,205f, -1806,82f, 22,48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_501(int iParam0, int iParam1, vector3 vParam2)//Position - 0x1422B
{
	Local_117[iParam0 /*68*/][iParam1 /*3*/] = { vParam2 };
}

Vector3 func_502(int iParam0, int iParam1)//Position - 0x14244
{
	switch (iParam1)
	{
		case 0:
			switch (func_480(iParam0))
			{
				case 0:
					return -1212,381f, -1780,108f, 7,481341f;
				
				case 2:
					return -381,2328f, 6089,681f, 34,37778f;
				
				case 4:
					return 2516,82f, 3795,646f, 49,82948f;
				
				case 1:
					return 1660,532f, -27,94882f, 181,587f;
				
				case 3:
					return -736,0183f, 5595,02f, 40,53122f;
				
				case 5:
					return -386,508f, 1144,122f, 321,5792f;
				
				case 6:
					return 479,0627f, -1343,186f, 34,14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_480(iParam0))
			{
				case 0:
					return -1209,83f, -1798,181f, 7,481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669,613f, -27,26755f, 182,2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_480(iParam0))
			{
				case 0:
					return -1197,333f, -1769,584f, 7,474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_503()//Position - 0x1442A
{
	func_505();
	iLocal_650++;
	func_504();
}

void func_504()//Position - 0x14442
{
	if (iLocal_650 >= (unk_0xB72D370CB7ABC3EF() - 1))
	{
		iLocal_650 = 0;
	}
}

void func_505()//Position - 0x1445A
{
	if (iLocal_650 == 0)
	{
	}
}

void func_506()//Position - 0x14469
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	vector3 vVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_109[iVar1 /*3*/] = func_27();
		vLocal_109[iVar1 /*3*/].f_1 = -1;
		vLocal_109[iVar1 /*3*/].f_2 = uVar3;
		unk_0x0EE72DB1CD8A3B86(&iLocal_651, iVar1);
		unk_0x0EE72DB1CD8A3B86(&iLocal_653, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_108[iVar0 /*18*/] = func_534();
		Local_108[iVar0 /*18*/].f_1 = -1;
		unk_0x0EE72DB1CD8A3B86(&iLocal_652, iVar0);
		if (unk_0x8E1421E2A2A2FBD4())
		{
			iVar8 = 0;
			while (iVar8 < 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_98.f_6[iVar8 /*204*/].f_73), iVar0);
				iVar8++;
			}
		}
		Local_108[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar8 = 0;
	while (iVar8 < 1)
	{
		func_533(iVar8, 0);
		func_532(iVar8, 0);
		func_531(iVar8, 0f);
		func_530(iVar8, 0f);
		func_529(iVar8, 0f);
		iVar11 = 0;
		while (iVar11 < 3)
		{
			func_528(iVar8, iVar11, 0f);
			func_527(iVar8, iVar11, 0f);
			func_526(iVar8, iVar11, 0f);
			iVar11++;
		}
		iVar8++;
	}
	bVar13 = true;
	bVar14 = true;
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(iVar0))
		{
			Local_108[iVar0 /*18*/] = iVar0;
			unk_0x872F1C1F8587CCC7(&iLocal_652, iVar0);
			iVar2 = unk_0x43E1A43A1AA9E0BE(Local_108[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_717(iVar2, 0, 1))
			{
				vLocal_109[iVar1 /*3*/] = iVar2;
				Local_108[iVar0 /*18*/].f_1 = iVar1;
				vLocal_109[iVar1 /*3*/].f_1 = iVar0;
				vLocal_109[iVar1 /*3*/].f_2 = unk_0x25D049AAC4603E65(iVar2);
				StringCopy(&(Local_108[iVar0 /*18*/].f_2), unk_0xDE2D3B9654C31EB3(iVar2), 64);
				iVar10++;
				if (func_452(iVar0))
				{
					iVar12++;
				}
				unk_0x872F1C1F8587CCC7(&iLocal_651, iVar1);
				if ((unk_0x191BE1BC8F26F3C1(vLocal_109[iVar1 /*3*/].f_2, 0) || unk_0x3AB6A1A9084FB0A4(vLocal_109[iVar1 /*3*/].f_2)) || !unk_0x5BEF7A5AB8F17255(vLocal_109[iVar1 /*3*/]))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_653, iVar1);
				}
				if (unk_0x8E1421E2A2A2FBD4())
				{
					if (!unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 0))
					{
						bVar13 = false;
					}
					if (!unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 1))
					{
						bVar14 = false;
					}
				}
				func_524(iVar1, 2);
				if (func_232(iVar1))
				{
					if (unk_0x8E1421E2A2A2FBD4())
					{
						func_522(iVar0);
					}
				}
				if (func_120(iVar1))
				{
					if (unk_0x8E1421E2A2A2FBD4())
					{
						func_522(iVar0);
					}
				}
				if (func_231(iVar1))
				{
					if (unk_0x8E1421E2A2A2FBD4())
					{
						func_522(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_652, iVar0);
			if (func_629() <= 1)
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					func_522(iVar0);
				}
			}
		}
		iVar8 = 0;
		while (iVar8 < 1)
		{
			if (!unk_0xC80D31E4B587871C(Local_98.f_213, 1))
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					func_521(iVar0, iVar8);
				}
			}
			if (unk_0xC80D31E4B587871C(iLocal_652, iVar0))
			{
				if (unk_0xC80D31E4B587871C(iLocal_651, iVar1))
				{
					if (!unk_0xC80D31E4B587871C(Local_98.f_213, 1))
					{
						if (unk_0x8E1421E2A2A2FBD4())
						{
							func_520(iVar0, iVar1, iVar8, func_132(iVar8, iVar0));
						}
					}
					if (!unk_0xC80D31E4B587871C(iLocal_653, iVar1))
					{
						if (iVar0 == unk_0x622FF3AE4B1D07C3())
						{
							fVar19 = func_519(vLocal_109[iVar1 /*3*/].f_2, func_329(iVar8), 0);
							fVar20 = func_519(vLocal_109[iVar1 /*3*/].f_2, func_329(iVar8), 1);
							vVar21 = { unk_0xB3328BA8976B416C(vLocal_109[iVar1 /*3*/].f_2, 1) };
							fVar22 = (Local_117[iVar8 /*68*/].f_24.f_2 - vVar21.z);
							func_531(iVar8, fVar19);
							func_530(iVar8, fVar22);
							func_529(iVar8, fVar20);
							iVar11 = 0;
							while (iVar11 < 3)
							{
								vVar5 = { 0f, 0f, 0f };
								fVar6 = 0f;
								func_468(iVar8, iVar11, &vVar5, &fVar6);
								if (!func_467(vVar5))
								{
									fVar23 = func_519(vLocal_109[iVar1 /*3*/].f_2, vVar5, 0);
									fVar24 = func_519(vLocal_109[iVar1 /*3*/].f_2, vVar5, 1);
									fVar25 = (vVar5.z - vVar21.z);
									func_528(iVar8, iVar11, fVar23);
									func_527(iVar8, iVar11, fVar25);
									func_526(iVar8, iVar11, fVar24);
								}
								iVar11++;
							}
						}
						if (func_229(iVar0, iVar8))
						{
							func_533(iVar8, 1);
							iVar9 = func_494(iVar8);
							iVar9++;
							func_532(iVar8, iVar9);
							if (func_8(iVar8) != iVar0 && func_7(iVar8) != iVar1)
							{
								if (func_489(iVar8) == -1)
								{
									func_585(iVar8, iVar0);
								}
								if (func_488(iVar8) == -1)
								{
									func_584(iVar8, iVar1);
								}
								func_583(iVar8, vLocal_109[iVar1 /*3*/].f_2);
							}
							if (unk_0x8E1421E2A2A2FBD4())
							{
								unk_0x872F1C1F8587CCC7(&(Local_98.f_6[iVar8 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x622FF3AE4B1D07C3())
					{
						if (!unk_0xC80D31E4B587871C(iLocal_653, iVar1))
						{
							if (func_212(iVar8) <= IntToFloat(Global_262145.f_10838))
							{
								if (!unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 12))
								{
									unk_0x872F1C1F8587CCC7(&(Local_102[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_212(iVar8) >= IntToFloat(Global_262145.f_10839))
							{
								if (unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 12))
								{
									unk_0x0EE72DB1CD8A3B86(&(Local_102[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_230(1, 0))
							{
								if (func_212(iVar8) <= IntToFloat(Global_262145.f_10838))
								{
									if (!unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 3))
									{
										unk_0x872F1C1F8587CCC7(&(Local_102[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_212(iVar8) >= IntToFloat(Global_262145.f_10839))
								{
									if (unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 3))
									{
										unk_0x0EE72DB1CD8A3B86(&(Local_102[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0xC80D31E4B587871C(Local_102[iVar0 /*5*/].f_4, 3))
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_102[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar7 = 6;
				if (unk_0x9EB17624F44A8DA4() != vLocal_109[iVar1 /*3*/])
				{
					if (func_186(unk_0x9EB17624F44A8DA4(), vLocal_109[iVar1 /*3*/]))
					{
						iVar7 = func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0);
					}
				}
				if (!unk_0xC80D31E4B587871C(iLocal_653, iVar1))
				{
					if (func_273(0, 0))
					{
						func_518(iVar1);
					}
					else if (func_7(iVar8) != iVar1)
					{
						func_518(iVar1);
					}
					else if (func_629() != 1)
					{
						func_518(iVar1);
					}
					else
					{
						func_513(iVar1);
						if (iVar0 != unk_0x622FF3AE4B1D07C3())
						{
							if (func_177(unk_0x622FF3AE4B1D07C3()))
							{
								unk_0x31758B9A51671C43(iVar7, &iVar15, &iVar16, &iVar17, &iVar18);
								iVar18 = 100;
								unk_0xBDD6765E5846A7DE(2, unk_0xB3328BA8976B416C(vLocal_109[iVar1 /*3*/].f_2, 1) + Vector(1,5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, iVar15, iVar16, iVar17, iVar18, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_717(vLocal_109[iVar1 /*3*/], 1, 1))
				{
					if (func_512(vLocal_109[iVar1 /*3*/]))
					{
						func_507(vLocal_109[iVar1 /*3*/], func_459(iVar7), func_508(iVar0, iVar1, iVar8));
					}
				}
			}
			iVar8++;
		}
		iVar0++;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (bVar13)
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_213), 0);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_98.f_213), 0);
		}
		if (bVar14)
		{
			unk_0x872F1C1F8587CCC7(&(Local_98.f_213), 1);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_98.f_213), 1);
		}
	}
	if (iVar12 > iLocal_105)
	{
		iLocal_105 = iVar12;
	}
	if (iVar10 > iLocal_654)
	{
		iLocal_654 = iVar10;
	}
	else
	{
		Local_98.f_216 = (iLocal_654 - iVar10);
	}
}

void func_507(int iParam0, var uParam1, bool bParam2)//Position - 0x14B9F
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_201())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_512(iParam0))
	{
		if (bParam2)
		{
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = unk_0xBBA15366508D1BDE();
			Global_2415606.f_446[iVar0] = uParam1;
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_508(int iParam0, int iParam1, int iParam2)//Position - 0x14C1F
{
	if (func_273(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x622FF3AE4B1D07C3())
	{
		return 0;
	}
	if (func_509(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x622FF3AE4B1D07C3() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_509(int iParam0)//Position - 0x14C6F
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return func_123();
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_241.f_136[func_511(10) /*33*/][iParam0], func_510(10));
}

int func_510(int iParam0)//Position - 0x14CA5
{
	return (iParam0 % 32);
}

int func_511(int iParam0)//Position - 0x14CB2
{
	return (iParam0 / 32);
}

int func_512(int iParam0)//Position - 0x14CBF
{
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == unk_0xBBA15366508D1BDE())
	{
		return 1;
	}
	return 0;
}

void func_513(int iParam0)//Position - 0x14CF5
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (unk_0xC80D31E4B587871C(iLocal_651, iParam0))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_653, iParam0))
			{
				if (func_186(unk_0x9EB17624F44A8DA4(), vLocal_109[iParam0 /*3*/]))
				{
					iVar0 = func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0);
				}
				func_516(vLocal_109[iParam0 /*3*/], 439, 1);
				if (func_512(vLocal_109[iParam0 /*3*/]))
				{
					func_507(vLocal_109[iParam0 /*3*/], func_459(iVar0), 1);
				}
				func_514(vLocal_109[iParam0 /*3*/], 1, 1);
				unk_0x872F1C1F8587CCC7(&iLocal_658, iParam0);
			}
		}
	}
}

void func_514(int iParam0, bool bParam1, bool bParam2)//Position - 0x14D85
{
	if (bParam1)
	{
		if (func_717(iParam0, 1, 1))
		{
			Global_2415606.f_710[iParam0] = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_364), iParam0);
			func_515(iParam0, bParam2);
		}
	}
	else
	{
		func_515(iParam0, bParam2);
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_364), iParam0);
		Global_2415606.f_710[iParam0] = -1;
	}
}

void func_515(int iParam0, bool bParam1)//Position - 0x14DE8
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_2415606.f_365), iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_365), iParam0);
	}
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		if (bParam1)
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], 0);
		}
		else
		{
			unk_0x66DAED36FB41050D(Global_2415606[iParam0], 1);
		}
	}
}

void func_516(int iParam0, int iParam1, bool bParam2)//Position - 0x14E43
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_27())
	{
		return;
	}
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_201())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x8F05914DD835E69F(Global_2415606.f_578[iParam0]) || Global_2415606.f_578[iParam0] == unk_0xBBA15366508D1BDE())
	{
		if (bParam2)
		{
			if (!unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_517();
			}
			unk_0x872F1C1F8587CCC7(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_413[iVar0] = uVar1;
			Global_2415606.f_578[iParam0] = unk_0xBBA15366508D1BDE();
		}
		else
		{
			if (unk_0xC80D31E4B587871C(Global_2415606.f_385, iVar0))
			{
				func_517();
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_2415606.f_385), iVar0);
			Global_2415606.f_578[iParam0] = -1;
		}
	}
}

void func_517()//Position - 0x14F10
{
	Global_2415606.f_1009 = 1;
}

void func_518(int iParam0)//Position - 0x14F20
{
	int iVar0;
	
	iVar0 = 6;
	if (unk_0xC80D31E4B587871C(iLocal_658, iParam0))
	{
		if (iParam0 > -1)
		{
			if (unk_0xC80D31E4B587871C(iLocal_651, iParam0))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_653, iParam0))
				{
					if (unk_0x9EB17624F44A8DA4() != vLocal_109[iParam0 /*3*/])
					{
						if (func_186(unk_0x9EB17624F44A8DA4(), vLocal_109[iParam0 /*3*/]))
						{
							iVar0 = func_155(unk_0x9EB17624F44A8DA4(), -2, 0, 0);
						}
					}
					func_516(vLocal_109[iParam0 /*3*/], 439, 0);
					if (func_512(vLocal_109[iParam0 /*3*/]))
					{
						func_507(vLocal_109[iParam0 /*3*/], func_459(iVar0), 0);
					}
					func_514(vLocal_109[iParam0 /*3*/], 0, 0);
					unk_0x0EE72DB1CD8A3B86(&iLocal_658, iParam0);
				}
			}
		}
	}
}

float func_519(int iParam0, vector3 vParam1, int iParam2)//Position - 0x14FCA
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
	return unk_0xBE3C4023003180FC(vVar0, vParam1, iParam2);
}

void func_520(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x15004
{
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_521(int iParam0, int iParam1)//Position - 0x15052
{
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_27();
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_522(int iParam0)//Position - 0x1509F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_133(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_523(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_98.f_217[iVar1] > 0f)
			{
				if (Local_98.f_250[iVar1] == iParam0)
				{
					Local_98.f_217[iVar1] = 0f;
					Local_98.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_523(int iParam0, int iParam1, float fParam2)//Position - 0x15127
{
	Local_98.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_524(int iParam0, int iParam1)//Position - 0x1513F
{
	bool bVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1574409.f_18)))
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_2, iParam0))
	{
		if (Global_1574409 < iParam1 && unk_0xC80D31E4B587871C(Global_1574409.f_1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 0);
			return;
		}
		if (Global_1574409 != 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 1);
		}
		Global_1574409 = 0;
		Global_1574409.f_2 = 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_1574409.f_2), iParam0);
	bVar0 = true;
	if (func_206(iParam0))
	{
		bVar0 = false;
	}
	if (func_525(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_232(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574409++;
	}
}

bool func_525(int iParam0)//Position - 0x1520D
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10);
}

void func_526(int iParam0, int iParam1, float fParam2)//Position - 0x15226
{
	Local_117[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_527(int iParam0, int iParam1, float fParam2)//Position - 0x1523D
{
	Local_117[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_528(int iParam0, int iParam1, float fParam2)//Position - 0x15254
{
	Local_117[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_529(int iParam0, float fParam1)//Position - 0x1526B
{
	Local_117[iParam0 /*68*/].f_40 = fParam1;
}

void func_530(int iParam0, float fParam1)//Position - 0x1527E
{
	Local_117[iParam0 /*68*/].f_39 = fParam1;
}

void func_531(int iParam0, float fParam1)//Position - 0x15291
{
	Local_117[iParam0 /*68*/].f_38 = fParam1;
}

void func_532(int iParam0, int iParam1)//Position - 0x152A4
{
	Local_117[iParam0 /*68*/].f_37 = iParam1;
}

void func_533(int iParam0, int iParam1)//Position - 0x152B7
{
	Local_117[iParam0 /*68*/].f_36 = iParam1;
}

int func_534()//Position - 0x152CA
{
	return -1;
}

void func_535()//Position - 0x152D3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 182)
		{
			func_536(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_536(int iParam0)//Position - 0x1530E
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
	struct<4> Var11;
	struct<14> Var12;
	float fVar13;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	unk_0x575EF325DA5E3F04(1, iParam0, &Var11, 11);
	if (unk_0x6ADD12BF4D6D2587(Var11))
	{
		if (unk_0x52C56492660097C7(Var11))
		{
			iVar0 = unk_0x07F64790D10D1DB5(Var11);
			if (unk_0x1417A5CC924DE120(iVar0))
			{
				iVar2 = unk_0xDF35170AEEFB473B(iVar0);
				if (unk_0xDE597476C8B96D1A(iVar2))
				{
					iVar4 = unk_0x87678BB8392EFD41(iVar2);
					if (unk_0x012BC3F18B8C7807(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0x6ADD12BF4D6D2587(Var11.f_1))
					{
						if (unk_0x52C56492660097C7(Var11.f_1))
						{
							iVar1 = unk_0x07F64790D10D1DB5(Var11.f_1);
							if (unk_0x1417A5CC924DE120(iVar1))
							{
								iVar3 = unk_0xDF35170AEEFB473B(iVar1);
								iVar8 = iVar3;
								if (unk_0xDE597476C8B96D1A(iVar3))
								{
									iVar5 = unk_0x87678BB8392EFD41(iVar3);
									if (unk_0x012BC3F18B8C7807(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_230(1, 0))
													{
														if (iVar7 == unk_0x622FF3AE4B1D07C3())
														{
															if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 7))
															{
																unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x622FF3AE4B1D07C3())
														{
															if (iLocal_657 < func_582())
															{
																iLocal_657++;
																func_540(0, iVar1, "", -1859646258, 2131309714, func_581(), 1, -1, 0, 0, 0);
																Local_99.f_7 = (Local_99.f_7 + func_581());
															}
															else
															{
																iLocal_657++;
															}
														}
														if (unk_0x8E1421E2A2A2FBD4())
														{
															fVar13 = func_133(iVar9, iVar6);
															fVar13 = (fVar13 + IntToFloat(Global_262145.f_10534));
															func_523(iVar9, iVar6, fVar13);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x622FF3AE4B1D07C3())
													{
														if (!func_230(1, 0))
														{
															if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 6))
															{
																unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 6);
															}
															if (!unk_0xC80D31E4B587871C(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, 2))
															{
																unk_0x872F1C1F8587CCC7(&(Local_102[unk_0x622FF3AE4B1D07C3() /*5*/].f_4), 2);
																func_217(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_655 < func_539())
															{
																iLocal_655++;
																func_540(0, iVar1, "", -1859646258, 2131309714, func_538(), 1, -1, 0, 0, 0);
																Local_99.f_7 = (Local_99.f_7 + func_538());
															}
															else
															{
																iLocal_655++;
															}
														}
													}
													if (iVar7 == unk_0x622FF3AE4B1D07C3())
													{
														iLocal_656++;
													}
													if (func_229(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0x8E1421E2A2A2FBD4())
															{
																if (func_489(iVar9) == -1)
																{
																	func_585(iVar9, iVar6);
																}
																if (func_488(iVar9) == -1)
																{
																	func_584(iVar9, iVar8);
																}
																unk_0x872F1C1F8587CCC7(&iLocal_103, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0x8E1421E2A2A2FBD4())
														{
															Var12.f_2 = -2033758729;
															Var12.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0xC80D31E4B587871C(iLocal_652, iVar10))
																{
																	if (unk_0xC80D31E4B587871C(iLocal_651, Local_108[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0xC80D31E4B587871C(Local_102[iVar10 /*5*/].f_4, 9) && !unk_0xC80D31E4B587871C(Local_102[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_177(iVar10))
																			{
																				func_485(Var12, func_537(Local_108[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_537(int iParam0)//Position - 0x15663
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

int func_538()//Position - 0x15675
{
	return Global_262145.f_10339;
}

int func_539()//Position - 0x15684
{
	return Global_262145.f_10341;
}

int func_540(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x15693
{
	return func_541(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_541(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x156B5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_551(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_547(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_542(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_542(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1572E
{
	vector3 vVar0;
	
	vVar0 = { func_545(iParam0, 1) };
	if (iParam0 == func_544(unk_0xFC1458A37D98B502()))
	{
		func_543(1);
	}
	func_547(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_543(int iParam0)//Position - 0x15762
{
	Global_2436181.f_1774 = iParam0;
}

int func_544(int iParam0)//Position - 0x15773
{
	return iParam0;
}

Vector3 func_545(int iParam0, bool bParam1)//Position - 0x1577D
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x4AA5DF29899B96D6())
	{
		vVar1 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_546(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		vVar0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar2 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0,18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0,18f);
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_546(int iParam0)//Position - 0x15841
{
	return iParam0;
}

void func_547(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1584B
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { vParam0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_550(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_549();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_548();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_548()//Position - 0x15962
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_549()//Position - 0x1598C
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_550(vector3 vParam0, var uParam1, var uParam2)//Position - 0x159A7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0,402f;
		*uParam2 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0,212f;
		*uParam2 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam1 = (fVar2 + 0,212f);
	*uParam2 = (fVar3 + 0,286f);
	return fVar1;
}

var func_551(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x15A40
{
	var uVar0;
	
	uVar0 = func_552(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_552(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x15A63
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_580(unk_0x9EB17624F44A8DA4()) || func_579(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_403() || func_577(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_119(sParam2))
	{
	}
	if (func_576())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_574(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_573(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_570(0, &iVar1);
					break;
				
				case 3:
					func_570(1, &iVar1);
					break;
				
				case 1:
					func_567(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_240(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_559((func_566(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_240(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_555(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_553((func_554(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_553((func_554(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_553(int iParam0)//Position - 0x15C61
{
	if (func_576())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_246(joaat("mpply_globalxp"), iParam0);
	}
}

int func_554(int iParam0)//Position - 0x15C8C
{
	if (iParam0 > -1)
	{
		if (func_717(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_248(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_248(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_555(int iParam0)//Position - 0x15CDD
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_41(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_557(func_558(&Var0));
			if (iVar1 == 0)
			{
				func_556(&Global_1368098, iParam0);
				func_245(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_556(&Global_1368099, iParam0);
				func_245(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_556(&Global_1368100, iParam0);
				func_245(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_556(&Global_1368101, iParam0);
				func_245(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_556(&Global_1368102, iParam0);
				func_245(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_556(var uParam0, int iParam1)//Position - 0x15DB1
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_557(int iParam0)//Position - 0x15DC2
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_558(var uParam0)//Position - 0x15E1F
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_559(int iParam0, int iParam1, int iParam2)//Position - 0x15E42
{
	if (func_576())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_195(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_195(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_565(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_563(iParam0, 1);
		}
		func_241(636, iParam0, -1, 1);
		func_242(637, func_563(iParam0, 1), -1, 1, 0);
		Global_1368213[func_195(-1)] = iParam0;
		func_560(7, 0);
	}
}

void func_560(int iParam0, int iParam1)//Position - 0x15F63
{
	int iVar0;
	
	if (func_562(iParam0, iParam1))
	{
		iVar0 = func_561();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_561()//Position - 0x15F86
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_562(int iParam0, var uParam1)//Position - 0x15FBB
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_563(int iParam0, bool bParam1)//Position - 0x16041
{
	if (bParam1)
	{
	}
	return func_564(iParam0, 0);
}

int func_564(int iParam0, int iParam1)//Position - 0x16055
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_565(int iParam0)//Position - 0x16114
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

int func_566(int iParam0)//Position - 0x16139
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_195(-1)];
			}
			else if (func_565(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_195(-1)];
	}
	return 0;
}

void func_567(int iParam0)//Position - 0x16196
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_162(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_569(unk_0x9EB17624F44A8DA4(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_568(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_568(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_568(int iParam0, int iParam1)//Position - 0x16281
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_569(int iParam0, int iParam1)//Position - 0x162A2
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_41(iParam0) };
		Global_2492170 = { func_41(iParam1) };
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

void func_570(bool bParam0, int iParam1)//Position - 0x1630F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_717(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_569(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_717(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_571(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_569(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_568(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_568(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_571(int iParam0, int iParam1)//Position - 0x16427
{
	return system::vdist(func_572(iParam0), func_572(iParam1));
	return 0f;
}

Vector3 func_572(int iParam0)//Position - 0x16443
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_573(int iParam0)//Position - 0x16456
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_568(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_574(int iParam0)//Position - 0x1648D
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_566(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_566(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_575(8000, 0, 0) > 0)
	{
		if (func_575(8000, 0, 0) < (iParam0 + func_566(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_575(8000, 0, 0) - func_566(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_575(int iParam0, bool bParam1, int iParam2)//Position - 0x164F1
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_285062[iParam0];
}

int func_576()//Position - 0x16519
{
	return 1;
}

int func_577(int iParam0)//Position - 0x16522
{
	return func_578(func_102(iParam0));
}

int func_578(int iParam0)//Position - 0x16534
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_579(int iParam0)//Position - 0x1654E
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_580(int iParam0)//Position - 0x16563
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

int func_581()//Position - 0x16578
{
	return Global_262145.f_10340;
}

int func_582()//Position - 0x16587
{
	return Global_262145.f_10342;
}

void func_583(int iParam0, var uParam1)//Position - 0x16596
{
	Local_117[iParam0 /*68*/].f_31 = uParam1;
}

void func_584(int iParam0, int iParam1)//Position - 0x165A9
{
	Local_117[iParam0 /*68*/].f_35 = iParam1;
}

void func_585(int iParam0, int iParam1)//Position - 0x165BC
{
	Local_117[iParam0 /*68*/].f_34 = iParam1;
}

void func_586(int iParam0, int iParam1)//Position - 0x165CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xC80D31E4B587871C(iLocal_103, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_232(unk_0x9EB17624F44A8DA4()))
			{
				if (!func_120(unk_0x9EB17624F44A8DA4()))
				{
					if (func_452(unk_0x622FF3AE4B1D07C3()))
					{
						if (iParam1 <= 2)
						{
							if (func_177(unk_0x622FF3AE4B1D07C3()) || func_452(unk_0x622FF3AE4B1D07C3()))
							{
								func_611(func_625(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_610(1);
						}
						if (iVar1 > 0)
						{
							func_609();
							func_540(0, unk_0xFC1458A37D98B502(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_99.f_7 = (Local_99.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_598(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_597())
							{
								func_588(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								unk_0x432E164230431523(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_99.f_6 = (Local_99.f_6 + iVar0);
							if (!Global_262145.f_10745)
							{
								if (Local_99.f_6 > 0)
								{
									func_587(16, Local_99.f_6);
								}
							}
							Global_2459022 = iVar0;
						}
					}
					else
					{
						func_610(0);
					}
				}
				else
				{
					func_610(0);
				}
			}
			else
			{
				func_610(0);
			}
		}
		else
		{
			func_610(0);
		}
		unk_0x872F1C1F8587CCC7(&iLocal_103, 5);
	}
}

void func_587(int iParam0, int iParam1)//Position - 0x1671D
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

void func_588(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1678F
{
	int iVar0;
	
	if (!func_597())
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
				func_589(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_589(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_589(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x16C19
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_597())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_38()) || unk_0xD7D895B4B5395982())
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
			*uParam0 = func_596(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_595(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_590(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16DBD
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_591(iParam0);
	}
}

void func_591(int iParam0)//Position - 0x16DF5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_597())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_594(iParam0))
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
		func_592(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_592(var uParam0)//Position - 0x16E47
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
	func_593(&(uParam0->f_8.f_3));
	func_593(&(uParam0->f_8.f_16));
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

void func_593(var uParam0)//Position - 0x16F41
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

int func_594(int iParam0)//Position - 0x16F89
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_595(int iParam0, int iParam1)//Position - 0x16FB1
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_596(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x16FC5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_597())
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

int func_597()//Position - 0x170BE
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_598(int iParam0, int iParam1)//Position - 0x170D5
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_608())
		{
			if (func_134(0))
			{
				if (!func_114(0))
				{
					if (unk_0x552F39AE86E07792(func_607()))
					{
						if (func_606() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_606());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_604(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_603("GB_BCUT_TICK1", func_607(), iVar0, 0, 0, 1, 1);
						}
						func_602(20);
						func_599(func_607(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_599(int iParam0, int iParam1, int iParam2)//Position - 0x17176
{
	struct<8> Var0;
	
	if (func_717(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_601(iParam0);
		func_600(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_537(iParam0));
	}
}

void func_600(var uParam0, var uParam1)//Position - 0x171CC
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_601(int iParam0)//Position - 0x171E6
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_602(int iParam0)//Position - 0x171FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_603(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x17223
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_155(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_42(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_604(int iParam0, bool bParam1)//Position - 0x172BA
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_605(1);
	}
	else
	{
		iVar1 = func_605(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_605(bool bParam0)//Position - 0x172EC
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_606()//Position - 0x17312
{
	return Global_262145.f_11729;
}

int func_607()//Position - 0x17321
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_608()//Position - 0x17336
{
	return func_71(unk_0x9EB17624F44A8DA4());
}

void func_609()//Position - 0x17346
{
	Global_2458364 = 1;
}

void func_610(bool bParam0)//Position - 0x17353
{
	if (bParam0)
	{
		if (func_193(1))
		{
			unk_0x872F1C1F8587CCC7(&Global_1574434, 1);
		}
	}
	else if (func_193(2))
	{
		unk_0x872F1C1F8587CCC7(&Global_1574434, 2);
	}
}

void func_611(float fParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17385
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_106, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_10776)
	{
		iVar0 = Global_262145.f_10776;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_624() * iVar0);
	*uParam2 = (func_623() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_10529 / 60) / 1000);
		if (iVar1 > func_622())
		{
			iVar1 = func_622();
		}
		iVar2 = iLocal_105;
		if (iVar2 > func_621())
		{
			iVar2 = func_621();
		}
		*uParam1 = system::round((IntToFloat(func_614(func_620(), func_619(), iVar1, fParam0, func_618(), func_617(), func_616(), iVar2)) * Global_262145.f_10803));
		*uParam2 = (*uParam2 + system::round((IntToFloat(func_614(func_613(), func_612(), iVar1, fParam0, func_618(), func_617(), func_616(), iVar2)) * Global_262145.f_10804)));
	}
}

int func_612()//Position - 0x1746E
{
	return Global_262145.f_10336;
}

int func_613()//Position - 0x1747D
{
	return Global_262145.f_10338;
}

int func_614(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x1748C
{
	return func_615(system::round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_615(int iParam0, int iParam1, int iParam2)//Position - 0x174BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_616()//Position - 0x17505
{
	return Global_262145.f_10345;
}

float func_617()//Position - 0x17514
{
	return Global_262145.f_10344;
}

float func_618()//Position - 0x17523
{
	return Global_262145.f_10343;
}

int func_619()//Position - 0x17532
{
	return Global_262145.f_10335;
}

int func_620()//Position - 0x17541
{
	return Global_262145.f_10337;
}

int func_621()//Position - 0x17550
{
	return Global_262145.f_10688;
}

int func_622()//Position - 0x1755F
{
	return Global_262145.f_10687;
}

int func_623()//Position - 0x1756E
{
	return Global_262145.f_10334;
}

int func_624()//Position - 0x1757D
{
	return Global_262145.f_10333;
}

float func_625(int iParam0)//Position - 0x1758C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10346;
		
		case 1:
			return Global_262145.f_10347;
		
		case 2:
			return Global_262145.f_10348;
		
		default:
	}
	return 0f;
}

int func_626(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x175CC
{
	if (func_31(unk_0x9EB17624F44A8DA4(), 0) || func_385(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (func_30(unk_0x9EB17624F44A8DA4()) || func_307(unk_0x9EB17624F44A8DA4()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x8AB67E33BD002BAC() < iParam0)
	{
		if (bParam2)
		{
			func_628(sParam3, sParam4, 1);
		}
		if (func_238(26, -1))
		{
			func_264(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1574409.f_18)))
	{
		if (!func_5(&(Global_1574409.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1574409.f_18));
	}
	if (func_627())
	{
		if (bParam2)
		{
			func_628(sParam3, sParam4, 0);
		}
		if (func_238(26, -1))
		{
			func_264(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x5C6098C2BAD00378() < iParam0)
	{
		if (bParam2)
		{
			func_628(sParam3, sParam4, 1);
		}
		if (func_238(26, -1))
		{
			func_264(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_627()//Position - 0x176C3
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 0);
}

void func_628(char* sParam0, char* sParam1, bool bParam2)//Position - 0x176D6
{
	if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 2) && !func_206(unk_0x9EB17624F44A8DA4())) && !func_232(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xAB019B170BF1309C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_183(66, sParam0, sParam1, 1, -1, 2);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 2);
	}
}

int func_629()//Position - 0x1774E
{
	return Local_98.f_1;
}

void func_630()//Position - 0x1775A
{
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 6))
	{
		func_649();
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 6);
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 7))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) || unk_0xC80D31E4B587871C(Global_1574409.f_1, 16))
		{
			if (((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_216()) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 7);
				func_215("FME_PASINT", 30000);
				func_214(1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 17))
		{
			if (func_123() && !func_122())
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 23))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0xF491DD47B88AA84E())
		{
			if (func_647())
			{
				func_215("AMEV_GA_RP", -1);
				if (func_102(unk_0x9EB17624F44A8DA4()) != 200)
				{
					func_214(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 23);
			}
		}
	}
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_199(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 9))
	{
		if ((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_216()) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1)) && !func_121(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 9);
			func_646(0);
			func_215("FME_TBL00", -1);
			func_214(1);
		}
	}
	if (func_308(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if ((func_121(unk_0x9EB17624F44A8DA4(), 21) && unk_0xC80D31E4B587871C(Global_1574409.f_1, 20)) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 19))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 18);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if (((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_216()) && func_717(unk_0x9EB17624F44A8DA4(), 1, 1)) && unk_0x9F7B586A14398C40()) && !Global_2512808.f_4789)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 18);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 19);
				func_215("AMTT_RPAS", -1);
				func_214(1);
			}
		}
	}
	if (((((func_308(unk_0x9EB17624F44A8DA4()) && !func_206(unk_0x9EB17624F44A8DA4())) && func_228(unk_0x9EB17624F44A8DA4()) != 146) && !func_232(unk_0x9EB17624F44A8DA4())) && !func_120(unk_0x9EB17624F44A8DA4())) && !func_640())
	{
		if (func_198(func_228(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
		}
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 22))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 22);
		}
		if (func_300(unk_0x9EB17624F44A8DA4()) || func_189())
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 10))
			{
				if (func_638(func_228(unk_0x9EB17624F44A8DA4())))
				{
					if (func_193(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_196(1);
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 10);
			}
		}
		if (func_199(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 11))
			{
				if (!Global_92885.f_8)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
					func_191(1);
				}
				if (!func_637())
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 13);
					func_190();
				}
				if (!Global_2391045)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					if (func_193(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					func_196(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 11);
			}
		}
		else
		{
			func_635(0);
		}
	}
	else
	{
		func_635(1);
	}
	func_631();
	if (func_188(func_228(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
	}
	if ((func_123() && !func_122()) || func_121(unk_0x9EB17624F44A8DA4(), 21))
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
	}
}

void func_631()//Position - 0x17C7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_216())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_182(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 26);
				}
				func_632(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
	{
		func_3(&(Global_1574409.f_22));
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 26);
	}
}

void func_632(int iParam0, int iParam1)//Position - 0x17D1D
{
	if (!func_18(&(Global_1574409.f_22)))
	{
		func_11(&(Global_1574409.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574409.f_22), iParam1, 0))
	{
		if (func_442() > 0)
		{
			func_211(iParam0);
			if (func_213("AMEV_LBD_HELP"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_3(&(Global_1574409.f_22));
		}
	}
	else
	{
		func_634(0);
		func_633();
	}
}

void func_633()//Position - 0x17D86
{
	Global_2512808.f_4500 = 0;
}

void func_634(int iParam0)//Position - 0x17D96
{
	Global_1357530.f_68 = iParam0;
}

void func_635(int iParam0)//Position - 0x17DA6
{
	if ((unk_0xC80D31E4B587871C(Global_1574409.f_1, 11) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 10) && iParam0)) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 22) && iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 12))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 12);
			func_191(0);
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 13);
			func_636();
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_31(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 14);
			func_196(0);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 11);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 22);
	}
}

void func_636()//Position - 0x17E81
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4694), 0);
}

bool func_637()//Position - 0x17E95
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4694, 0);
}

int func_638(int iParam0)//Position - 0x17EA9
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_199(unk_0x9EB17624F44A8DA4());
		
		case 133:
			return (func_189() || func_639(func_138()));
		
		default:
	}
	return 0;
}

int func_639(int iParam0)//Position - 0x17F19
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_640()//Position - 0x17F51
{
	if (((((((((func_287() || func_286()) || func_285()) || func_130()) || (func_282() && !unk_0x4916190900E76373())) || (func_643() && !func_642())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_641() == 2 && !unk_0x4916190900E76373()))
	{
		return 1;
	}
	return 0;
}

int func_641()//Position - 0x17FE5
{
	return Global_979886;
}

bool func_642()//Position - 0x17FF1
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 27);
}

int func_643()//Position - 0x18007
{
	if (func_645() || func_644())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_644()//Position - 0x18034
{
	return Global_2447174.f_622;
}

bool func_645()//Position - 0x18043
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

void func_646(int iParam0)//Position - 0x18057
{
	int iVar0;
	
	iVar0 = func_194(2523, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 0))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 0);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 1))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 2))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 3))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 4))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 4);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 5))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 6))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 6);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 7))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 7);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 8))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 9))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 9);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 10))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 10);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 11))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 11);
		}
	}
	func_242(2523, iVar0, -1, 1, 0);
}

int func_647()//Position - 0x1818F
{
	int iVar0;
	
	if (!func_18(&(Global_1574409.f_15)))
	{
		func_11(&(Global_1574409.f_15), 0, 0);
		Global_1574409.f_17 = 0;
	}
	else if (func_5(&(Global_1574409.f_15), 1000, 0))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17)))
		{
			iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17));
			if (unk_0x552F39AE86E07792(iVar0))
			{
				if (func_717(iVar0, 1, 1) && func_648(iVar0, 6))
				{
					if (system::vdist(func_572(unk_0x9EB17624F44A8DA4()), func_572(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574409.f_17++;
		if (Global_1574409.f_17 >= 32)
		{
			Global_1574409.f_17 = 0;
			func_3(&(Global_1574409.f_15));
		}
	}
	return 0;
}

int func_648(int iParam0, int iParam1)//Position - 0x18257
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_565(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1595693[iVar0 /*680*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_649()//Position - 0x18290
{
	unk_0xC0EBC1452FCAB15C(5);
	func_324();
	unk_0x94BD6F0436473406(1f);
	unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 8);
	func_650();
}

void func_650()//Position - 0x182B6
{
	if (Global_1665283)
	{
		if (unk_0xC80D31E4B587871C(Global_1665284, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 1))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 1);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 5))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 5);
		}
		if (unk_0x546F10CBA6C484DA(-355737150))
		{
			unk_0xB94AAB49E0BB01DB(-355737150, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-580979506))
		{
			unk_0xB94AAB49E0BB01DB(-580979506, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1426452475))
		{
			unk_0xB94AAB49E0BB01DB(-1426452475, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(745417724))
		{
			unk_0xB94AAB49E0BB01DB(745417724, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1305304906))
		{
			unk_0xB94AAB49E0BB01DB(-1305304906, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1543175077))
		{
			unk_0xB94AAB49E0BB01DB(-1543175077, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-811770997))
		{
			unk_0xB94AAB49E0BB01DB(-811770997, 1, 0, 0);
		}
		Global_1665284 = 0;
	}
	Global_1665283 = 0;
}

var func_651()//Position - 0x183B6
{
	if (unk_0x6ADD12BF4D6D2587(func_652()))
	{
		return func_652();
	}
	return func_174();
}

var func_652()//Position - 0x183D4
{
	return Global_2359302.f_3;
}

bool func_653()//Position - 0x183E2
{
	return unk_0xC80D31E4B587871C(Global_2359302, 11);
}

bool func_654()//Position - 0x183F4
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

int func_655(int iParam0)//Position - 0x18405
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_656())
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

bool func_656()//Position - 0x18447
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_657()//Position - 0x18458
{
	return Global_1574409.f_24;
}

int func_658()//Position - 0x18466
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2512808.f_4691)
	{
		return 0;
	}
	iVar2 = unk_0xEBD55014C579F626();
	if (func_18(&(Local_98.f_1.f_1)))
	{
		iVar0 = func_659(&iVar2, &(Local_98.f_1.f_1));
		iVar1 = Global_262145.f_10529;
	}
	else if (func_18(&(Local_98.f_1.f_3)))
	{
		iVar0 = func_659(&iVar2, &(Local_98.f_1.f_3));
		iVar1 = Global_262145.f_10530;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_659(int iParam0, var uParam1)//Position - 0x184E9
{
	return unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*iParam0, *uParam1));
}

bool func_660(int iParam0)//Position - 0x184FF
{
	return !func_661(iParam0);
}

int func_661(int iParam0)//Position - 0x1850E
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6051)
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6052)
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6053)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6054)
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 0) || unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_662(4))
			{
				return 0;
			}
			if (func_121(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_662(int iParam0)//Position - 0x1886C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_717(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_2422736[iVar0 /*420*/].f_223, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_663()//Position - 0x188B2
{
	var uVar0;
	
	func_667(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_666())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_665())
	{
		return 1;
	}
	if (func_664(157))
	{
		if (!func_287())
		{
			return 1;
		}
	}
	if (func_664(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_201() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_201()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_664(int iParam0)//Position - 0x1893C
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_665()//Position - 0x18953
{
	return Global_2456830;
}

bool func_666()//Position - 0x1895F
{
	return Global_2447174.f_581;
}

void func_667(var uParam0)//Position - 0x1896E
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
					func_668(iVar0);
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

void func_668(int iParam0)//Position - 0x189E1
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_717(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_669(iVar2, &bVar3))
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

int func_669(int iParam0, var uParam1)//Position - 0x18A62
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

void func_670()//Position - 0x18AC1
{
	system::wait(0);
}

void func_671()//Position - 0x18ACE
{
	int iVar0;
	
	func_181();
	func_701(141);
	func_681(141, 0, unk_0xC80D31E4B587871C(iLocal_103, 5));
	func_272();
	func_217(0);
	if (unk_0xC80D31E4B587871C(iLocal_103, 16))
	{
		unk_0xE02E32C69260FBB7("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x0EE72DB1CD8A3B86(&iLocal_103, 16);
	}
	unk_0x94BD6F0436473406(1f);
	func_77();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_678(iVar0);
		iVar0++;
	}
	func_319();
	func_676();
	func_675(0);
	func_210(29, 0);
	if (func_663())
	{
		Local_99.f_5 = 5;
	}
	else if (unk_0xC80D31E4B587871C(iLocal_103, 24))
	{
		Local_99.f_5 = 6;
	}
	else if (Local_99.f_5 != 1)
	{
		Local_99.f_5 = 2;
	}
	Local_99 = Local_98.f_214;
	Local_99.f_1 = Local_98.f_215;
	Local_99.f_4 = Local_98.f_216;
	Local_99.f_3 = iLocal_105;
	Local_99.f_10 = (unk_0xE3CCAFB1555348DF() - Local_99.f_9);
	if (!Global_262145.f_10745)
	{
		if (Local_99.f_6 > 0)
		{
			if (Local_99.f_5 == 1)
			{
				func_674();
			}
		}
	}
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		func_673(Local_99, iLocal_101, iLocal_657, iLocal_656, func_74(func_132(0, unk_0x622FF3AE4B1D07C3())), -1, -1);
	}
	func_672();
}

void func_672()//Position - 0x18BFD
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_673(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)//Position - 0x18C09
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0x436287B7DB306165();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70856)
	{
		if (unk_0x74C475EB8E73D398(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0xF5313B601E24BF7B(&Var1);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "freemode"))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			unk_0xC14C67D924E1E69C(&Var2);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = uParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0xC4D3EEED6C3F8ADA(&Var3);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = system::to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0xC974B07411EB8324(&Var4);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_penned_in"))
		{
			unk_0x297070538A176AF4(&Param0);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0xA34510BC030C442D(&Var5);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x0010AF0738AEEA04(&Var6);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0xEC67EBB574994291(&Var7);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = uParam4;
			unk_0x1EA7DB32B287B5E7(&Var8);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0x0BE67F6CCA3921AB(&Var9);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x0F1BB63E018B9385(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0x3B0F813F59E79370(&Var11);
			}
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x6E89CDB65828F219(&Var12);
		}
	}
}

void func_674()//Position - 0x18E7E
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 18);
}

void func_675(bool bParam0)//Position - 0x18E93
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_1709, 9))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 9);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2512808.f_1709, 9))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1709), 9);
	}
}

void func_676()//Position - 0x18EDE
{
	if (Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
	{
		func_677();
	}
}

void func_677()//Position - 0x18EF7
{
	struct<28> Var0;
	
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413426 = { Var0 };
	Global_2413426.f_6 = -1;
}

void func_678(int iParam0)//Position - 0x18F54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_680(iParam0))
	{
		func_679(iVar0);
		iVar0++;
	}
	func_319();
	func_676();
	func_328(func_329(iParam0), 0, 0);
}

void func_679(int iParam0)//Position - 0x18F8D
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2405047.f_361[iParam0 /*12*/].f_9)
		{
			Global_2405047.f_361[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_680(int iParam0)//Position - 0x18FCF
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_681(int iParam0, bool bParam1, bool bParam2)//Position - 0x1902F
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 13);
		}
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 14))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 14);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 21);
	}
	func_697();
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
	unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_696(func_228(unk_0x9EB17624F44A8DA4()));
		func_210(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x9EB17624F44A8DA4() != -1) && func_695(unk_0x9EB17624F44A8DA4()) >= 12)
		{
			func_694(2535, -1);
			iVar1 = func_194(2535, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 5);
			}
		}
		func_693();
		func_692();
		func_691();
		if ((!func_30(unk_0x9EB17624F44A8DA4()) && !func_28(unk_0x9EB17624F44A8DA4())) && !func_103())
		{
			func_315();
		}
		func_690();
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 0) && !unk_0xC80D31E4B587871C(Global_1667858.f_3, 1))
		{
			func_649();
		}
		func_689();
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1717), 2);
		func_688();
		func_687();
	}
	if (unk_0x6D93C18E2EF22A46(1344549371))
	{
		unk_0x4C5AB0B8B9B71C4B(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x9EB17624F44A8DA4() != -1 && !func_121(unk_0x9EB17624F44A8DA4(), 21)) && !func_31(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_196(0);
			func_191(0);
			func_686();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_238(26, -1))
		{
			Global_2458997 = -1;
			func_264(26, -1);
		}
	}
	if (!func_682())
	{
		Global_2492048 = 1;
	}
}

int func_682()//Position - 0x19281
{
	if (((((!func_424(unk_0x9EB17624F44A8DA4()) && !func_405(unk_0x9EB17624F44A8DA4())) && func_228(unk_0x9EB17624F44A8DA4()) != 146) && !func_685()) && !func_684()) && !func_683(Global_4456448.f_143970))
	{
		return 0;
	}
	return 1;
}

bool func_683(int iParam0)//Position - 0x192E3
{
	return iParam0 == 57;
}

int func_684()//Position - 0x192F0
{
	if (Global_4456448.f_122309 == Global_262145.f_8940)
	{
		return 1;
	}
	return 0;
}

int func_685()//Position - 0x19311
{
	if ((Global_4456448 == 0 && unk_0x4916190900E76373()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_143970 > 0) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 15)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 18)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 19)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 29)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 28)) || unk_0xC80D31E4B587871C(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_686()//Position - 0x193BB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_687()//Position - 0x19411
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = 0;
}

void func_688()//Position - 0x19427
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 1);
	}
	if (Global_2512808.f_4693 > 0)
	{
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_KILL");
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
		unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x22456E02F195550C(1);
		Global_2512808.f_4693 = 0;
		unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
		unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
		if (!unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "am_pi_menu"))
		{
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
		}
	}
}

void func_689()//Position - 0x194C5
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574409 = { Var0 };
}

void func_690()//Position - 0x194F4
{
	var uVar0;
	
	Global_1316732 = uVar0;
}

void func_691()//Position - 0x19502
{
	Global_2512808.f_4694 = 0;
}

void func_692()//Position - 0x19512
{
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1 = 0;
	}
}

void func_693()//Position - 0x19530
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (iVar0 != -1)
	{
		Global_1627537[iVar0 /*532*/] = -1;
	}
}

void func_694(int iParam0, int iParam1)//Position - 0x1954E
{
	int iVar0;
	
	iVar0 = func_194(iParam0, func_195(iParam1), 0);
	iVar0++;
	if (!func_243(iParam0))
	{
		func_242(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_241(iParam0, iVar0, iParam1, 1);
	}
}

int func_695(int iParam0)//Position - 0x1958F
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_696(int iParam0)//Position - 0x195A4
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_199(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_697()//Position - 0x19606
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3) || unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x59C3AC31C7544A28(800);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 5);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 3);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 4);
	}
	func_700(0);
	func_699(0);
	func_698(0);
}

void func_698(int iParam0)//Position - 0x196A7
{
	if (Global_2512808.f_4488 != iParam0)
	{
		Global_2512808.f_4488 = iParam0;
	}
}

void func_699(bool bParam0)//Position - 0x196C4
{
	if (Global_2512808.f_4487 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2512808.f_4487 = bParam0;
	}
}

void func_700(int iParam0)//Position - 0x196E9
{
	if (Global_2512808.f_4485 != iParam0)
	{
		Global_2512808.f_4485 = iParam0;
	}
}

void func_701(int iParam0)//Position - 0x19706
{
	if (iParam0 == iParam0)
	{
	}
}

void func_702(struct<21> Param0)//Position - 0x19715
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_716(Param0);
	func_715(iVar3, Param0);
	func_714(0, -1, 0);
	func_712(141);
	unk_0x6E3ED3AE1C20445F(&Local_98, 284);
	unk_0xE7BC983D1386C9EE(&Local_102, 161);
	if (!func_711())
	{
		func_671();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x941BE77305BB5695(0);
		func_210(29, 1);
		if (unk_0x8E1421E2A2A2FBD4())
		{
			iVar0 = func_707();
			func_704(func_706(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_703(iVar1, iVar0);
				iVar1++;
			}
			unk_0x29723B8B6E11E8F2(&(Local_98.f_214), &(Local_98.f_215));
		}
		Local_99.f_2 = unk_0x8AB67E33BD002BAC();
		Local_99.f_9 = unk_0xE3CCAFB1555348DF();
		Local_99.f_8 = unk_0xE3CCAFB1555348DF();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_98.f_250[iVar2] = -1;
			iVar2++;
		}
		func_472(0);
	}
	else
	{
		func_671();
	}
}

void func_703(int iParam0, int iParam1)//Position - 0x197F4
{
	Local_98.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_704(int iParam0)//Position - 0x19808
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1107039707;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = iParam0;
	iVar1 = func_705(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &vVar0, 3, iVar1);
	}
}

var func_705(int iParam0, bool bParam1)//Position - 0x19842
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_717(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_706(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x198A7
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

var func_707()//Position - 0x1A106
{
	int iVar0;
	int iVar1[8];
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		if (func_710(iVar2) && !func_708(141, iVar2, 0, 0))
		{
			iVar1[iVar0] = iVar2;
			iVar0++;
		}
		iVar2++;
	}
	uVar3 = iVar1[unk_0x63A6486593EC7EC3(0, iVar0)];
	return uVar3;
}

int func_708(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1A15C
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return 0;
		
		default:
	}
	iVar1 = func_709(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_7501)
		{
			if (Global_2486819.f_124[iVar0 /*2*/] == iVar1 && Global_2486819.f_124[iVar0 /*2*/].f_1 == func_706(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_709(int iParam0)//Position - 0x1A1D5
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

int func_710(int iParam0)//Position - 0x1A25E
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_10535)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_10536)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_10537)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_10538)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_10539)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_10540)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_10541)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_10542)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_711()//Position - 0x1A326
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
		if (func_666())
		{
			return 0;
		}
		if (func_664(155))
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

void func_712(int iParam0)//Position - 0x1A37F
{
	func_689();
	func_713();
	func_691();
	Global_1574409.f_4 = iParam0;
	Global_1574409.f_5 = iParam0;
	func_207(iParam0, -1);
	func_227(&(Global_1574409.f_18), 0, 0);
	Global_2512808.f_4553 = 0;
	Global_2457893[0] = func_27();
	Global_2457893[1] = func_27();
	Global_2457893[2] = func_27();
	Global_2457893[3] = func_27();
	Global_2457893[4] = func_27();
	func_687();
	if (!func_297(func_298()))
	{
		func_396();
	}
	if (func_123() && !func_122())
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 17);
	}
}

void func_713()//Position - 0x1A435
{
	var uVar0;
	
	Global_1574434 = uVar0;
}

int func_714(int iParam0, int iParam1, bool bParam2)//Position - 0x1A443
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_672();
			}
			else
			{
				return 0;
			}
		}
		if (!func_257())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_672();
					}
					else
					{
						return 0;
					}
				}
				if (func_666())
				{
					if (!bParam2)
					{
						func_672();
					}
					else
					{
						return 0;
					}
				}
				if (func_664(155))
				{
					if (!bParam2)
					{
						func_672();
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
					func_672();
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
				func_672();
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
			func_672();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_715(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1A558
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_672();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_716(int iParam0)//Position - 0x1A577
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_717(int iParam0, bool bParam1, bool bParam2)//Position - 0x1AB94
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

