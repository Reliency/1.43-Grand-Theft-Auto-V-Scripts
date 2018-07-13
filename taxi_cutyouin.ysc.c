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
	struct<418> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	vector3 vLocal_246 = { 0f, 0f, 0f };
	vector3 vLocal_247 = { 0f, 0f, 0f };
	vector3 vLocal_248 = { 0f, 0f, 0f };
	vector3 vLocal_249 = { 0f, 0f, 0f };
	vector3 vLocal_250 = { 0f, 0f, 0f };
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	vector3 vLocal_269[24] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	vector3 vLocal_273[24] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	vector3 vLocal_277[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	vector3 vLocal_281[24] = "";
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	vector3 vLocal_285[24] = "";
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	vector3 vLocal_289[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	vector3 vLocal_293[24] = "";
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	vector3 vLocal_297[24] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	vector3 vLocal_301[24] = "";
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1097859072;
	var uLocal_309 = 1500;
	var uLocal_310 = 45;
	var uLocal_311 = 1103626240;
	var uLocal_312 = 5;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323[2] = { 0, 0 };
	int iLocal_324 = 0;
	var uLocal_325[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<28> Local_330 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
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
	int iLocal_374 = 0;
	int iLocal_375 = 0;
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
	vLocal_246 = { 342,6987f, -996,7599f, 28,2438f };
	vLocal_247 = { 321,1089f, -996,4285f, 28,20932f };
	vLocal_248 = { -1042,946f, -2689,55f, 12,7572f };
	vLocal_249 = { -1044,808f, -2694,138f, 12,728f };
	vLocal_250 = { 348,0136f, -993,6165f, 31,9655f };
	iLocal_262 = 1;
	iLocal_266 = -1;
	StringCopy(&cLocal_269, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_273, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_277, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_281, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_285, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_289, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_293, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_297, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_301, "txm8_thank3F_2", 24);
	if (unk_0x7D9C4B359376D38A(67))
	{
		func_432(2);
		func_429();
	}
	unk_0xBC03901A15107317(1);
	func_416(5);
	while (true)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_231.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_231);
		}
		system::wait(0);
	}
}

void func_1(var uParam0)//Position - 0x185
{
	uParam0->f_2 = unk_0xFC1458A37D98B502();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x1A6
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

int func_3(int iParam0)//Position - 0x1F1
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

int func_4(int iParam0)//Position - 0x22E
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

bool func_5(int iParam0)//Position - 0x258
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x264
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2EC
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

void func_8()//Position - 0x387
{
	int iVar0;
	int iVar1;
	
	if (func_415(&Local_231))
	{
		if (func_414(&Local_231, bLocal_254))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_231);
		func_377(&Local_231, &uLocal_306);
		if (Local_231.f_410 != 28 && Local_231.f_410 != 30)
		{
			func_376(&Local_231);
		}
		func_375(&Local_231, &uLocal_264, 0);
		if (Local_231.f_410 > 2)
		{
			if (((Local_231.f_410 == 21 || Local_231.f_410 == 25) || Local_231.f_410 == 9) || Local_231.f_410 == 22)
			{
				func_374(&Local_231);
			}
			if (!func_373(&Local_231))
			{
				func_343();
			}
			else
			{
				func_327(&Local_231, "Taxi Not Driveable", func_342(&Local_231));
			}
		}
		if (Local_231.f_410 == 9 || Local_231.f_410 == 22)
		{
			func_304(&Local_231, 0, 1);
		}
		if (Local_231.f_410 == 17 || Local_231.f_410 == 21)
		{
			if (func_303(&Local_231) && func_294(1, 1, 0))
			{
				func_281(&uLocal_45, vLocal_250, 0, 0, 1, 1, 1);
			}
			else
			{
				func_280(&uLocal_45, 0, 0);
			}
			if (func_279(&Local_231) && func_294(1, 1, 0))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_263, 3))
				{
					func_278("TAXI_HNT_CAM", -1);
					unk_0x872F1C1F8587CCC7(&iLocal_263, 3);
					if (unk_0xC80D31E4B587871C(iLocal_263, 4))
					{
						unk_0x0EE72DB1CD8A3B86(&iLocal_263, 4);
					}
				}
			}
			else if (!unk_0xC80D31E4B587871C(iLocal_263, 4))
			{
				unk_0x3E80C2F7BC665259(1);
				unk_0x872F1C1F8587CCC7(&iLocal_263, 4);
			}
		}
		switch (Local_231.f_410)
		{
			case 0:
				func_275();
				func_274(&Local_231, 16, 4f, 0);
				func_271(&Local_231, vLocal_248, vLocal_249, "TaxiDerrick", func_273(0), 116,1366f, 10f);
				func_269(&Local_231);
				func_268(&Local_231, 1);
				break;
			
			case 1:
				if (func_266())
				{
					unk_0x4DE114E3C7F8B7C2("TAXI_Pursuers", &iLocal_328);
					func_265();
					func_245();
					func_244(&(vLocal_230[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_243(&Local_231, &vLocal_230);
					func_242(&Local_231);
					Local_231.f_14 = { vLocal_248 };
					func_268(&Local_231, 3);
				}
				break;
			
			case 3:
				if (func_236(&Local_231, 1))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_231.f_3, 0))
					{
						unk_0x03924C68EFCBC511(Local_231.f_3, 8, 0, 0, 0);
						unk_0xCE93FCB8A8D8DF0B(Local_231.f_3, iLocal_328);
						unk_0x7346A36E01E18FEC(Local_231.f_3, 1);
					}
					unk_0xA846A937885EB977(-1035,326f, -2703,305f, 12,8004f, -1056,08f, -2568,675f, 12,8181f, 125f, 1, false, 1);
					unk_0xF96119FCCD4D1889(0, 1166638144, Local_231.f_413);
					unk_0xF96119FCCD4D1889(0, -1865950624, Local_231.f_413);
					unk_0xF96119FCCD4D1889(0, 296331235, Local_231.f_413);
					unk_0x14776E43F90DD454(func_273(0));
					func_235(&Local_231, 1, 0);
					func_268(&Local_231, 5);
				}
				break;
			
			case 5:
				if (func_211(&Local_231, 0, 1109393408))
				{
					Local_231.f_17 = { func_210(0) };
					iLocal_251 = 1;
					func_268(&Local_231, 15);
				}
				break;
			
			case 15:
				if (func_209(&Local_231))
				{
					func_206(&Local_231, 9, 1, 0, 0);
					func_205(&Local_231);
					func_204();
					func_203(func_210(-1), 0, 1114636288);
					func_268(&Local_231, 9);
				}
				if (unk_0xB8DE76287EDC4957(Local_231.f_4, 0))
				{
					if (!unk_0xA8D0477084E86A92(Local_231.f_2, Local_231.f_4, 0))
					{
						func_198(&Local_231);
						func_268(&Local_231, 5);
					}
				}
				break;
			
			case 9:
				if (!func_197(Local_231.f_82, 16384) && func_196(&Local_231) != 35)
				{
					if (func_195(&Local_231))
					{
						if (func_279(&Local_231))
						{
							if (func_194(Local_231.f_4, Local_231.f_17, 1) <= 80f)
							{
								func_192(&uLocal_333);
								func_191(&Local_330, 4, 0);
								func_206(&Local_231, 35, 1, 1, 0);
								unk_0xC1CEF375B44856F4(false);
							}
						}
					}
				}
				if (!iLocal_261)
				{
					if (func_195(&Local_231))
					{
						if (func_279(&Local_231))
						{
							if (func_194(Local_231.f_4, Local_231.f_17, 1) <= 100f)
							{
								unk_0x665CE8DB16170355(333,6208f, -955,5027f, 28,4225f, 60f, 0);
								iLocal_261 = 1;
							}
						}
					}
				}
				if (func_174(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					iLocal_251 = 0;
					unk_0xF20857E4CB32A2B7(Local_231.f_9, 0);
					Local_231.f_26 = { -1047,518f, -2722,114f, 19,0823f };
					Local_231.f_34 = 238,52f;
					func_274(&Local_231, 6, 0, 0);
					func_172(&(Local_231.f_81), 67108864);
					func_206(&Local_231, 28, 1, 1, 0);
					Local_231.f_417 = 29;
					func_268(&Local_231, 16);
				}
				break;
			
			case 16:
				if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
				{
					if (func_195(&Local_231))
					{
						func_170(&Local_231, vLocal_246);
					}
					else if (unk_0x78F50AA8F955BEFC(Local_231.f_3, 451360105) == 7)
					{
						unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
						unk_0x6931076730A4AC5D(&iLocal_245);
						unk_0x380C1E7B7740D618(0, vLocal_246, 1,5f, 40000, 0,25f, 0, 1193033728);
						unk_0x380C1E7B7740D618(0, 337,3356f, -997,7456f, 28,1318f, 3f, 40000, 0,25f, 0, 1193033728);
						unk_0x380C1E7B7740D618(0, vLocal_247, 3f, 40000, 0,25f, 0, 1193033728);
						unk_0x1B16DD5C115FE009(iLocal_245);
						unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
						unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
						func_274(&Local_231, 6, 0, 0);
						func_268(&Local_231, 17);
						iLocal_252 = 0;
					}
				}
				break;
			
			case 17:
				if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
				{
				}
				if (!iLocal_252)
				{
					func_162();
				}
				if (func_279(&Local_231))
				{
					if (!unk_0x0C88267282FD588F(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0))
					{
						if (func_194(Local_231.f_4, Local_231.f_17, 1) > 250f)
						{
							func_327(&Local_231, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_160(Local_231.f_3, 1) > 10f)
						{
							if (unk_0x94540F498465F1A2(Local_231.f_9) == 0 && !bLocal_254)
							{
								func_157(&Local_231, 1);
								unk_0x166954C5648772B6("TAXI_OBJ_CYI_01");
							}
							func_206(&Local_231, 57, 1, 0, 1);
						}
					}
					else if (unk_0xA6DECE14FC9A8C51(Local_231.f_9) && unk_0x94540F498465F1A2(Local_231.f_9) > 0)
					{
						unk_0xF20857E4CB32A2B7(Local_231.f_9, 0);
						unk_0xAAAC88CC20771601(Local_231.f_9, false);
						func_206(&Local_231, 29, 1, 0, 1);
						unk_0x166954C5648772B6("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_253)
					{
						iLocal_253 = 1;
					}
					func_146(&Local_231, 1);
				}
				if (((unk_0x0C88267282FD588F(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0) && unk_0x0C88267282FD588F(Local_231.f_3, vLocal_247, 5f, 5f, 5f, false, true, 0)) && func_303(&Local_231)) && !iLocal_252)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
					{
						if (unk_0xEC211A86AB3726B6(Local_231.f_3))
						{
							unk_0x872F1C1F8587CCC7(&uLocal_306, 8);
							unk_0x9E058151726E58DE(Local_231.f_3, joaat("weapon_combatpistol"), 50, false, true);
							unk_0x517BE2428CAF5092(Local_231.f_3, 335,5314f, -992,4785f, 28,38245f, 10000, -687903391);
							unk_0xB3A8974D2C811672(Local_231.f_3, false, 0);
							unk_0x94433067C90B34A5(Local_231.f_3, false);
							unk_0x1A0806871323CD16(Local_231.f_3, true);
							unk_0xBD8D47FDC6902B2D(Local_231.f_3, 339,9392f, -992,9357f, 28,3731f, 1, false, 0, 1);
							iLocal_252 = 1;
							func_274(&Local_231, 6, 0, 0);
						}
					}
				}
				if (iLocal_252)
				{
					if ((func_144(&Local_231, 6) > 8f && unk_0x0C88267282FD588F(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && func_303(&Local_231))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
						{
							if (unk_0xEC211A86AB3726B6(Local_231.f_3))
							{
								unk_0x0EE72DB1CD8A3B86(&uLocal_306, 8);
								unk_0xB3A8974D2C811672(Local_231.f_3, true, 0);
								unk_0x94433067C90B34A5(Local_231.f_3, true);
								unk_0x1A0806871323CD16(Local_231.f_3, false);
								unk_0xBD8D47FDC6902B2D(Local_231.f_3, vLocal_247, 1, false, 0, 1);
								unk_0x03924C68EFCBC511(Local_231.f_3, 8, 1, 0, 0);
								if (unk_0xB8DE76287EDC4957(Local_231.f_4, 0))
								{
									unk_0xAE01EF4BC84AFE7C(Local_231.f_3, 118, false);
									unk_0x957CEE967C939968(Local_231.f_3);
									iVar0 = func_143(Local_231.f_4, Local_231.f_3);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
									unk_0x6931076730A4AC5D(&iLocal_245);
									unk_0x755F86FFB31712D8(0, 343,9973f, -998,308f, 28,2314f, 3f, 0, 0, 786603, -1082130432);
									unk_0xD40A6DFCC31D221A(0, 1);
									unk_0xF1794430C256DBC0(0, 0);
									unk_0x6F8C8278B7C06889(0, Local_231.f_4, 40000, iVar0, 2f, 1, 0);
									unk_0x1B16DD5C115FE009(iLocal_245);
									unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
									func_274(&Local_231, 6, 0, 0);
									if (unk_0xA6DECE14FC9A8C51(Local_231.f_9))
									{
										unk_0xF20857E4CB32A2B7(Local_231.f_9, 0);
										unk_0xAAAC88CC20771601(Local_231.f_9, false);
									}
									unk_0x22B03603588D6D33(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_268(&Local_231, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_144(&Local_231, 6) > 23f)
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
					{
						unk_0xB8E08BD5B184DF4E(Local_231.f_3);
						unk_0xDF28F1574E61F9EA(Local_231.f_3, unk_0xFC1458A37D98B502(), -1, 0);
					}
					func_327(&Local_231, "player didn't let teh Passenger in", 8);
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				if ((unk_0x0C88267282FD588F(Local_231.f_3, 347,8621f, -983,6118f, 31,30889f, 4f, 3f, 3f, false, true, 0) && unk_0x0C88267282FD588F(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && iLocal_252)
				{
					unk_0x91C52DAA1CBF6F0B(344,5906f, -996,409f, 28,30219f, 4, 0,5f, 1, 0, 1f, 0);
					unk_0x23A4CE7F9EBB02D4(iLocal_266, "Burglar_Bell", 340,8f, -965,4f, 28,4f, "Generic_Alarms", 0, 0, 0);
					iLocal_252 = 0;
				}
				if (func_195(&Local_231))
				{
					unk_0xC1CEF375B44856F4(true);
					unk_0x1563F8C21480594F(unk_0x98EC0789D9F0703B(), 2, 0);
					unk_0xCFB8D84F848CAA39(unk_0x98EC0789D9F0703B(), 0);
					unk_0xE859EF37EA7362D3("TAXI_CUT_U_IN");
					func_203(func_210(0), 1, 1114636288);
					unk_0xF96119FCCD4D1889(5, Local_231.f_413, -1533126372);
					func_141(6, 2);
					func_206(&Local_231, 49, 1, 0, 0);
					if (unk_0xA6DECE14FC9A8C51(Local_231.f_9))
					{
						unk_0xAAAC88CC20771601(Local_231.f_9, false);
						unk_0xE30CF11C0EE14316(&(Local_231.f_9));
					}
					func_280(&uLocal_45, 0, 0);
					func_274(&Local_231, 6, 0, 0);
					func_274(&Local_231, 9, 0, 0);
					func_274(&Local_231, 7, 0, 0);
					func_268(&Local_231, 25);
				}
				break;
			
			case 25:
				func_140(&Local_231, &(Local_231.f_43));
				if (func_197(Local_231.f_44, 4))
				{
					func_138(&(Local_231.f_44), 4);
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) > 0)
				{
					if (!func_137(&Local_231))
					{
						if (!unk_0x42111BD51D233AAB())
						{
							if ((func_144(&Local_231, 16) > unk_0x5B811202FCBE9E9D(15f, 25f) && iLocal_268 < 8) || func_144(&Local_231, 16) > unk_0x5B811202FCBE9E9D(25f, 35f))
							{
								if (func_196(&Local_231) != 51)
								{
									func_206(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_235(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1 && func_144(&Local_231, 6) > 10f)
				{
					unk_0xE02E32C69260FBB7("TAXI_CUT_U_IN");
					func_268(&Local_231, 26);
					func_172(&(Local_231.f_44), 1);
				}
				break;
			
			case 26:
				func_140(&Local_231, &(Local_231.f_43));
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) > 0)
				{
					if (!func_137(&Local_231))
					{
						if (!unk_0x42111BD51D233AAB())
						{
							if ((func_144(&Local_231, 16) > unk_0x5B811202FCBE9E9D(15f, 25f) && iLocal_268 < 8) || func_144(&Local_231, 16) > unk_0x5B811202FCBE9E9D(25f, 35f))
							{
								if (func_196(&Local_231) != 51)
								{
									func_206(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_235(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1 && func_144(&Local_231, 9) > 2f)
				{
					if (func_144(&Local_231, 9) <= 180f)
					{
						func_136(&Local_231, 0);
					}
					unk_0xF96119FCCD4D1889(0, Local_231.f_413, -1533126372);
					Local_231.f_17 = { func_210(5) };
					func_141(7, 2);
					func_135(&Local_231);
					func_134(&Local_231, 9, 0);
					func_134(&Local_231, 2, 0);
					func_134(&Local_231, 3, 0);
					if (!func_197(Local_231.f_44, 4))
					{
						func_172(&(Local_231.f_44), 4);
					}
					Local_231.f_116 = 1;
					func_268(&Local_231, 14);
				}
				break;
			
			case 14:
				if (!func_132(&Local_231))
				{
					func_129();
					func_157(&Local_231, 1);
					func_128();
					func_268(&Local_231, 22);
				}
				break;
			
			case 22:
				if (!bLocal_256)
				{
					if (Local_231.f_417 == 33 && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
					{
						bLocal_256 = true;
						func_172(&(Local_231.f_44), 4);
						func_127(&iLocal_266);
						Local_330.f_27++;
					}
				}
				if (bLocal_256)
				{
					if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) > 0)
					{
						if (unk_0xA6DECE14FC9A8C51(Local_231.f_9))
						{
							unk_0xAAAC88CC20771601(Local_231.f_9, false);
							unk_0xE30CF11C0EE14316(&(Local_231.f_9));
						}
					}
					else
					{
						func_157(&Local_231, 1);
					}
				}
				if (func_197(Local_231.f_44, 1) && bLocal_256)
				{
					func_138(&(Local_231.f_44), 1);
					if (bLocal_329)
					{
					}
				}
				if (!func_197(Local_231.f_82, 32768) && func_196(&Local_231) != 36)
				{
					if (func_195(&Local_231))
					{
						if (func_279(&Local_231))
						{
							if (func_194(Local_231.f_4, Local_231.f_17, 1) <= 300f)
							{
								if (!func_126())
								{
									func_206(&Local_231, 36, 1, 1, 0);
								}
								else
								{
									func_124();
								}
								if (iLocal_255 && !iLocal_258)
								{
									unk_0x247EAA2E93D4A021(Local_231.f_17, 3f, 0, 0, 0, false);
									iLocal_326 = unk_0xCB389937EDB1519A(-1033,188f, -2743,18f, 19f, -1047,948f, -2739,18f, 20,20066f, 0, 1, 1, 1);
									iLocal_323[0] = unk_0xAC992EFAD62C33BF(6, func_273(3), -1036,502f, -2742,986f, 20,16969f, 0f, 1, true);
									iLocal_323[1] = unk_0xAC992EFAD62C33BF(6, func_273(3), -1043,706f, -2739,234f, 19,16969f, 0f, 1, true);
									unk_0x9E058151726E58DE(iLocal_323[0], joaat("weapon_carbinerifle"), -1, true, true);
									unk_0x9E058151726E58DE(iLocal_323[1], joaat("weapon_carbinerifle"), -1, true, true);
									if (unk_0xD8F3F5A5912D9487(-1036,502f, -2742,986f, 20,16969f, 5f, 1))
									{
										unk_0xADD2E58C002FD698(iLocal_323[0], -1036,502f, -2742,986f, 20,16969f, 2,5f, 0);
									}
									else
									{
										unk_0x2EA90674750EA01E(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (unk_0xD8F3F5A5912D9487(-1043,706f, -2739,234f, 19,16969f, 5f, 1))
									{
										unk_0xADD2E58C002FD698(iLocal_323[1], -1043,706f, -2739,234f, 19,16969f, 2,5f, 0);
									}
									else
									{
										unk_0x2EA90674750EA01E(iLocal_323[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_258 = 1;
								}
							}
						}
					}
				}
				if (func_174(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					Local_330 = 0;
					unk_0xE30CF11C0EE14316(&(Local_231.f_9));
					func_122(&Local_231);
					func_118(&Local_231);
					func_117();
					func_268(&Local_231, 27);
				}
				break;
			
			case 27:
				if (func_115() && !iLocal_257)
				{
					func_114(&Local_231, &iVar1);
					iLocal_244 = unk_0x5E35CF35E65D69B9(joaat("p_banknote_s"), unk_0xB3328BA8976B416C(Local_231.f_3, 1), true, true, false);
					unk_0xA9D382E7BA095148(iLocal_244, Local_231.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!unk_0x3AB6A1A9084FB0A4(Local_231.f_3) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0x12C9D41D52A560D6(Local_231.f_3, "oddjobs@taxi@cyi", func_113(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "oddjobs@taxi@cyi", func_112(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x90CD41CAEBB68E99(iLocal_244, func_111(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0f, 0);
					}
					iLocal_257 = 1;
				}
				if (func_103(&Local_231, 1))
				{
					unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
					unk_0x6931076730A4AC5D(&iLocal_245);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0xD40A6DFCC31D221A(0, 0);
					unk_0xCB3D88C918AA637C(0);
					unk_0x380C1E7B7740D618(0, Local_231.f_29, 1f, 20000, 0,25f, 0, 1193033728);
					unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					unk_0x1B16DD5C115FE009(iLocal_245);
					unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
					unk_0xE9B3D12A64CC7C1A(Local_231.f_3, true);
					unk_0x22B03603588D6D33(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_268(&Local_231, 29);
				}
				break;
			
			case 29:
				if (func_72(&Local_231, &iLocal_313))
				{
					if (iLocal_255 || iLocal_265 == -1)
					{
						func_268(&Local_231, 28);
					}
					else
					{
						func_11(1, &Local_231, 1);
						func_268(&Local_231, 30);
					}
				}
				break;
			
			case 28:
				if (func_9())
				{
					func_11(1, &Local_231, 1);
					func_268(&Local_231, 30);
				}
				break;
			
			case 30:
				func_429();
				break;
			}
	}
}

int func_9()//Position - 0x1562
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	vVar1 = { vVar1 };
	if (iLocal_265 > 2)
	{
		unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	}
	switch (iLocal_265)
	{
		case -1:
			iLocal_265++;
			break;
		
		case 0:
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0xC1CEF375B44856F4(false);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0x16416C5B54FDBCBB(0, 0, 256);
			unk_0x380C1E7B7740D618(0, -1041,9f, -2745,113f, 20,3644f, 1,25f, 20000, 0,25f, 0, 1193033728);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(Local_231.f_3, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
			iLocal_327 = unk_0xEA60F3B426BB095B(func_273(4), -1067,146f, -2579,632f, 19,7762f, 150f, true, true, false);
			iLocal_324 = unk_0x00D1A9572426E8DD(iLocal_327, 26, func_273(3), -1, 1, true);
			func_274(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 1:
			if (func_144(&Local_231, 9) > 0,5f)
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_231.f_3, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_323[0], 0))
					{
						unk_0x60C06BFD037BB7CF(iLocal_323[0], Local_231.f_3, -1, 2049, 3);
						func_7(&(Local_231.f_244), 4, iLocal_323[0], "TaxiOJCop1", 0, 1);
						unk_0x350CEE66BDF90273(iLocal_323[0], "TaxiOJCop1");
					}
					if (!unk_0x191BE1BC8F26F3C1(iLocal_323[1], 0))
					{
						unk_0x60C06BFD037BB7CF(iLocal_323[1], Local_231.f_3, -1, 2049, 3);
					}
				}
				iLocal_265++;
			}
			break;
		
		case 2:
			if ((!unk_0x191BE1BC8F26F3C1(iLocal_323[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_323[1], 0)) && !unk_0x191BE1BC8F26F3C1(Local_231.f_3, 0))
			{
				if (unk_0x0F3033474C49912D(Local_231.f_3, -1032,675f, -2738,775f, 19,16969f, -1041,51f, -2733,615f, 21,54504f, 2f, 0, true, 0))
				{
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0x2C85E478535743C1(0, Local_231.f_3, Local_231.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					unk_0x9627C22EF3C3F4D6(0, Local_231.f_3, -1, 0);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(iLocal_323[0], iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					unk_0xE9B3D12A64CC7C1A(iLocal_323[0], true);
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0x270054D97CD161A8(0, 1500);
					unk_0x9627C22EF3C3F4D6(0, Local_231.f_3, 2000, 0);
					unk_0x2C85E478535743C1(0, Local_231.f_3, Local_231.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					unk_0x9627C22EF3C3F4D6(0, Local_231.f_3, -1, 0);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(iLocal_323[1], iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					unk_0xE9B3D12A64CC7C1A(iLocal_323[1], true);
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0xAC838A977FB6E6BC(0, iLocal_323[0], 3);
					unk_0x60C06BFD037BB7CF(0, iLocal_323[0], -1, 2049, 3);
					unk_0x270054D97CD161A8(0, 1000);
					unk_0x2955A31540EE0E4F(0, -1, 0, -1, 0);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(Local_231.f_3, iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					func_206(&Local_231, 54, 1, 0, 0);
					iLocal_267 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uLocal_325, -1);
					iVar2 = 0;
					while (iVar2 < iLocal_267)
					{
						if (((((uLocal_325[iVar2] != unk_0xFC1458A37D98B502() && uLocal_325[iVar2] != Local_231.f_3) && uLocal_325[iVar2] != iLocal_323[1]) && uLocal_325[iVar2] != iLocal_323[0]) && uLocal_325[iVar2] != iLocal_324) && !unk_0x9761C10D57B68069(uLocal_325[iVar2]))
						{
							unk_0xDD29FF4BAB8AFF9C(uLocal_325[iVar2], true, 1);
							unk_0xD68E88A8E0BE8697(uLocal_325[iVar2], Local_231.f_3, 100f, -1, 0, 0);
						}
						iVar2++;
					}
					func_274(&Local_231, 9, 0, 0);
					iLocal_265++;
				}
			}
			break;
		
		case 3:
			if (func_144(&Local_231, 9) > 5f && !func_126())
			{
				unk_0xF96119FCCD4D1889(5, iLocal_328, -1533126372);
				unk_0xF96119FCCD4D1889(5, -1533126372, iLocal_328);
				unk_0x5AD8564EFD5BEC2E(Local_231.f_3, &iVar3, 1);
				if (iVar3 == joaat("weapon_unarmed"))
				{
					unk_0x9E058151726E58DE(Local_231.f_3, joaat("weapon_combatpistol"), -1, false, true);
				}
				unk_0xAE6EBBBBD8B9FB30(Local_231.f_3, 13, true);
				unk_0xAE6EBBBBD8B9FB30(Local_231.f_3, 24, true);
				unk_0x4F9A62E773100FDC(Local_231.f_3, 2);
				unk_0xD57D8114F01D6AE2(Local_231.f_3, 1);
				unk_0xBB3CC641B6AED5E5(Local_231.f_3, 80);
				unk_0x992E814DF611C58C(Local_231.f_3, 50f, 0);
				func_274(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			if ((unk_0xEBE499597C718EB8(iLocal_323[0], unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_323[1], unk_0xFC1458A37D98B502(), 1)) && !unk_0x3AB6A1A9084FB0A4(Local_231.f_3))
			{
				unk_0xD68E88A8E0BE8697(Local_231.f_3, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
				func_274(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 4:
			if (unk_0x191BE1BC8F26F3C1(Local_231.f_3, 0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_323[0], 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_323[0]);
					if (unk_0xD8F3F5A5912D9487(-1036,502f, -2742,986f, 20,16969f, 5f, 1))
					{
						unk_0xADD2E58C002FD698(iLocal_323[0], -1036,502f, -2742,986f, 20,16969f, 1f, 0);
					}
					else
					{
						unk_0x2EA90674750EA01E(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					unk_0xE9B3D12A64CC7C1A(iLocal_323[0], true);
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_323[1], 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_323[1]);
					vVar1 = { unk_0xB3328BA8976B416C(Local_231.f_3, 0) };
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0x1D077D3591C6FFA7(0, vVar1, vVar1, 1f, false, 3f, 4f, true, 0, 0, -957453492);
					unk_0xCDACC23C56C1F7F5(0, vVar1, 500, 0, 0);
					unk_0xBA54D3D84EF38E3D(0, vVar1, -1, 2049, 3);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(iLocal_323[1], iVar0);
					unk_0xE9B3D12A64CC7C1A(iLocal_323[0], true);
				}
				return 1;
			}
			else
			{
				if (func_144(&Local_231, 9) > 6f)
				{
					func_206(&Local_231, 140, 1, 0, 1);
					func_274(&Local_231, 9, 0, 0);
				}
				if (unk_0x191BE1BC8F26F3C1(iLocal_323[0], 0) && unk_0x191BE1BC8F26F3C1(iLocal_323[1], 0))
				{
					unk_0xB8E08BD5B184DF4E(Local_231.f_3);
					unk_0xD68E88A8E0BE8697(Local_231.f_3, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
				}
				if (func_160(Local_231.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_274(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 5:
			if (func_144(&Local_231, 9) > 2f)
			{
				func_274(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 6:
			if (func_144(&Local_231, 9) > 2f)
			{
				vVar1 = { unk_0xA05DDB968587006B(iLocal_327, func_10(5)) };
				func_274(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 7:
			if (func_144(&Local_231, 9) >= 1f)
			{
				iLocal_265++;
			}
			break;
		
		case 8:
			iLocal_265++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_10(int iParam0)//Position - 0x1C7D
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1040,486f, -2726,058f, 21,4491f };
			break;
		
		case 4:
			vVar0 = { -1044,847f, -2726,239f, 20,2197f };
			break;
		
		case 6:
			vVar0 = { -1045,252f, -2733,154f, 23,9084f };
			break;
		
		case 5:
			vVar0 = { -1053,653f, -2720,5f, 20,1615f };
			break;
		
		case 1:
			vVar0 = { -1042,008f, -2729,232f, 21,2022f };
			break;
		
		case 2:
			vVar0 = { -1049,799f, -2725,069f, 20,7481f };
			break;
		
		case 3:
			vVar0 = { -1043,888f, -2723,783f, 20,6874f };
			break;
		
		case 7:
			vVar0 = { -1041,917f, -2746,239f, 22,2494f };
			break;
		
		case 8:
			vVar0 = { -1041,811f, -2739,353f, 21,2173f };
			break;
	}
	return vVar0;
}

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0x1D8C
{
	if (bParam0)
	{
		func_48(uParam1);
		if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_3))
		{
			unk_0xAE01EF4BC84AFE7C(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_141(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0x1DC8
{
	func_47(uParam0);
	if (func_126())
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
	func_203(uParam0->f_14, 1, 1114636288);
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
	if (func_197(Global_104555.f_19067, 4))
	{
		func_138(&(Global_104555.f_19067), 4);
		unk_0x2E4932E63763FE26(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0xFCCDDE0E48CF9588("gestures@m@standing@casual");
	unk_0xFCCDDE0E48CF9588("oddjobs@taxi@");
	unk_0xFCCDDE0E48CF9588("oddjobs@towingcome_here");
	if (unk_0xDEC0EB6EAE9BC575())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x036D7C18EE783AB5(unk_0x98EC0789D9F0703B()))
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xB4BD3ECA024822EB(system::round((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(var uParam0)//Position - 0x1F1C
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)//Position - 0x1F58
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

bool func_15(var uParam0)//Position - 0x1FB0
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_16(var uParam0)//Position - 0x1FC0
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_17(int iParam0)//Position - 0x1FD0
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x8C1C362CA8299475(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)//Position - 0x1FF7
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

void func_19(var uParam0)//Position - 0x20C0
{
	unk_0x27FC35791018A3A5(uParam0->f_51[0]);
}

void func_20(var uParam0)//Position - 0x20D4
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

int func_21()//Position - 0x21D1
{
	return joaat("taxi");
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x21DE
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

bool func_23()//Position - 0x22F7
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)//Position - 0x2314
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

int func_25(int iParam0, bool bParam1)//Position - 0x235F
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

int func_26()//Position - 0x23A0
{
	return Global_1312736;
}

int func_27(int iParam0)//Position - 0x23AC
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

bool func_28()//Position - 0x23EE
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x23FF
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

int func_30()//Position - 0x2432
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x2459
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

int func_32()//Position - 0x247C
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

int func_33()//Position - 0x24A7
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x24C1
{
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)//Position - 0x24DB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam1)//Position - 0x24F8
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

Vector3 func_37(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x2558
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

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x25A5
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()//Position - 0x25EC
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)//Position - 0x25F8
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

void func_41(bool bParam0, bool bParam1)//Position - 0x2668
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

int func_42(int iParam0)//Position - 0x26DC
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

void func_43()//Position - 0x2736
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

void func_44(int iParam0, bool bParam1)//Position - 0x27BD
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

void func_45()//Position - 0x27FB
{
	Global_14622 = 0;
	func_46();
}

void func_46()//Position - 0x280B
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_47(var uParam0)//Position - 0x282C
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

void func_48(var uParam0)//Position - 0x286D
{
	func_141(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_432(1);
		func_58(15, 1);
	}
	func_172(&(Global_104555.f_19067), 1024);
	if (!func_197(Global_104555.f_19067, 64))
	{
		func_49(func_56(func_57(uParam0)), 0, 0);
	}
}

void func_49(int iParam0, int iParam1, int iParam2)//Position - 0x28C1
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
		func_55((891 + iParam0), 1, -1, 1);
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
		func_50();
	}
}

void func_50()//Position - 0x29A9
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
		func_54(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_53() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()//Position - 0x2E6A
{
	if (func_52(0))
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

bool func_52(bool bParam0)//Position - 0x2EB5
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_53()//Position - 0x2EE0
{
	return Global_25233;
}

int func_54(int iParam0, int iParam1)//Position - 0x2EEB
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

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2F3C
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

int func_56(int iParam0)//Position - 0x3408
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

int func_57(var uParam0)//Position - 0x349E
{
	return uParam0->f_411;
}

int func_58(int iParam0, int iParam1)//Position - 0x34AB
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

int func_59(int iParam0, int iParam1)//Position - 0x34C6
{
	if (func_71(14) && !func_70(iParam0))
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
	if (func_69(&Global_4267379))
	{
		if (func_67(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_4267379, iParam0))
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

int func_60(var uParam0, int iParam1)//Position - 0x3563
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_71(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	func_63(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_61(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_61(var uParam0, int iParam1)//Position - 0x3614
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_71(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_62(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)//Position - 0x368F
{
	return (*uParam0)[iParam1] == 78;
}

void func_63(var uParam0)//Position - 0x36A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64(uParam0, iVar0);
		iVar0++;
	}
	func_65(uParam0, (Global_4267378 - 0,5f));
}

void func_64(var uParam0, int iParam1)//Position - 0x36D4
{
	(*uParam0)[iParam1] = 78;
}

void func_65(var uParam0, float fParam1)//Position - 0x36E4
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

float func_66(var uParam0)//Position - 0x3701
{
	return uParam0->f_80;
}

bool func_67(var uParam0, int iParam1)//Position - 0x370D
{
	return func_68(uParam0, iParam1) != -1;
}

int func_68(var uParam0, int iParam1)//Position - 0x371F
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

bool func_69(var uParam0)//Position - 0x374C
{
	return uParam0->f_79 == 1;
}

int func_70(int iParam0)//Position - 0x375A
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

bool func_71(int iParam0)//Position - 0x37AA
{
	return Global_35861 == iParam0;
}

int func_72(var uParam0, int iParam1)//Position - 0x37B8
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_126() && func_144(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				}
				func_102(uParam0);
				func_138(&(Global_104555.f_19067), 4096);
				func_99(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_101(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x4AFBCBFDE748D4E0(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_98(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_92(iParam1, 0))
			{
				func_73(uParam0);
				func_274(uParam0, 0, 0, 0);
				func_98(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_73(var uParam0)//Position - 0x388A
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_74(func_90(), 21, iVar0, 0, 0);
		func_141(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x38C8
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
	func_75(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x39AF
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
					func_87(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_82(5))
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
							func_87(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_82(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_87(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_87(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_87(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_87(joaat("sp2_money_spent_property"), iParam3);
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
									func_87(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_82(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_87(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_87(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_87(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_81(iParam3);
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
		func_78(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_78(iVar1);
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
					func_87(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_87(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_87(joaat("sp2_total_cash_earned"), iParam3);
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
	func_77(iParam0);
	if (Global_35861 == 15)
	{
		func_76(0);
	}
	return 1;
}

void func_76(bool bParam0)//Position - 0x3FAE
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

void func_77(int iParam0)//Position - 0x4231
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

void func_78(int iParam0)//Position - 0x428B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_55(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_80() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_80() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_79(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_79(int iParam0)//Position - 0x4362
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

int func_80()//Position - 0x43EA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_81(int iParam0)//Position - 0x43F7
{
	func_88(93, iParam0);
	func_88(29, iParam0);
	func_88(30, iParam0);
}

bool func_82(int iParam0)//Position - 0x4417
{
	if (iParam0 == 8)
	{
		return func_83(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_80() /*12130*/].f_7676.f_10, iParam0);
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x4465
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)//Position - 0x44A2
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

int func_85(int iParam0, int iParam1)//Position - 0x4762
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

int func_86(bool bParam0)//Position - 0x4A04
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
		func_54(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_58(27, 1);
	return 1;
}

void func_87(int iParam0, int iParam1)//Position - 0x4ABB
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_88(int iParam0, int iParam1)//Position - 0x4ADE
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

void func_89()//Position - 0x4B3B
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

int func_90()//Position - 0x4BB0
{
	func_91();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_91()//Position - 0x4BC9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_4(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_3(unk_0xFC1458A37D98B502());
			if (func_5(iVar0) && (!func_71(14) || Global_103506))
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

int func_92(var uParam0, int iParam1)//Position - 0x4CC6
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_96(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xE8C126B7ADBB9D63(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_96(&(uParam0->f_5));
				func_95(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_94(&(uParam0->f_5)) > 0,33f)
			{
				func_93(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_94(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_96(&(uParam0->f_5));
			func_95(uParam0, 1051260355);
		}
		else if (func_94(&(uParam0->f_5)) > 0,33f)
		{
			func_93(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_93(var uParam0)//Position - 0x4DC9
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_94(var uParam0)//Position - 0x4DDF
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_95(var uParam0, float fParam1)//Position - 0x4E1E
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD07D5CD276368D36(uParam0->f_9);
	unk_0x9499D7329FB840A2(fParam1);
	unk_0x271AA5469AF471B3();
}

void func_96(int iParam0)//Position - 0x4E44
{
	func_97(iParam0, 0f);
}

void func_97(int iParam0, float fParam1)//Position - 0x4E53
{
	iParam0->f_1 = (func_14(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_98(int iParam0)//Position - 0x4E81
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_99(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x4E95
{
	unk_0x008F3E3CC076EA0E(*uParam0, func_100());
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
	func_96(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_100()//Position - 0x4F00
{
	if (unk_0x3A711520F83BAE98())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_101(var uParam0)//Position - 0x4F1A
{
	char* sVar0;
	
	switch (uParam0->f_411)
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

void func_102(var uParam0)//Position - 0x4FB5
{
	int iVar0;
	
	Local_161.f_1 = system::to_float(uParam0->f_50);
	Local_161.f_2 = system::to_float(uParam0->f_56);
	func_141(11, uParam0->f_56);
	func_141(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xC80D31E4B587871C(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

int func_103(var uParam0, bool bParam1)//Position - 0x5064
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_195(uParam0) && func_107(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
				{
					func_104(uParam0);
				}
			}
			else
			{
				func_104(uParam0);
			}
		}
		else if (!func_195(uParam0))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
				{
					if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_104(var uParam0)//Position - 0x5101
{
	vector3 vVar0;
	
	if (func_105(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_170(uParam0, vVar0);
}

int func_105(vector3 vParam0)//Position - 0x5137
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_106(var uParam0, int iParam1)//Position - 0x5161
{
	if (iParam1 != 1073741824)
	{
		return (func_197(uParam0->f_81, iParam1) && !func_126());
	}
	return func_126();
}

int func_107(var uParam0, bool bParam1, float fParam2)//Position - 0x518E
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
				func_110();
				return 1;
			}
			else if (func_108(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_108(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x520F
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
	func_109(iParam0);
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

void func_109(int iParam0)//Position - 0x539E
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

void func_110()//Position - 0x53CA
{
	if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	}
}

char* func_111(int iParam0)//Position - 0x53E5
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_112(int iParam0)//Position - 0x541F
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_113(int iParam0)//Position - 0x5459
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_114(var uParam0, var uParam1)//Position - 0x5493
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

int func_115()//Position - 0x5508
{
	Local_305 = { func_116() };
	if ((((((((unk_0x74C475EB8E73D398(&cLocal_269, &Local_305) || unk_0x74C475EB8E73D398(&cLocal_273, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_277, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_281, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_285, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_289, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_293, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_297, &Local_305)) || unk_0x74C475EB8E73D398(&cLocal_301, &Local_305))
	{
		return 1;
	}
	return 0;
}

struct<6> func_116()//Position - 0x55AB
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

void func_117()//Position - 0x55F1
{
	if (Local_231.f_56 >= Local_231.f_59)
	{
		Local_231.f_56 = 10000;
	}
	else if (Local_231.f_56 <= 0)
	{
		Local_231.f_56 = 0;
	}
	else
	{
		Local_231.f_56 = 5000;
	}
}

void func_118(var uParam0)//Position - 0x562B
{
	func_120();
	unk_0x84CDD933AFA470D2();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_206(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_206(uParam0, 103, 1, 0, 0);
		}
		func_119(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_206(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_206(uParam0, 102, 1, 0, 0);
	}
	func_274(uParam0, 16, 4f, 0);
}

void func_119(int iParam0)//Position - 0x569E
{
	Global_103265.f_221 = iParam0;
}

void func_120()//Position - 0x56AE
{
	Global_14622 = 0;
	func_121();
}

void func_121()//Position - 0x56BE
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

void func_122(var uParam0)//Position - 0x56E2
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_123(fVar0);
	iLocal_57[4] = system::ceil(fVar0);
	iLocal_57[5] = system::ceil(fVar0);
	func_141(4, system::ceil(fVar0));
	func_141(5, system::ceil(fVar0));
	uParam0->f_50 = system::ceil((fVar0 * 100f));
}

float func_123(float fParam0)//Position - 0x5734
{
	return (fParam0 * 0,0006213712f);
}

void func_124()//Position - 0x5744
{
	Global_14622 = 0;
	func_125();
}

void func_125()//Position - 0x5754
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

int func_126()//Position - 0x57AB
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)//Position - 0x57CD
{
	if (*iParam0 != -1)
	{
		unk_0x0B9D04994D02CC2F(*iParam0);
		unk_0xB94964861C6B4D3C(*iParam0);
		*iParam0 = -1;
	}
}

void func_128()//Position - 0x57EE
{
	unk_0x6450931B826B49D9("oddjobs@taxi@cyi");
	unk_0x6FF834D85E2DD4C6(joaat("p_banknote_s"));
}

void func_129()//Position - 0x5807
{
	if (func_144(&Local_231, 7) < 75f && !iLocal_255)
	{
		Local_231.f_57 += 12;
		func_206(&Local_231, 30, 1, 0, 1);
	}
	else if (func_144(&Local_231, 7) > 150f || iLocal_255)
	{
		Local_231.f_57 = -10;
		func_206(&Local_231, 32, 1, 0, 1);
		iLocal_255 = 1;
		func_130();
	}
	else
	{
		Local_231.f_57 += 5;
		func_206(&Local_231, 31, 1, 0, 1);
	}
}

void func_130()//Position - 0x5895
{
	unk_0x6FF834D85E2DD4C6(func_273(3));
	unk_0x6FF834D85E2DD4C6(func_273(4));
	unk_0x0D9525F20FB71C52(0, func_131(1));
}

char* func_131(int iParam0)//Position - 0x58B9
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_132(var uParam0)//Position - 0x58D9
{
	if (func_126())
	{
		return 1;
	}
	if (func_133(uParam0, 17))
	{
		return 1;
	}
	if (func_133(uParam0, 14))
	{
		return 1;
	}
	if (func_137(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)//Position - 0x5918
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_134(var uParam0, int iParam1, bool bParam2)//Position - 0x592C
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
			func_93(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_93(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_135(var uParam0)//Position - 0x5975
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_96(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_274(uParam0, 10, 0f, 1);
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
}

void func_136(var uParam0, int iParam1)//Position - 0x59BD
{
	if (iParam1 < 5)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_137(var uParam0)//Position - 0x59EB
{
	return uParam0->f_110;
}

void func_138(var uParam0, int iParam1)//Position - 0x59F7
{
	func_139(uParam0, iParam1);
}

void func_139(var uParam0, int iParam1)//Position - 0x5A07
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(var uParam0, var uParam1)//Position - 0x5A1C
{
	unk_0xBF9EAA044015B0A2(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_141(int iParam0, int iParam1)//Position - 0x5A3D
{
	switch (iParam0)
	{
		case 0:
			Global_104555.f_19067.f_22[0]++;
			func_142("Fares Completed ++ = ", Global_104555.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104555.f_19067.f_22[1]++;
			func_142("Fares Failed ++ = ", Global_104555.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104555.f_19067.f_22[2]++;
			func_142("Fares Accepted ++ ", Global_104555.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104555.f_19067.f_22[3]++;
			func_142("Fares Expired ++ ", Global_104555.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104555.f_19067.f_22[13]++;
			func_142("Passengers run ++ = ", Global_104555.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104555.f_19067.f_22[14]++;
			func_142("Passenger Forced to Pay ++ = ", Global_104555.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104555.f_19067.f_22[4])
				{
					Global_104555.f_19067.f_22[4] = iParam1;
					func_142("This distance ", iParam1);
					func_142(" is longer than current best", Global_104555.f_19067.f_22[4]);
				}
				else
				{
					func_142("Longest Distance Not Beat ", Global_104555.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104555.f_19067.f_22[5] = (Global_104555.f_19067.f_22[5] + iParam1);
			func_142("Total Distance w/ Passenger = ", Global_104555.f_19067.f_22[5]);
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
			func_142("Wanted Levels ++ = ", Global_104555.f_19067.f_22[6]);
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
			func_142("Wanted Levels Lost = ", Global_104555.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104555.f_19067.f_22[8]++;
			func_142("Taxis wrecked ++ = ", Global_104555.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104555.f_19067.f_22[9]++;
			func_142("Horn Honked ++ = ", Global_104555.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104555.f_19067.f_22[10] = (Global_104555.f_19067.f_22[10] + iParam1);
			func_142("Total Money Earned = ", Global_104555.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104555.f_19067.f_22[11] = (Global_104555.f_19067.f_22[11] + iParam1);
			func_142("Total Tips Earned = ", Global_104555.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104555.f_19067.f_22[12])
			{
				Global_104555.f_19067.f_22[12] = iParam1;
				func_142("New Highest Tip = ", Global_104555.f_19067.f_22[12]);
			}
			else
			{
				func_142("Highest Tip Not Reached = ", Global_104555.f_19067.f_22[12]);
			}
			break;
	}
}

void func_142(char* sParam0, int iParam1)//Position - 0x5E2E
{
}

int func_143(int iParam0, int iParam1)//Position - 0x5E36
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

float func_144(var uParam0, int iParam1)//Position - 0x5EEE
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_145(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_94(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_145(int iParam0)//Position - 0x5F1E
{
	if (!func_16(iParam0))
	{
		func_96(iParam0);
	}
}

void func_146(var uParam0, bool bParam1)//Position - 0x5F36
{
	func_156(uParam0, uParam0->f_3);
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_133(uParam0, 14))
			{
				if (func_126())
				{
					func_155(1);
				}
				func_154(uParam0, 11, 1);
				func_147(uParam0, 1);
				func_274(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_195(uParam0))
				{
					if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
					{
					}
					if (unk_0x88DDBE9908752BF0(uParam0->f_2, 0))
					{
						if (func_144(uParam0, 15) > 5f)
						{
							func_274(uParam0, 15, 0f, 1);
						}
					}
					if (func_144(uParam0, 14) > 20f)
					{
						func_327(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_144(uParam0, 14) > 20f)
				{
					if (func_160(uParam0->f_4, 1) > 40f)
					{
						func_327(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_327(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_147(var uParam0, bool bParam1)//Position - 0x6041
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
				unk_0xAAAC88CC20771601(uParam0->f_8, false);
				func_153(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_9, 0);
				unk_0xAAAC88CC20771601(uParam0->f_9, false);
				unk_0x84CDD933AFA470D2();
				if (func_195(uParam0))
				{
					func_206(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_153(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_148(uParam0, 0, 0);
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

void func_148(var uParam0, bool bParam1, bool bParam2)//Position - 0x615F
{
	if (bParam1)
	{
		func_47(uParam0);
	}
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_10))
	{
		uParam0->f_10 = func_151(uParam0->f_4, 1, 0);
		unk_0x62BD54E491535B76(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xAAAC88CC20771601(uParam0->f_10, true);
		func_149(uParam0);
		if (bParam2)
		{
			unk_0x84CDD933AFA470D2();
			func_206(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_149(var uParam0)//Position - 0x61BA
{
	func_274(uParam0, 14, 0, 0);
	func_150();
}

void func_150()//Position - 0x61D0
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_151(int iParam0, bool bParam1, bool bParam2)//Position - 0x61F9
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_152(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_152(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_152(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_152(bool bParam0, float fParam1, float fParam2)//Position - 0x629D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x62B4
{
	if (!func_197(*uParam1, iParam2))
	{
		unk_0x84CDD933AFA470D2();
		func_206(uParam0, iParam3, 1, 0, 0);
		func_172(uParam1, iParam2);
	}
}

void func_154(var uParam0, int iParam1, bool bParam2)//Position - 0x62E0
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_155(int iParam0)//Position - 0x62F4
{
	Global_16767 = iParam0;
}

void func_156(var uParam0, int iParam1)//Position - 0x6301
{
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
			{
				if ((unk_0x299B8D0F9C239719(iParam1, joaat("weapon_stungun"), 0) || unk_0x299B8D0F9C239719(iParam1, 0, 2)) || unk_0x299B8D0F9C239719(iParam1, 0, 1))
				{
					func_327(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			}
		}
	}
}

void func_157(var uParam0, bool bParam1)//Position - 0x6366
{
	func_159(uParam0);
	if (bParam1)
	{
		if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
		{
			uParam0->f_9 = func_158(uParam0->f_17, 1);
		}
		else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
		{
			unk_0x7E13A81F45F87FE6(1, 0f);
			unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
			unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
			unk_0xAAAC88CC20771601(uParam0->f_9, true);
		}
	}
}

int func_158(vector3 vParam0, bool bParam1)//Position - 0x63CA
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_152(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_159(var uParam0)//Position - 0x63F6
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
	{
		unk_0xAAAC88CC20771601(uParam0->f_8, false);
		unk_0xE30CF11C0EE14316(&(uParam0->f_8));
	}
}

float func_160(int iParam0, bool bParam1)//Position - 0x641A
{
	return func_161(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

float func_161(int iParam0, int iParam1, bool bParam2)//Position - 0x6432
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

void func_162()//Position - 0x6490
{
	if (bLocal_329)
	{
		func_169("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_262, 1000);
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_231.f_3, 0))
	{
		switch (iLocal_374)
		{
			case 0:
				if (func_194(Local_231.f_3, vLocal_246, 1) < 16f)
				{
					iLocal_374 = 1;
				}
				break;
			
			case 1:
				if (func_160(Local_231.f_3, 1) < 10f)
				{
					unk_0x9E058151726E58DE(Local_231.f_3, joaat("weapon_combatpistol"), 50, true, true);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
					unk_0x6931076730A4AC5D(&iLocal_245);
					unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 0);
					unk_0x1B16DD5C115FE009(iLocal_245);
					unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
					func_274(&Local_231, 12, 0, 0);
					iLocal_374 = 2;
				}
				break;
			
			case 2:
				if (func_144(&Local_231, 12) > 1,5f)
				{
					if (iLocal_375 != 5)
					{
						if (!unk_0x191BE1BC8F26F3C1(Local_231.f_2, 0))
						{
							if (unk_0xB8DE76287EDC4957(Local_231.f_4, 0))
							{
								if (unk_0xA8D0477084E86A92(Local_231.f_2, Local_231.f_4, 0))
								{
									func_206(&Local_231, 56, 1, 0, 0);
								}
								else
								{
									func_206(&Local_231, 55, 1, 1, 0);
								}
							}
						}
						iLocal_259 = 0;
						iLocal_253 = 1;
						func_274(&Local_231, 12, 0, 0);
						func_167(&Local_231, 6);
						iLocal_374 = 3;
					}
					else
					{
						func_134(&Local_231, 12, 0);
						iLocal_374 = 9;
					}
				}
				break;
			
			case 3:
				if (func_160(Local_231.f_3, 1) >= 10f)
				{
					iLocal_374 = 5;
				}
				else if (iLocal_260)
				{
					if (!func_126() && !unk_0x42111BD51D233AAB())
					{
						if (!iLocal_259)
						{
							func_274(&Local_231, 12, 0, 0);
							iLocal_259 = 1;
						}
						else if (func_144(&Local_231, 12) > 5f)
						{
							func_134(&Local_231, 12, 0);
							iLocal_374 = 9;
						}
					}
				}
				else if (!iLocal_260)
				{
					if (func_165("txm8_lvMe1") || func_165("txm8_lvMe2"))
					{
						iLocal_260 = 1;
					}
				}
				break;
			
			case 5:
				func_163(&Local_231, 6);
				if (unk_0x78F50AA8F955BEFC(Local_231.f_3, 242628503) != 7)
				{
					unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
					unk_0x6931076730A4AC5D(&iLocal_245);
					unk_0x380C1E7B7740D618(0, vLocal_246, 1f, 40000, 0,25f, 0, 1193033728);
					unk_0x380C1E7B7740D618(0, 337,3356f, -997,7456f, 28,1318f, 3f, 40000, 0,25f, 0, 1193033728);
					unk_0x380C1E7B7740D618(0, vLocal_247, 3f, 40000, 0,25f, 0, 1193033728);
					unk_0x1B16DD5C115FE009(iLocal_245);
					unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
					iLocal_375 = 5;
					iLocal_374 = 0;
				}
				break;
			
			case 9:
				if (func_133(&Local_231, 12))
				{
					if (func_144(&Local_231, 12) > 2f)
					{
						func_274(&Local_231, 6, 0, 0);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
						unk_0x6931076730A4AC5D(&iLocal_245);
						unk_0xDF28F1574E61F9EA(0, unk_0xFC1458A37D98B502(), -1, -957453492);
						unk_0x1B16DD5C115FE009(iLocal_245);
						unk_0xAB30B1CF01A198C1(Local_231.f_3, iLocal_245);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_245);
						unk_0xF96119FCCD4D1889(5, Local_231.f_413, 1862763509);
						unk_0xE9B3D12A64CC7C1A(Local_231.f_3, true);
						bLocal_254 = true;
						if (unk_0xA6DECE14FC9A8C51(Local_231.f_9) && unk_0x94540F498465F1A2(Local_231.f_9) > 0)
						{
							unk_0xF20857E4CB32A2B7(Local_231.f_9, 0);
							unk_0xAAAC88CC20771601(Local_231.f_9, false);
							unk_0x166954C5648772B6("TAXI_OBJ_CYI_1B");
						}
						iLocal_374 = 10;
					}
				}
				else
				{
					func_274(&Local_231, 12, 0, 0);
					if (!unk_0x191BE1BC8F26F3C1(Local_231.f_2, 0))
					{
						if (unk_0xB8DE76287EDC4957(Local_231.f_4, 0))
						{
							if (unk_0xA8D0477084E86A92(Local_231.f_2, Local_231.f_4, 0))
							{
								func_206(&Local_231, 56, 1, 0, 0);
							}
							else
							{
								func_206(&Local_231, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!unk_0x42111BD51D233AAB() && func_144(&Local_231, 6) > 2f)
				{
					func_327(&Local_231, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_163(var uParam0, int iParam1)//Position - 0x6877
{
	if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_164(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_164(int iParam0)//Position - 0x68A9
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			iParam0->f_1 = (func_14(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0EE72DB1CD8A3B86(iParam0, 2);
		}
	}
}

int func_165(char* sParam0)//Position - 0x68E7
{
	var uVar0;
	
	if (func_126())
	{
		MemCopy(&uVar0, {func_166()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_166()//Position - 0x690F
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_167(var uParam0, int iParam1)//Position - 0x6933
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_168(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_168(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_168(int iParam0)//Position - 0x699F
{
	if (func_16(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_14(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
			unk_0x872F1C1F8587CCC7(iParam0, 2);
		}
	}
}

void func_169(char* sParam0, int iParam1, int iParam2)//Position - 0x69D9
{
	if (unk_0x53C562FD2B9E3AB0() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x53C562FD2B9E3AB0();
}

void func_170(var uParam0, vector3 vParam1)//Position - 0x69F8
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && unk_0xAAA8D20859E2D36D(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x3F90543934DCD7E6(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (func_171(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x4F8A35D7CBC17327(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xBE3C4023003180FC(vVar0, vParam1, false) < unk_0xBE3C4023003180FC(vVar1, vParam1, false) && unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x4F8A35D7CBC17327(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xBE3C4023003180FC(vVar0, vParam1, false) >= unk_0xBE3C4023003180FC(vVar1, vParam1, false) && unk_0x8EA8060A1C856203(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x4F8A35D7CBC17327(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x4F8A35D7CBC17327(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_171(int iParam0, int iParam1)//Position - 0x6B19
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
		{
			if (unk_0x317536BCEA8FA6B0(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_172(var uParam0, int iParam1)//Position - 0x6B8B
{
	func_173(uParam0, iParam1);
}

void func_173(var uParam0, int iParam1)//Position - 0x6B9B
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_174(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x6BAC
{
	if ((((unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076()) && !unk_0x2D0EF1D268F33F25()) && !unk_0x3E9CABD07B829173()) && !uParam0->f_142)
	{
		if (func_190(uParam0))
		{
			func_140(uParam0, &(uParam0->f_43));
			func_186(uParam0);
			func_185(uParam0);
			func_182(uParam0);
			func_180(uParam0, fParam2, fParam3);
			func_178(uParam0);
			return func_175(uParam0, fParam1);
		}
	}
	return 0;
}

int func_175(var uParam0, float fParam1)//Position - 0x6C24
{
	if (func_57(uParam0) == 2)
	{
		if (unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_177(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_176(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
		{
			return func_107(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_176(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
	{
		return func_107(uParam0, 1, fParam1);
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6CFB
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

float func_177(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x6DE0
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

void func_178(var uParam0)//Position - 0x6E1A
{
	float fVar0;
	
	if ((func_195(uParam0) && func_197(uParam0->f_81, 67108864)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if ((unk_0x53C562FD2B9E3AB0() - iLocal_89) >= 10000)
		{
			fVar0 = func_179(uParam0->f_17, 1);
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
		if (iLocal_88 >= 2 && !func_126())
		{
			func_206(uParam0, 136, 1, 0, 1);
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
			if (!func_195(uParam0))
			{
			}
			if (!func_197(uParam0->f_81, 67108864))
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

float func_179(vector3 vParam0, bool bParam1)//Position - 0x6EF0
{
	return func_194(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), vParam0, bParam1);
}

void func_180(var uParam0, float fParam1, float fParam2)//Position - 0x6F0A
{
	if (func_195(uParam0) && func_197(uParam0->f_44, 4))
	{
		if ((unk_0x9EC5112BB1C4047A(uParam0->f_4) || unk_0x90D5DFB054818BA7(uParam0->f_4) < 3f) && func_303(uParam0))
		{
			if (!func_133(uParam0, 2))
			{
				func_181(uParam0, 2);
			}
			else if (func_195(uParam0))
			{
				if (func_144(uParam0, 2) > fParam1 && !func_133(uParam0, 14))
				{
					if (func_34())
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_206(uParam0, 48, 1, 0, 0);
					}
					func_274(uParam0, 2, 0, 0);
					if (func_133(uParam0, 10))
					{
						func_274(uParam0, 10, 0, 0);
					}
				}
				if (!func_133(uParam0, 3))
				{
					func_274(uParam0, 3, 0, 0);
				}
				else if (func_144(uParam0, 3) >= fParam2)
				{
					func_134(uParam0, 3, 0);
					func_327(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_133(uParam0, 2))
			{
				func_134(uParam0, 2, 0);
			}
			if (func_133(uParam0, 3))
			{
				func_134(uParam0, 3, 0);
			}
		}
	}
}

void func_181(var uParam0, int iParam1)//Position - 0x7025
{
	func_145(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_182(var uParam0)//Position - 0x7039
{
	if (func_184(uParam0))
	{
		func_183(uParam0);
	}
}

void func_183(var uParam0)//Position - 0x7050
{
	if (unk_0xBCFF5E6898C5516A() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x832CFDD4BD296987();
			func_134(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_144(uParam0, 20) > 3f)
				{
					func_206(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_197(uParam0->f_81, 262144) || !func_197(uParam0->f_81, 1048576))
				{
					if (func_144(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_206(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_197(uParam0->f_82, 67108864))
				{
					if (func_144(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_206(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_144(uParam0, 20) > 8f)
				{
					func_206(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_197(uParam0->f_81, 262144) || func_197(uParam0->f_82, 67108864))
			{
				if (!func_133(uParam0, 22))
				{
					func_181(uParam0, 22);
				}
			}
			if (func_133(uParam0, 22) && func_144(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_197(uParam0->f_81, 1048576))
					{
						func_206(uParam0, 84, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_197(uParam0->f_82, 134217728))
					{
						func_206(uParam0, 85, 1, 0, 0);
						func_134(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_184(var uParam0)//Position - 0x72CB
{
	return uParam0->f_120;
}

void func_185(var uParam0)//Position - 0x72D7
{
	if (unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && !func_197(uParam0->f_44, 2))
	{
		func_172(&(uParam0->f_44), 2);
	}
	else if (!unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && func_197(uParam0->f_44, 2))
	{
		func_138(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_141(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_206(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + system::ceil(5f));
	}
}

void func_186(var uParam0)//Position - 0x7360
{
	if (!func_197(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					if (func_144(uParam0, 9) > 1f)
					{
						func_189(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
						if (uParam0->f_410 != 22)
						{
							func_206(uParam0, 50, 1, 1, 0);
						}
						func_274(uParam0, 9, 0, 0);
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
				if (!func_126() && func_144(uParam0, 9) > 4f)
				{
					func_206(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_188("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xC308146F18B10A6F(unk_0x98EC0789D9F0703B(), func_187(uParam0)))
				{
					func_189(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
					func_141(6, 0);
				}
				if (!func_137(uParam0))
				{
					if (!unk_0x42111BD51D233AAB())
					{
						if (func_144(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_206(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					if (func_188("TAXI_OBJ_POL", 0, 0))
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
				if (!func_126())
				{
					if (uParam0->f_410 != 22)
					{
						func_206(uParam0, 53, 1, 0, 1);
					}
					func_141(7, func_187(uParam0));
					func_189(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_126())
				{
					func_134(uParam0, 9, 0);
					func_274(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_187(var uParam0)//Position - 0x7584
{
	return uParam0->f_106;
}

bool func_188(char* sParam0, int iParam1, char* sParam2)//Position - 0x7590
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_189(var uParam0, int iParam1)//Position - 0x75AE
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_190(var uParam0)//Position - 0x75C5
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (!unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 1) && !unk_0x0F299BBD0DC14B18(uParam0->f_3))
			{
				func_327(uParam0, "Passenger left car.", 9);
			}
			else if (func_279(uParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0, 0))
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
				func_146(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_191(var uParam0, int iParam1, bool bParam2)//Position - 0x7654
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

void func_192(var uParam0)//Position - 0x7678
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_193(), 24);
		iVar0++;
	}
	unk_0x84CDD933AFA470D2();
	func_45();
}

var func_193()//Position - 0x76B8
{
	var uVar0;
	
	return uVar0;
}

float func_194(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x76C2
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), vParam1, bParam2);
}

int func_195(var uParam0)//Position - 0x76EC
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

int func_196(var uParam0)//Position - 0x7721
{
	return uParam0->f_416;
}

bool func_197(var uParam0, int iParam1)//Position - 0x772E
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0)//Position - 0x773D
{
	func_202(uParam0, 1000);
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x957CEE967C939968(uParam0->f_3);
		unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
	}
	func_124();
	func_199(uParam0);
}

void func_199(var uParam0)//Position - 0x7789
{
	func_134(uParam0, 14, 0);
	func_134(uParam0, 15, 0);
	func_201();
	if (func_200())
	{
		func_155(0);
	}
}

int func_200()//Position - 0x77B3
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_201()//Position - 0x77CA
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_202(var uParam0, int iParam1)//Position - 0x77F3
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

void func_203(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x782D
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

void func_204()//Position - 0x78A2
{
	func_172(&(Local_231.f_55), 2);
	func_172(&(Local_231.f_55), 4);
	func_172(&(Local_231.f_55), 16);
	func_172(&(Local_231.f_55), 64);
	func_172(&(Local_231.f_55), 256);
	func_172(&(Local_231.f_55), 512);
	func_172(&(Local_231.f_55), 1024);
	func_172(&(Local_231.f_55), 2048);
	func_172(&(Local_231.f_55), 4096);
	func_172(&(Local_231.f_100), 8);
	func_172(&(Local_231.f_100), 2048);
	func_172(&(Local_231.f_100), 256);
	func_172(&uLocal_306, 2);
}

void func_205(var uParam0)//Position - 0x793B
{
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	func_202(uParam0, 1000);
}

void func_206(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x795E
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_274(uParam0, 16, 4f, 0);
		if (func_207(uParam0))
		{
			func_45();
		}
	}
	func_235(uParam0, iParam2, bParam3);
}

int func_207(var uParam0)//Position - 0x7993
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_126())
	{
		Var1 = { func_166() };
		if (!unk_0xAB019B170BF1309C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_208(&vVar0);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208(char* sParam0)//Position - 0x79F9
{
	StringConCat(sParam0, "F", 24);
}

int func_209(var uParam0)//Position - 0x7A09
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

Vector3 func_210(int iParam0)//Position - 0x7A5C
{
	switch (iParam0)
	{
		case -1:
			return 335,4227f, -956,4223f, 28,3588f;
			break;
		
		case 0:
			return 349,926f, -958,3827f, 28,3033f;
			break;
		
		case 1:
			return -1020,581f, -2743,842f, 18,4049f;
			break;
		
		case 2:
			return -1043,947f, -2748,683f, 20,3594f;
			break;
		
		case 3:
			return -1042,391f, -2731,644f, 19,1701f;
			break;
		
		case 4:
			return -1045,677f, -2730,109f, 19,1701f;
			break;
		
		case 5:
			return -1032,295f, -2731,449f, 19,0458f;
			break;
		
		case 6:
			return -1051,045f, -2722,934f, 19,1693f;
			break;
		
		case 7:
			return -1052,905f, -2723,375f, 19,1693f;
			break;
		
		case 8:
			return -1042,812f, -2743,095f, 20,362f;
			break;
		
		default:
			return 354,5381f, -947,7332f, 28,359f;
			break;
	}
	return func_39();
}

int func_211(var uParam0, bool bParam1, float fParam2)//Position - 0x7B92
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
			func_146(uParam0, 1);
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
			func_233(uParam0);
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
			if (func_133(uParam0, 14))
			{
				func_199(uParam0);
				func_147(uParam0, 0);
			}
			if (func_133(uParam0, 9))
			{
				func_134(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_232(uParam0, uParam0->f_3) > 300f)
				{
					func_327(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 || ((func_161(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 20f && func_177(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_177(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_229(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_228(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_143(uParam0->f_4, uParam0->f_3);
								iVar0 = func_114(uParam0, &iVar1);
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
							if (!func_303(uParam0))
							{
								unk_0xB8E08BD5B184DF4E(uParam0->f_3);
							}
							else if (((unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 0) && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 7) && func_232(uParam0, uParam0->f_3) > 8f)
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
							if (func_161(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_227(uParam0, 1))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_327(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_226(uParam0->f_4))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_327(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_224(uParam0);
						if (func_232(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_212(uParam0))
								{
									func_159(uParam0);
									iLocal_81 = unk_0x53C562FD2B9E3AB0();
									unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 26, true);
									func_134(uParam0, 5, 0);
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

int func_212(var uParam0)//Position - 0x80A6
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_169("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		func_223();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_221(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_107(uParam0, 0, 1084227584) && func_176(1, 1, 1))
			{
				if (func_227(uParam0, 1))
				{
					iLocal_80 = unk_0x53C562FD2B9E3AB0();
					system::settimera(0);
					iLocal_78 = 1;
				}
				else
				{
					func_327(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (system::timera() > 500)
			{
				uParam0->f_7 = func_143(uParam0->f_4, uParam0->f_3);
				iVar3 = func_114(uParam0, &iVar4);
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
			iVar6 = func_220(&(uParam0->f_409), unk_0x3F90543934DCD7E6(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x3F90543934DCD7E6(uParam0->f_4, vVar0), 1);
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
				func_219(0, 0, 1);
				unk_0x60225D4F755DFDB1(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 3f, 0);
				unk_0xBBF9037650162761(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 25f, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_120();
				func_235(uParam0, 0, 0);
				vVar7 = { unk_0x3F90543934DCD7E6(uParam0->f_4, vVar2) };
				unk_0xBD8D47FDC6902B2D(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(uParam0->f_3, func_217(uParam0));
				func_216(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_169("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0xDA5162F6425C44AA(uParam0->f_4, func_215(uParam0->f_7), 1);
				}
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0x02934BABFD4CD384(*uParam0, 0);
				unk_0x02934BABFD4CD384(uParam0->f_1, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x59C3AC31C7544A28(800);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_120();
				func_235(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				func_213(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x02934BABFD4CD384(*uParam0, 0);
			unk_0x02934BABFD4CD384(uParam0->f_1, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			func_213(1, 1, 1);
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

void func_213(bool bParam0, bool bParam1, int iParam2)//Position - 0x85B3
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
	func_214(23, 0);
}

void func_214(int iParam0, bool bParam1)//Position - 0x85EE
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

int func_215(int iParam0)//Position - 0x8610
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

void func_216(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x8648
{
	if (!unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		*uParam0 = unk_0x5AC38B4D80D4E352(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_217(var uParam0)//Position - 0x8673
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
	fVar0 = func_218(unk_0xB3328BA8976B416C(uParam0->f_3, 1), vVar1);
	return fVar0;
}

float func_218(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x86DC
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_219(int iParam0, int iParam1, int iParam2)//Position - 0x86F6
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
	func_214(23, 1);
}

int func_220(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x874C
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

int func_221(int iParam0)//Position - 0x87C6
{
	if (func_222() && unk_0x53C562FD2B9E3AB0() >= iParam0 + 1000)
	{
		unk_0xAE83ED4C9081AE6F(500);
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
		func_40(0);
		func_124();
		return 1;
	}
	return 0;
}

int func_222()//Position - 0x8809
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

void func_223()//Position - 0x883B
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

void func_224(var uParam0)//Position - 0x886E
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (func_160(uParam0->f_3, 1) > 30f || func_225(uParam0))
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
					func_327(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_225(var uParam0)//Position - 0x893F
{
	if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 3f && func_144(uParam0, 5) > 15f) || unk_0xF69AD934E7664A7C(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x8979
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

int func_227(var uParam0, bool bParam1)//Position - 0x8A35
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

int func_228(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x8AEF
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (!unk_0xEC211A86AB3726B6(uParam0->f_3) && func_160(uParam0->f_3, 1) < fParam2)
		{
			if (!func_133(uParam0, 5))
			{
				func_274(uParam0, 5, 0, 0);
			}
		}
		else if (func_133(uParam0, 5))
		{
			func_134(uParam0, 5, 0);
		}
		if (((func_144(uParam0, 5) > IntToFloat(iParam1) && unk_0x90D5DFB054818BA7(uParam0->f_4) < fParam4) && !unk_0xEC211A86AB3726B6(uParam0->f_3)) || func_160(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_229(var uParam0, float fParam1)//Position - 0x8B8D
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
			if ((func_161(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xE97272C977DEADD3((vVar0.z - vVar1.z)) < 5f)
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
				if (!func_197(uParam0->f_44, 128))
				{
					func_206(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_230(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_230(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x8E6E
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_231(iParam3), 0);
}

int func_231(int iParam0)//Position - 0x8E87
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

float func_232(var uParam0, int iParam1)//Position - 0x907C
{
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (func_303(uParam0))
		{
			return func_161(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_233(var uParam0)//Position - 0x90A7
{
	func_156(uParam0, uParam0->f_3);
	if (func_303(uParam0))
	{
		if (func_133(uParam0, 14))
		{
			func_199(uParam0);
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_10))
			{
				unk_0xE30CF11C0EE14316(&(uParam0->f_10));
			}
		}
	}
	if (!func_133(uParam0, 9))
	{
		if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
		{
			unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
			unk_0xAAAC88CC20771601(uParam0->f_8, false);
		}
		func_274(uParam0, 9, 0, 0);
		func_234("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_234(char* sParam0, int iParam1, int iParam2)//Position - 0x9125
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_235(var uParam0, int iParam1, bool bParam2)//Position - 0x913E
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_274(uParam0, 16, 4f, 0);
		unk_0x84CDD933AFA470D2();
	}
}

int func_236(var uParam0, int iParam1)//Position - 0x9163
{
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		return 0;
	}
	func_241(12);
	if (func_197(uParam0->f_44, 8))
	{
		if (!func_197(uParam0->f_44, 128))
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()) && !func_197(uParam0->f_44, 256))
			{
				func_172(&(uParam0->f_44), 256);
			}
			if (func_197(uParam0->f_44, 256) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_206(uParam0, 135, 1, 0, 1);
				func_172(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_239(uParam0, iParam1))
	{
		if (func_160(uParam0->f_3, 1) < 35f)
		{
			if (!func_197(uParam0->f_44, 8))
			{
				unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
				func_206(uParam0, 133, 1, 0, 1);
				func_172(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x3AB6A1A9084FB0A4(uParam0->f_3) || unk_0xA6FA9E5D08F067AD(uParam0->f_3)) || func_160(uParam0->f_3, 1) > 400f)
		{
			func_327(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xDFD115BB10FE46A9(uParam0->f_2, 0);
		unk_0x438D30A195B65156(uParam0->f_4, true);
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x695BF4E9032C8B89(uParam0->f_4);
			func_237(uParam0);
			func_141(2, 0);
			bLocal_86 = true;
			func_145(&iLocal_82);
			return 1;
		}
		else
		{
			func_327(uParam0, "No Taxi", 21);
			func_278("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_237(var uParam0)//Position - 0x92DC
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (func_238())
		{
		}
	}
}

int func_238()//Position - 0x92F8
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_239(var uParam0, int iParam1)//Position - 0x9319
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
				bVar2 = func_226(iVar0);
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
					if (!func_197(uParam0->f_44, 64))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_278("TX_VIP_DMGD", -1);
							if (func_240("TX_VIP_DMGD"))
							{
								func_172(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_197(uParam0->f_44, 32))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_278("TX_VIP_CAR", -1);
							if (func_240("TX_VIP_CAR"))
							{
								func_172(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_197(uParam0->f_44, 16))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_278("TX_VIP_SMALL", -1);
							if (func_240("TX_VIP_SMALL"))
							{
								func_172(&(uParam0->f_44), 16);
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
			func_138(&(uParam0->f_44), 16);
			func_138(&(uParam0->f_44), 64);
			func_138(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_240(char* sParam0)//Position - 0x992E
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_241(int iParam0)//Position - 0x9941
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

void func_242(var uParam0)//Position - 0x999A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_139(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_243(var uParam0, var uParam1)//Position - 0x99BF
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

void func_244(var uParam0, char* sParam1, int iParam2)//Position - 0x9A36
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_245()//Position - 0x9A4E
{
	Local_165 = 0;
	func_262(40449/*func_264*/, 40424/*func_263*/, 1);
	func_262(40185/*func_260*/, 40162/*func_259*/, 1);
	func_262(40100/*func_258*/, 40075/*func_257*/, 1);
	func_262(40003/*func_256*/, 39979/*func_255*/, 1);
	func_262(39869/*func_254*/, 39848/*func_253*/, 1);
	func_262(39795/*func_251*/, 39770/*func_250*/, 1);
	func_262(39628/*func_247*/, 39605/*func_246*/, 1);
}

int func_246(var uParam0, var uParam1)//Position - 0x9AB5
{
	uParam1 = uParam1;
	func_327(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_247(var uParam0)//Position - 0x9ACC
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_249(uParam0->f_4))
		{
			func_248(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_248(var uParam0, int iParam1)//Position - 0x9AF6
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_249(int iParam0)//Position - 0x9B09
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

int func_250(var uParam0, var uParam1)//Position - 0x9B5A
{
	uParam1 = uParam1;
	func_327(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_251(var uParam0)//Position - 0x9B73
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		if (func_252(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_252(var uParam0, int iParam1)//Position - 0x9B99
{
	return (uParam0 && iParam1) != 0;
}

int func_253(var uParam0, var uParam1)//Position - 0x9BA8
{
	uParam1 = uParam1;
	func_248(uParam0, 11);
	return 1;
}

int func_254(var uParam0)//Position - 0x9BBD
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (unk_0x0BA31FF7931F3DD3(uParam0->f_4) && !unk_0x5E0BEAAD15B888F3(uParam0->f_4))
		{
			if (!func_133(uParam0, 25))
			{
				func_274(uParam0, 25, 0, 0);
			}
			else if (func_144(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_133(uParam0, 25))
		{
			func_134(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_255(var uParam0, var uParam1)//Position - 0x9C2B
{
	uParam1 = uParam1;
	func_327(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_256(var uParam0)//Position - 0x9C43
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

int func_257(var uParam0, var uParam1)//Position - 0x9C8B
{
	uParam1 = uParam1;
	func_327(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_258(var uParam0)//Position - 0x9CA4
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (unk_0x9EC5112BB1C4047A(uParam0->f_4))
			{
				if (func_252(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_259(var uParam0, var uParam1)//Position - 0x9CE2
{
	uParam1 = uParam1;
	func_327(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_260(var uParam0)//Position - 0x9CF9
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_261(uParam0->f_4))
		{
			func_248(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0)//Position - 0x9D23
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

void func_262(int iParam0, int iParam1, bool bParam2)//Position - 0x9D7E
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_173(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_173(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_263(var uParam0, var uParam1)//Position - 0x9DE8
{
	uParam1 = uParam1;
	func_327(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_264(var uParam0)//Position - 0x9E01
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

void func_265()//Position - 0x9E41
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

int func_266()//Position - 0xA019
{
	if (!func_267(&iLocal_262, 1))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_262, 1000);
		return 0;
	}
	if (!unk_0x34D11AB5BA7922C2(iLocal_313))
	{
		return 0;
	}
	if (!unk_0x9A0B2ED5055D3F0B(func_273(0)))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_262, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_169("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_262, 1000);
		return 0;
	}
	return 1;
}

int func_267(int iParam0, bool bParam1)//Position - 0xA08C
{
	if (!unk_0x9A0B2ED5055D3F0B(func_21()))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x3A801AA34DD821BE("gestures@m@standing@casual"))
		{
			func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@taxi@"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@towingcome_here"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("misscommon@response"))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		func_169("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_268(var uParam0, int iParam1)//Position - 0xA145
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_269(var uParam0)//Position - 0xA364
{
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		uParam0->f_8 = func_270(uParam0->f_3, 0, 0);
		unk_0x7E13A81F45F87FE6(1, 0f);
		unk_0xAAAC88CC20771601(uParam0->f_8, true);
		unk_0x62BD54E491535B76(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x60C06BFD037BB7CF(uParam0->f_3, unk_0xFC1458A37D98B502(), -1, 2048, 4);
	}
	return 1;
}

int func_270(int iParam0, bool bParam1, bool bParam2)//Position - 0xA3B3
{
	return func_151(iParam0, !bParam1, bParam2);
}

int func_271(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xA3C6
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0->f_3))
	{
		func_272(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_36(uParam0->f_14, 0);
		unk_0x60225D4F755DFDB1(uParam0->f_14, 2f, 0);
		func_203(uParam0->f_14, 0, fParam6);
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

void func_272(var uParam0, vector3 vParam1)//Position - 0xA51B
{
	uParam0->f_51[0] = unk_0x2B13C26E09C949E3(vParam1, 20f, 5f, 0);
}

int func_273(int iParam0)//Position - 0xA539
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_274(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xA5A4
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_97(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_96(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_97(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_96(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_275()//Position - 0xA616
{
	func_277(1);
	unk_0x6FF834D85E2DD4C6(func_273(0));
	iLocal_313 = func_276();
	unk_0x1CF95440F1970B4F("Alarms", false, -1);
	unk_0x6450931B826B49D9("MOVE_P_M_ZERO_RUCKSACK");
}

int func_276()//Position - 0xA646
{
	return unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
}

void func_277(bool bParam0)//Position - 0xA656
{
	unk_0x6FF834D85E2DD4C6(func_21());
	if (bParam0)
	{
		unk_0x6450931B826B49D9("gestures@m@standing@casual");
	}
	unk_0x6450931B826B49D9("oddjobs@taxi@");
	unk_0x6450931B826B49D9("oddjobs@towingcome_here");
	unk_0x6450931B826B49D9("misscommon@response");
	unk_0xBCBC53983EC3B1BA("TAXI", 2);
	if (!func_197(Global_104555.f_19067, 128))
	{
		func_172(&(Global_104555.f_19067), 128);
	}
}

void func_278(char* sParam0, int iParam1)//Position - 0xA6B2
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_279(var uParam0)//Position - 0xA6C9
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_133(uParam0, 14))
			{
				func_199(uParam0);
			}
			func_147(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, int iParam1, int iParam2)//Position - 0xA70B
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
		if (func_240(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_240(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

void func_281(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xA7E8
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
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
	if (func_240(iVar0))
	{
		func_293();
	}
	if (!unk_0x38DF88792E2574E5())
	{
		if (func_288(uParam0, bParam4, bParam6, 0))
		{
			func_287(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_286(iVar0))
			{
				if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && iParam5)
					{
						if (!func_240(iVar0))
						{
							func_278(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_285(1);
							}
						}
					}
				}
			}
		}
		else if (func_286(iVar0))
		{
			if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
			{
				if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && iParam5)
				{
					if (!func_240(iVar0))
					{
						func_278(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
						{
							func_285(1);
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
			if (func_240(iVar0) && unk_0xF491DD47B88AA84E())
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
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					func_280(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				func_280(uParam0, iVar0, 1);
			}
		}
		if (!func_288(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_284(uParam0))
			{
				func_282(uParam0);
			}
		}
	}
}

void func_282(var uParam0)//Position - 0xAAC2
{
	if (func_283(unk_0xFC1458A37D98B502()))
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

int func_283(int iParam0)//Position - 0xAB2B
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

int func_284(var uParam0)//Position - 0xAB86
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

int func_285(bool bParam0)//Position - 0xABB1
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

int func_286(char* sParam0)//Position - 0xAC5B
{
	if (!func_294(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_240(sParam0)) || func_240("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_285(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_285(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_285(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_287(var uParam0, vector3 vParam1, int iParam2)//Position - 0xACF4
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

int func_288(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xAD90
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
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_284(uParam0))
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
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_292(bParam1, bParam2, bParam3))
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
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_291(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_292(bParam1, bParam2, bParam3))
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
						if (func_290(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_289(bParam1, bParam2, bParam3))
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
					else if (func_290(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_284(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_294(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_293();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB0FC
{
	if (!func_294(bParam0, bParam1, bParam2))
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

int func_290(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB14E
{
	if (!func_294(bParam0, bParam1, bParam2))
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

int func_291(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB197
{
	if (!func_294(bParam0, bParam1, bParam2))
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

int func_292(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB1F6
{
	if (!func_294(bParam0, bParam1, bParam2))
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

void func_293()//Position - 0xB24C
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_294(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB25C
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
	if (func_302())
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
	if ((func_301() || func_300(Global_4456448.f_143970)) || func_299())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_298(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_298(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_298(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_295(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_295(int iParam0)//Position - 0xB487
{
	if (iParam0 != func_297())
	{
		if (func_296(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_296(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_296(int iParam0, bool bParam1, bool bParam2)//Position - 0xB4ED
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

int func_297()//Position - 0xB537
{
	return -1;
}

int func_298(int iParam0, int iParam1)//Position - 0xB540
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

var func_299()//Position - 0xB5C5
{
	return Global_2447174.f_16;
}

bool func_300(int iParam0)//Position - 0xB5D3
{
	return iParam0 == 51;
}

var func_301()//Position - 0xB5E0
{
	return Global_2447174.f_15;
}

bool func_302()//Position - 0xB5EE
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_303(var uParam0)//Position - 0xB603
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == unk_0xFC1458A37D98B502())
		{
			return 1;
		}
	}
	return 0;
}

void func_304(var uParam0, int iParam1, bool bParam2)//Position - 0xB62D
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
		{
			if (bParam2)
			{
				if (func_144(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_206(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_206(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_274(uParam0, 10, 0f, 1);
				}
			}
			else if (func_144(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_206(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_206(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_274(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_144(uParam0, 10) > 30f)
		{
			if (!func_126())
			{
				if (uParam0->f_112)
				{
					func_206(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_206(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_274(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_197(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_145(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_326(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0, 1);
				func_323(5, uParam0);
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_145(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				func_325(uParam0, 1);
				func_323(0, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_145(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_325(uParam0, 1);
				func_323(1, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xDE523AF6F7B269AB(uParam0->f_4);
				func_145(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_94(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_320(uParam0))
			{
				func_325(uParam0, 1);
				func_323(8, uParam0);
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_145(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_319(uParam0))
			{
				func_325(uParam0, 1);
				func_323(6, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_145(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_318(uParam0))
			{
				func_325(uParam0, 1);
				func_323(4, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_145(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_317(uParam0))
			{
				func_323(7, uParam0);
				func_325(uParam0, 1);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_145(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
		}
		else if (func_94(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_316(uParam0))
			{
				func_325(uParam0, 1);
				func_323(9, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_145(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_310(uParam0))
			{
				func_325(uParam0, 1);
				func_323(13, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_145(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_309(uParam0))
			{
				func_325(uParam0, 1);
				func_323(14, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_145(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_308(uParam0))
			{
				func_325(uParam0, 1);
				func_323(11, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_145(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_94(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				func_325(uParam0, 1);
				func_323(12, uParam0);
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_135(uParam0);
			}
		}
	}
	if (func_197(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_306(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_94(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_305(uParam0))
			{
				if (uParam0->f_113)
				{
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0, 1);
				func_323(2, uParam0);
				func_135(uParam0);
			}
		}
	}
}

int func_305(var uParam0)//Position - 0xBE27
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_2))
	{
		if ((!unk_0xDE42C4904F29B0CE(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_145(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_94(&(Local_162[2 /*10*/].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_93(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_93(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_306(int iParam0, float fParam1)//Position - 0xBF0A
{
	if (!func_16(iParam0))
	{
		func_97(iParam0, fParam1);
	}
}

int func_307(var uParam0)//Position - 0xBF24
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_145(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_308(var uParam0)//Position - 0xBFB3
{
	vector3 vVar0;
	
	if ((((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 2,5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_145(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_94(&(Local_162[11 /*10*/].f_3)) < 1,5f && (unk_0xE97272C977DEADD3(fLocal_164) - unk_0xE97272C977DEADD3(vVar0.x)) < 0f)
			{
				func_93(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_94(&(Local_162[11 /*10*/].f_3)) >= 1,5f)
			{
				func_93(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_309(var uParam0)//Position - 0xC0E4
{
	if (((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_5))
			{
				if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f && func_161(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x191BE1BC8F26F3C1(uParam0->f_5, 0) && !unk_0x8EE3A848975DDF21(uParam0->f_5, -1, 0)))
				{
					func_145(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_94(&(Local_162[14 /*10*/].f_3)) < 1,5f && func_161(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_93(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_94(&(Local_162[14 /*10*/].f_3)) >= 1,5f)
		{
			func_93(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_93(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_310(var uParam0)//Position - 0xC269
{
	if (((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_311(uParam0->f_4) && unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_145(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_93(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_311(int iParam0)//Position - 0xC320
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
	vVar3 = { func_315((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_314(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_312(unk_0xB3328BA8976B416C(iParam0, 1), vVar5, vVar6, vVar7);
}

int func_312(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xC409
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
	vVar0 = { func_315(vParam2 - vParam1) };
	vVar1 = { func_315(vParam3 - vParam1) };
	fVar2 = func_313(vParam0, vVar0);
	fVar3 = func_313(vParam1, vVar0);
	fVar4 = func_313(vParam2, vVar0);
	fVar5 = func_313(vParam0, vVar1);
	fVar6 = func_313(vParam1, vVar1);
	fVar7 = func_313(vParam3, vVar1);
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

float func_313(vector3 vParam0, vector3 vParam1)//Position - 0xC4F2
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_314(vector3 vParam0, int iParam1)//Position - 0xC513
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

Vector3 func_315(vector3 vParam0)//Position - 0xC571
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

int func_316(var uParam0)//Position - 0xC5B0
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

int func_317(var uParam0)//Position - 0xC5E5
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

int func_318(var uParam0)//Position - 0xC67B
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0x9EF5C05553C17392(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_145(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_93(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_319(var uParam0)//Position - 0xC6ED
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC55CD7A6DAE4D24F(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_145(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[6 /*10*/].f_3)) > 3,5f)
			{
				func_93(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_320(var uParam0)//Position - 0xC763
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
					func_206(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_206(uParam0, 72, 1, 0, 1);
				}
				func_93(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_321(var uParam0)//Position - 0xC7E4
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_145(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[1 /*10*/].f_3)) > 1,2f)
			{
				func_93(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(var uParam0)//Position - 0xC870
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x5E0BEAAD15B888F3(uParam0->f_4) && unk_0x0ACC2116170FA204(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_145(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[0 /*10*/].f_3)) > 0,7f)
			{
				func_93(&(Local_162[0 /*10*/].f_3));
				func_96(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_323(int iParam0, var uParam1)//Position - 0xC8FA
{
	Local_162[iParam0 /*10*/].f_1++;
	func_324(uParam1, iParam0);
	func_93(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_324(var uParam0, int iParam1)//Position - 0xC92D
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_325(var uParam0, int iParam1)//Position - 0xC944
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_326(var uParam0)//Position - 0xC957
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x90D5DFB054818BA7(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_145(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_94(&(Local_162[5 /*10*/].f_3)) > 3,5f)
			{
				func_93(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_93(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_327(var uParam0, char* sParam1, int iParam2)//Position - 0xC9CE
{
	vector3 vVar0;
	
	func_124();
	func_432(2);
	vVar0 = { func_116() };
	if ((!unk_0xAB019B170BF1309C(&vVar0) && func_126()) && !unk_0x74C475EB8E73D398(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x84CDD933AFA470D2();
		unk_0x3E80C2F7BC665259(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (!func_195(uParam0))
			{
				if (unk_0xA5F6598E13F98E08(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x7976C9958C60E354(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0xA5F6598E13F98E08(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x7976C9958C60E354(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0xA5F6598E13F98E08(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x7976C9958C60E354(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_274(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_340(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_195(uParam0))
			{
				if (unk_0x9EC5112BB1C4047A(uParam0->f_4))
				{
					func_338(uParam0, 4096, 0);
				}
				else
				{
					func_338(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_340(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_340(uParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_340(uParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_141(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_340(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_338(uParam0, 0, 0);
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_141(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_340(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_141(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_340(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_337(&vVar0);
			func_328(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_340(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_340(uParam0, &vVar0);
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_230(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_141(3, 0);
		}
		func_274(uParam0, 3, 0f, 1);
	}
}

int func_328(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xCF7F
{
	func_336(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_329(sParam2, iParam3, 0);
}

int func_329(char* sParam0, int iParam1, bool bParam2)//Position - 0xCFCD
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
					func_125();
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
		if (func_335(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_334();
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
				func_333();
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
				if (func_332())
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
			func_331();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_330();
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
		func_125();
	}
	return 0;
}

void func_330()//Position - 0xD299
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

void func_331()//Position - 0xD2CB
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

int func_332()//Position - 0xD360
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

void func_333()//Position - 0xD3F9
{
	if (func_71(14))
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
		Global_14453 = func_90();
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

void func_334()//Position - 0xD49B
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

bool func_335(int iParam0, int iParam1)//Position - 0xD4F3
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

void func_336(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD52E
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

void func_337(char* sParam0)//Position - 0xD584
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

void func_338(var uParam0, int iParam1, bool bParam2)//Position - 0xD5D7
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		unk_0x771A86309E0CA47B(uParam0->f_3, false);
		unk_0x2B0DDE3D071497AD(uParam0->f_3);
		unk_0xE17958D3FD0F9EE9(uParam0->f_3, 3, false);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_3, 17, true);
		unk_0xB8E08BD5B184DF4E(uParam0->f_3);
		if ((func_194(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_105(uParam0->f_29)) && !bParam2)
		{
			func_339(uParam0);
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

void func_339(var uParam0)//Position - 0xD6CB
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

void func_340(var uParam0, char* sParam1)//Position - 0xD8B2
{
	if (func_341(uParam0))
	{
		func_328(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_341(var uParam0)//Position - 0xD8DA
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_161(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 40f && !unk_0xEC211A86AB3726B6(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_342(var uParam0)//Position - 0xD918
{
	return uParam0->f_118;
}

void func_343()//Position - 0xD924
{
	func_372(&Local_231);
	if (func_371(&Local_231, &Local_330))
	{
		switch (Local_330.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!func_132(&Local_231))
					{
						if (func_370("TX_OBJ_CYI_DO") || unk_0xA6DECE14FC9A8C51(Local_231.f_9))
						{
							Local_330.f_27++;
						}
						else if (func_196(&Local_231) != 10)
						{
							func_206(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_196(&Local_231) > 10 && func_196(&Local_231) != 15) && !func_132(&Local_231))
				{
					func_206(&Local_231, 15, 1, 0, 0);
					func_181(&Local_231, 7);
				}
				break;
			
			case 2:
				if (func_144(&Local_231, 18) > 2f)
				{
					func_206(&Local_231, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_144(&Local_231, 18) > 2f)
				{
					func_206(&Local_231, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					if ((((func_196(&Local_231) != 33 && !func_369(&Local_231)) && !func_132(&Local_231)) && !bLocal_256) && Local_231.f_410 > 9)
					{
						if (func_144(&Local_231, 18) > 2f)
						{
							func_206(&Local_231, 33, 1, 0, 1);
							func_274(&Local_231, 16, 4f, 0);
							if (bLocal_329)
							{
							}
						}
					}
					else
					{
						if (func_196(&Local_231) != 33)
						{
						}
						if (!func_369(&Local_231))
						{
						}
						if (!func_132(&Local_231))
						{
						}
						if (!bLocal_256)
						{
						}
						if (Local_231.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_144(&Local_231, 16) > 4f && func_196(&Local_231) != 34) && !func_132(&Local_231)) && !func_369(&Local_231))
				{
					func_206(&Local_231, 34, 1, 0, 0);
					if (bLocal_329)
					{
					}
				}
				break;
			
			case 7:
				Local_330.f_27++;
				break;
			}
	}
	func_344(&Local_231, &uLocal_333, &Local_330, bLocal_329);
}

int func_344(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xDB66
{
	func_351(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_133(uParam0, 2))
	{
		if (func_350(uParam1))
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
				if (!func_369(uParam0))
				{
					uParam2->f_7 = { func_349(uParam1) };
					func_328(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_126())
				{
					uParam2->f_13 = { func_166() };
					if (unk_0x74C475EB8E73D398(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_173(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_347(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_137(uParam0))
				{
					if (func_126())
					{
						func_274(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_346() };
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
				else if (func_126())
				{
					uParam2->f_19 = { func_116() };
				}
				else
				{
					func_173(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_347(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_133(uParam0, 14) && !func_126()) && !func_137(uParam0)) && func_144(uParam0, 18) > 1f)
				{
					func_274(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_126())
				{
					if (func_144(uParam0, 18) > 1f)
					{
						if (!unk_0xAB019B170BF1309C(&(uParam2->f_1)))
						{
							func_345(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_126())
				{
					func_173(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_347(uParam1);
					func_274(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_345(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDE06
{
	func_336(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_329(sParam2, iParam4, 0);
}

struct<6> func_346()//Position - 0xDE5A
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

void func_347(var uParam0)//Position - 0xDF06
{
	int iVar0;
	
	iVar0 = func_348(uParam0);
	if (iVar0 > -1)
	{
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_138(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_172(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_193(), 24);
	}
}

int func_348(var uParam0)//Position - 0xDF50
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_349(var uParam0)//Position - 0xDF80
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_172(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_350(var uParam0)//Position - 0xDFC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_197((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_351(var uParam0, var uParam1)//Position - 0xDFF6
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_369(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_133(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_196(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_366(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_126())
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
						func_365(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 2));
				}
				if (func_197(uParam0->f_98, 4))
				{
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				func_153(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_144(uParam0, 16) > 1f)
				{
					func_155(1);
					if (uParam0->f_411 == 9)
					{
						func_234("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_234("TAXI_VIP_RETURN", 7500, 1);
					}
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
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
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_144(uParam0, 16) > func_152(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_126()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_196(uParam0))
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
				func_365(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_366(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_328(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_206(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_274(uParam0, 16, 0, 0);
				func_206(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_197(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_368(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_365(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_274(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_234("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_234("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_158(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
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
				func_208(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_230(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_158(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_361(uParam0, 33554432, vVar0, "", 1, 8);
				func_274(uParam0, 16, 0, 0);
				func_206(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_126())
				{
					func_360(uParam0, 0);
					func_172(&(uParam0->f_44), 4);
					func_274(uParam0, 16, 0, 0);
					func_206(uParam0, 13, 0, 0, 0);
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
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_144(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_208(&vVar0);
					}
					func_358(vVar0, uParam1);
					func_172(&(uParam0->f_81), 67108864);
					func_274(uParam0, 16, 0, 0);
					func_274(uParam0, 11, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_144(uParam0, 11) > uParam0->f_36)
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
							func_208(&vVar0);
						}
					}
					func_358(vVar0, uParam1);
					func_274(uParam0, 11, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
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
					func_208(&vVar0);
				}
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				func_172(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 1, 0, 8);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
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
					func_357(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_357(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_358(vVar0, uParam1);
				func_366(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_235(uParam0, 0, 0);
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
					func_357(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_357(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_358(vVar0, uParam1);
				func_366(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 6, 0f, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 12:
				func_234("TAXI_OBJ_GYB", 3500, 1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_234("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_234("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_234("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_197(uParam0->f_98, 268435456))
				{
					func_234("TAXI_OBJ_CYI_01", 7500, 1);
					func_172(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 33:
				func_234("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_197(uParam0->f_82, 8192))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_208(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_358(vVar0, uParam1);
						}
						else
						{
							func_365(uParam0, &vVar0, 0, 0, 8);
						}
						func_172(&(uParam0->f_82), 8192);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_197(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_208(&vVar0);
					func_365(uParam0, &vVar0, 0, 0, 8);
					func_172(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_197(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_208(&vVar0);
					func_365(uParam0, &vVar0, 0, 0, 8);
					func_172(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 46, 1, 0, 0);
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
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_235(uParam0, 0, 0);
				break;
			
			case 139:
				func_234("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_206(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 120);
				if (!func_197(uParam0->f_82, 268435456))
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
					func_172(&(uParam0->f_82), 268435456);
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
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 100);
				if (!func_197(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_172(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_234("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_235(uParam0, 0, 0);
				func_206(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_126())
				{
					func_234("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_235(uParam0, 0, 0);
					func_206(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_234("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_235(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_197(uParam0->f_81, 1))
				{
					func_356(uParam0, 1, vVar0, "_sick1", 8);
					func_138(&(uParam0->f_81), 2);
				}
				else if (!func_197(uParam0->f_81, 2))
				{
					func_356(uParam0, 2, vVar0, "_sick2", 8);
					func_138(&(uParam0->f_81), 1);
				}
				func_366(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_197(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_197(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_172(&(uParam0->f_81), 2097152);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 16, 0, 0);
				func_366(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_197(uParam0->f_81, 4))
				{
					func_356(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_197(uParam0->f_81, 8))
				{
					func_356(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_356(uParam0, 8, vVar0, "_turns3", 8);
					func_138(&(uParam0->f_81), 4);
					func_138(&(uParam0->f_81), 8);
				}
				func_366(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_355(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_368(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_328(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_368(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_368(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_366(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_197(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 128);
					func_138(&(uParam0->f_83), 256);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 256);
					func_138(&(uParam0->f_83), 512);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 512);
					func_138(&(uParam0->f_83), 128);
					func_274(uParam0, 16, 0, 0);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_197(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_208(&vVar0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 1);
					func_138(&(uParam0->f_83), 2);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_208(&vVar0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 4);
					}
					else
					{
						func_138(&(uParam0->f_83), 1);
					}
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_208(&vVar0);
					}
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 4);
					func_138(&(uParam0->f_83), 1);
					func_274(uParam0, 16, 0, 0);
				}
				func_366(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_197(uParam0->f_81, 4096))
				{
					func_361(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_197(uParam0->f_81, 8192))
				{
					func_361(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_366(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_197(uParam0->f_81, 16384))
				{
					func_361(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_197(uParam0->f_81, 32768))
				{
					func_361(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_366(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_197(uParam0->f_82, 8))
					{
						func_354(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 16))
					{
						func_354(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_197(uParam0->f_82, 32))
					{
						func_354(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_366(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_235(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_368(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_366(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_366(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_366(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_197(uParam0->f_81, 65536))
				{
					func_361(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 131072))
				{
					func_361(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_355(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_230(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_197(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 8);
					func_138(&(uParam0->f_83), 16);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 16);
					func_138(&(uParam0->f_83), 32);
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_138(&(uParam0->f_83), 64);
					}
					else
					{
						func_138(&(uParam0->f_83), 8);
					}
					func_274(uParam0, 16, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_172(&(uParam0->f_83), 64);
					func_138(&(uParam0->f_83), 8);
					func_274(uParam0, 16, 0, 0);
				}
				func_366(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_126())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 65));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_126())
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
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 66));
					func_235(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_126())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								func_366(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								func_366(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_368(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_366(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_274(uParam0, 16, 0, 0);
								func_235(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_365(uParam0, &vVar0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_235(uParam0, 0, 0);
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
									func_208(&vVar0);
									func_365(uParam0, &vVar0, 0, 0, 8);
									func_274(uParam0, 16, 0, 0);
									func_274(uParam0, 11, 0, 0);
									func_235(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_206(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_366(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_197(uParam0->f_82, 1))
				{
					func_354(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 2))
				{
					func_354(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_197(uParam0->f_82, 4))
				{
					func_354(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_235(uParam0, 0, 0);
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
				func_368(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_230(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_366(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_355(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_230(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_353(uParam0, vVar0, 8);
				}
				func_366(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_197(uParam0->f_83, 1024))
				{
					func_172(&(uParam0->f_83), 1024);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 2048))
				{
					func_172(&(uParam0->f_83), 2048);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_197(uParam0->f_83, 4096))
				{
					func_172(&(uParam0->f_83), 4096);
					func_274(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_208(&vVar0);
					func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_197(uParam0->f_82, 1024))
				{
					func_354(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_138(&(uParam0->f_82), 2048);
				}
				else if (!func_197(uParam0->f_82, 2048))
				{
					func_354(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_366(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 52, 1, 0, 0);
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
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_230(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_355(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_365(uParam0, &vVar0, 0, 0, 8);
						func_206(uParam0, 52, 1, 0, 0);
						func_274(uParam0, 16, 0, 0);
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
						func_365(uParam0, &vVar0, 0, 0, 8);
						func_274(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_368(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_274(uParam0, 16, 0, 0);
					func_235(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_366(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					func_234("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_197(uParam0->f_81, 262144))
				{
					func_361(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_197(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_361(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_361(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_366(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_197(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_352(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_197(uParam0->f_82, 134217728))
				{
					func_352(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_366(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 100:
				func_234("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_235(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&vVar0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_208(&vVar0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
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
					func_208(&vVar0);
				}
				func_172(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_197(uParam0->f_82, 65536))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
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
						func_208(&vVar0);
						func_358(vVar0, uParam1);
						func_172(&(uParam0->f_82), 65536);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_197(uParam0->f_82, 131072))
				{
					if (func_144(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_208(&vVar0);
						func_358(vVar0, uParam1);
						func_172(&(uParam0->f_82), 131072);
						func_274(uParam0, 16, 0, 0);
						func_274(uParam0, 11, 0, 0);
						func_235(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_197(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_172(&(uParam0->f_82), 8388608);
				}
				else if (!func_197(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_172(&(uParam0->f_82), 16777216);
				}
				else if (!func_197(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_172(&(uParam0->f_82), 33554432);
				}
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_368(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_208(&vVar0);
					func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_358(vVar0, uParam1);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_368(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_367(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_206(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_172(&(uParam0->f_81), 2097152);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_208(&vVar0);
				func_358(vVar0, uParam1);
				func_172(&(uParam0->f_81), 67108864);
				func_274(uParam0, 16, 0, 0);
				func_274(uParam0, 11, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_197(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_361(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_230(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_206(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_197(uParam0->f_81, 268435456))
				{
					func_361(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_206(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_234("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_235(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_197(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_361(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
						{
							func_230(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_361(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_206(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_234("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_235(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_328(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_274(uParam0, 16, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_197(uParam0->f_81, 16777216))
				{
					func_361(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_235(uParam0, 0, 0);
				break;
			
			case 88:
				func_234("TAXI_TIEFLEE", 7500, 1);
				func_235(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_197(uParam0->f_98, 536870912))
				{
					func_234("TAXI_OBJ_CYI_1B", 7500, 1);
					func_172(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_235(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_208(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_235(uParam0, 0, 0);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_235(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_365(uParam0, &vVar0, 1, 0, 8);
				func_206(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_234("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_206(uParam0, 0, 0, 0, 0);
				func_235(uParam0, 0, 0);
				break;
			}
	}
}

void func_352(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x112B5
{
	func_172(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_208(&vParam2);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_353(var uParam0, struct<6> Param1, int iParam2)//Position - 0x112F6
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_197(uParam0->f_82, 64))
	{
		func_172(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_197(uParam0->f_82, 128))
	{
		func_172(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x63A6486593EC7EC3(1, 3), 24);
	}
	func_367(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_274(uParam0, 16, 0, 0);
}

void func_354(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x1137D
{
	func_172(&(uParam0->f_82), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_208(&vParam2);
		}
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_355(var uParam0)//Position - 0x113FD
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_356(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x11463
{
	func_172(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_328(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_357(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x11499
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_252(*uParam0, iVar1))
		{
			func_173(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_208(sParam2);
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

void func_358(char[24] cParam0, var uParam1)//Position - 0x1151A
{
	int iVar0;
	
	iVar0 = func_359(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_172(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_359(var uParam0)//Position - 0x11549
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

void func_360(var uParam0, bool bParam1)//Position - 0x11576
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_234("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_234("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_234("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_234("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_234("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_234("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_234("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_234("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_234("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_234("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_234("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_234("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_234("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_361(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x1172D
{
	func_172(&(uParam0->f_81), iParam1);
	func_274(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_208(&vParam2);
	}
	func_328(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_362(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x1176E
{
	func_274(uParam0, 16, 0, 0);
	func_274(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		unk_0x4DB5F099DE92D53F(uParam0->f_3, &cParam1, func_363(uParam0));
	}
}

char* func_363(var uParam0)//Position - 0x117AC
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

char* func_364(var uParam0, int iParam1)//Position - 0x11846
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

int func_365(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x11BEF
{
	func_274(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_274(uParam0, 17, 0f, 1);
	}
	func_235(uParam0, iParam2, 0);
	return func_328(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_366(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x11C2C
{
	if (iParam0 == 0)
	{
		if (func_197(*uParam2, 2))
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
		if (func_197(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_197(*uParam2, 4))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_197(*uParam2, 512))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_197(*uParam2, 16))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_197(*uParam2, 64))
		{
			if (!func_197(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_138(uParam2, 4096);
			}
		}
		else if (func_197(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_197(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_197(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_197(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_197(*uParam2, 8192))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_197(*uParam2, 16384))
		{
			if (func_197(*uParam2, 4194304))
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
		if (func_197(*uParam2, 32768))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_197(*uParam2, 65536))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_197(*uParam2, 131072))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_197(*uParam2, 262144))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_197(*uParam2, 524288))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_197(*uParam2, 1048576))
		{
			if (func_197(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_197(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_197(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_197(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_197(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_197(*uParam2, 67108864))
		{
			if (func_197(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_197(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_197(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_197(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_197(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_367(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12236
{
	func_336(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_329(sParam2, iParam4, 0);
}

void func_368(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1228A
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_252(*uParam0, iVar1))
		{
			func_173(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_208(sParam2);
				}
				else
				{
					func_208(sParam2);
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

int func_369(var uParam0)//Position - 0x12321
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_188("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_188("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_188("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_188("TX_OBJ_GYB_DO", 0, 0) || func_188("TAXI_OBJ_GYB", 0, 0)) || func_188("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_188("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_188("TX_OBJ_CYI_DO", 0, 0) || func_188("TAXI_OBJ_CYI_01", 0, 0)) || func_188("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_188("TX_OBJ_GYN_DO", 0, 0) || func_188("TAXI_OBJ_GYN", 0, 0)) || func_188("TAXI_OBJ_GYN_TG", 0, 0)) || func_188("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_188("TAXI_OBJ_CC1", 0, 0) || func_188("TAXI_OBJ_CC2", 0, 0)) || func_188("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_188("TAXI_OBJ_FTC1", 0, 0) || func_188("TAXI_OBJ_FTC2", 0, 0)) || func_188("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_188("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_188("TAXI_OBJ_GETRUN", 0, 0) || func_188("TAXI_OBJ_DRIVE", 0, 0)) || func_188("TAXI_OBJ_RETURN", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0)) || func_188("TAXI_OBJ_RUNOUT", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0));
}

int func_370(char* sParam0)//Position - 0x12541
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (func_188(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_371(var uParam0, var uParam1)//Position - 0x12563
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_133(uParam0, 9));
}

void func_372(var uParam0)//Position - 0x1258A
{
	if (func_133(uParam0, 17))
	{
		if (!func_133(uParam0, 14))
		{
			if (!func_137(uParam0))
			{
				if (!func_126())
				{
					func_134(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_373(var uParam0)//Position - 0x125C4
{
	return uParam0->f_117;
}

void func_374(var uParam0)//Position - 0x125D0
{
	if (!func_303(uParam0))
	{
		if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
		{
		}
		func_146(uParam0, 1);
	}
	else if (func_133(uParam0, 14))
	{
		func_199(uParam0);
		func_147(uParam0, 0);
	}
}

void func_375(var uParam0, var uParam1, bool bParam2)//Position - 0x12611
{
	if (!func_197(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xAB019B170BF1309C(&(uParam0->f_124)) && func_126())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_126())
				{
					StringCopy(&(uParam0->f_124), func_193(), 24);
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

void func_376(var uParam0)//Position - 0x12697
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_252(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_252(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_252(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_173(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else
						{
							func_139(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_252(Local_165.f_1[iVar0 /*4*/], 4) && !func_252(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_173(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_327(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_377(var uParam0, var uParam1)//Position - 0x127AA
{
	var uVar0;
	
	if (!func_133(uParam0, 27))
	{
		func_181(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_144(uParam0, 27) > 5f)
	{
		if (func_404(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_274(uParam0, 27, 0, 0);
			func_274(uParam0, 10, 0, 0);
			func_402(uParam0, &uVar0, uParam1);
		}
		func_399(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_378(uParam0);
	}
	if ((((!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) && (unk_0x8EA3C8E091EA5BA4(*uParam0) && !unk_0xD85097DDDA5447BE(*uParam0))) && (unk_0x8EA3C8E091EA5BA4(uParam0->f_1) && !unk_0xD85097DDDA5447BE(uParam0->f_1))) && !unk_0x23F2F89E3D1CB7C4()) && !func_126())
	{
		if (func_144(uParam0, 26) > 10f)
		{
			func_134(uParam0, 26, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
	}
	else if (func_133(uParam0, 26))
	{
		func_134(uParam0, 26, 0);
	}
	return 0;
}

void func_378(var uParam0)//Position - 0x128D4
{
	if (!func_398(uParam0->f_429))
	{
		uParam0->f_429 = func_397();
		func_388(&(uParam0->f_429), 0, 0, unk_0x63A6486593EC7EC3(4, 7), 0, 0, 0);
	}
	else if (func_379(uParam0->f_429))
	{
		func_327(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_379(int iParam0)//Position - 0x12921
{
	return func_380(func_397(), iParam0);
}

int func_380(int iParam0, int iParam1)//Position - 0x12933
{
	int iVar0;
	int iVar1;
	
	if (!func_398(iParam1) || !func_398(iParam0))
	{
		return 1;
	}
	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	iVar1 = func_385(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)//Position - 0x12A3F
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_382(int iParam0)//Position - 0x12A52
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_383(int iParam0)//Position - 0x12A65
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_384(int iParam0)//Position - 0x12A78
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_385(int iParam0)//Position - 0x12A8A
{
	return iParam0 & 15;
}

var func_386(int iParam0)//Position - 0x12A97
{
	return (system::shift_right(iParam0, 26) & 31 * func_387(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_387(bool bParam0, int iParam1, int iParam2)//Position - 0x12ABC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_388(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12AD3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_386(*uParam0);
	iVar1 = func_385(*uParam0);
	iVar2 = func_384(*uParam0);
	iVar3 = func_383(*uParam0);
	iVar4 = func_382(*uParam0);
	iVar5 = func_381(*uParam0);
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
	iVar6 = func_396(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_396(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_389(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_389(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12C55
{
	func_395(uParam0, iParam1);
	func_394(uParam0, iParam2);
	func_393(uParam0, iParam3);
	func_392(uParam0, iParam5);
	func_391(uParam0, iParam4);
	func_390(uParam0, iParam6);
}

void func_390(var uParam0, int iParam1)//Position - 0x12C8D
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

void func_391(var uParam0, int iParam1)//Position - 0x12D13
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_385(*uParam0);
	iVar1 = func_386(*uParam0);
	if (iParam1 < 1 || iParam1 > func_396(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_392(var uParam0, int iParam1)//Position - 0x12D64
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_393(var uParam0, int iParam1)//Position - 0x12D97
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_394(var uParam0, int iParam1)//Position - 0x12DD1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_395(var uParam0, int iParam1)//Position - 0x12E0C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_396(int iParam0, int iParam1)//Position - 0x12E48
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

int func_397()//Position - 0x12EEA
{
	var uVar0;
	
	func_395(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_394(&uVar0, unk_0x95327550F0F2BE7C());
	func_393(&uVar0, unk_0x674C9438180770FE());
	func_391(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_392(&uVar0, unk_0xEAF455949B108589());
	func_390(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

int func_398(int iParam0)//Position - 0x12F30
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
	iVar0 = func_381(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_382(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_383(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_386(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_385(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_384(iParam0);
	if (iVar5 < 1 || iVar5 > func_396(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_399(var uParam0)//Position - 0x1300C
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_401()) && !func_303(uParam0)) || ((uParam0->f_411 != 9 && func_239(uParam0, 1)) && !func_303(uParam0)))
		{
			uVar0 = func_400(uParam0->f_4);
			unk_0x83E70C4C5D45C754(&uVar0);
			uParam0->f_4 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_4, true, 0);
			func_199(uParam0);
			func_147(uParam0, 0);
		}
	}
}

var func_400(var uParam0)//Position - 0x130A2
{
	return uParam0;
}

int func_401()//Position - 0x130AC
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
					if (unk_0xB0DA749C8A7CCBBF(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_402(var uParam0, var uParam1, var uParam2)//Position - 0x13103
{
	switch (*uParam1)
	{
		case 1:
			if (func_403(uParam0, 0, 1))
			{
				func_327(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_403(uParam0, 0, 4))
			{
				func_327(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_403(uParam0, 0, 8))
			{
				func_327(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_403(uParam0, 1, 1))
			{
				func_327(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_403(uParam0, 0, 1))
			{
				func_327(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_197(*uParam2, 2) && func_195(uParam0))
			{
				func_327(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_403(var uParam0, int iParam1, int iParam2)//Position - 0x131DE
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
				func_206(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_206(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1325B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (!func_197(*uParam2, 1))
		{
			if (func_410(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_197(*uParam2, 2))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_197(*uParam2, 4))
		{
			if (func_408(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_197(*uParam2, 8))
		{
			if (func_407(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_197(*uParam2, 128);
		if (bParam4)
		{
			if (func_405(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_197(*uParam2, 16))
		{
			if (func_405(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x13385
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
	if (func_406(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_160(iParam0, 1) < 1,5f)
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

int func_406(int iParam0, int iParam1)//Position - 0x1354D
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

int func_407(int iParam0, int iParam1, var uParam2)//Position - 0x135A2
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

int func_408(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x135F0
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
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_409(iVar1))
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

int func_409(int iParam0)//Position - 0x13769
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
						if (func_161(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
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

int func_410(int iParam0, var uParam1)//Position - 0x13837
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_160(iParam0, 1) < uParam1->f_2)
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

void func_411(var uParam0)//Position - 0x138BC
{
	if (!func_197(uParam0->f_98, 2))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (func_194(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x9B8406983378711E(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_172(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_412()//Position - 0x13913
{
	func_413(&Local_231);
	func_429();
}

void func_413(var uParam0)//Position - 0x13926
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_432(2);
	}
}

int func_414(var uParam0, bool bParam1)//Position - 0x13945
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_126() && func_144(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_57(uParam0) == 0 || func_252(uParam0->f_85, 32))
					{
						if (!unk_0x9EC5112BB1C4047A(uParam0->f_4))
						{
							func_338(uParam0, 4160, 0);
						}
						else
						{
							func_338(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_338(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_338(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_338(uParam0, 0, 0);
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

int func_415(var uParam0)//Position - 0x13A44
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0)//Position - 0x13A65
{
	func_418(&Local_231, iParam0);
	Local_231.f_410 = 0;
	func_417(&Local_231, 2, 8);
	Local_231.f_23 = { -1069,277f, -2666,156f, 12,665f };
	Local_231.f_33 = 202,9f;
	Local_231.f_26 = { 323,9376f, -956,7155f, 28,346f };
	Local_231.f_34 = 262,6098f;
	Local_231.f_29 = { -1037,711f, -2748,463f, 20,3642f };
}

void func_417(var uParam0, int iParam1, int iParam2)//Position - 0x13ADD
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_418(var uParam0, var uParam1)//Position - 0x13AF1
{
	func_428(1);
	func_201();
	func_6(&(uParam0->f_244));
	func_427(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_197(Global_104555.f_19067, 4))
	{
		func_172(&(Global_104555.f_19067), 4);
	}
	func_422(uParam0);
	func_420(uParam0);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	uParam0->f_102 = (func_419(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xBCBC53983EC3B1BA("TAXI", 2);
}

int func_419(int iParam0)//Position - 0x13B73
{
	return Global_104555.f_19067.f_39[iParam0];
}

void func_420(var uParam0)//Position - 0x13B88
{
	switch (func_57(uParam0))
	{
		case 0:
			func_421(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_421(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_421(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_421(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_421(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_421(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_421(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_421(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_421(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_421(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_421(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13CDB
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_422(var uParam0)//Position - 0x13CF5
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_426(uParam0, 3);
			func_425(uParam0, 14);
			break;
		
		case 1:
			func_426(uParam0, 14);
			func_425(uParam0, 8);
			break;
		
		case 2:
			func_426(uParam0, 8);
			func_425(uParam0, 7);
			break;
		
		case 3:
			func_426(uParam0, 15);
			func_425(uParam0, 6);
			break;
		
		case 4:
			func_426(uParam0, 0);
			func_425(uParam0, 3);
			break;
		
		case 5:
			func_426(uParam0, 6);
			func_425(uParam0, 7);
			break;
		
		case 6:
			func_426(uParam0, 8);
			func_425(uParam0, 15);
			break;
		
		case 7:
			func_426(uParam0, 8);
			func_425(uParam0, 14);
			break;
		
		case 8:
			func_426(uParam0, 7);
			func_425(uParam0, 15);
			break;
		
		case 9:
			func_426(uParam0, unk_0x63A6486593EC7EC3(0, 17));
			iVar0 = func_424((uParam0->f_418.f_2 + unk_0x63A6486593EC7EC3(1, 17)), 0, 16);
			func_425(uParam0, iVar0);
			func_423(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_423(var uParam0)//Position - 0x13E2C
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

int func_424(int iParam0, int iParam1, int iParam2)//Position - 0x13EED
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

void func_425(var uParam0, int iParam1)//Position - 0x13F8F
{
	uParam0->f_418.f_1 = iParam1;
}

void func_426(var uParam0, int iParam1)//Position - 0x13FA0
{
	uParam0->f_418.f_2 = iParam1;
}

void func_427(var uParam0)//Position - 0x13FB1
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
	func_134(uParam0, 32, 0);
}

void func_428(bool bParam0)//Position - 0x14010
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

void func_429()//Position - 0x1403C
{
	int iVar0;
	
	func_203(func_210(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_323[iVar0], 0))
		{
			unk_0x486F346ADFE56674(&(iLocal_323[iVar0]));
		}
		iVar0++;
	}
	unk_0x14776E43F90DD454(func_273(0));
	func_127(&iLocal_266);
	unk_0x1B69FB1F500A84B4(0);
	unk_0xC1CEF375B44856F4(true);
	unk_0x77A208B3324C04F2();
	unk_0xE02E32C69260FBB7("TAXI_CUT_U_IN");
	unk_0xFCCDDE0E48CF9588("MOVE_P_M_ZERO_RUCKSACK");
	func_431();
	func_430();
	func_280(&uLocal_45, 0, 0);
	unk_0xCA107A9AAF17E75F(iLocal_326, 0);
	if (unk_0x6ADD12BF4D6D2587(iLocal_244))
	{
		unk_0x452336926718D62A(&iLocal_244);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_430()//Position - 0x140DB
{
	unk_0x14776E43F90DD454(func_273(3));
	unk_0x14776E43F90DD454(func_273(4));
	unk_0x9E6ACDF1473CD846(0, func_131(1));
}

void func_431()//Position - 0x140FF
{
}

void func_432(int iParam0)//Position - 0x14107
{
	Global_103265.f_22 = iParam0;
}

