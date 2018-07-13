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
	int iLocal_85 = 0;
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
	struct<411> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = -1;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	vector3 vLocal_258[1] = {{ 0f, 0f, 0f } };
	int iLocal_259 = 0;
	vector3 vLocal_260 = { 0f, 0f, 0f };
	vector3 vLocal_261 = { 0f, 0f, 0f };
	vector3 vLocal_262 = { 0f, 0f, 0f };
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = 0;
	struct<28> Local_268 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 5;
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
	var uLocal_314 = 1097859072;
	var uLocal_315 = 1500;
	var uLocal_316 = 45;
	var uLocal_317 = 1103626240;
	var uLocal_318 = 5;
	int iLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
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
	iLocal_259 = joaat("a_m_y_skater_02");
	vLocal_260 = { -496,0739f, -336,6628f, 33,5017f };
	vLocal_261 = { -484,6879f, -330,1646f, 33,3534f };
	vLocal_262 = { 725,3476f, 1204,526f, 324,9057f };
	iLocal_263 = 1;
	if (unk_0x7D9C4B359376D38A(67))
	{
		func_416(2);
		func_415();
	}
	unk_0xBC03901A15107317(1);
	func_402(0);
	while (true)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_230.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_230);
		}
		system::wait(0);
	}
}

void func_1(var uParam0)//Position - 0x11A
{
	uParam0->f_2 = unk_0xFC1458A37D98B502();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x13B
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

int func_3(int iParam0)//Position - 0x186
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

int func_4(int iParam0)//Position - 0x1C3
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

bool func_5(int iParam0)//Position - 0x1ED
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x1F9
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x27F
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

void func_8()//Position - 0x31A
{
	if (func_401(&Local_230))
	{
		func_400(&Local_230);
		if (Local_230.f_410 > 0)
		{
			if (func_399(&Local_230, 0))
			{
				func_397();
			}
		}
		else if (func_396(&Local_230, 31) > 5f)
		{
			func_416(2);
			func_415();
		}
	}
	else
	{
		func_395(&Local_230);
		if (Local_230.f_410 <= 9)
		{
			func_361(&Local_230, &uLocal_312);
			func_360(&Local_230);
		}
		func_359(&Local_230, &uLocal_264, 0);
		if (Local_230.f_410 > 2)
		{
			if (!func_358(&Local_230))
			{
				func_327();
			}
			else
			{
				func_321(&Local_230, "Taxi Not Driveable", func_326(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			if (Local_230.f_139)
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_230.f_4, 0) && func_320(Local_230.f_4, Local_230.f_17, 1) > 450f)
				{
					func_296(&Local_230, 0, 0);
				}
				else
				{
					func_296(&Local_230, 0, 1);
				}
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_295(&(vLocal_258[0 /*3*/]), "TAXI_SC_BN_02", 200);
				func_294(&Local_230, &vLocal_258);
				func_291();
				func_290(&Local_230, 16, 4f, 0);
				func_288(&Local_230, vLocal_260, vLocal_261, "TaxiFelipe", iLocal_259, 256f, 30f);
				func_286(&Local_230);
				func_285(&Local_230, 1);
				break;
			
			case 1:
				if (func_283())
				{
					func_282();
					func_262();
					func_261(&Local_230);
					Local_230.f_14 = { vLocal_260 };
					func_285(&Local_230, 3);
				}
				break;
			
			case 3:
				if (func_256(&Local_230, 1))
				{
					if (!unk_0x191BE1BC8F26F3C1(Local_230.f_3, 0))
					{
						unk_0xAE01EF4BC84AFE7C(Local_230.f_3, 29, false);
						unk_0x03924C68EFCBC511(Local_230.f_3, 3, 1, 1, 0);
						unk_0x03924C68EFCBC511(Local_230.f_3, 4, 1, 2, 0);
						unk_0x03924C68EFCBC511(Local_230.f_3, 0, 0, 1, 0);
						unk_0x03924C68EFCBC511(Local_230.f_3, 11, 1, 0, 0);
					}
					func_255(&Local_230, 1, 0);
					func_285(&Local_230, 5);
				}
				break;
			
			case 5:
				if (!unk_0x0F3033474C49912D(Local_230.f_4, -484,9218f, -370,1231f, 33,40805f, -517,9089f, -362,7899f, 37,31326f, 28,75f, 0, true, 0) && !unk_0x0F3033474C49912D(Local_230.f_4, -472,0588f, -321,036f, 33,35326f, -485,479f, -285,4217f, 37,49232f, 28,75f, 0, true, 0))
				{
					if (func_227(&Local_230, 0, 30f))
					{
						func_285(&Local_230, 15);
					}
				}
				break;
			
			case 15:
				if (func_226(&Local_230))
				{
					Local_230.f_17 = { vLocal_262 };
					bLocal_265 = true;
					func_222(&Local_230, 9, 1, 0, 0);
					func_221(&Local_230);
					Local_230.f_46 = unk_0xDE523AF6F7B269AB(Local_230.f_4);
					func_285(&Local_230, 7);
				}
				if (unk_0xB8DE76287EDC4957(Local_230.f_4, 0))
				{
					if (!unk_0xA8D0477084E86A92(Local_230.f_2, Local_230.f_4, 0))
					{
						func_219(&Local_230);
						func_285(&Local_230, 5);
					}
				}
				break;
			
			case 7:
				if (bLocal_265)
				{
					func_218();
					func_285(&Local_230, 9);
				}
				break;
			
			case 9:
				if (((func_320(Local_230.f_4, Local_230.f_17, 1) < 875f && func_217(&Local_230) != 68) && !func_216()) && !iLocal_266)
				{
					func_214(&(Local_230.f_100), 16384);
					func_222(&Local_230, 68, 1, 0, 1);
					system::settimera(0);
					iLocal_266 = 1;
				}
				if (func_213(Local_230.f_81, 67108864))
				{
					if (!func_212(&Local_230))
					{
					}
				}
				if (func_175(&Local_230, 9f, 7,5f))
				{
					unk_0xE30CF11C0EE14316(&(Local_230.f_9));
					func_174();
					func_173(&Local_268, -1, 1);
					if (Local_230.f_76 >= 95)
					{
						func_172(&Local_230, 0);
					}
					func_170(&Local_230);
					func_166(&Local_230);
					if (Local_230.f_56 < Local_230.f_58)
					{
						func_285(&Local_230, 28);
					}
					else
					{
						unk_0x60C06BFD037BB7CF(Local_230.f_3, unk_0xFC1458A37D98B502(), -1, 2049, 3);
						unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Local_230.f_3, -1, 2049, 3);
						func_285(&Local_230, 27);
					}
					func_165(&Local_230);
				}
				break;
			
			case 27:
				if (func_155(&Local_230, 1))
				{
					unk_0xCB3D88C918AA637C(Local_230.f_3);
					unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
					func_154(&Local_230);
					func_285(&Local_230, 29);
				}
				break;
			
			case 28:
				if (iLocal_250 == 2 && !func_153(Local_230.f_2, Local_230.f_3))
				{
					if (!func_152(&iLocal_319))
					{
						func_150(&iLocal_319);
					}
					else if (func_149(&iLocal_319) > 5f)
					{
						func_222(&Local_230, 106, 1, 0, 1);
						func_150(&iLocal_319);
					}
				}
				if (func_111(&iLocal_250, &Local_230, &(Local_230.f_3), &uLocal_251, 1))
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_230.f_3))
					{
						func_101(&(Local_230.f_244), Local_230.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					func_285(&Local_230, 29);
				}
				break;
			
			case 29:
				if (func_73(&Local_230, &iLocal_322))
				{
					if (!func_216())
					{
						func_9(1, &Local_230, 1);
						func_285(&Local_230, 30);
					}
				}
				break;
			
			case 30:
				func_415();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)//Position - 0x874
{
	if (bParam0)
	{
		func_49(uParam1);
		if (!unk_0x3AB6A1A9084FB0A4(uParam1->f_3))
		{
			unk_0xAE01EF4BC84AFE7C(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_47(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)//Position - 0x8B0
{
	func_400(uParam0);
	if (func_216())
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
	func_37(uParam0->f_14, 1);
	func_35(uParam0->f_14, 1, 1114636288);
	func_34(&(uParam0->f_244), 3);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, true);
	if (func_31())
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_21(0, 1, 1, 0);
	unk_0x9B47B379EE749C38(true);
	unk_0x4255E93FCCDE108E(true);
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		unk_0x02934BABFD4CD384(*uParam0, 0);
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0xBC3B7443617858A0(true);
	}
	if (func_213(Global_104555.f_19067, 4))
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
	unk_0xB4BD3ECA024822EB(system::round((func_11(&iLocal_82) * 1000f)), 12, 0);
}

float func_11(var uParam0)//Position - 0xA01
{
	if (func_152(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_12(bool bParam0)//Position - 0xA3D
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

bool func_13(var uParam0)//Position - 0xA95
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

void func_14(int iParam0)//Position - 0xAA5
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

struct<8> func_15(int iParam0)//Position - 0xACC
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

void func_16(var uParam0)//Position - 0xB91
{
	unk_0x27FC35791018A3A5(uParam0->f_51[0]);
}

void func_17(var uParam0)//Position - 0xBA5
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

int func_18()//Position - 0xC9A
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)//Position - 0xCA7
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)//Position - 0xCB7
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCCC
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_30(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_29())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_30(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_26(unk_0x9EB17624F44A8DA4())) && !func_23(unk_0x9EB17624F44A8DA4(), 0)) && !func_22())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_26(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_22()//Position - 0xDE5
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)//Position - 0xE02
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)//Position - 0xE4D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()//Position - 0xE8E
{
	return Global_1312736;
}

int func_26(int iParam0)//Position - 0xE9A
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()//Position - 0xEDC
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_28(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xEED
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

int func_29()//Position - 0xF20
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)//Position - 0xF47
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

int func_31()//Position - 0xF6A
{
	if (!func_33() && !func_32())
	{
		if (!unk_0x52B74B52F9D50112(unk_0x98EC0789D9F0703B()))
		{
			return 1;
		}
	}
	return 0;
}

int func_32()//Position - 0xF95
{
	if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0xFAF
{
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)//Position - 0xFC9
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_35(vector3 vParam0, bool bParam1, float fParam2)//Position - 0xFE6
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_36(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_36(vParam0, 1f, fParam2, fParam2, fParam2) };
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

Vector3 func_36(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x105B
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

void func_37(vector3 vParam0, bool bParam1)//Position - 0x10A8
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_38(vParam0, func_39(), 0))
	{
		vVar0 = { func_36(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_36(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x4C15495E88D71C61(vVar0, vVar1, bParam1, 1);
	}
}

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1108
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()//Position - 0x114F
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)//Position - 0x115B
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
	if (!func_29())
	{
		Global_14453.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)//Position - 0x11CB
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

int func_42(int iParam0)//Position - 0x123F
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

void func_43()//Position - 0x1299
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

void func_44(int iParam0, bool bParam1)//Position - 0x1320
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

void func_45()//Position - 0x135E
{
	Global_14622 = 0;
	func_46();
}

void func_46()//Position - 0x136E
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_47(int iParam0, int iParam1)//Position - 0x138F
{
	switch (iParam0)
	{
		case 0:
			Global_104555.f_19067.f_22[0]++;
			func_48("Fares Completed ++ = ", Global_104555.f_19067.f_22[0]);
			break;
		
		case 1:
			Global_104555.f_19067.f_22[1]++;
			func_48("Fares Failed ++ = ", Global_104555.f_19067.f_22[1]);
			break;
		
		case 2:
			Global_104555.f_19067.f_22[2]++;
			func_48("Fares Accepted ++ ", Global_104555.f_19067.f_22[2]);
			break;
		
		case 3:
			Global_104555.f_19067.f_22[3]++;
			func_48("Fares Expired ++ ", Global_104555.f_19067.f_22[3]);
			break;
		
		case 13:
			Global_104555.f_19067.f_22[13]++;
			func_48("Passengers run ++ = ", Global_104555.f_19067.f_22[13]);
			break;
		
		case 14:
			Global_104555.f_19067.f_22[14]++;
			func_48("Passenger Forced to Pay ++ = ", Global_104555.f_19067.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_104555.f_19067.f_22[4])
				{
					Global_104555.f_19067.f_22[4] = iParam1;
					func_48("This distance ", iParam1);
					func_48(" is longer than current best", Global_104555.f_19067.f_22[4]);
				}
				else
				{
					func_48("Longest Distance Not Beat ", Global_104555.f_19067.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_104555.f_19067.f_22[5] = (Global_104555.f_19067.f_22[5] + iParam1);
			func_48("Total Distance w/ Passenger = ", Global_104555.f_19067.f_22[5]);
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
			func_48("Wanted Levels ++ = ", Global_104555.f_19067.f_22[6]);
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
			func_48("Wanted Levels Lost = ", Global_104555.f_19067.f_22[7]);
			break;
		
		case 8:
			Global_104555.f_19067.f_22[8]++;
			func_48("Taxis wrecked ++ = ", Global_104555.f_19067.f_22[8]);
			break;
		
		case 9:
			Global_104555.f_19067.f_22[9]++;
			func_48("Horn Honked ++ = ", Global_104555.f_19067.f_22[9]);
			break;
		
		case 10:
			Global_104555.f_19067.f_22[10] = (Global_104555.f_19067.f_22[10] + iParam1);
			func_48("Total Money Earned = ", Global_104555.f_19067.f_22[10]);
			break;
		
		case 11:
			Global_104555.f_19067.f_22[11] = (Global_104555.f_19067.f_22[11] + iParam1);
			func_48("Total Tips Earned = ", Global_104555.f_19067.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_104555.f_19067.f_22[12])
			{
				Global_104555.f_19067.f_22[12] = iParam1;
				func_48("New Highest Tip = ", Global_104555.f_19067.f_22[12]);
			}
			else
			{
				func_48("Highest Tip Not Reached = ", Global_104555.f_19067.f_22[12]);
			}
			break;
	}
}

void func_48(char* sParam0, int iParam1)//Position - 0x1780
{
}

void func_49(var uParam0)//Position - 0x1788
{
	func_47(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_416(1);
		func_59(15, 1);
	}
	func_214(&(Global_104555.f_19067), 1024);
	if (!func_213(Global_104555.f_19067, 64))
	{
		func_50(func_57(func_58(uParam0)), 0, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2)//Position - 0x17DC
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
		func_56((891 + iParam0), 1, -1, 1);
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
		func_51();
	}
}

void func_51()//Position - 0x18C4
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
		func_55(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_54() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()//Position - 0x1D85
{
	if (func_53(0))
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

bool func_53(bool bParam0)//Position - 0x1DD0
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_54()//Position - 0x1DFB
{
	return Global_25233;
}

int func_55(int iParam0, int iParam1)//Position - 0x1E06
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

int func_56(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1E57
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
		iParam2 = func_25();
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

int func_57(int iParam0)//Position - 0x2323
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

int func_58(var uParam0)//Position - 0x23B9
{
	return uParam0->f_411;
}

int func_59(int iParam0, int iParam1)//Position - 0x23C6
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_60(iParam0, iParam1);
}

int func_60(int iParam0, int iParam1)//Position - 0x23E1
{
	if (func_72(14) && !func_71(iParam0))
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
	if (func_70(&Global_4267379))
	{
		if (func_68(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_61(&Global_4267379, iParam0))
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

int func_61(var uParam0, int iParam1)//Position - 0x247E
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_72(14) && !func_71(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	if (func_67(uParam0) < 0f)
	{
		func_66(uParam0, 0);
	}
	func_64(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_62(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_62(var uParam0, int iParam1)//Position - 0x252F
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_72(14) && !func_71(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	if (func_67(uParam0) < 0f)
	{
		func_66(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_63(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)//Position - 0x25AA
{
	return (*uParam0)[iParam1] == 78;
}

void func_64(var uParam0)//Position - 0x25BB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_65(uParam0, iVar0);
		iVar0++;
	}
	func_66(uParam0, (Global_4267378 - 0,5f));
}

void func_65(var uParam0, int iParam1)//Position - 0x25EF
{
	(*uParam0)[iParam1] = 78;
}

void func_66(var uParam0, float fParam1)//Position - 0x25FF
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

float func_67(var uParam0)//Position - 0x261C
{
	return uParam0->f_80;
}

bool func_68(var uParam0, int iParam1)//Position - 0x2628
{
	return func_69(uParam0, iParam1) != -1;
}

int func_69(var uParam0, int iParam1)//Position - 0x263A
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

bool func_70(var uParam0)//Position - 0x2667
{
	return uParam0->f_79 == 1;
}

int func_71(int iParam0)//Position - 0x2675
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

bool func_72(int iParam0)//Position - 0x26C5
{
	return Global_35861 == iParam0;
}

int func_73(var uParam0, int iParam1)//Position - 0x26D3
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_216() && func_396(uParam0, 0) > 1f)
			{
				if (func_31())
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				}
				func_100(uParam0);
				func_19(&(Global_104555.f_19067), 4096);
				func_97(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_99(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x4AFBCBFDE748D4E0(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_96(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_93(iParam1, 0))
			{
				func_74(uParam0);
				func_290(uParam0, 0, 0, 0);
				func_96(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_74(var uParam0)//Position - 0x27A5
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_75(func_91(), 21, iVar0, 0, 0);
		func_47(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x27E3
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
	func_76(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x28CA
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
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
					func_89(99, 1);
					func_88(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_87(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_83(5))
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
							func_88(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_83(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_88(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_property"), iParam3);
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
									func_88(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_83(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_82(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_79(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_79(iVar1);
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
					func_88(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_total_cash_earned"), iParam3);
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
	func_78(iParam0);
	if (Global_35861 == 15)
	{
		func_77(0);
	}
	return 1;
}

void func_77(bool bParam0)//Position - 0x2EC9
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

void func_78(int iParam0)//Position - 0x314B
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

void func_79(int iParam0)//Position - 0x31A5
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_56(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_81() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_81() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_80(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_80(int iParam0)//Position - 0x327C
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

int func_81()//Position - 0x3304
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(int iParam0)//Position - 0x3311
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

bool func_83(int iParam0)//Position - 0x3331
{
	if (iParam0 == 8)
	{
		return func_84(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_81() /*12130*/].f_7676.f_10, iParam0);
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x337F
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_86(iParam0, iParam1);
	uVar2 = func_85(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_85(int iParam0)//Position - 0x33BC
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

int func_86(int iParam0, int iParam1)//Position - 0x367C
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_87(bool bParam0)//Position - 0x391E
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
		func_55(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_59(27, 1);
	return 1;
}

void func_88(int iParam0, int iParam1)//Position - 0x39D5
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_89(int iParam0, int iParam1)//Position - 0x39F8
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

void func_90()//Position - 0x3A55
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

int func_91()//Position - 0x3ACA
{
	func_92();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_92()//Position - 0x3AE3
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_4(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_3(unk_0xFC1458A37D98B502());
			if (func_5(iVar0) && (!func_72(14) || Global_103506))
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

int func_93(var uParam0, int iParam1)//Position - 0x3BE0
{
	if (!func_152(&(uParam0->f_2)))
	{
		func_150(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xE8C126B7ADBB9D63(2, 201) || uParam0->f_8)
		{
			if (!func_152(&(uParam0->f_5)))
			{
				func_150(&(uParam0->f_5));
				func_95(uParam0, 1051260355);
			}
		}
		if (func_152(&(uParam0->f_5)))
		{
			if (func_149(&(uParam0->f_5)) > 0,33f)
			{
				func_94(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_149(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_152(&(uParam0->f_5)))
		{
			func_150(&(uParam0->f_5));
			func_95(uParam0, 1051260355);
		}
		else if (func_149(&(uParam0->f_5)) > 0,33f)
		{
			func_94(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_94(var uParam0)//Position - 0x3CE3
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_95(var uParam0, float fParam1)//Position - 0x3CF9
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD07D5CD276368D36(uParam0->f_9);
	unk_0x9499D7329FB840A2(fParam1);
	unk_0x271AA5469AF471B3();
}

void func_96(int iParam0)//Position - 0x3D1F
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_97(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x3D33
{
	unk_0x008F3E3CC076EA0E(*uParam0, func_98());
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
	func_150(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_98()//Position - 0x3D9E
{
	if (unk_0x3A711520F83BAE98())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_99(var uParam0)//Position - 0x3DB8
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

void func_100(var uParam0)//Position - 0x3E52
{
	int iVar0;
	
	Local_161.f_1 = system::to_float(uParam0->f_50);
	Local_161.f_2 = system::to_float(uParam0->f_56);
	func_47(11, uParam0->f_56);
	func_47(12, uParam0->f_56);
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

int func_101(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3F01
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_102(sParam2, iParam3, 0);
}

int func_102(char* sParam0, int iParam1, bool bParam2)//Position - 0x3F4F
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
					func_109();
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
		if (func_108(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_107();
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
				func_106();
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
				if (func_105())
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
			if (func_29())
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
			func_104();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_103();
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
		func_109();
	}
	return 0;
}

void func_103()//Position - 0x421D
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

void func_104()//Position - 0x424F
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

int func_105()//Position - 0x42E4
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

void func_106()//Position - 0x437D
{
	if (func_72(14))
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
		Global_14453 = func_91();
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

void func_107()//Position - 0x441F
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

bool func_108(int iParam0, int iParam1)//Position - 0x4477
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

void func_109()//Position - 0x44B2
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

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4509
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

int func_111(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x455F
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (!unk_0x191BE1BC8F26F3C1(*iParam2, 0))
			{
				func_147(uParam1, 320, bParam4);
				unk_0x6D624C6A284D7D07(*iParam2, unk_0x63A6486593EC7EC3(100, 300));
				func_145(uParam1, iParam2, "TAXI_BLIP_PASS", 1);
				func_47(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x191BE1BC8F26F3C1(*iParam2, 0))
			{
				if (!unk_0x88DDBE9908752BF0(*iParam2, 0))
				{
					unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(*iParam2, 0))
			{
				func_117(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!func_153(uParam1->f_2, *iParam2))
				{
					if (unk_0xB8DE76287EDC4957(uParam1->f_4, 0))
					{
						if (unk_0xEBE499597C718EB8(*iParam2, uParam1->f_4, 1))
						{
							*iParam0 = 3;
						}
					}
					if (unk_0xEBE499597C718EB8(*iParam2, uParam1->f_2, 1))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!unk_0x88DDBE9908752BF0(uParam1->f_2, 0))
						{
							if (unk_0x21B6FFFD04C9FF3A(uParam1->f_2, *iParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x08765A6321A42CA1(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (unk_0x21B6FFFD04C9FF3A(uParam1->f_2, *iParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*iParam0 = 3;
									}
									if (unk_0xC931425E2B416A2F(uParam1->f_2, 6))
									{
										if (unk_0x689303135DD1F2F5())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (unk_0x21B6FFFD04C9FF3A(uParam1->f_2, *iParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x08765A6321A42CA1(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (unk_0x21B6FFFD04C9FF3A(uParam1->f_2, *iParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x08765A6321A42CA1(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_115(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				func_115(&uLocal_45, 0, 0);
				*iParam0 = 5;
			}
			break;
		
		case 3:
			func_115(&uLocal_45, 0, 0);
			if (!unk_0x191BE1BC8F26F3C1(*iParam2, 0))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_8))
				{
					unk_0xE30CF11C0EE14316(&(uParam1->f_8));
				}
				unk_0x771A86309E0CA47B(*iParam2, true);
				unk_0x6931076730A4AC5D(&iVar0);
				unk_0xF21E6EBE8EFDCC28(0, 5000);
				unk_0xD68E88A8E0BE8697(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0xD40A6DFCC31D221A(0, 0);
				unk_0x1B16DD5C115FE009(iVar0);
				unk_0xAB30B1CF01A198C1(*iParam2, iVar0);
				unk_0xFAA3EF7FF92E1F9E(&iVar0);
				unk_0xE9B3D12A64CC7C1A(*iParam2, true);
				func_222(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				unk_0x84CDD933AFA470D2();
			}
			else
			{
				*iParam0 = 4;
				unk_0x84CDD933AFA470D2();
			}
			if (unk_0xA6DECE14FC9A8C51(uParam1->f_8))
			{
				unk_0xE30CF11C0EE14316(&(uParam1->f_8));
			}
			func_112(*iParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0x58786AA7A9E510C0(uParam3->f_6))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam3->f_5))
				{
					unk_0xE30CF11C0EE14316(&(uParam3->f_5));
				}
				func_170(uParam1);
				func_47(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x191BE1BC8F26F3C1(*iParam2, 0))
			{
				unk_0x486F346ADFE56674(iParam2);
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_8))
				{
					unk_0xE30CF11C0EE14316(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0x1563F8C21480594F(unk_0x98EC0789D9F0703B(), 2, 0);
				unk_0xCFB8D84F848CAA39(unk_0x98EC0789D9F0703B(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_112(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x4894
{
	vector3 vVar0;
	
	uParam1->f_1 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		uParam1->f_2 = { unk_0xB3328BA8976B416C(iParam0, 1) };
		unk_0x6D624C6A284D7D07(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x63A6486593EC7EC3(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x1478170665DA3CEC(iParam0, 1067030938, 1069547520) };
	}
	unk_0x872F1C1F8587CCC7(&(uParam1->f_1), 3);
	unk_0x872F1C1F8587CCC7(&(uParam1->f_1), 4);
	vVar0 = { unk_0xCC1609D1BF2658E4(uParam1->f_2, 1,2f, 1,5f) };
	uParam1->f_6 = unk_0x06583789B8C15A6C(joaat("pickup_money_variable"), vVar0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0xA6DECE14FC9A8C51(uParam1->f_5))
		{
			uParam1->f_5 = func_113(uParam1->f_6);
			unk_0x62BD54E491535B76(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x62BD54E491535B76(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_113(int iParam0)//Position - 0x4970
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_114(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

float func_114(bool bParam0, float fParam1, float fParam2)//Position - 0x49A8
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_115(var uParam0, int iParam1, int iParam2)//Position - 0x49BF
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
		if (func_116(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_116(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_116(char* sParam0)//Position - 0x4A9C
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_117(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4AAF
{
	func_118(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x4AC9
{
	func_119(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_119(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4AE6
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_115(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_120(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_120(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4B1E
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
	if (func_116(iVar0))
	{
		func_144();
	}
	if (func_143(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_138(uParam0, bParam5, bParam7, 0))
			{
				func_135(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_125(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_116(iVar0))
							{
								func_124(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_123(1);
								}
							}
						}
					}
				}
			}
			else if (func_125(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_116(iVar0))
						{
							func_124(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_123(1);
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
				if (func_116(sParam3))
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
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_115(uParam0, iVar0, 1);
				}
			}
			if (!func_138(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_122(uParam0))
				{
					func_121(uParam0);
				}
			}
		}
	}
	else
	{
		func_115(uParam0, iVar0, 0);
	}
}

void func_121(var uParam0)//Position - 0x4E8B
{
	if (func_143(unk_0xFC1458A37D98B502()))
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

int func_122(var uParam0)//Position - 0x4EF4
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

int func_123(bool bParam0)//Position - 0x4F1F
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

void func_124(char* sParam0, int iParam1)//Position - 0x4FC9
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_125(char* sParam0)//Position - 0x4FE0
{
	if (!func_126(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_116(sParam0)) || func_116("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_123(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_123(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_123(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5079
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
	if (func_134())
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
	if ((func_133() || func_132(Global_4456448.f_143970)) || func_131())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_130(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_130(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_130(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_127(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0)//Position - 0x52A4
{
	if (iParam0 != func_129())
	{
		if (func_128(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_128(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_128(int iParam0, bool bParam1, bool bParam2)//Position - 0x530A
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

int func_129()//Position - 0x5354
{
	return -1;
}

int func_130(int iParam0, int iParam1)//Position - 0x535D
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

var func_131()//Position - 0x53E2
{
	return Global_2447174.f_16;
}

bool func_132(int iParam0)//Position - 0x53F0
{
	return iParam0 == 51;
}

var func_133()//Position - 0x53FD
{
	return Global_2447174.f_15;
}

bool func_134()//Position - 0x540B
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_135(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x5420
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
		func_115(uParam0, 0, 0);
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
					if (!func_136())
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

bool func_136()//Position - 0x5530
{
	return func_137(unk_0x9EB17624F44A8DA4());
}

int func_137(int iParam0)//Position - 0x5540
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_138(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x555F
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
					if (func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_122(uParam0))
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
						if (!func_142(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_142(bParam1, bParam2, bParam3))
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
					if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_141(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_142(bParam1, bParam2, bParam3))
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
						if (func_140(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_139(bParam1, bParam2, bParam3))
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
					else if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_122(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_126(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_144();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_139(bool bParam0, bool bParam1, bool bParam2)//Position - 0x58CB
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_140(bool bParam0, bool bParam1, bool bParam2)//Position - 0x591D
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_141(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5966
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x59C5
{
	if (!func_126(bParam0, bParam1, bParam2))
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

int func_143(int iParam0)//Position - 0x5A1B
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

void func_144()//Position - 0x5A76
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_145(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x5A86
{
	if (bParam3)
	{
		func_400(uParam0);
	}
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_8))
	{
		uParam0->f_8 = func_146(*uParam1, 0, 0);
	}
	if (!unk_0x8C1C362CA8299475(sParam2))
	{
		unk_0x62BD54E491535B76(uParam0->f_8, sParam2);
	}
}

int func_146(int iParam0, bool bParam1, bool bParam2)//Position - 0x5AC6
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_114(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_114(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_114(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

void func_147(var uParam0, int iParam1, bool bParam2)//Position - 0x5B6A
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		unk_0x771A86309E0CA47B(uParam0->f_3, false);
		unk_0x2B0DDE3D071497AD(uParam0->f_3);
		unk_0xE17958D3FD0F9EE9(uParam0->f_3, 3, false);
		unk_0xAE6EBBBBD8B9FB30(uParam0->f_3, 17, true);
		unk_0xB8E08BD5B184DF4E(uParam0->f_3);
		if ((func_320(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_148(uParam0->f_29)) && !bParam2)
		{
			func_154(uParam0);
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

int func_148(vector3 vParam0)//Position - 0x5C5E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_149(int iParam0)//Position - 0x5C88
{
	if (func_152(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_150(int iParam0)//Position - 0x5CC7
{
	func_151(iParam0, 0f);
}

void func_151(int iParam0, float fParam1)//Position - 0x5CD6
{
	iParam0->f_1 = (func_12(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_152(var uParam0)//Position - 0x5D04
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

int func_153(int iParam0, int iParam1)//Position - 0x5D14
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (!unk_0x21B6FFFD04C9FF3A(iParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(iParam1, 1), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_154(var uParam0)//Position - 0x5D5D
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

int func_155(var uParam0, bool bParam1)//Position - 0x5F42
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_164(uParam0) && func_160(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_159(uParam0, 2097152))
				{
					func_156(uParam0);
				}
			}
			else
			{
				func_156(uParam0);
			}
		}
		else if (!func_164(uParam0))
		{
			if (bParam1)
			{
				if (func_159(uParam0, 2097152))
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

void func_156(var uParam0)//Position - 0x5FDF
{
	vector3 vVar0;
	
	if (func_148(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_157(uParam0, vVar0);
}

void func_157(var uParam0, vector3 vParam1)//Position - 0x6015
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && unk_0xAAA8D20859E2D36D(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x3F90543934DCD7E6(uParam0->f_4, -1,78774f, -1,62399f, -0,6206f) };
			vVar1 = { unk_0x3F90543934DCD7E6(uParam0->f_4, 1,78498f, -1,24105f, -0,6422f) };
			if (func_158(uParam0->f_3, uParam0->f_4) == 0)
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

int func_158(int iParam0, int iParam1)//Position - 0x6136
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

bool func_159(var uParam0, int iParam1)//Position - 0x61A8
{
	if (iParam1 != 1073741824)
	{
		return (func_213(uParam0->f_81, iParam1) && !func_216());
	}
	return func_216();
}

int func_160(var uParam0, bool bParam1, float fParam2)//Position - 0x61D5
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_31())
			{
				func_163();
				return 1;
			}
			else if (func_161(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_161(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6256
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
	func_162(iParam0);
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

void func_162(int iParam0)//Position - 0x63E5
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

void func_163()//Position - 0x6411
{
	if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	}
}

int func_164(var uParam0)//Position - 0x642C
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

void func_165(var uParam0)//Position - 0x6461
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = system::ceil((IntToFloat(uParam0->f_50) * 0,4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = system::ceil((IntToFloat(uParam0->f_50) * 0,15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_213(uParam0->f_55, 1))
	{
		func_214(&(uParam0->f_55), 1);
	}
}

void func_166(var uParam0)//Position - 0x64D5
{
	func_168();
	unk_0x84CDD933AFA470D2();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_222(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_222(uParam0, 103, 1, 0, 0);
		}
		func_167(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_222(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_222(uParam0, 102, 1, 0, 0);
	}
	func_290(uParam0, 16, 4f, 0);
}

void func_167(int iParam0)//Position - 0x6548
{
	Global_103265.f_221 = iParam0;
}

void func_168()//Position - 0x6558
{
	Global_14622 = 0;
	func_169();
}

void func_169()//Position - 0x6568
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

void func_170(var uParam0)//Position - 0x658C
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_171(fVar0);
	iLocal_57[4] = system::ceil(fVar0);
	iLocal_57[5] = system::ceil(fVar0);
	func_47(4, system::ceil(fVar0));
	func_47(5, system::ceil(fVar0));
	uParam0->f_50 = system::ceil((fVar0 * 100f));
}

float func_171(float fParam0)//Position - 0x65DE
{
	return (fParam0 * 0,0006213712f);
}

void func_172(var uParam0, int iParam1)//Position - 0x65EE
{
	if (iParam1 < 5)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_173(var uParam0, int iParam1, bool bParam2)//Position - 0x661C
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

void func_174()//Position - 0x6640
{
	Global_14622 = 0;
	func_109();
}

int func_175(var uParam0, float fParam1, float fParam2)//Position - 0x6650
{
	if ((((unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076()) && !unk_0x2D0EF1D268F33F25()) && !unk_0x3E9CABD07B829173()) && !uParam0->f_142)
	{
		if (func_196(uParam0))
		{
			func_195(uParam0, &(uParam0->f_43));
			func_193(uParam0);
			func_188(uParam0);
			func_182(uParam0, fParam2, 1117782016);
			func_181(uParam0);
			func_179(uParam0);
			if ((system::round(func_396(uParam0, 7)) % 5) == 0 && !iLocal_85)
			{
				iLocal_85 = 1;
			}
			if ((system::round(func_396(uParam0, 7)) % 5) == 2 && iLocal_85)
			{
				iLocal_85 = 0;
			}
			return func_176(uParam0, fParam1);
		}
	}
	return 0;
}

int func_176(var uParam0, float fParam1)//Position - 0x6704
{
	if (func_58(uParam0) == 2)
	{
		if (unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_178(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_177(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
		{
			return func_160(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x0C88267282FD588F(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1) && func_177(1, 1, 1)) && unk_0x5E0BEAAD15B888F3(uParam0->f_4))
	{
		return func_160(uParam0, 1, fParam1);
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2)//Position - 0x67DB
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

float func_178(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x68C0
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

void func_179(var uParam0)//Position - 0x68FA
{
	float fVar0;
	
	if ((func_164(uParam0) && func_213(uParam0->f_81, 67108864)) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
	{
		if ((unk_0x53C562FD2B9E3AB0() - iLocal_89) >= 10000)
		{
			fVar0 = func_180(uParam0->f_17, 1);
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
		if (iLocal_88 >= 2 && !func_216())
		{
			func_222(uParam0, 136, 1, 0, 1);
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
			if (!func_164(uParam0))
			{
			}
			if (!func_213(uParam0->f_81, 67108864))
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

float func_180(vector3 vParam0, bool bParam1)//Position - 0x69D0
{
	return func_320(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), vParam0, bParam1);
}

void func_181(var uParam0)//Position - 0x69EA
{
	if (unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && !func_213(uParam0->f_44, 2))
	{
		func_214(&(uParam0->f_44), 2);
	}
	else if (!unk_0x5D91591CADE6DF0F(unk_0x98EC0789D9F0703B()) && func_213(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_47(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_222(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + system::ceil(5f));
	}
}

void func_182(var uParam0, float fParam1, float fParam2)//Position - 0x6A73
{
	if (func_164(uParam0) && func_213(uParam0->f_44, 4))
	{
		if ((unk_0x9EC5112BB1C4047A(uParam0->f_4) || unk_0x90D5DFB054818BA7(uParam0->f_4) < 3f) && func_187(uParam0))
		{
			if (!func_186(uParam0, 2))
			{
				func_184(uParam0, 2);
			}
			else if (func_164(uParam0))
			{
				if (func_396(uParam0, 2) > fParam1 && !func_186(uParam0, 14))
				{
					if (func_33())
					{
						func_222(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_222(uParam0, 48, 1, 0, 0);
					}
					func_290(uParam0, 2, 0, 0);
					if (func_186(uParam0, 10))
					{
						func_290(uParam0, 10, 0, 0);
					}
				}
				if (!func_186(uParam0, 3))
				{
					func_290(uParam0, 3, 0, 0);
				}
				else if (func_396(uParam0, 3) >= fParam2)
				{
					func_183(uParam0, 3, 0);
					func_321(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_186(uParam0, 2))
			{
				func_183(uParam0, 2, 0);
			}
			if (func_186(uParam0, 3))
			{
				func_183(uParam0, 3, 0);
			}
		}
	}
}

void func_183(var uParam0, int iParam1, bool bParam2)//Position - 0x6B8E
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
			func_94(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_94(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_184(var uParam0, int iParam1)//Position - 0x6BD7
{
	func_185(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_185(int iParam0)//Position - 0x6BEB
{
	if (!func_152(iParam0))
	{
		func_150(iParam0);
	}
}

bool func_186(var uParam0, int iParam1)//Position - 0x6C03
{
	return func_152(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_187(var uParam0)//Position - 0x6C17
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

void func_188(var uParam0)//Position - 0x6C41
{
	if (!func_213(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					if (func_396(uParam0, 9) > 1f)
					{
						func_192(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
						if (uParam0->f_410 != 22)
						{
							func_222(uParam0, 50, 1, 1, 0);
						}
						func_290(uParam0, 9, 0, 0);
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
				if (!func_216() && func_396(uParam0, 9) > 4f)
				{
					func_222(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_191("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_222(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xC308146F18B10A6F(unk_0x98EC0789D9F0703B(), func_190(uParam0)))
				{
					func_192(uParam0, unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()));
					func_47(6, 0);
				}
				if (!func_189(uParam0))
				{
					if (!unk_0x42111BD51D233AAB())
					{
						if (func_396(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_222(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) < 1)
				{
					if (func_191("TAXI_OBJ_POL", 0, 0))
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
				if (!func_216())
				{
					if (uParam0->f_410 != 22)
					{
						func_222(uParam0, 53, 1, 0, 1);
					}
					func_47(7, func_190(uParam0));
					func_192(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_216())
				{
					func_183(uParam0, 9, 0);
					func_290(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_189(var uParam0)//Position - 0x6E65
{
	return uParam0->f_110;
}

int func_190(var uParam0)//Position - 0x6E71
{
	return uParam0->f_106;
}

bool func_191(char* sParam0, int iParam1, char* sParam2)//Position - 0x6E7D
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

void func_192(var uParam0, int iParam1)//Position - 0x6E9B
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_193(var uParam0)//Position - 0x6EB2
{
	if (func_212(uParam0))
	{
		func_194(uParam0);
	}
}

void func_194(var uParam0)//Position - 0x6EC9
{
	if (unk_0xBCFF5E6898C5516A() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x832CFDD4BD296987();
			func_183(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_396(uParam0, 20) > 3f)
				{
					func_222(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_213(uParam0->f_81, 262144) || !func_213(uParam0->f_81, 1048576))
				{
					if (func_396(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_222(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_213(uParam0->f_82, 67108864))
				{
					if (func_396(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_222(uParam0, 85, 1, 0, 0);
						func_183(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_396(uParam0, 20) > 8f)
				{
					func_222(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_213(uParam0->f_81, 262144) || func_213(uParam0->f_82, 67108864))
			{
				if (!func_186(uParam0, 22))
				{
					func_184(uParam0, 22);
				}
			}
			if (func_186(uParam0, 22) && func_396(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_213(uParam0->f_81, 1048576))
					{
						func_222(uParam0, 84, 1, 0, 0);
						func_183(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_213(uParam0->f_82, 134217728))
					{
						func_222(uParam0, 85, 1, 0, 0);
						func_183(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_195(var uParam0, var uParam1)//Position - 0x7144
{
	unk_0xBF9EAA044015B0A2(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_196(var uParam0)//Position - 0x7165
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (!unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 1) && !unk_0x0F299BBD0DC14B18(uParam0->f_3))
			{
				func_321(uParam0, "Passenger left car.", 9);
			}
			else if (func_208(uParam0))
			{
				if (func_191("TAXI_OBJ_PICKUP", 0, 0))
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
				func_197(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_197(var uParam0, bool bParam1)//Position - 0x71F4
{
	func_207(uParam0, uParam0->f_3);
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_186(uParam0, 14))
			{
				if (func_216())
				{
					func_206(1);
				}
				func_205(uParam0, 11, 1);
				func_200(uParam0, 1);
				func_290(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_164(uParam0))
				{
					if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
					{
					}
					if (unk_0x88DDBE9908752BF0(uParam0->f_2, 0))
					{
						if (func_396(uParam0, 15) > 5f)
						{
							func_290(uParam0, 15, 0f, 1);
						}
					}
					if (func_396(uParam0, 14) > 20f)
					{
						func_321(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_396(uParam0, 14) > 20f)
				{
					if (func_198(uParam0->f_4, 1) > 40f)
					{
						func_321(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_321(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_198(int iParam0, bool bParam1)//Position - 0x72FF
{
	return func_199(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

float func_199(int iParam0, int iParam1, bool bParam2)//Position - 0x7317
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

void func_200(var uParam0, bool bParam1)//Position - 0x7375
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
				unk_0xAAAC88CC20771601(uParam0->f_8, false);
				func_204(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xA6DECE14FC9A8C51(uParam0->f_9))
			{
				unk_0xF20857E4CB32A2B7(uParam0->f_9, 0);
				unk_0xAAAC88CC20771601(uParam0->f_9, false);
				unk_0x84CDD933AFA470D2();
				if (func_164(uParam0))
				{
					func_222(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_204(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_201(uParam0, 0, 0);
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

void func_201(var uParam0, bool bParam1, bool bParam2)//Position - 0x7493
{
	if (bParam1)
	{
		func_400(uParam0);
	}
	if (!unk_0xA6DECE14FC9A8C51(uParam0->f_10))
	{
		uParam0->f_10 = func_146(uParam0->f_4, 1, 0);
		unk_0x62BD54E491535B76(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0xAAAC88CC20771601(uParam0->f_10, true);
		func_202(uParam0);
		if (bParam2)
		{
			unk_0x84CDD933AFA470D2();
			func_222(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_202(var uParam0)//Position - 0x74EE
{
	func_290(uParam0, 14, 0, 0);
	func_203();
}

void func_203()//Position - 0x7504
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_204(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x752D
{
	if (!func_213(*uParam1, iParam2))
	{
		unk_0x84CDD933AFA470D2();
		func_222(uParam0, iParam3, 1, 0, 0);
		func_214(uParam1, iParam2);
	}
}

void func_205(var uParam0, int iParam1, bool bParam2)//Position - 0x7559
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_206(int iParam0)//Position - 0x756D
{
	Global_16767 = iParam0;
}

void func_207(var uParam0, int iParam1)//Position - 0x757A
{
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (unk_0x43213E9B2334AA57(unk_0x9EB17624F44A8DA4()))
			{
				if ((unk_0x299B8D0F9C239719(iParam1, joaat("weapon_stungun"), 0) || unk_0x299B8D0F9C239719(iParam1, 0, 2)) || unk_0x299B8D0F9C239719(iParam1, 0, 1))
				{
					func_321(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
			}
		}
	}
}

int func_208(var uParam0)//Position - 0x75DF
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_186(uParam0, 14))
			{
				func_209(uParam0);
			}
			func_200(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_209(var uParam0)//Position - 0x7621
{
	func_183(uParam0, 14, 0);
	func_183(uParam0, 15, 0);
	func_211();
	if (func_210())
	{
		func_206(0);
	}
}

int func_210()//Position - 0x764B
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0x7662
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x7CC4363AEEF7EF34(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_212(var uParam0)//Position - 0x768B
{
	return uParam0->f_120;
}

bool func_213(var uParam0, int iParam1)//Position - 0x7697
{
	return (uParam0 && iParam1) != 0;
}

void func_214(var uParam0, int iParam1)//Position - 0x76A6
{
	func_215(uParam0, iParam1);
}

void func_215(var uParam0, int iParam1)//Position - 0x76B6
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_216()//Position - 0x76C7
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0)//Position - 0x76E9
{
	return uParam0->f_416;
}

void func_218()//Position - 0x76F6
{
	func_214(&(Local_230.f_55), 2);
	func_214(&(Local_230.f_55), 8);
	func_214(&(Local_230.f_55), 32);
	func_214(&(Local_230.f_55), 128);
	func_214(&(Local_230.f_55), 256);
	func_214(&(Local_230.f_55), 512);
	func_214(&(Local_230.f_55), 1024);
	func_214(&(Local_230.f_55), 2048);
	func_214(&(Local_230.f_55), 1073741824);
	func_214(&(Local_230.f_55), 8192);
	func_214(&(Local_230.f_55), 16384);
	func_214(&(Local_230.f_55), 32768);
	func_214(&(Local_230.f_55), 131072);
	func_214(&(Local_230.f_55), 262144);
	func_214(&(Local_230.f_55), 524288);
	func_214(&(Local_230.f_55), 1048576);
	func_214(&(Local_230.f_55), 4194304);
	func_214(&(Local_230.f_100), 64);
	func_214(&(Local_230.f_100), 2048);
	func_214(&(Local_230.f_100), 128);
	func_214(&(Local_230.f_100), 32);
	func_214(&(Local_230.f_100), 256);
	func_214(&(Local_230.f_100), 8);
	func_214(&(Local_230.f_100), 1);
	func_214(&(Local_230.f_100), 8192);
	func_214(&(Local_230.f_100), 2);
	func_214(&(Local_230.f_100), 32768);
	func_214(&uLocal_312, 2);
	func_184(&Local_230, 7);
}

void func_219(var uParam0)//Position - 0x784E
{
	func_220(uParam0, 1000);
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x957CEE967C939968(uParam0->f_3);
		unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
	}
	func_174();
	func_209(uParam0);
}

void func_220(var uParam0, int iParam1)//Position - 0x789A
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

void func_221(var uParam0)//Position - 0x78D4
{
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	func_220(uParam0, 1000);
}

void func_222(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x78F7
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_290(uParam0, 16, 4f, 0);
		if (func_223(uParam0))
		{
			func_45();
		}
	}
	func_255(uParam0, iParam2, bParam3);
}

int func_223(var uParam0)//Position - 0x792C
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_216())
	{
		Var1 = { func_225() };
		if (!unk_0xAB019B170BF1309C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_224(&vVar0);
			if (unk_0x74C475EB8E73D398(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(char* sParam0)//Position - 0x7992
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_225()//Position - 0x79A2
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_226(var uParam0)//Position - 0x79C6
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

int func_227(var uParam0, bool bParam1, float fParam2)//Position - 0x7A19
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
			func_197(uParam0, 1);
			if (func_31())
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
			func_253(uParam0);
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
			if (func_186(uParam0, 14))
			{
				func_209(uParam0);
				func_200(uParam0, 0);
			}
			if (func_186(uParam0, 9))
			{
				func_183(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_252(uParam0, uParam0->f_3) > 300f)
				{
					func_321(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 || ((func_199(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 20f && func_178(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_178(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_249(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_248(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_247(uParam0->f_4, uParam0->f_3);
								iVar0 = func_246(uParam0, &iVar1);
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
							if (!func_187(uParam0))
							{
								unk_0xB8E08BD5B184DF4E(uParam0->f_3);
							}
							else if (((unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 1 && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 0) && unk_0x78F50AA8F955BEFC(uParam0->f_3, 242628503) != 7) && func_252(uParam0, uParam0->f_3) > 8f)
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
							if (func_199(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_245(uParam0, 1))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_321(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_244(uParam0->f_4))
								{
									unk_0x957CEE967C939968(uParam0->f_3);
									func_321(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_242(uParam0);
						if (func_252(uParam0, uParam0->f_3) < fVar4 || func_31())
						{
							if (unk_0xA8D0477084E86A92(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_229(uParam0))
								{
									func_228(uParam0);
									iLocal_81 = unk_0x53C562FD2B9E3AB0();
									unk_0xAE01EF4BC84AFE7C(uParam0->f_3, 26, true);
									func_183(uParam0, 5, 0);
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

void func_228(var uParam0)//Position - 0x7F28
{
	if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
	{
		unk_0xAAAC88CC20771601(uParam0->f_8, false);
		unk_0xE30CF11C0EE14316(&(uParam0->f_8));
	}
}

int func_229(var uParam0)//Position - 0x7F4C
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_241("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0) && !unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		func_240();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_238(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_160(uParam0, 0, 1084227584) && func_177(1, 1, 1))
			{
				if (func_245(uParam0, 1))
				{
					iLocal_80 = unk_0x53C562FD2B9E3AB0();
					system::settimera(0);
					iLocal_78 = 1;
				}
				else
				{
					func_321(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (system::timera() > 500)
			{
				uParam0->f_7 = func_247(uParam0->f_4, uParam0->f_3);
				iVar3 = func_246(uParam0, &iVar4);
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
			iVar6 = func_237(&(uParam0->f_409), unk_0x3F90543934DCD7E6(uParam0->f_4, 0f, 2,2f, 0,275f), unk_0x3F90543934DCD7E6(uParam0->f_4, vVar0), 1);
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
				func_236(0, 0, 1);
				unk_0x60225D4F755DFDB1(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 3f, 0);
				unk_0xBBF9037650162761(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 25f, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_168();
				func_255(uParam0, 0, 0);
				vVar7 = { unk_0x3F90543934DCD7E6(uParam0->f_4, vVar2) };
				unk_0xBD8D47FDC6902B2D(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(uParam0->f_3, func_234(uParam0));
				func_233(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_241("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					unk_0xDA5162F6425C44AA(uParam0->f_4, func_232(uParam0->f_7), 1);
				}
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0x02934BABFD4CD384(*uParam0, 0);
				unk_0x02934BABFD4CD384(uParam0->f_1, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x59C3AC31C7544A28(800);
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				func_168();
				func_255(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
			{
				func_230(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x02934BABFD4CD384(*uParam0, 0);
			unk_0x02934BABFD4CD384(uParam0->f_1, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			func_230(1, 1, 1);
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

void func_230(bool bParam0, bool bParam1, int iParam2)//Position - 0x845A
{
	if (bParam0)
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_21(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
	}
	func_231(23, 0);
}

void func_231(int iParam0, bool bParam1)//Position - 0x8495
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

int func_232(int iParam0)//Position - 0x84B7
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

void func_233(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x84EF
{
	if (!unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		*uParam0 = unk_0x5AC38B4D80D4E352(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_234(var uParam0)//Position - 0x851A
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
	fVar0 = func_235(unk_0xB3328BA8976B416C(uParam0->f_3, 1), vVar1);
	return fVar0;
}

float func_235(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x8583
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_236(int iParam0, int iParam1, int iParam2)//Position - 0x859D
{
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, iParam0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
	}
	unk_0xAE3DF717857FE7CA(iParam1);
	func_40(0);
	func_21(1, 1, iParam2, 0);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(false);
	func_231(23, 1);
}

int func_237(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x85F3
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

int func_238(int iParam0)//Position - 0x866D
{
	if (func_239() && unk_0x53C562FD2B9E3AB0() >= iParam0 + 1000)
	{
		unk_0xAE83ED4C9081AE6F(500);
		while (!unk_0x3E9CABD07B829173())
		{
			system::wait(0);
		}
		func_40(0);
		func_174();
		return 1;
	}
	return 0;
}

int func_239()//Position - 0x86B0
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

void func_240()//Position - 0x86E2
{
	if (func_33())
	{
		unk_0xB78F9271050618A3("appInternet");
	}
	if (func_32())
	{
		unk_0xB78F9271050618A3("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

void func_241(char* sParam0, int iParam1, int iParam2)//Position - 0x8715
{
	if (unk_0x53C562FD2B9E3AB0() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x53C562FD2B9E3AB0();
}

void func_242(var uParam0)//Position - 0x8734
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
		{
			if (func_198(uParam0->f_3, 1) > 30f || func_243(uParam0))
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
					func_321(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_243(var uParam0)//Position - 0x8805
{
	if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 3f && func_396(uParam0, 5) > 15f) || unk_0xF69AD934E7664A7C(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x883F
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

int func_245(var uParam0, bool bParam1)//Position - 0x88FB
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

int func_246(var uParam0, var uParam1)//Position - 0x89B5
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

int func_247(int iParam0, int iParam1)//Position - 0x8A2A
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

int func_248(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x8AE2
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (!unk_0xEC211A86AB3726B6(uParam0->f_3) && func_198(uParam0->f_3, 1) < fParam2)
		{
			if (!func_186(uParam0, 5))
			{
				func_290(uParam0, 5, 0, 0);
			}
		}
		else if (func_186(uParam0, 5))
		{
			func_183(uParam0, 5, 0);
		}
		if (((func_396(uParam0, 5) > IntToFloat(iParam1) && unk_0x90D5DFB054818BA7(uParam0->f_4) < fParam4) && !unk_0xEC211A86AB3726B6(uParam0->f_3)) || func_198(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0, float fParam1)//Position - 0x8B80
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
			if ((func_199(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0xE97272C977DEADD3((vVar0.z - vVar1.z)) < 5f)
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
				if (!func_213(uParam0->f_44, 128))
				{
					func_222(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_250(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_250(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x8E5C
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_251(iParam3), 0);
}

int func_251(int iParam0)//Position - 0x8E75
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

float func_252(var uParam0, int iParam1)//Position - 0x906A
{
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (func_187(uParam0))
		{
			return func_199(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_253(var uParam0)//Position - 0x9095
{
	func_207(uParam0, uParam0->f_3);
	if (func_187(uParam0))
	{
		if (func_186(uParam0, 14))
		{
			func_209(uParam0);
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_10))
			{
				unk_0xE30CF11C0EE14316(&(uParam0->f_10));
			}
		}
	}
	if (!func_186(uParam0, 9))
	{
		if (unk_0xA6DECE14FC9A8C51(uParam0->f_8))
		{
			unk_0xF20857E4CB32A2B7(uParam0->f_8, 0);
			unk_0xAAAC88CC20771601(uParam0->f_8, false);
		}
		func_290(uParam0, 9, 0, 0);
		func_254("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_254(char* sParam0, int iParam1, int iParam2)//Position - 0x9113
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_255(var uParam0, int iParam1, bool bParam2)//Position - 0x912C
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_45();
		func_290(uParam0, 16, 4f, 0);
		unk_0x84CDD933AFA470D2();
	}
}

int func_256(var uParam0, int iParam1)//Position - 0x9151
{
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		return 0;
	}
	func_260(12);
	if (func_213(uParam0->f_44, 8))
	{
		if (!func_213(uParam0->f_44, 128))
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()) && !func_213(uParam0->f_44, 256))
			{
				func_214(&(uParam0->f_44), 256);
			}
			if (func_213(uParam0->f_44, 256) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_222(uParam0, 135, 1, 0, 1);
				func_214(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_259(uParam0, iParam1))
	{
		if (func_198(uParam0->f_3, 1) < 35f)
		{
			if (!func_213(uParam0->f_44, 8))
			{
				unk_0xAC838A977FB6E6BC(uParam0->f_3, unk_0xFC1458A37D98B502(), 0);
				func_222(uParam0, 133, 1, 0, 1);
				func_214(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0x3AB6A1A9084FB0A4(uParam0->f_3) || unk_0xA6FA9E5D08F067AD(uParam0->f_3)) || func_198(uParam0->f_3, 1) > 400f)
		{
			func_321(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xDFD115BB10FE46A9(uParam0->f_2, 0);
		unk_0x438D30A195B65156(uParam0->f_4, true);
		if (unk_0x317536BCEA8FA6B0(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x695BF4E9032C8B89(uParam0->f_4);
			func_257(uParam0);
			func_47(2, 0);
			bLocal_86 = true;
			func_185(&iLocal_82);
			return 1;
		}
		else
		{
			func_321(uParam0, "No Taxi", 21);
			func_124("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_257(var uParam0)//Position - 0x92CA
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (func_258())
		{
		}
	}
}

int func_258()//Position - 0x92E6
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1)//Position - 0x9307
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
				bVar2 = func_244(iVar0);
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
					if (!func_213(uParam0->f_44, 64))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_124("TX_VIP_DMGD", -1);
							if (func_116("TX_VIP_DMGD"))
							{
								func_214(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_213(uParam0->f_44, 32))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_124("TX_VIP_CAR", -1);
							if (func_116("TX_VIP_CAR"))
							{
								func_214(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_213(uParam0->f_44, 16))
					{
						if (unk_0x9F0887BCBFCF3C2F(2))
						{
							func_124("TX_VIP_SMALL", -1);
							if (func_116("TX_VIP_SMALL"))
							{
								func_214(&(uParam0->f_44), 16);
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

void func_260(int iParam0)//Position - 0x991C
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

void func_261(var uParam0)//Position - 0x9975
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_262()//Position - 0x999A
{
	Local_165 = 0;
	func_279(40269/*func_281*/, 40244/*func_280*/, 1);
	func_279(40005/*func_277*/, 39982/*func_276*/, 1);
	func_279(39920/*func_275*/, 39895/*func_274*/, 1);
	func_279(39823/*func_273*/, 39799/*func_272*/, 1);
	func_279(39689/*func_271*/, 39668/*func_270*/, 1);
	func_279(39615/*func_268*/, 39590/*func_267*/, 1);
	func_279(39448/*func_264*/, 39425/*func_263*/, 1);
}

int func_263(var uParam0, var uParam1)//Position - 0x9A01
{
	uParam1 = uParam1;
	func_321(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_264(var uParam0)//Position - 0x9A18
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_266(uParam0->f_4))
		{
			func_265(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0, int iParam1)//Position - 0x9A42
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_266(int iParam0)//Position - 0x9A55
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

int func_267(var uParam0, var uParam1)//Position - 0x9AA6
{
	uParam1 = uParam1;
	func_321(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_268(var uParam0)//Position - 0x9ABF
{
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		if (func_269(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_269(var uParam0, int iParam1)//Position - 0x9AE5
{
	return (uParam0 && iParam1) != 0;
}

int func_270(var uParam0, var uParam1)//Position - 0x9AF4
{
	uParam1 = uParam1;
	func_265(uParam0, 11);
	return 1;
}

int func_271(var uParam0)//Position - 0x9B09
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (unk_0x0BA31FF7931F3DD3(uParam0->f_4) && !unk_0x5E0BEAAD15B888F3(uParam0->f_4))
		{
			if (!func_186(uParam0, 25))
			{
				func_290(uParam0, 25, 0, 0);
			}
			else if (func_396(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_186(uParam0, 25))
		{
			func_183(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_272(var uParam0, var uParam1)//Position - 0x9B77
{
	uParam1 = uParam1;
	func_321(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_273(var uParam0)//Position - 0x9B8F
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

int func_274(var uParam0, var uParam1)//Position - 0x9BD7
{
	uParam1 = uParam1;
	func_321(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_275(var uParam0)//Position - 0x9BF0
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_4, 0))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (unk_0x9EC5112BB1C4047A(uParam0->f_4))
			{
				if (func_269(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_276(var uParam0, var uParam1)//Position - 0x9C2E
{
	uParam1 = uParam1;
	func_321(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_277(var uParam0)//Position - 0x9C45
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
	{
		if (func_278(uParam0->f_4))
		{
			func_265(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_278(int iParam0)//Position - 0x9C6F
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

void func_279(int iParam0, int iParam1, bool bParam2)//Position - 0x9CCA
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_215(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_215(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_280(var uParam0, var uParam1)//Position - 0x9D34
{
	uParam1 = uParam1;
	func_321(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_281(var uParam0)//Position - 0x9D4D
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

void func_282()//Position - 0x9D8D
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

int func_283()//Position - 0x9F65
{
	if (!unk_0x9A0B2ED5055D3F0B(iLocal_259))
	{
		func_241("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("gestures@m@standing@casual"))
	{
		func_241("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x34D11AB5BA7922C2(iLocal_322))
	{
		return 0;
	}
	if (!func_284(&iLocal_263, 1))
	{
		func_241("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

int func_284(int iParam0, bool bParam1)//Position - 0x9FD5
{
	if (!unk_0x9A0B2ED5055D3F0B(func_18()))
	{
		func_241("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x3A801AA34DD821BE("gestures@m@standing@casual"))
		{
			func_241("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@taxi@"))
	{
		func_241("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("oddjobs@towingcome_here"))
	{
		func_241("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x3A801AA34DD821BE("misscommon@response"))
	{
		func_241("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x9F0887BCBFCF3C2F(2))
	{
		func_241("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_285(var uParam0, int iParam1)//Position - 0xA08B
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

int func_286(var uParam0)//Position - 0xA2AA
{
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		uParam0->f_8 = func_287(uParam0->f_3, 0, 0);
		unk_0x7E13A81F45F87FE6(1, 0f);
		unk_0xAAAC88CC20771601(uParam0->f_8, true);
		unk_0x62BD54E491535B76(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x60C06BFD037BB7CF(uParam0->f_3, unk_0xFC1458A37D98B502(), -1, 2048, 4);
	}
	return 1;
}

int func_287(int iParam0, bool bParam1, bool bParam2)//Position - 0xA2F9
{
	return func_146(iParam0, !bParam1, bParam2);
}

int func_288(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xA30C
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0->f_3))
	{
		func_289(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_37(uParam0->f_14, 0);
		unk_0x60225D4F755DFDB1(uParam0->f_14, 2f, 0);
		func_35(uParam0->f_14, 0, fParam6);
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

void func_289(var uParam0, vector3 vParam1)//Position - 0xA461
{
	uParam0->f_51[0] = unk_0x2B13C26E09C949E3(vParam1, 20f, 5f, 0);
}

void func_290(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xA47F
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_151(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_150(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_151(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_150(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_291()//Position - 0xA4F1
{
	unk_0x6FF834D85E2DD4C6(iLocal_259);
	unk_0x6450931B826B49D9("gestures@m@standing@casual");
	func_293(1);
	iLocal_322 = func_292();
}

int func_292()//Position - 0xA513
{
	return unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
}

void func_293(bool bParam0)//Position - 0xA523
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
	if (!func_213(Global_104555.f_19067, 128))
	{
		func_214(&(Global_104555.f_19067), 128);
	}
}

void func_294(var uParam0, var uParam1)//Position - 0xA57C
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

void func_295(var uParam0, char* sParam1, int iParam2)//Position - 0xA5F3
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_296(var uParam0, int iParam1, bool bParam2)//Position - 0xA60B
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
		{
			if (bParam2)
			{
				if (func_396(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_222(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_222(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_290(uParam0, 10, 0f, 1);
				}
			}
			else if (func_396(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_222(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_222(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_396(uParam0, 10) > 30f)
		{
			if (!func_216())
			{
				if (uParam0->f_112)
				{
					func_222(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_222(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_213(uParam0->f_100, 64))
	{
		if (!func_152(&(Local_162[5 /*10*/].f_6)))
		{
			func_185(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_319(uParam0))
			{
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_318(uParam0, 1);
				func_316(5, uParam0);
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 1))
	{
		if (!func_152(&(Local_162[0 /*10*/].f_6)))
		{
			func_185(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_314(uParam0))
			{
				func_318(uParam0, 1);
				func_316(0, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 2))
	{
		if (!func_152(&(Local_162[1 /*10*/].f_6)))
		{
			func_185(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				func_318(uParam0, 1);
				func_316(1, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 2048))
	{
		if (!func_152(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xDE523AF6F7B269AB(uParam0->f_4);
				func_185(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_149(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_312(uParam0))
			{
				func_318(uParam0, 1);
				func_316(8, uParam0);
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 128))
	{
		if (!func_152(&(Local_162[6 /*10*/].f_6)))
		{
			func_185(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_311(uParam0))
			{
				func_318(uParam0, 1);
				func_316(6, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 32))
	{
		if (!func_152(&(Local_162[4 /*10*/].f_6)))
		{
			func_185(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_310(uParam0))
			{
				func_318(uParam0, 1);
				func_316(4, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 256))
	{
		if (!func_152(&(Local_162[7 /*10*/].f_6)))
		{
			func_185(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_309(uParam0))
			{
				func_316(7, uParam0);
				func_318(uParam0, 1);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 8))
	{
		if (!func_152(&(Local_162[9 /*10*/].f_6)))
		{
			func_185(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
		}
		else if (func_149(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_308(uParam0))
			{
				func_318(uParam0, 1);
				func_316(9, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 16384))
	{
		if (!func_152(&(Local_162[13 /*10*/].f_6)))
		{
			func_185(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_302(uParam0))
			{
				func_318(uParam0, 1);
				func_316(13, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 32768))
	{
		if (!func_152(&(Local_162[14 /*10*/].f_6)))
		{
			func_185(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_301(uParam0))
			{
				func_318(uParam0, 1);
				func_316(14, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 4096))
	{
		if (!func_152(&(Local_162[11 /*10*/].f_6)))
		{
			func_185(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_300(uParam0))
			{
				func_318(uParam0, 1);
				func_316(11, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 8192))
	{
		if (!func_152(&(Local_162[12 /*10*/].f_6)))
		{
			func_185(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_149(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_299(uParam0))
			{
				func_318(uParam0, 1);
				func_316(12, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_315(uParam0);
			}
		}
	}
	if (func_213(uParam0->f_100, 4))
	{
		if (!func_152(&(Local_162[2 /*10*/].f_6)))
		{
			func_298(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_149(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_297(uParam0))
			{
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_318(uParam0, 1);
				func_316(2, uParam0);
				func_315(uParam0);
			}
		}
	}
}

int func_297(var uParam0)//Position - 0xAE05
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_2))
	{
		if ((!unk_0xDE42C4904F29B0CE(uParam0->f_2) && !func_152(&(Local_162[0 /*10*/].f_3))) && !func_152(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_152(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_185(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_149(&(Local_162[2 /*10*/].f_3)) > 0,9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x90D5DFB054818BA7(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_94(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_94(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_298(int iParam0, float fParam1)//Position - 0xAEE8
{
	if (!func_152(iParam0))
	{
		func_151(iParam0, fParam1);
	}
}

int func_299(var uParam0)//Position - 0xAF02
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_152(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_152(&(Local_162[12 /*10*/].f_3)))
			{
				func_185(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_94(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_300(var uParam0)//Position - 0xAF91
{
	vector3 vVar0;
	
	if ((((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_152(&(Local_162[0 /*10*/].f_3))) && !func_152(&(Local_162[1 /*10*/].f_3))) && !func_152(&(Local_162[5 /*10*/].f_3))) && !func_152(&(Local_162[9 /*10*/].f_3))) && !func_152(&(Local_162[7 /*10*/].f_3))) && !func_152(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 2,5f && !func_152(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_152(&(Local_162[11 /*10*/].f_3)))
			{
				func_185(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_149(&(Local_162[11 /*10*/].f_3)) < 1,5f && (unk_0xE97272C977DEADD3(fLocal_164) - unk_0xE97272C977DEADD3(vVar0.x)) < 0f)
			{
				func_94(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_149(&(Local_162[11 /*10*/].f_3)) >= 1,5f)
			{
				func_94(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_301(var uParam0)//Position - 0xB0C1
{
	if (((((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_152(&(Local_162[0 /*10*/].f_3))) && !func_152(&(Local_162[8 /*10*/].f_3))) && !func_152(&(Local_162[5 /*10*/].f_3))) && !func_152(&(Local_162[9 /*10*/].f_3))) && !func_152(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_152(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_5))
			{
				if ((unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f && func_199(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x191BE1BC8F26F3C1(uParam0->f_5, 0) && !unk_0x8EE3A848975DDF21(uParam0->f_5, -1, 0)))
				{
					func_185(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_149(&(Local_162[14 /*10*/].f_3)) < 1,5f && func_199(uParam0->f_5, uParam0->f_4, 1) > 4,5f) && !unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_149(&(Local_162[14 /*10*/].f_3)) >= 1,5f)
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xC545C64D901C635F(uParam0->f_5))
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_302(var uParam0)//Position - 0xB246
{
	if (((unk_0xB8DE76287EDC4957(uParam0->f_4, 0) && !func_152(&(Local_162[9 /*10*/].f_3))) && !func_152(&(Local_162[7 /*10*/].f_3))) && !func_152(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_303(uParam0->f_4) && unk_0x90D5DFB054818BA7(uParam0->f_4) > 15f)
		{
			if (!func_152(&(Local_162[13 /*10*/].f_3)))
			{
				func_185(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_94(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_303(int iParam0)//Position - 0xB2FD
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
	vVar3 = { func_307((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_306(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_304(unk_0xB3328BA8976B416C(iParam0, 1), vVar5, vVar6, vVar7);
}

int func_304(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xB3E6
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
	vVar0 = { func_307(vParam2 - vParam1) };
	vVar1 = { func_307(vParam3 - vParam1) };
	fVar2 = func_305(vParam0, vVar0);
	fVar3 = func_305(vParam1, vVar0);
	fVar4 = func_305(vParam2, vVar0);
	fVar5 = func_305(vParam0, vVar1);
	fVar6 = func_305(vParam1, vVar1);
	fVar7 = func_305(vParam3, vVar1);
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

float func_305(vector3 vParam0, vector3 vParam1)//Position - 0xB4CF
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_306(vector3 vParam0, int iParam1)//Position - 0xB4F0
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

Vector3 func_307(vector3 vParam0)//Position - 0xB54E
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

int func_308(var uParam0)//Position - 0xB58D
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

int func_309(var uParam0)//Position - 0xB5C2
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

int func_310(var uParam0)//Position - 0xB658
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0x9EF5C05553C17392(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_152(&(Local_162[4 /*10*/].f_3)))
			{
				func_185(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_94(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_311(var uParam0)//Position - 0xB6CA
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		iVar0 = unk_0xC55CD7A6DAE4D24F(unk_0x9EB17624F44A8DA4());
		if (iVar0 == 0)
		{
			if (!func_152(&(Local_162[6 /*10*/].f_3)))
			{
				func_185(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[6 /*10*/].f_3)) > 3,5f)
			{
				func_94(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_312(var uParam0)//Position - 0xB740
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
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, 72, 1, 0, 1);
				}
				func_94(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_313(var uParam0)//Position - 0xB7C1
{
	vector3 vVar0;
	
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(uParam0->f_4, 1) };
		if (unk_0xE97272C977DEADD3(vVar0.x) > 3f && !func_152(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_152(&(Local_162[1 /*10*/].f_3)))
			{
				func_185(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[1 /*10*/].f_3)) > 1,2f)
			{
				func_94(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_314(var uParam0)//Position - 0xB84D
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (!unk_0x5E0BEAAD15B888F3(uParam0->f_4) && unk_0x0ACC2116170FA204(uParam0->f_4))
		{
			if (!func_152(&(Local_162[0 /*10*/].f_3)))
			{
				func_185(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[0 /*10*/].f_3)) > 0,7f)
			{
				func_94(&(Local_162[0 /*10*/].f_3));
				func_150(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_315(var uParam0)//Position - 0xB8D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_152(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_150(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_290(uParam0, 10, 0f, 1);
	unk_0xA5D622458FE6D993(unk_0x9EB17624F44A8DA4());
}

void func_316(int iParam0, var uParam1)//Position - 0xB91F
{
	Local_162[iParam0 /*10*/].f_1++;
	func_317(uParam1, iParam0);
	func_94(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_317(var uParam0, int iParam1)//Position - 0xB952
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_318(var uParam0, int iParam1)//Position - 0xB969
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_319(var uParam0)//Position - 0xB97C
{
	if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
	{
		if (unk_0x90D5DFB054818BA7(uParam0->f_4) > 25f)
		{
			if (!func_152(&(Local_162[5 /*10*/].f_3)))
			{
				func_185(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_149(&(Local_162[5 /*10*/].f_3)) > 3,5f)
			{
				func_94(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

float func_320(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xB9F3
{
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), vParam1, bParam2);
}

void func_321(var uParam0, char* sParam1, int iParam2)//Position - 0xBA1D
{
	vector3 vVar0;
	
	func_174();
	func_416(2);
	vVar0 = { func_325() };
	if ((!unk_0xAB019B170BF1309C(&vVar0) && func_216()) && !unk_0x74C475EB8E73D398(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x84CDD933AFA470D2();
		unk_0x3E80C2F7BC665259(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (!func_164(uParam0))
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
		func_290(uParam0, 3, 0, 0);
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
				func_323(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_164(uParam0))
			{
				if (unk_0x9EC5112BB1C4047A(uParam0->f_4))
				{
					func_147(uParam0, 4096, 0);
				}
				else
				{
					func_147(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_323(uParam0, &vVar0);
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
				func_323(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_323(uParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_323(uParam0, &vVar0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_47(8, 0);
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
				func_323(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_147(uParam0, 0, 0);
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_47(8, 0);
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
				func_323(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_323(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_47(8, 0);
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
				func_323(uParam0, &vVar0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_322(&vVar0);
			func_101(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
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
			func_323(uParam0, &vVar0);
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
					func_323(uParam0, &vVar0);
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
			{
				func_250(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_47(3, 0);
		}
		func_290(uParam0, 3, 0f, 1);
	}
}

void func_322(char* sParam0)//Position - 0xBFC8
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

void func_323(var uParam0, char* sParam1)//Position - 0xC01C
{
	if (func_324(uParam0))
	{
		func_101(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_324(var uParam0)//Position - 0xC044
{
	if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
	{
		if (func_199(unk_0xFC1458A37D98B502(), uParam0->f_3, 1) < 40f && !unk_0xEC211A86AB3726B6(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_325()//Position - 0xC082
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

int func_326(var uParam0)//Position - 0xC0C8
{
	return uParam0->f_118;
}

void func_327()//Position - 0xC0D4
{
	if (func_357(&Local_230, &Local_268))
	{
		switch (Local_268.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (func_217(&Local_230) > 10 && func_217(&Local_230) != 15)
					{
						func_222(&Local_230, 15, 1, 0, 0);
						func_290(&Local_230, 10, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_396(&Local_230, 18) > 15f)
				{
					if (func_217(&Local_230) > 10 && func_217(&Local_230) != 17)
					{
						func_214(&(Local_230.f_81), 67108864);
						func_222(&Local_230, 17, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				break;
			
			case 2:
				if (func_396(&Local_230, 18) > 30f)
				{
					if (func_217(&Local_230) > 10 && func_217(&Local_230) != 16)
					{
						func_222(&Local_230, 16, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if (func_396(&Local_230, 18) > 30f)
				{
					if (func_217(&Local_230) > 10 && func_217(&Local_230) != 18)
					{
						func_222(&Local_230, 18, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				break;
			
			case 4:
				if (func_396(&Local_230, 18) > 30f)
				{
					if (func_217(&Local_230) > 10 && func_217(&Local_230) != 19)
					{
						func_222(&Local_230, 19, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_328(&Local_230, &uLocal_271, &Local_268, 1, bLocal_267);
}

int func_328(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xC2C4
{
	char cVar0[48];
	struct<6> Var1;
	
	func_340(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (func_339(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_338(uParam0))
				{
					uParam2->f_7 = { func_337(uParam1) };
					func_101(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_216())
				{
					uParam2->f_13 = { func_225() };
					if (unk_0x74C475EB8E73D398(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_189(uParam0))
				{
					if (func_216())
					{
						if (unk_0xAFFA17B5D5E2F248(unk_0xFC1458A37D98B502()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						func_290(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { func_325() };
							func_45();
						}
						else
						{
							uParam2->f_1 = { func_336() };
							func_174();
						}
						if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_216())
				{
					uParam2->f_19 = { func_336() };
				}
				else
				{
					func_215(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_333(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_186(uParam0, 14) && !func_216()) && !func_189(uParam0)) && func_396(uParam0, 18) > 1f)
				{
					func_290(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_396(uParam0, 18) > 1,5f && !func_216()) && !func_189(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (func_332(uParam2, &cVar0))
					{
						func_101(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						func_290(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						func_331(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						func_330(&(uParam0->f_244), uParam0->f_144, &Var1, &cVar0, 8, 0, 0);
						func_290(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_216() && func_396(uParam0, 17) > 1f)
				{
					if (func_396(uParam0, 18) > 0,5f || uParam0->f_411 == 0)
					{
						if (unk_0x74C475EB8E73D398(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_224(&(uParam2->f_1));
							func_101(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							func_183(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0xAB019B170BF1309C(&(uParam2->f_1)))
						{
							func_329(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_216())
				{
					func_215(&(uParam2->f_26), system::round(system::pow(2f, system::to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_333(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_329(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC68B
{
	func_110(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_102(sParam2, iParam4, 0);
}

int func_330(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC6DF
{
	func_110(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_102(sParam2, iParam4, 0);
}

void func_331(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xC733
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_269(*uParam0, iVar1))
		{
			func_215(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_224(sParam2);
				}
				else
				{
					func_224(sParam2);
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

int func_332(var uParam0, char* sParam1)//Position - 0xC7CA
{
	if (unk_0x74C475EB8E73D398(&(uParam0->f_13), "txm3_bant1") || unk_0x74C475EB8E73D398(&(uParam0->f_13), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x74C475EB8E73D398(&(uParam0->f_13), "txm6_bant3M") || unk_0x74C475EB8E73D398(&(uParam0->f_13), "txm6_bant3T")) || unk_0x74C475EB8E73D398(&(uParam0->f_13), "txm6_bant3F"))
	{
		func_214(&(uParam0->f_28), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_333(var uParam0)//Position - 0xC848
{
	int iVar0;
	
	iVar0 = func_335(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_214(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_334(), 24);
	}
}

var func_334()//Position - 0xC892
{
	var uVar0;
	
	return uVar0;
}

int func_335(var uParam0)//Position - 0xC89C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_213((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_336()//Position - 0xC8CC
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

struct<6> func_337(var uParam0)//Position - 0xC978
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_213((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_214(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_338(var uParam0)//Position - 0xC9BF
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_191("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_191("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_191("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_191("TX_OBJ_GYB_DO", 0, 0) || func_191("TAXI_OBJ_GYB", 0, 0)) || func_191("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_191("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_191("TX_OBJ_CYI_DO", 0, 0) || func_191("TAXI_OBJ_CYI_01", 0, 0)) || func_191("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_191("TX_OBJ_GYN_DO", 0, 0) || func_191("TAXI_OBJ_GYN", 0, 0)) || func_191("TAXI_OBJ_GYN_TG", 0, 0)) || func_191("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_191("TAXI_OBJ_CC1", 0, 0) || func_191("TAXI_OBJ_CC2", 0, 0)) || func_191("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_191("TAXI_OBJ_FTC1", 0, 0) || func_191("TAXI_OBJ_FTC2", 0, 0)) || func_191("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_191("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_191("TAXI_OBJ_GETRUN", 0, 0) || func_191("TAXI_OBJ_DRIVE", 0, 0)) || func_191("TAXI_OBJ_RETURN", 0, 0)) || func_191("TAXI_OBJ_POL", 0, 0)) || func_191("TAXI_OBJ_RUNOUT", 0, 0)) || func_191("TAXI_OBJ_POL", 0, 0));
}

int func_339(var uParam0)//Position - 0xCBDF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_213((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_340(var uParam0, var uParam1)//Position - 0xCC0E
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_338(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_186(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_217(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_356(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_216())
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
						func_355(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 2));
				}
				if (func_213(uParam0->f_98, 4))
				{
					func_290(uParam0, 16, 0, 0);
					func_255(uParam0, 0, 0);
				}
				func_204(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_396(uParam0, 16) > 1f)
				{
					func_206(1);
					if (uParam0->f_411 == 9)
					{
						func_254("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_254("TAXI_VIP_RETURN", 7500, 1);
					}
					func_290(uParam0, 16, 0, 0);
					func_255(uParam0, 0, 0);
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
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_250(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_396(uParam0, 16) > func_114(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_216()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_217(uParam0))
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
				func_355(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_356(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_101(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_222(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_290(uParam0, 16, 0, 0);
				func_222(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_213(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_331(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_355(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_290(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_254("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_254("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_351(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_222(uParam0, 10, 1, 0, 0);
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
				func_224(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_250(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(uParam0->f_9))
					{
						uParam0->f_9 = func_351(uParam0->f_17, 1);
					}
					else if (unk_0x94540F498465F1A2(uParam0->f_9) == 0)
					{
						unk_0xF20857E4CB32A2B7(uParam0->f_9, 255);
						unk_0x645FF8D8B599FD84(uParam0->f_9, uParam0->f_17);
						unk_0xAAAC88CC20771601(uParam0->f_9, true);
					}
				}
				func_222(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_350(uParam0, 33554432, vVar0, "", 1, 8);
				func_290(uParam0, 16, 0, 0);
				func_222(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_216())
				{
					func_349(uParam0, 0);
					func_214(&(uParam0->f_44), 4);
					func_290(uParam0, 16, 0, 0);
					func_222(uParam0, 13, 0, 0, 0);
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
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_396(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_224(&vVar0);
					}
					func_347(vVar0, uParam1);
					func_214(&(uParam0->f_81), 67108864);
					func_290(uParam0, 16, 0, 0);
					func_290(uParam0, 11, 0, 0);
					func_255(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_396(uParam0, 11) > uParam0->f_36)
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
							func_224(&vVar0);
						}
					}
					func_347(vVar0, uParam1);
					func_290(uParam0, 11, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_255(uParam0, 0, 0);
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
					func_224(&vVar0);
				}
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
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
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
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
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				func_214(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 1, 0, 8);
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
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
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
					func_346(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_346(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_347(vVar0, uParam1);
				func_356(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_255(uParam0, 0, 0);
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
					func_346(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_346(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_347(vVar0, uParam1);
				func_356(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_255(uParam0, 0, 0);
				break;
			
			case 12:
				func_254("TAXI_OBJ_GYB", 3500, 1);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_254("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_254("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_254("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
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
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_213(uParam0->f_98, 268435456))
				{
					func_254("TAXI_OBJ_CYI_01", 7500, 1);
					func_214(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 33:
				func_254("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_213(uParam0->f_82, 8192))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_224(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_347(vVar0, uParam1);
						}
						else
						{
							func_355(uParam0, &vVar0, 0, 0, 8);
						}
						func_214(&(uParam0->f_82), 8192);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_255(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_213(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_224(&vVar0);
					func_355(uParam0, &vVar0, 0, 0, 8);
					func_214(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_213(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_224(&vVar0);
					func_355(uParam0, &vVar0, 0, 0, 8);
					func_214(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 46, 1, 0, 0);
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
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_255(uParam0, 0, 0);
				break;
			
			case 139:
				func_254("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_222(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 120);
				if (!func_213(uParam0->f_82, 268435456))
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
					func_214(&(uParam0->f_82), 268435456);
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
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x63A6486593EC7EC3(0, 100);
				if (!func_213(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_214(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_254("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_255(uParam0, 0, 0);
				func_222(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_216())
				{
					func_254("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_255(uParam0, 0, 0);
					func_222(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_254("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_255(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_213(uParam0->f_81, 1))
				{
					func_345(uParam0, 1, vVar0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_213(uParam0->f_81, 2))
				{
					func_345(uParam0, 2, vVar0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_356(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_213(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_213(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_214(&(uParam0->f_81), 2097152);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_356(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_255(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_213(uParam0->f_81, 4))
				{
					func_345(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_213(uParam0->f_81, 8))
				{
					func_345(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_345(uParam0, 8, vVar0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_356(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_250(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_331(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_101(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_331(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_331(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_356(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_213(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_290(uParam0, 16, 0, 0);
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_213(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_224(&vVar0);
					}
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_224(&vVar0);
					}
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_224(&vVar0);
					}
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_290(uParam0, 16, 0, 0);
				}
				func_356(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_213(uParam0->f_81, 4096))
				{
					func_350(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_213(uParam0->f_81, 8192))
				{
					func_350(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_356(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_213(uParam0->f_81, 16384))
				{
					func_350(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_213(uParam0->f_81, 32768))
				{
					func_350(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_356(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_213(uParam0->f_82, 8))
					{
						func_343(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_213(uParam0->f_82, 16))
					{
						func_343(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_213(uParam0->f_82, 32))
					{
						func_343(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_255(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_331(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_290(uParam0, 16, 0, 0);
					func_255(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_356(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_213(uParam0->f_81, 65536))
				{
					func_350(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_213(uParam0->f_81, 131072))
				{
					func_350(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_250(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_213(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_214(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_290(uParam0, 16, 0, 0);
				}
				func_356(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_216())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 65));
					func_255(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_216())
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
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 66));
					func_255(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_216())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								func_356(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								func_356(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_331(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_356(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_290(uParam0, 16, 0, 0);
								func_255(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_355(uParam0, &vVar0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_255(uParam0, 0, 0);
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
									func_224(&vVar0);
									func_355(uParam0, &vVar0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_255(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_222(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_356(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_213(uParam0->f_82, 1))
				{
					func_343(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_213(uParam0->f_82, 2))
				{
					func_343(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_213(uParam0->f_82, 4))
				{
					func_343(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_255(uParam0, 0, 0);
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
				func_331(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_250(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_356(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_250(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_342(uParam0, vVar0, 8);
				}
				func_356(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_213(uParam0->f_83, 1024))
				{
					func_214(&(uParam0->f_83), 1024);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 2048))
				{
					func_214(&(uParam0->f_83), 2048);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_213(uParam0->f_83, 4096))
				{
					func_214(&(uParam0->f_83), 4096);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_224(&vVar0);
					func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_213(uParam0->f_82, 1024))
				{
					func_343(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_213(uParam0->f_82, 2048))
				{
					func_343(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_356(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 52, 1, 0, 0);
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
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
				{
					func_250(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_344(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_355(uParam0, &vVar0, 0, 0, 8);
						func_222(uParam0, 52, 1, 0, 0);
						func_290(uParam0, 16, 0, 0);
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
						func_355(uParam0, &vVar0, 0, 0, 8);
						func_290(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_331(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_255(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_356(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0xF5D0CBECCA41314A(unk_0x98EC0789D9F0703B()) >= 1)
				{
					func_254("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_213(uParam0->f_81, 262144))
				{
					func_350(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_213(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_350(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_350(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_356(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_213(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_341(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_213(uParam0->f_82, 134217728))
				{
					func_341(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_356(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 100:
				func_254("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_255(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_224(&vVar0);
				}
				func_214(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_224(&vVar0);
				}
				func_214(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
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
					func_224(&vVar0);
				}
				func_214(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_213(uParam0->f_82, 65536))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
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
						func_224(&vVar0);
						func_347(vVar0, uParam1);
						func_214(&(uParam0->f_82), 65536);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_255(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_213(uParam0->f_82, 131072))
				{
					if (func_396(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_224(&vVar0);
						func_347(vVar0, uParam1);
						func_214(&(uParam0->f_82), 131072);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_255(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_213(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_214(&(uParam0->f_82), 8388608);
				}
				else if (!func_213(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_214(&(uParam0->f_82), 16777216);
				}
				else if (!func_213(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_214(&(uParam0->f_82), 33554432);
				}
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_331(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_224(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_331(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_214(&(uParam0->f_81), 2097152);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_214(&(uParam0->f_81), 67108864);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_213(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_350(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
					{
						func_250(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_222(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_213(uParam0->f_81, 268435456))
				{
					func_350(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_222(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_254("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_255(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_213(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_350(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
						{
							func_250(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_350(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_222(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_254("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_255(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_101(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_213(uParam0->f_81, 16777216))
				{
					func_350(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_255(uParam0, 0, 0);
				break;
			
			case 88:
				func_254("TAXI_TIEFLEE", 7500, 1);
				func_255(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_213(uParam0->f_98, 536870912))
				{
					func_254("TAXI_OBJ_CYI_1B", 7500, 1);
					func_214(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_255(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
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
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_255(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_255(uParam0, 0, 0);
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
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_255(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_355(uParam0, &vVar0, 1, 0, 8);
				func_222(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_254("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_222(uParam0, 0, 0, 0, 0);
				func_255(uParam0, 0, 0);
				break;
			}
	}
}

void func_341(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xFECC
{
	func_214(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_224(&vParam2);
	}
	func_101(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_342(var uParam0, struct<6> Param1, int iParam2)//Position - 0xFF0D
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_213(uParam0->f_82, 64))
	{
		func_214(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_213(uParam0->f_82, 128))
	{
		func_214(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x63A6486593EC7EC3(1, 3), 24);
	}
	func_330(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_290(uParam0, 16, 0, 0);
}

void func_343(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0xFF94
{
	func_214(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_224(&vParam2);
		}
	}
	func_101(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_344(var uParam0)//Position - 0x10015
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_345(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x1007B
{
	func_214(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_101(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_346(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x100B1
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = system::to_float(iVar2);
		iVar1 = system::round(system::pow(2f, fVar0));
		if (!func_269(*uParam0, iVar1))
		{
			func_215(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_224(sParam2);
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

void func_347(char[24] cParam0, var uParam1)//Position - 0x10132
{
	int iVar0;
	
	iVar0 = func_348(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_214(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_348(var uParam0)//Position - 0x10161
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

void func_349(var uParam0, bool bParam1)//Position - 0x1018E
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_254("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_254("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_254("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_254("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_254("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_254("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_254("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_254("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_254("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_254("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_254("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_254("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_254("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_350(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10345
{
	func_214(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_224(&vParam2);
	}
	func_101(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

int func_351(vector3 vParam0, bool bParam1)//Position - 0x10386
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_114(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_352(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x103B2
{
	func_290(uParam0, 16, 0, 0);
	func_290(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_3))
	{
		unk_0x4DB5F099DE92D53F(uParam0->f_3, &cParam1, func_353(uParam0));
	}
}

char* func_353(var uParam0)//Position - 0x103F0
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

char* func_354(var uParam0, int iParam1)//Position - 0x1048A
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

int func_355(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x10833
{
	func_290(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_290(uParam0, 17, 0f, 1);
	}
	func_255(uParam0, iParam2, 0);
	return func_101(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_356(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x10870
{
	if (iParam0 == 0)
	{
		if (func_213(*uParam2, 2))
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
		if (func_213(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_213(*uParam2, 4))
		{
			if (!func_213(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_213(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_213(*uParam2, 512))
		{
			if (!func_213(*uParam2, 4096))
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
		if (func_213(*uParam2, 16))
		{
			if (!func_213(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_213(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_213(*uParam2, 64))
		{
			if (!func_213(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_213(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_213(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_213(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_213(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_213(*uParam2, 8192))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_213(*uParam2, 16384))
		{
			if (func_213(*uParam2, 4194304))
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
		if (func_213(*uParam2, 32768))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_213(*uParam2, 65536))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_213(*uParam2, 131072))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_213(*uParam2, 262144))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_213(*uParam2, 524288))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_213(*uParam2, 1048576))
		{
			if (func_213(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_213(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_213(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_213(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_213(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_213(*uParam2, 67108864))
		{
			if (func_213(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_213(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_213(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_213(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_213(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

bool func_357(var uParam0, var uParam1)//Position - 0x10E7A
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_186(uParam0, 9));
}

bool func_358(var uParam0)//Position - 0x10EA1
{
	return uParam0->f_117;
}

void func_359(var uParam0, var uParam1, bool bParam2)//Position - 0x10EAD
{
	if (!func_213(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xAB019B170BF1309C(&(uParam0->f_124)) && func_216())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_216())
				{
					StringCopy(&(uParam0->f_124), func_334(), 24);
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

void func_360(var uParam0)//Position - 0x10F33
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_269(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_269(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_269(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_215(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else
						{
							func_20(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_269(Local_165.f_1[iVar0 /*4*/], 4) && !func_269(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_215(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_321(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_361(var uParam0, var uParam1)//Position - 0x11046
{
	var uVar0;
	
	if (!func_186(uParam0, 27))
	{
		func_184(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_396(uParam0, 27) > 5f)
	{
		if (func_388(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_290(uParam0, 27, 0, 0);
			func_290(uParam0, 10, 0, 0);
			func_386(uParam0, &uVar0, uParam1);
		}
		func_383(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_362(uParam0);
	}
	if ((((!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) && (unk_0x8EA3C8E091EA5BA4(*uParam0) && !unk_0xD85097DDDA5447BE(*uParam0))) && (unk_0x8EA3C8E091EA5BA4(uParam0->f_1) && !unk_0xD85097DDDA5447BE(uParam0->f_1))) && !unk_0x23F2F89E3D1CB7C4()) && !func_216())
	{
		if (func_396(uParam0, 26) > 10f)
		{
			func_183(uParam0, 26, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
	}
	else if (func_186(uParam0, 26))
	{
		func_183(uParam0, 26, 0);
	}
	return 0;
}

void func_362(var uParam0)//Position - 0x11170
{
	if (!func_382(uParam0->f_429))
	{
		uParam0->f_429 = func_381();
		func_372(&(uParam0->f_429), 0, 0, unk_0x63A6486593EC7EC3(4, 7), 0, 0, 0);
	}
	else if (func_363(uParam0->f_429))
	{
		func_321(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_363(int iParam0)//Position - 0x111BD
{
	return func_364(func_381(), iParam0);
}

int func_364(int iParam0, int iParam1)//Position - 0x111CF
{
	int iVar0;
	int iVar1;
	
	if (!func_382(iParam1) || !func_382(iParam0))
	{
		return 1;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x112DB
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_366(int iParam0)//Position - 0x112EE
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_367(int iParam0)//Position - 0x11301
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_368(int iParam0)//Position - 0x11314
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_369(int iParam0)//Position - 0x11326
{
	return iParam0 & 15;
}

var func_370(int iParam0)//Position - 0x11333
{
	return (system::shift_right(iParam0, 26) & 31 * func_371(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_371(bool bParam0, int iParam1, int iParam2)//Position - 0x11358
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1136F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_370(*uParam0);
	iVar1 = func_369(*uParam0);
	iVar2 = func_368(*uParam0);
	iVar3 = func_367(*uParam0);
	iVar4 = func_366(*uParam0);
	iVar5 = func_365(*uParam0);
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
	iVar6 = func_380(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_380(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_373(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_373(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x114F1
{
	func_379(uParam0, iParam1);
	func_378(uParam0, iParam2);
	func_377(uParam0, iParam3);
	func_376(uParam0, iParam5);
	func_375(uParam0, iParam4);
	func_374(uParam0, iParam6);
}

void func_374(var uParam0, int iParam1)//Position - 0x11529
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

void func_375(var uParam0, int iParam1)//Position - 0x115AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_369(*uParam0);
	iVar1 = func_370(*uParam0);
	if (iParam1 < 1 || iParam1 > func_380(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_376(var uParam0, int iParam1)//Position - 0x11600
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_377(var uParam0, int iParam1)//Position - 0x11633
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_378(var uParam0, int iParam1)//Position - 0x1166D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_379(var uParam0, int iParam1)//Position - 0x116A8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_380(int iParam0, int iParam1)//Position - 0x116E4
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

int func_381()//Position - 0x11786
{
	var uVar0;
	
	func_379(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_378(&uVar0, unk_0x95327550F0F2BE7C());
	func_377(&uVar0, unk_0x674C9438180770FE());
	func_375(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_376(&uVar0, unk_0xEAF455949B108589());
	func_374(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

int func_382(int iParam0)//Position - 0x117CC
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
	iVar0 = func_365(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_366(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_367(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_370(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_369(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_368(iParam0);
	if (iVar5 < 1 || iVar5 > func_380(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_383(var uParam0)//Position - 0x118A8
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_385()) && !func_187(uParam0)) || ((uParam0->f_411 != 9 && func_259(uParam0, 1)) && !func_187(uParam0)))
		{
			uVar0 = func_384(uParam0->f_4);
			unk_0x83E70C4C5D45C754(&uVar0);
			uParam0->f_4 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_4, true, 0);
			func_209(uParam0);
			func_200(uParam0, 0);
		}
	}
}

var func_384(var uParam0)//Position - 0x1193E
{
	return uParam0;
}

int func_385()//Position - 0x11948
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

void func_386(var uParam0, var uParam1, var uParam2)//Position - 0x1199F
{
	switch (*uParam1)
	{
		case 1:
			if (func_387(uParam0, 0, 1))
			{
				func_321(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_387(uParam0, 0, 4))
			{
				func_321(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_387(uParam0, 0, 8))
			{
				func_321(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_387(uParam0, 1, 1))
			{
				func_321(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_387(uParam0, 0, 1))
			{
				func_321(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_213(*uParam2, 2) && func_164(uParam0))
			{
				func_321(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_387(var uParam0, int iParam1, int iParam2)//Position - 0x11A7A
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
				func_222(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_222(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11AF7
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (!func_213(*uParam2, 1))
		{
			if (func_394(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_213(*uParam2, 2))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_213(*uParam2, 4))
		{
			if (func_392(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_213(*uParam2, 8))
		{
			if (func_391(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_213(*uParam2, 128);
		if (bParam4)
		{
			if (func_389(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_213(*uParam2, 16))
		{
			if (func_389(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_389(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11C21
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
	if (func_390(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_198(iParam0, 1) < 1,5f)
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

int func_390(int iParam0, int iParam1)//Position - 0x11DE9
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

int func_391(int iParam0, int iParam1, var uParam2)//Position - 0x11E3E
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

int func_392(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x11E8C
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
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_393(iVar1))
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

int func_393(int iParam0)//Position - 0x12005
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
						if (func_199(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
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

int func_394(int iParam0, var uParam1)//Position - 0x120D3
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_198(iParam0, 1) < uParam1->f_2)
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

void func_395(var uParam0)//Position - 0x12158
{
	if (!func_213(uParam0->f_98, 2))
	{
		if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
		{
			if (func_320(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x9B8406983378711E(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_214(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_396(var uParam0, int iParam1)//Position - 0x121AF
{
	if (!func_152(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_185(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_149(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_397()//Position - 0x121DF
{
	func_398(&Local_230);
	func_415();
}

void func_398(var uParam0)//Position - 0x121F2
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_416(2);
	}
}

int func_399(var uParam0, bool bParam1)//Position - 0x12211
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_216() && func_396(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0->f_3, 0))
		{
			if (unk_0xB8DE76287EDC4957(uParam0->f_4, 0))
			{
				if (unk_0xA8D0477084E86A92(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_58(uParam0) == 0 || func_269(uParam0->f_85, 32))
					{
						if (!unk_0x9EC5112BB1C4047A(uParam0->f_4))
						{
							func_147(uParam0, 4160, 0);
						}
						else
						{
							func_147(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_147(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_147(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_147(uParam0, 0, 0);
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

void func_400(var uParam0)//Position - 0x12310
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

int func_401(var uParam0)//Position - 0x12351
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_402(int iParam0)//Position - 0x12372
{
	func_404(&Local_230, iParam0);
	Local_230.f_410 = 0;
	func_403(&Local_230, 7, 14);
	Local_230.f_23 = { -492,4436f, -290,3657f, 34,486f };
	Local_230.f_33 = 202,0759f;
	Local_230.f_26 = { 856,3766f, 1288,918f, 357,7924f };
	Local_230.f_34 = 162,3f;
	Local_230.f_6 = 1f;
	Local_230.f_29 = { 810,3334f, 1172,413f, 321,8036f };
}

void func_403(var uParam0, int iParam1, int iParam2)//Position - 0x123F0
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_404(var uParam0, var uParam1)//Position - 0x12404
{
	func_414(1);
	func_211();
	func_6(&(uParam0->f_244));
	func_413(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_213(Global_104555.f_19067, 4))
	{
		func_214(&(Global_104555.f_19067), 4);
	}
	func_408(uParam0);
	func_406(uParam0);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	uParam0->f_102 = (func_405(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xBCBC53983EC3B1BA("TAXI", 2);
}

int func_405(int iParam0)//Position - 0x12486
{
	return Global_104555.f_19067.f_39[iParam0];
}

void func_406(var uParam0)//Position - 0x1249B
{
	switch (func_58(uParam0))
	{
		case 0:
			func_407(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_407(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_407(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_407(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_407(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_407(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_407(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_407(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_407(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_407(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_407(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x125EE
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_408(var uParam0)//Position - 0x12608
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_412(uParam0, 3);
			func_411(uParam0, 14);
			break;
		
		case 1:
			func_412(uParam0, 14);
			func_411(uParam0, 8);
			break;
		
		case 2:
			func_412(uParam0, 8);
			func_411(uParam0, 7);
			break;
		
		case 3:
			func_412(uParam0, 15);
			func_411(uParam0, 6);
			break;
		
		case 4:
			func_412(uParam0, 0);
			func_411(uParam0, 3);
			break;
		
		case 5:
			func_412(uParam0, 6);
			func_411(uParam0, 7);
			break;
		
		case 6:
			func_412(uParam0, 8);
			func_411(uParam0, 15);
			break;
		
		case 7:
			func_412(uParam0, 8);
			func_411(uParam0, 14);
			break;
		
		case 8:
			func_412(uParam0, 7);
			func_411(uParam0, 15);
			break;
		
		case 9:
			func_412(uParam0, unk_0x63A6486593EC7EC3(0, 17));
			iVar0 = func_410((uParam0->f_418.f_2 + unk_0x63A6486593EC7EC3(1, 17)), 0, 16);
			func_411(uParam0, iVar0);
			func_409(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_409(var uParam0)//Position - 0x1273F
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

int func_410(int iParam0, int iParam1, int iParam2)//Position - 0x12800
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

void func_411(var uParam0, int iParam1)//Position - 0x128A2
{
	uParam0->f_418.f_1 = iParam1;
}

void func_412(var uParam0, int iParam1)//Position - 0x128B3
{
	uParam0->f_418.f_2 = iParam1;
}

void func_413(var uParam0)//Position - 0x128C4
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
	func_183(uParam0, 32, 0);
}

void func_414(bool bParam0)//Position - 0x12922
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

void func_415()//Position - 0x1294E
{
	unk_0x14776E43F90DD454(iLocal_259);
	unk_0xFCCDDE0E48CF9588("gestures@m@standing@casual");
	func_115(&uLocal_45, 0, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_416(int iParam0)//Position - 0x12970
{
	Global_103265.f_22 = iParam0;
}

