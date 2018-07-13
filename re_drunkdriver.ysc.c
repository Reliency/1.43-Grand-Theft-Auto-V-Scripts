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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
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
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73[2] = { 0, 0 };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<6> Local_117 = { 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_118[24] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	vector3 vLocal_125 = { 0f, 0f, 0f };
	var uLocal_126[2] = { 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	int iLocal_130 = 0;
	float fLocal_131 = 0f;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 16;
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
	int iLocal_305 = 0;
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_307 = { 0f, 0f, 0f };
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<2> Local_311 = { 0, 5 } ;
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
	var uLocal_327 = 5;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
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
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0,0375f;
	fLocal_28 = 0,17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	iLocal_49 = unk_0x5354F72E0D8D7E53();
	iLocal_50 = unk_0x526A9A6B1B39C5F0();
	vLocal_71 = { -1034,6f, 4918,6f, 205,9f };
	iLocal_104 = -1;
	StringCopy(&Local_117, "", 24);
	iLocal_132 = -1;
	vLocal_306 = { -1017,345f, -1354,196f, 4,4568f };
	vLocal_307 = { 2003,456f, 3071,102f, 46,0499f };
	vLocal_55 = { ScriptParam_311.f_1[0 /*3*/] };
	func_273();
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_235();
	}
	if (func_193(vLocal_55, 27, iLocal_308, 0, 0))
	{
		func_190(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	iLocal_128 = unk_0x53C562FD2B9E3AB0();
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_58)
		{
			if (!func_189())
			{
				if (func_188())
				{
					func_235();
				}
			}
			unk_0x48D75120C879E65E("RE_DD", 0);
			switch (iLocal_51)
			{
				case 0:
					if (iLocal_54)
					{
						iLocal_139 = 1;
						iLocal_51 = 1;
					}
					else
					{
						if (func_176())
						{
							func_235();
						}
						if (!bLocal_56)
						{
							func_175();
						}
						if (bLocal_56)
						{
							func_174();
						}
					}
					break;
				
				case 1:
					func_164();
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						func_163();
						func_160();
						if (iLocal_52 == 1 && !unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
						{
							func_70();
							if (func_68() || unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
								{
									if (!unk_0x191BE1BC8F26F3C1(iLocal_73[0], 0))
									{
										if (unk_0xC816B63289F7A279(iLocal_73[0]))
										{
											unk_0x88235B448509228B(iLocal_73[0]);
										}
										unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
										unk_0xD68E88A8E0BE8697(iLocal_73[0], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
										func_64(iLocal_73[0], 120000, 0);
										unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
										func_62();
										system::wait(0);
										func_61(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_52 == 2 || (iLocal_52 == 1 && unk_0x6ADD12BF4D6D2587(iLocal_73[1])))
						{
							func_70();
							if (iLocal_53 != 9)
							{
								if (func_68() || unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
										{
											if (unk_0xC816B63289F7A279(iLocal_73[0]))
											{
												unk_0x88235B448509228B(iLocal_73[0]);
											}
											unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
											unk_0xD68E88A8E0BE8697(iLocal_73[0], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
											func_64(iLocal_73[0], 120000, 0);
											unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
										}
									}
									if (unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
										{
											if (unk_0xC816B63289F7A279(iLocal_73[1]))
											{
												unk_0x88235B448509228B(iLocal_73[1]);
											}
											unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
											unk_0xD68E88A8E0BE8697(iLocal_73[1], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
											func_64(iLocal_73[1], 120000, 0);
											unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
										}
									}
									if (iLocal_52 == 1)
									{
										func_62();
										system::wait(0);
										func_61(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_52 == 2)
									{
										func_62();
										system::wait(0);
										func_61(&uLocal_140, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								unk_0x5C57ECBE59C08573(iLocal_73[0], 1f);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
							{
								unk_0x5C57ECBE59C08573(iLocal_73[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_53 != 9)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							if (unk_0x0C88267282FD588F(iLocal_73[0], vLocal_71, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_52 == 2)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
									{
										if (!unk_0xC816B63289F7A279(iLocal_73[0]) && !unk_0xC816B63289F7A279(iLocal_73[1]))
										{
											unk_0x57FB41CABA25835C(iLocal_73[0], func_57());
											unk_0x57FB41CABA25835C(iLocal_73[1], func_57());
										}
									}
								}
								func_56(0);
								system::wait(0);
								func_62();
								iLocal_53 = 9;
							}
						}
					}
					if (func_55())
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
						{
							unk_0x68433819717660CF(&(iLocal_73[0]));
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
						{
							unk_0x68433819717660CF(&(iLocal_73[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_235();
		}
		func_1();
	}
}

void func_1()//Position - 0x4DA
{
	if (((iLocal_52 == 1 && iLocal_53 == 7) && iLocal_60 == 5) && iLocal_90)
	{
		iLocal_128 = unk_0x53C562FD2B9E3AB0();
		if (func_2())
		{
			if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				vLocal_129 = { unk_0x90CB8A0A47B8D830(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) };
			}
		}
	}
}

int func_2()//Position - 0x532
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (iLocal_52 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						if (unk_0xA8D0477084E86A92(iLocal_73[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]) && unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
					{
						if (unk_0xA8D0477084E86A92(iLocal_73[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && unk_0xA8D0477084E86A92(iLocal_73[1], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
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

int func_3()//Position - 0x5FF
{
	if (iLocal_52 == 2)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
		{
			if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_74, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (unk_0x9A3C64A7BB4588B3(iLocal_74) && unk_0xDE523AF6F7B269AB(iLocal_74) < iLocal_68)
				{
					iLocal_68 = unk_0xDE523AF6F7B269AB(iLocal_74);
					func_5(0);
					func_62();
					system::wait(0);
					func_61(&uLocal_140, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0xB8DE76287EDC4957(iLocal_74, 0) || unk_0x1ECACBE8459041A9(iLocal_74))
			{
				func_62();
				system::wait(0);
				if (!func_4())
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							unk_0x93F12E7D8D931858(iLocal_73[0], 1193033728, 0);
							unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							unk_0x4C7AF3B2BE8C3193(iLocal_73[1], iLocal_73[0], -1, 0f, 1f, 1073741824, 0);
							unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
						}
						return 1;
					}
				}
			}
			if (unk_0x613CDAB05D8C57C8(iLocal_74, 0, 2) && unk_0xEBE499597C718EB8(iLocal_74, unk_0xFC1458A37D98B502(), 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
					unk_0xD68E88A8E0BE8697(iLocal_73[0], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
					unk_0xD68E88A8E0BE8697(iLocal_73[1], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
				}
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

int func_4()//Position - 0x8A9
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x8CB
{
	if (bParam0)
	{
		if (iLocal_116)
		{
			if (func_10(&uLocal_140, "REDR2AU", &cLocal_118, &Local_117, 8, 0, 0))
			{
				iLocal_116 = 0;
			}
		}
	}
	else if ((!iLocal_116 && unk_0x42111BD51D233AAB()) && !func_27("REDR1_SWV"))
	{
		cLocal_118 = { func_9() };
		Local_117 = { func_8() };
		func_6();
		iLocal_116 = 1;
	}
}

void func_6()//Position - 0x92A
{
	Global_14622 = 0;
	func_7();
}

void func_7()//Position - 0x93A
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

struct<6> func_8()//Position - 0x95E
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

struct<6> func_9()//Position - 0x9A4
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C8
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA1C
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()//Position - 0xCE8
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

void func_13()//Position - 0xD18
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

int func_14()//Position - 0xDAD
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xDD4
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

void func_16()//Position - 0xE6D
{
	if (func_22(14))
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
		Global_14453 = func_17();
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

int func_17()//Position - 0xF0F
{
	func_18();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_18()//Position - 0xF28
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_21(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_20(unk_0xFC1458A37D98B502());
			if (func_19(iVar0) && (!func_22(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_19(Global_104555.f_2353.f_539.f_4301))
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

bool func_19(int iParam0)//Position - 0x1025
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x1031
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x106E
{
	if (func_19(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0x1098
{
	return Global_35861 == iParam0;
}

void func_23()//Position - 0x10A6
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

bool func_24(int iParam0, int iParam1)//Position - 0x10FC
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

void func_25()//Position - 0x1137
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x118E
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

int func_27(char* sParam0)//Position - 0x11E4
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()//Position - 0x120C
{
	if (iLocal_52 == 1)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()//Position - 0x124F
{
	if (iLocal_52 == 1)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_73[0]) && !unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()//Position - 0x1295
{
	while (!func_54())
	{
		system::wait(0);
	}
	func_34(27, iLocal_308);
	func_31();
	func_235();
}

void func_31()//Position - 0x12BE
{
	func_32();
}

int func_32()//Position - 0x12CB
{
	if (func_33(0))
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

bool func_33(bool bParam0)//Position - 0x1316
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_34(int iParam0, int iParam1)//Position - 0x1341
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_35(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)//Position - 0x1445
{
	Global_104541 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)//Position - 0x1453
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
		func_40((891 + iParam0), 1, -1, 1);
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
		func_37();
	}
}

void func_37()//Position - 0x153B
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
		func_39(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_38() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()//Position - 0x19FC
{
	return Global_25233;
}

int func_39(int iParam0, int iParam1)//Position - 0x1A07
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

int func_40(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1A58
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
		iParam2 = func_41();
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

int func_41()//Position - 0x1F24
{
	return Global_1312736;
}

int func_42(int iParam0, int iParam1)//Position - 0x1F30
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

int func_43(int iParam0)//Position - 0x22A4
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

void func_44(int iParam0)//Position - 0x22D3
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2315
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2335
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
		func_47();
	}
}

void func_47()//Position - 0x2507
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

int func_48()//Position - 0x2627
{
	func_18();
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

int func_49(int iParam0)//Position - 0x266D
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

void func_50(int iParam0, int iParam1)//Position - 0x26B0
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)//Position - 0x26CB
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

int func_52()//Position - 0x277C
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_53(Var0);
	return uVar1;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2799
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

int func_54()//Position - 0x2973
{
	return 1;
}

int func_55()//Position - 0x297C
{
	if (Global_25469)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)//Position - 0x2994
{
	Global_16767 = iParam0;
}

int func_57()//Position - 0x29A1
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_58()//Position - 0x29B1
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()//Position - 0x29CD
{
	return Global_25468;
}

void func_60()//Position - 0x29D8
{
	func_235();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29E4
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_62()//Position - 0x2A32
{
	Global_14622 = 0;
	func_63();
}

void func_63()//Position - 0x2A42
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x2A63
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36770[iVar2 /*5*/] = 0;
	Global_36770[iVar2 /*5*/].f_1 = iParam0;
	Global_36770[iVar2 /*5*/].f_2 = iParam1;
	Global_36770[iVar2 /*5*/].f_3 = iParam1;
	Global_36770[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xFC1458A37D98B502())
	{
		Global_36991 = 1;
	}
	Global_36769++;
	return 1;
}

int func_65()//Position - 0x2B1F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)//Position - 0x2B4E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)//Position - 0x2B7F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_68()//Position - 0x2BC0
{
	unk_0x854E42E3461583F1(true);
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 1;
	}
	if ((unk_0x5679106BC7ED79EE(vLocal_125, 40f, 1) || unk_0x5679106BC7ED79EE(func_69(unk_0x9EB17624F44A8DA4()), 10f, 0)) || unk_0xF1DE6FAA2EFAA34F(vLocal_125 - Vector(40f, 40f, 40f), vLocal_125 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
	{
		if (unk_0xEBE499597C718EB8(iLocal_73[0], unk_0xFC1458A37D98B502(), 1) || unk_0x0BA31FF7931F3DD3(iLocal_73[0]))
		{
			return 1;
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_73[0], unk_0xC733212BF9066BDF(), 1))
			{
				return 1;
			}
		}
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_73[0]) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_73[0]))
			{
				if (unk_0x46D8E79A1B95ACE2(iLocal_73[0], unk_0xFC1458A37D98B502()))
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
	if (unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
		{
			if (unk_0xEBE499597C718EB8(iLocal_73[1], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_73[1], unk_0xC733212BF9066BDF(), 1))
				{
					return 1;
				}
			}
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_73[1]) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_73[1]))
				{
					if (unk_0x46D8E79A1B95ACE2(iLocal_73[1], unk_0xFC1458A37D98B502()))
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
	return 0;
}

Vector3 func_69(int iParam0)//Position - 0x2D75
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_70()//Position - 0x2D88
{
	int iVar0;
	
	switch (iLocal_53)
	{
		case 0:
			if (iLocal_52 == 1)
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1017,461f, -1259,868f, 3,9183f, -1061,891f, -1424,029f, 24,4253f, 171,75f, 0, true, 0) && unk_0x9E06F0EE20F58CED(vLocal_125, 1f)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_125, 15f, 15f, 15f, false, true, 0))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_124))
					{
						unk_0xE30CF11C0EE14316(&iLocal_124);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						if (!unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
						{
							uLocal_126[0] = func_159(iLocal_73[0], 0, 145);
							unk_0x9C27373CC69ECF87(uLocal_126[0], false);
						}
					}
					if (!func_189())
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
						{
							iLocal_75 = unk_0xC733212BF9066BDF();
						}
						func_158(&uLocal_140, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_149(1);
						func_148(1);
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1011,144f, -1378,79f, 4,1997f, -1039,685f, -1337,61f, 9,7035f, 37,875f, 0, true, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							func_147();
							unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_103 = (unk_0x53C562FD2B9E3AB0() + 60000);
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
							{
								unk_0x9C27373CC69ECF87(uLocal_126[0], true);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1820,238f, 3671,948f, 30,8437f, 1957,818f, 3751,887f, 55,4436f, 159,9375f, 0, true, 0) && unk_0x9E06F0EE20F58CED(vLocal_125, 1f)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_125, 15f, 15f, 15f, false, true, 0))
				{
					func_146();
					if (!func_189())
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
						{
							iLocal_75 = unk_0xC733212BF9066BDF();
						}
						func_149(1);
						func_148(1);
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1877,761f, 3727,7f, 31,882f, 1896,962f, 3693,83f, 34,9925f, 19,1875f, 0, true, 0))
					{
						func_61(&uLocal_140, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
						{
							unk_0x9C27373CC69ECF87(uLocal_126[0], true);
						}
						if (unk_0xA6DECE14FC9A8C51(uLocal_126[1]))
						{
							unk_0x9C27373CC69ECF87(uLocal_126[1], true);
						}
						iLocal_103 = (unk_0x53C562FD2B9E3AB0() + 120000);
						iLocal_53 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_103 < unk_0x53C562FD2B9E3AB0())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
				{
					unk_0x6931076730A4AC5D(&iLocal_79);
					unk_0x60C06BFD037BB7CF(0, iLocal_73[1], 7000, 2060, 4);
					unk_0xB6A7F1EF9625AE96(0, 2500);
					unk_0x6F8C8278B7C06889(0, iLocal_74, -1, -1, 1f, 1, 0);
					unk_0x1B16DD5C115FE009(iLocal_79);
					unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					unk_0x6931076730A4AC5D(&iLocal_79);
					unk_0x60C06BFD037BB7CF(0, iLocal_73[0], 7000, 2060, 4);
					unk_0x380C1E7B7740D618(0, -1052,215f, -1354,937f, 4,3754f, 1f, -1, 1f, 0, 1193033728);
					unk_0x380C1E7B7740D618(0, -1061,464f, -1384,922f, 4,2462f, 1f, -1, 1f, 1, 1193033728);
					unk_0x93F12E7D8D931858(0, 1193033728, 0);
					unk_0x1B16DD5C115FE009(iLocal_79);
					unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				}
				system::settimera(0);
				iLocal_53 = 3;
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_73[0], 80f))
					{
						bLocal_101 = true;
						system::settimera(0);
						iLocal_53 = 4;
					}
				}
				else if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xEDB3FB084E821820(1);
				}
				else
				{
					unk_0xEDB3FB084E821820(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_52 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
					{
						if (func_61(&uLocal_140, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							system::settimera(0);
							iLocal_53 = 4;
						}
					}
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_73[0], 80f))
						{
							bLocal_101 = true;
							system::settimera(0);
							iLocal_53 = 4;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_145();
						if (func_144())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_62, 15f, 15f, 15f, false, true, 0) && !unk_0x6E974DBB57EA720C(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_73[0], 80f))
						{
							if (unk_0x46D8E79A1B95ACE2(iLocal_73[0], unk_0xFC1458A37D98B502()))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									unk_0x6931076730A4AC5D(&iLocal_79);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2060, 4);
									unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
									unk_0x1B16DD5C115FE009(iLocal_79);
									unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
								{
									unk_0x60C06BFD037BB7CF(iLocal_73[1], unk_0xFC1458A37D98B502(), -1, 2060, 4);
								}
								system::settimera(0);
								iLocal_53 = 4;
							}
						}
					}
				}
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1889,121f, 3715,057f, 31,844f, 1895,608f, 3703,586f, 34,8272f, 12,4375f, 0, true, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						unk_0x6931076730A4AC5D(&iLocal_79);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2060, 4);
						unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						unk_0x1B16DD5C115FE009(iLocal_79);
						unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							unk_0x60C06BFD037BB7CF(iLocal_73[1], unk_0xFC1458A37D98B502(), -1, 2060, 4);
						}
						system::settimera(0);
						iLocal_53 = 4;
					}
				}
				if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_74, 1,5f, 1,5f, 5f, 0, 1, 0) && unk_0x6E974DBB57EA720C(unk_0xFC1458A37D98B502()))
					{
						if (func_144())
						{
							func_56(0);
						}
						func_62();
						system::wait(0);
						if (func_61(&uLocal_140, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_137 = 2;
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (unk_0xA6DECE14FC9A8C51(uLocal_126[iLocal_59]))
								{
									unk_0xE30CF11C0EE14316(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							if (!unk_0xA6DECE14FC9A8C51(iLocal_127))
							{
								iLocal_127 = func_142(iLocal_74, 0, 0);
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								unk_0x957CEE967C939968(iLocal_73[0]);
							}
							iLocal_53 = 4;
						}
					}
				}
				if (iLocal_103 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_144())
					{
						func_56(0);
					}
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1])) && unk_0x6ADD12BF4D6D2587(iLocal_74))
						{
							unk_0x6931076730A4AC5D(&iLocal_79);
							unk_0x60C06BFD037BB7CF(0, iLocal_73[1], -1, 2060, 4);
							unk_0x6F8C8278B7C06889(0, iLocal_74, -1, -1, 1f, 1, 0);
							unk_0x1B16DD5C115FE009(iLocal_79);
							unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
							unk_0x6931076730A4AC5D(&iLocal_79);
							unk_0x60C06BFD037BB7CF(0, iLocal_73[0], -1, 2060, 4);
							unk_0xAC838A977FB6E6BC(0, iLocal_73[0], 0);
							unk_0x6F8C8278B7C06889(0, iLocal_74, -1, 0, 1f, 1, 0);
							unk_0x1B16DD5C115FE009(iLocal_79);
							unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (unk_0xA6DECE14FC9A8C51(uLocal_126[iLocal_59]))
								{
									unk_0xE30CF11C0EE14316(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_52 == 1)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_101)
							{
								unk_0xEDB3FB084E821820(0);
								unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), -1, 2060, 4);
								unk_0x60C06BFD037BB7CF(iLocal_73[1], unk_0xFC1458A37D98B502(), -1, 2060, 4);
								unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], -1, 2060, 4);
								if ((unk_0x53C562FD2B9E3AB0() + 50000) > iLocal_103 || unk_0x5D91591CADE6DF0F(unk_0x9EB17624F44A8DA4()))
								{
									func_6();
									if (bLocal_101)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_140, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													system::settimera(0);
													iLocal_137++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_140, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													system::settimera(0);
													iLocal_137++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_140, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													system::settimera(0);
													iLocal_137++;
												}
											}
										}
									}
									else
									{
										iLocal_137++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_141())
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									unk_0x6931076730A4AC5D(&iLocal_79);
									unk_0x12C9D41D52A560D6(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
									unk_0x1B16DD5C115FE009(iLocal_79);
									unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
									{
										unk_0x6931076730A4AC5D(&iLocal_79);
										unk_0x12C9D41D52A560D6(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										unk_0xAC838A977FB6E6BC(0, iLocal_73[0], 0);
										unk_0xB6A7F1EF9625AE96(0, 3000);
										unk_0x380C1E7B7740D618(0, -1052,215f, -1354,937f, 4,3754f, 1f, -1, 1f, 0, 1193033728);
										unk_0x380C1E7B7740D618(0, -1061,464f, -1384,922f, 4,2462f, 1f, -1, 1f, 1, 1193033728);
										unk_0x93F12E7D8D931858(0, 1193033728, 0);
										unk_0x1B16DD5C115FE009(iLocal_79);
										unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
										unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
									}
									func_140();
								}
							}
							else
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_73[0], 80f))
									{
										unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
										unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 10000, 2060, 4);
										func_6();
										system::wait(0);
										iLocal_137++;
									}
									else
									{
										func_139(iLocal_73[0], &(uLocal_61[0]));
									}
								}
								if (!func_4())
								{
									iLocal_137++;
								}
							}
						}
						break;
					
					case 2:
						if (func_141())
						{
							iLocal_137 = 6;
						}
						else
						{
							iLocal_137++;
						}
						break;
					
					case 3:
						if (!iLocal_84)
						{
							if (system::timera() > 1500)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									unk_0x6931076730A4AC5D(&iLocal_79);
									unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 10000, 2060, 4);
									unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
									unk_0xB6A7F1EF9625AE96(0, 500);
									unk_0x1B16DD5C115FE009(iLocal_79);
									unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
									system::settimera(0);
									iLocal_84 = 1;
								}
							}
						}
						func_139(iLocal_73[0], &(uLocal_61[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_140, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_137++;
							}
						}
						break;
					
					case 4:
						if (!func_141())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_140, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
									if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
									{
										unk_0xE30CF11C0EE14316(&(uLocal_126[0]));
									}
									if (unk_0xA6DECE14FC9A8C51(uLocal_126[1]))
									{
										unk_0xE30CF11C0EE14316(&(uLocal_126[1]));
									}
									if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
									{
										unk_0x4BEFCD5DAE410A90(iLocal_74, 1);
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
										{
											unk_0x6F8C8278B7C06889(iLocal_73[0], iLocal_74, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_137++;
								}
							}
						}
						else
						{
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_126[0]));
							}
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[1]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_126[1]));
							}
							iLocal_137++;
						}
						break;
					
					case 5:
						if (func_141())
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								if (!unk_0xC816B63289F7A279(iLocal_73[0]))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
									unk_0x57FB41CABA25835C(iLocal_73[0], func_57());
									unk_0xA7C52BDFAE69B37F(iLocal_73[0], 1);
									unk_0xF6A83791895D5AA1(iLocal_73[0], 0);
								}
								unk_0xF96119FCCD4D1889(255, iLocal_80, 1862763509);
								func_138();
							}
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) != iLocal_74)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_140, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_140, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_140, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_53 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_139(iLocal_73[0], &(uLocal_61[0]));
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (func_141())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_140, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_137 = 10;
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 7:
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (func_141())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_140, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											system::settimera(0);
											iLocal_137 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_140, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											system::settimera(0);
											iLocal_137 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_140, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											system::settimera(0);
											iLocal_137 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 10:
						if (func_141())
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								if (!unk_0xC816B63289F7A279(iLocal_73[0]))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
									unk_0x57FB41CABA25835C(iLocal_73[0], func_57());
									unk_0xA7C52BDFAE69B37F(iLocal_73[0], 1);
									unk_0xF6A83791895D5AA1(iLocal_73[0], 0);
								}
								unk_0xF96119FCCD4D1889(255, iLocal_80, 1862763509);
								func_138();
							}
							iLocal_137++;
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					
					case 11:
						iLocal_53 = 7;
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (unk_0xCA3C40448996C9BA(iLocal_73[0], unk_0xFC1458A37D98B502(), 50f))
								{
									unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], -1, 2060, 4);
									unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), -1, 2060, 4);
									unk_0x60C06BFD037BB7CF(iLocal_73[1], unk_0xFC1458A37D98B502(), -1, 2060, 4);
									if (func_144())
									{
										func_56(0);
									}
									func_6();
									system::wait(0);
									if (func_61(&uLocal_140, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_137++;
									}
								}
								else
								{
									func_139(iLocal_73[0], &(uLocal_61[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							unk_0x6931076730A4AC5D(&iLocal_79);
							unk_0xB6A7F1EF9625AE96(0, 500);
							unk_0x1B16DD5C115FE009(iLocal_79);
							unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
							system::settimera(0);
							iLocal_137++;
						}
						break;
					
					case 2:
						func_139(iLocal_73[0], &(uLocal_61[0]));
						if (!unk_0x6E974DBB57EA720C(unk_0xFC1458A37D98B502()))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
							{
								unk_0x4BEFCD5DAE410A90(iLocal_74, 1);
							}
						}
						if (system::timera() > 8000)
						{
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_126[0]));
							}
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[1]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_126[1]));
							}
							if (!unk_0xA6DECE14FC9A8C51(iLocal_127))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
								{
									iLocal_127 = func_142(iLocal_74, 0, 0);
									unk_0x4BEFCD5DAE410A90(iLocal_74, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 20f, 20f, 20f, 0, 1, 0) && system::timera() > 9500)
								{
									iVar0 = unk_0x63A6486593EC7EC3(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_140, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											system::settimera(0);
										}
									}
									else if (func_61(&uLocal_140, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										system::settimera(0);
									}
								}
							}
						}
						if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_74, 1))
							{
								iLocal_53 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
				{
					if (system::timera() > 50000 || unk_0x317536BCEA8FA6B0(iLocal_74, -1, 0) == iLocal_73[0])
					{
						if (func_61(&uLocal_140, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_74, 0) && !unk_0x1ECACBE8459041A9(iLocal_74))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									if (unk_0x8EE3A848975DDF21(iLocal_74, -1, 0) && unk_0xA8D0477084E86A92(iLocal_73[0], iLocal_74, 0))
									{
										unk_0x09DC36247844A9E1(iLocal_73[0], iLocal_74, 0);
										iLocal_53 = 2;
									}
									else if (unk_0x317536BCEA8FA6B0(iLocal_74, -1, 0) == iLocal_73[0])
									{
										iLocal_53 = 2;
									}
									else if (unk_0x317536BCEA8FA6B0(iLocal_74, -1, 0) == unk_0xFC1458A37D98B502())
									{
										iLocal_53 = 7;
									}
									else
									{
										func_64(iLocal_73[0], 120000, 0);
										unk_0x93F12E7D8D931858(iLocal_73[0], 1193033728, 0);
										unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
										system::wait(0);
										func_60();
									}
								}
							}
							else if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								func_64(iLocal_73[0], 120000, 0);
								unk_0x93F12E7D8D931858(iLocal_73[0], 1193033728, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
								system::wait(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (system::timera() > 60000)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
						{
							if (unk_0x8EE3A848975DDF21(iLocal_74, -1, 0))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
								{
									unk_0x6931076730A4AC5D(&iLocal_79);
									unk_0xCB3D88C918AA637C(0);
									unk_0x6F8C8278B7C06889(0, iLocal_74, -1, -1, 1f, 1, 0);
									unk_0x1B16DD5C115FE009(iLocal_79);
									unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
							{
								unk_0x6931076730A4AC5D(&iLocal_79);
								unk_0xCB3D88C918AA637C(0);
								unk_0x6F8C8278B7C06889(0, iLocal_74, -1, 0, 1f, 1, 0);
								unk_0x1B16DD5C115FE009(iLocal_79);
								unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_52 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
					{
						if (unk_0xA8D0477084E86A92(iLocal_73[0], iLocal_74, 0))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_73[0], 355471868) != 1 && unk_0x78F50AA8F955BEFC(iLocal_73[0], 355471868) != 0)
							{
								unk_0xB38E13EF2EC6F0E9(iLocal_74, 5f);
								unk_0xC7ED915AB706A5D8(iLocal_74, 1);
								unk_0x6931076730A4AC5D(&iLocal_79);
								unk_0x2931C350CED41AD3(0, iLocal_74, -1016,152f, -1352,855f, 4,4854f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x2931C350CED41AD3(0, iLocal_74, -1005,757f, -1353,806f, 4,4756f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x2931C350CED41AD3(0, iLocal_74, -989,2302f, -1354,278f, -7,3581f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x1B16DD5C115FE009(iLocal_79);
								unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
								unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
					{
						if (unk_0xAAA8D20859E2D36D(iLocal_73[0], iLocal_74) && unk_0xAAA8D20859E2D36D(iLocal_73[1], iLocal_74))
						{
							unk_0xC7ED915AB706A5D8(iLocal_74, 1);
							unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
							unk_0x270054D97CD161A8(iLocal_73[1], -1);
							unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
							iLocal_53 = 5;
						}
						if (!iLocal_81)
						{
							if (unk_0xAAA8D20859E2D36D(iLocal_73[0], iLocal_74) && !unk_0xAAA8D20859E2D36D(iLocal_73[1], iLocal_74))
							{
								unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
								unk_0x270054D97CD161A8(iLocal_73[0], -1);
							}
							if (!unk_0xAAA8D20859E2D36D(iLocal_73[0], iLocal_74) && unk_0xAAA8D20859E2D36D(iLocal_73[1], iLocal_74))
							{
								unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
								unk_0x270054D97CD161A8(iLocal_73[1], -1);
							}
							iLocal_81 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
					unk_0x6931076730A4AC5D(&iLocal_79);
					unk_0x87A3E70B0AB01608(0, iLocal_74, unk_0x3F90543934DCD7E6(iLocal_74, 0f, 2f, 0f), 10f, 0, iLocal_78, 262144, 5f, -1f);
					unk_0x181B5054237CD6BD(0, iLocal_74, 24, 500);
					unk_0x181B5054237CD6BD(0, iLocal_74, 9, 1500);
					unk_0x181B5054237CD6BD(0, iLocal_74, 24, 500);
					unk_0x181B5054237CD6BD(0, iLocal_74, 11, 1500);
					unk_0x2931C350CED41AD3(0, iLocal_74, 2185,817f, 3915,471f, 27,9257f, 4, 30f, 262144, 0f, 0f, 1);
					unk_0x1B16DD5C115FE009(iLocal_79);
					unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
					unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
				}
			}
			iLocal_53 = 6;
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_73[0], 242628503) == 1)
				{
					if (unk_0x2332DC2174507412(iLocal_73[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_52 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[1], 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x486F346ADFE56674(&(iLocal_73[1]));
					}
				}
				switch (iLocal_60)
				{
					case 0:
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (!unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
							{
								uLocal_126[0] = func_159(iLocal_73[0], 0, 145);
							}
							iLocal_60++;
							system::settimera(0);
						}
						break;
					
					case 1:
						if (system::timera() > 1000)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
							{
								if (func_141())
								{
									if (unk_0xB8DE76287EDC4957(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), 0))
									{
										fLocal_131 = func_137(unk_0xFC1458A37D98B502(), iLocal_73[0], 1);
										iLocal_60++;
									}
								}
								else if (!iLocal_99)
								{
									if (func_61(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_99 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_136();
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							if (func_141())
							{
								if (!iLocal_98)
								{
									if (func_137(unk_0xFC1458A37D98B502(), iLocal_73[0], 1) > (fLocal_131 + 5f))
									{
										if (func_61(&uLocal_140, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_98 = 1;
										}
									}
								}
							}
							else if (!iLocal_99)
							{
								if (func_61(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_99 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
							{
								unk_0x4BEFCD5DAE410A90(iLocal_74, 1);
							}
							if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
							{
								unk_0xE30CF11C0EE14316(&(uLocal_126[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!unk_0xA6DECE14FC9A8C51(iLocal_83))
								{
									iLocal_83 = func_134(vLocal_71, 0);
									unk_0x4B4040A0EC7DBA81(iLocal_83, 269);
									func_132();
								}
							}
							iLocal_58 = 1;
							iLocal_60++;
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							if (func_137(unk_0xFC1458A37D98B502(), iLocal_73[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							system::wait(1500);
							unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_140, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_140, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_140, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_140, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_138 = unk_0x53C562FD2B9E3AB0();
								iLocal_60++;
							}
						}
						break;
					
					case 5:
						func_131();
						func_130();
						func_136();
						if (!iLocal_90)
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_138) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_140, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_138 = unk_0x53C562FD2B9E3AB0();
										iLocal_90 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_89 && !bLocal_88)
							{
								func_129();
							}
							else
							{
								func_126();
								func_125();
								unk_0xBC3B7443617858A0(true);
							}
						}
						if (func_124(vLocal_69))
						{
							func_5(0);
							func_62();
							system::wait(0);
							func_61(&uLocal_140, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_123())
						{
							func_5(0);
							func_62();
							system::wait(0);
							func_61(&uLocal_140, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							if (unk_0x0C88267282FD588F(iLocal_73[0], vLocal_69, Global_22, true, true, 0))
							{
								if (unk_0xA6DECE14FC9A8C51(iLocal_82))
								{
									unk_0xE30CF11C0EE14316(&iLocal_82);
								}
								if (unk_0xA6DECE14FC9A8C51(iLocal_83))
								{
									unk_0xE30CF11C0EE14316(&iLocal_83);
								}
								iLocal_53 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_60)
				{
					case 0:
						if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_74, 1))
							{
								if (!unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
								{
									uLocal_126[0] = func_159(iLocal_73[0], 0, 145);
								}
								if (!unk_0xA6DECE14FC9A8C51(uLocal_126[1]))
								{
									uLocal_126[1] = func_159(iLocal_73[1], 0, 145);
								}
								if (!func_4())
								{
									system::settimera(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_140, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_140, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_140, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
						{
							unk_0xCB3D88C918AA637C(iLocal_73[0]);
							unk_0x6F8C8278B7C06889(iLocal_73[0], iLocal_74, 30000, 2, 2f, 1, 0);
						}
						system::settimera(0);
						iLocal_60++;
						break;
					
					case 2:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
						{
							unk_0x6931076730A4AC5D(&iLocal_79);
							unk_0xCB3D88C918AA637C(0);
							unk_0xF2163C96119FBF4B(0, iLocal_74, 1,5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							unk_0x6F8C8278B7C06889(0, iLocal_74, 30000, 1, 2f, 1, 0);
							unk_0x1B16DD5C115FE009(iLocal_79);
							unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
						}
						system::settimera(0);
						iLocal_60++;
						break;
					
					case 3:
						func_131();
						func_130();
						if (!iLocal_97)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_140, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_97 = 1;
								}
							}
						}
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
							{
								if (!unk_0x191BE1BC8F26F3C1(iLocal_73[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_73[1], 0))
								{
									if (unk_0xA8D0477084E86A92(iLocal_73[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) && unk_0xA8D0477084E86A92(iLocal_73[1], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
									{
										unk_0xF96119FCCD4D1889(255, iLocal_80, 1862763509);
										func_138();
										iLocal_59 = 0;
										while (iLocal_59 <= (iLocal_72 - 1))
										{
											if (unk_0xA6DECE14FC9A8C51(uLocal_126[iLocal_59]))
											{
												unk_0xE30CF11C0EE14316(&(uLocal_126[iLocal_59]));
											}
											iLocal_59++;
										}
										if (unk_0xA6DECE14FC9A8C51(iLocal_127))
										{
											unk_0xE30CF11C0EE14316(&iLocal_127);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!unk_0xA6DECE14FC9A8C51(iLocal_83))
											{
												iLocal_83 = func_134(vLocal_71, 0);
												unk_0x4B4040A0EC7DBA81(iLocal_83, 269);
												func_132();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_140, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												system::settimera(0);
												iLocal_60++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_140, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												system::settimera(0);
												iLocal_60++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_140, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												system::settimera(0);
												iLocal_60++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_131();
						func_130();
						if (!func_4())
						{
							if (func_61(&uLocal_140, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
								unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
								iLocal_138 = unk_0x53C562FD2B9E3AB0();
								iLocal_60++;
							}
						}
						break;
					
					case 5:
						func_131();
						if (iLocal_309 == 0 || iLocal_309 == 9)
						{
							func_130();
						}
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_138) > 9000)
						{
							func_117();
						}
						if (iLocal_309 == 9 && ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 6000 && (unk_0x53C562FD2B9E3AB0() - iLocal_310) < 6500))
						{
							func_61(&uLocal_140, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_124(vLocal_69))
						{
							func_5(0);
							func_62();
							system::wait(0);
							func_61(&uLocal_140, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_123())
						{
							func_5(0);
							func_62();
							system::wait(0);
							func_61(&uLocal_140, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
						{
							if ((!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1])) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_74, 0))
							{
								if (unk_0x0C88267282FD588F(iLocal_73[0], vLocal_69, Global_22, true, true, 0) && unk_0x0C88267282FD588F(iLocal_73[1], vLocal_69, Global_22, false, true, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0xA6DECE14FC9A8C51(iLocal_82))
						{
							unk_0xE30CF11C0EE14316(&iLocal_82);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_83))
						{
							unk_0xE30CF11C0EE14316(&iLocal_83);
						}
						iLocal_53 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_59 = 0;
			while (iLocal_59 <= (iLocal_72 - 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[iLocal_59]))
				{
					unk_0x771A86309E0CA47B(iLocal_73[iLocal_59], false);
				}
				iLocal_59++;
			}
			if (iLocal_52 == 1)
			{
				if (func_116(1, 0, 1) && iLocal_104 == -1)
				{
					func_6();
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), (10,5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == iLocal_74)
						{
							iLocal_104 = 0;
						}
						else
						{
							iLocal_104 = 1;
						}
					}
					else
					{
						iLocal_104 = 2;
					}
				}
				if (iLocal_104 == 0)
				{
					func_115();
				}
				if (iLocal_104 == 1)
				{
					func_114();
				}
				if (iLocal_104 == 2)
				{
					func_113();
				}
				if (bLocal_110)
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					func_30();
				}
			}
			if (iLocal_52 == 2)
			{
				if (func_116(1, 0, 1) && iLocal_104 == -1)
				{
					func_62();
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), (10,5f - 4f), 2, 0);
						unk_0x32C900DD9B686F75(1143,587f, 2672,224f, 37,1142f, 70f, 2);
						unk_0x32C900DD9B686F75(930,2788f, 2856,145f, 59,2884f, 70f, 2);
					}
					func_105(1, 1, 1, 0);
					while (func_4())
					{
						system::wait(0);
					}
					if (func_2())
					{
						if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == iLocal_74)
						{
							iLocal_104 = 0;
						}
					}
				}
				if (iLocal_104 == 0)
				{
					func_102();
				}
				else if (iLocal_104 == 1)
				{
					func_101();
				}
				else if (iLocal_104 == 2)
				{
					func_71();
				}
				if (bLocal_110)
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()//Position - 0x4E16
{
	switch (iLocal_106)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				unk_0x88235B448509228B(iLocal_73[0]);
				unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 10000, 2060, 4);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
			{
				unk_0x88235B448509228B(iLocal_73[0]);
				unk_0x60C06BFD037BB7CF(iLocal_73[1], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
			}
			func_61(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_106++;
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					unk_0x6EF694689373EE8D(iLocal_73[0], vLocal_70, 1f, -1, 1193033728, 1056964608);
					iLocal_105 = unk_0x53C562FD2B9E3AB0() + 500;
					iLocal_106++;
				}
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					unk_0x380C1E7B7740D618(iLocal_73[1], vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x4F73
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
	func_73(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x505A
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_100();
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
					func_99(99, 1);
					func_98(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_98(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_98(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_84(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_80(5))
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
							func_98(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_98(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_98(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_98(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_98(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_98(joaat("sp2_money_spent_property"), iParam3);
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
									func_98(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_98(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_98(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_98(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_99(95, iParam3);
					break;
				
				case 1:
					func_99(97, iParam3);
					break;
				
				case 2:
					func_99(96, iParam3);
					break;
			}
			func_99(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
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
					func_98(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_98(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_98(joaat("sp2_total_cash_earned"), iParam3);
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
	func_75(iParam0);
	if (Global_35861 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)//Position - 0x5659
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

void func_75(int iParam0)//Position - 0x58DB
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

void func_76(int iParam0)//Position - 0x5935
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_40(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_78() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_78() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_77(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)//Position - 0x5A0A
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

int func_78()//Position - 0x5A90
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)//Position - 0x5A9D
{
	func_99(93, iParam0);
	func_99(29, iParam0);
	func_99(30, iParam0);
}

bool func_80(int iParam0)//Position - 0x5ABD
{
	if (iParam0 == 8)
	{
		return func_81(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_78() /*12130*/].f_7676.f_10, iParam0);
}

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x5B0B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar1 = func_83(iParam0, iParam1);
	uVar2 = func_82(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_82(int iParam0)//Position - 0x5B48
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

int func_83(int iParam0, int iParam1)//Position - 0x5E08
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_84(bool bParam0)//Position - 0x60AA
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
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_85(27, 1);
	return 1;
}

int func_85(int iParam0, int iParam1)//Position - 0x6161
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_86(iParam0, iParam1);
}

int func_86(int iParam0, int iParam1)//Position - 0x617C
{
	if (func_22(14) && !func_97(iParam0))
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
	if (func_96(&Global_4267379))
	{
		if (func_94(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_87(&Global_4267379, iParam0))
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

int func_87(var uParam0, int iParam1)//Position - 0x6219
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	func_90(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_88(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_88(var uParam0, int iParam1)//Position - 0x62CA
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_97(iParam1))
	{
		return 0;
	}
	if (func_94(uParam0, iParam1))
	{
		return 0;
	}
	if (func_93(uParam0) < 0f)
	{
		func_92(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_89(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_89(var uParam0, int iParam1)//Position - 0x6345
{
	return (*uParam0)[iParam1] == 78;
}

void func_90(var uParam0)//Position - 0x6356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_91(uParam0, iVar0);
		iVar0++;
	}
	func_92(uParam0, (Global_4267378 - 0,5f));
}

void func_91(var uParam0, int iParam1)//Position - 0x638A
{
	(*uParam0)[iParam1] = 78;
}

void func_92(var uParam0, float fParam1)//Position - 0x639A
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

float func_93(var uParam0)//Position - 0x63B7
{
	return uParam0->f_80;
}

bool func_94(var uParam0, int iParam1)//Position - 0x63C3
{
	return func_95(uParam0, iParam1) != -1;
}

int func_95(var uParam0, int iParam1)//Position - 0x63D5
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

bool func_96(var uParam0)//Position - 0x6402
{
	return uParam0->f_79 == 1;
}

int func_97(int iParam0)//Position - 0x6410
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

void func_98(int iParam0, int iParam1)//Position - 0x6460
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_99(int iParam0, int iParam1)//Position - 0x6483
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

void func_100()//Position - 0x64E0
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

void func_101()//Position - 0x6555
{
	int iVar0;
	
	switch (iLocal_106)
	{
		case 0:
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0x9EC5112BB1C4047A(iVar0))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
							unk_0x88235B448509228B(iLocal_73[0]);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
							unk_0x88235B448509228B(iLocal_73[1]);
						}
					}
					func_61(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
			{
				unk_0x6931076730A4AC5D(&iLocal_79);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0x380C1E7B7740D618(0, vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x1B16DD5C115FE009(iLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 1500;
				iLocal_106++;
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					unk_0x380C1E7B7740D618(iLocal_73[0], vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x53C562FD2B9E3AB0() + 1000;
					iLocal_106 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x53C562FD2B9E3AB0() + 1500;
					iLocal_106 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_105 = unk_0x53C562FD2B9E3AB0() + 750;
					iLocal_106 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_106++;
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x380C1E7B7740D618(iLocal_73[0], vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
						iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3500;
						iLocal_106++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x380C1E7B7740D618(iLocal_73[0], vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
						iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_106++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_102()//Position - 0x680A
{
	unk_0x36853D5037847BF3();
	switch (iLocal_106)
	{
		case 0:
			unk_0x4255E93FCCDE108E(false);
			unk_0x9B47B379EE749C38(false);
			if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
			{
				if (unk_0x9EC5112BB1C4047A(iLocal_74))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
							unk_0x88235B448509228B(iLocal_73[0]);
							unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 4000, 2060, 4);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
							unk_0x88235B448509228B(iLocal_73[1]);
						}
					}
					StringCopy(&cLocal_118, "", 24);
					func_62();
					system::wait(0);
					func_61(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
			{
				iLocal_108 = unk_0x5AC38B4D80D4E352(26379945, 1121,335f, 2643,908f, 37,862f, 1,5062f, 0f, 20,274f, 33,0256f, 0, 2);
				iLocal_109 = unk_0x5AC38B4D80D4E352(26379945, 1121,302f, 2643,998f, 37,8919f, 1,5062f, 0f, 18,7019f, 33,0256f, 0, 2);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_108, "HAND_SHAKE", 0,3f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_109, "HAND_SHAKE", 0,3f);
				unk_0xF10DA1539629CC3F(iLocal_109, iLocal_108, 2500, 0, 0);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				unk_0x247EAA2E93D4A021(vLocal_69, 8f, 1, 0, 0, false);
				unk_0xBD8D47FDC6902B2D(iLocal_74, 1120,551f, 2647,307f, 36,9963f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_74, 179,7675f);
				unk_0xACE486395AA1867D(iLocal_74, 1084227584);
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 2500;
				iLocal_106++;
			}
			break;
		
		case 2:
			if (iLocal_105 - 500) < unk_0x53C562FD2B9E3AB0()
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					if (unk_0x88DDBE9908752BF0(iLocal_73[1], 0))
					{
						unk_0x6931076730A4AC5D(&iLocal_79);
						unk_0x380C1E7B7740D618(0, vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
						unk_0x1B16DD5C115FE009(iLocal_79);
						unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
						unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
					}
				}
			}
			if (iLocal_105 - 1000) < unk_0x53C562FD2B9E3AB0()
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					if (unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
					{
						unk_0x6931076730A4AC5D(&iLocal_79);
						unk_0x380C1E7B7740D618(0, vLocal_70 - Vector(0f, 0f, 1f), 1f, -1, 0,25f, 0, 1193033728);
						unk_0x1B16DD5C115FE009(iLocal_79);
						unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
						unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
					}
				}
			}
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				unk_0xA6DE0FBA9218D7F0(iLocal_108, 1105,849f, 2664,653f, 38,047f, 3,6983f, 0,0242f, -140,4768f, 41,7126f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(iLocal_109, 1106f, 2664,469f, 38,0625f, 3,6984f, 0,0242f, -140,4769f, 41,7126f, 0, 1, 1, 2);
				unk_0xF10DA1539629CC3F(iLocal_109, iLocal_108, 5000, 0, 0);
				unk_0x81BCCFFE3F019672();
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 6000;
				iLocal_106++;
			}
			break;
		
		case 3:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				unk_0xA6DE0FBA9218D7F0(iLocal_108, 1122,37f, 2646,108f, 38,3339f, -5,6746f, -0,1271f, 33,7683f, 50f, 0, 1, 1, 2);
				unk_0xA6DE0FBA9218D7F0(iLocal_109, 1122,338f, 2646,157f, 38,3281f, -5,6746f, -0,1271f, 33,7683f, 50f, 0, 1, 1, 2);
				unk_0xF10DA1539629CC3F(iLocal_109, iLocal_108, 1500, 1, 1);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					unk_0xBD8D47FDC6902B2D(iLocal_73[0], 1141,156f, 2643,205f, 37,1487f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_73[0], 262,7369f);
					unk_0xBD8D47FDC6902B2D(iLocal_73[1], 1140,152f, 2644,149f, 37,1487f, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_73[1], 262,1522f);
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 1700;
				iLocal_106++;
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			iLocal_106 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_105 = unk_0x53C562FD2B9E3AB0() + 5500;
						iLocal_106++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_105 = unk_0x53C562FD2B9E3AB0() + 5500;
						iLocal_106++;
					}
				}
			}
			break;
		
		case 7:
			unk_0x81BCCFFE3F019672();
			unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
			func_105(0, 1, 1, 0);
			unk_0x68433819717660CF(&(iLocal_73[0]));
			unk_0x68433819717660CF(&(iLocal_73[1]));
			if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_74, 7);
			}
			if (iLocal_111)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_74, 0))
				{
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
					unk_0x6147908AB85766AA(iLocal_74, 1);
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				}
			}
			else
			{
				unk_0x90CE99E954B80CFF(0, 0, 3, 0);
			}
			unk_0x7849794435F39D49(iLocal_108, false);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(-7f, 1065353216);
			unk_0x4255E93FCCDE108E(true);
			unk_0x9B47B379EE749C38(true);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_110 = true;
	}
	if (iLocal_106 != 0)
	{
		if (func_103(1000))
		{
			func_62();
			iLocal_111 = 1;
			iLocal_106 = 7;
		}
	}
}

int func_103(int iParam0)//Position - 0x6DE7
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_104())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_104()//Position - 0x6E31
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

void func_105(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x6E63
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_112(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_14())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_111(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_112(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_111(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_109(unk_0x9EB17624F44A8DA4())) && !func_107(unk_0x9EB17624F44A8DA4(), 0)) && !func_106())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_109(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_106()//Position - 0x6F7C
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_107(int iParam0, int iParam1)//Position - 0x6F99
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_108(-1, 0) == 8;
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

int func_108(int iParam0, bool bParam1)//Position - 0x6FE4
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_109(int iParam0)//Position - 0x7025
{
	if (func_107(iParam0, 0))
	{
		return 1;
	}
	if (func_110())
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

bool func_110()//Position - 0x7067
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_111(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x7078
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

void func_112(int iParam0)//Position - 0x70AB
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

void func_113()//Position - 0x70CE
{
	switch (iLocal_106)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					unk_0x88235B448509228B(iLocal_73[0]);
					unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 10000, 2060, 4);
				}
				if (bLocal_88)
				{
					func_61(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_106++;
			}
			break;
		
		case 1:
			iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3000;
			iLocal_106++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				unk_0x6931076730A4AC5D(&iLocal_79);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1800);
				unk_0x380C1E7B7740D618(0, vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x12C9D41D52A560D6(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 2000;
				iLocal_106++;
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_114()//Position - 0x72AD
{
	int iVar0;
	
	switch (iLocal_106)
	{
		case 0:
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0x9EC5112BB1C4047A(iVar0) && !func_4())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
						unk_0x88235B448509228B(iLocal_73[0]);
						unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
						unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						func_61(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			iLocal_106++;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				unk_0x6931076730A4AC5D(&iLocal_79);
				unk_0x16416C5B54FDBCBB(0, 0, 4194304);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1800);
				unk_0x380C1E7B7740D618(0, vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x12C9D41D52A560D6(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
			}
			func_64(iLocal_73[0], 120000, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3000;
			iLocal_106++;
			break;
		
		case 4:
			iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				iLocal_106++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_115()//Position - 0x74E0
{
	switch (iLocal_106)
	{
		case 0:
			if (unk_0xB8DE76287EDC4957(iLocal_74, 0))
			{
				if (unk_0x9EC5112BB1C4047A(iLocal_74) && !func_4())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
						unk_0x88235B448509228B(iLocal_73[0]);
						unk_0x60C06BFD037BB7CF(iLocal_73[0], unk_0xFC1458A37D98B502(), 10000, 2060, 4);
						unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						func_61(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		
		case 1:
			iLocal_106++;
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				unk_0x6931076730A4AC5D(&iLocal_79);
				unk_0x16416C5B54FDBCBB(0, 0, 4194304);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1800);
				unk_0x380C1E7B7740D618(0, vLocal_70, 1f, -1, 0,25f, 0, 1193033728);
				unk_0x12C9D41D52A560D6(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
				func_64(iLocal_73[0], 120000, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3000;
				iLocal_106++;
			}
			break;
		
		case 3:
			iLocal_105 = unk_0x53C562FD2B9E3AB0() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		
		case 4:
			if (iLocal_105 < unk_0x53C562FD2B9E3AB0())
			{
				iLocal_106++;
			}
			break;
		
		case 5:
			iLocal_106++;
			break;
		
		case 6:
			iLocal_106++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

int func_116(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7717
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

void func_117()//Position - 0x77FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0x666DEE82C2B4C5B5();
		if (iVar1 != 0)
		{
			iVar2 = unk_0x8E8C94609BA4BEA9(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_122(64) || unk_0xF2B58F79D29425B4(0, 86)) || unk_0xF2B58F79D29425B4(0, 71)) || unk_0xF2B58F79D29425B4(0, 72)) || unk_0xF2B58F79D29425B4(0, 76)) || unk_0xF2B58F79D29425B4(0, 73)) || unk_0xF2B58F79D29425B4(0, 68)) || unk_0xF2B58F79D29425B4(0, 75)) || iVar0)
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		}
	}
	switch (iLocal_309)
	{
		case 0:
			if (func_121())
			{
				unk_0x60C06BFD037BB7CF(iLocal_73[0], iLocal_73[1], -1, 2060, 4);
				unk_0x60C06BFD037BB7CF(iLocal_73[1], iLocal_73[0], -1, 2060, 4);
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0x6931076730A4AC5D(&iLocal_79);
					unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_79);
					unk_0xAB30B1CF01A198C1(iLocal_73[0], iLocal_79);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
					unk_0x6931076730A4AC5D(&iLocal_79);
					unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_79);
					unk_0xAB30B1CF01A198C1(iLocal_73[1], iLocal_79);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
					iLocal_310 = unk_0x53C562FD2B9E3AB0();
					iLocal_309++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_310 = unk_0x53C562FD2B9E3AB0();
				iLocal_309++;
			}
			break;
		
		case 2:
			if (func_121())
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 5000)
				{
					if (func_61(&uLocal_140, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_310 = unk_0x53C562FD2B9E3AB0();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 15000)
			{
				if (func_121())
				{
					unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_309++;
				}
			}
			break;
		
		case 4:
			if (func_121())
			{
				func_119();
				if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0,9f)
					{
						unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_310 = unk_0x53C562FD2B9E3AB0();
						iLocal_309++;
					}
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
				unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
				iLocal_309 = 3;
			}
			break;
		
		case 5:
			if (func_121())
			{
				func_119();
				func_118();
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(iLocal_73[1], 0), 0))
				{
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0x666DEE82C2B4C5B5();
						if (iVar4 != 0)
						{
							iVar5 = unk_0x8E8C94609BA4BEA9(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0x6931076730A4AC5D(&iLocal_79);
							unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_79);
							unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iLocal_79);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_140, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x53C562FD2B9E3AB0();
								iLocal_309++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_140, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x53C562FD2B9E3AB0();
								iLocal_309++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_140, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_310 = unk_0x53C562FD2B9E3AB0() + 14000;
								iLocal_309++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_119();
			func_118();
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 5000 && func_121())
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(iLocal_73[1], 0), 0))
				{
					if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0,9f)
						{
							if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_309++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_119();
			if (func_121())
			{
				if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0,25f && unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0,2f)
					{
						unk_0xB8D9F55BA414128D(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0, 0f, 0f, 20f, -0,4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_310 = unk_0x53C562FD2B9E3AB0();
						iLocal_309++;
					}
				}
			}
			break;
		
		case 8:
			func_119();
			if (func_121())
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(iLocal_73[1], 0), 0))
				{
					if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0,525f)
						{
							unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_309 = 6;
						}
					}
				}
			}
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_310) > 10000)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
					unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
					iLocal_310 = unk_0x53C562FD2B9E3AB0();
					iLocal_309++;
				}
			}
			break;
	}
}

void func_118()//Position - 0x7EE5
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0))
		{
			if (unk_0xA5F6598E13F98E08(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0,15f && unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0,1f) || (unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0,35f && unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0,3f)) || (unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0,65f && unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0,6f)) || (unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0,9f && unk_0x7A70772AE40E3821(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0,85f))
				{
					unk_0xB8D9F55BA414128D(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0, 0f, 0f, 15f, -0,4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x7CC4363AEEF7EF34(-1, "SUSPENSION_SCRIPT_FORCE", unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_119()//Position - 0x803C
{
	unk_0x9B16F08390FCC31C();
	func_120();
}

void func_120()//Position - 0x804C
{
	Global_17162.f_134 = 1;
}

int func_121()//Position - 0x805A
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
	{
		if (unk_0x88DDBE9908752BF0(iLocal_73[1], 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iLocal_73[1], 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
				{
					if (unk_0xA8D0477084E86A92(iLocal_73[0], iVar0, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, 2, 0) == iLocal_73[0] && unk_0x317536BCEA8FA6B0(iVar0, 1, 0) == iLocal_73[1])
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

int func_122(int iParam0)//Position - 0x80D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x9473DAD46D61B987(2, 195) - 128);
	iVar1 = (unk_0x9473DAD46D61B987(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x8127
{
	if (func_17() == 2)
	{
		if (func_59())
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

int func_124(vector3 vParam0)//Position - 0x81A2
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_25471)
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

void func_125()//Position - 0x822F
{
	if (!bLocal_88)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_90 && !iLocal_114) && (unk_0x53C562FD2B9E3AB0() - iLocal_138) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_115)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_140, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_140, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_140, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_122 = unk_0x53C562FD2B9E3AB0() + 6000;
			iLocal_115 = 1;
		}
	}
	if (!bLocal_88)
	{
		if ((iLocal_114 && !iLocal_113) && iLocal_122 < unk_0x53C562FD2B9E3AB0())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_115 = 0;
					iLocal_113 = 1;
				}
			}
		}
	}
	else if ((bLocal_88 && !iLocal_112) && iLocal_122 < unk_0x53C562FD2B9E3AB0())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_140, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_115 = 0;
				iLocal_112 = 1;
			}
		}
	}
}

void func_126()//Position - 0x83EA
{
	if (func_2() && iLocal_91 < 2)
	{
		if ((unk_0x7552980EE8CA7B38(unk_0x9EB17624F44A8DA4()) > 0 && unk_0x7552980EE8CA7B38(unk_0x9EB17624F44A8DA4()) < 100) || unk_0x9A3C64A7BB4588B3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				system::wait(0);
				func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_130 += 6;
			}
		}
		func_127(vLocal_129, (unk_0x53C562FD2B9E3AB0() - iLocal_128));
	}
	if (iLocal_130 > 17)
	{
		iLocal_89 = 1;
	}
}

void func_127(vector3 vParam0, int iParam1)//Position - 0x847B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (func_2())
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			vVar0 = { unk_0x90CB8A0A47B8D830(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0) };
		}
	}
	vVar1 = { vVar0 - vParam0 };
	vVar1 = { func_128(vVar1, iParam1) };
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (!unk_0x5E0BEAAD15B888F3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_132 == -1)
				{
					iLocal_132 = unk_0x53C562FD2B9E3AB0() + 400;
				}
				else if (iLocal_132 < unk_0x53C562FD2B9E3AB0())
				{
					iLocal_130 += 3;
					func_5(0);
					func_62();
					system::wait(0);
					func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_132 = -1;
			}
		}
	}
	if (vVar1.y > 0,025f)
	{
		iLocal_130++;
		if (!func_27("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar1.y < -0,025f)
	{
		iLocal_130++;
		if (!func_27("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar1.x > 0,025f)
	{
		iLocal_130++;
		if (!func_27("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (vVar1.x < -0,025f)
	{
		iLocal_130++;
		if (!func_27("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_128(vector3 vParam0, int iParam1)//Position - 0x865E
{
	vector3 vVar0;
	
	vVar0.x = (vParam0.x / IntToFloat(iParam1));
	vVar0.y = (vParam0.y / IntToFloat(iParam1));
	vVar0.z = (vParam0.z / IntToFloat(iParam1));
	return vVar0;
}

void func_129()//Position - 0x868A
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
	{
		switch (iLocal_91)
		{
			case 0:
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
					{
						unk_0x38CCEC620E3BB265(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1);
					}
					system::settimerb(0);
					iLocal_91++;
				}
				break;
			
			case 1:
				if (system::timerb() > 3000 || !func_4())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
						unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_91++;
					}
				}
				break;
			
			case 2:
				if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3))
				{
					fVar0 = unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_1", sLocal_94);
					if (fVar0 > 0,243f && fVar0 < 0,28f)
					{
						if (!iLocal_85)
						{
							unk_0x2483C81F4B2C857B("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_85 = 1;
						}
					}
					else if (fVar0 > 0,295f && fVar0 < 0,37f)
					{
						if (!iLocal_86)
						{
							unk_0x2483C81F4B2C857B("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_86 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_140, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_140, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_140, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0,49f && fVar0 < 0,55f)
					{
						if (!iLocal_87)
						{
							unk_0x2483C81F4B2C857B("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_87 = 1;
						}
					}
					if (unk_0x7A70772AE40E3821(iLocal_73[0], "random@drunk_driver_1", sLocal_94) > 0,8f)
					{
						iLocal_91++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3))
				{
				}
				if (func_61(&uLocal_140, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_85 = 0;
					iLocal_91++;
				}
				break;
			
			case 4:
				unk_0x0B9D04994D02CC2F(iLocal_92);
				bLocal_88 = true;
				break;
			}
	}
}

void func_130()//Position - 0x8914
{
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		if (!iLocal_135)
		{
			iLocal_133 = unk_0x53C562FD2B9E3AB0();
			iLocal_135 = 1;
		}
		else
		{
			iLocal_134 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else
	{
		iLocal_134 = 0;
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_134 - iLocal_133) > 50000 && !iLocal_136)
	{
		if (iLocal_52 == 1)
		{
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_136 = 1;
	}
	if ((iLocal_134 - iLocal_133) > 60000 && iLocal_136)
	{
		if (iLocal_52 == 2)
		{
			func_62();
			system::wait(0);
			func_61(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
		{
			unk_0x93F12E7D8D931858(iLocal_73[0], 1193033728, 0);
			func_64(iLocal_73[0], 120000, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
			if (unk_0xC816B63289F7A279(iLocal_73[0]))
			{
				unk_0x88235B448509228B(iLocal_73[0]);
			}
			unk_0xF2163C96119FBF4B(iLocal_73[1], iLocal_73[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_64(iLocal_73[1], 120000, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
			if (unk_0xC816B63289F7A279(iLocal_73[1]))
			{
				unk_0x88235B448509228B(iLocal_73[1]);
			}
		}
		func_60();
	}
}

void func_131()//Position - 0x8A5D
{
	if (iLocal_52 == 1)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
		{
			if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_141() || unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0xC816B63289F7A279(iLocal_73[0]))
				{
					unk_0x57FB41CABA25835C(iLocal_73[0], func_57());
					unk_0xA7C52BDFAE69B37F(iLocal_73[0], 1);
					unk_0xF6A83791895D5AA1(iLocal_73[0], 0);
				}
			}
			else if (unk_0xC816B63289F7A279(iLocal_73[0]))
			{
				unk_0x88235B448509228B(iLocal_73[0]);
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_73[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
				{
					if ((!unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3) && !unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3)) && !unk_0x0F299BBD0DC14B18(iLocal_73[0]))
					{
						unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_144())
					{
						func_56(0);
						iLocal_100 = 0;
					}
				}
				else if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3))
				{
					unk_0xA03AF603968943A1(iLocal_73[0], 0, 0);
				}
			}
			else
			{
				if (unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
				{
					if (unk_0xA5F6598E13F98E08(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3))
					{
						unk_0xA03AF603968943A1(iLocal_73[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_100)
				{
					func_56(1);
					iLocal_100 = 1;
				}
			}
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 8f, 8f, 8f, 0, 1, 0) || unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_126[0]));
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_82))
				{
					iLocal_82 = func_134(vLocal_69, 1);
				}
			}
			else
			{
				if (!unk_0xA6DECE14FC9A8C51(uLocal_126[0]))
				{
					uLocal_126[0] = func_159(iLocal_73[0], 0, 145);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_82))
				{
					unk_0xE30CF11C0EE14316(&iLocal_82);
				}
			}
		}
	}
	if (iLocal_52 == 2)
	{
		if ((!unk_0x191BE1BC8F26F3C1(iLocal_74, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
		{
			if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 150f, 150f, 150f, 0, 1, 0) || !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
					{
						if (unk_0xC816B63289F7A279(iLocal_73[0]))
						{
							unk_0x88235B448509228B(iLocal_73[0]);
						}
						unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
						unk_0xD68E88A8E0BE8697(iLocal_73[0], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						func_64(iLocal_73[0], 120000, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_73[0], true);
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_73[1]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[1]))
					{
						if (unk_0xC816B63289F7A279(iLocal_73[1]))
						{
							unk_0x88235B448509228B(iLocal_73[1]);
						}
						unk_0xB8E08BD5B184DF4E(iLocal_73[1]);
						unk_0xD68E88A8E0BE8697(iLocal_73[1], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						func_64(iLocal_73[1], 120000, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_73[1], true);
					}
				}
				func_60();
			}
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_74, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_73[0], iLocal_74, 0) && unk_0xA8D0477084E86A92(iLocal_73[1], iLocal_74, 0))
				{
					if (func_144())
					{
						func_56(0);
						iLocal_100 = 0;
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_82))
					{
						iLocal_82 = func_134(vLocal_69, 1);
					}
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_127))
				{
					unk_0xE30CF11C0EE14316(&iLocal_127);
				}
			}
			else
			{
				if ((func_4() && !iLocal_100) && iLocal_60 > 3)
				{
					func_56(1);
					iLocal_100 = 1;
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_127))
				{
					iLocal_127 = func_142(iLocal_74, 0, 0);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_82))
				{
					unk_0xE30CF11C0EE14316(&iLocal_82);
				}
			}
		}
	}
}

void func_132()//Position - 0x8E5C
{
	if (func_17() == 2)
	{
		if (!Global_25470)
		{
			func_133("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_133(char* sParam0, int iParam1)//Position - 0x8E80
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_134(vector3 vParam0, bool bParam1)//Position - 0x8E97
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_135(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_135(bool bParam0, float fParam1, float fParam2)//Position - 0x8EC3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_136()//Position - 0x8EDA
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (!func_141())
			{
				if (unk_0xC816B63289F7A279(iLocal_73[0]))
				{
					unk_0x88235B448509228B(iLocal_73[0]);
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_73[0], 1227113341) != 1 && unk_0x78F50AA8F955BEFC(iLocal_73[0], 1227113341) != 0)
				{
					unk_0x4C7AF3B2BE8C3193(iLocal_73[0], unk_0xFC1458A37D98B502(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
				{
					unk_0x16416C5B54FDBCBB(iLocal_73[0], 0, 0);
				}
				if (!iLocal_102)
				{
					if (!func_4())
					{
						func_61(&uLocal_140, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_102 = 1;
					}
				}
			}
			else
			{
				iLocal_102 = 0;
				if (unk_0x78F50AA8F955BEFC(iLocal_73[0], 1227113341) == 1 && unk_0x78F50AA8F955BEFC(iLocal_73[0], 1227113341) == 0)
				{
					unk_0xB8E08BD5B184DF4E(iLocal_73[0]);
				}
			}
		}
		else if (!unk_0xC816B63289F7A279(iLocal_73[0]))
		{
			unk_0x57FB41CABA25835C(iLocal_73[0], func_57());
			unk_0xA7C52BDFAE69B37F(iLocal_73[0], 1);
			unk_0xF6A83791895D5AA1(iLocal_73[0], 0);
		}
	}
}

float func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x8FFE
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

void func_138()//Position - 0x905C
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_25468 = 1;
		}
	}
}

void func_139(int iParam0, var uParam1)//Position - 0x9078
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				unk_0x6931076730A4AC5D(&iLocal_79);
				unk_0xCB3D88C918AA637C(0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2060, 4);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
				unk_0x1B16DD5C115FE009(iLocal_79);
				unk_0xAB30B1CF01A198C1(iParam0, iLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_79);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (!unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_140()//Position - 0x9131
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_140, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			system::settimera(0);
			iLocal_137++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_140, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			system::settimera(0);
			iLocal_137++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_140, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			system::settimera(0);
			iLocal_137++;
		}
	}
}

int func_141()//Position - 0x91B4
{
	int iVar0;
	
	if (iLocal_52 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_52 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if ((((((!unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()) && !unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) && !unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) && !unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) && !unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) && !unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rhino")))
			{
				if (unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) >= iVar0)
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
			if (((((!unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0, bool bParam1, bool bParam2)//Position - 0x930D
{
	return func_143(iParam0, !bParam1, bParam2);
}

int func_143(int iParam0, bool bParam1, bool bParam2)//Position - 0x9320
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_135(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_135(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_135(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_144()//Position - 0x93C4
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

void func_145()//Position - 0x93DB
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_95)
			{
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_95 = 1;
				}
			}
			if (!iLocal_96)
			{
				if (func_61(&uLocal_140, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_96 = 1;
				}
			}
		}
	}
}

void func_146()//Position - 0x944C
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_124))
	{
		unk_0xE30CF11C0EE14316(&iLocal_124);
	}
	iLocal_59 = 0;
	while (iLocal_59 <= (iLocal_72 - 1))
	{
		if (!unk_0xA6DECE14FC9A8C51(uLocal_126[iLocal_59]))
		{
			uLocal_126[iLocal_59] = func_159(iLocal_73[iLocal_59], 0, 145);
			unk_0x9C27373CC69ECF87(uLocal_126[iLocal_59], false);
		}
		iLocal_59++;
	}
}

void func_147()//Position - 0x94A4
{
	unk_0x278F19E969607FAC();
	Global_16748 = 0;
}

void func_148(bool bParam0)//Position - 0x94B4
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

int func_149(int iParam0)//Position - 0x94E0
{
	if (func_152())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_43(Global_104544))
		{
			func_150(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_43(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0)//Position - 0x9533
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_133(func_151(iParam0), -1);
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
					func_133(func_151(iParam0), -1);
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
					func_133(func_151(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_151(int iParam0)//Position - 0x9614
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

int func_152()//Position - 0x9656
{
	switch (func_153(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x968C
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
		if (func_157(0))
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
		if (!func_155(iParam2))
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
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(var uParam0, int iParam1)//Position - 0x97C3
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

bool func_155(int iParam0)//Position - 0x9812
{
	return func_156(iParam0, Global_35861);
}

int func_156(int iParam0, int iParam1)//Position - 0x9823
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

int func_157(int iParam0)//Position - 0x9A04
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_155(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_158(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9A26
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16749 = 1;
	Global_16753 = 0;
	Global_16751 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_159(int iParam0, bool bParam1, int iParam2)//Position - 0x9A79
{
	int iVar0;
	
	iVar0 = func_143(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_160()//Position - 0x9ACB
{
	if (func_162())
	{
		sLocal_93 = "drunk_idle_van";
		sLocal_94 = "vomit_van";
	}
	else if (func_161())
	{
		sLocal_93 = "drunk_idle_low";
		sLocal_94 = "vomit_low";
	}
	else
	{
		sLocal_93 = "drunk_idle";
		sLocal_94 = "vomit_outside";
	}
}

int func_161()//Position - 0x9B0B
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0))
		{
			iVar0 = unk_0xD9E4EECED37F4370(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0));
			if ((((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1887744178) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_162()//Position - 0x9BDF
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0), 0))
		{
			iVar0 = unk_0xD9E4EECED37F4370(unk_0xDFD115BB10FE46A9(iLocal_73[0], 0));
			if (((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184) || iVar0 == 1663892749)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_163()//Position - 0x9CC1
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

void func_164()//Position - 0x9D2E
{
	if (!iLocal_57)
	{
		func_166(39, 1);
		func_166(40, 1);
		func_166(41, 1);
		func_166(42, 1);
		func_166(43, 1);
		func_166(44, 1);
		unk_0x247EAA2E93D4A021(vLocal_62, 8f, 1, 0, 0, false);
		unk_0xCB389937EDB1519A(vLocal_62 - Vector(8f, 8f, 8f), vLocal_62 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		unk_0x4C15495E88D71C61(vLocal_66 - Vector(10f, 15f, 15f), vLocal_66 + Vector(10f, 15f, 15f), false, 1);
		unk_0x4C15495E88D71C61(vLocal_69 - Vector(10f, 15f, 15f), vLocal_69 + Vector(10f, 15f, 15f), false, 1);
		unk_0x872F1C1F8587CCC7(&uLocal_123, 5);
		if (func_17() == 0)
		{
			func_165(&uLocal_140, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_165(&uLocal_140, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_165(&uLocal_140, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
		}
		unk_0x4DE114E3C7F8B7C2("rghDrunkPeds", &iLocal_80);
		iLocal_74 = unk_0xEA60F3B426BB095B(iLocal_78, vLocal_66, fLocal_67, true, true, false);
		unk_0x695BF4E9032C8B89(iLocal_74);
		unk_0xACE486395AA1867D(iLocal_74, 1084227584);
		unk_0x2E4932E63763FE26(iLocal_78, true);
		unk_0x4BEFCD5DAE410A90(iLocal_74, 3);
		unk_0xFA87254221D30EB8(iLocal_74, 1);
		iLocal_68 = unk_0xDE523AF6F7B269AB(iLocal_74);
		iLocal_73[0] = unk_0xAC992EFAD62C33BF(26, iLocal_76, vLocal_62, fLocal_63, 1, true);
		unk_0x771A86309E0CA47B(iLocal_73[0], true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_73[0], iLocal_80);
		unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 185, true);
		unk_0xE17958D3FD0F9EE9(iLocal_73[0], 65536, true);
		unk_0x14776E43F90DD454(iLocal_76);
		unk_0x8BB5ECF21DDE505B(iLocal_73[0], 1);
		iLocal_73[1] = unk_0xAC992EFAD62C33BF(26, iLocal_77, vLocal_64, fLocal_65, 1, true);
		unk_0x771A86309E0CA47B(iLocal_73[1], true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_73[1], iLocal_80);
		unk_0xAE01EF4BC84AFE7C(iLocal_73[1], 185, true);
		unk_0xE17958D3FD0F9EE9(iLocal_73[1], 65536, true);
		unk_0x8BB5ECF21DDE505B(iLocal_73[1], 1);
		unk_0xF96119FCCD4D1889(5, iLocal_80, 1862763509);
		unk_0x14776E43F90DD454(iLocal_77);
		if (iLocal_52 == 1)
		{
			unk_0x12C9D41D52A560D6(iLocal_73[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(iLocal_73[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x60C54803C97FDAAB(iLocal_73[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			unk_0x60C54803C97FDAAB(iLocal_73[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			unk_0x03924C68EFCBC511(iLocal_73[0], 0, 1, 2, 0);
			unk_0x03924C68EFCBC511(iLocal_73[0], 3, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_73[0], 4, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 0, 1, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 3, 0, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 4, 0, 1, 0);
			unk_0x38CCEC620E3BB265(iLocal_74, 1);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 206, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 299, true);
			unk_0x5C5D33A1B2711D21(iLocal_73[0], false);
			unk_0x350CEE66BDF90273(iLocal_73[0], "REDR1Drunk1_AI_Drunk");
			unk_0x350CEE66BDF90273(iLocal_73[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_165(&uLocal_140, 3, iLocal_73[0], "REDR1Drunk1", 0, 1);
			func_165(&uLocal_140, 4, iLocal_73[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_52 == 2)
		{
			unk_0xCB389937EDB1519A(vLocal_69 - Vector(10f, 50f, 30f), vLocal_69 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			unk_0x438D30A195B65156(iLocal_74, true);
			unk_0x03924C68EFCBC511(iLocal_73[1], 0, 0, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 2, 0, 2, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 3, 1, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 4, 1, 2, 0);
			unk_0x03924C68EFCBC511(iLocal_73[1], 8, 0, 0, 0);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 134, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[1], 134, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 26, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[1], 26, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 206, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_73[1], 206, true);
			unk_0x5C5D33A1B2711D21(iLocal_73[0], false);
			unk_0x5C5D33A1B2711D21(iLocal_73[1], false);
			unk_0x2EA90674750EA01E(iLocal_73[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x60C06BFD037BB7CF(iLocal_73[0], iLocal_73[1], -1, 2060, 4);
			unk_0x2EA90674750EA01E(iLocal_73[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x4ACB9D202CFF8727(iLocal_73[1], 0);
			unk_0x60C06BFD037BB7CF(iLocal_73[1], iLocal_73[0], -1, 2060, 4);
			unk_0x60C54803C97FDAAB(iLocal_73[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			unk_0x60C54803C97FDAAB(iLocal_73[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			unk_0x350CEE66BDF90273(iLocal_73[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x350CEE66BDF90273(iLocal_73[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_165(&uLocal_140, 3, iLocal_73[0], "REDR2DrunkM", 0, 1);
			func_165(&uLocal_140, 4, iLocal_73[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_57 = 1;
	}
}

void func_165(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA20C
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

void func_166(int iParam0, bool bParam1)//Position - 0xA2A7
{
	if (bParam1)
	{
		if (!func_173(iParam0, 2, 1))
		{
			func_172(iParam0, 2, 1);
		}
	}
	else if (func_173(iParam0, 2, 1))
	{
		func_167(iParam0, 2, 1);
	}
}

void func_167(int iParam0, int iParam1, bool bParam2)//Position - 0xA2DE
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_38() == 0)
		{
			iVar0 = func_170(func_171(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_168(func_171(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA347
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_169(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_169(var uParam0)//Position - 0xA377
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_170(int iParam0, int iParam1, int iParam2)//Position - 0xA3AB
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_169(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0xA3DD
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

void func_172(int iParam0, int iParam1, bool bParam2)//Position - 0xA6C2
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_38() == 0)
		{
			iVar0 = func_170(func_171(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_168(func_171(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_173(int iParam0, int iParam1, bool bParam2)//Position - 0xA72B
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_38() == 0)
		{
			return unk_0xC80D31E4B587871C(func_170(func_171(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_174()//Position - 0xA78B
{
	unk_0x6FF834D85E2DD4C6(iLocal_76);
	unk_0x6FF834D85E2DD4C6(iLocal_78);
	unk_0x6FF834D85E2DD4C6(iLocal_77);
	if (iLocal_52 == 1)
	{
		unk_0x36905B9EE07F38CC();
		unk_0x6450931B826B49D9("random@drunk_driver_1");
		unk_0x13A127961044F71B("MOVE_M@DRUNK@VERYDRUNK");
		unk_0x1CF95440F1970B4F("Taxi_Vomit", false, -1);
	}
	else if (iLocal_52 == 2)
	{
		unk_0x6450931B826B49D9("random@drunk_driver_2");
		unk_0x6450931B826B49D9("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0x6450931B826B49D9("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x13A127961044F71B("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0x9A0B2ED5055D3F0B(iLocal_76) && unk_0x9A0B2ED5055D3F0B(iLocal_78)) && unk_0xA2B1B9FAFA5BDF26("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0x9A0B2ED5055D3F0B(iLocal_77))
	{
		if (iLocal_52 == 1)
		{
			if (((unk_0xFEDD99169EC73AA6() && unk_0x3A801AA34DD821BE("random@drunk_driver_1")) && unk_0xA2B1B9FAFA5BDF26("MOVE_M@DRUNK@VERYDRUNK")) && unk_0x1CF95440F1970B4F("CONSTRUCTION_ACCIDENT_1", false, -1))
			{
				iLocal_54 = 1;
			}
		}
		else if (iLocal_52 == 2)
		{
			if ((unk_0x3A801AA34DD821BE("random@drunk_driver_2") && unk_0x3A801AA34DD821BE("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0x3A801AA34DD821BE("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_54 = 1;
			}
		}
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_76);
		unk_0x6FF834D85E2DD4C6(iLocal_78);
		unk_0x6FF834D85E2DD4C6(iLocal_77);
		if (iLocal_52 == 1)
		{
			unk_0x36905B9EE07F38CC();
			unk_0x6450931B826B49D9("random@drunk_driver_1");
			unk_0x13A127961044F71B("MOVE_M@DRUNK@VERYDRUNK");
			unk_0x1CF95440F1970B4F("Taxi_Vomit", false, -1);
		}
		else if (iLocal_52 == 2)
		{
			unk_0x6450931B826B49D9("random@drunk_driver_2");
			unk_0x6450931B826B49D9("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0x6450931B826B49D9("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x13A127961044F71B("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_175()//Position - 0xA8EC
{
	if (iLocal_52 == 1)
	{
		vLocal_125 = { -1018,238f, -1350,101f, 4,475f };
		iLocal_72 = 2;
		iLocal_76 = joaat("a_m_y_beachvesp_01");
		iLocal_77 = joaat("a_m_y_beachvesp_02");
		vLocal_62 = { -1016,762f, -1356,459f, 4,5531f };
		fLocal_63 = 247,8087f;
		vLocal_64 = { -1015,572f, -1357,081f, 4,552f };
		fLocal_65 = 66,3861f;
		vLocal_66 = { -1027,762f, -1341,644f, 4,4614f };
		fLocal_67 = 76,9418f;
		iLocal_78 = joaat("baller2");
		vLocal_69 = { 160,8892f, -111,4167f, 61,2999f };
		vLocal_70 = { 159,2191f, -117,0664f, 61,2999f };
		bLocal_56 = true;
	}
	if (iLocal_52 == 2)
	{
		vLocal_125 = { 1893,856f, 3714,346f, 31,7771f };
		iLocal_72 = 2;
		iLocal_76 = joaat("a_m_y_genstreet_01");
		iLocal_77 = joaat("a_f_y_hipster_03");
		vLocal_62 = { 1893,856f, 3714,346f, 31,7771f };
		fLocal_63 = 252,0142f;
		vLocal_64 = { 1894,763f, 3714,16f, 31,7605f };
		fLocal_65 = 86,1102f;
		vLocal_66 = { 1888,256f, 3717,189f, 31,8394f };
		fLocal_67 = 299,4672f;
		iLocal_78 = joaat("emperor");
		vLocal_69 = { 1120,551f, 2647,307f, 36,9963f };
		vLocal_70 = { 1121,866f, 2641,707f, 37,1487f };
		bLocal_56 = true;
	}
}

int func_176()//Position - 0xAA44
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_183())
	{
		return 1;
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_177(float fParam0, bool bParam1)//Position - 0xAACA
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
		if (func_19(func_17()))
		{
			iVar5 = func_48();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_178(iVar1, &Var0);
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

void func_178(int iParam0, var uParam1)//Position - 0xAB81
{
	switch (iParam0)
	{
		case 0:
			func_179(uParam1, "Abigail1", func_181(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 1:
			func_179(uParam1, "Abigail2", func_181(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 2:
			func_179(uParam1, "Barry1", func_181(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 3:
			func_179(uParam1, "Barry2", func_181(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 4:
			func_179(uParam1, "Barry3", func_181(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 5:
			func_179(uParam1, "Barry3A", func_181(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 6:
			func_179(uParam1, "Barry3C", func_181(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 7:
			func_179(uParam1, "Barry4", func_181(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_180(iParam0), 0, 0);
			break;
		
		case 8:
			func_179(uParam1, "Dreyfuss1", func_181(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 9:
			func_179(uParam1, "Epsilon1", func_181(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 10:
			func_179(uParam1, "Epsilon2", func_181(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 11:
			func_179(uParam1, "Epsilon3", func_181(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 12:
			func_179(uParam1, "Epsilon4", func_181(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 13:
			func_179(uParam1, "Epsilon5", func_181(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 14:
			func_179(uParam1, "Epsilon6", func_181(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 15:
			func_179(uParam1, "Epsilon7", func_181(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 16:
			func_179(uParam1, "Epsilon8", func_181(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 17:
			func_179(uParam1, "Extreme1", func_181(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 18:
			func_179(uParam1, "Extreme2", func_181(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 19:
			func_179(uParam1, "Extreme3", func_181(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 20:
			func_179(uParam1, "Extreme4", func_181(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 21:
			func_179(uParam1, "Fanatic1", func_181(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 22:
			func_179(uParam1, "Fanatic2", func_181(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_180(iParam0), 1, 0);
			break;
		
		case 23:
			func_179(uParam1, "Fanatic3", func_181(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_180(iParam0), 0, 1);
			break;
		
		case 24:
			func_179(uParam1, "Hao1", func_181(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_180(iParam0), 0, 1);
			break;
		
		case 25:
			func_179(uParam1, "Hunting1", func_181(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 26:
			func_179(uParam1, "Hunting2", func_181(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 27:
			func_179(uParam1, "Josh1", func_181(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 28:
			func_179(uParam1, "Josh2", func_181(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 29:
			func_179(uParam1, "Josh3", func_181(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 30:
			func_179(uParam1, "Josh4", func_181(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 31:
			func_179(uParam1, "Maude1", func_181(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 32:
			func_179(uParam1, "Minute1", func_181(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 33:
			func_179(uParam1, "Minute2", func_181(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 34:
			func_179(uParam1, "Minute3", func_181(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 35:
			func_179(uParam1, "MrsPhilips1", func_181(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 36:
			func_179(uParam1, "MrsPhilips2", func_181(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 37:
			func_179(uParam1, "Nigel1", func_181(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 38:
			func_179(uParam1, "Nigel1A", func_181(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 39:
			func_179(uParam1, "Nigel1B", func_181(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 40:
			func_179(uParam1, "Nigel1C", func_181(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 41:
			func_179(uParam1, "Nigel1D", func_181(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_180(iParam0), 1, 1);
			break;
		
		case 42:
			func_179(uParam1, "Nigel2", func_181(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 43:
			func_179(uParam1, "Nigel3", func_181(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 1);
			break;
		
		case 44:
			func_179(uParam1, "Omega1", func_181(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 45:
			func_179(uParam1, "Omega2", func_181(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 46:
			func_179(uParam1, "Paparazzo1", func_181(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 47:
			func_179(uParam1, "Paparazzo2", func_181(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 48:
			func_179(uParam1, "Paparazzo3", func_181(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 49:
			func_179(uParam1, "Paparazzo3A", func_181(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 50:
			func_179(uParam1, "Paparazzo3B", func_181(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 51:
			func_179(uParam1, "Paparazzo4", func_181(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 52:
			func_179(uParam1, "Rampage1", func_181(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 54:
			func_179(uParam1, "Rampage3", func_181(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 55:
			func_179(uParam1, "Rampage4", func_181(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 56:
			func_179(uParam1, "Rampage5", func_181(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_180(iParam0), 0, 0);
			break;
		
		case 53:
			func_179(uParam1, "Rampage2", func_181(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_180(iParam0), 1, 0);
			break;
		
		case 57:
			func_179(uParam1, "TheLastOne", func_181(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 58:
			func_179(uParam1, "Tonya1", func_181(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 59:
			func_179(uParam1, "Tonya2", func_181(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 60:
			func_179(uParam1, "Tonya3", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 61:
			func_179(uParam1, "Tonya4", func_181(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		case 62:
			func_179(uParam1, "Tonya5", func_181(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_180(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_179(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xBCF6
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

int func_180(int iParam0)//Position - 0xBD87
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

struct<2> func_181(int iParam0)//Position - 0xC0CE
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_182(iParam0) };
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

struct<2> func_182(int iParam0)//Position - 0xC104
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

int func_183()//Position - 0xC54F
{
	if (func_186() && !func_187())
	{
		return 1;
	}
	if (func_185() && func_184())
	{
		return 1;
	}
	return 0;
}

bool func_184()//Position - 0xC581
{
	return Global_104273 > 0;
}

int func_185()//Position - 0xC58F
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_186()//Position - 0xC5A4
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_187()//Position - 0xC5CA
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

int func_188()//Position - 0xC5E7
{
	if (!func_155(5))
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_187())
		{
			return 0;
		}
	}
	if (func_177(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_189()//Position - 0xC649
{
	if ((Global_104544 == func_52() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0)//Position - 0xC674
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_192(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_191();
}

void func_191()//Position - 0xC6AA
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

void func_192(int iParam0)//Position - 0xC6E7
{
	Global_104544 = iParam0;
}

int func_193(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC6F5
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
		iParam1 = func_52();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_234())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_187())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_183())
		{
			return 0;
		}
		if (func_233())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_177(100f, 1) != -1)
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
		if (!func_232(iParam1))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_231(func_17()) == 4 || func_231(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_230(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_229(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_228())
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
		if (!func_219(4))
		{
			return 0;
		}
		if (!func_155(5))
		{
			return 0;
		}
		if (func_218(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_218(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_232(30) && !func_218(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_217(iVar4))
				{
					if (func_195(iVar2))
					{
						if (!func_194(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_17() != iVar2)
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

bool func_194(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xCA8F
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_195(int iParam0)//Position - 0xCAD6
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_196(iVar0);
}

int func_196(int iParam0)//Position - 0xCAF7
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1)//Position - 0xCB06
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_217(iParam0))
	{
		return 0;
	}
	func_198(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xCB59
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xCB77
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_209(iParam0, iParam1))
	{
		iVar0 = func_208(iParam1);
		iVar1 = func_206(iParam0);
		iVar2 = (func_206(iParam0) - func_206(iParam1));
		iVar3 = (func_208(iParam0) - func_208(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_204(iParam0) - func_204(iParam1));
		iVar6 = (func_203(iParam0) - func_203(iParam1));
		iVar7 = (func_202(iParam0) - func_202(iParam1));
	}
	else
	{
		iVar0 = func_208(iParam0);
		iVar1 = func_206(iParam1);
		iVar2 = (func_206(iParam1) - func_206(iParam0));
		iVar3 = (func_208(iParam1) - func_208(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_204(iParam1) - func_204(iParam0));
		iVar6 = (func_203(iParam1) - func_203(iParam0));
		iVar7 = (func_202(iParam1) - func_202(iParam0));
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
		iVar4 = (iVar4 + func_201(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_200(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2)//Position - 0xCD78
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

int func_201(int iParam0, int iParam1)//Position - 0xCDBA
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

int func_202(int iParam0)//Position - 0xCE5C
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_203(int iParam0)//Position - 0xCE6F
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_204(int iParam0)//Position - 0xCE82
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_205(int iParam0)//Position - 0xCE95
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_206(int iParam0)//Position - 0xCEA7
{
	return (system::shift_right(iParam0, 26) & 31 * func_207(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_207(bool bParam0, int iParam1, int iParam2)//Position - 0xCECC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_208(int iParam0)//Position - 0xCEE3
{
	return iParam0 & 15;
}

int func_209(int iParam0, int iParam1)//Position - 0xCEF0
{
	int iVar0;
	int iVar1;
	
	if (!func_217(iParam1) || !func_217(iParam0))
	{
		return 1;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_210()//Position - 0xCFFC
{
	var uVar0;
	
	func_216(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_215(&uVar0, unk_0x95327550F0F2BE7C());
	func_214(&uVar0, unk_0x674C9438180770FE());
	func_213(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_212(&uVar0, unk_0xEAF455949B108589());
	func_211(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_211(var uParam0, int iParam1)//Position - 0xD042
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

void func_212(var uParam0, int iParam1)//Position - 0xD0C8
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)//Position - 0xD0FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(*uParam0);
	iVar1 = func_206(*uParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_214(var uParam0, int iParam1)//Position - 0xD14C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_215(var uParam0, int iParam1)//Position - 0xD186
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_216(var uParam0, int iParam1)//Position - 0xD1C1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_217(int iParam0)//Position - 0xD1FD
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
	iVar0 = func_202(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_203(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_204(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_206(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_208(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, int iParam1)//Position - 0xD2D9
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xD2FC
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_227()) || Global_103602) || Global_25235) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_223()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_227()) || Global_25235) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_227()) || Global_103602) || Global_25235) || func_226()) || func_24(8, -1)) || func_223()) || func_225()) || func_224()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_227()) || Global_103602) || Global_25235) || func_226()) || func_24(8, -1)) || func_225()) || func_224()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_227() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_24(8, -1)) || func_222()) || func_221()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_225()) || func_224()) || func_221()) || func_220())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_227()) || Global_25235) || func_226()) || func_24(8, -1)) || func_224()) || func_223()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_227()) || func_224()) || Global_103602) || Global_25235) || func_226()) || Global_36993) || func_24(8, -1)) || func_223()) || func_221()) || func_222()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_227()) || Global_103602) || Global_25235) || func_226()) || func_24(8, -1)) || func_223()) || func_221()) || func_225()) || func_224()) || func_222())
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

var func_220()//Position - 0xDA19
{
	return Global_92872.f_1;
}

int func_221()//Position - 0xDA27
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_222()//Position - 0xDA4D
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xDA67
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

bool func_224()//Position - 0xDA91
{
	return Global_92885.f_316 > 0;
}

bool func_225()//Position - 0xDAA2
{
	return Global_92885.f_315 > 0;
}

var func_226()//Position - 0xDAB3
{
	return Global_1312854;
}

int func_227()//Position - 0xDABF
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_228()//Position - 0xDADB
{
	func_16();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_229(int iParam0)//Position - 0xDB03
{
	return func_209(func_210(), iParam0);
}

int func_230(int iParam0, int iParam1, int iParam2)//Position - 0xDB15
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
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

int func_231(int iParam0)//Position - 0xDBF9
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_232(int iParam0)//Position - 0xDC1D
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_234())
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

int func_233()//Position - 0xDC7B
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

int func_234()//Position - 0xDCBF
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

void func_235()//Position - 0xDD7A
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if ((unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		}
	}
	if (iLocal_139)
	{
		func_272(0);
		if (Global_25472)
		{
			unk_0x8810DC630928B398("AC_STOP");
		}
		func_271();
		func_6();
		unk_0xEDB3FB084E821820(0);
		unk_0x3CDDC4760DBA4651();
		unk_0x4C15495E88D71C61(vLocal_66 - Vector(10f, 15f, 15f), vLocal_66 + Vector(10f, 15f, 15f), true, 1);
		unk_0x4C15495E88D71C61(vLocal_69 - Vector(10f, 15f, 15f), vLocal_69 + Vector(10f, 15f, 15f), true, 1);
		func_148(0);
		if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (!unk_0x9761C10D57B68069(unk_0xC733212BF9066BDF()))
			{
				unk_0xDD29FF4BAB8AFF9C(unk_0xC733212BF9066BDF(), true, 0);
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_75, 0))
		{
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_75, 0) && func_137(unk_0xFC1458A37D98B502(), iLocal_75, 1) > 50f)
			{
				func_247(iLocal_75, 0, 145);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_73[0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[0]))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_73[0], 317, true);
				if (!unk_0x88DDBE9908752BF0(iLocal_73[0], 0))
				{
					unk_0x28B82FCEA0848032(iLocal_73[0]);
				}
				if (unk_0xC816B63289F7A279(iLocal_73[0]))
				{
					unk_0x88235B448509228B(iLocal_73[0]);
				}
			}
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_73[iLocal_59]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_73[iLocal_59]))
				{
					unk_0xAE01EF4BC84AFE7C(iLocal_73[iLocal_59], 317, true);
					if (!unk_0x88DDBE9908752BF0(iLocal_73[iLocal_59], 0))
					{
						unk_0x28B82FCEA0848032(iLocal_73[iLocal_59]);
					}
					unk_0x5C5D33A1B2711D21(iLocal_73[iLocal_59], true);
					unk_0xF96119FCCD4D1889(255, iLocal_80, 1862763509);
					unk_0x771A86309E0CA47B(iLocal_73[iLocal_59], false);
				}
				unk_0x486F346ADFE56674(&(iLocal_73[iLocal_59]));
			}
			iLocal_59++;
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_126[iLocal_59]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_126[iLocal_59]));
			}
			iLocal_59++;
		}
		if (iLocal_52 == 1)
		{
			unk_0xD855BC7E9D7EC87F(42,7808f, -1324,405f, -10f, 98,245f, -1277,174f, 10f, true);
		}
		if (unk_0x8EA3C8E091EA5BA4(iLocal_107))
		{
			if (unk_0xD85097DDDA5447BE(iLocal_107))
			{
				unk_0x7849794435F39D49(iLocal_107, false);
			}
		}
	}
	func_236(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_236(int iParam0)//Position - 0xE00E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_189())
	{
		func_240(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_239(30000);
		StringCopy(&cVar0, func_238(Global_104544, 1), 64);
		if (func_51(Global_104544) > 0)
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
	func_237(&Global_25292);
	Global_104545 = 0;
	func_192(-1);
}

void func_237(var uParam0)//Position - 0xE0C3
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

char* func_238(int iParam0, bool bParam1)//Position - 0xE100
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

void func_239(int iParam0)//Position - 0xE349
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_240(int iParam0)//Position - 0xE35B
{
	func_241(iParam0, 0, func_246(iParam0));
}

void func_241(int iParam0, int iParam1, int iParam2)//Position - 0xE370
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_210();
	func_244(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_243(iParam0, &uVar0);
	Var1 = { func_242(&uVar0) };
}

struct<16> func_242(var uParam0)//Position - 0xE39F
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_203(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_206(*uParam0), 64);
	return Var0;
}

void func_243(int iParam0, var uParam1)//Position - 0xE46E
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE486
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_208(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_204(*uParam0);
	iVar4 = func_203(*uParam0);
	iVar5 = func_202(*uParam0);
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
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_245(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE608
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
}

int func_246(int iParam0)//Position - 0xE640
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

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0xE7E3
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA88FE81C0BDF2731(iParam0, &uVar0);
		if (!unk_0xAB019B170BF1309C(sVar1))
		{
			if (unk_0x8B948C59217A295D(sVar1) == unk_0x8B948C59217A295D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_248(iParam0, iParam2);
	return 1;
}

void func_248(int iParam0, int iParam1)//Position - 0xE823
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_254(iParam0))
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
	func_249(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_249(int iParam0, var uParam1)//Position - 0xEA25
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_253(uParam1);
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
		if (uParam1->f_65 == -1 && !func_252(uParam1->f_66))
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
		func_251(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_250(iVar0 + 1));
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

int func_250(int iParam0)//Position - 0xECD0
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

int func_251(int iParam0, var uParam1, var uParam2)//Position - 0xED80
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

int func_252(int iParam0)//Position - 0xEE5A
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

void func_253(var uParam0)//Position - 0xEE7A
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

int func_254(int iParam0)//Position - 0xEF29
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_269(iParam0, 0, 0)) || func_269(iParam0, 1, 0)) || func_269(iParam0, 2, 0)) || func_268(iParam0) != 145) || func_267(iParam0)) || func_266(iParam0)) || func_265(iParam0)) || func_264(iParam0)) || !func_255(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_266(iParam0))
		{
		}
		if (func_266(iParam0))
		{
		}
		if (func_269(iParam0, 0, 0))
		{
		}
		if (func_269(iParam0, 1, 0))
		{
		}
		if (func_269(iParam0, 2, 0))
		{
		}
		if (func_268(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_255(int iParam0)//Position - 0xF006
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_256(iParam0, 0))
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

int func_256(int iParam0, bool bParam1)//Position - 0xF1B7
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
		if (!func_234())
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
		if ((((!func_263() && !func_262()) && !func_261()) && !func_260()) && !func_234())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_261())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_259(iParam0))
		{
			return 0;
		}
	}
	if (!func_257(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0)//Position - 0xF345
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_258())
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

int func_258()//Position - 0xF411
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_259(int iParam0)//Position - 0xF428
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

int func_260()//Position - 0x10CB4
{
	return 0;
}

int func_261()//Position - 0x10CBD
{
	return 1;
}

int func_262()//Position - 0x10CC6
{
	return 1;
}

int func_263()//Position - 0x10CCF
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)//Position - 0x10CE8
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_256(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x10D2E
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

int func_266(int iParam0)//Position - 0x10D69
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

int func_267(int iParam0)//Position - 0x10DE5
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

int func_268(int iParam0)//Position - 0x10ECD
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

int func_269(int iParam0, int iParam1, bool bParam2)//Position - 0x10F30
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_270(iParam1, iVar0, &sVar1, &iVar2))
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

int func_270(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x10FA1
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

void func_271()//Position - 0x11078
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_272(bool bParam0)//Position - 0x11094
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_166(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_273()//Position - 0x110B7
{
	float fVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_306, true);
		iLocal_305 = 1;
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_307, true) < fVar0)
		{
			fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_307, true);
			iLocal_305 = 2;
		}
		if (iLocal_305 == 1)
		{
			iLocal_308 = 1;
			iLocal_52 = 1;
			return vLocal_306;
		}
		if (iLocal_305 == 2)
		{
			iLocal_308 = 2;
			iLocal_52 = 2;
			return vLocal_307;
		}
	}
	return 0f, 0f, 0f;
}

