#region Local Var
	int iLocal_0 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	vector3 vLocal_51[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[2] = { 0f, 0f };
	vector3 vLocal_53[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_54[3] = { 0f, 0f, 0f };
	vector3 vLocal_55[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_56[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	int iLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[2] = { 0, 0 };
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68[4] = { 0, 0, 0, 0 };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103[2] = { 0, 0 };
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116[2] = { 0, 0 };
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	float fLocal_124 = 0f;
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	int iLocal_129 = 0;
	char* sLocal_130 = NULL;
	char* sLocal_131 = NULL;
	char* sLocal_132 = NULL;
	char* sLocal_133 = NULL;
	char* sLocal_134 = NULL;
	int iLocal_135 = 0;
	float fLocal_136 = 0f;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 16;
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
	struct<2> Local_316 = { 0, 5 } ;
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
	var uLocal_332 = 5;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_0 = 3;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_71 = { -824,1719f, -187,654f, 36,5707f };
	vLocal_72 = { -1202,94f, -779,74f, 17,33f };
	vLocal_48 = { ScriptParam_316.f_1[0 /*3*/] };
	func_241();
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_239();
		func_227();
	}
	if (iLocal_47 == 1)
	{
		if (!func_226(0) || !func_225(0))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	else if (iLocal_47 == 2)
	{
		if (!func_226(14) || !func_225(14))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	if (func_195(vLocal_48, 5, iLocal_73, 0, 0))
	{
		func_192(5);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_99)
		{
			if (!func_191())
			{
				if (func_190())
				{
					func_227();
				}
			}
			unk_0x48D75120C879E65E("RE_SR", 0);
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (iLocal_49)
						{
							iLocal_142 = 1;
							iLocal_46 = 1;
						}
						else
						{
							if (func_178())
							{
								func_227();
							}
							if (!bLocal_50)
							{
								func_177();
							}
							if (bLocal_50)
							{
								func_176();
							}
						}
						break;
					
					case 1:
						switch (iLocal_44)
						{
							case 0:
								if (!iLocal_76)
								{
									func_175();
									if (unk_0x1A595E6882473810(iLocal_88))
									{
										func_169();
										iLocal_76 = 1;
									}
								}
								else
								{
									if (iLocal_47 == 1)
									{
										unk_0x391612227A0274F1();
									}
									func_166();
									unk_0xA1451353A1AED1A5(iLocal_88);
									if (func_165())
									{
										if (!iLocal_94)
										{
											if (iLocal_47 == 1)
											{
												if (func_164(&uLocal_151, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_94 = 1;
												}
											}
											else if (iLocal_47 == 2)
											{
												if (func_164(&uLocal_151, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_94 = 1;
												}
											}
										}
									}
									if (func_163())
									{
										if (unk_0xA6DECE14FC9A8C51(iLocal_122))
										{
											unk_0xE30CF11C0EE14316(&iLocal_122);
										}
										unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
										unk_0x94BD6F0436473406(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_66)
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
											{
												unk_0xD7F5B2902EBBD04E(iLocal_66[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
												unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar0], true);
												if (!unk_0xA6DECE14FC9A8C51(uLocal_116[iVar0]))
												{
													uLocal_116[iVar0] = func_162(iLocal_66[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_47 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_67)
											{
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[iVar0]))
												{
													unk_0xF21E6EBE8EFDCC28(iLocal_67[iVar0], -1);
													unk_0xE9B3D12A64CC7C1A(iLocal_67[iVar0], true);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_68)
											{
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar0]))
												{
													unk_0xF21E6EBE8EFDCC28(iLocal_68[iVar0], -1);
													unk_0xE9B3D12A64CC7C1A(iLocal_68[iVar0], true);
												}
												iVar0++;
											}
										}
										unk_0x452336926718D62A(&iLocal_102);
										bLocal_79 = true;
										iLocal_44 = 1;
										iLocal_45 = 3;
									}
									if (func_161())
									{
										func_154(1);
										system::settimera(0);
										unk_0xB71774863B890B76(88, vLocal_123, 15000f);
										iLocal_44 = 1;
									}
								}
								break;
							
							case 1:
								unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
								func_166();
								iVar1 = 0;
								while (iVar1 < iLocal_67)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_67[iVar1]))
									{
										if (unk_0xEBE499597C718EB8(iLocal_67[iVar1], unk_0xFC1458A37D98B502(), 1))
										{
											func_153();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_68)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_68[iVar1]))
									{
										if (unk_0xEBE499597C718EB8(iLocal_68[iVar1], unk_0xFC1458A37D98B502(), 1))
										{
											func_153();
										}
									}
									iVar1++;
								}
								switch (iLocal_45)
								{
									case 0:
										if (func_161())
										{
											func_149();
											func_147();
										}
										break;
									
									case 1:
										func_146();
										func_147();
										break;
									
									case 2:
										func_145();
										func_144();
										func_143();
										if (system::timerb() > 500)
										{
											if (unk_0x6ADD12BF4D6D2587(iLocal_102))
											{
												if (!unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
												{
													func_142();
													unk_0x385A213BEB355C2B(iLocal_66[0], joaat("weapon_unarmed"), true);
													unk_0xA9D382E7BA095148(iLocal_102, iLocal_66[0], unk_0xDD09837E5235FE91(iLocal_66[0], 57005), 0,3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (unk_0xF1DE6FAA2EFAA34F(vLocal_123 - Vector(20f, 20f, 20f), vLocal_123 + Vector(20f, 20f, 20f), 0))
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[1]))
											{
												unk_0xFC5999E8B820470E(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
												unk_0x771A86309E0CA47B(iLocal_67[1], false);
												unk_0x486F346ADFE56674(&(iLocal_67[1]));
											}
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[2]))
											{
												unk_0xFC5999E8B820470E(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
												unk_0x771A86309E0CA47B(iLocal_67[2], false);
												unk_0x486F346ADFE56674(&(iLocal_67[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_65 - 1))
											{
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar2]))
												{
													unk_0xCFF0CD14B439821D(iLocal_68[iVar2], true, 1);
													unk_0x6931076730A4AC5D(&iLocal_87);
													if (iLocal_47 == 1)
													{
														unk_0x12C9D41D52A560D6(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_47 == 2)
													{
														unk_0x380C1E7B7740D618(0, -1201,476f, -790,2733f, 15,5475f, 2f, -1, 0,25f, 0, 1193033728);
													}
													unk_0xFC5999E8B820470E(0, vLocal_59, 150f, -1, 0, 0);
													unk_0x1B16DD5C115FE009(iLocal_87);
													unk_0xAB30B1CF01A198C1(iLocal_68[iVar2], iLocal_87);
													unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
													unk_0xE9B3D12A64CC7C1A(iLocal_68[iVar2], true);
													unk_0x771A86309E0CA47B(iLocal_68[iVar2], false);
													unk_0x5C5D33A1B2711D21(iLocal_68[iVar2], true);
													unk_0x486F346ADFE56674(&(iLocal_68[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_141() || system::timera() > 20000)
										{
											if (!iLocal_99)
											{
												if (!unk_0x191BE1BC8F26F3C1(iLocal_66[0], 0))
												{
													func_133(0, 1, 1, 0);
													func_128(0);
													unk_0x4255E93FCCDE108E(true);
													unk_0x9B47B379EE749C38(true);
													unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
													unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0, 0, 0, 0);
													if (iLocal_47 == 1)
													{
														if (unk_0x6ADD12BF4D6D2587(iLocal_102))
														{
															unk_0xB3A8974D2C811672(iLocal_102, false, 0);
															unk_0xB18E1DBC397238E1(iLocal_102, false, 0);
														}
													}
													else if (iLocal_47 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_67)
													{
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[iVar1]))
														{
															unk_0x771A86309E0CA47B(iLocal_67[iVar1], false);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_68)
													{
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar1]))
														{
															unk_0x771A86309E0CA47B(iLocal_68[iVar1], false);
														}
														iVar1++;
													}
													if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
													{
														unk_0x771A86309E0CA47B(iLocal_67[0], true);
														unk_0x6931076730A4AC5D(&iLocal_87);
														unk_0x12C9D41D52A560D6(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
														unk_0x1B16DD5C115FE009(iLocal_87);
														unk_0xAB30B1CF01A198C1(iLocal_67[0], iLocal_87);
														unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
														unk_0xE9B3D12A64CC7C1A(iLocal_67[0], true);
													}
													if (!func_127())
													{
														func_116(&uLocal_151, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_99 = 1;
												}
											}
										}
										if (!iLocal_78)
										{
											if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "random@shop_robbery", "kneel_getup_p") > 0,7f || (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "random@shop_robbery", "kneel_getup_p") > 0,6f && func_115(64)))
												{
													unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
													iLocal_78 = 1;
												}
											}
										}
										if (iLocal_47 == 1)
										{
											if (!func_161())
											{
												if (!iLocal_111)
												{
													iLocal_111 = 1;
												}
											}
											if (!bLocal_96)
											{
												func_114();
											}
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && unk_0xB8DE76287EDC4957(iLocal_106, 0))
											{
												if (unk_0xA8D0477084E86A92(iLocal_66[0], iLocal_106, 0))
												{
													if (unk_0x6ADD12BF4D6D2587(iLocal_102))
													{
														unk_0x452336926718D62A(&iLocal_102);
														bLocal_96 = true;
													}
												}
											}
											if (func_113() && !iLocal_97)
											{
												if (unk_0xA6DECE14FC9A8C51(uLocal_116[0]))
												{
													unk_0xE30CF11C0EE14316(&(uLocal_116[0]));
												}
												if (unk_0xA6DECE14FC9A8C51(uLocal_116[1]))
												{
													unk_0xE30CF11C0EE14316(&(uLocal_116[1]));
												}
												if (!unk_0xA6DECE14FC9A8C51(iLocal_120))
												{
													iLocal_120 = func_111(iLocal_106, 1, 0);
												}
												bLocal_96 = true;
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
												{
													unk_0xAE6EBBBBD8B9FB30(iLocal_115, 17, true);
													unk_0xAE6EBBBBD8B9FB30(iLocal_115, 6, true);
													unk_0xAE6EBBBBD8B9FB30(iLocal_115, 1, true);
													unk_0xD2C269DBF147B406(iLocal_115, iLocal_106, unk_0xFC1458A37D98B502(), 8, 16f, 786469, -1f, -1f, 1);
													unk_0xE9B3D12A64CC7C1A(iLocal_115, true);
													iLocal_97 = 1;
												}
											}
											if (iLocal_97 && !iLocal_143)
											{
												if (unk_0xB8DE76287EDC4957(iLocal_106, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_115))
												{
													if (!unk_0x0C88267282FD588F(iLocal_106, vLocal_51[0 /*3*/], 20f, 20f, 10f, false, true, 0))
													{
														unk_0xD2C269DBF147B406(iLocal_115, iLocal_106, unk_0xFC1458A37D98B502(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_143 = 1;
													}
												}
											}
											if (func_110())
											{
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
												{
													if (unk_0xB8DE76287EDC4957(iLocal_106, 0))
													{
														if (!iLocal_98)
														{
															unk_0xAE6EBBBBD8B9FB30(iLocal_115, 17, true);
															unk_0xAE6EBBBBD8B9FB30(iLocal_115, 6, true);
															unk_0xAE6EBBBBD8B9FB30(iLocal_115, 1, true);
															unk_0xD2C269DBF147B406(iLocal_115, iLocal_106, unk_0xFC1458A37D98B502(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_98 = 1;
														}
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
														{
															if (unk_0xA8D0477084E86A92(iLocal_66[0], iLocal_106, 0))
															{
																if (unk_0xA6DECE14FC9A8C51(uLocal_116[0]))
																{
																	unk_0xE30CF11C0EE14316(&(uLocal_116[0]));
																}
																if (unk_0xA6DECE14FC9A8C51(uLocal_116[1]))
																{
																	unk_0xE30CF11C0EE14316(&(uLocal_116[1]));
																}
																if (!unk_0xA6DECE14FC9A8C51(iLocal_120))
																{
																	iLocal_120 = func_111(iLocal_106, 1, 0);
																}
																bLocal_96 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_63 - 1))
												{
													if (!iLocal_80[iVar3])
													{
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar3]))
														{
															if (unk_0x88DDBE9908752BF0(iLocal_66[iVar3], 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_115))
															{
																unk_0x3D625AB3CFE71DF3(iLocal_66[iVar3], unk_0xFC1458A37D98B502(), 0, 0,3f, 0,7f, 1,9f, -1f, 15, 0, -753768974);
																iLocal_80[iVar3] = 1;
															}
															else if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
															{
																unk_0xD7F5B2902EBBD04E(iLocal_66[iVar3], unk_0xFC1458A37D98B502(), 0, 16);
																unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar3], true);
																if (unk_0xA6DECE14FC9A8C51(iLocal_120))
																{
																	unk_0xE30CF11C0EE14316(&iLocal_120);
																}
																if (!unk_0xA6DECE14FC9A8C51(uLocal_116[iVar3]))
																{
																	uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																}
																iLocal_80[iVar3] = 1;
															}
														}
													}
													if (!iLocal_81[iVar3])
													{
														if (unk_0xB8DE76287EDC4957(iLocal_106, 0))
														{
															if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar3]))
															{
																if ((unk_0x3AB6A1A9084FB0A4(iLocal_115) || unk_0x8EE3A848975DDF21(iLocal_106, -1, 0)) || unk_0x6B4C37F2EEC636CC(iLocal_66[iVar3]))
																{
																	unk_0xCFF0CD14B439821D(iLocal_66[iVar3], true, 1);
																	unk_0x6931076730A4AC5D(&iLocal_87);
																	unk_0x16416C5B54FDBCBB(0, 0, 0);
																	unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
																	unk_0x1B16DD5C115FE009(iLocal_87);
																	unk_0xAB30B1CF01A198C1(iLocal_66[iVar3], iLocal_87);
																	unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
																	unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar3], true);
																	if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
																	{
																		unk_0xCFF0CD14B439821D(iLocal_115, true, 1);
																		unk_0x6931076730A4AC5D(&iLocal_87);
																		unk_0x16416C5B54FDBCBB(0, 0, 0);
																		unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
																		unk_0x1B16DD5C115FE009(iLocal_87);
																		unk_0xAB30B1CF01A198C1(iLocal_115, iLocal_87);
																		unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
																		unk_0xE9B3D12A64CC7C1A(iLocal_115, true);
																	}
																	if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
																	{
																		if (unk_0xA6DECE14FC9A8C51(iLocal_120))
																		{
																			unk_0xE30CF11C0EE14316(&iLocal_120);
																		}
																		if (!unk_0xA6DECE14FC9A8C51(uLocal_116[iVar3]))
																		{
																			uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																		}
																	}
																	iLocal_81[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar3]))
															{
																unk_0xCFF0CD14B439821D(iLocal_66[iVar3], true, 1);
																unk_0x6931076730A4AC5D(&iLocal_87);
																unk_0x16416C5B54FDBCBB(0, 0, 0);
																unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
																unk_0x1B16DD5C115FE009(iLocal_87);
																unk_0xAB30B1CF01A198C1(iLocal_66[iVar3], iLocal_87);
																unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
																unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar3], true);
															}
															if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
															{
																unk_0xCFF0CD14B439821D(iLocal_115, true, 1);
																unk_0x6931076730A4AC5D(&iLocal_87);
																unk_0x16416C5B54FDBCBB(0, 0, 0);
																unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
																unk_0x1B16DD5C115FE009(iLocal_87);
																unk_0xAB30B1CF01A198C1(iLocal_115, iLocal_87);
																unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
																unk_0xE9B3D12A64CC7C1A(iLocal_115, true);
															}
															if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
															{
																if (unk_0xA6DECE14FC9A8C51(iLocal_120))
																{
																	unk_0xE30CF11C0EE14316(&iLocal_120);
																}
																if (!unk_0xA6DECE14FC9A8C51(uLocal_116[iVar3]))
																{
																	uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																}
																iLocal_81[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_96)
											{
												if (func_109())
												{
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
										}
										else if (iLocal_47 == 2)
										{
											if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
											{
												if (unk_0xA6DECE14FC9A8C51(uLocal_116[0]))
												{
													func_104(&uLocal_151, 3);
													unk_0xE30CF11C0EE14316(&(uLocal_116[0]));
												}
											}
											if (unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
											{
												if (unk_0xA6DECE14FC9A8C51(uLocal_116[1]))
												{
													func_104(&uLocal_151, 4);
													unk_0xE30CF11C0EE14316(&(uLocal_116[1]));
												}
											}
											if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
											{
												if (unk_0x6ADD12BF4D6D2587(iLocal_102))
												{
													if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
													{
														unk_0x6B7C10B19928914F(iLocal_102, 1, true);
													}
													unk_0x452336926718D62A(&iLocal_102);
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
											else if (unk_0xEBE499597C718EB8(iLocal_66[0], unk_0xFC1458A37D98B502(), 1))
											{
												if (unk_0x6ADD12BF4D6D2587(iLocal_102))
												{
													if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
													{
														unk_0x6B7C10B19928914F(iLocal_102, 1, true);
													}
													unk_0x452336926718D62A(&iLocal_102);
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_146();
										break;
									
									case 9:
										func_145();
										func_102();
										break;
									
									case 10:
										func_99(2);
										func_98(iLocal_122, &uLocal_148);
										if (iLocal_47 == 1)
										{
											if (!iLocal_95)
											{
												unk_0x6450931B826B49D9("random@robbery");
												if (!unk_0x3A801AA34DD821BE("random@robbery"))
												{
													unk_0x6450931B826B49D9("random@robbery");
												}
												else if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
												{
													unk_0xBD8D47FDC6902B2D(iLocal_67[0], -818,5553f, -185,4815f, 36,5689f, 1, false, 0, 1);
													unk_0x48ED7B2293A96722(iLocal_67[0], 47,0582f);
													unk_0x12C9D41D52A560D6(iLocal_67[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[1]))
													{
														unk_0xFC5999E8B820470E(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
														unk_0x771A86309E0CA47B(iLocal_67[1], false);
														unk_0x486F346ADFE56674(&(iLocal_67[1]));
													}
													if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[2]))
													{
														unk_0xFC5999E8B820470E(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
														unk_0x771A86309E0CA47B(iLocal_67[2], false);
														unk_0x486F346ADFE56674(&(iLocal_67[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_65 - 1))
													{
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar4]))
														{
															unk_0x6931076730A4AC5D(&iLocal_87);
															unk_0x12C9D41D52A560D6(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															unk_0xFC5999E8B820470E(0, vLocal_59, 150f, -1, 0, 0);
															unk_0x1B16DD5C115FE009(iLocal_87);
															unk_0xAB30B1CF01A198C1(iLocal_68[iVar4], iLocal_87);
															unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
															unk_0xE9B3D12A64CC7C1A(iLocal_68[iVar4], true);
															unk_0x771A86309E0CA47B(iLocal_68[iVar4], false);
															unk_0x5C5D33A1B2711D21(iLocal_68[iVar4], true);
															unk_0x486F346ADFE56674(&(iLocal_68[iVar4]));
														}
														iVar4++;
													}
													iLocal_95 = 1;
												}
											}
											func_74(6, 3);
											func_74(7, 3);
										}
										else if (iLocal_47 == 2)
										{
											if (!iLocal_95)
											{
												unk_0x6450931B826B49D9("random@robbery");
												if (!unk_0x3A801AA34DD821BE("random@robbery"))
												{
													unk_0x6450931B826B49D9("random@robbery");
												}
												else if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
												{
													unk_0xBD8D47FDC6902B2D(iLocal_67[0], -1197,455f, -776,0289f, 16,3254f, 1, false, 0, 1);
													unk_0x48ED7B2293A96722(iLocal_67[0], 205,7753f);
													unk_0x12C9D41D52A560D6(iLocal_67[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[1]))
													{
														unk_0xFC5999E8B820470E(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
														unk_0x771A86309E0CA47B(iLocal_67[1], false);
														unk_0x486F346ADFE56674(&(iLocal_67[1]));
													}
													if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[2]))
													{
														unk_0xFC5999E8B820470E(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
														unk_0x771A86309E0CA47B(iLocal_67[2], false);
														unk_0x486F346ADFE56674(&(iLocal_67[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_65 - 1))
													{
														if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar5]))
														{
															unk_0xFC5999E8B820470E(iLocal_68[iVar5], vLocal_59, 150f, -1, 0, 0);
															unk_0x771A86309E0CA47B(iLocal_68[iVar5], false);
															unk_0x5C5D33A1B2711D21(iLocal_68[iVar5], true);
															unk_0x486F346ADFE56674(&(iLocal_68[iVar5]));
														}
														iVar5++;
													}
													iLocal_95 = 1;
												}
											}
											if (unk_0x50126692B8A3590A(-1201,43f, -776,86f, 17,99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												unk_0xFB3E858D6C41D854(joaat("v_ilev_clothmiddoor"), -1201,43f, -776,86f, 17,99f, 0, 0f, 0);
											}
										}
										if (func_165())
										{
										}
										if ((func_161() && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
										{
											system::settimera(0);
											iLocal_45 = 11;
										}
										if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), func_241()) > (fLocal_124 + 150f))
										{
											iLocal_45 = 12;
										}
										if (system::timera() > 120000)
										{
											iLocal_45 = 14;
										}
										if (unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
										{
											func_73(2);
											func_53();
										}
										else if (unk_0xEBE499597C718EB8(iLocal_67[0], unk_0xFC1458A37D98B502(), 1))
										{
											func_73(2);
											func_53();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_73(2);
										func_53();
										break;
									
									case 7:
										func_53();
										break;
									
									case 14:
										func_73(2);
										func_53();
										break;
									
									case 13:
										if (!iLocal_144)
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
											{
												unk_0xB8E08BD5B184DF4E(iLocal_67[0]);
												if (iLocal_47 == 1)
												{
													func_116(&uLocal_151, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_47 == 2)
												{
													func_116(&uLocal_151, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												unk_0x35DCE13103C5C646(iLocal_67[0], 20000);
												unk_0xE9B3D12A64CC7C1A(iLocal_67[0], true);
												unk_0x771A86309E0CA47B(iLocal_67[0], false);
												iLocal_144 = 1;
											}
										}
										if (!func_127())
										{
											iLocal_44 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_153();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_227();
		}
	}
}

void func_1()//Position - 0x1227
{
	if (func_161())
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_122))
		{
			unk_0xE30CF11C0EE14316(&iLocal_122);
		}
		if (!iLocal_113)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
			{
				func_133(1, 1, 1, 0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				unk_0x3E80C2F7BC665259(1);
				unk_0xA896149A4DE38DEA(unk_0xB3328BA8976B416C(iLocal_67[0], 1), 20f, 0);
				unk_0x4255E93FCCDE108E(false);
				unk_0x9B47B379EE749C38(false);
				if (iLocal_47 == 1)
				{
					bLocal_112 = true;
				}
				else if (iLocal_47 == 2)
				{
				}
				iLocal_113 = 1;
			}
		}
	}
	if (!bLocal_112)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
		{
			bLocal_112 = true;
		}
	}
	if (bLocal_112)
	{
		if (!iLocal_114)
		{
			unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), true);
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
			if (unk_0xA6DECE14FC9A8C51(iLocal_122))
			{
				unk_0xE30CF11C0EE14316(&iLocal_122);
			}
			vLocal_125 = { unk_0xB3328BA8976B416C(iLocal_67[0], 0) };
			if (iLocal_47 == 1)
			{
				vLocal_125 = { -820,77f, -186,514f, 36,569f };
				vLocal_127 = { 0f, 0f, -60f };
				fLocal_136 = 0,855f;
				sLocal_130 = "random@robbery";
				sLocal_131 = "return_bag_stand_b";
				sLocal_132 = "return_bag_stand_b_female";
				sLocal_133 = "return_bag_stand_b_bag";
				sLocal_134 = "return_bag_stand_b_cam";
			}
			else if (iLocal_47 == 2)
			{
				vLocal_125 = { -1198,295f, -776,533f, 16,326f };
				vLocal_127 = { 0f, 0f, -60,25f };
				fLocal_136 = 0,785f;
				sLocal_130 = "random@robbery";
				sLocal_131 = "return_bag_stand_c_rt";
				sLocal_132 = "return_bag_stand_c_rt_female";
				sLocal_133 = "return_bag_stand_c_rt_bag";
				sLocal_134 = "return_bag_stand_c_rt_cam";
			}
			iLocal_135 = unk_0x8383F9C605E523B7(vLocal_125, vLocal_127, 2);
			iLocal_129 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
			unk_0xEFF56C7BDABBF39B(iLocal_129, iLocal_135, sLocal_134, sLocal_130);
			unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_135, sLocal_130, sLocal_131, 1000f, -2f, 5, 0, 1148846080, 0);
			unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
			unk_0x957CEE967C939968(iLocal_67[0]);
			unk_0x8E628F774C748D93(iLocal_67[0], iLocal_135, sLocal_130, sLocal_132, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x9A0C1F836B24E46E(iLocal_67[0], 0, 0);
			iLocal_102 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_duffel_01"), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true, true, false);
			unk_0xEBB74134CCA3442E(iLocal_102, iLocal_135, sLocal_133, sLocal_130, 1000f, 8f, 0, 1148846080);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
			{
				func_52();
				unk_0x7849794435F39D49(iLocal_129, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				system::settimera(0);
				iLocal_114 = 1;
			}
		}
	}
	if ((system::timera() > 1500 && iLocal_114) && !iLocal_93)
	{
		func_50();
		system::wait(0);
		if (iLocal_47 == 1)
		{
			func_116(&uLocal_151, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_116(&uLocal_151, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_93 = 1;
	}
	if (unk_0x463C4747B41E35A3(iLocal_135) > fLocal_136 && iLocal_114)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
		{
			unk_0x6D624C6A284D7D07(iLocal_67[0], iLocal_118);
			unk_0xB8E08BD5B184DF4E(iLocal_67[0]);
			unk_0x6931076730A4AC5D(&iLocal_87);
			unk_0x12C9D41D52A560D6(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_87);
			unk_0xAB30B1CF01A198C1(iLocal_67[0], iLocal_87);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
			unk_0xE9B3D12A64CC7C1A(iLocal_67[0], true);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_102))
		{
			unk_0x452336926718D62A(&iLocal_102);
		}
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, false, 0, 0);
		unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 650, 0, 1, 0);
		func_133(0, 1, 1, 0);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 4);
		unk_0x4255E93FCCDE108E(true);
		unk_0x9B47B379EE749C38(true);
		unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
		unk_0xBB9A3C553EECB180(0f);
		unk_0x90CE99E954B80CFF(0, 0, 3, 0);
		unk_0x02934BABFD4CD384(iLocal_129, 0);
		func_49();
		func_48(joaat("rc_wallets_returned"), 1);
		if (iLocal_47 == 1)
		{
			func_12(func_43(), 1, iLocal_118);
			func_2(0, func_43(), 1);
		}
		else if (iLocal_47 == 2)
		{
			func_12(func_43(), 1, iLocal_118);
			func_2(14, func_43(), 1);
		}
		func_73(3);
		func_53();
	}
}

void func_2(int iParam0, int iParam1, bool bParam2)//Position - 0x1603
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!func_11(iParam0, iVar0, 0))
		{
			func_10(iParam0, iVar0, 0);
		}
	}
	else if (func_11(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, bool bParam2)//Position - 0x166F
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x16D8
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_5(var uParam0)//Position - 0x1708
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x173C
{
	return Global_1312736;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x1748
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x177A
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

int func_9()//Position - 0x1A5F
{
	return Global_25233;
}

void func_10(int iParam0, int iParam1, bool bParam2)//Position - 0x1A6A
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)//Position - 0x1AD3
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_9() == 0)
		{
			return unk_0xC80D31E4B587871C(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0x1B33
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_13(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1B7C
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
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
					func_41(99, 1);
					func_48(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_21(5))
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
							func_48(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_48(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_property"), iParam3);
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
									func_48(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(iVar1);
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
					func_48(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_total_cash_earned"), iParam3);
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
	func_15(iParam0);
	if (Global_35861 == 15)
	{
		func_14(0);
	}
	return 1;
}

void func_14(bool bParam0)//Position - 0x217B
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

void func_15(int iParam0)//Position - 0x23FD
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

void func_16(int iParam0)//Position - 0x2457
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_19(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_18() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_18() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_17(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(int iParam0)//Position - 0x252E
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

int func_18()//Position - 0x25B6
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_19(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x25C3
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
		iParam2 = func_6();
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

void func_20(int iParam0)//Position - 0x2A8F
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_21(int iParam0)//Position - 0x2AAF
{
	if (iParam0 == 8)
	{
		return func_22(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_18() /*12130*/].f_7676.f_10, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)//Position - 0x2AFD
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_24(iParam0, iParam1);
	uVar2 = func_23(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_23(int iParam0)//Position - 0x2B3A
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

int func_24(int iParam0, int iParam1)//Position - 0x2DFA
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
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

int func_25(bool bParam0)//Position - 0x309C
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)//Position - 0x3153
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)//Position - 0x316E
{
	if (func_39(14) && !func_38(iParam0))
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
	if (func_37(&Global_4267379))
	{
		if (func_35(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_4267379, iParam0))
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

int func_28(var uParam0, int iParam1)//Position - 0x320B
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)//Position - 0x32BC
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)//Position - 0x3337
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)//Position - 0x3348
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_4267378 - 0,5f));
}

void func_32(var uParam0, int iParam1)//Position - 0x337C
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)//Position - 0x338C
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

float func_34(var uParam0)//Position - 0x33A9
{
	return uParam0->f_80;
}

bool func_35(var uParam0, int iParam1)//Position - 0x33B5
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)//Position - 0x33C7
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

bool func_37(var uParam0)//Position - 0x33F4
{
	return uParam0->f_79 == 1;
}

int func_38(int iParam0)//Position - 0x3402
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

bool func_39(int iParam0)//Position - 0x3452
{
	return Global_35861 == iParam0;
}

int func_40(int iParam0, int iParam1)//Position - 0x3460
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

void func_41(int iParam0, int iParam1)//Position - 0x34B1
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

void func_42()//Position - 0x350E
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

int func_43()//Position - 0x3583
{
	func_44();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_44()//Position - 0x359C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_47(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_46(unk_0xFC1458A37D98B502());
			if (func_45(iVar0) && (!func_39(14) || Global_103506))
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

bool func_45(int iParam0)//Position - 0x3699
{
	return iParam0 < 3;
}

int func_46(int iParam0)//Position - 0x36A5
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

int func_47(int iParam0)//Position - 0x36E2
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

void func_48(int iParam0, int iParam1)//Position - 0x370C
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_49()//Position - 0x372F
{
	if (iLocal_47 == 1)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_67[0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
			{
				unk_0x771A86309E0CA47B(iLocal_67[0], false);
				unk_0x486F346ADFE56674(&(iLocal_67[0]));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_67[1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[1]))
			{
				unk_0x771A86309E0CA47B(iLocal_67[1], false);
				unk_0x486F346ADFE56674(&(iLocal_67[1]));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_68[0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[0]))
			{
				unk_0x771A86309E0CA47B(iLocal_68[0], false);
				unk_0x486F346ADFE56674(&(iLocal_68[0]));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_68[1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[1]))
			{
				unk_0x771A86309E0CA47B(iLocal_68[1], false);
				unk_0x486F346ADFE56674(&(iLocal_68[1]));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_68[2]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[2]))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_68[2], -820,424f, -181,9059f, 36,5687f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_68[2], 167,7909f);
				unk_0x771A86309E0CA47B(iLocal_68[2], false);
				unk_0x486F346ADFE56674(&(iLocal_68[2]));
			}
		}
	}
}

void func_50()//Position - 0x3843
{
	Global_14622 = 0;
	func_51();
}

void func_51()//Position - 0x3853
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_52()//Position - 0x3874
{
	if (iLocal_47 == 1)
	{
		if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8f, 8f, 8f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), -823,1281f, -187,9591f, 36,6189f, 8f, 8f, 8f, false, true, 0))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xC733212BF9066BDF(), -831,9709f, -192,0823f, 36,5008f, 0, false, 0, 1);
				unk_0xACE486395AA1867D(unk_0xC733212BF9066BDF(), 1084227584);
			}
		}
		unk_0x247EAA2E93D4A021(-823,1281f, -187,9591f, 36,6189f, 3f, 1, 0, 0, false);
	}
	else if (iLocal_47 == 2)
	{
		if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8f, 8f, 8f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), -1201,017f, -777,5527f, 16,3398f, 8f, 8f, 8f, false, true, 0))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xC733212BF9066BDF(), -1205,936f, -781,2014f, 16,0088f, 0, false, 0, 1);
				unk_0xACE486395AA1867D(unk_0xC733212BF9066BDF(), 1084227584);
			}
		}
		unk_0x247EAA2E93D4A021(-1201,017f, -777,5527f, 16,3398f, 8f, 1, 0, 0, false);
	}
}

void func_53()//Position - 0x39D3
{
	while (!func_72())
	{
		system::wait(0);
	}
	unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 1);
	func_57(5, iLocal_73);
	func_54();
	func_227();
}

void func_54()//Position - 0x3A03
{
	func_55();
}

int func_55()//Position - 0x3A10
{
	if (func_56(0))
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

bool func_56(bool bParam0)//Position - 0x3A5B
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_57(int iParam0, int iParam1)//Position - 0x3A86
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_69(iParam0))
	{
		func_68(iParam0, iParam1);
		if (!func_67(51))
		{
			func_63("RE_REWARD", 1, 0, 4000, 10000, func_66(), 0, 138, 0);
			func_62(51);
		}
		if (func_61(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_60(iParam0, iParam1) != 322)
		{
			func_58(func_60(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_73(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_73(7);
			}
			else
			{
				func_73(1);
			}
		}
	}
}

void func_58(int iParam0, var uParam1, var uParam2)//Position - 0x3B8A
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
		func_19((891 + iParam0), 1, -1, 1);
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
		func_59();
	}
}

void func_59()//Position - 0x3C72
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
		func_40(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_9() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_55();
				}
			}
		}
	}
}

int func_60(int iParam0, int iParam1)//Position - 0x4138
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

int func_61(int iParam0)//Position - 0x44AC
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

void func_62(int iParam0)//Position - 0x44DB
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

void func_63(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x451D
{
	func_64(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_64(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x453F
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
		func_65();
	}
}

void func_65()//Position - 0x4713
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

int func_66()//Position - 0x4833
{
	func_44();
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

int func_67(int iParam0)//Position - 0x4879
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

void func_68(int iParam0, int iParam1)//Position - 0x48BC
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_69(int iParam0)//Position - 0x48D7
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

int func_70()//Position - 0x4988
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_71(Var0);
	return uVar1;
}

int func_71(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x49A5
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

int func_72()//Position - 0x4B7F
{
	return 1;
}

void func_73(int iParam0)//Position - 0x4B88
{
	Global_104541 = iParam0;
}

void func_74(int iParam0, int iParam1)//Position - 0x4B96
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_70856)
		{
			iVar0 = Global_2436181.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_104555.f_7231[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xC80D31E4B587871C(Global_31648[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x872F1C1F8587CCC7(&(Global_31657[(iParam0 / 32)]), (iParam0 % 32));
				Global_32120[iParam0] = iParam1;
			}
			else if (Global_70856)
			{
				Global_2436181.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_104555.f_7231[iParam0] = iParam1;
			}
			unk_0x872F1C1F8587CCC7(&(Global_31648[(iParam0 / 32)]), (iParam0 % 32));
			func_76(iParam0);
			if (unk_0xC80D31E4B587871C(Global_31648[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_75(iParam0);
			}
		}
	}
}

void func_75(int iParam0)//Position - 0x4C8F
{
	if (!unk_0xC80D31E4B587871C(Global_32591.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x872F1C1F8587CCC7(&(Global_32591.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32591[Global_32591.f_227] = iParam0;
		Global_32591.f_227++;
	}
}

void func_76(int iParam0)//Position - 0x4CDD
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_96())
	{
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	Var0 = { func_95(iParam0) };
	if (unk_0xC80D31E4B587871C(Var0.f_4, 2))
	{
		func_81(iParam0, &Var0);
	}
	if (!unk_0x546F10CBA6C484DA(Var0.f_5))
	{
		if (unk_0xA8113D347D14630F())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0xBE3C4023003180FC(Var0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true);
	if ((unk_0xC80D31E4B587871C(Global_31657[(iParam0 / 32)], (iParam0 % 32)) && Global_32120[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31657[(iParam0 / 32)]), (iParam0 % 32));
		Global_31666[iParam0] = 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("startup_positioning")) == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_31893[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_92885.f_313 == 0)
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						Global_92885.f_313 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
					}
				}
				iVar5 = Global_92885.f_313;
				iVar6 = unk_0xD3BB1A515B0A47F3(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0x872F1C1F8587CCC7(&(Global_31657[(iParam0 / 32)]), (iParam0 % 32));
					Global_32120[iParam0] = 3;
					unk_0x872F1C1F8587CCC7(&(Global_31648[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x0EE72DB1CD8A3B86(&(Global_31893[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xC80D31E4B587871C(Global_31657[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_32120[iParam0];
	}
	else if (unk_0xC80D31E4B587871C(Var0.f_4, 0))
	{
		if (Global_104555.f_9055)
		{
			iVar3 = func_78(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0xC80D31E4B587871C(Var0.f_4, 1) && unk_0x8F38E94BBF3404CD(joaat("ambient_solomon")) == 0)
	{
		if (func_77())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_104555.f_7231[iParam0];
	}
	if (Global_32347[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (unk_0xC80D31E4B587871C(Global_31648[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xC80D31E4B587871C(Global_31657[(iParam0 / 32)], (iParam0 % 32)) || (Global_31666[iParam0] == 0 && Global_32120[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_31647)
		{
		}
		else
		{
			if (!unk_0x546F10CBA6C484DA(Var0.f_5))
			{
				unk_0x050E4C90F7375618(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (unk_0xC80D31E4B587871C(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0xE97272C977DEADD3(unk_0xED2D01296ADA88DB(Var0.f_5)) <= 0,015f)
					{
						iVar8 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
						iVar9 = unk_0xD3BB1A515B0A47F3(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x144D321B0F3BBF14(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xB94AAB49E0BB01DB(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_31648[(iParam0 / 32)]), (iParam0 % 32));
			Global_32347[iParam0] = iVar3;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_31657[(iParam0 / 32)], (iParam0 % 32)) && Global_32120[iParam0] != 2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31648[(iParam0 / 32)]), (iParam0 % 32));
		func_75(iParam0);
		if (Global_31666[iParam0] < 2)
		{
			Global_31666[iParam0]++;
		}
	}
}

int func_77()//Position - 0x51C0
{
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	switch (func_43())
	{
		case 0:
			if (Global_104555.f_9055.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_104555.f_9055.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_104555.f_9055.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x523F
{
	int iVar0;
	
	iVar0 = func_43();
	if (func_79(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xC80D31E4B587871C(Global_104555.f_7199[5], 0) || unk_0xC80D31E4B587871C(Global_104555.f_7199[6], 0))
			{
				return 0;
			}
		}
		if (func_45(iVar0))
		{
			if (unk_0xC80D31E4B587871C(Global_88005[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[0], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xC80D31E4B587871C(Global_88005[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[5], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xC80D31E4B587871C(Global_88005[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[6], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xC80D31E4B587871C(Global_88005[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[2], 0))
				{
					return 0;
				}
				if (func_45(iVar0))
				{
					if (unk_0xC80D31E4B587871C(Global_88005[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[1], 0))
				{
					return 0;
				}
				if (func_45(iVar0))
				{
					if (unk_0xC80D31E4B587871C(Global_88005[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7199[3], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xC80D31E4B587871C(Global_88005[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x5494
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				iVar0 = unk_0x82FF3DFBC3965CC0(func_80(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x5500
{
	return iParam0;
}

void func_81(int iParam0, var uParam1)//Position - 0x550A
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_84();
	iVar1 = func_83(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_82(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_104555.f_7231[iParam0] = 0;
						unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 12f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 12f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_82(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_104555.f_7231[iParam0] = 0;
						unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 12f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 12f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_82(iParam0))
			{
				if ((unk_0x8F38E94BBF3404CD(joaat("jewelry_heist")) == 0 && unk_0x8F38E94BBF3404CD(joaat("jewelry_setup1")) == 0) && !Global_104555.f_9055.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_104555.f_7231[iParam0] = 0;
							unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_104555.f_9055.f_99.f_58[4])
				{
					Global_104555.f_7231[iParam0] = 0;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else if (Global_104555.f_9055.f_99.f_58[4])
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			else if (unk_0x8F38E94BBF3404CD(joaat("jewelry_heist")) == 0 && unk_0x8F38E94BBF3404CD(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 18f)
					{
						Global_104555.f_7231[iParam0] = 1;
						unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 18f)
					{
						Global_104555.f_7231[iParam0] = 1;
						unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_82(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_104555.f_7231[iParam0] = 0;
						unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 40f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), *uParam1) >= 40f)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_82(iParam0))
			{
				if (unk_0x8F38E94BBF3404CD(joaat("assassin_valet")) == 0)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else if (unk_0x8F38E94BBF3404CD(joaat("assassin_valet")) > 0)
			{
				Global_104555.f_7231[iParam0] = 0;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x8F38E94BBF3404CD(Global_83766[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x8F38E94BBF3404CD(joaat("omega2")) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_82(iParam0) && unk_0x8F38E94BBF3404CD(Global_83766[26 /*34*/].f_6) == 0)
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_82(iParam0))
			{
				if (unk_0x8F38E94BBF3404CD(Global_83766[43 /*34*/].f_6) == 0)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_82(iParam0))
			{
				if (unk_0x8F38E94BBF3404CD(Global_83766[93 /*34*/].f_6) > 0)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_82(iParam0))
			{
				if (unk_0x8F38E94BBF3404CD(Global_83766[8 /*34*/].f_6) == 0 && unk_0x8F38E94BBF3404CD(Global_83766[10 /*34*/].f_6) == 0)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_82(iParam0))
			{
				if (unk_0x8F38E94BBF3404CD(Global_83766[47 /*34*/].f_6) == 0)
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x8F38E94BBF3404CD(Global_83766[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0x8F38E94BBF3404CD(Global_83766[48 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x8F38E94BBF3404CD(Global_83766[39 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_82(iParam0))
			{
				Global_104555.f_7231[iParam0] = 0;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
	}
}

bool func_82(int iParam0)//Position - 0x5EA5
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_95(iParam0) };
	iVar1 = unk_0x656A318921183B10(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_83(int iParam0)//Position - 0x5ED9
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_84()//Position - 0x5EEC
{
	var uVar0;
	
	func_94(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_93(&uVar0, unk_0x95327550F0F2BE7C());
	func_92(&uVar0, unk_0x674C9438180770FE());
	func_87(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_86(&uVar0, unk_0xEAF455949B108589());
	func_85(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_85(var uParam0, int iParam1)//Position - 0x5F32
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

void func_86(var uParam0, int iParam1)//Position - 0x5FB8
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_87(var uParam0, int iParam1)//Position - 0x5FEB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(*uParam0);
	iVar1 = func_89(*uParam0);
	if (iParam1 < 1 || iParam1 > func_88(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_88(int iParam0, int iParam1)//Position - 0x603C
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

int func_89(int iParam0)//Position - 0x60DE
{
	return (system::shift_right(iParam0, 26) & 31 * func_90(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_90(bool bParam0, int iParam1, int iParam2)//Position - 0x6103
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_91(int iParam0)//Position - 0x611A
{
	return iParam0 & 15;
}

void func_92(var uParam0, int iParam1)//Position - 0x6127
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_93(var uParam0, int iParam1)//Position - 0x6161
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_94(var uParam0, int iParam1)//Position - 0x619C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

struct<7> func_95(int iParam0)//Position - 0x61D8
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x872F1C1F8587CCC7(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_96()//Position - 0x8DE3
{
	if ((func_9() == -1 || func_9() == 999) && !func_97() == 0)
	{
		return 1;
	}
	return 0;
}

int func_97()//Position - 0x8E13
{
	return Global_25234;
}

void func_98(int iParam0, var uParam1)//Position - 0x8E1E
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x53C562FD2B9E3AB0();
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		iVar0 = (unk_0x53C562FD2B9E3AB0() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = system::ceil((system::to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x94540F498465F1A2(iParam0) != 255)
				{
					unk_0xF20857E4CB32A2B7(iParam0, 255);
				}
			}
			else if (unk_0x94540F498465F1A2(iParam0) != 0)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x94540F498465F1A2(iParam0) != 255)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 255);
			}
		}
	}
}

void func_99(int iParam0)//Position - 0x8EBD
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)//Position - 0x8F9E
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

char* func_101(int iParam0)//Position - 0x8FB5
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

void func_102()//Position - 0x8FF9
{
	if (unk_0x58786AA7A9E510C0(iLocal_62))
	{
		func_48(joaat("rc_wallets_recovered"), 1);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
		{
			iLocal_122 = func_162(iLocal_67[0], 0, 145);
		}
		func_103(&uLocal_148);
		fLocal_124 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), func_241());
		system::settimera(0);
		iLocal_45 = 10;
	}
	if (unk_0xB8B3E5529EDB87D4(iLocal_62))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iLocal_62)) > 200f)
		{
			func_153();
		}
	}
}

void func_103(var uParam0)//Position - 0x907A
{
	*uParam0 = -99;
}

void func_104(var uParam0, int iParam1)//Position - 0x9088
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_105()//Position - 0x90A5
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iLocal_62))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_60, 3);
		unk_0x872F1C1F8587CCC7(&iLocal_60, 4);
		unk_0x872F1C1F8587CCC7(&iLocal_60, 1);
		if (!bLocal_96)
		{
			if (unk_0x191BE1BC8F26F3C1(iLocal_66[0], 0))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_66[0]))
				{
					vLocal_61 = { unk_0x1478170665DA3CEC(iLocal_66[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				vLocal_61 = { unk_0xCC1609D1BF2658E4(unk_0xB3328BA8976B416C(iLocal_66[0], 1), 1,2f, 1,5f) };
			}
		}
		else if (unk_0x6ADD12BF4D6D2587(iLocal_106))
		{
			vLocal_61 = { unk_0xCC1609D1BF2658E4(unk_0xB3328BA8976B416C(iLocal_106, 0), 1,2f, 1,5f) };
		}
		vLocal_61 = { vLocal_61.x, vLocal_61.y, (vLocal_61.z + 0,25f) };
		iLocal_62 = unk_0x06583789B8C15A6C(joaat("pickup_money_med_bag"), vLocal_61, iLocal_60, iLocal_118, 1, joaat("prop_cs_duffel_01"));
		iLocal_121 = func_106(iLocal_62);
		if (iLocal_47 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_63 - 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
				{
					unk_0xCFF0CD14B439821D(iLocal_66[iVar0], true, 1);
					unk_0xB8E08BD5B184DF4E(iLocal_66[iVar0]);
					unk_0x6931076730A4AC5D(&iLocal_87);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_87);
					unk_0xAB30B1CF01A198C1(iLocal_66[iVar0], iLocal_87);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
					unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar0], true);
				}
				iVar0++;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
			{
				unk_0x2CEA76A7F93740C6(iLocal_66[0]);
				if (!unk_0x03785A9CECFE1861(iLocal_66[0]))
				{
					func_50();
					system::wait(0);
					func_116(&uLocal_151, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106(int iParam0)//Position - 0x9242
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_107(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)//Position - 0x927A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_108()//Position - 0x9291
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_121))
	{
		unk_0xE30CF11C0EE14316(&iLocal_121);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_122))
	{
		unk_0xE30CF11C0EE14316(&iLocal_122);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_120))
	{
		unk_0xE30CF11C0EE14316(&iLocal_120);
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_116[0]))
	{
		unk_0xE30CF11C0EE14316(&(uLocal_116[0]));
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_116[1]))
	{
		unk_0xE30CF11C0EE14316(&(uLocal_116[1]));
	}
}

int func_109()//Position - 0x92F0
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_66[0]))
	{
		iLocal_84 = 1;
	}
	else if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
	{
		iLocal_84 = 1;
	}
	if (!bLocal_96)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_66[1]))
		{
			iLocal_85 = 1;
		}
		else if (unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
		{
			iLocal_85 = 1;
		}
	}
	else
	{
		iLocal_85 = 1;
	}
	if (!unk_0x6ADD12BF4D6D2587(iLocal_115))
	{
		iLocal_86 = 1;
	}
	else if (unk_0x3AB6A1A9084FB0A4(iLocal_115) || !unk_0x88DDBE9908752BF0(iLocal_115, 0))
	{
		iLocal_86 = 1;
	}
	if ((iLocal_84 && iLocal_85) || iLocal_86)
	{
		return 1;
	}
	return 0;
}

int func_110()//Position - 0x938B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_66[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]) || unk_0x191BE1BC8F26F3C1(iLocal_66[iVar0], 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_66[iVar0], unk_0xFC1458A37D98B502(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_66[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
			{
				if (unk_0x27C8A4034A05DC21(iLocal_66[iVar0]))
				{
					if (unk_0x4EAE4CAB6D3C4502(iLocal_66[iVar0]) == unk_0xFC1458A37D98B502())
					{
						unk_0xCFF0CD14B439821D(iLocal_66[iVar0], true, 1);
						unk_0xD68E88A8E0BE8697(iLocal_66[iVar0], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar0], true);
						system::wait(0);
						unk_0x486F346ADFE56674(&(iLocal_66[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_115))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_115) || unk_0x191BE1BC8F26F3C1(iLocal_115, 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_115, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
		{
			if (unk_0xE2446300EBE6E77D(unk_0xFC1458A37D98B502(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_115))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_115))
		{
			if (unk_0x27C8A4034A05DC21(iLocal_115))
			{
				if (unk_0x4EAE4CAB6D3C4502(iLocal_115) == unk_0xFC1458A37D98B502())
				{
					unk_0xCFF0CD14B439821D(iLocal_115, true, 1);
					unk_0xD68E88A8E0BE8697(iLocal_115, unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_115, true);
					system::wait(0);
					unk_0x486F346ADFE56674(&iLocal_115);
					return 1;
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_106))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_106, 0) || unk_0x191BE1BC8F26F3C1(iLocal_106, 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_106, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0, bool bParam1, bool bParam2)//Position - 0x9555
{
	return func_112(iParam0, !bParam1, bParam2);
}

int func_112(int iParam0, bool bParam1, bool bParam2)//Position - 0x9568
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_107(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_107(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_107(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_113()//Position - 0x960C
{
	if (unk_0xB8DE76287EDC4957(iLocal_106, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
		{
			if (unk_0xA8D0477084E86A92(iLocal_66[0], iLocal_106, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
				{
					if (unk_0xA8D0477084E86A92(iLocal_66[1], iLocal_106, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_114()//Position - 0x965B
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_102))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
			{
				unk_0x6B7C10B19928914F(iLocal_102, 1, true);
			}
			unk_0x452336926718D62A(&iLocal_102);
			func_108();
			func_105();
			iLocal_45 = 9;
		}
	}
	else if (unk_0xEBE499597C718EB8(iLocal_66[0], unk_0xFC1458A37D98B502(), 1))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_102))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
			{
				unk_0x6B7C10B19928914F(iLocal_102, 1, true);
			}
			unk_0x452336926718D62A(&iLocal_102);
			func_108();
			func_105();
			iLocal_45 = 9;
		}
	}
}

int func_115(int iParam0)//Position - 0x96DB
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

bool func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x972B
{
	func_126(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_117(sParam2, iParam3, 0);
}

int func_117(char* sParam0, int iParam1, bool bParam2)//Position - 0x9779
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
		if (func_124(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_123();
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
				func_122();
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
				if (func_121())
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
			if (func_120())
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
			func_119();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_118();
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

void func_118()//Position - 0x9A45
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

void func_119()//Position - 0x9A77
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

int func_120()//Position - 0x9B0C
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x9B33
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

void func_122()//Position - 0x9BCC
{
	if (func_39(14))
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

void func_123()//Position - 0x9C6E
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

bool func_124(int iParam0, int iParam1)//Position - 0x9CC6
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

void func_125()//Position - 0x9D01
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

void func_126(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9D58
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

int func_127()//Position - 0x9DAE
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_128(bool bParam0)//Position - 0x9DD0
{
	if (bParam0)
	{
		func_132();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_131(0))
		{
			func_129(0);
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

void func_129(int iParam0)//Position - 0x9E33
{
	if (Global_14615)
	{
		func_130(0, 0);
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
	if (!func_120())
	{
		Global_14453.f_1 = 3;
	}
}

void func_130(bool bParam0, bool bParam1)//Position - 0x9EA3
{
	if (bParam0)
	{
		if (func_131(0))
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

int func_131(int iParam0)//Position - 0x9F17
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

void func_132()//Position - 0x9F71
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_133(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9F9A
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_140(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_120())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_139(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_140(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_139(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_137(unk_0x9EB17624F44A8DA4())) && !func_135(unk_0x9EB17624F44A8DA4(), 0)) && !func_134())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_137(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_134()//Position - 0xA0B3
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_135(int iParam0, int iParam1)//Position - 0xA0D0
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, bool bParam1)//Position - 0xA11B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_137(int iParam0)//Position - 0xA15C
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_138())
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

bool func_138()//Position - 0xA19E
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_139(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA1AF
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

void func_140(int iParam0)//Position - 0xA1E2
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

int func_141()//Position - 0xA205
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
	{
		if (iLocal_47 == 1)
		{
			if (!iLocal_100)
			{
				if (!unk_0x0F3033474C49912D(iLocal_66[0], -823,5066f, -187,3465f, 40,36355f, -803,6377f, -175,9496f, 36,4337f, 11,9375f, 0, true, 0))
				{
					iLocal_100 = 1;
				}
			}
			if (!iLocal_101)
			{
				if (!unk_0x0F3033474C49912D(iLocal_66[1], -823,5066f, -187,3465f, 40,36355f, -803,6377f, -175,9496f, 36,4337f, 11,9375f, 0, true, 0))
				{
					iLocal_101 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!iLocal_100)
			{
				if ((!unk_0x0F3033474C49912D(iLocal_66[0], -1204,031f, -779,629f, 16,33565f, -1174,799f, -757,0704f, 21,01281f, 12,125f, 0, true, 0) || unk_0x0F3033474C49912D(iLocal_66[0], -1206,545f, -777,8941f, 21,20355f, -1204,313f, -778,2245f, 16,08434f, 2,25f, 0, true, 0)) || unk_0x0F3033474C49912D(iLocal_66[0], -1202,928f, -782,6883f, 21,20369f, -1202,583f, -780,5067f, 16,08243f, 2,25f, 0, true, 0))
				{
					unk_0xD68E88A8E0BE8697(iLocal_66[0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					iLocal_100 = 1;
				}
			}
			if (!iLocal_101)
			{
				if ((!unk_0x0F3033474C49912D(iLocal_66[1], -1204,031f, -779,629f, 16,33565f, -1174,799f, -757,0704f, 21,01281f, 12,125f, 0, true, 0) || unk_0x0F3033474C49912D(iLocal_66[1], -1206,545f, -777,8941f, 21,20355f, -1204,313f, -778,2245f, 16,08434f, 2,25f, 0, true, 0)) || unk_0x0F3033474C49912D(iLocal_66[1], -1202,928f, -782,6883f, 21,20369f, -1202,583f, -780,5067f, 16,08243f, 2,25f, 0, true, 0))
				{
					unk_0xD68E88A8E0BE8697(iLocal_66[1], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					iLocal_101 = 1;
				}
			}
		}
	}
	if (iLocal_100 && iLocal_101)
	{
		return 1;
	}
	return 0;
}

void func_142()//Position - 0xA437
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iLocal_102, 1) };
	vVar1 = { unk_0xDB824D597B53CC40(iLocal_102, 2) };
	unk_0x452336926718D62A(&iLocal_102);
	iLocal_102 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_duffel_01"), vVar0, true, true, false);
	unk_0x59AF3B40AE222194(iLocal_102, vVar1, 2, 1);
}

void func_143()//Position - 0xA479
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_66[0]))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_66[0], 0)) > 200f && unk_0xEC211A86AB3726B6(iLocal_66[0]))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_116[0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_116[0]));
			}
			unk_0x486F346ADFE56674(&(iLocal_66[0]));
			bLocal_82 = true;
		}
	}
	else
	{
		bLocal_82 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_106))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_106, 0)) > 200f && unk_0xEC211A86AB3726B6(iLocal_106))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_120))
			{
				unk_0xE30CF11C0EE14316(&iLocal_120);
			}
			unk_0x5380482A432E314E(&iLocal_106);
			bLocal_83 = true;
		}
	}
	else
	{
		bLocal_83 = true;
	}
	if (bLocal_96)
	{
		if (bLocal_83)
		{
			if (func_161())
			{
				iLocal_45 = 13;
			}
			else
			{
				system::wait(0);
				iLocal_44 = 2;
			}
		}
	}
	else if (bLocal_82)
	{
		system::wait(0);
		if (func_161())
		{
			iLocal_45 = 13;
		}
		else
		{
			iLocal_44 = 2;
		}
	}
}

void func_144()//Position - 0xA56F
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_106, 0))
	{
		if (unk_0xDE523AF6F7B269AB(iLocal_106) < 800)
		{
			unk_0xE01CE1EBCD7EE551(iLocal_106, 0, 0);
			unk_0xB38E13EF2EC6F0E9(iLocal_106, 10f);
		}
	}
}

void func_145()//Position - 0xA5A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_66[iVar0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_116[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_116[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_146()//Position - 0xA5EF
{
	int iVar0;
	int iVar1;
	
	if (iLocal_47 == 1)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
		{
			iLocal_45 = 7;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
		{
			iLocal_45 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_66)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_116[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_116[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
	{
		if (!bLocal_79)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_63 - 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar1]))
				{
					unk_0xD7F5B2902EBBD04E(iLocal_66[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
				}
				iVar1++;
			}
			bLocal_79 = true;
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
			{
				iLocal_45 = 5;
			}
		}
	}
	if (!iLocal_89 && !bLocal_79)
	{
		unk_0x8810DC630928B398("RE51A_SHOP");
		func_50();
		system::wait(0);
		if (iLocal_47 == 1)
		{
			if (func_116(&uLocal_151, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_89 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (func_116(&uLocal_151, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_89 = 1;
			}
		}
	}
	if ((iLocal_89 && !iLocal_90) && !bLocal_79)
	{
		if (!func_127())
		{
			if (func_43() == 0)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_43() == 1)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_43() == 2)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_90 = 1;
		}
	}
	if (!bLocal_79)
	{
		if (!func_127())
		{
			if (iLocal_90 && !iLocal_91)
			{
				if (iLocal_47 == 1)
				{
					if (func_164(&uLocal_151, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
				else if (iLocal_47 == 2)
				{
					if (func_164(&uLocal_151, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
			}
		}
		if (iLocal_47 == 1)
		{
			if (!func_127())
			{
				if (!iLocal_92)
				{
					if (iLocal_47 == 1)
					{
						func_116(&uLocal_151, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_47 == 2)
					{
						func_116(&uLocal_151, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_92 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (system::timera() > 4000)
			{
				if (!iLocal_92)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_102))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
						{
							iLocal_92 = 1;
						}
					}
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_102) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
			{
				if (!iLocal_109)
				{
					iLocal_109 = 1;
				}
			}
		}
		if (!iLocal_77)
		{
			if (iLocal_47 == 1)
			{
				if (system::timera() > 14100)
				{
					unk_0x452336926718D62A(&(iLocal_103[0]));
					unk_0x452336926718D62A(&(iLocal_103[1]));
					if (unk_0xB8DE76287EDC4957(iLocal_106, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_66[0]);
							unk_0x6931076730A4AC5D(&iLocal_87);
							unk_0xCB3D88C918AA637C(0);
							unk_0x6F8C8278B7C06889(0, iLocal_106, -1, 0, 2f, 1, 0);
							unk_0x1B16DD5C115FE009(iLocal_87);
							unk_0xAB30B1CF01A198C1(iLocal_66[0], iLocal_87);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
						{
							unk_0x31BBD48AA2503617(iLocal_66[1], -530524, true, 0, 0);
							unk_0x6931076730A4AC5D(&iLocal_87);
							unk_0xCB3D88C918AA637C(0);
							unk_0x6F8C8278B7C06889(0, iLocal_106, -1, 1, 2f, 1, 0);
							unk_0x1B16DD5C115FE009(iLocal_87);
							unk_0xAB30B1CF01A198C1(iLocal_66[1], iLocal_87);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						}
						iLocal_45 = 2;
						iLocal_77 = 1;
					}
					else
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
						{
							unk_0xCFF0CD14B439821D(iLocal_66[0], true, 1);
							unk_0x957CEE967C939968(iLocal_66[0]);
							unk_0x6931076730A4AC5D(&iLocal_87);
							unk_0xCB3D88C918AA637C(0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_87);
							unk_0xAB30B1CF01A198C1(iLocal_66[0], iLocal_87);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
						{
							unk_0xCFF0CD14B439821D(iLocal_66[1], true, 1);
							unk_0x957CEE967C939968(iLocal_66[1]);
							unk_0x6931076730A4AC5D(&iLocal_87);
							unk_0xCB3D88C918AA637C(0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_87);
							unk_0xAB30B1CF01A198C1(iLocal_66[1], iLocal_87);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						}
						iLocal_45 = 2;
						iLocal_77 = 1;
					}
				}
			}
			else if (iLocal_47 == 2)
			{
				if (unk_0x463C4747B41E35A3(iLocal_135) > 0,453f)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
					{
						unk_0x771A86309E0CA47B(iLocal_67[0], true);
						unk_0x6931076730A4AC5D(&iLocal_87);
						unk_0x12C9D41D52A560D6(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_87);
						unk_0xAB30B1CF01A198C1(iLocal_67[0], iLocal_87);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						unk_0xE9B3D12A64CC7C1A(iLocal_67[0], true);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_66[0]);
						unk_0xE17958D3FD0F9EE9(iLocal_66[0], 128, true);
						unk_0xE17958D3FD0F9EE9(iLocal_66[0], 1, true);
						unk_0xAE6EBBBBD8B9FB30(iLocal_66[0], 17, true);
						unk_0x5C57ECBE59C08573(iLocal_66[0], 1,6f);
						unk_0xCFF0CD14B439821D(iLocal_66[0], true, 1);
						unk_0x6931076730A4AC5D(&iLocal_87);
						unk_0x12C9D41D52A560D6(0, "random@robbery", "run", 2f, -2f, -1, 49, 0, 0, 0, 0);
						unk_0xFB02C50CC0E93FAA(0, "re_shoprobbery", 0, 0, 16);
						unk_0xCB3D88C918AA637C(0);
						unk_0x1B16DD5C115FE009(iLocal_87);
						unk_0xAB30B1CF01A198C1(iLocal_66[0], iLocal_87);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						unk_0xE9B3D12A64CC7C1A(iLocal_66[0], true);
						system::settimerb(0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
					{
						unk_0xE17958D3FD0F9EE9(iLocal_66[1], 128, true);
						unk_0xE17958D3FD0F9EE9(iLocal_66[1], 1, true);
						unk_0xAE6EBBBBD8B9FB30(iLocal_66[1], 17, true);
						unk_0x5C57ECBE59C08573(iLocal_66[1], 1,6f);
						unk_0xCFF0CD14B439821D(iLocal_66[1], true, 1);
						unk_0x6931076730A4AC5D(&iLocal_87);
						unk_0xCB3D88C918AA637C(0);
						unk_0xFB02C50CC0E93FAA(0, "re_shoprobbery2", 0, 0, 17);
						unk_0x1B16DD5C115FE009(iLocal_87);
						unk_0xAB30B1CF01A198C1(iLocal_66[1], iLocal_87);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
						unk_0xE9B3D12A64CC7C1A(iLocal_66[1], true);
					}
					iLocal_45 = 2;
					iLocal_77 = 1;
				}
			}
			unk_0x94BD6F0436473406(0f);
		}
	}
}

void func_147()//Position - 0xABB3
{
	switch (iLocal_146)
	{
		case 0:
			func_133(1, 1, 1, 0);
			unk_0x60225D4F755DFDB1(func_148(unk_0x9EB17624F44A8DA4()), 10f, 0);
			iLocal_145 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
			unk_0x7849794435F39D49(iLocal_145, true);
			unk_0xEFF56C7BDABBF39B(iLocal_145, iLocal_135, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_47 == 1)
			{
				unk_0x5AA4315C366E622D("Hair_room");
			}
			unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			iLocal_147 = unk_0x53C562FD2B9E3AB0() + 3500;
			iLocal_146++;
			break;
		
		case 1:
			if (iLocal_147 < unk_0x53C562FD2B9E3AB0())
			{
				if (iLocal_47 == 1)
				{
					unk_0xBB9A3C553EECB180(115f);
					unk_0x7C9705890EF6612E(-9,1222f, 1065353216);
				}
				else if (iLocal_47 == 2)
				{
					unk_0xBB9A3C553EECB180(44,5236f);
					unk_0x7C9705890EF6612E(-18,1582f, 1065353216);
				}
				unk_0x81BCCFFE3F019672();
				unk_0x7849794435F39D49(iLocal_145, false);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				func_52();
				func_133(0, 1, 1, 0);
				iLocal_146++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_148(int iParam0)//Position - 0xACB1
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_149()//Position - 0xACC4
{
	int iVar0;
	
	if (!iLocal_75 && func_152(1, 0, 1))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_122))
		{
			unk_0xE30CF11C0EE14316(&iLocal_122);
		}
		func_133(1, 1, 1, 0);
		unk_0x3E80C2F7BC665259(1);
		unk_0x4255E93FCCDE108E(false);
		unk_0x9B47B379EE749C38(false);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		if (iLocal_47 == 1)
		{
			if (!iLocal_108)
			{
				iLocal_135 = unk_0x8383F9C605E523B7(vLocal_126, vLocal_128, 2);
				unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
				unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_135, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
				if (((!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_67[0])) && unk_0x6ADD12BF4D6D2587(iLocal_102))
				{
					unk_0x8E628F774C748D93(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x8E628F774C748D93(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x8E628F774C748D93(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					unk_0xEBB74134CCA3442E(iLocal_102, iLocal_135, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				unk_0x0ADADE14A7CF26EF(iLocal_135, 0,06f);
				iLocal_108 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[0]))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_67[0]);
				unk_0x12C9D41D52A560D6(iLocal_67[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0, 0, 0, 0);
			}
			unk_0x32C900DD9B686F75(-1195,062f, -773,2098f, 16,324f, 20f, 4);
			iLocal_135 = unk_0x8383F9C605E523B7(vLocal_126, vLocal_128, 2);
			if (((!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_67[0])) && unk_0x6ADD12BF4D6D2587(iLocal_102))
			{
				unk_0x8E628F774C748D93(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_103[0]) && unk_0x6ADD12BF4D6D2587(iLocal_103[1]))
				{
					unk_0xA9D382E7BA095148(iLocal_103[0], iLocal_67[0], unk_0xDD09837E5235FE91(iLocal_67[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					unk_0xA9D382E7BA095148(iLocal_103[1], iLocal_67[0], unk_0xDD09837E5235FE91(iLocal_67[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			unk_0x0ADADE14A7CF26EF(iLocal_135, 0,05f);
			vLocal_126 = { -1199,369f, -776,1991f, 16,3235f };
			vLocal_128 = { 0f, 0f, -60f };
			iLocal_135 = unk_0x8383F9C605E523B7(vLocal_126, vLocal_128, 2);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
			{
				unk_0x8E628F774C748D93(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			unk_0x0ADADE14A7CF26EF(iLocal_135, 0,06f);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1200,455f, -777,6201f, 16,3244f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 305,3806f);
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			unk_0x6931076730A4AC5D(&iLocal_87);
			unk_0x12C9D41D52A560D6(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0,06f, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iLocal_87);
			unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iLocal_87);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
			unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
		}
		iLocal_75 = 1;
	}
	if (!iLocal_107)
	{
		func_150();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (!unk_0xA6DECE14FC9A8C51(uLocal_116[iVar0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]))
			{
				uLocal_116[iVar0] = func_162(iLocal_66[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_47 == 1 && unk_0x6ADD12BF4D6D2587(iLocal_106)) || iLocal_47 == 2)
	{
		system::settimera(0);
		iLocal_45 = 1;
	}
}

void func_150()//Position - 0xB0FA
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_110)
	{
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			iLocal_110 = 1;
		}
		else
		{
			unk_0x6FF834D85E2DD4C6(iVar0);
		}
	}
	else if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		if (func_151())
		{
			if (unk_0x0F3033474C49912D(iLocal_104, -828,3692f, -194,4669f, 36,41385f, -824,5801f, -201,1353f, 39,39436f, 4,3125f, 0, true, 0))
			{
				vLocal_105 = { -822,1784f, -205,811f, 36,3444f };
			}
			else
			{
				vLocal_105 = { -826,2828f, -197,8547f, 36,3995f };
			}
		}
		else
		{
			vLocal_105 = { -826,2828f, -197,8547f, 36,3995f };
		}
		iLocal_106 = unk_0xEA60F3B426BB095B(iVar0, vLocal_105, 31,9252f, true, true, false);
		unk_0xCFF0CD14B439821D(iLocal_106, true, 1);
		unk_0xACE486395AA1867D(iLocal_106, 1084227584);
		unk_0xA15269351F50F113(iLocal_106, true, true, 0);
		iLocal_115 = unk_0x00D1A9572426E8DD(iLocal_106, 26, joaat("g_m_y_korean_01"), -1, 1, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_115, 134, true);
		unk_0x771A86309E0CA47B(iLocal_115, true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_115, iLocal_119);
		unk_0xAE6EBBBBD8B9FB30(iLocal_115, 8, false);
		unk_0x2C8C730E9565B998(iLocal_115, 0);
		unk_0xBB3CC641B6AED5E5(iLocal_115, 13);
		unk_0x9E058151726E58DE(iLocal_115, joaat("weapon_pistol"), -1, true, true);
		unk_0xE0F761CE722765C1(iLocal_115, 1, 0);
		unk_0xAE01EF4BC84AFE7C(iLocal_115, 42, true);
		iLocal_107 = 1;
	}
}

int func_151()//Position - 0xB240
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0x0C88267282FD588F(iVar0, -829,3693f, -191,9869f, 36,4616f, 15f, 15f, 5f, false, true, 0))
		{
			iLocal_104 = iVar0;
			if (!unk_0x9761C10D57B68069(iLocal_104))
			{
				unk_0xDD29FF4BAB8AFF9C(iLocal_104, true, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB299
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

void func_153()//Position - 0xB37E
{
	func_227();
}

int func_154(int iParam0)//Position - 0xB38A
{
	if (func_155())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_61(Global_104544))
		{
			func_99(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_61(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

int func_155()//Position - 0xB3DD
{
	switch (func_156(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB413
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
		if (func_160(0))
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
		if (!func_158(iParam2))
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
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(var uParam0, int iParam1)//Position - 0xB54A
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

bool func_158(int iParam0)//Position - 0xB599
{
	return func_159(iParam0, Global_35861);
}

int func_159(int iParam0, int iParam1)//Position - 0xB5AA
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

int func_160(int iParam0)//Position - 0xB78B
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_158(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161()//Position - 0xB7AD
{
	if (iLocal_47 == 1)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -803,4598f, -175,8135f, 36,28367f, -823,0242f, -187,0462f, 40,53547f, 11,9375f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -823,3706f, -188,0602f, 36,62162f, -822,8361f, -187,7466f, 39,06914f, 1,5f, 0, true, 0))
		{
			return 1;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1204,031f, -779,629f, 16,33565f, -1174,799f, -757,0704f, 21,01281f, 12,125f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1203,899f, -776,9178f, 20,16803f, -1201,289f, -780,4698f, 15,61526f, 3,9375f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1206,545f, -777,8941f, 21,20355f, -1204,313f, -778,2245f, 16,08434f, 2,25f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1202,928f, -782,6883f, 21,20369f, -1202,583f, -780,5067f, 16,08243f, 2,25f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0, bool bParam1, int iParam2)//Position - 0xB8FF
{
	int iVar0;
	
	iVar0 = func_112(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_163()//Position - 0xB951
{
	int iVar0;
	
	if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -823,1281f, -187,9591f, 36,6189f, 12f, 12f, 12f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1201,017f, -777,5527f, 16,3398f, 12f, 12f, 12f, false, true, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
		{
			if (unk_0xEBE499597C718EB8(iLocal_66[0], unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_66[1], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
			if (unk_0x46D8E79A1B95ACE2(iLocal_66[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_66[1], unk_0xFC1458A37D98B502()))
			{
				if (((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_66[0]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_66[0])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_66[1])) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_66[1]))
				{
					if (iLocal_69 == -1)
					{
						iLocal_69 = unk_0x53C562FD2B9E3AB0();
					}
				}
				else
				{
					iLocal_69 = -1;
				}
				if (iLocal_69 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_69 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x98129652BB227B1B(-1, vLocal_123 - Vector(20f, 20f, 20f), vLocal_123 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (unk_0x191BE1BC8F26F3C1(iLocal_66[0], 0) || unk_0x191BE1BC8F26F3C1(iLocal_66[1], 0))
	{
		return 1;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_161())
	{
		return 1;
	}
	if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) && func_161())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_66[1]))
	{
		if (((unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_66[1], 1) - Vector(12f, 12f, 12f), unk_0xB3328BA8976B416C(iLocal_66[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502())) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_66[0], 1), 3f, 1)) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_66[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_67[iVar0]))
		{
			if (unk_0xEBE499597C718EB8(iLocal_67[iVar0], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_68[iVar0]))
		{
			if (unk_0xEBE499597C718EB8(iLocal_68[iVar0], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_164(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBC1F
{
	func_126(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_117(sParam2, iParam4, 0);
}

int func_165()//Position - 0xBC73
{
	if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -823,1281f, -187,9591f, 36,6189f, 4f, 4f, 4f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1201,017f, -777,5527f, 16,3398f, 4f, 4f, 4f, false, true, 0))
	{
		unk_0x4FB260623DD93924(0, 22, 1);
		unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
		unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), false, 1, 0);
		return 1;
	}
	return 0;
}

void func_166()//Position - 0xBCDF
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[1]))
	{
		if (unk_0x6668BA66B78B4E7C(iLocal_67[1]))
		{
			func_167(iLocal_67[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_167(iLocal_67[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		unk_0x0F5CA7E22DF79A5F(iLocal_67[1], 26, 0f, 0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[1]))
	{
		func_167(iLocal_68[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		unk_0x0F5CA7E22DF79A5F(iLocal_68[1], 3, 0f, 0);
	}
}

void func_167(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xBD5F
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_168(iParam3), 0);
}

int func_168(int iParam0)//Position - 0xBD78
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

void func_169()//Position - 0xBF6D
{
	int iVar0;
	
	unk_0xC1CEF375B44856F4(0);
	unk_0x4DE114E3C7F8B7C2("ROBBERS", &iLocal_119);
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		iLocal_66[iVar0] = unk_0xAC992EFAD62C33BF(26, iLocal_141, vLocal_51[iVar0 /*3*/], fLocal_52[iVar0], 1, true);
		unk_0x771A86309E0CA47B(iLocal_66[iVar0], true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_66[iVar0], iLocal_119);
		unk_0xAE6EBBBBD8B9FB30(iLocal_66[iVar0], 8, false);
		unk_0x2C8C730E9565B998(iLocal_66[iVar0], 0);
		unk_0xBB3CC641B6AED5E5(iLocal_66[iVar0], 13);
		unk_0x9E058151726E58DE(iLocal_66[iVar0], joaat("weapon_pistol"), -1, true, true);
		unk_0xE0F761CE722765C1(iLocal_66[iVar0], 1, 0);
		unk_0xAE01EF4BC84AFE7C(iLocal_66[iVar0], 42, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_66[iVar0], 269, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_66[iVar0], 188, true);
		unk_0xB89BC60EFF7F2571(iLocal_66[iVar0], 0);
		unk_0xE17958D3FD0F9EE9(iLocal_66[iVar0], 128, true);
		unk_0xE17958D3FD0F9EE9(iLocal_66[iVar0], 8, true);
		iVar0++;
	}
	unk_0x296D39391436DC64(iLocal_66[0], "pedRobber[0]");
	unk_0x296D39391436DC64(iLocal_66[1], "pedRobber[1]");
	unk_0xF96119FCCD4D1889(5, iLocal_119, 1862763509);
	unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_119);
	unk_0xF96119FCCD4D1889(5, iLocal_119, -1533126372);
	unk_0xF96119FCCD4D1889(5, -1533126372, iLocal_119);
	if (func_43() == 0)
	{
		func_174(&uLocal_151, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (func_43() == 1)
	{
		func_174(&uLocal_151, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	else if (func_43() == 2)
	{
		func_174(&uLocal_151, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	iLocal_102 = unk_0x5E35CF35E65D69B9(iLocal_117, vLocal_57, true, true, false);
	if (iLocal_47 == 1)
	{
		unk_0xCB389937EDB1519A(vLocal_71 - Vector(20f, 20f, 20f), vLocal_71 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x2E4932E63763FE26(joaat("baller"), true);
		iLocal_103[0] = unk_0x5E35CF35E65D69B9(joaat("prop_anim_cash_pile_01"), vLocal_57, true, true, false);
		iLocal_103[1] = unk_0x5E35CF35E65D69B9(joaat("prop_anim_cash_pile_01"), vLocal_57 - Vector(0,1f, 0f, 0f), true, true, false);
		unk_0x350CEE66BDF90273(iLocal_66[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		unk_0x350CEE66BDF90273(iLocal_66[1], "G_M_Y_Korean_01_Korean_MINI_02");
		vLocal_126 = { -821,565f, -186,467f, 36,6f };
		vLocal_128 = { 0f, 0f, -59,96f };
		iLocal_135 = unk_0x8383F9C605E523B7(vLocal_126, vLocal_128, 2);
		unk_0xD0E12C501EE26329(iLocal_135, true);
		unk_0x8E628F774C748D93(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0xEBB74134CCA3442E(iLocal_102, iLocal_135, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 8f, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			iLocal_67[iVar0] = unk_0xAC992EFAD62C33BF(26, iLocal_138, vLocal_53[iVar0 /*3*/], fLocal_54[iVar0], 1, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_67[iVar0], 17, true);
			unk_0x771A86309E0CA47B(iLocal_67[iVar0], true);
			unk_0x5C5D33A1B2711D21(iLocal_67[iVar0], false);
			unk_0xAE01EF4BC84AFE7C(iLocal_67[iVar0], 269, true);
			iVar0++;
		}
		unk_0x296D39391436DC64(iLocal_67[0], "pedWorker[0]");
		unk_0x296D39391436DC64(iLocal_67[1], "pedWorker[1]");
		unk_0x296D39391436DC64(iLocal_67[2], "pedWorker[2]");
		iLocal_68[0] = unk_0xAC992EFAD62C33BF(26, iLocal_139, vLocal_55[0 /*3*/], fLocal_56[0], 1, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_68[0], 17, true);
		unk_0x771A86309E0CA47B(iLocal_68[0], true);
		unk_0x5C5D33A1B2711D21(iLocal_68[0], false);
		unk_0xAE01EF4BC84AFE7C(iLocal_68[0], 269, true);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_68[iVar0] = unk_0xAC992EFAD62C33BF(26, iLocal_140, vLocal_55[iVar0 /*3*/], fLocal_56[iVar0], 1, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_68[iVar0], 17, true);
			unk_0x771A86309E0CA47B(iLocal_68[iVar0], true);
			unk_0x5C5D33A1B2711D21(iLocal_68[iVar0], false);
			unk_0xAE01EF4BC84AFE7C(iLocal_68[iVar0], 269, true);
			iVar0++;
		}
		unk_0x296D39391436DC64(iLocal_68[0], "pedShopper[0]");
		unk_0x296D39391436DC64(iLocal_68[1], "pedShopper[1]");
		unk_0x296D39391436DC64(iLocal_68[2], "pedShopper[2]");
		unk_0x03924C68EFCBC511(iLocal_67[0], 0, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[0], 2, 1, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_67[0], 3, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[0], 4, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[0], 5, 0, 0, 0);
		unk_0x8E628F774C748D93(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0x350CEE66BDF90273(iLocal_67[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_174(&uLocal_151, 5, iLocal_67[0], "REROBShopworker", 0, 1);
		unk_0x03924C68EFCBC511(iLocal_67[1], 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[1], 2, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[1], 3, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[1], 4, 1, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_67[1], 5, 0, 0, 0);
		unk_0xF21E6EBE8EFDCC28(iLocal_67[1], -1);
		unk_0xE9B3D12A64CC7C1A(iLocal_67[1], true);
		unk_0x03924C68EFCBC511(iLocal_67[2], 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[2], 2, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_67[2], 3, 0, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_67[2], 4, 1, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_67[2], 5, 0, 0, 0);
		unk_0xF21E6EBE8EFDCC28(iLocal_67[2], -1);
		unk_0xE9B3D12A64CC7C1A(iLocal_67[2], true);
		iLocal_135 = unk_0x8383F9C605E523B7(-812,37f, -185,65f, 37,5804f, 0f, 0f, 30f, 2);
		unk_0xD0E12C501EE26329(iLocal_135, true);
		unk_0x03924C68EFCBC511(iLocal_68[0], 0, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[0], 2, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_68[0], 3, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[0], 4, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[0], 8, 0, 0, 0);
		unk_0x8E628F774C748D93(iLocal_68[0], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_68[0], true);
		iLocal_135 = unk_0x8383F9C605E523B7(-817,5606f, -190,8273f, 37,6114f, 0f, 0f, 25,8399f, 2);
		unk_0xD0E12C501EE26329(iLocal_135, true);
		unk_0x03924C68EFCBC511(iLocal_68[1], 0, 0, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_68[1], 2, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[1], 3, 1, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[1], 4, 1, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[1], 8, 0, 0, 0);
		unk_0x8E628F774C748D93(iLocal_68[1], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_68[1], true);
		iLocal_135 = unk_0x8383F9C605E523B7(-816,1862f, -182,897f, 37,68f, 0f, 0f, 30f, 2);
		unk_0xD0E12C501EE26329(iLocal_135, true);
		unk_0x03924C68EFCBC511(iLocal_68[2], 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_68[2], 2, 0, 2, 0);
		unk_0x03924C68EFCBC511(iLocal_68[2], 3, 0, 1, 0);
		unk_0x03924C68EFCBC511(iLocal_68[2], 4, 1, 0, 0);
		unk_0x03924C68EFCBC511(iLocal_68[2], 8, 0, 0, 0);
		unk_0x8E628F774C748D93(iLocal_68[2], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_68[2], true);
		unk_0x9627C22EF3C3F4D6(iLocal_66[0], iLocal_67[0], -1, 0);
		unk_0xBF98CCF1EA4B13E9(-871f, -246f, 0f, -798f, -163f, 50f, false, 1);
		unk_0x5A5C7C96638EAA3E("Hairdresser1");
		func_173(0, 1);
		func_172(0);
		system::wait(500);
		func_170(0, 0, 0);
	}
	else if (iLocal_47 == 2)
	{
		unk_0xCB389937EDB1519A(vLocal_72 - Vector(20f, 20f, 20f), vLocal_72 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x59AF3B40AE222194(iLocal_102, vLocal_58, 2, 1);
		iLocal_67[0] = unk_0xAC992EFAD62C33BF(26, iLocal_138, vLocal_53[0 /*3*/], fLocal_54[0], 1, true);
		unk_0x296D39391436DC64(iLocal_67[0], "pedWorker[0]");
		unk_0x350CEE66BDF90273(iLocal_67[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_174(&uLocal_151, 6, iLocal_67[0], "REROBShopworker2", 0, 1);
		iLocal_67[1] = unk_0xAC992EFAD62C33BF(26, iLocal_137, vLocal_53[1 /*3*/], fLocal_54[1], 1, true);
		unk_0x296D39391436DC64(iLocal_67[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			unk_0xAE6EBBBBD8B9FB30(iLocal_67[iVar0], 17, true);
			unk_0x771A86309E0CA47B(iLocal_67[iVar0], true);
			unk_0x5C5D33A1B2711D21(iLocal_67[iVar0], false);
			unk_0xAE01EF4BC84AFE7C(iLocal_67[iVar0], 269, true);
			iVar0++;
		}
		iLocal_68[0] = unk_0xAC992EFAD62C33BF(26, iLocal_139, vLocal_55[0 /*3*/], fLocal_56[0], 1, true);
		unk_0x296D39391436DC64(iLocal_68[0], "pedShopper[0]");
		iLocal_68[1] = unk_0xAC992EFAD62C33BF(26, iLocal_140, vLocal_55[1 /*3*/], fLocal_56[1], 1, true);
		unk_0x296D39391436DC64(iLocal_68[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_65 - 1))
		{
			unk_0xAE6EBBBBD8B9FB30(iLocal_68[iVar0], 17, true);
			unk_0x771A86309E0CA47B(iLocal_68[iVar0], true);
			unk_0x5C5D33A1B2711D21(iLocal_68[iVar0], false);
			unk_0xAE01EF4BC84AFE7C(iLocal_68[iVar0], 269, true);
			iVar0++;
		}
		unk_0x12C9D41D52A560D6(iLocal_67[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_67[0], true);
		unk_0x12C9D41D52A560D6(iLocal_67[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_67[1], true);
		unk_0xF21E6EBE8EFDCC28(iLocal_68[0], -1);
		unk_0xE9B3D12A64CC7C1A(iLocal_68[0], true);
		unk_0x12C9D41D52A560D6(iLocal_68[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_68[1], true);
		vLocal_126 = { -1192,01f, -768,929f, 16,358f };
		vLocal_128 = { 0f, 0f, -59,5f };
		iLocal_135 = unk_0x8383F9C605E523B7(vLocal_126, vLocal_128, 2);
		unk_0xD0E12C501EE26329(iLocal_135, true);
		unk_0x8E628F774C748D93(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x8E628F774C748D93(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0x12C9D41D52A560D6(iLocal_66[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0, 0, 0, 0);
		func_173(14, 1);
		func_172(14);
		system::wait(500);
		func_170(14, 0, 0);
	}
	func_174(&uLocal_151, 3, iLocal_66[0], "REROBRobber1", 0, 1);
	func_174(&uLocal_151, 4, iLocal_66[1], "REROBRobber2", 0, 1);
	unk_0x14776E43F90DD454(joaat("a_f_y_bevhills_02"));
	unk_0x14776E43F90DD454(joaat("a_m_y_bevhills_02"));
	unk_0x14776E43F90DD454(joaat("a_m_y_hipster_01"));
	unk_0x14776E43F90DD454(joaat("a_f_y_hipster_04"));
	unk_0x14776E43F90DD454(joaat("g_m_y_korean_01"));
}

void func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0xC9C0
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_171(iParam0, 0);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
	iVar1 = func_171(iParam0, 1);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
}

int func_171(int iParam0, int iParam1)//Position - 0xCA23
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_172(int iParam0)//Position - 0xCEA4
{
	func_10(iParam0, 9, 1);
}

void func_173(int iParam0, bool bParam1)//Position - 0xCEB5
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_41(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xCEF3
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

void func_175()//Position - 0xCF8E
{
	if (!iLocal_74)
	{
		iLocal_88 = unk_0xD3BB1A515B0A47F3(vLocal_51[0 /*3*/]);
		unk_0xFF9ADA7B95619F7E(iLocal_88);
		iLocal_74 = 1;
	}
}

void func_176()//Position - 0xCFB2
{
	unk_0x6FF834D85E2DD4C6(iLocal_138);
	unk_0x6FF834D85E2DD4C6(iLocal_139);
	unk_0x6FF834D85E2DD4C6(iLocal_140);
	unk_0x6FF834D85E2DD4C6(iLocal_141);
	unk_0x6FF834D85E2DD4C6(joaat("prop_anim_cash_pile_01"));
	unk_0x6FF834D85E2DD4C6(joaat("prop_cs_duffel_01"));
	unk_0x307EAE14C924E2E7("re_shoprobbery");
	unk_0x307EAE14C924E2E7("re_shoprobbery2");
	unk_0x6450931B826B49D9("random@robbery");
	unk_0x6450931B826B49D9("random@shop_robbery");
	unk_0xAAB7D68F04F8C8BA("RE51A_SHOP");
	if ((((((((((unk_0x9A0B2ED5055D3F0B(iLocal_138) && unk_0x9A0B2ED5055D3F0B(iLocal_139)) && unk_0x9A0B2ED5055D3F0B(iLocal_140)) && unk_0x9A0B2ED5055D3F0B(iLocal_141)) && unk_0x9A0B2ED5055D3F0B(joaat("prop_anim_cash_pile_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_duffel_01"))) && unk_0xC316B5E3E7ACF515("re_shoprobbery")) && unk_0xC316B5E3E7ACF515("re_shoprobbery2")) && unk_0x3A801AA34DD821BE("random@robbery")) && unk_0x3A801AA34DD821BE("random@shop_robbery")) && unk_0xAAB7D68F04F8C8BA("RE51A_SHOP"))
	{
		iLocal_49 = 1;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_138);
		unk_0x6FF834D85E2DD4C6(iLocal_139);
		unk_0x6FF834D85E2DD4C6(iLocal_140);
		unk_0x6FF834D85E2DD4C6(iLocal_141);
		unk_0x6FF834D85E2DD4C6(joaat("prop_anim_cash_pile_01"));
		unk_0x6FF834D85E2DD4C6(joaat("prop_cs_duffel_01"));
		unk_0x6450931B826B49D9("random@robbery");
		unk_0x6450931B826B49D9("random@shop_robbery");
		unk_0xAAB7D68F04F8C8BA("RE51A_SHOP");
	}
}

void func_177()//Position - 0xD0D7
{
	iLocal_80[0] = 0;
	iLocal_80[1] = 0;
	if (iLocal_47 == 1)
	{
		iLocal_138 = joaat("a_f_y_bevhills_02");
		iLocal_139 = joaat("a_m_y_bevhills_02");
		iLocal_140 = joaat("a_f_y_bevhills_02");
		iLocal_141 = joaat("g_m_y_korean_01");
		iLocal_63 = 2;
		iLocal_64 = 3;
		iLocal_65 = 3;
		vLocal_51[0 /*3*/] = { -821,4461f, -184,8474f, 37,5668f };
		fLocal_52[0] = 252,381f;
		vLocal_51[1 /*3*/] = { -819,4664f, -186,8146f, 36,5671f };
		fLocal_52[1] = -153,9562f;
		vLocal_53[0 /*3*/] = { -821,941f, -183,3325f, 36,5689f };
		fLocal_54[0] = 203,3684f;
		vLocal_53[1 /*3*/] = { -813,6672f, -185,5652f, 36,5689f };
		fLocal_54[1] = 90,1761f;
		vLocal_53[2 /*3*/] = { -816,1049f, -183,9966f, 36,5689f };
		fLocal_54[2] = 192,7338f;
		vLocal_55[0 /*3*/] = { -813,008f, -184,931f, 37,869f };
		fLocal_56[0] = 337,68f;
		vLocal_55[1 /*3*/] = { -817,5606f, -190,8273f, 37,3114f };
		fLocal_56[1] = 25,8399f;
		vLocal_55[2 /*3*/] = { -816,1862f, -182,897f, 37,6304f };
		fLocal_56[2] = 30f;
		vLocal_57 = { -822,2148f, -184,0822f, 37,7027f };
		vLocal_58 = { -1,8236f, 0,6172f, 75,8024f };
		vLocal_59 = { -808,5918f, -180,0378f, 36,5689f };
		iLocal_117 = joaat("prop_cs_duffel_01");
		iLocal_118 = 2000;
		vLocal_123 = { -822,8538f, -187,7645f, 36,5792f };
	}
	else if (iLocal_47 == 2)
	{
		iLocal_137 = joaat("a_m_y_hipster_01");
		iLocal_138 = joaat("a_f_y_hipster_04");
		iLocal_139 = joaat("a_m_y_hipster_01");
		iLocal_140 = joaat("a_f_y_hipster_04");
		iLocal_141 = joaat("g_m_y_strpunk_02");
		iLocal_63 = 2;
		iLocal_64 = 2;
		iLocal_65 = 2;
		vLocal_51[0 /*3*/] = { -1193,045f, -769,304f, 16,321f };
		fLocal_52[0] = -85,5f;
		vLocal_51[1 /*3*/] = { -1199,045f, -778,8358f, 16,3277f };
		fLocal_52[1] = 329,1899f;
		vLocal_53[0 /*3*/] = { -1193,802f, -766,8922f, 16,331f };
		fLocal_54[0] = 221,3152f;
		vLocal_53[1 /*3*/] = { -1193,85f, -771,4392f, 16,3227f };
		fLocal_54[1] = 247,1149f;
		vLocal_55[0 /*3*/] = { -1184,359f, -767,0463f, 16,3468f };
		fLocal_56[0] = 103,3015f;
		vLocal_55[1 /*3*/] = { -1185,932f, -770,624f, 16,344f };
		fLocal_56[1] = 43,215f;
		vLocal_57 = { -1192,968f, -767,0651f, 17,2968f };
		vLocal_58 = { 0f, 0f, -128,52f };
		vLocal_59 = { -1180,457f, -763,9163f, 16,3267f };
		iLocal_117 = joaat("prop_cs_duffel_01");
		iLocal_118 = 2000;
		vLocal_123 = { -1201,006f, -777,4955f, 16,3235f };
	}
	bLocal_50 = true;
}

int func_178()//Position - 0xD3B6
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_185())
	{
		return 1;
	}
	if (func_179(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_179(float fParam0, bool bParam1)//Position - 0xD43C
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
		if (func_45(func_43()))
		{
			iVar5 = func_66();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_180(iVar1, &Var0);
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

void func_180(int iParam0, var uParam1)//Position - 0xD4F3
{
	switch (iParam0)
	{
		case 0:
			func_181(uParam1, "Abigail1", func_183(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 1:
			func_181(uParam1, "Abigail2", func_183(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 2:
			func_181(uParam1, "Barry1", func_183(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 3:
			func_181(uParam1, "Barry2", func_183(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 4:
			func_181(uParam1, "Barry3", func_183(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 5:
			func_181(uParam1, "Barry3A", func_183(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 6:
			func_181(uParam1, "Barry3C", func_183(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 7:
			func_181(uParam1, "Barry4", func_183(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_182(iParam0), 0, 0);
			break;
		
		case 8:
			func_181(uParam1, "Dreyfuss1", func_183(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 9:
			func_181(uParam1, "Epsilon1", func_183(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 10:
			func_181(uParam1, "Epsilon2", func_183(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 11:
			func_181(uParam1, "Epsilon3", func_183(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 12:
			func_181(uParam1, "Epsilon4", func_183(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 13:
			func_181(uParam1, "Epsilon5", func_183(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 14:
			func_181(uParam1, "Epsilon6", func_183(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 15:
			func_181(uParam1, "Epsilon7", func_183(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 16:
			func_181(uParam1, "Epsilon8", func_183(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 17:
			func_181(uParam1, "Extreme1", func_183(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 18:
			func_181(uParam1, "Extreme2", func_183(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 19:
			func_181(uParam1, "Extreme3", func_183(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 20:
			func_181(uParam1, "Extreme4", func_183(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 21:
			func_181(uParam1, "Fanatic1", func_183(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_182(iParam0), 1, 0);
			break;
		
		case 22:
			func_181(uParam1, "Fanatic2", func_183(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_182(iParam0), 1, 0);
			break;
		
		case 23:
			func_181(uParam1, "Fanatic3", func_183(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_182(iParam0), 0, 1);
			break;
		
		case 24:
			func_181(uParam1, "Hao1", func_183(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_182(iParam0), 0, 1);
			break;
		
		case 25:
			func_181(uParam1, "Hunting1", func_183(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 26:
			func_181(uParam1, "Hunting2", func_183(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 27:
			func_181(uParam1, "Josh1", func_183(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 28:
			func_181(uParam1, "Josh2", func_183(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 29:
			func_181(uParam1, "Josh3", func_183(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 30:
			func_181(uParam1, "Josh4", func_183(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 31:
			func_181(uParam1, "Maude1", func_183(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 32:
			func_181(uParam1, "Minute1", func_183(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 33:
			func_181(uParam1, "Minute2", func_183(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 34:
			func_181(uParam1, "Minute3", func_183(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 35:
			func_181(uParam1, "MrsPhilips1", func_183(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 36:
			func_181(uParam1, "MrsPhilips2", func_183(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 37:
			func_181(uParam1, "Nigel1", func_183(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 38:
			func_181(uParam1, "Nigel1A", func_183(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 39:
			func_181(uParam1, "Nigel1B", func_183(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 40:
			func_181(uParam1, "Nigel1C", func_183(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 41:
			func_181(uParam1, "Nigel1D", func_183(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 42:
			func_181(uParam1, "Nigel2", func_183(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 43:
			func_181(uParam1, "Nigel3", func_183(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 44:
			func_181(uParam1, "Omega1", func_183(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 45:
			func_181(uParam1, "Omega2", func_183(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 46:
			func_181(uParam1, "Paparazzo1", func_183(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 47:
			func_181(uParam1, "Paparazzo2", func_183(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 48:
			func_181(uParam1, "Paparazzo3", func_183(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 49:
			func_181(uParam1, "Paparazzo3A", func_183(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 50:
			func_181(uParam1, "Paparazzo3B", func_183(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 51:
			func_181(uParam1, "Paparazzo4", func_183(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 52:
			func_181(uParam1, "Rampage1", func_183(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 54:
			func_181(uParam1, "Rampage3", func_183(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 55:
			func_181(uParam1, "Rampage4", func_183(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 56:
			func_181(uParam1, "Rampage5", func_183(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 53:
			func_181(uParam1, "Rampage2", func_183(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 57:
			func_181(uParam1, "TheLastOne", func_183(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 58:
			func_181(uParam1, "Tonya1", func_183(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 59:
			func_181(uParam1, "Tonya2", func_183(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 60:
			func_181(uParam1, "Tonya3", func_183(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 61:
			func_181(uParam1, "Tonya4", func_183(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 62:
			func_181(uParam1, "Tonya5", func_183(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_181(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xE73A
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

int func_182(int iParam0)//Position - 0xE7CB
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

struct<2> func_183(int iParam0)//Position - 0xEB11
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_184(iParam0) };
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

struct<2> func_184(int iParam0)//Position - 0xEB49
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

int func_185()//Position - 0xEF96
{
	if (func_188() && !func_189())
	{
		return 1;
	}
	if (func_187() && func_186())
	{
		return 1;
	}
	return 0;
}

bool func_186()//Position - 0xEFC8
{
	return Global_104273 > 0;
}

int func_187()//Position - 0xEFD6
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xEFEB
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_189()//Position - 0xF011
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

int func_190()//Position - 0xF02E
{
	if (!func_158(5))
	{
		return 1;
	}
	if (func_185())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_179(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0xF090
{
	if ((Global_104544 == func_70() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0)//Position - 0xF0BB
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_194(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_193();
}

void func_193()//Position - 0xF0F1
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

void func_194(int iParam0)//Position - 0xF12E
{
	Global_104544 = iParam0;
}

int func_195(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xF13C
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
		iParam1 = func_70();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_189())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_56(0))
		{
			return 0;
		}
		if (func_185())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_179(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam1))
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_221(func_43()) == 4 || func_221(func_43()) == 5)
			{
				return 0;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_220(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_218())
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
		if (!func_209(4))
		{
			return 0;
		}
		if (!func_158(5))
		{
			return 0;
		}
		if (func_208(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_208(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_222(30) && !func_208(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_207(iVar4))
				{
					if (func_197(iVar2))
					{
						if (!func_196(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_43() != iVar2)
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

bool func_196(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xF4D6
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_197(int iParam0)//Position - 0xF51D
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_198(iVar0);
}

int func_198(int iParam0)//Position - 0xF53E
{
	return func_199(iParam0, 1);
}

int func_199(int iParam0, int iParam1)//Position - 0xF54D
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_207(iParam0))
	{
		return 0;
	}
	func_200(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF5A0
{
	func_201(func_84(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_201(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF5BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_91(iParam1);
		iVar1 = func_89(iParam0);
		iVar2 = (func_89(iParam0) - func_89(iParam1));
		iVar3 = (func_91(iParam0) - func_91(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_83(iParam0) - func_83(iParam1));
		iVar6 = (func_204(iParam0) - func_204(iParam1));
		iVar7 = (func_203(iParam0) - func_203(iParam1));
	}
	else
	{
		iVar0 = func_91(iParam0);
		iVar1 = func_89(iParam1);
		iVar2 = (func_89(iParam1) - func_89(iParam0));
		iVar3 = (func_91(iParam1) - func_91(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_83(iParam1) - func_83(iParam0));
		iVar6 = (func_204(iParam1) - func_204(iParam0));
		iVar7 = (func_203(iParam1) - func_203(iParam0));
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
		iVar4 = (iVar4 + func_88(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_202(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_202(float fParam0, float fParam1, float fParam2)//Position - 0xF7BF
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

int func_203(int iParam0)//Position - 0xF801
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_204(int iParam0)//Position - 0xF814
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_205(int iParam0)//Position - 0xF827
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_206(int iParam0, int iParam1)//Position - 0xF839
{
	int iVar0;
	int iVar1;
	
	if (!func_207(iParam1) || !func_207(iParam0))
	{
		return 1;
	}
	iVar0 = func_89(iParam0);
	iVar1 = func_89(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
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
	iVar0 = func_83(iParam0);
	iVar1 = func_83(iParam1);
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
	return 0;
}

int func_207(int iParam0)//Position - 0xF945
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
	iVar0 = func_203(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_204(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_83(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_89(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_91(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_88(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, int iParam1)//Position - 0xFA21
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xFA44
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_43();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_216()) || func_124(8, -1)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_217()) || Global_25235) || func_216()) || func_124(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_216()) || func_124(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_216()) || func_124(8, -1)) || func_215()) || func_214()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_124(8, -1)) || func_212()) || func_211()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_124(8, -1) || func_215()) || func_214()) || func_211()) || func_210())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_217()) || Global_25235) || func_216()) || func_124(8, -1)) || func_214()) || func_213()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_217()) || func_214()) || Global_103602) || Global_25235) || func_216()) || Global_36993) || func_124(8, -1)) || func_213()) || func_211()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_217()) || Global_103602) || Global_25235) || func_216()) || func_124(8, -1)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
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

var func_210()//Position - 0x10162
{
	return Global_92872.f_1;
}

int func_211()//Position - 0x10170
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_212()//Position - 0x10196
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0x101B0
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

bool func_214()//Position - 0x101DA
{
	return Global_92885.f_316 > 0;
}

bool func_215()//Position - 0x101EB
{
	return Global_92885.f_315 > 0;
}

var func_216()//Position - 0x101FC
{
	return Global_1312854;
}

int func_217()//Position - 0x10208
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_218()//Position - 0x10224
{
	func_122();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)//Position - 0x1024C
{
	return func_206(func_84(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0x1025E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_43();
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

int func_221(int iParam0)//Position - 0x10342
{
	if (!func_45(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_222(int iParam0)//Position - 0x10366
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
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

int func_223()//Position - 0x103C4
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

int func_224()//Position - 0x10408
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

bool func_225(int iParam0)//Position - 0x104C3
{
	return func_11(iParam0, 0, 0);
}

bool func_226(int iParam0)//Position - 0x104D3
{
	return func_11(iParam0, 7, 1);
}

void func_227()//Position - 0x104E3
{
	int iVar0;
	
	if (iLocal_142)
	{
		func_128(0);
		unk_0xF4D9AAA3F4BCC684("RE51A_SHOP");
		unk_0x3CDDC4760DBA4651();
		unk_0xD855BC7E9D7EC87F(-871f, -246f, 0f, -798f, -163f, 50f, true);
		unk_0xD22D83D359390CC6("re_shoprobbery");
		unk_0xD22D83D359390CC6("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_63 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_66[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_66[iVar0]) && !unk_0x88DDBE9908752BF0(iLocal_66[iVar0], 0))
				{
					unk_0xFC5999E8B820470E(iLocal_66[iVar0], vLocal_59, 150f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_66[iVar0], true);
				}
				unk_0x486F346ADFE56674(&(iLocal_66[iVar0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_116[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_116[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_121))
		{
			unk_0xE30CF11C0EE14316(&iLocal_121);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_65 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_68[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_68[iVar0]))
				{
					unk_0xCFF0CD14B439821D(iLocal_68[iVar0], true, 1);
					unk_0x6931076730A4AC5D(&iLocal_87);
					if (iLocal_47 == 1)
					{
						unk_0x12C9D41D52A560D6(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_47 == 2)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_68[iVar0]);
						unk_0x380C1E7B7740D618(0, -1201,476f, -790,2733f, 15,5475f, 2f, -1, 0,25f, 0, 1193033728);
					}
					unk_0xFC5999E8B820470E(0, vLocal_59, 150f, -1, 0, 0);
					unk_0x1B16DD5C115FE009(iLocal_87);
					unk_0xAB30B1CF01A198C1(iLocal_68[iVar0], iLocal_87);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
					unk_0xE9B3D12A64CC7C1A(iLocal_68[iVar0], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_67[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_67[iVar0]))
				{
					unk_0xAE01EF4BC84AFE7C(iLocal_67[iVar0], 317, true);
					unk_0xCFF0CD14B439821D(iLocal_67[iVar0], true, 1);
					if (iVar0 == 0)
					{
						if (!iLocal_114)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_67[iVar0]);
							unk_0xFC5999E8B820470E(iLocal_67[iVar0], vLocal_59, 150f, -1, 0, 0);
						}
						else
						{
							unk_0x771A86309E0CA47B(iLocal_67[iVar0], false);
						}
					}
					else
					{
						unk_0x6931076730A4AC5D(&iLocal_87);
						if (iLocal_47 == 2)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_67[iVar0]);
							unk_0x380C1E7B7740D618(0, -1201,476f, -790,2733f, 15,5475f, 2f, -1, 0,25f, 0, 1193033728);
						}
						unk_0xFC5999E8B820470E(0, vLocal_59, 150f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_87);
						unk_0xAB30B1CF01A198C1(iLocal_67[iVar0], iLocal_87);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_87);
					}
					unk_0x771A86309E0CA47B(iLocal_67[iVar0], false);
					unk_0x5C5D33A1B2711D21(iLocal_67[iVar0], true);
				}
			}
			iVar0++;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_115))
		{
			unk_0x486F346ADFE56674(&iLocal_115);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_102))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_102))
			{
				unk_0x6B7C10B19928914F(iLocal_102, 1, true);
			}
			unk_0x3A703774620FDB42(&iLocal_102);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_106))
		{
			unk_0x5380482A432E314E(&iLocal_106);
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		unk_0x4255E93FCCDE108E(true);
		unk_0x9B47B379EE749C38(true);
		unk_0x94BD6F0436473406(1f);
		unk_0xC0EBC1452FCAB15C(5);
		unk_0xC1CEF375B44856F4(1);
		if (iLocal_47 == 1)
		{
			func_173(0, 0);
			func_170(0, 1, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_173(14, 0);
			func_170(14, 1, 0);
		}
	}
	func_228(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_228(int iParam0)//Position - 0x10835
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_191())
	{
		func_232(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_231(30000);
		StringCopy(&cVar0, func_230(Global_104544, 1), 64);
		if (func_69(Global_104544) > 0)
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
	func_229(&Global_25292);
	Global_104545 = 0;
	func_194(-1);
}

void func_229(var uParam0)//Position - 0x108EA
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

char* func_230(int iParam0, bool bParam1)//Position - 0x10927
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

void func_231(int iParam0)//Position - 0x10B70
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_232(int iParam0)//Position - 0x10B82
{
	func_233(iParam0, 0, func_238(iParam0));
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0x10B97
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_84();
	func_236(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_235(iParam0, &uVar0);
	Var1 = { func_234(&uVar0) };
}

struct<16> func_234(var uParam0)//Position - 0x10BC6
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_83(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_91(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_89(*uParam0), 64);
	return Var0;
}

void func_235(int iParam0, var uParam1)//Position - 0x10C97
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10CAF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_91(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_83(*uParam0);
	iVar4 = func_204(*uParam0);
	iVar5 = func_203(*uParam0);
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
	iVar6 = func_88(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_88(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_237(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10E31
{
	func_94(uParam0, iParam1);
	func_93(uParam0, iParam2);
	func_92(uParam0, iParam3);
	func_86(uParam0, iParam5);
	func_87(uParam0, iParam4);
	func_85(uParam0, iParam6);
}

int func_238(int iParam0)//Position - 0x10E69
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

void func_239()//Position - 0x1100C
{
	Global_14622 = 0;
	func_240();
}

void func_240()//Position - 0x1101C
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

Vector3 func_241()//Position - 0x11040
{
	float fVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_71, true);
		iLocal_70 = 1;
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_72, true) < fVar0)
		{
			fVar0 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_72, true);
			iLocal_70 = 2;
		}
		if (iLocal_70 == 1)
		{
			iLocal_73 = 1;
			iLocal_47 = 1;
			return vLocal_71;
		}
		else if (iLocal_70 == 2)
		{
			iLocal_73 = 2;
			iLocal_47 = 2;
			return vLocal_72;
		}
	}
	return 0f, 0f, 0f;
}

