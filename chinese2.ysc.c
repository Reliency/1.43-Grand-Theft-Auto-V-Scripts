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
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_130[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	vector3 vLocal_142[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	vector3 vLocal_172 = { 0f, 0f, 0f };
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	vector3 vLocal_384[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	vector3 vLocal_391[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_392 = 0;
	vector3 vLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	vector3 vLocal_397 = { 0f, 0f, 0f };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
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
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = unk_0x5354F72E0D8D7E53();
	iLocal_50 = unk_0x526A9A6B1B39C5F0();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_75 = true;
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0,5f;
	fLocal_97 = 0f;
	iLocal_103 = 1;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = -1;
	iLocal_379 = -1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_435();
		func_434(2);
	}
	fLocal_110 = 160f;
	while (true)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			func_129();
			func_127();
			if (iLocal_149 >= 7)
			{
				func_119();
			}
			func_117();
			func_78();
			func_3();
			func_2();
			func_1();
			unk_0x48D75120C879E65E("m_Chinese2", 0);
		}
		iLocal_574 = 0;
		system::wait(0);
	}
}

void func_1()//Position - 0x11D
{
	if (iLocal_402)
	{
		if (unk_0x1A595E6882473810(iLocal_401))
		{
			unk_0xFF9ADA7B95619F7E(iLocal_401);
			iLocal_402 = 0;
		}
	}
}

int func_2()//Position - 0x140
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (unk_0xAAB7D68F04F8C8BA(sLocal_406))
			{
				if (unk_0x8810DC630928B398(sLocal_406))
				{
					iLocal_403 = 0;
					iLocal_404 = 0;
					return 1;
				}
			}
		}
		else if (unk_0x8810DC630928B398(sLocal_406))
		{
			iLocal_403 = 0;
			return 1;
		}
	}
	else if (iLocal_405)
	{
		if (unk_0xAAB7D68F04F8C8BA(sLocal_407))
		{
			iLocal_405 = 0;
		}
	}
	return 0;
}

void func_3()//Position - 0x1A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (unk_0xA8113D347D14630F())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_69(1992,804f, 3053,31f, 45,77715f, 1989,681f, 3055,295f, 49,09001f, 3,25f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1994,427f, 3045,136f, 45,34013f, 1981,903f, 3053,235f, 49,79153f, 9,5f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1985,404f, 3075,057f, 44,84953f, 2017,102f, 3057,435f, 53,71896f, 33f, 1995,202f, 3062,156f, 46,0491f, 59,7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_144 = unk_0xC733212BF9066BDF();
							if (func_68(iLocal_144) && func_67(iLocal_144, 1995,202f, 3062,156f, 46,0491f, 1) < 5f)
							{
								unk_0x25468B15C0A526A9(unk_0x82FF3DFBC3965CC0(iLocal_144), 3);
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							func_66();
							func_64();
							break;
						
						case 0:
							if (func_67(unk_0xFC1458A37D98B502(), 2442,55f, 4967,51f, 54,35f, 1) < 1300f || func_63(39))
							{
								if (func_67(unk_0xFC1458A37D98B502(), 2442,55f, 4967,51f, 54,35f, 1) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, unk_0xFC1458A37D98B502(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_59())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_153[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0;
							Local_153[iVar0 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 3000;
							break;
						
						case 1:
							if (!func_59())
							{
								if (!func_34())
								{
									if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										if (unk_0x53C562FD2B9E3AB0() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 13)
											{
												if (func_35("DRI1", 2, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 10000));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (!unk_0x0ACC2116170FA204(iVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -20:
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2460,073f, 4964,176f, 46,2405f, true) < 250f)
							{
								unk_0x6FF834D85E2DD4C6(joaat("a_m_m_hillbilly_01"));
								unk_0x6FF834D85E2DD4C6(-1853453107);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_hillbilly_01")) && unk_0x9A0B2ED5055D3F0B(-1853453107))
							{
								unk_0x6FF834D85E2DD4C6(joaat("a_m_m_hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_hillbilly_02")))
							{
								unk_0x6FF834D85E2DD4C6(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0x9A0B2ED5055D3F0B(joaat("burrito")))
							{
								unk_0x6FF834D85E2DD4C6(joaat("a_m_y_methhead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_methhead_01")))
							{
								unk_0x6FF834D85E2DD4C6(joaat("prop_ld_can_01"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_cs_fertilizer"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_cs_beer_bot_01"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_phone_ing"));
								unk_0x6FF834D85E2DD4C6(joaat("dubsta"));
								unk_0x6450931B826B49D9("misschinese2_bank5");
								unk_0x6450931B826B49D9("misschinese2_bank1");
								unk_0x6450931B826B49D9("reaction@male_stand@big_variations@b");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@left");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@right");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@backward");
								unk_0x6450931B826B49D9("misschinese2_barrelRoll");
								unk_0x13A127961044F71B("move_m@gangster@var_e");
								unk_0x13A127961044F71B("move_m@gangster@var_f");
								unk_0x13A127961044F71B("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0x9A0B2ED5055D3F0B(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0xBF98CCF1EA4B13E9(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2460,073f, 4964,176f, 46,2405f, true) < 250f)
							{
								unk_0x6FF834D85E2DD4C6(joaat("a_m_m_hillbilly_01"));
								unk_0x6FF834D85E2DD4C6(joaat("a_m_m_hillbilly_02"));
								unk_0x6FF834D85E2DD4C6(joaat("a_m_y_methhead_01"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_ld_can_01"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_cs_fertilizer"));
								unk_0x6FF834D85E2DD4C6(joaat("burrito"));
								unk_0x6FF834D85E2DD4C6(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 3)
								{
									unk_0x6FF834D85E2DD4C6(joaat("prop_phone_ing"));
									unk_0x6FF834D85E2DD4C6(joaat("dubsta"));
								}
								unk_0x6450931B826B49D9("misschinese2_bank5");
								unk_0x6450931B826B49D9("misschinese2_bank1");
								unk_0x6450931B826B49D9("reaction@male_stand@big_variations@b");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@left");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@right");
								unk_0x6450931B826B49D9("reaction@male_stand@big_intro@backward");
								unk_0x6450931B826B49D9("misschinese2_barrelRoll");
								unk_0x13A127961044F71B("move_m@gangster@var_e");
								unk_0x13A127961044F71B("move_m@gangster@var_f");
								unk_0x13A127961044F71B("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0xBF98CCF1EA4B13E9(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_hillbilly_01")) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_hillbilly_02"))) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_methhead_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("burrito"))) && unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_fertilizer"))) && unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_beer_bot_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_can_01"))) && unk_0x3A801AA34DD821BE("misschinese2_bank5")) && unk_0x3A801AA34DD821BE("misschinese2_bank1")) && unk_0x3A801AA34DD821BE("misschinese2_barrelRoll")) && unk_0x3A801AA34DD821BE("reaction@male_stand@big_variations@b")) && unk_0x3A801AA34DD821BE("reaction@male_stand@big_intro@left")) && unk_0x3A801AA34DD821BE("reaction@male_stand@big_intro@right")) && unk_0x3A801AA34DD821BE("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 3 && unk_0x9A0B2ED5055D3F0B(joaat("prop_phone_ing"))) || iLocal_149 > 3)) && ((iLocal_149 <= 3 && unk_0x9A0B2ED5055D3F0B(joaat("dubsta"))) || iLocal_149 > 3))
							{
								Local_153[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2460,073f, 4964,176f, 46,2405f, true) > 300f)
							{
								unk_0x14776E43F90DD454(joaat("a_m_m_hillbilly_01"));
								unk_0x14776E43F90DD454(joaat("a_m_m_hillbilly_02"));
								unk_0x14776E43F90DD454(joaat("a_m_y_methhead_01"));
								unk_0x14776E43F90DD454(joaat("burrito"));
								unk_0x14776E43F90DD454(joaat("prop_cs_fertilizer"));
								unk_0x14776E43F90DD454(joaat("prop_cs_beer_bot_01"));
								unk_0x14776E43F90DD454(joaat("prop_ld_can_01"));
								unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
								unk_0xFCCDDE0E48CF9588("misschinese2_bank1");
								unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_variations@b");
								unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@left");
								unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@right");
								unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@backward");
								unk_0xFCCDDE0E48CF9588("misschinese2_barrelRoll");
								unk_0x2682425A18AA99E9("move_m@gangster@var_e");
								unk_0x2682425A18AA99E9("move_m@gangster@var_f");
								unk_0x2682425A18AA99E9("move_m@gangster@generic");
								unk_0x14776E43F90DD454(joaat("prop_phone_ing"));
								unk_0x14776E43F90DD454(joaat("dubsta"));
								unk_0xBF98CCF1EA4B13E9(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_179 != 0)
								{
									unk_0xA1451353A1AED1A5(iLocal_179);
									iLocal_179 = 0;
								}
								Local_153[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2460,073f, 4964,176f, 46,2405f, true) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_149 >= 3 && !func_30(22))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_179 != 0)
							{
								unk_0xA1451353A1AED1A5(iLocal_179);
							}
							iLocal_179 = 0;
							break;
						
						case 0:
							iLocal_179 = unk_0xD3BB1A515B0A47F3(2440,492f, 4969,948f, 52,5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x2C2E1E35924B9FF2(iLocal_179))
							{
								iLocal_179 = unk_0xD3BB1A515B0A47F3(2440,492f, 4969,948f, 52,5247f);
							}
							else
							{
								unk_0xFF9ADA7B95619F7E(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_153[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar2 /*33*/]))
							{
								if (unk_0x78F50AA8F955BEFC(Local_113[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar2 /*33*/]))
										{
											if (unk_0x78F50AA8F955BEFC(Local_113[iVar2 /*33*/], 1785177548) == 7)
											{
												unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar2 /*33*/]))
									{
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar2 /*33*/], 1785177548) == 7)
										{
											unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x3CDDC4760DBA4651();
							break;
						
						case 0:
							unk_0xCB389937EDB1519A(Vector(58,6179f, 4972,897f, 2445,654f) - Vector(100f, 100f, 100f), Vector(58,6179f, 4972,897f, 2445,654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 2473,061f, 4981,482f, 24,64584f, true) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0x72CB9F3FA10C599B(0f);
							unk_0xAD6F3DFB1F960182(0f);
							unk_0xC39DDDC969581586(0f, 0f);
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 2473,061f, 4981,482f, 24,64584f, true) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x1D29C781A978C4FB(3, 1);
							unk_0x1D29C781A978C4FB(5, 1);
							unk_0x1D29C781A978C4FB(1, 1);
							unk_0x1D29C781A978C4FB(7, 1);
							break;
						
						case 0:
							if (func_67(unk_0xFC1458A37D98B502(), 2578,523f, 4982,284f, 51,4416f, 1) < 500f)
							{
								unk_0x1D29C781A978C4FB(3, 0);
								unk_0x1D29C781A978C4FB(5, 0);
								unk_0x1D29C781A978C4FB(1, 0);
								unk_0x1D29C781A978C4FB(7, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_67(unk_0xFC1458A37D98B502(), 2578,523f, 4982,284f, 51,4416f, 1) > 500f)
							{
								unk_0x1D29C781A978C4FB(3, 1);
								unk_0x1D29C781A978C4FB(5, 1);
								unk_0x1D29C781A978C4FB(1, 1);
								unk_0x1D29C781A978C4FB(7, 1);
								Local_153[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0xFC1458A37D98B502(), 149);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								iVar3 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_153[iVar0 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_153[iVar0 /*6*/].f_5)
							{
								unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2466,385f, 4953,096f, 44,1228f, 1, 0, 0, 1);
								unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 221f);
								unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), 2475,075f, 4945,965f, 44,0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0x8028488F650E6677("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0x4929A4FD75F576BD();
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_173 = unk_0x0B4BABF632AE674E(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
							if (unk_0xCA61C7E425DAB6B3(uLocal_173))
							{
								unk_0xD0C906ABF8DD7B95(uLocal_173, 2);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x20D62902F28677D2(uLocal_173) == 3)
							{
								unk_0xD0C906ABF8DD7B95(uLocal_173, 4);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_174 == 1)
							{
								if (unk_0x20D62902F28677D2(uLocal_173) == 5)
								{
									unk_0xD0C906ABF8DD7B95(uLocal_173, 6);
									unk_0xE859EF37EA7362D3("CHI_2_RAYFIRE");
									unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 965837842, 1);
									unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 247384786, 1);
									unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, -247908770, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_153[iVar0 /*6*/].f_2 != -1)
					{
						if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0) || !unk_0xB8B3E5529EDB87D4(uLocal_176))
						{
							iLocal_180 = unk_0xCBD07018689DF383(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 20f, unk_0xD50D486F1F311BFC(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_180 != 0)
							{
								if (unk_0xA6DECE14FC9A8C51(iLocal_178))
								{
									unk_0xE30CF11C0EE14316(&iLocal_178);
								}
								iLocal_178 = func_13(iLocal_180);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (unk_0xA6DECE14FC9A8C51(iLocal_178))
							{
								unk_0xE30CF11C0EE14316(&iLocal_178);
							}
							func_10(157, 0);
							if (iLocal_167 == 0)
							{
								iLocal_167 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_167 - unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_153[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2447,671f, 4951,438f, 43,25576f, 2454,664f, 4957,856f, 47,89117f, 6,8125f, 0, 1, 0) && unk_0x53C562FD2B9E3AB0() > Local_153[iVar0 /*6*/].f_5)
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_178))
						{
							unk_0xE30CF11C0EE14316(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_59())
								{
									func_7("FRMSHP", 7500, 1);
									Local_153[iVar0 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 2000;
									iLocal_178 = func_5(2450f, 4954f, 45f, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 0))
					{
						iLocal_380 = func_18(4);
						if (iLocal_380 != -1)
						{
							unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_380 /*33*/]) && unk_0x6ADD12BF4D6D2587(Local_113[iLocal_380 /*33*/].f_20))
						{
							if (unk_0xA5F6598E13F98E08(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xDFFD5F8C8ABCB7EF(Local_113[iLocal_380 /*33*/].f_20))
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_380 /*33*/]))
						{
							unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_380 /*33*/]))
						{
							if (!unk_0xA5F6598E13F98E08(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x78F50AA8F955BEFC(Local_113[iLocal_380 /*33*/], -2017877118) == 2 || unk_0x78F50AA8F955BEFC(Local_113[iLocal_380 /*33*/], -2017877118) == 7)
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x7ED4D0E480A6EC43(Local_113[iLocal_380 /*33*/], unk_0xFC1458A37D98B502()) || Local_119[iLocal_380 /*24*/].f_3 > 3)
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0x6ADD12BF4D6D2587(Local_113[iLocal_380 /*33*/].f_20) && unk_0xDFFD5F8C8ABCB7EF(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0x6B7C10B19928914F(Local_113[iLocal_380 /*33*/].f_20, 0, 0);
					}
					if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 4))
					{
						iLocal_381 = func_18(5);
						if (iLocal_381 != -1)
						{
							unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_381 /*33*/]))
						{
							if (unk_0x6ADD12BF4D6D2587(Local_113[iLocal_381 /*33*/].f_20))
							{
								if (unk_0xA5F6598E13F98E08(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xDFFD5F8C8ABCB7EF(Local_113[iLocal_381 /*33*/].f_20))
									{
										unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_381 /*33*/]))
						{
							unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_381 /*33*/]))
						{
							if (!unk_0xA5F6598E13F98E08(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x78F50AA8F955BEFC(Local_113[iLocal_381 /*33*/], -2017877118) == 2 || unk_0x78F50AA8F955BEFC(Local_113[iLocal_381 /*33*/], -2017877118) == 7)
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x7ED4D0E480A6EC43(Local_113[iLocal_381 /*33*/], unk_0xFC1458A37D98B502()) || Local_119[iLocal_381 /*24*/].f_3 > 3)
							{
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0x6ADD12BF4D6D2587(Local_113[iLocal_381 /*33*/].f_20) && unk_0xDFFD5F8C8ABCB7EF(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0x6B7C10B19928914F(Local_113[iLocal_381 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_170[0] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,496f, 4970,916f, 44,5112f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[0], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[1] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,863f, 4970,595f, 44,5425f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[1], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[2] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,896f, 4970,417f, 44,5475f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[2], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[3] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,795f, 4970,246f, 44,5525f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[3], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[4] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,204f, 4970,269f, 44,5201f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[4], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[5] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,372f, 4970,744f, 44,51f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[5], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[6] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,372f, 4971,092f, 44,4987f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[6], -3,44f, 0f, 38,88f, 2, 1);
							iLocal_170[7] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2493,77f, 4971f, 44,6287f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[7], 3,955f, 0f, 139,68f, 2, 1);
							iLocal_170[8] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2493,98f, 4971,279f, 44,6038f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[8], 3,955f, 0f, 139,68f, 2, 1);
							iLocal_170[9] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_can_01"), 2494,104f, 4971,438f, 44,5826f, 1, true, 0);
							unk_0x59AF3B40AE222194(iLocal_170[9], 3,955f, 0f, 139,68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								unk_0x42B3DBD52AED7B7D(iLocal_170[iVar4], 1);
								unk_0xEDC33A771FAEB393(iLocal_170[iVar4], true);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0x6ADD12BF4D6D2587(iLocal_181) && !unk_0x6ADD12BF4D6D2587(iLocal_182))
							{
								if (unk_0x50126692B8A3590A(2493,5f, 4969,2f, 43,9f, 1f, -921781850, 0) && unk_0x50126692B8A3590A(2493,4f, 4971,8f, 43,6f, 1f, -1853453107, 0))
								{
									iLocal_181 = unk_0xCBD07018689DF383(2493,5f, 4969,2f, 43,9f, 1f, -921781850, 1, 0, 1);
									unk_0xEDC33A771FAEB393(iLocal_181, true);
									unk_0xA25B44929E552182(2493,4f, 4971,8f, 43,6f, 1f, -1853453107, 0);
									iLocal_182 = unk_0x5E35CF35E65D69B9(-1853453107, 2493,427f, 4971,729f, 43,54362f, 1, true, 0);
									unk_0x59AF3B40AE222194(iLocal_182, -1,436373f, 0,176147f, -36,6601f, 2, 1);
									unk_0xEDC33A771FAEB393(iLocal_182, true);
									func_32(24, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0x452336926718D62A(&iLocal_182);
								iLocal_182 = unk_0x5E35CF35E65D69B9(-1853453107, 2493,427f, 4971,729f, 43,54362f, 1, true, 0);
								unk_0x59AF3B40AE222194(iLocal_182, -1,436373f, 0,176147f, -36,6601f, 2, 1);
								unk_0xEDC33A771FAEB393(iLocal_182, true);
								func_32(24, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_170[iVar4]))
								{
									unk_0xEDC33A771FAEB393(iLocal_170[iVar4], false);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_181))
						{
							if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (unk_0xEBE499597C718EB8(iLocal_181, unk_0xFC1458A37D98B502(), 1) || func_4(unk_0xFC1458A37D98B502(), iLocal_181, 1) < 30f)
								{
									unk_0xEDC33A771FAEB393(iLocal_181, false);
									unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_182))
						{
							if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (unk_0xEBE499597C718EB8(iLocal_182, unk_0xFC1458A37D98B502(), 1) || func_4(unk_0xFC1458A37D98B502(), iLocal_182, 1) < 30f)
								{
									unk_0xEDC33A771FAEB393(iLocal_182, false);
									unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 0) && unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 1)) || iLocal_149 == 6)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_181))
						{
							unk_0xEDC33A771FAEB393(iLocal_181, false);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_182))
						{
							unk_0xEDC33A771FAEB393(iLocal_182, false);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0x6ADD12BF4D6D2587(Local_113[12 /*33*/]))
							{
								unk_0x68433819717660CF(&(Local_113[12 /*33*/]));
							}
							if (unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]))
							{
								unk_0x68433819717660CF(&(Local_113[13 /*33*/]));
							}
							if (unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]))
							{
								unk_0x68433819717660CF(&(Local_113[14 /*33*/]));
							}
							unk_0x14776E43F90DD454(joaat("ig_janet"));
							unk_0x14776E43F90DD454(joaat("ig_old_man1a"));
							unk_0x14776E43F90DD454(joaat("ig_old_man2"));
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0x6450931B826B49D9("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x3A801AA34DD821BE("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0x6F1392C5F51B32A4() || !unk_0xA8113D347D14630F())
								{
									if (unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]))
									{
										unk_0xBD8D47FDC6902B2D(Local_113[13 /*33*/], 1986,06f, 3051,708f, 46,2151f, 1, 0, 0, 1);
									}
									if (unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
									{
										unk_0xBD8D47FDC6902B2D(Local_113[14 /*33*/], 1986,105f, 3051,659f, 46,2151f, 1, 0, 0, 1);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0xD8F3F5A5912D9487(1984,89f, 3052,46f, 46,98f, 0,3f, 1) && unk_0xD8F3F5A5912D9487(1985,322f, 3053,087f, 46,98f, 0,3f, 1))
							{
								if (!unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]))
								{
									Local_113[13 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_old_man1a"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
								}
								if (!unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]))
								{
									Local_113[14 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_old_man2"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
								}
								if (!unk_0x6ADD12BF4D6D2587(Local_113[12 /*33*/]))
								{
									Local_113[12 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_janet"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
								}
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 1);
								unk_0xB6FD596C667F191F(Local_113[14 /*33*/], 1984,89f, 3052,46f, 46,98f, 0,3f, 0);
								unk_0x9A0C1F836B24E46E(Local_113[14 /*33*/], 1, 1);
								unk_0x771A86309E0CA47B(Local_113[14 /*33*/], 0);
								unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 0);
								unk_0xB6FD596C667F191F(Local_113[13 /*33*/], 1985,322f, 3053,087f, 46,98f, 0,3f, 0);
								unk_0x9A0C1F836B24E46E(Local_113[13 /*33*/], 1, 1);
								unk_0x771A86309E0CA47B(Local_113[13 /*33*/], 0);
								if (!unk_0xD56F740235B1E8F0(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = unk_0x8383F9C605E523B7(1987,231f, 3052,741f, 46,214f, 0f, 0f, 57,6f, 2);
									unk_0xD0E12C501EE26329(Local_153[iVar0 /*6*/].f_5, 1);
								}
								unk_0x8E628F774C748D93(Local_113[12 /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0x9A0C1F836B24E46E(Local_113[12 /*33*/], 1, 1);
								unk_0x771A86309E0CA47B(Local_113[12 /*33*/], 0);
								Local_153[iVar0 /*6*/].f_5 = 0;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0x6F1392C5F51B32A4() || !unk_0xA8113D347D14630F())
							{
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								unk_0xAE01EF4BC84AFE7C(Local_113[13 /*33*/], 152, true);
								unk_0xAE01EF4BC84AFE7C(Local_113[14 /*33*/], 152, true);
								if (unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 0) && unk_0xC80D31E4B587871C(Local_153[iVar0 /*6*/].f_5, 1))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0x78F50AA8F955BEFC(Local_113[13 /*33*/], 993674639) != 1)
									{
										if (unk_0xD8F3F5A5912D9487(1984,89f, 3052,46f, 46,98f, 0,3f, 1))
										{
											unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 0);
											unk_0xB6FD596C667F191F(Local_113[13 /*33*/], 1984,89f, 3052,46f, 46,98f, 0,3f, 0);
											unk_0x771A86309E0CA47B(Local_113[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 0);
									}
									if (unk_0x78F50AA8F955BEFC(Local_113[14 /*33*/], 993674639) != 1)
									{
										if (unk_0xD8F3F5A5912D9487(1985,322f, 3053,087f, 46,98f, 0,3f, 1))
										{
											unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 1);
											unk_0xB6FD596C667F191F(Local_113[14 /*33*/], 1985,322f, 3053,087f, 46,98f, 0,3f, 0);
											unk_0x771A86309E0CA47B(Local_113[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0x872F1C1F8587CCC7(&(Local_153[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_67(unk_0xFC1458A37D98B502(), 1991,419f, 3054,915f, 47,533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[12 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[12 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[12 /*33*/]));
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[13 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[13 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[13 /*33*/]));
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[14 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[14 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[14 /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_67(unk_0xFC1458A37D98B502(), 1991,419f, 3054,915f, 47,533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0x64182E6E09DAD5EC(2444,176f, 4974,077f, 56,4066f, 30f, 1194028902, 1);
					unk_0x64182E6E09DAD5EC(2444,176f, 4974,077f, 56,4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_153[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == -1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
				Local_153[iVar0 /*6*/].f_2 = 0;
				Local_153[iVar0 /*6*/].f_3 = 0;
				Local_153[iVar0 /*6*/].f_4 = 0;
				Local_153[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, bool bParam2)//Position - 0x2444
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

int func_5(vector3 vParam0, int iParam1)//Position - 0x24A2
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_6(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, iParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)//Position - 0x24CE
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)//Position - 0x24E5
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 0);
}

int func_8()//Position - 0x24FE
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)//Position - 0x2512
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

void func_10(int iParam0, bool bParam1)//Position - 0x25BC
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

void func_11(bool bParam0, int iParam1)//Position - 0x2606
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

void func_12(int iParam0)//Position - 0x26A0
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*5*/].f_3))
				{
					if (unk_0x94540F498465F1A2(Local_109[iVar0 /*5*/].f_3) < 255)
					{
						unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*5*/].f_3))
			{
				unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x312E513AE531074E(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0xA5D25D3F884FF516(Local_109[iVar0 /*5*/].f_3, 0,4f);
				unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 0);
				unk_0x0C71C8E276E3EC54(Local_109[iVar0 /*5*/].f_3, 5);
				unk_0x9C27373CC69ECF87(Local_109[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}

int func_13(int iParam0)//Position - 0x27B1
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x27C1
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_6(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_6(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_6(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)//Position - 0x2865
{
	iLocal_403 = 1;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

void func_16(int iParam0, int iParam1)//Position - 0x2880
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_17(int iParam0, int iParam1)//Position - 0x2892
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

int func_18(int iParam0)//Position - 0x28FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x292D
{
	if (iParam0 != 198)
	{
		if (Global_70856)
		{
			Global_2436181.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_104555.f_7231.f_227[iParam0] = iParam1;
		}
		Global_32828[iParam0] = iParam2;
		Global_33027[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)//Position - 0x2988
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x227E209A59DB1F6F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x227E209A59DB1F6F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x8DEB0F67766EF8D6("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x8DEB0F67766EF8D6("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x227E209A59DB1F6F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x227E209A59DB1F6F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x2FAF13FE5256740F("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)//Position - 0x2A71
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_103193, iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_103193, iParam0);
	}
	Global_103192 = 1;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2A9A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1646295 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_104555.f_7231.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2436181.f_75.f_227[iParam0];
	}
	iVar2 = Global_33226[iParam0];
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !bParam3)
	{
		Global_1646295 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != unk_0x8B948C59217A295D("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32828[iParam0] && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1646295 = 1;
				}
				if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || unk_0x12A8D89D51ADF8A6(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3E9CABD07B829173())
					{
						bVar5 = false;
						Global_1646295 = 1;
					}
				}
			}
		}
		if (unk_0x40189ECE75CF9724() && (!unk_0x1E06D00B67177A18() || unk_0x70522E2561AD22FE() != 5))
		{
			bVar5 = false;
			Global_1646295 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x143DCD09D82EE129(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xA25B44929E552182(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34422[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[1 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[2 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[0 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_34));
								Global_1646295 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_34));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_34));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES"))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34223[iParam0] = 1;
					Global_34422[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0xC0765AFBFA616644(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_50)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_50)))
							{
								unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES"))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x9CAF59533FADA559(iVar6);
						}
					}
					Global_34422[iParam0] = 1;
					Global_34223[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xBE3C4023003180FC(Var3, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), true) < 250f)
					{
						uVar4 = unk_0x0B4BABF632AE674E(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xCA61C7E425DAB6B3(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xD0C906ABF8DD7B95(uVar4, 3);
								Global_34422[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x20D62902F28677D2(uVar4) != 6 && unk_0x20D62902F28677D2(uVar4) != 7) && unk_0x20D62902F28677D2(uVar4) != 8)
								{
									unk_0xD0C906ABF8DD7B95(uVar4, 10);
									Global_34422[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x1D1553831CE3D9D2(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x0EE72DB1CD8A3B86(&(Global_32574[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x71B1398D26DE0463(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x872F1C1F8587CCC7(&(Global_32574[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33027[iParam0] = 0;
				Global_33226[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_33823[iParam0])
					{
						Global_33823[iParam0] = 1;
						Global_34022++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()//Position - 0x3402
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x3432
{
	return Global_25234;
}

int func_25()//Position - 0x343D
{
	return Global_25233;
}

int func_26(var uParam0, int iParam1)//Position - 0x3448
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

void func_27()//Position - 0x6C87
{
	int iVar0;
	
	func_32(27, 0);
	unk_0x247EAA2E93D4A021(2479,875f, 4980,868f, 44,82052f, 60f, 1, 0, 0, false);
	iLocal_145 = unk_0xEA60F3B426BB095B(joaat("burrito"), 2479,579f, 4980,503f, 44,8051f, 341,8158f, 1, 1, 0);
	unk_0x207466E78DA21033(iLocal_145, 1);
	unk_0xC7BF27112709A906(iLocal_145, 2);
	unk_0xACE486395AA1867D(iLocal_145, 1084227584);
	if (iLocal_149 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_149 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_149 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_149 == 7)
	{
		unk_0x6450931B826B49D9("DEAD");
		while (!unk_0x3A801AA34DD821BE("DEAD"))
		{
			func_28(323, 1);
		}
		Local_113[15 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), 2436,901f, 4959,1f, 45,8106f, 209,7559f, 1, true);
		unk_0x12C9D41D52A560D6(Local_113[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x9A0C1F836B24E46E(Local_113[15 /*33*/], 1, 0);
		unk_0xFC0DF15617416876(Local_113[15 /*33*/], 1);
		Local_113[16 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_01"), 2440,266f, 4970,705f, 45,8306f, 15,7982f, 1, true);
		unk_0x12C9D41D52A560D6(Local_113[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x9A0C1F836B24E46E(Local_113[16 /*33*/], 1, 0);
		unk_0xFC0DF15617416876(Local_113[16 /*33*/], 1);
		Local_113[17 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), 2443,42f, 4974,523f, 45,8106f, 121,834f, 1, true);
		unk_0x12C9D41D52A560D6(Local_113[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x9A0C1F836B24E46E(Local_113[17 /*33*/], 1, 0);
		unk_0xFC0DF15617416876(Local_113[17 /*33*/], 1);
		Local_113[18 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), 2448,888f, 4971,561f, 45,8106f, 194,7676f, 1, true);
		unk_0x12C9D41D52A560D6(Local_113[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x9A0C1F836B24E46E(Local_113[18 /*33*/], 1, 0);
		unk_0xFC0DF15617416876(Local_113[18 /*33*/], 1);
		while (((!unk_0xA5F6598E13F98E08(Local_113[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0xA5F6598E13F98E08(Local_113[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0xA5F6598E13F98E08(Local_113[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0xA5F6598E13F98E08(Local_113[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0x3AB6A1A9084FB0A4(Local_113[15 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[16 /*33*/])) && !unk_0x3AB6A1A9084FB0A4(Local_113[17 /*33*/])) && !unk_0x3AB6A1A9084FB0A4(Local_113[18 /*33*/]))
			{
			}
		}
		unk_0xE01CE1EBCD7EE551(Local_113[15 /*33*/], 0, 0);
		unk_0xE01CE1EBCD7EE551(Local_113[16 /*33*/], 0, 0);
		unk_0xE01CE1EBCD7EE551(Local_113[17 /*33*/], 0, 0);
		unk_0xE01CE1EBCD7EE551(Local_113[18 /*33*/], 0, 0);
		unk_0xFCCDDE0E48CF9588("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0x872F1C1F8587CCC7(&iVar0, 3);
	unk_0x872F1C1F8587CCC7(&iVar0, 8);
	unk_0x872F1C1F8587CCC7(&iVar0, 1);
	unk_0x872F1C1F8587CCC7(&iVar0, 2);
	unk_0x872F1C1F8587CCC7(&iVar0, 4);
	uLocal_168 = unk_0x06583789B8C15A6C(joaat("pickup_health_standard"), 2446,896f, 4990,972f, 45,5477f, iVar0, -1, 1, 0);
	if (!unk_0xA12FA3F7428EE798(iLocal_148))
	{
		iLocal_148 = unk_0x068179DC75448F03(2464,956f, 4990,051f, 44,48415f, 2,5f, 3,125f, 2,0625f, 0f, 0, 7);
	}
	iLocal_169[0] = unk_0x85CE54AA667066FE(joaat("pickup_health_standard"), 2444,497f, 4975,956f, 50,565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x6E795A41127FC848(iLocal_169[0], "V_8_Bed1Rm");
	iLocal_169[1] = unk_0x85CE54AA667066FE(joaat("pickup_health_standard"), 2443,4f, 4978,52f, 46,8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x6E795A41127FC848(iLocal_169[1], "V_8_KitchnRm");
	iLocal_169[3] = unk_0x85CE54AA667066FE(joaat("pickup_health_standard"), 2441,028f, 4963,851f, 46,5605f, 0f, 0f, -80,6f, iVar0, -1, 2, 1, 0);
	unk_0x6E795A41127FC848(iLocal_169[3], "V_8_StudyRm");
	iLocal_169[4] = unk_0x85CE54AA667066FE(joaat("pickup_health_standard"), 2435,165f, 4971,467f, 45,91f, 0f, 0f, -50,4f, iVar0, -1, 2, 1, 0);
	unk_0x6E795A41127FC848(iLocal_169[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0x872F1C1F8587CCC7(&iVar0, 2);
	unk_0x872F1C1F8587CCC7(&iVar0, 1);
	unk_0x872F1C1F8587CCC7(&iVar0, 3);
	iLocal_169[2] = unk_0x85CE54AA667066FE(joaat("pickup_weapon_sawnoffshotgun"), 2438,788f, 4970,79f, 50,565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0x6E795A41127FC848(iLocal_169[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)//Position - 0x720C
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	system::wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x7221
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)//Position - 0x7258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)//Position - 0x7292
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x72D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0)
		{
			Local_153[iVar0 /*6*/].f_1 = 1;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)//Position - 0x7374
{
	int iVar0;
	
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 1;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
		{
			if (!unk_0x9EC5112BB1C4047A(iVar0))
			{
				unk_0xA1AA40A93CA0F40D(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		return 1;
	}
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0x9EC5112BB1C4047A(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()//Position - 0x73F8
{
	return Global_92885.f_315 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x7409
{
	if (!iLocal_574)
	{
		iLocal_574 = 1;
		vLocal_391[0 /*3*/] = iParam1;
		vLocal_391[0 /*3*/].f_1 = iParam2;
		vLocal_391[0 /*3*/].f_2 = sParam3;
		vLocal_391[1 /*3*/] = iParam4;
		vLocal_391[1 /*3*/].f_1 = iParam5;
		vLocal_391[1 /*3*/].f_2 = sParam6;
		vLocal_391[2 /*3*/] = iParam7;
		vLocal_391[2 /*3*/].f_1 = iParam8;
		vLocal_391[2 /*3*/].f_2 = sParam9;
		vLocal_391[3 /*3*/] = iParam10;
		vLocal_391[3 /*3*/].f_1 = iParam11;
		vLocal_391[3 /*3*/].f_2 = sParam12;
		func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_55(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_55(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_55(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_55(iParam10, iParam11, sParam12);
		}
		if (!func_53())
		{
			if (unk_0x23F2F89E3D1CB7C4() && unk_0x248C9865A96D3EA4())
			{
				if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_392 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_392 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7526
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)//Position - 0x7574
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_38();
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

void func_38()//Position - 0x7840
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

void func_39()//Position - 0x7872
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

int func_40()//Position - 0x7907
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()//Position - 0x792E
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

void func_42()//Position - 0x79C7
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
		Global_14453 = func_43();
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

int func_43()//Position - 0x7A69
{
	func_44();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_44()//Position - 0x7A82
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_47(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_46(unk_0xFC1458A37D98B502());
			if (func_45(iVar0) && (!func_48(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_45(Global_104555.f_2353.f_539.f_4301))
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

bool func_45(int iParam0)//Position - 0x7B7F
{
	return iParam0 < 3;
}

int func_46(int iParam0)//Position - 0x7B8B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)//Position - 0x7BC8
{
	if (func_45(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)//Position - 0x7BF2
{
	return Global_35861 == iParam0;
}

void func_49()//Position - 0x7C00
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

bool func_50(int iParam0, int iParam1)//Position - 0x7C58
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

void func_51()//Position - 0x7C93
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7CEA
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

int func_53()//Position - 0x7D40
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_54())
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

int func_54()//Position - 0x7DAE
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, char* sParam2)//Position - 0x7DC8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			func_57(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0)
	{
		func_57(&uLocal_409, iParam0);
	}
	func_56(&uLocal_409, iParam0, iParam1, sParam2, 0, 1);
	iLocal_408[iParam0] = iParam1;
}

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7E2D
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

void func_57(var uParam0, int iParam1)//Position - 0x7EC8
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7EE5
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(sLocal_51) || !unk_0x74C475EB8E73D398(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_57(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_59()//Position - 0x7F55
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x7F77
{
	if (!unk_0x23F2F89E3D1CB7C4() || unk_0x248C9865A96D3EA4())
	{
		if (func_62(iParam1) != iParam2 || iParam2 == 0)
		{
			func_55(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_62(iParam4) != iParam5 || iParam5 == 0)
			{
				func_55(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_62(iParam7) != iParam8 || iParam8 == 0)
			{
				func_55(iParam7, iParam8, sParam9);
			}
		}
		if (func_61(&uLocal_409, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_61(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x8018
{
	func_52(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2621441 = 0;
	return func_37(sParam3, iParam4, bParam7);
}

int func_62(int iParam0)//Position - 0x8066
{
	return iLocal_408[iParam0];
}

int func_63(int iParam0)//Position - 0x8075
{
	if ((Global_16870 || Global_16869) || Global_16871)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14453.f_1 == 10)
		{
			if (Global_1638 == iParam0)
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
	return 0;
}

void func_64()//Position - 0x80D9
{
	Global_14622 = 0;
	func_65();
}

void func_65()//Position - 0x80E9
{
	if (unk_0x0DBDCC9C5537E157() || Global_14452 == 1)
	{
		unk_0x495EB1DD7306493A();
		Global_16767 = 0;
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		Global_14453.f_1 = Global_14455;
		return;
	}
}

void func_66()//Position - 0x8120
{
	Global_14622 = 0;
	func_51();
}

float func_67(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x8130
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

int func_68(int iParam0)//Position - 0x816A
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x818A
{
	func_70(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_70(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x81B4
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
				func_77(iVar0);
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
					if (func_74(iVar0, vParam0, vParam1, fParam2))
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
				if (func_72(iVar0, func_43(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_71(vParam5))
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

int func_71(vector3 vParam0)//Position - 0x85A8
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)//Position - 0x85D2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_73(iParam1, iVar0, &sVar1, &iVar2))
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

int func_73(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x8643
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

int func_74(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x871C
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
		vVar0 = { func_76(vParam1 - vParam2) };
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
		if (((((((((((((((func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_75(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_75(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_75(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_75(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x8A12
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

Vector3 func_76(vector3 vParam0)//Position - 0x8AC6
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

void func_77(int iParam0)//Position - 0x8B05
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

void func_78()//Position - 0x8B6A
{
	if (iLocal_149 >= 3)
	{
		if (iLocal_149 > 3)
		{
			func_103(&Local_119, &vLocal_130, vLocal_123, vLocal_124, vLocal_125, vLocal_126, vLocal_122, vLocal_129, vLocal_120, vLocal_121, vLocal_127, vLocal_128);
		}
		func_79();
	}
}

void func_79()//Position - 0x8BC0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		if ((!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]) && !unk_0xA7E3B4C3A60721A5(Local_113[iVar0 /*33*/], 1)) || Local_119[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2451,818f, 4985,704f, 50,5678f, 227,842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2455,085f, 4974,466f, 50,5677f, 246,051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2461,609f, 4993,675f, 44,9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2462,887f, 4993,614f, 44,9474f, 89,8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 1, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2460,651f, 4970,813f, 45,5765f, 240,2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
										func_99(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2443,138f, 4966,709f, 50,5677f, 246,051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_149 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2457,098f, 4954,283f, 44,1304f, 316,5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_fertilizer"), 2460,098f, 4957,283f, 44,1304f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478,32f, 4982,325f, 44,8913f, 49,5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_fertilizer"), 2478,444f, 4976,921f, 44,5614f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_149 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454,753f, 4951,719f, 44,1445f, 316,5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_fertilizer"), 2455,753f, 4952,719f, 44,1445f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475,873f, 4984,426f, 45,0916f, 45,8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_fertilizer"), 2476,582f, 4978,492f, 44,5734f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505,451f, 4970,663f, 43,548f, 49,5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_14 = unk_0x8383F9C605E523B7(2505,451f, 4970,663f, 43,548f, 0f, 0f, 88,725f, 2);
										func_98(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0x350CEE66BDF90273(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xD0E12C501EE26329(Local_113[iVar0 /*33*/].f_14, 1);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505,451f, 4970,663f, 43,548f, 49,5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_113[iVar0 /*33*/].f_14 = unk_0x8383F9C605E523B7(2507,879f, 4970,188f, 43,5f, 0f, 0f, 93,42f, 2);
										unk_0xD0E12C501EE26329(Local_113[iVar0 /*33*/].f_14, 1);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/]))
							{
								unk_0xCFF0CD14B439821D(Local_113[iVar0 /*33*/], 1, 1);
								unk_0x3FF3A0D63A2E2DB1(Local_113[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2458,57f, 4987,584f, 45,8107f, 233,842f, joaat("weapon_pistol"), 0, 0))
										{
											func_99(iVar0, 14, 0, 0);
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2454,627f, 4995,726f, 45,2011f, 233,842f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2442,994f, 4985,164f, 45,8103f, 303,409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
											func_99(iVar0, 14, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2450,371f, 4995,103f, 44,9282f, 303,409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433,124f, 4967,804f, 46,293f, 63,7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2432,091f, 4968,833f, 46,298f, 63,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2431,485f, 4964,779f, 45,8106f, -137,5f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2440,385f, 4965,429f, 45,8106f, 63,7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2439,741f, 4964,89f, 45,8106f, 130,3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2438,707f, 4964,094f, 45,8106f, 127,6523f, joaat("weapon_pistol"), 0, 1))
									{
										unk_0xBB3CC641B6AED5E5(Local_113[iVar0 /*33*/], 5);
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2440,929f, 4976,921f, 45,8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2452,052f, 4956,689f, 43,8957f, 230,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 23, 0, 0);
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_149 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2442,926f, 4975,148f, 45,8106f, 46,7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2449,338f, 4954,127f, 43,9299f, 46,7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2449,114f, 4981,984f, 45,8102f, 130,7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 32;
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2447,553f, 4980,515f, 45,8096f, 311,7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
										func_100(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
							{
								unk_0xCFF0CD14B439821D(Local_113[iVar0 /*33*/], 1, 1);
							}
							break;
						
						case 5:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2439,258f, 4976,201f, 45,8106f, 116,815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433,292f, 4968,534f, 42,348f, 105,5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
					{
						unk_0xFBA991D3A851E195(Local_113[iVar0 /*33*/], 1);
						Local_119[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_119[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0xD5BF96615F17406E(Local_113[iVar0 /*33*/].f_20) && unk_0xEB5883460A471716(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0xA9D382E7BA095148(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0xDD09837E5235FE91(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x12C9D41D52A560D6(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x12C9D41D52A560D6(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0xCFF0CD14B439821D(Local_113[iVar0 /*33*/], 1, 1);
												unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_113[iVar0 /*33*/].f_5 < 7)
								{
									func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								if (unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0xCA854FCB18A4FD22(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1,4f);
								}
								if (unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0xCA854FCB18A4FD22(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1,4f);
								}
								if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 2 && Local_113[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xDFFD5F8C8ABCB7EF(Local_113[iVar0 /*33*/].f_20))
										{
											Local_113[iVar0 /*33*/].f_12 = (func_96(unk_0xB3328BA8976B416C(Local_113[iVar0 /*33*/], 1), Local_113[iVar0 /*33*/].f_6, 1) - unk_0xF0371FE6E2BF9599(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_12 = func_95((Local_113[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x9F887157983E8EFC(Local_113[iVar0 /*33*/]))
											{
												unk_0x48ED7B2293A96722(Local_113[iVar0 /*33*/], (unk_0xF0371FE6E2BF9599(Local_113[iVar0 /*33*/]) + (system::timestep() * Local_113[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0xD5BF96615F17406E(Local_113[iVar0 /*33*/].f_20) && unk_0xEB5883460A471716(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0xA9D382E7BA095148(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0xDD09837E5235FE91(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
										{
											if (func_67(Local_113[iVar0 /*33*/], 2495,779f, 5004,715f, 43,87337f, 1) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x12C9D41D52A560D6(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x12C9D41D52A560D6(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
												unk_0xCFF0CD14B439821D(Local_113[iVar0 /*33*/], 1, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466,903f, 4996,254f, 45,5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x0C88267282FD588F(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461,332f, 4998,94f, 45,359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0x0C88267282FD588F(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455,984f, 4997,404f, 45,2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0x0C88267282FD588F(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 5)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452,091f, 4993,674f, 45,1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454,091f, 4995,674f, 45,1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (unk_0x0C88267282FD588F(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1,5f, 1,5f, 2f, 0, 1, 0))
										{
											if (unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0x7976C9958C60E354(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1,5f);
											}
											if (unk_0xA5F6598E13F98E08(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0x7976C9958C60E354(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1,5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x6B7C10B19928914F(Local_113[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_68(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x60C54803C97FDAAB(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0x6F8C8278B7C06889(Local_113[iVar0 /*33*/], iLocal_145, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x60C54803C97FDAAB(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0x6F8C8278B7C06889(Local_113[iVar0 /*33*/], iLocal_145, -1, 0, 1f, 1, 0);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = 0;
											Local_113[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (unk_0x88DDBE9908752BF0(Local_113[iVar0 /*33*/], 0))
										{
											unk_0xCFF0CD14B439821D(Local_113[iVar0 /*33*/], 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_145))
										{
											if (!unk_0x8EE3A848975DDF21(iLocal_145, -1, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0x8EE3A848975DDF21(iLocal_145, 0, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar1 /*33*/]))
															{
																if (unk_0x1ED974E122CB5C47(Local_113[iVar1 /*33*/]))
																{
																	func_93();
																	unk_0x87A3E70B0AB01608(0, iLocal_145, 2367,668f, 5098,645f, 46,8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0x96247F0EC873C446(0, iLocal_145, 19f, 786599);
																	func_92(&(Local_113[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0x8EE3A848975DDF21(iLocal_145, 0, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 5)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x380C1E7B7740D618(0, 2459,646f, 4977,735f, 50,5678f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x380C1E7B7740D618(0, 2456,221f, 4974,685f, 50,5678f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0xEAEB9795724C5EBC(0, 2456,221f, 4974,685f, 50,5678f, 92,5678f, 1061158912);
										unk_0x2DAC3448B66448E8(0, 92,5678f, 0);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											func_99(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_99(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_93();
										unk_0x380C1E7B7740D618(0, 2450,491f, 4986,83f, 50,5677f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x2DAC3448B66448E8(0, 309,5567f, 0);
										unk_0xB6A7F1EF9625AE96(0, 2000);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 993674639) == 7 && Local_113[iVar0 /*33*/].f_5 > 1)
								{
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x385A213BEB355C2B(Local_113[iVar0 /*33*/], joaat("weapon_unarmed"), true);
										unk_0x2DAC3448B66448E8(Local_113[iVar0 /*33*/], 219f, 1500);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 1920390111) == 7)
										{
											unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xFC1458A37D98B502(), Local_113[iVar0 /*33*/], 1) < 20f)
									{
										func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_14, 0);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0xFC1458A37D98B502(), Local_113[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0x63A6486593EC7EC3(0, 3);
												if (iVar3 == 0)
												{
													unk_0xE44A9E63DC81244A(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0xE44A9E63DC81244A(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0xE44A9E63DC81244A(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
											{
												Local_113[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 1000;
											}
											break;
										
										case 11:
											if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
											{
												unk_0x7FC89099E65488E2(Local_113[iVar0 /*33*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 5000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 5000;
											}
											break;
										
										case 12:
											if (unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), Local_113[iVar0 /*33*/]) && func_67(Local_113[iVar0 /*33*/], 2448,003f, 4982,305f, 45,8519f, 1) < 10f)
											{
												if (unk_0x53C562FD2B9E3AB0() > (Local_113[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0x380C1E7B7740D618(Local_113[iVar0 /*33*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1f, 20000, 0,25f, 0, 1193033728);
													Local_113[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											unk_0x380C1E7B7740D618(0, 2449,114f, 4981,984f, 45,8102f, 1f, 20000, 0,25f, 0, 1193033728);
											unk_0x2DAC3448B66448E8(0, 127,6328f, 3000);
											func_92(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14 || unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 242628503) == 7)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 713668775) == 7)
											{
												Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_145))
											{
												unk_0x6F8C8278B7C06889(Local_113[iVar0 /*33*/], iLocal_145, 20000, 1, 1f, 1, 0);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = 0;
												Local_113[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_94(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xFC1458A37D98B502(), Local_113[iVar0 /*33*/], 1) < 20f)
								{
									func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0x5AD8564EFD5BEC2E(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0xF1794430C256DBC0(Local_113[iVar0 /*33*/], 0);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0x5AD8564EFD5BEC2E(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[2 /*33*/]))
												{
													unk_0xAC838A977FB6E6BC(0, Local_113[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[1 /*33*/]))
												{
													unk_0xAC838A977FB6E6BC(0, Local_113[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[7 /*33*/]))
												{
													unk_0xAC838A977FB6E6BC(0, Local_113[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[6 /*33*/]))
												{
													unk_0xAC838A977FB6E6BC(0, Local_113[6 /*33*/], 2000);
												}
											}
											if (Local_113[iVar0 /*33*/].f_14 != 0)
											{
												unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_15 = unk_0x53C562FD2B9E3AB0() + 15000;
										}
										break;
									
									case 2:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 242628503) == 7 || unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_15)
										{
											unk_0xB8E08BD5B184DF4E(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												unk_0xF1794430C256DBC0(Local_113[iVar0 /*33*/], 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												func_99(iVar0, Local_113[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_99(iVar0, Local_113[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 993674639) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0x9A0C1F836B24E46E(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_113[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x6450931B826B49D9("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0x3A801AA34DD821BE("misscarsteal2peeing"))
										{
											unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0xFC1458A37D98B502(), Local_113[iVar0 /*33*/], 1) < 21,6f)
										{
											unk_0x12C9D41D52A560D6(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 23000;
										}
										break;
									
									case 3:
										if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
										{
											Local_113[iVar0 /*33*/].f_14 = -1;
											unk_0x2EA90674750EA01E(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x380C1E7B7740D618(0, 2434,891f, 4973,864f, 50,5679f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 12:
												if (unk_0xD8F3F5A5912D9487(2433,04f, 4967,87f, 46,28f, 0,8f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2433,04f, 4967,87f, 46,28f, 0,8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0xD8F3F5A5912D9487(2432,56f, 4968,38f, 46,27f, 0,8f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2432,56f, 4968,38f, 46,27f, 0,8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0xD8F3F5A5912D9487(2433,12f, 4965,59f, 46,27f, 0,8f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2433,12f, 4965,59f, 46,27f, 0,8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0xD8F3F5A5912D9487(2439,61f, 4960,99f, 46,27f, 0,4f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2439,697f, 4960,996f, 46,28f, 0,4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0xD8F3F5A5912D9487(2440,16f, 4962,99f, 46,27f, 0,4f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2440,16f, 4962,99f, 46,27f, 0,4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0xD8F3F5A5912D9487(2438,23f, 4962,25f, 46,27f, 0,4f, 0))
												{
													unk_0xB6FD596C667F191F(Local_113[iVar0 /*33*/], 2438,23f, 4962,25f, 46,27f, 0,4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_113[iVar0 /*33*/]) || (func_90(unk_0xB3328BA8976B416C(Local_113[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2448,583f, 4969,292f, 45,1856f, 2439,538f, 4978,061f, 46,82762f, 5,75f, 0, 1, 0)))
										{
											unk_0x2955A31540EE0E4F(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_113[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_113[iVar0 /*33*/]) || (func_90(unk_0xB3328BA8976B416C(Local_113[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2448,583f, 4969,292f, 45,1856f, 2439,538f, 4978,061f, 46,82762f, 5,75f, 0, 1, 0)))
										{
											if (func_35("TRV1", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 2000;
										}
										break;
									
									case 4:
										if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0xD68E88A8E0BE8697(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 200f, 200000, 0, 0);
											unk_0xE9B3D12A64CC7C1A(Local_113[iVar0 /*33*/], true);
											unk_0x486F346ADFE56674(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0x299B8D0F9C239719(Local_113[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0xA8388473C755363D(Local_113[iVar0 /*33*/], 0, 2))
											{
												unk_0x9E058151726E58DE(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), -1, false, true);
												unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
												func_88();
												unk_0x771A86309E0CA47B(Local_113[iVar0 /*33*/], 0);
												unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
												unk_0xCE93FCB8A8D8DF0B(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x6450931B826B49D9("misschinese2_crystalmaze");
										unk_0x04562CD765E0C517(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0x771A86309E0CA47B(Local_113[iVar0 /*33*/], 1);
										unk_0xCE93FCB8A8D8DF0B(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x3A801AA34DD821BE("misschinese2_crystalmaze") && unk_0x0A198E59F03B0E6F(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												unk_0xD0E12C501EE26329(iLocal_370, 1);
												unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0x6ADD12BF4D6D2587(iLocal_373))
												{
													iLocal_373 = unk_0xD50A2A2DB03A5CF0(joaat("weapon_sawnoffshotgun"), 40, 2433,59f, 4969,7f, 42,1854f, 1, 1065353216, 0, 0, 1);
													unk_0x59AF3B40AE222194(iLocal_373, 90f, 0f, 0f, 2, 1);
												}
												unk_0x60C06BFD037BB7CF(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), -1, 0, 2);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_149 == 4 || iLocal_149 == 5) || iLocal_149 == 6)
										{
											if (func_87(11))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 6)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_369 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
										unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x60C06BFD037BB7CF(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), -1, 0, 2);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((unk_0xD56F740235B1E8F0(iLocal_369) && unk_0x463C4747B41E35A3(iLocal_369) > 0,98f) || !unk_0xD56F740235B1E8F0(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0xD56F740235B1E8F0(iLocal_369) && unk_0x463C4747B41E35A3(iLocal_369) > 0,98f) || !unk_0xD56F740235B1E8F0(iLocal_369))
										{
											iLocal_368 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
											unk_0xD0E12C501EE26329(iLocal_368, 1);
											unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0xD56F740235B1E8F0(iLocal_371) || iLocal_371 == 0)
										{
											if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
											{
												iLocal_371 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												if (unk_0x63A6486593EC7EC3(0, 2) == 1)
												{
													unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0xD56F740235B1E8F0(iLocal_368) || iLocal_368 == 0)
										{
											if ((unk_0xD56F740235B1E8F0(iLocal_371) && unk_0x463C4747B41E35A3(iLocal_371) > 0,98f) || !unk_0xD56F740235B1E8F0(iLocal_371))
											{
												iLocal_368 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
												unk_0xD0E12C501EE26329(iLocal_368, 1);
												unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_113[iVar0 /*33*/].f_14 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(1000, 2000));
											}
										}
										if (!func_59() || (func_67(unk_0xFC1458A37D98B502(), 2430,09f, 4965,93f, 41,55f, 1) > 3,438f && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2427,079f, 4964,971f, 41,81169f, 2432,589f, 4959,331f, 48,7548f, 3,3125f, 0, 1, 0)))
										{
											func_85();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_372 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
										unk_0x8E628F774C748D93(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x21E9EF6609513ECD(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0xD56F740235B1E8F0(iLocal_372) && unk_0x463C4747B41E35A3(iLocal_372) > 0,98f) || !unk_0xD56F740235B1E8F0(iLocal_372))
										{
											unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
											unk_0xB8E08BD5B184DF4E(Local_113[iVar0 /*33*/]);
											unk_0x9627C22EF3C3F4D6(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), -1, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_59())
										{
											if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0x771A86309E0CA47B(Local_113[iVar0 /*33*/], 0);
												unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
												Local_113[iVar0 /*33*/].f_14 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3000, 4000));
												Local_113[iVar0 /*33*/].f_15 = 0;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
										{
											if (Local_113[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_14 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3000, 4000));
													Local_113[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
								{
									if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(Local_113[iVar0 /*33*/], 1), 2f, 1))
									{
										Local_113[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_84("FRMFLC", 0, 0))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_113[iVar0 /*33*/], "oneilcook", 2, unk_0xFC1458A37D98B502(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x53C562FD2B9E3AB0() + 1300;
										}
										break;
									
									case 2:
										if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0x2955A31540EE0E4F(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_59())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_59())
										{
											func_99(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										unk_0xD68E88A8E0BE8697(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 50f, 1000, 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_82("WRK2"))
										{
											if (unk_0xA2F80D03C2F3570D() == 1 || unk_0xA2F80D03C2F3570D() == 5)
											{
												func_81(0);
											}
											else
											{
												func_81(1);
											}
										}
										func_99(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0xD40A6DFCC31D221A(0, 1);
										unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, 999999, 0, 0);
										unk_0xF21E6EBE8EFDCC28(0, -1);
										func_92(&(Local_113[iVar0 /*33*/]), 0);
										unk_0xE9B3D12A64CC7C1A(Local_113[iVar0 /*33*/], true);
										unk_0x486F346ADFE56674(&(Local_113[iVar0 /*33*/]));
										if (unk_0xA6DECE14FC9A8C51(Local_113[iVar0 /*33*/].f_19))
										{
											unk_0xE30CF11C0EE14316(&(Local_113[iVar0 /*33*/].f_19));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_376 == 1)
								{
									if (unk_0xD56F740235B1E8F0(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x0ADADE14A7CF26EF(Local_113[iVar0 /*33*/].f_14, 0,69f);
									}
									if (iVar0 == 9)
									{
										iLocal_376 = 0;
									}
								}
								if (iLocal_377 == 1)
								{
									if (unk_0xD56F740235B1E8F0(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x0ADADE14A7CF26EF(Local_113[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_377 = 0;
									}
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0xD56F740235B1E8F0(Local_113[iVar0 /*33*/].f_14))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_149 == 3)
											{
												if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 1785177548) == 1)
												{
													if (unk_0x463C4747B41E35A3(Local_113[iVar0 /*33*/].f_14) > 0,024f && unk_0x463C4747B41E35A3(Local_113[iVar0 /*33*/].f_14) < 0,033f)
													{
														iVar5 = 0;
														if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0x5AD8564EFD5BEC2E(Local_113[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0xBB3CC641B6AED5E5(Local_113[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		unk_0xCAD1743A7DCE3B1D(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x84B03FD3CB6A57FD(Local_113[iVar0 /*33*/], unk_0xB3328BA8976B416C(iLocal_170[iVar5], 1), 0);
																		func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0xCAD1743A7DCE3B1D(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x84B03FD3CB6A57FD(Local_113[iVar0 /*33*/], 2493,1f, 4971f, 44,9f, 0);
																		func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 1)
										{
											if (unk_0x463C4747B41E35A3(Local_113[iVar0 /*33*/].f_14) > 0,04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 2;
												if (iLocal_374 == 0)
												{
													unk_0xE44A9E63DC81244A(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0x463C4747B41E35A3(Local_113[iVar0 /*33*/].f_14) > 0,6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0x78F50AA8F955BEFC(Local_113[iVar0 /*33*/], 2106541073) == 7)
									{
										func_99(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_119[iVar0 /*24*/].f_20)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2431,704f, 4961,62f, 45,33136f, 2455,376f, 4985,934f, 48,68555f, 13,5625f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										unk_0xAE6EBBBBD8B9FB30(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2431,704f, 4961,62f, 45,33136f, 2455,376f, 4985,934f, 48,68555f, 13,5625f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										unk_0xAE6EBBBBD8B9FB30(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2437,982f, 4959,021f, 45,31057f, 2432,93f, 4961,941f, 48,69256f, 3,1875f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											unk_0x73B4F2621FB82AA2(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										unk_0xAE6EBBBBD8B9FB30(Local_113[iVar0 /*33*/], 50, true);
										if (iLocal_114 == 0)
										{
											unk_0x73B4F2621FB82AA2(Local_113[iVar0 /*33*/], 0);
											unk_0x4EC2D0046891F1C5(Local_113[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 3f, 0, 0);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (unk_0x53C562FD2B9E3AB0() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_67(Local_113[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 1) < 3f)
										{
											unk_0x73B4F2621FB82AA2(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0x53C562FD2B9E3AB0() > Local_119[iVar0 /*24*/].f_4)
										{
											unk_0x73B4F2621FB82AA2(Local_113[iVar0 /*33*/], 0);
											unk_0x4EC2D0046891F1C5(Local_113[iVar0 /*33*/], 2451,677f, 4954,251f, 44,988f, 3f, 0, 0);
											Local_119[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2453,084f, 4969,897f, 50,44285f, 2460,996f, 4977,822f, 53,38035f, 2,9375f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2442,963f, 4964,217f, 50,44285f, 2449,251f, 4970,534f, 53,38035f, 2f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0xD28B96789F5A9CD4(Local_113[iVar0 /*33*/], 2461,362f, 4976,084f, 50,44285f, 2448,743f, 4988,774f, 53,60143f, 2f, 0, 0);
										unk_0xD7F5B2902EBBD04E(Local_113[iVar0 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x3811A0FC01E02FC1(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_80(int iParam0)//Position - 0xC3B6
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = unk_0x63A6486593EC7EC3(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_170[*iParam0]) && unk_0x0F3033474C49912D(iLocal_170[*iParam0], 2495,017f, 4970,17f, 44,21808f, 2493,501f, 4971,556f, 45,40248f, 1,375f, 0, 1, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_81(bool bParam0)//Position - 0xC44F
{
	iLocal_392 = 0;
	if (bParam0)
	{
		func_85();
	}
	else
	{
		func_88();
	}
}

int func_82(char* sParam0)//Position - 0xC46B
{
	struct<6> Var0;
	
	Var0 = { func_83() };
	if (unk_0x74C475EB8E73D398(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_83()//Position - 0xC48B
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

bool func_84(char* sParam0, int iParam1, char* sParam2)//Position - 0xC4AF
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_85()//Position - 0xC4CD
{
	Global_14622 = 0;
	func_86();
}

void func_86()//Position - 0xC4DD
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

int func_87(int iParam0)//Position - 0xC501
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_88()//Position - 0xC551
{
	Global_14622 = 0;
	func_89();
}

void func_89()//Position - 0xC561
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_90(vector3 vParam0, float fParam1, float fParam2)//Position - 0xC582
{
	if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
	{
		if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam0, fParam2, fParam2, fParam2, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x3E9CABD07B829173())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)//Position - 0xC5CA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_388[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1)//Position - 0xC614
{
	if (bParam1)
	{
		unk_0xDFD7CAAA70F1F7D2(uLocal_81, 1);
	}
	unk_0x1B16DD5C115FE009(uLocal_81);
	if (!unk_0xA7E3B4C3A60721A5(*iParam0, 1))
	{
		unk_0xAB30B1CF01A198C1(*iParam0, uLocal_81);
	}
	unk_0xFAA3EF7FF92E1F9E(&uLocal_81);
}

void func_93()//Position - 0xC64D
{
	unk_0x6931076730A4AC5D(&uLocal_81);
}

void func_94(int iParam0)//Position - 0xC65C
{
	Local_113[iParam0 /*33*/].f_15 = (Local_113[iParam0 /*33*/].f_15 + system::floor((system::timestep() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_113[iParam0 /*33*/].f_15 > 2000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 4000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 8000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2472,297f, 4962,687f, 47,2297f, 6000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_113[6 /*33*/]))
				{
					unk_0x60C06BFD037BB7CF(Local_113[iParam0 /*33*/], Local_113[6 /*33*/], 4000, 0, 2);
					unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 11000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2494,634f, 5001,994f, 46,6624f, 7000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 20000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2477,634f, 4966,994f, 46,6624f, 7000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 5000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 10000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2461,449f, 4977,48f, 51,7483f, 6000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 18000 && !unk_0xC80D31E4B587871C(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0xBA54D3D84EF38E3D(Local_113[iParam0 /*33*/], 2505,634f, 4996,994f, 46,6624f, 6000, 0, 2);
				unk_0x872F1C1F8587CCC7(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_95(float fParam0, float fParam1, float fParam2)//Position - 0xC94A
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

float func_96(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)//Position - 0xC971
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

int func_97(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC9D6
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

void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0xCBAD
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0x253DB96AF5D6551B(iParam0, fParam1);
		unk_0x471F966B9F527DA3(iParam0, fParam2);
		unk_0x0223236997E1A137(iParam0, (fParam3 / 2f));
		unk_0x2C18191093123E39(iParam0, fParam4);
		unk_0x7EDC2382770DE785(iParam0, fParam5);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCBE9
{
	if (!unk_0x3AB6A1A9084FB0A4(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_12 = 0f;
			Local_113[iParam0 /*33*/].f_13 = 0f;
			Local_113[iParam0 /*33*/].f_14 = iParam3;
			Local_113[iParam0 /*33*/].f_15 = 0;
			Local_119[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCC7D
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_101(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0xCCB8
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 1 && Local_113[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = unk_0xD3BB1A515B0A47F3(vParam2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0x1A595E6882473810(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0xE537629E02E8DA21(Local_113[iParam0 /*33*/]);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x03924C68EFCBC511(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_111 > 17)
	{
		Local_113[iParam0 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
		unk_0x230697B667C63948(Local_113[iParam0 /*33*/], 0);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 5)
	{
		unk_0x771A86309E0CA47B(Local_113[iParam0 /*33*/], 1);
		unk_0xCE93FCB8A8D8DF0B(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		unk_0x9E058151726E58DE(Local_113[iParam0 /*33*/], iParam4, 3000, bParam5, true);
		unk_0xCE93FCB8A8D8DF0B(Local_113[iParam0 /*33*/], iLocal_116);
		unk_0x66C1F257A00B2D4E(Local_113[iParam0 /*33*/], 1);
		unk_0xAE6EBBBBD8B9FB30(Local_113[iParam0 /*33*/], 9, true);
		unk_0x41613433DA018B46(Local_113[iParam0 /*33*/], 120f);
		unk_0x253DB96AF5D6551B(Local_113[iParam0 /*33*/], 22f);
		unk_0x8869F4A532FF9F2F(Local_113[iParam0 /*33*/], 22f);
		unk_0xAE01EF4BC84AFE7C(Local_113[iParam0 /*33*/], 118, false);
		unk_0x45BD02A17452ECE4(Local_113[iParam0 /*33*/], 14, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 2)
		{
			unk_0xBB3CC641B6AED5E5(Local_113[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0xBB3CC641B6AED5E5(Local_113[iParam0 /*33*/], 45);
		}
		unk_0xA37FFE314E45ED5D(Local_113[iParam0 /*33*/], true);
		unk_0x35829E9BFCED1A3F(Local_113[iParam0 /*33*/], 1);
		unk_0xAE6EBBBBD8B9FB30(Local_113[iParam0 /*33*/], 15, false);
		unk_0xAE6EBBBBD8B9FB30(Local_113[iParam0 /*33*/], 17, false);
		func_102(Local_113[iParam0 /*33*/], 1);
	}
	unk_0xAC28AB51B2BB0BCA(Local_113[iParam0 /*33*/]);
	unk_0xFBA991D3A851E195(Local_113[iParam0 /*33*/], 1);
	unk_0x51D236F12CE9AA95(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0x6E9B504950D6748A(Local_113[iParam0 /*33*/], 1);
	unk_0x6762C79E1A1E9FF9(Local_113[iParam0 /*33*/], 1);
	unk_0xE01CE1EBCD7EE551(Local_113[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_102(int iParam0, bool bParam1)//Position - 0xD4EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55933[iVar0 /*2*/] != 0)
			{
				if (Global_55933[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55932)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55933[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55933[iVar1 /*2*/] = iParam0;
	Global_55933[iVar1 /*2*/].f_1 = 7;
	Global_55932++;
}

void func_103(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, vector3 vParam8, vector3 vParam9, vector3 vParam10, vector3 vParam11)//Position - 0xD585
{
	if (iLocal_52 > 0)
	{
		func_115(uParam0, vParam8, vParam9, vParam6, vParam7);
		func_107(uParam0, uParam1, vParam2, vParam3, vParam4);
		func_104(uParam0, vParam5, vParam6, vParam7, vParam8, vParam9, vParam10, vParam11);
	}
}

void func_104(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7)//Position - 0xD5DF
{
	if (unk_0x4AA5DF29899B96D6())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iLocal_61 /*24*/], 1))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!func_82(vParam5.y))
												{
													func_88();
													if (func_105(vParam5.y, vParam5.z, (*uParam0)[iLocal_61 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_82(vParam4.y))
										{
											func_88();
											if (func_105(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_74 = 0;
									func_88();
									if (func_105(vParam1.y, vParam1.z, (*uParam0)[iLocal_61 /*24*/], vParam1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_74 = 0;
									func_88();
									if (func_105(vParam6.y, vParam6.z, (*uParam0)[iLocal_61 /*24*/], vParam6.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_53 && !iLocal_74)
									{
										func_88();
										if (func_105(vParam7.y, vParam7.z, (*uParam0)[iLocal_61 /*24*/], vParam7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_56)
									{
										if (((!func_82(vParam2.y) && !func_82(vParam3.y)) && !func_82(vParam4.y)) && !func_82(vParam5.y))
										{
											iLocal_74 = 0;
											func_88();
											if (func_105(vParam2.y, vParam2.z, (*uParam0)[iLocal_61 /*24*/], vParam2.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!func_82(vParam2.y) && !func_82(vParam3.y)) && !func_82(vParam4.y)) && !func_82(vParam5.y))
										{
											iLocal_74 = 0;
											func_88();
											if (func_105(vParam3.y, vParam3.z, (*uParam0)[iLocal_61 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_105(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_59())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_105(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0xD8EC
{
	func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_106(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_106(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_106(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_106(iParam10, iParam11, sParam12);
	}
	if (!func_53())
	{
		if (!unk_0x23F2F89E3D1CB7C4())
		{
			if (func_36(&Local_77, cLocal_78, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_80 = 0;
				return 1;
			}
			else if (iLocal_79 != unk_0x53C562FD2B9E3AB0())
			{
				iLocal_80++;
				iLocal_79 = unk_0x53C562FD2B9E3AB0();
				if (iLocal_80 >= 10)
				{
					iLocal_80 = 0;
					return 1;
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
	return 0;
}

void func_106(int iParam0, int iParam1, char* sParam2)//Position - 0xD99F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_57(&Local_77, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		func_57(&Local_77, iParam0);
	}
	func_56(&Local_77, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_107(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)//Position - 0xD9FC
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1) && !unk_0x75CEEA435C89DC2C((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0x249997FC5AF56FA8((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x249997FC5AF56FA8((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0x78F50AA8F955BEFC((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xB8E08BD5B184DF4E((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0x6CFCAFBA031AB20A((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0x78F50AA8F955BEFC((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0x6CFCAFBA031AB20A((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0x249997FC5AF56FA8((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0x249997FC5AF56FA8((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x88DDBE9908752BF0((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0xC6757F745366DB47((*uParam0)[iVar0 /*24*/]);
											if (unk_0xB8DE76287EDC4957(iVar2, 0))
											{
												if (unk_0x8DDE799D31A3D099(iVar2))
												{
													vVar3 = { unk_0x8FD9FCCB6E4BD999(iVar2) };
													unk_0x7674774BB9279265(iVar2);
													unk_0xD91B0600CD72C5F7(iVar2, vVar3);
													unk_0x16416C5B54FDBCBB((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0x88DDBE9908752BF0((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0x6ADD12BF4D6D2587((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_113((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0x53C562FD2B9E3AB0() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0xD40A6DFCC31D221A(0, 1);
																unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD40A6DFCC31D221A(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0xD40A6DFCC31D221A(0, 1);
																unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD40A6DFCC31D221A(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0xD40A6DFCC31D221A(0, 1);
																unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD40A6DFCC31D221A(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0xD40A6DFCC31D221A(0, 1);
																unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD40A6DFCC31D221A(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0xB8E08BD5B184DF4E((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															unk_0x385A213BEB355C2B((*uParam0)[iVar0 /*24*/], unk_0x69EFDF3384995190((*uParam0)[iVar0 /*24*/], 0), true);
															func_93();
															if (!unk_0x88DDBE9908752BF0((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0xD40A6DFCC31D221A(0, 1);
																unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD40A6DFCC31D221A(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0x992E814DF611C58C(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x53C562FD2B9E3AB0() + 3000;
															break;
														
														case 1:
															func_93();
															unk_0xD40A6DFCC31D221A(0, 1);
															iVar4 = func_112();
															unk_0xD40A6DFCC31D221A(0, 0);
															unk_0x992E814DF611C58C(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x53C562FD2B9E3AB0() + iVar4);
															break;
														
														default:
															if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0,2f)
																{
																	unk_0xCBF5827EA5303F2B((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0,2f);
																}
															}
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!unk_0x88DDBE9908752BF0((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0x771A86309E0CA47B((*uParam0)[iVar0 /*24*/], 1);
																unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0x771A86309E0CA47B((*uParam0)[iVar0 /*24*/], 1);
																unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0x385A213BEB355C2B((*uParam0)[iVar0 /*24*/], unk_0x69EFDF3384995190((*uParam0)[iVar0 /*24*/], 0), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0,95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x63A6486593EC7EC3(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0,95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x63A6486593EC7EC3(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0xE97272C977DEADD3((unk_0xF0371FE6E2BF9599((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x63A6486593EC7EC3(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0xE97272C977DEADD3((unk_0xF0371FE6E2BF9599((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x12C9D41D52A560D6((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x63A6486593EC7EC3(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0x78F50AA8F955BEFC((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(0, 2000));
															break;
														
														default:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(0, 2000));
															break;
														
														default:
															if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_109(iVar0, uParam0, "", vParam2, vParam3, vParam4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!unk_0x88DDBE9908752BF0((*uParam0)[iVar0 /*24*/], 1))
																{
																	vVar5 = { unk_0xB3328BA8976B416C((*uParam0)[iVar0 /*24*/], 1) };
																	vVar6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
																	fVar7 = unk_0xD73DFB66C3B7531F(((vVar6.z - vVar5.z) / func_4((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_93();
															unk_0xD40A6DFCC31D221A(0, 1);
															unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
															unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD40A6DFCC31D221A(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_93();
															unk_0xD40A6DFCC31D221A(0, 1);
															unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
															unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD40A6DFCC31D221A(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_93();
															unk_0xD40A6DFCC31D221A(0, 1);
															unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
															unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD40A6DFCC31D221A(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (unk_0xE97272C977DEADD3(func_113((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502())) < 20f)
																{
																	if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 1) + 5f) / 35f), 0,27f, 0,9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xA5F6598E13F98E08((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x7A70772AE40E3821((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0,9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x53C562FD2B9E3AB0() + 2000;
											unk_0xD7F5B2902EBBD04E((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 0, 16);
											unk_0xCFF0CD14B439821D((*uParam0)[iVar0 /*24*/], 1, 1);
											unk_0x3811A0FC01E02FC1((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0x53C562FD2B9E3AB0() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (unk_0x249997FC5AF56FA8((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x353094543C6ECFC4((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xB8E08BD5B184DF4E((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									unk_0x385A213BEB355C2B((*uParam0)[iVar0 /*24*/], unk_0x69EFDF3384995190((*uParam0)[iVar0 /*24*/], 0), true);
									unk_0x771A86309E0CA47B((*uParam0)[iVar0 /*24*/], 0);
									unk_0xDA461F41968CDFFA((*uParam0)[iVar0 /*24*/]);
									unk_0xAE6EBBBBD8B9FB30((*uParam0)[iVar0 /*24*/], 50, true);
									unk_0xE17958D3FD0F9EE9((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0xD7F5B2902EBBD04E((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502(), 0, 16);
										unk_0xCFF0CD14B439821D((*uParam0)[iVar0 /*24*/], 1, 1);
										unk_0x3811A0FC01E02FC1((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_108(float fParam0, float fParam1, float fParam2)//Position - 0xEADE
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_109(int iParam0, var uParam1, char* sParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, bool bParam6)//Position - 0xEB02
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!unk_0x74C475EB8E73D398("chi2_hear", vParam3.y))
			{
				if (func_59())
				{
					if (!func_82(vParam3.y))
					{
						func_85();
					}
				}
				if (func_105(vParam3.y, vParam3.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0xB3328BA8976B416C((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0xF0371FE6E2BF9599((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x53C562FD2B9E3AB0() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0xB3328BA8976B416C((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0xF0371FE6E2BF9599((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0x53C562FD2B9E3AB0() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x7FC89099E65488E2((*uParam1)[iParam0 /*24*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0x53C562FD2B9E3AB0() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0x74C475EB8E73D398("chi2_hear", vParam3.y))
			{
				if ((unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0x53C562FD2B9E3AB0() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0x380C1E7B7740D618((*uParam1)[iParam0 /*24*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1f, 20000, 0,1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0x53C562FD2B9E3AB0() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_105(vParam5.y, vParam5.z, (*uParam1)[iParam0 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0x53C562FD2B9E3AB0() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x2DAC3448B66448E8((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			unk_0x380C1E7B7740D618(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0,2f, 4096, 1193033728);
			unk_0x2DAC3448B66448E8(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0x53C562FD2B9E3AB0() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0x78F50AA8F955BEFC((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (unk_0x74C475EB8E73D398("chi2_hear", vParam3.y) && unk_0x78F50AA8F955BEFC((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!unk_0x74C475EB8E73D398(sParam2, ""))
				{
					unk_0x2EA90674750EA01E((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0x74C475EB8E73D398("chi2_hear", vParam3.y))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_105(vParam3.y, vParam4.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0x78F50AA8F955BEFC((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!unk_0x3AB6A1A9084FB0A4((*uParam1)[iParam0 /*24*/]))
				{
					unk_0xB8E08BD5B184DF4E((*uParam1)[iParam0 /*24*/]);
					func_93();
					unk_0xBA54D3D84EF38E3D(0, unk_0x3F90543934DCD7E6((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0xBA54D3D84EF38E3D(0, unk_0x3F90543934DCD7E6((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x53C562FD2B9E3AB0() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)//Position - 0xEF66
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!unk_0xA7E3B4C3A60721A5((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0xA7E3B4C3A60721A5((*uParam1)[iVar0 /*24*/], 1) && unk_0x6ADD12BF4D6D2587((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_113((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0xE97272C977DEADD3((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0xAC838A977FB6E6BC(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0xAC838A977FB6E6BC((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_111((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_111(int iParam0, int iParam1, int iParam2)//Position - 0xF058
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	return func_96(vVar0, vVar1, iParam2);
}

int func_112()//Position - 0xF084
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	unk_0x12C9D41D52A560D6(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0x63A6486593EC7EC3(0, 3);
		iVar3 = unk_0x63A6486593EC7EC3(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = unk_0x63A6486593EC7EC3(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0x63A6486593EC7EC3(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0x63A6486593EC7EC3(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x12C9D41D52A560D6(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_113(int iParam0, int iParam1)//Position - 0xF273
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0x6ADD12BF4D6D2587(iParam1))
	{
		return func_114(iParam0, unk_0xB3328BA8976B416C(iParam1, 0));
	}
	return 0f;
}

float func_114(int iParam0, vector3 vParam1)//Position - 0xF2A0
{
	float fVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			fVar0 = func_96(unk_0xB3328BA8976B416C(iParam0, 0), vParam1, 1);
			return (fVar0 - unk_0xF0371FE6E2BF9599(iParam0));
		}
	}
	return 0f;
}

void func_115(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)//Position - 0xF2DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_53 == 1)
	{
		bLocal_82 = false;
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || unk_0xF2B58F79D29425B4(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iLocal_58 /*24*/], 1))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((unk_0x1ACD6691B9C9AA46((*uParam0)[iLocal_58 /*24*/]) != 0 && unk_0x1ACD6691B9C9AA46((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0x1ACD6691B9C9AA46((*uParam0)[iLocal_58 /*24*/]) == 0 && unk_0x1ACD6691B9C9AA46((*uParam0)[iVar0 /*24*/]) == 0))
										{
											vVar3 = { unk_0xB3328BA8976B416C((*uParam0)[iVar0 /*24*/], 1) };
											vVar4 = { unk_0xB3328BA8976B416C((*uParam0)[iLocal_58 /*24*/], 0) };
											if (unk_0xE97272C977DEADD3((vVar3.z - vVar4.z)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
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
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (unk_0x6ADD12BF4D6D2587((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = func_113((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
	{
		iVar9 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0xB8DE76287EDC4957(iVar9, 0))
		{
			if (unk_0xAC6FC114B15F95EC(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (unk_0x4E69510C44147A5C(-1, vLocal_71, fLocal_72))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_82(Param1.f_1) || func_82(Param3.f_1))
		{
			iLocal_59 = unk_0x53C562FD2B9E3AB0() + 1000;
			iLocal_55 = 1;
		}
		if (func_82(Param5.f_1) || func_82(Param7.f_1))
		{
			iLocal_59 = unk_0x53C562FD2B9E3AB0() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_82(Param1.f_1) && !func_82(Param3.f_1)) && !func_82(Param5.f_1)) && !func_82(Param7.f_1))
	{
		iLocal_55 = 0;
	}
	else if (unk_0x53C562FD2B9E3AB0() > iLocal_59)
	{
		if (func_82(Param1.f_1) || func_82(Param3.f_1))
		{
			bLocal_53 = true;
		}
		if (func_82(Param5.f_1) || func_82(Param7.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_57 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar13 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
	}
	if (iLocal_62 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xA7E3B4C3A60721A5((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (unk_0xB8DE76287EDC4957(iVar13, 0))
						{
							if (unk_0xAC6FC114B15F95EC(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 20f;
							}
							if (unk_0x44C4B08A935F2D8D(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 50f;
							}
						}
						if (unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), (*uParam0)[iVar0 /*24*/]) || (unk_0xB8DE76287EDC4957(iVar13, 0) && unk_0xAC6FC114B15F95EC(iVar13)))
						{
							if (func_4(unk_0xFC1458A37D98B502(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0x1ACD6691B9C9AA46((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(unk_0xFC1458A37D98B502(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !unk_0x9F887157983E8EFC((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xC73F864B858B1096((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x47B14B07B2FD8217((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0xC73F864B858B1096((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0x4FB2BF5239979F9A(unk_0xB3328BA8976B416C((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0x4FB2BF5239979F9A(unk_0xB3328BA8976B416C((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xC73F864B858B1096((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0x6ADD12BF4D6D2587((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0xA7E3B4C3A60721A5((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0xE56ACE711345F330((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0x6ADD12BF4D6D2587((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0xA7E3B4C3A60721A5((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0xE56ACE711345F330((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0x7ED4D0E480A6EC43((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0xC73F864B858B1096((*uParam0)[iVar0 /*24*/], 1) || unk_0x47B14B07B2FD8217((*uParam0)[iVar0 /*24*/], 1)) || (unk_0x7ED4D0E480A6EC43((*uParam0)[iVar0 /*24*/], 0) && unk_0x55F1875A08648979((*uParam0)[iVar0 /*24*/], unk_0xFC1458A37D98B502()))) || (func_116((*uParam0)[iVar0 /*24*/]) && unk_0x47B14B07B2FD8217((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && func_4(unk_0xFC1458A37D98B502(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (unk_0xA7E3B4C3A60721A5((*uParam0)[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

int func_116(int iParam0)//Position - 0xFB22
{
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xA5F6598E13F98E08(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_117()//Position - 0xFBD3
{
	if (iLocal_392)
	{
		if (unk_0xAB019B170BF1309C(&vLocal_397))
		{
			if (func_59())
			{
				if (unk_0x42111BD51D233AAB())
				{
					if (!unk_0x23F2F89E3D1CB7C4())
					{
						cLocal_393 = { func_118() };
						vLocal_397 = { func_83() };
						StringCopy(&vLocal_397, "", 24);
						if (!unk_0xAB019B170BF1309C(&cLocal_393) && !unk_0x74C475EB8E73D398(&cLocal_393, "NULL"))
						{
							vLocal_397 = { func_83() };
							func_85();
						}
						else
						{
							iLocal_392 = 0;
							StringCopy(&vLocal_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0;
				StringCopy(&vLocal_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (unk_0x42111BD51D233AAB())
			{
				if (!func_82(&vLocal_397))
				{
					iLocal_392 = 0;
					StringCopy(&vLocal_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!unk_0xAB019B170BF1309C(&vLocal_397))
			{
				vLocal_391[0 /*3*/] = { vLocal_391[0 /*3*/] };
			}
		}
	}
}

struct<6> func_118()//Position - 0xFCBB
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

void func_119()//Position - 0xFD67
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_126();
		func_125();
		func_123();
		func_120();
	}
}

void func_120()//Position - 0xFD8B
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0)
	{
		if (unk_0x460D11CD8248B67D(&vVar1, Local_109[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0xBE3C4023003180FC(Local_109[(iVar0 - 1) /*5*/], Local_109[iVar0 /*5*/], true));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (unk_0x460D11CD8248B67D(&vVar1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = unk_0xBE3C4023003180FC(Local_109[iVar0 /*5*/], vVar1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 1;
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				fVar6 = fVar6;
				vLocal_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0)
				{
					iLocal_108 = 0;
				}
				if (iLocal_107 >= Local_109 * 2)
				{
					iLocal_107 = (Local_109 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_102 == 1)
	{
		unk_0x7FA1A84E8D843CD7();
		fVar7 = (system::to_float((unk_0x53C562FD2B9E3AB0() - iLocal_104)) / fLocal_110);
		iVar8 = (system::floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			if ((unk_0x53C562FD2B9E3AB0() - Local_101[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xDC4784695BCD5F0A(Local_101[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			if ((unk_0x53C562FD2B9E3AB0() - Local_101[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x3DCFE29D7523C919(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)//Position - 0xFFEF
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_122(Local_109[(iParam0 / 2) /*5*/] + Local_109[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_122(Local_109[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
		}
	}
}

void func_122(vector3 vParam0, int iParam1)//Position - 0x1005E
{
	if (iLocal_103 == 0)
	{
		iParam1 = 0;
	}
	unk_0x3DCFE29D7523C919(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0)
	{
		unk_0xDC4784695BCD5F0A(Local_101[iLocal_106 /*5*/].f_1, 0,4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = unk_0x53C562FD2B9E3AB0();
	Local_101[iLocal_106 /*5*/].f_1 = { vParam0 };
	Local_101[iLocal_106 /*5*/] = unk_0x2893DA23B6233C20(vParam0, iLocal_94, iParam1);
	iLocal_106++;
	if (iLocal_106 >= 31)
	{
		iLocal_106 = 0;
	}
}

void func_123()//Position - 0x100E7
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xF2B58F79D29425B4(0, 24) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				if (iLocal_95 == 0)
				{
					unk_0x1267474D9A69CA37(2f, 8f, 4);
					iLocal_95 = unk_0x53C562FD2B9E3AB0() + 250;
				}
				if (unk_0x53C562FD2B9E3AB0() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999,9f;
						vLocal_98 = { func_124() };
						iVar0 = 0;
						while (iVar0 < Local_109)
						{
							if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xBE3C4023003180FC(vLocal_98, unk_0x67247AA13B7486A3(Local_109[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0xBE3C4023003180FC(Local_109[iVar0 /*5*/], unk_0x67247AA13B7486A3(Local_109[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { vLocal_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (unk_0xB89BB11E0945F6F0((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (unk_0xB89BB11E0945F6F0((iLocal_92 - iVar5)) < 3 && unk_0xB89BB11E0945F6F0((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xA6DECE14FC9A8C51(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x94540F498465F1A2(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF20857E4CB32A2B7(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (unk_0xA6DECE14FC9A8C51(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x94540F498465F1A2(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF20857E4CB32A2B7(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (unk_0xA6DECE14FC9A8C51(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x94540F498465F1A2(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF20857E4CB32A2B7(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0xA6DECE14FC9A8C51(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x94540F498465F1A2(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF20857E4CB32A2B7(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_71(Local_109[iVar5 + 1 /*5*/]))
									{
										if (unk_0xA6DECE14FC9A8C51(Local_109[iVar5 /*5*/].f_3))
										{
											if (unk_0x94540F498465F1A2(Local_109[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xF20857E4CB32A2B7(Local_109[iVar5 /*5*/].f_3, 0);
												Local_109[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}

Vector3 func_124()//Position - 0x103FA
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0x5F9FFFEC91F9D9C7(unk_0xFC1458A37D98B502());
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		iVar1 = unk_0xD323488FDDE4A80F(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { unk_0xDCD8BDD2E10C660E(iVar0, iVar1) };
		vVar2 = { unk_0x9EA50C5EC175E58E(vVar2, unk_0xF0371FE6E2BF9599(iVar0), 0,35f, 0f, -0,15f) };
		unk_0x7367FB97975F1E29(vVar2, &uVar4, 0, 0);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_125()//Position - 0x1046A
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0;
			while (iVar0 < Local_101)
			{
				unk_0x3DCFE29D7523C919(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		iLocal_102 = 1;
		iLocal_104 = unk_0x53C562FD2B9E3AB0();
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = -1;
			iLocal_107 = -1;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 1;
	}
}

void func_126()//Position - 0x104F8
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_127()//Position - 0x1050B
{
	int iVar0;
	
	if (iLocal_149 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_113)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_23)
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0x1479B36DFB6174A5(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					func_97(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0)
			{
				func_128(&(Local_113[iVar0 /*33*/].f_25));
				Local_113[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_128(int iParam0)//Position - 0x105BF
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

void func_129()//Position - 0x10631
{
	int iVar0;
	
	iVar0 = iLocal_149;
	func_361();
	switch (iLocal_149)
	{
		case 0:
			func_264();
			break;
		
		case 1:
			func_261();
			break;
		
		case 2:
			func_216();
			break;
		
		case 3:
			func_201();
			break;
		
		case 4:
			func_200();
			break;
		
		case 5:
			func_200();
			break;
		
		case 6:
			func_200();
			break;
		
		case 7:
			func_196();
			break;
		
		case 8:
			func_175();
			break;
		
		case 9:
			func_143();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0;
	}
	if (bLocal_152)
	{
		func_130(0);
	}
}

void func_130(char* sParam0)//Position - 0x106E3
{
	while (!unk_0x8810DC630928B398("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (unk_0x8C1C362CA8299475(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_132(sLocal_151);
	while (!func_131())
	{
		func_28(2, 0);
	}
	func_434(1);
}

int func_131()//Position - 0x1073E
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

void func_132(char* sParam0)//Position - 0x1076B
{
	func_142(sParam0);
	func_133(0);
}

void func_133(int iParam0)//Position - 0x1077E
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_141(0))
	{
		iVar0 = func_140();
		if (!func_134(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_134(int iParam0)//Position - 0x107C3
{
	int iVar0;
	int iVar1;
	
	func_139();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_138(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_135(&(Global_104555.f_2353.f_539), iVar1);
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

void func_135(var uParam0, int iParam1)//Position - 0x108DA
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
			if (!func_137(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_136(&(uParam0->f_2276[iVar0]));
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

void func_136(var uParam0)//Position - 0x10AA3
{
	*uParam0 = -15;
}

int func_137(int iParam0, var uParam1, float fParam2)//Position - 0x10AB1
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
			return func_137(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_137(8, uParam1, fParam2);
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

void func_138(int iParam0, bool bParam1)//Position - 0x11420
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

void func_139()//Position - 0x1145E
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_43())
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
			switch (func_43())
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

int func_140()//Position - 0x1154D
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

bool func_141(bool bParam0)//Position - 0x11582
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_142(char* sParam0)//Position - 0x115AD
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

void func_143()//Position - 0x115ED
{
	func_170(46, 52);
	func_160(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_160(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 12, 0, 0, 1, 0, 1, 0);
	func_148();
	if (func_147(1, 49))
	{
		func_144();
	}
}

void func_144()//Position - 0x1167B
{
	unk_0x84CDD933AFA470D2();
	func_145(0, 0);
	func_434(0);
}

void func_145(bool bParam0, int iParam1)//Position - 0x11692
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
		if ((func_141(0) && Global_71102.f_1 == 1) && func_146(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_141(0))
	{
		iVar0 = func_140();
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

int func_146(int iParam0)//Position - 0x11768
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

int func_147(int iParam0, int iParam1)//Position - 0x117A6
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_148()//Position - 0x117CC
{
	vector3 vVar0;
	
	vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2432,476f, 4953,242f, 43,05545f, 2466,34f, 4986,15f, 57,25303f, 14,4375f, 0, 1, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2436,762f, 4956,011f, 44,49009f, 2443,38f, 4962,625f, 48,2233f, 1,5f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2447,669f, 4966,554f, 44,95141f, 2452,497f, 4969,825f, 48,89074f, 2,3125f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2454,863f, 4968,686f, 44,95141f, 2460,505f, 4974,409f, 48,82641f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2459,058f, 4977,546f, 44,95141f, 2460,411f, 4979,302f, 48,82641f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2457,602f, 4984,746f, 44,73669f, 2461,977f, 4989,49f, 48,47844f, 1,6875f, 0, 1, 0))
			{
				if (!unk_0x6B4C37F2EEC636CC(unk_0xFC1458A37D98B502()))
				{
					unk_0xF486F507473D2F86(unk_0xFC1458A37D98B502());
				}
			}
		}
		else if ((((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2454,179f, 4995,281f, 44,54151f, 2453,096f, 4993,905f, 48,32043f, 1,6875f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2449,401f, 4990,354f, 44,92924f, 2447,717f, 4988,865f, 48,82129f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2443,906f, 4990,104f, 44,4446f, 2439,007f, 4985,271f, 48,30458f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2439,602f, 4982,387f, 44,95141f, 2440,797f, 4981,365f, 48,82642f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2440,259f, 4980,671f, 44,95142f, 2434,769f, 4975,055f, 48,82642f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2432,165f, 4972,586f, 44,29909f, 2430,114f, 4970,545f, 48,21086f, 1,6875f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2428,46f, 4968,569f, 44,81597f, 2426,632f, 4966,603f, 48,29342f, 1,6875f, 0, 1, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(unk_0xFC1458A37D98B502()))
			{
				unk_0xF486F507473D2F86(unk_0xFC1458A37D98B502());
			}
		}
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2455,487f, 4997,566f, 43,1101f, 2423,653f, 4962,837f, 57,34888f, 14,4375f, 0, 1, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2442,913f, 4965,273f, 50,15687f, 2444,49f, 4967,41f, 53,81783f, 1,6875f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2445,239f, 4969,07f, 49,94284f, 2450,365f, 4972,188f, 54,03251f, 2,375f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2452,332f, 4971,817f, 49,94283f, 2457,977f, 4977,583f, 53,88097f, 2,375f, 0, 1, 0))
			{
				if (!unk_0x6B4C37F2EEC636CC(unk_0xFC1458A37D98B502()))
				{
					unk_0xF486F507473D2F86(unk_0xFC1458A37D98B502());
				}
			}
		}
		else if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2457,621f, 4978,462f, 49,94283f, 2453,932f, 4982,161f, 53,81783f, 2,375f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2452,054f, 4984,156f, 49,94283f, 2448,12f, 4987,809f, 53,81316f, 2,375f, 0, 1, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2442,014f, 4980,539f, 49,94283f, 2435,796f, 4971,945f, 53,90388f, 2,375f, 0, 1, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(unk_0xFC1458A37D98B502()))
			{
				unk_0xF486F507473D2F86(unk_0xFC1458A37D98B502());
			}
		}
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11C56
{
	int iVar0;
	int iVar1;
	
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0xF491DD47B88AA84E())
					{
						unk_0x90CF15A020F6758D(2f);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0x6A280C3DF20921F8(unk_0x9EB17624F44A8DA4()))
					{
						if (unk_0x4C4813CAAD70E814(0))
						{
							func_151("USESPEC_KM", -1);
						}
						else
						{
							func_151("USESPEC", -1);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMFLE", -1);
							Local_389[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_59() && !unk_0x23F2F89E3D1CB7C4())
					{
						func_7("FRMLK", 7500, 1);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x16700A5CF29C1FC1(unk_0xFC1458A37D98B502()))
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x53C562FD2B9E3AB0() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_389[iParam0 /*4*/].f_3)
							{
								if (unk_0x4C4813CAAD70E814(0))
								{
									func_151("FRMSTLTH_KM", -1);
								}
								else
								{
									func_151("FRMSTLTH", -1);
								}
								Local_389[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x496616BFA56C89EB(211) != 0)
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x53C562FD2B9E3AB0() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0x23F2F89E3D1CB7C4() && !unk_0xF491DD47B88AA84E())
									{
										if (!func_59())
										{
											if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
											{
												func_151("FRMSHOT", -1);
												Local_389[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					unk_0x62BD54E491535B76(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMPET2", -1);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_59())
							{
								func_150("FRMTRL", 7500, 1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0xF2B58F79D29425B4(0, 24))
									{
										unk_0x3E80C2F7BC665259(1);
									}
								}
							}
							if (!unk_0xF491DD47B88AA84E())
							{
								func_151("FRMTRL2", -1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_59())
								{
									if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
									{
										if (!unk_0xA6DECE14FC9A8C51(iLocal_178))
										{
											unk_0x84CDD933AFA470D2();
											func_7("FRMSHP", 7500, 1);
											iLocal_178 = func_5(2454,895f, 4950,895f, 44,1488f, 0);
										}
									}
									else if (func_67(unk_0xFC1458A37D98B502(), 2454,895f, 4950,895f, 44,1488f, 1) < 5f)
									{
										unk_0x84CDD933AFA470D2();
										if (unk_0xA6DECE14FC9A8C51(iLocal_178))
										{
											unk_0xE30CF11C0EE14316(&iLocal_178);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0xE859EF37EA7362D3("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_87(37))
							{
								if (func_84("FRMIGN", 0, 0))
								{
									unk_0x84CDD933AFA470D2();
								}
							}
							if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
							{
								Local_389[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_151("FRMMISS", -1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_87(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_87(48))
					{
						unk_0x84CDD933AFA470D2();
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)//Position - 0x1216D
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_151(char* sParam0, int iParam1)//Position - 0x12186
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1219D
{
	bLocal_386 = false;
	iLocal_387 = 0;
	if (func_153(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_153(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_153(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_153(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x121FC
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_156(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_156(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_87(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_155(iParam3))
			{
				if (func_156(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_87(iParam3))
				{
					func_154(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_154(int iParam0)//Position - 0x12355
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 1;
	}
}

int func_155(int iParam0)//Position - 0x12381
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x123B4
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1240C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = unk_0x53C562FD2B9E3AB0() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_59())
								{
									Local_390[iParam0 /*7*/].f_4 = unk_0x53C562FD2B9E3AB0() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(8000, 14000));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = func_18(15);
							Local_390[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_390[iParam0 /*7*/].f_4 != -1 && Local_390[iParam0 /*7*/].f_5 != -1)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_159(&iVar1, 2, 1))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = unk_0x63A6486593EC7EC3(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x53C562FD2B9E3AB0() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x53C562FD2B9E3AB0() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x53C562FD2B9E3AB0() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_390[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_113)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 2)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar2 /*33*/]))
									{
										if (unk_0x7ED4D0E480A6EC43(Local_113[iVar2 /*33*/], 0))
										{
											if (unk_0x55F1875A08648979(Local_113[iVar2 /*33*/], unk_0xFC1458A37D98B502()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_159(&(Local_390[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_82("ONEILGUARD4") || func_82("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x53C562FD2B9E3AB0() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_113)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0xFC1458A37D98B502(), Local_113[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == -1)
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = unk_0x53C562FD2B9E3AB0() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_113)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 8)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 9)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_59())
							{
								if (unk_0xD56F740235B1E8F0(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x463C4747B41E35A3(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0,15f)
									{
										if (unk_0x463C4747B41E35A3(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) < 0,65f)
										{
											if (func_4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], unk_0xFC1458A37D98B502(), 1) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0xE44A9E63DC81244A(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0xD56F740235B1E8F0(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x463C4747B41E35A3(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0,75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0x1267474D9A69CA37(5f, 8f, 4);
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = 2500;
							Local_390[iParam0 /*7*/].f_5 = 0;
							Local_390[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - system::floor((system::timestep() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0)
							{
								Local_390[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_390[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3 = 1;
									Local_390[iParam0 /*7*/].f_4 = (12000 + unk_0x63A6486593EC7EC3(3000, 5000));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0xFC1458A37D98B502(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_158()//Position - 0x13842
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2)//Position - 0x13891
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0xFC1458A37D98B502(), Local_113[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x13917
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
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
	
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 1;
		Local_385[iParam0 /*10*/].f_3 = 0;
		Local_385[iParam0 /*10*/].f_6 = 0;
		Local_385[iParam0 /*10*/].f_4 = 0;
		Local_385[iParam0 /*10*/].f_7 = 0;
		Local_385[iParam0 /*10*/].f_8 = 0;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_152(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0 || Local_385[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xE859EF37EA7362D3("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								unk_0xE02E32C69260FBB7("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_67(unk_0xFC1458A37D98B502(), 1991,05f, 3054,262f, 46,2147f, 1) > 250f)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
						{
							unk_0x68433819717660CF(&(Local_113[11 /*33*/]));
						}
						if (unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
						{
							unk_0x68433819717660CF(&(Local_113[10 /*33*/]));
						}
						if (unk_0x6ADD12BF4D6D2587(Local_113[12 /*33*/]))
						{
							unk_0x68433819717660CF(&(Local_113[12 /*33*/]));
						}
						if (unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]))
						{
							unk_0x68433819717660CF(&(Local_113[13 /*33*/]));
						}
						if (unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]))
						{
							unk_0x68433819717660CF(&(Local_113[14 /*33*/]));
						}
						unk_0x14776E43F90DD454(joaat("ig_janet"));
						unk_0x14776E43F90DD454(joaat("ig_janet"));
						unk_0x14776E43F90DD454(joaat("ig_old_man1a"));
						unk_0x14776E43F90DD454(joaat("ig_old_man2"));
						unk_0x14776E43F90DD454(joaat("ig_taocheng"));
						unk_0x14776E43F90DD454(joaat("ig_taostranslator"));
						unk_0xFCCDDE0E48CF9588("misschinese2_crystalmaze");
						unk_0xFCCDDE0E48CF9588("MISSChinese2_crystalMazeMCS1_IG");
						unk_0xFCCDDE0E48CF9588("missrampageintrooutro");
						if (iLocal_379 != -1)
						{
							if (unk_0xA12FA3F7428EE798(iLocal_379))
							{
								unk_0x7DC528E86B55C67E(iLocal_379);
							}
						}
						unk_0xD581373770173F1F();
						func_31(26, 1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0x8028488F650E6677("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_67(unk_0xFC1458A37D98B502(), 2457,49f, 4977,095f, 50,56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0x1E56F4F04588C11A(1);
						unk_0x1D60449E9FA475EF(1);
						unk_0xABEF7F0F7ED126F3("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/])) && !unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1981,257f, 3050,721f, 41,08995f, 1984,257f, 3055,543f, 49,47314f, 3,0625f, 0, 1, 0))
							{
								if (unk_0x78F50AA8F955BEFC(Local_113[12 /*33*/], 150319005) == 7)
								{
									unk_0x60C06BFD037BB7CF(Local_113[13 /*33*/], unk_0xFC1458A37D98B502(), -1, 0, 2);
									unk_0x60C06BFD037BB7CF(Local_113[14 /*33*/], unk_0xFC1458A37D98B502(), -1, 0, 2);
									unk_0x60C06BFD037BB7CF(Local_113[12 /*33*/], unk_0xFC1458A37D98B502(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_67(unk_0xFC1458A37D98B502(), 2450,214f, 4979,208f, 60,8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iVar4 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							if (unk_0xB8DE76287EDC4957(iVar4, 0))
							{
								if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar4)) || unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0x90D5DFB054818BA7(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0x218AB919A4668C70(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_385[iParam0 /*10*/].f_6 = 1;
						unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 321, 1);
						if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), unk_0x8B948C59217A295D("walkinterruptible")))
						{
							unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1871534317, 0, 0, 0);
							if (func_168())
							{
								unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 1)
					{
						unk_0xFCCDDE0E48CF9588("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/])) && !unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								unk_0xCE93FCB8A8D8DF0B(Local_113[12 /*33*/], iLocal_154);
								unk_0xCE93FCB8A8D8DF0B(Local_113[13 /*33*/], iLocal_154);
								unk_0xCE93FCB8A8D8DF0B(Local_113[14 /*33*/], iLocal_154);
								unk_0xAE6EBBBBD8B9FB30(Local_113[12 /*33*/], 17, true);
								unk_0xAE6EBBBBD8B9FB30(Local_113[13 /*33*/], 17, true);
								unk_0xAE6EBBBBD8B9FB30(Local_113[14 /*33*/], 17, true);
								unk_0x2B0DDE3D071497AD(Local_113[12 /*33*/]);
								unk_0x2B0DDE3D071497AD(Local_113[13 /*33*/]);
								unk_0x2B0DDE3D071497AD(Local_113[14 /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]) || unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/])) || unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]))
							{
								if (unk_0x9479D23F28CA059C(Local_113[12 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]))
							{
								if (unk_0x9479D23F28CA059C(Local_113[13 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								if (unk_0x9479D23F28CA059C(Local_113[14 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[12 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[12 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[12 /*33*/]));
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[13 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[13 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[13 /*33*/]));
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_113[14 /*33*/], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(Local_113[14 /*33*/], true);
								unk_0x486F346ADFE56674(&(Local_113[14 /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xABEF7F0F7ED126F3("chinese2_explosion_cutscene");
							unk_0x8E7C072C41DF97BF();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_166 == 1)
							{
								if (unk_0x8028488F650E6677("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 2)
							{
								if (unk_0x8028488F650E6677("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 3)
							{
								if (unk_0x8028488F650E6677("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0xE48C631281D64F7F())
							{
								Local_385[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_7)
							{
								if (unk_0x2C2E1E35924B9FF2(unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())))
								{
									unk_0x91C52DAA1CBF6F0B(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) + Vector(0f, unk_0x5B811202FCBE9E9D(0f, 4f), unk_0x5B811202FCBE9E9D(0f, 4f)), 16, 1,5f, 1, 0, 1f, 0);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(250, 520));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = 0;
							while (iVar5 < vLocal_384.x)
							{
								if (!unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0x4E69510C44147A5C(-1, vLocal_384[iVar5 /*3*/], 5f))
									{
										unk_0x872F1C1F8587CCC7(&(Local_385[iParam0 /*10*/].f_7), iVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0)
										{
											Local_385[iParam0 /*10*/].f_6 = unk_0x53C562FD2B9E3AB0() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < vLocal_384.x)
								{
									if (!unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0x91C52DAA1CBF6F0B(vLocal_384[iVar5 /*3*/], 16, 1,5f, 1, 0, 1f, 0);
										unk_0x872F1C1F8587CCC7(&(Local_385[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_385[iParam0 /*10*/].f_8 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 1;
									Local_385[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_99(iVar6, 20, 0, 0);
					func_99(iVar7, 20, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xDE285E8FA18B66DD("RADIO_01_CLASS_ROCK");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								if (unk_0x4395F3F89845A398())
								{
									iLocal_144 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
									if (unk_0xB8DE76287EDC4957(iLocal_144, 0))
									{
										if (!unk_0xAC6FC114B15F95EC(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0xAAB7D68F04F8C8BA("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0x8810DC630928B398("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_144))
							{
								if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_144, 0))
								{
									if (unk_0xAC6FC114B15F95EC(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + unk_0x53C562FD2B9E3AB0() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_144))
							{
								if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_144, 0))
								{
									if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_7)
									{
										if (unk_0x8D0D3BB074DAEB2C() != 6 && unk_0x8D0D3BB074DAEB2C() != 0)
										{
											if (unk_0x4017D762C3E8EB65() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_82("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_82("CHI2_rad"))
							{
								if (func_68(iLocal_144))
								{
									if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_144, 0))
									{
										if (!unk_0xF2B58F79D29425B4(0, 85))
										{
											if (unk_0x8D0D3BB074DAEB2C() != 6)
											{
												if (iLocal_177 == -1)
												{
													iLocal_177 = unk_0xD0CA83418A236CB4();
													unk_0x4AFBCBFDE748D4E0(iLocal_177, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!unk_0xF2B58F79D29425B4(0, 85))
							{
								if (unk_0x8810DC630928B398("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0xE859EF37EA7362D3("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_144))
							{
								if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_144, 0))
								{
									if (unk_0x8D0D3BB074DAEB2C() == 6)
									{
										if (unk_0x4017D762C3E8EB65() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0xFC1458A37D98B502(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					unk_0x94BD6F0436473406(1f);
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
					unk_0xC0EBC1452FCAB15C(5);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_90(2448,25f, 4974,92f, 55,11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_179 != 0)
						{
							unk_0xA1451353A1AED1A5(iLocal_179);
						}
						iLocal_179 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
							{
								Local_385[iParam0 /*10*/].f_7 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0xF2B58F79D29425B4(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_385[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_385[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_385[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_385[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = -1;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0xF2B58F79D29425B4(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_7 == -1)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
										}
										if (iLocal_93 == 0)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (system::timestep() * 2f));
										}
										else if (iLocal_93 < 30 && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (system::timestep() * 1,5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + system::timestep());
										}
										iVar11 = system::floor((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											unk_0xF28A81E331A3F337(unk_0xFC1458A37D98B502(), iVar10, iVar11, 0);
										}
										else
										{
											unk_0xF28A81E331A3F337(unk_0xFC1458A37D98B502(), iVar10, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_167());
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					unk_0x57861FD7C1425428("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_166(1);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_166(0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0x1E56F4F04588C11A(3);
					unk_0x1D60449E9FA475EF(3);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x6ADD12BF4D6D2587(Local_113[4 /*33*/].f_20))
							{
								unk_0x3A703774620FDB42(&(Local_113[4 /*33*/].f_20));
							}
							if (unk_0x6ADD12BF4D6D2587(Local_113[5 /*33*/].f_20))
							{
								unk_0x3A703774620FDB42(&(Local_113[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_170)
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_170[iVar12]))
								{
									unk_0x3A703774620FDB42(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							unk_0x14776E43F90DD454(joaat("prop_cs_beer_bot_01"));
							unk_0x14776E43F90DD454(joaat("prop_ld_can_01"));
							unk_0x14776E43F90DD454(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x3AB6A1A9084FB0A4(Local_113[23 /*33*/]))
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_373))
								{
									unk_0x3A703774620FDB42(&iLocal_373);
									unk_0x45452336A6C88BE0(joaat("weapon_sawnoffshotgun"));
									Local_385[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
					{
						if (!unk_0x33B1D0D0C92D4F18(Local_113[11 /*33*/]))
						{
							if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
								{
									unk_0xE44A9E63DC81244A(Local_113[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x6FF834D85E2DD4C6(joaat("ig_taocheng"));
							unk_0x6FF834D85E2DD4C6(joaat("ig_taostranslator"));
							unk_0x6450931B826B49D9("misschinese2_crystalmaze");
							if (iLocal_379 == -1 || (iLocal_379 != -1 && !unk_0xA12FA3F7428EE798(iLocal_379)))
							{
								iLocal_379 = unk_0x068179DC75448F03(1991,081f, 3054,517f, 46,71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0x3A801AA34DD821BE("misschinese2_crystalmaze") && unk_0x9A0B2ED5055D3F0B(joaat("ig_taocheng"))) && unk_0x9A0B2ED5055D3F0B(joaat("ig_taostranslator")))
							{
								if (!unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
								{
									Local_113[11 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_taocheng"), 1991,988f, 3054,51f, 46,215f, 0f, 1, true);
									unk_0xCE93FCB8A8D8DF0B(Local_113[11 /*33*/], iLocal_118);
									unk_0x5C5D33A1B2711D21(Local_113[11 /*33*/], false);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
								{
									unk_0xCE93FCB8A8D8DF0B(Local_113[11 /*33*/], iLocal_118);
									unk_0x5C5D33A1B2711D21(Local_113[11 /*33*/], false);
								}
								if (!unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
								{
									Local_113[10 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_taostranslator"), 1991,988f, 3054,51f, 46,215f, 0f, 1, true);
									unk_0xCE93FCB8A8D8DF0B(Local_113[10 /*33*/], iLocal_118);
									unk_0x5C5D33A1B2711D21(Local_113[10 /*33*/], false);
									unk_0x0B652E456D6A7E32(Local_113[10 /*33*/], 1, 0, 1, false);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
								{
									unk_0xCE93FCB8A8D8DF0B(Local_113[10 /*33*/], iLocal_118);
									unk_0x5C5D33A1B2711D21(Local_113[10 /*33*/], false);
								}
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
								{
									if (!unk_0xD56F740235B1E8F0(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0x7122D672EBE0EA6E(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0x8E628F774C748D93(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
								{
									if (!unk_0xD56F740235B1E8F0(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0x7122D672EBE0EA6E(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0x8E628F774C748D93(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]) && !unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
							{
								unk_0x03924C68EFCBC511(Local_113[10 /*33*/], 0, 0, 0, 0);
								unk_0x771A86309E0CA47B(Local_113[11 /*33*/], 1);
								unk_0x771A86309E0CA47B(Local_113[10 /*33*/], 1);
								if (!unk_0xD56F740235B1E8F0(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
									unk_0x8E628F774C748D93(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x8E628F774C748D93(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x7122D672EBE0EA6E(Local_385[iParam0 /*10*/].f_7, 1);
								}
								unk_0xAE01EF4BC84AFE7C(Local_113[11 /*33*/], 118, false);
								unk_0xAE01EF4BC84AFE7C(Local_113[11 /*33*/], 208, true);
								unk_0xAE01EF4BC84AFE7C(Local_113[10 /*33*/], 118, false);
								unk_0xAE01EF4BC84AFE7C(Local_113[10 /*33*/], 208, true);
								Local_385[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
							{
								if (!unk_0x9F887157983E8EFC(Local_113[11 /*33*/]))
								{
									if (unk_0xD56F740235B1E8F0(Local_385[iParam0 /*10*/].f_7))
									{
										if (unk_0x463C4747B41E35A3(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
											unk_0x7122D672EBE0EA6E(Local_385[iParam0 /*10*/].f_7, 1);
											if (unk_0x63A6486593EC7EC3(0, 3) < 2)
											{
												unk_0x8E628F774C748D93(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
												{
													if (!unk_0x9F887157983E8EFC(Local_113[10 /*33*/]))
													{
														if (!unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0x8E628F774C748D93(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0x8E628F774C748D93(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
												{
													if (!unk_0x9F887157983E8EFC(Local_113[10 /*33*/]))
													{
														if (!unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0x8E628F774C748D93(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
										unk_0x8E628F774C748D93(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0x7122D672EBE0EA6E(Local_385[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
							{
								if (((unk_0xEBE499597C718EB8(Local_113[10 /*33*/], unk_0xFC1458A37D98B502(), 1) || unk_0x9F887157983E8EFC(Local_113[10 /*33*/])) || unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/])) || (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]) && unk_0x78F50AA8F955BEFC(Local_113[10 /*33*/], 1785177548) == 2))
								{
									if (!unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_8, 0))
									{
										unk_0xB8E08BD5B184DF4E(Local_113[10 /*33*/]);
										func_93();
										unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 30f, 20000, 0, 0);
										unk_0xF21E6EBE8EFDCC28(0, -1);
										func_92(&(Local_113[10 /*33*/]), 0);
										unk_0x872F1C1F8587CCC7(&(Local_385[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
							{
								if (((unk_0xEBE499597C718EB8(Local_113[11 /*33*/], unk_0xFC1458A37D98B502(), 1) || unk_0x9F887157983E8EFC(Local_113[11 /*33*/])) || unk_0xC80D31E4B587871C(Local_385[iParam0 /*10*/].f_8, 1)) || (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]) && unk_0x78F50AA8F955BEFC(Local_113[11 /*33*/], 1785177548) == 2))
								{
									unk_0xE01CE1EBCD7EE551(Local_113[11 /*33*/], 0, 0);
									if (!unk_0x9F887157983E8EFC(Local_113[11 /*33*/]))
									{
									}
								}
							}
							if (func_67(unk_0xFC1458A37D98B502(), 1991,988f, 3054,51f, 46,215f, 1) > 200f)
							{
								if (unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]) && unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
								{
									unk_0x68433819717660CF(&(Local_113[11 /*33*/]));
									unk_0x68433819717660CF(&(Local_113[10 /*33*/]));
								}
								unk_0x14776E43F90DD454(joaat("ig_taocheng"));
								unk_0x14776E43F90DD454(joaat("ig_taostranslator"));
								unk_0xFCCDDE0E48CF9588("misschinese2_crystalmaze");
								if (iLocal_379 != -1)
								{
									if (unk_0xA12FA3F7428EE798(iLocal_379))
									{
										unk_0x7DC528E86B55C67E(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_67(unk_0xFC1458A37D98B502(), 1995,169f, 3062,162f, 46,049f, 1) < 7f)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
						{
							if (unk_0x78F50AA8F955BEFC(Local_113[11 /*33*/], 150319005) != 1)
							{
								unk_0x60C06BFD037BB7CF(Local_113[11 /*33*/], unk_0xFC1458A37D98B502(), 4000, 2096, 2);
							}
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
						{
							if (unk_0x78F50AA8F955BEFC(Local_113[10 /*33*/], 150319005) != 1)
							{
								unk_0x60C06BFD037BB7CF(Local_113[10 /*33*/], unk_0xFC1458A37D98B502(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_382 = 0;
					iVar13 = 0;
					while (iVar13 < Local_113)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_113[iVar13 /*33*/]))
						{
							if (unk_0x3AB6A1A9084FB0A4(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0x4050C3F752DDC5B3(Local_113[iVar13 /*33*/]) == 392730790 || unk_0x4050C3F752DDC5B3(Local_113[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0x4050C3F752DDC5B3(Local_113[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0x4050C3F752DDC5B3(Local_113[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0)
					{
					}
					if (iLocal_382 > 1)
					{
						func_165(150);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					unk_0x1267474D9A69CA37(4f, 15f, 4);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_87(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (unk_0xB8B3E5529EDB87D4(uLocal_176))
					{
						unk_0x60727D07B2D72C82(uLocal_176);
					}
					iVar14 = 0;
					unk_0x872F1C1F8587CCC7(&iVar14, 3);
					unk_0x872F1C1F8587CCC7(&iVar14, 8);
					unk_0x872F1C1F8587CCC7(&iVar14, 1);
					if (!unk_0xB8B3E5529EDB87D4(uLocal_176))
					{
						uLocal_176 = unk_0x06583789B8C15A6C(joaat("pickup_weapon_petrolcan"), 2436,775f, 4967,487f, 41,4f, iVar14, -1, 1, 0);
						unk_0x6E795A41127FC848(uLocal_176, "V_8_BasementRm");
						iLocal_178 = func_164(uLocal_176);
						unk_0x62BD54E491535B76(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_166(1);
						unk_0xE859EF37EA7362D3("CHI_2_SHOOTOUT_STEALTH");
						unk_0xC234848D21B6064E(1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0xFCCDDE0E48CF9588("misschinese2_barrelRoll");
					unk_0x2682425A18AA99E9("move_m@gangster@var_e");
					unk_0x2682425A18AA99E9("move_m@gangster@var_f");
					unk_0x2682425A18AA99E9("move_m@gangster@generic");
					unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0x1ACD6691B9C9AA46(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_385[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0xCE93FCB8A8D8DF0B(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											func_128(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_385[iParam0 /*10*/].f_7 = 0;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x0F3033474C49912D(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457,885f, 4981,169f, 50,00518f, 2441,58f, 4965,088f, 56,24006f, 34,3125f, 0, 1, 0))
							{
								unk_0x68433819717660CF(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_113)
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar15 /*33*/]))
						{
							if (unk_0x078FCDE51274A1BF(Local_113[iVar15 /*33*/]) != unk_0x8B948C59217A295D("V_8_BasementRm"))
							{
								func_99(iVar15, 27, 0, 0);
								Local_113[iVar15 /*33*/].f_1 = 5;
								Local_119[iVar15 /*24*/].f_3 = 7;
								Local_113[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_385[iParam0 /*10*/].f_7 != -1)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_99(Local_385[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || func_87(9))
					{
						unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 1, -1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0xE02E32C69260FBB7("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0xE859EF37EA7362D3("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0x771D0F8F56A5FE6C("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0xE02E32C69260FBB7("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0x771D0F8F56A5FE6C("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							unk_0xE859EF37EA7362D3("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						unk_0xE02E32C69260FBB7("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!unk_0x3AB6A1A9084FB0A4(Local_113[8 /*33*/]) && unk_0x7ED4D0E480A6EC43(Local_113[8 /*33*/], 0))) || (!unk_0x3AB6A1A9084FB0A4(Local_113[9 /*33*/]) && unk_0x7ED4D0E480A6EC43(Local_113[9 /*33*/], 0)))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[8 /*33*/]))
						{
							unk_0xBB3CC641B6AED5E5(Local_113[8 /*33*/], 45);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[9 /*33*/]))
						{
							unk_0xBB3CC641B6AED5E5(Local_113[9 /*33*/], 45);
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_87(9))
					{
						Local_385[iParam0 /*10*/].f_7 = 0;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x253DB96AF5D6551B(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_87(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x253DB96AF5D6551B(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_156(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x253DB96AF5D6551B(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x6450931B826B49D9("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x3A801AA34DD821BE("misschinese2_crystalmaze"))
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[23 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0x8383F9C605E523B7(2435,312f, 4967,087f, 41,35f, 0f, 0f, 11,4f, 2);
									unk_0xD0E12C501EE26329(Local_385[iParam0 /*10*/].f_7, 1);
									unk_0x8E628F774C748D93(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x6FF834D85E2DD4C6(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x9A0B2ED5055D3F0B(joaat("blazer")))
							{
								iLocal_146 = unk_0xEA60F3B426BB095B(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
								unk_0xACE486395AA1867D(iLocal_146, 1084227584);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
					func_163(0);
					func_161();
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_87(29))
							{
								if (unk_0xA6DECE14FC9A8C51(iLocal_178))
								{
									unk_0xE30CF11C0EE14316(&iLocal_178);
								}
								func_12(0);
								if (func_84("FRMFLC", 0, 0))
								{
									unk_0x84CDD933AFA470D2();
								}
								func_10(157, 0);
								unk_0x1267474D9A69CA37(3f, 10f, 4);
								if (iLocal_167 == 0)
								{
									iLocal_167 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								func_9(158, (iLocal_167 - unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"))), 1);
								iLocal_180 = unk_0xCBD07018689DF383(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 20f, unk_0xD50D486F1F311BFC(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_180 != 0)
								{
									if (unk_0xA6DECE14FC9A8C51(iLocal_178))
									{
										unk_0xE30CF11C0EE14316(&iLocal_178);
									}
									iLocal_178 = func_13(iLocal_180);
									func_12(1);
									func_11(0, 157);
								}
								Local_385[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_385[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x307EAE14C924E2E7("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xC316B5E3E7ACF515("arm2_30"))
							{
								if (func_87(29))
								{
									unk_0x3794E4CC2803099A("arm2_30", 1, 1f, 0,5f);
									unk_0x270D9F7773F9010C("arm2_30", 2);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								unk_0x3794E4CC2803099A("arm2_30", 0, 1f, 0,5f);
								Local_385[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == 0)
						{
							if (func_67(unk_0xFC1458A37D98B502(), 2451,08f, 4961,463f, 44,4392f, 1) < 20f)
							{
								unk_0xD962590C2CBF44C4(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					unk_0x23A4CE7F9EBB02D4(iLocal_171, "FarmhouseFire_Ignite", vLocal_172, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0xE859EF37EA7362D3("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x1CF95440F1970B4F("FARMHOUSE_FIRE", false, -1);
							unk_0x1CF95440F1970B4F("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(4);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_67(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454,895f, 4950,895f, 44,1488f, 1) > 100f && func_4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], unk_0xFC1458A37D98B502(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar16 /*33*/]))
								{
									unk_0xE9B3D12A64CC7C1A(Local_113[iVar16 /*33*/], true);
									unk_0x486F346ADFE56674(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar16 /*33*/]))
								{
									unk_0xE9B3D12A64CC7C1A(Local_113[iVar16 /*33*/], true);
									unk_0x486F346ADFE56674(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar16 /*33*/]))
								{
									unk_0xE9B3D12A64CC7C1A(Local_113[iVar16 /*33*/], true);
									unk_0x486F346ADFE56674(&(Local_113[iVar16 /*33*/]));
								}
								func_128(&(Local_113[iVar16 /*33*/].f_25));
								Local_113[iVar16 /*33*/] = 0;
								if (unk_0xB8DE76287EDC4957(iLocal_145, 0))
								{
									unk_0x5380482A432E314E(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433,123f, 4960,47f, 45,8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0xBB3CC641B6AED5E5(Local_113[24 /*33*/], 100);
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[15 /*33*/]))
						{
							unk_0xBB3CC641B6AED5E5(Local_113[15 /*33*/], 100);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[16 /*33*/]))
						{
							unk_0xBB3CC641B6AED5E5(Local_113[16 /*33*/], 100);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[17 /*33*/]))
						{
							unk_0xBB3CC641B6AED5E5(Local_113[17 /*33*/], 100);
						}
						unk_0xD7F5B2902EBBD04E(Local_113[24 /*33*/], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0x3811A0FC01E02FC1(Local_113[24 /*33*/], 1);
						unk_0xE01CE1EBCD7EE551(Local_113[24 /*33*/], 200, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == -1)
			{
				Local_385[iParam0 /*10*/].f_3 = 1;
				Local_385[iParam0 /*10*/].f_6 = 0;
				Local_385[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_161()//Position - 0x163F1
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!func_162(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			unk_0x49779D62887BC4A2(Local_109[iVar0 /*5*/], 4f);
			unk_0x247EAA2E93D4A021(Local_109[iVar0 /*5*/], 2f, 1, 0, 0, false);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_113[iVar1 /*33*/]))
				{
					vVar2 = { unk_0xB3328BA8976B416C(Local_113[iVar1 /*33*/], 0) };
					if (system::vdist2(vVar2, Local_109[iVar0 /*5*/]) < 2f && vVar2.z > 43,9f)
					{
						unk_0x68433819717660CF(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_162(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x164A4
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_163(bool bParam0)//Position - 0x164EB
{
	int iVar0;
	
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_108 = 0;
	iLocal_108 = 0;
	iLocal_102 = 0;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		unk_0xF4A2B3ABAFAEF9EE(Local_109[iVar0 /*5*/], 1f);
		if (!unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*5*/].f_3))
		{
			if (!func_162(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x312E513AE531074E(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0xA5D25D3F884FF516(Local_109[iVar0 /*5*/].f_3, 0,4f);
				unk_0x9C27373CC69ECF87(Local_109[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 0);
				}
				unk_0x0C71C8E276E3EC54(Local_109[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { unk_0x67247AA13B7486A3(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0xF20857E4CB32A2B7(Local_109[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_164(var uParam0)//Position - 0x16649
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(uParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_6(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

void func_165(int iParam0)//Position - 0x16681
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

void func_166(bool bParam0)//Position - 0x166F2
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

var func_167()//Position - 0x1671E
{
	var uVar0;
	
	return uVar0;
}

int func_168()//Position - 0x16728
{
	if (((((unk_0x9473DAD46D61B987(2, 30) != 127 || unk_0x9473DAD46D61B987(2, 31) != 127) || unk_0xF2B58F79D29425B4(2, 24)) || unk_0xF2B58F79D29425B4(2, 25)) || unk_0x9473DAD46D61B987(2, 2) != 127) || unk_0x9473DAD46D61B987(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)//Position - 0x1678A
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_170(int iParam0, int iParam1)//Position - 0x167AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_388)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 1;
				Local_388[iVar1 /*8*/].f_2 = 0;
				Local_388[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_388)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 2:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0)
					{
						if (func_84("FRMCHSE_1", 0, 0))
						{
							Local_388[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_84("FRMCHSE_1", 0, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (unk_0x4FB2BF5239979F9A(2493,155f, 4970,315f, 43,88038f, 3,25f, 1, 1) || unk_0x5679106BC7ED79EE(2493,155f, 4970,315f, 43,88038f, 3,25f, 1))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_388[iVar3 /*8*/].f_5 = func_18(8);
							Local_388[iVar3 /*8*/].f_6 = func_18(9);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_388[iVar3 /*8*/].f_5 != -1 && Local_388[iVar3 /*8*/].f_6 != -1)
							{
								if (unk_0x6ADD12BF4D6D2587(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && unk_0x6ADD12BF4D6D2587(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0x3AB6A1A9084FB0A4(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || unk_0x3AB6A1A9084FB0A4(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) == unk_0x8B948C59217A295D("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0 && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2421,331f, 4954,833f, 25,32829f, 2466,796f, 4996,822f, 66,07018f, 37,1875f, 0, 1, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2457,885f, 4981,169f, 50,00518f, 2441,58f, 4965,088f, 56,24006f, 34,3125f, 0, 1, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xFC1458A37D98B502(), 2451,517f, 4973,122f, 44,2646f, 1) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_388[iVar3 /*8*/].f_5 != -1)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x6ADD12BF4D6D2587(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0x3AB6A1A9084FB0A4(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_67(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427,851f, 4964,972f, 43,1704f, 1) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_113)
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_113[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_113;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_91(10, 0);
							}
							else
							{
								func_91(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_87(9))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_113)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 1)
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_388[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_113;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_67(unk_0xFC1458A37D98B502(), 2446,674f, 4977,788f, 57,4583f, 1) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iVar9 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
							if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar9)) || unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar9)))
							{
								if (func_67(unk_0xFC1458A37D98B502(), 2446,674f, 4977,788f, 57,4583f, 0) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_67(unk_0xFC1458A37D98B502(), 2446,674f, 4977,788f, 57,4583f, 1) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_67(unk_0xFC1458A37D98B502(), 2441,065f, 4968,819f, 45,83075f, 1) < 2,75f)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[15 /*33*/]))
					{
						if (func_67(Local_113[15 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[16 /*33*/]))
					{
						if (func_67(Local_113[16 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[17 /*33*/]))
					{
						if (func_67(Local_113[17 /*33*/], 2439,386f, 4962,049f, 45,9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[4 /*33*/]) && unk_0x1ED974E122CB5C47(Local_113[4 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[5 /*33*/]) && unk_0x1ED974E122CB5C47(Local_113[5 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[7 /*33*/]) && unk_0x1ED974E122CB5C47(Local_113[7 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = unk_0x53C562FD2B9E3AB0() + 8000;
						break;
					
					case 1:
						if (unk_0xB8DE76287EDC4957(iLocal_145, 0))
						{
							if (func_90(unk_0xB3328BA8976B416C(iLocal_145, 1), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + system::floor((system::timestep() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 1500)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0x53C562FD2B9E3AB0() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xB8B3E5529EDB87D4(uLocal_176))
						{
							if (unk_0x4C6D8414E075A2B8(uLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0xB8B3E5529EDB87D4(uLocal_176))
						{
							if (!unk_0x4C6D8414E075A2B8(uLocal_176))
							{
								if (unk_0x4E69510C44147A5C(-1, 2435,252f, 4966,748f, 41,3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2442,819f, 4970,283f, 45,2481f, 2439,625f, 4966,862f, 48,14596f, 3,4375f, 0, 1, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2434,671f, 4959,104f, 44,85109f, 2440,5f, 4965,189f, 48,1231f, 3,625f, 0, 1, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2432,467f, 4959,473f, 44,94133f, 2430,797f, 4961,173f, 48,30901f, 1,5625f, 0, 1, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2447,671f, 4951,438f, 43,25576f, 2454,664f, 4957,856f, 47,89117f, 6,8125f, 0, 1, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_388[iVar3 /*8*/].f_2 = 0;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0:
						if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_388[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_109[0 /*5*/].f_4 == 1)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_388[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0xF2B58F79D29425B4(0, 24))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0x34D9850FEBB1F859(-1, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f))
				{
					if (!unk_0x34D9850FEBB1F859(24, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f) && !unk_0x34D9850FEBB1F859(22, 2435,776f, 4963,067f, 39,34265f, 2428,118f, 4971,287f, 43,67327f, 11,875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_174())
						{
							iVar12 = func_173();
							if (iVar12 <= 17)
							{
								func_91(37, 1);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_172(17))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_67(unk_0xFC1458A37D98B502(), 2439,52f, 4969,67f, 52,65f, 1) > 42,5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_67(unk_0xFC1458A37D98B502(), 2439,52f, 4969,67f, 52,65f, 1) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_171())
				{
					if (!func_174())
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = unk_0x53C562FD2B9E3AB0() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0x53C562FD2B9E3AB0() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xFC1458A37D98B502(), 2448,25f, 4974,92f, 55,11f, 1) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_147(1, 49))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xFC1458A37D98B502(), 2448,25f, 4974,92f, 55,11f, 1) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_171()//Position - 0x17744
{
	if (iLocal_102 == 1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x17758
{
	if (unk_0xAA0BDFF32B6BC02A(Local_109[iParam0 /*5*/], 0,6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x1777B
{
	return iLocal_100;
}

int func_174()//Position - 0x17786
{
	int iVar0;
	
	iVar0 = (Local_109 - 1);
	while (iVar0 >= 0)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (unk_0xAA0BDFF32B6BC02A(Local_109[iVar0 /*5*/], 0,6f) > 0)
			{
				vLocal_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_175()//Position - 0x177E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x4199B82A888F9448();
	if ((func_195() && iLocal_150 > 0) && unk_0x53C562FD2B9E3AB0() > iLocal_159)
	{
		while (!unk_0x3E9CABD07B829173())
		{
			unk_0xAE83ED4C9081AE6F(1000);
			func_28(28, 1);
		}
		iLocal_577 = 0;
		while (!func_194())
		{
			func_28(32322, 1);
		}
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2474,97f, 4946,047f, 44,0297f, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 230,6937f);
		unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
		unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
		func_186(0, 1, 1, 0);
		unk_0x4779448854314440(0);
		unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		unk_0xBB9A3C553EECB180(0f);
		unk_0x7C9705890EF6612E(0f, 1065353216);
		unk_0x84CDD933AFA470D2();
		unk_0x420E85646D8AFCB8("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_173 = unk_0x0B4BABF632AE674E(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_158 = 0;
		iLocal_163 = iLocal_163;
		iLocal_163 = 99;
		iLocal_150 = 99;
		iLocal_139 = 3;
		fLocal_138 = 10000f;
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 965837842, 1);
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 247384786, 1);
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, -247908770, 0);
		unk_0x8E7C072C41DF97BF();
		unk_0x61635C0A7950C875();
		bLocal_165 = true;
	}
	unk_0x36853D5037847BF3();
	switch (iLocal_150)
	{
		case 0:
			func_194();
			bLocal_165 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0,6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0x771D0F8F56A5FE6C("CHI_2_POUR_GAS"))
			{
				unk_0xE02E32C69260FBB7("CHI_2_POUR_GAS");
			}
			if (unk_0x771D0F8F56A5FE6C("CHI_2_SHOOT_GAS"))
			{
				unk_0xE02E32C69260FBB7("CHI_2_SHOOT_GAS");
			}
			unk_0xE859EF37EA7362D3("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = unk_0x53C562FD2B9E3AB0() + 1000;
			unk_0x247EAA2E93D4A021(2570,53f, 4982,057f, 50,6819f, 100f, 1, 0, 0, false);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
			func_81(0);
			iLocal_392 = 0;
			func_81(1);
			unk_0x84CDD933AFA470D2();
			func_185(2467,775f, 4954,415f, 42,87803f, 2477,089f, 4945,079f, 46,16654f, 4,0625f, 2486,854f, 4939,086f, 43,2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2455,941f, 4952,801f, 44,112f, 1, 0, 0, 1);
			}
			unk_0x41390D2B41D5502D(1f);
			unk_0xFCCDDE0E48CF9588("misschinese2_barrelRoll");
			unk_0x2682425A18AA99E9("move_m@gangster@var_e");
			unk_0x2682425A18AA99E9("move_m@gangster@var_f");
			unk_0x2682425A18AA99E9("move_m@gangster@generic");
			unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
			unk_0xFCCDDE0E48CF9588("misschinese2_bank1");
			unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_variations@b");
			unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@left");
			unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@right");
			unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@backward");
			unk_0x14776E43F90DD454(joaat("a_m_m_hillbilly_02"));
			unk_0x14776E43F90DD454(joaat("a_m_y_methhead_01"));
			unk_0x14776E43F90DD454(joaat("prop_cs_fertilizer"));
			unk_0x14776E43F90DD454(joaat("burrito"));
			unk_0x14776E43F90DD454(joaat("prop_cs_beer_bot_01"));
			unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_113[iVar1 /*33*/]))
				{
					unk_0x68433819717660CF(&(Local_113[iVar1 /*33*/]));
				}
				if (unk_0x6ADD12BF4D6D2587(Local_113[iVar1 /*33*/].f_20))
				{
					unk_0x452336926718D62A(&(Local_113[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		
		case 1:
			if (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076())
			{
				unk_0x59C3AC31C7544A28(1000);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0;
		iVar2 = 0;
		while (iVar2 < Local_137)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_136)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_137)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0;
			Local_137[iVar2 /*18*/] = { unk_0x358591F279CE2987(unk_0x82EC2206AAF7618A()) };
			Local_137[iVar2 /*18*/].f_3 = { unk_0xA6EB123F0C0560D9(unk_0x82EC2206AAF7618A(), 2) };
			Local_137[iVar2 /*18*/].f_14 = unk_0xD63C87A79D8F4A4E(unk_0x82EC2206AAF7618A());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0;
			Local_137[iVar2 /*18*/].f_6 = { unk_0x358591F279CE2987(unk_0x82EC2206AAF7618A()) };
			Local_137[iVar2 /*18*/].f_9 = { unk_0xA6EB123F0C0560D9(unk_0x82EC2206AAF7618A(), 2) };
			Local_137[iVar2 /*18*/].f_15 = unk_0xD63C87A79D8F4A4E(unk_0x82EC2206AAF7618A());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		bLocal_134 = false;
		iLocal_174 = 0;
		unk_0x247EAA2E93D4A021(2431,097f, 4967,043f, 41,3476f, 20f, 1, 0, 0, false);
		func_184();
	}
	if (!bLocal_134)
	{
		if (unk_0xE48C631281D64F7F())
		{
			unk_0x64360FBB0CD3420D(5, 5, 5, 5);
			unk_0x0FEA4EBF2224FFAE();
			iLocal_139 = -1;
			unk_0x4779448854314440(0);
			func_186(1, 1, 1, 0);
			unk_0x6450931B826B49D9("misschinese2_crystalmaze");
			bLocal_134 = true;
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/] = 0;
			Local_136[0 /*6*/].f_4 = 0;
			Local_136[0 /*6*/].f_5 = 0;
			Local_136[1 /*6*/].f_4 = 0;
			Local_136[1 /*6*/].f_5 = 0;
			Local_136[2 /*6*/].f_4 = 0;
			Local_136[2 /*6*/].f_5 = 0;
			Local_136[3 /*6*/].f_4 = 0;
			Local_136[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			unk_0x4929A4FD75F576BD();
			unk_0x0662098C9EF126B4(4);
			switch (iLocal_166)
			{
				case 3:
					system::settimera(0);
					break;
				
				case 2:
					Local_136[0 /*6*/] = 1;
					Local_136[1 /*6*/] = 1;
					system::settimera(10900);
					iLocal_139 = 2;
					fLocal_138 = 10000f;
					break;
				
				case 1:
					Local_136[0 /*6*/] = 1;
					system::settimera(6400);
					iLocal_139 = 1;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0;
		}
	}
	if (bLocal_134)
	{
		unk_0x7CCAEEBB35C9B8E7(system::to_float(system::timera()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + system::timestep());
		if (iLocal_139 == -1 || ((iLocal_139 != -1 && iLocal_139 < 4) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_13 / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 3)
			{
				if (unk_0x3A801AA34DD821BE("misschinese2_crystalmaze"))
				{
					iLocal_155 = unk_0x03F9D5EC835EE606(964613260, 1);
					iLocal_156 = unk_0x8383F9C605E523B7(2452,914f, 4962,096f, 45,585f, 0f, 0f, 45f, 2);
					unk_0xEFF56C7BDABBF39B(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
					func_184();
					unk_0x03A64A3B1EE29DB1(1);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 4)
			{
				unk_0x4779448854314440(0);
				iLocal_155 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_14, 1, 2);
				unk_0xA6DE0FBA9218D7F0(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_15, system::floor(Local_137[iLocal_139 /*18*/].f_12), Local_137[iLocal_139 /*18*/].f_16, 1, 2);
				unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
				if (iLocal_139 < 2)
				{
					func_183(Local_137[iLocal_139 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_183(Local_137[iLocal_139 /*18*/].f_17, 1, 0);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				unk_0x4779448854314440(0);
				unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_165)
				{
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0x03A64A3B1EE29DB1(0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				func_181(0, 0, 1, 0);
				unk_0xE02E32C69260FBB7("CHI_2_GAS_TRAIL_FIRE");
				unk_0xD0C906ABF8DD7B95(uLocal_173, 9);
				unk_0x41390D2B41D5502D(1f);
				unk_0xFAC4E1A83A1073D9();
				if (unk_0x3E9CABD07B829173())
				{
					while (unk_0x20D62902F28677D2(uLocal_173) != 10)
					{
						func_28(29, 1);
					}
					unk_0x59C3AC31C7544A28(1000);
				}
				unk_0x61635C0A7950C875();
				func_176(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_136)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_143 = 0;
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_143++;
										if (iLocal_143 >= 12)
										{
											Local_136[iVar3 /*6*/].f_4 = 10;
											Local_136[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
											Local_136[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										if (iLocal_143 == 2)
										{
											Local_136[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										Local_136[iVar3 /*6*/].f_4 = 4;
										iLocal_143 = 3;
									}
									break;
								
								case 4:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										Local_136[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/] + vLocal_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										Local_136[iVar3 /*6*/].f_4 = 6;
										iLocal_143 = 5;
									}
									break;
								
								case 6:
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										func_122(vLocal_142[iLocal_143 /*3*/], 0);
										func_122(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 200;
										Local_136[iVar3 /*6*/].f_4 = 2;
										iLocal_143 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0x91C52DAA1CBF6F0B(2432,534f, 4968,383f, 42,2389f, 4, 0,5f, 1, 0, 1f, 0);
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_174 = 1;
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x8EA3C8E091EA5BA4(iLocal_155))
							{
								unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								unk_0xC5096E22BFD7E012(iLocal_155, 0,1f);
								Local_136[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2473,208f, 4947,625f, 44,0664f, 1, 0, 0, 1);
									unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 223,493f);
									unk_0xBB9A3C553EECB180(0f);
									unk_0x7C9705890EF6612E(-7f, 1065353216);
									if (func_182())
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), 1063765679, 1, 0, 0);
										unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 1, 0, 0);
										unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 500, 0, 1, 0);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = unk_0x53C562FD2B9E3AB0() + 1300;
									unk_0x107465D74C8D71AB("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_175 = (fLocal_175 - (system::timestep() * 1f));
									if (fLocal_175 < 0,2f)
									{
										fLocal_175 = 0,2f;
									}
									unk_0x41390D2B41D5502D(fLocal_175);
									if (unk_0x53C562FD2B9E3AB0() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_175 = (fLocal_175 + (system::timestep() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 1;
									}
									unk_0x420E85646D8AFCB8("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0x41390D2B41D5502D(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_176(int iParam0)//Position - 0x18577
{
	func_180();
	func_179();
	func_178();
	func_177();
	if (iParam0 == 11)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_177()//Position - 0x185A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_390)
	{
		Local_390[iVar0 /*7*/] = 0;
		Local_390[iVar0 /*7*/].f_1 = 0;
		Local_390[iVar0 /*7*/].f_3 = 0;
		Local_390[iVar0 /*7*/].f_2 = 0;
		Local_390[iVar0 /*7*/].f_4 = 0;
		Local_390[iVar0 /*7*/].f_5 = 0;
		Local_390[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_178()//Position - 0x18606
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_385)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 1;
			Local_385[iVar0 /*10*/].f_6 = -1;
			func_160(iVar0, Local_385[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_385[iVar0 /*10*/] = 0;
		Local_385[iVar0 /*10*/].f_1 = 0;
		Local_385[iVar0 /*10*/].f_2 = 0;
		Local_385[iVar0 /*10*/].f_3 = 0;
		Local_385[iVar0 /*10*/].f_6 = 0;
		Local_385[iVar0 /*10*/].f_4 = 0;
		Local_385[iVar0 /*10*/].f_5 = 0;
		Local_385[iVar0 /*10*/].f_7 = 0;
		Local_385[iVar0 /*10*/].f_8 = 0;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_179()//Position - 0x186BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		Local_388[iVar0 /*8*/] = 0;
		Local_388[iVar0 /*8*/].f_1 = 0;
		Local_388[iVar0 /*8*/].f_2 = 0;
		Local_388[iVar0 /*8*/].f_3 = 0;
		Local_388[iVar0 /*8*/].f_4 = 0;
		Local_388[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_180()//Position - 0x18710
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_389)
	{
		Local_389[iVar0 /*4*/] = 0;
		Local_389[iVar0 /*4*/].f_1 = 0;
		Local_389[iVar0 /*4*/].f_2 = 0;
		Local_389[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18752
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_182()//Position - 0x18785
{
	if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, bool bParam1, int iParam2)//Position - 0x1879E
{
	int iVar0;
	
	iLocal_103 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_102 = 1;
		iLocal_104 = unk_0x53C562FD2B9E3AB0();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			unk_0x3DCFE29D7523C919(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0)
			{
				unk_0xDC4784695BCD5F0A(Local_101[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_184()//Position - 0x18844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		unk_0x3DCFE29D7523C919(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*5*/].f_3))
		{
			unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

void func_185(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x188B9
{
	func_70(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_186(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x188E2
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_193(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_40())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_181(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_193(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_181(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_191(unk_0x9EB17624F44A8DA4())) && !func_188(unk_0x9EB17624F44A8DA4(), 0)) && !func_187())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_191(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_187()//Position - 0x189FB
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_188(int iParam0, int iParam1)//Position - 0x18A18
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_189(-1, 0) == 8;
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

int func_189(int iParam0, bool bParam1)//Position - 0x18A63
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_190();
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

int func_190()//Position - 0x18AA4
{
	return Global_1312736;
}

int func_191(int iParam0)//Position - 0x18AB0
{
	if (func_188(iParam0, 0))
	{
		return 1;
	}
	if (func_192())
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

bool func_192()//Position - 0x18AF2
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

void func_193(int iParam0)//Position - 0x18B03
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

int func_194()//Position - 0x18B26
{
	switch (iLocal_577)
	{
		case 0:
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0x6FF834D85E2DD4C6(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		
		case 1:
			if (((((((((((((((unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent")) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0x9A0B2ED5055D3F0B(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_195()//Position - 0x18CC3
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

void func_196()//Position - 0x18CF5
{
	unk_0x4199B82A888F9448();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_198(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_160(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_160(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_160(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_197(0, 2, 33, 5, 34);
	func_197(4, 2, 43, 1, 0);
	func_197(2, 2, 39, 1, 0);
	if (iLocal_166 == 0)
	{
		if (func_87(37) && !func_87(44))
		{
			iLocal_166 = 3;
		}
		if (func_87(41) && !func_87(44))
		{
			iLocal_164 = 1;
			iLocal_166 = 1;
		}
		if (func_169(10, 11) == 2)
		{
			iLocal_166 = 2;
			iLocal_164 = 1;
		}
	}
	func_160(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_87(37) && func_87(38)) || iLocal_164) && func_169(13, 10) == 10) && !func_82("CHI2_light"))
	{
		func_197(1, 2, 40, 1, 0);
		if (unk_0xA6DECE14FC9A8C51(iLocal_178))
		{
			unk_0xE30CF11C0EE14316(&iLocal_178);
		}
		unk_0x1267474D9A69CA37(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18F4F
{
	if (func_152(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_130("CHFAIL1");
				break;
			
			case 1:
				func_130("FRMSOON");
				break;
			
			case 2:
				func_130("FRMTRAI");
				break;
			
			case 3:
				if (unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
					{
						func_130("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_130("CHFAIL2");
				break;
			
			case 5:
				func_130("FRMGASF");
				break;
			}
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x19017
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_199(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)//Position - 0x1904D
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_200()//Position - 0x19080
{
	func_170(5, 31);
	func_149(0, 2, 0, 0, 1, 0, 1, 0);
	func_149(1, 3, 2, 8, 1, 0, 1, 0);
	func_149(2, 5, 2, 9, 1, 0, 1, 0);
	func_149(3, 11, 0, 0, 1, 0, 1, 0);
	func_149(4, 4, 2, 12, 1, 0, 1, 0);
	func_160(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_160(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_160(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_160(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_160(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_160(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_160(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_160(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_160(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_160(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_160(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_157(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_157(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_157(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_157(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_157(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_157(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_157(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_157(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_157(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_157(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_197(4, 2, 24, 1, 0);
	func_197(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_201()//Position - 0x19355
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	unk_0x54017C78F7E81FA2(2004,447f, 3076,807f, 46,6069f, 10f);
	unk_0xE4743077A8E95F14(1);
	if (((func_195() && iLocal_150 > 0) && iLocal_150 < 7) && unk_0x53C562FD2B9E3AB0() > iLocal_159)
	{
		iLocal_150 = 10;
		iLocal_158 = 0;
		bLocal_165 = true;
	}
	if (iLocal_150 < 10)
	{
		if (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076())
		{
			unk_0x59C3AC31C7544A28(1000);
		}
	}
	if (iLocal_375)
	{
		unk_0x7CCAEEBB35C9B8E7(system::to_float(system::timera()));
	}
	unk_0x36853D5037847BF3();
	switch (iLocal_150)
	{
		case 0:
			if (unk_0xE48C631281D64F7F())
			{
				unk_0x393584863A2F304E("CHI_2_MCS_5", 8);
				iLocal_374 = 1;
				bLocal_165 = false;
				unk_0x64360FBB0CD3420D(5, 5, 5, 5);
				unk_0x0FEA4EBF2224FFAE();
				unk_0xD55F04EF19C13160(0);
				iLocal_378 = 0;
				iLocal_375 = 1;
				vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				fVar1 = func_96(2458,223f, 4986,042f, 49,05241f, vVar0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				}
				if (((unk_0xB8DE76287EDC4957(iVar2, 0) && unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar2))) && unk_0x0ACC2116170FA204(iVar2)) || ((unk_0xB8DE76287EDC4957(iVar2, 0) && unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar2))) && unk_0x0ACC2116170FA204(iVar2)))
				{
					if (fVar1 < func_215(-2,5f) && fVar1 > func_215(0,5f))
					{
						iLocal_150 = 6;
						system::settimera(30000);
						unk_0x7CCAEEBB35C9B8E7(30000f);
						iLocal_158 = 36000;
					}
					else
					{
						iLocal_150 = 7;
						system::settimera(36000);
						unk_0x7CCAEEBB35C9B8E7(36000f);
						iLocal_158 = 42000;
					}
				}
				else
				{
					if (unk_0x6ADD12BF4D6D2587(iVar2))
					{
						if (unk_0xB8DE76287EDC4957(iVar2, 0))
						{
							if (!(unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar2)) && unk_0x0ACC2116170FA204(iVar2)) && !(unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar2)) && unk_0x0ACC2116170FA204(iVar2)))
							{
								unk_0xACE486395AA1867D(iVar2, 1084227584);
							}
						}
					}
					if (fVar1 < func_215(-1,33f) && fVar1 > func_215(-1,92f))
					{
						iLocal_150 = 1;
						system::settimera(0);
						unk_0x7CCAEEBB35C9B8E7(0f);
						iLocal_158 = 6000;
					}
					else if (fVar1 < func_215(0,96f) && fVar1 > func_215(-1,33f))
					{
						iLocal_150 = 2;
						system::settimera(6000);
						unk_0x7CCAEEBB35C9B8E7(6000f);
						iLocal_158 = 12000;
					}
					else if (fVar1 < func_215(2,29f) && fVar1 > func_215(0,96f))
					{
						iLocal_150 = 3;
						system::settimera(12000);
						unk_0x7CCAEEBB35C9B8E7(12000f);
						iLocal_158 = 18000;
					}
					else if (fVar1 < func_215(-2,81f) || fVar1 > func_215(2,29f))
					{
						iLocal_150 = 4;
						system::settimera(18000);
						unk_0x7CCAEEBB35C9B8E7(18000f);
						iLocal_158 = 24000;
					}
					else
					{
						system::settimera(24000);
						unk_0x7CCAEEBB35C9B8E7(24000f);
						iLocal_158 = 30000;
						iLocal_150 = 5;
					}
				}
				iLocal_376 = 1;
				unk_0x4779448854314440(0);
				func_210(&Local_184, 1, 0);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_84 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					vLocal_112 = { unk_0x8FD9FCCB6E4BD999(iLocal_84) };
					unk_0xEDC33A771FAEB393(iLocal_84, true);
					unk_0xB3A8974D2C811672(iLocal_84, false, 0);
				}
				unk_0x4929A4FD75F576BD();
				if (iLocal_150 == 1)
				{
					iLocal_378 = 1;
					func_69(2559,012f, 4958,518f, 36,02959f, 2585,447f, 4993,435f, 64,62565f, 48f, 2594,651f, 4948,114f, 38,0899f, 283,7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0x6ADD12BF4D6D2587(iVar2))
					{
						if (unk_0xB8DE76287EDC4957(iVar2, 0))
						{
							unk_0xA15269351F50F113(iVar2, false, 1, 0);
						}
					}
					unk_0x247EAA2E93D4A021(2445,139f, 4978,642f, 52,1489f, 150f, 1, 1, 0, false);
					unk_0x247EAA2E93D4A021(2578,523f, 4982,284f, 51,4416f, 13f, 1, 0, 0, false);
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2578,419f, 4981,901f, 50,587f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 49,2184f);
					unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
					unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 1f);
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
					unk_0x6931076730A4AC5D(&uVar3);
					unk_0x6EF694689373EE8D(0, 2570,543f, 4982,002f, 50,6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0x2DAC3448B66448E8(0, 88,7065f, 0);
					unk_0x1B16DD5C115FE009(uVar3);
					unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), uVar3);
					unk_0xFAA3EF7FF92E1F9E(&uVar3);
					iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
					unk_0xD2EF93491605005F(iLocal_155, 2538,6f, 4976,9f, 50,6f, -1,8f, 0f, 93,2f, 5000, 3, 2);
					unk_0xD2EF93491605005F(iLocal_155, 2536,153f, 4976,7f, 50,5267f, -1,8f, 0f, 93,2f, 6000, 3, 2);
					unk_0xE43C573FE3C5D758(iLocal_155, 34,9f);
					unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
				}
				else
				{
					switch (iLocal_150)
					{
						case 2:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2426,8f, 5088,3f, 51,2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, 2427,8f, 5087,2f, 51,2f, 0f, 0f, -169,7f, 6000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 28,5f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						
						case 3:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2326,3f, 4985,6f, 51,5f, 0f, 0f, -89,1f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, 2328f, 4985,4f, 52,1f, 0f, 0f, -89,1f, 6000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 28,5f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						
						case 4:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2403,6f, 4889,7f, 47,5f, 3,4f, 0f, -19,5f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, Vector(47,5f, 4889,7f, 2403,6f) + Vector(0,07f, 2,15f, 0,8f), 3,4f, 0f, -19,5f, 6000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 29,8f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						
						case 5:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2493,4f, 4934,8f, 45,7f, 5,2f, 0f, 48f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, Vector(45,7f, 4934,8f, 2493,4f) + Vector(0f, 1f, -1f), 5,2f, 0f, 48f, 6000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 28,5f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						
						case 6:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2570,6f, 4982f, 151,6f, -47,9f, 0f, 88,1f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, 2487,8f, 4896,9f, 151,9f, -47,2f, 0f, 28,8f, 15000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 28,5f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						
						case 7:
							iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xD2EF93491605005F(iLocal_155, 2487,8f, 4896,9f, 151,9f, -47,2f, 0f, 28,8f, 5000, 3, 2);
							unk_0xD2EF93491605005F(iLocal_155, 2570,6f, 4982f, 151,6f, -47,9f, 0f, 88,1f, 15000, 3, 2);
							unk_0xE43C573FE3C5D758(iLocal_155, 28,5f);
							unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
							break;
						}
				}
				if (iLocal_150 < 6)
				{
					unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "Hand_shake", 0,2f);
				}
				else
				{
					unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "Hand_shake", 0,7f);
				}
				unk_0x7849794435F39D49(iLocal_155, true);
				unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
				unk_0x0662098C9EF126B4(4);
				unk_0xE859EF37EA7362D3("CHI_2_FARMHOUSE_OVERVIEW");
				func_205(1);
				unk_0x94BD6F0436473406(0f);
				unk_0xC0EBC1452FCAB15C(0);
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 32);
				func_186(1, 1, 1, 0);
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				iLocal_159 = unk_0x53C562FD2B9E3AB0() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_113)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar4 /*33*/]))
					{
						unk_0x8BB5ECF21DDE505B(Local_113[iVar4 /*33*/], 1);
					}
					iVar4++;
				}
				iLocal_160 = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_methhead_01"), 2460,449f, 4976,938f, 45,5765f, 243,4917f, 1, true);
				unk_0x9E058151726E58DE(iLocal_160, joaat("weapon_microsmg"), -1, true, true);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_160))
				{
					func_93();
					unk_0xD40A6DFCC31D221A(0, 1);
					unk_0x380C1E7B7740D618(0, 2463,016f, 4974,97f, 45,5765f, 1f, -1, 0,5f, 1, 1193033728);
					unk_0x380C1E7B7740D618(0, 2452,833f, 4964,785f, 45,5765f, 1f, -1, 0,5f, 1, 1193033728);
					unk_0xB6A7F1EF9625AE96(0, 500);
					unk_0x380C1E7B7740D618(0, 2460,449f, 4976,938f, 45,5765f, 1f, -1, 0,5f, 0, 1193033728);
					func_92(&iLocal_160, 1);
				}
				iLocal_147 = unk_0xEA60F3B426BB095B(joaat("dubsta"), 2479,961f, 4990f, 45,8f, -5,37f, 1, 1, 0);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_150 = 3;
			}
			break;
		
		case 3:
			if (system::timera() > iLocal_158)
			{
				unk_0x4779448854314440(0);
				iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD2EF93491605005F(iLocal_155, 2445,944f, 4962,986f, 51,4782f, 7,9159f, 0f, 34,5909f, 5000, 3, 2);
				unk_0xD2EF93491605005F(iLocal_155, 2445,684f, 4963,368f, 51,6659f, 3,6033f, 0f, 34,5909f, 3500, 3, 2);
				unk_0xE43C573FE3C5D758(iLocal_155, 34f);
				unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "Hand_shake", 0,5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		
		case 4:
			if (system::timera() > iLocal_158)
			{
				unk_0x4779448854314440(0);
				iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD2EF93491605005F(iLocal_155, 2465,07f, 4946,688f, 45,3372f, 7,1461f, 0f, 30,9281f, 5000, 3, 2);
				unk_0xD2EF93491605005F(iLocal_155, 2466,011f, 4947,377f, 45,3509f, 7,1461f, 0f, 32,3761f, 3000, 3, 2);
				unk_0xE43C573FE3C5D758(iLocal_155, 34f);
				unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "Hand_shake", 0,5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		
		case 5:
			iLocal_377 = 1;
			if (system::timera() > iLocal_158)
			{
				iLocal_377 = 1;
				unk_0x4779448854314440(0);
				iLocal_155 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xD2EF93491605005F(iLocal_155, 2509,691f, 4971,024f, 44,1325f, 7,2578f, 0f, 88,5226f, 5000, 3, 2);
				unk_0xD2EF93491605005F(iLocal_155, 2509,415f, 4971,163f, 44,1674f, 6,6554f, 0f, 89,4229f, 2500, 3, 2);
				unk_0xE43C573FE3C5D758(iLocal_155, 37,34f);
				unk_0x6ED5DDE95A2ACDCB(iLocal_155, 0);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_155, "Hand_shake", 0,5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		
		case 6:
			if (system::timera() > iLocal_158)
			{
				if (func_204())
				{
					unk_0x84CDD933AFA470D2();
					unk_0x3E80C2F7BC665259(1);
					unk_0xC9182D7255818856(6,818f);
					if (unk_0xB8DE76287EDC4957(iLocal_147, 0))
					{
						unk_0x4982ECE0928DA13D(iLocal_147, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0xD0BFA95B279C174F(0);
					iLocal_374 = 0;
					iLocal_150 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0x6ADD12BF4D6D2587(iLocal_84) && unk_0xB8DE76287EDC4957(iLocal_84, 0))
			{
				unk_0x9F56269A319F960A(iLocal_84);
			}
			if (!unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
			{
				unk_0xAE83ED4C9081AE6F(500);
			}
			if ((unk_0x3E9CABD07B829173() && !unk_0xA8113D347D14630F()) || (unk_0x6C97EEC6339FB45C() && unk_0x65E1868AA01313FF(1)))
			{
				iLocal_150++;
			}
			break;
		
		case 11:
			if (unk_0x6ADD12BF4D6D2587(iLocal_84) && unk_0xB8DE76287EDC4957(iLocal_84, 0))
			{
				unk_0x9F56269A319F960A(iLocal_84);
			}
			if ((unk_0x3E9CABD07B829173() && !unk_0xA8113D347D14630F()) || (unk_0x6C97EEC6339FB45C() && unk_0x65E1868AA01313FF(1)))
			{
				unk_0x4779448854314440(0);
				unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_165)
				{
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x61635C0A7950C875();
				if (func_67(unk_0xFC1458A37D98B502(), 2570,543f, 4982,002f, 50,6795f, 1) < 15f && func_67(unk_0xFC1458A37D98B502(), 2570,543f, 4982,002f, 50,6795f, 1) > 1f)
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2570,543f, 4982,002f, 50,6795f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 98,21f);
				}
				else if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), func_96(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2458,223f, 4986,042f, 49,05241f, 1));
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-6,3f, 1065353216);
				unk_0xC9182D7255818856(6,818f);
				unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
				unk_0x8E7C072C41DF97BF();
				unk_0xE02E32C69260FBB7("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x84CDD933AFA470D2();
				unk_0x3E80C2F7BC665259(1);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				func_205(0);
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x2C622DFA3D1B94E7(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_186(0, 1, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_160))
				{
					unk_0x68433819717660CF(&iLocal_160);
				}
				iLocal_380 = func_18(4);
				if (iLocal_380 != -1)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_380 /*33*/]))
					{
						unk_0x68433819717660CF(&(Local_113[iLocal_380 /*33*/]));
					}
					if (unk_0x6ADD12BF4D6D2587(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0x452336926718D62A(&(Local_113[iLocal_380 /*33*/].f_20));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 1;
					Local_113[iLocal_380 /*33*/].f_5 = 0;
					Local_113[iLocal_380 /*33*/].f_14 = 0;
					Local_113[iLocal_380 /*33*/].f_3 = 2;
				}
				iLocal_381 = func_18(5);
				if (iLocal_381 != -1)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[iLocal_381 /*33*/]))
					{
						unk_0x68433819717660CF(&(Local_113[iLocal_381 /*33*/]));
					}
					if (unk_0x6ADD12BF4D6D2587(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0x452336926718D62A(&(Local_113[iLocal_381 /*33*/].f_20));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 1;
					Local_113[iLocal_381 /*33*/].f_5 = 0;
					Local_113[iLocal_381 /*33*/].f_14 = 0;
					Local_113[iLocal_381 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_161))
				{
					unk_0x68433819717660CF(&iLocal_161);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_162))
				{
					unk_0x68433819717660CF(&iLocal_162);
				}
				if (func_68(iLocal_147))
				{
					unk_0xC91FE17AD7353B70(&iLocal_147);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_183))
				{
					unk_0x452336926718D62A(&iLocal_183);
				}
				func_202();
				iLocal_111 = 0;
				func_27();
				unk_0x14776E43F90DD454(joaat("prop_phone_ing"));
				unk_0x14776E43F90DD454(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_113)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar5 /*33*/]))
					{
						unk_0x8BB5ECF21DDE505B(Local_113[iVar5 /*33*/], 0);
					}
					iVar5++;
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-6,3f, 1065353216);
				if (unk_0x6ADD12BF4D6D2587(iLocal_84))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_84, 0))
					{
						unk_0xEDC33A771FAEB393(iLocal_84, false);
						if (unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iLocal_84)))
						{
							unk_0xD91B0600CD72C5F7(iLocal_84, vLocal_112);
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_84, -1);
						}
						unk_0xA15269351F50F113(iLocal_84, true, 1, 0);
						if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_84)))
						{
							unk_0x59AF3B40AE222194(iLocal_84, 0f, 0f, unk_0xF0371FE6E2BF9599(iLocal_84), 2, 1);
							unk_0xFDAFE1354D61AE41(iLocal_84);
							unk_0xD91B0600CD72C5F7(iLocal_84, 1f, 1f, 1f);
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_84, -1);
						}
						if (iLocal_378 == 0)
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_84, -1);
						}
						unk_0xB3A8974D2C811672(iLocal_84, true, 0);
					}
				}
				unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
				unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 1);
				unk_0xFAC4E1A83A1073D9();
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x59C3AC31C7544A28(1000);
				}
				unk_0xD55F04EF19C13160(1);
				func_176(11);
			}
			break;
	}
}

void func_202()//Position - 0x1A3DD
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_145))
	{
		unk_0xC91FE17AD7353B70(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[iVar0 /*33*/]));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0x452336926718D62A(&(Local_113[iVar0 /*33*/].f_20));
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (unk_0xB8B3E5529EDB87D4(uLocal_168))
	{
		unk_0x60727D07B2D72C82(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0xB8B3E5529EDB87D4(iLocal_169[iVar0]))
		{
			unk_0x60727D07B2D72C82(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_170)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_170[iVar0]))
		{
			unk_0x452336926718D62A(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
}

void func_203(var uParam0, var uParam1, char* sParam2, float fParam3, vector3 vParam4, float fParam5, int iParam6)//Position - 0x1A571
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	vLocal_71 = { vParam4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	unk_0x8C53CBCD558A6F1F(-455129387, 31);
	iLocal_52 = 0;
}

bool func_204()//Position - 0x1A668
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

void func_205(bool bParam0)//Position - 0x1A68B
{
	if (bParam0)
	{
		func_209();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_208(0))
		{
			func_206(0);
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

void func_206(int iParam0)//Position - 0x1A6EE
{
	if (Global_14615)
	{
		func_207(0, 0);
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
	if (!func_40())
	{
		Global_14453.f_1 = 3;
	}
}

void func_207(bool bParam0, bool bParam1)//Position - 0x1A75E
{
	if (bParam0)
	{
		if (func_208(0))
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

int func_208(int iParam0)//Position - 0x1A7D2
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

void func_209()//Position - 0x1A82C
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_210(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A855
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_214(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DECE14FC9A8C51(iParam0->f_1[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(iParam0->f_1[iVar0]));
		}
		func_213(iVar0, iParam0);
		func_212(iVar0, iParam0);
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
				if (unk_0x4759A34EB65CCA39(iParam0->f_17[iVar0], func_211()) && iParam0->f_17[iVar0] != unk_0xFC1458A37D98B502())
				{
					unk_0x88235B448509228B(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam0->f_13, 29))
			{
				unk_0xD0A6028E561242DA(iParam0->f_17[iVar0], 0, -1, 0);
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

var func_211()//Position - 0x1AA06
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_212(int iParam0, var uParam1)//Position - 0x1AA16
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

void func_213(int iParam0, var uParam1)//Position - 0x1AA5E
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

void func_214(var uParam0)//Position - 0x1AAA6
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_5))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_5));
	}
}

float func_215(float fParam0)//Position - 0x1AAC1
{
	return (fParam0 * 57,29578f);
}

void func_216()//Position - 0x1AAD1
{
	int iVar0;
	
	func_170(1, 4);
	func_160(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_160(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 1, 2, 2, 1, 0, 1, 0);
	func_197(3, 0, 0, 1, 0);
	if ((func_67(unk_0xFC1458A37D98B502(), 2458,223f, 4986,042f, 49,05241f, 0) < 107,9f || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2374,441f, 4930,564f, 34,73784f, 2478,099f, 5077,488f, 60,63246f, 185f, 0, 0, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2396,726f, 4887,434f, 33,85329f, 2510,54f, 5003,356f, 58,01184f, 158,25f, 0, 0, 0))
	{
		if (unk_0xA6DECE14FC9A8C51(Local_184.f_5))
		{
			unk_0xAAAC88CC20771601(Local_184.f_6, 0);
		}
		func_176(11);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_260(5, -20);
				unk_0x94BD6F0436473406(0f);
				unk_0xC0EBC1452FCAB15C(0);
				iLocal_150++;
				break;
			
			case 1:
				if (func_220(&Local_184, 2608,151f, 4949,754f, 39,4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0x1267474D9A69CA37(6f, 6f, 3);
					iLocal_150++;
					func_210(&Local_184, 1, 0);
					func_31(3, 1);
					if (unk_0x771D0F8F56A5FE6C("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0xE02E32C69260FBB7("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0x771D0F8F56A5FE6C("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xE02E32C69260FBB7("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
					if (func_218(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_217(5) > 2)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			
			case 3:
				if (func_220(&Local_184, 2573,63f, 4983,677f, 50,6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0x771D0F8F56A5FE6C("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xE02E32C69260FBB7("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0x1267474D9A69CA37(5f, 10f, 4);
					func_176(11);
				}
				if (unk_0xA6DECE14FC9A8C51(Local_184.f_5))
				{
					unk_0xAAAC88CC20771601(Local_184.f_6, 0);
				}
				break;
			}
	}
}

int func_217(int iParam0)//Position - 0x1ADCA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_218(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1AE0C
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
	func_219(iParam0);
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

void func_219(int iParam0)//Position - 0x1AF9B
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

bool func_220(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x1AFC7
{
	return func_221(iParam0, vParam1, vParam2, func_259(), func_259(), iParam3, 1, 0, 0, 0, 0, sParam4, func_167(), func_167(), func_167(), func_167(), func_167(), 0, bParam5, func_167(), 0, 0, bParam6, iParam7, 0, 0, 0, 1, 1065353216);
}

int func_221(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1B018
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_258(iParam0);
	func_257(iParam0);
	func_256();
	if (func_240(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_239(sParam12);
		func_239(sParam13);
		func_239(sParam14);
		func_239(sParam15);
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
				if (func_237(iParam0, iParam21))
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
				func_239(sParam16);
				func_239(sParam19);
				func_239("MORE_SEATS");
				if (bParam18 && unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						func_239(sParam11);
					}
					if (unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(iParam0);
					}
					if ((!func_234(iParam0, 1) && !func_233(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_232(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_230(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_239("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_234(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_230(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_5(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4B4040A0EC7DBA81(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_229(iParam0->f_5, iParam0);
						}
					}
					else if (!func_228(vVar3, unk_0x67247AA13B7486A3(iParam0->f_5), 0,1f, 0))
					{
						unk_0x645FF8D8B599FD84(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_229(iParam0->f_5, iParam0);
						}
					}
					if (!func_234(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 2))
						{
							func_232(iParam0, sParam11, 0);
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
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
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
						unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, iParam5, iVar4, iVar5);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vParam3, vParam4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam1, vParam2, iParam5, iVar4, iVar5))
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
								else if (!unk_0x4759A34EB65CCA39(iParam0->f_17[iVar2], func_211()) || !func_226(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_223(iParam0))
							{
								func_239(sParam11);
								func_239(sParam16);
								func_239(sParam12);
								func_239(sParam13);
								func_239(sParam14);
								func_239(sParam15);
								func_239("LOSE_WANTED");
								func_239("MORE_SEATS");
								func_239(sParam19);
								func_210(iParam0, 1, 0);
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
					func_239(sParam16);
					func_239(sParam19);
					if (unk_0xA6DECE14FC9A8C51(iParam0->f_5) || unk_0xA6DECE14FC9A8C51(*iParam0))
					{
						unk_0xE30CF11C0EE14316(&(iParam0->f_5));
						unk_0xE30CF11C0EE14316(iParam0);
						func_239(sParam11);
					}
					if ((!func_234(iParam0, 1) && !func_233(iParam0)) && !unk_0xC80D31E4B587871C(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_232(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_230(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_239("LOSE_WANTED");
						unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 0);
						unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 1);
					}
					if (unk_0xC80D31E4B587871C(iParam0->f_13, 1))
					{
						if (!func_234(iParam0, 1))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
							{
								func_230(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_239(sParam11);
							}
							*iParam0 = func_222(iParam10, 0, 0);
							unk_0x3ED68ABD7299EAA3(*iParam0, 2);
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_229(*iParam0, iParam0);
							}
						}
						if (!func_234(iParam0, 2))
						{
							if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_232(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
							{
								if (!unk_0x8C1C362CA8299475(sParam19))
								{
									if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
									{
										func_232(iParam0, sParam19, 0);
										unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_232(iParam0, sParam16, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 23))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_17[0]))
									{
										func_230(iParam0->f_17[0], "GET_IN_CAR", 3);
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
					func_239(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_234(iParam0, 2))
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
										func_230(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_232(iParam0, "MORE_SEATS", 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
							{
								func_232(iParam0, sParam16, 0);
								unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
								unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
								{
									func_232(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_234(iParam0, 2))
					{
						if (!unk_0xC80D31E4B587871C(iParam0->f_13, 3))
						{
							func_232(iParam0, sParam16, 0);
							unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 3);
							unk_0x0EE72DB1CD8A3B86(&(iParam0->f_13), 4);
						}
						else if (unk_0xC80D31E4B587871C(iParam0->f_13, 9))
						{
							if (!unk_0x8C1C362CA8299475(sParam19))
							{
								if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
								{
									func_232(iParam0, sParam19, 0);
									unk_0x872F1C1F8587CCC7(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xC80D31E4B587871C(iParam0->f_13, 4))
							{
								func_232(iParam0, sParam16, 0);
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
		func_239(sParam11);
		func_239(sParam16);
		func_239(sParam19);
		func_239(sParam16);
		func_239("LOSE_WANTED");
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

int func_222(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B980
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_223(int iParam0)//Position - 0x1B993
{
	if (unk_0xC80D31E4B587871C(iParam0->f_13, 12))
	{
		if (func_225(unk_0xFC1458A37D98B502()))
		{
			if (func_224(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_224(1, 0, 1) || unk_0xC80D31E4B587871C(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_224(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1B9F1
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

int func_225(int iParam0)//Position - 0x1BAD6
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

int func_226(int iParam0, int iParam1)//Position - 0x1BB0D
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && iParam1)
		{
			if (func_227(unk_0xFC1458A37D98B502(), iParam0))
			{
				unk_0xB2442651179CF706(func_211(), 50f);
				return 1;
			}
		}
		else if (unk_0x4759A34EB65CCA39(iParam0, func_211()))
		{
			unk_0xB2442651179CF706(func_211(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)//Position - 0x1BB78
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

int func_228(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1BBC0
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

void func_229(int iParam0, int iParam1)//Position - 0x1BC3B
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0xA6DECE14FC9A8C51(iParam1->f_6))
		{
			unk_0xAAAC88CC20771601(iParam1->f_6, 0);
		}
		unk_0xF906FCF8A11CBA9A(0);
		unk_0x981B8A90686AD23E();
		iParam1->f_6 = iParam0;
		unk_0xAAAC88CC20771601(iParam0, 1);
	}
}

void func_230(int iParam0, char* sParam1, int iParam2)//Position - 0x1BC76
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_231(iParam2), 1);
}

int func_231(int iParam0)//Position - 0x1BC8D
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

void func_232(int iParam0, char* sParam1, bool bParam2)//Position - 0x1BE82
{
	if (!bParam2)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_150(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

int func_233(int iParam0)//Position - 0x1BEBA
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

int func_234(int iParam0, int iParam1)//Position - 0x1BEDE
{
	if (iParam1 != 1 || unk_0x248C9865A96D3EA4())
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			return 1;
		}
		if (func_236(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x248C9865A96D3EA4())
	{
		if (func_59() && !func_235())
		{
			return 1;
		}
	}
	return 0;
}

int func_235()//Position - 0x1BF36
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_236(var uParam0)//Position - 0x1BF4D
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

int func_237(var uParam0, int iParam1)//Position - 0x1BF70
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_238(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0, var uParam1, int iParam2)//Position - 0x1BFA1
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

void func_239(char* sParam0)//Position - 0x1C035
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		unk_0x166954C5648772B6(sParam0);
	}
}

int func_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x1C04D
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
					unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], 1, -1, 0);
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
				unk_0xD0A6028E561242DA(uParam0->f_17[iVar0], 0, -1, 0);
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
						if (func_238(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
								{
									unk_0x5C57ECBE59C08573(uParam0->f_17[iVar0], 1f);
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
									{
										unk_0x88235B448509228B(uParam0->f_17[iVar0]);
									}
									if (unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470) == 7 && !func_255(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 1);
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
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
					{
						if (func_253(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_211());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_13, 26))
	{
		if ((!func_252(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502())) && !unk_0x6ADD12BF4D6D2587(iParam10))
		{
			iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar10, 0))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_234(uParam0, 2))
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
							func_230(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_232(uParam0, "MORE_SEATS", 0);
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
			func_239("MORE_SEATS");
		}
		if (!unk_0x6ADD12BF4D6D2587(iParam10))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[0]) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[1])) || !unk_0x3AB6A1A9084FB0A4(uParam0->f_17[2]))
			{
				if (!unk_0xC80D31E4B587871C(uParam0->f_13, 31))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !func_234(uParam0, 2))
					{
						iVar10 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (func_251(iVar10, uParam0))
						{
							func_232(uParam0, "CMN_VEHSUIT", 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_13), 31);
					func_239("CMN_VEHSUIT");
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
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
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
							if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
							{
								if (!func_252(uParam0) && unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
								{
									if (!func_250(uParam0->f_17[iVar0]))
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
					if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
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
					if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
					{
						iVar21 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0x6ADD12BF4D6D2587(iVar21))
						{
							if (func_238(iVar21, uParam0, 0))
							{
								if (func_249(iVar0, uParam0) || !unk_0xC80D31E4B587871C(uParam0->f_13, 27))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], iVar0);
									func_212(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_249(iVar0, uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(iVar21) == joaat("sentinel2"))
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xF6A83791895D5AA1(uParam0->f_17[iVar0], 2);
								}
								func_248(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()) && !func_247(uParam0->f_17[iVar0], iParam10)) && !func_246(uParam0->f_17[iVar0], iParam10))
					{
						if (func_253(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
							{
								if (((!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0xE4A3B62790C25748(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
									}
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_211());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x53C562FD2B9E3AB0();
								uParam0->f_1[iVar0] = func_222(uParam0->f_17[iVar0], 0, 0);
								unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_229(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
					{
						if (((func_226(uParam0->f_17[iVar0], 1) || func_247(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xB8DE76287EDC4957(iParam10, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam10, 0)))
						{
							if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
							{
								unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
								func_239(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_229(uParam0->f_1[iVar0], uParam0);
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
										if (!func_226(uParam0->f_17[iVar0], 1))
										{
											if (func_225(uParam0->f_17[iVar0]))
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
									if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
									{
										if ((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x0F299BBD0DC14B18(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x88235B448509228B(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_255(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE4A3B62790C25748(uParam0->f_17[iVar0]) && !unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) && !func_245(uParam0->f_17[iVar0], 2f)) && !unk_0x9F887157983E8EFC(uParam0->f_17[iVar0])) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0])) && !unk_0x6B4C37F2EEC636CC(iParam10))
										{
											unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 1);
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
										uParam0->f_1[iVar0] = func_222(uParam0->f_17[iVar0], 0, 0);
										unk_0x3ED68ABD7299EAA3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
							{
								if (func_253(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x9F887157983E8EFC(uParam0->f_17[iVar0]) && !unk_0x7CE28D2DD2AF0F42(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x78F50AA8F955BEFC(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xB8E08BD5B184DF4E(uParam0->f_17[iVar0]);
										}
										unk_0x771A86309E0CA47B(uParam0->f_17[iVar0], 0);
										unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_211());
									}
								}
							}
						}
						else if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iParam10))
						{
							if (!unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()))
							{
								if (!unk_0xC80D31E4B587871C(uParam0->f_13, 21))
								{
									unk_0x57FB41CABA25835C(uParam0->f_17[iVar0], func_211());
								}
							}
							else if (unk_0xC80D31E4B587871C(uParam0->f_13, 21))
							{
								unk_0x88235B448509228B(uParam0->f_17[iVar0]);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x4759A34EB65CCA39(uParam0->f_17[iVar0], func_211()) && !unk_0x6B4C37F2EEC636CC(iParam10))
						{
							unk_0x88235B448509228B(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uParam0->f_1[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uParam0->f_1[iVar0]));
					func_239(uVar12[iVar0]);
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
		if (!func_234(uParam0, 2))
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
							if (func_250(uParam0->f_17[iVar0]) || unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_17[iVar0]))
					{
						if (!unk_0x21B6FFFD04C9FF3A(uParam0->f_17[iVar0], unk_0xFC1458A37D98B502(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_250(uParam0->f_17[iVar0]))
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
								func_232(uParam0, sParam7, 0);
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
									if (!func_244(iVar0, uParam0))
									{
										if (!unk_0x8C1C362CA8299475(uVar13[iVar0]))
										{
											if (!unk_0x74C475EB8E73D398(uVar13[iVar0], ""))
											{
												func_242(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_241(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_244(iVar0, uParam0))
										{
											func_232(uParam0, uVar12[iVar0], 0);
											func_241(iVar0, uParam0);
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
					func_239(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_239("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_241(int iParam0, var uParam1)//Position - 0x1D0C2
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

void func_242(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x1D10A
{
	if (!bParam3)
	{
		if (!unk_0x8C1C362CA8299475(sParam1))
		{
			if (!unk_0x74C475EB8E73D398(sParam1, ""))
			{
				func_243(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x53C562FD2B9E3AB0();
}

void func_243(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1D144
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

int func_244(int iParam0, var uParam1)//Position - 0x1D163
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

int func_245(int iParam0, float fParam1)//Position - 0x1D1AC
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

int func_246(int iParam0, int iParam1)//Position - 0x1D1E3
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x4759A34EB65CCA39(iParam0, func_211()))
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

int func_247(int iParam0, int iParam1)//Position - 0x1D24A
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

void func_248(int iParam0, var uParam1)//Position - 0x1D27F
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

int func_249(int iParam0, var uParam1)//Position - 0x1D2C7
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

int func_250(int iParam0)//Position - 0x1D310
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

int func_251(int iParam0, var uParam1)//Position - 0x1D39D
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

int func_252(var uParam0)//Position - 0x1D4FD
{
	int iVar0;
	
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (func_238(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x1D52C
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
						if (func_252(uParam0))
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
					if (func_238(iVar0, uParam0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (func_254(iVar0))
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

int func_254(int iParam0)//Position - 0x1D60A
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

int func_255(int iParam0, int iParam1)//Position - 0x1D642
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

void func_256()//Position - 0x1D672
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

void func_257(var uParam0)//Position - 0x1D6DF
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

void func_258(var uParam0)//Position - 0x1D782
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

Vector3 func_259()//Position - 0x1D818
{
	vector3 vVar0;
	
	return vVar0;
}

int func_260(int iParam0, int iParam1)//Position - 0x1D824
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 1)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_261()//Position - 0x1D868
{
	int iVar0;
	int iVar1;
	
	unk_0x72CB9F3FA10C599B(0f);
	unk_0xC39DDDC969581586(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			iLocal_144 = unk_0xC733212BF9066BDF();
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			if (func_204())
			{
				unk_0x6450931B826B49D9("MISSChinese2_crystalMazeMCS1_IG");
				unk_0x6FF834D85E2DD4C6(joaat("ig_old_man2"));
				unk_0x6FF834D85E2DD4C6(joaat("ig_old_man1a"));
				unk_0x6FF834D85E2DD4C6(joaat("ig_janet"));
				unk_0x6FF834D85E2DD4C6(joaat("ig_taocheng"));
				unk_0x6FF834D85E2DD4C6(joaat("ig_taostranslator"));
				unk_0x6450931B826B49D9("misschinese2_crystalmaze");
				unk_0x6450931B826B49D9("missrampageintrooutro");
				unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
				func_186(1, 1, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
				{
					Local_113[14 /*33*/] = Global_89475.f_9[2];
					Local_113[13 /*33*/] = Global_89475.f_9[1];
					Local_113[11 /*33*/] = Global_89475.f_9[4];
					Local_113[10 /*33*/] = Global_89475.f_9[3];
					Local_113[12 /*33*/] = Global_89475.f_9[0];
					unk_0xDD29FF4BAB8AFF9C(Local_113[14 /*33*/], true, 1);
					unk_0xDD29FF4BAB8AFF9C(Local_113[13 /*33*/], true, 1);
					unk_0xDD29FF4BAB8AFF9C(Local_113[11 /*33*/], true, 1);
					unk_0xDD29FF4BAB8AFF9C(Local_113[10 /*33*/], true, 1);
					unk_0xDD29FF4BAB8AFF9C(Local_113[12 /*33*/], true, 1);
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[13 /*33*/]))
					{
						unk_0x4982ECE0928DA13D(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[14 /*33*/]))
					{
						unk_0x4982ECE0928DA13D(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
					{
						unk_0x4982ECE0928DA13D(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
					{
						unk_0x4982ECE0928DA13D(Local_113[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_113[12 /*33*/]))
					{
						unk_0x4982ECE0928DA13D(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_113[13 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_old_man1a"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
					unk_0x4982ECE0928DA13D(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_113[14 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_old_man2"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
					unk_0x4982ECE0928DA13D(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
						{
							unk_0x4982ECE0928DA13D(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0x4982ECE0928DA13D(Local_113[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0x4982ECE0928DA13D(Local_113[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_113[12 /*33*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_janet"), 1987,231f, 3052,741f, 46,214f, 0f, 1, true);
					unk_0x4982ECE0928DA13D(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_263();
				unk_0xD0BFA95B279C174F(0);
				unk_0x0662098C9EF126B4(4);
				unk_0x60225D4F755DFDB1(1991,22f, 3054,884f, 50,27741f, 87f, 0);
				unk_0xA896149A4DE38DEA(1991,22f, 3054,884f, 50,27741f, 87f, 0);
				unk_0xCB389937EDB1519A(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				unk_0xBB0951717202666D(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_576 = 0;
				iLocal_150++;
			}
			break;
		
		case 1:
			if (unk_0xA8113D347D14630F())
			{
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x59C3AC31C7544A28(1000);
				}
				iLocal_150++;
			}
			break;
		
		case 2:
			if (unk_0xA8113D347D14630F())
			{
				if (iLocal_576 == 0)
				{
					func_262(13);
					iLocal_576++;
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]))
			{
				if (unk_0xBBC745B9F75E27D0("Old_Man1A", 0))
				{
					Local_113[13 /*33*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Old_Man1A", 0));
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]))
			{
				if (unk_0xBBC745B9F75E27D0("Old_Man2", 0))
				{
					Local_113[14 /*33*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Old_Man2", 0));
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
			{
				if (unk_0xBBC745B9F75E27D0("tao", 0))
				{
					Local_113[11 /*33*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("tao", 0));
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
			{
				if (unk_0xBBC745B9F75E27D0("Taos_Translator", 0))
				{
					Local_113[10 /*33*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Taos_Translator", 0));
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(Local_113[12 /*33*/]))
			{
				if (unk_0xBBC745B9F75E27D0("Janet", 0))
				{
					Local_113[12 /*33*/] = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Janet", 0));
				}
			}
			if (unk_0xBBC745B9F75E27D0("tao", 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_113[11 /*33*/]))
				{
					unk_0xCE93FCB8A8D8DF0B(Local_113[11 /*33*/], iLocal_118);
					unk_0x5C5D33A1B2711D21(Local_113[11 /*33*/], false);
					iVar0 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
					unk_0x8E628F774C748D93(Local_113[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Taos_Translator", 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_113[10 /*33*/]))
				{
					unk_0xCE93FCB8A8D8DF0B(Local_113[10 /*33*/], iLocal_118);
					unk_0x5C5D33A1B2711D21(Local_113[10 /*33*/], false);
					iVar1 = unk_0x8383F9C605E523B7(1991,988f, 3054,51f, 46,215f, 0f, 0f, 50,76f, 2);
					unk_0x8E628F774C748D93(Local_113[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Trevor", 0))
			{
				iLocal_144 = unk_0xC733212BF9066BDF();
				if (func_68(iLocal_144) && func_67(iLocal_144, 1995,202f, 3062,156f, 46,0491f, 1) < 5f)
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_144, -1);
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
					unk_0x3A3E253FC4F98014(unk_0x82FF3DFBC3965CC0(iLocal_144));
				}
				else if (unk_0x3A801AA34DD821BE("missrampageintrooutro"))
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1992,135f, 3057,467f, 46,06f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 325,4678f);
					unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0,1f, 0, 0, 0);
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
				}
				else
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1992,919f, 3057,906f, 46,0567f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 337,2537f);
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 0, 0, 0);
					unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 1f);
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
				}
			}
			if (unk_0x65E1868AA01313FF(0))
			{
				unk_0x283AC66D956F6B0E(6);
				func_186(0, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x3D34B699E4F36612(1992,135f, 3057,467f, 46,06f);
				}
				unk_0x61635C0A7950C875();
				unk_0x1267474D9A69CA37(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}

void func_262(int iParam0)//Position - 0x1DFDD
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

void func_263()//Position - 0x1E001
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), false, false, false, false, false, 0, 0, 0);
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
				unk_0xD38F266C132F2897(Global_90347[iVar0], false, false, false, false, false, 0, 0, 0);
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

void func_264()//Position - 0x1E0B4
{
	int iVar0;
	
	switch (iLocal_150)
	{
		case 0:
			unk_0xBCBC53983EC3B1BA("FRMCHSE", 0);
			while (!unk_0x9F0887BCBFCF3C2F(0))
			{
				func_28(27, 1);
			}
			func_56(&uLocal_203, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			func_56(&uLocal_203, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_360();
			unk_0x49779D62887BC4A2(2442,69f, 4970,348f, 46,33f, 30f);
			unk_0xD941F8E30D7231AD("EXTRASUNNY", 120f);
			vLocal_384[0 /*3*/] = { 2428,47f, 4968,91f, 42,11f };
			vLocal_384[1 /*3*/] = { 2431,14f, 4972,06f, 42,19f };
			vLocal_384[2 /*3*/] = { 2433,05f, 4969,22f, 42,26f };
			vLocal_384[3 /*3*/] = { 2437,71f, 4968,13f, 42,45f };
			vLocal_384[4 /*3*/] = { 2436,12f, 4964,76f, 42,19f };
			vLocal_384[5 /*3*/] = { 2432,13f, 4961,97f, 41,35f };
			vLocal_384[6 /*3*/] = { 2430,07f, 4963,78f, 41,35f };
			vLocal_384[7 /*3*/] = { 2434f, 4963,04f, 41,53f };
			vLocal_384[8 /*3*/] = { 2435,637f, 4969,699f, 42,19639f };
			Local_109[0 /*5*/] = { 2450,376f, 4955,83f, 43,9394f };
			Local_109[1 /*5*/] = { 2449,815f, 4956,678f, 43,9894f };
			Local_109[2 /*5*/] = { 2449,606f, 4957,675f, 44,0646f };
			Local_109[3 /*5*/] = { 2449,739f, 4958,731f, 44,1544f };
			Local_109[4 /*5*/] = { 2450,141f, 4959,745f, 44,2487f };
			Local_109[5 /*5*/] = { 2450,685f, 4960,582f, 44,3219f };
			Local_109[6 /*5*/] = { 2451,492f, 4961,333f, 44,4439f };
			Local_109[7 /*5*/] = { 2452,174f, 4962,099f, 44,5787f };
			Local_109[8 /*5*/] = { 2452,717f, 4962,906f, 44,9141f };
			Local_109[9 /*5*/] = { 2453,35f, 4963,579f, 45,3558f };
			Local_109[10 /*5*/] = { 2453,754f, 4964,565f, 45,5766f };
			Local_109[11 /*5*/] = { 2453,226f, 4965,539f, 45,5766f };
			Local_109[12 /*5*/] = { 2452,472f, 4966,293f, 45,5766f };
			Local_109[13 /*5*/] = { 2451,869f, 4967,104f, 45,5766f };
			Local_109[14 /*5*/] = { 2451,529f, 4968,083f, 45,5766f };
			Local_109[15 /*5*/] = { 2452,327f, 4968,712f, 45,5766f };
			Local_109[16 /*5*/] = { 2452,796f, 4969,643f, 45,8107f };
			Local_109[17 /*5*/] = { 2453,261f, 4970,541f, 45,8106f };
			Local_109[18 /*5*/] = { 2453,58f, 4971,548f, 45,8104f };
			Local_109[19 /*5*/] = { 2452,808f, 4972,267f, 45,8306f };
			Local_109[20 /*5*/] = { 2452,049f, 4972,928f, 45,8306f };
			Local_109[21 /*5*/] = { 2451,241f, 4973,599f, 45,8306f };
			Local_109[22 /*5*/] = { 2450,248f, 4973,889f, 45,8306f };
			Local_109[23 /*5*/] = { 2449,207f, 4973,784f, 45,8105f };
			Local_109[24 /*5*/] = { 2448,172f, 4973,814f, 45,8106f };
			Local_109[25 /*5*/] = { 2447,153f, 4973,771f, 45,8106f };
			Local_109[26 /*5*/] = { 2446,138f, 4973,724f, 45,8106f };
			Local_109[27 /*5*/] = { 2445,128f, 4973,689f, 45,8106f };
			Local_109[28 /*5*/] = { 2444,256f, 4973,056f, 45,8106f };
			Local_109[29 /*5*/] = { 2443,669f, 4972,194f, 45,8106f };
			Local_109[30 /*5*/] = { 2443,119f, 4971,275f, 45,8106f };
			Local_109[31 /*5*/] = { 2442,661f, 4970,359f, 45,8106f };
			Local_109[32 /*5*/] = { 2442,267f, 4969,425f, 45,8106f };
			Local_109[33 /*5*/] = { 2441,708f, 4968,502f, 45,8306f };
			Local_109[34 /*5*/] = { 2441,264f, 4967,534f, 45,8106f };
			Local_109[35 /*5*/] = { 2440,873f, 4966,538f, 45,8106f };
			Local_109[36 /*5*/] = { 2440,382f, 4965,634f, 45,8106f };
			Local_109[37 /*5*/] = { 2439,71f, 4964,882f, 45,8106f };
			Local_109[38 /*5*/] = { 2438,933f, 4964,146f, 45,8106f };
			Local_109[39 /*5*/] = { 2438,166f, 4963,502f, 45,8106f };
			Local_109[40 /*5*/] = { 2437,555f, 4962,709f, 45,8106f };
			Local_109[41 /*5*/] = { 2436,901f, 4961,95f, 45,8106f };
			Local_109[42 /*5*/] = { 2436,075f, 4961,257f, 45,8106f };
			Local_109[43 /*5*/] = { 2435,08f, 4961,004f, 45,8118f };
			Local_109[44 /*5*/] = { 2434,066f, 4960,713f, 45,8181f };
			Local_109[45 /*5*/] = { 2433,045f, 4960,594f, 45,8192f };
			Local_109[46 /*5*/] = { 2432,065f, 4960,25f, 45,813f };
			Local_109[47 /*5*/] = { 2431,233f, 4960,809f, 45,8089f };
			Local_109[48 /*5*/] = { 2430,575f, 4961,574f, 45,5917f };
			Local_109[49 /*5*/] = { 2429,889f, 4962,028f, 44,9345f };
			Local_109[50 /*5*/] = { 2429,26f, 4962,595f, 44,2774f };
			Local_109[51 /*5*/] = { 2428,691f, 4963,279f, 43,6202f };
			Local_109[52 /*5*/] = { 2428,073f, 4963,911f, 42,9631f };
			Local_109[53 /*5*/] = { 2428,239f, 4964,922f, 42,9631f };
			Local_109[54 /*5*/] = { 2428,961f, 4965,455f, 42,3059f };
			Local_109[55 /*5*/] = { 2429,45f, 4966,224f, 41,8679f };
			Local_109[56 /*5*/] = { 2430,073f, 4966,82f, 41,3476f };
			Local_109[57 /*5*/] = { 2431,097f, 4967,043f, 41,3476f };
			Local_109[58 /*5*/] = { 2431,89f, 4966,403f, 41,3476f };
			Local_109[59 /*5*/] = { 2432,768f, 4965,902f, 41,3476f };
			Local_109[60 /*5*/] = { 2433,776f, 4965,613f, 41,3476f };
			Local_136[0 /*6*/].f_3 = "Table Flames";
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/].f_3 = "Table Explosion";
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/].f_3 = "House Explosion";
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/].f_3 = "Cam Shake";
			Local_136[3 /*6*/] = 0;
			Local_136[4 /*6*/].f_3 = "Position player";
			Local_136[4 /*6*/] = 0;
			Local_136[5 /*6*/].f_3 = "Slow mo";
			Local_136[5 /*6*/] = 0;
			Local_136[0 /*6*/].f_1 = 2;
			Local_136[0 /*6*/].f_2 = 1000f;
			Local_136[1 /*6*/].f_1 = 2;
			Local_136[1 /*6*/].f_2 = 4200f;
			Local_136[2 /*6*/].f_1 = 3;
			Local_136[2 /*6*/].f_2 = 0f;
			Local_136[3 /*6*/].f_1 = 3;
			Local_136[3 /*6*/].f_2 = 0f;
			Local_136[4 /*6*/].f_1 = 3;
			Local_136[4 /*6*/].f_2 = 3200f;
			Local_136[5 /*6*/].f_1 = 3;
			Local_136[5 /*6*/].f_2 = 700f;
			Local_137[0 /*18*/] = { 2454,83f, 4974,96f, 46,4489f };
			Local_137[0 /*18*/].f_3 = { 2,9627f, 0,077f, 115,874f };
			Local_137[0 /*18*/].f_14 = 39,703f;
			Local_137[0 /*18*/].f_6 = { 2454,41f, 4974,93f, 46,4691f };
			Local_137[0 /*18*/].f_9 = { 2,6238f, 0,077f, 114,001f };
			Local_137[0 /*18*/].f_15 = 39,703f;
			Local_137[0 /*18*/].f_12 = 2500f;
			Local_137[0 /*18*/].f_13 = 2500f;
			Local_137[0 /*18*/].f_16 = 0;
			Local_137[0 /*18*/].f_17 = 18;
			Local_137[1 /*18*/] = { 2435,41f, 4960,94f, 45,9568f };
			Local_137[1 /*18*/].f_3 = { 6,677f, 0f, -49,4853f };
			Local_137[1 /*18*/].f_14 = 58,9114f;
			Local_137[1 /*18*/].f_6 = { 2435,11f, 4960,62f, 45,9441f };
			Local_137[1 /*18*/].f_9 = { 6,3596f, 0f, -44,8248f };
			Local_137[1 /*18*/].f_15 = 58,9114f;
			Local_137[1 /*18*/].f_12 = 3200f;
			Local_137[1 /*18*/].f_13 = 1900f;
			Local_137[1 /*18*/].f_16 = 0;
			Local_137[1 /*18*/].f_17 = 34;
			Local_137[2 /*18*/] = { 2434,77f, 4969,56f, 42,3654f };
			Local_137[2 /*18*/].f_3 = { 5,2773f, -0,1511f, 132,167f };
			Local_137[2 /*18*/].f_14 = 35,1297f;
			Local_137[2 /*18*/].f_6 = { 2434,66f, 4969,68f, 42,3657f };
			Local_137[2 /*18*/].f_9 = { 5,2773f, -0,1511f, 132,167f };
			Local_137[2 /*18*/].f_15 = 35,1297f;
			Local_137[2 /*18*/].f_12 = 3500f;
			Local_137[2 /*18*/].f_13 = 4500f;
			Local_137[2 /*18*/].f_16 = 3;
			Local_137[2 /*18*/].f_17 = 49;
			Local_137[3 /*18*/] = { 2472,1f, 4943,1f, 45,3f };
			Local_137[3 /*18*/].f_3 = { 6f, 0f, 25,3f };
			Local_137[3 /*18*/].f_14 = 33,1297f;
			Local_137[3 /*18*/].f_6 = { 2472,1f, 4943,1f, 45,3f };
			Local_137[3 /*18*/].f_9 = { 5,5f, 0f, 35,6f };
			Local_137[3 /*18*/].f_15 = 33,1297f;
			Local_137[3 /*18*/].f_12 = 3500f;
			Local_137[3 /*18*/].f_13 = 3500f;
			Local_137[3 /*18*/].f_16 = 0;
			Local_137[3 /*18*/].f_17 = -1;
			fLocal_157 = 0,06f;
			func_166(1);
			vLocal_142[0 /*3*/] = { 2432,74f, 4963,43f, 41,35f };
			vLocal_142[1 /*3*/] = { 2432,02f, 4962,61f, 41,35f };
			vLocal_142[2 /*3*/] = { 2431,06f, 4961,83f, 41,35f };
			vLocal_142[3 /*3*/] = { 2430,84f, 4961,08f, 42,09f };
			vLocal_142[4 /*3*/] = { 2430,53f, 4962,47f, 42f };
			vLocal_142[5 /*3*/] = { 2430,81f, 4961,1f, 42,8f };
			vLocal_142[6 /*3*/] = { 2429,74f, 4961,98f, 42,32f };
			vLocal_142[7 /*3*/] = { 2433,5f, 4966,76f, 41,35f };
			vLocal_142[8 /*3*/] = { 2433,24f, 4967,42f, 41,35f };
			vLocal_142[9 /*3*/] = { 2433,15f, 4967,43f, 42,19f };
			vLocal_142[10 /*3*/] = { 2432,53f, 4967,89f, 42,4f };
			vLocal_142[11 /*3*/] = { 2432,48f, 4969,07f, 42,19f };
			vLocal_142[12 /*3*/] = { 2433,36f, 4969,44f, 42,31f };
			vLocal_130[0 /*3*/] = { 2552,692f, 4978,566f, 45,32309f };
			vLocal_130[1 /*3*/] = { 2562,534f, 5013,502f, 47,46302f };
			vLocal_130[2 /*3*/] = { 2553,885f, 4945,661f, 47,49305f };
			vLocal_130[3 /*3*/] = { 2515,545f, 4936,428f, 42,88382f };
			vLocal_130[4 /*3*/] = { 2497,318f, 4967,818f, 43,59557f };
			vLocal_130[5 /*3*/] = { 2481,376f, 4951,766f, 43,99859f };
			vLocal_130[6 /*3*/] = { 2522,044f, 4956,372f, 43,71605f };
			vLocal_130[7 /*3*/] = { 2529,048f, 4985,627f, 43,86848f };
			vLocal_130[8 /*3*/] = { 2502,503f, 4987,245f, 46,62669f };
			vLocal_130[9 /*3*/] = { 2464,891f, 4939,949f, 44,25646f };
			vLocal_130[10 /*3*/] = { 2447,16f, 4940,272f, 44,15766f };
			vLocal_130[11 /*3*/] = { 2376,537f, 4946,399f, 41,77232f };
			vLocal_130[12 /*3*/] = { 2395,232f, 4995,63f, 44,68909f };
			vLocal_130[13 /*3*/] = { 2419,819f, 4991,936f, 45,36976f };
			vLocal_130[14 /*3*/] = { 2436,319f, 5011,725f, 45,84694f };
			vLocal_130[15 /*3*/] = { 2407,765f, 5023,079f, 47,77091f };
			vLocal_130[16 /*3*/] = { 2479,016f, 5028,829f, 42,98806f };
			vLocal_130[17 /*3*/] = { 2434,704f, 5042,713f, 45,34462f };
			vLocal_130[18 /*3*/] = { 2513,93f, 5039,333f, 51,02121f };
			vLocal_130[19 /*3*/] = { 2477,882f, 4986,437f, 44,99511f };
			vLocal_130[20 /*3*/] = { 2450,058f, 5011,858f, 44,89032f };
			func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
			func_359(&vLocal_120, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_359(&vLocal_121, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_359(&vLocal_125, "CHI2_nope", 8, "ONEILGUARD1");
			func_359(&vLocal_122, "SEETREVOR", 3, "chin2goon1");
			func_359(&vLocal_123, "CHI2_hear", 8, "ONEILGUARD1");
			func_359(&vLocal_124, "CHI2_hear", 8, "ONEILGUARD1");
			func_359(&vLocal_126, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_359(&vLocal_127, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_359(&vLocal_128, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_359(&vLocal_129, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_144 = unk_0x4E7809A068F46A31();
			unk_0x2E4932E63763FE26(joaat("bodhi2"), 1);
			unk_0x4DE114E3C7F8B7C2("TAOGROUP", &iLocal_118);
			unk_0xF96119FCCD4D1889(1, iLocal_118, 1862763509);
			unk_0xF96119FCCD4D1889(1, 1862763509, iLocal_118);
			func_17(0, -1);
			unk_0xB4301FCD03DF42F6("Chinese2_Lunch", 0);
			unk_0xB4301FCD03DF42F6("CHINESE2_HILLBILLIES", 0);
			if (func_358())
			{
				iVar0 = func_357();
				if (Global_87155 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_265(2, 1, 0);
						unk_0x59C3AC31C7544A28(1000);
						break;
					
					case 1:
						if (Global_87155 == 1)
						{
							func_265(3, 1, 0);
						}
						else
						{
							func_265(4, 1, 0);
							unk_0x59C3AC31C7544A28(1000);
						}
						break;
					
					case 2:
						func_265(6, 1, 0);
						unk_0x59C3AC31C7544A28(1000);
						break;
					
					case 3:
						func_265(7, 1, 0);
						unk_0x59C3AC31C7544A28(1000);
						break;
					
					case 4:
						if (Global_87155 == 1)
						{
							func_265(8, 1, 0);
						}
						else
						{
							func_265(9, 1, 0);
							unk_0x59C3AC31C7544A28(1000);
						}
						break;
					
					case 5:
						func_265(10, 1, 0);
						unk_0x59C3AC31C7544A28(1000);
						func_144();
						break;
				}
			}
			else if (func_141(0))
			{
				func_265(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_265(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F090
{
	int iVar0;
	
	func_352(3);
	func_32(6, 0);
	iLocal_150 = 0;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0x6FF834D85E2DD4C6(joaat("ig_old_man2"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_old_man1a"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_janet"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_taocheng"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_taostranslator"));
			unk_0x393584863A2F304E("chinese_2_int", 8);
			while (((((!unk_0x9A0B2ED5055D3F0B(joaat("ig_old_man2")) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_old_man1a"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_janet"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_taocheng"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_taostranslator"))) || !unk_0xA3DDC3767EC660CD())
			{
				func_28(323, 1);
			}
			while (!func_349(&(Local_113[11 /*33*/]), 21, 1985,666f, 3052,661f, 46,2151f, 0, 1))
			{
				system::wait(0);
			}
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1992,878f, 3057,846f, 46,0568f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 311f);
			unk_0x03924C68EFCBC511(Local_113[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_348(1992,878f, 3057,846f, 46,0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_144))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_144, 1994,387f, 3061,94f, 46,0491f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_144, 50,7724f);
				}
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
				unk_0x3D34B699E4F36612(1992,878f, 3057,846f, 46,0568f);
			}
			unk_0xCB389937EDB1519A(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			unk_0xBB0951717202666D(Vector(50,27741f, 3054,884f, 1991,22f) - Vector(40f, 40f, 40f), Vector(50,27741f, 3054,884f, 1991,22f) + Vector(0f, 40f, 40f));
			unk_0x247EAA2E93D4A021(1984,997f, 3052,905f, 46,8556f, 10f, 1, 0, 0, false);
			func_277(1, 0, bParam2);
			unk_0x6FF834D85E2DD4C6(joaat("ig_taocheng"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_taostranslator"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_old_man1a"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_old_man2"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_janet"));
			unk_0x6450931B826B49D9("misschinese2_crystalmaze");
			while (((((!unk_0x9A0B2ED5055D3F0B(joaat("ig_taocheng")) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_taostranslator"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_old_man1a"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_old_man2"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_janet"))) || !unk_0x3A801AA34DD821BE("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_68(iLocal_144))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_144, -1);
					unk_0xBD8D47FDC6902B2D(iLocal_144, 1994,387f, 3061,94f, 46,0491f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_144, 50,7724f);
				}
				else
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1992,878f, 3057,846f, 46,0568f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 311f);
				}
			}
			func_28(85, 1);
			func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_169(2, 41) != 900)
			{
				func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_68(iLocal_144))
				{
					func_274(iLocal_144, -1, 1);
				}
				else
				{
					func_274(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_348(2574,049f, 4981,824f, 50,44f, 50f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2570,543f, 4982,002f, 50,6795f, 0, 1, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 98,21f);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
				unk_0x3D34B699E4F36612(2458,508f, 4984,504f, 52,3461f);
				func_28(323, 1);
			}
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			unk_0x94BD6F0436473406(0f);
			func_277(0, 0, 0);
			unk_0xABEF7F0F7ED126F3("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_224(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0xE48C631281D64F7F())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_147(10, 5))
			{
				func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_348(func_273(), func_272(), 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2570,543f, 4982,002f, 50,6795f, 0, 1, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 98,21f);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
				unk_0x3D34B699E4F36612(2570,543f, 4982,002f, 50,6795f);
				func_28(323, 1);
			}
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			func_277(0, 1, 0);
			unk_0x94BD6F0436473406(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_271(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), iVar0, 0))
				{
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0x6ADD12BF4D6D2587(iLocal_144) && unk_0xB8DE76287EDC4957(iLocal_144, 0)) && func_270())
				{
					func_274(iLocal_144, -1, 1);
					if (unk_0xB8DE76287EDC4957(iLocal_144, 0))
					{
						unk_0xA15269351F50F113(iLocal_144, true, 1, 0);
						if (unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iLocal_144)))
						{
							unk_0xFB2E9855F95E3BD3(iLocal_144, 15f);
						}
						if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_144)))
						{
							unk_0xFDAFE1354D61AE41(iLocal_144);
							unk_0xD91B0600CD72C5F7(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_274(0, -1, 1);
				}
			}
			if (unk_0xBE3C4023003180FC(func_273(), 2570,538f, 4982,031f, 50,6239f, true) < 10f)
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2570,538f, 4982,031f, 50,6239f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 98f);
			}
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_268(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			break;
		
		case 5:
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2572,01f, 4981,678f, 50,6698f, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 90,3911f);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0x94BD6F0436473406(0f);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_277(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_267(0, 1, 1);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_348(2450,871f, 4960,999f, 44,3759f, 351f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2450,871f, 4960,999f, 44,3759f, 0, 1, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 351,3911f);
				unk_0x3D34B699E4F36612(2432,982f, 4964,823f, 41,3476f);
				func_28(325, 1);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
			}
			func_277(0, 0, 0);
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			system::wait(1);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0x94BD6F0436473406(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_267(0, 1, 1);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_268(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_348(2435,319f, 4966,153f, 41,3476f, 104,2964f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2435,319f, 4966,153f, 41,3476f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 104,2964f);
				unk_0x3D34B699E4F36612(2432,982f, 4964,823f, 41,3476f);
				system::wait(1);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
			}
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			func_166(1);
			func_277(0, 0, 0);
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
			iLocal_179 = unk_0xD3BB1A515B0A47F3(2432,982f, 4964,823f, 41,3476f);
			while (!unk_0x2C2E1E35924B9FF2(iLocal_179))
			{
				iLocal_179 = unk_0xD3BB1A515B0A47F3(2432,982f, 4964,823f, 41,3476f);
				func_28(14, 1);
			}
			while (!unk_0x1A595E6882473810(iLocal_179))
			{
				func_28(15, 1);
			}
			unk_0xFC5A14DA5555DFAE(iLocal_179, 1);
			unk_0xA1451353A1AED1A5(iLocal_179);
			iLocal_179 = 0;
			unk_0x04562CD765E0C517(joaat("weapon_petrolcan"), 31, 0);
			unk_0x6450931B826B49D9("misschinese2_crystalmaze");
			while (!unk_0x0A198E59F03B0E6F(joaat("weapon_petrolcan")) || !unk_0x3A801AA34DD821BE("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0x94BD6F0436473406(0f);
			unk_0x6FF834D85E2DD4C6(joaat("blazer"));
			while (!unk_0x9A0B2ED5055D3F0B(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_266(0, 7, 1);
			unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 4500, true, true);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_348(2453,124f, 4952,071f, 45,125f, 285f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2453,124f, 4952,071f, 45,125f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 285,8625f);
				unk_0x3D34B699E4F36612(2453,124f, 4952,071f, 45,125f);
				system::wait(1);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
			}
			func_277(0, 0, 0);
			if (!unk_0xE48C631281D64F7F())
			{
				unk_0xABEF7F0F7ED126F3("chinese2_explosion_cutscene");
			}
			unk_0x1E56F4F04588C11A(1);
			unk_0x1D60449E9FA475EF(1);
			unk_0x6FF834D85E2DD4C6(joaat("blazer"));
			while (!unk_0x9A0B2ED5055D3F0B(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_146 = unk_0xEA60F3B426BB095B(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
			unk_0xACE486395AA1867D(iLocal_146, 1084227584);
			iLocal_179 = unk_0xD3BB1A515B0A47F3(2432,982f, 4964,823f, 41,3476f);
			while (!unk_0x2C2E1E35924B9FF2(iLocal_179))
			{
				iLocal_179 = unk_0xD3BB1A515B0A47F3(2432,982f, 4964,823f, 41,3476f);
				func_28(21, 1);
			}
			while (!unk_0x1A595E6882473810(iLocal_179))
			{
				func_28(22, 1);
			}
			iLocal_166 = 3;
			unk_0xFC5A14DA5555DFAE(iLocal_179, 1);
			unk_0xA1451353A1AED1A5(iLocal_179);
			iLocal_179 = 0;
			while (!unk_0x9A0B2ED5055D3F0B(joaat("blazer")) || !unk_0xE48C631281D64F7F())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			while (!unk_0x8028488F650E6677("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_348(2472,3f, 4948,181f, 44,0937f, 220f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2472,3f, 4948,181f, 44,0937f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 220,8569f);
				unk_0x3D34B699E4F36612(2453,124f, 4952,071f, 45,125f);
				system::wait(1);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0x1E56F4F04588C11A(3);
			unk_0x1D60449E9FA475EF(3);
			unk_0x6FF834D85E2DD4C6(joaat("blazer"));
			while ((!unk_0x9A0B2ED5055D3F0B(joaat("blazer")) || !unk_0x1CF95440F1970B4F("FARMHOUSE_FIRE", false, -1)) || !unk_0x1CF95440F1970B4F("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_146 = unk_0xEA60F3B426BB095B(joaat("blazer"), 2478,587f, 4941,803f, 43,6736f, 227,2903f, 1, 1, 0);
			unk_0xACE486395AA1867D(iLocal_146, 1084227584);
			func_277(0, 0, 0);
			unk_0x3D34B699E4F36612(2453,124f, 4952,071f, 45,125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_173 = unk_0x0B4BABF632AE674E(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
			while (!unk_0xCA61C7E425DAB6B3(uLocal_173))
			{
				func_28(161, 1);
			}
			unk_0xD0C906ABF8DD7B95(uLocal_173, 9);
			unk_0x143DCD09D82EE129(2457,15f, 4968,79f, 48,677f, 100f, 965837842, 0);
			unk_0x143DCD09D82EE129(2457,15f, 4968,79f, 48,677f, 100f, 247384786, 0);
			unk_0x143DCD09D82EE129(2457,15f, 4968,79f, 48,677f, 100f, -247908770, 0);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_348(2625,776f, 4802,217f, 32,5747f, 206f, 1, 0);
			}
			else
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2625,776f, 4802,217f, 32,5747f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 206,4254f);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-7f, 1065353216);
				unk_0x3D34B699E4F36612(2625,776f, 4802,217f, 32,5747f);
			}
			unk_0x1E56F4F04588C11A(3);
			unk_0x1D60449E9FA475EF(3);
			unk_0xD0C906ABF8DD7B95(uLocal_173, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0x1FFA1
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0x1FFBD
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

Vector3 func_268(int iParam0, vector3 vParam1)//Position - 0x1FFD9
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0,15f);
	if (unk_0x7367FB97975F1E29(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_269(iParam0))
	{
		unk_0xBD8D47FDC6902B2D(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_269(int iParam0)//Position - 0x20020
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

bool func_270()//Position - 0x2003E
{
	return Global_98118.f_2875.f_8;
}

var func_271(int iParam0)//Position - 0x2004F
{
	if (Global_92870 > 0)
	{
		return Global_98118.f_21[iParam0];
	}
	return Global_95149.f_21[iParam0];
}

float func_272()//Position - 0x20079
{
	return Global_98118.f_2869.f_3;
}

Vector3 func_273()//Position - 0x2008A
{
	return Global_98118.f_2869;
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0x2009B
{
	if (func_358() && func_276())
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
		func_275(0);
	}
}

void func_275(int iParam0)//Position - 0x2015F
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

bool func_276()//Position - 0x20188
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_277(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2019C
{
	if (bParam0)
	{
		if (func_347())
		{
			if (func_344(func_346(), 10f, 20f, 9f, 1))
			{
				func_343();
				while (!func_342())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_144 = func_341(1994,387f, 3061,94f, 46,0491f, 50f);
				}
				else
				{
					iLocal_144 = func_341(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_340())
	{
		func_338();
		while (!func_337())
		{
			func_28(544, 1);
		}
		iLocal_144 = func_278(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_270())
		{
			if (unk_0xB8DE76287EDC4957(iLocal_144, 0))
			{
				unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_144, -1);
			}
		}
	}
}

int func_278(vector3 vParam0, float fParam1)//Position - 0x20260
{
	return func_279(&(Global_98118.f_2875), vParam0, fParam1, 0);
}

int func_279(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2027A
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_336(uParam0))
	{
		if (func_162(vParam1, 0f, 0f, 0f, 0))
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
		if (func_335(uParam0))
		{
			unk_0x247EAA2E93D4A021(vParam1, 5f, 1, 0, 0, false);
			func_334(vParam1, 5f, 0);
			iVar0 = unk_0xEA60F3B426BB095B(uParam0->f_12.f_66, vParam1, fParam2, 1, 1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (system::vdist2(vVar1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0xAA93B7B448E10E40(iVar0, vParam1, 0, 0, 1);
				}
				func_317(iVar0, &(uParam0->f_12), 0, 1);
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
							func_316(uParam0->f_11, 1);
						}
						else if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_316(uParam0->f_11, 2);
						}
					}
					unk_0xD8D940C0BFD3E1EC(iVar0, 0);
					unk_0x1F0117F8A8E4EC12(iVar0, 0);
					unk_0x438D30A195B65156(iVar0, true);
					func_315(iVar0, uParam0->f_11);
				}
				else if ((!func_313(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "startup_positioning"))
				{
					iVar4 = func_312(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_305(iVar4);
					}
				}
				if (((Global_92833 != 13 && Global_92833 != 10) && Global_92833 != 11) && Global_92833 != 12)
				{
					if (unk_0x8B948C59217A295D(&(Global_92833.f_3)) == Global_70666)
					{
						if (uParam0->f_12.f_66 == Global_104555.f_32429.f_69[21 /*78*/].f_66)
						{
							func_302(24, 0);
							func_305(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_280(iVar0, uParam0->f_11);
				}
				unk_0x14776E43F90DD454(uParam0->f_12.f_66);
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_280(int iParam0, int iParam1)//Position - 0x2052C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_286(iParam0))
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
	func_281(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_281(int iParam0, var uParam1)//Position - 0x2072E
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_285(uParam1);
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
		if (uParam1->f_65 == -1 && !func_284(uParam1->f_66))
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
		func_283(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_282(iVar0 + 1));
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

int func_282(int iParam0)//Position - 0x209D9
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

int func_283(int iParam0, var uParam1, var uParam2)//Position - 0x20A89
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

int func_284(int iParam0)//Position - 0x20B63
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

void func_285(var uParam0)//Position - 0x20B83
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

int func_286(int iParam0)//Position - 0x20C34
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_72(iParam0, 0, 0)) || func_72(iParam0, 1, 0)) || func_72(iParam0, 2, 0)) || func_301(iParam0) != 145) || func_300(iParam0)) || func_299(iParam0)) || func_298(iParam0)) || func_297(iParam0)) || !func_287(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_299(iParam0))
		{
		}
		if (func_299(iParam0))
		{
		}
		if (func_72(iParam0, 0, 0))
		{
		}
		if (func_72(iParam0, 1, 0))
		{
		}
		if (func_72(iParam0, 2, 0))
		{
		}
		if (func_301(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_287(int iParam0)//Position - 0x20D11
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_288(iParam0, 0))
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

int func_288(int iParam0, bool bParam1)//Position - 0x20EC2
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
		if (!func_296())
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
		if ((((!func_295() && !func_294()) && !func_293()) && !func_292()) && !func_296())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_293())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_291(iParam0))
		{
			return 0;
		}
	}
	if (!func_289(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_289(int iParam0)//Position - 0x21050
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_290())
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

int func_290()//Position - 0x2111C
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x21133
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

int func_292()//Position - 0x229BB
{
	return 0;
}

int func_293()//Position - 0x229C4
{
	return 1;
}

int func_294()//Position - 0x229CD
{
	return 1;
}

int func_295()//Position - 0x229D6
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_296()//Position - 0x229EF
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

int func_297(int iParam0)//Position - 0x22AAA
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_288(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x22AF0
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

int func_299(int iParam0)//Position - 0x22B2B
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

int func_300(int iParam0)//Position - 0x22BA7
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

int func_301(int iParam0)//Position - 0x22C8F
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

void func_302(int iParam0, bool bParam1)//Position - 0x22CF2
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_304(iParam0, 0))
		{
			func_303(iParam0, 1, 0);
			func_303(iParam0, 2, 0);
			func_303(iParam0, 3, 0);
			func_303(iParam0, 4, 0);
			func_303(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_303(iParam0, 0, 0);
	}
}

void func_303(int iParam0, int iParam1, bool bParam2)//Position - 0x22D4F
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

bool func_304(int iParam0, int iParam1)//Position - 0x22D8A
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_305(int iParam0)//Position - 0x22DAD
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_309(&(Global_69678.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_304(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_307(0, Global_69678.f_555[0 /*21*/].f_12) || !func_307(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_306(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_302(iParam0, 0);
		}
	}
}

void func_306(var uParam0, var uParam1)//Position - 0x22F1F
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

int func_307(int iParam0, int iParam1)//Position - 0x22FEB
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
	if (iParam0 < 0 || iParam0 >= func_308(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_288(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_308(var uParam0)//Position - 0x2305D
{
	return *uParam0;
}

int func_309(var uParam0, int iParam1)//Position - 0x23068
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
			uParam0->f_4 = func_310(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_310(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_310(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_310(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_310(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_310(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_310(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_310(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_310(2, 1);
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
			if (func_296())
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
			if (func_296())
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
		if (!func_162(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_162(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_162(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_310(int iParam0, int iParam1)//Position - 0x24761
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_311(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_311(int iParam0, var uParam1, int iParam2)//Position - 0x247A3
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

int func_312(int iParam0)//Position - 0x249FF
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

int func_313(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x24AC2
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_314(iParam0, Global_69678.f_139[38], 0))
			{
				func_305(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_314(iParam0, Global_69678.f_139[43], 1))
			{
				func_305(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_314(iParam0, uVar1[iVar3], 1) && func_228(unk_0xB3328BA8976B416C(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_162(vParam1, 0f, 0f, 0f, 0)) || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(uVar1[iVar3], 1), true) < 10f)
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
					func_305(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[20]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[20], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[20]) == joaat("swift2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[20]))
				{
					func_305(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_314(int iParam0, int iParam1, bool bParam2)//Position - 0x24CCA
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

void func_315(int iParam0, int iParam1)//Position - 0x24D2B
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

void func_316(int iParam0, int iParam1)//Position - 0x24DAD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (iParam0 == 145 || Global_90319[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == func_310(iParam0, iParam1))
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

void func_317(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x24E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_326(iParam0))
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
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_282(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_282(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_282(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_282(iVar1 + 1));
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
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_325(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_324())
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
		if (uParam1->f_65 == -1 && !func_284(uParam1->f_66))
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
						func_323(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_323(iParam0, uParam1->f_69);
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
			func_318(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_282(iVar2 + 1)))
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

int func_318(int iParam0, var uParam1, var uParam2)//Position - 0x2539B
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
	if (func_322(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_321(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_321(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_320(iParam0);
	if (func_319(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, 1);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_319(int iParam0)//Position - 0x25519
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

void func_320(var uParam0)//Position - 0x255F5
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

int func_321(int iParam0, int iParam1)//Position - 0x25635
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

int func_322(int iParam0, int iParam1)//Position - 0x2571A
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

void func_323(int iParam0, int iParam1)//Position - 0x2598D
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

bool func_324()//Position - 0x259F2
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_325(int iParam0)//Position - 0x25A03
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

int func_326(int iParam0)//Position - 0x25A4E
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_332(unk_0x9EB17624F44A8DA4(), -1))
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
	if (func_328(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_327(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x25AD5
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

int func_328(int iParam0)//Position - 0x25B04
{
	if (func_331(iParam0) == 233)
	{
		return func_329(iParam0);
	}
	return -1;
}

int func_329(int iParam0)//Position - 0x25B21
{
	if (func_330(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_330(int iParam0, int iParam1)//Position - 0x25B44
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x25B7F
{
	if (func_330(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_332(int iParam0, int iParam1)//Position - 0x25BA2
{
	int iVar0;
	
	if (func_333(iParam0, 1, 1))
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

int func_333(int iParam0, bool bParam1, bool bParam2)//Position - 0x25BEF
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

void func_334(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x25C39
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_309(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_305(iVar0);
			}
		}
		iVar0++;
	}
}

int func_335(var uParam0)//Position - 0x25C89
{
	if (func_336(uParam0))
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

int func_336(var uParam0)//Position - 0x25CBE
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_288(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_228(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_337()//Position - 0x25D1D
{
	return func_335(&(Global_98118.f_2875));
}

void func_338()//Position - 0x25D30
{
	func_339(&(Global_98118.f_2875));
}

void func_339(var uParam0)//Position - 0x25D43
{
	if (func_336(uParam0))
	{
		unk_0x6FF834D85E2DD4C6(uParam0->f_12.f_66);
	}
}

bool func_340()//Position - 0x25D61
{
	return func_336(&(Global_98118.f_2875));
}

int func_341(vector3 vParam0, float fParam1)//Position - 0x25D74
{
	return func_279(&(Global_95149.f_2875), vParam0, fParam1, 0);
}

bool func_342()//Position - 0x25D8E
{
	return func_335(&(Global_95149.f_2875));
}

void func_343()//Position - 0x25DA1
{
	func_339(&(Global_95149.f_2875));
}

int func_344(int iParam0, vector3 vParam1, int iParam2)//Position - 0x25DB4
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_345() };
	}
	unk_0x04FE252E98FAA4C3(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_345()//Position - 0x25E1E
{
	return 2,55f, 5,665f, 2,55f;
}

int func_346()//Position - 0x25E35
{
	return Global_95149.f_2875.f_12.f_66;
}

bool func_347()//Position - 0x25E48
{
	return func_336(&(Global_95149.f_2875));
}

void func_348(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x25E5B
{
	if (func_358())
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
		func_275(1);
	}
}

int func_349(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x25EF0
{
	int iVar0;
	
	if (!func_45(iParam1))
	{
		iVar0 = func_351(iParam1);
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x6ADD12BF4D6D2587(*iParam0))
			{
				unk_0x68433819717660CF(iParam0);
			}
			*iParam0 = unk_0xAC992EFAD62C33BF(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xE537629E02E8DA21(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x4CDD2D1D66ED1DE4(*iParam0, 3) == 0)
				{
					unk_0x03924C68EFCBC511(*iParam0, 5, 2, 0, 0);
				}
			}
			func_350(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x14776E43F90DD454(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1)//Position - 0x25F7E
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_88812[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_351(int iParam0)//Position - 0x25FC4
{
	if (!func_45(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_352(int iParam0)//Position - 0x25FEF
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	unk_0xFAC4E1A83A1073D9();
	unk_0x1E56F4F04588C11A(3);
	unk_0x1D60449E9FA475EF(3);
	iLocal_392 = 0;
	iLocal_167 = 0;
	iLocal_163 = 0;
	iLocal_150 = 0;
	iLocal_114 = 0;
	iLocal_164 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	while (unk_0x6C97EEC6339FB45C())
	{
		if (unk_0xA8113D347D14630F())
		{
			unk_0x7042DDDE71665936(1);
		}
		else
		{
			unk_0xA6C03E3E2533F8F3();
		}
		func_28(0, 0);
	}
	if (unk_0xB8B3E5529EDB87D4(uLocal_168))
	{
		unk_0x60727D07B2D72C82(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0xB8B3E5529EDB87D4(iLocal_169[iVar0]))
		{
			unk_0x60727D07B2D72C82(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	sLocal_406 = "";
	sLocal_407 = "";
	func_184();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	unk_0x90CF15A020F6758D(1f);
	func_356();
	unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
	unk_0x4779448854314440(0);
	func_186(0, 1, 1, 0);
	func_28(32, 0);
	unk_0x41390D2B41D5502D(1f);
	unk_0x84CDD933AFA470D2();
	func_210(&Local_184, 1, 0);
	func_66();
	func_64();
	unk_0x3CDDC4760DBA4651();
	unk_0xC234848D21B6064E(0);
	unk_0xD855BC7E9D7EC87F(Vector(44,8113f, 4961,045f, 2469,985f) - Vector(100f, 100f, 100f), Vector(44,8113f, 4961,045f, 2469,985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 965837842, 1);
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, 247384786, 1);
		unk_0xA25B44929E552182(2457,15f, 4968,79f, 48,677f, 100f, -247908770, 0);
		Global_34023 = 1;
	}
	unk_0x57861FD7C1425428("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0xB4301FCD03DF42F6("Chinese2_Lunch", 1);
		unk_0xB4301FCD03DF42F6("CHINESE2_HILLBILLIES", 0);
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	if (iLocal_379 != -1)
	{
		if (unk_0xA12FA3F7428EE798(iLocal_379))
		{
			unk_0x7DC528E86B55C67E(iLocal_379);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_354(unk_0xFC1458A37D98B502(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0x957CEE967C939968(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0x3AB6A1A9084FB0A4(Local_113[iVar0 /*33*/]))
				{
					unk_0xE9B3D12A64CC7C1A(Local_113[iVar0 /*33*/], true);
					unk_0x486F346ADFE56674(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0x68433819717660CF(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		if (unk_0x6ADD12BF4D6D2587(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0x452336926718D62A(&(Local_113[iVar0 /*33*/].f_20));
		}
		unk_0x9EA1BA1DD45771B3(Local_113[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_353();
	}
	else
	{
		func_203(&Local_119, &uLocal_203, cLocal_131, 12f, 2482,197f, 4975,367f, 44,7288f, 121f, 1);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_373))
	{
		unk_0x452336926718D62A(&iLocal_373);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0x247EAA2E93D4A021(2438,433f, 4970,416f, 53,1778f, 450f, 1, 0, 0, false);
		unk_0x49779D62887BC4A2(2442,69f, 4970,348f, 46,33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 1 && Local_153[iVar0 /*6*/].f_3 == 0) || Local_153[iVar0 /*6*/].f_3 == 0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			Local_153[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xA6DECE14FC9A8C51(iLocal_178))
	{
		unk_0xE30CF11C0EE14316(&iLocal_178);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_170)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_170[iVar1]))
		{
			unk_0x452336926718D62A(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_144))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_144, 0))
			{
				if (unk_0xCB234F3DD6FF9368(iLocal_144, 1))
				{
					if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0x5380482A432E314E(&iLocal_144);
					}
					else
					{
						unk_0x5380482A432E314E(&iLocal_144);
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_145))
	{
		if (iParam0 != 0)
		{
			if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x5380482A432E314E(&iLocal_145);
			}
			else
			{
				unk_0x5380482A432E314E(&iLocal_145);
			}
		}
		else
		{
			unk_0x5380482A432E314E(&iLocal_145);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_146))
	{
		if (func_68(iLocal_146))
		{
			unk_0x5380482A432E314E(&iLocal_146);
		}
	}
	if (unk_0xB8B3E5529EDB87D4(uLocal_176))
	{
		unk_0x60727D07B2D72C82(uLocal_176);
	}
	if (iParam0 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_181))
		{
			unk_0xEDC33A771FAEB393(iLocal_181, false);
			unk_0x3A703774620FDB42(&iLocal_181);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_182))
		{
			unk_0xEDC33A771FAEB393(iLocal_182, false);
			unk_0x3A703774620FDB42(&iLocal_182);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_160))
	{
		unk_0x68433819717660CF(&iLocal_160);
	}
	unk_0xF4A2B3ABAFAEF9EE(2439,687f, 4971,541f, 45,9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_113[12 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[12 /*33*/]));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[13 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[13 /*33*/]));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[14 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[14 /*33*/]));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[11 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[11 /*33*/]));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_113[10 /*33*/]))
		{
			unk_0x68433819717660CF(&(Local_113[10 /*33*/]));
		}
	}
	unk_0x14776E43F90DD454(joaat("a_m_m_hillbilly_01"));
	unk_0x14776E43F90DD454(joaat("a_m_m_hillbilly_02"));
	unk_0x14776E43F90DD454(joaat("prop_cs_fertilizer"));
	unk_0x14776E43F90DD454(joaat("burrito"));
	unk_0x14776E43F90DD454(joaat("ig_janet"));
	unk_0x14776E43F90DD454(joaat("ig_old_man1a"));
	unk_0x14776E43F90DD454(joaat("ig_old_man2"));
	unk_0x14776E43F90DD454(joaat("ig_taocheng"));
	unk_0x14776E43F90DD454(joaat("ig_taostranslator"));
	unk_0x14776E43F90DD454(joaat("ig_janet"));
	unk_0x2682425A18AA99E9("move_m@gangster@var_e");
	unk_0x2682425A18AA99E9("move_m@gangster@var_f");
	unk_0x2682425A18AA99E9("move_m@gangster@generic");
	unk_0xFCCDDE0E48CF9588("misschinese2_barrelRoll");
	unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_variations@b");
	unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@left");
	unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@right");
	unk_0xFCCDDE0E48CF9588("reaction@male_stand@big_intro@backward");
	unk_0xFCCDDE0E48CF9588("misschinese2_bank1");
	unk_0xFCCDDE0E48CF9588("misschinese2_bank5");
	unk_0xFCCDDE0E48CF9588("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
		{
			unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_159 = 0;
	iLocal_111 = 0;
	if (unk_0x771D0F8F56A5FE6C("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_POUR_GAS"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_POUR_GAS");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_SHOOT_GAS"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_SHOOT_GAS");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0x771D0F8F56A5FE6C("CHI_2_RAYFIRE"))
	{
		unk_0xE02E32C69260FBB7("CHI_2_RAYFIRE");
	}
	unk_0x8E7C072C41DF97BF();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_167());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_166(0);
	}
	if (iParam0 != 0)
	{
		uLocal_173 = unk_0x0B4BABF632AE674E(2457,15f, 4968,79f, 48,677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (unk_0xCA61C7E425DAB6B3(uLocal_173))
			{
				unk_0xD0C906ABF8DD7B95(uLocal_173, 2);
			}
			iLocal_174 = 0;
		}
	}
}

void func_353()//Position - 0x26831
{
	unk_0xE7D85A96E0AE7D18(-455129387, 31);
}

void func_354(int iParam0, int iParam1)//Position - 0x26844
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_355(iParam1, iVar0))
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

int func_355(int iParam0, int iParam1)//Position - 0x268AA
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

void func_356()//Position - 0x269DD
{
	int iVar0;
	
	Global_55932 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55933[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_357()//Position - 0x26A07
{
	if (!Global_92833 == 10 && !Global_92833 == 9)
	{
		return 0;
	}
	return Global_92833.f_2;
}

int func_358()//Position - 0x26A31
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_359(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x26A55
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_360()//Position - 0x26A6E
{
	unk_0x4DE114E3C7F8B7C2("MYFRIEND", &iLocal_115);
	unk_0x4DE114E3C7F8B7C2("FOE", &iLocal_116);
	unk_0x4DE114E3C7F8B7C2("IGNORE", &iLocal_117);
	unk_0x4DE114E3C7F8B7C2("BARpeds", &iLocal_154);
	unk_0xF96119FCCD4D1889(3, iLocal_154, 1862763509);
	unk_0xF96119FCCD4D1889(5, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()), iLocal_116);
	unk_0xF96119FCCD4D1889(5, iLocal_116, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
	unk_0xF96119FCCD4D1889(2, iLocal_115, iLocal_117);
	unk_0xF96119FCCD4D1889(2, iLocal_116, iLocal_117);
	unk_0xF96119FCCD4D1889(2, iLocal_117, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
	unk_0xF96119FCCD4D1889(2, iLocal_117, iLocal_116);
}

void func_361()//Position - 0x26B04
{
	switch (iLocal_575)
	{
		case 0:
			if (iLocal_149 >= 4)
			{
				func_362(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 1:
			if (iLocal_149 >= 4 && iLocal_149 < 7)
			{
				if (func_87(12) || iLocal_149 == 6)
				{
					func_362(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 7)
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"), 0))
				{
					func_362(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 7)
			{
				func_362(2, "Inside House", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 2:
			if (iLocal_149 >= 7)
			{
				func_362(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 3:
			if (iLocal_149 == 9)
			{
				func_362(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_575++;
			}
			break;
	}
}

void func_362(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26C17
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
		func_433(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_431(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_429(iVar1);
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
			iVar4 = func_424(unk_0x436287B7DB306165(), 1);
			if (iVar4 != -1)
			{
				Global_104555.f_18544[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_423(iVar4)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar5, 0, Global_92870, iParam0);
			}
			else
			{
				iVar6 = func_422(&(Global_92833.f_3));
				if (iVar6 > -1)
				{
					Global_104555.f_24956.f_4[iVar6] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_363(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_363(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x26D8D
{
	func_364(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_364(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x26DA9
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_43();
	uParam0->f_1 = func_411();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_388(&(uParam0->f_2869), 0);
		func_387(unk_0xFC1458A37D98B502());
		func_380(unk_0xFC1458A37D98B502(), 0);
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
		if (iVar1 == func_379())
		{
			func_373(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
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
		func_366(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_365(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_365(var uParam0)//Position - 0x27C31
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_366(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x27C53
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_372(iParam2, &iVar0, iParam3, iParam5))
	{
		func_367(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_367(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_367(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x27CDB
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_369(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_368(iParam2))
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

int func_368(int iParam0)//Position - 0x27D1B
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

void func_369(var uParam0, int iParam1, int iParam2)//Position - 0x27D49
{
	func_281(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_371(iParam1, 145, 0);
	uParam0->f_11 = func_301(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_370(iParam1);
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

int func_370(int iParam0)//Position - 0x27E25
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

int func_371(int iParam0, int iParam1, int iParam2)//Position - 0x27E67
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
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_310(iParam1, iParam2))
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

int func_372(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x27EF5
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
						if (func_72(*uParam1, func_43(), 1))
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

void func_373(int iParam0, var uParam1, int iParam2)//Position - 0x28024
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_378(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_377(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
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
			if (func_376(161, -1))
			{
				uParam1->f_59 = func_374(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_374(749, Global_70668, 0);
			}
			uParam1->f_60 = func_374(750, Global_70668, 0);
			uParam1->f_61 = func_374(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_376(161, -1))
			{
				uParam1->f_59 = func_374(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_374(749, Global_70668, 0);
			}
		}
	}
}

int func_374(int iParam0, int iParam1, int iParam2)//Position - 0x281CE
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_375(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_375(var uParam0)//Position - 0x28200
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_190();
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

int func_376(int iParam0, int iParam1)//Position - 0x28234
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_375(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_377(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x28260
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

void func_378(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x287A8
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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

int func_379()//Position - 0x289E9
{
	func_44();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_380(int iParam0, bool bParam1)//Position - 0x28A02
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_381(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
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

void func_381(int iParam0, var uParam1)//Position - 0x28AF5
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
			iVar3 = func_386(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_386(iVar0));
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
					iVar2 = func_384(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_384(Var4, iVar1);
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
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_383(Var7.f_1)) && iVar9 < 50)
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
							if (!func_382(Var8.f_3))
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

int func_382(int iParam0)//Position - 0x28D7F
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

int func_383(int iParam0)//Position - 0x28E1A
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

int func_384(int iParam0, int iParam1)//Position - 0x28F8E
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
				iVar1 = func_385(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_382(Var5.f_3))
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

int func_385(int iParam0, var uParam1)//Position - 0x29AFF
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

int func_386(int iParam0)//Position - 0x29B3A
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

void func_387(int iParam0)//Position - 0x29DAE
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_388(var uParam0, int iParam1)//Position - 0x29DEA
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
		if (func_391(&iVar0))
		{
			if (func_390(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_43();
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
		else if (func_389(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_389(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x2A345
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

bool func_390(int iParam0, var uParam1, var uParam2)//Position - 0x2A389
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
	return !func_162(*uParam1, 0f, 0f, 0f, 0);
}

int func_391(var uParam0)//Position - 0x2AA40
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_34())
		{
			*uParam0 = func_396(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_395(*uParam0) && !func_392(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_392(int iParam0)//Position - 0x2AA9B
{
	return func_393(iParam0, 0, 1);
}

int func_393(int iParam0, int iParam1, bool bParam2)//Position - 0x2AAAB
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_25() == 0)
		{
			return unk_0xC80D31E4B587871C(func_374(func_394(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_394(int iParam0)//Position - 0x2AB0B
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

int func_395(int iParam0)//Position - 0x2ADF0
{
	return func_393(iParam0, 5, 1);
}

int func_396(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x2AE00
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
		if (iParam1 == 6 || iParam1 == func_410(iVar0))
		{
			if (!bParam3 || func_409(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_397(iVar0, 0), true);
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

Vector3 func_397(int iParam0, bool bParam1)//Position - 0x2AEA2
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
			return func_408(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_407())
			{
				if (func_406(Global_1595538))
				{
					return func_399(2, 2);
				}
				else if (func_398(Global_1595538))
				{
					return func_399(45, 3);
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

int func_398(int iParam0)//Position - 0x2B441
{
	if (iParam0 != func_407())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_399(int iParam0, int iParam1)//Position - 0x2B49F
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_407())
	{
		if (iParam1 == 3)
		{
			if (func_400(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_400(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_400(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_400(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2B54D
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_405(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_405(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_403(iParam0) };
	}
	else
	{
		Var2 = { func_402(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_401(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_401(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_401(vector3 vParam0, float fParam1)//Position - 0x2B5E2
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

struct<6> func_402(int iParam0)//Position - 0x2B626
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

struct<6> func_403(int iParam0)//Position - 0x2B7AA
{
	return func_404(iParam0);
}

struct<6> func_404(int iParam0)//Position - 0x2B7B8
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

int func_405(int iParam0, var uParam1)//Position - 0x2C282
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

int func_406(int iParam0)//Position - 0x2C304
{
	if (iParam0 != func_407())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_407()//Position - 0x2C362
{
	return -1;
}

Vector3 func_408(int iParam0)//Position - 0x2C36B
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

int func_409(int iParam0)//Position - 0x2C508
{
	return func_393(iParam0, 0, 0);
}

int func_410(int iParam0)//Position - 0x2C518
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

var func_411()//Position - 0x2C7A5
{
	var uVar0;
	
	func_421(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_420(&uVar0, unk_0x95327550F0F2BE7C());
	func_419(&uVar0, unk_0x674C9438180770FE());
	func_414(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_413(&uVar0, unk_0xEAF455949B108589());
	func_412(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_412(var uParam0, int iParam1)//Position - 0x2C7EB
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

void func_413(var uParam0, int iParam1)//Position - 0x2C871
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_414(var uParam0, int iParam1)//Position - 0x2C8A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_418(*uParam0);
	iVar1 = func_416(*uParam0);
	if (iParam1 < 1 || iParam1 > func_415(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_415(int iParam0, int iParam1)//Position - 0x2C8F5
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

var func_416(int iParam0)//Position - 0x2C997
{
	return (system::shift_right(iParam0, 26) & 31 * func_417(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_417(bool bParam0, int iParam1, int iParam2)//Position - 0x2C9BC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_418(var uParam0)//Position - 0x2C9D3
{
	return uParam0 & 15;
}

void func_419(var uParam0, int iParam1)//Position - 0x2C9E0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_420(var uParam0, int iParam1)//Position - 0x2CA1A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_421(var uParam0, int iParam1)//Position - 0x2CA55
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_422(char* sParam0)//Position - 0x2CA91
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

struct<2> func_423(int iParam0)//Position - 0x2CAE7
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

int func_424(char* sParam0, int iParam1)//Position - 0x2CF34
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
		func_425(iVar0, &sVar1);
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

void func_425(int iParam0, var uParam1)//Position - 0x2CF7D
{
	switch (iParam0)
	{
		case 0:
			func_426(uParam1, "Abigail1", func_428(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 1:
			func_426(uParam1, "Abigail2", func_428(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 2:
			func_426(uParam1, "Barry1", func_428(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 3:
			func_426(uParam1, "Barry2", func_428(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 4:
			func_426(uParam1, "Barry3", func_428(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 5:
			func_426(uParam1, "Barry3A", func_428(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 6:
			func_426(uParam1, "Barry3C", func_428(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 7:
			func_426(uParam1, "Barry4", func_428(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_427(iParam0), 0, 0);
			break;
		
		case 8:
			func_426(uParam1, "Dreyfuss1", func_428(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 9:
			func_426(uParam1, "Epsilon1", func_428(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 10:
			func_426(uParam1, "Epsilon2", func_428(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 11:
			func_426(uParam1, "Epsilon3", func_428(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 12:
			func_426(uParam1, "Epsilon4", func_428(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 13:
			func_426(uParam1, "Epsilon5", func_428(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 14:
			func_426(uParam1, "Epsilon6", func_428(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 15:
			func_426(uParam1, "Epsilon7", func_428(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 16:
			func_426(uParam1, "Epsilon8", func_428(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 17:
			func_426(uParam1, "Extreme1", func_428(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 18:
			func_426(uParam1, "Extreme2", func_428(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 19:
			func_426(uParam1, "Extreme3", func_428(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 20:
			func_426(uParam1, "Extreme4", func_428(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 21:
			func_426(uParam1, "Fanatic1", func_428(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_427(iParam0), 1, 0);
			break;
		
		case 22:
			func_426(uParam1, "Fanatic2", func_428(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_427(iParam0), 1, 0);
			break;
		
		case 23:
			func_426(uParam1, "Fanatic3", func_428(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_427(iParam0), 0, 1);
			break;
		
		case 24:
			func_426(uParam1, "Hao1", func_428(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_427(iParam0), 0, 1);
			break;
		
		case 25:
			func_426(uParam1, "Hunting1", func_428(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 26:
			func_426(uParam1, "Hunting2", func_428(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 27:
			func_426(uParam1, "Josh1", func_428(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 28:
			func_426(uParam1, "Josh2", func_428(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 29:
			func_426(uParam1, "Josh3", func_428(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 30:
			func_426(uParam1, "Josh4", func_428(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 31:
			func_426(uParam1, "Maude1", func_428(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 32:
			func_426(uParam1, "Minute1", func_428(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 33:
			func_426(uParam1, "Minute2", func_428(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 34:
			func_426(uParam1, "Minute3", func_428(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 35:
			func_426(uParam1, "MrsPhilips1", func_428(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 36:
			func_426(uParam1, "MrsPhilips2", func_428(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 37:
			func_426(uParam1, "Nigel1", func_428(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 38:
			func_426(uParam1, "Nigel1A", func_428(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 39:
			func_426(uParam1, "Nigel1B", func_428(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 40:
			func_426(uParam1, "Nigel1C", func_428(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 41:
			func_426(uParam1, "Nigel1D", func_428(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 42:
			func_426(uParam1, "Nigel2", func_428(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 43:
			func_426(uParam1, "Nigel3", func_428(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 44:
			func_426(uParam1, "Omega1", func_428(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 45:
			func_426(uParam1, "Omega2", func_428(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 46:
			func_426(uParam1, "Paparazzo1", func_428(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 47:
			func_426(uParam1, "Paparazzo2", func_428(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 48:
			func_426(uParam1, "Paparazzo3", func_428(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 49:
			func_426(uParam1, "Paparazzo3A", func_428(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 50:
			func_426(uParam1, "Paparazzo3B", func_428(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 51:
			func_426(uParam1, "Paparazzo4", func_428(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 52:
			func_426(uParam1, "Rampage1", func_428(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 54:
			func_426(uParam1, "Rampage3", func_428(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 55:
			func_426(uParam1, "Rampage4", func_428(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 56:
			func_426(uParam1, "Rampage5", func_428(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 53:
			func_426(uParam1, "Rampage2", func_428(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 57:
			func_426(uParam1, "TheLastOne", func_428(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 58:
			func_426(uParam1, "Tonya1", func_428(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 59:
			func_426(uParam1, "Tonya2", func_428(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 60:
			func_426(uParam1, "Tonya3", func_428(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 61:
			func_426(uParam1, "Tonya4", func_428(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 62:
			func_426(uParam1, "Tonya5", func_428(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_426(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x2E1C4
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

int func_427(int iParam0)//Position - 0x2E255
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

struct<2> func_428(int iParam0)//Position - 0x2E59B
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_423(iParam0) };
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

int func_429(int iParam0)//Position - 0x2E5D3
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_430(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_430(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_430(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_430(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_430(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_430(int iParam0)//Position - 0x2E68F
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

int func_431(char* sParam0, bool bParam1)//Position - 0x2E6E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_432(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_432(int iParam0, bool bParam1)//Position - 0x2E70D
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

void func_433(bool bParam0)//Position - 0x2E743
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

void func_434(int iParam0)//Position - 0x2E9C5
{
	func_352(iParam0);
	unk_0xD55F04EF19C13160(1);
	unk_0x087BB7BACBB5FD0B();
	unk_0x94BD6F0436473406(1f);
	unk_0xC0EBC1452FCAB15C(5);
	unk_0x1D29C781A978C4FB(3, 1);
	func_205(0);
	func_88();
	unk_0x84CDD933AFA470D2();
	if (unk_0xA12FA3F7428EE798(iLocal_148))
	{
		unk_0x7DC528E86B55C67E(iLocal_148);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xABBEF2EAC74A02EB(unk_0xFC1458A37D98B502(), joaat("weapon_petrolcan"));
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
		{
			if (func_67(unk_0xFC1458A37D98B502(), 2444,098f, 4977,795f, 48,9959f, 1) < 100f)
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 2463,811f, 4961,747f, 44,176f, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_435()//Position - 0x2EADD
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_141(0))
	{
		if (!func_436())
		{
			iVar0 = func_140();
			if (iVar0 != -1)
			{
				if (!func_134(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_139();
		}
	}
}

int func_436()//Position - 0x2EB4E
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

