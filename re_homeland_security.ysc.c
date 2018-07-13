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
	int iLocal_50[2] = { 0, 0 };
	vector3 vLocal_51[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[2] = { 0f, 0f };
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
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
	var uLocal_120 = 16;
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
	struct<2> Local_285 = { 0, 5 } ;
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
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	StringCopy(&Local_62, "", 24);
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
		{
			if (unk_0xC816B63289F7A279(iLocal_58))
			{
				unk_0x88235B448509228B(iLocal_58);
			}
		}
		func_207();
	}
	if (func_165(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_162(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if ((unk_0x42F1FE4C7EC5F51E() || iLocal_76) || iLocal_103)
		{
			if (!func_161())
			{
				if (func_160())
				{
					func_207();
				}
			}
			unk_0x48D75120C879E65E("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_148())
					{
						func_207();
					}
					if (!iLocal_71)
					{
						func_147();
					}
					else
					{
						func_146();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_136();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_135())
								{
									if ((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_59, 75f, 75f, 75f, false, true, 0) && !unk_0xEC211A86AB3726B6(iLocal_58)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_161())
										{
											unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_58, -1, 0, 2);
											unk_0x94BD6F0436473406(0,1f);
											func_134();
											func_125(1);
										}
										bLocal_79 = true;
									}
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
									{
										if (unk_0xEBE499597C718EB8(iLocal_50[0], unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_50[1], unk_0xFC1458A37D98B502(), 1))
										{
											func_134();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_119();
									}
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_58) && unk_0xB8DE76287EDC4957(iLocal_53, 0))
									{
										if (unk_0xA8D0477084E86A92(iLocal_58, iLocal_53, 0))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
										{
											if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_118())
								{
									func_134();
									iLocal_47 = 3;
								}
								else if (func_135())
								{
									func_134();
									func_116();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_135())
								{
									switch (iLocal_48)
									{
										case 2:
											func_115();
											break;
										
										case 4:
											func_114();
											break;
										
										case 5:
											func_113();
											break;
										}
								}
								break;
							
							case 3:
								func_110();
								unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
								{
									unk_0x0F5CA7E22DF79A5F(iLocal_58, 3, 0f, 0);
									if (!unk_0x88DDBE9908752BF0(iLocal_58, 0))
									{
										if (!iLocal_85)
										{
											if (unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x9F887157983E8EFC(iLocal_58))
											{
												unk_0x66698545014E2F21(iLocal_58, 16);
												unk_0x6931076730A4AC5D(&iLocal_102);
												unk_0x12C9D41D52A560D6(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0x12C9D41D52A560D6(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0x1B16DD5C115FE009(iLocal_102);
												unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_102);
												unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												unk_0xF21E6EBE8EFDCC28(iLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0x78F50AA8F955BEFC(iLocal_58, 474215631) != 0) && unk_0x78F50AA8F955BEFC(iLocal_58, 474215631) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
									{
										if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_53, 0))
										{
											if (unk_0xA6DECE14FC9A8C51(iLocal_88))
											{
												unk_0xE30CF11C0EE14316(&iLocal_88);
											}
										}
									}
								}
								else
								{
									func_109();
								}
								if (!func_108())
								{
									if (iLocal_95 < unk_0x53C562FD2B9E3AB0())
									{
										if (func_107())
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
											{
												func_106(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4500, 5000));
									}
								}
								if (unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
								{
									if (unk_0xA6DECE14FC9A8C51(iLocal_89[0]))
									{
										unk_0xE30CF11C0EE14316(&(iLocal_89[0]));
									}
									func_105(&uLocal_120, 5);
								}
								else if (unk_0x46D8E79A1B95ACE2(iLocal_50[0], unk_0xFC1458A37D98B502()) || unk_0x21B6FFFD04C9FF3A(iLocal_50[0], unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xA6DECE14FC9A8C51(iLocal_89[0]))
								{
									unk_0xE30CF11C0EE14316(&(iLocal_89[0]));
								}
								if (unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
								{
									if (unk_0xA6DECE14FC9A8C51(iLocal_89[1]))
									{
										unk_0xE30CF11C0EE14316(&(iLocal_89[1]));
									}
									func_105(&uLocal_120, 4);
								}
								else if (unk_0x46D8E79A1B95ACE2(iLocal_50[1], unk_0xFC1458A37D98B502()) || unk_0x21B6FFFD04C9FF3A(iLocal_50[1], unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xA6DECE14FC9A8C51(iLocal_89[1]))
								{
									unk_0xE30CF11C0EE14316(&(iLocal_89[1]));
								}
								if (unk_0x6ADD12BF4D6D2587(iLocal_50[0]) && unk_0x6ADD12BF4D6D2587(iLocal_50[1]))
								{
									if (((unk_0x613CDAB05D8C57C8(iLocal_50[0], joaat("weapon_stungun"), 0) && unk_0x613CDAB05D8C57C8(iLocal_50[1], joaat("weapon_stungun"), 0)) || (unk_0xA7E3B4C3A60721A5(iLocal_50[0], 1) && unk_0xA7E3B4C3A60721A5(iLocal_50[1], 1))) || func_104())
									{
										if (unk_0xA6DECE14FC9A8C51(iLocal_89[0]))
										{
											unk_0xE30CF11C0EE14316(&(iLocal_89[0]));
										}
										if (unk_0xA6DECE14FC9A8C51(iLocal_89[1]))
										{
											unk_0xE30CF11C0EE14316(&(iLocal_89[1]));
										}
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
										{
											if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_108())
												{
													func_106(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													unk_0x014BC1A813500377(iLocal_58, 16);
													unk_0x2B0DDE3D071497AD(iLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_64)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
									{
										if ((unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x9F887157983E8EFC(iLocal_58))
										{
											unk_0x12C9D41D52A560D6(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0,3f, 0, 0, 0);
										}
										else
										{
											unk_0xB8E08BD5B184DF4E(iLocal_58);
										}
										unk_0xF6A83791895D5AA1(iLocal_58, 0);
										unk_0x57FB41CABA25835C(iLocal_58, func_103());
										unk_0xA7C52BDFAE69B37F(iLocal_58, 1);
										func_102();
										bLocal_64 = true;
									}
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
								{
									if (unk_0xA5F6598E13F98E08(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x7A70772AE40E3821(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0,8f)
										{
											unk_0xB8E08BD5B184DF4E(iLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!func_108())
									{
										if (func_106(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!func_108())
									{
										if (func_101() == 0)
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_101() == 1)
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
										{
											if (unk_0xA6DECE14FC9A8C51(iLocal_88))
											{
												unk_0xE30CF11C0EE14316(&iLocal_88);
											}
										}
										else if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
										{
											iLocal_88 = func_99(iLocal_58, 0, 145);
										}
									}
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
								{
									if (unk_0x46D8E79A1B95ACE2(iLocal_50[0], unk_0xFC1458A37D98B502()))
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 2)
										{
										}
									}
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
								{
									if (unk_0x46D8E79A1B95ACE2(iLocal_50[1], unk_0xFC1458A37D98B502()))
									{
										if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_98())
								{
									if (!func_108())
									{
										func_96();
										system::wait(0);
										func_106(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0x486F346ADFE56674(&(iLocal_50[0]));
										unk_0x486F346ADFE56674(&(iLocal_50[1]));
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
										{
											if (unk_0xC816B63289F7A279(iLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (unk_0x6ADD12BF4D6D2587(iLocal_50[iVar0]))
													{
														unk_0x486F346ADFE56674(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												unk_0x94BD6F0436473406(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_90();
								func_85();
								func_84();
								func_81();
								func_80();
								if (func_79(vLocal_67))
								{
									func_65(0);
									func_96();
									system::wait(0);
									func_106(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_63())
								{
									func_65(0);
									func_96();
									system::wait(0);
									func_106(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
								{
									if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_67, Global_22, true, true, 0) && unk_0x21B6FFFD04C9FF3A(iLocal_58, unk_0xFC1458A37D98B502(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0xC816B63289F7A279(iLocal_58))
										{
											if (unk_0xA6DECE14FC9A8C51(iLocal_88))
											{
												unk_0xE30CF11C0EE14316(&iLocal_88);
											}
											if (unk_0xA6DECE14FC9A8C51(iLocal_90))
											{
												unk_0xE30CF11C0EE14316(&iLocal_90);
											}
											if (unk_0xA6DECE14FC9A8C51(iLocal_91))
											{
												unk_0xE30CF11C0EE14316(&iLocal_91);
											}
											if (unk_0xC816B63289F7A279(iLocal_58))
											{
												unk_0x88235B448509228B(iLocal_58);
											}
											if (func_98())
											{
												if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
												{
													unk_0xA1AA40A93CA0F40D(unk_0xC733212BF9066BDF(), 5f, 2, 0);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_96();
												system::wait(0);
												func_106(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
												{
													unk_0x6931076730A4AC5D(&iLocal_102);
													unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 5000, 2052, 2);
													unk_0x380C1E7B7740D618(0, vLocal_68, 1f, -1, 0,25f, 0, 38,9844f);
													unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0x1B16DD5C115FE009(iLocal_102);
													unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_102);
													unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
													unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
												}
												func_34(func_101(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_109();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (unk_0xD56F740235B1E8F0(iLocal_115))
								{
									if (unk_0x463C4747B41E35A3(iLocal_115) > 0,85f)
									{
										if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
											{
												if (!unk_0xA8D0477084E86A92(iLocal_58, iLocal_53, 0))
												{
													if (!unk_0x9F887157983E8EFC(iLocal_58))
													{
														unk_0xB8E08BD5B184DF4E(iLocal_58);
														unk_0xBB0358802AA14401(iLocal_58, iLocal_53, 2);
														unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_58))
							{
								unk_0x68433819717660CF(&iLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
							{
								if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 150f, 150f, 150f, 0, 1, 0) || unk_0xEBE499597C718EB8(iLocal_58, unk_0xFC1458A37D98B502(), 1))
								{
									unk_0xD68E88A8E0BE8697(iLocal_58, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
									func_96();
									func_109();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
						}
						if (unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_89[0]))
							{
								unk_0xE30CF11C0EE14316(&(iLocal_89[0]));
							}
						}
						if (unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_89[1]))
							{
								unk_0xE30CF11C0EE14316(&(iLocal_89[1]));
							}
						}
						if (unk_0x3AB6A1A9084FB0A4(iLocal_58))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_88))
							{
								unk_0xE30CF11C0EE14316(&iLocal_88);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_207();
		}
	}
}

int func_1()//Position - 0xC9F
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0x6ADD12BF4D6D2587(iLocal_50[0]))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_50[1]))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_58))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xD4E
{
	if (Global_25469)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xD66
{
	Global_104541 = iParam0;
}

void func_4()//Position - 0xD74
{
	while (func_108())
	{
		system::wait(0);
	}
	while (!func_32())
	{
		system::wait(0);
	}
	func_8(-1, 0);
	func_5();
	func_207();
}

void func_5()//Position - 0xDA9
{
	func_6();
}

int func_6()//Position - 0xDB6
{
	if (func_7(0))
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

bool func_7(bool bParam0)//Position - 0xE01
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_8(int iParam0, int iParam1)//Position - 0xE2C
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_3(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)//Position - 0xF2F
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_10();
	}
}

void func_10()//Position - 0x1017
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
		func_12(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_11() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()//Position - 0x14D8
{
	return Global_25233;
}

int func_12(int iParam0, int iParam1)//Position - 0x14E3
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

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1534
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
		iParam2 = func_14();
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

int func_14()//Position - 0x19FE
{
	return Global_1312736;
}

int func_15(int iParam0, int iParam1)//Position - 0x1A0A
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

int func_16(int iParam0)//Position - 0x1D7E
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

void func_17(int iParam0)//Position - 0x1DAD
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1DEF
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E0F
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
		func_20();
	}
}

void func_20()//Position - 0x1FE1
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

int func_21()//Position - 0x2101
{
	func_22();
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

void func_22()//Position - 0x2147
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_26(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_25(unk_0xFC1458A37D98B502());
			if (func_24(iVar0) && (!func_23(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_24(Global_104555.f_2353.f_539.f_4301))
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

bool func_23(int iParam0)//Position - 0x2244
{
	return Global_35861 == iParam0;
}

bool func_24(int iParam0)//Position - 0x2252
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x225E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x229B
{
	if (func_24(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x22C5
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

void func_28(int iParam0, int iParam1)//Position - 0x2308
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)//Position - 0x2323
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

int func_30()//Position - 0x23D4
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x23F1
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

int func_32()//Position - 0x25CB
{
	return 1;
}

void func_33()//Position - 0x25D4
{
	switch (iLocal_118)
	{
		case 0:
			func_96();
			system::wait(0);
			func_106(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		
		case 1:
			iLocal_118++;
			break;
		
		case 2:
			iLocal_118++;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				unk_0x6931076730A4AC5D(&iLocal_102);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 5000, 2052, 2);
				unk_0x380C1E7B7740D618(0, vLocal_68, 1f, -1, 0,25f, 0, 38,9844f);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x1B16DD5C115FE009(iLocal_102);
				unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_102);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
				unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
			}
			iLocal_118++;
			break;
		
		case 4:
			func_34(func_101(), 1, 80, 0, 1);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x26B8
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
	func_35(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x279F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_62();
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
					func_61(99, 1);
					func_60(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_60(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_60(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_46(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_42(5))
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
							func_60(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_60(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_60(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_60(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_property"), iParam3);
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
									func_60(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_61(95, iParam3);
					break;
				
				case 1:
					func_61(97, iParam3);
					break;
				
				case 2:
					func_61(96, iParam3);
					break;
			}
			func_61(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
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
					func_60(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_60(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_60(joaat("sp2_total_cash_earned"), iParam3);
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
	func_37(iParam0);
	if (Global_35861 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)//Position - 0x2D9E
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

void func_37(int iParam0)//Position - 0x3020
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

void func_38(int iParam0)//Position - 0x307A
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_40() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_40() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_39(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)//Position - 0x314F
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

int func_40()//Position - 0x31D5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)//Position - 0x31E2
{
	func_61(93, iParam0);
	func_61(29, iParam0);
	func_61(30, iParam0);
}

bool func_42(int iParam0)//Position - 0x3202
{
	if (iParam0 == 8)
	{
		return func_43(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_40() /*12130*/].f_7676.f_10, iParam0);
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x3250
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_45(iParam0, iParam1);
	uVar2 = func_44(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_44(int iParam0)//Position - 0x328D
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

int func_45(int iParam0, int iParam1)//Position - 0x354D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_46(bool bParam0)//Position - 0x37ED
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_47(27, 1);
	return 1;
}

int func_47(int iParam0, int iParam1)//Position - 0x38A4
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_48(iParam0, iParam1);
}

int func_48(int iParam0, int iParam1)//Position - 0x38BF
{
	if (func_23(14) && !func_59(iParam0))
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
	if (func_58(&Global_4267379))
	{
		if (func_56(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_49(&Global_4267379, iParam0))
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

int func_49(var uParam0, int iParam1)//Position - 0x395C
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_59(iParam1))
	{
		return 0;
	}
	if (func_56(uParam0, iParam1))
	{
		return 0;
	}
	if (func_55(uParam0) < 0f)
	{
		func_54(uParam0, 0);
	}
	func_52(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_50(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_50(var uParam0, int iParam1)//Position - 0x3A0D
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_59(iParam1))
	{
		return 0;
	}
	if (func_56(uParam0, iParam1))
	{
		return 0;
	}
	if (func_55(uParam0) < 0f)
	{
		func_54(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_51(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_51(var uParam0, int iParam1)//Position - 0x3A88
{
	return (*uParam0)[iParam1] == 78;
}

void func_52(var uParam0)//Position - 0x3A99
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_53(uParam0, iVar0);
		iVar0++;
	}
	func_54(uParam0, (Global_4267378 - 0,5f));
}

void func_53(var uParam0, int iParam1)//Position - 0x3ACD
{
	(*uParam0)[iParam1] = 78;
}

void func_54(var uParam0, float fParam1)//Position - 0x3ADD
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

float func_55(var uParam0)//Position - 0x3AFA
{
	return uParam0->f_80;
}

bool func_56(var uParam0, int iParam1)//Position - 0x3B06
{
	return func_57(uParam0, iParam1) != -1;
}

int func_57(var uParam0, int iParam1)//Position - 0x3B18
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

bool func_58(var uParam0)//Position - 0x3B45
{
	return uParam0->f_79 == 1;
}

int func_59(int iParam0)//Position - 0x3B53
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

void func_60(int iParam0, int iParam1)//Position - 0x3BA3
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_61(int iParam0, int iParam1)//Position - 0x3BC6
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

void func_62()//Position - 0x3C23
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

int func_63()//Position - 0x3C98
{
	if (func_101() == 2)
	{
		if (func_64())
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

bool func_64()//Position - 0x3D13
{
	return Global_25468;
}

void func_65(bool bParam0)//Position - 0x3D1E
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (func_68(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && unk_0x42111BD51D233AAB())
	{
		Local_63 = { func_67() };
		Local_62 = { func_66() };
		func_116();
		iLocal_61 = 1;
	}
}

struct<6> func_66()//Position - 0x3D70
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

struct<6> func_67()//Position - 0x3DB6
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

bool func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3DDA
{
	func_78(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_69(sParam2, iParam4, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)//Position - 0x3E2E
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
					func_77();
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
		if (func_76(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_75();
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
				func_74();
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
				if (func_73())
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
			if (func_72())
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
			func_71();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_70();
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
		func_77();
	}
	return 0;
}

void func_70()//Position - 0x40FB
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

void func_71()//Position - 0x412B
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

int func_72()//Position - 0x41C0
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x41E7
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

void func_74()//Position - 0x4280
{
	if (func_23(14))
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
		Global_14453 = func_101();
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

void func_75()//Position - 0x4322
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

bool func_76(int iParam0, int iParam1)//Position - 0x4378
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

void func_77()//Position - 0x43B3
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

void func_78(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x440A
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

int func_79(vector3 vParam0)//Position - 0x4460
{
	if (func_101() == 2)
	{
		if (func_64() && !Global_25471)
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

void func_80()//Position - 0x44ED
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
	{
		if (!iLocal_73)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 1) && unk_0xA8D0477084E86A92(iLocal_58, unk_0xC733212BF9066BDF(), 0))
				{
					func_65(0);
					func_96();
					system::wait(0);
					func_106(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xC733212BF9066BDF(), 0) && unk_0xA8D0477084E86A92(iLocal_58, unk_0xC733212BF9066BDF(), 0))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
			{
				func_65(0);
				func_96();
				system::wait(0);
				func_106(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				func_65(0);
				func_96();
				system::wait(0);
				func_106(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_81()//Position - 0x4614
{
	if (!func_82())
	{
		func_65(1);
	}
	if (!func_108())
	{
		switch (iLocal_96)
		{
			case 0:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 1:
				func_106(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 2:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 3:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 4:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 5:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 6:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 7:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 8:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 9:
				func_106(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_82()//Position - 0x4816
{
	if (((((((((func_83("REHOM_QM") || func_83("REHOM_GETOUT")) || func_83("REHOM_SHOOT")) || func_83("REHOM_JACK")) || func_83("REHOM_WRONG")) || func_83("REHOM_CULT")) || func_83("REHOM_STOP")) || func_83("REHOM_NOVEH")) || func_83("REHOM_UNS1")) || func_83("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_83(char* sParam0)//Position - 0x48AA
{
	var uVar0;
	
	if (func_108())
	{
		MemCopy(&uVar0, {func_67()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_84()//Position - 0x48D2
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
	{
		if (unk_0xEA8E0258C31BCDE7(iLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = unk_0x53C562FD2B9E3AB0();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = unk_0x53C562FD2B9E3AB0();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (unk_0xC816B63289F7A279(iLocal_58))
			{
				unk_0x88235B448509228B(iLocal_58);
				func_106(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_109();
			}
		}
	}
}

void func_85()//Position - 0x493C
{
	if (unk_0xDE42C4904F29B0CE(unk_0xFC1458A37D98B502()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = unk_0x53C562FD2B9E3AB0();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = unk_0x53C562FD2B9E3AB0();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_65(0);
		func_96();
		system::wait(0);
		func_106(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
		{
			unk_0xD68E88A8E0BE8697(iLocal_58, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
			func_86(iLocal_58, 120000, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
			if (unk_0xC816B63289F7A279(iLocal_58))
			{
				unk_0x88235B448509228B(iLocal_58);
			}
		}
		func_109();
	}
}

int func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x4A01
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
	iVar0 = func_89(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_88(iParam0);
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
	iVar2 = func_87();
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

int func_87()//Position - 0x4ABD
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

int func_88(int iParam0)//Position - 0x4AEC
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

int func_89(int iParam0)//Position - 0x4B1D
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

void func_90()//Position - 0x4B5E
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_88))
			{
				unk_0xE30CF11C0EE14316(&iLocal_88);
			}
			if (!unk_0xC816B63289F7A279(iLocal_58))
			{
				unk_0x57FB41CABA25835C(iLocal_58, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
				unk_0xF6A83791895D5AA1(iLocal_58, 0);
			}
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_90))
				{
					iLocal_90 = func_94(vLocal_67, 1);
				}
				if (unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_90))
					{
						iLocal_90 = func_94(vLocal_67, 1);
					}
				}
				if (func_101() == 2 && !func_93())
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_91))
					{
						iLocal_91 = func_94(vLocal_69, 0);
						unk_0x4B4040A0EC7DBA81(iLocal_91, 269);
						func_91();
					}
				}
			}
		}
		else
		{
			if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
			{
				iLocal_88 = func_99(iLocal_58, 0, 145);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_90))
			{
				unk_0xE30CF11C0EE14316(&iLocal_90);
			}
		}
	}
}

void func_91()//Position - 0x4C69
{
	if (func_101() == 2)
	{
		if (!Global_25470)
		{
			func_92("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_92(char* sParam0, int iParam1)//Position - 0x4C8D
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_93()//Position - 0x4CA4
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_94(vector3 vParam0, bool bParam1)//Position - 0x4CC0
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_95(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_95(bool bParam0, float fParam1, float fParam2)//Position - 0x4CEC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_96()//Position - 0x4D03
{
	Global_14622 = 0;
	func_97();
}

void func_97()//Position - 0x4D13
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_98()//Position - 0x4D34
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iLocal_86 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0xB8DE76287EDC4957(iLocal_86, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0xAAA8D20859E2D36D(iLocal_58, iLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x4D77
{
	int iVar0;
	
	iVar0 = func_100(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x4DC9
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_95(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_95(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_95(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_101()//Position - 0x4E6D
{
	func_22();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_102()//Position - 0x4E86
{
	if (!func_93())
	{
		if (func_101() == 2)
		{
			Global_25468 = 1;
		}
	}
}

int func_103()//Position - 0x4EA2
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

int func_104()//Position - 0x4EB2
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_53))
	{
		if (((unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_53, 0) && unk_0xA8D0477084E86A92(iLocal_58, iLocal_53, 0)) && !unk_0xA8D0477084E86A92(iLocal_50[0], iLocal_53, 0)) && !unk_0xA8D0477084E86A92(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(var uParam0, int iParam1)//Position - 0x4F08
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_106(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4F25
{
	func_78(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_69(sParam2, iParam3, 0);
}

int func_107()//Position - 0x4F73
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x4F94
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_109()//Position - 0x4FB6
{
	func_207();
}

void func_110()//Position - 0x4FC2
{
	if (!iLocal_77)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
		{
			unk_0x4F9A62E773100FDC(iLocal_50[0], 0);
			unk_0xB8E08BD5B184DF4E(iLocal_50[0]);
			unk_0x6931076730A4AC5D(&iLocal_102);
			unk_0xCB3D88C918AA637C(0);
			unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
			unk_0x1B16DD5C115FE009(iLocal_102);
			unk_0xAB30B1CF01A198C1(iLocal_50[0], iLocal_102);
			unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
			unk_0xE9B3D12A64CC7C1A(iLocal_50[0], true);
			if (unk_0xA6DECE14FC9A8C51(iLocal_89[0]))
			{
				unk_0xDB6E56C09E5CF0AA(iLocal_89[0], false);
			}
			system::settimerb(0);
			iLocal_77 = 1;
		}
		else
		{
			system::settimerb(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_89[1]))
		{
			unk_0xDB6E56C09E5CF0AA(iLocal_89[1], false);
		}
		func_96();
		system::wait(0);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
		{
			func_111(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			unk_0x4F9A62E773100FDC(iLocal_50[1], 2);
			if ((unk_0xA5F6598E13F98E08(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0xD56F740235B1E8F0(iLocal_115)) && !unk_0x9F887157983E8EFC(iLocal_50[1]))
			{
				unk_0x66698545014E2F21(iLocal_50[1], 16);
				unk_0x6931076730A4AC5D(&iLocal_102);
				unk_0x12C9D41D52A560D6(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x1B16DD5C115FE009(iLocal_102);
				unk_0xAB30B1CF01A198C1(iLocal_50[1], iLocal_102);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
				unk_0xE9B3D12A64CC7C1A(iLocal_50[1], true);
				iLocal_78 = 1;
			}
			else
			{
				unk_0xD7F5B2902EBBD04E(iLocal_50[1], unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_50[1], true);
				iLocal_78 = 1;
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
	{
		if (((!unk_0xA5F6598E13F98E08(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0xA5F6598E13F98E08(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0x78F50AA8F955BEFC(iLocal_50[1], 780511057) != 0) && unk_0x78F50AA8F955BEFC(iLocal_50[1], 780511057) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_111(int iParam0, char* sParam1, int iParam2)//Position - 0x51B3
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)//Position - 0x51CA
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

void func_113()//Position - 0x53BF
{
	iLocal_47 = 3;
}

void func_114()//Position - 0x53CA
{
	func_96();
	system::wait(0);
	func_106(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_115()//Position - 0x53F0
{
	iLocal_47 = 3;
}

void func_116()//Position - 0x53FB
{
	Global_14622 = 0;
	func_117();
}

void func_117()//Position - 0x540B
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

int func_118()//Position - 0x542F
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (unk_0x191BE1BC8F26F3C1(iLocal_50[iLocal_92], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_50[iLocal_92], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_119()//Position - 0x546E
{
	iLocal_94 = unk_0x53C562FD2B9E3AB0();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x53C562FD2B9E3AB0();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x53C562FD2B9E3AB0();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x53C562FD2B9E3AB0();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x53C562FD2B9E3AB0();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x53C562FD2B9E3AB0();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && system::timera() > 5000)
				{
					unk_0x6931076730A4AC5D(&iLocal_102);
					unk_0x60C06BFD037BB7CF(0, iLocal_58, -1, 2054, 2);
					unk_0xAC838A977FB6E6BC(0, iLocal_58, -1);
					unk_0x1B16DD5C115FE009(iLocal_102);
					unk_0xAB30B1CF01A198C1(iLocal_50[0], iLocal_102);
					unk_0xE9B3D12A64CC7C1A(iLocal_50[0], true);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((unk_0xB8DE76287EDC4957(iLocal_53, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_58))
					{
						if (unk_0xD56F740235B1E8F0(iLocal_115))
						{
							if (unk_0x463C4747B41E35A3(iLocal_115) > 0,98f)
							{
								if (!func_108())
								{
									if (unk_0xCA3C40448996C9BA(iLocal_50[0], iLocal_58, 10f))
									{
										if (func_106(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0xCB3D88C918AA637C(iLocal_50[0]);
											iLocal_115 = unk_0x8383F9C605E523B7(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x56FEE2DE0493113C(iLocal_115, iLocal_53, 0);
											unk_0x8E628F774C748D93(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x8E628F774C748D93(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x8E628F774C748D93(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x90CD41CAEBB68E99(iLocal_53, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0f, 0);
											iLocal_116 = 1;
											iLocal_93 = unk_0x53C562FD2B9E3AB0();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_122())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((unk_0xB8DE76287EDC4957(iLocal_53, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_58))
				{
					if (unk_0xD56F740235B1E8F0(iLocal_115))
					{
						if (!func_108())
						{
							if (unk_0xCA3C40448996C9BA(iLocal_50[0], iLocal_58, 10f))
							{
								if (func_106(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0xCB3D88C918AA637C(iLocal_50[0]);
									iLocal_115 = unk_0x8383F9C605E523B7(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x56FEE2DE0493113C(iLocal_115, iLocal_53, 0);
									unk_0x8E628F774C748D93(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x8E628F774C748D93(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x8E628F774C748D93(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x90CD41CAEBB68E99(iLocal_53, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0f, 0);
									iLocal_116 = 1;
									iLocal_93 = unk_0x53C562FD2B9E3AB0();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_120();
				if (unk_0xD56F740235B1E8F0(iLocal_115))
				{
					if (unk_0x463C4747B41E35A3(iLocal_115) > 0,45f)
					{
						if ((unk_0xB8DE76287EDC4957(iLocal_53, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_58)) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
						{
						}
					}
				}
				if (unk_0xD56F740235B1E8F0(iLocal_115))
				{
					if (unk_0x463C4747B41E35A3(iLocal_115) > 0,9f)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
							{
								unk_0x6F8C8278B7C06889(iLocal_50[0], iLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_120();
				if (unk_0xD56F740235B1E8F0(iLocal_115))
				{
					if (unk_0x463C4747B41E35A3(iLocal_115) > 0,95f)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
							{
								unk_0x6F8C8278B7C06889(iLocal_50[1], iLocal_53, -1, 0, 1f, 9, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_120();
				if ((unk_0xB8DE76287EDC4957(iLocal_53, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
				{
					if ((unk_0xAAA8D20859E2D36D(iLocal_58, iLocal_53) && unk_0xAAA8D20859E2D36D(iLocal_50[0], iLocal_53)) && unk_0xAAA8D20859E2D36D(iLocal_50[1], iLocal_53))
					{
						unk_0x96247F0EC873C446(iLocal_50[0], iLocal_53, 15f, 786468);
						unk_0xBB4910CCAB2BEDFA(iLocal_53, 1);
						bLocal_104 = true;
					}
				}
				break;
			
			case 9:
				unk_0x6931076730A4AC5D(&iLocal_102);
				unk_0xCB3D88C918AA637C(0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 20000, 0, 2);
				unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 0);
				unk_0x1B16DD5C115FE009(iLocal_102);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
				{
					unk_0xAB30B1CF01A198C1(iLocal_50[0], iLocal_102);
				}
				unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
				if (!iLocal_80)
				{
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 3))
					{
						func_96();
						system::wait(0);
						func_106(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 3) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
					{
						func_96();
						system::wait(0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
						{
							func_111(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = unk_0x53C562FD2B9E3AB0();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) && !iLocal_81)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = unk_0x53C562FD2B9E3AB0();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) || iLocal_106)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
				{
					unk_0x6931076730A4AC5D(&iLocal_102);
					unk_0xCB3D88C918AA637C(0);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2052, 4);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
					unk_0x1B16DD5C115FE009(iLocal_102);
					unk_0xAB30B1CF01A198C1(iLocal_50[0], iLocal_102);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
				}
				if (iLocal_107)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_50[1], 1785177548) != 1)
							{
								unk_0x6931076730A4AC5D(&iLocal_102);
								unk_0xCB3D88C918AA637C(0);
								unk_0xAC838A977FB6E6BC(0, iLocal_58, 0);
								unk_0x60C06BFD037BB7CF(0, iLocal_58, 20000, 0, 2);
								unk_0xF2163C96119FBF4B(0, iLocal_58, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0x1B16DD5C115FE009(iLocal_102);
								unk_0xAB30B1CF01A198C1(iLocal_50[1], iLocal_102);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(iLocal_50[1], 1785177548) != 1)
						{
							unk_0x6931076730A4AC5D(&iLocal_102);
							unk_0xCB3D88C918AA637C(0);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
							unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 20000, 0, 2);
							unk_0x1B16DD5C115FE009(iLocal_102);
							unk_0xAB30B1CF01A198C1(iLocal_50[1], iLocal_102);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_102);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_58, 1785177548) != 1)
						{
							unk_0x8702B5F35BDDD0C1(iLocal_58, unk_0xFC1458A37D98B502(), -1, 0);
							unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_122())
				{
					if (unk_0xD56F740235B1E8F0(iLocal_115))
					{
						if (!iLocal_107)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
							{
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
							{
								unk_0x8702B5F35BDDD0C1(iLocal_58, unk_0xFC1458A37D98B502(), -1, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
				{
					if (!func_108() && !iLocal_82)
					{
						if (func_107())
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					system::settimera(0);
					iLocal_93 = (unk_0x53C562FD2B9E3AB0() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_120()//Position - 0x5E21
{
	if (!func_108())
	{
		if (unk_0xB8DE76287EDC4957(iLocal_53, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0xA8D0477084E86A92(iLocal_58, iLocal_53, 0))
				{
					if (func_121(iLocal_58, 0) == 2)
					{
						if (iLocal_95 < unk_0x53C562FD2B9E3AB0())
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_121(int iParam0, int iParam1)//Position - 0x5E88
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

int func_122()//Position - 0x5F0D
{
	if ((!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1])) && !unk_0x3AB6A1A9084FB0A4(iLocal_58))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 1,5f, 1,5f, 5f, 0, 1, 2) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[1], 2,5f, 2,5f, 5f, 0, 1, 2)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 1,5f, 1,5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 0,5f, 0,5f, 5f, 0, 1, 1) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[1], 0,5f, 0,5f, 5f, 0, 1, 1)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 0,5f, 0,5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0x600F
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0xCA3C40448996C9BA(iLocal_50[1], unk_0xFC1458A37D98B502(), 120f))
			{
				if (!unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124()//Position - 0x6095
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0xCA3C40448996C9BA(iLocal_50[1], unk_0xFC1458A37D98B502(), 120f))
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0xCA3C40448996C9BA(iLocal_50[0], unk_0xFC1458A37D98B502(), 120f))
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x612E
{
	if (func_128())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_16(Global_104544))
		{
			func_126(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_16(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_126(int iParam0)//Position - 0x6181
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_92(func_127(iParam0), -1);
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
					func_92(func_127(iParam0), -1);
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
					func_92(func_127(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_127(int iParam0)//Position - 0x6262
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

int func_128()//Position - 0x62A4
{
	switch (func_129(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_129(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x62DA
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
		if (func_133(0))
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
		if (!func_131(iParam2))
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
			func_130(uParam0, iParam4);
		}
	}
	return 2;
}

void func_130(var uParam0, int iParam1)//Position - 0x6411
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

bool func_131(int iParam0)//Position - 0x6460
{
	return func_132(iParam0, Global_35861);
}

int func_132(int iParam0, int iParam1)//Position - 0x6471
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

int func_133(int iParam0)//Position - 0x6652
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_131(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_134()//Position - 0x6674
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_87))
	{
		unk_0xE30CF11C0EE14316(&iLocal_87);
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_88))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_58, 0))
		{
			iLocal_88 = func_99(iLocal_58, 0, 145);
			unk_0x9C27373CC69ECF87(iLocal_88, false);
		}
	}
	else
	{
		unk_0x9C27373CC69ECF87(iLocal_88, true);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_89[iLocal_92]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_50[iLocal_92], 0))
			{
				iLocal_89[iLocal_92] = func_99(iLocal_50[iLocal_92], 0, 145);
				unk_0x9C27373CC69ECF87(iLocal_89[iLocal_92], false);
			}
		}
		else
		{
			unk_0x9C27373CC69ECF87(iLocal_89[iLocal_92], true);
		}
		iLocal_92++;
	}
}

int func_135()//Position - 0x6717
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_99)
	{
		if (unk_0xF1DE6FAA2EFAA34F(vLocal_54 - Vector(30f, 30f, 30f), vLocal_54 + Vector(30f, 30f, 30f), 1) || unk_0x3A911AC310A76EEF(vLocal_54 - Vector(30f, 30f, 30f), vLocal_54 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_50[1]))
		{
			if (unk_0x21B6FFFD04C9FF3A(iLocal_50[0], unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7) || (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_50[0], unk_0xFC1458A37D98B502(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_50[0]) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_50[0])) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_50[1])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_50[1]))
					{
						if (unk_0x46D8E79A1B95ACE2(iLocal_50[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_50[1], unk_0xFC1458A37D98B502()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		iVar0 = unk_0xC733212BF9066BDF();
		if (unk_0x6ADD12BF4D6D2587(iLocal_53))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 1))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), iLocal_53) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_53, 0))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (unk_0xEBE499597C718EB8(iLocal_53, iVar0, 1))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck")) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck2")))
			{
				iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
				{
					if (unk_0x03760B63FE11B718(iVar1, iLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[0]) || unk_0x191BE1BC8F26F3C1(iLocal_50[0], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_50[0], unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_50[0]) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_50[0], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[1]) || unk_0x191BE1BC8F26F3C1(iLocal_50[1], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_50[1], unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_50[1]) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_50[1], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_58, 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_58, unk_0xFC1458A37D98B502(), 1))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_58, iVar0, 1))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (unk_0xEBE499597C718EB8(iLocal_58, unk_0xFC1458A37D98B502(), 1))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_136()//Position - 0x6AD1
{
	func_138(39, 1);
	func_138(40, 1);
	func_138(41, 1);
	func_138(42, 1);
	func_138(43, 1);
	func_138(44, 1);
	unk_0xCB389937EDB1519A(374,869f, -1358,043f, 25,667f, 452,41f, -1423,882f, 38,337f, 0, 1, 1, 1);
	unk_0xCB389937EDB1519A(vLocal_68 - Vector(20f, 20f, 20f), vLocal_68 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x60225D4F755DFDB1(vLocal_59, 50f, 0);
	unk_0x8D3373CFE9542320(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	unk_0x872F1C1F8587CCC7(&uLocal_97, 5);
	iLocal_58 = unk_0xAC992EFAD62C33BF(26, iLocal_60, vLocal_59, 0f, 1, true);
	unk_0x771A86309E0CA47B(iLocal_58, true);
	unk_0x14776E43F90DD454(iLocal_60);
	unk_0x5C5D33A1B2711D21(iLocal_58, false);
	unk_0xAE01EF4BC84AFE7C(iLocal_58, 185, true);
	unk_0xAE01EF4BC84AFE7C(iLocal_58, 206, true);
	unk_0xE17958D3FD0F9EE9(iLocal_58, 2, false);
	unk_0x8BB5ECF21DDE505B(iLocal_58, 1);
	unk_0x350CEE66BDF90273(iLocal_58, "REHOMGirl");
	unk_0x03924C68EFCBC511(iLocal_58, 0, 2, 1, 0);
	unk_0x03924C68EFCBC511(iLocal_58, 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_58, 3, 1, 4, 0);
	unk_0x03924C68EFCBC511(iLocal_58, 4, 0, 5, 0);
	unk_0x03924C68EFCBC511(iLocal_58, 6, 1, 0, 0);
	unk_0x4DE114E3C7F8B7C2("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		iLocal_50[iLocal_92] = unk_0xAC992EFAD62C33BF(6, iLocal_56, vLocal_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], 1, true);
		unk_0x771A86309E0CA47B(iLocal_50[iLocal_92], true);
		unk_0x14776E43F90DD454(iLocal_56);
		unk_0xCE93FCB8A8D8DF0B(iLocal_50[iLocal_92], iLocal_119);
		unk_0xAE01EF4BC84AFE7C(iLocal_50[iLocal_92], 42, true);
		iLocal_92++;
	}
	unk_0x9E058151726E58DE(iLocal_50[0], joaat("weapon_pistol"), -1, true, true);
	unk_0x9E058151726E58DE(iLocal_50[1], joaat("weapon_pistol"), -1, false, true);
	unk_0xF96119FCCD4D1889(5, iLocal_119, 1862763509);
	unk_0xF96119FCCD4D1889(1, iLocal_119, -1533126372);
	unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_119);
	iLocal_53 = unk_0xEA60F3B426BB095B(iLocal_57, vLocal_54, fLocal_55, true, true, false);
	unk_0x2E4932E63763FE26(iLocal_57, true);
	unk_0xACE486395AA1867D(iLocal_53, 1084227584);
	unk_0xBB4910CCAB2BEDFA(iLocal_53, 1);
	func_137(&uLocal_120, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	func_137(&uLocal_120, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	func_137(&uLocal_120, 3, iLocal_58, "REHOMGirl", 0, 1);
	if (func_101() == 0)
	{
		func_137(&uLocal_120, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (func_101() == 1)
	{
		func_137(&uLocal_120, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	iLocal_115 = unk_0x8383F9C605E523B7(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x56FEE2DE0493113C(iLocal_115, iLocal_53, 0);
	unk_0x8E628F774C748D93(iLocal_58, iLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x8E628F774C748D93(iLocal_50[0], iLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x8E628F774C748D93(iLocal_50[1], iLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xD0E12C501EE26329(iLocal_115, true);
}

void func_137(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x6DCC
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

void func_138(int iParam0, bool bParam1)//Position - 0x6E67
{
	if (bParam1)
	{
		if (!func_145(iParam0, 2, 1))
		{
			func_144(iParam0, 2, 1);
		}
	}
	else if (func_145(iParam0, 2, 1))
	{
		func_139(iParam0, 2, 1);
	}
}

void func_139(int iParam0, int iParam1, bool bParam2)//Position - 0x6E9E
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_11() == 0)
		{
			iVar0 = func_142(func_143(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_140(func_143(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6F07
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_141(var uParam0)//Position - 0x6F37
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_142(int iParam0, int iParam1, int iParam2)//Position - 0x6F6B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_141(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x6F9D
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

void func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x7282
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_11() == 0)
		{
			iVar0 = func_142(func_143(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_140(func_143(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)//Position - 0x72EB
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_11() == 0)
		{
			return unk_0xC80D31E4B587871C(func_142(func_143(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_146()//Position - 0x734B
{
	unk_0x6FF834D85E2DD4C6(iLocal_60);
	unk_0x6FF834D85E2DD4C6(iLocal_56);
	unk_0x6FF834D85E2DD4C6(iLocal_57);
	unk_0x6450931B826B49D9("random@homelandsecurity");
	if (((unk_0x9A0B2ED5055D3F0B(iLocal_60) && unk_0x9A0B2ED5055D3F0B(iLocal_56)) && unk_0x9A0B2ED5055D3F0B(iLocal_57)) && unk_0x3A801AA34DD821BE("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_60);
		unk_0x6FF834D85E2DD4C6(iLocal_56);
		unk_0x6FF834D85E2DD4C6(iLocal_57);
		unk_0x6450931B826B49D9("random@homelandsecurity");
	}
}

void func_147()//Position - 0x73B6
{
	iLocal_60 = joaat("a_f_y_tourist_01");
	iLocal_56 = joaat("a_m_o_acult_01");
	iLocal_57 = joaat("fugitive");
	vLocal_59 = { -174,0522f, 1905,611f, 197,0466f };
	vLocal_51[0 /*3*/] = { -174,3279f, 1903,972f, 197,0502f };
	fLocal_52[0] = 147,8596f;
	vLocal_51[1 /*3*/] = { -174,3233f, 1906,384f, 197,0145f };
	fLocal_52[1] = 164,5974f;
	vLocal_54 = { -172,4207f, 1905,183f, 197,1163f };
	fLocal_55 = 187,3899f;
	vLocal_67 = { 469,8768f, 2617,532f, 42,2566f };
	vLocal_68 = { 472,2393f, 2611,611f, 42,2676f };
	vLocal_69 = { -1034,6f, 4918,6f, 205,9f };
	iLocal_71 = 1;
}

int func_148()//Position - 0x747C
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_159())
		{
			return 0;
		}
	}
	if (func_155())
	{
		return 1;
	}
	if (func_149(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_149(float fParam0, bool bParam1)//Position - 0x7502
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
		if (func_24(func_101()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_150(iVar1, &Var0);
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

void func_150(int iParam0, var uParam1)//Position - 0x75B9
{
	switch (iParam0)
	{
		case 0:
			func_151(uParam1, "Abigail1", func_153(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 1:
			func_151(uParam1, "Abigail2", func_153(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 2:
			func_151(uParam1, "Barry1", func_153(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 3:
			func_151(uParam1, "Barry2", func_153(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 4:
			func_151(uParam1, "Barry3", func_153(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 5:
			func_151(uParam1, "Barry3A", func_153(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 6:
			func_151(uParam1, "Barry3C", func_153(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 7:
			func_151(uParam1, "Barry4", func_153(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_152(iParam0), 0, 0);
			break;
		
		case 8:
			func_151(uParam1, "Dreyfuss1", func_153(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 9:
			func_151(uParam1, "Epsilon1", func_153(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 10:
			func_151(uParam1, "Epsilon2", func_153(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 11:
			func_151(uParam1, "Epsilon3", func_153(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 12:
			func_151(uParam1, "Epsilon4", func_153(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 13:
			func_151(uParam1, "Epsilon5", func_153(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 14:
			func_151(uParam1, "Epsilon6", func_153(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 15:
			func_151(uParam1, "Epsilon7", func_153(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 16:
			func_151(uParam1, "Epsilon8", func_153(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 17:
			func_151(uParam1, "Extreme1", func_153(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 18:
			func_151(uParam1, "Extreme2", func_153(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 19:
			func_151(uParam1, "Extreme3", func_153(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 20:
			func_151(uParam1, "Extreme4", func_153(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 21:
			func_151(uParam1, "Fanatic1", func_153(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_152(iParam0), 1, 0);
			break;
		
		case 22:
			func_151(uParam1, "Fanatic2", func_153(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_152(iParam0), 1, 0);
			break;
		
		case 23:
			func_151(uParam1, "Fanatic3", func_153(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_152(iParam0), 0, 1);
			break;
		
		case 24:
			func_151(uParam1, "Hao1", func_153(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_152(iParam0), 0, 1);
			break;
		
		case 25:
			func_151(uParam1, "Hunting1", func_153(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 26:
			func_151(uParam1, "Hunting2", func_153(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 27:
			func_151(uParam1, "Josh1", func_153(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 28:
			func_151(uParam1, "Josh2", func_153(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 29:
			func_151(uParam1, "Josh3", func_153(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 30:
			func_151(uParam1, "Josh4", func_153(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 31:
			func_151(uParam1, "Maude1", func_153(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 32:
			func_151(uParam1, "Minute1", func_153(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 33:
			func_151(uParam1, "Minute2", func_153(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 34:
			func_151(uParam1, "Minute3", func_153(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 35:
			func_151(uParam1, "MrsPhilips1", func_153(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 36:
			func_151(uParam1, "MrsPhilips2", func_153(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 37:
			func_151(uParam1, "Nigel1", func_153(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 38:
			func_151(uParam1, "Nigel1A", func_153(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 39:
			func_151(uParam1, "Nigel1B", func_153(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 40:
			func_151(uParam1, "Nigel1C", func_153(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 41:
			func_151(uParam1, "Nigel1D", func_153(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 42:
			func_151(uParam1, "Nigel2", func_153(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 43:
			func_151(uParam1, "Nigel3", func_153(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 44:
			func_151(uParam1, "Omega1", func_153(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 45:
			func_151(uParam1, "Omega2", func_153(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 46:
			func_151(uParam1, "Paparazzo1", func_153(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 47:
			func_151(uParam1, "Paparazzo2", func_153(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 48:
			func_151(uParam1, "Paparazzo3", func_153(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 49:
			func_151(uParam1, "Paparazzo3A", func_153(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 50:
			func_151(uParam1, "Paparazzo3B", func_153(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 51:
			func_151(uParam1, "Paparazzo4", func_153(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 52:
			func_151(uParam1, "Rampage1", func_153(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 54:
			func_151(uParam1, "Rampage3", func_153(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 55:
			func_151(uParam1, "Rampage4", func_153(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 56:
			func_151(uParam1, "Rampage5", func_153(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 53:
			func_151(uParam1, "Rampage2", func_153(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 57:
			func_151(uParam1, "TheLastOne", func_153(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 58:
			func_151(uParam1, "Tonya1", func_153(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 59:
			func_151(uParam1, "Tonya2", func_153(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 60:
			func_151(uParam1, "Tonya3", func_153(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 61:
			func_151(uParam1, "Tonya4", func_153(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 62:
			func_151(uParam1, "Tonya5", func_153(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_151(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x8730
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

int func_152(int iParam0)//Position - 0x87C1
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

struct<2> func_153(int iParam0)//Position - 0x8B07
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_154(iParam0) };
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

struct<2> func_154(int iParam0)//Position - 0x8B3D
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

int func_155()//Position - 0x8F88
{
	if (func_158() && !func_159())
	{
		return 1;
	}
	if (func_157() && func_156())
	{
		return 1;
	}
	return 0;
}

bool func_156()//Position - 0x8FBA
{
	return Global_104273 > 0;
}

int func_157()//Position - 0x8FC8
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0x8FDD
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_159()//Position - 0x9003
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

int func_160()//Position - 0x9020
{
	if (!func_131(5))
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_159())
		{
			return 0;
		}
	}
	if (func_149(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_161()//Position - 0x9082
{
	if ((Global_104544 == func_30() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x90AD
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_164(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_163();
}

void func_163()//Position - 0x90E3
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

void func_164(int iParam0)//Position - 0x9120
{
	Global_104544 = iParam0;
}

int func_165(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x912E
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
		iParam1 = func_30();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_206())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_159())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (func_205())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_24(func_101()))
		{
			if (func_149(100f, 1) != -1)
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
		if (!func_204(iParam1))
		{
			return 0;
		}
		if (func_24(func_101()))
		{
			if (func_203(func_101()) == 4 || func_203(func_101()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_101()))
		{
			if (!func_202(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_201(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_200())
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
		if (!func_191(4))
		{
			return 0;
		}
		if (!func_131(5))
		{
			return 0;
		}
		if (func_190(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_190(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_204(30) && !func_190(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_101()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_189(iVar4))
				{
					if (func_167(iVar2))
					{
						if (!func_166(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_101() != iVar2)
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

bool func_166(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x94C8
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_167(int iParam0)//Position - 0x950F
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_168(iVar0);
}

int func_168(int iParam0)//Position - 0x9530
{
	return func_169(iParam0, 1);
}

int func_169(int iParam0, int iParam1)//Position - 0x953F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_189(iParam0))
	{
		return 0;
	}
	func_170(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9592
{
	func_171(func_182(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_171(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x95B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_181(iParam0, iParam1))
	{
		iVar0 = func_180(iParam1);
		iVar1 = func_178(iParam0);
		iVar2 = (func_178(iParam0) - func_178(iParam1));
		iVar3 = (func_180(iParam0) - func_180(iParam1));
		iVar4 = (func_177(iParam0) - func_177(iParam1));
		iVar5 = (func_176(iParam0) - func_176(iParam1));
		iVar6 = (func_175(iParam0) - func_175(iParam1));
		iVar7 = (func_174(iParam0) - func_174(iParam1));
	}
	else
	{
		iVar0 = func_180(iParam0);
		iVar1 = func_178(iParam1);
		iVar2 = (func_178(iParam1) - func_178(iParam0));
		iVar3 = (func_180(iParam1) - func_180(iParam0));
		iVar4 = (func_177(iParam1) - func_177(iParam0));
		iVar5 = (func_176(iParam1) - func_176(iParam0));
		iVar6 = (func_175(iParam1) - func_175(iParam0));
		iVar7 = (func_174(iParam1) - func_174(iParam0));
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
		iVar4 = (iVar4 + func_173(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_172(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_172(float fParam0, float fParam1, float fParam2)//Position - 0x97B1
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

int func_173(int iParam0, int iParam1)//Position - 0x97F3
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

int func_174(int iParam0)//Position - 0x9895
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_175(int iParam0)//Position - 0x98A8
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_176(int iParam0)//Position - 0x98BB
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_177(int iParam0)//Position - 0x98CE
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_178(int iParam0)//Position - 0x98E0
{
	return (system::shift_right(iParam0, 26) & 31 * func_179(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_179(bool bParam0, int iParam1, int iParam2)//Position - 0x9905
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_180(int iParam0)//Position - 0x991C
{
	return iParam0 & 15;
}

int func_181(int iParam0, int iParam1)//Position - 0x9929
{
	int iVar0;
	int iVar1;
	
	if (!func_189(iParam1) || !func_189(iParam0))
	{
		return 1;
	}
	iVar0 = func_178(iParam0);
	iVar1 = func_178(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_182()//Position - 0x9A35
{
	var uVar0;
	
	func_188(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_187(&uVar0, unk_0x95327550F0F2BE7C());
	func_186(&uVar0, unk_0x674C9438180770FE());
	func_185(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_184(&uVar0, unk_0xEAF455949B108589());
	func_183(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_183(var uParam0, int iParam1)//Position - 0x9A7B
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

void func_184(var uParam0, int iParam1)//Position - 0x9B01
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(var uParam0, int iParam1)//Position - 0x9B34
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180(*uParam0);
	iVar1 = func_178(*uParam0);
	if (iParam1 < 1 || iParam1 > func_173(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_186(var uParam0, int iParam1)//Position - 0x9B85
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_187(var uParam0, int iParam1)//Position - 0x9BBF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_188(var uParam0, int iParam1)//Position - 0x9BFA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_189(int iParam0)//Position - 0x9C36
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
	iVar0 = func_174(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_175(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_176(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_178(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_180(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_177(iParam0);
	if (iVar5 < 1 || iVar5 > func_173(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0, int iParam1)//Position - 0x9D12
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x9D35
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_101();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_199()) || Global_103602) || Global_25235) || func_198()) || func_76(8, -1)) || func_197()) || func_196()) || func_195()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_199()) || Global_25235) || func_198()) || func_76(8, -1)) || func_195()) || func_197()) || func_196()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_199()) || Global_103602) || Global_25235) || func_198()) || func_76(8, -1)) || func_195()) || func_197()) || func_196()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_199()) || Global_103602) || Global_25235) || func_198()) || func_76(8, -1)) || func_197()) || func_196()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_199() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_76(8, -1)) || func_194()) || func_193()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_76(8, -1) || func_197()) || func_196()) || func_193()) || func_192())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_199()) || Global_25235) || func_198()) || func_76(8, -1)) || func_196()) || func_195()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_199()) || func_196()) || Global_103602) || Global_25235) || func_198()) || Global_36993) || func_76(8, -1)) || func_195()) || func_193()) || func_194()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_199()) || Global_103602) || Global_25235) || func_198()) || func_76(8, -1)) || func_195()) || func_193()) || func_197()) || func_196()) || func_194())
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

var func_192()//Position - 0xA452
{
	return Global_92872.f_1;
}

int func_193()//Position - 0xA460
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_194()//Position - 0xA486
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0xA4A0
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

bool func_196()//Position - 0xA4CA
{
	return Global_92885.f_316 > 0;
}

bool func_197()//Position - 0xA4DB
{
	return Global_92885.f_315 > 0;
}

var func_198()//Position - 0xA4EC
{
	return Global_1312854;
}

int func_199()//Position - 0xA4F8
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_200()//Position - 0xA514
{
	func_74();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0)//Position - 0xA53C
{
	return func_181(func_182(), iParam0);
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0xA54E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_101();
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

int func_203(int iParam0)//Position - 0xA632
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_204(int iParam0)//Position - 0xA656
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_206())
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

int func_205()//Position - 0xA6B4
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

int func_206()//Position - 0xA6F8
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

void func_207()//Position - 0xA7B3
{
	int iVar0;
	
	if (iLocal_70)
	{
		func_221(0);
		if (Global_25472)
		{
			unk_0x8810DC630928B398("AC_STOP");
		}
		func_220();
		unk_0x3CDDC4760DBA4651();
		unk_0x02F80DDFB33C6E60(420,5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0xBD88542932C8F3A2(unk_0x9EB17624F44A8DA4());
		unk_0x94BD6F0436473406(1f);
		func_96();
		if (iLocal_71)
		{
			unk_0x14776E43F90DD454(iLocal_60);
			unk_0x14776E43F90DD454(iLocal_56);
			unk_0x14776E43F90DD454(iLocal_57);
			unk_0x2E4932E63763FE26(iLocal_57, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_50[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_50[iVar0]))
				{
					if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0xCDACC23C56C1F7F5(iLocal_50[iVar0], func_219(unk_0x9EB17624F44A8DA4()), -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_50[iVar0], true);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
						{
							unk_0xF21E6EBE8EFDCC28(iLocal_58, -1);
							unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
						}
					}
					unk_0x771A86309E0CA47B(iLocal_50[iVar0], false);
				}
				unk_0x486F346ADFE56674(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_58))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_58, 317, true);
				if (unk_0xC816B63289F7A279(iLocal_58))
				{
					unk_0x88235B448509228B(iLocal_58);
				}
				if (!unk_0x88DDBE9908752BF0(iLocal_58, 0))
				{
					unk_0x28B82FCEA0848032(iLocal_58);
				}
				unk_0x771A86309E0CA47B(iLocal_58, false);
			}
			unk_0x486F346ADFE56674(&iLocal_58);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_53))
		{
			unk_0x5380482A432E314E(&iLocal_53);
		}
		unk_0x1D29C781A978C4FB(5, true);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
	}
	func_208(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_208(int iParam0)//Position - 0xA93D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_161())
	{
		func_212(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_211(30000);
		StringCopy(&cVar0, func_210(Global_104544, 1), 64);
		if (func_29(Global_104544) > 0)
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
	func_209(&Global_25292);
	Global_104545 = 0;
	func_164(-1);
}

void func_209(var uParam0)//Position - 0xA9F2
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

char* func_210(int iParam0, bool bParam1)//Position - 0xAA2F
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

void func_211(int iParam0)//Position - 0xAC78
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_212(int iParam0)//Position - 0xAC8A
{
	func_213(iParam0, 0, func_218(iParam0));
}

void func_213(int iParam0, int iParam1, int iParam2)//Position - 0xAC9F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_182();
	func_216(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_215(iParam0, &uVar0);
	Var1 = { func_214(&uVar0) };
}

struct<16> func_214(var uParam0)//Position - 0xACCE
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_177(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_178(*uParam0), 64);
	return Var0;
}

void func_215(int iParam0, var uParam1)//Position - 0xAD9D
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xADB5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_180(*uParam0);
	iVar2 = func_177(*uParam0);
	iVar3 = func_176(*uParam0);
	iVar4 = func_175(*uParam0);
	iVar5 = func_174(*uParam0);
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
	iVar6 = func_173(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_173(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_217(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAF37
{
	func_188(uParam0, iParam1);
	func_187(uParam0, iParam2);
	func_186(uParam0, iParam3);
	func_184(uParam0, iParam5);
	func_185(uParam0, iParam4);
	func_183(uParam0, iParam6);
}

int func_218(int iParam0)//Position - 0xAF6F
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

Vector3 func_219(int iParam0)//Position - 0xB112
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_220()//Position - 0xB125
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_221(bool bParam0)//Position - 0xB141
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_138(iVar0, bParam0);
		iVar0++;
	}
}

