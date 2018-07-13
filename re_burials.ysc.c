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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
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
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_18 = 3;
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
	vLocal_85 = { 154,92f, 6841,12f, 19,14f };
	iLocal_99 = 200;
	vLocal_113 = { -1161,199f, 934,5912f, 196,7591f };
	vLocal_114 = { -1034,6f, 4918,6f, 205,9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			if (unk_0xC816B63289F7A279(iLocal_51))
			{
				unk_0x88235B448509228B(iLocal_51);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_105)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			unk_0x48D75120C879E65E("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_60)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						func_144();
						switch (iLocal_47)
						{
							case 0:
								func_134();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) && !func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) && !func_126())
								{
									switch (iLocal_48)
									{
										case 0:
											func_125();
											if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_72, 50f, 35f, 50f, false, true, 0))
											{
												func_124();
											}
											if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_72, 80f, 65f, 50f, false, true, 0))
											{
												func_123();
											}
											if (!unk_0x191BE1BC8F26F3C1(iLocal_54, 0))
											{
												if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 281,9148f, 6816,345f, 4,3197f, 48,3924f, 6885,921f, 43,0037f, 226,5f, 0, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_122();
													if (unk_0xA6DECE14FC9A8C51(iLocal_88))
													{
														unk_0x9C27373CC69ECF87(iLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (unk_0xA6DECE14FC9A8C51(iLocal_87[iLocal_58]))
														{
															unk_0x9C27373CC69ECF87(iLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) || func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (unk_0xA6DECE14FC9A8C51(iLocal_88))
									{
										unk_0x9C27373CC69ECF87(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xA6DECE14FC9A8C51(iLocal_87[iLocal_58]))
										{
											unk_0x9C27373CC69ECF87(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_69 = 1;
									if (unk_0xA6DECE14FC9A8C51(iLocal_88))
									{
										unk_0x9C27373CC69ECF87(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xA6DECE14FC9A8C51(iLocal_87[iLocal_58]))
										{
											unk_0x9C27373CC69ECF87(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_111())
									{
										switch (iLocal_49)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												system::wait(0);
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												system::wait(0);
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										system::wait(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[iVar0]))
											{
												unk_0x0F5CA7E22DF79A5F(iLocal_52[iVar0], 5, 0f, 0);
												unk_0xD68E88A8E0BE8697(iLocal_52[iVar0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
												unk_0xE9B3D12A64CC7C1A(iLocal_52[iVar0], true);
												if (unk_0x6ADD12BF4D6D2587(iLocal_56))
												{
													if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
													{
														unk_0x6B7C10B19928914F(iLocal_56, 1, true);
													}
												}
												if (unk_0xA6DECE14FC9A8C51(iLocal_87[iVar0]))
												{
													unk_0xE30CF11C0EE14316(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_101();
								}
								if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_85, 100f, 100f, 100f, true, true, 0))
								{
									unk_0x94BD6F0436473406(1f);
									if (unk_0x6ADD12BF4D6D2587(iLocal_52[0]) && unk_0x6ADD12BF4D6D2587(iLocal_52[1]))
									{
										unk_0x486F346ADFE56674(&(iLocal_52[0]));
										unk_0x486F346ADFE56674(&(iLocal_52[1]));
									}
								}
								if (!unk_0x6ADD12BF4D6D2587(iLocal_53))
								{
									if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_113, 200f, 200f, 200f, true, true, 0))
									{
										unk_0x6FF834D85E2DD4C6(joaat("s_m_m_highsec_01"));
										unk_0x6FF834D85E2DD4C6(joaat("granger"));
										if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_highsec_01")) && unk_0x9A0B2ED5055D3F0B(joaat("granger")))
										{
											iLocal_55 = unk_0xEA60F3B426BB095B(joaat("granger"), -1155,043f, 942,9685f, 197,4921f, 161,1247f, true, true, false);
											unk_0xCFB385D0FF082808(iLocal_55, 200);
											unk_0x2BD1EBC57D746940(iLocal_55, 1,5f);
											iLocal_53 = unk_0x00D1A9572426E8DD(iLocal_55, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											unk_0x03924C68EFCBC511(iLocal_53, 0, 0, 2, 0);
											unk_0x03924C68EFCBC511(iLocal_53, 3, 0, 0, 0);
											unk_0x03924C68EFCBC511(iLocal_53, 4, 0, 0, 0);
											unk_0x9E058151726E58DE(iLocal_53, joaat("weapon_pistol"), -1, true, true);
											unk_0xCE93FCB8A8D8DF0B(iLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
								{
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										if (unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 1)
										{
											if (!iLocal_106)
											{
												func_81(0);
												func_104();
												system::wait(0);
												func_70(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_113, Global_22, true, true, 0) && unk_0x21B6FFFD04C9FF3A(iLocal_51, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0xC816B63289F7A279(iLocal_51))
										{
											if (unk_0xA6DECE14FC9A8C51(iLocal_111))
											{
												unk_0xE30CF11C0EE14316(&iLocal_111);
											}
											if (unk_0xA6DECE14FC9A8C51(iLocal_112))
											{
												unk_0xE30CF11C0EE14316(&iLocal_112);
											}
											if (func_69())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_113))
										{
											func_81(0);
											func_104();
											system::wait(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											system::wait(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x6ADD12BF4D6D2587(iLocal_56))
								{
									if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
										{
											if (unk_0xA5F6598E13F98E08(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial_stop") > 0,355f)
												{
													unk_0x6B7C10B19928914F(iLocal_56, 1, true);
												}
											}
											else
											{
												unk_0x6B7C10B19928914F(iLocal_56, 1, true);
											}
										}
									}
								}
								if (unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) || unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (unk_0xB8DE76287EDC4957(iLocal_54, 0))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
										{
											unk_0x6CFCAFBA031AB20A(iLocal_52[0]);
											if (unk_0x8EA8060A1C856203(iLocal_52[0], iLocal_54, -1, 0, false) || unk_0x8EA8060A1C856203(iLocal_52[0], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xB8E08BD5B184DF4E(iLocal_52[0]);
													if (unk_0x6ADD12BF4D6D2587(iLocal_56))
													{
														if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
														{
															unk_0x6B7C10B19928914F(iLocal_56, 1, true);
														}
													}
													unk_0x6931076730A4AC5D(&iLocal_59);
													unk_0xCB3D88C918AA637C(0);
													unk_0x28D62AF360997F32(0, unk_0x3F90543934DCD7E6(iLocal_54, -0,5f, 0,5f, 0f), unk_0xFC1458A37D98B502(), 3f, true, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
													unk_0x6F8C8278B7C06889(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0xD2C269DBF147B406(0, iLocal_54, unk_0xFC1458A37D98B502(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x1B16DD5C115FE009(iLocal_59);
													unk_0xAB30B1CF01A198C1(iLocal_52[0], iLocal_59);
													unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
													unk_0xE9B3D12A64CC7C1A(iLocal_52[0], true);
													unk_0xC7ED915AB706A5D8(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0x78F50AA8F955BEFC(iLocal_52[0], 242628503) == 1)
												{
													if (unk_0x2332DC2174507412(iLocal_52[0]) == 3)
													{
														if (!unk_0x21B6FFFD04C9FF3A(iLocal_52[0], unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x0C88267282FD588F(iLocal_52[0], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x486F346ADFE56674(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												unk_0xD7F5B2902EBBD04E(iLocal_52[0], unk_0xFC1458A37D98B502(), 0, 16);
												unk_0xE9B3D12A64CC7C1A(iLocal_52[0], true);
											}
										}
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
										{
											unk_0x6CFCAFBA031AB20A(iLocal_52[1]);
											if (unk_0x8EA8060A1C856203(iLocal_52[1], iLocal_54, -1, 0, false) || unk_0x8EA8060A1C856203(iLocal_52[1], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xB8E08BD5B184DF4E(iLocal_52[1]);
													unk_0x6931076730A4AC5D(&iLocal_59);
													unk_0xCB3D88C918AA637C(0);
													unk_0x28D62AF360997F32(0, unk_0x3F90543934DCD7E6(iLocal_54, -0,5f, 0,5f, 0f), unk_0xFC1458A37D98B502(), 3f, true, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
													unk_0x6F8C8278B7C06889(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0xD2C269DBF147B406(0, iLocal_54, unk_0xFC1458A37D98B502(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x1B16DD5C115FE009(iLocal_59);
													unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
													unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
													unk_0xE9B3D12A64CC7C1A(iLocal_52[1], true);
													unk_0xC7ED915AB706A5D8(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0x78F50AA8F955BEFC(iLocal_52[1], 242628503) == 1)
												{
													if (unk_0x2332DC2174507412(iLocal_52[1]) == 3)
													{
														if (!unk_0x21B6FFFD04C9FF3A(iLocal_52[1], unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x0C88267282FD588F(iLocal_52[1], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x486F346ADFE56674(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												unk_0xD7F5B2902EBBD04E(iLocal_52[1], unk_0xFC1458A37D98B502(), 0, 16);
												unk_0xE9B3D12A64CC7C1A(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
							{
								if (unk_0x0C88267282FD588F(iLocal_51, vLocal_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									system::wait(0);
									func_104();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_51))
							{
								unk_0x68433819717660CF(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								unk_0x8810DC630928B398("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									system::settimera(0);
									iLocal_84 = unk_0x53C562FD2B9E3AB0() + 8500;
									iLocal_68 = 1;
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
								{
									if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_51, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0x78F50AA8F955BEFC(iLocal_51, 1785177548) != 1 && unk_0x78F50AA8F955BEFC(iLocal_51, 1785177548) != 0)
									{
										unk_0x957CEE967C939968(iLocal_51);
										iLocal_303 = unk_0x8383F9C605E523B7(vLocal_72, -2f, -4f, 18f, 2);
										unk_0x8E628F774C748D93(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xEBB74134CCA3442E(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xEBB74134CCA3442E(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xD0E12C501EE26329(iLocal_303, true);
										unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
									}
									if (unk_0x6B4C37F2EEC636CC(iLocal_51))
									{
										unk_0x88BBDC49F550C0C7(iLocal_51, 1);
										unk_0xFDE119B1E19BF7DB(iLocal_51, 1);
										unk_0xE01CE1EBCD7EE551(iLocal_51, 0, 0);
									}
								}
								if ((unk_0x55ABE3023BD038CC(iLocal_51) || unk_0xC545C64D901C635F(iLocal_51)) || (iLocal_99 - unk_0xDE523AF6F7B269AB(iLocal_51)) >= 50)
								{
									unk_0x88BBDC49F550C0C7(iLocal_51, 1);
									unk_0xFDE119B1E19BF7DB(iLocal_51, 1);
									unk_0xE01CE1EBCD7EE551(iLocal_51, 0, 0);
								}
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
								{
									if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 5f)
									{
									}
									else if (unk_0x9A213A2345825783(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_51))
									{
										unk_0x88BBDC49F550C0C7(iLocal_51, 1);
										unk_0xFDE119B1E19BF7DB(iLocal_51, 1);
										unk_0xE01CE1EBCD7EE551(iLocal_51, 0, 0);
									}
								}
								if (!unk_0x191BE1BC8F26F3C1(iLocal_54, 0))
								{
									if (unk_0x9A213A2345825783(iLocal_54, iLocal_51))
									{
										unk_0x88BBDC49F550C0C7(iLocal_51, 1);
										unk_0xFDE119B1E19BF7DB(iLocal_51, 1);
										unk_0xE01CE1EBCD7EE551(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()//Position - 0xE95
{
	if (!bLocal_104)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_52[0]) && !unk_0x6ADD12BF4D6D2587(iLocal_52[1]))
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52[0]) && unk_0x6ADD12BF4D6D2587(iLocal_52[1]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				return 1;
			}
			if (unk_0xB81987085B8F391E(iLocal_52[0]) && unk_0xB81987085B8F391E(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52[0]) && !unk_0x6ADD12BF4D6D2587(iLocal_52[1]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52[1]) && !unk_0x6ADD12BF4D6D2587(iLocal_52[0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()//Position - 0xF70
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_87[0]))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_56))
			{
				if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
				{
					unk_0x6B7C10B19928914F(iLocal_56, 1, true);
				}
			}
			func_3(&uLocal_138, 4);
			unk_0xE30CF11C0EE14316(&(iLocal_87[0]));
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			unk_0xE30CF11C0EE14316(&(iLocal_87[1]));
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_51, 0))
		{
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_88))
		{
			func_3(&uLocal_138, 5);
			unk_0xE30CF11C0EE14316(&iLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)//Position - 0x100C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x1029
{
	unk_0x8810DC630928B398("RE6_END");
	func_206();
}

int func_5()//Position - 0x103D
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x1053
{
	if (Global_25469)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)//Position - 0x106B
{
	Global_104541 = iParam0;
}

void func_8(int iParam0)//Position - 0x1079
{
	Global_16767 = iParam0;
}

int func_9()//Position - 0x1086
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()//Position - 0x10A2
{
	return Global_25468;
}

void func_11()//Position - 0x10AD
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()//Position - 0x11D8
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x11FA
{
	while (!func_45())
	{
		system::wait(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()//Position - 0x12B2
{
	func_15();
}

int func_15()//Position - 0x12BF
{
	if (func_16(0))
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

bool func_16(bool bParam0)//Position - 0x130A
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_17(int iParam0, int iParam1)//Position - 0x1335
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_7(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)//Position - 0x1438
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()//Position - 0x1520
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
		func_21(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_20() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()//Position - 0x19E1
{
	return Global_25233;
}

int func_21(int iParam0, int iParam1)//Position - 0x19EC
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

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1A3D
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
		iParam2 = func_23();
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

int func_23()//Position - 0x1F04
{
	return Global_1312736;
}

int func_24(int iParam0, int iParam1)//Position - 0x1F10
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

int func_25(int iParam0)//Position - 0x2284
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

void func_26(int iParam0)//Position - 0x22B3
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x22F5
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2315
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
		func_29();
	}
}

void func_29()//Position - 0x24E7
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

int func_30()//Position - 0x2607
{
	func_31();
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

void func_31()//Position - 0x264D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_35(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_34(unk_0xFC1458A37D98B502());
			if (func_33(iVar0) && (!func_32(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_33(Global_104555.f_2353.f_539.f_4301))
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

bool func_32(int iParam0)//Position - 0x274A
{
	return Global_35861 == iParam0;
}

bool func_33(int iParam0)//Position - 0x2758
{
	return iParam0 < 3;
}

int func_34(int iParam0)//Position - 0x2764
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x27A1
{
	if (func_33(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x27CB
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

void func_37(int iParam0, int iParam1)//Position - 0x280E
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)//Position - 0x2829
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

int func_39()//Position - 0x28DA
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_40(Var0);
	return uVar1;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x28F7
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2AD1
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_104555.f_7658.f_911 == Var0)
		{
			Global_104555.f_7658.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 1);
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x872F1C1F8587CCC7(&(Var0.f_1), 10);
		}
		Global_104555.f_7658[Global_104555.f_7658.f_136 /*15*/] = { Var0 };
		Global_104555.f_7658.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xC80D31E4B587871C(iParam2, iVar1))
			{
				func_42(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)//Position - 0x2C51
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_136)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104555.f_7658[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104555.f_7658[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104555.f_7658.f_764)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104555.f_7658.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104555.f_7658.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)//Position - 0x2D15
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_44()//Position - 0x2D7F
{
	func_31();
	return Global_104555.f_2353.f_539.f_4301;
}

int func_45()//Position - 0x2D98
{
	return 1;
}

void func_46()//Position - 0x2DA1
{
	switch (iLocal_110)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_51) && unk_0xB8DE76287EDC4957(iLocal_55, 0))
			{
				if (unk_0xC816B63289F7A279(iLocal_51))
				{
					unk_0x88235B448509228B(iLocal_51);
				}
				unk_0x771A86309E0CA47B(iLocal_51, false);
				unk_0x5C5D33A1B2711D21(iLocal_51, true);
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 5000, 2048, 2);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x6F8C8278B7C06889(0, iLocal_55, -1, 0, 1f, 1, 0);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_51, iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0xB8DE76287EDC4957(iLocal_55, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
					{
						unk_0x96247F0EC873C446(iLocal_53, iLocal_54, 10f, 786599);
						unk_0xE9B3D12A64CC7C1A(iLocal_53, true);
					}
					unk_0xC7ED915AB706A5D8(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			system::settimera(0);
			func_13();
			break;
	}
}

void func_47()//Position - 0x2EE9
{
	switch (iLocal_110)
	{
		case 0:
			unk_0xF96119FCCD4D1889(255, iLocal_137, 1862763509);
			unk_0xF96119FCCD4D1889(255, 1862763509, iLocal_137);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), 5f, 2, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_51) && unk_0xB8DE76287EDC4957(iLocal_55, 0))
				{
					if (unk_0xC816B63289F7A279(iLocal_51))
					{
						unk_0x88235B448509228B(iLocal_51);
					}
					unk_0x771A86309E0CA47B(iLocal_51, false);
					unk_0x5C5D33A1B2711D21(iLocal_51, true);
					unk_0x6931076730A4AC5D(&iLocal_59);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 5000, 2048, 2);
					unk_0x6F8C8278B7C06889(0, iLocal_55, -1, 0, 1f, 1, 0);
					unk_0x1B16DD5C115FE009(iLocal_59);
					unk_0xAB30B1CF01A198C1(iLocal_51, iLocal_59);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
					unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
					func_104();
					system::wait(0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			system::wait(2700);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
				{
					if (!unk_0x178CF89BBA808451(unk_0xC733212BF9066BDF(), 1))
					{
						if (unk_0x8212F63113683BF7(unk_0xC733212BF9066BDF(), 1) > 0,1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (unk_0xB8DE76287EDC4957(iLocal_55, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
					{
						unk_0x96247F0EC873C446(iLocal_53, iLocal_55, 10f, 786599);
						unk_0xE9B3D12A64CC7C1A(iLocal_53, true);
					}
					unk_0xC7ED915AB706A5D8(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)//Position - 0x30DA
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

int func_49()//Position - 0x31BF
{
	if (func_44() == 2)
	{
		if (func_10())
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

int func_50(vector3 vParam0)//Position - 0x323A
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25471)
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

void func_51()//Position - 0x32C7
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0xB42437AE1AC08FDC(iLocal_51, 1, 1);
			unk_0xCB3D88C918AA637C(iLocal_51);
		}
		if (func_55("REBU2_LV2_9") || iLocal_66 > 1)
		{
			unk_0xB42437AE1AC08FDC(iLocal_51, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_70(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = unk_0x53C562FD2B9E3AB0() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < unk_0x53C562FD2B9E3AB0())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = unk_0x53C562FD2B9E3AB0() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < unk_0x53C562FD2B9E3AB0())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = unk_0x53C562FD2B9E3AB0() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < unk_0x53C562FD2B9E3AB0())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = unk_0x53C562FD2B9E3AB0() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_52()//Position - 0x384D
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)//Position - 0x38E0
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()//Position - 0x3908
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_55(char* sParam0)//Position - 0x392C
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()//Position - 0x3954
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

void func_57()//Position - 0x399A
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 1) && unk_0xA8D0477084E86A92(iLocal_51, unk_0xC733212BF9066BDF(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						system::wait(0);
						func_70(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0) && unk_0xA8D0477084E86A92(iLocal_51, unk_0xC733212BF9066BDF(), 0))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
			{
				func_81(0);
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				func_81(0);
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_58()//Position - 0x3ACD
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (!func_61())
			{
				if (unk_0xC816B63289F7A279(iLocal_51))
				{
					unk_0x88235B448509228B(iLocal_51);
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_51, 1227113341) != 1 && unk_0x78F50AA8F955BEFC(iLocal_51, 1227113341) != 0)
				{
					unk_0x4C7AF3B2BE8C3193(iLocal_51, unk_0xFC1458A37D98B502(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x88DDBE9908752BF0(iLocal_51, 0))
				{
					unk_0x16416C5B54FDBCBB(iLocal_51, 0, 4194304);
				}
				if (!iLocal_106)
				{
					func_81(0);
					func_104();
					system::wait(0);
					iLocal_106 = 1;
					if (!func_60())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((unk_0x78F50AA8F955BEFC(iLocal_51, 1227113341) == 1 || unk_0x78F50AA8F955BEFC(iLocal_51, 1227113341) == 0) || unk_0x78F50AA8F955BEFC(iLocal_51, 242628503) == 1) || unk_0x78F50AA8F955BEFC(iLocal_51, 242628503) == 0)
				{
					unk_0xB8E08BD5B184DF4E(iLocal_51);
				}
			}
		}
		else if (((!unk_0xC816B63289F7A279(iLocal_51) && !unk_0x88DDBE9908752BF0(iLocal_51, 0)) && unk_0x78F50AA8F955BEFC(iLocal_51, 242628503) != 1) && unk_0x78F50AA8F955BEFC(iLocal_51, 242628503) != 0)
		{
			unk_0x57FB41CABA25835C(iLocal_51, func_59());
			unk_0xA7C52BDFAE69B37F(iLocal_51, 1);
			unk_0xF6A83791895D5AA1(iLocal_51, 0);
		}
	}
}

int func_59()//Position - 0x3C41
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_60()//Position - 0x3C51
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

int func_61()//Position - 0x3CBC
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (((((!unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) && !unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502())) && !unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502())) && !unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502())) && !unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rhino")))
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
			if ((((!unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())))) && unk_0x82FF3DFBC3965CC0(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()//Position - 0x3DDE
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (unk_0xEA8E0258C31BCDE7(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0x53C562FD2B9E3AB0();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			if (unk_0xC816B63289F7A279(iLocal_51))
			{
				unk_0x88235B448509228B(iLocal_51);
				if (unk_0x0C88267282FD588F(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x380C1E7B7740D618(iLocal_51, 1740,797f, 4648,756f, 42,6529f, 1f, -1, 0,25f, 0, 1193033728);
					unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
				}
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()//Position - 0x3EA3
{
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0x53C562FD2B9E3AB0();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			if (unk_0xC816B63289F7A279(iLocal_51))
			{
				unk_0x88235B448509228B(iLocal_51);
				if (unk_0x0C88267282FD588F(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x380C1E7B7740D618(iLocal_51, vLocal_113, 1f, -1, 0,25f, 0, 1193033728);
					unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
				}
				else
				{
					unk_0x16416C5B54FDBCBB(iLocal_51, 0, 4194304);
				}
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()//Position - 0x3F63
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_51, 8f, 8f, 8f, 0, 1, 0) || unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
		{
			if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0xA8D0477084E86A92(iLocal_51, unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && !unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
				{
					iLocal_88 = func_67(iLocal_51, 0, 145);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_111))
				{
					unk_0xE30CF11C0EE14316(&iLocal_111);
				}
			}
			else
			{
				if (!unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_88))
					{
						unk_0xE30CF11C0EE14316(&iLocal_88);
					}
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_111))
				{
					iLocal_111 = func_65(vLocal_113, 1);
				}
			}
		}
		else if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
		if (!unk_0xC816B63289F7A279(iLocal_51))
		{
			if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_51, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_51);
				unk_0x57FB41CABA25835C(iLocal_51, func_59());
				unk_0xA7C52BDFAE69B37F(iLocal_51, 1);
				unk_0xF6A83791895D5AA1(iLocal_51, 0);
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_51);
				unk_0x57FB41CABA25835C(iLocal_51, func_59());
				unk_0xA7C52BDFAE69B37F(iLocal_51, 1);
				unk_0xF6A83791895D5AA1(iLocal_51, 0);
			}
		}
		if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_51, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)//Position - 0x40D8
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)//Position - 0x4104
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x411B
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x416D
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_69()//Position - 0x4211
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iLocal_129 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0xB8DE76287EDC4957(iLocal_129, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
			{
				if (unk_0xAAA8D20859E2D36D(iLocal_51, iLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4254
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)//Position - 0x42A2
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
					func_79();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_77();
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
				func_76();
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
				if (func_75())
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
			if (func_74())
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
			func_73();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_72();
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
		func_79();
	}
	return 0;
}

void func_72()//Position - 0x456E
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

void func_73()//Position - 0x459E
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

int func_74()//Position - 0x4633
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x465A
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

void func_76()//Position - 0x46F3
{
	if (func_32(14))
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
		Global_14453 = func_44();
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

void func_77()//Position - 0x4795
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

bool func_78(int iParam0, int iParam1)//Position - 0x47EB
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

void func_79()//Position - 0x4826
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

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x487D
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

void func_81(bool bParam0)//Position - 0x48D3
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0xAB019B170BF1309C(&Local_121))
			{
				if (func_84(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_52())
	{
		Local_121 = { func_54() };
		Local_120 = { func_56() };
		func_82();
		iLocal_119 = 1;
	}
}

void func_82()//Position - 0x493F
{
	Global_14622 = 0;
	func_83();
}

void func_83()//Position - 0x494F
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

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4973
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_71(sParam2, iParam4, 0);
}

void func_85()//Position - 0x49C7
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_51))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			unk_0x2217C45231E6A537(iLocal_51, 394, true);
		}
		if (unk_0xEBE499597C718EB8(iLocal_51, unk_0xFC1458A37D98B502(), 1))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
			{
				unk_0xD68E88A8E0BE8697(iLocal_51, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
			{
				unk_0xF96119FCCD4D1889(5, iLocal_137, 1862763509);
				unk_0xD7F5B2902EBBD04E(iLocal_53, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_53, true);
			}
			func_104();
			system::wait(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_53))
		{
			if (unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
				{
					unk_0xD68E88A8E0BE8697(iLocal_51, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
				{
					unk_0xF96119FCCD4D1889(5, iLocal_137, 1862763509);
					unk_0xD7F5B2902EBBD04E(iLocal_53, unk_0xFC1458A37D98B502(), 0, 16);
					unk_0xE9B3D12A64CC7C1A(iLocal_53, true);
				}
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 1)
		{
			unk_0xD68E88A8E0BE8697(iLocal_51, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
			func_104();
			system::wait(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_86()//Position - 0x4B40
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_51, 1,2f, 1,2f, 5f, 0, 1, 0) && unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502())) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_93(1, 1, 1, 0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 24);
					unk_0x3E80C2F7BC665259(1);
					unk_0x4255E93FCCDE108E(false);
					unk_0x9B47B379EE749C38(false);
					unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), true);
					if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
					{
						unk_0xDD29FF4BAB8AFF9C(unk_0xC733212BF9066BDF(), true, 0);
						if (unk_0x6B4C37F2EEC636CC(unk_0xC733212BF9066BDF()))
						{
							func_92(unk_0xC733212BF9066BDF());
							unk_0xB38E13EF2EC6F0E9(unk_0xC733212BF9066BDF(), 200f);
						}
						if (unk_0x21B6FFFD04C9FF3A(unk_0xC733212BF9066BDF(), iLocal_51, 5f, 5f, 5f, 0, 1, 0) || unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), vLocal_74, 5f, 5f, 5f, false, true, 0))
						{
							unk_0xBD8D47FDC6902B2D(unk_0xC733212BF9066BDF(), unk_0xB3328BA8976B416C(iLocal_51, 1) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
							{
								unk_0xACE486395AA1867D(unk_0xC733212BF9066BDF(), 1084227584);
							}
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_54))
					{
						if (unk_0x6B4C37F2EEC636CC(iLocal_54))
						{
							func_92(iLocal_54);
							unk_0xB38E13EF2EC6F0E9(iLocal_54, 200f);
						}
						if (unk_0x21B6FFFD04C9FF3A(iLocal_54, iLocal_51, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_54, vLocal_74, 0, false, 0, 1);
							if (!unk_0x191BE1BC8F26F3C1(iLocal_54, 0))
							{
								unk_0xACE486395AA1867D(iLocal_54, 1084227584);
							}
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
					{
						iLocal_129 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(iLocal_51, 1), 5f, 0, 2);
						if (!unk_0x191BE1BC8F26F3C1(iLocal_129, 0))
						{
							if (unk_0x6B4C37F2EEC636CC(iLocal_129))
							{
								func_92(iLocal_129);
								unk_0xB38E13EF2EC6F0E9(iLocal_129, 200f);
							}
							unk_0xBD8D47FDC6902B2D(iLocal_129, unk_0xB3328BA8976B416C(iLocal_51, 1) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					unk_0x49779D62887BC4A2(vLocal_72, 10f);
					unk_0xA896149A4DE38DEA(vLocal_72, 10f, 0);
					unk_0x9B8406983378711E(vLocal_72, 4,5f, 0, 0, 0, 0, false, 0);
					unk_0xBD8D47FDC6902B2D(iLocal_51, vLocal_72, 1, false, 0, 1);
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_72, 1, false, 0, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_52[iVar0]))
						{
							if (unk_0x0C88267282FD588F(iLocal_52[iVar0], unk_0xB3328BA8976B416C(iLocal_51, 0), 1,5f, 1,5f, 1,5f, false, true, 0))
							{
								unk_0x68433819717660CF(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
					{
						iLocal_303 = unk_0x8383F9C605E523B7(163,449f, 6839,993f, 18,88f, 0f, 0f, 0f, 2);
						iLocal_71 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xEFF56C7BDABBF39B(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 162,6699f, 6839,238f, 18,8314f, 0, false, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 18,2311f);
						unk_0xE01CE1EBCD7EE551(iLocal_51, 200, 0);
						unk_0x88BBDC49F550C0C7(iLocal_51, 0);
						unk_0xFDE119B1E19BF7DB(iLocal_51, 0);
						unk_0x957CEE967C939968(iLocal_51);
						unk_0x8E628F774C748D93(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x9A0C1F836B24E46E(iLocal_51, 0, 0);
						unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
						unk_0xEBB74134CCA3442E(iLocal_57[0], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xEBB74134CCA3442E(iLocal_57[1], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x7849794435F39D49(iLocal_71, true);
						unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
						iLocal_94 = unk_0x53C562FD2B9E3AB0();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0x36853D5037847BF3();
		if (unk_0xD56F740235B1E8F0(iLocal_303))
		{
			if ((unk_0x463C4747B41E35A3(iLocal_303) > 0,115f && unk_0x463C4747B41E35A3(iLocal_303) < 0,12f) || (unk_0x463C4747B41E35A3(iLocal_303) > 0,355f && unk_0x463C4747B41E35A3(iLocal_303) < 0,36f))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (unk_0x463C4747B41E35A3(iLocal_303) > 0,6f)
			{
				if (!iLocal_90)
				{
					func_104();
					system::wait(0);
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = unk_0x53C562FD2B9E3AB0();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && unk_0x1FB367C588A91451() == 4)
		{
			unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			unk_0xAE83ED4C9081AE6F(800);
			while (unk_0x2D0EF1D268F33F25())
			{
				system::wait(0);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0x4255E93FCCDE108E(true);
		unk_0x9B47B379EE749C38(true);
		unk_0x0ADADE14A7CF26EF(iLocal_303, 1f);
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
		unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 162,5284f, 6839,658f, 18,8198f, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 256,7693f);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			unk_0x957CEE967C939968(iLocal_51);
			unk_0x9A0C1F836B24E46E(iLocal_51, 0, 0);
			unk_0x5718F894FDA63A9E(iLocal_51, 1);
			unk_0xBD8D47FDC6902B2D(iLocal_51, 164,4963f, 6839,333f, 18,9657f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(iLocal_51, 73,449f);
		}
		unk_0xBB9A3C553EECB180(26,1578f);
		unk_0x7C9705890EF6612E(-8,1198f, 1065353216);
		unk_0x7849794435F39D49(iLocal_71, false);
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x02934BABFD4CD384(iLocal_71, 0);
		unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
		if (bLocal_92)
		{
			unk_0x59C3AC31C7544A28(800);
			while (unk_0x9BB64DDCD9C7B076())
			{
				system::wait(0);
			}
		}
		bLocal_96 = true;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xF96119FCCD4D1889(1, iLocal_137, 1862763509);
					unk_0xF96119FCCD4D1889(1, 1862763509, iLocal_137);
					unk_0x6931076730A4AC5D(&iLocal_59);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 4000);
					if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_51, unk_0xC733212BF9066BDF(), 20f, 20f, 20f, 0, 1, 0) && unk_0x95EC8AE7E4F33F6E(unk_0xC733212BF9066BDF()) > 0)
						{
							unk_0x6F8C8278B7C06889(0, unk_0xC733212BF9066BDF(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0xC816B63289F7A279(iLocal_51))
						{
							unk_0x57FB41CABA25835C(iLocal_51, func_59());
							unk_0xA7C52BDFAE69B37F(iLocal_51, 1);
							unk_0xF6A83791895D5AA1(iLocal_51, 0);
						}
					}
					else if (!unk_0xC816B63289F7A279(iLocal_51))
					{
						unk_0x57FB41CABA25835C(iLocal_51, func_59());
						unk_0xA7C52BDFAE69B37F(iLocal_51, 1);
						unk_0xF6A83791895D5AA1(iLocal_51, 0);
					}
					unk_0x1B16DD5C115FE009(iLocal_59);
					unk_0xAB30B1CF01A198C1(iLocal_51, iLocal_59);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
					if (unk_0xA6DECE14FC9A8C51(iLocal_88))
					{
						unk_0xE30CF11C0EE14316(&iLocal_88);
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_111))
					{
						iLocal_111 = func_65(vLocal_113, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_112))
						{
							iLocal_112 = func_65(vLocal_114, 0);
							unk_0x4B4040A0EC7DBA81(iLocal_112, 269);
							func_88();
						}
					}
					func_87();
					iLocal_105 = 1;
					iLocal_95 = 1;
					system::settimera(0);
					unk_0x2EB451A3616DA1F8(-133,841f, -38,5734f, -100f, -126,2403f, -29,194f, 100f, 0);
					unk_0x4C15495E88D71C61(-133,841f, -38,5734f, -100f, -126,2403f, -29,194f, 100f, false, 1);
					func_93(0, 1, 1, 0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 4);
					unk_0x2B0DDE3D071497AD(unk_0xFC1458A37D98B502());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_87()//Position - 0x5327
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25468 = 1;
		}
	}
}

void func_88()//Position - 0x5343
{
	if (func_44() == 2)
	{
		if (!Global_25470)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)//Position - 0x5367
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_90(int iParam0)//Position - 0x537E
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
			if (func_91())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x53C8
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

void func_92(int iParam0)//Position - 0x53FA
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0x6B4C37F2EEC636CC(iParam0))
			{
				unk_0x102FB2F64757EA51(iParam0);
				unk_0xE01CE1EBCD7EE551(iParam0, unk_0xDE523AF6F7B269AB(iParam0) + 200, 0);
				unk_0xB38E13EF2EC6F0E9(iParam0, (unk_0xA7B0253B80B52B2B(iParam0) + 200f));
				unk_0xC7C8A97B94385008(iParam0, (unk_0x32DFD9C17763ABE0(iParam0) + 200f));
				unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(iParam0, 1), 5f);
				unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(iParam0, 1), 2,5f, 1, 0, 0, false);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5478
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_100(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_74())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_100(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_97(unk_0x9EB17624F44A8DA4())) && !func_95(unk_0x9EB17624F44A8DA4(), 0)) && !func_94())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_97(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_94()//Position - 0x5591
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_95(int iParam0, int iParam1)//Position - 0x55AE
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)//Position - 0x55F9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_97(int iParam0)//Position - 0x563A
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()//Position - 0x567C
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_99(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x568D
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

void func_100(int iParam0)//Position - 0x56C0
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

void func_101()//Position - 0x56E3
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_51, 0))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)//Position - 0x57EA
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)//Position - 0x5801
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

void func_104()//Position - 0x59F6
{
	Global_14622 = 0;
	func_105();
}

void func_105()//Position - 0x5A06
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_106()//Position - 0x5A27
{
	if (!iLocal_61 && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (unk_0xB8DE76287EDC4957(iLocal_54, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
		{
			unk_0xD2C269DBF147B406(iLocal_52[0], iLocal_54, unk_0xFC1458A37D98B502(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0xE9B3D12A64CC7C1A(iLocal_52[0], true);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
		{
			unk_0x6F8C8278B7C06889(iLocal_52[1], iLocal_54, -1, 0, 3f, 1, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[iLocal_58]))
			{
				unk_0xD68E88A8E0BE8697(iLocal_52[iLocal_58], unk_0xFC1458A37D98B502(), 250f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	system::wait(0);
	func_4();
}

void func_107()//Position - 0x5B32
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
	{
		if (!unk_0x9479D23F28CA059C(iLocal_52[0]) && !unk_0x9479D23F28CA059C(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x08765A6321A42CA1(iLocal_52[1]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_52[1]);
					unk_0xDF28F1574E61F9EA(iLocal_52[1], unk_0xFC1458A37D98B502(), -1, -957453492);
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_108()//Position - 0x5BB2
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				iLocal_62 = 1;
			}
			if (unk_0xCA3C40448996C9BA(iLocal_52[1], unk_0xFC1458A37D98B502(), 90f))
			{
				func_104();
				system::wait(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
				{
					fVar0 = func_110(iLocal_52[0], unk_0xFC1458A37D98B502(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0,5f);
					}
					unk_0x6B7C10B19928914F(iLocal_56, 0, true);
					unk_0xA9D382E7BA095148(iLocal_56, iLocal_52[0], unk_0xDD09837E5235FE91(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xB8E08BD5B184DF4E(iLocal_52[0]);
					unk_0x6931076730A4AC5D(&iLocal_59);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0x12C9D41D52A560D6(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_59);
					unk_0xAB30B1CF01A198C1(iLocal_52[0], iLocal_59);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
					unk_0x385A213BEB355C2B(iLocal_52[1], joaat("weapon_sawnoffshotgun"), true);
					unk_0xB8E08BD5B184DF4E(iLocal_52[1]);
					unk_0x6931076730A4AC5D(&iLocal_59);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), -1, fVar0, 1f, 1073741824, 0);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x1B16DD5C115FE009(iLocal_59);
					unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_56))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial_stop") > 0,355f)
					{
						unk_0x6B7C10B19928914F(iLocal_56, 1, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0x2C85E478535743C1(0, unk_0xFC1458A37D98B502(), unk_0xFC1458A37D98B502(), 1f, 0, 3,5f, 1082130432, 1, 0, -957453492);
				unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 0);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				unk_0x8810DC630928B398("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9627C22EF3C3F4D6(iLocal_52[0], unk_0xFC1458A37D98B502(), -1, 0);
				}
				iLocal_126 = 1;
				system::settimerb(0);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (system::timerb() > 15000 && !func_12())
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xAC838A977FB6E6BC(iLocal_52[0], unk_0xFC1458A37D98B502(), 0);
					unk_0xAC838A977FB6E6BC(iLocal_52[1], unk_0xFC1458A37D98B502(), 0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0x4C7AF3B2BE8C3193(0, iLocal_52[1], -1, 2f, 1f, 1073741824, 0);
				unk_0xAC838A977FB6E6BC(0, iLocal_52[1], 0);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_52[0], iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0x4C7AF3B2BE8C3193(0, iLocal_52[0], -1, 2f, 1f, 1073741824, 0);
				unk_0xAC838A977FB6E6BC(0, iLocal_52[0], 0);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				system::settimerb(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_112();
		}
		if (((unk_0x46D8E79A1B95ACE2(iLocal_52[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_52[1], unk_0xFC1458A37D98B502())) || unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), iLocal_52[0])) || unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), iLocal_52[1]))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 3))
			{
				if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					if (!iLocal_70)
					{
						func_104();
						system::wait(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 3) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
			{
				if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					if (!iLocal_70)
					{
						func_104();
						system::wait(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				func_112();
			}
		}
	}
}

int func_109()//Position - 0x61A2
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, bool bParam2)//Position - 0x61C3
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

int func_111()//Position - 0x6221
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				if ((((unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rhino")) || unk_0x9CDE960577DADF0F(unk_0xFC1458A37D98B502())) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("annihilator"))) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("buzzard"))) || unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()//Position - 0x62A9
{
	func_11();
	unk_0x8810DC630928B398("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_52[0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
			{
				unk_0x2217C45231E6A537(iLocal_52[0], 156, true);
				if (unk_0x6ADD12BF4D6D2587(iLocal_56))
				{
					unk_0x6CFCAFBA031AB20A(iLocal_52[0]);
					if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0x6B7C10B19928914F(iLocal_56, 0, true);
							unk_0xA9D382E7BA095148(iLocal_56, iLocal_52[0], unk_0xDD09837E5235FE91(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xB8E08BD5B184DF4E(iLocal_52[0]);
							unk_0x6931076730A4AC5D(&iLocal_59);
							unk_0xCB3D88C918AA637C(0);
							unk_0x12C9D41D52A560D6(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(iLocal_59);
							unk_0xAB30B1CF01A198C1(iLocal_52[0], iLocal_59);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
							unk_0xE9B3D12A64CC7C1A(iLocal_52[0], true);
							unk_0x9A0C1F836B24E46E(iLocal_52[0], 0, 0);
							iLocal_115 = 1;
						}
					}
					else
					{
						unk_0x6931076730A4AC5D(&iLocal_59);
						unk_0xCB3D88C918AA637C(0);
						unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
						unk_0x1B16DD5C115FE009(iLocal_59);
						unk_0xAB30B1CF01A198C1(iLocal_52[0], iLocal_59);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
						unk_0xE9B3D12A64CC7C1A(iLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_56))
	{
		if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial_stop") > 0,355f)
					{
						unk_0x6B7C10B19928914F(iLocal_56, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_52[1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				unk_0x2217C45231E6A537(iLocal_52[1], 156, true);
				unk_0x6CFCAFBA031AB20A(iLocal_52[1]);
				unk_0x6931076730A4AC5D(&iLocal_59);
				unk_0xCB3D88C918AA637C(0);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 500);
				unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x1B16DD5C115FE009(iLocal_59);
				unk_0xAB30B1CF01A198C1(iLocal_52[1], iLocal_59);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_59);
				unk_0xE9B3D12A64CC7C1A(iLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0x53C562FD2B9E3AB0() + 8500;
		system::settimera(0);
		iLocal_47 = 7;
	}
}

int func_113(int iParam0)//Position - 0x64E1
{
	if (func_116())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_25(Global_104544))
		{
			func_114(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_25(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x6534
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)//Position - 0x6615
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

int func_116()//Position - 0x6657
{
	switch (func_117(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x668D
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)//Position - 0x67C4
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

bool func_119(int iParam0)//Position - 0x6813
{
	return func_120(iParam0, Global_35861);
}

int func_120(int iParam0, int iParam1)//Position - 0x6824
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

int func_121(int iParam0)//Position - 0x6A05
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()//Position - 0x6A27
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_123))
	{
		unk_0xE30CF11C0EE14316(&iLocal_123);
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_51, 0))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_87[iLocal_58]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_52[iLocal_58], 0))
			{
				iLocal_87[iLocal_58] = func_67(iLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_123()//Position - 0x6AA0
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x53C562FD2B9E3AB0())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_124()//Position - 0x6BAA
{
	switch (iLocal_86)
	{
		case 0:
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = unk_0x53C562FD2B9E3AB0() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_125()//Position - 0x6C7E
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_56))
	{
		if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial_stop") > 0,124f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,127f)
					{
						unk_0xAEB228D978E7ADD1("scr_burial_dirt", iLocal_56, 0f, 0f, -0,95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0xA5F6598E13F98E08(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") > 0,04f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,043f) || (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") > 0,24f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,243f)) || (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") > 0,44f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,443f)) || (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") > 0,64f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,643f)) || (unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") > 0,84f && unk_0x7A70772AE40E3821(iLocal_52[0], "random@burial", "a_burial") < 0,843f))
					{
						unk_0xAEB228D978E7ADD1("scr_burial_dirt", iLocal_56, 0f, 0f, -0,95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()//Position - 0x6E51
{
	if (!iLocal_103)
	{
		if (unk_0x5679106BC7ED79EE(vLocal_74, 100f, 1) || unk_0x5679106BC7ED79EE(vLocal_74, 100f, 1))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) || unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!unk_0x5679106BC7ED79EE(vLocal_74, 100f, 1) || !unk_0x5679106BC7ED79EE(vLocal_74, 100f, 1))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_smokegrenade"), 1) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_grenade"), 1)) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_stickybomb"), 1)) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_rpg"), 1)) || unk_0x53C4FF461321A689(194,3872f, 6833,941f, 62,4419f, 131,3547f, 6845,673f, 15,4613f, 36,9375f, joaat("weapon_molotov"), 1)) || unk_0x98129652BB227B1B(2, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x98129652BB227B1B(4, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x98129652BB227B1B(0, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_54))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_54, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_54, unk_0xFC1458A37D98B502(), 1) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_54, 0))
				{
					unk_0x2B0DDE3D071497AD(iLocal_54);
					func_112();
					iLocal_49 = 3;
					return 1;
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck")) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck2")))
					{
						if (unk_0x03760B63FE11B718(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_54))
						{
							func_112();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				if ((((unk_0x46D8E79A1B95ACE2(iLocal_52[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_52[1], unk_0xFC1458A37D98B502())) || unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), iLocal_52[0])) || unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), iLocal_52[1])) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_52[1]))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
				{
					if (unk_0x9A213A2345825783(unk_0xC733212BF9066BDF(), iLocal_52[0]) || unk_0x9A213A2345825783(unk_0xC733212BF9066BDF(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
		{
			if (unk_0xEBE499597C718EB8(iLocal_51, unk_0xFC1458A37D98B502(), 0) || unk_0x613CDAB05D8C57C8(iLocal_51, joaat("weapon_stungun"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (unk_0x191BE1BC8F26F3C1(iLocal_52[0], 0) || unk_0x191BE1BC8F26F3C1(iLocal_52[1], 0))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x72F0
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !bParam4)
	{
		if (unk_0xEA8E0258C31BCDE7(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			vVar4 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			fVar5 = system::vdist(vVar3, vVar4);
			if (!unk_0xC80D31E4B587871C(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x5679106BC7ED79EE(vVar4, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (unk_0xF1DE6FAA2EFAA34F(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 2))
			{
				fVar0 = unk_0x9A5EF8F702F14D4F(unk_0xFC1458A37D98B502());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xFFCE4302A2DB825B(iParam0, unk_0xFC1458A37D98B502(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (unk_0x53C562FD2B9E3AB0() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (unk_0x53C562FD2B9E3AB0() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 0))
			{
				if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x53C562FD2B9E3AB0();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)//Position - 0x754E
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)//Position - 0x7562
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)//Position - 0x7570
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

void func_131(int iParam0)//Position - 0x7583
{
	unk_0x3D1231846F809DA4(iParam0);
}

void func_132(char* sParam0)//Position - 0x7591
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)//Position - 0x759F
{
	if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
	{
		if ((unk_0x77B0822EAE4CA5DD(iParam0) - unk_0xDE523AF6F7B269AB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()//Position - 0x75EC
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	unk_0xCB389937EDB1519A(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0xCB389937EDB1519A(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x2E4932E63763FE26(iLocal_83, true);
	unk_0x1D29C781A978C4FB(5, false);
	unk_0x1D29C781A978C4FB(3, false);
	unk_0x94BD6F0436473406(0f);
	iLocal_51 = unk_0xAC992EFAD62C33BF(26, iLocal_80, vLocal_72, fLocal_77, 1, true);
	unk_0x771A86309E0CA47B(iLocal_51, true);
	unk_0x5C5D33A1B2711D21(iLocal_51, false);
	unk_0xE17958D3FD0F9EE9(iLocal_51, 2, false);
	unk_0xE17958D3FD0F9EE9(iLocal_51, 128, true);
	unk_0xAE6EBBBBD8B9FB30(iLocal_51, 1, false);
	unk_0xAE6EBBBBD8B9FB30(iLocal_51, 6, false);
	unk_0xAE01EF4BC84AFE7C(iLocal_51, 206, true);
	unk_0xAE01EF4BC84AFE7C(iLocal_51, 318, false);
	unk_0xAE01EF4BC84AFE7C(iLocal_51, 118, false);
	unk_0xAE01EF4BC84AFE7C(iLocal_51, 208, true);
	unk_0x14776E43F90DD454(iLocal_80);
	unk_0xE01CE1EBCD7EE551(iLocal_51, iLocal_99, 0);
	unk_0xB89BC60EFF7F2571(unk_0xFC1458A37D98B502(), 0);
	unk_0x4DE114E3C7F8B7C2("rghKidnappers", &iLocal_136);
	unk_0x4DE114E3C7F8B7C2("rghVictim", &iLocal_137);
	unk_0xCE93FCB8A8D8DF0B(iLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		iLocal_52[iLocal_58] = unk_0xAC992EFAD62C33BF(26, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 1, true);
		unk_0x771A86309E0CA47B(iLocal_52[iLocal_58], true);
		unk_0x66C1F257A00B2D4E(iLocal_52[iLocal_58], 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_52[iLocal_58], 0, true);
		unk_0xE17958D3FD0F9EE9(iLocal_52[iLocal_58], 2, false);
		unk_0xE17958D3FD0F9EE9(iLocal_52[iLocal_58], 128, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_52[iLocal_58], 42, true);
		unk_0x4F9A62E773100FDC(iLocal_52[0], 2);
		unk_0xAE6EBBBBD8B9FB30(iLocal_52[0], 50, true);
		unk_0xEA4C3AEAE49593B4(iLocal_52[iLocal_58], 50);
		unk_0xBB3CC641B6AED5E5(iLocal_52[iLocal_58], 13);
		unk_0xCFF0CD14B439821D(iLocal_52[iLocal_58], true, 1);
		unk_0xCE93FCB8A8D8DF0B(iLocal_52[iLocal_58], iLocal_136);
		unk_0x6D624C6A284D7D07(iLocal_52[iLocal_58], unk_0x63A6486593EC7EC3(800, 2000));
		iLocal_58++;
	}
	unk_0x14776E43F90DD454(iLocal_82);
	unk_0x14776E43F90DD454(iLocal_81);
	unk_0xEA4C3AEAE49593B4(iLocal_52[1], 100);
	unk_0x9A3DC24536A0767A(iLocal_52[1], -687903391);
	unk_0xF96119FCCD4D1889(5, iLocal_136, 1862763509);
	unk_0x9E058151726E58DE(iLocal_52[0], joaat("weapon_pistol"), -1, false, true);
	unk_0x9E058151726E58DE(iLocal_52[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	iLocal_54 = unk_0xEA60F3B426BB095B(iLocal_83, vLocal_74, fLocal_79, true, true, false);
	unk_0xACE486395AA1867D(iLocal_54, 1084227584);
	unk_0xBAB8785EE2F06BBE(iLocal_54, 3);
	unk_0x6D4A70E9DE82B24B(iLocal_54, 5, 0, 0);
	unk_0x14776E43F90DD454(iLocal_83);
	iLocal_56 = unk_0x5E35CF35E65D69B9(joaat("prop_ld_shovel"), vLocal_85, true, true, false);
	unk_0x14776E43F90DD454(joaat("prop_ld_shovel"));
	iLocal_57[0] = unk_0x5E35CF35E65D69B9(joaat("p_arm_bind_cut_s"), vLocal_85, true, true, false);
	iLocal_57[1] = unk_0x5E35CF35E65D69B9(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), true, true, false);
	unk_0x6FF834D85E2DD4C6(joaat("p_arm_bind_cut_s"));
	unk_0xA9D382E7BA095148(iLocal_56, iLocal_52[0], unk_0xDD09837E5235FE91(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x03924C68EFCBC511(iLocal_52[0], 0, 0, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_52[0], 3, 0, 1, 0);
	unk_0x03924C68EFCBC511(iLocal_52[0], 4, 1, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_52[1], 0, 0, 2, 0);
	unk_0x03924C68EFCBC511(iLocal_52[1], 3, 2, 1, 0);
	unk_0x03924C68EFCBC511(iLocal_52[1], 4, 1, 1, 0);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = unk_0x8383F9C605E523B7(vVar0, vVar1, 2);
	unk_0x8E628F774C748D93(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xEBB74134CCA3442E(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xEBB74134CCA3442E(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xD0E12C501EE26329(iLocal_303, true);
	unk_0xE9B3D12A64CC7C1A(iLocal_51, true);
	unk_0x12C9D41D52A560D6(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xD28B96789F5A9CD4(iLocal_52[0], vLocal_75, vLocal_76, 2,75f, 0, 0);
	unk_0xD28B96789F5A9CD4(iLocal_52[1], vLocal_75, vLocal_76, 2,75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_138, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_138, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_138, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	unk_0x350CEE66BDF90273(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x350CEE66BDF90273(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x350CEE66BDF90273(iLocal_51, "KIDNAPPEDFEMALE");
	func_135(&uLocal_138, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_138, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_138, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7AFC
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

void func_136(int iParam0, bool bParam1)//Position - 0x7B97
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x7BCE
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7C37
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)//Position - 0x7C67
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x7C9B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_139(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x7CCD
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

void func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x7FB2
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)//Position - 0x801C
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_20() == 0)
		{
			return unk_0xC80D31E4B587871C(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_144()//Position - 0x807C
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

void func_145()//Position - 0x80E9
{
	unk_0x6FF834D85E2DD4C6(iLocal_80);
	unk_0x6FF834D85E2DD4C6(iLocal_82);
	unk_0x6FF834D85E2DD4C6(iLocal_81);
	unk_0x6FF834D85E2DD4C6(iLocal_83);
	unk_0x6FF834D85E2DD4C6(joaat("prop_ld_shovel"));
	unk_0x6FF834D85E2DD4C6(joaat("p_arm_bind_cut_s"));
	unk_0x6450931B826B49D9("random@burial");
	unk_0x36905B9EE07F38CC();
	unk_0x1CF95440F1970B4F("ROPE_CUT", false, -1);
	unk_0xAAB7D68F04F8C8BA("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x9A0B2ED5055D3F0B(iLocal_80) && unk_0x9A0B2ED5055D3F0B(iLocal_82)) && unk_0x9A0B2ED5055D3F0B(iLocal_81)) && unk_0x9A0B2ED5055D3F0B(iLocal_83)) && unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_shovel"))) && unk_0x9A0B2ED5055D3F0B(joaat("p_arm_bind_cut_s"))) && unk_0x3A801AA34DD821BE("random@burial")) && unk_0xFEDD99169EC73AA6()) && unk_0x1CF95440F1970B4F("ROPE_CUT", false, -1)) && unk_0xAAB7D68F04F8C8BA("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_80);
		unk_0x6FF834D85E2DD4C6(iLocal_82);
		unk_0x6FF834D85E2DD4C6(iLocal_81);
		unk_0x6FF834D85E2DD4C6(iLocal_83);
		unk_0x6FF834D85E2DD4C6(joaat("prop_ld_shovel"));
		unk_0x6FF834D85E2DD4C6(joaat("p_arm_bind_cut_s"));
		unk_0x6450931B826B49D9("random@burial");
		unk_0x36905B9EE07F38CC();
		unk_0x1CF95440F1970B4F("ROPE_CUT", false, -1);
		unk_0xAAB7D68F04F8C8BA("RE6_BOTH_DEAD_OS");
	}
}

void func_146()//Position - 0x8200
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("bison");
	vLocal_72 = { 163,4486f, 6839,993f, 18,86f };
	fLocal_77 = 0f;
	vLocal_73[0 /*3*/] = { 162,8193f, 6837,257f, 18,9614f };
	fLocal_78[0] = 297,0056f;
	vLocal_73[1 /*3*/] = { 162,5046f, 6841,68f, 18,8426f };
	fLocal_78[1] = 193,3866f;
	vLocal_74 = { 169,3462f, 6837,805f, 19,1421f };
	fLocal_79 = 265,6862f;
	vLocal_75 = { 164,0896f, 6836,923f, 19,03899f };
	vLocal_76 = { 168,9638f, 6834,302f, 24,99057f };
	iLocal_60 = 1;
}

int func_147()//Position - 0x82BD
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)//Position - 0x8343
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
		if (func_33(func_44()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_149(iVar1, &Var0);
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

void func_149(int iParam0, var uParam1)//Position - 0x83FA
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x956F
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

int func_151(int iParam0)//Position - 0x9600
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

struct<2> func_152(int iParam0)//Position - 0x9946
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_153(iParam0) };
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

struct<2> func_153(int iParam0)//Position - 0x997C
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

int func_154()//Position - 0x9DC7
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()//Position - 0x9DF9
{
	return Global_104273 > 0;
}

int func_156()//Position - 0x9E07
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x9E1C
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()//Position - 0x9E42
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

int func_159()//Position - 0x9E5F
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x9EC1
{
	if ((Global_104544 == func_39() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)//Position - 0x9EEC
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_162();
}

void func_162()//Position - 0x9F22
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

void func_163(int iParam0)//Position - 0x9F5F
{
	Global_104544 = iParam0;
}

int func_164(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9F6D
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
		iParam1 = func_39();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_205())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
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
		if (!func_203(iParam1))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_199())
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
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_188(iVar4))
				{
					if (func_166(iVar2))
					{
						if (!func_165(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_44() != iVar2)
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

bool func_165(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xA307
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_166(int iParam0)//Position - 0xA34E
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)//Position - 0xA36F
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)//Position - 0xA37E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xA3D1
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA3EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_171(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)//Position - 0xA5F0
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

int func_172(int iParam0, int iParam1)//Position - 0xA632
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

int func_173(int iParam0)//Position - 0xA6D4
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_174(int iParam0)//Position - 0xA6E7
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_175(int iParam0)//Position - 0xA6FA
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_176(int iParam0)//Position - 0xA70D
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_177(int iParam0)//Position - 0xA71F
{
	return (system::shift_right(iParam0, 26) & 31 * func_178(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)//Position - 0xA744
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)//Position - 0xA75B
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)//Position - 0xA768
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0xA874
{
	var uVar0;
	
	func_187(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_186(&uVar0, unk_0x95327550F0F2BE7C());
	func_185(&uVar0, unk_0x674C9438180770FE());
	func_184(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_183(&uVar0, unk_0xEAF455949B108589());
	func_182(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_182(var uParam0, int iParam1)//Position - 0xA8BA
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

void func_183(var uParam0, int iParam1)//Position - 0xA940
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)//Position - 0xA973
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_185(var uParam0, int iParam1)//Position - 0xA9C4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_186(var uParam0, int iParam1)//Position - 0xA9FE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_187(var uParam0, int iParam1)//Position - 0xAA39
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_188(int iParam0)//Position - 0xAA75
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)//Position - 0xAB51
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)//Position - 0xAB74
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_198()) || Global_103602) || Global_25235) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_198()) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_198()) || Global_103602) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_198()) || Global_103602) || Global_25235) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_198()) || Global_25235) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_198()) || func_195()) || Global_103602) || Global_25235) || func_197()) || Global_36993) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_198()) || Global_103602) || Global_25235) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()//Position - 0xB291
{
	return Global_92872.f_1;
}

int func_192()//Position - 0xB29F
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_193()//Position - 0xB2C5
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()//Position - 0xB2DF
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

bool func_195()//Position - 0xB309
{
	return Global_92885.f_316 > 0;
}

bool func_196()//Position - 0xB31A
{
	return Global_92885.f_315 > 0;
}

var func_197()//Position - 0xB32B
{
	return Global_1312854;
}

int func_198()//Position - 0xB337
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_199()//Position - 0xB353
{
	func_76();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)//Position - 0xB37B
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)//Position - 0xB38D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)//Position - 0xB471
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_203(int iParam0)//Position - 0xB495
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
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

int func_204()//Position - 0xB4F3
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

int func_205()//Position - 0xB537
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

void func_206()//Position - 0xB5F2
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_219(0);
		unk_0x3CDDC4760DBA4651();
		unk_0xF4D9AAA3F4BCC684("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_25472)
			{
				unk_0x8810DC630928B398("AC_STOP");
			}
			else
			{
				unk_0x8810DC630928B398("RE6_END");
			}
		}
		func_218();
		unk_0xF96119FCCD4D1889(255, iLocal_137, 1862763509);
		unk_0xF96119FCCD4D1889(255, 1862763509, iLocal_137);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_51))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_51, 317, true);
				if (!unk_0x88DDBE9908752BF0(iLocal_51, 0))
				{
					unk_0x28B82FCEA0848032(iLocal_51);
				}
				if (unk_0xC816B63289F7A279(iLocal_51))
				{
					unk_0x88235B448509228B(iLocal_51);
				}
				unk_0x771A86309E0CA47B(iLocal_51, false);
				unk_0x5C5D33A1B2711D21(iLocal_51, true);
			}
			else if (!unk_0x191BE1BC8F26F3C1(iLocal_51, 0))
			{
				unk_0x88BBDC49F550C0C7(iLocal_51, 1);
				unk_0xFDE119B1E19BF7DB(iLocal_51, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52[iVar0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x6CFCAFBA031AB20A(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0xD7F5B2902EBBD04E(iLocal_52[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
				}
				else
				{
					unk_0xD68E88A8E0BE8697(iLocal_52[iVar0], unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
					func_104();
				}
				unk_0xE9B3D12A64CC7C1A(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		unk_0x452336926718D62A(&(iLocal_57[0]));
		unk_0x452336926718D62A(&(iLocal_57[1]));
		if (unk_0x6ADD12BF4D6D2587(iLocal_54))
		{
			unk_0x5380482A432E314E(&iLocal_54);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_56))
		{
			if (unk_0xDFFD5F8C8ABCB7EF(iLocal_56))
			{
				unk_0x6B7C10B19928914F(iLocal_56, 1, true);
			}
			unk_0x3A703774620FDB42(&iLocal_56);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_123))
		{
			unk_0xE30CF11C0EE14316(&iLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_87[iLocal_58]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_88))
		{
			unk_0xE30CF11C0EE14316(&iLocal_88);
		}
		if (unk_0x8EA3C8E091EA5BA4(iLocal_71))
		{
			unk_0x02934BABFD4CD384(iLocal_71, 0);
		}
		unk_0x1D29C781A978C4FB(5, true);
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x94BD6F0436473406(1f);
		unk_0x4C15495E88D71C61(-133,841f, -38,5734f, -100f, -126,2403f, -29,194f, 100f, true, 1);
	}
	func_207(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_207(int iParam0)//Position - 0xB815
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_104544, 1), 64);
		if (func_38(Global_104544) > 0)
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
	func_208(&Global_25292);
	Global_104545 = 0;
	func_163(-1);
}

void func_208(var uParam0)//Position - 0xB8CA
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

char* func_209(int iParam0, bool bParam1)//Position - 0xB907
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

void func_210(int iParam0)//Position - 0xBB50
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_211(int iParam0)//Position - 0xBB62
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)//Position - 0xBB77
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)//Position - 0xBBA6
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_175(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_174(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_173(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)//Position - 0xBC75
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBC8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBE0F
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)//Position - 0xBE47
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

void func_218()//Position - 0xBFEA
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_219(bool bParam0)//Position - 0xC007
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

