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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230[1] = {{ 0f, 0f, 0f } };
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<418> Local_238 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<32> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	vector3 vLocal_293 = { 0f, 0f, 0f };
	vector3 vLocal_294 = { 0f, 0f, 0f };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	vector3 vLocal_298 = { 0f, 0f, 0f };
	vector3 vLocal_299 = { 0f, 0f, 0f };
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_301 = { 0f, 0f, 0f };
	vector3 vLocal_302 = { 0f, 0f, 0f };
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	char cLocal_309[16] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	char cLocal_312[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char cLocal_330[64] = "";
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	char cLocal_339[64] = "";
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_349 = { 0f, 0f, 0f };
	float fLocal_350 = 0f;
	bool bLocal_351 = 0;
	struct<28> Local_352 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 5;
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
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1097859072;
	var uLocal_401 = 1500;
	var uLocal_402 = 45;
	var uLocal_403 = 1103626240;
	var uLocal_404 = 5;
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
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = unk_0x5354F72E0D8D7E53();
	iLocal_72 = unk_0x526A9A6B1B39C5F0();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_253 = joaat("a_f_y_genhot_01");
	iLocal_254 = joaat("a_f_y_bevhills_01");
	iLocal_255 = joaat("ambulance");
	iLocal_256 = joaat("bison");
	iLocal_263 = 1;
	iLocal_264 = 1000;
	vLocal_283 = { 1358,822f, -1547,396f, 53,7793f };
	vLocal_284 = { 1358,822f, -1547,396f, 53,7793f };
	vLocal_285 = { -694,2758f, -1119,447f, 13,525f };
	vLocal_286 = { -683,1272f, -1102,185f, 13,5257f };
	vLocal_287 = { 410,2629f, -1399,16f, 28,4017f };
	vLocal_288 = { 371,3834f, -1482,955f, 28,3418f };
	vLocal_289 = { 404,8026f, -1416,294f, 28,435f };
	vLocal_290 = { 406,612f, -1419,937f, 29,00375f };
	vLocal_291 = { -682,5392f, -1109,082f, 13,6729f };
	vLocal_292 = { -688,6727f, -1117,512f, 13,52498f };
	vLocal_293 = { -667,136f, -1046,06f, 15,9174f };
	vLocal_294 = { -703,1228f, -1142,432f, 9,8127f };
	vLocal_298 = { -701,2533f, -1080,285f, 12,2884f };
	vLocal_299 = { -687,8794f, -1108,073f, 13,5257f };
	vLocal_300 = { -703,0013f, -1084,073f, 12,1105f };
	fLocal_303 = 25,0227f;
	fLocal_304 = 226,3085f;
	fLocal_305 = -128,2329f;
	fLocal_306 = 238,4969f;
	fLocal_307 = 212,7682f;
	StringCopy(&cLocal_309, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_312, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_321, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_330, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_339, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	vLocal_348 = { -727,111f, -1046,357f, 11,43926f };
	vLocal_349 = { -642,6097f, -1085,538f, 28,42921f };
	fLocal_350 = 76,75f;
	iLocal_396 = 786468;
	iLocal_397 = 1;
	if (unk_0x7D9C4B359376D38A(67))
	{
		func_450(2);
		func_446();
	}
	unk_0xBC03901A15107317(1);
	func_432();
	while (true)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_238.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_238);
		}
		system::wait(0);
	}
}

void func_1(var uParam0)//Position - 0x2B1
{
	uParam0->f_2 = unk_0xFC1458A37D98B502();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x2D2
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xFC1458A37D98B502());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x31D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x35A
{
	if (func_5(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0x384
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x390
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0xFC1458A37D98B502());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x419
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

void func_8()//Position - 0x4B4
{
	if (func_431(&Local_238))
	{
		func_430(&Local_238);
		if (unk_0xA6DECE14FC9A8C51(Local_251.f_4))
		{
			unk_0xE30CF11C0EE14316(&(Local_251.f_4));
		}
		if (func_429(&Local_238, 0))
		{
			func_427();
		}
	}
	else
	{
		func_426(&Local_238);
		if (Local_238.f_410 < 28)
		{
			func_392(&Local_238, &uLocal_398);
			func_391(&Local_238);
			func_390(&Local_238, &uLocal_265, 0);
		}
		if (Local_238.f_410 > 2)
		{
			if (!func_389(&Local_238))
			{
				func_358();
			}
			else
			{
				func_349(&Local_238, "Taxi Not Driveable", func_357(&Local_238));
			}
		}
		if (Local_238.f_410 >= 21 && !iLocal_272)
		{
			func_337();
		}
		if (iLocal_274)
		{
			unk_0xAD6F3DFB1F960182(0,8f);
		}
		if (Local_238.f_410 == 9 || Local_238.f_410 == 17)
		{
			func_313(&Local_238, 0, 0);
		}
		switch (Local_238.f_410)
		{
			case 0:
				func_310();
				func_309(&Local_238, 16, 4f, 0);
				func_307(&Local_238, vLocal_283, vLocal_284, "TaxiKeyla", iLocal_253, 41,1334f, 15f);
				func_306(&Local_238);
				func_305(&Local_238, 1);
				break;
			
			case 1:
				if (func_303())
				{
					func_302();
					func_282();
					func_281(&(vLocal_230[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_280(&Local_238, &vLocal_230);
					func_279(&Local_238);
					unk_0x4C15495E88D71C61(vLocal_287, vLocal_288, false, 1);
					Local_238.f_14 = { vLocal_283 };
					func_305(&Local_238, 3);
				}
				break;
			
			case 3:
				if (func_274(&Local_238, 1))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
					{
						unk_0x03924C68EFCBC511(Local_238.f_3, 0, 0, 1, 0);
						unk_0x03924C68EFCBC511(Local_238.f_3, 2, 1, 2, 0);
						unk_0x03924C68EFCBC511(Local_238.f_3, 3, 0, 2, 0);
						unk_0x03924C68EFCBC511(Local_238.f_3, 4, 1, 3, 0);
						unk_0x03924C68EFCBC511(Local_238.f_3, 8, 1, 0, 0);
					}
					func_273(&Local_238, 1, 0);
					unk_0x4DE114E3C7F8B7C2("TAXI_Escapee", &(Local_251.f_30));
					unk_0xF96119FCCD4D1889(255, Local_251.f_30, Local_238.f_413);
					unk_0xF96119FCCD4D1889(255, Local_251.f_30, 1862763509);
					unk_0xBF98CCF1EA4B13E9(1346,9f, -1606,52f, 31,16f, 1457,25f, -1508,19f, 83,05f, false, 1);
					func_305(&Local_238, 5);
				}
				break;
			
			case 5:
				if (func_254(&Local_238, 0, 1109393408))
				{
					func_253();
					func_305(&Local_238, 6);
				}
				break;
			
			case 6:
				if (func_252(&Local_238))
				{
					func_248(&Local_238, 9, 1, 0, 0);
					func_247(&Local_238);
					Local_238.f_17 = { 485,2039f, -1418,064f, 28,2112f };
					func_246();
					func_245(392,8545f, -1379,577f, 29,2837f, 0, 50f);
					func_305(&Local_238, 17);
				}
				if (unk_0xB8DE76287EDC4957(Local_238.f_4, 0))
				{
					if (!unk_0xA8D0477084E86A92(Local_238.f_2, Local_238.f_4, 0))
					{
						func_243(&Local_238);
						func_305(&Local_238, 5);
					}
				}
				break;
			
			case 17:
				func_242(&Local_238, &(Local_238.f_9));
				if (!unk_0x6ADD12BF4D6D2587(Local_251.f_3))
				{
					if (func_241())
					{
						func_240(&Local_251, vLocal_290, fLocal_305);
					}
				}
				else
				{
					func_239(&Local_238, &Local_251);
				}
				if (func_213(&Local_238, 9f, 1097859072, 1117782016))
				{
					if (unk_0x852CC78F6A44C335(Local_238.f_9))
					{
						unk_0xAAAC88CC20771601(Local_238.f_9, false);
					}
					unk_0xE30CF11C0EE14316(&(Local_238.f_9));
					func_305(&Local_238, 19);
				}
				break;
			
			case 19:
				if (func_206())
				{
					if (!func_205())
					{
						func_248(&Local_238, 139, 1, 0, 0);
						iLocal_274 = 1;
						func_305(&Local_238, 9);
					}
				}
				break;
			
			case 9:
				func_239(&Local_238, &Local_251);
				func_204();
				if (func_203(Local_251.f_2, Local_251.f_3))
				{
					func_202(&Local_238, 2, 0);
					unk_0xBC73FE7BBDFE91FC(Local_251.f_2, 1);
					unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 6, true);
					unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 17, true);
					func_273(&Local_238, 1, 0);
					Local_251.f_5 = unk_0xDE523AF6F7B269AB(Local_251.f_3);
					Local_251.f_15 = unk_0xA7B0253B80B52B2B(Local_251.f_3);
					Local_251.f_16 = unk_0x32DFD9C17763ABE0(Local_251.f_3);
					func_309(&Local_238, 13, 0f, 0);
					func_309(&Local_238, 20, 0f, 0);
					unk_0xBB0951717202666D(vLocal_293, vLocal_294);
					iLocal_261 = unk_0xCB389937EDB1519A(vLocal_293, vLocal_294, 0, 1, 1, 1);
					unk_0xBC3B7443617858A0(false);
					func_305(&Local_238, 13);
				}
				break;
			
			case 13:
				func_204();
				func_239(&Local_238, &Local_251);
				func_242(&Local_238, &(Local_251.f_4));
				if (func_201(&Local_238))
				{
					if (func_200(Local_251.f_2, Local_251.f_4))
					{
						func_248(&Local_238, 51, 1, 0, 0);
						func_305(&Local_238, 25);
					}
					func_196(&Local_238);
					func_193(Local_251.f_3, 291,0313f, -1476,446f, 28,2945f, 15f, &Local_352, 2);
					if (func_154())
					{
						if (unk_0xA2E853C4E12289ED(Local_251.f_3))
						{
							unk_0x7674774BB9279265(Local_251.f_3);
							unk_0x9E6ACDF1473CD846(0, "taxi_oj_fc3");
						}
						func_152(&uLocal_45, 0, 0);
						func_151();
						func_305(&Local_238, 20);
					}
				}
				break;
			
			case 20:
				if (func_150())
				{
					if (func_129())
					{
						func_305(&Local_238, 14);
					}
				}
				break;
			
			case 14:
				func_128(&Local_238, &(Local_238.f_43));
				if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
				{
					if ((unk_0x0C88267282FD588F(Local_251.f_3, vLocal_285, 20f, 20f, 60f, true, true, 0) && unk_0x90D5DFB054818BA7(Local_251.f_3) < 5f) || Local_251.f_31 > 2)
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_257);
							unk_0xBD8D47FDC6902B2D(iLocal_257, vLocal_292, 1, false, 0, 1);
						}
						func_248(&Local_238, 37, 1, 0, 0);
						func_305(&Local_238, 21);
					}
				}
				break;
			
			case 21:
				func_128(&Local_238, &(Local_238.f_43));
				func_127(&Local_238, Local_251.f_2, 1, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				func_242(&Local_238, &(Local_238.f_9));
				if (unk_0xA6DECE14FC9A8C51(Local_251.f_4))
				{
					unk_0xE30CF11C0EE14316(&(Local_251.f_4));
					Local_238.f_17 = { vLocal_286 };
				}
				else if (!unk_0xA6DECE14FC9A8C51(Local_238.f_9))
				{
					Local_238.f_9 = func_125(Local_238.f_17, 1);
				}
				if (unk_0xB8DE76287EDC4957(Local_238.f_4, 0))
				{
					if (unk_0xA8D0477084E86A92(Local_238.f_2, Local_238.f_4, 0))
					{
						if (unk_0x0C88267282FD588F(Local_238.f_4, -684,526f, -1105,76f, 13,52571f, 1f, 1f, 2f, !Local_238.f_140, true, 0))
						{
						}
						if (unk_0x0F3033474C49912D(Local_238.f_4, -685,0081f, -1101,297f, 13,527f, -678,677f, -1110,64f, 15,5871f, 2,25f, 0, true, 0) || unk_0x0F3033474C49912D(Local_238.f_4, -704,1705f, -1115,226f, 13,525f, -700,2585f, -1121,292f, 15,4336f, 2,25f, 0, true, 0))
						{
							if (unk_0x0F3033474C49912D(Local_238.f_4, -685,0081f, -1101,297f, 13,527f, -678,677f, -1110,64f, 15,5871f, 2,25f, 0, true, 0))
							{
								iLocal_231 = 0;
							}
							else
							{
								iLocal_231 = 1;
							}
							Local_238.f_35 = 60f;
							Local_238.f_417 = 143;
							Local_238.f_416 = 143;
							iLocal_274 = 0;
							func_305(&Local_238, 22);
						}
					}
				}
				break;
			
			case 22:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(Local_238.f_3))
				{
					if (unk_0xB8DE76287EDC4957(Local_238.f_4, 0))
					{
						if (Local_251.f_31 != 6)
						{
							if (func_121(&Local_238, 1, 3f))
							{
								iLocal_273 = 1;
								unk_0xE30CF11C0EE14316(&(Local_238.f_9));
								func_305(&Local_238, 27);
							}
						}
						else
						{
							if (!unk_0xA6DECE14FC9A8C51(Local_238.f_9))
							{
								Local_238.f_9 = func_125(Local_238.f_17, 1);
							}
							if (func_213(&Local_238, 8f, 1097859072, 1117782016) || func_121(&Local_238, 1, 1084227584))
							{
								unk_0xE30CF11C0EE14316(&(Local_238.f_9));
								func_305(&Local_238, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					func_248(&Local_238, 37, 1, 0, 0);
					func_305(&Local_238, 27);
				}
				break;
			
			case 27:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(Local_238.f_3))
				{
					if (unk_0xA6DECE14FC9A8C51(Local_251.f_4))
					{
						unk_0xE30CF11C0EE14316(&(Local_251.f_4));
					}
					unk_0x166954C5648772B6("TAXI_OBJ_DRIVE");
					if (Local_251.f_9 > 2)
					{
						Local_238.f_56 = -10;
					}
					else if (Local_251.f_9 == 0)
					{
						Local_238.f_56 = 7;
						func_120(&Local_238, 0);
					}
					else
					{
						Local_238.f_56 = 4;
					}
					func_118(&Local_238);
					func_114(&Local_238);
					func_113(&Local_238);
					func_305(&Local_238, 29);
				}
				break;
			
			case 29:
				unk_0x166954C5648772B6("TAXI_OBJ_DRIVE");
				if (func_80(&Local_238, &uLocal_405))
				{
					func_54(&Local_238);
					func_305(&Local_238, 28);
				}
				break;
			
			case 28:
				if (iLocal_272 || iLocal_271)
				{
					func_305(&Local_238, 30);
				}
				break;
			
			case 30:
				unk_0x166954C5648772B6("TAXI_OBJ_DRIVE");
				if ((!unk_0x3AB6A1A9084FB0A4(Local_238.f_3) && unk_0xEBE499597C718EB8(iLocal_257, Local_238.f_3, 1)) && unk_0xEBE499597C718EB8(Local_251.f_2, Local_238.f_3, 1))
				{
					if (iLocal_277 || system::timera() > 20000)
					{
						func_51(1, &Local_238, 1);
						func_446();
					}
					else
					{
						iLocal_236 = unk_0xB306EEF0A280A8F5(vLocal_291, 10f, joaat("ambulance"), 0);
						if (unk_0xB8DE76287EDC4957(iLocal_236, 0))
						{
							iLocal_277 = 1;
						}
						iLocal_258 = unk_0xF4DDB3917F071FA0(vLocal_291, 5f, 5f, 5f, -1);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_258))
						{
							iLocal_277 = 1;
						}
						if (!iLocal_278)
						{
							if (unk_0x23AE8F1DF396E41E(5, vLocal_291, 1, 0f, &uLocal_262, 0, 0))
							{
								system::settimera(0);
								iLocal_278 = 1;
							}
						}
					}
				}
				if (func_49(vLocal_291, 1) > 100f || func_47(Local_238.f_3, unk_0xFC1458A37D98B502()) > 100f)
				{
					func_51(1, &Local_238, 1);
					func_446();
				}
				else if ((unk_0x3AB6A1A9084FB0A4(Local_238.f_3) || unk_0xEBE499597C718EB8(iLocal_257, unk_0xFC1458A37D98B502(), 1)) || unk_0xEBE499597C718EB8(Local_251.f_2, unk_0xFC1458A37D98B502(), 1))
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_238.f_3))
					{
						unk_0x771A86309E0CA47B(Local_238.f_3, true);
						unk_0xB8E08BD5B184DF4E(Local_238.f_3);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0xF21E6EBE8EFDCC28(0, 2000);
						unk_0xFC5999E8B820470E(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(Local_238.f_3, true);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						unk_0x771A86309E0CA47B(iLocal_257, true);
						unk_0xB8E08BD5B184DF4E(iLocal_257);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0xF21E6EBE8EFDCC28(0, 1000);
						unk_0xFC5999E8B820470E(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_251.f_2))
					{
						unk_0x771A86309E0CA47B(Local_251.f_2, true);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						if (bLocal_275)
						{
							unk_0x12C9D41D52A560D6(0, "MOVE_DUCK_FOR_COVER", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x270054D97CD161A8(0, 500);
						unk_0xFC5999E8B820470E(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(Local_251.f_2, true);
					}
					func_51(1, &Local_238, 1);
					func_446();
				}
				else if ((iLocal_271 && !func_205()) && (unk_0x53C562FD2B9E3AB0() - iLocal_267) > 500)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_238.f_3))
					{
						unk_0x771A86309E0CA47B(Local_238.f_3, true);
						unk_0xB8E08BD5B184DF4E(Local_238.f_3);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0xDF28F1574E61F9EA(0, unk_0xFC1458A37D98B502(), -1, -957453492);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(Local_238.f_3, true);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
						unk_0x771A86309E0CA47B(iLocal_257, true);
						unk_0xB8E08BD5B184DF4E(iLocal_257);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0xF21E6EBE8EFDCC28(0, 1000);
						unk_0xFC5999E8B820470E(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
					}
					if (!unk_0x3AB6A1A9084FB0A4(Local_251.f_2))
					{
						unk_0x771A86309E0CA47B(Local_251.f_2, true);
						unk_0xB8E08BD5B184DF4E(Local_251.f_2);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0x270054D97CD161A8(0, 500);
						unk_0xFC5999E8B820470E(0, Local_238.f_17, 1000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0xE9B3D12A64CC7C1A(Local_251.f_2, true);
					}
					func_9(&Local_238, 1);
					func_446();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)//Position - 0x1250
{
	func_430(uParam0);
	if (func_205())
	{
		func_45();
	}
	func_43();
	unk_0x84CDD933AFA470D2();
	unk_0x3E80C2F7BC665259(1);
	func_40(0);
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		unk_0x438D30A195B65156(uParam0->f_4, false);
		unk_0x68130C56528B2CAD(uParam0->f_4);
		unk_0x7E447606AE486B36(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_245(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, true);
	if (func_32())
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_22(0, 1, 1, 0);
	unk_0x9B47B379EE749C38(true);
	unk_0x4255E93FCCDE108E(true);
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		unk_0x02934BABFD4CD384(*uParam0, 0);
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0xBC3B7443617858A0(true);
	}
	if (func_21(Global_104555.f_19067, 4))
	{
		func_19(&(Global_104555.f_19067), 4);
		unk_0x2E4932E63763FE26(func_18(), false);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0xFCCDDE0E48CF9588("gestures@m@standing@casual");
	unk_0xFCCDDE0E48CF9588("oddjobs@taxi@");
	unk_0xFCCDDE0E48CF9588("oddjobs@towingcome_here");
	if (unk_0xDEC0EB6EAE9BC575())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x036D7C18EE783AB5(unk_0x98EC0789D9F0703B()))
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xB4BD3ECA024822EB(system::round((func_10(&iLocal_82) * 1000f)), 12, 0);
}

float func_10(var uParam0)//Position - 0x13A4
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)//Position - 0x13E0
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

bool func_12(var uParam0)//Position - 0x1438
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0x1448
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_14(int iParam0)//Position - 0x1458
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x8C1C362CA8299475(&uVar0))
		{
		}
	}
}

struct<8> func_15(int iParam0)//Position - 0x147F
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_16(var uParam0)//Position - 0x1548
{
	unk_0x27FC35791018A3A5(uParam0->f_51[0]);
}

void func_17(var uParam0)//Position - 0x155C
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_3))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (!unk_0x88DDBE9908752BF0(uParam0->f_3, 0))
			{
				unk_0x28B82FCEA0848032(uParam0->f_3);
			}
			unk_0x771A86309E0CA47B(uParam0->f_3, false);
			unk_0xF96119FCCD4D1889(255, uParam0->f_413, 1862763509);
			if (unk_0xA5F6598E13F98E08(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x7976C9958C60E354(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0xA5F6598E13F98E08(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x7976C9958C60E354(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0xA5F6598E13F98E08(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x7976C9958C60E354(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0xA5F6598E13F98E08(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x7976C9958C60E354(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x486F346ADFE56674(&(uParam0->f_3));
		}
	}
}

int func_18()//Position - 0x1659
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)//Position - 0x1666
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)//Position - 0x1676
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21(var uParam0, int iParam1)//Position - 0x168B
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x169A
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_31(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_30())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_31(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_27(unk_0x9EB17624F44A8DA4())) && !func_24(unk_0x9EB17624F44A8DA4(), 0)) && !func_23())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_27(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_23()//Position - 0x17B3
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)//Position - 0x17D0
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)//Position - 0x181B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()//Position - 0x185C
{
	return Global_1312736;
}

int func_27(int iParam0)//Position - 0x1868
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
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

bool func_28()//Position - 0x18AA
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x18BB
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

int func_30()//Position - 0x18EE
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x1915
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

int func_32()//Position - 0x1938
{
	if (!func_34() && !func_33())
	{
		if (!unk_0x52B74B52F9D50112(unk_0x98EC0789D9F0703B()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()//Position - 0x1963
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x197D
{
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)//Position - 0x1997
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam1)//Position - 0x19B4
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_38(vParam0, func_39(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x4C15495E88D71C61(vVar0, vVar1, bParam1, 1);
	}
}

Vector3 func_37(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1A14
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

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1A61
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()//Position - 0x1AA8
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)//Position - 0x1AB4
{
	if (Global_14615)
	{
		func_41(0, 0);
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
	if (!func_30())
	{
		Global_14453.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)//Position - 0x1B24
{
	if (bParam0)
	{
		if (func_42(0))
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

int func_42(int iParam0)//Position - 0x1B98
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

void func_43()//Position - 0x1BF2
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
					func_44(Global_89911[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, bool bParam1)//Position - 0x1C79
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

void func_45()//Position - 0x1CB7
{
	Global_14622 = 0;
	func_46();
}

void func_46()//Position - 0x1CC7
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

float func_47(int iParam0, int iParam1)//Position - 0x1CE8
{
	return func_48(iParam0, iParam1, 1);
}

float func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x1CF9
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

float func_49(vector3 vParam0, bool bParam1)//Position - 0x1D57
{
	return func_50(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), vParam0, bParam1);
}

float func_50(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1D71
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), vParam1, bParam2);
}

void func_51(bool bParam0, var uParam1, bool bParam2)//Position - 0x1D9B
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_3))
		{
			unk_0xAE01EF4BC84AFE7C(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_52(1, 0);
	}
	func_9(uParam1, bParam2);
}

void func_52(int iParam0, int iParam1)//Position - 0x1DD7
{
	switch (iParam0)
	{
		case 0:
			Global_104555.f_19067.f_22[0]++;
			func_53("Fares Completed ++ = ", Global_104555.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104555.f_19067.f_22[1]++;
			func_53("Fares Failed ++ = ", Global_104555.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104555.f_19067.f_22[2]++;
			func_53("Fares Accepted ++ ", Global_104555.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104555.f_19067.f_22[3]++;
			func_53("Fares Expired ++ ", Global_104555.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104555.f_19067.f_22[13]++;
			func_53("Passengers run ++ = ", Global_104555.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104555.f_19067.f_22[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_104555.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104555.f_19067.f_22[4])
				{
					Global_104555.f_19067.f_22[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_104555.f_19067.f_22[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_104555.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104555.f_19067.f_22[5] = (Global_104555.f_19067.f_22[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_104555.f_19067.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_104555.f_19067.f_22[6]++;
			}
			else
			{
				Global_104555.f_19067.f_22[6] = (Global_104555.f_19067.f_22[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_104555.f_19067.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_104555.f_19067.f_22[7] = (Global_104555.f_19067.f_22[7] + iParam1);
			}
			else
			{
				Global_104555.f_19067.f_22[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_104555.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104555.f_19067.f_22[8]++;
			func_53("Taxis wrecked ++ = ", Global_104555.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104555.f_19067.f_22[9]++;
			func_53("Horn Honked ++ = ", Global_104555.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104555.f_19067.f_22[10] = (Global_104555.f_19067.f_22[10] + iParam1);
			func_53("Total Money Earned = ", Global_104555.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104555.f_19067.f_22[11] = (Global_104555.f_19067.f_22[11] + iParam1);
			func_53("Total Tips Earned = ", Global_104555.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104555.f_19067.f_22[12])
			{
				Global_104555.f_19067.f_22[12] = iParam1;
				func_53("New Highest Tip = ", Global_104555.f_19067.f_22[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_104555.f_19067.f_22[12]);
			}
			break;
	}
}

void func_53(char* sParam0, int iParam1)//Position - 0x21C8
{
}

void func_54(int iParam0)//Position - 0x21D0
{
	func_52(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_450(1);
		func_66(15, 1);
	}
	func_64(&(Global_104555.f_19067), 1024);
	if (!func_21(Global_104555.f_19067, 64))
	{
		func_55(func_62(func_63(iParam0)), 0, 0);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)//Position - 0x2224
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
		func_61((891 + iParam0), 1, -1, 1);
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
		func_56();
	}
}

void func_56()//Position - 0x230C
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
		func_60(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_59() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_57();
				}
			}
		}
	}
}

int func_57()//Position - 0x27CD
{
	if (func_58(0))
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

bool func_58(bool bParam0)//Position - 0x2818
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_59()//Position - 0x2843
{
	return Global_25233;
}

int func_60(int iParam0, int iParam1)//Position - 0x284E
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

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x289F
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
		iParam2 = func_26();
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

int func_62(int iParam0)//Position - 0x2D6B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_63(var uParam0)//Position - 0x2E01
{
	return uParam0->f_411;
}

void func_64(var uParam0, int iParam1)//Position - 0x2E0E
{
	func_65(uParam0, iParam1);
}

void func_65(var uParam0, int iParam1)//Position - 0x2E1E
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_66(int iParam0, int iParam1)//Position - 0x2E2F
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_67(iParam0, iParam1);
}

int func_67(int iParam0, int iParam1)//Position - 0x2E4A
{
	if (func_79(14) && !func_78(iParam0))
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
	if (func_77(&Global_4267379))
	{
		if (func_75(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_68(&Global_4267379, iParam0))
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

int func_68(var uParam0, int iParam1)//Position - 0x2EE7
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	func_71(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_69(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_69(var uParam0, int iParam1)//Position - 0x2F98
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)//Position - 0x3013
{
	return (*uParam0)[iParam1] == 78;
}

void func_71(var uParam0)//Position - 0x3024
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0, iVar0);
		iVar0++;
	}
	func_73(uParam0, (Global_4267378 - 0,5f));
}

void func_72(var uParam0, int iParam1)//Position - 0x3058
{
	(*uParam0)[iParam1] = 78;
}

void func_73(var uParam0, float fParam1)//Position - 0x3068
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

float func_74(var uParam0)//Position - 0x3085
{
	return uParam0->f_80;
}

bool func_75(var uParam0, int iParam1)//Position - 0x3091
{
	return func_76(uParam0, iParam1) != -1;
}

int func_76(var uParam0, int iParam1)//Position - 0x30A3
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

bool func_77(var uParam0)//Position - 0x30D0
{
	return uParam0->f_79 == 1;
}

int func_78(int iParam0)//Position - 0x30DE
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

bool func_79(int iParam0)//Position - 0x312E
{
	return Global_35861 == iParam0;
}

int func_80(int iParam0, var uParam1)//Position - 0x313C
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_205() && func_111(iParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				}
				func_110(iParam0);
				func_19(&(Global_104555.f_19067), 4096);
				func_107(uParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_109(iParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0x4AFBCBFDE748D4E0(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_106(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_100(uParam1, 0))
			{
				func_81(iParam0);
				func_309(iParam0, 0, 0, 0);
				func_106(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_81(int iParam0)//Position - 0x320E
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_82(func_98(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x324C
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
	func_83(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3333
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_90(5))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_90(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
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
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_90(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_89(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
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
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
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
	func_85(iParam0);
	if (Global_35861 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)//Position - 0x3932
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

void func_85(int iParam0)//Position - 0x3BB4
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

void func_86(int iParam0)//Position - 0x3C0E
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_61(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_88() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_88() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_87(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)//Position - 0x3CE5
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

int func_88()//Position - 0x3D6D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_89(int iParam0)//Position - 0x3D7A
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_90(int iParam0)//Position - 0x3D9A
{
	if (iParam0 == 8)
	{
		return func_91(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_88() /*12130*/].f_7676.f_10, iParam0);
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x3DE8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_93(iParam0, iParam1);
	uVar2 = func_92(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_92(int iParam0)//Position - 0x3E25
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

int func_93(int iParam0, int iParam1)//Position - 0x40E6
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
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

int func_94(bool bParam0)//Position - 0x4388
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
		func_60(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_66(27, 1);
	return 1;
}

void func_95(int iParam0, int iParam1)//Position - 0x443F
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)//Position - 0x4462
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

void func_97()//Position - 0x44BF
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

int func_98()//Position - 0x4534
{
	func_99();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_99()//Position - 0x454D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_4(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_3(unk_0xFC1458A37D98B502());
			if (func_5(iVar0) && (!func_79(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_5(Global_104555.f_2353.f_539.f_4301))
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

int func_100(var uParam0, int iParam1)//Position - 0x464A
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_104(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xE8C126B7ADBB9D63(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_104(&(uParam0->f_5));
				func_103(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_102(&(uParam0->f_5)) > 0,33f)
			{
				func_101(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_102(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_104(&(uParam0->f_5));
			func_103(uParam0, 1051260355);
		}
		else if (func_102(&(uParam0->f_5)) > 0,33f)
		{
			func_101(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_101(var uParam0)//Position - 0x474D
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_102(var uParam0)//Position - 0x4763
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_103(var uParam0, float fParam1)//Position - 0x47A2
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD07D5CD276368D36(uParam0->f_9);
	unk_0x9499D7329FB840A2(fParam1);
	unk_0x271AA5469AF471B3();
}

void func_104(int iParam0)//Position - 0x47C8
{
	func_105(iParam0, 0f);
}

void func_105(int iParam0, float fParam1)//Position - 0x47D7
{
	iParam0->f_1 = (func_11(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_106(int iParam0)//Position - 0x4805
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_107(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x4819
{
	unk_0x008F3E3CC076EA0E(*uParam0, func_108());
	unk_0x7E099EB35339C80D("STRING");
	unk_0xF92B835A141C6BDD(iParam9);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x9748595E4799A2CF();
	unk_0x7E099EB35339C80D(sParam7);
	unk_0x6223D539BCD39E76(iParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xA6D2B267C377D7B2(sParam6);
	unk_0x6223D539BCD39E76(iParam5);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0x9748595E4799A2CF();
	unk_0x271AA5469AF471B3();
	func_104(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_108()//Position - 0x4884
{
	if (unk_0x3A711520F83BAE98())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_109(int iParam0)//Position - 0x489E
{
	char* sVar0;
	
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_110(int iParam0)//Position - 0x4939
{
	int iVar0;
	
	Local_161.f_1 = system::to_float(iParam0->f_50);
	Local_161.f_2 = system::to_float(iParam0->f_56);
	func_52(11, iParam0->f_56);
	func_52(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (unk_0xC80D31E4B587871C(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_111(int iParam0, int iParam1)//Position - 0x49E8
{
	if (!func_13(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_112(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_102(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_112(int iParam0)//Position - 0x4A18
{
	if (!func_13(iParam0))
	{
		func_104(iParam0);
	}
}

void func_113(int iParam0)//Position - 0x4A30
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = system::ceil((IntToFloat(iParam0->f_50) * 0,4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = system::ceil((IntToFloat(iParam0->f_50) * 0,15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_21(iParam0->f_55, 1))
	{
		func_64(&(iParam0->f_55), 1);
	}
}

void func_114(int iParam0)//Position - 0x4AA4
{
	func_116();
	unk_0x84CDD933AFA470D2();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_248(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_248(iParam0, 103, 1, 0, 0);
		}
		func_115(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_248(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_248(iParam0, 102, 1, 0, 0);
	}
	func_309(iParam0, 16, 4f, 0);
}

void func_115(int iParam0)//Position - 0x4B17
{
	Global_103265.f_221 = iParam0;
}

void func_116()//Position - 0x4B27
{
	Global_14622 = 0;
	func_117();
}

void func_117()//Position - 0x4B37
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

void func_118(var uParam0)//Position - 0x4B5B
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_119(fVar0);
	iLocal_57[4] = system::ceil(fVar0);
	iLocal_57[5] = system::ceil(fVar0);
	func_52(4, system::ceil(fVar0));
	func_52(5, system::ceil(fVar0));
	uParam0->f_50 = system::ceil((fVar0 * 100f));
}

float func_119(float fParam0)//Position - 0x4BAD
{
	return (fParam0 * 0,0006213712f);
}

void func_120(var uParam0, int iParam1)//Position - 0x4BBD
{
	if (iParam1 < 5)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_121(var uParam0, bool bParam1, float fParam2)//Position - 0x4BEB
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_124();
				return 1;
			}
			else if (func_122(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, 256);
				}
				else
				{
					unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, 0);
				}
			}
			unk_0xD6A0F9B258FE2F82(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4C6C
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
	func_123(iParam0);
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

void func_123(int iParam0)//Position - 0x4DFB
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

void func_124()//Position - 0x4E27
{
	if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	}
}

int func_125(vector3 vParam0, bool bParam1)//Position - 0x4E42
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_126(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_126(bool bParam0, float fParam1, float fParam2)//Position - 0x4E6E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_127(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4E85
{
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
			{
				if (unk_0x27C8A4034A05DC21(iParam1))
				{
					if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
					{
						if (Local_238.f_109 == 0)
						{
							func_349(&Local_238, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_257);
					unk_0xD68E88A8E0BE8697(iLocal_257, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
				}
				func_349(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
				{
					unk_0xB8E08BD5B184DF4E(Local_251.f_2);
					unk_0xD68E88A8E0BE8697(Local_251.f_2, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					unk_0xE9B3D12A64CC7C1A(Local_251.f_2, true);
				}
				func_349(iParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
		{
			if ((unk_0x299B8D0F9C239719(iParam1, joaat("weapon_stungun"), 0) || unk_0x299B8D0F9C239719(iParam1, 0, 2)) || unk_0x299B8D0F9C239719(iParam1, 0, 1))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_257);
					unk_0xD68E88A8E0BE8697(iLocal_257, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_257, true);
				}
				if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
				{
					unk_0xB8E08BD5B184DF4E(Local_251.f_2);
					unk_0xD68E88A8E0BE8697(Local_251.f_2, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					unk_0xE9B3D12A64CC7C1A(Local_251.f_2, true);
				}
				func_349(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			}
		}
	}
}

void func_128(int iParam0, var uParam1)//Position - 0x501B
{
	unk_0xBF9EAA044015B0A2(iParam0->f_428, uParam1, -1);
	iParam0->f_41 = (*uParam1 - iParam0->f_42);
}

int func_129()//Position - 0x503C
{
	vector3 vVar0;
	
	func_149();
	if (iLocal_416 < 3 && iLocal_416 > 0)
	{
		if (func_145(iLocal_264))
		{
			iLocal_416 = 3;
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_257))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_257))
		{
			vVar0 = { unk_0xB3328BA8976B416C(iLocal_257, 1) };
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if (func_144(1, 1, 1) && !Local_238.f_142)
			{
				iLocal_264 = unk_0x53C562FD2B9E3AB0();
				func_142(&uLocal_355);
				func_141(&Local_352, -1, 1);
				func_245(vLocal_299, 0, 15f);
				func_245(vLocal_300, 0, 15f);
				func_140(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_139();
				func_309(&Local_238, 19, 0, 0);
				iLocal_416 = 1;
			}
			else
			{
				func_138("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_238.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_111(&Local_238, 19) > 0,5f)
			{
				func_137(0, 0, 1);
				unk_0x9B8406983378711E(vLocal_299, 30f, 0, 0, 0, 0, false, 0);
				unk_0x9B8406983378711E(vLocal_300, 30f, 0, 0, 0, 0, false, 0);
				unk_0x60225D4F755DFDB1(vLocal_299, 30f, 0);
				unk_0x60225D4F755DFDB1(vLocal_300, 30f, 0);
				func_135(vLocal_299, 1114636288, 1);
				func_135(vLocal_300, 1114636288, 1);
				unk_0x4C15495E88D71C61(vLocal_293, vLocal_294, false, 1);
				func_248(&Local_238, 35, 1, 1, 0);
				unk_0xA215B2F25E63FA31(Local_238, func_134(0));
				unk_0xBEBD5CAE3510CD2A(Local_238, func_133(0), 2);
				unk_0xE43C573FE3C5D758(Local_238, 44,5167f);
				unk_0x7E4FCDC8BAD0CF6D(Local_238, "HAND_SHAKE", 0,1f);
				unk_0x7849794435F39D49(Local_238, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
				{
					unk_0xBD8D47FDC6902B2D(Local_251.f_3, vLocal_298, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(Local_251.f_3, fLocal_304);
					if (unk_0xFDB9E04C4D0E64B9(&cLocal_309, vLocal_298, &iLocal_266))
					{
					}
					if (unk_0x6845A83711D9CF44(&cLocal_309, iLocal_266, &uLocal_295))
					{
					}
					if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
					{
						unk_0x84EF7D14703E1230(Local_251.f_2, Local_251.f_3, &cLocal_309, iLocal_397, iLocal_266 + 4, 0, -1, -1f, 0, 1073741824);
					}
				}
				func_309(&Local_238, 19, 0, 0);
				iLocal_416 = 2;
			}
			break;
		
		case 2:
			if (func_111(&Local_238, 19) > 5f)
			{
				func_309(&Local_238, 19, 0, 0);
				iLocal_416 = 4;
			}
			else if (func_111(&Local_238, 19) > 4,7f)
			{
				if (func_132())
				{
					if (!iLocal_282)
					{
						unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_282 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
			{
				unk_0xBD8D47FDC6902B2D(Local_251.f_3, vLocal_285, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(Local_251.f_3, fLocal_307);
				unk_0x7674774BB9279265(Local_251.f_3);
			}
			func_309(&Local_238, 19, 0, 0);
			iLocal_416 = 4;
			break;
		
		case 4:
			if (unk_0xB8DE76287EDC4957(Local_238.f_4, 0))
			{
				Local_238.f_141 = 0;
				unk_0x59C3AC31C7544A28(800);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
				{
					unk_0xBD8D47FDC6902B2D(Local_251.f_3, vLocal_285, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(Local_251.f_3, fLocal_307);
					unk_0x7674774BB9279265(Local_251.f_3);
					if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
					{
						unk_0x957CEE967C939968(Local_251.f_2);
						unk_0xBD8D47FDC6902B2D(Local_251.f_2, -691,1571f, -1117,732f, 13,52498f, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(Local_251.f_2, -49,27436f);
					}
				}
				unk_0x02934BABFD4CD384(Local_238, 0);
				unk_0x02934BABFD4CD384(iLocal_237, 0);
				func_130(1, 1, 1);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				while (!unk_0x9F7B586A14398C40())
				{
					system::wait(0);
				}
				func_202(&Local_238, 19, 0);
				iLocal_416 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_130(bool bParam0, bool bParam1, int iParam2)//Position - 0x5441
{
	if (bParam0)
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
	}
	func_131(23, 0);
}

void func_131(int iParam0, bool bParam1)//Position - 0x547C
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

int func_132()//Position - 0x549E
{
	if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_133(int iParam0)//Position - 0x54B7
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 1,9027f, 0f, 170,5764f };
			break;
	}
	return vVar0;
}

Vector3 func_134(int iParam0)//Position - 0x54E2
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -686,0368f, -1073,22f, 16,1762f };
			break;
	}
	return vVar0;
}

void func_135(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x5511
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	unk_0x86860A70B204843E(vParam0, &vVar1, &fVar0, 1, 1077936128, 0);
	vVar2 = { func_37(vVar1, func_136(fVar0), fParam1, fParam1, 5f) };
	vVar3 = { func_37(vVar1, fVar0, fParam1, fParam1, -5f) };
	vVar3.z = (vVar3.z - 22f);
	vVar2.z = (vVar2.z + 22f);
	if (bParam2)
	{
		unk_0xBF98CCF1EA4B13E9(vVar3, vVar2, false, 1);
	}
	else
	{
		unk_0xD855BC7E9D7EC87F(vVar3, vVar2, true);
	}
}

float func_136(float fParam0)//Position - 0x559A
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_137(int iParam0, int iParam1, int iParam2)//Position - 0x55C3
{
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, iParam0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
	}
	unk_0xAE3DF717857FE7CA(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(false);
	func_131(23, 1);
}

void func_138(char* sParam0, int iParam1, int iParam2)//Position - 0x5619
{
	if (unk_0x53C562FD2B9E3AB0() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x53C562FD2B9E3AB0();
}

void func_139()//Position - 0x5638
{
	int iVar0;
	
	iLocal_257 = unk_0xAC992EFAD62C33BF(26, iLocal_254, vLocal_291, fLocal_303, 1, true);
	unk_0xC7478C0CABC29C5E(iLocal_257, 5);
	unk_0x03924C68EFCBC511(iLocal_257, 3, 1, 2, 0);
	unk_0x03924C68EFCBC511(iLocal_257, 4, 0, 1, 0);
	unk_0x03924C68EFCBC511(iLocal_257, 2, 1, 2, 0);
	unk_0xAE01EF4BC84AFE7C(iLocal_257, 20, true);
	func_7(&(Local_238.f_244), 5, iLocal_257, "TaxiCarrie", 0, 1);
	if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
	{
		unk_0x48ED7B2293A96722(iLocal_257, fLocal_303);
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
		unk_0x6931076730A4AC5D(&iVar0);
		unk_0x270054D97CD161A8(0, 2500);
		unk_0x12C9D41D52A560D6(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1,5f, 2000, 0, 0, 0, 0, 0);
		unk_0x755F86FFB31712D8(0, vLocal_292, 1f, 0, 0, 786603, -1082130432);
		unk_0x1B16DD5C115FE009(iVar0);
		unk_0xAB30B1CF01A198C1(iLocal_257, iVar0);
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
	}
}

void func_140(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5710
{
	if (!unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		*uParam0 = unk_0x5AC38B4D80D4E352(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)//Position - 0x573B
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_142(var uParam0)//Position - 0x575F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
		iVar0++;
	}
	unk_0x84CDD933AFA470D2();
	func_45();
}

var func_143()//Position - 0x579F
{
	var uVar0;
	
	return uVar0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)//Position - 0x57A9
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

int func_145(int iParam0)//Position - 0x588E
{
	if (func_148() && unk_0x53C562FD2B9E3AB0() >= iParam0 + 1000)
	{
		unk_0xAE83ED4C9081AE6F(500);
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
		func_40(0);
		func_146();
		return 1;
	}
	return 0;
}

void func_146()//Position - 0x58D1
{
	Global_14622 = 0;
	func_147();
}

void func_147()//Position - 0x58E1
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

int func_148()//Position - 0x5938
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

void func_149()//Position - 0x596A
{
	if (func_34())
	{
		unk_0xB78F9271050618A3("appInternet");
	}
	if (func_33())
	{
		unk_0xB78F9271050618A3("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_150()//Position - 0x599D
{
	if (!unk_0x9A0B2ED5055D3F0B(iLocal_254))
	{
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("MOVE_DUCK_FOR_COVER"))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_151()//Position - 0x59D3
{
	unk_0x6FF834D85E2DD4C6(iLocal_254);
	unk_0x6450931B826B49D9("MOVE_DUCK_FOR_COVER");
	unk_0x6450931B826B49D9(&cLocal_312);
	unk_0x6450931B826B49D9(&cLocal_321);
	unk_0x6450931B826B49D9(&cLocal_330);
	unk_0x6450931B826B49D9(&cLocal_339);
}

void func_152(var uParam0, int iParam1, int iParam2)//Position - 0x5A06
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
		if (func_153(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_153(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_153(char* sParam0)//Position - 0x5AE3
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_154()//Position - 0x5AF6
{
	if (func_111(&Local_238, 20) > 2f)
	{
		if (!Local_238.f_142)
		{
			func_182(&Local_238, &Local_251, (unk_0x53C562FD2B9E3AB0() - iLocal_308) > 15000, 0);
		}
	}
	if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
	{
		if (unk_0xB8DE76287EDC4957(Local_238.f_4, 0))
		{
			if (unk_0x0F3033474C49912D(Local_238.f_4, vLocal_348, vLocal_349, fLocal_350, 0, true, 0))
			{
				unk_0xA1AA40A93CA0F40D(Local_238.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_155(&uLocal_45, Local_251.f_3, 0, 0, 1, 1, 1);
		func_128(&Local_238, &(Local_238.f_43));
		if (!iLocal_270)
		{
			if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
			{
				if (!unk_0x8DDE799D31A3D099(Local_251.f_3) && IntToFloat((unk_0x53C562FD2B9E3AB0() - iLocal_308)) > unk_0x3413A86ABE2F138E(120, "txm_fc_h1_"))
				{
					unk_0x87A3E70B0AB01608(Local_251.f_2, Local_251.f_3, vLocal_298, 28f, 0, Local_251.f_1, iLocal_396, 13,75f, -1f);
					iLocal_270 = 1;
				}
			}
		}
	}
	return 0;
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x5BF5
{
	func_156(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_156(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x5C0F
{
	uParam0->f_6 = 0;
	func_157(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_157(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x5C31
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
	if (func_153(iVar0))
	{
		func_181();
	}
	if (func_180(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_175(uParam0, bParam5, bParam7, 0))
			{
				func_172(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_162(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_153(iVar0))
							{
								func_161(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_160(1);
								}
							}
						}
					}
				}
			}
			else if (func_162(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_153(iVar0))
						{
							func_161(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_160(1);
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
				if (func_153(sParam3))
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
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_152(uParam0, iVar0, 1);
				}
			}
			if (!func_175(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_159(uParam0))
				{
					func_158(uParam0);
				}
			}
		}
	}
	else
	{
		func_152(uParam0, iVar0, 0);
	}
}

void func_158(var uParam0)//Position - 0x5F9E
{
	if (func_180(unk_0xFC1458A37D98B502()))
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

int func_159(var uParam0)//Position - 0x6007
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

int func_160(bool bParam0)//Position - 0x6032
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

void func_161(char* sParam0, int iParam1)//Position - 0x60DC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_162(char* sParam0)//Position - 0x60F3
{
	if (!func_163(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_153(sParam0)) || func_153("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_160(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x618C
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
	if (func_42(0))
	{
		return 0;
	}
	if (func_171())
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
	if ((func_170() || func_169(Global_4456448.f_143970)) || func_168())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_167(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_167(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_167(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_164(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x63B7
{
	if (iParam0 != func_166())
	{
		if (func_165(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_165(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, bool bParam2)//Position - 0x641D
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

int func_166()//Position - 0x6467
{
	return -1;
}

int func_167(int iParam0, int iParam1)//Position - 0x6470
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

var func_168()//Position - 0x64F5
{
	return Global_2447174.f_16;
}

bool func_169(int iParam0)//Position - 0x6503
{
	return iParam0 == 51;
}

var func_170()//Position - 0x6510
{
	return Global_2447174.f_15;
}

bool func_171()//Position - 0x651E
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_172(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x6533
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
		func_152(uParam0, 0, 0);
	}
	if (func_38(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_173())
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

bool func_173()//Position - 0x6643
{
	return func_174(unk_0x9EB17624F44A8DA4());
}

int func_174(int iParam0)//Position - 0x6653
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6672
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
					if (func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_159(uParam0))
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
						if (!func_179(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_179(bParam1, bParam2, bParam3))
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
					if (!func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_178(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_179(bParam1, bParam2, bParam3))
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
						if (func_177(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_176(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_176(bParam1, bParam2, bParam3))
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
					else if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_159(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_163(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_181();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)//Position - 0x69DE
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_177(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6A30
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_178(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6A79
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_179(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6AD8
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_180(int iParam0)//Position - 0x6B2E
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

void func_181()//Position - 0x6B89
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_182(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6B99
{
	if (!unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
	{
		if (unk_0xEBE499597C718EB8(uParam1->f_2, unk_0xFC1458A37D98B502(), 0))
		{
			func_349(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_349(iParam0, "Followee died", 13);
	}
	if ((unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0 && unk_0xB8DE76287EDC4957(uParam1->f_3, 0)) && !unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
	{
		unk_0x6F03491E8F9F397C(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0xE9B3D12A64CC7C1A(uParam1->f_2, true);
		func_349(iParam0, "Player went wanted", 4);
	}
	func_191(iParam0, uParam1);
	if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (bParam3)
		{
			if (func_190(&(uParam1->f_3)))
			{
				unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(uParam1->f_3, 1), 22,5f, 255, 0, 0, 60);
			}
			else if (func_189(&(uParam1->f_3)))
			{
				unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(uParam1->f_3, 1), func_188(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_187(&(uParam1->f_3)))
			{
				unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0xA7B0253B80B52B2B(uParam1->f_3) < uParam1->f_15 || unk_0xEBE499597C718EB8(uParam1->f_3, unk_0xFC1458A37D98B502(), 1)) || unk_0x32DFD9C17763ABE0(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0xEBE499597C718EB8(uParam1->f_3, unk_0xFC1458A37D98B502(), 0))
			{
				func_349(iParam0, "Taxi shot up the car", 12);
			}
			if (func_111(iParam0, 13) > 5f)
			{
				func_186(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0xA7B0253B80B52B2B(uParam1->f_3);
				uParam1->f_5 = unk_0xDE523AF6F7B269AB(uParam1->f_3);
				uParam1->f_16 = unk_0x32DFD9C17763ABE0(uParam1->f_3);
			}
		}
		if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_248(iParam0, 143, 0, 0, 0);
				func_349(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_185(&(iParam0->f_409), unk_0xB3328BA8976B416C(iParam0->f_4, 1), unk_0xB3328BA8976B416C(uParam1->f_3, 1), 0) == -1 && func_48(iParam0->f_4, uParam1->f_3, 1) >= 150f) && func_111(iParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_309(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
						{
							unk_0x6F03491E8F9F397C(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0xE9B3D12A64CC7C1A(uParam1->f_2, true);
						}
						func_349(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_184(iParam0, 6, 1);
					}
					else
					{
						func_184(iParam0, 1, 1);
					}
					func_248(iParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xFFCE4302A2DB825B(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_309(iParam0, 8, 0, 0);
			}
			else if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_248(iParam0, 143, 0, 0, 0);
				func_349(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_48(iParam0->f_4, uParam1->f_3, 1) < 22,5f && func_190(&(uParam1->f_3))) || (func_48(iParam0->f_4, uParam1->f_3, 1) < 13f && func_187(&(uParam1->f_3)))) || (func_48(iParam0->f_4, uParam1->f_3, 1) < func_188(&(uParam1->f_3)) && func_189(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_183(iParam0, 21))
			{
				if ((unk_0xFFCE4302A2DB825B(iParam0->f_4, uParam1->f_3, 17) && func_111(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_309(iParam0, 8, 0, 0);
					if (!func_183(iParam0, 21))
					{
						func_309(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_205())
						{
							if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
							{
								unk_0x6F03491E8F9F397C(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0xE9B3D12A64CC7C1A(uParam1->f_2, true);
							}
							func_349(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_184(iParam0, 3, 1);
					}
					else
					{
						func_184(iParam0, 2, 1);
					}
					if (func_48(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_205())
						{
							func_248(iParam0, 143, 0, 0, 0);
							func_45();
							if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
							{
								unk_0x6F03491E8F9F397C(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0xE9B3D12A64CC7C1A(uParam1->f_2, true);
							}
							func_349(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_248(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0xA7B0253B80B52B2B(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_183(iParam0, 21))
			{
				func_202(iParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_48(iParam0->f_4, uParam1->f_3, 1) > 22,5f)
				{
					uParam1->f_22 = 0;
					func_309(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_48(iParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xFFCE4302A2DB825B(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_309(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_184(iParam0, 8, 1);
					func_248(iParam0, 13, 1, 0, 0);
					func_309(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_80 > iParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (func_111(iParam0, 8) > 15f && !func_205())
					{
						func_184(iParam0, 9, 1);
						func_248(iParam0, 13, 1, 0, 0);
						func_309(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_183(int iParam0, int iParam1)//Position - 0x7244
{
	return func_13(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_184(int iParam0, int iParam1, bool bParam2)//Position - 0x7258
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_185(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x726C
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x8941008352A0F66A(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x16ACABF450EB00B4(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

void func_186(int iParam0, var uParam1, bool bParam2)//Position - 0x72E6
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_205())
		{
			func_273(iParam0, 0, 1);
			if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam1->f_2, 0))
			{
				unk_0x6F03491E8F9F397C(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0xE9B3D12A64CC7C1A(uParam1->f_2, true);
			}
			func_349(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_146();
		}
	}
	else
	{
		func_309(iParam0, 13, 0, 0);
		unk_0x2B0DDE3D071497AD(uParam1->f_3);
		func_184(iParam0, 10, 1);
		func_273(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_187(var uParam0)//Position - 0x73A1
{
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		if (unk_0x9EC5112BB1C4047A(*uParam0) || unk_0x90D5DFB054818BA7(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_188(var uParam0)//Position - 0x73D2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22,5f;
	fVar3 = 13f;
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		fVar1 = unk_0x90D5DFB054818BA7(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_189(var uParam0)//Position - 0x7413
{
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		if (unk_0x90D5DFB054818BA7(*uParam0) >= 4f && unk_0x90D5DFB054818BA7(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(var uParam0)//Position - 0x7449
{
	if (unk_0xB8DE76287EDC4957(*uParam0, 0))
	{
		if (unk_0x90D5DFB054818BA7(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_191(int iParam0, var uParam1)//Position - 0x7471
{
	if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_48(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_414 == 6 || iParam0->f_414 == 1)
			{
				if (func_192(iParam0) == 13)
				{
					func_116();
				}
			}
		}
		if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 22,5f)
		{
			if (iParam0->f_414 == 3 || iParam0->f_414 == 2)
			{
				if (func_192(iParam0) == 13)
				{
					func_116();
				}
			}
		}
	}
}

int func_192(int iParam0)//Position - 0x750B
{
	return iParam0->f_416;
}

void func_193(int iParam0, vector3 vParam1, float fParam2, var uParam3, int iParam4)//Position - 0x7518
{
	if (!func_205())
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_50(iParam0, vParam1, 1) < fParam2)
			{
				if (func_195(uParam3))
				{
					func_194(uParam3, iParam4, -1);
				}
			}
		}
	}
}

void func_194(var uParam0, int iParam1, int iParam2)//Position - 0x7555
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_195(var uParam0)//Position - 0x756E
{
	return *uParam0 == 0;
}

void func_196(int iParam0)//Position - 0x757B
{
	if (func_199(iParam0))
	{
		func_197(iParam0);
	}
}

void func_197(var uParam0)//Position - 0x7592
{
	if (unk_0xBCFF5E6898C5516A() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x832CFDD4BD296987();
			func_202(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_111(uParam0, 20) > 3f)
				{
					func_248(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_248(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_248(uParam0, 85, 1, 0, 0);
						func_202(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_111(uParam0, 20) > 8f)
				{
					func_248(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_183(uParam0, 22))
				{
					func_198(uParam0, 22);
				}
			}
			if (func_183(uParam0, 22) && func_111(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_248(uParam0, 84, 1, 0, 0);
						func_202(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_248(uParam0, 85, 1, 0, 0);
						func_202(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_198(var uParam0, int iParam1)//Position - 0x780D
{
	func_112(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_199(var uParam0)//Position - 0x7821
{
	return uParam0->f_120;
}

int func_200(int iParam0, int iParam1)//Position - 0x782D
{
	if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
	{
		if (unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
				{
					unk_0xB926B9A87AB986E6(unk_0x98EC0789D9F0703B(), 1, 0);
					unk_0xCFB8D84F848CAA39(unk_0x98EC0789D9F0703B(), 0);
					if (unk_0xA6DECE14FC9A8C51(iParam1))
					{
						unk_0xE30CF11C0EE14316(&iParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x788B
{
	if (unk_0xB8DE76287EDC4957(iParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(iParam0->f_4, -1, 0) == unk_0xFC1458A37D98B502())
		{
			return 1;
		}
	}
	return 0;
}

void func_202(int iParam0, int iParam1, bool bParam2)//Position - 0x78B5
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_101(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_101(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_203(int iParam0, int iParam1)//Position - 0x78FE
{
	if (unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_204()//Position - 0x791F
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 402,42f, -1457,19f, 28,82f };
	vVar1 = { -701,25f, -1080,29f, 12,29f };
	if (vVar1.x <= vVar0.x)
	{
		vLocal_301.x = vVar1.x;
		vLocal_302.x = vVar0.x;
	}
	else
	{
		vLocal_301.x = vVar0.x;
		vLocal_302.x = vVar1.x;
	}
	if (vVar1.y <= vVar0.y)
	{
		vLocal_301.y = vVar1.y;
		vLocal_302.y = vVar0.y;
	}
	else
	{
		vLocal_301.y = vVar0.y;
		vLocal_302.y = vVar1.y;
	}
	vLocal_301 = { vLocal_301 - Vector(20f, 20f, 20f) };
	vLocal_302 = { vLocal_302 + Vector(20f, 20f, 20f) };
	unk_0x590D9654A4367AA1(vLocal_301.x, vLocal_301.y, vLocal_302.x, vLocal_302.y);
}

int func_205()//Position - 0x79E8
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_206()//Position - 0x7A0A
{
	func_149();
	if (iLocal_417 < 9 && iLocal_417 > 2)
	{
		if (func_145(iLocal_264))
		{
			iLocal_417 = 9;
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if (func_144(1, 1, 1))
			{
				iLocal_264 = unk_0x53C562FD2B9E3AB0();
				func_137(256, 0, 1);
				func_142(&uLocal_355);
				func_141(&Local_352, 2, 0);
				if (func_212(&Local_251, vLocal_289, fLocal_306))
				{
					unk_0xBF98CCF1EA4B13E9(1346,9f, -1606,52f, 31,16f, 1457,25f, -1508,19f, 83,05f, true, 1);
					func_140(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_248(&Local_238, 138, 1, 0, 0);
					iLocal_417 = 1;
				}
			}
			break;
		
		case 1:
			if (func_111(&Local_238, 19) > 3f)
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_251.f_2))
				{
					unk_0x771A86309E0CA47B(Local_251.f_2, true);
					unk_0xB8E08BD5B184DF4E(Local_251.f_2);
					if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
					{
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0x6F8C8278B7C06889(0, Local_251.f_3, 20000, -1, 1f, 1, 0);
						unk_0x12C9D41D52A560D6(0, "veh@truck@ds@base", "start_engine", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
						unk_0x4BEFCD5DAE410A90(Local_251.f_3, 1);
					}
				}
				unk_0xC598A9BBD8271F11(unk_0xFC1458A37D98B502(), Local_238.f_17);
				unk_0xA215B2F25E63FA31(Local_238, func_211(0));
				unk_0xBEBD5CAE3510CD2A(Local_238, func_210(0), 2);
				unk_0xE43C573FE3C5D758(Local_238, 17,2f);
				unk_0x7E4FCDC8BAD0CF6D(Local_238, "HAND_SHAKE", 0,1f);
				unk_0x7849794435F39D49(Local_238, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				func_309(&Local_238, 19, 0, 0);
				iLocal_417 = 2;
			}
			break;
		
		case 2:
			iLocal_237 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
			unk_0xA215B2F25E63FA31(iLocal_237, func_211(4));
			unk_0xBEBD5CAE3510CD2A(iLocal_237, func_210(0), 2);
			unk_0xE43C573FE3C5D758(iLocal_237, 17,2f);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_237, "HAND_SHAKE", 0,1f);
			unk_0xF10DA1539629CC3F(iLocal_237, Local_238, 6000, 1, 1);
			func_309(&Local_238, 19, 0, 0);
			iLocal_417 = 3;
			break;
		
		case 3:
			if (func_111(&Local_238, 19) > 7,85f && !iLocal_279)
			{
				if (func_192(&Local_238) > 10)
				{
					func_207();
				}
				iLocal_279 = 1;
			}
			if (func_111(&Local_238, 19) > 8f && iLocal_279)
			{
				unk_0xA215B2F25E63FA31(Local_238, func_211(2));
				unk_0xAA7DE567B3D55DDB(Local_238, Local_251.f_3, 0f, 0f, 0f, 1);
				unk_0xE43C573FE3C5D758(Local_238, 35f);
				unk_0x7E4FCDC8BAD0CF6D(Local_238, "HAND_SHAKE", 0,2f);
				unk_0x7849794435F39D49(Local_238, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				func_309(&Local_238, 19, 0, 0);
				iLocal_417 = 4;
			}
			break;
		
		case 4:
			unk_0xA215B2F25E63FA31(iLocal_237, func_211(2));
			unk_0xAA7DE567B3D55DDB(iLocal_237, Local_251.f_3, 0f, 0f, 0f, 1);
			unk_0xE43C573FE3C5D758(iLocal_237, 45f);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_237, "HAND_SHAKE", 0,2f);
			unk_0xF10DA1539629CC3F(iLocal_237, Local_238, 10000, 1, 1);
			func_309(&Local_238, 19, 0, 0);
			iLocal_417 = 11;
			break;
		
		case 9:
			if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0) && !unk_0x191BE1BC8F26F3C1(Local_251.f_3, 0))
			{
				if (!unk_0x88DDBE9908752BF0(Local_251.f_2, 0))
				{
					unk_0xBB0358802AA14401(Local_251.f_2, Local_251.f_3, -1);
				}
				unk_0xFB2E9855F95E3BD3(Local_251.f_3, 10f);
				func_104(&(Local_251.f_27));
				func_309(&Local_238, 19, 2f, 0);
				iLocal_417 = 11;
				if (!bLocal_268)
				{
					func_207();
				}
			}
			break;
		
		case 11:
			if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
			{
			}
			if (unk_0x50126692B8A3590A(413,8f, -1416,19f, 29,26f, 5f, 1230099731, 0))
			{
				unk_0xFB3E858D6C41D854(1230099731, 413,8f, -1416,19f, 29,26f, false, 0,85f, 0);
			}
			if (func_111(&Local_238, 19) > 4f)
			{
				unk_0x59C3AC31C7544A28(800);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				func_104(&(Local_251.f_27));
				unk_0x02934BABFD4CD384(Local_238, 0);
				unk_0x02934BABFD4CD384(iLocal_237, 0);
				func_130(1, 1, 1);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				func_202(&Local_238, 19, 0);
				iLocal_417 = 12;
			}
			else if (func_111(&Local_238, 19) > 3,7f)
			{
				if (func_132())
				{
					if (!iLocal_281)
					{
						unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_281 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_207()//Position - 0x7EC8
{
	bLocal_268 = true;
	if (!unk_0x3AB6A1A9084FB0A4(Local_251.f_2))
	{
		if (unk_0xB8DE76287EDC4957(Local_251.f_3, 0))
		{
			if (unk_0xA8D0477084E86A92(Local_251.f_2, Local_251.f_3, 0))
			{
				unk_0xBD8D47FDC6902B2D(Local_251.f_3, 406,612f, -1419,937f, 29,00375f, 1, false, 0, 1);
				unk_0xCE93FCB8A8D8DF0B(Local_251.f_2, Local_251.f_30);
				unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 1, true);
				unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 6, false);
				unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 17, false);
				unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 3, false);
				unk_0x253DB96AF5D6551B(Local_251.f_2, 500f);
				unk_0x41613433DA018B46(Local_251.f_2, 500f);
				unk_0x8869F4A532FF9F2F(Local_251.f_2, 500f);
				unk_0x771A86309E0CA47B(Local_251.f_2, true);
				unk_0xCFB385D0FF082808(Local_251.f_3, 500);
				unk_0xCFB385D0FF082808(Local_251.f_2, 500);
				unk_0xCFF0CD14B439821D(Local_251.f_3, true, 1);
				unk_0xCFF0CD14B439821D(Local_251.f_2, true, 1);
				if (!unk_0xA6DECE14FC9A8C51(Local_251.f_4))
				{
					Local_251.f_4 = func_208(Local_251.f_3, 0, 0);
				}
				unk_0x771A86309E0CA47B(Local_251.f_2, true);
				unk_0x8D7ABC97ED508270(Local_251.f_3, 120, "txm_fc_h1_", 1);
				unk_0x3998782E46B46C7F(Local_251.f_3, 0,8f);
				iLocal_308 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
}

int func_208(int iParam0, bool bParam1, bool bParam2)//Position - 0x8006
{
	return func_209(iParam0, !bParam1, bParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2)//Position - 0x8019
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_126(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_126(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_126(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

Vector3 func_210(int iParam0)//Position - 0x80BD
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -0,7535f, -0,0475f, 91,9877f };
			break;
		
		case 1:
			vVar0 = { 4,2328f, 0f, 165,0072f };
			break;
		
		case 2:
			vVar0 = { -0,3221f, 0f, 68,7635f };
			break;
		
		case 3:
			vVar0 = { -0,3614f, 0f, -145,1533f };
			break;
		
		case 4:
			vVar0 = { -5,4284f, 0f, 1,8065f };
			break;
		
		case 5:
			vVar0 = { 1,2038f, 0f, 68,7635f };
			break;
		
		case 6:
			vVar0 = { -2,1877f, 0f, 71,1648f };
			break;
	}
	return vVar0;
}

Vector3 func_211(int iParam0)//Position - 0x817C
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 495,4f, -1416,8f, 30,2f };
			break;
		
		case 1:
			vVar0 = { 429,6911f, -1385,415f, 29,7266f };
			break;
		
		case 2:
			vVar0 = { 417,9f, -1419,4f, 30,6f };
			break;
		
		case 3:
			vVar0 = { 426,754f, -1386,51f, 29,6201f };
			break;
		
		case 4:
			vVar0 = { 493,7f, -1416,9f, 30,2f };
			break;
		
		case 5:
			vVar0 = { 450,0146f, -1414,523f, 34,4507f };
			break;
		
		case 6:
			vVar0 = { 448,2621f, -1413,842f, 34,4501f };
			break;
	}
	return vVar0;
}

int func_212(var uParam0, vector3 vParam1, float fParam2)//Position - 0x8253
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0->f_2))
	{
		uParam0->f_2 = unk_0xAC992EFAD62C33BF(26, *uParam0, vParam1, fParam2, 1, true);
	}
	func_7(&(Local_238.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x350CEE66BDF90273(uParam0->f_2, "TaxiJames");
	if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
	{
		unk_0xAE01EF4BC84AFE7C(iLocal_257, 20, true);
	}
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_2, 0))
	{
		unk_0x03924C68EFCBC511(uParam0->f_2, 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_2, 3, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_2, 4, 0, 1, 0);
		unk_0x03924C68EFCBC511(uParam0->f_2, 8, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_2, 11, 0, 1, 0);
		unk_0xCE93FCB8A8D8DF0B(uParam0->f_2, uParam0->f_30);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_2, 1, true);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_2, 6, true);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_2, 17, true);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_2, 3, false);
		unk_0x253DB96AF5D6551B(uParam0->f_2, 300f);
		unk_0x41613433DA018B46(uParam0->f_2, 300f);
		unk_0x8869F4A532FF9F2F(uParam0->f_2, 300f);
		unk_0x771A86309E0CA47B(uParam0->f_2, true);
	}
	return 1;
}

int func_213(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x8363
{
	if ((((unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076()) && !unk_0x2D0EF1D268F33F25()) && !unk_0x3E9CABD07B829173()) && !uParam0->f_142)
	{
		if (func_225(uParam0))
		{
			func_128(uParam0, &(uParam0->f_43));
			func_220(uParam0);
			func_219(uParam0);
			func_196(uParam0);
			func_218(uParam0, fParam2, fParam3);
			func_216(uParam0);
			return func_214(uParam0, fParam1);
		}
	}
	return 0;
}

int func_214(var uParam0, float fParam1)//Position - 0x83DB
{
	if (func_63(uParam0) == 2)
	{
		if (unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_215(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_144(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
		{
			return func_121(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_144(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
	{
		return func_121(uParam0, 1, fParam1);
	}
	return 0;
}

float func_215(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x84B2
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

void func_216(var uParam0)//Position - 0x84EC
{
	float fVar0;
	
	if ((func_217(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if ((unk_0x53C562FD2B9E3AB0() - iLocal_89) >= 10000)
		{
			fVar0 = func_49(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = unk_0x53C562FD2B9E3AB0();
		}
		if (iLocal_88 >= 2 && !func_205())
		{
			func_248(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x53C562FD2B9E3AB0() % 4000) < 50)
		{
			if (!func_217(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

int func_217(var uParam0)//Position - 0x85C2
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_218(var uParam0, float fParam1, float fParam2)//Position - 0x85F7
{
	if (func_217(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0x9EC5112BB1C4047A(uParam0->f_4) || unk_0x90D5DFB054818BA7(uParam0->f_4) < 3f) && func_201(uParam0))
		{
			if (!func_183(uParam0, 2))
			{
				func_198(uParam0, 2);
			}
			else if (func_217(uParam0))
			{
				if (func_111(uParam0, 2) > fParam1 && !func_183(uParam0, 14))
				{
					if (func_34())
					{
						func_248(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_248(uParam0, 48, 1, 0, 0);
					}
					func_309(uParam0, 2, 0, 0);
					if (func_183(uParam0, 10))
					{
						func_309(uParam0, 10, 0, 0);
					}
				}
				if (!func_183(uParam0, 3))
				{
					func_309(uParam0, 3, 0, 0);
				}
				else if (func_111(uParam0, 3) >= fParam2)
				{
					func_202(uParam0, 3, 0);
					func_349(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_183(uParam0, 2))
			{
				func_202(uParam0, 2, 0);
			}
			if (func_183(uParam0, 3))
			{
				func_202(uParam0, 3, 0);
			}
		}
	}
}

void func_219(var uParam0)//Position - 0x8712
{
	if (unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && !func_21(uParam0->f_44, 2))
	{
		func_64(&(uParam0->f_44), 2);
	}
	else if (!unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_52(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_248(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + system::ceil(5f));
	}
}

void func_220(var uParam0)//Position - 0x879B
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					if (func_111(uParam0, 9) > 1f)
					{
						func_224(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
						if (uParam0->f_410 != 22)
						{
							func_248(uParam0, 50, 1, 1, 0);
						}
						func_309(uParam0, 9, 0, 0);
						if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
						{
							unk_0xF20857E4CB32A2B7(uParam0->f_9, 0);
							unk_0xAAAC88CC20771601(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_205() && func_111(uParam0, 9) > 4f)
				{
					func_248(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_223("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_248(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xC308146F18B10A6F(unk_0x98EC0789D9F0703B(), func_222(uParam0)))
				{
					func_224(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
					func_52(6, 0);
				}
				if (!func_221(uParam0))
				{
					if (!unk_0x42111BD51D233AAB())
					{
						if (func_111(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_248(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					if (func_223("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x84CDD933AFA470D2();
					}
					if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_205())
				{
					if (uParam0->f_410 != 22)
					{
						func_248(uParam0, 53, 1, 0, 1);
					}
					func_52(7, func_222(uParam0));
					func_224(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_205())
				{
					func_202(uParam0, 9, 0);
					func_309(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_221(var uParam0)//Position - 0x89BF
{
	return uParam0->f_110;
}

int func_222(var uParam0)//Position - 0x89CB
{
	return uParam0->f_106;
}

bool func_223(char* sParam0, int iParam1, char* sParam2)//Position - 0x89D7
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_224(var uParam0, int iParam1)//Position - 0x89F5
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_225(var uParam0)//Position - 0x8A0C
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (!unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 1) && !unk_0x0F299BBD0DC14B18(uParam0->f_3))
			{
				func_349(uParam0, "Passenger left car.", 9);
			}
			else if (func_235(uParam0))
			{
				if (func_223("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x166954C5648772B6("TAXI_OBJ_PICKUP");
				}
				if (unk_0x9F7B586A14398C40())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				func_226(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_226(var uParam0, bool bParam1)//Position - 0x8A9B
{
	func_234(uParam0, uParam0->f_3);
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_183(uParam0, 14))
			{
				if (func_205())
				{
					func_233(1);
				}
				func_184(uParam0, 11, 1);
				func_228(uParam0, 1);
				func_309(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_217(uParam0))
				{
					if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
					{
					}
					if (unk_0x88DDBE9908752BF0(uParam0->f_2, 0))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							func_309(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_349(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (func_227(uParam0->f_4, 1) > 40f)
					{
						func_349(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_349(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_227(int iParam0, bool bParam1)//Position - 0x8BA6
{
	return func_48(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

void func_228(var uParam0, bool bParam1)//Position - 0x8BBE
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
				unk_0xAAAC88CC20771601(uParam0->f_8, false);
				func_232(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_9, 0);
				unk_0xAAAC88CC20771601(uParam0->f_9, false);
				unk_0x84CDD933AFA470D2();
				if (func_217(uParam0))
				{
					func_248(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_232(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_229(uParam0, 0, 0);
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam0->f_10))
		{
			unk_0xE30CF11C0EE14316(&(uParam0->f_10));
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_8, 255);
				unk_0xAAAC88CC20771601(uParam0->f_8, true);
			}
			else if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xF20857E4CB32A2B7(uParam0->f_9, 0);
					unk_0xAAAC88CC20771601(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
					unk_0xAAAC88CC20771601(uParam0->f_9, true);
				}
			}
			unk_0x84CDD933AFA470D2();
		}
	}
}

void func_229(var uParam0, bool bParam1, bool bParam2)//Position - 0x8CDC
{
	if (bParam1)
	{
		func_430(uParam0);
	}
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_10))
	{
		uParam0->f_10 = func_209(uParam0->f_4, 1, 0);
		unk_0x62BD54E491535B76(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xAAAC88CC20771601(uParam0->f_10, true);
		func_230(uParam0);
		if (bParam2)
		{
			unk_0x84CDD933AFA470D2();
			func_248(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_230(var uParam0)//Position - 0x8D37
{
	func_309(uParam0, 14, 0, 0);
	func_231();
}

void func_231()//Position - 0x8D4D
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_232(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8D76
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x84CDD933AFA470D2();
		func_248(uParam0, iParam3, 1, 0, 0);
		func_64(uParam1, iParam2);
	}
}

void func_233(int iParam0)//Position - 0x8DA2
{
	Global_16767 = iParam0;
}

void func_234(var uParam0, int iParam1)//Position - 0x8DAF
{
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
			{
				if ((unk_0x299B8D0F9C239719(iParam1, joaat("weapon_stungun"), 0) || unk_0x299B8D0F9C239719(iParam1, 0, 2)) || unk_0x299B8D0F9C239719(iParam1, 0, 1))
				{
					func_349(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			}
		}
	}
}

int func_235(var uParam0)//Position - 0x8E14
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_183(uParam0, 14))
			{
				func_236(uParam0);
			}
			func_228(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_236(var uParam0)//Position - 0x8E56
{
	func_202(uParam0, 14, 0);
	func_202(uParam0, 15, 0);
	func_238();
	if (func_237())
	{
		func_233(0);
	}
}

int func_237()//Position - 0x8E80
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_238()//Position - 0x8E97
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_239(int iParam0, var uParam1)//Position - 0x8EC0
{
	func_127(iParam0, uParam1->f_2, 1, 1);
	if (unk_0xB8DE76287EDC4957(uParam1->f_3, 0))
	{
		if (unk_0xEBE499597C718EB8(uParam1->f_3, unk_0xFC1458A37D98B502(), 1))
		{
			if (!func_205())
			{
				func_349(&Local_238, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_146();
			}
		}
	}
	else if (!func_205())
	{
		func_349(&Local_238, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_146();
	}
}

int func_240(var uParam0, vector3 vParam1, float fParam2)//Position - 0x8F2A
{
	uParam0->f_17 = { vParam1 };
	uParam0->f_10 = fParam2;
	uParam0->f_3 = unk_0xEA60F3B426BB095B(uParam0->f_1, uParam0->f_17, uParam0->f_10, true, true, false);
	unk_0x2E4932E63763FE26(uParam0->f_1, true);
	unk_0x14776E43F90DD454(uParam0->f_1);
	iLocal_235[0] = unk_0xEA60F3B426BB095B(iLocal_255, 404,9912f, -1423,974f, 28,4638f, 227,5235f, true, true, false);
	iLocal_235[1] = unk_0xEA60F3B426BB095B(iLocal_255, 402,2958f, -1427,018f, 28,4632f, 226,6982f, true, true, false);
	iLocal_235[2] = unk_0xEA60F3B426BB095B(iLocal_256, 398,415f, -1428,167f, 28,4504f, 226,4081f, true, true, false);
	unk_0x4BEFCD5DAE410A90(iLocal_235[0], 2);
	unk_0x4BEFCD5DAE410A90(iLocal_235[1], 2);
	unk_0x4BEFCD5DAE410A90(iLocal_235[2], 2);
	unk_0xE58BC5B025017AE2(iLocal_235[0], "BRAVEST");
	unk_0xE58BC5B025017AE2(iLocal_235[1], "BOLDEST");
	unk_0xE58BC5B025017AE2(iLocal_235[2], "BADDEST");
	unk_0xE01CE1EBCD7EE551(uParam0->f_3, 800, 0);
	unk_0xE58BC5B025017AE2(uParam0->f_3, "PUSSYWAG");
	unk_0xFA87254221D30EB8(uParam0->f_3, 1);
	unk_0x6862DF5504F63883(uParam0->f_3, 1);
	uParam0->f_15 = unk_0xA7B0253B80B52B2B(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x35829E9BFCED1A3F(uParam0->f_3, true);
	func_245(Local_238.f_14, 1, 1114636288);
	func_245(vLocal_299, 1, 15f);
	func_245(vLocal_300, 1, 15f);
	unk_0x4BEFCD5DAE410A90(uParam0->f_3, 2);
	return 1;
}

int func_241()//Position - 0x90A0
{
	if (!unk_0x9A0B2ED5055D3F0B(Local_251))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(Local_251.f_1))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(iLocal_255))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(iLocal_256))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x0840F461D7BD8859(120, "txm_fc_h1_"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x0840F461D7BD8859(0, "taxi_oj_fc3"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xC316B5E3E7ACF515(&cLocal_309))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_242(int iParam0, var uParam1)//Position - 0x918E
{
	if (unk_0xB8DE76287EDC4957(iParam0->f_4, 0))
	{
		if (!unk_0xA8D0477084E86A92(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_183(iParam0, 14))
			{
				if (unk_0xA6DECE14FC9A8C51(*uParam1) && unk_0x94540F498465F1A2(*uParam1) > 0)
				{
					unk_0xF20857E4CB32A2B7(*uParam1, 0);
				}
				func_229(iParam0, 0, 0);
				func_248(iParam0, 2, 1, 0, 0);
			}
			else if (func_111(iParam0, 14) > 20f)
			{
				func_349(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_183(iParam0, 14))
			{
				func_309(iParam0, 2, 0, 0);
				func_236(iParam0);
			}
			if (unk_0xA6DECE14FC9A8C51(iParam0->f_10))
			{
				unk_0xE30CF11C0EE14316(&(iParam0->f_10));
			}
			if ((unk_0xA6DECE14FC9A8C51(*uParam1) && unk_0x94540F498465F1A2(*uParam1) < 255) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
			{
				unk_0xF20857E4CB32A2B7(*uParam1, 255);
				unk_0xAAAC88CC20771601(*uParam1, true);
			}
		}
	}
}

void func_243(var uParam0)//Position - 0x927A
{
	func_244(uParam0, 1000);
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x957CEE967C939968(uParam0->f_3);
		unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
	}
	func_146();
	func_236(uParam0);
}

void func_244(var uParam0, int iParam1)//Position - 0x92C6
{
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		unk_0x02934BABFD4CD384(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x3458550DF8E9B453(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
	}
}

void func_245(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x9300
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_37(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_37(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0xBF98CCF1EA4B13E9(vVar0, vVar1, false, 1);
	}
	else
	{
		unk_0xD855BC7E9D7EC87F(vVar0, vVar1, true);
		unk_0xD581373770173F1F();
	}
}

void func_246()//Position - 0x9375
{
	func_64(&(Local_238.f_55), 2);
	func_64(&(Local_238.f_55), 4);
	func_64(&(Local_238.f_55), 16);
	func_64(&(Local_238.f_55), 64);
	func_64(&(Local_238.f_55), 256);
	func_64(&(Local_238.f_55), 512);
	func_64(&(Local_238.f_55), 1024);
	func_64(&(Local_238.f_55), 2048);
	func_64(&(Local_238.f_55), 1073741824);
	func_64(&(Local_238.f_55), 8388608);
	func_64(&(Local_238.f_55), 33554432);
	func_64(&(Local_238.f_55), 16777216);
	func_64(&(Local_238.f_55), 4096);
	func_64(&(Local_238.f_100), 8);
	func_64(&(Local_238.f_100), 2048);
	func_64(&(Local_238.f_100), 256);
	func_64(&uLocal_398, 2);
}

void func_247(var uParam0)//Position - 0x9445
{
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	func_244(uParam0, 1000);
}

void func_248(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9468
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_309(iParam0, 16, 4f, 0);
		if (func_249(iParam0))
		{
			func_45();
		}
	}
	func_273(iParam0, iParam2, bParam3);
}

int func_249(var uParam0)//Position - 0x949D
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_205())
	{
		Var1 = { func_251() };
		if (!unk_0xAB019B170BF1309C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_250(&vVar0);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_250(char* sParam0)//Position - 0x9503
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_251()//Position - 0x9513
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_252(var uParam0)//Position - 0x9537
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if ((unk_0x0F299BBD0DC14B18(uParam0->f_3) && (unk_0x53C562FD2B9E3AB0() - iLocal_81) > 500) || unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_253()//Position - 0x958A
{
	unk_0x6FF834D85E2DD4C6(Local_251);
	unk_0x6FF834D85E2DD4C6(Local_251.f_1);
	unk_0x6FF834D85E2DD4C6(iLocal_255);
	unk_0x6FF834D85E2DD4C6(iLocal_256);
	unk_0x0D9525F20FB71C52(120, "txm_fc_h1_");
	unk_0x0D9525F20FB71C52(0, "taxi_oj_fc3");
	unk_0x307EAE14C924E2E7(&cLocal_309);
	unk_0x6450931B826B49D9("veh@truck@ds@base");
}

int func_254(var uParam0, bool bParam1, float fParam2)//Position - 0x95D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
			{
			}
			func_226(uParam0, 1);
			if (func_32())
			{
				unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
			}
			if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 2106541073) == 1 || unk_0x78F50AA8F955BEFC(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x957CEE967C939968(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
			}
		}
		else if (unk_0xC308146F18B10A6F(unk_0x98EC0789D9F0703B(), 0))
		{
			func_271(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0xFAA3EF7FF92E1F9E(&iVar3);
				unk_0x6931076730A4AC5D(&iVar3);
				unk_0x380C1E7B7740D618(0, uParam0->f_11, uParam0->f_6, 20000, 0,25f, 0, 1193033728);
				unk_0xAC838A977FB6E6BC(0, uParam0->f_4, 0);
				unk_0x1B16DD5C115FE009(iVar3);
				unk_0xAB30B1CF01A198C1(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_183(uParam0, 14))
			{
				func_236(uParam0);
				func_228(uParam0, 0);
			}
			if (func_183(uParam0, 9))
			{
				func_202(uParam0, 9, 0);
				unk_0x84CDD933AFA470D2();
				if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
				{
					unk_0xF20857E4CB32A2B7(uParam0->f_8, 255);
					unk_0xAAAC88CC20771601(uParam0->f_8, true);
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x90D5DFB054818BA7(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_270(uParam0, uParam0->f_3) > 300f)
				{
					func_349(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 || ((func_48(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 20f && func_215(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_215(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_267(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_266(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_265(uParam0->f_4, uParam0->f_3);
								iVar0 = func_264(uParam0, &iVar1);
								if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x16416C5B54FDBCBB(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x16416C5B54FDBCBB(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
											{
												unk_0x16416C5B54FDBCBB(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xB8E08BD5B184DF4E(uParam0->f_3);
							unk_0x6F8C8278B7C06889(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_201(uParam0))
							{
								unk_0xB8E08BD5B184DF4E(uParam0->f_3);
							}
							else if (((unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 0) && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 7) && func_270(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xFAA3EF7FF92E1F9E(&(uParam0->f_243));
								unk_0x6931076730A4AC5D(&(uParam0->f_243));
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0x12C9D41D52A560D6(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0x12C9D41D52A560D6(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x1B16DD5C115FE009(uParam0->f_243);
								unk_0xAB30B1CF01A198C1(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0xA5F6598E13F98E08(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0xCA854FCB18A4FD22(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1,75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_48(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_263(uParam0, 1))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_349(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_262(uParam0->f_4))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_349(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_260(uParam0);
						if (func_270(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_256(uParam0))
								{
									func_255(uParam0);
									iLocal_81 = unk_0x53C562FD2B9E3AB0();
									unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 26, true);
									func_202(uParam0, 5, 0);
									unk_0xC96951569B5FF5BD();
									unk_0xBF9EAA044015B0A2(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xEB2D96E7D3F4906C(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_255(var uParam0)//Position - 0x9AE5
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
	{
		unk_0xAAAC88CC20771601(uParam0->f_8, false);
		unk_0xE30CF11C0EE14316(&(uParam0->f_8));
	}
}

int func_256(var uParam0)//Position - 0x9B09
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_138("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		func_149();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_145(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_121(uParam0, 0, 1084227584) && func_144(1, 1, 1))
			{
				if (func_263(uParam0, 1))
				{
					iLocal_80 = unk_0x53C562FD2B9E3AB0();
					system::settimera(0);
					iLocal_78 = 1;
				}
				else
				{
					func_349(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (system::timera() > 500)
			{
				uParam0->f_7 = func_265(uParam0->f_4, uParam0->f_3);
				iVar3 = func_264(uParam0, &iVar4);
				if (!unk_0x191BE1BC8F26F3C1(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						unk_0x16416C5B54FDBCBB(iVar3, 0, iVar5);
					}
					else
					{
						unk_0x16416C5B54FDBCBB(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!unk_0x191BE1BC8F26F3C1(iVar3, 0))
						{
							unk_0x16416C5B54FDBCBB(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar2 = { 1,5f, 0f, -0,6422f };
				vVar0 = { -1,4309f, 3,958f, 3,5037f };
				vVar1 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar2 = { 1,5f, -1f, -0,6422f };
				vVar0 = { 1,4309f, 3,958f, 0,5037f };
				vVar1 = { 0,1017f, 1,3354f, -0,0925f };
			}
			else
			{
				vVar2 = { -1,5f, -1f, -0,6422f };
				vVar0 = { -1,4823f, 4,2333f, 0,5939f };
				vVar1 = { -0,4718f, 1,4282f, 0,3619f };
			}
			iVar6 = func_185(&(uParam0->f_409), unk_0x3F90543934DCD7E6(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x3F90543934DCD7E6(uParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1,5f);
				if (uParam0->f_7 == 2)
				{
					vVar1 = { 0,7632f, 1,4884f, 0,4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_137(0, 0, 1);
				unk_0x60225D4F755DFDB1(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 3f, 0);
				unk_0xBBF9037650162761(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 25f, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_116();
				func_273(uParam0, 0, 0);
				vVar7 = { unk_0x3F90543934DCD7E6(uParam0->f_4, vVar2) };
				unk_0xBD8D47FDC6902B2D(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(uParam0->f_3, func_258(uParam0));
				func_140(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0xA215B2F25E63FA31(*uParam0, unk_0x3F90543934DCD7E6(uParam0->f_4, vVar0));
				unk_0xAA7DE567B3D55DDB(*uParam0, uParam0->f_4, vVar1, 1);
				unk_0x7849794435F39D49(*uParam0, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				unk_0x9A0C1F836B24E46E(uParam0->f_3, 0, 0);
				unk_0x6F8C8278B7C06889(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_138("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (system::timera() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
			{
				if (!unk_0x88DDBE9908752BF0(uParam0->f_3, 0))
				{
					unk_0xBB0358802AA14401(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0xDA5162F6425C44AA(uParam0->f_4, func_257(uParam0->f_7), 1);
				}
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0x02934BABFD4CD384(*uParam0, 0);
				unk_0x02934BABFD4CD384(uParam0->f_1, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x59C3AC31C7544A28(800);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_116();
				func_273(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				func_130(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x02934BABFD4CD384(*uParam0, 0);
			unk_0x02934BABFD4CD384(uParam0->f_1, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			func_130(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
			{
				if (unk_0x0F299BBD0DC14B18(uParam0->f_3) || unk_0x88DDBE9908752BF0(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470) != 0)
				{
					unk_0x6F8C8278B7C06889(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xA016
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

float func_258(var uParam0)//Position - 0xA04E
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_4, 0,773f, -0,646f, -0,6422f) };
	}
	else
	{
		vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_4, -0,773f, -0,646f, -0,6422f) };
	}
	fVar0 = func_259(unk_0xB3328BA8976B416C(uParam0->f_3, 1), vVar1);
	return fVar0;
}

float func_259(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0xA0B7
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_260(var uParam0)//Position - 0xA0D1
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (func_227(uParam0->f_3, 1) > 30f || func_261(uParam0))
			{
				if (unk_0x78F50AA8F955BEFC(uParam0->f_3, -1794415470) == 1 || unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) == 1)
				{
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0xAC838A977FB6E6BC(0, uParam0->f_4, 0);
					unk_0x12C9D41D52A560D6(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x380C1E7B7740D618(0, uParam0->f_11, uParam0->f_6, 20000, 0,25f, 0, 1193033728);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(uParam0->f_3, iVar0);
					func_349(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_261(var uParam0)//Position - 0xA1A2
{
	if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || unk_0xF69AD934E7664A7C(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0)//Position - 0xA1DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x36CA14E4AEA7AA81(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x36CA14E4AEA7AA81(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x36CA14E4AEA7AA81(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x36CA14E4AEA7AA81(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x178CF89BBA808451(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x178CF89BBA808451(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x178CF89BBA808451(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x178CF89BBA808451(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_263(var uParam0, bool bParam1)//Position - 0xA298
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x317536BCEA8FA6B0(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x317536BCEA8FA6B0(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x317536BCEA8FA6B0(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x6ADD12BF4D6D2587(iVar0[iVar1]))
			{
				if (unk_0x191BE1BC8F26F3C1(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_264(var uParam0, var uParam1)//Position - 0xA352
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(uParam0->f_4, 1, 0);
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x317536BCEA8FA6B0(uParam0->f_4, 2, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x317536BCEA8FA6B0(uParam0->f_4, 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_265(int iParam0, int iParam1)//Position - 0xA3C7
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x95EC8AE7E4F33F6E(iParam0);
	vVar0 = { unk_0xA05DDB968587006B(iParam0, unk_0xB3328BA8976B416C(iParam1, 1)) };
	if (unk_0x82FF3DFBC3965CC0(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x8EA8060A1C856203(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (unk_0x8EA8060A1C856203(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (unk_0x8EA8060A1C856203(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (unk_0x8EA8060A1C856203(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_266(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0xA47F
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (!unk_0xEC211A86AB3726B6(uParam0->f_3) && func_227(uParam0->f_3, 1) < fParam2)
		{
			if (!func_183(uParam0, 5))
			{
				func_309(uParam0, 5, 0, 0);
			}
		}
		else if (func_183(uParam0, 5))
		{
			func_202(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && unk_0x90D5DFB054818BA7(uParam0->f_4) < fParam4) && !unk_0xEC211A86AB3726B6(uParam0->f_3)) || func_227(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_267(var uParam0, float fParam1)//Position - 0xA51D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0xD323488FDDE4A80F(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = unk_0xD323488FDDE4A80F(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		vVar2 = { unk_0xDCD8BDD2E10C660E(uParam0->f_4, iVar8) };
		vVar2 = { unk_0xA05DDB968587006B(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0x3F90543934DCD7E6(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_3, 0f, 0,25f, 0,9f) };
	unk_0xCABB2FDE746B45D3(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x771A86309E0CA47B(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_48(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xE97272C977DEADD3((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x8941008352A0F66A(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = unk_0x16ACABF450EB00B4(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 0)
			{
				unk_0xFAA3EF7FF92E1F9E(&(uParam0->f_243));
				unk_0x6931076730A4AC5D(&(uParam0->f_243));
				unk_0x12C9D41D52A560D6(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0xDFD7CAAA70F1F7D2(uParam0->f_243, 1);
				unk_0x1B16DD5C115FE009(uParam0->f_243);
				unk_0xAB30B1CF01A198C1(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x84CDD933AFA470D2();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_248(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_268(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xB8E08BD5B184DF4E(uParam0->f_3);
			unk_0x60C06BFD037BB7CF(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xFAA3EF7FF92E1F9E(&(uParam0->f_243));
			unk_0x6931076730A4AC5D(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0x12C9D41D52A560D6(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0x12C9D41D52A560D6(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1,5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
			unk_0x1B16DD5C115FE009(uParam0->f_243);
			unk_0xAB30B1CF01A198C1(uParam0->f_3, uParam0->f_243);
			unk_0xFAA3EF7FF92E1F9E(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (unk_0xA5F6598E13F98E08(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xCA854FCB18A4FD22(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0,8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_268(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xA7FE
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_269(iParam3), 0);
}

int func_269(int iParam0)//Position - 0xA817
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

float func_270(var uParam0, int iParam1)//Position - 0xAA0C
{
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (func_201(uParam0))
		{
			return func_48(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_271(var uParam0)//Position - 0xAA37
{
	func_234(uParam0, uParam0->f_3);
	if (func_201(uParam0))
	{
		if (func_183(uParam0, 14))
		{
			func_236(uParam0);
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_10))
			{
				unk_0xE30CF11C0EE14316(&(uParam0->f_10));
			}
		}
	}
	if (!func_183(uParam0, 9))
	{
		if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
		{
			unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
			unk_0xAAAC88CC20771601(uParam0->f_8, false);
		}
		func_309(uParam0, 9, 0, 0);
		func_272("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_272(char* sParam0, int iParam1, int iParam2)//Position - 0xAAB5
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_273(int iParam0, int iParam1, bool bParam2)//Position - 0xAACE
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_309(iParam0, 16, 4f, 0);
		unk_0x84CDD933AFA470D2();
	}
}

int func_274(var uParam0, int iParam1)//Position - 0xAAF3
{
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		return 0;
	}
	func_278(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()) && !func_21(uParam0->f_44, 256))
			{
				func_64(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_248(uParam0, 135, 1, 0, 1);
				func_64(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_277(uParam0, iParam1))
	{
		if (func_227(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
				func_248(uParam0, 133, 1, 0, 1);
				func_64(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x3AB6A1A9084FB0A4(uParam0->f_3) || unk_0xA6FA9E5D08F067AD(uParam0->f_3)) || func_227(uParam0->f_3, 1) > 400f)
		{
			func_349(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xDFD115BB10FE46A9(uParam0->f_2, 0);
		unk_0x438D30A195B65156(uParam0->f_4, true);
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x695BF4E9032C8B89(uParam0->f_4);
			func_275(uParam0);
			func_52(2, 0);
			bLocal_86 = true;
			func_112(&iLocal_82);
			return 1;
		}
		else
		{
			func_349(uParam0, "No Taxi", 21);
			func_161("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_275(var uParam0)//Position - 0xAC6C
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (func_276())
		{
		}
	}
}

int func_276()//Position - 0xAC88
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_277(var uParam0, int iParam1)//Position - 0xACA9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
				bVar2 = func_262(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0xC1514CFCEC68CA4A(iVar1))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x95EC8AE7E4F33F6E(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_161("TX_VIP_DMGD", -1);
							if (func_153("TX_VIP_DMGD"))
							{
								func_64(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_161("TX_VIP_CAR", -1);
							if (func_153("TX_VIP_CAR"))
							{
								func_64(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_161("TX_VIP_SMALL", -1);
							if (func_153("TX_VIP_SMALL"))
							{
								func_64(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_19(&(uParam0->f_44), 16);
			func_19(&(uParam0->f_44), 64);
			func_19(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_278(int iParam0)//Position - 0xB2BE
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		uVar0 = iParam0;
		unk_0x9C6C754DD3BC5452(8, &uVar0, 1, 1);
	}
	else if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x84CCB9DCA385196F(8, &cVar1);
	}
}

void func_279(var uParam0)//Position - 0xB317
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_280(var uParam0, var uParam1)//Position - 0xB33C
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_281(var uParam0, char* sParam1, int iParam2)//Position - 0xB3B3
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_282()//Position - 0xB3CB
{
	Local_165 = 0;
	func_299(46976/*func_301*/, 46951/*func_300*/, 1);
	func_299(46712/*func_297*/, 46688/*func_296*/, 1);
	func_299(46626/*func_295*/, 46601/*func_294*/, 1);
	func_299(46529/*func_293*/, 46505/*func_292*/, 1);
	func_299(46395/*func_291*/, 46374/*func_290*/, 1);
	func_299(46321/*func_288*/, 46296/*func_287*/, 1);
	func_299(46154/*func_284*/, 46130/*func_283*/, 1);
}

int func_283(int iParam0, var uParam1)//Position - 0xB432
{
	uParam1 = uParam1;
	func_349(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_284(var uParam0)//Position - 0xB44A
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_286(uParam0->f_4))
		{
			func_285(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_285(var uParam0, int iParam1)//Position - 0xB474
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_286(int iParam0)//Position - 0xB487
{
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA7B0253B80B52B2B(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xB6579D6FEB63269C(iParam0, 0, 40000) || unk_0xB6579D6FEB63269C(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0, var uParam1)//Position - 0xB4D8
{
	uParam1 = uParam1;
	func_349(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_288(var uParam0)//Position - 0xB4F1
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		if (func_289(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_289(var uParam0, int iParam1)//Position - 0xB517
{
	return (uParam0 && iParam1) != 0;
}

int func_290(var uParam0, var uParam1)//Position - 0xB526
{
	uParam1 = uParam1;
	func_285(uParam0, 11);
	return 1;
}

int func_291(int iParam0)//Position - 0xB53B
{
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_4))
	{
		if (unk_0x0BA31FF7931F3DD3(iParam0->f_4) && !unk_0x5E0BEAAD15B888F3(iParam0->f_4))
		{
			if (!func_183(iParam0, 25))
			{
				func_309(iParam0, 25, 0, 0);
			}
			else if (func_111(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_183(iParam0, 25))
		{
			func_202(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_292(int iParam0, var uParam1)//Position - 0xB5A9
{
	uParam1 = uParam1;
	func_349(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_293(var uParam0)//Position - 0xB5C1
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (unk_0xD081A26A065EE87B(uParam0->f_4))
		{
			if (unk_0xB6579D6FEB63269C(uParam0->f_4, 0, 40000) || unk_0xB6579D6FEB63269C(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_294(int iParam0, var uParam1)//Position - 0xB609
{
	uParam1 = uParam1;
	func_349(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_295(var uParam0)//Position - 0xB622
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (unk_0x9EC5112BB1C4047A(uParam0->f_4))
			{
				if (func_289(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_296(int iParam0, var uParam1)//Position - 0xB660
{
	uParam1 = uParam1;
	func_349(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_297(var uParam0)//Position - 0xB678
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_298(uParam0->f_4))
		{
			func_285(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0)//Position - 0xB6A2
{
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA7B0253B80B52B2B(iParam0) == 0f)
	{
		if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xB6579D6FEB63269C(iParam0, 0, 40000) || unk_0xB6579D6FEB63269C(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_299(int iParam0, int iParam1, bool bParam2)//Position - 0xB6FD
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_65(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_65(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_300(int iParam0, var uParam1)//Position - 0xB767
{
	uParam1 = uParam1;
	func_349(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_301(var uParam0)//Position - 0xB780
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_3))
	{
		if ((unk_0x3AB6A1A9084FB0A4(uParam0->f_3) || unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0)) || unk_0x6B4C37F2EEC636CC(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_302()//Position - 0xB7C0
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_303()//Position - 0xB998
{
	if (!unk_0x9A0B2ED5055D3F0B(iLocal_253))
	{
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_304(&iLocal_263, 0))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

int func_304(int iParam0, bool bParam1)//Position - 0xB9DE
{
	if (!unk_0x9A0B2ED5055D3F0B(func_18()))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x3A801AA34DD821BE("gestures@m@standing@casual"))
		{
			func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@taxi@"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@towingcome_here"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("misscommon@response"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_305(int iParam0, int iParam1)//Position - 0xBA97
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_306(var uParam0)//Position - 0xBCB6
{
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		uParam0->f_8 = func_208(uParam0->f_3, 0, 0);
		unk_0x7E13A81F45F87FE6(1, 0f);
		unk_0xAAAC88CC20771601(uParam0->f_8, true);
		unk_0x62BD54E491535B76(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x60C06BFD037BB7CF(uParam0->f_3, unk_0xFC1458A37D98B502(), -1, 2048, 4);
	}
	return 1;
}

int func_307(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xBD05
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0->f_3))
	{
		func_308(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_36(uParam0->f_14, 0);
		unk_0x60225D4F755DFDB1(uParam0->f_14, 2f, 0);
		func_245(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = unk_0xD57E527F9E639EE9(uParam0->f_11);
		}
		else if (unk_0x6ADD12BF4D6D2587(Global_103265.f_225[0]))
		{
			uParam0->f_3 = Global_103265.f_225[0];
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xAC992EFAD62C33BF(26, iParam4, uParam0->f_11, fParam5, 1, true);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		unk_0x350CEE66BDF90273(uParam0->f_3, sParam3);
		unk_0x2217C45231E6A537(uParam0->f_3, 112, true);
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			unk_0xCFB385D0FF082808(uParam0->f_3, 250);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 32, false);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 104, true);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 177, true);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 116, false);
			unk_0x4DE114E3C7F8B7C2("TAXI_Passenger", &(uParam0->f_413));
			unk_0xF96119FCCD4D1889(1, uParam0->f_413, 1862763509);
			unk_0xF96119FCCD4D1889(2, uParam0->f_413, -1533126372);
			unk_0xCE93FCB8A8D8DF0B(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_308(var uParam0, vector3 vParam1)//Position - 0xBE5A
{
	uParam0->f_51[0] = unk_0x2B13C26E09C949E3(vParam1, 20f, 5f, 0);
}

void func_309(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xBE78
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_105(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_104(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_105(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_104(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_310()//Position - 0xBEEA
{
	unk_0x6FF834D85E2DD4C6(iLocal_253);
	func_312(0);
	uLocal_405 = func_311();
	unk_0x6450931B826B49D9("gestures@m@standing@casual");
}

int func_311()//Position - 0xBF0D
{
	return unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
}

void func_312(bool bParam0)//Position - 0xBF1D
{
	unk_0x6FF834D85E2DD4C6(func_18());
	if (bParam0)
	{
		unk_0x6450931B826B49D9("gestures@m@standing@casual");
	}
	unk_0x6450931B826B49D9("oddjobs@taxi@");
	unk_0x6450931B826B49D9("oddjobs@towingcome_here");
	unk_0x6450931B826B49D9("misscommon@response");
	unk_0xBCBC53983EC3B1BA("TAXI", 2);
	if (!func_21(Global_104555.f_19067, 128))
	{
		func_64(&(Global_104555.f_19067), 128);
	}
}

void func_313(var uParam0, int iParam1, bool bParam2)//Position - 0xBF79
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_248(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_248(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_309(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_248(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_248(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_309(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!func_205())
			{
				if (uParam0->f_112)
				{
					func_248(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_248(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_309(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_13(&(Local_162[5 /*10*/].f_6)))
		{
			func_112(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_336(uParam0))
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_335(uParam0, 1);
				func_333(5, uParam0);
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_13(&(Local_162[0 /*10*/].f_6)))
		{
			func_112(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_331(uParam0))
			{
				func_335(uParam0, 1);
				func_333(0, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_13(&(Local_162[1 /*10*/].f_6)))
		{
			func_112(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_335(uParam0, 1);
				func_333(1, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xDE523AF6F7B269AB(uParam0->f_4);
				func_112(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_102(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_329(uParam0))
			{
				func_335(uParam0, 1);
				func_333(8, uParam0);
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_13(&(Local_162[6 /*10*/].f_6)))
		{
			func_112(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_328(uParam0))
			{
				func_335(uParam0, 1);
				func_333(6, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_13(&(Local_162[4 /*10*/].f_6)))
		{
			func_112(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_327(uParam0))
			{
				func_335(uParam0, 1);
				func_333(4, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_13(&(Local_162[7 /*10*/].f_6)))
		{
			func_112(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_326(uParam0))
			{
				func_333(7, uParam0);
				func_335(uParam0, 1);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_13(&(Local_162[9 /*10*/].f_6)))
		{
			func_112(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
		}
		else if (func_102(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_325(uParam0))
			{
				func_335(uParam0, 1);
				func_333(9, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_13(&(Local_162[13 /*10*/].f_6)))
		{
			func_112(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_319(uParam0))
			{
				func_335(uParam0, 1);
				func_333(13, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_6)))
		{
			func_112(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_318(uParam0))
			{
				func_335(uParam0, 1);
				func_333(14, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_13(&(Local_162[11 /*10*/].f_6)))
		{
			func_112(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_317(uParam0))
			{
				func_335(uParam0, 1);
				func_333(11, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_13(&(Local_162[12 /*10*/].f_6)))
		{
			func_112(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				func_335(uParam0, 1);
				func_333(12, uParam0);
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_332(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_162[2 /*10*/].f_6)))
		{
			func_315(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_102(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_314(uParam0))
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_335(uParam0, 1);
				func_333(2, uParam0);
				func_332(uParam0);
			}
		}
	}
}

int func_314(var uParam0)//Position - 0xC775
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_2))
	{
		if ((!unk_0xDE42C4904F29B0CE(uParam0->f_2) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_112(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_102(&(Local_162[2 /*10*/].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_101(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_101(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_315(int iParam0, float fParam1)//Position - 0xC858
{
	if (!func_13(iParam0))
	{
		func_105(iParam0, fParam1);
	}
}

int func_316(var uParam0)//Position - 0xC872
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[12 /*10*/].f_3)))
			{
				func_112(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_317(var uParam0)//Position - 0xC901
{
	vector3 vVar0;
	
	if ((((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 2,5f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[11 /*10*/].f_3)))
			{
				func_112(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_102(&(Local_162[11 /*10*/].f_3)) < 1,5f && (unk_0xE97272C977DEADD3(fLocal_164) - unk_0xE97272C977DEADD3(vVar0.x)) < 0f)
			{
				func_101(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_102(&(Local_162[11 /*10*/].f_3)) >= 1,5f)
			{
				func_101(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_318(var uParam0)//Position - 0xCA31
{
	if (((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_5))
			{
				if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f && func_48(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x191BE1BC8F26F3C1(uParam0->f_5, 0) && !unk_0x8EE3A848975DDF21(uParam0->f_5, -1, 0)))
				{
					func_112(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_102(&(Local_162[14 /*10*/].f_3)) < 1,5f && func_48(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_102(&(Local_162[14 /*10*/].f_3)) >= 1,5f)
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_319(var uParam0)//Position - 0xCBB6
{
	if (((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_320(uParam0->f_4) && unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_162[13 /*10*/].f_3)))
			{
				func_112(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_320(int iParam0)//Position - 0xCC6D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(iParam0, 1), 1, &vVar0, 1, 3f, 0f);
	unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(iParam0, 1), 2, &vVar1, 1, 3f, 0f);
	unk_0x38C202C726A922A8(vVar0, -1, &vVar2);
	fVar9 = system::vmag(vVar2 - vVar0);
	vVar3 = { func_324((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_323(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_321(unk_0xB3328BA8976B416C(iParam0, 1), vVar5, vVar6, vVar7);
}

int func_321(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xCD56
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_324(vParam2 - vParam1) };
	vVar1 = { func_324(vParam3 - vParam1) };
	fVar2 = func_322(vParam0, vVar0);
	fVar3 = func_322(vParam1, vVar0);
	fVar4 = func_322(vParam2, vVar0);
	fVar5 = func_322(vParam0, vVar1);
	fVar6 = func_322(vParam1, vVar1);
	fVar7 = func_322(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_322(vector3 vParam0, vector3 vParam1)//Position - 0xCE3F
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_323(vector3 vParam0, int iParam1)//Position - 0xCE60
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_324(vector3 vParam0)//Position - 0xCEBE
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

int func_325(var uParam0)//Position - 0xCEFD
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == unk_0xFC1458A37D98B502())
		{
			if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(var uParam0)//Position - 0xCF32
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == unk_0xFC1458A37D98B502())
		{
			if (unk_0xF69AD934E7664A7C(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0x733545A84ECFD808(uParam0->f_4) <= -145f || unk_0x733545A84ECFD808(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0x733545A84ECFD808(uParam0->f_4) <= 35f && unk_0x733545A84ECFD808(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xCFC8
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0x9EF5C05553C17392(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[4 /*10*/].f_3)))
			{
				func_112(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_101(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_328(var uParam0)//Position - 0xD03A
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC55CD7A6DAE4D24F(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[6 /*10*/].f_3)))
			{
				func_112(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[6 /*10*/].f_3)) > 3,5f)
			{
				func_101(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_329(var uParam0)//Position - 0xD0B0
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x9A3C64A7BB4588B3(uParam0->f_4))
		{
			iVar0 = unk_0xDE523AF6F7B269AB(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x2B0DDE3D071497AD(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_248(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_248(uParam0, 72, 1, 0, 1);
				}
				func_101(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_330(var uParam0)//Position - 0xD131
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 3f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[1 /*10*/].f_3)))
			{
				func_112(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[1 /*10*/].f_3)) > 1,2f)
			{
				func_101(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_331(var uParam0)//Position - 0xD1BD
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x5E0BEAAD15B888F3(uParam0->f_4) && unk_0x0ACC2116170FA204(uParam0->f_4))
		{
			if (!func_13(&(Local_162[0 /*10*/].f_3)))
			{
				func_112(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[0 /*10*/].f_3)) > 0,7f)
			{
				func_101(&(Local_162[0 /*10*/].f_3));
				func_104(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_332(var uParam0)//Position - 0xD247
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_104(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_309(uParam0, 10, 0f, 1);
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
}

void func_333(int iParam0, var uParam1)//Position - 0xD28F
{
	Local_162[iParam0 /*10*/].f_1++;
	func_334(uParam1, iParam0);
	func_101(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_334(var uParam0, int iParam1)//Position - 0xD2C2
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_335(var uParam0, int iParam1)//Position - 0xD2D9
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_336(var uParam0)//Position - 0xD2EC
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x90D5DFB054818BA7(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_162[5 /*10*/].f_3)))
			{
				func_112(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[5 /*10*/].f_3)) > 3,5f)
			{
				func_101(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_337()//Position - 0xD363
{
	vector3 vVar0;
	
	func_138("UPDATE_FINAL_SCENE()", &iLocal_263, 1000);
	if ((Local_238.f_410 >= 28 && !iLocal_272) && ((unk_0xEBE499597C718EB8(Local_238.f_3, unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_257, unk_0xFC1458A37D98B502(), 1)) || unk_0xEBE499597C718EB8(Local_251.f_2, unk_0xFC1458A37D98B502(), 1)))
	{
		iLocal_272 = 1;
	}
	else if (!unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
	{
		if (unk_0xEBE499597C718EB8(Local_251.f_2, Local_238.f_3, 1) && iLocal_415 < 6)
		{
			iLocal_272 = 1;
		}
	}
	if (iLocal_415 >= 4)
	{
		if (func_227(Local_238.f_3, 1) < 3f && !iLocal_271)
		{
			if (!func_205())
			{
				func_340(&(Local_238.f_244), Local_238.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0x9627C22EF3C3F4D6(Local_238.f_3, unk_0xFC1458A37D98B502(), -1, 0);
				iLocal_267 = unk_0x53C562FD2B9E3AB0();
				iLocal_271 = 1;
			}
			else if (!iLocal_280)
			{
				func_146();
				iLocal_280 = 1;
			}
		}
	}
	switch (iLocal_415)
	{
		case 0:
			if ((!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0) && !unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
			{
				unk_0x4DE114E3C7F8B7C2("TAXI_Whore", &iLocal_260);
				iLocal_259 = unk_0x1479B36DFB6174A5(Local_238.f_3);
				unk_0xF96119FCCD4D1889(255, Local_251.f_30, iLocal_260);
				unk_0xF96119FCCD4D1889(255, Local_251.f_30, iLocal_259);
				unk_0xCE93FCB8A8D8DF0B(Local_251.f_2, Local_251.f_30);
				unk_0xCE93FCB8A8D8DF0B(iLocal_257, iLocal_260);
				unk_0x771A86309E0CA47B(Local_251.f_2, true);
				unk_0xAE6EBBBBD8B9FB30(Local_251.f_2, 17, true);
				unk_0xE01CE1EBCD7EE551(Local_251.f_2, 130, 0);
				unk_0xD1980BC8CFFBF0B9(Local_251.f_2, 1);
				unk_0xA37FFE314E45ED5D(Local_251.f_2, true);
				unk_0xB8E08BD5B184DF4E(Local_251.f_2);
				unk_0x771A86309E0CA47B(iLocal_257, true);
				unk_0xAE6EBBBBD8B9FB30(iLocal_257, 17, true);
				unk_0xE01CE1EBCD7EE551(iLocal_257, 130, 0);
				unk_0xD1980BC8CFFBF0B9(iLocal_257, 1);
				unk_0xA37FFE314E45ED5D(iLocal_257, true);
				unk_0xB8E08BD5B184DF4E(iLocal_257);
				iLocal_415 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0) && !unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_257, 0)) && !unk_0x191BE1BC8F26F3C1(Local_251.f_3, 0))
			{
				unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
				unk_0x6931076730A4AC5D(&iLocal_232);
				unk_0xAC838A977FB6E6BC(0, iLocal_257, 0);
				unk_0x12C9D41D52A560D6(0, &cLocal_312, "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, &cLocal_321, "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_232);
				unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_233);
				unk_0x6931076730A4AC5D(&iLocal_233);
				unk_0xAC838A977FB6E6BC(0, Local_251.f_2, 0);
				unk_0x12C9D41D52A560D6(0, &cLocal_330, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_233);
				unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_233);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_233);
				iLocal_415 = 2;
			}
			break;
		
		case 2:
			if (iLocal_273)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_257, 0) && !unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
				{
					unk_0xCE93FCB8A8D8DF0B(Local_238.f_3, iLocal_259);
					unk_0x771A86309E0CA47B(Local_238.f_3, true);
					unk_0xAE6EBBBBD8B9FB30(Local_238.f_3, 13, true);
					unk_0xEA4C3AEAE49593B4(Local_238.f_3, 100);
					unk_0xBB3CC641B6AED5E5(Local_238.f_3, 100);
					unk_0xE01CE1EBCD7EE551(Local_238.f_3, 105, 0);
					unk_0xB8E08BD5B184DF4E(Local_238.f_3);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_234);
					unk_0x6931076730A4AC5D(&iLocal_234);
					unk_0x270054D97CD161A8(0, 5000);
					func_339(&Local_238, -691,48f, -1113,31f, 13,53f);
					unk_0x28D62AF360997F32(0, func_338(iLocal_231), iLocal_257, 3f, true, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
					unk_0xDF28F1574E61F9EA(0, iLocal_257, -1, -957453492);
					unk_0x1B16DD5C115FE009(iLocal_234);
					unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_234);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_234);
					iLocal_269 = 1;
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
					unk_0x9E058151726E58DE(Local_238.f_3, joaat("weapon_pistol"), 100, true, true);
					iLocal_415 = 3;
				}
			}
			else if (!iLocal_276)
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_251.f_2) && !unk_0x3AB6A1A9084FB0A4(iLocal_257))
				{
					if (func_227(Local_251.f_2, 1) < 2f || func_227(iLocal_257, 1) < 2f)
					{
						unk_0xB8E08BD5B184DF4E(Local_251.f_2);
						unk_0xB8E08BD5B184DF4E(iLocal_257);
						unk_0x60C06BFD037BB7CF(Local_251.f_2, unk_0xFC1458A37D98B502(), -1, 2048, 4);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
						unk_0x6931076730A4AC5D(&iLocal_232);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						unk_0x1B16DD5C115FE009(iLocal_232);
						unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
						unk_0x60C06BFD037BB7CF(iLocal_257, unk_0xFC1458A37D98B502(), -1, 2048, 4);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_233);
						unk_0x6931076730A4AC5D(&iLocal_233);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						unk_0x1B16DD5C115FE009(iLocal_233);
						unk_0xAB30B1CF01A198C1(iLocal_257, iLocal_233);
						iLocal_276 = 1;
					}
				}
				else
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_251.f_2))
					{
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(Local_251.f_2);
						unk_0xD68E88A8E0BE8697(Local_251.f_2, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					}
					if (unk_0x3AB6A1A9084FB0A4(iLocal_257))
					{
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_257);
						unk_0xD68E88A8E0BE8697(iLocal_257, unk_0xFC1458A37D98B502(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_138("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_263, 1000);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
			{
				if (unk_0x78F50AA8F955BEFC(Local_238.f_3, 242628503) == 1)
				{
					if (unk_0x2332DC2174507412(Local_238.f_3) > 0 && iLocal_269)
					{
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						iLocal_269 = 0;
					}
				}
			}
			else
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
			if (((!unk_0x3AB6A1A9084FB0A4(iLocal_257) && unk_0x9479D23F28CA059C(iLocal_257)) && !unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0)) && !bLocal_275)
			{
				unk_0x60C06BFD037BB7CF(Local_251.f_2, Local_238.f_3, -1, 2048, 4);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_232);
				unk_0x6931076730A4AC5D(&iLocal_232);
				unk_0x270054D97CD161A8(0, 500);
				unk_0x12C9D41D52A560D6(0, "MOVE_DUCK_FOR_COVER", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xAC838A977FB6E6BC(0, Local_238.f_3, 0);
				unk_0x1B16DD5C115FE009(iLocal_232);
				unk_0xAB30B1CF01A198C1(Local_251.f_2, iLocal_232);
				bLocal_275 = true;
			}
			if (!unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0) && !unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
			{
				if (unk_0x2332DC2174507412(Local_238.f_3) > 2)
				{
					func_248(&Local_238, 58, 1, 0, 0);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_234);
					unk_0x6931076730A4AC5D(&iLocal_234);
					unk_0xCB3D88C918AA637C(0);
					unk_0x9627C22EF3C3F4D6(0, Local_251.f_2, 2000, 0);
					unk_0x1B16DD5C115FE009(iLocal_234);
					unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_234);
					iLocal_415 = 4;
				}
			}
			break;
		
		case 4:
			func_138("FINAL_SCENE_KILL_WOMAN", &iLocal_263, 1000);
			if (unk_0x191BE1BC8F26F3C1(iLocal_257, 0))
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
					{
						unk_0xFAA3EF7FF92E1F9E(&iLocal_233);
						unk_0x6931076730A4AC5D(&iLocal_233);
						unk_0x28D62AF360997F32(0, -691,48f, -1113,31f, 13,53f, Local_251.f_2, 1f, false, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
						unk_0x9627C22EF3C3F4D6(0, Local_251.f_2, -1, 1);
						unk_0x1B16DD5C115FE009(iLocal_233);
						unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_233);
					}
				}
				iLocal_415 = 6;
			}
			break;
		
		case 6:
			func_138("FINAL_SCENE_KILL_MAN", &iLocal_263, 1000);
			if (!func_205())
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0) && !unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0))
				{
					unk_0xDF28F1574E61F9EA(Local_238.f_3, Local_251.f_2, -1, -957453492);
					iLocal_415 = 7;
				}
			}
			break;
		
		case 7:
			func_138("FINAL_SCENE_FLEE", &iLocal_263, 1000);
			if (unk_0x191BE1BC8F26F3C1(Local_251.f_2, 0) && !unk_0x191BE1BC8F26F3C1(Local_238.f_3, 0))
			{
				vVar0 = { unk_0xB3328BA8976B416C(Local_251.f_2, 0) };
				unk_0x6931076730A4AC5D(&iLocal_234);
				unk_0xCDACC23C56C1F7F5(0, vVar0, 1000, 0, 0);
				unk_0xF1794430C256DBC0(0, 0);
				unk_0x270054D97CD161A8(0, 500);
				unk_0xFC5999E8B820470E(0, -691,48f, -1113,31f, 13,53f, 1000f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_234);
				unk_0xAB30B1CF01A198C1(Local_238.f_3, iLocal_234);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_234);
				unk_0xE9B3D12A64CC7C1A(Local_238.f_3, true);
				iLocal_272 = 1;
			}
			break;
	}
}

Vector3 func_338(int iParam0)//Position - 0xDBDD
{
	switch (iParam0)
	{
		case 0:
			return -691,48f, -1113,31f, 13,53f;
		
		case 1:
			return -691,48f, -1113,31f, 13,53f;
		
		default:
	}
	return -691,48f, -1113,31f, 13,53f;
}

void func_339(var uParam0, vector3 vParam1)//Position - 0xDC2B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			vVar0 = { unk_0x3F90543934DCD7E6(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (unk_0xBE3C4023003180FC(vVar0, vParam1, false) < unk_0xBE3C4023003180FC(vVar1, vParam1, false) && unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x4F8A35D7CBC17327(0, uParam0->f_4, 131584);
			}
			else if (unk_0xBE3C4023003180FC(vVar0, vParam1, false) >= unk_0xBE3C4023003180FC(vVar1, vParam1, false) && unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x4F8A35D7CBC17327(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x4F8A35D7CBC17327(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_340(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDD12
{
	func_348(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_341(sParam2, iParam3, 0);
}

int func_341(char* sParam0, int iParam1, bool bParam2)//Position - 0xDD60
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
					func_147();
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
		if (func_347(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_346();
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
				func_345();
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
				if (func_344())
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
			if (func_30())
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
			func_343();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_342();
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
		func_147();
	}
	return 0;
}

void func_342()//Position - 0xE02C
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

void func_343()//Position - 0xE05E
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

int func_344()//Position - 0xE0F3
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

void func_345()//Position - 0xE18C
{
	if (func_79(14))
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
		Global_14453 = func_98();
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

void func_346()//Position - 0xE22E
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

bool func_347(int iParam0, int iParam1)//Position - 0xE286
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE2C1
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

void func_349(int iParam0, char* sParam1, int iParam2)//Position - 0xE317
{
	vector3 vVar0;
	
	func_146();
	func_450(2);
	vVar0 = { func_356() };
	if ((!unk_0xAB019B170BF1309C(&vVar0) && func_205()) && !unk_0x74C475EB8E73D398(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x84CDD933AFA470D2();
		unk_0x3E80C2F7BC665259(1);
		StringCopy(&vVar0, iParam0->f_143, 24);
		if (!unk_0x191BE1BC8F26F3C1(iParam0->f_3, 0))
		{
			if (!func_217(iParam0))
			{
				if (unk_0xA5F6598E13F98E08(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x7976C9958C60E354(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0xA5F6598E13F98E08(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x7976C9958C60E354(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0xA5F6598E13F98E08(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x7976C9958C60E354(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_309(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_354(iParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_217(iParam0))
			{
				if (unk_0x9EC5112BB1C4047A(iParam0->f_4))
				{
					func_351(iParam0, 4096, 0);
				}
				else
				{
					func_351(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_354(iParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_354(iParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_354(iParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_354(iParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_351(iParam0, 0, 0);
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_354(iParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_354(iParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_350(&vVar0);
			func_340(&(iParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_354(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_354(iParam0, &vVar0);
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iParam0->f_3))
			{
				func_268(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_309(iParam0, 3, 0f, 1);
	}
}

void func_350(char* sParam0)//Position - 0xE8C8
{
	switch (func_3(unk_0xFC1458A37D98B502()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_351(var uParam0, int iParam1, bool bParam2)//Position - 0xE91B
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		unk_0x771A86309E0CA47B(uParam0->f_3, false);
		unk_0x2B0DDE3D071497AD(uParam0->f_3);
		unk_0xE17958D3FD0F9EE9(uParam0->f_3, 3, false);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_3, 17, true);
		unk_0xB8E08BD5B184DF4E(uParam0->f_3);
		if ((func_50(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_353(uParam0->f_29)) && !bParam2)
		{
			func_352(uParam0);
		}
		else
		{
			unk_0xE17958D3FD0F9EE9(uParam0->f_3, 1024, true);
			unk_0xE17958D3FD0F9EE9(uParam0->f_3, 131072, true);
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0x16416C5B54FDBCBB(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x93F12E7D8D931858(0, 1193033728, 0);
			}
			else
			{
				unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
			}
			unk_0xD40A6DFCC31D221A(0, 0);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(uParam0->f_3, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
		}
		unk_0xE9B3D12A64CC7C1A(uParam0->f_3, true);
	}
}

void func_352(var uParam0)//Position - 0xEA0F
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x48ED7B2293A96722(uParam0->f_3, 84,9058f);
				unk_0xE9B3D12A64CC7C1A(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x48ED7B2293A96722(uParam0->f_3, 68,3138f);
				unk_0xE9B3D12A64CC7C1A(uParam0->f_3, true);
			}
			else
			{
				unk_0x93F12E7D8D931858(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xB8E08BD5B184DF4E(uParam0->f_3);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0x16416C5B54FDBCBB(0, 0, 0);
			unk_0xD40A6DFCC31D221A(0, 0);
			unk_0x380C1E7B7740D618(0, uParam0->f_29, 1f, -1, 0,25f, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0xBD588CC5CE78400E(0, 1);
				unk_0x380C1E7B7740D618(0, 813,9421f, 1172,681f, 329,7988f, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x2DAC3448B66448E8(0, 151,7794f, 0);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xADD2E58C002FD698(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xADD2E58C002FD698(0, uParam0->f_29, 15f, 20000);
				unk_0x93F12E7D8D931858(0, 1193033728, 0);
			}
			else
			{
				unk_0x12C9D41D52A560D6(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xD8F3F5A5912D9487(uParam0->f_29, 15f, 1))
			{
				unk_0xADD2E58C002FD698(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x93F12E7D8D931858(0, 1193033728, 0);
			}
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(uParam0->f_3, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
		}
		unk_0xE9B3D12A64CC7C1A(uParam0->f_3, true);
	}
}

int func_353(vector3 vParam0)//Position - 0xEBF6
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_354(var uParam0, char* sParam1)//Position - 0xEC20
{
	if (func_355(uParam0))
	{
		func_340(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_355(var uParam0)//Position - 0xEC48
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_48(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 40f && !unk_0xEC211A86AB3726B6(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_356()//Position - 0xEC86
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar1 = unk_0xA2F80D03C2F3570D();
		iVar1 = (iVar1 + Global_16766);
		if (iVar1 > -1)
		{
			return Global_14624[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_357(var uParam0)//Position - 0xECCC
{
	return uParam0->f_118;
}

void func_358()//Position - 0xECD8
{
	func_388(&Local_238);
	if (func_387(&Local_238, &Local_352))
	{
		switch (Local_352.f_27)
		{
			case 0:
				if (Local_238.f_410 == 17)
				{
					if (!func_386(&Local_238))
					{
						if (func_385("TAXI_OBJ_FTC1") || unk_0xA6DECE14FC9A8C51(Local_238.f_9))
						{
							Local_352.f_27++;
						}
						else if (func_192(&Local_238) != 10)
						{
							func_248(&Local_238, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_192(&Local_238) > 10 && func_192(&Local_238) != 15) && !func_386(&Local_238))
				{
					func_248(&Local_238, 15, 1, 0, 0);
					func_198(&Local_238, 7);
				}
				break;
			}
	}
	func_359(&Local_238, &uLocal_355, &Local_352, bLocal_351);
}

int func_359(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xEDB5
{
	func_367(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_183(uParam0, 2))
	{
		if (func_366(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x53C562FD2B9E3AB0() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_365(uParam0))
				{
					uParam2->f_7 = { func_364(uParam1) };
					func_340(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_205())
				{
					uParam2->f_13 = { func_251() };
					if (unk_0x74C475EB8E73D398(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_65(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_221(uParam0))
				{
					if (func_205())
					{
						func_309(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_361() };
						if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_205())
				{
					uParam2->f_19 = { func_356() };
				}
				else
				{
					func_65(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_183(uParam0, 14) && !func_205()) && !func_221(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					func_309(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_205())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!unk_0xAB019B170BF1309C(&(uParam2->f_1)))
						{
							func_360(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_205())
				{
					func_65(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_362(uParam1);
					func_309(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_360(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF055
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_341(sParam2, iParam4, 0);
}

struct<6> func_361()//Position - 0xF0A9
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

void func_362(var uParam0)//Position - 0xF155
{
	int iVar0;
	
	iVar0 = func_363(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_64(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
	}
}

int func_363(var uParam0)//Position - 0xF19F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_364(var uParam0)//Position - 0xF1CF
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_64(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_365(var uParam0)//Position - 0xF216
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_223("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_223("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_223("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_223("TX_OBJ_GYB_DO", 0, 0) || func_223("TAXI_OBJ_GYB", 0, 0)) || func_223("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_223("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_223("TX_OBJ_CYI_DO", 0, 0) || func_223("TAXI_OBJ_CYI_01", 0, 0)) || func_223("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_223("TX_OBJ_GYN_DO", 0, 0) || func_223("TAXI_OBJ_GYN", 0, 0)) || func_223("TAXI_OBJ_GYN_TG", 0, 0)) || func_223("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_223("TAXI_OBJ_CC1", 0, 0) || func_223("TAXI_OBJ_CC2", 0, 0)) || func_223("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_223("TAXI_OBJ_FTC1", 0, 0) || func_223("TAXI_OBJ_FTC2", 0, 0)) || func_223("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_223("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_223("TAXI_OBJ_GETRUN", 0, 0) || func_223("TAXI_OBJ_DRIVE", 0, 0)) || func_223("TAXI_OBJ_RETURN", 0, 0)) || func_223("TAXI_OBJ_POL", 0, 0)) || func_223("TAXI_OBJ_RUNOUT", 0, 0)) || func_223("TAXI_OBJ_POL", 0, 0));
}

int func_366(var uParam0)//Position - 0xF436
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_367(var uParam0, var uParam1)//Position - 0xF465
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_365(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_183(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_192(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_382(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_205())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_381(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_378(uParam0, vVar0, func_380(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				func_232(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					func_233(1);
					if (uParam0->f_411 == 9)
					{
						func_272("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_272("TAXI_VIP_RETURN", 7500, 1);
					}
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_268(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > func_126(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_205()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_192(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_381(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_382(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_340(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_248(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_309(uParam0, 16, 0, 0);
				func_248(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_384(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_381(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_309(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_272("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_272("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_248(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_250(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_268(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_248(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_377(uParam0, 33554432, vVar0, "", 1, 8);
				func_309(uParam0, 16, 0, 0);
				func_248(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_205())
				{
					func_376(uParam0, 0);
					func_64(&(uParam0->f_44), 4);
					func_309(uParam0, 16, 0, 0);
					func_248(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_250(&vVar0);
					}
					func_374(vVar0, uParam1);
					func_64(&(uParam0->f_81), 67108864);
					func_309(uParam0, 16, 0, 0);
					func_309(uParam0, 11, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_250(&vVar0);
						}
					}
					func_374(vVar0, uParam1);
					func_309(uParam0, 11, 0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_250(&vVar0);
				}
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				func_64(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_373(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_373(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_374(vVar0, uParam1);
				func_382(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 6, 0f, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_373(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_373(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_374(vVar0, uParam1);
				func_382(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 6, 0f, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 12:
				func_272("TAXI_OBJ_GYB", 3500, 1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_272("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_272("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_272("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_272("TAXI_OBJ_CYI_01", 7500, 1);
					func_64(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 33:
				func_272("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_250(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_374(vVar0, uParam1);
						}
						else
						{
							func_381(uParam0, &vVar0, 0, 0, 8);
						}
						func_64(&(uParam0->f_82), 8192);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_250(&vVar0);
					func_381(uParam0, &vVar0, 0, 0, 8);
					func_64(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_250(&vVar0);
					func_381(uParam0, &vVar0, 0, 0, 8);
					func_64(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_273(uParam0, 0, 0);
				break;
			
			case 139:
				func_272("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_248(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 120);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_64(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 100);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_64(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_272("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_273(uParam0, 0, 0);
				func_248(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_205())
				{
					func_272("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_273(uParam0, 0, 0);
					func_248(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_272("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_273(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_372(uParam0, 1, vVar0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_372(uParam0, 2, vVar0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_382(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_21(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_21(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_64(&(uParam0->f_81), 2097152);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_309(uParam0, 16, 0, 0);
				func_382(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_382(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_382(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_382(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_372(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_372(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_372(uParam0, 8, vVar0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_382(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_371(uParam0))
				{
					func_378(uParam0, vVar0, func_380(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_268(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_384(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_340(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_384(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_384(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_382(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_309(uParam0, 16, 0, 0);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_250(&vVar0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_250(&vVar0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_250(&vVar0);
					}
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_309(uParam0, 16, 0, 0);
				}
				func_382(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_377(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_377(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_382(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_377(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_377(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_382(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_370(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_370(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_370(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_273(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_384(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_382(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_382(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_377(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_377(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_371(uParam0))
				{
					func_378(uParam0, vVar0, func_380(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_268(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_309(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_309(uParam0, 16, 0, 0);
				}
				func_382(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_205())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_381(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_378(uParam0, vVar0, func_380(uParam0, 65));
					func_273(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_205())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_381(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_378(uParam0, vVar0, func_380(uParam0, 66));
					func_273(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_205())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								func_382(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								func_382(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_384(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_382(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_309(uParam0, 16, 0, 0);
								func_273(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_381(uParam0, &vVar0, 0, 0, 8);
									func_309(uParam0, 16, 0, 0);
									func_309(uParam0, 11, 0, 0);
									func_273(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_250(&vVar0);
									func_381(uParam0, &vVar0, 0, 0, 8);
									func_309(uParam0, 16, 0, 0);
									func_309(uParam0, 11, 0, 0);
									func_273(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_381(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_248(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_382(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_370(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_370(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_370(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_268(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_309(uParam0, 16, 0, 0);
				func_382(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_371(uParam0))
				{
					func_378(uParam0, vVar0, func_380(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_268(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_369(uParam0, vVar0, 8);
				}
				func_382(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_64(&(uParam0->f_83), 1024);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_64(&(uParam0->f_83), 2048);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_64(&(uParam0->f_83), 4096);
					func_309(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_250(&vVar0);
					func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_370(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_370(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_382(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_268(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_371(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_381(uParam0, &vVar0, 0, 0, 8);
						func_248(uParam0, 52, 1, 0, 0);
						func_309(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_381(uParam0, &vVar0, 0, 0, 8);
						func_309(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_384(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_309(uParam0, 16, 0, 0);
					func_273(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_382(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_309(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					func_272("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_377(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_377(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_377(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_382(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_368(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_368(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_382(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 100:
				func_272("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_273(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_250(&vVar0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_250(&vVar0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_250(&vVar0);
				}
				func_64(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_250(&vVar0);
						func_374(vVar0, uParam1);
						func_64(&(uParam0->f_82), 65536);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_250(&vVar0);
						func_374(vVar0, uParam1);
						func_64(&(uParam0->f_82), 131072);
						func_309(uParam0, 16, 0, 0);
						func_309(uParam0, 11, 0, 0);
						func_273(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_64(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_64(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_64(&(uParam0->f_82), 33554432);
				}
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_384(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_250(&vVar0);
					func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_381(uParam0, &vVar0, 0, 0, 8);
				}
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_374(vVar0, uParam1);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_384(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_383(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_248(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_64(&(uParam0->f_81), 2097152);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_250(&vVar0);
				func_374(vVar0, uParam1);
				func_64(&(uParam0->f_81), 67108864);
				func_309(uParam0, 16, 0, 0);
				func_309(uParam0, 11, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_377(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_268(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_248(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_377(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_248(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_272("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_273(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_377(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
						{
							func_268(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_377(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_248(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_272("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_273(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_340(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_309(uParam0, 16, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_377(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_273(uParam0, 0, 0);
				break;
			
			case 88:
				func_272("TAXI_TIEFLEE", 7500, 1);
				func_273(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_272("TAXI_OBJ_CYI_1B", 7500, 1);
					func_64(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_273(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_250(&vVar0);
				func_381(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_273(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_273(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_381(uParam0, &vVar0, 0, 0, 8);
				func_273(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_381(uParam0, &vVar0, 1, 0, 8);
				func_248(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_272("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_248(uParam0, 0, 0, 0, 0);
				func_273(uParam0, 0, 0);
				break;
			}
	}
}

void func_368(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x12723
{
	func_64(&(uParam0->f_82), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_250(&vParam2);
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_369(var uParam0, struct<6> Param1, int iParam2)//Position - 0x12764
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_64(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_64(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x63A6486593EC7EC3(1, 3), 24);
	}
	func_383(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_309(uParam0, 16, 0, 0);
}

void func_370(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x127EB
{
	func_64(&(uParam0->f_82), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_250(&vParam2);
		}
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_371(var uParam0)//Position - 0x1286B
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_372(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x128D1
{
	func_64(&(uParam0->f_81), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_340(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_373(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x12907
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_250(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_374(char[24] cParam0, var uParam1)//Position - 0x12988
{
	int iVar0;
	
	iVar0 = func_375(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_64(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_375(var uParam0)//Position - 0x129B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xAB019B170BF1309C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_376(var uParam0, bool bParam1)//Position - 0x129E4
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_272("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_272("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_272("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_272("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_272("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_272("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_272("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_272("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_272("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_272("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_272("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_272("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_272("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_377(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x12B9B
{
	func_64(&(uParam0->f_81), iParam1);
	func_309(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_250(&vParam2);
	}
	func_340(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_378(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x12BDC
{
	func_309(uParam0, 16, 0, 0);
	func_309(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		unk_0x4DB5F099DE92D53F(uParam0->f_3, &cParam1, func_379(uParam0));
	}
}

char* func_379(var uParam0)//Position - 0x12C1A
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_380(var uParam0, int iParam1)//Position - 0x12CB5
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_381(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1305E
{
	func_309(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_309(uParam0, 17, 0f, 1);
	}
	func_273(uParam0, iParam2, 0);
	return func_340(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_382(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x1309B
{
	if (iParam0 == 0)
	{
		if (func_21(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_21(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_21(*uParam2, 4))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_21(*uParam2, 512))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_21(*uParam2, 16))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_21(*uParam2, 64))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_21(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_21(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_21(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_21(*uParam2, 8192))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_21(*uParam2, 16384))
		{
			if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_21(*uParam2, 32768))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_21(*uParam2, 65536))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_21(*uParam2, 131072))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_21(*uParam2, 262144))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_21(*uParam2, 524288))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_21(*uParam2, 1048576))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_21(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_21(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_21(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_21(*uParam2, 67108864))
		{
			if (func_21(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_21(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_21(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_21(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_21(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_383(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x136A5
{
	func_348(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_341(sParam2, iParam4, 0);
}

void func_384(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x136F9
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_250(sParam2);
				}
				else
				{
					func_250(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_385(char* sParam0)//Position - 0x13790
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (func_223(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(var uParam0)//Position - 0x137B2
{
	if (func_205())
	{
		return 1;
	}
	if (func_183(uParam0, 17))
	{
		return 1;
	}
	if (func_183(uParam0, 14))
	{
		return 1;
	}
	if (func_221(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_387(var uParam0, var uParam1)//Position - 0x137F1
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_183(uParam0, 9));
}

void func_388(var uParam0)//Position - 0x13818
{
	if (func_183(uParam0, 17))
	{
		if (!func_183(uParam0, 14))
		{
			if (!func_221(uParam0))
			{
				if (!func_205())
				{
					func_202(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_389(var uParam0)//Position - 0x13852
{
	return uParam0->f_117;
}

void func_390(var uParam0, var uParam1, bool bParam2)//Position - 0x1385E
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xAB019B170BF1309C(&(uParam0->f_124)) && func_205())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_205())
				{
					StringCopy(&(uParam0->f_124), func_143(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_391(var uParam0)//Position - 0x138E4
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_289(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_289(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_289(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_65(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else
						{
							func_20(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_289(Local_165.f_1[iVar0 /*4*/], 4) && !func_289(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_65(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_349(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_392(var uParam0, var uParam1)//Position - 0x139F7
{
	var uVar0;
	
	if (!func_183(uParam0, 27))
	{
		func_198(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_111(uParam0, 27) > 5f)
	{
		if (func_419(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_309(uParam0, 27, 0, 0);
			func_309(uParam0, 10, 0, 0);
			func_417(uParam0, &uVar0, uParam1);
		}
		func_414(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_393(uParam0);
	}
	if ((((!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) && (unk_0x8EA3C8E091EA5BA4(*uParam0) && !unk_0xD85097DDDA5447BE(*uParam0))) && (unk_0x8EA3C8E091EA5BA4(uParam0->f_1) && !unk_0xD85097DDDA5447BE(uParam0->f_1))) && !unk_0x23F2F89E3D1CB7C4()) && !func_205())
	{
		if (func_111(uParam0, 26) > 10f)
		{
			func_202(uParam0, 26, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
	}
	else if (func_183(uParam0, 26))
	{
		func_202(uParam0, 26, 0);
	}
	return 0;
}

void func_393(var uParam0)//Position - 0x13B21
{
	if (!func_413(uParam0->f_429))
	{
		uParam0->f_429 = func_412();
		func_403(&(uParam0->f_429), 0, 0, unk_0x63A6486593EC7EC3(4, 7), 0, 0, 0);
	}
	else if (func_394(uParam0->f_429))
	{
		func_349(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_394(int iParam0)//Position - 0x13B6E
{
	return func_395(func_412(), iParam0);
}

int func_395(int iParam0, int iParam1)//Position - 0x13B80
{
	int iVar0;
	int iVar1;
	
	if (!func_413(iParam1) || !func_413(iParam0))
	{
		return 1;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_400(iParam0);
	iVar1 = func_400(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	iVar1 = func_399(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x13C8C
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_397(int iParam0)//Position - 0x13C9F
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_398(int iParam0)//Position - 0x13CB2
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_399(int iParam0)//Position - 0x13CC5
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_400(int iParam0)//Position - 0x13CD7
{
	return iParam0 & 15;
}

var func_401(int iParam0)//Position - 0x13CE4
{
	return (system::shift_right(iParam0, 26) & 31 * func_402(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_402(bool bParam0, int iParam1, int iParam2)//Position - 0x13D09
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13D20
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_401(*uParam0);
	iVar1 = func_400(*uParam0);
	iVar2 = func_399(*uParam0);
	iVar3 = func_398(*uParam0);
	iVar4 = func_397(*uParam0);
	iVar5 = func_396(*uParam0);
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
	iVar6 = func_411(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_411(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_404(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_404(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13EA2
{
	func_410(uParam0, iParam1);
	func_409(uParam0, iParam2);
	func_408(uParam0, iParam3);
	func_407(uParam0, iParam5);
	func_406(uParam0, iParam4);
	func_405(uParam0, iParam6);
}

void func_405(var uParam0, int iParam1)//Position - 0x13EDA
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

void func_406(var uParam0, int iParam1)//Position - 0x13F60
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_400(*uParam0);
	iVar1 = func_401(*uParam0);
	if (iParam1 < 1 || iParam1 > func_411(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_407(var uParam0, int iParam1)//Position - 0x13FB1
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_408(var uParam0, int iParam1)//Position - 0x13FE4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_409(var uParam0, int iParam1)//Position - 0x14020
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_410(var uParam0, int iParam1)//Position - 0x1405B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_411(int iParam0, int iParam1)//Position - 0x14097
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

int func_412()//Position - 0x14139
{
	var uVar0;
	
	func_410(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_409(&uVar0, unk_0x95327550F0F2BE7C());
	func_408(&uVar0, unk_0x674C9438180770FE());
	func_406(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_407(&uVar0, unk_0xEAF455949B108589());
	func_405(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

int func_413(int iParam0)//Position - 0x1417F
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
	iVar0 = func_396(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_397(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_398(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_401(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_400(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_399(iParam0);
	if (iVar5 < 1 || iVar5 > func_411(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_414(var uParam0)//Position - 0x1425B
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_416()) && !func_201(uParam0)) || ((uParam0->f_411 != 9 && func_277(uParam0, 1)) && !func_201(uParam0)))
		{
			uVar0 = func_415(uParam0->f_4);
			unk_0x83E70C4C5D45C754(&uVar0);
			uParam0->f_4 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_4, true, 0);
			func_236(uParam0);
			func_228(uParam0, 0);
		}
	}
}

var func_415(var uParam0)//Position - 0x142F1
{
	return uParam0;
}

int func_416()//Position - 0x142FB
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
				{
					if (unk_0xB0DA749C8A7CCBBF(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_417(var uParam0, var uParam1, var uParam2)//Position - 0x14352
{
	switch (*uParam1)
	{
		case 1:
			if (func_418(uParam0, 0, 1))
			{
				func_349(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_418(uParam0, 0, 4))
			{
				func_349(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_418(uParam0, 0, 8))
			{
				func_349(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_418(uParam0, 1, 1))
			{
				func_349(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_418(uParam0, 0, 1))
			{
				func_349(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_217(uParam0))
			{
				func_349(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_418(var uParam0, int iParam1, int iParam2)//Position - 0x1442D
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (!unk_0xEC211A86AB3726B6(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_248(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_248(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_419(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x144AA
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_425(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_423(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_422(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_420(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_420(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (iParam7 && unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x145D4
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0xDE523AF6F7B269AB(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = unk_0xDE523AF6F7B269AB(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
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
			if (unk_0x0C88267282FD588F(iParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f, 10f, 10f, false, true, 0))
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
	if (func_421(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_227(iParam0, 1) < 1,5f)
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

int func_421(int iParam0, int iParam1)//Position - 0x1479C
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

int func_422(int iParam0, int iParam1, var uParam2)//Position - 0x147F1
{
	if (unk_0xC931425E2B416A2F(iParam0, 4))
	{
		if (unk_0x08765A6321A42CA1(iParam0) && !unk_0x9C8F5918B4DF54D8(iParam0))
		{
			if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1483F
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
			if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
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
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_424(iVar1))
			{
				if (unk_0x0C88267282FD588F(iParam1, unk_0xB3328BA8976B416C(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
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

int func_424(int iParam0)//Position - 0x149B8
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
						if (func_48(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
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

int func_425(int iParam0, var uParam1)//Position - 0x14A86
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_227(iParam0, 1) < uParam1->f_2)
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

void func_426(var uParam0)//Position - 0x14B0B
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (func_50(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x9B8406983378711E(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_64(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_427()//Position - 0x14B62
{
	func_428(&Local_238);
	func_450(2);
	func_446();
}

void func_428(var uParam0)//Position - 0x14B7A
{
	func_51(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_450(2);
	}
}

int func_429(var uParam0, bool bParam1)//Position - 0x14B99
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_205() && func_111(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_289(uParam0->f_85, 32))
					{
						if (!unk_0x9EC5112BB1C4047A(uParam0->f_4))
						{
							func_351(uParam0, 4160, 0);
						}
						else
						{
							func_351(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_351(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_351(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_351(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
	{
	}
	return 0;
}

void func_430(var uParam0)//Position - 0x14C98
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_8));
	}
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_9));
	}
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_10))
	{
		unk_0xE30CF11C0EE14316(&(uParam0->f_10));
	}
}

int func_431(var uParam0)//Position - 0x14CD9
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_432()//Position - 0x14CFA
{
	func_435(&Local_238, 8);
	Local_238.f_410 = 0;
	func_434(&Local_238, 3, 6);
	Local_238.f_23 = { 1412,324f, -1518,315f, 58,4644f };
	Local_238.f_33 = 114,1f;
	Local_238.f_26 = { vLocal_286 };
	Local_238.f_34 = 95,93f;
	func_433(&Local_238, &Local_251);
	Local_251 = joaat("s_m_m_doctor_01");
	Local_251.f_1 = joaat("bison");
}

void func_433(var uParam0, var uParam1)//Position - 0x14D6D
{
	int iVar0;
	
	iVar0 = Global_104555.f_19067.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0,7f - (0,6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0,8f - (0,6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_434(var uParam0, int iParam1, int iParam2)//Position - 0x14DCB
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_435(var uParam0, int iParam1)//Position - 0x14DDF
{
	func_445(1);
	func_238();
	func_6(&(uParam0->f_244));
	func_444(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_104555.f_19067, 4))
	{
		func_64(&(Global_104555.f_19067), 4);
	}
	func_439(uParam0);
	func_437(uParam0);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	uParam0->f_102 = (func_436(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xBCBC53983EC3B1BA("TAXI", 2);
}

int func_436(int iParam0)//Position - 0x14E61
{
	return Global_104555.f_19067.f_39[iParam0];
}

void func_437(var uParam0)//Position - 0x14E76
{
	switch (func_63(uParam0))
	{
		case 0:
			func_438(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_438(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_438(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_438(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_438(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_438(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_438(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_438(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_438(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_438(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_438(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x14FC9
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_439(var uParam0)//Position - 0x14FE3
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_443(uParam0, 3);
			func_442(uParam0, 14);
			break;
		
		case 1:
			func_443(uParam0, 14);
			func_442(uParam0, 8);
			break;
		
		case 2:
			func_443(uParam0, 8);
			func_442(uParam0, 7);
			break;
		
		case 3:
			func_443(uParam0, 15);
			func_442(uParam0, 6);
			break;
		
		case 4:
			func_443(uParam0, 0);
			func_442(uParam0, 3);
			break;
		
		case 5:
			func_443(uParam0, 6);
			func_442(uParam0, 7);
			break;
		
		case 6:
			func_443(uParam0, 8);
			func_442(uParam0, 15);
			break;
		
		case 7:
			func_443(uParam0, 8);
			func_442(uParam0, 14);
			break;
		
		case 8:
			func_443(uParam0, 7);
			func_442(uParam0, 15);
			break;
		
		case 9:
			func_443(uParam0, unk_0x63A6486593EC7EC3(0, 17));
			iVar0 = func_441((uParam0->f_418.f_2 + unk_0x63A6486593EC7EC3(1, 17)), 0, 16);
			func_442(uParam0, iVar0);
			func_440(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_440(var uParam0)//Position - 0x1511A
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_441(int iParam0, int iParam1, int iParam2)//Position - 0x151DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_442(var uParam0, int iParam1)//Position - 0x1527D
{
	uParam0->f_418.f_1 = iParam1;
}

void func_443(var uParam0, int iParam1)//Position - 0x1528E
{
	uParam0->f_418.f_2 = iParam1;
}

void func_444(var uParam0)//Position - 0x1529F
{
	uParam0->f_2 = unk_0xFC1458A37D98B502();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_39() };
	uParam0->f_17 = { func_39() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_202(uParam0, 32, 0);
}

void func_445(bool bParam0)//Position - 0x152FD
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

void func_446()//Position - 0x15329
{
	unk_0x4C15495E88D71C61(vLocal_287, vLocal_288, true, 1);
	unk_0x4C15495E88D71C61(vLocal_293, vLocal_294, true, 1);
	func_135(vLocal_299, 60f, 0);
	func_135(vLocal_300, 60f, 0);
	unk_0xD581373770173F1F();
	unk_0xCA107A9AAF17E75F(iLocal_261, 0);
	unk_0x9EA1BA1DD45771B3(iLocal_260);
	unk_0x9EA1BA1DD45771B3(iLocal_259);
	unk_0xD22D83D359390CC6(&cLocal_309);
	func_245(385,1685f, -1372,719f, 29,8554f, 1, 50f);
	func_449();
	func_448();
	func_447();
	unk_0x2E4932E63763FE26(Local_251.f_1, false);
	func_152(&uLocal_45, 0, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_447()//Position - 0x153CB
{
	unk_0x14776E43F90DD454(iLocal_254);
	unk_0xFCCDDE0E48CF9588("MOVE_DUCK_FOR_COVER");
	unk_0xFCCDDE0E48CF9588(&cLocal_312);
	unk_0xFCCDDE0E48CF9588(&cLocal_321);
	unk_0xFCCDDE0E48CF9588(&cLocal_330);
	unk_0xFCCDDE0E48CF9588(&cLocal_339);
}

void func_448()//Position - 0x153FE
{
	unk_0x14776E43F90DD454(Local_251);
	unk_0x14776E43F90DD454(Local_251.f_1);
	unk_0x14776E43F90DD454(iLocal_255);
	unk_0x14776E43F90DD454(iLocal_256);
	unk_0xD22D83D359390CC6(&cLocal_309);
	unk_0xFCCDDE0E48CF9588("veh@truck@ds@base");
}

void func_449()//Position - 0x15433
{
	unk_0x14776E43F90DD454(iLocal_253);
	unk_0xFCCDDE0E48CF9588("gestures@m@standing@casual");
}

void func_450(int iParam0)//Position - 0x1544A
{
	Global_103265.f_22 = iParam0;
}

