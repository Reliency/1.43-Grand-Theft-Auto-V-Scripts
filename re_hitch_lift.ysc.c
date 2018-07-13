#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	float fLocal_78 = 0f;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<6> Local_106 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_107 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	char[] cLocal_146[8] = 0;
	char* sLocal_147 = NULL;
	char* sLocal_148 = NULL;
	char* sLocal_149 = NULL;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	float fLocal_152 = 0f;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	float fLocal_157 = 0f;
	vector3 vLocal_158 = { 0f, 0f, 0f };
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 16;
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
	struct<2> Local_326 = { 0, 5 } ;
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
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0,001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	iLocal_53 = unk_0x5354F72E0D8D7E53();
	iLocal_54 = unk_0x526A9A6B1B39C5F0();
	vLocal_64 = { -3092,82f, 749,8f, 21,48f };
	vLocal_65 = { 181,8977f, 4415,152f, 73,463f };
	vLocal_66 = { 2743,461f, 4385,51f, 47,7521f };
	vLocal_67 = { -382,1346f, 2817,971f, 44,0671f };
	vLocal_79 = { -1034,6f, 4918,6f, 205,9f };
	StringCopy(&Local_106, "", 24);
	vLocal_61 = { ScriptParam_326.f_1[0 /*3*/] };
	func_267();
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (unk_0xC816B63289F7A279(iLocal_71))
			{
				unk_0x88235B448509228B(iLocal_71);
			}
		}
		func_245();
	}
	if (func_216(vLocal_61, 13, iLocal_68, 0, 0))
	{
		func_213(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_89)
		{
			if (!func_212())
			{
				if (func_211())
				{
					func_245();
				}
			}
			unk_0x48D75120C879E65E("RE_HL", 0);
			switch (iLocal_55)
			{
				case 0:
					if (func_199())
					{
						func_245();
					}
					if (!iLocal_60)
					{
						func_198();
					}
					else
					{
						func_197();
					}
					if (bLocal_59)
					{
						iLocal_111 = 1;
						iLocal_55 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						switch (iLocal_56)
						{
							case 0:
								if ((func_196() && iLocal_57 != 8) && iLocal_57 != 10)
								{
									if (!func_212())
									{
										func_187(1);
									}
									iLocal_56 = 1;
								}
								switch (iLocal_57)
								{
									case 0:
										func_180();
										break;
									
									case 1:
										func_178();
										break;
									
									case 2:
										if (func_177())
										{
										}
										iLocal_126 = unk_0x53C562FD2B9E3AB0();
										if (iLocal_108 < 1 && !iLocal_109)
										{
											func_176();
										}
										if (iLocal_58 == 1)
										{
											func_175();
										}
										else if (iLocal_58 == 2)
										{
											func_174();
										}
										else if (iLocal_58 == 3)
										{
											func_173();
										}
										else if (iLocal_58 == 5)
										{
											func_170();
										}
										break;
									
									case 3:
										func_167();
										break;
									
									case 4:
										if (iLocal_58 == 1)
										{
											func_150();
											func_149();
										}
										else if (iLocal_58 == 3)
										{
											func_144();
											func_143();
										}
										else if (iLocal_58 == 5)
										{
											func_144();
											func_134();
										}
										if (!bLocal_92)
										{
											func_130();
											func_129();
											func_126();
											func_125();
											func_122();
											func_120();
											func_119();
											func_118();
										}
										func_110();
										break;
									
									case 6:
										func_62();
										if (iLocal_58 == 3)
										{
											func_143();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_58 == 3)
										{
											func_143();
										}
										break;
									
									case 8:
										if (iLocal_58 == 3)
										{
											func_57();
											func_143();
										}
										break;
									
									case 9:
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
										{
											if (unk_0x0C88267282FD588F(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
											{
												unk_0x380C1E7B7740D618(iLocal_71, vLocal_77, 1f, -1, 0,25f, 0, 1193033728);
											}
											else
											{
												unk_0x93F12E7D8D931858(iLocal_71, 1193033728, 0);
											}
											unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
											system::wait(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_57 != 10)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
									{
										if (unk_0x0C88267282FD588F(iLocal_71, vLocal_79, 5f, 5f, 5f, false, true, 0))
										{
											func_50(0);
											system::wait(0);
											func_48();
											iLocal_57 = 10;
										}
									}
								}
								if (func_47())
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_71))
									{
										unk_0x68433819717660CF(&iLocal_71);
									}
									func_18();
								}
								break;
							
							case 1:
								func_48();
								system::wait(0);
								if (iLocal_58 == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 3)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 4, 0, 0, 0);
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
									{
										unk_0xB8E08BD5B184DF4E(iLocal_72);
										unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
										unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
									}
								}
								else if (iLocal_58 == 5)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_71);
									unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
									unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_245();
		}
		if (iLocal_57 > 2)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_71))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						if (!unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_57 > 0 && iLocal_57 < 8)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					if (!func_212())
					{
						func_187(1);
					}
					func_53();
				}
				else if (!unk_0x9F887157983E8EFC(iLocal_71))
				{
					if (unk_0xEBE499597C718EB8(iLocal_71, unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_71);
						unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x586
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)//Position - 0x5D4
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
					func_16();
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
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_14();
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
				func_7();
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
				if (func_6())
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
			if (func_5())
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
			func_4();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_3();
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
		func_16();
	}
	return 0;
}

void func_3()//Position - 0x8A0
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

void func_4()//Position - 0x8D0
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

int func_5()//Position - 0x965
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x98C
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

void func_7()//Position - 0xA25
{
	if (func_13(14))
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
		Global_14453 = func_8();
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

int func_8()//Position - 0xAC7
{
	func_9();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_9()//Position - 0xAE0
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_12(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_11(unk_0xFC1458A37D98B502());
			if (func_10(iVar0) && (!func_13(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_10(Global_104555.f_2353.f_539.f_4301))
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

bool func_10(int iParam0)//Position - 0xBDD
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0xBE9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0xC26
{
	if (func_10(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)//Position - 0xC50
{
	return Global_35861 == iParam0;
}

void func_14()//Position - 0xC5E
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

bool func_15(int iParam0, int iParam1)//Position - 0xCB4
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

void func_16()//Position - 0xCEF
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

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD46
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

void func_18()//Position - 0xD9C
{
	while (!func_46())
	{
		system::wait(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_68);
	func_19();
	func_245();
}

void func_19()//Position - 0xDCE
{
	func_20();
}

int func_20()//Position - 0xDDB
{
	if (func_21(0))
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

bool func_21(bool bParam0)//Position - 0xE26
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_22(int iParam0, int iParam1)//Position - 0xE51
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_33("RE_REWARD", 1, 0, 4000, 10000, func_36(), 0, 138, 0);
			func_32(51);
		}
		if (func_31(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_23(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_23(7);
			}
			else
			{
				func_23(1);
			}
		}
	}
}

void func_23(int iParam0)//Position - 0xF54
{
	Global_104541 = iParam0;
}

void func_24(int iParam0, var uParam1, var uParam2)//Position - 0xF62
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
		func_28((891 + iParam0), 1, -1, 1);
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
		Global_104555.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = uParam2;
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
		func_25();
	}
}

void func_25()//Position - 0x104A
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
		func_27(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_26() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()//Position - 0x150B
{
	return Global_25233;
}

int func_27(int iParam0, int iParam1)//Position - 0x1516
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

int func_28(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1567
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
		iParam2 = func_29();
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

int func_29()//Position - 0x1A29
{
	return Global_1312736;
}

int func_30(int iParam0, int iParam1)//Position - 0x1A35
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_31(int iParam0)//Position - 0x1DA9
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_32(int iParam0)//Position - 0x1DD8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1E1A
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E3A
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_35();
	}
}

void func_35()//Position - 0x200C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_36()//Position - 0x212C
{
	func_9();
	switch (Global_104555.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x2172
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)//Position - 0x21B5
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)//Position - 0x21D0
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_40()//Position - 0x2281
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x229E
{
	switch (unk_0x8B948C59217A295D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0x2478
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7872;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7872)
			{
				iVar0 = func_45(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_43(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2568
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_44(int iParam0)//Position - 0x2598
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x25CC
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()//Position - 0x25FE
{
	return 1;
}

int func_47()//Position - 0x2607
{
	if (Global_25469)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x261F
{
	Global_14622 = 0;
	func_49();
}

void func_49()//Position - 0x262F
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_50(int iParam0)//Position - 0x2650
{
	Global_16767 = iParam0;
}

int func_51()//Position - 0x265D
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()//Position - 0x2679
{
	return Global_25468;
}

void func_53()//Position - 0x2684
{
	func_55();
	while (func_54())
	{
		system::wait(0);
	}
	func_245();
}

int func_54()//Position - 0x26A3
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_55()//Position - 0x26C5
{
	Global_14622 = 0;
	func_56();
}

void func_56()//Position - 0x26D5
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

void func_57()//Position - 0x26F9
{
	struct<6> Var0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_72) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_72, 25f, 25f, 25f, 0, 1, 0) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_72);
			unk_0x380C1E7B7740D618(iLocal_72, vLocal_77, 1f, -1, 0,25f, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
	{
		if (unk_0xEBE499597C718EB8(iLocal_72, unk_0xFC1458A37D98B502(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x74C475EB8E73D398(&Var0, "REHH3_JB_2") || unk_0x74C475EB8E73D398(&Var0, "REHH3_JB_4")) || unk_0x74C475EB8E73D398(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (system::timerb() > 5000)
		{
			if (unk_0x7ED4D0E480A6EC43(iLocal_72, unk_0xFC1458A37D98B502()))
			{
				iLocal_127 = 4;
			}
		}
	}
	if (!iLocal_91)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_71))
		{
			if (unk_0xEBE499597C718EB8(iLocal_71, unk_0xFC1458A37D98B502(), 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					func_48();
					system::wait(0);
					func_1(&uLocal_161, cLocal_146, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_91 = 1;
				}
			}
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (unk_0x9F887157983E8EFC(iLocal_71))
		{
			unk_0x2CEA76A7F93740C6(iLocal_71);
		}
		if (unk_0x3AB6A1A9084FB0A4(iLocal_72) && unk_0x0C88267282FD588F(iLocal_71, unk_0xB3328BA8976B416C(iLocal_72, 0), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_127 = 5;
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
	{
		unk_0xD7F5B2902EBBD04E(iLocal_72, unk_0xFC1458A37D98B502(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_136)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_72))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_100))
			{
				unk_0xE30CF11C0EE14316(&iLocal_100);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				iLocal_127 = 3;
			}
		}
	}
	if (!iLocal_138)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && !unk_0x3AB6A1A9084FB0A4(iLocal_72))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()))
				{
					iLocal_127 = 2;
				}
			}
		}
		if (unk_0x3AB6A1A9084FB0A4(iLocal_72))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_100))
			{
				unk_0xE30CF11C0EE14316(&iLocal_100);
			}
			func_59(&uLocal_161, 4);
			if (unk_0xEBE499597C718EB8(iLocal_72, unk_0xFC1458A37D98B502(), 1) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				iLocal_127 = 2;
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_71, iLocal_72, 1))
			{
				iLocal_127 = 2;
			}
		}
	}
	switch (iLocal_127)
	{
		case 0:
			if (!iLocal_136)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && !unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					if (!unk_0x88DDBE9908752BF0(iLocal_71, 0) && unk_0x596A22C5FEBABAC1(iLocal_72))
					{
						if (!iLocal_137)
						{
							unk_0x6931076730A4AC5D(&iLocal_75);
							unk_0x60C06BFD037BB7CF(0, iLocal_72, -1, 2052, 2);
							unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0xAC838A977FB6E6BC(0, iLocal_72, -1);
							unk_0x1B16DD5C115FE009(iLocal_75);
							unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
							iLocal_137 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x16416C5B54FDBCBB(iLocal_71, 0, 0);
				system::settimerb(0);
				iLocal_127 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_138)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					func_48();
					system::wait(0);
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_71);
						unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
						{
							unk_0x0F5CA7E22DF79A5F(iLocal_72, 6, 0f, 0);
							unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_138 = 1;
					iLocal_127 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				func_48();
				system::wait(0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					unk_0x0F5CA7E22DF79A5F(iLocal_71, 7, 0f, 0);
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0x6ADD12BF4D6D2587(iLocal_72))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0xCB3D88C918AA637C(0);
					unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x60C06BFD037BB7CF(0, iLocal_72, -1, 2052, 4);
					unk_0x380C1E7B7740D618(0, unk_0xB3328BA8976B416C(iLocal_72, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0xAC838A977FB6E6BC(0, iLocal_72, -1);
					unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x93F12E7D8D931858(0, 1193033728, 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
					unk_0x771A86309E0CA47B(iLocal_71, false);
					system::wait(10000);
					iLocal_136 = 1;
					iLocal_127 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_NOO", 4, 0, 0, 0))
						{
							system::settimerb(0);
							iLocal_127 = 0;
						}
					}
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
			{
				if (func_1(&uLocal_161, cLocal_146, "REHH3_FHT", 4, 0, 0, 0))
				{
					system::settimerb(0);
					iLocal_127 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				func_55();
				system::wait(0);
				if (func_1(&uLocal_161, cLocal_146, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_127 = 0;
				}
			}
			break;
	}
}

int func_58()//Position - 0x2C6A
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)//Position - 0x2C8B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_60()//Position - 0x2CA8
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

void func_61()//Position - 0x2CEE
{
	if (iLocal_58 == 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (unk_0xC816B63289F7A279(iLocal_71))
			{
				unk_0x88235B448509228B(iLocal_71);
			}
			iLocal_57 = 8;
		}
	}
}

void func_62()//Position - 0x2D19
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_69))
	{
		unk_0xE30CF11C0EE14316(&iLocal_69);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_70))
	{
		unk_0xE30CF11C0EE14316(&iLocal_70);
	}
	if (iLocal_58 == 1)
	{
		unk_0x0B9D04994D02CC2F(iLocal_145);
		unk_0xE02E32C69260FBB7("TIMER_SCENE");
		if (!iLocal_102)
		{
			func_48();
			system::wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH1_TKA", 4, 0, 0, 0);
			unk_0x7777A5D8CAFB91D7(-1055,515f, -2533,221f, 19,3049f, -1, 3000, 2000, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				func_82(func_8(), 1, 100, 0, 1);
				func_81(198, 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 8000, 2052, 4);
				unk_0x6931076730A4AC5D(&iLocal_75);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
				unk_0x16416C5B54FDBCBB(0, 3000, 4194369);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
				unk_0x380C1E7B7740D618(0, -1055,515f, -2533,221f, 19,3049f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x6EF694689373EE8D(0, -1046,832f, -2518,146f, 12,9447f, 2f, -1, 1193033728, 1056964608);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x1B16DD5C115FE009(iLocal_75);
				unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
				system::settimerb(0);
				iLocal_102 = 1;
			}
		}
		if (system::timerb() < 7000)
		{
			unk_0x4FB260623DD93924(0, 75, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			unk_0x4FB260623DD93924(0, 79, 1);
			unk_0x4FB260623DD93924(0, 286, 1);
			unk_0x4FB260623DD93924(0, 287, 1);
			unk_0x4FB260623DD93924(0, 26, 1);
			unk_0x4FB260623DD93924(0, 273, 1);
			unk_0x4FB260623DD93924(0, 4, 1);
			unk_0x4FB260623DD93924(0, 270, 1);
			unk_0x4FB260623DD93924(0, 5, 1);
			unk_0x4FB260623DD93924(0, 1, 1);
			unk_0x4FB260623DD93924(0, 271, 1);
			unk_0x4FB260623DD93924(0, 6, 1);
			unk_0x4FB260623DD93924(0, 2, 1);
			unk_0x4FB260623DD93924(0, 272, 1);
			unk_0x4FB260623DD93924(0, 3, 1);
		}
		if (system::timerb() > 3000 && system::timerb() < 7000)
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		else if (system::timerb() > 7000)
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0x2C5E25A27FEE0F8A(0);
			if (system::timerb() > 8500 && !iLocal_104)
			{
				if ((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && unk_0x1FB367C588A91451() == 4) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x60584F41FBCE28CD() == 4))
				{
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_104 = 1;
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_71) || system::timerb() > 15000)
		{
			if (unk_0x0C88267282FD588F(iLocal_71, -1046,832f, -2518,146f, 12,9447f, 20f, 20f, 5f, false, true, 0) || system::timerb() > 15000)
			{
				unk_0x68433819717660CF(&iLocal_71);
				func_18();
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_102)
		{
			func_48();
			system::wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_102 = 1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (!unk_0x9F887157983E8EFC(iLocal_71))
			{
				unk_0x6931076730A4AC5D(&iLocal_75);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
				unk_0xB6A7F1EF9625AE96(0, 4500);
				unk_0x16416C5B54FDBCBB(0, 0, 4194369);
				unk_0x380C1E7B7740D618(0, 3323,43f, 5166,832f, 17,406f, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x380C1E7B7740D618(0, 3320,684f, 5186,017f, 17,4016f, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x380C1E7B7740D618(0, 3303,612f, 5185,269f, 18,7155f, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x1B16DD5C115FE009(iLocal_75);
				unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
				unk_0x88235B448509228B(iLocal_71);
				system::wait(1000);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				if (func_8() == 0)
				{
					func_66(9, 1, 0);
				}
				else if (func_8() == 1)
				{
					func_66(9, 1, 1);
				}
				else if (func_8() == 2)
				{
					func_66(9, 1, 2);
				}
				system::wait(8000);
				func_18();
			}
		}
	}
	else if (iLocal_58 == 3)
	{
		if (system::timera() > 1000)
		{
			if (func_1(&uLocal_161, cLocal_146, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					unk_0x8BB5ECF21DDE505B(iLocal_72, 1);
					if (!unk_0xA6DECE14FC9A8C51(iLocal_99))
					{
						unk_0xE30CF11C0EE14316(&iLocal_99);
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_100))
					{
						iLocal_100 = func_63(iLocal_72, 1, 145);
					}
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 17f, 1f, 1073741824, 0);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_72, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
					unk_0x771A86309E0CA47B(iLocal_72, false);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					unk_0x4DE114E3C7F8B7C2("rghBoyfriend", &iLocal_160);
					unk_0xCE93FCB8A8D8DF0B(iLocal_72, iLocal_160);
					unk_0xF96119FCCD4D1889(4, -1533126372, iLocal_160);
					unk_0xF96119FCCD4D1889(1, -183807561, iLocal_160);
					unk_0xF96119FCCD4D1889(1, iLocal_160, -183807561);
					system::settimera(0);
					iLocal_57 = 7;
				}
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_102)
		{
			func_48();
			system::wait(0);
			func_1(&uLocal_161, cLocal_146, "REHH5_THX", 4, 0, 0, 0);
			iLocal_102 = 1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			unk_0x6931076730A4AC5D(&iLocal_75);
			unk_0x16416C5B54FDBCBB(0, 0, 4194369);
			unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 2052, 2);
			unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 3000);
			unk_0x380C1E7B7740D618(0, -346,029f, 632,2272f, 171,2525f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x380C1E7B7740D618(0, -346,6342f, 627,3992f, 170,3573f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x380C1E7B7740D618(0, -355,2473f, 622,1964f, 170,3572f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x380C1E7B7740D618(0, -355,6499f, 615,3431f, 170,3572f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x380C1E7B7740D618(0, -350,163f, 605,0463f, 170,7292f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x380C1E7B7740D618(0, -333,177f, 594,991f, 170,7553f, 1f, -1, 0,25f, 0, 1193033728);
			unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0xB6A7F1EF9625AE96(0, -1);
			unk_0x1B16DD5C115FE009(iLocal_75);
			unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
			unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
			unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
			unk_0x88235B448509228B(iLocal_71);
		}
		system::wait(2000);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		system::wait(3000);
		func_18();
	}
}

int func_63(int iParam0, bool bParam1, int iParam2)//Position - 0x33A5
{
	int iVar0;
	
	iVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x33F7
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_65(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_65(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_65(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)//Position - 0x349B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(int iParam0, bool bParam1, int iParam2)//Position - 0x34B2
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_80();
	}
	if (func_79(iParam2) == 4)
	{
	}
	bVar0 = Global_104555.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			if (!func_77(func_78(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_77(func_78(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_104555.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_76(iParam0, 0);
			func_74(func_78(iParam0), func_79(iParam2), 1);
			iVar1 = unk_0x63A6486593EC7EC3(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x872F1C1F8587CCC7(&(Global_2097152[func_73() /*12130*/].f_7676.f_1272), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_103549.f_15[iParam0] = unk_0x53C562FD2B9E3AB0();
		}
	}
	else if (bVar0)
	{
		func_67(func_78(iParam0), func_79(iParam2));
	}
}

void func_67(int iParam0, int iParam1)//Position - 0x35D6
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)//Position - 0x3619
{
	if (iParam1 > -1)
	{
		Global_103549.f_4[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
	}
	else
	{
		Global_103549.f_4[iParam0] = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(1200000, 2100000));
	}
}

void func_69(int iParam0)//Position - 0x3656
{
	if (iParam0 != -1)
	{
		Global_103549.f_3 = (unk_0x53C562FD2B9E3AB0() + iParam0);
	}
	else
	{
		Global_103549.f_3 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)//Position - 0x368D
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_71()//Position - 0x36B0
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

int func_72(int iParam0, var uParam1)//Position - 0x36E5
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

int func_73()//Position - 0x376B
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x3778
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_7();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_75();
			}
		}
	}
}

void func_75()//Position - 0x3922
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0xE3C33644878DCCFD("");
		StringCopy(&cVar1, unk_0xB2E1B414DD88808E(&(Global_2933[1 /*6*/])), 64);
		sVar2 = unk_0xB2E1B414DD88808E("CELL_253");
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xE3C33644878DCCFD("CELL_255");
		unk_0xA6D2B267C377D7B2(&(Global_2933[1 /*6*/]));
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 0);
}

void func_76(int iParam0, int iParam1)//Position - 0x399F
{
	Global_104555.f_243[func_80() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_77(int iParam0, int iParam1)//Position - 0x39BD
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x39E2
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_79(int iParam0)//Position - 0x3A7F
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_80()//Position - 0x3ADB
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
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
		
		default:
			switch (func_44(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_81(int iParam0, int iParam1)//Position - 0x3B69
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3BA6
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3C8D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_109();
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
					func_108(99, 1);
					func_107(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_93(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_89(5))
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
							func_107(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_107(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_107(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_107(joaat("sp2_money_spent_property"), iParam3);
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
									func_107(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_107(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_107(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
				
				case 1:
					func_108(97, iParam3);
					break;
				
				case 2:
					func_108(96, iParam3);
					break;
			}
			func_108(98, iParam3);
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
					func_107(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_107(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_107(joaat("sp2_total_cash_earned"), iParam3);
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

void func_84(bool bParam0)//Position - 0x429F
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

void func_85(int iParam0)//Position - 0x4521
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

void func_86(int iParam0)//Position - 0x457B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_28(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_73() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_73() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_87(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)//Position - 0x4650
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

void func_88(int iParam0)//Position - 0x46D6
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
}

bool func_89(int iParam0)//Position - 0x46F6
{
	if (iParam0 == 8)
	{
		return func_90(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_73() /*12130*/].f_7676.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x4744
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar1 = func_92(iParam0, iParam1);
	uVar2 = func_91(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_91(int iParam0)//Position - 0x4781
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

int func_92(int iParam0, int iParam1)//Position - 0x4A41
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
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

int func_93(bool bParam0)//Position - 0x4CD9
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
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1)//Position - 0x4D90
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1)//Position - 0x4DAB
{
	if (func_13(14) && !func_106(iParam0))
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
	if (func_105(&Global_4267379))
	{
		if (func_103(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_96(&Global_4267379, iParam0))
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

int func_96(var uParam0, int iParam1)//Position - 0x4E48
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_99(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_97(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_97(var uParam0, int iParam1)//Position - 0x4EF9
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_106(iParam1))
	{
		return 0;
	}
	if (func_103(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_98(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_98(var uParam0, int iParam1)//Position - 0x4F74
{
	return (*uParam0)[iParam1] == 78;
}

void func_99(var uParam0)//Position - 0x4F85
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_100(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4267378 - 0,5f));
}

void func_100(var uParam0, int iParam1)//Position - 0x4FB9
{
	(*uParam0)[iParam1] = 78;
}

void func_101(var uParam0, float fParam1)//Position - 0x4FC9
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

float func_102(var uParam0)//Position - 0x4FE6
{
	return uParam0->f_80;
}

bool func_103(var uParam0, int iParam1)//Position - 0x4FF2
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1)//Position - 0x5004
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

bool func_105(var uParam0)//Position - 0x5031
{
	return uParam0->f_79 == 1;
}

int func_106(int iParam0)//Position - 0x503F
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

void func_107(int iParam0, int iParam1)//Position - 0x508F
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_108(int iParam0, int iParam1)//Position - 0x50B2
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

void func_109()//Position - 0x510F
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

void func_110()//Position - 0x5184
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (!func_117())
			{
				if (unk_0xC816B63289F7A279(iLocal_71))
				{
					unk_0x88235B448509228B(iLocal_71);
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_71, 1227113341) != 1 && unk_0x78F50AA8F955BEFC(iLocal_71, 1227113341) != 0)
				{
					unk_0x4C7AF3B2BE8C3193(iLocal_71, unk_0xFC1458A37D98B502(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
				{
					unk_0x16416C5B54FDBCBB(iLocal_71, 0, 0);
				}
				if (!iLocal_110)
				{
					func_112(0);
					func_48();
					system::wait(0);
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 2)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 3)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 5)
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_110 = 1;
					}
				}
			}
			else
			{
				iLocal_110 = 0;
				if (unk_0x78F50AA8F955BEFC(iLocal_71, 1227113341) == 1 && unk_0x78F50AA8F955BEFC(iLocal_71, 1227113341) == 0)
				{
					unk_0xB8E08BD5B184DF4E(iLocal_71);
				}
			}
		}
		else if (!unk_0xC816B63289F7A279(iLocal_71))
		{
			unk_0x57FB41CABA25835C(iLocal_71, func_111());
			unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
			unk_0xF6A83791895D5AA1(iLocal_71, 0);
		}
	}
}

int func_111()//Position - 0x534B
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_112(bool bParam0)//Position - 0x535B
{
	if (bParam0)
	{
		if (iLocal_105)
		{
			if (func_116(&uLocal_161, cLocal_146, &Local_107, &Local_106, 8, 0, 0))
			{
				iLocal_105 = 0;
			}
		}
	}
	else if ((!iLocal_105 && unk_0x42111BD51D233AAB()) && !func_114())
	{
		Local_107 = { func_113() };
		Local_106 = { func_60() };
		func_55();
		iLocal_105 = 1;
	}
}

struct<6> func_113()//Position - 0x53B6
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_114()//Position - 0x53DA
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_115("REHH1_VEH") || func_115("REHH2_VEH")) || func_115("REHH3_VEH")) || func_115("REHH4_VEH")) || func_115("REHH5_VEH")) || func_115("REHH1_VEH2")) || func_115("REHH2_VEH2")) || func_115("REHH3_VEH2")) || func_115("REHH4_VEH2")) || func_115("REHH5_VEH2")) || func_115("REHH1_WLK")) || func_115("REHH2_WLK")) || func_115("REHH3_WLK")) || func_115("REHH4_WLK")) || func_115("REHH5_WLK")) || func_115("REHH1_SLR")) || func_115("REHH4_SLR")) || func_115("REHH1_SLW")) || func_115("REHH2_SLW")) || func_115("REHH3_SLW")) || func_115("REHH4_SLW")) || func_115("REHH5_SLW")) || func_115("REHH1_OUT")) || func_115("REHH2_GETOUT")) || func_115("REHH3_GETOUT")) || func_115("REHH5_GETOUT")) || func_115("REHH1_JACK")) || func_115("REHH2_JACK")) || func_115("REHH3_JACK")) || func_115("REHH5_JACK")) || func_115("REHH1_GUN")) || func_115("REHH2_SHOOT")) || func_115("REHH3_SHOOT")) || func_115("REHH5_SHOO")) || func_115("REHH1_1HOUR")) || func_115("REHH2_1HOUR")) || func_115("REHH1_HHOUR")) || func_115("REHH2_HHOUR")) || func_115("REHH1_CRASH")) || func_115("REHH1_WAY")) || func_115("REHH2_NEAR")) || func_115("REHH3_NEAR")) || func_115("REHH5_NEAR")) || func_115("REHH2_CULT")) || func_115("REHH3_CULT")) || func_115("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_115(char* sParam0)//Position - 0x5668
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_113()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_116(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5690
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_2(sParam2, iParam4, 0);
}

int func_117()//Position - 0x56E4
{
	if (iLocal_58 == 5)
	{
		if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if ((((!unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) && !unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) && !unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) && !unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rhino")))
			{
				if (unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		if (unk_0xB8DE76287EDC4957(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()), 0))
		{
			if (((!unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_118()//Position - 0x57F7
{
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		if (!iLocal_118)
		{
			iLocal_120 = unk_0x53C562FD2B9E3AB0();
			iLocal_118 = 1;
		}
		else
		{
			iLocal_122 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else
	{
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
	}
	if ((iLocal_122 - iLocal_120) > 3000 && (iLocal_122 - iLocal_121) > 6000)
	{
		if (!func_54())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_121 = iLocal_122;
		}
	}
	if ((iLocal_122 - iLocal_120) > 50000 && !iLocal_119)
	{
		func_112(0);
		func_48();
		system::wait(0);
		if (!func_54())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 2)
			{
				func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 3)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					if (!unk_0x908FD398D7712D05(iLocal_71))
					{
						unk_0x2CEA76A7F93740C6(iLocal_71);
					}
				}
				func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 5)
			{
				func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_119 = 1;
		}
	}
	if ((iLocal_122 - iLocal_120) > 60000 && iLocal_119)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			unk_0x8BB5ECF21DDE505B(iLocal_71, 1);
			if (unk_0xC816B63289F7A279(iLocal_71))
			{
				if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
				{
					if (unk_0x0C88267282FD588F(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
					{
						unk_0x380C1E7B7740D618(iLocal_71, vLocal_77, 1f, -1, 0,25f, 0, 1193033728);
					}
					else
					{
						unk_0x93F12E7D8D931858(iLocal_71, 1193033728, 0);
					}
					if (iLocal_58 == 1)
					{
						unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					}
					unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
					unk_0x88235B448509228B(iLocal_71);
					func_53();
				}
			}
		}
	}
}

void func_119()//Position - 0x59C1
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (unk_0xEA8E0258C31BCDE7(iLocal_71))
		{
			if (!iLocal_115)
			{
				iLocal_116 = unk_0x53C562FD2B9E3AB0();
				iLocal_115 = 1;
			}
			else
			{
				iLocal_117 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else
		{
			iLocal_115 = 0;
		}
	}
	if ((iLocal_117 - iLocal_116) > 90000)
	{
		func_112(0);
		func_48();
		system::wait(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			func_1(&uLocal_161, cLocal_146, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			unk_0x8BB5ECF21DDE505B(iLocal_71, 1);
			if (unk_0x0C88267282FD588F(iLocal_71, vLocal_77, 200f, 200f, 200f, false, true, 0))
			{
				unk_0x380C1E7B7740D618(iLocal_71, vLocal_77, 1f, -1, 0,25f, 0, 1193033728);
			}
			else
			{
				unk_0x93F12E7D8D931858(iLocal_71, 1193033728, 0);
			}
			if (iLocal_58 == 1)
			{
				unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
			if (unk_0xC816B63289F7A279(iLocal_71))
			{
				unk_0x88235B448509228B(iLocal_71);
			}
			func_53();
		}
	}
}

void func_120()//Position - 0x5B01
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0xA8D0477084E86A92(iLocal_71, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_99))
				{
					iLocal_99 = func_63(iLocal_71, 0, 145);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_69))
				{
					unk_0xE30CF11C0EE14316(&iLocal_69);
				}
			}
			else
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_69))
				{
					iLocal_69 = func_121(vLocal_77, 1);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_99))
				{
					unk_0xE30CF11C0EE14316(&iLocal_99);
				}
			}
		}
		else if (!unk_0xA6DECE14FC9A8C51(iLocal_99))
		{
			iLocal_99 = func_63(iLocal_71, 0, 145);
		}
		if (((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x88DDBE9908752BF0(iLocal_71, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_77, 50f, 50f, 50f, false, true, 0)) || unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0xA6DECE14FC9A8C51(iLocal_69))
			{
				iLocal_69 = func_121(vLocal_77, 1);
			}
		}
		else if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_77, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_69))
			{
				unk_0xE30CF11C0EE14316(&iLocal_69);
			}
		}
	}
}

int func_121(vector3 vParam0, bool bParam1)//Position - 0x5C37
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_65(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_122()//Position - 0x5C63
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) && unk_0x88DDBE9908752BF0(iLocal_71, 1)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_124())
			{
				func_50(0);
				iLocal_103 = 0;
			}
		}
		else if (!unk_0x908FD398D7712D05(iLocal_71))
		{
			if (func_54() && !iLocal_103)
			{
				func_50(1);
				iLocal_103 = 1;
			}
		}
		if (unk_0x908FD398D7712D05(iLocal_71))
		{
			unk_0x17C2522BB84F7DA7(iLocal_71, 0);
		}
		if (func_123("REHH3_CHT3_7"))
		{
			unk_0xB42437AE1AC08FDC(iLocal_71, 1, 1);
		}
		if (func_123("REHH3_CHT6_5"))
		{
			unk_0xB42437AE1AC08FDC(iLocal_71, 0, 1);
		}
		if (func_123("REHH3_CHT8_3"))
		{
			unk_0xB42437AE1AC08FDC(iLocal_71, 1, 1);
		}
		if ((func_115("REHH3_CHT8M") || func_115("REHH3_CHT8F")) || func_115("REHH3_CHT8T"))
		{
			unk_0xB42437AE1AC08FDC(iLocal_71, 0, 1);
		}
	}
}

int func_123(char* sParam0)//Position - 0x5D4E
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124()//Position - 0x5D76
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_125()//Position - 0x5D8D
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (iLocal_58 == 1)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0) && unk_0xA8D0477084E86A92(iLocal_71, unk_0xC733212BF9066BDF(), 0))
				{
					if (unk_0x9A3C64A7BB4588B3(unk_0xC733212BF9066BDF()))
					{
						if (!func_115("REHH1_CRASH"))
						{
							func_112(0);
							func_48();
							system::wait(0);
							func_1(&uLocal_161, cLocal_146, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_112)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 1) && unk_0xA8D0477084E86A92(iLocal_71, unk_0xC733212BF9066BDF(), 0))
				{
					func_112(0);
					func_48();
					system::wait(0);
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 3)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								if (!unk_0x908FD398D7712D05(iLocal_71))
								{
									unk_0x2CEA76A7F93740C6(iLocal_71);
								}
							}
							func_1(&uLocal_161, cLocal_146, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 5)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_112 = 1;
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0) && unk_0xA8D0477084E86A92(iLocal_71, unk_0xC733212BF9066BDF(), 0))
			{
				iLocal_112 = 0;
			}
		}
		if (!iLocal_113)
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
			{
				func_112(0);
				func_48();
				system::wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_113 = 1;
				}
			}
		}
		else if (!unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
		{
			iLocal_113 = 0;
		}
		if (!iLocal_114)
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				func_112(0);
				func_48();
				system::wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
						{
							if (!unk_0x908FD398D7712D05(iLocal_71))
							{
								unk_0x2CEA76A7F93740C6(iLocal_71);
							}
						}
						func_1(&uLocal_161, cLocal_146, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
					}
					iLocal_114 = 1;
				}
			}
		}
		else if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			iLocal_114 = 0;
		}
	}
}

void func_126()//Position - 0x6051
{
	if (func_128(vLocal_77))
	{
		func_112(0);
		func_48();
		system::wait(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (!unk_0x908FD398D7712D05(iLocal_71))
				{
					unk_0x2CEA76A7F93740C6(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_127())
	{
		func_112(0);
		func_48();
		system::wait(0);
		if (iLocal_58 == 1)
		{
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_161, cLocal_146, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (!unk_0x908FD398D7712D05(iLocal_71))
				{
					unk_0x2CEA76A7F93740C6(iLocal_71);
				}
			}
			func_1(&uLocal_161, cLocal_146, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_161, cLocal_146, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_127()//Position - 0x6174
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0xBE3C4023003180FC(-1014,154f, 4881,411f, 245,0001f, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 0), true) < 400f)
			{
				if (!Global_25473)
				{
					unk_0x8810DC630928B398("AC_EN_ROUTE_CULT");
					Global_25473 = 1;
					if (!Global_25472)
					{
						Global_25472 = 1;
						return 1;
					}
				}
			}
			else if (Global_25473)
			{
				unk_0x8810DC630928B398("AC_LEFT_AREA");
				Global_25473 = 0;
			}
		}
	}
	return 0;
}

int func_128(vector3 vParam0)//Position - 0x61EF
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_25471)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam0);
			}
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vParam0) > (fLocal_45 + 200f) || unk_0xBE3C4023003180FC(-1014,154f, 4881,411f, 245,0001f, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 0), true) < 400f)
			{
				Global_25471 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_129()//Position - 0x627C
{
	if (!func_114())
	{
		func_112(1);
	}
	if (!func_54())
	{
		switch (iLocal_86)
		{
			case 0:
				if (iLocal_58 == 1)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0() + 2000;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				iLocal_86++;
				break;
			
			case 1:
				if (iLocal_88 < unk_0x53C562FD2B9E3AB0())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_86++;
				}
				break;
			
			case 2:
				if (iLocal_88 < unk_0x53C562FD2B9E3AB0())
				{
					if (iLocal_58 == 1)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 2)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 5)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							if (!bLocal_90)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_86++;
				}
				break;
			
			case 3:
				if (iLocal_58 == 1)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0() + 500;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0();
				}
				iLocal_86++;
				break;
			
			case 4:
				if (iLocal_88 < unk_0x53C562FD2B9E3AB0())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_86++;
					}
					else if (iLocal_58 == 5)
					{
						if (bLocal_90 && !bLocal_92)
						{
							if (func_8() == 0)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_8() == 1)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_8() == 2)
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_86++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_58 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 6:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 7:
				if (iLocal_58 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 8:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 9:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 10:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 11:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 12:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 13:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 14:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 15:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 16:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 17:
				if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0() + 700;
				}
				iLocal_86++;
				break;
			
			case 18:
				if (iLocal_58 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_161, cLocal_146, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_86++;
				break;
			
			case 19:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_161, cLocal_146, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_161, cLocal_146, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_86++;
				break;
			
			case 20:
				if (iLocal_58 == 3)
				{
					iLocal_88 = unk_0x53C562FD2B9E3AB0() + 300;
				}
				iLocal_86++;
				break;
			
			case 21:
				if (iLocal_88 < unk_0x53C562FD2B9E3AB0())
				{
					if (iLocal_58 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_86++;
				}
				break;
			
			case 22:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					unk_0x12C9D41D52A560D6(iLocal_71, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_86++;
				break;
			}
	}
}

void func_130()//Position - 0x7137
{
	if (iLocal_58 != 3)
	{
		if (func_133())
		{
			system::settimera(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_77, 3f, 3f, 2f, true, true, 0) && unk_0x0C88267282FD588F(iLocal_71, vLocal_77, Global_19, false, true, 0))
				{
					if (func_132(1, 0, 1))
					{
						func_131();
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), (10,5f + 2f), 3, 0);
						}
						unk_0x2CEA76A7F93740C6(iLocal_71);
						iLocal_57 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_90)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_72))
		{
			iLocal_57 = 7;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 805,501f, 1269,926f, 361,4025f, 25f, 30f, 2f, false, true, 0) || (unk_0x0C88267282FD588F(iLocal_71, 824,8886f, 1275,671f, 359,4312f, Global_19, true, true, 0) && unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				system::wait(0);
				func_1(&uLocal_161, cLocal_146, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && !unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						unk_0x2CEA76A7F93740C6(iLocal_71);
						unk_0x6931076730A4AC5D(&iLocal_75);
						unk_0xCB3D88C918AA637C(0);
						unk_0x60C06BFD037BB7CF(0, iLocal_72, -1, 2052, 4);
						unk_0x16416C5B54FDBCBB(0, 500, 0);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, 5f, 1f, 1073741824, 0);
						unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0xAC838A977FB6E6BC(0, iLocal_72, -1);
						unk_0x1B16DD5C115FE009(iLocal_75);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					}
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
					{
						unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), (10,5f + 2f), 2, 0);
					}
				}
				system::settimera(0);
				iLocal_57 = 6;
			}
		}
	}
}

void func_131()//Position - 0x731E
{
	Global_14622 = 0;
	func_16();
}

int func_132(bool bParam0, bool bParam1, bool bParam2)//Position - 0x732E
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

int func_133()//Position - 0x7413
{
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0xAAA8D20859E2D36D(iLocal_71, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_77, 50f, 50f, 50f, false, true, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_134()//Position - 0x7494
{
	if (bLocal_92)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_72))
		{
			if ((((unk_0x3AB6A1A9084FB0A4(iLocal_72) || !unk_0x21B6FFFD04C9FF3A(iLocal_72, unk_0xFC1458A37D98B502(), 150f, 150f, 150f, 0, 1, 0)) || system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_77) < 250f) || system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_79) < 250f) || iLocal_94)
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_100))
				{
					unk_0xE30CF11C0EE14316(&iLocal_100);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_101))
				{
					unk_0xE30CF11C0EE14316(&iLocal_101);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					unk_0x0F5CA7E22DF79A5F(iLocal_72, 6, 0f, 0);
					unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					unk_0x486F346ADFE56674(&iLocal_72);
				}
				func_48();
				system::wait(0);
				func_1(&uLocal_161, cLocal_146, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x486F346ADFE56674(&iLocal_72);
				if (unk_0x6ADD12BF4D6D2587(iLocal_139))
				{
					unk_0x5380482A432E314E(&iLocal_139);
				}
				bLocal_92 = false;
			}
			else
			{
				if (!iLocal_95)
				{
					if (!func_54())
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_161, cLocal_146, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_95 = 1;
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					func_142(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_141(&iLocal_72, &iLocal_100, &iLocal_139, &iLocal_101);
					func_135(iLocal_139, unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_153, &uLocal_156, &vLocal_158, &fLocal_157, &uLocal_159, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x21B6FFFD04C9FF3A(iLocal_72, unk_0xFC1458A37D98B502(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_87 < unk_0x53C562FD2B9E3AB0())
						{
							if (!func_54())
							{
								if (func_58())
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_87 = unk_0x53C562FD2B9E3AB0() + 8000;
							}
						}
						if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
						{
							if (!func_115("REHH5_SHO"))
							{
								func_48();
								system::wait(0);
								func_1(&uLocal_161, cLocal_146, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && !unk_0x3AB6A1A9084FB0A4(iLocal_72))
						{
							if ((unk_0xEA8E0258C31BCDE7(iLocal_72) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4)) && unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()))
							{
								iLocal_94 = 1;
							}
						}
					}
					if (!iLocal_93 && !unk_0x3AB6A1A9084FB0A4(iLocal_72))
					{
						if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_72, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xD7F5B2902EBBD04E(iLocal_72, unk_0xFC1458A37D98B502(), 0, 16);
							func_48();
							system::wait(0);
							func_1(&uLocal_161, cLocal_146, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_93 = 1;
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)//Position - 0x7775
{
	vector3 vVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (((((((unk_0x6ADD12BF4D6D2587(iParam1) && iParam0 != iParam1) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam1))) && unk_0x5E0BEAAD15B888F3(iParam1)) && func_140(iParam0))
		{
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x9EA50C5EC175E58E(*uParam2, *uParam3, vParam7) };
				*uParam3 = func_139(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(iParam1, 1));
				func_138(iParam1, uParam4, uParam5);
			}
			if (!unk_0xEC211A86AB3726B6(iParam0))
			{
				*uParam6 = unk_0x53C562FD2B9E3AB0();
			}
			else if ((unk_0x53C562FD2B9E3AB0() - *uParam6) > iParam8)
			{
				if (func_137(iParam0, iParam1, 1) > fParam9 && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam2, true) > 20f)
				{
					if (!func_136(*uParam2))
					{
						if (!unk_0x9E06F0EE20F58CED(*uParam2, 3f))
						{
							unk_0x60225D4F755DFDB1(*uParam2, 1,5f, 0);
							unk_0x9B8406983378711E(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0xBD8D47FDC6902B2D(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iParam0, *uParam3);
							unk_0xACE486395AA1867D(iParam0, 1084227584);
							unk_0xFB2E9855F95E3BD3(iParam0, 10f);
							unk_0xA15269351F50F113(iParam0, true, true, 0);
							*uParam6 = unk_0x53C562FD2B9E3AB0();
						}
						else
						{
							vVar0 = { unk_0x9EA50C5EC175E58E(vLocal_158, fLocal_157, vParam7) };
							if (!func_136(vVar0))
							{
								if (!unk_0x9E06F0EE20F58CED(vVar0, 2f))
								{
									unk_0x60225D4F755DFDB1(vVar0, 1,5f, 0);
									unk_0x9B8406983378711E(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0xBD8D47FDC6902B2D(iParam0, vVar0, 1, false, 0, 1);
									unk_0x48ED7B2293A96722(iParam0, fLocal_157);
									unk_0xACE486395AA1867D(iParam0, 1084227584);
									unk_0xFB2E9855F95E3BD3(iParam0, 10f);
									unk_0xA15269351F50F113(iParam0, true, true, 0);
									*uParam6 = unk_0x53C562FD2B9E3AB0();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x53C562FD2B9E3AB0();
		}
	}
}

int func_136(vector3 vParam0)//Position - 0x79A8
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x79D2
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

void func_138(int iParam0, var uParam1, var uParam2)//Position - 0x7A30
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			*uParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			*uParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
	}
}

float func_139(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x7A60
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_140(int iParam0)//Position - 0x7A7A
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (!unk_0x8EE3A848975DDF21(iParam0, -1, 0))
			{
				iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7AC5
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam2))
	{
		if (unk_0xB8DE76287EDC4957(*iParam2, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
			{
				if (unk_0xA8D0477084E86A92(*iParam0, *iParam2, 0))
				{
					if (unk_0xA6DECE14FC9A8C51(*iParam1))
					{
						unk_0xE30CF11C0EE14316(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xA6DECE14FC9A8C51(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_121(unk_0xB3328BA8976B416C(*iParam2, 1), 0);
					unk_0x0C71C8E276E3EC54(*iParam3, 1);
					unk_0xF27F72CA15E148EE(*iParam3, 9);
					unk_0x62BD54E491535B76(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0x67247AA13B7486A3(*iParam3) };
				vVar2 = { unk_0xB3328BA8976B416C(*iParam2, 1) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * system::timestep()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * system::timestep()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * system::timestep()));
				unk_0x645FF8D8B599FD84(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0xE30CF11C0EE14316(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				unk_0xE30CF11C0EE14316(iParam3);
			}
			if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
			{
				if (!unk_0xA6DECE14FC9A8C51(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7C10
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0xE30CF11C0EE14316(iParam1);
			}
			unk_0x486F346ADFE56674(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x88DDBE9908752BF0(*iParam0, 0))
			{
			}
			else if (unk_0x6ADD12BF4D6D2587(*iParam2))
			{
				if (unk_0xB8DE76287EDC4957(*iParam2, 0))
				{
					if (unk_0xA8D0477084E86A92(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(*iParam2))
	{
		if (unk_0xB8DE76287EDC4957(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x68130C56528B2CAD(*iParam2);
				unk_0x7E447606AE486B36(*iParam2);
				unk_0xF0037A481D043FE1(*iParam2, 0);
				unk_0x5380482A432E314E(iParam2);
				if (unk_0xA6DECE14FC9A8C51(*iParam3))
				{
					unk_0xE30CF11C0EE14316(iParam3);
				}
			}
		}
		else
		{
			unk_0x68130C56528B2CAD(*iParam2);
			unk_0x7E447606AE486B36(*iParam2);
			unk_0xF0037A481D043FE1(*iParam2, 0);
			unk_0x5380482A432E314E(iParam2);
			if (unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				unk_0xE30CF11C0EE14316(iParam3);
			}
		}
	}
}

void func_143()//Position - 0x7D01
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 655,7768f, 1282,45f, 359,048f, 802,4241f, 1278,077f, 382,4866f, 77f, 0, true, 0) || unk_0x0F3033474C49912D(iLocal_72, 655,7768f, 1282,45f, 359,048f, 802,4241f, 1278,077f, 382,4866f, 77f, 0, true, 0))
		{
			if (unk_0x50126692B8A3590A(801,7148f, 1270,138f, 359,2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 801,7148f, 1270,138f, 359,2855f, 0, 0f, 0);
			}
			if (unk_0x50126692B8A3590A(802,9218f, 1281,675f, 359,2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 802,9218f, 1281,675f, 359,2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x50126692B8A3590A(801,7148f, 1270,138f, 359,2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 801,7148f, 1270,138f, 359,2855f, 1, 0f, 0);
			}
			if (unk_0x50126692B8A3590A(802,9218f, 1281,675f, 359,2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 802,9218f, 1281,675f, 359,2962f, 1, 0f, 0);
			}
		}
	}
}

void func_144()//Position - 0x7E59
{
	if (!bLocal_90)
	{
		if (iLocal_58 == 3)
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_84, 200f, 200f, 200f, false, true, 0))
			{
				unk_0x6FF834D85E2DD4C6(iLocal_81);
				unk_0x7C0C9D9129095E19("move_m@brave");
				if (unk_0x9A0B2ED5055D3F0B(iLocal_81) && unk_0xD9C499EAA1D3F82A("move_m@brave"))
				{
					iLocal_72 = unk_0xAC992EFAD62C33BF(26, iLocal_81, vLocal_84, fLocal_85, 1, true);
					unk_0x03924C68EFCBC511(iLocal_72, 0, 2, 1, 0);
					unk_0x03924C68EFCBC511(iLocal_72, 3, 0, 2, 0);
					unk_0x771A86309E0CA47B(iLocal_72, true);
					unk_0xAE01EF4BC84AFE7C(iLocal_72, 42, true);
					unk_0xA37FFE314E45ED5D(iLocal_72, true);
					unk_0x60C54803C97FDAAB(iLocal_72, "move_m@brave", 1048576000);
					unk_0xAE01EF4BC84AFE7C(iLocal_72, 137, true);
					func_148(&uLocal_161, 4, iLocal_72, sLocal_148, 0, 1);
					unk_0x12C9D41D52A560D6(iLocal_72, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x60C06BFD037BB7CF(iLocal_72, unk_0xFC1458A37D98B502(), -1, 2052, 4);
					unk_0x14776E43F90DD454(iLocal_81);
					bLocal_90 = true;
				}
			}
		}
		else if (iLocal_58 == 5)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_67, true) > 320f && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0xA8D0477084E86A92(iLocal_71, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
					{
						if (unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x63A6486593EC7EC3(2, 5), &vLocal_62, 1, 3f, 0f))
						{
							if (!unk_0x9E06F0EE20F58CED(vLocal_62, 7f) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_62) < 110f)
							{
								unk_0x6FF834D85E2DD4C6(iLocal_81);
								if (unk_0x9A0B2ED5055D3F0B(iLocal_81))
								{
									func_55();
									system::wait(0);
									if (func_147(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
									{
										iLocal_139 = unk_0xEA60F3B426BB095B(iLocal_82, vLocal_62, func_145(vLocal_62, func_146(unk_0x9EB17624F44A8DA4()), 1), true, true, false);
										unk_0x1E7A8525FB41AAFE(iLocal_139, 134, 134);
										unk_0xF95D8D0BCEC9D59A(iLocal_139, 0f);
										iLocal_72 = unk_0x00D1A9572426E8DD(iLocal_139, 26, iLocal_81, -1, 1, true);
										unk_0x03924C68EFCBC511(iLocal_72, 0, 1, 1, 0);
										unk_0x03924C68EFCBC511(iLocal_72, 2, 1, 0, 0);
										unk_0xAE01EF4BC84AFE7C(iLocal_72, 42, true);
										unk_0x8BB5ECF21DDE505B(iLocal_72, 1);
										func_148(&uLocal_161, 4, iLocal_72, sLocal_148, 0, 1);
										unk_0xACE486395AA1867D(iLocal_139, 1084227584);
										unk_0xD2C269DBF147B406(iLocal_72, iLocal_139, iLocal_71, 6, 60f, 786468, -1f, -1f, 1);
										unk_0xD7F5B2902EBBD04E(iLocal_72, unk_0xFC1458A37D98B502(), 0, 16);
										unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
										unk_0x14776E43F90DD454(iLocal_81);
										unk_0x14776E43F90DD454(iLocal_82);
										unk_0xFB2E9855F95E3BD3(iLocal_139, (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) + 15f));
										if (unk_0xA6DECE14FC9A8C51(iLocal_69))
										{
											unk_0xE30CF11C0EE14316(&iLocal_69);
										}
										func_55();
										while (func_54())
										{
											system::wait(0);
										}
										func_116(&uLocal_161, cLocal_146, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_92 = true;
										bLocal_90 = true;
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

float func_145(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x811A
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

Vector3 func_146(int iParam0)//Position - 0x817F
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_147(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8192
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_2(sParam2, iParam4, 0);
}

void func_148(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x81E6
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

void func_149()//Position - 0x8281
{
	if (!iLocal_144 && !func_54())
	{
		if (iLocal_142 == 6 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 6 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 7 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 7 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 8 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 8 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 9 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 9 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 10 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 10 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 11 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 11 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 12 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 12 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 13 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 13 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 14 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 14 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 15 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 15 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 16 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 16 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 17 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 17 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 18 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 18 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 19 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 19 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 20 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 20 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 21 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 21 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 22 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 22 && iLocal_141 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
		if (iLocal_142 == 23 && iLocal_141 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_161, cLocal_146, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_144 = 1;
		}
	}
}

void func_150()//Position - 0x8887
{
	iLocal_123 = func_155(func_156()) * 1000;
	iLocal_123 = (iLocal_123 + func_154(func_156()) * 1000 * 60);
	if (!iLocal_132)
	{
		if ((iLocal_142 >= 24 && iLocal_123 < 150000) || (iLocal_142 >= 24 && iLocal_123 < 150000))
		{
			func_151((((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_151(((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_142 >= 24 && iLocal_123 < 150000) || (iLocal_142 >= 24 && iLocal_123 < 150000))
	{
		func_151((((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_151(((iLocal_142 * 1000 * 60 - func_154(func_156()) * 1000 * 60) + (iLocal_141 * 1000 - func_155(func_156()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == func_155(func_156())) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == func_155(func_156())))
	{
		if (!iLocal_131)
		{
			if (!func_115("REHH1_1HOUR") && !func_115("REHH4_1HOUR"))
			{
				func_112(0);
			}
			func_48();
			system::wait(0);
			if (!func_54())
			{
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_161, cLocal_146, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_131 = 1;
			}
		}
	}
	if (iLocal_141 == 30)
	{
		if ((iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()) + 30) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 24) && iLocal_141 == func_155(func_156()) + 30))
		{
			if (!iLocal_132)
			{
				if (!func_115("REHH1_HHOUR") && !func_115("REHH4_HHOUR"))
				{
					func_112(0);
				}
				func_48();
				system::wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_132 = 1;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0x922FC70048B5A79D(iLocal_145, "countdown_fadein", 35f);
					unk_0xE859EF37EA7362D3("TIMER_SCENE");
					iLocal_133 = 1;
				}
			}
		}
		if ((iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()) + 5) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 24) && iLocal_141 == func_155(func_156()) + 5))
		{
			if (!iLocal_134)
			{
				unk_0x922FC70048B5A79D(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_141 == 0)
	{
		if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == (func_155(func_156()) - 30)) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == (func_155(func_156()) - 30)))
		{
			if (!iLocal_132)
			{
				if (!func_115("REHH1_HHOUR") && !func_115("REHH4_HHOUR"))
				{
					func_112(0);
				}
				func_48();
				system::wait(0);
				if (!func_54())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_161, cLocal_146, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_132 = 1;
				}
				if (!iLocal_133)
				{
					iLocal_145 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(iLocal_145, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0x922FC70048B5A79D(iLocal_145, "countdown_fadein", 35f);
					unk_0xE859EF37EA7362D3("TIMER_SCENE");
					iLocal_133 = 1;
				}
			}
		}
		if ((iLocal_142 == func_154(func_156()) + 1 && iLocal_141 == (func_155(func_156()) - 55)) || (((iLocal_142 >= 24 && iLocal_123 < 150000) && iLocal_142 == func_154(func_156()) + 25) && iLocal_141 == (func_155(func_156()) - 55)))
		{
			if (!iLocal_134)
			{
				unk_0x922FC70048B5A79D(iLocal_145, "countdown_fast", 1f);
				iLocal_134 = 1;
			}
		}
	}
	if (iLocal_142 >= 24 && iLocal_123 < 150000)
	{
		if (iLocal_142 == func_154(func_156()) + 24 && iLocal_141 == func_155(func_156()))
		{
			bLocal_143 = true;
		}
	}
	else if (iLocal_142 == func_154(func_156()) && iLocal_141 == func_155(func_156()))
	{
		bLocal_143 = true;
	}
	if (bLocal_143)
	{
		func_48();
		system::wait(0);
		unk_0x0B9D04994D02CC2F(iLocal_145);
		unk_0xE02E32C69260FBB7("TIMER_SCENE");
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_161, cLocal_146, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
			{
				unk_0xA1AA40A93CA0F40D(unk_0xDFD115BB10FE46A9(iLocal_71, 0), (10,5f + 2f), 2, 0);
				unk_0x16416C5B54FDBCBB(iLocal_71, 1, 0);
				unk_0x88235B448509228B(iLocal_71);
				if (unk_0xA6DECE14FC9A8C51(iLocal_69))
				{
					unk_0xE30CF11C0EE14316(&iLocal_69);
				}
			}
		}
		iLocal_57 = 9;
	}
}

void func_151(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x8E44
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_152(7, iVar0);
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

void func_152(int iParam0, int iParam1)//Position - 0x8F92
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)//Position - 0x8FAB
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

int func_154(int iParam0)//Position - 0x8FC4
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_155(int iParam0)//Position - 0x8FD7
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_156()//Position - 0x8FEA
{
	var uVar0;
	
	func_166(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_165(&uVar0, unk_0x95327550F0F2BE7C());
	func_164(&uVar0, unk_0x674C9438180770FE());
	func_159(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_158(&uVar0, unk_0xEAF455949B108589());
	func_157(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_157(var uParam0, int iParam1)//Position - 0x9030
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

void func_158(var uParam0, int iParam1)//Position - 0x90B6
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)//Position - 0x90E9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_163(*uParam0);
	iVar1 = func_161(*uParam0);
	if (iParam1 < 1 || iParam1 > func_160(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_160(int iParam0, int iParam1)//Position - 0x913A
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

int func_161(int iParam0)//Position - 0x91DC
{
	return (system::shift_right(iParam0, 26) & 31 * func_162(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_162(bool bParam0, int iParam1, int iParam2)//Position - 0x9201
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_163(int iParam0)//Position - 0x9218
{
	return iParam0 & 15;
}

void func_164(var uParam0, int iParam1)//Position - 0x9225
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_165(var uParam0, int iParam1)//Position - 0x925F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_166(var uParam0, int iParam1)//Position - 0x929A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

void func_167()//Position - 0x92D6
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0) && unk_0xA8D0477084E86A92(iLocal_71, unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_99))
				{
					unk_0xE30CF11C0EE14316(&iLocal_99);
				}
				if (!unk_0xC816B63289F7A279(iLocal_71))
				{
					unk_0x57FB41CABA25835C(iLocal_71, func_111());
					unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
					unk_0xF6A83791895D5AA1(iLocal_71, 0);
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_69))
				{
					iLocal_69 = func_121(vLocal_77, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_58 != 1) && iLocal_58 != 4)
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_70))
					{
						iLocal_70 = func_121(vLocal_79, 0);
						unk_0x4B4040A0EC7DBA81(iLocal_70, 269);
						func_168();
					}
				}
				if (iLocal_58 == 1)
				{
					if (!func_54())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_142 = func_154(func_156()) + 2;
						if (func_155(func_156()) >= 30)
						{
							iLocal_141 = 0;
							iLocal_142++;
						}
						else
						{
							iLocal_141 = 30;
						}
						iLocal_89 = 1;
						system::settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						system::settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						system::settimera(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 5)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_89 = 1;
						system::settimera(0);
						iLocal_57 = 4;
					}
				}
			}
		}
	}
}

void func_168()//Position - 0x946F
{
	if (func_8() == 2)
	{
		if (!Global_25470)
		{
			func_169("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_169(char* sParam0, int iParam1)//Position - 0x9493
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_170()//Position - 0x94AA
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (iLocal_88 < unk_0x53C562FD2B9E3AB0())
				{
					func_1(&uLocal_161, cLocal_146, "REHH5_STO", 4, 0, 0, 0);
					iLocal_88 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6500));
				}
				if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 24f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0,5f);
						}
						unk_0x6931076730A4AC5D(&iLocal_75);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fLocal_152, 2f, 1073741824, 0);
						unk_0x1B16DD5C115FE009(iLocal_75);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 12f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
					fLocal_152 = (fLocal_152 - 0,25f);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fLocal_152, 2f, 1073741824, 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DECE14FC9A8C51(iLocal_99))
			{
				unk_0x9C27373CC69ECF87(iLocal_99, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 25f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 150f))
							{
								unk_0x2CEA76A7F93740C6(iLocal_71);
								unk_0x6931076730A4AC5D(&iLocal_75);
								unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 4);
								if (unk_0x8EE3A848975DDF21(iLocal_73, 0, 0))
								{
									unk_0x1C0FEF3EF4965A09(0, iLocal_73, -1, 0, 2f);
								}
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x1B16DD5C115FE009(iLocal_75);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0xB8DE76287EDC4957(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 25f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH5_ASK", 4, 0, 0, 0))
								{
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 25f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPA", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPB", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH5_RPC", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 25f)
				{
					if (func_117())
					{
						if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							if (unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 0, 0))
							{
								unk_0x57FB41CABA25835C(iLocal_71, func_111());
								unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
								unk_0xF6A83791895D5AA1(iLocal_71, 0);
								unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
								unk_0x6F8C8278B7C06889(iLocal_71, unk_0xC733212BF9066BDF(), -1, 0, 2f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0x317536BCEA8FA6B0(unk_0xC733212BF9066BDF(), 0, 0);
								if (unk_0x3AB6A1A9084FB0A4(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(iLocal_71);
									unk_0x57FB41CABA25835C(iLocal_71, func_111());
									unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
									unk_0xF6A83791895D5AA1(iLocal_71, 1);
									unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (func_117())
				{
					if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						unk_0xCB3D88C918AA637C(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (system::timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x88235B448509228B(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108 = 4;
				}
			}
			break;
	}
}

void func_171()//Position - 0x9AEA
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_25468 = 1;
		}
	}
}

float func_172(int iParam0, int iParam1)//Position - 0x9B06
{
	return func_137(iParam0, iParam1, 1);
}

void func_173()//Position - 0x9B17
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 12f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0,5f);
						}
						unk_0x2CEA76A7F93740C6(iLocal_71);
						unk_0x6931076730A4AC5D(&iLocal_75);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
						unk_0xF2163C96119FBF4B(0, unk_0xFC1458A37D98B502(), 2,5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x1B16DD5C115FE009(iLocal_75);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 8f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
					fLocal_152 = (fLocal_152 - 0,25f);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fLocal_152, 1f, 1073741824, 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DECE14FC9A8C51(iLocal_99))
			{
				unk_0x9C27373CC69ECF87(iLocal_99, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 10f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 150f))
							{
								unk_0x2CEA76A7F93740C6(iLocal_71);
								unk_0x6931076730A4AC5D(&iLocal_75);
								unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 4);
								if (unk_0x8EE3A848975DDF21(iLocal_73, 0, 0))
								{
									unk_0x1C0FEF3EF4965A09(0, iLocal_73, -1, 0, 1f);
								}
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x1B16DD5C115FE009(iLocal_75);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0xB8DE76287EDC4957(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 13f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH3_ASK", 4, 0, 0, 0))
								{
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x0F299BBD0DC14B18(iLocal_71))
				{
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPA", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPB", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH3_RPC", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
				{
					if (func_117())
					{
						if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							if (unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 0, 0))
							{
								unk_0x57FB41CABA25835C(iLocal_71, func_111());
								unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
								unk_0xF6A83791895D5AA1(iLocal_71, 0);
								unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
								unk_0x6F8C8278B7C06889(iLocal_71, unk_0xC733212BF9066BDF(), -1, 0, 1f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0x317536BCEA8FA6B0(unk_0xC733212BF9066BDF(), 0, 0);
								if (unk_0x3AB6A1A9084FB0A4(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(iLocal_71);
									unk_0x57FB41CABA25835C(iLocal_71, func_111());
									unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
									unk_0xF6A83791895D5AA1(iLocal_71, 1);
									unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (func_117())
				{
					unk_0x5C57ECBE59C08573(iLocal_71, 1f);
					if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						unk_0xCB3D88C918AA637C(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (system::timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x88235B448509228B(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108 = 4;
				}
			}
			break;
	}
}

void func_174()//Position - 0xA136
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 12f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
						if (fLocal_152 > 5f)
						{
							fLocal_152 = (fLocal_152 - 1f);
						}
						else
						{
							fLocal_152 = (fLocal_152 - 0,5f);
						}
						unk_0x6931076730A4AC5D(&iLocal_75);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fLocal_152, 1f, 1073741824, 0);
						unk_0x1B16DD5C115FE009(iLocal_75);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
						iLocal_108++;
					}
				}
				else if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 8f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
				{
					fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
					fLocal_152 = (fLocal_152 - 0,25f);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fLocal_152, 1f, 1073741824, 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DECE14FC9A8C51(iLocal_99))
			{
				unk_0x9C27373CC69ECF87(iLocal_99, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 10f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 150f))
							{
								unk_0x2CEA76A7F93740C6(iLocal_71);
								unk_0x6931076730A4AC5D(&iLocal_75);
								unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
								if (unk_0x8EE3A848975DDF21(iLocal_73, 0, 0))
								{
									unk_0x1C0FEF3EF4965A09(0, iLocal_73, -1, 0, 1f);
								}
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x1B16DD5C115FE009(iLocal_75);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
								func_48();
								system::wait(0);
								iLocal_108++;
							}
						}
					}
				}
				else if (!iLocal_109)
				{
					unk_0xB8E08BD5B184DF4E(iLocal_71);
					unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 7000, 2052, 2);
					if (func_1(&uLocal_161, cLocal_146, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0xB8DE76287EDC4957(iLocal_73, 0))
				{
					if (func_137(iLocal_71, iLocal_73, 1) < 13f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								if (func_1(&uLocal_161, cLocal_146, "REHH2_ASK", 4, 0, 0, 0))
								{
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x0F299BBD0DC14B18(iLocal_71))
				{
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
					{
						if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPA", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPB", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_161, cLocal_146, "REHH2_RPC", 4, 0, 0, 0);
									system::settimera(0);
									iLocal_108++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
				{
					if (func_117())
					{
						iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
						{
							if (unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 0, 0))
							{
								unk_0x57FB41CABA25835C(iLocal_71, func_111());
								unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
								unk_0xF6A83791895D5AA1(iLocal_71, 0);
								unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
								unk_0x6F8C8278B7C06889(iLocal_71, unk_0xC733212BF9066BDF(), -1, 0, 1f, 1, 0);
								func_171();
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0x317536BCEA8FA6B0(unk_0xC733212BF9066BDF(), 0, 0);
								if (unk_0x3AB6A1A9084FB0A4(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(iLocal_71);
									unk_0x57FB41CABA25835C(iLocal_71, func_111());
									unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
									unk_0xF6A83791895D5AA1(iLocal_71, 1);
									unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						if (!func_54())
						{
							if (!func_177())
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_161, cLocal_146, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_110 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (!iLocal_83)
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_54())
						{
							if (func_1(&uLocal_161, cLocal_146, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
				}
				if (func_117())
				{
					unk_0x5C57ECBE59C08573(iLocal_71, 1f);
					if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						unk_0xCB3D88C918AA637C(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (system::timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0x88235B448509228B(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108 = 4;
				}
				if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_175()//Position - 0xA792
{
	int iVar0;
	
	switch (iLocal_108)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 12f || (unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()) && func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 30f))
				{
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_71, 5000, 2052, 2);
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
						{
							unk_0x6931076730A4AC5D(&iLocal_75);
							unk_0x60C06BFD037BB7CF(0, iLocal_73, 30000, 2054, 2);
							unk_0x12C9D41D52A560D6(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_75);
							unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
						}
						iLocal_108++;
					}
					else if (!iLocal_109)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_71);
						unk_0x6931076730A4AC5D(&iLocal_75);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2054, 2);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
						unk_0x1B16DD5C115FE009(iLocal_75);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DECE14FC9A8C51(iLocal_99))
			{
				unk_0x9C27373CC69ECF87(iLocal_99, true);
			}
			if (func_117())
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x90D5DFB054818BA7(iLocal_73) < 10f)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
						{
							if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 150f))
							{
								fLocal_152 = func_137(iLocal_71, unk_0xFC1458A37D98B502(), 1);
								if (fLocal_152 > 5f)
								{
									fLocal_152 = (fLocal_152 - 0,5f);
								}
								else
								{
									fLocal_152 = (fLocal_152 - 0,25f);
								}
								unk_0x6931076730A4AC5D(&iLocal_75);
								unk_0x60C06BFD037BB7CF(0, iLocal_73, 10000, 2054, 2);
								if (unk_0x8EE3A848975DDF21(iLocal_73, 0, 0))
								{
									unk_0x1C0FEF3EF4965A09(0, iLocal_73, -1, 0, 1f);
								}
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
								unk_0x1B16DD5C115FE009(iLocal_75);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
								iLocal_108++;
							}
							else
							{
								unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_73, 10000, 2054, 2);
								iLocal_108++;
							}
						}
					}
				}
			}
			else if (!iLocal_109)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2054, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					if (!func_54())
					{
						if (!func_177())
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_109 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0xB8DE76287EDC4957(iLocal_73, 0))
			{
				if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
				{
					func_131();
					iLocal_108++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && unk_0xB8DE76287EDC4957(iLocal_73, 0))
			{
				if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
				{
					if (func_1(&uLocal_161, cLocal_146, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x2CEA76A7F93740C6(iLocal_71);
						system::settimera(0);
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (unk_0x0F299BBD0DC14B18(iLocal_71))
				{
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				}
				if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iLocal_73 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
						{
							if (unk_0x90D5DFB054818BA7(iLocal_73) < 2,5f)
							{
								if (!func_54())
								{
									if (func_8() == 0)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPA", 4, 0, 0, 0);
										system::settimera(0);
										iLocal_108++;
									}
									else if (func_8() == 1)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPB", 4, 0, 0, 0);
										system::settimera(0);
										iLocal_108++;
									}
									else if (func_8() == 2)
									{
										func_1(&uLocal_161, cLocal_146, "REHH1_RPC", 4, 0, 0, 0);
										system::settimera(0);
										iLocal_108++;
									}
								}
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) < 15f)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (func_117())
						{
							if (unk_0x8EE3A848975DDF21(unk_0xC733212BF9066BDF(), 0, 0))
							{
								unk_0x57FB41CABA25835C(iLocal_71, func_111());
								unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
								unk_0xF6A83791895D5AA1(iLocal_71, 0);
								unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
								unk_0x6F8C8278B7C06889(iLocal_71, unk_0xC733212BF9066BDF(), -1, 0, 1f, 1, 0);
								iLocal_108++;
							}
							else
							{
								iVar0 = unk_0x317536BCEA8FA6B0(unk_0xC733212BF9066BDF(), 0, 0);
								if (unk_0x3AB6A1A9084FB0A4(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									unk_0xB8E08BD5B184DF4E(iLocal_71);
									unk_0x57FB41CABA25835C(iLocal_71, func_111());
									unk_0xA7C52BDFAE69B37F(iLocal_71, 1);
									unk_0xF6A83791895D5AA1(iLocal_71, 1);
									unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), 10000, 2052, 2);
									iLocal_108++;
								}
							}
						}
						else if (!iLocal_110)
						{
							if (!func_54())
							{
								if (!func_177())
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_161, cLocal_146, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_110 = 1;
							}
						}
					}
					else if (!iLocal_109)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_109 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				if (func_117())
				{
					unk_0x5C57ECBE59C08573(iLocal_71, 1f);
					if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						unk_0xCB3D88C918AA637C(iLocal_71);
						iLocal_89 = 1;
						iLocal_57 = 3;
					}
					else if (system::timera() > 60000)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0x88235B448509228B(iLocal_71);
					unk_0x6931076730A4AC5D(&iLocal_75);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_75);
					unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
					iLocal_108 = 5;
				}
				if (func_172(iLocal_71, unk_0xFC1458A37D98B502()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_176()//Position - 0xADD1
{
	int iVar0;
	
	if ((iLocal_126 - iLocal_125) > 1000)
	{
		iLocal_140 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(iLocal_71, 0), 18f, 0, 4);
	}
	if (iLocal_140 != 0)
	{
		iLocal_124++;
		iLocal_125 = unk_0x53C562FD2B9E3AB0();
		if (unk_0x63A6486593EC7EC3(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_124 > iVar0)
		{
			unk_0xDD29FF4BAB8AFF9C(iLocal_140, true, 0);
			if (unk_0xB8DE76287EDC4957(iLocal_140, 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_140, 0))
				{
					if (iLocal_58 == 1)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0x53C562FD2B9E3AB0();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 2)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0x53C562FD2B9E3AB0();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 3)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0x53C562FD2B9E3AB0();
						iLocal_124 = 0;
					}
					else if (iLocal_58 == 5)
					{
						if (func_1(&uLocal_161, cLocal_146, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
							{
								unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_140, 3000, 2052, 2);
							}
						}
						iLocal_150 = unk_0x53C562FD2B9E3AB0();
						iLocal_124 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_151 = unk_0x53C562FD2B9E3AB0();
			if ((iLocal_151 - iLocal_150) > 3500)
			{
				unk_0x5380482A432E314E(&iLocal_140);
			}
			iLocal_140 = 0;
		}
	}
}

int func_177()//Position - 0xAF59
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 1))
		{
			if ((unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1))) || unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1)))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178()//Position - 0xAFC4
{
	if (iLocal_58 == 1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_71))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -3024,265f, 660,8264f, 1,1982f, -3140,823f, 803,707f, 35,131f, 93f, 0, true, 0) && !unk_0xEC211A86AB3726B6(iLocal_71)) || func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 12f)
				{
					func_179();
					iLocal_57 = 2;
				}
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_135)
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_76, 100f, 100f, 100f, false, true, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x6931076730A4AC5D(&iLocal_75);
				unk_0x380C1E7B7740D618(0, 178,993f, 4413,097f, 73,6132f, 1f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, 159,6669f, 4413,197f, 74,8915f, 1f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, 142,7866f, 4415,111f, 74,3799f, 1f, -1, 0,25f, 1, 1193033728);
				unk_0x1B16DD5C115FE009(iLocal_75);
				unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				iLocal_135 = 1;
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_135)
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_76, 200f, 200f, 200f, false, true, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0x6931076730A4AC5D(&iLocal_75);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 3);
				unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x380C1E7B7740D618(0, -337,3163f, 2828,018f, 55,2198f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, -343,4485f, 2826,222f, 54,5089f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, -356,4033f, 2811,062f, 51,5931f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, -365,6846f, 2809,158f, 48,7646f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, -382,4106f, 2818,384f, 44,078f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, -370,3838f, 2866,677f, 41,0979f, 2f, -1, 0,25f, 1, 1193033728);
				unk_0x12C9D41D52A560D6(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_75);
				unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_75);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_75);
				iLocal_135 = 1;
			}
		}
	}
	if (iLocal_58 != 1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_71))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
			{
				if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, 95f, 95f, 50f, 0, 1, 0) && !unk_0xEC211A86AB3726B6(iLocal_71)) || func_172(unk_0xFC1458A37D98B502(), iLocal_71) < 12f)
				{
					func_179();
					iLocal_57 = 2;
				}
			}
		}
	}
}

void func_179()//Position - 0xB2BD
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_98))
	{
		unk_0xE30CF11C0EE14316(&iLocal_98);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_99))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
			{
				iLocal_99 = func_63(iLocal_71, 0, 145);
				unk_0x9C27373CC69ECF87(iLocal_99, false);
			}
		}
		if (!func_212())
		{
			func_187(1);
		}
		func_148(&uLocal_161, 3, iLocal_71, sLocal_147, 0, 1);
	}
	if (func_8() == 0)
	{
		func_148(&uLocal_161, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_148(&uLocal_161, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_148(&uLocal_161, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
}

void func_180()//Position - 0xB371
{
	func_182(39, 1);
	func_182(40, 1);
	func_182(41, 1);
	func_182(42, 1);
	func_182(43, 1);
	func_182(44, 1);
	iLocal_71 = unk_0xAC992EFAD62C33BF(26, iLocal_80, vLocal_76, fLocal_78, 1, true);
	unk_0x14776E43F90DD454(iLocal_80);
	unk_0x771A86309E0CA47B(iLocal_71, true);
	unk_0x5C5D33A1B2711D21(iLocal_71, false);
	unk_0x350CEE66BDF90273(iLocal_71, sLocal_149);
	unk_0xAE01EF4BC84AFE7C(iLocal_71, 137, true);
	unk_0xAE01EF4BC84AFE7C(iLocal_71, 206, true);
	unk_0xE17958D3FD0F9EE9(iLocal_71, 1024, true);
	unk_0xE17958D3FD0F9EE9(iLocal_71, 65536, true);
	unk_0xE17958D3FD0F9EE9(iLocal_71, 2, false);
	unk_0xAE6EBBBBD8B9FB30(iLocal_71, 17, true);
	unk_0x778FC4D16C02D090(iLocal_71, 60f);
	unk_0xC820D40994BFF79C(iLocal_71, 5f);
	if (iLocal_58 == 1)
	{
		unk_0x03924C68EFCBC511(iLocal_71, 0, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 2, 1, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 3, 0, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 4, 0, 2, 0);
		unk_0x2E4932E63763FE26(iLocal_82, true);
		iLocal_139 = unk_0xEA60F3B426BB095B(iLocal_82, -3088,068f, 730,4819f, 20,3028f, 332,2996f, true, true, false);
		unk_0xB38E13EF2EC6F0E9(iLocal_139, 150f);
		unk_0x6D4A70E9DE82B24B(iLocal_139, 4, 0, 0);
		unk_0xCF5EB2CB1B30F02C(iLocal_139, 0);
		unk_0x14776E43F90DD454(iLocal_82);
		unk_0x12C9D41D52A560D6(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_58 == 2)
	{
		unk_0x03924C68EFCBC511(iLocal_71, 0, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 2, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 3, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 4, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 8, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 10, 0, 0, 0);
		unk_0x12C9D41D52A560D6(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0xCB389937EDB1519A(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_181(1);
	}
	else if (iLocal_58 == 3)
	{
		unk_0x03924C68EFCBC511(iLocal_71, 0, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 2, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 3, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 4, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_71, 8, 0, 0, 0);
		unk_0x12C9D41D52A560D6(iLocal_71, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0xCB389937EDB1519A(vLocal_77 - Vector(20f, 50f, 50f), vLocal_77 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_58 == 5)
	{
	}
	iLocal_57 = 1;
}

void func_181(bool bParam0)//Position - 0xB5D4
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

void func_182(int iParam0, bool bParam1)//Position - 0xB600
{
	if (bParam1)
	{
		if (!func_186(iParam0, 2, 1))
		{
			func_185(iParam0, 2, 1);
		}
	}
	else if (func_186(iParam0, 2, 1))
	{
		func_183(iParam0, 2, 1);
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)//Position - 0xB637
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_184(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_43(func_184(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_184(int iParam0)//Position - 0xB6A0
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

void func_185(int iParam0, int iParam1, bool bParam2)//Position - 0xB985
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_184(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_43(func_184(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_186(int iParam0, int iParam1, bool bParam2)//Position - 0xB9EE
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_26() == 0)
		{
			return unk_0xC80D31E4B587871C(func_45(func_184(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_187(int iParam0)//Position - 0xBA4E
{
	if (func_190())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_31(Global_104544))
		{
			func_188(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_31(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_188(int iParam0)//Position - 0xBAA1
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_169(func_189(iParam0), -1);
					Global_104555.f_24965.f_2++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(Global_104551, 1))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_169(func_189(iParam0), -1);
					Global_104555.f_24965.f_3++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Global_104551, 2))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_169(func_189(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_189(int iParam0)//Position - 0xBB82
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_190()//Position - 0xBBC4
{
	switch (func_191(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_191(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xBBFA
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90456.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_195(0))
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		unk_0x8FA21D9CF7681249(unk_0x98EC0789D9F0703B(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xE6ABE74AEC92281D(8);
		}
		Global_35861 = iParam2;
		Global_35823 = *uParam0;
		Global_35824 = iParam4;
		Global_35822 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35822 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35822)
			{
				if (Global_35828[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35823 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_193(iParam2))
		{
			return 0;
		}
		if (Global_35822 == 8)
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		Global_35828[Global_35822 /*4*/] = Global_35825;
		Global_35828[Global_35822 /*4*/].f_1 = iParam1;
		Global_35828[Global_35822 /*4*/].f_2 = iParam2;
		Global_35828[Global_35822 /*4*/].f_3 = 0;
		Global_35822++;
		if (iParam4 != 0)
		{
			func_192(uParam0, iParam4);
		}
	}
	return 2;
}

void func_192(var uParam0, int iParam1)//Position - 0xBD31
{
	int iVar0;
	
	if (Global_35822 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35822)
	{
		if (Global_35828[iVar0 /*4*/] == *uParam0)
		{
			Global_35828[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_193(int iParam0)//Position - 0xBD80
{
	return func_194(iParam0, Global_35861);
}

int func_194(int iParam0, int iParam1)//Position - 0xBD91
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

int func_195(int iParam0)//Position - 0xBF72
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_193(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196()//Position - 0xBF94
{
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 1;
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
	{
		if (unk_0xEBE499597C718EB8(iLocal_71, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_71, unk_0xC733212BF9066BDF(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_92)
		{
			if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_71, 1), 10f, 1) || unk_0xF1DE6FAA2EFAA34F(unk_0xB3328BA8976B416C(iLocal_71, 1) - Vector(10f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_71, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x3AB6A1A9084FB0A4(iLocal_72) && unk_0x6ADD12BF4D6D2587(iLocal_72))
		{
			if (unk_0xEBE499597C718EB8(iLocal_72, unk_0xFC1458A37D98B502(), 1) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
				{
					unk_0x0F5CA7E22DF79A5F(iLocal_71, 6, 0f, 0);
				}
				return 1;
			}
		}
		if ((!unk_0xC816B63289F7A279(iLocal_71) && unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 90f)) && unk_0x21B6FFFD04C9FF3A(iLocal_71, unk_0xFC1458A37D98B502(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_71) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_197()//Position - 0xC0EC
{
	unk_0x6FF834D85E2DD4C6(iLocal_80);
	unk_0x6450931B826B49D9("random@hitch_lift");
	if (iLocal_58 == 1 || iLocal_58 == 5)
	{
		unk_0x6FF834D85E2DD4C6(iLocal_82);
	}
	if (iLocal_58 == 1)
	{
		unk_0xA3A57BA8F775CAFF(0);
		unk_0x1CF95440F1970B4F("timer", false, -1);
	}
	else if (iLocal_58 == 3)
	{
		unk_0x6450931B826B49D9("facials@gen_female@base");
	}
	if (unk_0x9A0B2ED5055D3F0B(iLocal_80) && unk_0x3A801AA34DD821BE("random@hitch_lift"))
	{
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			if (unk_0x9A0B2ED5055D3F0B(iLocal_82))
			{
				bLocal_59 = true;
			}
		}
		else if (iLocal_58 == 3)
		{
			if (unk_0x3A801AA34DD821BE("facials@gen_female@base"))
			{
				bLocal_59 = true;
			}
		}
		else
		{
			bLocal_59 = true;
		}
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_80);
		unk_0x6450931B826B49D9("random@hitch_lift");
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			unk_0x6FF834D85E2DD4C6(iLocal_82);
		}
		else if (iLocal_58 == 3)
		{
			unk_0x6450931B826B49D9("facials@gen_female@base");
		}
	}
}

void func_198()//Position - 0xC1C6
{
	if (iLocal_58 == 1)
	{
		vLocal_76 = { -3086,052f, 735,5091f, 20,4883f };
		fLocal_78 = 17,9234f;
		vLocal_77 = { -1053,344f, -2539,327f, 19,0394f };
		iLocal_80 = joaat("a_m_m_business_01");
		cLocal_146 = "REHH1AU";
		sLocal_147 = "BUSINESSMAN";
		sLocal_149 = "BUSINESSMAN";
		iLocal_82 = joaat("schafter2");
	}
	else if (iLocal_58 == 2)
	{
		vLocal_76 = { 196,7701f, 4427,757f, 72,2673f };
		fLocal_78 = 75,9173f;
		vLocal_77 = { 3328,828f, 5154,456f, 17,2894f };
		iLocal_80 = joaat("a_f_y_hiker_01");
		cLocal_146 = "REHH2AU";
		sLocal_147 = "REHH2Hiker";
		sLocal_149 = "REHH2Hiker";
	}
	else if (iLocal_58 == 3)
	{
		vLocal_76 = { 2745,026f, 4386,827f, 47,8636f };
		fLocal_78 = 19,4143f;
		vLocal_77 = { 814,455f, 1274,797f, 359,5112f };
		vLocal_84 = { 804,2382f, 1269,589f, 359,3557f };
		fLocal_85 = 340,7372f;
		iLocal_80 = joaat("a_f_y_hipster_03");
		iLocal_81 = joaat("s_m_m_security_01");
		cLocal_146 = "REHH3AU";
		sLocal_147 = "REHH3Hipster";
		sLocal_149 = "REHH3Hipster";
		sLocal_148 = "REHH3Security";
	}
	else if (iLocal_58 == 5)
	{
		vLocal_76 = { -324,0379f, 2818,034f, 58,4498f };
		fLocal_78 = 56,5422f;
		vLocal_77 = { -344,0339f, 634,4108f, 171,2902f };
		iLocal_80 = joaat("ig_bride");
		iLocal_81 = joaat("a_m_y_business_01");
		cLocal_146 = "REHH5AU";
		sLocal_147 = "REHH5Bride";
		sLocal_149 = "REHH5Bride";
		sLocal_148 = "REHH5Groom";
		iLocal_82 = joaat("patriot");
	}
	iLocal_60 = 1;
}

int func_199()//Position - 0xC34C
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_210())
		{
			return 0;
		}
	}
	if (func_206())
	{
		return 1;
	}
	if (func_200(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200(float fParam0, bool bParam1)//Position - 0xC3D2
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (func_10(func_8()))
		{
			iVar5 = func_36();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_201(iVar1, &Var0);
					fVar4 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_201(int iParam0, var uParam1)//Position - 0xC489
{
	switch (iParam0)
	{
		case 0:
			func_202(uParam1, "Abigail1", func_204(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 1:
			func_202(uParam1, "Abigail2", func_204(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 2:
			func_202(uParam1, "Barry1", func_204(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 3:
			func_202(uParam1, "Barry2", func_204(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 4:
			func_202(uParam1, "Barry3", func_204(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 5:
			func_202(uParam1, "Barry3A", func_204(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 6:
			func_202(uParam1, "Barry3C", func_204(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 7:
			func_202(uParam1, "Barry4", func_204(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_203(iParam0), 0, 0);
			break;
		
		case 8:
			func_202(uParam1, "Dreyfuss1", func_204(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 9:
			func_202(uParam1, "Epsilon1", func_204(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 10:
			func_202(uParam1, "Epsilon2", func_204(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 11:
			func_202(uParam1, "Epsilon3", func_204(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 12:
			func_202(uParam1, "Epsilon4", func_204(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 13:
			func_202(uParam1, "Epsilon5", func_204(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 14:
			func_202(uParam1, "Epsilon6", func_204(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 15:
			func_202(uParam1, "Epsilon7", func_204(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 16:
			func_202(uParam1, "Epsilon8", func_204(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 17:
			func_202(uParam1, "Extreme1", func_204(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 18:
			func_202(uParam1, "Extreme2", func_204(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 19:
			func_202(uParam1, "Extreme3", func_204(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 20:
			func_202(uParam1, "Extreme4", func_204(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 21:
			func_202(uParam1, "Fanatic1", func_204(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_203(iParam0), 1, 0);
			break;
		
		case 22:
			func_202(uParam1, "Fanatic2", func_204(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_203(iParam0), 1, 0);
			break;
		
		case 23:
			func_202(uParam1, "Fanatic3", func_204(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_203(iParam0), 0, 1);
			break;
		
		case 24:
			func_202(uParam1, "Hao1", func_204(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_203(iParam0), 0, 1);
			break;
		
		case 25:
			func_202(uParam1, "Hunting1", func_204(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 26:
			func_202(uParam1, "Hunting2", func_204(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 27:
			func_202(uParam1, "Josh1", func_204(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 28:
			func_202(uParam1, "Josh2", func_204(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 29:
			func_202(uParam1, "Josh3", func_204(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 30:
			func_202(uParam1, "Josh4", func_204(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 31:
			func_202(uParam1, "Maude1", func_204(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 32:
			func_202(uParam1, "Minute1", func_204(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 33:
			func_202(uParam1, "Minute2", func_204(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 34:
			func_202(uParam1, "Minute3", func_204(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 35:
			func_202(uParam1, "MrsPhilips1", func_204(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 36:
			func_202(uParam1, "MrsPhilips2", func_204(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 37:
			func_202(uParam1, "Nigel1", func_204(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 38:
			func_202(uParam1, "Nigel1A", func_204(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 39:
			func_202(uParam1, "Nigel1B", func_204(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 40:
			func_202(uParam1, "Nigel1C", func_204(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 41:
			func_202(uParam1, "Nigel1D", func_204(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_203(iParam0), 1, 1);
			break;
		
		case 42:
			func_202(uParam1, "Nigel2", func_204(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 43:
			func_202(uParam1, "Nigel3", func_204(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 1);
			break;
		
		case 44:
			func_202(uParam1, "Omega1", func_204(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 45:
			func_202(uParam1, "Omega2", func_204(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 46:
			func_202(uParam1, "Paparazzo1", func_204(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 47:
			func_202(uParam1, "Paparazzo2", func_204(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 48:
			func_202(uParam1, "Paparazzo3", func_204(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 49:
			func_202(uParam1, "Paparazzo3A", func_204(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 50:
			func_202(uParam1, "Paparazzo3B", func_204(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 51:
			func_202(uParam1, "Paparazzo4", func_204(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 52:
			func_202(uParam1, "Rampage1", func_204(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 54:
			func_202(uParam1, "Rampage3", func_204(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 55:
			func_202(uParam1, "Rampage4", func_204(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 56:
			func_202(uParam1, "Rampage5", func_204(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_203(iParam0), 0, 0);
			break;
		
		case 53:
			func_202(uParam1, "Rampage2", func_204(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_203(iParam0), 1, 0);
			break;
		
		case 57:
			func_202(uParam1, "TheLastOne", func_204(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 58:
			func_202(uParam1, "Tonya1", func_204(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 59:
			func_202(uParam1, "Tonya2", func_204(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 60:
			func_202(uParam1, "Tonya3", func_204(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 61:
			func_202(uParam1, "Tonya4", func_204(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		case 62:
			func_202(uParam1, "Tonya5", func_204(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_203(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_202(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xD5FE
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

int func_203(int iParam0)//Position - 0xD68F
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

struct<2> func_204(int iParam0)//Position - 0xD9D5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_205(iParam0) };
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

struct<2> func_205(int iParam0)//Position - 0xDA0B
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

int func_206()//Position - 0xDE56
{
	if (func_209() && !func_210())
	{
		return 1;
	}
	if (func_208() && func_207())
	{
		return 1;
	}
	return 0;
}

bool func_207()//Position - 0xDE88
{
	return Global_104273 > 0;
}

int func_208()//Position - 0xDE96
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_209()//Position - 0xDEAB
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_210()//Position - 0xDED1
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x19E08ED08C79C477() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_211()//Position - 0xDEEE
{
	if (!func_193(5))
	{
		return 1;
	}
	if (func_206())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_210())
		{
			return 0;
		}
	}
	if (func_200(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xDF50
{
	if ((Global_104544 == func_40() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0)//Position - 0xDF7B
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_215(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_214();
}

void func_214()//Position - 0xDFB1
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x2E4932E63763FE26(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), true);
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
	}
}

void func_215(int iParam0)//Position - 0xDFEE
{
	Global_104544 = iParam0;
}

int func_216(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDFFC
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_142819)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_244())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_210())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_206())
		{
			return 0;
		}
		if (func_243())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_200(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_242(iParam1))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_241(func_8()) == 4 || func_241(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_240(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_239(Global_104555.f_24965.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x53C562FD2B9E3AB0() - Global_104546) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_238())
		{
			return 0;
		}
		if (unk_0x5A0744D504CC705F())
		{
			return 0;
		}
		if (unk_0x17E356AF4F930A2C())
		{
			return 0;
		}
		if (!func_229(4))
		{
			return 0;
		}
		if (!func_193(5))
		{
			return 0;
		}
		if (func_228(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x2C2E1E35924B9FF2(unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())))
		{
			if ((unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(377,153f, -717,567f, 10,0536f) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(320,9934f, 265,2515f, 82,1221f)) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_228(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_242(30) && !func_228(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_8()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_227(iVar4))
				{
					if (func_218(iVar2))
					{
						if (!func_217(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_8() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_217(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xE396
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_218(int iParam0)//Position - 0xE3DD
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_219(iVar0);
}

int func_219(int iParam0)//Position - 0xE3FE
{
	return func_220(iParam0, 1);
}

int func_220(int iParam0, int iParam1)//Position - 0xE40D
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_227(iParam0))
	{
		return 0;
	}
	func_221(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_221(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xE460
{
	func_222(func_156(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_222(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xE47E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_226(iParam0, iParam1))
	{
		iVar0 = func_163(iParam1);
		iVar1 = func_161(iParam0);
		iVar2 = (func_161(iParam0) - func_161(iParam1));
		iVar3 = (func_163(iParam0) - func_163(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_154(iParam0) - func_154(iParam1));
		iVar6 = (func_155(iParam0) - func_155(iParam1));
		iVar7 = (func_224(iParam0) - func_224(iParam1));
	}
	else
	{
		iVar0 = func_163(iParam0);
		iVar1 = func_161(iParam1);
		iVar2 = (func_161(iParam1) - func_161(iParam0));
		iVar3 = (func_163(iParam1) - func_163(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_154(iParam1) - func_154(iParam0));
		iVar6 = (func_155(iParam1) - func_155(iParam0));
		iVar7 = (func_224(iParam1) - func_224(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_160(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_223(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_223(float fParam0, float fParam1, float fParam2)//Position - 0xE67F
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

int func_224(int iParam0)//Position - 0xE6C1
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_225(int iParam0)//Position - 0xE6D4
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_226(int iParam0, int iParam1)//Position - 0xE6E6
{
	int iVar0;
	int iVar1;
	
	if (!func_227(iParam1) || !func_227(iParam0))
	{
		return 1;
	}
	iVar0 = func_161(iParam0);
	iVar1 = func_161(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)//Position - 0xE7F2
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
	iVar0 = func_224(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_155(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_154(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_161(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_163(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_160(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0, int iParam1)//Position - 0xE8CE
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0xE8F1
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_8();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_237()) || Global_103602) || Global_25235) || func_236()) || func_15(8, -1)) || func_235()) || func_234()) || func_233()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_237()) || Global_25235) || func_236()) || func_15(8, -1)) || func_233()) || func_235()) || func_234()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_237()) || Global_103602) || Global_25235) || func_236()) || func_15(8, -1)) || func_233()) || func_235()) || func_234()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_237()) || Global_103602) || Global_25235) || func_236()) || func_15(8, -1)) || func_235()) || func_234()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_237() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_15(8, -1)) || func_232()) || func_231()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_235()) || func_234()) || func_231()) || func_230())
						{
							return 0;
						}
						if ((unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() != 3) && unk_0x70522E2561AD22FE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
						{
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_237()) || Global_25235) || func_236()) || func_15(8, -1)) || func_234()) || func_233()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_237()) || func_234()) || Global_103602) || Global_25235) || func_236()) || Global_36993) || func_15(8, -1)) || func_233()) || func_231()) || func_232()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_237()) || Global_103602) || Global_25235) || func_236()) || func_15(8, -1)) || func_233()) || func_231()) || func_235()) || func_234()) || func_232())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_230()//Position - 0xF00E
{
	return Global_92872.f_1;
}

int func_231()//Position - 0xF01C
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_232()//Position - 0xF042
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_233()//Position - 0xF05C
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

bool func_234()//Position - 0xF086
{
	return Global_92885.f_316 > 0;
}

bool func_235()//Position - 0xF097
{
	return Global_92885.f_315 > 0;
}

var func_236()//Position - 0xF0A8
{
	return Global_1312854;
}

int func_237()//Position - 0xF0B4
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_238()//Position - 0xF0D0
{
	func_7();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_239(int iParam0)//Position - 0xF0F8
{
	return func_226(func_156(), iParam0);
}

int func_240(int iParam0, int iParam1, int iParam2)//Position - 0xF10A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_8();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_241(int iParam0)//Position - 0xF1EE
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_242(int iParam0)//Position - 0xF212
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_244())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_243()//Position - 0xF270
{
	int iVar0;
	
	if (Global_25383)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_244()//Position - 0xF2B4
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

void func_245()//Position - 0xF36F
{
	if (iLocal_111)
	{
		func_266(0);
		if (Global_25472)
		{
			unk_0x8810DC630928B398("AC_STOP");
		}
		func_265();
		unk_0x3CDDC4760DBA4651();
		func_181(0);
		if (unk_0x38DF88792E2574E5())
		{
			unk_0x2C5E25A27FEE0F8A(0);
		}
		if (unk_0xB42C86A228961584())
		{
			unk_0xD96374AD78D6C3BC(0);
		}
		Global_25539[0 /*7*/].f_6 = 0;
		func_257(0, 1, 1, 0);
		func_55();
		if (unk_0x6ADD12BF4D6D2587(iLocal_71))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_71, 317, true);
				if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
				{
					unk_0x28B82FCEA0848032(iLocal_71);
				}
				if (iLocal_58 != 2)
				{
					unk_0x2CEA76A7F93740C6(iLocal_71);
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_71, 1805844857) != 1 && unk_0x78F50AA8F955BEFC(iLocal_71, 1805844857) != 0)
				{
					unk_0x771A86309E0CA47B(iLocal_71, false);
				}
				unk_0x5C5D33A1B2711D21(iLocal_71, true);
				if (unk_0xC816B63289F7A279(iLocal_71))
				{
					unk_0x88235B448509228B(iLocal_71);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_72))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
			{
				if (!unk_0xA6FA9E5D08F067AD(iLocal_72))
				{
					unk_0x771A86309E0CA47B(iLocal_72, false);
				}
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
	}
	unk_0x77A208B3324C04F2();
	if (func_212())
	{
		if (unk_0x50126692B8A3590A(801,7148f, 1270,138f, 359,2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 801,7148f, 1270,138f, 359,2855f, 0, 0f, 0);
		}
		if (unk_0x50126692B8A3590A(802,9218f, 1281,675f, 359,2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xFB3E858D6C41D854(joaat("prop_fnclink_03gate1"), 802,9218f, 1281,675f, 359,2962f, 0, 0f, 0);
		}
	}
	func_246(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_246(int iParam0)//Position - 0xF50C
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_212())
	{
		func_250(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_249(30000);
		StringCopy(&cVar0, func_248(Global_104544, 1), 64);
		if (func_39(Global_104544) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104543, 64);
		}
		unk_0xACD55E1AD7FB6CB0(&cVar0, Global_104541, (unk_0x53C562FD2B9E3AB0() - Global_104542), 0);
	}
	else if (unk_0xC80D31E4B587871C(Global_104551, 0) && Global_104555.f_24965.f_2 < 3)
	{
		unk_0x0EE72DB1CD8A3B86(&Global_104551, 0);
	}
	func_247(&Global_25292);
	Global_104545 = 0;
	func_215(-1);
}

void func_247(var uParam0)//Position - 0xF5C1
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35823)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35822 = 0;
	Global_35824 = 0;
	Global_35861 = 15;
	Global_55900 = 0;
	Global_55901 = 0;
}

char* func_248(int iParam0, bool bParam1)//Position - 0xF5FE
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_249(int iParam0)//Position - 0xF847
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_250(int iParam0)//Position - 0xF859
{
	func_251(iParam0, 0, func_256(iParam0));
}

void func_251(int iParam0, int iParam1, int iParam2)//Position - 0xF86E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_156();
	func_254(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_253(iParam0, &uVar0);
	Var1 = { func_252(&uVar0) };
}

struct<16> func_252(var uParam0)//Position - 0xF89D
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_154(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_155(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_224(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_225(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_163(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_161(*uParam0), 64);
	return Var0;
}

void func_253(int iParam0, var uParam1)//Position - 0xF96C
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_254(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_161(*uParam0);
	iVar1 = func_163(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_154(*uParam0);
	iVar4 = func_155(*uParam0);
	iVar5 = func_224(*uParam0);
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
	iVar6 = func_160(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_160(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_255(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFB06
{
	func_166(uParam0, iParam1);
	func_165(uParam0, iParam2);
	func_164(uParam0, iParam3);
	func_158(uParam0, iParam5);
	func_159(uParam0, iParam4);
	func_157(uParam0, iParam6);
}

int func_256(int iParam0)//Position - 0xFB3E
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_257(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xFCE1
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_264(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_5())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_263(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_264(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_263(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_261(unk_0x9EB17624F44A8DA4())) && !func_259(unk_0x9EB17624F44A8DA4(), 0)) && !func_258())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_261(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_258()//Position - 0xFDFA
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_259(int iParam0, int iParam1)//Position - 0xFE17
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_260(-1, 0) == 8;
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

int func_260(int iParam0, bool bParam1)//Position - 0xFE62
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_261(int iParam0)//Position - 0xFEA3
{
	if (func_259(iParam0, 0))
	{
		return 1;
	}
	if (func_262())
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

bool func_262()//Position - 0xFEE5
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_263(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xFEF6
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

void func_264(int iParam0)//Position - 0xFF29
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

void func_265()//Position - 0xFF4C
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_266(bool bParam0)//Position - 0xFF68
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_182(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_267()//Position - 0xFF8B
{
	float fVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_64, true);
		iLocal_63 = 1;
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_65, true) < fVar0)
		{
			fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_65, true);
			iLocal_63 = 2;
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_66, true) < fVar0)
		{
			fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_66, true);
			iLocal_63 = 3;
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_67, true) < fVar0)
		{
			fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_67, true);
			iLocal_63 = 5;
		}
		if (iLocal_63 == 1)
		{
			iLocal_68 = 1;
			iLocal_58 = 1;
			return vLocal_64;
		}
		else if (iLocal_63 == 2)
		{
			iLocal_68 = 2;
			iLocal_58 = 2;
			return vLocal_65;
		}
		else if (iLocal_63 == 3)
		{
			iLocal_68 = 3;
			iLocal_58 = 3;
			return vLocal_66;
		}
		else if (iLocal_63 == 5)
		{
			iLocal_68 = 4;
			iLocal_58 = 5;
			return vLocal_67;
		}
	}
	return 0f, 0f, 0f;
}

