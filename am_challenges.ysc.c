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
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	vector3 vLocal_106 = { 0f, 0f, 0f };
	vector3 vLocal_107[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_108 = 0f;
	vector3 vLocal_109 = { 0f, 0f, 0f };
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
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
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	vector3 vLocal_148[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_149[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<68> Local_157 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<533> Local_178 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_179 = -1;
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
	var uLocal_201 = -1082130432;
	var uLocal_202 = 3;
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
	var uLocal_218 = -1;
	var uLocal_219 = 0;
	var uLocal_220 = -1;
	var uLocal_221 = -1;
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
	var uLocal_243 = -1082130432;
	var uLocal_244 = 3;
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
	var uLocal_260 = -1;
	var uLocal_261 = 0;
	var uLocal_262 = -1;
	var uLocal_263 = -1;
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
	var uLocal_285 = -1082130432;
	var uLocal_286 = 3;
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
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = -1;
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
	var uLocal_327 = -1082130432;
	var uLocal_328 = 3;
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
	var uLocal_344 = -1;
	var uLocal_345 = 0;
	var uLocal_346 = -1;
	var uLocal_347 = -1;
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
	var uLocal_369 = -1082130432;
	var uLocal_370 = 3;
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
	var uLocal_386 = -1;
	var uLocal_387 = 0;
	var uLocal_388 = -1;
	var uLocal_389 = -1;
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
	var uLocal_411 = -1082130432;
	var uLocal_412 = 3;
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
	var uLocal_428 = -1;
	var uLocal_429 = 0;
	var uLocal_430 = -1;
	var uLocal_431 = -1;
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
	var uLocal_453 = -1082130432;
	var uLocal_454 = 3;
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
	var uLocal_470 = -1;
	var uLocal_471 = 0;
	var uLocal_472 = -1;
	var uLocal_473 = -1;
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
	var uLocal_495 = -1082130432;
	var uLocal_496 = 3;
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
	var uLocal_512 = -1;
	var uLocal_513 = 0;
	var uLocal_514 = -1;
	var uLocal_515 = -1;
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
	var uLocal_537 = -1082130432;
	var uLocal_538 = 3;
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
	var uLocal_554 = -1;
	var uLocal_555 = 0;
	var uLocal_556 = -1;
	var uLocal_557 = -1;
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
	var uLocal_579 = -1082130432;
	var uLocal_580 = 3;
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
	var uLocal_596 = -1;
	var uLocal_597 = 0;
	var uLocal_598 = -1;
	var uLocal_599 = -1;
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
	var uLocal_621 = -1082130432;
	var uLocal_622 = 3;
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
	var uLocal_638 = -1;
	var uLocal_639 = 0;
	var uLocal_640 = -1;
	var uLocal_641 = -1;
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
	var uLocal_663 = -1082130432;
	var uLocal_664 = 3;
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
	var uLocal_680 = -1;
	var uLocal_681 = 0;
	var uLocal_682 = -1;
	var uLocal_683 = -1;
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
	var uLocal_705 = -1082130432;
	var uLocal_706 = 3;
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
	var uLocal_722 = -1;
	var uLocal_723 = 0;
	var uLocal_724 = -1;
	var uLocal_725 = -1;
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
	var uLocal_747 = -1082130432;
	var uLocal_748 = 3;
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
	var uLocal_764 = -1;
	var uLocal_765 = 0;
	var uLocal_766 = -1;
	var uLocal_767 = -1;
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
	var uLocal_789 = -1082130432;
	var uLocal_790 = 3;
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
	var uLocal_806 = -1;
	var uLocal_807 = 0;
	var uLocal_808 = -1;
	var uLocal_809 = -1;
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
	var uLocal_831 = -1082130432;
	var uLocal_832 = 3;
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
	var uLocal_848 = -1;
	var uLocal_849 = 0;
	var uLocal_850 = -1;
	var uLocal_851 = -1;
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
	var uLocal_873 = -1082130432;
	var uLocal_874 = 3;
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
	var uLocal_890 = -1;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = -1;
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
	var uLocal_915 = -1082130432;
	var uLocal_916 = 3;
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
	var uLocal_932 = -1;
	var uLocal_933 = 0;
	var uLocal_934 = -1;
	var uLocal_935 = -1;
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
	var uLocal_957 = -1082130432;
	var uLocal_958 = 3;
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
	var uLocal_974 = -1;
	var uLocal_975 = 0;
	var uLocal_976 = -1;
	var uLocal_977 = -1;
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
	var uLocal_999 = -1082130432;
	var uLocal_1000 = 3;
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
	var uLocal_1016 = -1;
	var uLocal_1017 = 0;
	var uLocal_1018 = -1;
	var uLocal_1019 = -1;
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
	var uLocal_1041 = -1082130432;
	var uLocal_1042 = 3;
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
	var uLocal_1058 = -1;
	var uLocal_1059 = 0;
	var uLocal_1060 = -1;
	var uLocal_1061 = -1;
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
	var uLocal_1083 = -1082130432;
	var uLocal_1084 = 3;
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
	var uLocal_1100 = -1;
	var uLocal_1101 = 0;
	var uLocal_1102 = -1;
	var uLocal_1103 = -1;
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
	var uLocal_1125 = -1082130432;
	var uLocal_1126 = 3;
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
	var uLocal_1142 = -1;
	var uLocal_1143 = 0;
	var uLocal_1144 = -1;
	var uLocal_1145 = -1;
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
	var uLocal_1167 = -1082130432;
	var uLocal_1168 = 3;
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
	var uLocal_1184 = -1;
	var uLocal_1185 = 0;
	var uLocal_1186 = -1;
	var uLocal_1187 = -1;
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
	var uLocal_1209 = -1082130432;
	var uLocal_1210 = 3;
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
	var uLocal_1226 = -1;
	var uLocal_1227 = 0;
	var uLocal_1228 = -1;
	var uLocal_1229 = -1;
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
	var uLocal_1251 = -1082130432;
	var uLocal_1252 = 3;
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
	var uLocal_1268 = -1;
	var uLocal_1269 = 0;
	var uLocal_1270 = -1;
	var uLocal_1271 = -1;
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
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1082130432;
	var uLocal_1294 = 3;
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
	var uLocal_1310 = -1;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1;
	var uLocal_1313 = -1;
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
	var uLocal_1335 = -1082130432;
	var uLocal_1336 = 3;
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
	var uLocal_1352 = -1;
	var uLocal_1353 = 0;
	var uLocal_1354 = -1;
	var uLocal_1355 = -1;
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
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = -1082130432;
	var uLocal_1378 = 3;
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
	var uLocal_1394 = -1;
	var uLocal_1395 = 0;
	var uLocal_1396 = -1;
	var uLocal_1397 = -1;
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
	var uLocal_1419 = -1082130432;
	var uLocal_1420 = 3;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
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
	var uLocal_1436 = -1;
	var uLocal_1437 = 0;
	var uLocal_1438 = -1;
	var uLocal_1439 = -1;
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
	var uLocal_1461 = -1082130432;
	var uLocal_1462 = 3;
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
	var uLocal_1478 = -1;
	var uLocal_1479 = 0;
	var uLocal_1480 = -1;
	var uLocal_1481 = -1;
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
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = -1082130432;
	var uLocal_1504 = 3;
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
	var uLocal_1520 = -1;
	var uLocal_1521 = 0;
	var uLocal_1522 = -1;
	struct<12> Local_1523[32];
	struct<12> Local_1524 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1525 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	fLocal_108 = 40000f;
	iLocal_136 = unk_0xD0CA83418A236CB4();
	iLocal_137 = unk_0xD0CA83418A236CB4();
	iLocal_138 = -1;
	iLocal_139 = -1;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_711(ScriptParam_1525))
		{
			func_674();
		}
	}
	while (true)
	{
		func_673();
		if (func_666() || func_664())
		{
			func_674();
		}
		if (func_662())
		{
			func_674();
		}
		func_636();
		switch (func_635(unk_0xF19B3230511B7F9F()))
		{
			case 0:
				if (func_634() == 1)
				{
					if (func_633())
					{
						func_632(unk_0xF19B3230511B7F9F(), 1);
					}
				}
				break;
			
			case 1:
				if (func_634() == 1)
				{
					func_128();
					func_116();
				}
				else if (func_634() == 3)
				{
					func_632(unk_0xF19B3230511B7F9F(), 3);
				}
				break;
			
			case 3:
				func_674();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_634())
			{
				case 0:
					if (func_103())
					{
						func_102(1);
					}
					break;
				
				case 1:
					if (Local_157.f_37 == 6)
					{
						func_102(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_114, 1000, 0))
					{
						func_102(3);
					}
					break;
				
				case 3:
					func_674();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1BE
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x21C
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

void func_3()//Position - 0x261
{
	bool bVar0;
	
	if (func_42(2, 0, 0, 0, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_157.f_2, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_157.f_2), 0);
			Local_157.f_1 = unk_0xD1952A425B78FFC0();
		}
	}
	switch (Local_157.f_37)
	{
		case 0:
			if (func_41())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_157.f_43), func_29(), 0) || unk_0xC80D31E4B587871C(Local_157.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_157.f_38 = unk_0xD1952A425B78FFC0();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_157.f_39), func_28(0), 0) || unk_0xC80D31E4B587871C(Local_157.f_2, 0))
			{
				if (!unk_0xC80D31E4B587871C(Local_157.f_2, 1))
				{
					Local_157.f_1 = unk_0xD1952A425B78FFC0();
					unk_0x872F1C1F8587CCC7(&(Local_157.f_2), 1);
					func_27(&(Local_157.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_139, &iLocal_138);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_157.f_41), 20000, 0) || Local_157.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_157.f_3))
				{
					func_27(&(Local_157.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x400
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x918CA1BFFAA03556(Local_157.f_67[iVar0 /*2*/].f_1) && !unk_0x191BE1BC8F26F3C1(unk_0x29AB7D6D0DE18055(Local_157.f_67[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)//Position - 0x44C
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

int func_6()//Position - 0x484
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xC80D31E4B587871C(Local_1523[iVar1 /*12*/].f_1, 1) || Local_1523[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xC80D31E4B587871C(Local_1523[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)//Position - 0x50D
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

bool func_8(int iParam0)//Position - 0x533
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)//Position - 0x54B
{
	struct<14> Var0;
	int iVar1;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 1793822106;
			Var0.f_10 = iVar1;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x59E
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)//Position - 0x5CB
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
			if (func_12(iVar2, 0, 0))
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

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x628
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

void func_13()//Position - 0x672
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0xC80D31E4B587871C(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0x872F1C1F8587CCC7(&(Local_157.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (unk_0x552F39AE86E07792(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_157.f_50)
	{
		Local_157.f_50 = iVar1;
	}
	else
	{
		Local_157.f_66 = (Local_157.f_50 - iVar1);
	}
	if (iVar2 > Local_157.f_51)
	{
		Local_157.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)//Position - 0x748
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x793
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

int func_16()//Position - 0x7D4
{
	return Global_1312736;
}

int func_17(int iParam0, bool bParam1)//Position - 0x7E0
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = system::to_float(Local_1523[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = system::to_float(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_157.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10280)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10281)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10282)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10283)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10284)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10285)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10286 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10287)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10288)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10289)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10290)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10291))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10292))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_10404)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_10405)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10295))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10297))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10298))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10299))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA52
{
	switch (Local_157.f_3)
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

int func_19()//Position - 0xAB1
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xADC
{
	if (iParam0 >= 0)
	{
		if (Local_157.f_4[iParam0] == unk_0x622FF3AE4B1D07C3() && func_21(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB15
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()//Position - 0xB4F
{
	switch (Local_157.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xB6C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1523[iParam0 /*12*/].f_4;
	iVar1 = Local_1523[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xC80D31E4B587871C(Local_157.f_48, iParam0))
	{
		fVar2 = system::to_float(Local_157.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_157.f_49++;
			unk_0x872F1C1F8587CCC7(&(Local_157.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_157.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_157.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_157.f_4[iVar3] < 0 || func_21(iVar0, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4, iVar1, Local_1523[Local_157.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_157.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_138 = iVar3;
				iLocal_139 = iParam0;
			}
			Local_157.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_157.f_4[iVar5] == iParam0)
				{
					Local_157.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCEC
{
	if (Local_157.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)//Position - 0xD14
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)//Position - 0xD3A
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(Local_157.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_157.f_4[iVar0] == iParam0)
			{
				Local_157.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_157.f_48), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Local_157.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)//Position - 0xD95
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

int func_28(bool bParam0)//Position - 0xDD2
{
	if (unk_0xC80D31E4B587871C(Local_157.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_157.f_3)
	{
		case 0:
			return Global_262145.f_9600;
		
		case 8:
			return Global_262145.f_9602;
		
		case 3:
			return Global_262145.f_9603;
		
		case 1:
			return Global_262145.f_10390;
		
		case 6:
			return Global_262145.f_10391;
		
		case 10:
			return Global_262145.f_10393;
		
		case 11:
			return Global_262145.f_10395;
		
		case 12:
			return Global_262145.f_10396;
		
		case 15:
			return Global_262145.f_10400;
		
		case 16:
			return Global_262145.f_10401;
		
		case 17:
			return Global_262145.f_10402;
		
		case 18:
			return Global_262145.f_10403;
		
		case 13:
			return Global_262145.f_10394;
		
		case 14:
			return Global_262145.f_10397;
		
		case 2:
			return Global_262145.f_9605;
		
		case 7:
			return Global_262145.f_10392;
		
		case 9:
			return Global_262145.f_10398;
		
		case 5:
			return Global_262145.f_9606;
		
		case 4:
			return Global_262145.f_9604;
		
		default:
	}
	return -1;
}

int func_29()//Position - 0xF30
{
	return Global_262145.f_10360;
}

void func_30(int iParam0)//Position - 0xF3F
{
	Local_157.f_37 = iParam0;
}

int func_31()//Position - 0xF4E
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_41() && ((Local_157.f_37 == 0 || func_5(Local_157.f_3)) || Local_157.f_54 < 10))
	{
		Var0 = { Local_157.f_67[iLocal_133 /*2*/] };
		if (func_40(Var0))
		{
			if (!unk_0x93C304998B457C45(Var0.f_1))
			{
				if (func_38(Local_157.f_3, iLocal_133, &vVar1, &fVar2))
				{
					Local_157.f_55[iLocal_133] = func_34(iLocal_133);
					if (unk_0xC80D31E4B587871C(Local_1523[Local_157.f_55[iLocal_133] /*12*/].f_2, iLocal_133))
					{
						if (func_33(&(Local_157.f_67[iLocal_133 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xC45B8A0B35DD8552(unk_0x29AB7D6D0DE18055(Local_157.f_67[iLocal_133 /*2*/].f_1), 1, 1);
							unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							unk_0x9D160A2C23D47EBA(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), 0);
							func_32(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), 1);
							if (unk_0x6C5223DB5E5CFD9B("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
							{
								if (unk_0xB80A4DA4C06A76F1(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x2786E663D1846FFC(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset");
								}
								unk_0x872F1C1F8587CCC7(&iVar3, 10);
								unk_0x872F1C1F8587CCC7(&iVar3, 11);
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_133 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_157.f_55[iLocal_133] = -1;
							Local_157.f_54++;
						}
					}
				}
			}
		}
		iLocal_133++;
		if (iLocal_133 >= 10)
		{
			iLocal_133 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x113D
{
	int iVar0;
	
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 13);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, 13);
		}
		unk_0xD91ED8E8618A1DEF(iParam0, "MPBitset", iVar0);
	}
}

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x118B
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

int func_34(int iParam0)//Position - 0x1285
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_37(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar6 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (func_12(iVar6, 1, 1))
				{
					fVar3 = func_35(func_36(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_35(vector3 vParam0, vector3 vParam1)//Position - 0x12FE
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return system::vdist(vParam0, vParam1);
}

Vector3 func_36(int iParam0)//Position - 0x131C
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_37(int iParam0, var uParam1, var uParam2)//Position - 0x132F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729,582f, -2943,77f, 12,9443f };
			*uParam2 = 300,078f;
			break;
		
		case 1:
			*uParam1 = { 677,2984f, 769,7758f, 204,6846f };
			*uParam2 = 82,8903f;
			break;
		
		case 2:
			*uParam1 = { 1073,972f, 3003,889f, 40,5508f };
			*uParam2 = 333,2717f;
			break;
		
		case 3:
			*uParam1 = { 1928,635f, 4702,327f, 40,1958f };
			*uParam2 = 327,9112f;
			break;
		
		case 4:
			*uParam1 = { 1278,65f, 6579,366f, 1,505f };
			*uParam2 = 84,26f;
			break;
		
		case 5:
			*uParam1 = { -1700,407f, -829,8932f, 8,2542f };
			*uParam2 = 70,1811f;
			break;
		
		case 6:
			*uParam1 = { -2733,589f, 2925,563f, 1,2152f };
			*uParam2 = 176,5378f;
			break;
		
		case 7:
			*uParam1 = { 1493,418f, -2442,99f, 64,9693f };
			*uParam2 = 52,9918f;
			break;
		
		case 8:
			*uParam1 = { 569,0449f, -772,5692f, 10,4088f };
			*uParam2 = 179,3501f;
			break;
		
		case 9:
			*uParam1 = { -905,1526f, 5548,172f, 5,5251f };
			*uParam2 = 95,8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14AB
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729,582f, -2943,77f, 12,9443f };
				*uParam3 = 300,078f;
				break;
			
			case 1:
				*uParam2 = { 677,2984f, 769,7758f, 204,6846f };
				*uParam3 = 82,8903f;
				break;
			
			case 2:
				*uParam2 = { 1073,972f, 3003,889f, 40,5508f };
				*uParam3 = 333,2717f;
				break;
			
			case 3:
				*uParam2 = { 1928,635f, 4702,327f, 40,1958f };
				*uParam3 = 327,9112f;
				break;
			
			case 4:
				*uParam2 = { 1278,65f, 6579,366f, 1,505f };
				*uParam3 = 84,26f;
				break;
			
			case 5:
				*uParam2 = { -1700,407f, -829,8932f, 8,2542f };
				*uParam3 = 70,1811f;
				break;
			
			case 6:
				*uParam2 = { -2733,589f, 2925,563f, 1,2152f };
				*uParam3 = 173,6421f;
				break;
			
			case 7:
				*uParam2 = { 1493,418f, -2442,99f, 64,9693f };
				*uParam3 = 52,9918f;
				break;
			
			case 8:
				*uParam2 = { 569,0449f, -772,5692f, 10,4088f };
				*uParam3 = 179,3501f;
				break;
			
			case 9:
				*uParam2 = { -905,1526f, 5548,172f, 5,5251f };
				*uParam3 = 95,8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_39(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132,932f, 1130,534f, 19,683f };
				*uParam3 = 168,7723f;
				break;
			
			case 1:
				*uParam2 = { -1008,917f, -1640,027f, 3,4035f };
				*uParam3 = 235,1491f;
				break;
			
			case 2:
				*uParam2 = { 1075,063f, -2445,105f, 28,2896f };
				*uParam3 = 100,2369f;
				break;
			
			case 3:
				*uParam2 = { 1101,198f, -266,9387f, 68,3046f };
				*uParam3 = 359,2015f;
				break;
			
			case 4:
				*uParam2 = { 2658,878f, 1667,581f, 23,4886f };
				*uParam3 = 90,4833f;
				break;
			
			case 5:
				*uParam2 = { -399,1095f, 874,6328f, 230,2586f };
				*uParam3 = 107,5929f;
				break;
			
			case 6:
				*uParam2 = { 156,5429f, 3117,213f, 41,5677f };
				*uParam3 = 218,5338f;
				break;
			
			case 7:
				*uParam2 = { -2242,923f, 4315,749f, 46,7647f };
				*uParam3 = 236,8359f;
				break;
			
			case 8:
				*uParam2 = { -143,7363f, 6500,573f, 28,7366f };
				*uParam3 = 116,1312f;
				break;
			
			case 9:
				*uParam2 = { 1939,475f, 4628,652f, 39,3984f };
				*uParam3 = 350,0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_39(int iParam0)//Position - 0x17AF
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_40(int iParam0)//Position - 0x17CF
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

bool func_41()//Position - 0x17ED
{
	return (func_5(Local_157.f_3) || func_39(Local_157.f_3));
}

int func_42(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x180D
{
	if (func_101(unk_0x9EB17624F44A8DA4(), 0) || func_98(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (func_97(unk_0x9EB17624F44A8DA4()) || func_95(unk_0x9EB17624F44A8DA4()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x8AB67E33BD002BAC() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (func_45(&(Global_1574409.f_18)))
	{
		if (!func_1(&(Global_1574409.f_18), 7500, 0))
		{
			return 0;
		}
		func_44(&(Global_1574409.f_18));
	}
	if (func_43())
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 0);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x5C6098C2BAD00378() < iParam0)
	{
		if (bParam2)
		{
			func_49(sParam3, sParam4, 1);
		}
		if (func_48(26, -1))
		{
			func_46(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_43()//Position - 0x1904
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 0);
}

void func_44(var uParam0)//Position - 0x1917
{
	uParam0->f_1 = 0;
}

bool func_45(var uParam0)//Position - 0x1924
{
	return uParam0->f_1;
}

void func_46(int iParam0, int iParam1)//Position - 0x1930
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD1EA64C8648E82BA(0, iParam1);
			break;
		
		default:
			iVar1 = func_47(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x0EE72DB1CD8A3B86(&iVar0, iParam0);
				unk_0xD1EA64C8648E82BA(iVar0, iParam1);
			}
			break;
	}
}

int func_47(int iParam0)//Position - 0x198C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
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

bool func_48(int iParam0, int iParam1)//Position - 0x19EF
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_47(iParam1);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	return unk_0xC80D31E4B587871C(iVar1, iParam0);
}

void func_49(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1A1B
{
	if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 2) && !func_8(unk_0x9EB17624F44A8DA4())) && !func_7(unk_0x9EB17624F44A8DA4()))
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
		func_50(66, sParam0, sParam1, 1, -1, 2);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 2);
	}
}

int func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A90
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
	func_94(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_51(&Var0);
}

int func_51(var uParam0)//Position - 0x1AF4
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_65(uParam0, uParam0->f_16);
	func_62(uParam0);
	if (func_61())
	{
		func_62(uParam0);
	}
	if (func_60(uParam0->f_1))
	{
		func_53();
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
				func_53();
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
				if (func_52(Global_2436181.f_2592[iVar0 /*79*/].f_1))
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

int func_52(int iParam0)//Position - 0x1CB5
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

void func_53()//Position - 0x1D35
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
	func_54();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_54()//Position - 0x1D68
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_58(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_55(&(Global_2436181.f_2912.f_1));
}

void func_55(var uParam0)//Position - 0x1DA9
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
				if (unk_0x3E9CABD07B829173() && !func_57(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)//Position - 0x1E4F
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_57(bool bParam0)//Position - 0x1E63
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_58(var uParam0)//Position - 0x1E8E
{
	func_59(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_59(var uParam0)//Position - 0x1EB8
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

int func_60(int iParam0)//Position - 0x1F37
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x2039
{
	return Global_2447174.f_16;
}

void func_62(var uParam0)//Position - 0x2047
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_71 = func_63();
	}
}

int func_63()//Position - 0x2062
{
	return 21;
}

int func_64(int iParam0)//Position - 0x206C
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

void func_65(var uParam0, int iParam1)//Position - 0x20FE
{
	if (func_64(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_93() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_52(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_66(iParam1, -2, 0, 0);
		}
	}
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2154
{
	int iVar0;
	int iVar1;
	
	if (func_91(iParam0))
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
	if ((func_91(unk_0x9EB17624F44A8DA4()) || (func_90() && func_89())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_88();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_12(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_86(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_86(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_86(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)//Position - 0x2324
{
	return func_68(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x233A
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
			if (func_73(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x23FE
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_4456448.f_122309))
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

int func_70(int iParam0)//Position - 0x2515
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

int func_71(int iParam0, int iParam1, int iParam2)//Position - 0x254E
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)//Position - 0x2595
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x25AC
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

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2777
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
			if (func_83(1))
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_73(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)//Position - 0x291B
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2932
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

int func_77(int iParam0)//Position - 0x29AA
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)//Position - 0x2A6D
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)//Position - 0x2A84
{
	if (!iParam0 == func_93())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x2AB6
{
	if (iParam0 != func_93())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_93();
}

bool func_81(int iParam0, bool bParam1)//Position - 0x2AD9
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_93();
}

int func_82(int iParam0)//Position - 0x2B04
{
	if (iParam0 != func_93())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x2B39
{
	if ((func_85() || func_84()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_84()//Position - 0x2B68
{
	return Global_2447174.f_15;
}

var func_85()//Position - 0x2B76
{
	return Global_2447174.f_14;
}

int func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x2B84
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_83(1))
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_93())
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
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_87(iParam0);
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

int func_87(int iParam0)//Position - 0x2CE9
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

var func_88()//Position - 0x2DBE
{
	return Global_2359302.f_2;
}

bool func_89()//Position - 0x2DCC
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_90()//Position - 0x2DDD
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_91(int iParam0)//Position - 0x2DFA
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
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

bool func_92()//Position - 0x2E3C
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_93()//Position - 0x2E4D
{
	return -1;
}

void func_94(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2E56
{
	uParam1->f_16 = func_93();
	uParam1->f_17 = func_93();
	uParam1->f_18 = func_93();
	uParam1->f_19 = func_93();
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

bool func_95(int iParam0)//Position - 0x2ECF
{
	return func_96(iParam0, 20);
}

bool func_96(int iParam0, int iParam1)//Position - 0x2EDF
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_97(int iParam0)//Position - 0x2EFA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_96(iParam0, 9);
	}
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0x2F18
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_99(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_99(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)//Position - 0x2F7E
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
	return func_100(iParam0, 0);
	return 0;
}

int func_100(int iParam0, int iParam1)//Position - 0x2FCC
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

int func_101(int iParam0, int iParam1)//Position - 0x3021
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x305C
{
	Local_157 = iParam0;
}

int func_103()//Position - 0x3069
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_157.f_4[iVar0] = -1;
		iVar0++;
	}
	func_44(&(Local_157.f_39));
	func_108();
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_157.f_55[iVar0] = func_34(iVar0);
			iVar0++;
		}
		func_104();
	}
	return 1;
}

void func_104()//Position - 0x30C9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_39(Local_157.f_3))
		{
			Local_157.f_67[iVar0 /*2*/] = func_107();
		}
		else
		{
			Local_157.f_67[iVar0 /*2*/] = func_105();
		}
		iVar0++;
	}
}

int func_105()//Position - 0x310D
{
	int iVar0;
	
	switch (Local_157.f_3)
	{
		case 12:
			return func_106();
			break;
	}
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_106()//Position - 0x315B
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_107()//Position - 0x318F
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_108()//Position - 0x31C3
{
	int iVar0;
	
	iVar0 = func_112();
	Local_157.f_3 = iVar0;
	func_109(func_111(133, iVar0, 0, 0));
}

void func_109(int iParam0)//Position - 0x31E6
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1107039707;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = iParam0;
	iVar1 = func_110(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &vVar0, 3, iVar1);
	}
}

var func_110(int iParam0, bool bParam1)//Position - 0x3220
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3285
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

int func_112()//Position - 0x3AE4
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_10689;
	iVar0[1] = Global_262145.f_10362;
	iVar0[2] = Global_262145.f_10693;
	iVar0[3] = Global_262145.f_10691;
	iVar0[4] = Global_262145.f_10692;
	iVar0[5] = Global_262145.f_10694;
	iVar0[6] = Global_262145.f_10363;
	iVar0[7] = Global_262145.f_10364;
	iVar0[8] = Global_262145.f_10690;
	iVar0[9] = Global_262145.f_10370;
	iVar0[10] = Global_262145.f_10365;
	iVar0[11] = Global_262145.f_10367;
	iVar0[12] = Global_262145.f_10368;
	iVar0[13] = Global_262145.f_10366;
	iVar0[14] = Global_262145.f_10369;
	iVar0[15] = Global_262145.f_10372;
	iVar0[16] = Global_262145.f_10373;
	iVar0[17] = Global_262145.f_10374;
	iVar0[18] = Global_262145.f_10375;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_115(iVar2) || func_113(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = unk_0x5B811202FCBE9E9D(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_112();
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C61
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
	iVar1 = func_114(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_7501)
		{
			if (Global_2486819.f_124[iVar0 /*2*/] == iVar1 && Global_2486819.f_124[iVar0 /*2*/].f_1 == func_111(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x3CDA
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

int func_115(int iParam0)//Position - 0x3D63
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_9594;
		
		case 1:
			return Global_262145.f_10376;
		
		case 6:
			return Global_262145.f_10377;
		
		case 7:
			return Global_262145.f_10378;
		
		case 8:
			return Global_262145.f_9595;
		
		case 3:
			return Global_262145.f_9596;
		
		case 4:
			return Global_262145.f_9597;
		
		case 2:
			return Global_262145.f_9598;
		
		case 5:
			return Global_262145.f_9599;
		
		case 9:
			return Global_262145.f_10384;
		
		case 10:
			return Global_262145.f_10379;
		
		case 11:
			return Global_262145.f_10381;
		
		case 12:
			return Global_262145.f_10382;
		
		case 15:
			return Global_262145.f_10386;
		
		case 16:
			return Global_262145.f_10387;
		
		case 17:
			return Global_262145.f_10388;
		
		case 18:
			return Global_262145.f_10389;
		
		case 13:
			return Global_262145.f_10380;
		
		case 14:
			return Global_262145.f_10383;
		
		default:
	}
	return 1;
}

void func_116()//Position - 0x3EA3
{
	int iVar0;
	
	if (func_41())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_157.f_55[iVar0] == unk_0x622FF3AE4B1D07C3())
			{
				if (func_117(iVar0))
				{
					if (!unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2, iVar0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0)//Position - 0x3F54
{
	vector3 vVar0;
	var uVar1;
	
	if (func_37(iParam0, &vVar0, &uVar1))
	{
		if (func_118(vVar0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x3F99
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
		if (func_123(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_119(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x40AE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_121(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_120(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
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
								if (unk_0xBE3C4023003180FC(func_121(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xBE3C4023003180FC(func_121(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_120(int iParam0)//Position - 0x4266
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_121(int iParam0)//Position - 0x4292
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1595693[iVar0 /*680*/].f_673) && !func_122(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_36(iParam0);
}

int func_122(vector3 vParam0)//Position - 0x42E5
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_123(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x430F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_120(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_124(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_36(iVar1), vParam0, 1) < fParam1)
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

int func_124(int iParam0)//Position - 0x440B
{
	if (func_127(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_126(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_125(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)//Position - 0x4452
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_93())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_126(int iParam0)//Position - 0x447D
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_127(int iParam0, int iParam1)//Position - 0x4494
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_126(iParam0) };
		Global_2492170 = { func_126(iParam1) };
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

void func_128()//Position - 0x4501
{
	float fVar0;
	float fVar1;
	
	func_629();
	func_628();
	if (func_626())
	{
		func_517();
	}
	if (!func_7(unk_0x9EB17624F44A8DA4()))
	{
		if (func_495())
		{
			if (unk_0xC80D31E4B587871C(iLocal_128, 6))
			{
				unk_0x0EE72DB1CD8A3B86(&iLocal_128, 6);
			}
			switch (Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_3)
			{
				case 0:
					if (Local_157.f_37 < 2)
					{
						if (Local_157.f_37 > 0)
						{
							if (Local_157.f_3 != -1)
							{
								func_494(1);
								func_493(1);
							}
						}
					}
					else
					{
						func_493(2);
					}
					break;
				
				case 1:
					func_487(9);
					if (Local_1524.f_8 == 0)
					{
						Local_1524.f_8 = unk_0xE3CCAFB1555348DF();
					}
					if (Local_157.f_37 >= 2)
					{
						func_493(2);
						Local_1524.f_9 = unk_0xE3CCAFB1555348DF();
					}
					if (func_41())
					{
						func_487(0);
					}
					func_485((func_29() - func_486(&(Local_157.f_43), 0, 0)));
					func_482(func_484((func_29() - func_486(&(Local_157.f_43), 0, 0)), 0), func_483(Local_157.f_3));
					func_443(0, func_481());
					func_425();
					func_402();
					if (func_401())
					{
						func_400();
					}
					break;
				
				case 2:
					if (Local_157.f_37 > 2)
					{
						func_494(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_399())
						{
							fVar0 = 0f;
							fVar1 = 0,25f;
						}
						func_382(133, fVar0, fVar1, 0, 0, 0, 0);
						func_381(Local_157.f_3, 1);
						func_380(23, 1);
						if (Local_1524.f_8 == 0)
						{
							Local_1524.f_8 = unk_0xE3CCAFB1555348DF();
						}
						if (Local_1524.f_9 == 0)
						{
							Local_1524.f_9 = unk_0xE3CCAFB1555348DF();
						}
						func_376();
						unk_0x44EBEB4322278F78(1);
						if (func_399())
						{
							unk_0x94BD6F0436473406(0f);
							unk_0xC0EBC1452FCAB15C(0);
						}
						if (Local_157.f_3 == 14)
						{
							func_375(&vLocal_148);
						}
						func_374();
						if (!func_7(unk_0x9EB17624F44A8DA4()))
						{
							func_50(63, "AMCH_STARTED", func_373(Local_157.f_3), func_63(), -1, func_63());
							if (func_370("AMCH_WARN", func_372(Local_157.f_3), func_371(Local_157.f_3)))
							{
								unk_0x3E80C2F7BC665259(1);
							}
						}
						if (func_41())
						{
							func_353(678f, 794f, 206f, 8f, 0);
							func_353(1911,3f, 4714,6f, 41,1f, 8f, 0);
							func_353(688,5021f, 735,4581f, 181,296f, 8f, 0);
						}
						func_493(3);
					}
					break;
				
				case 3:
					if (Local_157.f_37 > 3)
					{
						iLocal_130 = 0;
						func_493(4);
					}
					else
					{
						if (!unk_0xC80D31E4B587871C(Local_157.f_2, 1))
						{
							func_319();
							func_316();
							func_315();
						}
						if (func_314(0) && !func_20(0))
						{
							func_313();
						}
					}
					if (func_399())
					{
						unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
					}
					func_312();
					func_289();
					func_517();
					func_443(0, 1);
					func_425();
					func_402();
					func_487(2);
					func_487(5);
					func_487(7);
					break;
				
				case 4:
					if (func_278(&uLocal_140, !unk_0xC80D31E4B587871C(Local_157.f_2, 0)) || unk_0xC80D31E4B587871C(Local_157.f_2, 0))
					{
						if (func_5(Local_157.f_3))
						{
							if (Local_157.f_37 == 5)
							{
								func_493(5);
							}
						}
						else
						{
							func_493(6);
						}
					}
					func_265();
					func_160();
					func_289();
					func_517();
					func_443(1, 1);
					func_374();
					break;
				
				case 5:
					if (Local_157.f_37 > 5)
					{
						func_493(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_155();
		}
	}
	else
	{
		func_155();
	}
	func_135();
	func_130();
	func_129();
}

void func_129()//Position - 0x488B
{
	struct<2> Var0;
	int iVar1;
	
	if (func_41())
	{
		Var0 = { Local_157.f_67[iLocal_147 /*2*/] };
		if (unk_0x93C304998B457C45(Var0.f_1))
		{
			iVar1 = unk_0xF32FBF2453AC1753(Var0.f_1);
			if (unk_0xA0BF73C5030D3F60(iVar1))
			{
				if (!unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					unk_0x5380482A432E314E(&iVar1);
				}
			}
		}
		iLocal_147++;
		if (iLocal_147 >= 10)
		{
			iLocal_147 = 0;
			iLocal_156 = iLocal_155;
			iLocal_155 = 0;
		}
	}
}

void func_130()//Position - 0x48F7
{
	if (Local_157.f_37 == 5)
	{
		if (unk_0x93C304998B457C45(Local_157.f_67[iLocal_147 /*2*/].f_1))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_147 /*2*/].f_1), 0))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_153, iLocal_147))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_153, iLocal_147);
					iLocal_154[iLocal_147] = unk_0xD0CA83418A236CB4();
					unk_0x7CC4363AEEF7EF34(iLocal_154[iLocal_147], "Explosion_Countdown", unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_147 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x922FC70048B5A79D(iLocal_154[iLocal_147], "Time", 30f);
				}
				if ((30000 - func_486(&(Local_157.f_45), 0, 0)) >= 0)
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_147 /*2*/].f_1), 0))
					{
						func_487(1);
						iLocal_155 = 1;
					}
				}
				else if (unk_0xE53FD7AF7F25C0A8(Local_157.f_67[iLocal_147 /*2*/].f_1))
				{
					unk_0x2B0DDE3D071497AD(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_147 /*2*/].f_1));
					unk_0x512FEE935C79BFCF(unk_0xF32FBF2453AC1753(Local_157.f_67[iLocal_147 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xC80D31E4B587871C(iLocal_153, iLocal_147) && !unk_0xCCCA18C9A006FF83(iLocal_154[iLocal_147]))
			{
				unk_0x0B9D04994D02CC2F(iLocal_154[iLocal_147]);
			}
		}
		if (iLocal_156)
		{
			if (!func_91(unk_0x9EB17624F44A8DA4()))
			{
				func_132(func_484((30000 - func_486(&(Local_157.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				func_131();
			}
		}
	}
}

void func_131()//Position - 0x4A78
{
	Global_1359035.f_1088 = 1;
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x4A88
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_133(7, iVar0);
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

void func_133(int iParam0, int iParam1)//Position - 0x4BD6
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)//Position - 0x4BEF
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_135()//Position - 0x4C08
{
	if (((func_12(unk_0x9EB17624F44A8DA4(), 1, 1) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_151(unk_0x9EB17624F44A8DA4())) && func_495())
	{
		if (Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 1)
		{
			func_148(func_150(Local_157.f_3), func_372(Local_157.f_3), 0, 0);
		}
		else if (Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 3)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_128, 10))
			{
				func_136(func_371(Local_157.f_3), 0);
			}
			else
			{
				func_136("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_374();
		}
	}
	else
	{
		func_374();
	}
}

void func_136(char* sParam0, bool bParam1)//Position - 0x4CB0
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return;
	}
	if (func_146(sParam0))
	{
		return;
	}
	func_140();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()//Position - 0x4D1B
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_138(bool bParam0)//Position - 0x4D2E
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_139()//Position - 0x4D54
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_140()//Position - 0x4D79
{
	func_142();
	func_141(0);
}

void func_141(bool bParam0)//Position - 0x4D8A
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

void func_142()//Position - 0x4E1C
{
	if (!func_145())
	{
	}
	if (func_144())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_143();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_143()//Position - 0x4E45
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

int func_144()//Position - 0x50B7
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_145()//Position - 0x50CD
{
	if (!func_144())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_143();
	return unk_0xC20F7134D3568246();
}

bool func_146(char* sParam0)//Position - 0x50F3
{
	if (!func_144())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_147(sParam0);
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12));
}

bool func_147(char* sParam0)//Position - 0x5137
{
	if (!func_144())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_16));
}

int func_148(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5169
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
	if (func_149(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_140();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	func_139();
	func_138(bParam2);
	func_137();
	return 1;
}

bool func_149(char* sParam0, char* sParam1)//Position - 0x5213
{
	if (!func_144())
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

char* func_150(int iParam0)//Position - 0x526B
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) || unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
					iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
					if (unk_0x125CDF69FA6EF560(iVar1) && unk_0x622CEE94AF3A0B32(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_sniperrifle"), 0) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_heavysniper"), 0)) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_151(int iParam0)//Position - 0x54B9
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		if (func_45(&(Global_1574409.f_13)))
		{
			if (!func_1(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_44(&(Global_1574409.f_13));
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9);
}

bool func_152(int iParam0, int iParam1)//Position - 0x554B
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

bool func_153()//Position - 0x5564
{
	return Global_1312416.f_1;
}

bool func_154()//Position - 0x5572
{
	return Global_1312416;
}

void func_155()//Position - 0x557E
{
	if (!unk_0xC80D31E4B587871C(iLocal_128, 6))
	{
		unk_0xBC79F7D5230CA7E8();
		func_443(1, 1);
		unk_0x0B9D04994D02CC2F(iLocal_136);
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 4);
		func_159();
		func_157();
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
		unk_0x872F1C1F8587CCC7(&iLocal_128, 6);
		func_156();
	}
}

void func_156()//Position - 0x55C7
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = 0;
}

void func_157()//Position - 0x55DD
{
	if (Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
	{
		func_158();
	}
}

void func_158()//Position - 0x55F6
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

void func_159()//Position - 0x5653
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_160()//Position - 0x5678
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
			return;
		}
		if (func_151(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
			return;
		}
		func_225(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1524.f_6 = (Local_1524.f_6 + iVar0);
			if (!Global_262145.f_10841)
			{
				func_224(10, Local_1524.f_6);
			}
			Global_2459022 = iVar0;
			if (func_223())
			{
				func_214(-1468524125, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				unk_0x432E164230431523(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1524.f_7 = (Local_1524.f_7 + iVar1);
			func_213();
			func_161(0, unk_0xFC1458A37D98B502(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 0);
	}
}

int func_161(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5772
{
	return func_162(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5794
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_168(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_163(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_163(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x580D
{
	vector3 vVar0;
	
	vVar0 = { func_166(iParam0, 1) };
	if (iParam0 == func_165(unk_0xFC1458A37D98B502()))
	{
		func_164(1);
	}
	func_168(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_164(int iParam0)//Position - 0x5841
{
	Global_2436181.f_1774 = iParam0;
}

int func_165(int iParam0)//Position - 0x5852
{
	return iParam0;
}

Vector3 func_166(int iParam0, bool bParam1)//Position - 0x585C
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
	if (iParam0 == func_167(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
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

int func_167(int iParam0)//Position - 0x5920
{
	return iParam0;
}

void func_168(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x592A
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
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_171(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_170();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_169();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_169()//Position - 0x5A41
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_170()//Position - 0x5A6B
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_171(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5A86
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

var func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5B1F
{
	var uVar0;
	
	uVar0 = func_173(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5B42
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_212(unk_0x9EB17624F44A8DA4()) || func_211(unk_0x9EB17624F44A8DA4()))
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
	else if (func_209() || func_206(unk_0x9EB17624F44A8DA4()))
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
	if (func_205(sParam2))
	{
	}
	if (func_204())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_202(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_201(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_199(0, &iVar1);
					break;
				
				case 3:
					func_199(1, &iVar1);
					break;
				
				case 1:
					func_197(&iVar1);
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
			func_194(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_183((func_193(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_194(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_178(iVar1);
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
				func_174((func_176(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_174((func_176(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_174(int iParam0)//Position - 0x5D40
{
	if (func_204())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_175(joaat("mpply_globalxp"), iParam0);
	}
}

void func_175(int iParam0, int iParam1)//Position - 0x5D6B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_176(int iParam0)//Position - 0x5D87
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_177(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_177(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x5DD8
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

void func_178(int iParam0)//Position - 0x5DF6
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_126(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_181(func_182(&Var0));
			if (iVar1 == 0)
			{
				func_180(&Global_1368098, iParam0);
				func_179(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_180(&Global_1368099, iParam0);
				func_179(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_180(&Global_1368100, iParam0);
				func_179(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_180(&Global_1368101, iParam0);
				func_179(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_180(&Global_1368102, iParam0);
				func_179(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_179(int iParam0, int iParam1)//Position - 0x5ECA
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

void func_180(var uParam0, int iParam1)//Position - 0x5FEF
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_181(int iParam0)//Position - 0x6000
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

int func_182(var uParam0)//Position - 0x605D
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

void func_183(int iParam0, int iParam1, int iParam2)//Position - 0x6080
{
	if (func_204())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_192(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_192(-1)])
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
		if (func_191(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_189(iParam0, 1);
		}
		func_188(636, iParam0, -1, 1);
		func_187(637, func_189(iParam0, 1), -1, 1, 0);
		Global_1368213[func_192(-1)] = iParam0;
		func_184(7, 0);
	}
}

void func_184(int iParam0, int iParam1)//Position - 0x61A1
{
	int iVar0;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_185()//Position - 0x61C4
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

int func_186(int iParam0, var uParam1)//Position - 0x61F9
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

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x627F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62AF
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_192(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_192(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_192(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_192(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_192(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_192(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_192(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_192(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_192(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_192(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_192(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_192(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_192(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_192(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_192(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_192(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_192(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_192(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_192(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_192(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_192(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_192(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_192(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_192(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_192(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_192(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_192(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_192(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_192(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_192(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_192(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_192(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_189(int iParam0, bool bParam1)//Position - 0x697A
{
	if (bParam1)
	{
	}
	return func_190(iParam0, 0);
}

int func_190(int iParam0, int iParam1)//Position - 0x698E
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

int func_191(int iParam0)//Position - 0x6A4D
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

int func_192(int iParam0)//Position - 0x6A72
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
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

int func_193(int iParam0)//Position - 0x6AA6
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_192(-1)];
			}
			else if (func_191(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_192(-1)];
	}
	return 0;
}

void func_194(int iParam0, int iParam1, int iParam2)//Position - 0x6B03
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam2, 1);
	}
}

int func_195(int iParam0)//Position - 0x6B45
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

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0x6CFB
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0)//Position - 0x6D2D
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
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_73(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar5))
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
		iVar6 = system::round((func_198(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_198(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_198(int iParam0, int iParam1)//Position - 0x6E18
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_199(bool bParam0, int iParam1)//Position - 0x6E39
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_200(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_127(unk_0x9EB17624F44A8DA4(), iVar4))
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
		iVar5 = system::round((func_198(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_198(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_200(int iParam0, int iParam1)//Position - 0x6F51
{
	return system::vdist(func_36(iParam0), func_36(iParam1));
	return 0f;
}

int func_201(int iParam0)//Position - 0x6F6D
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_198(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_202(int iParam0)//Position - 0x6FA4
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_193(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_193(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_203(8000, 0, 0) > 0)
	{
		if (func_203(8000, 0, 0) < (iParam0 + func_193(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_203(8000, 0, 0) - func_193(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_203(int iParam0, bool bParam1, int iParam2)//Position - 0x7008
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

int func_204()//Position - 0x7030
{
	return 1;
}

int func_205(char* sParam0)//Position - 0x7039
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

int func_206(int iParam0)//Position - 0x7072
{
	return func_207(func_208(iParam0));
}

int func_207(int iParam0)//Position - 0x7084
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x709E
{
	if (func_101(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

bool func_209()//Position - 0x70C1
{
	if (unk_0x4916190900E76373())
	{
		return func_61();
	}
	return func_210(Global_4456448.f_122309);
}

int func_210(int iParam0)//Position - 0x70E5
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

bool func_211(int iParam0)//Position - 0x711F
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_212(int iParam0)//Position - 0x7134
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_213()//Position - 0x7149
{
	Global_2458364 = 1;
}

void func_214(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7156
{
	int iVar0;
	
	if (!func_223())
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
				func_215(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1982688246:
			func_215(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x75E0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_223())
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
			*uParam0 = func_222(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_221(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_216(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7784
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_217(iParam0);
	}
}

void func_217(int iParam0)//Position - 0x77BC
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_223())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_220(iParam0))
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
		func_218(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_218(var uParam0)//Position - 0x780E
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
	func_219(&(uParam0->f_8.f_3));
	func_219(&(uParam0->f_8.f_16));
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

void func_219(var uParam0)//Position - 0x7904
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

int func_220(int iParam0)//Position - 0x794C
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_221(int iParam0, int iParam1)//Position - 0x7974
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_222(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x7988
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_223())
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

int func_223()//Position - 0x7A81
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_224(int iParam0, int iParam1)//Position - 0x7A98
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

void func_225(var uParam0, var uParam1)//Position - 0x7B0A
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x622FF3AE4B1D07C3(), 1))
	{
		iVar1 = system::floor(((system::to_float((Local_157.f_1 - iLocal_126)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_10776)
		{
			iVar1 = Global_262145.f_10776;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_264() * iVar1);
		*uParam1 = (func_263() * iVar1);
		fVar2 = func_262();
		if (fVar2 > 0f && !unk_0xC80D31E4B587871C(Local_157.f_2, 0))
		{
			iVar3 = system::round(((system::to_float(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_261())
			{
				iVar3 = func_261();
			}
			iVar4 = Local_157.f_51;
			if (iVar4 > func_260())
			{
				iVar4 = func_260();
			}
			*uParam0 = (*uParam0 + system::round((IntToFloat(func_253(func_259(), func_258(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10789)));
			*uParam1 = (*uParam1 + system::round((IntToFloat(func_253(func_252(), func_251(), iVar3, fVar2, func_257(), func_256(), func_255(), iVar4)) * Global_262145.f_10790)));
		}
		else
		{
			func_249(1);
		}
	}
	else
	{
		func_249(0);
	}
	func_226(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_226(var uParam0, int iParam1)//Position - 0x7C52
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_248())
		{
			if (func_247(0))
			{
				if (!func_243(0))
				{
					if (unk_0x552F39AE86E07792(func_242()))
					{
						if (func_241() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_241());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_239(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_232("GB_BCUT_TICK1", func_242(), iVar0, 0, 0, 1, 1);
						}
						func_231(20);
						func_227(func_242(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_227(int iParam0, int iParam1, int iParam2)//Position - 0x7CF3
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_230(iParam0);
		func_229(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_228(iParam0));
	}
}

var func_228(int iParam0)//Position - 0x7D49
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_229(var uParam0, var uParam1)//Position - 0x7D5B
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_230(int iParam0)//Position - 0x7D75
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_231(int iParam0)//Position - 0x7D89
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_232(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x7DB2
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
		unk_0xF92B835A141C6BDD(func_66(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_237(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_233(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x7E49
{
	int iVar0;
	
	if ((!func_236() || !unk_0x4916190900E76373()) || !func_14(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_234(iParam2);
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

int func_234(int iParam0)//Position - 0x7F51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_235(iVar0);
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

void func_235(int iParam0)//Position - 0x7FB3
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_236()//Position - 0x7FEC
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_237(char* sParam0)//Position - 0x7FFD
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_238(&cVar0);
}

var func_238(char[4] cParam0)//Position - 0x8024
{
	return cParam0;
}

void func_239(int iParam0, bool bParam1)//Position - 0x802E
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_240(1);
	}
	else
	{
		iVar1 = func_240(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_240(bool bParam0)//Position - 0x8060
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_241()//Position - 0x8086
{
	return Global_262145.f_11729;
}

int func_242()//Position - 0x8095
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_243(bool bParam0)//Position - 0x80AA
{
	return func_244(unk_0x9EB17624F44A8DA4(), bParam0);
}

int func_244(int iParam0, bool bParam1)//Position - 0x80BC
{
	return func_245(iParam0, bParam1, 1);
}

int func_245(int iParam0, bool bParam1, int iParam2)//Position - 0x80CD
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_246(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_93() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1)//Position - 0x8129
{
	if (iParam0 != func_93())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_247(bool bParam0)//Position - 0x8178
{
	return func_81(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_248()//Position - 0x818A
{
	return func_82(unk_0x9EB17624F44A8DA4());
}

void func_249(bool bParam0)//Position - 0x819A
{
	if (bParam0)
	{
		if (func_250(1))
		{
			unk_0x872F1C1F8587CCC7(&Global_1574434, 1);
		}
	}
	else if (func_250(2))
	{
		unk_0x872F1C1F8587CCC7(&Global_1574434, 2);
	}
}

int func_250(int iParam0)//Position - 0x81CC
{
	int iVar0;
	
	iVar0 = func_196(2523, -1, 0);
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

int func_251()//Position - 0x829D
{
	return Global_262145.f_10276;
}

int func_252()//Position - 0x82AC
{
	return Global_262145.f_10274;
}

int func_253(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x82BB
{
	return func_254(system::round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_254(int iParam0, int iParam1, int iParam2)//Position - 0x82EC
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

float func_255()//Position - 0x8334
{
	return Global_262145.f_10279;
}

float func_256()//Position - 0x8343
{
	return Global_262145.f_10278;
}

float func_257()//Position - 0x8352
{
	return Global_262145.f_10277;
}

int func_258()//Position - 0x8361
{
	return Global_262145.f_10275;
}

int func_259()//Position - 0x8370
{
	return Global_262145.f_10273;
}

int func_260()//Position - 0x837F
{
	return Global_262145.f_10681;
}

int func_261()//Position - 0x838E
{
	return Global_262145.f_10680;
}

var func_262()//Position - 0x839D
{
	if (func_20(0))
	{
		return Global_262145.f_10300;
	}
	if (func_20(1))
	{
		return Global_262145.f_10301;
	}
	if (func_20(2))
	{
		return Global_262145.f_10302;
	}
	return Global_262145.f_10303;
}

int func_263()//Position - 0x83EB
{
	return Global_262145.f_10272;
}

int func_264()//Position - 0x83FA
{
	return Global_262145.f_10271;
}

void func_265()//Position - 0x8409
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 1) && (func_277() || unk_0xC80D31E4B587871C(Local_157.f_2, 0)))
	{
		if (func_64(func_276()))
		{
			func_275();
		}
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0xC80D31E4B587871C(Local_157.f_2, 0))
			{
				if (func_314(0))
				{
					iVar2 = Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4;
					func_271(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_269(64, func_270(Local_157.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_372(Local_157.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(69, func_270(Local_157.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
						else
						{
							func_269(64, func_270(Local_157.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_157.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_372(Local_157.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_157.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
						else
						{
							func_269(67, func_270(Local_157.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_269(67, func_270(Local_157.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_372(Local_157.f_3), 1, 2);
						}
						else if (func_268())
						{
							func_269(75, func_270(Local_157.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
						else
						{
							func_269(67, func_270(Local_157.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_372(Local_157.f_3), 1, 2);
						}
					}
					else
					{
						iVar3 = unk_0x2B957AC89DEBA5B6(Local_157.f_4[0]);
						if (unk_0x012BC3F18B8C7807(iVar3))
						{
							iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
							if (Local_1523[Local_157.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1523[Local_157.f_4[0] /*12*/].f_4;
							func_271(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_267(76, func_93(), func_270(Local_157.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_372(Local_157.f_3), -1, fVar1, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
							else if (func_268())
							{
								func_267(77, func_93(), func_270(Local_157.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_372(Local_157.f_3), iVar0, -1082130432, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
							else
							{
								func_267(76, func_93(), func_270(Local_157.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_372(Local_157.f_3), iVar0, -1082130432, 1, 2, unk_0xDE2D3B9654C31EB3(iVar4));
							}
						}
					}
				}
				else
				{
					func_50(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2);
				}
			}
			else
			{
				func_49("", "", 1);
			}
			unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 1);
			func_266(133);
		}
	}
}

void func_266(int iParam0)//Position - 0x87C3
{
	if (iParam0 == iParam0)
	{
	}
}

int func_267(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x87D2
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
	func_94(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_16 = iParam1;
	StringCopy(&(Var0.f_56), sParam2, 16);
	StringCopy(&(Var0.f_60), sParam6, 16);
	StringCopy(&(Var0.f_24), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_70 = iParam9;
	Var0.f_71 = iParam10;
	return func_51(&Var0);
}

int func_268()//Position - 0x885B
{
	return 0;
}

int func_269(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x8864
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
	func_94(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_56), sParam1, 16);
	StringCopy(&(Var0.f_60), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_70 = iParam8;
	Var0.f_71 = iParam9;
	return func_51(&Var0);
}

char* func_270(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x88DF
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

int func_271(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x8A6C
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_272(Local_157.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (system::to_float(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_272(int iParam0, int iParam1)//Position - 0x8AB3
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
				return func_274(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_273(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_273(float fParam0)//Position - 0x8B56
{
	return (fParam0 / 1,609344f);
}

float func_274(float fParam0)//Position - 0x8B66
{
	return (fParam0 / 0,3048f);
}

void func_275()//Position - 0x8B76
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

int func_276()//Position - 0x8BC1
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

bool func_277()//Position - 0x8BD5
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 25);
}

int func_278(var uParam0, bool bParam1)//Position - 0x8BE9
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_288()) && !(func_101(unk_0x9EB17624F44A8DA4(), 0) && (func_97(unk_0x9EB17624F44A8DA4()) || func_287(unk_0x9EB17624F44A8DA4())))) && !func_285(unk_0x9EB17624F44A8DA4()))
	{
		func_284();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_45(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_283(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_45(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
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
				func_280();
				func_283(uParam0, 2);
			}
			break;
		
		case 2:
			func_280();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_279("AMEV_LBD_HELP"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_283(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				func_283(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

bool func_279(char* sParam0)//Position - 0x8D65
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_280()//Position - 0x8D78
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173())
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_282("AMEV_LBD_HELP", -1);
			func_281(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_281(int iParam0)//Position - 0x8DFB
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_288())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_282(char* sParam0, int iParam1)//Position - 0x8E29
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam1);
}

void func_283(var uParam0, int iParam1)//Position - 0x8E40
{
	*uParam0 = iParam1;
}

void func_284()//Position - 0x8E4D
{
	Global_2458365 = 1;
}

int func_285(int iParam0)//Position - 0x8E5A
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_286(int iParam0)//Position - 0x8EA0
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

bool func_287(int iParam0)//Position - 0x9164
{
	return func_96(iParam0, 19);
}

bool func_288()//Position - 0x9174
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_289()//Position - 0x918A
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_157.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_311() && !func_91(unk_0x9EB17624F44A8DA4()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_93();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_157.f_4[iVar7] > -1)
			{
				iVar18 = unk_0x2B957AC89DEBA5B6(Local_157.f_4[iVar7]);
				if (unk_0x012BC3F18B8C7807(iVar18))
				{
					iVar1 = unk_0x43E1A43A1AA9E0BE(iVar18);
					if (func_12(iVar1, 0, 1))
					{
						if (!func_14(iVar1, 0))
						{
							if (Local_1523[Local_157.f_4[iVar7] /*12*/].f_4 != 0)
							{
								iVar0[iVar15] = iVar1;
								func_271(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1523[Local_157.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_247(1))
								{
									if (func_81(iVar1, 1))
									{
										uVar17[iVar7] = func_66(iVar1, -2, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x622FF3AE4B1D07C3();
		if (func_91(unk_0x9EB17624F44A8DA4()))
		{
			iVar19 = func_309();
			iVar20 = unk_0xDF35170AEEFB473B(iVar19);
			if (unk_0x552F39AE86E07792(iVar20))
			{
				iVar21 = unk_0x87678BB8392EFD41(iVar20);
				if (unk_0x012BC3F18B8C7807(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_271(&iVar4, &fVar9, iLocal_130, 1);
		func_271(&iVar5, &fVar10, Local_1523[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_486(&(Local_157.f_39), 0, 0);
		iVar6 = func_484(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_308(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (unk_0xC80D31E4B587871C(iLocal_128, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_311() || Local_157.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_157.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_304(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_270(Local_157.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_268())
		{
			func_303(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_294(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_270(Local_157.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_305(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_290();
	}
}

void func_290()//Position - 0x947C
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_293();
	if (fVar0 >= 0f)
	{
		if (Local_157.f_37 == 3)
		{
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iVar1, 0))
					{
						func_292(iVar1, &fLocal_134);
						fVar2 = (fVar0 + fLocal_134);
						unk_0x2DEDE82792FFFD0B(fVar2, 1, 21);
						func_291(fVar0);
						return;
					}
				}
			}
		}
		if (func_279("AMCH_FLYLOW"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (unk_0xC80D31E4B587871C(iLocal_128, 4))
		{
			unk_0x0B9D04994D02CC2F(iLocal_136);
			unk_0x0EE72DB1CD8A3B86(&iLocal_128, 4);
		}
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
	}
}

void func_291(float fParam0)//Position - 0x952B
{
	float fVar0;
	
	if (unk_0xE7DB469922CDD348(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_487(6);
			if (!unk_0xC80D31E4B587871C(iLocal_128, 4))
			{
				unk_0x4AFBCBFDE748D4E0(iLocal_136, "Altitude_Warning", "EXILE_1", 1);
				unk_0x872F1C1F8587CCC7(&iLocal_128, 4);
			}
		}
		else
		{
			if (func_279("AMCH_FLYLOW"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (unk_0xC80D31E4B587871C(iLocal_128, 4))
			{
				unk_0x0B9D04994D02CC2F(iLocal_136);
				unk_0x0EE72DB1CD8A3B86(&iLocal_128, 4);
			}
		}
	}
}

float func_292(int iParam0, var uParam1)//Position - 0x959D
{
	float fVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	unk_0x7367FB97975F1E29(vVar1, uParam1, 1, 0);
	unk_0x7367FB97975F1E29(vVar1, &uVar2, 0, 0);
	if (unk_0x92FE3C543957BEC7())
	{
		func_487(3);
		unk_0x872F1C1F8587CCC7(&iLocal_128, 10);
		func_27(&uLocal_124, 0, 0);
	}
	else if (unk_0xC80D31E4B587871C(iLocal_128, 10))
	{
		if (func_1(&uLocal_124, 2000, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_128, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (vVar1.z - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_293()//Position - 0x9633
{
	switch (Local_157.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0x9662
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_295(iParam3, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_295(iParam4, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_295(iParam5, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_295(iParam7, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_131();
}

void func_295(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x9929
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
			if (func_134(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_133(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
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
		if (iParam15 == 5 && func_297())
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
			if (func_296())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_296()//Position - 0x9B8B
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

int func_297()//Position - 0x9BAF
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_298(int iParam0, char* sParam1)//Position - 0x9BED
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

void func_299()//Position - 0x9C8F
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
}

int func_300(bool bParam0)//Position - 0x9CB2
{
	if (func_302())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_301()//Position - 0x9CE9
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_302()//Position - 0x9D00
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x9D12
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_132(iParam3, &(Global_2457899[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_132(iParam4, &(Global_2457899[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_132(iParam5, &(Global_2457899[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0);
		}
	}
	if (bParam11)
	{
		func_132(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_132(iParam7, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_132(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_132(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam13))
	{
		sVar2 = sParam13;
	}
	func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0);
	*iParam9 = 0;
	func_131();
}

void func_304(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0x9F94
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_300(0) == 0)
	{
		return;
	}
	func_299();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_298(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_295(-1, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_298(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_295(-1, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_93())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_298(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_295(-1, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1);
		}
	}
	if (bParam12)
	{
		func_295(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x9EB17624F44A8DA4() != func_93())
			{
				if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
				{
					func_295(-1, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 2:
			if (func_151(unk_0x9EB17624F44A8DA4()) == 0)
			{
				func_295(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_205(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_132(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	}
	*iParam10 = 0;
	func_131();
}

char* func_305()//Position - 0xA266
{
	return "HUD_COUNTDOWN";
	switch (func_307(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_306())
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

int func_306()//Position - 0xA410
{
	if (func_307(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

int func_307(int iParam0)//Position - 0xA433
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

void func_308(int iParam0)//Position - 0xA452
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

var func_309()//Position - 0xA835
{
	if (unk_0x6ADD12BF4D6D2587(func_310()))
	{
		return func_310();
	}
	return func_88();
}

var func_310()//Position - 0xA853
{
	return Global_2359302.f_3;
}

int func_311()//Position - 0xA861
{
	switch (Local_157.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_312()//Position - 0xA8BA
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		Local_178.f_532[iVar0 /*42*/] = { Var1 };
		Local_178.f_532[iVar0 /*42*/].f_1 = func_93();
		if (Local_157.f_4[iVar0] > -1)
		{
			iVar3 = unk_0x2B957AC89DEBA5B6(Local_157.f_4[iVar0]);
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar2 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (!func_14(iVar2, 0))
				{
					Local_178.f_532[iVar0 /*42*/] = Local_157.f_4[iVar0];
					Local_178.f_532[iVar0 /*42*/].f_1 = iVar2;
					Local_178.f_532[iVar0 /*42*/].f_9 = Local_1523[Local_157.f_4[iVar0] /*12*/].f_4;
					Local_178.f_532[iVar0 /*42*/].f_31 = -1;
					Local_178.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_313()//Position - 0xA9A7
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 19);
}

int func_314(int iParam0)//Position - 0xA9BC
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_157.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1523[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_315()//Position - 0xA9F1
{
}

void func_316()//Position - 0xA9F9
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_271(&iVar1, &fVar2, iLocal_130, 1);
	switch (Local_157.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_318(sVar0, fVar2 >= 70f);
			if (unk_0x771D0F8F56A5FE6C(sVar0))
			{
				fVar2 = func_317(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x7141949B801AEE10(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0x3A9A044699CCEF85();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_318(sVar0, bVar3);
			if (unk_0x771D0F8F56A5FE6C(sVar0))
			{
				fVar2 = system::to_float(iVar1);
				fVar2 = func_317(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_317(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x7141949B801AEE10(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_135 != iLocal_130)
			{
				if (iLocal_130 > 0)
				{
					unk_0x4AFBCBFDE748D4E0(iLocal_137, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0x922FC70048B5A79D(iLocal_137, "Count", system::to_float(iVar1));
				}
				else
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_135 = iLocal_130;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_128, 3))
		{
			if (func_243(1))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x872F1C1F8587CCC7(&iLocal_128, 3);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_128, 3))
	{
		if (func_243(1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 3);
	}
}

float func_317(float fParam0, float fParam1)//Position - 0xABB6
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_318(char* sParam0, bool bParam1)//Position - 0xABCD
{
	if (bParam1)
	{
		if (!unk_0x771D0F8F56A5FE6C(sParam0))
		{
			unk_0xE859EF37EA7362D3(sParam0);
		}
	}
	else if (unk_0x771D0F8F56A5FE6C(sParam0))
	{
		unk_0xE02E32C69260FBB7(sParam0);
	}
}

void func_319()//Position - 0xABFD
{
	int iVar0;
	
	if ((!func_151(unk_0x9EB17624F44A8DA4()) && !func_14(unk_0x9EB17624F44A8DA4(), 0)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		iVar0 = func_337();
		if (iVar0 != Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_127) || func_336(iVar0, iLocal_127))
			{
				if (!func_335() || func_1(&uLocal_116, 1000, 0))
				{
					func_27(&uLocal_116, 0, 0);
					iLocal_127 = iVar0;
					Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4 = iVar0;
					func_322();
					if (iLocal_126 == 0)
					{
						iLocal_126 = unk_0xD1952A425B78FFC0();
					}
					if (Local_1524.f_11 == 0)
					{
						Local_1524.f_11 = unk_0xE3CCAFB1555348DF();
					}
				}
			}
		}
		iLocal_130 = func_320();
	}
}

int func_320()//Position - 0xACBF
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_157.f_3)
	{
		case 0:
			fVar1 = unk_0x5249AFE23503DD05();
			break;
		
		case 1:
			fVar1 = unk_0x04B720F906900217();
			break;
		
		case 2:
			fVar1 = unk_0x3A9A044699CCEF85();
			break;
		
		case 3:
			fVar1 = unk_0x3682ED984C450F9F();
			break;
		
		case 4:
			fVar1 = unk_0x729402EB709E710E();
			break;
		
		case 5:
			fVar1 = unk_0xF103830CA9DBB44D();
			break;
		
		case 8:
			iVar0 = unk_0x338887B2D3371198();
			break;
		
		case 9:
			fVar1 = unk_0xCC9AACF142ADCD92();
			break;
		
		case 11:
			fVar1 = unk_0x2620512698D563B1();
			break;
		
		case 12:
			fVar1 = unk_0x2620512698D563B1();
			break;
		
		case 13:
			fVar1 = unk_0xC0B8128D694DABAA();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = system::round(fVar1);
	}
	iVar2 = unk_0xB89BB11E0945F6F0(iVar0);
	func_321(&iVar2);
	if (iVar2 == iLocal_129)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_128, 1))
			{
				func_27(&uLocal_118, 0, 0);
				Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_2 = func_486(&uLocal_118, 0, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_128, 1);
			}
			else if ((func_486(&uLocal_118, 0, 0) % 1000) == 0)
			{
				Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_2 = func_486(&uLocal_118, 0, 0);
			}
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 1);
	}
	if ((func_21(iLocal_129, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_120, 2000, 0))
	{
		iVar2 = iLocal_129;
		unk_0x872F1C1F8587CCC7(&iLocal_128, 2);
	}
	else
	{
		iLocal_129 = iVar2;
		func_44(&uLocal_120);
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 2);
	}
	return iVar2;
}

void func_321(int iParam0)//Position - 0xAE6F
{
	switch (Local_157.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((((unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()) || unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) || unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_322()//Position - 0xAEF8
{
	if (!unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1, 2))
	{
		unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_1), 2);
		func_323(1);
	}
}

void func_323(bool bParam0)//Position - 0xAF29
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
		{
			if (func_154())
			{
				func_328(0);
				func_327();
			}
			if (func_326(0))
			{
				uVar0 = func_196(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, 0);
				func_327();
			}
			if (func_326(func_325(func_307(unk_0x9EB17624F44A8DA4()))))
			{
				uVar0 = func_196(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, func_325(func_307(unk_0x9EB17624F44A8DA4())));
				func_327();
			}
			if (func_324())
			{
				func_327();
			}
			if (func_307(unk_0x9EB17624F44A8DA4()) > -1)
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

int func_324()//Position - 0xB001
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_325(int iParam0)//Position - 0xB01B
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

bool func_326(int iParam0)//Position - 0xB09E
{
	int iVar0;
	
	iVar0 = func_196(2469, -1, 0);
	return unk_0xC80D31E4B587871C(iVar0, iParam0);
}

void func_327()//Position - 0xB0B9
{
	if (func_324())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_328(int iParam0)//Position - 0xB0D2
{
	if (func_154())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_27(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_27(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_334(1);
		}
		if ((!unk_0x4916190900E76373() && !func_333()) && !func_329(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_329(int iParam0)//Position - 0xB16C
{
	if (func_330(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0, bool bParam1)//Position - 0xB190
{
	if (bParam1)
	{
		if (func_331(iParam0))
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

bool func_331(int iParam0)//Position - 0xB1BC
{
	return func_332(iParam0);
}

bool func_332(int iParam0)//Position - 0xB1CA
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_333()//Position - 0xB1E4
{
	return Global_2447174.f_727;
}

void func_334(bool bParam0)//Position - 0xB1F3
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_154())
		{
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 0))
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
			if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
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

int func_335()//Position - 0xB2EC
{
	switch (Local_157.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_336(int iParam0, int iParam1)//Position - 0xB34B
{
	if (Local_157.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_337()//Position - 0xB369
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_352())
	{
		if (Local_157.f_3 == 14)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_351(unk_0xFC1458A37D98B502(), 0) == -1)
			{
				iVar2 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if ((!func_350(&iVar2, 0) || unk_0x82FF3DFBC3965CC0(iVar2) != joaat("dodo")) && unk_0x0ACC2116170FA204(iVar2))
				{
					func_343(Local_157.f_3 != 14, 1, 0);
					if (func_342())
					{
						iVar3 = func_341();
						if (iVar3 >= 0)
						{
							if (!unk_0xC80D31E4B587871C(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_8[func_340(iVar3)], func_339(iVar3)))
							{
								iLocal_131++;
								unk_0x872F1C1F8587CCC7(&(Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_8[func_340(iVar3)]), func_339(iVar3));
							}
						}
					}
					iVar0 = iLocal_131;
				}
			}
		}
		else
		{
			iVar0 = func_338();
		}
	}
	else
	{
		unk_0xD705126DBAD7A0C6(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = system::round(fVar1);
	}
	return unk_0xB89BB11E0945F6F0(iVar0);
}

int func_338()//Position - 0xB472
{
	switch (Local_157.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_339(int iParam0)//Position - 0xB499
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_340(iParam0) * 31);
}

int func_340(int iParam0)//Position - 0xB4CA
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_341()//Position - 0xB4F0
{
	return iLocal_98;
}

int func_342()//Position - 0xB4FA
{
	if (iLocal_105 == 1)
	{
		iLocal_105 = 0;
		return 1;
	}
	return 0;
}

void func_343(bool bParam0, bool bParam1, int iParam2)//Position - 0xB510
{
	func_345(bParam0, iParam2);
	if (bParam1)
	{
		if (vLocal_109.z < vLocal_110.z)
		{
			vLocal_109.z = 0f;
		}
		else
		{
			vLocal_110.z = 0f;
		}
		if (vLocal_111.z < vLocal_112.z)
		{
			vLocal_111.z = 0f;
		}
		else
		{
			vLocal_112.z = 0f;
		}
	}
	switch (iLocal_99)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vLocal_107[iLocal_98 /*3*/]) < fLocal_108)
				{
					if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
					{
						if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0))
							{
								bLocal_100 = true;
								iLocal_99 = 1;
							}
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
							{
								bLocal_101 = true;
								iLocal_99 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					func_344();
				}
				else if (!unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					func_344();
				}
				else if (!unk_0x0ACC2116170FA204(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && !bParam1)
				{
					func_344();
				}
				if (bLocal_100)
				{
					if (iLocal_104)
					{
						if (iLocal_103)
						{
							if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
							{
								func_344();
								iLocal_105 = 1;
							}
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
						{
							iLocal_103 = 1;
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
						{
							func_344();
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
					{
						func_344();
					}
				}
				else if (bLocal_101)
				{
					if (iLocal_104)
					{
						if (iLocal_102)
						{
							if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
							{
								func_344();
								iLocal_105 = 1;
							}
						}
						else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
						{
							iLocal_102 = 1;
						}
						else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
						{
							func_344();
						}
					}
					else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
					{
						iLocal_104 = 1;
					}
					else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_109, vLocal_110, fLocal_113, 0, 1, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_111, vLocal_112, fLocal_113, 0, 1, 0))
					{
						func_344();
					}
				}
			}
			break;
	}
}

void func_344()//Position - 0xB910
{
	bLocal_100 = false;
	bLocal_101 = false;
	iLocal_102 = 0;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_99 = 0;
}

void func_345(var uParam0, var uParam1)//Position - 0xB92A
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	vLocal_106 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_349(iVar0)) && (uParam1 || !func_348(iVar0)))
		{
			if (func_347(vLocal_106, vLocal_107[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = system::vdist(vLocal_106, vLocal_107[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_98 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_346(iLocal_98);
}

void func_346(int iParam0)//Position - 0xB9C0
{
	switch (iParam0)
	{
		case 0:
			vLocal_109 = { 1103,014f, -233,0374f, 56,13004f };
			vLocal_110 = { 1073,191f, -214,8478f, 66,0593f };
			fLocal_113 = 30f;
			vLocal_111 = { 1093,589f, -248,5926f, 56,88639f };
			vLocal_112 = { 1063,774f, -230,1425f, 66,67847f };
			break;
		
		case 1:
			vLocal_109 = { 1044,182f, -324,5904f, 49,33408f };
			vLocal_110 = { 1016,71f, -307,7383f, 64,81343f };
			fLocal_113 = 30f;
			vLocal_111 = { 1007,983f, -320,6159f, 48,4543f };
			vLocal_112 = { 1036,007f, -337,4204f, 64,4808f };
			break;
		
		case 2:
			vLocal_109 = { 916,599f, -419,8782f, 35,62748f };
			vLocal_110 = { 910,3793f, -383,8826f, 47,54339f };
			fLocal_113 = 7f;
			vLocal_111 = { 912,1362f, -420,5161f, 35,38034f };
			vLocal_112 = { 906,8952f, -384,6779f, 47,24926f };
			break;
		
		case 3:
			vLocal_109 = { 757,7189f, -472,924f, 19,2535f };
			vLocal_110 = { 696,5936f, -420,2115f, 35,46084f };
			fLocal_113 = 20,75f;
			vLocal_111 = { 744,9114f, -480,7373f, 19,06514f };
			vLocal_112 = { 682,5614f, -429,5533f, 37,0266f };
			break;
		
		case 4:
			vLocal_109 = { 680,3677f, -581,1792f, 14,2145f };
			vLocal_110 = { 599,8101f, -528,3059f, 33,40958f };
			fLocal_113 = 45f;
			vLocal_111 = { 667,3692f, -610,5356f, 13,85401f };
			vLocal_112 = { 582,8433f, -556,7818f, 33,40335f };
			break;
		
		case 5:
			vLocal_109 = { 644,2497f, -844,7504f, 12,36707f };
			vLocal_110 = { 526,8608f, -845,2521f, 35,9896f };
			fLocal_113 = 25f;
			vLocal_111 = { 644,3659f, -859,3878f, 12,59677f };
			vLocal_112 = { 526,8615f, -857,5208f, 36,32857f };
			break;
		
		case 6:
			vLocal_109 = { 634,972f, -1011,64f, 10,92594f };
			vLocal_110 = { 539,6501f, -1024,017f, 35,95852f };
			fLocal_113 = 25f;
			vLocal_111 = { 634,9612f, -1029,123f, 10,61846f };
			vLocal_112 = { 543,4893f, -1038,261f, 35,9593f };
			break;
		
		case 7:
			vLocal_109 = { 645,7223f, -1191,215f, 10,45198f };
			vLocal_110 = { 524,3018f, -1197,167f, 39,61172f };
			fLocal_113 = 50f;
			vLocal_111 = { 645,7223f, -1228,966f, 10,98015f };
			vLocal_112 = { 521,9379f, -1217,607f, 39,47172f };
			break;
		
		case 8:
			vLocal_109 = { 642,1216f, -1295,73f, 9,005976f };
			vLocal_110 = { 568,1702f, -1375,351f, 20,12989f };
			fLocal_113 = 7f;
			vLocal_111 = { 644,7772f, -1298,168f, 9,128529f };
			vLocal_112 = { 571,6342f, -1378,644f, 20,35802f };
			break;
		
		case 9:
			vLocal_109 = { 686,5675f, -1444,71f, 9,065001f };
			vLocal_110 = { 598,9328f, -1444,438f, 25,68846f };
			fLocal_113 = 25f;
			vLocal_111 = { 682,3027f, -1429,872f, 9,890836f };
			vLocal_112 = { 593,8217f, -1432,995f, 25,60072f };
			break;
		
		case 10:
			vLocal_109 = { 718,7617f, -1734,313f, 9,082874f };
			vLocal_110 = { 615,0017f, -1725,897f, 27,54585f };
			fLocal_113 = 30f;
			vLocal_111 = { 717,5355f, -1748,646f, 9,363478f };
			vLocal_112 = { 614,218f, -1734,848f, 27,35708f };
			break;
		
		case 11:
			vLocal_109 = { 694,3165f, -2049,806f, 0,009695f };
			vLocal_110 = { 618,6845f, -2040,014f, 25,83412f };
			fLocal_113 = 30f;
			vLocal_111 = { 693,1836f, -2063,225f, 0,429037f };
			vLocal_112 = { 607,5944f, -2055,326f, 26,91816f };
			break;
		
		case 12:
			vLocal_109 = { 642,6671f, -2494,551f, 0,468485f };
			vLocal_110 = { 570,1807f, -2513,959f, 11,78794f };
			fLocal_113 = 20f;
			vLocal_111 = { 647,0339f, -2506,202f, 0,583701f };
			vLocal_112 = { 571,1415f, -2522,975f, 10,45045f };
			break;
		
		case 13:
			vLocal_109 = { 691,8235f, -2558,219f, 0,363352f };
			vLocal_110 = { 645,8863f, -2600,311f, 9,898791f };
			fLocal_113 = 10,25f;
			vLocal_111 = { 695,7928f, -2561,034f, 0,346731f };
			vLocal_112 = { 656,3919f, -2601,972f, 9,643657f };
			break;
		
		case 14:
			vLocal_109 = { 723,6254f, -2562,171f, 0,255647f };
			vLocal_110 = { 720,752f, -2619,77f, 15,73211f };
			fLocal_113 = 15f;
			vLocal_111 = { 735,765f, -2561,935f, 0,311182f };
			vLocal_112 = { 736,1214f, -2618,767f, 15,79061f };
			break;
		
		case 15:
			vLocal_109 = { 891,4387f, -2603,12f, 0f };
			vLocal_110 = { 704,4932f, -2634,793f, 45f };
			fLocal_113 = 20f;
			vLocal_111 = { 893,2578f, -2616,235f, 0f };
			vLocal_112 = { 707,7261f, -2647,696f, 45f };
			break;
		
		case 16:
			vLocal_109 = { -2669,587f, 2491,96f, 2,043799f };
			vLocal_110 = { -2617,765f, 2841,595f, 14,0822f };
			fLocal_113 = 26,5f;
			vLocal_111 = { -2687,606f, 2494,868f, 2,608733f };
			vLocal_112 = { -2637,085f, 2846,875f, 14,15988f };
			break;
		
		case 17:
			vLocal_109 = { -1986,173f, 4521,799f, 0f };
			vLocal_110 = { -1809,903f, 4699,551f, 53,5088f };
			fLocal_113 = 17f;
			vLocal_111 = { -1995,668f, 4531,259f, 0f };
			vLocal_112 = { -1817,543f, 4708,395f, 53,50917f };
			break;
		
		case 18:
			vLocal_109 = { -526,0265f, 4472,442f, 0f };
			vLocal_110 = { -505,5714f, 4335,725f, 86,73311f };
			fLocal_113 = 10f;
			vLocal_111 = { -519,9281f, 4476,346f, 0f };
			vLocal_112 = { -500,7313f, 4336,389f, 86,71289f };
			break;
		
		case 19:
			vLocal_109 = { 98,1615f, 3384,489f, 45,45169f };
			vLocal_110 = { 154,974f, 3350,694f, 30,03358f };
			fLocal_113 = 8f;
			vLocal_111 = { 152,6802f, 3346,793f, 45,02156f };
			vLocal_112 = { 95,57188f, 3380,091f, 30,43284f };
			break;
		
		case 20:
			vLocal_109 = { 147,8606f, 3406,796f, 38,03672f };
			vLocal_110 = { 126,1329f, 3416,927f, 30,02987f };
			fLocal_113 = 14,5f;
			vLocal_111 = { 130,0916f, 3425,417f, 38,05672f };
			vLocal_112 = { 151,8703f, 3415,391f, 30,0578f };
			break;
		
		case 21:
			vLocal_109 = { 2830,972f, 4967,14f, 34,56013f };
			vLocal_110 = { 2818,719f, 4992,298f, 51,2909f };
			fLocal_113 = 10f;
			vLocal_111 = { 2826,767f, 4964,185f, 34,10636f };
			vLocal_112 = { 2814,216f, 4989,983f, 51,21849f };
			break;
		
		case 22:
			vLocal_109 = { -151,5764f, 4264,417f, 31,04735f };
			vLocal_110 = { -193,1962f, 4224,604f, 43,87255f };
			fLocal_113 = 10f;
			vLocal_111 = { -148,3842f, 4261,071f, 31,57409f };
			vLocal_112 = { -190,4719f, 4222,076f, 43,95443f };
			break;
		
		case 23:
			vLocal_109 = { -426,6919f, 2964,272f, 14,848f };
			vLocal_110 = { -396,2298f, 2959,278f, 23,50637f };
			fLocal_113 = 7f;
			vLocal_111 = { -425,0283f, 2967,861f, 15,22699f };
			vLocal_112 = { -395,6073f, 2962,607f, 24,38079f };
			break;
		
		case 24:
			vLocal_109 = { -192,3414f, 2864,916f, 30,72595f };
			vLocal_110 = { -170,1509f, 2857,128f, 43,94182f };
			fLocal_113 = 10f;
			vLocal_111 = { -192,0129f, 2871,603f, 29,99943f };
			vLocal_112 = { -169,5957f, 2863,838f, 44,03251f };
			break;
		
		case 25:
			vLocal_109 = { 2539,185f, 2228,772f, 18,6102f };
			vLocal_110 = { 2574,373f, 2169,401f, 27,26598f };
			fLocal_113 = 10f;
			vLocal_111 = { 2543,708f, 2231,402f, 18,331f };
			vLocal_112 = { 2578,079f, 2171,584f, 27,26057f };
			break;
		
		case 26:
			vLocal_109 = { 2954,087f, 815,7209f, 0,037901f };
			vLocal_110 = { 2933,189f, 796,4688f, 12,98392f };
			fLocal_113 = 35f;
			vLocal_111 = { 2966,123f, 806,8889f, 0,544056f };
			vLocal_112 = { 2950,801f, 786,7816f, 11,74596f };
			break;
		
		case 27:
			vLocal_109 = { 2329,673f, -459,6648f, 70,24277f };
			vLocal_110 = { 2413,384f, -361,2188f, 91,77886f };
			fLocal_113 = 12f;
			vLocal_111 = { 2324,752f, -455,5238f, 70,25145f };
			vLocal_112 = { 2407,409f, -356,2003f, 91,43083f };
			break;
		
		case 28:
			vLocal_109 = { 1943,428f, -753,251f, 80,17905f };
			vLocal_110 = { 1850,365f, -760,9587f, 93,02522f };
			fLocal_113 = 7f;
			vLocal_111 = { 1943,366f, -758,287f, 80,32291f };
			vLocal_112 = { 1851,354f, -765,1807f, 92,93546f };
			break;
		
		case 29:
			vLocal_109 = { -271,2849f, -2414,993f, -10f };
			vLocal_110 = { -542,9096f, -2225,856f, 52,65004f };
			fLocal_113 = 30f;
			vLocal_111 = { -279,8399f, -2427,212f, -10f };
			vLocal_112 = { -551,2656f, -2237,791f, 52,64634f };
			break;
		
		case 30:
			vLocal_109 = { -1483f, 2691,428f, -10f };
			vLocal_110 = { -1377,168f, 2600,769f, 15,95528f };
			fLocal_113 = 12f;
			vLocal_111 = { -1478,152f, 2696,688f, -10f };
			vLocal_112 = { -1378,503f, 2608,698f, 15,60924f };
			break;
		
		case 31:
			vLocal_109 = { 222,1519f, -2343,487f, 0,039199f };
			vLocal_110 = { 222,6849f, -2297,407f, 7,088753f };
			fLocal_113 = 12f;
			vLocal_111 = { 216,959f, -2343,487f, 0,207734f };
			vLocal_112 = { 216,602f, -2295,445f, 7,424279f };
			break;
		
		case 32:
			vLocal_109 = { 346,4622f, -2244,374f, 0,159779f };
			vLocal_110 = { 346,8347f, -2389,591f, 7,852059f };
			fLocal_113 = 20f;
			vLocal_111 = { 359,609f, -2244,468f, 0,129684f };
			vLocal_112 = { 355,4054f, -2390,258f, 7,080691f };
			break;
		
		case 33:
			vLocal_109 = { -1859,68f, -322,6357f, 56,16368f };
			vLocal_110 = { -1836,614f, -335,4141f, 96,1161f };
			fLocal_113 = 7,5f;
			vLocal_111 = { -1860,27f, -327,8634f, 57,543f };
			vLocal_112 = { -1837,271f, -339,2227f, 95,69325f };
			break;
		
		case 34:
			vLocal_109 = { -680,2632f, -600,818f, 69,11289f };
			vLocal_110 = { -706,6613f, -600,7515f, 30,47604f };
			fLocal_113 = 31,5f;
			vLocal_111 = { -680,6077f, -618,3658f, 69,27496f };
			vLocal_112 = { -706,3596f, -618,2385f, 30,31235f };
			break;
		
		case 35:
			vLocal_109 = { -1468,096f, -591,7158f, 67,05518f };
			vLocal_110 = { -1454,7f, -573,4518f, 29,56736f };
			fLocal_113 = 11,75f;
			vLocal_111 = { -1474,903f, -591,1215f, 67,08091f };
			vLocal_112 = { -1457,173f, -568,1316f, 29,44059f };
			break;
		
		case 36:
			vLocal_109 = { -1544,958f, -537,1475f, 72,44347f };
			vLocal_110 = { -1564,616f, -551,1829f, 32,86163f };
			fLocal_113 = 11,75f;
			vLocal_111 = { -1541,008f, -541,5494f, 71,61972f };
			vLocal_112 = { -1561,219f, -555,868f, 32,9279f };
			break;
		
		case 37:
			vLocal_109 = { 333,2108f, -2727,274f, 20,71663f };
			vLocal_110 = { 333,4297f, -2791,609f, 41,99023f };
			fLocal_113 = 20f;
			vLocal_111 = { 343,1127f, -2727,236f, 20,23613f };
			vLocal_112 = { 343,6678f, -2791,602f, 41,37928f };
			break;
		
		case 38:
			vLocal_109 = { 1928,071f, 6228,355f, 43,49398f };
			vLocal_110 = { 2039,882f, 6167,397f, 55,46405f };
			fLocal_113 = 13f;
			vLocal_111 = { 1931,82f, 6235,634f, 43,37382f };
			vLocal_112 = { 2039,598f, 6176,525f, 55,25597f };
			break;
		
		case 39:
			vLocal_109 = { -736,4309f, -1590,921f, 10,80892f };
			vLocal_110 = { -710,811f, -1516,349f, -0,098598f };
			fLocal_113 = 15f;
			vLocal_111 = { -727,2307f, -1585,221f, 11,78027f };
			vLocal_112 = { -700,0201f, -1511,783f, -0,341655f };
			break;
		
		case 40:
			vLocal_109 = { -676,3775f, -1548,553f, 12,33747f };
			vLocal_110 = { -659,329f, -1507,063f, -0,788618f };
			fLocal_113 = 25f;
			vLocal_111 = { -654,203f, -1536,146f, 9,191055f };
			vLocal_112 = { -645,9954f, -1500,219f, -2,406948f };
			break;
		
		case 41:
			vLocal_109 = { -624,2344f, -1537,045f, 12,60193f };
			vLocal_110 = { -622,1749f, -1472,877f, -0,292606f };
			fLocal_113 = 8f;
			vLocal_111 = { -615,4003f, -1536,65f, 12,40271f };
			vLocal_112 = { -619,7385f, -1472,937f, -0,243267f };
			break;
		
		case 42:
			vLocal_109 = { -492,5057f, -1632,457f, 24,3307f };
			vLocal_110 = { -418,2088f, -1487,452f, 0f };
			fLocal_113 = 25f;
			vLocal_111 = { -486,2016f, -1636,095f, 24,20805f };
			vLocal_112 = { -398,7648f, -1490,44f, 0f };
			break;
		
		case 43:
			vLocal_109 = { -359,3541f, -1639,693f, 13,13455f };
			vLocal_110 = { -388,4955f, -1690,945f, -0,183164f };
			fLocal_113 = 25f;
			vLocal_111 = { -378,1518f, -1705,66f, 12,47196f };
			vLocal_112 = { -348,9591f, -1654,411f, 0,193478f };
			break;
		
		case 44:
			vLocal_109 = { -243,4436f, -1814,623f, 25,69465f };
			vLocal_110 = { -183,9987f, -1780,645f, -0,085802f };
			fLocal_113 = 25f;
			vLocal_111 = { -235,1319f, -1822,094f, 25,86542f };
			vLocal_112 = { -175,5105f, -1788,275f, -0,506062f };
			break;
		
		case 45:
			vLocal_109 = { 84,55537f, -2046,159f, 13,30767f };
			vLocal_110 = { 17,93164f, -2045,152f, -0,031946f };
			fLocal_113 = 25f;
			vLocal_111 = { 17,90788f, -2035,773f, 12,62706f };
			vLocal_112 = { 84,57207f, -2034,184f, 0,048385f };
			break;
		
		case 46:
			vLocal_109 = { 221,5029f, -2232,766f, 9,88676f };
			vLocal_110 = { 221,6825f, -2244,081f, 4,479149f };
			fLocal_113 = 8f;
			vLocal_111 = { 218,583f, -2232,766f, 9,886198f };
			vLocal_112 = { 218,729f, -2244,081f, 4,535046f };
			break;
		
		case 47:
			vLocal_109 = { 221,6518f, -2184,635f, 11,66457f };
			vLocal_110 = { 221,6139f, -2208,137f, 5,876424f };
			fLocal_113 = 8f;
			vLocal_111 = { 217,8995f, -2184,635f, 11,5405f };
			vLocal_112 = { 218,3327f, -2208,137f, 5,864793f };
			break;
		
		case 48:
			vLocal_109 = { 2326,57f, 1096,031f, 76,31458f };
			vLocal_110 = { 2290,332f, 1136,131f, 58,85706f };
			fLocal_113 = 21f;
			vLocal_111 = { 2334,453f, 1103,067f, 76,26603f };
			vLocal_112 = { 2297,846f, 1142,897f, 58,84243f };
			break;
		
		case 49:
			vLocal_109 = { 2379,442f, 1150,776f, 58,79632f };
			vLocal_110 = { 2327,658f, 1212,366f, 72,8333f };
			fLocal_113 = 12f;
			vLocal_111 = { 2374,064f, 1146,282f, 58,83331f };
			vLocal_112 = { 2320,895f, 1209,596f, 72,79299f };
			break;
		
		case 50:
			vLocal_109 = { -1179,405f, -355,2554f, 56,53003f };
			vLocal_110 = { -1198,064f, -357,8363f, 35,35551f };
			fLocal_113 = 12,5f;
			vLocal_111 = { -1178,385f, -361,8784f, 56,15081f };
			vLocal_112 = { -1197,104f, -364,7004f, 36,49475f };
			break;
		
		case 51:
			vLocal_109 = { -921,3846f, -384,94f, 137,0181f };
			vLocal_110 = { -912,4324f, -429,229f, 36,70113f };
			fLocal_113 = 16f;
			vLocal_111 = { -914,1658f, -387,9444f, 137,0794f };
			vLocal_112 = { -906,2534f, -424,691f, 47,11882f };
			break;
		
		case 52:
			vLocal_109 = { -740,2564f, 246,4529f, 132,2922f };
			vLocal_110 = { -718,3602f, 201,0042f, 80,95571f };
			fLocal_113 = 22f;
			vLocal_111 = { -726,6429f, 253,0676f, 132,3319f };
			vLocal_112 = { -705,5858f, 210,4336f, 78,70573f };
			break;
		
		case 53:
			vLocal_109 = { -771,2068f, 268,2729f, 132,1689f };
			vLocal_110 = { -778,3417f, 313,1148f, 84,27054f };
			fLocal_113 = 16f;
			vLocal_111 = { -770,8035f, 310,8625f, 137,4161f };
			vLocal_112 = { -763,0681f, 269,044f, 83,31474f };
			break;
		
		case 54:
			vLocal_109 = { 259,2205f, 135,4146f, 136,7083f };
			vLocal_110 = { 279,2396f, 128,1379f, 100,8233f };
			fLocal_113 = 16f;
			vLocal_111 = { 261,9694f, 142,9676f, 136,6889f };
			vLocal_112 = { 281,7203f, 134,9551f, 100,7704f };
			break;
		
		case 55:
			vLocal_109 = { 393,548f, -30,87166f, 152,6635f };
			vLocal_110 = { 369,9622f, -23,88461f, 88,35776f };
			fLocal_113 = 8f;
			vLocal_111 = { 390,5358f, -36,08882f, 152,7813f };
			vLocal_112 = { 368,1275f, -28,81888f, 88,69447f };
			break;
		
		case 56:
			vLocal_109 = { 114,3139f, -648,4297f, 261,8488f };
			vLocal_110 = { 131,0782f, -733,7684f, 39,34393f };
			fLocal_113 = 20f;
			vLocal_111 = { 124,8467f, -646,6575f, 261,8488f };
			vLocal_112 = { 140,0502f, -737,427f, 39,3493f };
			break;
		
		case 57:
			vLocal_109 = { -215,919f, -823,8436f, 126,0224f };
			vLocal_110 = { -193,2237f, -761,7781f, 27,91382f };
			fLocal_113 = 20f;
			vLocal_111 = { -225,397f, -820,3937f, 126,0812f };
			vLocal_112 = { -202,9433f, -758,257f, 27,47734f };
			break;
		
		case 58:
			vLocal_109 = { -296,4725f, -802,0815f, 95,40108f };
			vLocal_110 = { -278,1352f, -747,7841f, 50,40046f };
			fLocal_113 = 20f;
			vLocal_111 = { -305,4602f, -798,8369f, 95,48194f };
			vLocal_112 = { -285,7376f, -745,0959f, 49,57651f };
			break;
		
		case 59:
			vLocal_109 = { -292,3034f, -823,3569f, 95,37621f };
			vLocal_110 = { -258,5991f, -835,5632f, 27,97946f };
			fLocal_113 = 20f;
			vLocal_111 = { -288,9206f, -814,022f, 95,37556f };
			vLocal_112 = { -255,2116f, -826,256f, 27,7375f };
			break;
		
		case 60:
			vLocal_109 = { -256,3589f, -714,7838f, 110,1617f };
			vLocal_110 = { -212,9054f, -730,532f, 32,21946f };
			fLocal_113 = 20f;
			vLocal_111 = { -253,7723f, -705,6632f, 110,1736f };
			vLocal_112 = { -210,0588f, -722,6748f, 32,46536f };
			break;
		
		case 61:
			vLocal_109 = { 1808,214f, 1949,246f, 71,73707f };
			vLocal_110 = { 1837,906f, 2127,283f, 52,80491f };
			fLocal_113 = 9,75f;
			vLocal_111 = { 1802,786f, 1950,262f, 71,74002f };
			vLocal_112 = { 1831,994f, 2127,433f, 52,83893f };
			break;
		
		case 62:
			vLocal_109 = { 2388,733f, 2931,941f, 46,62681f };
			vLocal_110 = { 2426,681f, 2883,066f, 36,21524f };
			fLocal_113 = 10f;
			vLocal_111 = { 2392,547f, 2934,867f, 46,6268f };
			vLocal_112 = { 2430,333f, 2885,908f, 36,28148f };
			break;
		
		case 63:
			vLocal_109 = { 2700,056f, 4836,381f, 42,07854f };
			vLocal_110 = { 2685,673f, 4893,38f, 30,90867f };
			fLocal_113 = 20,75f;
			vLocal_111 = { 2685,672f, 4821,653f, 42,18471f };
			vLocal_112 = { 2672,812f, 4880,356f, 31,13311f };
			break;
		
		case 64:
			vLocal_109 = { -1053,446f, 4766,245f, 234,3251f };
			vLocal_110 = { -1040,263f, 4737,157f, 204,4916f };
			fLocal_113 = 5f;
			vLocal_111 = { -1051,414f, 4767,193f, 234,4293f };
			vLocal_112 = { -1037,954f, 4738,354f, 204,5282f };
			break;
	}
}

int func_347(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD23F
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

int func_348(int iParam0)//Position - 0xD2BA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_349(int iParam0)//Position - 0xD30D
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_350(int iParam0, int iParam1)//Position - 0xD37E
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0) || iParam1)
		{
			if (unk_0x0BA31FF7931F3DD3(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1)//Position - 0xD3B3
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

int func_352()//Position - 0xD438
{
	switch (Local_157.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_353(vector3 vParam0, float fParam1, int iParam2)//Position - 0xD4BB
{
	int iVar0;
	
	iVar0 = -1;
	if (func_369() < 10)
	{
		iVar0 = func_368();
		func_354(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_354(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0xD4E8
{
	func_355(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_355(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD502
{
	struct<12> Var0;
	
	if (func_364(unk_0x9EB17624F44A8DA4()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_363(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_358(Var0))
		{
			Global_2405047.f_44.f_64 = func_357(unk_0x9EB17624F44A8DA4());
			func_356(Var0, iParam4);
		}
	}
}

void func_356(struct<12> Param0, int iParam1)//Position - 0xD578
{
	Global_2405047.f_361[iParam1 /*12*/] = { Param0 };
	Global_2405047.f_361[iParam1 /*12*/].f_9 = 1;
}

int func_357(int iParam0)//Position - 0xD5A1
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_358(struct<12> Param0)//Position - 0xD5C3
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405047.f_44[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_359(Global_2405047.f_44[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_359(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xD623
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_362(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_360(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_362(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_360(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (system::vmag(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_360(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xD75C
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0,7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_361(vParam0, vParam1, vVar0, vVar1);
}

int func_361(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xD7A0
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_362(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0xD7F7
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((system::vmag(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_363(var uParam0, var uParam1)//Position - 0xD822
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_364(int iParam0)//Position - 0xD8B9
{
	if (((func_367(iParam0, 1) || func_366(iParam0)) || func_101(iParam0, 0)) || func_365(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0xD8F5
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_366(int iParam0)//Position - 0xD918
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

bool func_367(int iParam0, bool bParam1)//Position - 0xD939
{
	if (Global_1312447 != 0)
	{
		return func_357(iParam0) != 0;
	}
	return func_330(iParam0, bParam1);
}

int func_368()//Position - 0xD95F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_369()//Position - 0xD991
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_370(char* sParam0, char* sParam1, char* sParam2)//Position - 0xD9C4
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	return unk_0x0683D2027E169355(0);
}

char* func_371(int iParam0)//Position - 0xD9E3
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_372(int iParam0)//Position - 0xDAEC
{
	switch (iParam0)
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
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_373(int iParam0)//Position - 0xDBF5
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_374()//Position - 0xDCFE
{
	if (!func_144())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_140();
}

void func_375(var uParam0)//Position - 0xDD2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_349(iVar0) && !func_348(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { vLocal_107[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_376()//Position - 0xDD6C
{
	if (!func_352())
	{
		if (Local_157.f_3 == 14)
		{
			func_379();
		}
		Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4.f_1 = func_338();
	}
	else if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 5)) && !func_378(unk_0x9EB17624F44A8DA4()))
	{
		func_377();
	}
}

void func_377()//Position - 0xDDD0
{
	switch (Local_157.f_3)
	{
		case 0:
			unk_0x24A693BA506F94EC(8, 2);
			break;
		
		case 1:
			unk_0x24A693BA506F94EC(13, 2);
			break;
		
		case 2:
			unk_0x24A693BA506F94EC(4, 2);
			break;
		
		case 4:
			unk_0x24A693BA506F94EC(1, 2);
			break;
		
		case 3:
			unk_0x24A693BA506F94EC(2, 2);
			break;
		
		case 5:
			unk_0x24A693BA506F94EC(3, 2);
			break;
		
		case 6:
			unk_0x24A693BA506F94EC(11, 3);
			break;
		
		case 7:
			unk_0x24A693BA506F94EC(14, 1);
			break;
		
		case 8:
			unk_0x24A693BA506F94EC(29, 2);
			break;
		
		case 9:
			unk_0x24A693BA506F94EC(12, 2);
			break;
		
		case 10:
			unk_0x24A693BA506F94EC(10, 2);
			break;
		
		case 11:
			unk_0x24A693BA506F94EC(18, 2);
			break;
		
		case 12:
			unk_0x24A693BA506F94EC(20, 2);
			break;
		
		case 13:
			unk_0x24A693BA506F94EC(27, 2);
			break;
		
		case 15:
			unk_0x24A693BA506F94EC(26, 1);
			break;
		
		case 16:
			unk_0x24A693BA506F94EC(25, 1);
			break;
		
		case 17:
			unk_0x24A693BA506F94EC(22, 1);
			break;
		
		case 18:
			unk_0x24A693BA506F94EC(24, 1);
			break;
	}
	unk_0x872F1C1F8587CCC7(&iLocal_128, 8);
}

bool func_378(int iParam0)//Position - 0xDF19
{
	return func_14(iParam0, 0);
}

void func_379()//Position - 0xDF28
{
	vLocal_107[0 /*3*/] = { 1083f, -231f, 60f };
	vLocal_107[1 /*3*/] = { 1024f, -325f, 60f };
	vLocal_107[2 /*3*/] = { 910f, -401f, 43f };
	vLocal_107[3 /*3*/] = { 721f, -457f, 26f };
	vLocal_107[4 /*3*/] = { 643f, -579f, 26f };
	vLocal_107[5 /*3*/] = { 590f, -851f, 26f };
	vLocal_107[6 /*3*/] = { 590f, -1023f, 16f };
	vLocal_107[7 /*3*/] = { 582f, -1205f, 24f };
	vLocal_107[8 /*3*/] = { 608f, -1335f, 16f };
	vLocal_107[9 /*3*/] = { 640f, -1434f, 16f };
	vLocal_107[10 /*3*/] = { 671f, -1742f, 20f };
	vLocal_107[11 /*3*/] = { 651f, -2046f, 16f };
	vLocal_107[12 /*3*/] = { 603f, -2505f, 9f };
	vLocal_107[13 /*3*/] = { 673f, -2582f, 4f };
	vLocal_107[14 /*3*/] = { 728f, -2594f, 10f };
	vLocal_107[15 /*3*/] = { 794f, -2624f, 27f };
	vLocal_107[16 /*3*/] = { -2663f, 2594f, 7,5f };
	vLocal_107[17 /*3*/] = { -1902f, 4617f, 30f };
	vLocal_107[18 /*3*/] = { -513f, 4427f, 40f };
	vLocal_107[19 /*3*/] = { 126f, 3366f, 40f };
	vLocal_107[20 /*3*/] = { 143f, 3418f, 36f };
	vLocal_107[21 /*3*/] = { 2822f, 4978f, 40f };
	vLocal_107[22 /*3*/] = { -162f, 4249f, 40f };
	vLocal_107[23 /*3*/] = { -408f, 2964f, 20f };
	vLocal_107[24 /*3*/] = { -181f, 2862f, 38f };
	vLocal_107[25 /*3*/] = { 2558f, 2201f, 24f };
	vLocal_107[26 /*3*/] = { 2950f, 803f, 8f };
	vLocal_107[27 /*3*/] = { 2369f, -409f, 80f };
	vLocal_107[28 /*3*/] = { 1906f, -755f, 84f };
	vLocal_107[29 /*3*/] = { -403f, -2333f, 40f };
	vLocal_107[30 /*3*/] = { -1429f, 2649f, 10f };
	vLocal_107[31 /*3*/] = { 219f, -2315f, 5f };
	vLocal_107[32 /*3*/] = { 350f, -2315f, 5f };
	vLocal_107[33 /*3*/] = { -1848f, -333f, 75f };
	vLocal_107[34 /*3*/] = { -693f, -608f, 69f };
	vLocal_107[35 /*3*/] = { -1461f, -582f, 53f };
	vLocal_107[36 /*3*/] = { -1553f, -546f, 59f };
	vLocal_107[37 /*3*/] = { 338f, -2758f, 23f };
	vLocal_107[38 /*3*/] = { 1985f, 6201f, 53f };
	vLocal_107[39 /*3*/] = { -713f, -1538f, 13f };
	vLocal_107[40 /*3*/] = { -659f, -1518f, 13f };
	vLocal_107[41 /*3*/] = { -620f, -1502f, 16f };
	vLocal_107[42 /*3*/] = { -445f, -1575f, 26f };
	vLocal_107[43 /*3*/] = { -373f, -1680f, 19f };
	vLocal_107[44 /*3*/] = { -212f, -1805f, 29f };
	vLocal_107[45 /*3*/] = { 47f, -2040f, 18f };
	vLocal_107[46 /*3*/] = { 223f, -2240f, 6f };
	vLocal_107[47 /*3*/] = { 218f, -2189f, 6f };
	vLocal_107[48 /*3*/] = { 2308f, 1124f, 78f };
	vLocal_107[49 /*3*/] = { 2349f, 1174f, 79f };
	vLocal_107[50 /*3*/] = { -1186f, -365f, 46f };
	vLocal_107[51 /*3*/] = { -916f, -407f, 93f };
	vLocal_107[52 /*3*/] = { -726f, 235f, 105f };
	vLocal_107[53 /*3*/] = { -774f, 286f, 112f };
	vLocal_107[54 /*3*/] = { 271f, 134f, 125f };
	vLocal_107[55 /*3*/] = { 377f, -28f, 125f };
	vLocal_107[56 /*3*/] = { 121f, -703f, 150f };
	vLocal_107[57 /*3*/] = { -204f, -784f, 74f };
	vLocal_107[58 /*3*/] = { -287f, -774f, 72f };
	vLocal_107[59 /*3*/] = { -272f, -824f, 71f };
	vLocal_107[60 /*3*/] = { -230f, -723f, 80f };
	vLocal_107[61 /*3*/] = { 1822f, 2044f, 62f };
	vLocal_107[62 /*3*/] = { 2410f, 2907f, 44f };
	vLocal_107[63 /*3*/] = { 2686f, 4858f, 36f };
	vLocal_107[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_380(int iParam0, bool bParam1)//Position - 0xE4EB
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

void func_381(var uParam0, int iParam1)//Position - 0xE54E
{
	if (func_307(unk_0x9EB17624F44A8DA4()) == 133 && iParam1)
	{
		Global_2512808.f_4777 = uParam0;
	}
	else
	{
		Global_2512808.f_4777 = -1;
	}
}

void func_382(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE57F
{
	bool bVar0;
	
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_101(unk_0x9EB17624F44A8DA4(), 0) && func_97(unk_0x9EB17624F44A8DA4()));
	if (bParam6)
	{
		func_380(21, 1);
	}
	else
	{
		func_398(iParam0, -1);
		if (func_8(unk_0x9EB17624F44A8DA4()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_397(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_8(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 5);
		}
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 4);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 20);
		if (func_396(iParam0))
		{
			func_395();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_392(fParam1);
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
		if (func_390(iParam0))
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
				func_388(1);
				if (func_250(0))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_386(1);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_385();
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_383(iParam0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_383(int iParam0)//Position - 0xE749
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
	if (func_384())
	{
		return 1;
	}
	return 0;
}

int func_384()//Position - 0xE79E
{
	switch (func_306())
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

void func_385()//Position - 0xE7CC
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4694), 0);
}

void func_386(bool bParam0)//Position - 0xE7E0
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
		func_387(iVar0);
		iVar0++;
	}
}

void func_387(int iParam0)//Position - 0xE817
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_388(int iParam0)//Position - 0xE831
{
	if (func_389() && iParam0)
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

int func_389()//Position - 0xE866
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)//Position - 0xE8AC
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_391(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_391(int iParam0)//Position - 0xE8EA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_392(float fParam0)//Position - 0xE910
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_393())
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

int func_393()//Position - 0xE97C
{
	switch (func_394())
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

int func_394()//Position - 0xE9B0
{
	return Global_25233;
}

void func_395()//Position - 0xE9BB
{
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_215 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4529), 1);
}

int func_396(int iParam0)//Position - 0xE9DD
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_397(int iParam0)//Position - 0xE9F7
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/] = iParam0;
}

void func_398(int iParam0, int iParam1)//Position - 0xEA0C
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_326(0) || func_326(func_325(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
	}
}

int func_399()//Position - 0xEA72
{
	switch (Local_157.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_400()//Position - 0xEAA1
{
	Global_1665283 = 1;
	if (!unk_0xC80D31E4B587871C(Global_2520777, 0))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 0);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 0);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 1))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 1);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 1);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 5))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 5);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 5);
	}
	if (unk_0x546F10CBA6C484DA(-355737150))
	{
		unk_0xB94AAB49E0BB01DB(-355737150, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-580979506))
	{
		unk_0xB94AAB49E0BB01DB(-580979506, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1426452475))
	{
		unk_0xB94AAB49E0BB01DB(-1426452475, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(745417724))
	{
		unk_0xB94AAB49E0BB01DB(745417724, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1305304906))
	{
		unk_0xB94AAB49E0BB01DB(-1305304906, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1543175077))
	{
		unk_0xB94AAB49E0BB01DB(-1543175077, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-811770997))
	{
		unk_0xB94AAB49E0BB01DB(-811770997, 0, 0, 0);
	}
}

int func_401()//Position - 0xEBB3
{
	switch (Local_157.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_402()//Position - 0xEBE8
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_157.f_3))
	{
		if (Local_157.f_3 == 1 || Local_157.f_3 == 6)
		{
			iVar0 = func_424(unk_0x9EB17624F44A8DA4(), 1);
			iVar1 = func_189(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
				{
					unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), 1, false, false);
					func_403(1);
				}
			}
			else
			{
				unk_0xCB6210AD9EF51115(unk_0x9EB17624F44A8DA4(), 1);
			}
		}
	}
}

void func_403(bool bParam0)//Position - 0xEC5A
{
	int iVar0;
	
	if (unk_0x4CDD2D1D66ED1DE4(unk_0xFC1458A37D98B502(), 5) != 0)
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, 1);
		unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_196(582, -1, 0));
		if (func_423())
		{
			unk_0x0262CAB1EA8E94F7(unk_0x9EB17624F44A8DA4(), 1931904776);
		}
		else if (func_422())
		{
			unk_0x0262CAB1EA8E94F7(unk_0x9EB17624F44A8DA4(), -2124524821);
		}
		if (func_419(3610, -1, -1))
		{
		}
		iVar0 = func_196(2037, -1, 0);
		unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), func_418(unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4()), iVar0));
		if (func_247(0))
		{
			unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_196(582, -1, 0));
		}
		else
		{
			unk_0x3830636EEBFFD9EA(unk_0x9EB17624F44A8DA4(), func_417(Global_2521061));
		}
		func_416(unk_0x9EB17624F44A8DA4(), iVar0);
		unk_0x440777357A46FCC8(unk_0x9EB17624F44A8DA4(), 5, func_409(unk_0xFC1458A37D98B502(), iVar0), func_408(unk_0xFC1458A37D98B502(), iVar0), 0);
		func_407(func_196(2037, -1, 0), 1);
		Global_2512808.f_276 = 1;
		func_404(unk_0x9EB17624F44A8DA4(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_404(int iParam0, int iParam1, int iParam2)//Position - 0xED5C
{
	if (unk_0x3A711520F83BAE98())
	{
		func_406();
		if (iParam2 == -1)
		{
			iParam2 = func_196(2037, -1, 0);
		}
		unk_0x440777357A46FCC8(iParam0, 5, func_409(unk_0x25D049AAC4603E65(iParam0), iParam2), func_408(unk_0x25D049AAC4603E65(iParam0), iParam2), 0);
		unk_0xE1D0F0036E01DD8A(iParam0, func_418(unk_0x25D049AAC4603E65(iParam0), iParam2));
		unk_0x03924C68EFCBC511(unk_0x25D049AAC4603E65(iParam0), 5, func_409(unk_0x25D049AAC4603E65(iParam0), iParam2), func_408(unk_0x25D049AAC4603E65(iParam0), iParam2), func_418(unk_0x25D049AAC4603E65(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_196(582, -1, 0);
		}
		if (func_247(1) && func_405(iParam0))
		{
			unk_0x3830636EEBFFD9EA(iParam0, func_417(Global_2521061));
		}
		else
		{
			unk_0x3830636EEBFFD9EA(iParam0, iParam1);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_28, 4))
		{
			unk_0x3830636EEBFFD9EA(iParam0, Global_1574339);
			unk_0x0262CAB1EA8E94F7(iParam0, -1780610292);
		}
		func_416(iParam0, iParam2);
		unk_0x2217C45231E6A537(unk_0x25D049AAC4603E65(iParam0), 177, 1);
	}
}

bool func_405(int iParam0)//Position - 0xEE56
{
	return func_96(iParam0, 10);
}

void func_406()//Position - 0xEE66
{
	Global_70832 = 0;
	Global_70833 = -1;
	Global_70834 = -1;
	Global_70835 = -1;
	Global_70836 = -1;
	Global_70837 = -1;
}

void func_407(int iParam0, int iParam1)//Position - 0xEE8C
{
	if (unk_0x3A711520F83BAE98())
	{
		func_406();
		func_187(2037, iParam0, -1, 1, 0);
		unk_0x440777357A46FCC8(unk_0x9EB17624F44A8DA4(), 5, func_409(unk_0xFC1458A37D98B502(), iParam0), func_408(unk_0xFC1458A37D98B502(), iParam0), 0);
		func_416(unk_0x9EB17624F44A8DA4(), iParam0);
		unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), func_418(unk_0xFC1458A37D98B502(), iParam0));
		if ((iParam1 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && unk_0x4CDD2D1D66ED1DE4(unk_0xFC1458A37D98B502(), 5) != 0)
		{
			func_404(unk_0x9EB17624F44A8DA4(), -1, -1);
		}
	}
}

int func_408(int iParam0, int iParam1)//Position - 0xEF12
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_409(int iParam0, int iParam1)//Position - 0xEF74
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != false;
	iVar1 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	iVar2 = unk_0xE1AE92097550A727(iParam0, 11, unk_0x4CDD2D1D66ED1DE4(iParam0, 11), unk_0xDCC2BD4C56470D10(iParam0, 11));
	iVar3 = unk_0xE1AE92097550A727(iParam0, 4, unk_0x4CDD2D1D66ED1DE4(iParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4));
	if ((((!bVar0 == Global_70832 || !iParam1 == Global_70833) || !iVar1 == Global_70834) || !iVar2 == Global_70835) || !iVar3 == Global_70836)
	{
		Global_70832 = bVar0;
		Global_70833 = iParam1;
		Global_70834 = iVar1;
		Global_70835 = iVar2;
		Global_70836 = iVar3;
		Global_70837 = func_410(iParam0, iParam1);
	}
	return Global_70837;
}

int func_410(int iParam0, int iParam1)//Position - 0xF044
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x4CDD2D1D66ED1DE4(iParam0, 11);
	if (unk_0x4CDD2D1D66ED1DE4(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 50;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0xE1AE92097550A727(iParam0, 8, unk_0x4CDD2D1D66ED1DE4(iParam0, 8), unk_0xDCC2BD4C56470D10(iParam0, 8));
	if (unk_0x6C297174CFC8C5B2(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, 350281921, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -887141061, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -1185371730, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -2124629577, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x6C297174CFC8C5B2(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -887141061, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -1185371730, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			if (unk_0x6C297174CFC8C5B2(iVar4, -2124629577, 8))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		return func_415(iParam0, iParam1);
	}
	if (func_414(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0xE1AE92097550A727(iParam0, 11, iVar0, unk_0xDCC2BD4C56470D10(iParam0, 11));
		if (unk_0x6C297174CFC8C5B2(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -979468724, 0))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -306768813, 0))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else if (unk_0x6C297174CFC8C5B2(iVar5, -58412562, 0))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1536649085, 0) && !unk_0x6C297174CFC8C5B2(iVar5, 350281921, 0))
		{
			iVar6 = func_413(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_412(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_412(iVar5);
						break;
					}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 248194463, 0))
		{
			if (unk_0x6C297174CFC8C5B2(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 396458410, 0))
		{
			iVar7 = func_411(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_412(iVar5);
					break;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1719167561, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1274099003, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x6C297174CFC8C5B2(iVar5, -1407614029, 0))
				{
					return func_415(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x6C297174CFC8C5B2(iVar5, -1086258388, 0) || unk_0x6C297174CFC8C5B2(iVar5, 103539798, 0)) || unk_0x6C297174CFC8C5B2(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_415(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1506370874, 0) || unk_0x6C297174CFC8C5B2(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_415(iParam0, iParam1) + 15;
			}
			else
			{
				return func_415(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x6C297174CFC8C5B2(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x6C297174CFC8C5B2(iVar5, -2017999390, 0) || unk_0x6C297174CFC8C5B2(iVar5, 320460654, 0)) || unk_0x6C297174CFC8C5B2(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_412(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_411(int iParam0, int iParam1)//Position - 0x10EC1
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_412(int iParam0)//Position - 0x11061
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x6C297174CFC8C5B2(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_413(int iParam0, int iParam1)//Position - 0x111CE
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x6C297174CFC8C5B2(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_414(int iParam0)//Position - 0x11312
{
	if (unk_0x6C297174CFC8C5B2(unk_0xE1AE92097550A727(iParam0, 4, unk_0x4CDD2D1D66ED1DE4(iParam0, 4), unk_0xDCC2BD4C56470D10(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_415(int iParam0, int iParam1)//Position - 0x11341
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_416(int iParam0, int iParam1)//Position - 0x113B0
{
	if (func_423())
	{
		if (iParam1 > 51)
		{
			unk_0x9925526A3F4F2570(iParam0, 1269440357);
		}
		else if (iParam1 > 46)
		{
			unk_0x9925526A3F4F2570(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			unk_0x9925526A3F4F2570(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, 1269440357);
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
	else if (func_422())
	{
		if (iParam1 > 0)
		{
			unk_0x9925526A3F4F2570(iParam0, 1479397204);
		}
		else
		{
			unk_0x7FC5A62030D9EF74(iParam0);
		}
	}
}

int func_417(var uParam0)//Position - 0x1143C
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_418(int iParam0, int iParam1)//Position - 0x114F4
{
	return 0;
}

int func_419(int iParam0, int iParam1, int iParam2)//Position - 0x114FD
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_421(iParam0, iParam1);
	uVar2 = func_420(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_420(int iParam0)//Position - 0x1153A
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

int func_421(int iParam0, int iParam1)//Position - 0x117FA
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
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

bool func_422()//Position - 0x11A9C
{
	return unk_0x21EA5D4DC72DE119(1428761799);
}

bool func_423()//Position - 0x11AAD
{
	return unk_0x21EA5D4DC72DE119(-1005876368);
}

int func_424(int iParam0, bool bParam1)//Position - 0x11ABE
{
	if (bParam1)
	{
	}
	return func_193(iParam0);
}

void func_425()//Position - 0x11AD1
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	float fVar12;
	
	if ((((!func_7(unk_0x9EB17624F44A8DA4()) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_301()) && !func_436(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1)) && !func_435(unk_0x9EB17624F44A8DA4()))
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			fVar4 = 2,147484E+09f;
			iVar5 = -1;
			vVar6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			bVar7 = func_5(Local_157.f_3);
			bVar8 = unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0);
			bVar9 = func_433();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar10 = Local_157.f_67[iVar2 /*2*/].f_1;
				if (unk_0x918CA1BFFAA03556(uVar10) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == unk_0xF32FBF2453AC1753(uVar10))
						{
							func_323(1);
						}
					}
					unk_0x872F1C1F8587CCC7(&uVar3, iVar2);
					if (bVar7 && func_38(Local_157.f_3, iVar2, &vVar0, &uVar1))
					{
						vVar11 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(uVar10), 1) };
						if (system::vdist(vVar11, vVar0) <= 10f)
						{
							fVar12 = system::vdist(vVar11, vVar6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_39(Local_157.f_3))
			{
				unk_0x872F1C1F8587CCC7(&uVar3, 31);
			}
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = uVar3;
			if (func_5(Local_157.f_3))
			{
				if ((unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()) || (unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502()) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2,147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_38(Local_157.f_3, iVar5, &vVar0, &uVar1))
						{
							func_432(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_431(vVar0, 1, 0);
							func_427(10, 0, 0, 0, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_128, 5);
						}
					}
				}
				else
				{
					func_426();
				}
			}
		}
	}
	else
	{
		func_426();
	}
}

void func_426()//Position - 0x11D09
{
	if (unk_0xC80D31E4B587871C(iLocal_128, 5))
	{
		func_159();
		func_157();
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 5);
		func_156();
	}
}

void func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x11D30
{
	if (Global_2436181.f_1777.f_690.f_16 != func_93())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_428())
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

int func_428()//Position - 0x11DCF
{
	if (((func_208(unk_0x9EB17624F44A8DA4()) == 229 || func_208(unk_0x9EB17624F44A8DA4()) == 191) || func_430()) || func_429())
	{
		return 0;
	}
	return 1;
}

bool func_429()//Position - 0x11E0F
{
	return Global_1574307;
}

int func_430()//Position - 0x11E1B
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_431(vector3 vParam0, int iParam1, int iParam2)//Position - 0x11E30
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

void func_432(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x11E5A
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	else
	{
		Global_2413426.f_6 = unk_0xBBA15366508D1BDE();
	}
	Var0.f_6 = Global_2413426.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_364(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413426 = { Var0 };
}

int func_433()//Position - 0x11F68
{
	if (((((func_434(unk_0x9EB17624F44A8DA4()) || func_154()) || func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21)) || func_8(unk_0x9EB17624F44A8DA4())) || func_7(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x11FC0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x11FE6
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

int func_436(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x12025
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
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_285(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_441(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_440(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_439(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_438(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_437(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0)//Position - 0x120EB
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_93())
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x1214B
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x12192
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_440(int iParam0)//Position - 0x121D8
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x1221E
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x12264
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_443(bool bParam0, bool bParam1)//Position - 0x122AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	
	if (func_480())
	{
		if (bParam1)
		{
			iVar0 = unk_0x622FF3AE4B1D07C3();
			if (func_91(unk_0x9EB17624F44A8DA4()))
			{
				iVar1 = func_309();
				iVar2 = unk_0xDF35170AEEFB473B(iVar1);
				if (unk_0x552F39AE86E07792(iVar2))
				{
					iVar3 = unk_0x87678BB8392EFD41(iVar2);
					if (unk_0x012BC3F18B8C7807(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_479())
				{
					switch (Local_157.f_3)
					{
						case 14:
							if (!func_349(iVar4) && !func_348(iVar4))
							{
								func_448("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_41())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x918CA1BFFAA03556(Local_157.f_67[iVar5 /*2*/].f_1)) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_157.f_67[iVar5 /*2*/].f_1), 0)) && unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_157.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_150[iVar5]))
				{
					iLocal_150[iVar5] = unk_0xCA43F0FC44D9B846(unk_0x29AB7D6D0DE18055(Local_157.f_67[iVar5 /*2*/].f_1));
					unk_0x4B4040A0EC7DBA81(iLocal_150[iVar5], func_447(iVar5));
					unk_0xF27F72CA15E148EE(iLocal_150[iVar5], 9);
					unk_0x62BD54E491535B76(iLocal_150[iVar5], func_446(iVar5));
					func_444(&(iLocal_150[iVar5]), 9);
				}
				else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					vVar6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					if (system::vdist(vVar6, unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_157.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
					{
						unk_0x9C27373CC69ECF87(iLocal_150[iVar5], 1);
					}
					else
					{
						unk_0x9C27373CC69ECF87(iLocal_150[iVar5], 0);
					}
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_150[iVar5]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_150[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_444(var uParam0, int iParam1)//Position - 0x12492
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		iVar0 = func_445(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, iVar0);
	}
}

int func_445(int iParam0)//Position - 0x124B8
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

char* func_446(int iParam0)//Position - 0x12720
{
	if (unk_0xF9DDB1C0875FD9E0(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x849A8CFD71854E02(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x125CDF69FA6EF560(Local_157.f_67[iParam0 /*2*/]) && !unk_0x49A1CABC032F7E16(Local_157.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_447(int iParam0)//Position - 0x12793
{
	if (unk_0xF9DDB1C0875FD9E0(Local_157.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0x849A8CFD71854E02(Local_157.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x125CDF69FA6EF560(Local_157.f_67[iParam0 /*2*/]) && !unk_0x49A1CABC032F7E16(Local_157.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_448(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x127FA
{
	vector3 vVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_1523[iParam2 /*12*/].f_8[func_340(iParam3)], func_339(iParam3)) && !bParam1)
	{
		vVar0 = { func_478(iParam3) };
		if (!unk_0xA6DECE14FC9A8C51(iLocal_149[iParam3]))
		{
			if (!func_477(vVar0, 0f, 0f, 0f, 0) && !func_477(vVar0, 0f, 0f, -2000f, 0))
			{
				iLocal_149[iParam3] = unk_0x6F4378873333A0C2(vVar0);
				unk_0xF27F72CA15E148EE(iLocal_149[iParam3], 9);
				unk_0x62BD54E491535B76(iLocal_149[iParam3], sParam0);
				func_449(iLocal_149[iParam3], 25, 1152319488, 1137180672);
				func_444(&(iLocal_149[iParam3]), 12);
				unk_0x9C27373CC69ECF87(iLocal_149[iParam3], 1);
			}
		}
		else if (unk_0x0F30C1F1717A6437())
		{
			unk_0xF20857E4CB32A2B7(iLocal_149[iParam3], 255);
		}
		else
		{
			func_449(iLocal_149[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_149[iParam3]))
	{
		unk_0xE30CF11C0EE14316(&(iLocal_149[iParam3]));
		if (!bParam1)
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

void func_449(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x12921
{
	unk_0xF20857E4CB32A2B7(iParam0, func_450(iParam0, iParam1, fParam2, fParam3));
}

int func_450(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1293B
{
	float fVar0;
	
	if (!func_476(Global_2436181))
	{
		fVar0 = func_452(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_451();
		}
		return (system::round((system::to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_451()//Position - 0x1297F
{
	if (func_367(Global_2436181, 1))
	{
		return 50;
	}
	return 0;
}

float func_452(int iParam0, float fParam1, float fParam2)//Position - 0x12999
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_2436181;
	vVar2 = { unk_0x67247AA13B7486A3(iParam0) };
	vVar2.z = 0f;
	if (Global_1316741)
	{
		if (func_475(iVar0))
		{
			vVar3 = { func_455(iVar0) };
		}
		else if (func_454(iVar0))
		{
			vVar3 = { func_453(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar0), 0) };
	}
	vVar3.z = 0f;
	fVar1 = system::vmag(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_453(int iParam0)//Position - 0x12A3F
{
	int iVar0;
	
	if (func_454(iParam0))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			return unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_454(int iParam0)//Position - 0x12A73
{
	int iVar0;
	
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = unk_0x25D049AAC4603E65(iParam0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (unk_0x0C88267282FD588F(iVar0, 2056,204f, 2954,807f, -70,69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_455(int iParam0)//Position - 0x12ACF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == func_93())
	{
	}
	if (func_474(iParam0))
	{
		iVar0 = func_473(iParam0);
		if (iVar0 != func_93())
		{
			if (!func_472(iVar0))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_644[iVar0 /*3*/][1]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_644[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2422736[func_473(iParam0) /*420*/].f_324.f_5;
				}
			}
			else
			{
				iVar1 = func_468(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1669535.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_467(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_293))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_293, 0);
		}
	}
	else if (func_440(iParam0) && !func_466(iParam0))
	{
		iVar2 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar2 != func_93())
		{
			iVar3 = func_468(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1669535.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_438(iParam0) && !func_465(iParam0))
	{
		if (func_475(iParam0) && func_464())
		{
			return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
		}
		iVar4 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar4 != func_93())
		{
			if (func_463(iVar4))
			{
				iVar5 = func_459(iVar4);
				if (iVar5 != -1)
				{
					return Global_1669535.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_437(iParam0))
	{
		iVar6 = func_458(iParam0);
		if (iVar6 != func_93())
		{
			if (!func_457(iVar6))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_741[iVar6]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_741[iVar6], 0);
				}
				else
				{
					return Global_2422736[func_458(iParam0) /*420*/].f_324.f_14;
				}
			}
			else
			{
				iVar7 = func_459(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1669535.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_456(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_295))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_295, 0);
		}
	}
	return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
}

int func_456(int iParam0)//Position - 0x12D43
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x12D8A
{
	if (iParam0 != func_93())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x12DB2
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_459(int iParam0)//Position - 0x12DD6
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_462(iParam0);
	if (!iVar0 == 0)
	{
		return func_460(iVar0);
	}
	return -1;
}

int func_460(int iParam0)//Position - 0x12E05
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_286(iVar0) == 9)
		{
			if (func_461(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_461(int iParam0)//Position - 0x12E3C
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x12EA8
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_248;
}

int func_463(int iParam0)//Position - 0x12ECB
{
	if (iParam0 != func_93())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

int func_464()//Position - 0x12EF0
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 13) || Global_1669535.f_1815)
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)//Position - 0x12F1A
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_438(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x12F53
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_440(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x12F8C
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)//Position - 0x12FD2
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return -1;
	}
	iVar0 = func_471(iParam0);
	if (!iVar0 == 0)
	{
		return func_469(iVar0);
	}
	return -1;
}

int func_469(int iParam0)//Position - 0x13001
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_470(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_470(int iParam0)//Position - 0x1302D
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case 79:
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x131C7
{
	if (iParam0 == func_93())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_472(int iParam0)//Position - 0x131ED
{
	if (iParam0 != func_93())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x13213
{
	if (iParam0 == func_93())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_474(int iParam0)//Position - 0x13237
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_93())
			{
				return func_286(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x13296
{
	if (iParam0 != func_93())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_12(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x132FC
{
	if ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9) && !(unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7))) || ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7)) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_477(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x13397
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_478(int iParam0)//Position - 0x133DE
{
	switch (Local_157.f_3)
	{
		case 14:
			return vLocal_148[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_479()//Position - 0x13405
{
	switch (Local_157.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_480()//Position - 0x13423
{
	switch (Local_157.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_481()//Position - 0x13440
{
	switch (Local_157.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_482(var uParam0, char* sParam1)//Position - 0x13460
{
	char* sVar0;
	
	if (func_300(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_205(sParam1))
	{
		sVar0 = sParam1;
	}
	func_132(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_483(int iParam0)//Position - 0x1349F
{
	char* sVar0;
	
	sVar0 = unk_0x436287B7DB306165();
	return "HUD_STARTING";
	if (unk_0x74C475EB8E73D398(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_484(int iParam0, int iParam1)//Position - 0x136A8
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_485(int iParam0)//Position - 0x136BE
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		Global_2512808.f_4693 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2512808.f_4693 = 0;
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
		}
	}
}

int func_486(var uParam0, bool bParam1, bool bParam2)//Position - 0x13715
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

void func_487(int iParam0)//Position - 0x1375C
{
	if (!unk_0x2918F48A30D03841() && !unk_0x3E9CABD07B829173())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E())
					{
						if (func_5(Local_157.f_3))
						{
							if (Local_157.f_3 == 12)
							{
								func_282("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_282("AMCH_AIRAV", 30000);
							}
						}
						else if (func_39(Local_157.f_3))
						{
							func_282("AMCH_BIKEAV", 30000);
						}
						func_281(1);
						unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_282("AMCH_BLOW", 30000);
						func_281(1);
						unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !func_492(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										func_282("AMCH_ALTI", 30000);
										func_281(1);
										unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_NMIS", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_FRFALL", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_PVPO1", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_PVPO2", -1);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_WHEELIE", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_STOPPIE", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_LFALL", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_LPARA", 30000);
									func_281(1);
									unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										if (func_1(&uLocal_122, 1000, 0))
										{
											func_282("AMCH_OCEAN", 30000);
											func_281(1);
											func_44(&uLocal_122);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !func_492(63))
					{
						switch (Local_157.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
									{
										if (func_476(unk_0x9EB17624F44A8DA4()) && !func_489(unk_0x9EB17624F44A8DA4()))
										{
											func_282("AMCH_ALTIEXP", 30000);
											func_281(1);
											unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
					{
						if (func_1(&uLocal_122, 1000, 0))
						{
							func_282("AMCH_FLYLOW", 30000);
							func_281(1);
							func_44(&uLocal_122);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (Local_157.f_3 == 7)
					{
						if (iLocal_152 == 0)
						{
							if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
							{
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_MVS1", 30000);
									func_281(1);
									iLocal_152 = 1;
								}
							}
						}
						else if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
						{
							if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
							{
								func_282("AMCH_MVS2", 30000);
								func_281(1);
								unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
							}
						}
					}
					if (Local_157.f_3 == 14)
					{
						if (iLocal_152 == 0)
						{
							if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
							{
								if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									func_282("AMCH_BRBL", 30000);
									func_281(1);
									iLocal_152 = 1;
								}
							}
						}
						else if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && !func_492(63))
						{
							if (func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
							{
								func_282("AMCH_BRBL2", 30000);
								func_281(1);
								unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xC80D31E4B587871C(iLocal_151, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E())
					{
						func_488("AMCH_WARN", func_372(Local_157.f_3), func_371(Local_157.f_3), 30000);
						func_281(0);
						Local_1524.f_8 = unk_0xE3CCAFB1555348DF();
						unk_0x4AFBCBFDE748D4E0(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x872F1C1F8587CCC7(&iLocal_151, iParam0);
					}
				}
				break;
			}
	}
}

void func_488(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x13D40
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam3);
}

bool func_489(int iParam0)//Position - 0x13D63
{
	return unk_0xC80D31E4B587871C(Global_1357530.f_241.f_136[func_491(9) /*33*/][iParam0], func_490(9));
}

int func_490(int iParam0)//Position - 0x13D89
{
	return (iParam0 % 32);
}

int func_491(int iParam0)//Position - 0x13D96
{
	return (iParam0 / 32);
}

bool func_492(int iParam0)//Position - 0x13DA3
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_493(int iParam0)//Position - 0x13DBA
{
	Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 = iParam0;
}

void func_494(bool bParam0)//Position - 0x13DCF
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
}

int func_495()//Position - 0x13E03
{
	if (func_516(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_152(unk_0x9EB17624F44A8DA4(), 21))
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
	if (func_329(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_515())
	{
		return 0;
	}
	if (func_514(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_513())
	{
		return 0;
	}
	if (func_506(unk_0x9EB17624F44A8DA4()) == 3)
	{
		return 0;
	}
	if (func_505(func_276()))
	{
		return 0;
	}
	if (func_504())
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_331(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_152(unk_0x9EB17624F44A8DA4(), 0) || func_152(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_152(unk_0x9EB17624F44A8DA4(), 12) || func_152(unk_0x9EB17624F44A8DA4(), 14)) || func_152(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_436(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_501(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_365(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_499())
	{
		return 0;
	}
	if (func_497(unk_0x9EB17624F44A8DA4()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_440(unk_0x9EB17624F44A8DA4()) || func_474(unk_0x9EB17624F44A8DA4())) || func_439(unk_0x9EB17624F44A8DA4())) || func_437(unk_0x9EB17624F44A8DA4())) || func_438(unk_0x9EB17624F44A8DA4())) || func_496())
	{
		return 0;
	}
	return 1;
}

var func_496()//Position - 0x13FE4
{
	return Global_1669535.f_28;
}

int func_497(int iParam0)//Position - 0x13FF2
{
	if (func_498(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)//Position - 0x14017
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

int func_499()//Position - 0x14046
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_500()//Position - 0x1405E
{
	return Global_92885.f_316 > 0;
}

bool func_501(int iParam0)//Position - 0x1406F
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

int func_502()//Position - 0x1408B
{
	if (func_503() == 0)
	{
		return 1;
	}
	return 0;
}

int func_503()//Position - 0x140A0
{
	return Global_1312466.f_18;
}

bool func_504()//Position - 0x140AE
{
	return Global_1312854;
}

int func_505(int iParam0)//Position - 0x140BA
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

int func_506(int iParam0)//Position - 0x140FE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_366(iParam0) && !func_8(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_95(iParam0);
	uVar3 = func_154();
	uVar4 = func_507();
	if ((bVar1 && (func_434(iParam0) || func_391(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_97(iParam0)) && !func_287(iParam0)))
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

int func_507()//Position - 0x141BC
{
	if ((func_96(unk_0x9EB17624F44A8DA4(), 21) || func_96(unk_0x9EB17624F44A8DA4(), 22)) || func_511())
	{
		return 1;
	}
	if (func_509())
	{
		func_508(22);
		return 1;
	}
	return 0;
}

void func_508(int iParam0)//Position - 0x14201
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_509()//Position - 0x1421E
{
	if (func_101(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_510(27);
		}
	}
	return 0;
}

void func_510(int iParam0)//Position - 0x14261
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_511()//Position - 0x1427E
{
	return func_512(306, -1);
}

int func_512(int iParam0, int iParam1)//Position - 0x1428E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_192(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_513()//Position - 0x142BA
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

int func_514(int iParam0)//Position - 0x142CF
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_515()//Position - 0x14303
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_516(int iParam0, int iParam1)//Position - 0x1431F
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

void func_517()//Position - 0x1433A
{
	func_518(&(Local_178.f_532), &Local_178, 26, &(Local_178.f_1), &(Local_178.f_115), Local_157.f_3, 0);
}

void func_518(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x14361
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
	
	if (func_625(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_623() || iParam2 == 27)
	{
		if (func_580(uParam1, iParam2, uParam3, Global_1574123, 0, func_626()))
		{
			func_579(1);
			if ((!func_578() && !func_577()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_576())
				{
					func_575();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_574(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_573(uParam1);
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
								if (func_12(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
									if (!func_14(iVar3, 0))
									{
										if ((func_572(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_571(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_568(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_98(unk_0x9EB17624F44A8DA4(), 0) && func_208(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_567())
							{
								if (func_12(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
								}
								else
								{
									iVar3 = func_93();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_566(iVar3) && func_563(iVar3, iParam2)) && func_12(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_558(iVar3) };
								if (iVar3 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_126(iVar3) };
								iVar5 = func_552(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF85532D53BDB3017(iVar5);
								}
								Global_1574123++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_567())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_550(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_270(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_549(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
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
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_548(iParam5))
								{
									func_547(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_547(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_12(iVar3, 0, 1) && !unk_0xC80D31E4B587871C(iVar14, iVar3))
							{
								iVar3 = unk_0xF6A72924028F588B(iVar17);
							}
							else
							{
								iVar3 = func_93();
							}
							if (func_566(iVar3))
							{
								if (func_12(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_558(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_126(iVar3) };
									iVar5 = func_552(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF85532D53BDB3017(iVar5);
									}
									Global_1574123++;
									iVar16 = func_549(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
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
									func_531(iVar3, unk_0xDE2D3B9654C31EB3(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_528(uParam3, uParam1);
						}
						func_44(&(uParam3->f_21));
						func_527();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_526(uParam3, uParam1);
							func_525(uParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_526(uParam3, uParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_521(uParam3))
						{
							Global_1574308 = 1;
						}
						func_519(uParam3);
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
			func_527();
			func_574(0);
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

void func_519(var uParam0)//Position - 0x149AE
{
	if (!func_45(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_44(&(uParam0->f_21));
		func_520(0);
	}
}

void func_520(bool bParam0)//Position - 0x149EA
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

int func_521(var uParam0)//Position - 0x14A30
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar3 != func_93() && func_12(iVar3, 0, 1))
	{
		Var2 = { func_126(iVar3) };
		iVar1 = func_524(uParam0, uParam0->f_37);
		if (func_523(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_522(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_522(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_522(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_522(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar4 = 1;
							func_522(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_522(uParam0, iVar0, 0);
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

void func_522(var uParam0, int iParam1, int iParam2)//Position - 0x14B5D
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_523(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x14B6F
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_524(var uParam0, int iParam1)//Position - 0x14B7F
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_525(var uParam0, bool bParam1, int iParam2)//Position - 0x14B8F
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

void func_526(var uParam0, var uParam1)//Position - 0x14BC7
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*uParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_527()//Position - 0x14BFF
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_528(var uParam0, var uParam1)//Position - 0x14C14
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_93())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_530(uParam0->f_38[iVar0 /*2*/], 0);
					func_529(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_529(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14C87
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

int func_530(int iParam0, bool bParam1)//Position - 0x14CC4
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

void func_531(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x14CF8
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_546() && iParam4 < func_545())
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
				func_544("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_544(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_544("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_544("");
			if (uParam3->f_108 == 6)
			{
				func_544("");
			}
			else
			{
				func_544(&sParam5);
			}
			func_536(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_535(uParam3))
			{
				func_534("DPAD_FRIEND");
			}
			else if (func_533(uParam3))
			{
				func_534("DPAD_FRIEND");
			}
			else if (func_532(uParam3))
			{
				func_534("DPAD_CREW");
			}
			else
			{
				func_534("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_532(var uParam0)//Position - 0x14E22
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_533(var uParam0)//Position - 0x14E33
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_534(char* sParam0)//Position - 0x14E44
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_535(var uParam0)//Position - 0x14E56
{
	if (func_533(uParam0) && func_532(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_536(var uParam0, int iParam1)//Position - 0x14E77
{
	if (func_543(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_540(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_537())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_537()//Position - 0x14EF8
{
	if (unk_0x4916190900E76373())
	{
		if (func_538() || func_85())
		{
			return 1;
		}
	}
	return 0;
}

int func_538()//Position - 0x14F1D
{
	if (unk_0x4916190900E76373())
	{
		return func_85();
	}
	return func_539(Global_4456448.f_122309);
}

int func_539(int iParam0)//Position - 0x14F41
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

int func_540(int iParam0)//Position - 0x14F7B
{
	if ((func_12(iParam0, 0, 1) && func_541()) && func_244(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_541()//Position - 0x14FA8
{
	if (func_366(unk_0x9EB17624F44A8DA4()) || func_542())
	{
		return 0;
	}
	return 1;
}

int func_542()//Position - 0x14FCA
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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

int func_543(int iParam0)//Position - 0x15008
{
	if (func_537())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_541()) && func_246(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_544(char* sParam0)//Position - 0x15050
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_545()//Position - 0x1505E
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

int func_546()//Position - 0x1507A
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_547(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x15092
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_546() && iParam3 < func_545())
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
					func_544("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_534(sParam16);
				}
				else
				{
					func_544(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_544("");
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
				if (func_567())
				{
					func_544("");
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
						func_534(&(uParam2->f_104));
					}
					else
					{
						func_544("");
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
					func_544("");
				}
				if (uParam2->f_108 == 6)
				{
					func_544("");
				}
				else
				{
					func_544(&sParam4);
				}
				func_536(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_544("");
					func_544("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_535(uParam2))
				{
					func_534("DPAD_FRIEND");
				}
				else if (func_533(uParam2))
				{
					func_534("DPAD_FRIEND");
				}
				else if (func_532(uParam2))
				{
					func_534("DPAD_CREW");
				}
				else
				{
					func_534("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_548(int iParam0)//Position - 0x153EC
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

int func_549(int iParam0, bool bParam1)//Position - 0x15410
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_366(iParam0)) && !func_95(iParam0))
	{
		iVar0 = func_63();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

int func_550(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1545A
{
	if (func_551(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_548(iParam3))
	{
		*fParam1 = (func_272(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_551(int iParam0)//Position - 0x154AA
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

int func_552(int iParam0)//Position - 0x15506
{
	int iVar0;
	
	iVar0 = func_555(iParam0);
	if (iVar0 == -1)
	{
		func_553(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_553(int iParam0, bool bParam1)//Position - 0x1553C
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_555(iParam0) != -1)
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
	if (func_554(iParam0))
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

int func_554(int iParam0)//Position - 0x155A8
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

int func_555(int iParam0)//Position - 0x155DA
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
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
			func_556(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_556(int iParam0)//Position - 0x15659
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
	func_557(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_557(var uParam0)//Position - 0x1570F
{
	*uParam0 = 0;
	uParam0->f_1 = func_93();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_558(int iParam0)//Position - 0x1573C
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2492157 = { func_126(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_523(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return Var0;
		}
		if (func_562(&Global_2492157))
		{
			Global_2492087 = { func_560(iParam0) };
			func_559(&Global_2492087, &Var0);
		}
	}
	return Var0;
}

void func_559(var uParam0, var uParam1)//Position - 0x157BD
{
	unk_0x22889E844C3772CE(uParam0, 35, uParam1);
}

struct<35> func_560(int iParam0)//Position - 0x157CF
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_561(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_126(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var0);
	return Var1;
}

int func_561(int iParam0)//Position - 0x1580B
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_562(var uParam0)//Position - 0x15821
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

int func_563(int iParam0, int iParam1)//Position - 0x15847
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_565(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_564(iParam0))
	{
		return 0;
	}
	if ((!func_572(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_571(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_564(int iParam0)//Position - 0x158B6
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_565(int iParam0)//Position - 0x158CF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_566(int iParam0)//Position - 0x1590D
{
	int iVar0;
	
	if (iParam0 == func_93())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
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

int func_567()//Position - 0x15952
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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
	switch (func_307(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_95(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_208(unk_0x9EB17624F44A8DA4()))
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

void func_568(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15A7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_572(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_571(iVar1))
				{
					if (func_569(iVar1, iParam1, 0))
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

int func_569(int iParam0, int iParam1, bool bParam2)//Position - 0x15B07
{
	if (iParam1 != func_93())
	{
		if (!bParam2)
		{
			if (func_570(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_570(int iParam0, int iParam1)//Position - 0x15B51
{
	if (iParam1 != func_93())
	{
		if (iParam0 != func_93())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_93())
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

bool func_571(int iParam0)//Position - 0x15B96
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_572(int iParam0)//Position - 0x15BAB
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_208(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_573(var uParam0)//Position - 0x15BEC
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_574(bool bParam0)//Position - 0x15C13
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

void func_575()//Position - 0x15C45
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_288())
		{
			func_275();
		}
	}
}

int func_576()//Position - 0x15C67
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_288())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_288())
	{
		return 1;
	}
	return 0;
}

int func_577()//Position - 0x15CA8
{
	if (func_288())
	{
		if (func_52(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_578()//Position - 0x15CCF
{
	if (func_288())
	{
		if (func_64(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_579(int iParam0)//Position - 0x15CF6
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

int func_580(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x15D24
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_622(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_621();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_620())
		{
			if (func_619() > 0 && Global_1574125)
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
		if (!func_610())
		{
			func_609(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_609(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_45(&(uParam2->f_19)))
	{
		if (func_619() == 1)
		{
			func_608(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_609(uParam0, uParam2, 0);
		}
	}
	if (func_45(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_619() == 0 && !bParam5))
		{
			func_609(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_607();
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
					func_607();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (func_608(bVar3, uParam0, 0))
				{
					func_573(uParam0);
					sVar1 = func_605(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_603(iParam1) };
					if (bParam4)
					{
						func_600(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_594(uParam0, func_597(uParam2), func_595(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_586(uParam0, func_588(uParam2), func_587(), -1);
					}
					else if (func_537())
					{
						uParam2->f_34 = Global_1574124;
						func_600(uParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_600(uParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_581(iParam1);
						func_600(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
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

int func_581(int iParam0)//Position - 0x15FD7
{
	int iVar0;
	
	iVar0 = -1;
	if (func_585())
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
			if (func_584(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_583(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_582(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_209())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_582(int iParam0)//Position - 0x160E7
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_583(int iParam0)//Position - 0x160FC
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_584(int iParam0)//Position - 0x16111
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_585()//Position - 0x16126
{
	return Global_4456448.f_1 == 0;
}

void func_586(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16136
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_534(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_534("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_587()//Position - 0x16195
{
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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

char* func_588(var uParam0)//Position - 0x161ED
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
	switch (func_208(unk_0x9EB17624F44A8DA4()))
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
			if (func_590())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_243(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_243(1))
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
			if (func_589(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_589(int iParam0)//Position - 0x16619
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

bool func_590()//Position - 0x1664B
{
	return (func_593() && func_591(func_592()));
}

int func_591(int iParam0)//Position - 0x16664
{
	return func_246(iParam0, 1);
}

int func_592()//Position - 0x16673
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_593()//Position - 0x1668A
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_594(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x166A0
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_534(sParam1);
		}
		else if (func_307(unk_0x9EB17624F44A8DA4()) == 133)
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
		func_534("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_595(var uParam0)//Position - 0x16727
{
	int iVar0;
	
	iVar0 = func_307(unk_0x9EB17624F44A8DA4());
	if (func_596())
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
			switch (func_306())
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

bool func_596()//Position - 0x168D2
{
	return Global_1595566;
}

char* func_597(var uParam0)//Position - 0x168DE
{
	int iVar0;
	
	iVar0 = func_307(unk_0x9EB17624F44A8DA4());
	if (func_596())
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
			if (func_599() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_599() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_306())
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
			if (func_598() == 1)
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

int func_598()//Position - 0x16AD3
{
	return Global_2512808.f_4780;
}

int func_599()//Position - 0x16AE2
{
	if (func_307(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_600(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16B05
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_544(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(sParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_534(sParam1);
		}
		if (func_620() && iParam6)
		{
			if (func_602())
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
			func_534(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_601(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_61())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_601(int iParam0)//Position - 0x16BC6
{
	if (func_584(iParam0) || func_583(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_602()//Position - 0x16BE8
{
	return Global_1574125;
}

struct<4> func_603(int iParam0)//Position - 0x16BF4
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_604(unk_0x9EB17624F44A8DA4()) || func_582(unk_0x9EB17624F44A8DA4()))
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
	if (func_537() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_604(int iParam0)//Position - 0x16C8F
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_605(int iParam0, char* sParam1, bool bParam2)//Position - 0x16CA4
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_537() || unk_0xAB019B170BF1309C(sParam1)))
	{
		uVar0 = func_606();
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

char* func_606()//Position - 0x16E02
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

void func_607()//Position - 0x16E46
{
	Global_36765 = 1;
}

bool func_608(bool bParam0, var uParam1, bool bParam2)//Position - 0x16E52
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

void func_609(var uParam0, var uParam1, bool bParam2)//Position - 0x16E92
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_527();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_45(&(uParam1->f_19)))
		{
			func_44(&(uParam1->f_19));
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

int func_610()//Position - 0x16EF8
{
	if (func_618())
	{
		return 0;
	}
	if (func_513())
	{
		return 0;
	}
	if (!func_616())
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	if (func_615(8, -1))
	{
		return 0;
	}
	if (func_619() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_301())
	{
		return 0;
	}
	else if (!func_330(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_614(1) || func_612(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_91(unk_0x9EB17624F44A8DA4()))
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
	if (func_611(0))
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

bool func_611(int iParam0)//Position - 0x17040
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_612(bool bParam0)//Position - 0x17057
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_613(unk_0xFC1458A37D98B502()))
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

int func_613(int iParam0)//Position - 0x17142
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

bool func_614(bool bParam0)//Position - 0x1719F
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_615(int iParam0, int iParam1)//Position - 0x171C8
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

int func_616()//Position - 0x17203
{
	if (func_617())
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

bool func_617()//Position - 0x17242
{
	return Global_1312438;
}

bool func_618()//Position - 0x1724E
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_619()//Position - 0x17263
{
	return Global_1357530.f_68;
}

int func_620()//Position - 0x17271
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_621()//Position - 0x17287
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_622(int iParam0)//Position - 0x172AB
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

int func_623()//Position - 0x172D4
{
	if (func_626())
	{
		return 1;
	}
	if (func_7(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_596())
	{
		return 1;
	}
	if (func_366(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_307(unk_0x9EB17624F44A8DA4()))
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
				if (!func_624(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_624(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_624(unk_0x9EB17624F44A8DA4()))
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

bool func_624(int iParam0)//Position - 0x173AF
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_625(int iParam0)//Position - 0x173C7
{
	if ((iParam0 == 27 && func_366(unk_0x9EB17624F44A8DA4())) && !func_95(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_101(unk_0x9EB17624F44A8DA4(), 0) && func_95(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_506(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_626()//Position - 0x1742B
{
	if (func_627(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_627(int iParam0)//Position - 0x17446
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

void func_628()//Position - 0x17469
{
	if (Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_3 == 3)
	{
		if (!unk_0xC80D31E4B587871C(iLocal_128, 8))
		{
			if ((!func_7(unk_0x9EB17624F44A8DA4()) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_378(unk_0x9EB17624F44A8DA4()))
			{
				func_377();
			}
		}
		else if (!unk_0xC80D31E4B587871C(iLocal_128, 9))
		{
			if ((func_7(unk_0x9EB17624F44A8DA4()) || func_151(unk_0x9EB17624F44A8DA4())) || func_378(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xE59086BE3BFA6F19();
				Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4 = 0;
				unk_0x872F1C1F8587CCC7(&iLocal_128, 9);
			}
		}
	}
}

void func_629()//Position - 0x1750A
{
	int iVar0;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_132)))
	{
		iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_132));
		if (unk_0x552F39AE86E07792(iVar0))
		{
			func_630(iVar0, 2);
		}
	}
	iLocal_132++;
	if (iLocal_132 >= unk_0xB72D370CB7ABC3EF())
	{
		iLocal_132 = 0;
	}
}

void func_630(int iParam0, int iParam1)//Position - 0x17553
{
	bool bVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 0))
	{
		return;
	}
	if (func_45(&(Global_1574409.f_18)))
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
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_631(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574409++;
	}
}

bool func_631(int iParam0)//Position - 0x17621
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10);
}

void func_632(int iParam0, int iParam1)//Position - 0x1763A
{
	Local_1523[iParam0 /*12*/] = iParam1;
}

int func_633()//Position - 0x1764B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_178.f_532[iVar0 /*42*/].f_1 = func_93();
		iVar0++;
	}
	return 1;
}

int func_634()//Position - 0x17677
{
	return Local_157;
}

int func_635(int iParam0)//Position - 0x17682
{
	return Local_1523[iParam0 /*12*/];
}

void func_636()//Position - 0x17691
{
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 6))
	{
		func_659();
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 6);
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 7))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) || unk_0xC80D31E4B587871C(Global_1574409.f_1, 16))
		{
			if (((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 7);
				func_282("FME_PASINT", 30000);
				func_281(1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 17))
		{
			if (func_154() && !func_153())
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 23))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0xF491DD47B88AA84E())
		{
			if (func_657())
			{
				func_282("AMEV_GA_RP", -1);
				if (func_208(unk_0x9EB17624F44A8DA4()) != 200)
				{
					func_281(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 23);
			}
		}
	}
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_391(unk_0x9EB17624F44A8DA4()))
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
		if ((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && !func_152(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 9);
			func_656(0);
			func_282("FME_TBL00", -1);
			func_281(1);
		}
	}
	if (func_366(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if ((func_152(unk_0x9EB17624F44A8DA4(), 21) && unk_0xC80D31E4B587871C(Global_1574409.f_1, 20)) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 19))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 18);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if (((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_288()) && func_12(unk_0x9EB17624F44A8DA4(), 1, 1)) && unk_0x9F7B586A14398C40()) && !Global_2512808.f_4789)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 18);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 19);
				func_282("AMTT_RPAS", -1);
				func_281(1);
			}
		}
	}
	if (((((func_366(unk_0x9EB17624F44A8DA4()) && !func_8(unk_0x9EB17624F44A8DA4())) && func_307(unk_0x9EB17624F44A8DA4()) != 146) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_151(unk_0x9EB17624F44A8DA4())) && !func_646())
	{
		if (func_390(func_307(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
		}
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 22))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 22);
		}
		if (func_434(unk_0x9EB17624F44A8DA4()) || func_384())
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 10))
			{
				if (func_645(func_307(unk_0x9EB17624F44A8DA4())))
				{
					if (func_250(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_388(1);
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 10);
			}
		}
		if (func_391(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 11))
			{
				if (!Global_92885.f_8)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
					func_386(1);
				}
				if (!func_644())
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 13);
					func_385();
				}
				if (!Global_2391045)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					if (func_250(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					func_388(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 11);
			}
		}
		else
		{
			func_642(0);
		}
	}
	else
	{
		func_642(1);
	}
	func_637();
	if (func_383(func_307(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
	}
	if ((func_154() && !func_153()) || func_152(unk_0x9EB17624F44A8DA4(), 21))
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

void func_637()//Position - 0x17BB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_288())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_492(iVar2))
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
				func_638(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
	{
		func_44(&(Global_1574409.f_22));
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 26);
	}
}

void func_638(int iParam0, int iParam1)//Position - 0x17C54
{
	if (!func_45(&(Global_1574409.f_22)))
	{
		func_2(&(Global_1574409.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574409.f_22), iParam1, 0))
	{
		if (func_619() > 0)
		{
			func_641(iParam0);
			if (func_279("AMEV_LBD_HELP"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_44(&(Global_1574409.f_22));
		}
	}
	else
	{
		func_640(0);
		func_639();
	}
}

void func_639()//Position - 0x17CBD
{
	Global_2512808.f_4500 = 0;
}

void func_640(int iParam0)//Position - 0x17CCD
{
	Global_1357530.f_68 = iParam0;
}

void func_641(int iParam0)//Position - 0x17CDD
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

void func_642(int iParam0)//Position - 0x17D29
{
	if ((unk_0xC80D31E4B587871C(Global_1574409.f_1, 11) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 10) && iParam0)) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 22) && iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 12))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 12);
			func_386(0);
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 13);
			func_643();
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_101(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 14);
			func_388(0);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 11);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 22);
	}
}

void func_643()//Position - 0x17E04
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4694), 0);
}

bool func_644()//Position - 0x17E18
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4694, 0);
}

int func_645(int iParam0)//Position - 0x17E2C
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
			return func_391(unk_0x9EB17624F44A8DA4());
		
		case 133:
			return (func_384() || func_5(func_306()));
		
		default:
	}
	return 0;
}

int func_646()//Position - 0x17E9C
{
	if (((((((((func_655() || func_654()) || func_653()) || func_301()) || (func_652() && !unk_0x4916190900E76373())) || (func_649() && !func_648())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_647() == 2 && !unk_0x4916190900E76373()))
	{
		return 1;
	}
	return 0;
}

int func_647()//Position - 0x17F30
{
	return Global_979886;
}

bool func_648()//Position - 0x17F3C
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 27);
}

int func_649()//Position - 0x17F50
{
	if (func_651() || func_650())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_650()//Position - 0x17F7D
{
	return Global_2447174.f_622;
}

bool func_651()//Position - 0x17F8C
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_652()//Position - 0x17FA0
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

bool func_653()//Position - 0x17FB1
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_654()//Position - 0x17FC2
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_655()//Position - 0x17FD4
{
	return Global_2447174.f_586;
}

void func_656(int iParam0)//Position - 0x17FE3
{
	int iVar0;
	
	iVar0 = func_196(2523, -1, 0);
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
	func_187(2523, iVar0, -1, 1, 0);
}

int func_657()//Position - 0x1811F
{
	int iVar0;
	
	if (!func_45(&(Global_1574409.f_15)))
	{
		func_2(&(Global_1574409.f_15), 0, 0);
		Global_1574409.f_17 = 0;
	}
	else if (func_1(&(Global_1574409.f_15), 1000, 0))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17)))
		{
			iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17));
			if (unk_0x552F39AE86E07792(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_658(iVar0, 6))
				{
					if (system::vdist(func_36(unk_0x9EB17624F44A8DA4()), func_36(iVar0)) < 80f)
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
			func_44(&(Global_1574409.f_15));
		}
	}
	return 0;
}

int func_658(int iParam0, int iParam1)//Position - 0x181E7
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_191(iParam0))
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

void func_659()//Position - 0x18220
{
	unk_0xC0EBC1452FCAB15C(5);
	func_661();
	unk_0x94BD6F0436473406(1f);
	unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 8);
	func_660();
}

void func_660()//Position - 0x18246
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

void func_661()//Position - 0x18346
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

int func_662()//Position - 0x1838D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2512808.f_4692)
	{
		return 0;
	}
	if ((!func_45(&(Local_157.f_39)) && !func_45(&(Local_157.f_41))) && !func_45(&(Local_157.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0xD1952A425B78FFC0();
	if (func_45(&(Local_157.f_41)))
	{
		iVar0 = func_663(&uVar2, &(Local_157.f_41));
		iVar1 = 20000;
	}
	else if (func_45(&(Local_157.f_39)))
	{
		iVar0 = func_663(&uVar2, &(Local_157.f_39));
		iVar1 = func_28(0);
	}
	else if (func_45(&(Local_157.f_43)))
	{
		iVar0 = func_663(&uVar2, &(Local_157.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_663(var uParam0, var uParam1)//Position - 0x18450
{
	return unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, *uParam1));
}

int func_664()//Position - 0x18466
{
	if (func_665())
	{
		return 1;
	}
	return 0;
}

bool func_665()//Position - 0x1847A
{
	return Global_1574409.f_24;
}

int func_666()//Position - 0x18488
{
	var uVar0;
	
	func_670(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_669())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_668())
	{
		return 1;
	}
	if (func_667(157))
	{
		if (!func_655())
		{
			return 1;
		}
	}
	if (func_667(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_393() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_393()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_667(int iParam0)//Position - 0x18512
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_668()//Position - 0x18529
{
	return Global_2456830;
}

bool func_669()//Position - 0x18535
{
	return Global_2447174.f_581;
}

void func_670(var uParam0)//Position - 0x18544
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
					func_671(iVar0);
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

void func_671(int iParam0)//Position - 0x185B7
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_672(iVar2, &bVar3))
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

int func_672(int iParam0, var uParam1)//Position - 0x18638
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

void func_673()//Position - 0x18697
{
	system::wait(0);
}

void func_674()//Position - 0x186A4
{
	int iVar0;
	
	if (func_666())
	{
		Local_1524.f_5 = 5;
	}
	else if (unk_0xC80D31E4B587871C(Local_157.f_2, 0))
	{
		Local_1524.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1524.f_5 = 1;
	}
	else
	{
		Local_1524.f_5 = 2;
	}
	Local_1524 = Local_157.f_52;
	Local_1524.f_1 = Local_157.f_53;
	Local_1524.f_4 = Local_157.f_66;
	Local_1524.f_3 = Local_157.f_51;
	Local_1524.f_10 = (unk_0xE3CCAFB1555348DF() - Local_1524.f_9);
	if (!Global_262145.f_10841)
	{
		if (Local_1524.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		func_710(Local_1524, Local_157.f_3, Local_1523[unk_0x622FF3AE4B1D07C3() /*12*/].f_4, iVar0, -1, -1, -1);
	}
	if (unk_0xC80D31E4B587871C(iLocal_128, 4))
	{
		unk_0x0B9D04994D02CC2F(iLocal_136);
		unk_0x0EE72DB1CD8A3B86(&iLocal_128, 4);
	}
	unk_0xB94964861C6B4D3C(iLocal_136);
	unk_0xB94964861C6B4D3C(iLocal_137);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iLocal_153, iVar0) && !unk_0xCCCA18C9A006FF83(iLocal_154[iVar0]))
		{
			unk_0x0B9D04994D02CC2F(iLocal_154[iVar0]);
			unk_0xB94964861C6B4D3C(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	func_374();
	func_443(1, 1);
	unk_0x44EBEB4322278F78(0);
	func_494(0);
	func_381(Local_157.f_3, 0);
	func_675(133, 0, Local_157.f_37 == 6);
	func_380(23, 0);
	if (func_293() >= 0f)
	{
		unk_0x2DEDE82792FFFD0B(0f, 0, 21);
	}
	if (!unk_0xC80D31E4B587871C(iLocal_128, 9))
	{
		unk_0xE59086BE3BFA6F19();
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_675(int iParam0, bool bParam1, bool bParam2)//Position - 0x1882B
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
	func_706();
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
	unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_705(func_307(unk_0x9EB17624F44A8DA4()));
		func_380(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x9EB17624F44A8DA4() != -1) && func_704(unk_0x9EB17624F44A8DA4()) >= 12)
		{
			func_703(2535, -1);
			iVar1 = func_196(2535, -1, 0);
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
		func_702();
		func_701();
		func_700();
		if ((!func_97(unk_0x9EB17624F44A8DA4()) && !func_287(unk_0x9EB17624F44A8DA4())) && !func_429())
		{
			func_684();
		}
		func_683();
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 0) && !unk_0xC80D31E4B587871C(Global_1667858.f_3, 1))
		{
			func_659();
		}
		func_682();
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1717), 2);
		func_681();
		func_156();
	}
	if (unk_0x6D93C18E2EF22A46(1344549371))
	{
		unk_0x4C5AB0B8B9B71C4B(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x9EB17624F44A8DA4() != -1 && !func_152(unk_0x9EB17624F44A8DA4(), 21)) && !func_101(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_388(0);
			func_386(0);
			func_680();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_48(26, -1))
		{
			Global_2458997 = -1;
			func_46(26, -1);
		}
	}
	if (!func_676())
	{
		Global_2492048 = 1;
	}
}

int func_676()//Position - 0x18A7D
{
	if (((((!func_601(unk_0x9EB17624F44A8DA4()) && !func_582(unk_0x9EB17624F44A8DA4())) && func_307(unk_0x9EB17624F44A8DA4()) != 146) && !func_679()) && !func_678()) && !func_677(Global_4456448.f_143970))
	{
		return 0;
	}
	return 1;
}

bool func_677(int iParam0)//Position - 0x18ADF
{
	return iParam0 == 57;
}

int func_678()//Position - 0x18AEC
{
	if (Global_4456448.f_122309 == Global_262145.f_8940)
	{
		return 1;
	}
	return 0;
}

int func_679()//Position - 0x18B0D
{
	if ((Global_4456448 == 0 && unk_0x4916190900E76373()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_143970 > 0) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 15)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 18)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 19)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 29)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 28)) || unk_0xC80D31E4B587871C(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_680()//Position - 0x18BB7
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

void func_681()//Position - 0x18C0D
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

void func_682()//Position - 0x18CAB
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574409 = { Var0 };
}

void func_683()//Position - 0x18CDA
{
	var uVar0;
	
	Global_1316732 = uVar0;
}

void func_684()//Position - 0x18CE8
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_698();
	func_687(1, 1, 0);
	func_685();
}

void func_685()//Position - 0x18D1E
{
	func_686(0, 0);
}

void func_686(int iParam0, int iParam1)//Position - 0x18D2C
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_687(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18D44
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
		func_697();
	}
	if (!bParam2)
	{
		func_689(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_688(0);
	func_159();
}

void func_688(bool bParam0)//Position - 0x18DE3
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

void func_689(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x18E03
{
	if (bParam0)
	{
		if (func_696())
		{
			func_695();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_693();
		func_427(8, 0, 0, 0, 0);
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
		func_690();
	}
}

void func_690()//Position - 0x18ECA
{
	if (func_696() && !func_692())
	{
		func_695();
	}
	if (func_692())
	{
		func_691();
	}
	else
	{
		func_693();
		func_427(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_691()//Position - 0x18F12
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_692()//Position - 0x18F5A
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_693()//Position - 0x18F99
{
	if (func_696() && !func_692())
	{
		func_695();
	}
	func_694();
	Global_2405047.f_687 = 0;
}

void func_694()//Position - 0x18FC2
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

void func_695()//Position - 0x18FFD
{
	if (func_692())
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

int func_696()//Position - 0x1906B
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_697()//Position - 0x190AA
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_698()//Position - 0x190C3
{
	func_699();
	Global_2405047.f_2229 = 0;
}

void func_699()//Position - 0x190D7
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

void func_700()//Position - 0x19103
{
	Global_2512808.f_4694 = 0;
}

void func_701()//Position - 0x19113
{
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1 = 0;
	}
}

void func_702()//Position - 0x19131
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (iVar0 != -1)
	{
		Global_1627537[iVar0 /*532*/] = -1;
	}
}

void func_703(int iParam0, int iParam1)//Position - 0x1914F
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_192(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_187(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam1, 1);
	}
}

int func_704(int iParam0)//Position - 0x19190
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_705(int iParam0)//Position - 0x191A5
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
			if (func_391(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_706()//Position - 0x19207
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
	func_709(0);
	func_708(0);
	func_707(0);
}

void func_707(int iParam0)//Position - 0x192A8
{
	if (Global_2512808.f_4488 != iParam0)
	{
		Global_2512808.f_4488 = iParam0;
	}
}

void func_708(bool bParam0)//Position - 0x192C5
{
	if (Global_2512808.f_4487 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2512808.f_4487 = bParam0;
	}
}

void func_709(int iParam0)//Position - 0x192EA
{
	if (Global_2512808.f_4485 != iParam0)
	{
		Global_2512808.f_4485 = iParam0;
	}
}

void func_710(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x19307
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
			Var3.f_15 = iParam4;
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
			Var8.f_15 = iParam4;
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

int func_711(struct<21> Param0)//Position - 0x1957C
{
	func_720(func_721(Param0), Param0);
	unk_0xB66EA47EE710E67F(func_719(9));
	unk_0x7BC094E5B24A760D(func_718(9));
	func_715(0, -1, 0);
	func_713(133);
	unk_0x6E3ED3AE1C20445F(&Local_157, 88);
	unk_0xE7BC983D1386C9EE(&Local_1523, 385);
	if (!func_712())
	{
		func_674();
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		unk_0x29723B8B6E11E8F2(&(Local_157.f_52), &(Local_157.f_53));
	}
	Local_1524.f_2 = unk_0x8AB67E33BD002BAC();
	unk_0x941BE77305BB5695(0);
	return 1;
}

int func_712()//Position - 0x195F9
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
		if (func_669())
		{
			return 0;
		}
		if (func_667(155))
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

void func_713(int iParam0)//Position - 0x19652
{
	func_682();
	func_714();
	func_700();
	Global_1574409.f_4 = iParam0;
	Global_1574409.f_5 = iParam0;
	func_398(iParam0, -1);
	func_27(&(Global_1574409.f_18), 0, 0);
	Global_2512808.f_4553 = 0;
	Global_2457893[0] = func_93();
	Global_2457893[1] = func_93();
	Global_2457893[2] = func_93();
	Global_2457893[3] = func_93();
	Global_2457893[4] = func_93();
	func_156();
	if (!func_505(func_276()))
	{
		func_275();
	}
	if (func_154() && !func_153())
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 17);
	}
}

void func_714()//Position - 0x19708
{
	var uVar0;
	
	Global_1574434 = uVar0;
}

int func_715(int iParam0, int iParam1, bool bParam2)//Position - 0x19716
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_717();
			}
			else
			{
				return 0;
			}
		}
		if (!func_716())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_717();
					}
					else
					{
						return 0;
					}
				}
				if (func_669())
				{
					if (!bParam2)
					{
						func_717();
					}
					else
					{
						return 0;
					}
				}
				if (func_667(155))
				{
					if (!bParam2)
					{
						func_717();
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
					func_717();
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
				func_717();
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
			func_717();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_716()//Position - 0x1982B
{
	return Global_1312831;
}

void func_717()//Position - 0x19837
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_718(int iParam0)//Position - 0x19843
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_719(int iParam0)//Position - 0x19913
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

void func_720(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x199E1
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_717();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_721(int iParam0)//Position - 0x19A00
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

