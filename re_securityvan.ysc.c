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
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_62[2] = { 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	vector3 vLocal_276 = { 0f, 0f, 0f };
	vector3 vLocal_277 = { 0f, 0f, 0f };
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	vector3 vLocal_293 = { 0f, 0f, 0f };
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
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
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	vLocal_65 = { 0,0203f, -3,1441f, 0,5027f };
	vLocal_66 = { 90f, 0f, 0f };
	vLocal_68 = { 0f, 0f, 0f };
	vLocal_69 = { 0f, 0f, 0f };
	iLocal_95 = 1;
	iLocal_96 = 1;
	cLocal_105 = "RESECAU";
	iLocal_271 = -1;
	fLocal_275 = -3,55f;
	vLocal_276 = { 0,014f, -0,9111f, 1,2317f };
	vLocal_277 = { 0f, -3,4368f, 1,2317f };
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_295 = -1;
	vLocal_67 = { vLocal_67 };
	vLocal_67 = { ScriptParam_302.f_1[0 /*3*/] };
	if (system::vdist(vLocal_67, -337,3338f, -1460,373f, 29,5668f) < 5f)
	{
		iLocal_45 = 1;
	}
	else if (system::vdist(vLocal_67, -588,4711f, -866,9462f, 25,3292f) < 5f)
	{
		iLocal_45 = 2;
	}
	else if (system::vdist(vLocal_67, -389f, 6061f, 31f) < 5f)
	{
		iLocal_45 = 3;
	}
	else if (system::vdist(vLocal_67, -600f, -1094f, 22,76f) < 5f)
	{
		iLocal_45 = 4;
	}
	else if (system::vdist(vLocal_67, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_45 = 5;
	}
	else if (system::vdist(vLocal_67, -595,5618f, -667,7235f, 31,0544f) < 5f)
	{
		iLocal_45 = 6;
	}
	else if (system::vdist(vLocal_67, 3018,384f, 3634,017f, 70,4076f) < 5f)
	{
		iLocal_45 = 7;
	}
	else if (system::vdist(vLocal_67, -2815,661f, 2208,171f, 27,8382f) < 5f)
	{
		iLocal_45 = 8;
	}
	else if (system::vdist(vLocal_67, 856,7742f, -2067,845f, 29,0704f) < 5f)
	{
		iLocal_45 = 9;
	}
	else if (system::vdist(vLocal_67, 805,1932f, -703,1327f, 28,1632f) < 5f)
	{
		iLocal_45 = 10;
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (Global_3)
	{
		if (iLocal_45 != 2)
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	else
	{
		if (unk_0x7D9C4B359376D38A(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
					{
						if (!unk_0xA8D0477084E86A92(iLocal_49[iVar0], iLocal_50, 0))
						{
							unk_0x6F8C8278B7C06889(iLocal_49[iVar0], iLocal_50, -1, func_242(iLocal_50), 2f, 1, 0);
						}
					}
					else
					{
						unk_0x270054D97CD161A8(iLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_225();
		}
		if (!func_185(vLocal_67, 9, iLocal_45, 1, 0))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
		else
		{
			func_182(-1);
		}
	}
	func_181();
	iLocal_59 = unk_0xCB389937EDB1519A(vLocal_63 + Vector(30f, 30f, 30f), vLocal_63 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		system::wait(0);
		func_178(&uLocal_123);
		if (!func_177())
		{
			if (func_176())
			{
				func_225();
			}
			unk_0x48D75120C879E65E("RE_SV", 0);
			switch (iLocal_298)
			{
				case 0:
					if (unk_0x42F1FE4C7EC5F51E() && !func_164())
					{
						if (func_155())
						{
							if ((iLocal_44 == 3 && !(unk_0x9E06F0EE20F58CED(vLocal_63, 3f) && func_154(unk_0xFC1458A37D98B502(), vLocal_63, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!unk_0x9E06F0EE20F58CED(vLocal_63, 8f))
									{
										unk_0x247EAA2E93D4A021(vLocal_63, 4f, 1, 0, 0, false);
									}
									iLocal_46 = 4;
									bLocal_79 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_153();
								if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && iLocal_44 == 3)
								{
									unk_0xFB2E9855F95E3BD3(iLocal_50, 5f);
								}
								system::settimera(0);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_225();
					}
					break;
				
				case 1:
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xB8DE76287EDC4957(iLocal_50, 0))
					{
						if (((system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) < 10000f || !unk_0xEC211A86AB3726B6(iLocal_50)) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0xEC211A86AB3726B6(iLocal_49[0]))) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0xEC211A86AB3726B6(iLocal_49[1])))
						{
							iLocal_298++;
						}
					}
					if (func_152())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 1)
					{
						system::settimera(0);
					}
					break;
				
				case 2:
					if (system::timera() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_147();
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_50) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						if (iLocal_44 == 3)
						{
							func_142();
							if (!unk_0xEC211A86AB3726B6(iLocal_50) && (system::vdist(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 100f || func_152()))
							{
								func_133(1);
							}
						}
						else if (((!unk_0xEC211A86AB3726B6(iLocal_50) && iLocal_46 == 4) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_70, vLocal_71, fLocal_72, 0, true, 0)) || func_152())
						{
							func_133(1);
						}
						if ((iLocal_46 == 4 && unk_0xEC211A86AB3726B6(iLocal_50)) && iLocal_44 != 3)
						{
							if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) > 100f)
							{
								func_225();
							}
							else
							{
								func_133(1);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0xEC211A86AB3726B6(iLocal_50))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) > 62500f)
					{
						func_225();
					}
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) > 10000f && !unk_0x42F1FE4C7EC5F51E())
					{
						func_225();
					}
				}
			}
		}
		else
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			if (!unk_0xA6DECE14FC9A8C51(iLocal_57))
			{
				if (!func_132(2) && !bLocal_84)
				{
					if (!unk_0xF491DD47B88AA84E())
					{
						func_131("SV_VANHELP1", 15000);
						func_130(2);
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_52))
				{
					if (iLocal_299 != 0)
					{
						if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_52, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < system::pow(50f, 2f))
						{
							iLocal_299 = 0;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				else if (((bLocal_79 && !unk_0xB8B3E5529EDB87D4(iLocal_103)) && unk_0xB8DE76287EDC4957(iLocal_50, 0)) && !bLocal_89)
				{
					if (iLocal_299 != 1)
					{
						if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < system::pow(50f, 2f))
						{
							iLocal_299 = 1;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				else if (unk_0xB8B3E5529EDB87D4(iLocal_103))
				{
					if (iLocal_299 != 2)
					{
						if (system::vdist2(unk_0x20752E4B9ABBF6F5(iLocal_103), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < system::pow(50f, 2f))
						{
							iLocal_299 = 2;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				if (iLocal_299 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_52))
					{
						func_122(&uLocal_111, iLocal_52, 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_52, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > system::pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 1)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 1))
					{
						func_122(&uLocal_111, iLocal_50, 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > system::pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 2)
				{
					if (unk_0xB8B3E5529EDB87D4(iLocal_103))
					{
						func_98(&uLocal_111, unk_0x20752E4B9ABBF6F5(iLocal_103), 0, 0, 1, 1, 1);
						if (system::vdist2(unk_0x20752E4B9ABBF6F5(iLocal_103), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > system::pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_129(&uLocal_111, 0, 0);
						}
					}
				}
				if (((!unk_0x191BE1BC8F26F3C1(iLocal_50, 0) && bLocal_79) && !bLocal_81) && (!func_132(0) || (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_stickybomb"), 0) && !func_132(1))))
				{
					switch (iLocal_100)
					{
						case 0:
							if (!unk_0xF491DD47B88AA84E() && system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 225f)
							{
								func_131("SV_DOORHELP1", 15000);
								func_130(0);
								iLocal_100++;
							}
							break;
						
						case 1:
							if (!unk_0xF491DD47B88AA84E())
							{
								iLocal_101 = unk_0x53C562FD2B9E3AB0();
								iLocal_100++;
							}
							break;
						
						case 2:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 2000 && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_stickybomb"), 0))
							{
								func_131("SV_DOORHELP2", 15000);
								func_130(1);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (func_97("SV_DOORHELP1") || func_97("SV_DOORHELP2"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_147();
					break;
				
				case 2:
					func_89();
					break;
				
				case 3:
					func_87();
					break;
				
				case 4:
					func_142();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
					{
						if (unk_0x3808DB9C2B40EC8A(iLocal_49[0]) != 3)
						{
							unk_0x2B6F1F3CC961464F(iLocal_49[0], 3);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
					{
						if (unk_0x3808DB9C2B40EC8A(iLocal_49[1]) != 3)
						{
							unk_0x2B6F1F3CC961464F(iLocal_49[1], 3);
						}
					}
					if (((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0)) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && !unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0))
					{
						iLocal_95 = 1;
						func_73(iLocal_49[1]);
						func_71(0, 1);
					}
					else if (iLocal_95 == 1)
					{
						if (unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) || unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0))
						{
							iLocal_48 = 0;
							iLocal_95 = 0;
						}
						else
						{
							func_73(iLocal_49[1]);
						}
					}
					else if (iLocal_95 == 0)
					{
						if (unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0))
						{
							iLocal_95 = -1;
						}
						else
						{
							func_73(iLocal_49[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_225();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0) == unk_0xFC1458A37D98B502()) && !bLocal_83) && iLocal_46 != 8)
			{
				if (bLocal_79)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (bLocal_80)
			{
				if (unk_0x8801269555D2E37F(iLocal_60, 1862763509) != 5)
				{
					unk_0xF96119FCCD4D1889(5, iLocal_60, 1862763509);
					unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((unk_0xB8B3E5529EDB87D4(iLocal_103) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iLocal_103)) > 250f)
				{
					func_62(9);
				}
			}
			if (!bLocal_89)
			{
				if (func_61())
				{
					bLocal_89 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x6ADD12BF4D6D2587(iLocal_49[iVar2]))
				{
					if ((!unk_0x191BE1BC8F26F3C1(iLocal_49[iVar2], 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar2])) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_49[0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_50))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 0))
						{
							iVar3 = 1;
						}
					}
					if ((system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 10000f && unk_0xEC211A86AB3726B6(iLocal_50)) || system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_37();
				}
			}
			func_33();
			func_28();
			func_23();
		}
		if (!bLocal_77)
		{
			if (func_22())
			{
				iLocal_93 = unk_0x53C562FD2B9E3AB0();
				bLocal_77 = true;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_93) > 5000)
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
					if (func_21() < 30f)
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_78 = true;
						}
					}
					else
					{
						bLocal_78 = true;
					}
				}
			}
		}
		if (((unk_0x53C562FD2B9E3AB0() - iLocal_93) > 10000 && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) && !iLocal_92)
		{
			iVar4 = unk_0x63A6486593EC7EC3(0, 3);
			if (iVar4 == 0)
			{
				unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 1;
		}
		if (bLocal_78)
		{
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(func_3(), 1)) < system::pow(50f, 2f))
				{
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
					}
					unk_0x21F3C6CF48BB24BE(unk_0x9EB17624F44A8DA4(), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
				}
			}
		}
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0 && func_2())
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x8212F63113683BF7(iLocal_50, 0) > 0f || unk_0x8212F63113683BF7(iLocal_50, 1) > 0f)
			{
				if (unk_0x37956F2B588E40E6(iLocal_50) == 3)
				{
					unk_0x4BEFCD5DAE410A90(iLocal_50, 1);
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 0))
				{
					bLocal_82 = true;
				}
			}
			if (!bLocal_82)
			{
				if (unk_0x8212F63113683BF7(iLocal_50, 0) == 0f && unk_0x8212F63113683BF7(iLocal_50, 1) == 0f)
				{
					if (unk_0x37956F2B588E40E6(iLocal_50) == 1)
					{
						unk_0x4BEFCD5DAE410A90(iLocal_50, 3);
					}
				}
			}
		}
		if (iLocal_97 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				unk_0x15AAE2A89BBE596D(iLocal_97);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar5]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[iVar5], 0))
				{
					if (unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_300[iVar5])
							{
								unk_0x8C99D3DA85352032(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x8C99D3DA85352032(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_300[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_301[iVar5])
							{
								unk_0x8C99D3DA85352032(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x8C99D3DA85352032(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_301[iVar5] = 1;
							}
						}
						if (unk_0xC931425E2B416A2F(iLocal_49[iVar5], 4) && !iLocal_85)
						{
							unk_0x28B42081D6BEFFF2(iLocal_49[iVar5], true);
							iLocal_85 = 1;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 0, -8f);
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 1, -8f);
							iLocal_300[iVar5] = 0;
						}
						if (iLocal_301[iVar5])
						{
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 0, -8f);
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 1, -8f);
							iLocal_301[iVar5] = 0;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0;
							iLocal_301[iVar5] = 0;
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 0, -8f);
							unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 1, -8f);
						}
						if (unk_0xC931425E2B416A2F(iLocal_49[iVar5], 4) && iLocal_85)
						{
							unk_0x28B42081D6BEFFF2(iLocal_49[iVar5], true);
							iLocal_85 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0;
						iLocal_301[iVar5] = 0;
						unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 0, -8f);
						unk_0x704EA8DED5AC0753(iLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0xDFFD5F8C8ABCB7EF(iLocal_52)) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96])) && !unk_0xA5F6598E13F98E08(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 3)) && !unk_0xA5F6598E13F98E08(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0xA5F6598E13F98E08(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x12C9D41D52A560D6(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_86)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_50))
			{
				if (unk_0xEBE499597C718EB8(iLocal_50, unk_0xFC1458A37D98B502(), 1))
				{
					iLocal_86 = 1;
				}
				unk_0x2B0DDE3D071497AD(iLocal_50);
			}
		}
	}
}

int func_1()//Position - 0x11B9
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_2()//Position - 0x11D5
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && (((unk_0xB8DE76287EDC4957(iLocal_50, 0) && bLocal_84) && unk_0xB8B3E5529EDB87D4(iLocal_103)) || (!unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0xB8B3E5529EDB87D4(iLocal_103)))) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) < 20f) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iLocal_103)) < 20f)
	{
		iVar1 = unk_0xF4DDB3917F071FA0(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x3AB6A1A9084FB0A4(iVar1))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar1) == joaat("s_m_y_cop_01") || unk_0x82FF3DFBC3965CC0(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0xF4DDB3917F071FA0(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar0, fVar0, fVar0, -1);
		if (!unk_0x3AB6A1A9084FB0A4(iVar1))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar1) == joaat("s_m_y_cop_01") || unk_0x82FF3DFBC3965CC0(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0xB306EEF0A280A8F5(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar0, 0, 1024);
		if (unk_0xB8DE76287EDC4957(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0xB306EEF0A280A8F5(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar0, 0, 1024);
		if (unk_0xB8DE76287EDC4957(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()//Position - 0x1335
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
		{
			fVar0 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[0], 1));
			iVar1 = 0;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
		{
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[1], 1)) < fVar0)
			{
				fVar0 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[1], 1));
				iVar1 = 1;
			}
		}
	}
	return iLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13C8
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x1416
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()//Position - 0x16E2
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

void func_7()//Position - 0x1714
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

int func_8()//Position - 0x17A9
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x17D0
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

void func_10()//Position - 0x1869
{
	if (func_16(14))
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
		Global_14453 = func_11();
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

int func_11()//Position - 0x190B
{
	func_12();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_12()//Position - 0x1924
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_15(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_14(unk_0xFC1458A37D98B502());
			if (func_13(iVar0) && (!func_16(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_13(Global_104555.f_2353.f_539.f_4301))
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

bool func_13(int iParam0)//Position - 0x1A21
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x1A2D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x1A6A
{
	if (func_13(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0x1A94
{
	return Global_35861 == iParam0;
}

void func_17()//Position - 0x1AA2
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

bool func_18(int iParam0, int iParam1)//Position - 0x1AFA
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

void func_19()//Position - 0x1B35
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1B8C
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
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

float func_21()//Position - 0x1BE2
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
		{
			fVar0 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[0], 1));
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
		{
			if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[1], 1)) < fVar0)
			{
				fVar0 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[1], 1));
			}
		}
	}
	return system::sqrt(fVar0);
}

int func_22()//Position - 0x1C6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_49)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_49[iVar1]))
			{
				if (((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar1]) && unk_0xEBE499597C718EB8(iLocal_49[iVar1], unk_0xFC1458A37D98B502(), 1)) || unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar1])) || unk_0x191BE1BC8F26F3C1(iLocal_49[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && iLocal_86)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()//Position - 0x1D11
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_52))
			{
				if (!unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
				{
					unk_0x452336926718D62A(&iLocal_52);
					if (!unk_0xB8B3E5529EDB87D4(iLocal_103) && !bLocal_81)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() - iLocal_102) > 3000)
				{
					if (unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]) || unk_0x9F887157983E8EFC(iLocal_49[iLocal_96]))
					{
						unk_0x6B7C10B19928914F(iLocal_52, 1, true);
						iLocal_102 = unk_0x53C562FD2B9E3AB0();
					}
				}
			}
			else if (!unk_0xB8B3E5529EDB87D4(iLocal_103))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]) || ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]) && unk_0x9F887157983E8EFC(iLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			unk_0x452336926718D62A(&iLocal_52);
		}
		if (unk_0xB8B3E5529EDB87D4(iLocal_103))
		{
			unk_0x60727D07B2D72C82(iLocal_103);
		}
	}
}

void func_24(vector3 vParam0, bool bParam1)//Position - 0x1DFE
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				vParam0 = { unk_0xCC1609D1BF2658E4(unk_0x3F90543934DCD7E6(iLocal_50, 0f, -3,3f, 0f), 1,2f, 1,5f) };
			}
			else
			{
				vParam0 = { unk_0xCC1609D1BF2658E4(unk_0xB3328BA8976B416C(iLocal_49[iLocal_96], 0), 1,2f, 1,5f) };
			}
		}
		unk_0x872F1C1F8587CCC7(&iLocal_104, 3);
		unk_0x872F1C1F8587CCC7(&iLocal_104, 4);
		unk_0x872F1C1F8587CCC7(&iLocal_104, 1);
		if (bParam1)
		{
			iLocal_103 = unk_0x85CE54AA667066FE(joaat("pickup_money_security_case"), vParam0, unk_0xDB824D597B53CC40(iLocal_52, 2), 0, iLocal_94, 2, 1, 0);
		}
		else
		{
			iLocal_103 = unk_0x06583789B8C15A6C(joaat("pickup_money_security_case"), vParam0, iLocal_104, iLocal_94, 1, 0);
		}
		if (!unk_0xA6DECE14FC9A8C51(iLocal_58))
		{
			iLocal_58 = func_25(iLocal_103);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			unk_0x452336926718D62A(&iLocal_52);
		}
		bLocal_81 = true;
	}
}

int func_25(int iParam0)//Position - 0x1ED0
{
	return func_26(iParam0);
}

int func_26(int iParam0)//Position - 0x1EDE
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_27(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

float func_27(bool bParam0, float fParam1, float fParam2)//Position - 0x1F16
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_28()//Position - 0x1F2D
{
	if (func_30())
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_53))
		{
			unk_0x6D4A70E9DE82B24B(iLocal_50, 2, 0, 0);
			unk_0x6D4A70E9DE82B24B(iLocal_50, 3, 0, 0);
			if (unk_0x6ADD12BF4D6D2587(iLocal_53))
			{
				unk_0x452336926718D62A(&iLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_79)
			{
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0x8212F63113683BF7(iLocal_50, 2) == 0f && unk_0x8212F63113683BF7(iLocal_50, 3) == 0f)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_52))
				{
					if (unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
					{
						unk_0x6B7C10B19928914F(iLocal_52, 1, true);
					}
					unk_0xA9D382E7BA095148(iLocal_52, iLocal_50, 0, vLocal_65, vLocal_66, 0, 0, 0, 0, 2, 1);
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_50, 0))
				{
					if (((unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0x8212F63113683BF7(iLocal_50, 2) > 0,25f) && unk_0x8212F63113683BF7(iLocal_50, 3) > 0,25f) || !unk_0xB8DE76287EDC4957(iLocal_50, 0))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_52))
						{
							if (unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
							{
								unk_0x23A4CE7F9EBB02D4(unk_0xD0CA83418A236CB4(), "DOORS_BLOWN", unk_0xDCD8BDD2E10C660E(iLocal_50, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x6B7C10B19928914F(iLocal_52, 1, false);
								unk_0xB18E1DBC397238E1(iLocal_52, true, 0);
								unk_0x764B52EA8B8FFFA3(iLocal_52);
								unk_0xE322818CF08D3198(iLocal_52, 1);
								vLocal_279 = { unk_0xB3328BA8976B416C(iLocal_52, 1) - unk_0xB3328BA8976B416C(iLocal_50, 1) * Vector(1,5f, 1,5f, 1,5f) };
								if (system::vmag(vLocal_279) > 10f)
								{
									vLocal_279 = { func_29(vLocal_279) };
									vLocal_279 = { vLocal_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 100)
								{
									iLocal_87 = 1;
								}
								unk_0xB8D9F55BA414128D(iLocal_52, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_278 = unk_0x53C562FD2B9E3AB0();
							}
							else if (unk_0xF0783EA789587B6B(unk_0xB3328BA8976B416C(iLocal_52, 1), unk_0x3F90543934DCD7E6(iLocal_50, vLocal_276), unk_0x3F90543934DCD7E6(iLocal_50, vLocal_277), 0) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_91[0] = 0;
								iLocal_91[1] = 0;
							}
							else if ((unk_0x53C562FD2B9E3AB0() - iLocal_278) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_50))
				{
					unk_0x6D4A70E9DE82B24B(iLocal_50, 2, 0, 0);
					unk_0x6D4A70E9DE82B24B(iLocal_50, 3, 0, 0);
					func_24(unk_0x3F90543934DCD7E6(iLocal_50, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_46 != 8)
			{
				func_62(8);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_52) && !unk_0xB8B3E5529EDB87D4(iLocal_103))
			{
				if (unk_0x90D5DFB054818BA7(iLocal_52) == 0f && (unk_0x53C562FD2B9E3AB0() - iLocal_278) > 1000)
				{
					func_24(unk_0xB3328BA8976B416C(iLocal_52, 1), 1);
					unk_0x452336926718D62A(&iLocal_52);
				}
				else if ((unk_0x53C562FD2B9E3AB0() - iLocal_278) > 5000)
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_29(vector3 vParam0)//Position - 0x21DD
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

int func_30()//Position - 0x221C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_53) && unk_0xDFFD5F8C8ABCB7EF(iLocal_53))
	{
		if (!iLocal_272)
		{
			if (unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iLocal_53, 1), joaat("weapon_stickybomb"), 0,25f, 0) || unk_0x50126692B8A3590A(unk_0xB3328BA8976B416C(iLocal_53, 1), 0,3f, unk_0xD50D486F1F311BFC(joaat("weapon_stickybomb")), 0))
			{
				iLocal_272 = 1;
			}
		}
		iVar0 = 0;
		unk_0x710B09722B24BAC6(unk_0xB3328BA8976B416C(iLocal_53, 1), 0,1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_53, 1), 1f, 1) || (unk_0x4E69510C44147A5C(2, unk_0xB3328BA8976B416C(iLocal_53, 1), 0,3f) && iLocal_272))
		{
			iLocal_87 = 1;
			iVar0 = 1;
		}
		if (unk_0xDE523AF6F7B269AB(iLocal_53) < iLocal_98 && unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_99 = (iLocal_99 + (iLocal_98 - unk_0xDE523AF6F7B269AB(iLocal_53)));
			unk_0x2B0DDE3D071497AD(iLocal_53);
		}
		if ((unk_0x53C562FD2B9E3AB0() - iLocal_273) > 200 && unk_0x6ADD12BF4D6D2587(iLocal_50))
		{
			if (unk_0x31DBB84AFB5DFAB7(unk_0x3F90543934DCD7E6(iLocal_50, 0f, 0f, (1,2195f - 0,27f)), unk_0x3F90543934DCD7E6(iLocal_50, 0f, fLocal_275, (1,2195f + 0,09f)), 0,45f, 1))
			{
				iLocal_273 = unk_0x53C562FD2B9E3AB0();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 5)
		{
			return 1;
		}
		if (iLocal_99 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_98 = unk_0xDE523AF6F7B269AB(iLocal_53);
	}
	return 0;
}

int func_31(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x2385
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(vParam0 + vParam1))
	{
		if ((((((((((((((((((((((unk_0x98129652BB227B1B(5, vParam1, vParam0) || (unk_0x98129652BB227B1B(2, vParam1, vParam0) && !bParam4)) || (unk_0x98129652BB227B1B(20, vParam1, vParam0) && !bParam4)) || unk_0x98129652BB227B1B(4, vParam1, vParam0)) || (unk_0x98129652BB227B1B(28, vParam1, vParam0) && !bParam4)) || unk_0x98129652BB227B1B(32, vParam1, vParam0)) || unk_0x98129652BB227B1B(25, vParam1, vParam0)) || unk_0x98129652BB227B1B(9, vParam1, vParam0)) || (unk_0x98129652BB227B1B(3, vParam1, vParam0) && !bParam4)) || (unk_0x98129652BB227B1B(6, vParam1, vParam0) && !bParam4)) || unk_0x98129652BB227B1B(0, vParam1, vParam0)) || unk_0x98129652BB227B1B(1, vParam1, vParam0)) || unk_0x98129652BB227B1B(23, vParam1, vParam0)) || unk_0x98129652BB227B1B(34, vParam1, vParam0)) || unk_0x98129652BB227B1B(14, vParam1, vParam0)) || (unk_0x98129652BB227B1B(30, vParam1, vParam0) && !bParam4)) || (unk_0x98129652BB227B1B(12, vParam1, vParam0) && !bParam4)) || unk_0x98129652BB227B1B(7, vParam1, vParam0)) || (unk_0x98129652BB227B1B(21, vParam1, vParam0) && !bParam4)) || (unk_0x98129652BB227B1B(18, vParam1, vParam0) && !bParam4)) || unk_0x98129652BB227B1B(15, vParam1, vParam0)) || unk_0x98129652BB227B1B(10, vParam1, vParam0)) || unk_0x98129652BB227B1B(27, vParam1, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x4E69510C44147A5C(5, vParam2, fParam3) || (unk_0x4E69510C44147A5C(2, vParam2, fParam3) && !bParam4)) || (unk_0x4E69510C44147A5C(20, vParam2, fParam3) && !bParam4)) || unk_0x4E69510C44147A5C(4, vParam2, fParam3)) || (unk_0x4E69510C44147A5C(28, vParam2, fParam3) && !bParam4)) || unk_0x4E69510C44147A5C(32, vParam2, fParam3)) || unk_0x4E69510C44147A5C(25, vParam2, fParam3)) || unk_0x4E69510C44147A5C(9, vParam2, fParam3)) || (unk_0x4E69510C44147A5C(3, vParam2, fParam3) && !bParam4)) || (unk_0x4E69510C44147A5C(6, vParam2, fParam3) && !bParam4)) || unk_0x4E69510C44147A5C(0, vParam2, fParam3)) || unk_0x4E69510C44147A5C(1, vParam2, fParam3)) || unk_0x4E69510C44147A5C(23, vParam2, fParam3)) || unk_0x4E69510C44147A5C(34, vParam2, fParam3)) || unk_0x4E69510C44147A5C(14, vParam2, fParam3)) || (unk_0x4E69510C44147A5C(30, vParam2, fParam3) && !bParam4)) || (unk_0x4E69510C44147A5C(12, vParam2, fParam3) && !bParam4)) || unk_0x4E69510C44147A5C(7, vParam2, fParam3)) || (unk_0x4E69510C44147A5C(21, vParam2, fParam3) && !bParam4)) || (unk_0x4E69510C44147A5C(18, vParam2, fParam3) && !bParam4)) || unk_0x4E69510C44147A5C(15, vParam2, fParam3)) || unk_0x4E69510C44147A5C(10, vParam2, fParam3)) || unk_0x4E69510C44147A5C(27, vParam2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_32(vector3 vParam0)//Position - 0x2790
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_33()//Position - 0x27BA
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0xA6DECE14FC9A8C51(iLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && unk_0xB8DE76287EDC4957(iLocal_50, 0)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_56[1]))
					{
						uLocal_56[1] = func_36(iLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_56[1]))
					{
						unk_0xE30CF11C0EE14316(&(uLocal_56[1]));
					}
					if (!unk_0xA6DECE14FC9A8C51(iLocal_55))
					{
						iLocal_55 = func_34(iLocal_50, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_56[1]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_56[1]));
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_55))
				{
					unk_0xE30CF11C0EE14316(&iLocal_55);
				}
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_56[0]) && unk_0x8D01A69F4DC93CE6(uLocal_56[0]) != 119)
			{
				unk_0xE30CF11C0EE14316(&(uLocal_56[0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_56[1]) && unk_0x8D01A69F4DC93CE6(uLocal_56[1]) != 119)
			{
				unk_0xE30CF11C0EE14316(&(uLocal_56[1]));
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_55) && unk_0x8D01A69F4DC93CE6(iLocal_55) != 119)
			{
				unk_0xE30CF11C0EE14316(&iLocal_55);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
					{
						if (unk_0xA8D0477084E86A92(iLocal_49[iVar0], iLocal_50, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_55))
				{
					iLocal_55 = func_34(iLocal_50, 1, 0);
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_55))
			{
				unk_0xE30CF11C0EE14316(&iLocal_55);
			}
			if ((unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0xA6DECE14FC9A8C51(iLocal_55)) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 0))
				{
					if (unk_0x94540F498465F1A2(iLocal_55) != 0)
					{
						unk_0xF20857E4CB32A2B7(iLocal_55, 0);
					}
				}
				else if (unk_0x94540F498465F1A2(iLocal_55) != 255)
				{
					unk_0xF20857E4CB32A2B7(iLocal_55, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0xB8B3E5529EDB87D4(iLocal_103) && !unk_0x88DDBE9908752BF0(iLocal_49[iVar0], 0))
					{
						if (!unk_0xA6FA9E5D08F067AD(iLocal_49[iVar0]) || system::vdist(unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !unk_0x88DDBE9908752BF0(iLocal_49[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xA6DECE14FC9A8C51(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = func_36(iLocal_49[iVar0], 1, 145);
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(uLocal_56[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xB8B3E5529EDB87D4(iLocal_103) && !bLocal_89)
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_58))
				{
					iLocal_58 = func_26(iLocal_103);
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_58))
			{
				unk_0xE30CF11C0EE14316(&iLocal_58);
			}
		}
	}
	else if ((unk_0x6ADD12BF4D6D2587(iLocal_50) && unk_0x6ADD12BF4D6D2587(iLocal_49[0])) && unk_0x6ADD12BF4D6D2587(iLocal_49[1]))
	{
		if ((((((!unk_0xEC211A86AB3726B6(iLocal_50) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0xEC211A86AB3726B6(iLocal_49[0]) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0xEC211A86AB3726B6(iLocal_49[1]) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50, 50f, 50f, 20f, 0, 1, 0)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0xE30CF11C0EE14316(&iLocal_57);
		}
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_56[0]))
	{
		unk_0x9C27373CC69ECF87(uLocal_56[0], iLocal_90);
	}
	if (unk_0xA6DECE14FC9A8C51(uLocal_56[1]))
	{
		unk_0x9C27373CC69ECF87(uLocal_56[1], bLocal_90);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_55))
	{
		unk_0x9C27373CC69ECF87(iLocal_55, bLocal_90);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_58))
	{
		unk_0x9C27373CC69ECF87(iLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 3)
		{
			bLocal_90 = false;
		}
	}
}

int func_34(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C5A
{
	return func_35(iParam0, !bParam1, bParam2);
}

int func_35(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C6D
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_27(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_27(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_27(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_36(int iParam0, bool bParam1, int iParam2)//Position - 0x2D11
{
	int iVar0;
	
	iVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_37()//Position - 0x2D63
{
	func_39(9, iLocal_45);
	while (!func_38())
	{
		system::wait(0);
	}
	func_225();
}

int func_38()//Position - 0x2D87
{
	return 1;
}

void func_39(int iParam0, int iParam1)//Position - 0x2D90
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_58(iParam0))
	{
		func_57(iParam0, iParam1);
		if (!func_56(51))
		{
			func_52("RE_REWARD", 1, 0, 4000, 10000, func_55(), 0, 138, 0);
			func_51(51);
		}
		if (func_50(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_40(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)//Position - 0x2E94
{
	Global_104541 = iParam0;
}

void func_41(int iParam0, var uParam1, var uParam2)//Position - 0x2EA2
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
		func_47((891 + iParam0), 1, -1, 1);
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
		func_42();
	}
}

void func_42()//Position - 0x2F8A
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
		func_46(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_45() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_43();
				}
			}
		}
	}
}

int func_43()//Position - 0x344B
{
	if (func_44(0))
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

bool func_44(bool bParam0)//Position - 0x3496
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_45()//Position - 0x34C1
{
	return Global_25233;
}

int func_46(int iParam0, int iParam1)//Position - 0x34CC
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

int func_47(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x351D
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
		iParam2 = func_48();
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

int func_48()//Position - 0x39E9
{
	return Global_1312736;
}

int func_49(int iParam0, int iParam1)//Position - 0x39F5
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

int func_50(int iParam0)//Position - 0x3D69
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

void func_51(int iParam0)//Position - 0x3D98
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

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3DDA
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x3DFC
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
		func_54();
	}
}

void func_54()//Position - 0x3FD0
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

int func_55()//Position - 0x40F2
{
	func_12();
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

int func_56(int iParam0)//Position - 0x4138
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

void func_57(int iParam0, int iParam1)//Position - 0x417B
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_58(int iParam0)//Position - 0x4196
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

int func_59()//Position - 0x4247
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_60(Var0);
	return uVar1;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x4264
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

int func_61()//Position - 0x443E
{
	if (bLocal_81)
	{
		if (unk_0x58786AA7A9E510C0(iLocal_103))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)//Position - 0x4459
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_63()//Position - 0x4468
{
	if (!unk_0xB8B3E5529EDB87D4(iLocal_103))
	{
		if (bLocal_79)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				if (!func_64(iLocal_50))
				{
					if (iLocal_271 == -1)
					{
						iLocal_271 = unk_0x53C562FD2B9E3AB0();
					}
				}
				else if (iLocal_271 != -1)
				{
					iLocal_271 = -1;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != -1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]))
				{
					if (!func_64(iLocal_50))
					{
						if (iLocal_271 == -1)
						{
							iLocal_271 = unk_0x53C562FD2B9E3AB0();
						}
					}
					else if (iLocal_271 != -1)
					{
						iLocal_271 = -1;
					}
				}
			}
		}
		if (iLocal_271 != -1)
		{
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_271) > 3000)
			{
				unk_0x486F346ADFE56674(&(iLocal_49[0]));
				unk_0x486F346ADFE56674(&(iLocal_49[1]));
				unk_0xBD1486160AB0661B(iLocal_50, -1000f, 1);
				unk_0xB18E1DBC397238E1(iLocal_50, true, 0);
				unk_0x5380482A432E314E(&iLocal_50);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_271 != -1)
		{
			iLocal_271 = -1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && system::vdist(unk_0x20752E4B9ABBF6F5(iLocal_103), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x4572
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xEC211A86AB3726B6(iParam0) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_65()//Position - 0x45E3
{
	int iVar0;
	int iVar1;
	
	if (iLocal_295 == -1)
	{
		iLocal_295 = unk_0x53C562FD2B9E3AB0();
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_80 = true;
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
				{
					if (func_21() < 30f && !unk_0x3AB6A1A9084FB0A4(Local_106[3 /*10*/]))
					{
						func_4(&Local_106, cLocal_105, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && unk_0x6ADD12BF4D6D2587(iLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[iVar0]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_49[iVar0]);
							unk_0x6931076730A4AC5D(&iLocal_54);
							if (unk_0x88DDBE9908752BF0(iLocal_49[iVar0], 0))
							{
								if (iLocal_87)
								{
									if (unk_0xD9C499EAA1D3F82A("move_injured_generic"))
									{
										unk_0x60C54803C97FDAAB(iLocal_49[iVar0], "move_injured_generic", 1048576000);
										iLocal_88[iVar0] = 1;
									}
								}
								unk_0x16416C5B54FDBCBB(0, 0, 256);
							}
							unk_0xCB3D88C918AA637C(0);
							if (iLocal_88[iVar0])
							{
								unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(1000, 3000));
							}
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(iLocal_54);
							unk_0xAB30B1CF01A198C1(iLocal_49[iVar0], iLocal_54);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_54);
						}
						unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 6, false);
						unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 0, true);
						unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 1, false);
						unk_0x4F9A62E773100FDC(iLocal_49[iVar0], 1);
						unk_0x3811A0FC01E02FC1(iLocal_49[iVar0], 1);
						unk_0x771A86309E0CA47B(iLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0xDFFD5F8C8ABCB7EF(iLocal_52)) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_49[iLocal_96]);
				}
				system::settimera(0);
				iLocal_48++;
				break;
			
			case 1:
				if (func_70(iLocal_96))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_49[iLocal_96]);
						unk_0x6931076730A4AC5D(&iLocal_54);
						if (unk_0x88DDBE9908752BF0(iLocal_49[iLocal_96], 0))
						{
							unk_0x16416C5B54FDBCBB(0, 0, 256);
						}
						unk_0xCB3D88C918AA637C(0);
						unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
						unk_0x1B16DD5C115FE009(iLocal_54);
						unk_0xAB30B1CF01A198C1(iLocal_49[iLocal_96], iLocal_54);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
				{
					if (unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
					{
						if (Local_106[3 /*10*/] != iLocal_49[1])
						{
							func_69(&Local_106, 3);
							func_69(&Local_106, 4);
							func_68(&Local_106, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_49)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_91[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_50, 0))
							{
								unk_0x31285BC066B7B5D6(iLocal_49[iVar0], iLocal_50, unk_0x3F90543934DCD7E6(iLocal_50, 0f, -4f, 0f), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (((unk_0xB8B3E5529EDB87D4(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 3) && !bLocal_89)
							{
								unk_0x31285BC066B7B5D6(iLocal_49[iVar0], iLocal_50, unk_0x20752E4B9ABBF6F5(iLocal_103), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									unk_0x73B4F2621FB82AA2(iLocal_49[iVar0], 0);
									iLocal_91[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x53C562FD2B9E3AB0() - iLocal_292)) > unk_0x5B811202FCBE9E9D(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
							{
								if (func_4(&Local_106, cLocal_105, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_292 = unk_0x53C562FD2B9E3AB0();
								}
							}
						}
					}
					if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
					{
						if (!bLocal_79)
						{
							if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 0) && (unk_0x53C562FD2B9E3AB0() - iLocal_295) > 5000)
							{
								if (func_21() > (30f + (30f / 10f)))
								{
									func_62(7);
								}
								if (func_21() > (30f / 2f) && !func_66())
								{
									if (!bLocal_79)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_91[0] = 0;
									iLocal_91[1] = 0;
									iLocal_295 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (system::timera() > iVar1 && iLocal_88[iVar0])
				{
					unk_0x75B1352F83860B74(iLocal_49[iVar0], 1048576000);
					iLocal_88[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_66()//Position - 0x4AB3
{
	int iVar0;
	
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_282) > 250)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
				{
					if (unk_0xFFCE4302A2DB825B(iLocal_49[iVar0], unk_0xFC1458A37D98B502(), 19) && unk_0xE56ACE711345F330(iLocal_49[iVar0], unk_0xFC1458A37D98B502()))
					{
						iLocal_281[iVar0] = 1;
					}
					else
					{
						iLocal_281[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0] || iLocal_281[1]);
}

int func_67()//Position - 0x4B40
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4B62
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

void func_69(var uParam0, int iParam1)//Position - 0x4BFD
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_70(int iParam0)//Position - 0x4C1A
{
	bool bVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_52))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iParam0]))
		{
			if (unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[iParam0]))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0,9f)
					{
						unk_0x6B7C10B19928914F(iLocal_52, 1, true);
						unk_0x452336926718D62A(&iLocal_52);
					}
				}
				else
				{
					unk_0x771A86309E0CA47B(iLocal_49[iParam0], true);
					unk_0x12C9D41D52A560D6(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x6ADD12BF4D6D2587(iLocal_52) || (unk_0x6ADD12BF4D6D2587(iLocal_52) && !unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iParam0]))
		{
			unk_0x771A86309E0CA47B(iLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_71(int iParam0, bool bParam1)//Position - 0x4CFE
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		vVar0 = { func_29(unk_0xA05DDB968587006B(iLocal_50, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1))) };
		fVar1 = ((unk_0xF0371FE6E2BF9599(iLocal_50) + unk_0xA67DD8488EBA5F6D(vVar0.x, vVar0.y)) + 45f);
		fVar2 = ((unk_0xF0371FE6E2BF9599(iLocal_50) + unk_0xA67DD8488EBA5F6D(vVar0.x, vVar0.y)) - 45f);
		vVar3[0 /*3*/] = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(iLocal_50, 1), fVar1, 0f, 4,5f, 0f) };
		vVar3[1 /*3*/] = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(iLocal_50, 1), fVar2, 0f, 4,5f, 0f) };
		func_72(&fVar1);
		func_72(&fVar2);
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_293) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar4]))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(iLocal_49[iVar4], 1), vVar3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < iLocal_49)
			{
				if ((((((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar4]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && system::vdist(unk_0xB3328BA8976B416C(iLocal_49[iVar4], 1), vVar3[iVar4 /*3*/]) > 2f) && (unk_0x53C562FD2B9E3AB0() - iLocal_294[iVar4]) > 1000) && !unk_0x88DDBE9908752BF0(iLocal_49[iVar4], 0)) && !iLocal_281[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_66())
						{
							vLocal_293 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						}
						unk_0x6931076730A4AC5D(&iVar6);
						if (func_66() || func_32(vLocal_293))
						{
							unk_0x28D62AF360997F32(0, vVar3[iVar4 /*3*/], unk_0xFC1458A37D98B502(), 2f, false, 1056964608, 1082130432, true, 0, 0, -957453492, 20000);
							unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 1);
						}
						else
						{
							unk_0x1D077D3591C6FFA7(0, vVar3[iVar4 /*3*/], vLocal_293, 2f, false, 0,5f, 4f, true, 0, 0, -957453492);
							unk_0xCDACC23C56C1F7F5(0, vLocal_293, -1, 1, 0);
						}
						unk_0x1B16DD5C115FE009(iVar6);
						unk_0xAB30B1CF01A198C1(iLocal_49[iVar4], iVar6);
						unk_0xFAA3EF7FF92E1F9E(&iVar6);
					}
					iLocal_294[iVar4] = unk_0x53C562FD2B9E3AB0();
				}
				iVar4++;
			}
		}
	}
}

void func_72(float fParam0)//Position - 0x4F63
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_73(int iParam0)//Position - 0x4F9E
{
	float fVar0;
	
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_79)
				{
					unk_0x771A86309E0CA47B(iParam0, true);
					unk_0xB8E08BD5B184DF4E(iParam0);
					vLocal_283 = { unk_0xDCD8BDD2E10C660E(iLocal_50, 0) };
					vLocal_284 = { unk_0xDB824D597B53CC40(iLocal_50, 2) };
					vLocal_285 = { unk_0x09E51060F59912ED("random@security_van", "sec_case_into_van_panic", vLocal_283, vLocal_284, 0, 2) };
					if (((!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0)) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[0])) && !unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0))
					{
						if (func_21() < 20f)
						{
							if (bLocal_80)
							{
								func_4(&Local_106, cLocal_105, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xB8B3E5529EDB87D4(iLocal_103))
						{
							if (bLocal_80)
							{
								unk_0x380C1E7B7740D618(iParam0, unk_0x20752E4B9ABBF6F5(iLocal_103), 2f, -1, 0,25f, 0, 1193033728);
							}
							else
							{
								unk_0x380C1E7B7740D618(iParam0, unk_0x20752E4B9ABBF6F5(iLocal_103), 1f, -1, 0,25f, 0, 1193033728);
							}
							iLocal_48++;
						}
						else
						{
							func_79(iParam0);
							iLocal_48 = 2;
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iParam0))
					{
						if (unk_0xB8B3E5529EDB87D4(iLocal_103))
						{
							unk_0x380C1E7B7740D618(iParam0, unk_0x20752E4B9ABBF6F5(iLocal_103), 2f, -1, 0,25f, 0, 1193033728);
							iLocal_48++;
						}
						else
						{
							func_79(iParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x3AB6A1A9084FB0A4(iParam0) && unk_0xB8B3E5529EDB87D4(iLocal_103))
				{
					if ((unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), unk_0x20752E4B9ABBF6F5(iLocal_103), true) < 2f && !unk_0x9F887157983E8EFC(iParam0)) && (unk_0x53C562FD2B9E3AB0() - iLocal_102) > 3000)
					{
						if (unk_0xC931425E2B416A2F(iParam0, 4))
						{
							unk_0x385A213BEB355C2B(iParam0, joaat("weapon_unarmed"), true);
						}
						unk_0x60727D07B2D72C82(iLocal_103);
						func_79(iParam0);
						unk_0x385A213BEB355C2B(iParam0, joaat("weapon_unarmed"), true);
						bLocal_81 = false;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x3AB6A1A9084FB0A4(iParam0) && unk_0xB8DE76287EDC4957(iLocal_50, 0))
				{
					if (unk_0x78F50AA8F955BEFC(iParam0, 713668775) != 1)
					{
						if (bLocal_80)
						{
							unk_0x380C1E7B7740D618(iParam0, vLocal_285, 2f, -1, 0,1f, 512, vLocal_284.z);
						}
						else
						{
							unk_0x380C1E7B7740D618(iParam0, vLocal_285, 1f, -1, 0,1f, 512, vLocal_284.z);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x3AB6A1A9084FB0A4(iParam0))
				{
					if (unk_0xB8B3E5529EDB87D4(iLocal_103))
					{
						iLocal_48 = 0;
					}
					else
					{
						fVar0 = unk_0xF0371FE6E2BF9599(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (vLocal_284.z > 180f)
						{
							vLocal_284.z = (vLocal_284.z - 360f);
						}
						if (vLocal_284.z <= -180f)
						{
							vLocal_284.z = (vLocal_284.z + 360f);
						}
						if (system::vdist(vLocal_285, unk_0xB3328BA8976B416C(iParam0, 1)) < 0,3f)
						{
							if (unk_0xE97272C977DEADD3((fVar0 - vLocal_284.z)) < 15f)
							{
								unk_0xCF9DFDA1C6C69401(iParam0, -1056964608);
								unk_0xB8E08BD5B184DF4E(iParam0);
								bLocal_288 = true;
								iLocal_286 = unk_0x8383F9C605E523B7(vLocal_283, vLocal_284, 2);
								if (bLocal_80)
								{
									unk_0x8E628F774C748D93(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xEBB74134CCA3442E(iLocal_50, iLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x8E628F774C748D93(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xEBB74134CCA3442E(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x9A0C1F836B24E46E(iParam0, 0, 0);
								iLocal_48++;
							}
						}
						else if (unk_0xEC211A86AB3726B6(iParam0) && !unk_0x9E06F0EE20F58CED(vLocal_283, 2f))
						{
							unk_0xBD8D47FDC6902B2D(iParam0, vLocal_283, 1, false, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xD56F740235B1E8F0(iLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0,42f;
					}
					else
					{
						fLocal_296 = 0,3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0,52f;
					}
					else
					{
						fLocal_297 = 0,546243f;
					}
					if (!bLocal_79)
					{
						if ((unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0x5D67DB68EF61B3E1(iLocal_52, iParam0)) && unk_0x463C4747B41E35A3(iLocal_286) > fLocal_296)
						{
							if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_50))
							{
								unk_0x6B7C10B19928914F(iLocal_52, 1, true);
								unk_0xB18E1DBC397238E1(iLocal_52, false, 0);
								unk_0xA9D382E7BA095148(iLocal_52, iLocal_50, 0, unk_0xA05DDB968587006B(iLocal_50, unk_0xB3328BA8976B416C(iLocal_52, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x463C4747B41E35A3(iLocal_286) > fLocal_297)
					{
						unk_0xBD1486160AB0661B(iLocal_50, -4f, 1);
						unk_0xB8E08BD5B184DF4E(iParam0);
						if (unk_0x6ADD12BF4D6D2587(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0xDA5162F6425C44AA(iLocal_50, 2, 1);
							unk_0xDA5162F6425C44AA(iLocal_50, 3, 1);
							unk_0x771A86309E0CA47B(iParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xD56F740235B1E8F0(iLocal_286) && unk_0x463C4747B41E35A3(iLocal_286) > fLocal_297) || !unk_0xD56F740235B1E8F0(iLocal_286))
				{
					if (!bLocal_80)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
						{
							unk_0x6F8C8278B7C06889(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 6:
				if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
				{
					if (bLocal_80)
					{
						func_62(6);
					}
					else
					{
						func_62(4);
					}
				}
				else
				{
					func_62(8);
				}
				break;
			}
	}
	if (!unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!bLocal_79)
		{
			if ((((((func_21() < 10f && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) && func_66()) || ((func_21() < 20f && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))) || (func_21() < 5f && bLocal_80)) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_74(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))) || ((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF())) && func_74(unk_0xC733212BF9066BDF())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_79)
		{
			if (unk_0xD56F740235B1E8F0(iLocal_286))
			{
				unk_0xBD1486160AB0661B(iLocal_50, -8f, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x771A86309E0CA47B(iParam0, false);
		}
	}
	if ((unk_0xB8DE76287EDC4957(iLocal_50, 0) && iLocal_46 != 7) && unk_0xD56F740235B1E8F0(iLocal_286))
	{
		unk_0xBD1486160AB0661B(iLocal_50, -8f, 1);
	}
}

int func_74(int iParam0)//Position - 0x5684
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	vector3 vVar3[4];
	vector3 vVar4[4];
	vector3 vVar5[4];
	vector3 vVar6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	
	iVar0 = 0;
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0x6ADD12BF4D6D2587(iLocal_50))
	{
		uVar7 = 4;
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var1, &Var2);
		vVar3[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var1, Var2.f_1, 0f) };
		vVar3[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var2, Var2.f_1, 0f) };
		vVar3[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var2, Var1.f_1, 0f) };
		vVar3[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var1, Var1.f_1, 0f) };
		fVar8 = -3,7f;
		fVar9 = 1,35f;
		vVar4[0 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (-fVar9 - 0,25f), fVar8, 0f) };
		vVar4[1 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (fVar9 + 0,25f), fVar8, 0f) };
		vVar4[2 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (fVar9 - 0,25f), (fVar8 - 1,55f), 0f) };
		vVar4[3 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (-fVar9 + 0,25f), (fVar8 - 1,55f), 0f) };
		vVar5[0 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, -fVar9, 0,5f, 0f) };
		vVar5[1 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (-fVar9 - 0,75f), 0,5f, 0f) };
		vVar5[2 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (-fVar9 - 0,75f), 1,5f, 0f) };
		vVar5[3 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, -fVar9, 1,5f, 0f) };
		vVar6[0 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, fVar9, 0,5f, 0f) };
		vVar6[1 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (fVar9 + 0,75f), 0,5f, 0f) };
		vVar6[2 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, (fVar9 + 0,75f), 1,5f, 0f) };
		vVar6[3 /*3*/] = { unk_0x3F90543934DCD7E6(iLocal_50, fVar9, 1,5f, 0f) };
		if (!bLocal_79)
		{
			if (func_75(&vVar4, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 1))
		{
			if (func_75(&vVar5, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0xA8D0477084E86A92(iLocal_49[1], iLocal_50, 1))
		{
			if (func_75(&vVar6, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_75(var uParam0, var uParam1, var uParam2)//Position - 0x58D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_76(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_76(vector3 vParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)//Position - 0x5954
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
	
	fVar0 = vParam0.x;
	fVar1 = Param1;
	fVar2 = Param3;
	fVar3 = Param5;
	fVar4 = vParam0.y;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_78(fVar0, fVar1) || fVar11 > func_77(fVar0, fVar1)) || fVar11 < func_78(fVar2, fVar3)) || fVar11 > func_77(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_78(fVar4, fVar5) || fVar12 > func_77(fVar4, fVar5)) || fVar12 < func_78(fVar6, fVar7)) || fVar12 > func_77(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = vParam0.z;
	return 1;
}

float func_77(float fParam0, float fParam1)//Position - 0x5A8C
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_78(float fParam0, float fParam1)//Position - 0x5AA6
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_79(int iParam0)//Position - 0x5AC0
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			iLocal_52 = unk_0x5E35CF35E65D69B9(iLocal_75, vLocal_63, true, true, false);
			unk_0x94433067C90B34A5(iLocal_52, false);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			unk_0xA9D382E7BA095148(iLocal_52, iParam0, unk_0xDD09837E5235FE91(iParam0, 28422), vLocal_68, vLocal_69, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()//Position - 0x5B1A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
				{
					unk_0x771A86309E0CA47B(iLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_80 = true;
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(func_83()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(func_83()))
					{
						if (unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0) != func_83() && unk_0x8EE3A848975DDF21(iLocal_50, -1, 0))
						{
							unk_0x6F8C8278B7C06889(func_83(), iLocal_50, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && func_83() != iLocal_49[1])
				{
					if (unk_0x317536BCEA8FA6B0(iLocal_50, 0, 0) != iLocal_49[1] && unk_0x8EE3A848975DDF21(iLocal_50, 0, 0))
					{
						unk_0x6F8C8278B7C06889(iLocal_49[1], iLocal_50, -1, 0, 2f, 1, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (unk_0x6ADD12BF4D6D2587(func_83()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xD2C269DBF147B406(func_83(), iLocal_50, unk_0xFC1458A37D98B502(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x6ADD12BF4D6D2587(func_83()))
				{
					unk_0x6F03491E8F9F397C(func_83(), iLocal_50, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 3:
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				if (unk_0x90D5DFB054818BA7(iLocal_50) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x6ADD12BF4D6D2587(iLocal_50) && unk_0x6ADD12BF4D6D2587(unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0))) && (unk_0x191BE1BC8F26F3C1(unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0), 0) || unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x317536BCEA8FA6B0(iLocal_50, -1, 0) == iLocal_49[0])
		{
			iVar1 = 1;
		}
		if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_50, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 100f)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar1]) && unk_0x78F50AA8F955BEFC(iLocal_49[iVar1], 242628503) != 1)
			{
				unk_0xE17958D3FD0F9EE9(iLocal_49[iVar1], 2, true);
				unk_0x6931076730A4AC5D(&iVar2);
				unk_0x09DC36247844A9E1(0, iLocal_50, 0);
				unk_0xD2C269DBF147B406(0, iLocal_50, unk_0xFC1458A37D98B502(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x1B16DD5C115FE009(iVar2);
				unk_0xAB30B1CF01A198C1(iLocal_49[iVar1], iVar2);
				unk_0xFAA3EF7FF92E1F9E(&iVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0xB8DE76287EDC4957(iLocal_50, 0) || unk_0xB8B3E5529EDB87D4(iLocal_103)) || iLocal_47 == 3) || unk_0xB6579D6FEB63269C(iLocal_50, 0, 7000)) || unk_0xB6579D6FEB63269C(iLocal_50, 3, 30000)) || unk_0xB6579D6FEB63269C(iLocal_50, 2, 30000)) || unk_0xB6579D6FEB63269C(iLocal_50, 1, 40000)) || (iLocal_48 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()//Position - 0x5E2E
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_50))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_50, 0))
		{
			if (((((unk_0xDE523AF6F7B269AB(iLocal_50) < 300 || unk_0xA7B0253B80B52B2B(iLocal_50) < 200f) || (unk_0x36CA14E4AEA7AA81(iLocal_50, 0, 0) && unk_0x36CA14E4AEA7AA81(iLocal_50, 1, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_50, 4, 0) && unk_0x36CA14E4AEA7AA81(iLocal_50, 5, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_50, 0, 0) && unk_0x36CA14E4AEA7AA81(iLocal_50, 4, 0))) || (unk_0x36CA14E4AEA7AA81(iLocal_50, 1, 0) && unk_0x36CA14E4AEA7AA81(iLocal_50, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()//Position - 0x5EDA
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0))
		{
			if (!unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0))
		{
			if (!unk_0xA8D0477084E86A92(iLocal_49[1], iLocal_50, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_83()//Position - 0x5F57
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0))
	{
		return iLocal_49[0];
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0))
	{
		return iLocal_49[1];
	}
	return 0;
}

void func_84()//Position - 0x5FB0
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_79)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
				{
					unk_0x6B7C10B19928914F(iLocal_52, 1, true);
				}
			}
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_106, cLocal_105, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
					{
						unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 17, true);
						unk_0xE17958D3FD0F9EE9(iLocal_49[iVar0], 128, true);
						unk_0xE17958D3FD0F9EE9(iLocal_49[iVar0], 16, true);
						unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 1, false);
						unk_0x6931076730A4AC5D(&iVar1);
						if (unk_0x88DDBE9908752BF0(iLocal_49[iVar0], 1))
						{
							unk_0x16416C5B54FDBCBB(iLocal_49[iVar0], 0, 256);
						}
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(iLocal_49[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = true;
			iLocal_48++;
			break;
		
		case 1:
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				if (func_85(iLocal_50, 1, 0, 0, 0, 0, 1, 0))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x6105
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
	if (iParam4 || !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_86(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x6ADD12BF4D6D2587(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xFC1458A37D98B502())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar2))
					{
						if (unk_0x1417A5CC924DE120(iVar2))
						{
							if (unk_0xF5D0CBECCA41314A(unk_0xDF35170AEEFB473B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_86(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x61CD
{
	int iVar0;
	
	if (!unk_0x8EE3A848975DDF21(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, iParam1);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iVar0, 451360105) == 1 || unk_0x78F50AA8F955BEFC(iVar0, -828834893) == 1)
				{
					if (system::vdist(unk_0xB3328BA8976B416C(iParam0, 0), unk_0xB3328BA8976B416C(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_87()//Position - 0x6268
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_4(&Local_106, cLocal_105, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
					{
						if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[0]))
						{
							func_88(0);
						}
						else
						{
							unk_0xB8E08BD5B184DF4E(iLocal_49[0]);
						}
						if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[1]))
						{
							func_88(1);
						}
						else
						{
							unk_0xB8E08BD5B184DF4E(iLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_88(0);
						func_88(1);
						iLocal_48 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_96))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]))
					{
						func_88(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!func_67())
				{
					if (func_4(&Local_106, cLocal_105, "RESEC_CAR2", 8, 0, 0, 0))
					{
						system::settimera(0);
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if ((system::timera() > 12000 && !func_67()) && func_4(&Local_106, cLocal_105, "RESEC_CAR3", 8, 0, 0, 0))
				{
					system::settimera(0);
					iLocal_48++;
				}
				break;
			
			case 4:
				if ((system::timera() > 7000 && !func_67()) && func_4(&Local_106, cLocal_105, "RESEC_CAR4", 8, 0, 0, 0))
				{
					system::settimera(0);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_71(-1, 1);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_51))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_51, 0) && unk_0xB8DE76287EDC4957(iLocal_50, 0))
		{
			if (system::vdist(unk_0xB3328BA8976B416C(iLocal_51, 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0x191BE1BC8F26F3C1(iLocal_51, 0) || !unk_0xB8DE76287EDC4957(iLocal_51, 0)) || (!unk_0x3B9B1F02BCD69306(iLocal_51, 90f) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_51, 1)))
		{
			if (!func_74(iLocal_51))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xEBE499597C718EB8(iLocal_49[0], unk_0xFC1458A37D98B502(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xEBE499597C718EB8(iLocal_49[1], unk_0xFC1458A37D98B502(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_86)
		{
			func_62(8);
		}
	}
	if (bLocal_89)
	{
		func_62(8);
	}
	if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && func_66()) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
	{
		func_62(2);
	}
	if (!unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		func_62(5);
	}
}

void func_88(int iParam0)//Position - 0x655D
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iParam0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xB8E08BD5B184DF4E(iLocal_49[iParam0]);
		unk_0x6931076730A4AC5D(&iLocal_54);
		if (unk_0x88DDBE9908752BF0(iLocal_49[iParam0], 0))
		{
			unk_0x16416C5B54FDBCBB(0, 0, 256);
		}
		unk_0xCB3D88C918AA637C(0);
		unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
		unk_0x9627C22EF3C3F4D6(0, unk_0xFC1458A37D98B502(), -1, 0);
		unk_0x1B16DD5C115FE009(iLocal_54);
		unk_0xAB30B1CF01A198C1(iLocal_49[iParam0], iLocal_54);
		unk_0xFAA3EF7FF92E1F9E(&iLocal_54);
		if (iLocal_97 == 0)
		{
			iLocal_97 = unk_0xB71774863B890B76(116, unk_0xB3328BA8976B416C(iLocal_49[iParam0], 1), -1f);
		}
	}
}

void func_89()//Position - 0x65FA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
			{
				unk_0x771A86309E0CA47B(iLocal_49[0], true);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
			{
				unk_0x771A86309E0CA47B(iLocal_49[1], true);
			}
			if (func_96())
			{
				if (func_4(&Local_106, cLocal_105, "RESEC_ATT1", 8, 0, 0, 0))
				{
					system::settimera(0);
					func_62(8);
				}
			}
			else if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (func_95() || func_94())
				{
					func_4(&Local_106, cLocal_105, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
				{
					func_4(&Local_106, cLocal_105, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0);
				}
				system::settimera(0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0xDFFD5F8C8ABCB7EF(iLocal_52))
				{
					if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[0]))
					{
						func_88(0);
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_49[0]);
					}
					if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[1]))
					{
						func_88(1);
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_88(0);
					func_88(1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_96))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iLocal_96]))
				{
					func_88(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		
		case 2:
			if (!func_93())
			{
				if (!func_92(iLocal_50, 1000) && system::timera() > 10000)
				{
					bVar0 = true;
				}
				else if (system::timera() > 7000)
				{
					system::settimera(7000);
				}
				if (system::timera() > 5000)
				{
					if (func_95())
					{
						bVar0 = true;
					}
				}
				if (system::timera() > 10000)
				{
					if (func_94())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_49)
				{
					if (!func_92(iLocal_49[iVar1], 1000) && (func_21() < 2f && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0x191BE1BC8F26F3C1(iLocal_49[iVar1], 0))
					{
						if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_49[iVar1]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0x53C562FD2B9E3AB0() - iLocal_292)) > unk_0x5B811202FCBE9E9D(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_292 = unk_0x53C562FD2B9E3AB0();
						}
					}
				}
				if (bVar0)
				{
					func_90();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_49)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x6ADD12BF4D6D2587(iLocal_49[iVar2]))
		{
			if ((unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar2]) || unk_0x191BE1BC8F26F3C1(iLocal_49[iVar2], 0)) && unk_0xEBE499597C718EB8(iLocal_49[iVar2], unk_0xFC1458A37D98B502(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) || bLocal_89)
	{
		func_62(8);
	}
	if ((unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && func_66())
	{
		if (unk_0xEBE499597C718EB8(iLocal_50, unk_0xFC1458A37D98B502(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		func_62(5);
	}
	if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6)) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_281[0] && !iLocal_281[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_90()//Position - 0x69F2
{
	Global_14622 = 0;
	func_91();
}

void func_91()//Position - 0x6A02
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_92(int iParam0, int iParam1)//Position - 0x6A23
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0))
		{
			if ((unk_0x52C56492660097C7(iParam0) && !unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0))) || (unk_0x8A3FF8E81B40BB75(iParam0) && unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0)))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1)) > fLocal_290)
				{
					iVar0 = 1;
				}
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_291) > iParam1)
				{
					fLocal_290 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1));
					iLocal_291 = unk_0x53C562FD2B9E3AB0();
				}
			}
		}
	}
	return iVar0;
}

int func_93()//Position - 0x6AC3
{
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_50, 20f, 20f, 5f, 0, 1, 0) && !unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x6B13
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, 0f, 1,7532f, 0,5984f), unk_0x3F90543934DCD7E6(iLocal_50, 0f, 3,3477f, 3,5984f), 2,8f, 0, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
			{
				if ((!unk_0xA8D0477084E86A92(iLocal_49[iVar0], iLocal_50, 0) && unk_0x0082ECE2DB69C8CA(unk_0xFC1458A37D98B502(), iLocal_50)) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_95()//Position - 0x6BD5
{
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()) == iLocal_50)
		{
			if (unk_0x6E974DBB57EA720C(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96()//Position - 0x6C12
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && unk_0x21B6FFFD04C9FF3A(iLocal_49[0], unk_0xFC1458A37D98B502(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && unk_0x21B6FFFD04C9FF3A(iLocal_49[1], unk_0xFC1458A37D98B502(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(char* sParam0)//Position - 0x6CA1
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_98(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x6CB4
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_129(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_99(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_99(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x6CEA
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
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
	if (func_97(iVar0))
	{
		func_121();
	}
	if (!unk_0x38DF88792E2574E5())
	{
		if (func_116(uParam0, bParam4, bParam6, 0))
		{
			func_115(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_104(iVar0))
			{
				if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && uParam5)
					{
						if (!func_97(iVar0))
						{
							func_131(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_103(1);
							}
						}
					}
				}
			}
		}
		else if (func_104(iVar0))
		{
			if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
			{
				if ((unk_0x9E06F0EE20F58CED(vParam1, 1f) && !unk_0xF491DD47B88AA84E()) && uParam5)
				{
					if (!func_97(iVar0))
					{
						func_131(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
						{
							func_103(1);
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
			if (func_97(iVar0) && unk_0xF491DD47B88AA84E())
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
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				func_129(uParam0, iVar0, 1);
			}
		}
		if (!func_116(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
			{
				func_100(uParam0);
			}
		}
	}
}

void func_100(var uParam0)//Position - 0x6FC4
{
	if (func_101(unk_0xFC1458A37D98B502()))
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

int func_101(int iParam0)//Position - 0x702D
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

int func_102(var uParam0)//Position - 0x7088
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

int func_103(bool bParam0)//Position - 0x70B3
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

int func_104(char* sParam0)//Position - 0x715D
{
	if (!func_105(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_97(sParam0)) || func_97("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_103(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_105(bool bParam0, bool bParam1, bool bParam2)//Position - 0x71F6
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
	if (func_114(0))
	{
		return 0;
	}
	if (func_113())
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
	if ((func_112() || func_111(Global_4456448.f_143970)) || func_110())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_109(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_109(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_109(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_106(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_106(int iParam0)//Position - 0x7421
{
	if (iParam0 != func_108())
	{
		if (func_107(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_107(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)//Position - 0x7487
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

int func_108()//Position - 0x74D1
{
	return -1;
}

int func_109(int iParam0, int iParam1)//Position - 0x74DA
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

var func_110()//Position - 0x755F
{
	return Global_2447174.f_16;
}

bool func_111(int iParam0)//Position - 0x756D
{
	return iParam0 == 51;
}

var func_112()//Position - 0x757A
{
	return Global_2447174.f_15;
}

bool func_113()//Position - 0x7588
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_114(int iParam0)//Position - 0x759D
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

void func_115(var uParam0, vector3 vParam1, int iParam2)//Position - 0x75F7
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

int func_116(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7693
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
					if (func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_102(uParam0))
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
						if (!func_120(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_120(bParam1, bParam2, bParam3))
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
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_119(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_120(bParam1, bParam2, bParam3))
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
						if (func_118(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_117(bParam1, bParam2, bParam3))
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
					else if (func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_102(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_105(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_121();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)//Position - 0x79FF
{
	if (!func_105(bParam0, bParam1, bParam2))
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

int func_118(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7A51
{
	if (!func_105(bParam0, bParam1, bParam2))
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

int func_119(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7A9A
{
	if (!func_105(bParam0, bParam1, bParam2))
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

int func_120(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7AF9
{
	if (!func_105(bParam0, bParam1, bParam2))
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

void func_121()//Position - 0x7B4F
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x7B5F
{
	func_123(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_123(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x7B7C
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_129(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_124(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_124(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x7BB4
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
	if (func_97(iVar0))
	{
		func_121();
	}
	if (func_101(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_116(uParam0, bParam5, bParam7, 0))
			{
				func_125(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_104(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_97(iVar0))
							{
								func_131(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_103(1);
								}
							}
						}
					}
				}
			}
			else if (func_104(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_97(iVar0))
						{
							func_131(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_103(1);
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
				if (func_97(sParam3))
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
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_129(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_129(uParam0, iVar0, 1);
				}
			}
			if (!func_116(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
				{
					func_100(uParam0);
				}
			}
		}
	}
	else
	{
		func_129(uParam0, iVar0, 0);
	}
}

void func_125(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x7F21
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
		func_129(uParam0, 0, 0);
	}
	if (func_128(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_126())
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

bool func_126()//Position - 0x8034
{
	return func_127(unk_0x9EB17624F44A8DA4());
}

int func_127(int iParam0)//Position - 0x8044
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_128(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8063
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_129(var uParam0, int iParam1, int iParam2)//Position - 0x80AA
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
		if (func_97(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_97(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

void func_130(int iParam0)//Position - 0x8187
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_6), iParam0);
}

void func_131(char* sParam0, int iParam1)//Position - 0x819E
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

bool func_132(int iParam0)//Position - 0x81B5
{
	return unk_0xC80D31E4B587871C(Global_104555.f_24965.f_6, iParam0);
}

int func_133(int iParam0)//Position - 0x81CC
{
	if (func_136())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_50(Global_104544))
		{
			func_134(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_50(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)//Position - 0x821F
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_131(func_135(iParam0), -1);
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
					func_131(func_135(iParam0), -1);
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
					func_131(func_135(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)//Position - 0x8300
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

int func_136()//Position - 0x8344
{
	switch (func_137(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x837A
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
		if (func_141(0))
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
		if (!func_139(iParam2))
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
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)//Position - 0x84B1
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

bool func_139(int iParam0)//Position - 0x8500
{
	return func_140(iParam0, Global_35861);
}

int func_140(int iParam0, int iParam1)//Position - 0x8511
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

int func_141(int iParam0)//Position - 0x86F2
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142()//Position - 0x8714
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
				{
					unk_0xAE6EBBBBD8B9FB30(iLocal_49[0], 6, true);
					unk_0xAE6EBBBBD8B9FB30(iLocal_49[1], 6, true);
					unk_0x771A86309E0CA47B(iLocal_49[0], true);
					unk_0x771A86309E0CA47B(iLocal_49[1], true);
					if (unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 0) && unk_0xA8D0477084E86A92(iLocal_49[1], iLocal_50, 0))
					{
						if (iLocal_45 == 2)
						{
							unk_0x6931076730A4AC5D(&iVar0);
							unk_0x87A3E70B0AB01608(0, iLocal_50, -574,6195f, -847,232f, 25,2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x96247F0EC873C446(0, iLocal_50, 10f, 786603);
							unk_0x1B16DD5C115FE009(iVar0);
							unk_0xAB30B1CF01A198C1(iLocal_49[0], iVar0);
							unk_0xFAA3EF7FF92E1F9E(&iVar0);
							iLocal_48++;
						}
						else if (iLocal_45 == 4)
						{
							unk_0x6931076730A4AC5D(&iVar1);
							unk_0x87A3E70B0AB01608(0, iLocal_50, -551,2968f, -1119,418f, 20,4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x96247F0EC873C446(0, iLocal_50, 10f, 786603);
							unk_0x1B16DD5C115FE009(iVar1);
							unk_0xAB30B1CF01A198C1(iLocal_49[0], iVar1);
							unk_0xFAA3EF7FF92E1F9E(&iVar1);
							iLocal_48++;
						}
						else if (iLocal_45 == 7)
						{
							unk_0x6931076730A4AC5D(&iVar2);
							unk_0x87A3E70B0AB01608(0, iLocal_50, 2786,752f, 4358,032f, 48,6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x96247F0EC873C446(0, iLocal_50, 10f, 786603);
							unk_0x1B16DD5C115FE009(iVar2);
							unk_0xAB30B1CF01A198C1(iLocal_49[0], iVar2);
							unk_0xFAA3EF7FF92E1F9E(&iVar2);
							iLocal_48++;
						}
						else
						{
							unk_0x96247F0EC873C446(iLocal_49[0], iLocal_50, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 0) && unk_0x78F50AA8F955BEFC(iLocal_49[0], -1794415470) != 1)
						{
							unk_0x6F8C8278B7C06889(iLocal_49[0], iLocal_50, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xA8D0477084E86A92(iLocal_49[1], iLocal_50, 0) && unk_0x78F50AA8F955BEFC(iLocal_49[1], -1794415470) != 1)
						{
							unk_0x6F8C8278B7C06889(iLocal_49[1], iLocal_50, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_146() || func_145()) || func_95()) || func_94()) || func_144()) || func_143())
			{
				if (func_21() < 20f)
				{
					func_90();
					func_4(&Local_106, cLocal_105, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar3]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[iVar3], 0))
					{
						if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()) && unk_0x27C8A4034A05DC21(iLocal_49[iVar3]))
						{
							func_62(8);
						}
					}
					else
					{
						func_62(6);
					}
					iVar3++;
				}
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x2E6D5CE2213244B1("PLAYER HAS PROJECTILE WEAPON", unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 0, 0, 255, 255);
				if ((unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, 0f, -3,44f, -3f), unk_0x3F90543934DCD7E6(iLocal_50, 0f, -13,44f, 3f), 2,3f, 0, true, 0)) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) < 225f)
				{
					func_62(6);
				}
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, 0f, -3,44f, -3f), unk_0x3F90543934DCD7E6(iLocal_50, 0f, -13,44f, 3f), 2,3f, 0, true, 0))
				{
					unk_0x72903DCF9B54141D("PLAYER IS BEHIND VAN", 0,1f, 0,8f, 0f, 0, 0, 255, 255);
				}
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_50, 1)) < 225f)
				{
					unk_0x72903DCF9B54141D("PLAYER IS CLOSE TO VAN", 0,1f, 0,82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
				}
			}
		}
		if (((unk_0xB8DE76287EDC4957(iLocal_50, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_50, 1), 25f, 0)) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_49[0], 1), 20f, 0))) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_49[1], 1), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_46 != 4)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
			{
				unk_0xAE6EBBBBD8B9FB30(iLocal_49[0], 6, false);
				unk_0x771A86309E0CA47B(iLocal_49[0], false);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
			{
				unk_0xAE6EBBBBD8B9FB30(iLocal_49[1], 6, false);
				unk_0x771A86309E0CA47B(iLocal_49[1], false);
			}
		}
	}
}

int func_143()//Position - 0x8C5C
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if ((unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4())) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(iLocal_50, 1) };
		vVar1 = { unk_0xCE3B2111021F7234(iLocal_50) };
		vVar2 = { unk_0xA05DDB968587006B(iLocal_50, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) };
		if (((vVar2.y > 1f && (((unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_50) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_50)) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_49[0])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_49[1]))) && unk_0xE97272C977DEADD3(unk_0xAF3D7D969F2C195C(vVar1.x, vVar1.y, vVar0.x, vVar0.y)) < 60f) && unk_0xAF3D7D969F2C195C(vVar1.z, vVar1.y, vVar0.z, vVar0.y) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_144()//Position - 0x8D4C
{
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, 2,7f, 7f, -2f), unk_0x3F90543934DCD7E6(iLocal_50, 2,7f, -3,25f, 3f), 3f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, -2,7f, 7f, -2f), unk_0x3F90543934DCD7E6(iLocal_50, -2,7f, -3,25f, 3f), 3f, 0, true, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_50, 0f, 7f, -2f), unk_0x3F90543934DCD7E6(iLocal_50, 0f, 0f, 3f), 2,4f, 0, true, 0))
		{
			if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145()//Position - 0x8E0D
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			}
		}
		else if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
		{
			iVar0 = unk_0xC733212BF9066BDF();
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0x6ADD12BF4D6D2587(iLocal_50))
		{
			return ((unk_0xB8DE76287EDC4957(iVar0, 0) && unk_0x9A213A2345825783(iVar0, iLocal_50)) && unk_0x90D5DFB054818BA7(iVar0) > 10f);
		}
	}
	return 0;
}

int func_146()//Position - 0x8EA6
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (iLocal_86)
		{
			return 1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) || unk_0x191BE1BC8F26F3C1(iLocal_49[0], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_49[0], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) || unk_0x191BE1BC8F26F3C1(iLocal_49[1], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_49[1], unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_147()//Position - 0x8F28
{
	float fVar0;
	
	if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1])) && unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				vLocal_283 = { unk_0xDCD8BDD2E10C660E(iLocal_50, 0) };
				vLocal_284 = { unk_0xDB824D597B53CC40(iLocal_50, 2) };
				vLocal_285 = { unk_0x09E51060F59912ED("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0, 2) };
				bLocal_288 = false;
				iLocal_289 = 0;
				unk_0xACE486395AA1867D(iLocal_50, 1084227584);
				unk_0x6931076730A4AC5D(&iLocal_54);
				unk_0x270054D97CD161A8(0, 5000);
				unk_0x380C1E7B7740D618(0, vLocal_285, 1f, -1, 0,1f, 512, vLocal_284.z);
				unk_0x2DAC3448B66448E8(0, vLocal_284.z, 0);
				unk_0x1B16DD5C115FE009(iLocal_54);
				unk_0xAB30B1CF01A198C1(iLocal_49[1], iLocal_54);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_54);
				iLocal_48++;
				break;
			
			case 1:
				vLocal_283 = { unk_0xDCD8BDD2E10C660E(iLocal_50, 0) };
				vLocal_284 = { unk_0xDB824D597B53CC40(iLocal_50, 2) };
				vLocal_285 = { unk_0x09E51060F59912ED("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0, 2) };
				if (!unk_0xD56F740235B1E8F0(iLocal_287))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_63) < 22500f && unk_0xEF563B5489921133(iLocal_50))
					{
						iLocal_287 = unk_0x8383F9C605E523B7(vLocal_283, vLocal_284, 2);
						unk_0x8E628F774C748D93(iLocal_49[0], iLocal_287, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0xD0E12C501EE26329(iLocal_287, true);
					}
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_49[1], 242628503) != 1)
				{
					unk_0x6931076730A4AC5D(&iLocal_54);
					unk_0x380C1E7B7740D618(0, vLocal_285, 1f, -1, 0,1f, 512, vLocal_284.z);
					unk_0x2DAC3448B66448E8(0, vLocal_284.z, 0);
					unk_0x1B16DD5C115FE009(iLocal_54);
					unk_0xAB30B1CF01A198C1(iLocal_49[1], iLocal_54);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_54);
				}
				fVar0 = unk_0xF0371FE6E2BF9599(iLocal_49[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (vLocal_284.z > 180f)
				{
					vLocal_284.z = (vLocal_284.z - 360f);
				}
				if (vLocal_284.z <= -180f)
				{
					vLocal_284.z = (vLocal_284.z + 360f);
				}
				if (unk_0xE97272C977DEADD3((fVar0 - vLocal_284.z)) < 15f && system::vdist(vLocal_285, unk_0xB3328BA8976B416C(iLocal_49[1], 1)) < 0,2f)
				{
					unk_0xCF9DFDA1C6C69401(iLocal_49[1], -1056964608);
					unk_0xB8E08BD5B184DF4E(iLocal_49[1]);
					bLocal_288 = true;
					iLocal_286 = unk_0x8383F9C605E523B7(vLocal_283, vLocal_284, 2);
					unk_0x8E628F774C748D93(iLocal_49[1], iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xEBB74134CCA3442E(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!iLocal_76)
				{
					if (((unk_0xD56F740235B1E8F0(iLocal_286) && unk_0x463C4747B41E35A3(iLocal_286) > 0,09f) && unk_0x463C4747B41E35A3(iLocal_286) < 0,11f) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_106, cLocal_105, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
					}
				}
				if (unk_0xD56F740235B1E8F0(iLocal_286))
				{
					if (!bLocal_79)
					{
						if ((unk_0x6ADD12BF4D6D2587(iLocal_52) && unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_49[1])) && unk_0x463C4747B41E35A3(iLocal_286) > 0,3793f)
						{
							if (!unk_0x5D67DB68EF61B3E1(iLocal_52, iLocal_50))
							{
								unk_0x6B7C10B19928914F(iLocal_52, 1, true);
								unk_0xB18E1DBC397238E1(iLocal_52, false, 0);
								unk_0xA9D382E7BA095148(iLocal_52, iLocal_50, 0, unk_0xA05DDB968587006B(iLocal_50, unk_0xB3328BA8976B416C(iLocal_52, 1)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x463C4747B41E35A3(iLocal_286) > 0,546243f)
					{
						unk_0xBD1486160AB0661B(iLocal_50, -4f, 1);
						if (unk_0x6ADD12BF4D6D2587(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0xDA5162F6425C44AA(iLocal_50, 2, 1);
							unk_0xDA5162F6425C44AA(iLocal_50, 3, 1);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_76)
				{
					if (((unk_0xD56F740235B1E8F0(iLocal_286) && unk_0x463C4747B41E35A3(iLocal_286) > 0,56f) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((unk_0xD56F740235B1E8F0(iLocal_286) && unk_0x463C4747B41E35A3(iLocal_286) > 0,6f) || !unk_0xD56F740235B1E8F0(iLocal_286))
					{
						if (unk_0xD56F740235B1E8F0(iLocal_287))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_49[0]);
							iLocal_287 = unk_0x8383F9C605E523B7(vLocal_283, vLocal_284, 2);
							unk_0x8E628F774C748D93(iLocal_49[0], iLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_289 = 1;
					}
				}
				else if ((unk_0xD56F740235B1E8F0(iLocal_287) && unk_0x463C4747B41E35A3(iLocal_287) >= 0,92f) || !unk_0xD56F740235B1E8F0(iLocal_287))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 0) && unk_0x78F50AA8F955BEFC(iLocal_49[0], -1794415470) != 1)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_49[0]);
						unk_0x6F8C8278B7C06889(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xD56F740235B1E8F0(iLocal_286) && unk_0x7B82209ED5D8E168(iLocal_49[1], unk_0x8B948C59217A295D("ENDS_IN_WALK")))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_49[1]);
					unk_0x6F8C8278B7C06889(iLocal_49[1], iLocal_50, -1, 0, 1f, 1, 0);
					system::settimera(0);
				}
				if ((func_82() && unk_0x8212F63113683BF7(iLocal_50, 0) == 0f) && unk_0x8212F63113683BF7(iLocal_50, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (system::timera() > 15000)
				{
					unk_0xDA5162F6425C44AA(iLocal_50, 0, 1);
					unk_0xDA5162F6425C44AA(iLocal_50, 1, 1);
				}
				break;
		}
		if (((!unk_0x3AB6A1A9084FB0A4(func_3()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(func_3(), 1)) < 30f) && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
	{
		if (unk_0xB8B3E5529EDB87D4(iLocal_103))
		{
			func_62(7);
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_151())
		{
			if (func_82())
			{
				func_62(6);
			}
			else
			{
				func_62(8);
			}
		}
		else if (func_149())
		{
			func_62(2);
		}
		else if (func_148())
		{
			func_62(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_90();
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_45 != 2)
					{
						unk_0x22F63D02D1D91EBC(iLocal_49[0], "random@security_van", "driver_exit_panic", vLocal_283, vLocal_284, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xB8E08BD5B184DF4E(iLocal_49[0]);
						unk_0x12C9D41D52A560D6(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0xB8DE76287EDC4957(iLocal_50, 0) && unk_0xD56F740235B1E8F0(iLocal_286)) && !unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
			{
				unk_0xBD1486160AB0661B(iLocal_50, -1000f, 1);
				unk_0xB8E08BD5B184DF4E(iLocal_49[1]);
			}
		}
		if (bLocal_79 && !unk_0xB8B3E5529EDB87D4(iLocal_103))
		{
			unk_0xDA5162F6425C44AA(iLocal_50, 2, 1);
			unk_0xDA5162F6425C44AA(iLocal_50, 3, 1);
		}
	}
}

int func_148()//Position - 0x96C4
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (func_74(unk_0xC733212BF9066BDF()))
				{
					iLocal_51 = unk_0xC733212BF9066BDF();
					return 1;
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (func_74(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
			{
				fLocal_280 = (fLocal_280 + unk_0x46C19C2753391FBF());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (unk_0x46C19C2753391FBF() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				iLocal_51 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_149()//Position - 0x977A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4())) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_49[iVar0]) || unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1)) < 9f) && !unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x9F887157983E8EFC(iLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_94())
	{
		return 1;
	}
	if ((func_150() || func_95()) && func_66())
	{
		if (!unk_0xA8D0477084E86A92(iLocal_49[0], iLocal_50, 0) || !unk_0xA8D0477084E86A92(iLocal_49[1], iLocal_50, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150()//Position - 0x987C
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1);
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502())))
		{
			if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_49[0], unk_0xFC1458A37D98B502(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_49[1], unk_0xFC1458A37D98B502(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_151()//Position - 0x992D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && unk_0xEBE499597C718EB8(iLocal_49[iVar0], unk_0xFC1458A37D98B502(), 1)) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && unk_0x7ED4D0E480A6EC43(iLocal_49[iVar0], unk_0xFC1458A37D98B502()))) || unk_0xEBE499597C718EB8(iLocal_49[iVar0], unk_0xFC1458A37D98B502(), 1)) || (unk_0xEBE499597C718EB8(iLocal_50, unk_0xFC1458A37D98B502(), 1) && func_66())) || unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0])) || unk_0x191BE1BC8F26F3C1(iLocal_49[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_144() || func_96())
	{
		return 1;
	}
	if (unk_0xB8DE76287EDC4957(iLocal_50, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]))
			{
				if (unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()) && unk_0x27C8A4034A05DC21(iLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_50, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_63, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0xB8DE76287EDC4957(iLocal_50, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_50, 1), 25f, 0)) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_49[0], 1), 20f, 0))) || (!unk_0x3AB6A1A9084FB0A4(iLocal_49[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xB3328BA8976B416C(iLocal_49[1], 1), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_152()//Position - 0x9B20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_49[iVar0]))
		{
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_49[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_49[iVar0], 0)) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if ((unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1), 5f, 1) || func_31(unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1) + Vector(5f, 10f, 10f), unk_0xB3328BA8976B416C(iLocal_49[iVar0], 1) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xEBE499597C718EB8(iLocal_49[iVar0], unk_0xFC1458A37D98B502(), 1))
				{
					bLocal_80 = true;
					return 1;
				}
			}
			else
			{
				bLocal_80 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_153()//Position - 0x9BE5
{
	int iVar0;
	
	iLocal_50 = unk_0xEA60F3B426BB095B(iLocal_74, vLocal_63, fLocal_64, true, true, false);
	iLocal_53 = unk_0x5E35CF35E65D69B9(joaat("prop_security_case_01"), vLocal_63, true, true, false);
	unk_0xA9D382E7BA095148(iLocal_53, iLocal_50, 0, 0f, -2,4589f, 1,2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xB3A8974D2C811672(iLocal_53, false, 0);
	unk_0xA55D009D02766A03(iLocal_53, iLocal_50, 0);
	unk_0xACE486395AA1867D(iLocal_50, 1084227584);
	unk_0x4BEFCD5DAE410A90(iLocal_50, 3);
	unk_0xD38F266C132F2897(iLocal_53, false, true, true, true, true, true, 0, false);
	unk_0xE0F761CE722765C1(iLocal_50, 1, 0);
	unk_0xE01CE1EBCD7EE551(iLocal_50, 700, 0);
	unk_0x4C44781F822B0B00(iLocal_50, false, 0);
	unk_0xCFF0CD14B439821D(iLocal_50, true, 1);
	unk_0xCF5401FD913E6DD3(iLocal_50, 0);
	unk_0x55B1BF6B77028A46(iLocal_50, 1);
	unk_0x590D9654A4367AA1((vLocal_63.x - 200f), (vLocal_63.y - 200f), (vLocal_63.x + 200f), (vLocal_63.y + 200f));
	if (iLocal_44 == 3)
	{
		iLocal_49[0] = unk_0x00D1A9572426E8DD(iLocal_50, 26, iLocal_73, -1, 1, true);
		iLocal_49[1] = unk_0x00D1A9572426E8DD(iLocal_50, 26, iLocal_73, 0, 1, true);
		unk_0xA15269351F50F113(iLocal_50, true, true, 0);
		unk_0xCFF0CD14B439821D(iLocal_50, true, 1);
	}
	else
	{
		iLocal_49[1] = unk_0xAC992EFAD62C33BF(26, iLocal_73, vLocal_61[1 /*3*/], fLocal_62[1], 1, true);
		iLocal_49[0] = unk_0xAC992EFAD62C33BF(26, iLocal_73, vLocal_61[0 /*3*/], fLocal_62[0], 1, true);
		unk_0x60C06BFD037BB7CF(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}
	func_79(iLocal_49[1]);
	unk_0x4DE114E3C7F8B7C2("Security_guards", &iLocal_60);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		unk_0x6D624C6A284D7D07(iLocal_49[iVar0], 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 1, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 13, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 6, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 8, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_49[iVar0], 10, true);
		unk_0xE17958D3FD0F9EE9(iLocal_49[iVar0], 512, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_49[iVar0], 118, false);
		unk_0xE17958D3FD0F9EE9(iLocal_49[iVar0], 128, true);
		unk_0xB89BC60EFF7F2571(iLocal_49[iVar0], 0);
		unk_0xE0F761CE722765C1(iLocal_49[iVar0], 1, 0);
		unk_0x07224EEE13A1B6AE(iLocal_49[iVar0], 1);
		unk_0x4F94C8AB03F5A349(iLocal_49[iVar0], 1);
		unk_0x9E058151726E58DE(iLocal_49[iVar0], joaat("weapon_pistol"), -1, false, true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_49[iVar0], iLocal_60);
		unk_0xE9B3D12A64CC7C1A(iLocal_49[iVar0], true);
		unk_0xCFB385D0FF082808(iLocal_49[iVar0], 250);
		iVar0++;
	}
	unk_0xCFF0CD14B439821D(iLocal_49[1], true, 1);
	unk_0xF96119FCCD4D1889(1, -1533126372, iLocal_60);
	unk_0xF96119FCCD4D1889(1, iLocal_60, -1533126372);
	unk_0xF96119FCCD4D1889(2, iLocal_60, 1862763509);
	unk_0xF96119FCCD4D1889(2, 1862763509, iLocal_60);
	if (iLocal_44 == 1)
	{
		unk_0x0B652E456D6A7E32(iLocal_49[0], 0, 1, 0, false);
		unk_0xD1980BC8CFFBF0B9(iLocal_49[0], 0);
		unk_0x0B652E456D6A7E32(iLocal_49[1], 0, 1, 0, false);
		unk_0xD1980BC8CFFBF0B9(iLocal_49[1], 0);
	}
	if (func_11() == 0 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_68(&Local_106, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_68(&Local_106, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_68(&Local_106, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	func_68(&Local_106, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	func_68(&Local_106, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	unk_0x2E4932E63763FE26(iLocal_74, true);
	unk_0xDF1ACFD53102CEB0(iLocal_73, true);
	if (iLocal_44 != 3)
	{
	}
}

float func_154(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x9F58
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

bool func_155()//Position - 0x9F92
{
	func_163(&uLocal_123, iLocal_73);
	func_163(&uLocal_123, iLocal_74);
	func_163(&uLocal_123, iLocal_75);
	func_161(&uLocal_123, "random@security_van");
	func_161(&uLocal_123, "weapons@holster_1h");
	func_161(&uLocal_123, "move_injured_generic");
	func_160(&uLocal_123, 3);
	return func_156(&uLocal_123);
}

int func_156(var uParam0)//Position - 0x9FE4
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_157(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_157(var uParam0)//Position - 0xA046
{
	return func_158(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_158(int iParam0, char* sParam1, int iParam2)//Position - 0xA05D
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_159(iParam0))
			{
				case 0:
					return unk_0x9A0B2ED5055D3F0B(iParam2);
					break;
				
				case 1:
					return unk_0x3A801AA34DD821BE(sParam1);
					break;
				
				case 2:
					return unk_0xD9C499EAA1D3F82A(sParam1);
					break;
				
				case 3:
					return unk_0xA51ADD51711B4A15(sParam1);
					break;
				
				case 4:
					return unk_0x0840F461D7BD8859(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC316B5E3E7ACF515(sParam1);
					break;
				
				case 6:
					return unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2674C3EBFAFF7678(iParam2);
					break;
				
				case 8:
					return unk_0x9F0887BCBFCF3C2F(iParam2);
					break;
				
				case 9:
					return unk_0xFEDD99169EC73AA6();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_159(int iParam0)//Position - 0xA151
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_160(var uParam0, int iParam1)//Position - 0xA17D
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_161(var uParam0, char* sParam1)//Position - 0xA194
{
	func_162(uParam0, 1, -1, sParam1, 0);
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA1A7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x74C475EB8E73D398(sParam3, "NULL"))
					{
						if (unk_0x74C475EB8E73D398(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_163(var uParam0, int iParam1)//Position - 0xA28F
{
	func_162(uParam0, 0, iParam1, "NULL", 0);
}

int func_164()//Position - 0xA2A3
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_165(float fParam0, bool bParam1)//Position - 0xA329
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
		if (func_13(func_11()))
		{
			iVar5 = func_55();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_166(iVar1, &Var0);
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

void func_166(int iParam0, var uParam1)//Position - 0xA3E0
{
	switch (iParam0)
	{
		case 0:
			func_167(uParam1, "Abigail1", func_169(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 1:
			func_167(uParam1, "Abigail2", func_169(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 2:
			func_167(uParam1, "Barry1", func_169(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 3:
			func_167(uParam1, "Barry2", func_169(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 4:
			func_167(uParam1, "Barry3", func_169(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 5:
			func_167(uParam1, "Barry3A", func_169(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 6:
			func_167(uParam1, "Barry3C", func_169(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 7:
			func_167(uParam1, "Barry4", func_169(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_168(iParam0), 0, 0);
			break;
		
		case 8:
			func_167(uParam1, "Dreyfuss1", func_169(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 9:
			func_167(uParam1, "Epsilon1", func_169(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 10:
			func_167(uParam1, "Epsilon2", func_169(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 11:
			func_167(uParam1, "Epsilon3", func_169(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 12:
			func_167(uParam1, "Epsilon4", func_169(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 13:
			func_167(uParam1, "Epsilon5", func_169(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 14:
			func_167(uParam1, "Epsilon6", func_169(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 15:
			func_167(uParam1, "Epsilon7", func_169(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 16:
			func_167(uParam1, "Epsilon8", func_169(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 17:
			func_167(uParam1, "Extreme1", func_169(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 18:
			func_167(uParam1, "Extreme2", func_169(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 19:
			func_167(uParam1, "Extreme3", func_169(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 20:
			func_167(uParam1, "Extreme4", func_169(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 21:
			func_167(uParam1, "Fanatic1", func_169(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 22:
			func_167(uParam1, "Fanatic2", func_169(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 23:
			func_167(uParam1, "Fanatic3", func_169(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_168(iParam0), 0, 1);
			break;
		
		case 24:
			func_167(uParam1, "Hao1", func_169(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_168(iParam0), 0, 1);
			break;
		
		case 25:
			func_167(uParam1, "Hunting1", func_169(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 26:
			func_167(uParam1, "Hunting2", func_169(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 27:
			func_167(uParam1, "Josh1", func_169(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 28:
			func_167(uParam1, "Josh2", func_169(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 29:
			func_167(uParam1, "Josh3", func_169(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 30:
			func_167(uParam1, "Josh4", func_169(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 31:
			func_167(uParam1, "Maude1", func_169(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 32:
			func_167(uParam1, "Minute1", func_169(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 33:
			func_167(uParam1, "Minute2", func_169(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 34:
			func_167(uParam1, "Minute3", func_169(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 35:
			func_167(uParam1, "MrsPhilips1", func_169(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 36:
			func_167(uParam1, "MrsPhilips2", func_169(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 37:
			func_167(uParam1, "Nigel1", func_169(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 38:
			func_167(uParam1, "Nigel1A", func_169(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 39:
			func_167(uParam1, "Nigel1B", func_169(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 40:
			func_167(uParam1, "Nigel1C", func_169(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 41:
			func_167(uParam1, "Nigel1D", func_169(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 42:
			func_167(uParam1, "Nigel2", func_169(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 43:
			func_167(uParam1, "Nigel3", func_169(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 44:
			func_167(uParam1, "Omega1", func_169(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 45:
			func_167(uParam1, "Omega2", func_169(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 46:
			func_167(uParam1, "Paparazzo1", func_169(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 47:
			func_167(uParam1, "Paparazzo2", func_169(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 48:
			func_167(uParam1, "Paparazzo3", func_169(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 49:
			func_167(uParam1, "Paparazzo3A", func_169(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 50:
			func_167(uParam1, "Paparazzo3B", func_169(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 51:
			func_167(uParam1, "Paparazzo4", func_169(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 52:
			func_167(uParam1, "Rampage1", func_169(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 54:
			func_167(uParam1, "Rampage3", func_169(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 55:
			func_167(uParam1, "Rampage4", func_169(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 56:
			func_167(uParam1, "Rampage5", func_169(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 53:
			func_167(uParam1, "Rampage2", func_169(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 57:
			func_167(uParam1, "TheLastOne", func_169(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 58:
			func_167(uParam1, "Tonya1", func_169(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 59:
			func_167(uParam1, "Tonya2", func_169(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 60:
			func_167(uParam1, "Tonya3", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 61:
			func_167(uParam1, "Tonya4", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 62:
			func_167(uParam1, "Tonya5", func_169(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_167(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xB627
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

int func_168(int iParam0)//Position - 0xB6B8
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

struct<2> func_169(int iParam0)//Position - 0xB9FE
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_170(iParam0) };
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

struct<2> func_170(int iParam0)//Position - 0xBA36
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

int func_171()//Position - 0xBE83
{
	if (func_174() && !func_175())
	{
		return 1;
	}
	if (func_173() && func_172())
	{
		return 1;
	}
	return 0;
}

bool func_172()//Position - 0xBEB5
{
	return Global_104273 > 0;
}

int func_173()//Position - 0xBEC3
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xBED8
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_175()//Position - 0xBEFE
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

int func_176()//Position - 0xBF1B
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_177()//Position - 0xBF7D
{
	if ((Global_104544 == func_59() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_178(var uParam0)//Position - 0xBFA8
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_146 + uParam0->f_147) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_179(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_179(int iParam0)//Position - 0xC034
{
	func_180(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_180(int iParam0, char* sParam1, int iParam2)//Position - 0xC04A
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_159(*iParam0))
		{
			case 0:
				unk_0x6FF834D85E2DD4C6(iParam2);
				break;
			
			case 1:
				unk_0x6450931B826B49D9(sParam1);
				break;
			
			case 2:
				unk_0x7C0C9D9129095E19(sParam1);
				break;
			
			case 3:
				unk_0x128A5DCCD09CCA17(sParam1, unk_0xC80D31E4B587871C(*iParam0, 28));
				break;
			
			case 4:
				unk_0x0D9525F20FB71C52(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x307EAE14C924E2E7(sParam1);
				break;
			
			case 6:
				unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8A719502FC5D36F1(iParam2);
				break;
			
			case 8:
				unk_0xBCBC53983EC3B1BA(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x36905B9EE07F38CC();
				break;
			
			default:
				break;
		}
		unk_0x872F1C1F8587CCC7(iParam0, 29);
	}
}

void func_181()//Position - 0xC124
{
	iLocal_75 = joaat("prop_security_case_01");
	iLocal_74 = joaat("stockade");
	iLocal_73 = joaat("s_m_m_armoured_01");
	iLocal_94 = unk_0x63A6486593EC7EC3(3000, 8000);
	switch (iLocal_45)
	{
		case 1:
			vLocal_70 = { -315,889f, -1550,554f, 7,233013f };
			vLocal_71 = { -315,2352f, -1366,581f, 45,29617f };
			fLocal_72 = 180f;
			vLocal_63 = { -331,8429f, -1461,042f, 30,153f };
			fLocal_64 = -64,3539f;
			vLocal_61[0 /*3*/] = { -335,564f, -1462,237f, 29,5452f };
			fLocal_62[0] = 158,3857f;
			vLocal_61[1 /*3*/] = { -342,7024f, -1475,043f, 29,6004f };
			fLocal_62[1] = 290,3041f;
			iLocal_44 = 1;
			break;
		
		case 2:
			vLocal_70 = { -538,2149f, -868,7426f, 17,96054f };
			vLocal_71 = { -663,8162f, -867,9987f, 53,66249f };
			fLocal_72 = 121,5f;
			vLocal_63 = { -588,5128f, -866,9584f, 25,32786f };
			fLocal_64 = -89,02679f;
			vLocal_61[0 /*3*/] = { -589,4673f, -865,4055f, 24,7622f };
			fLocal_62[0] = 12,5464f;
			vLocal_61[1 /*3*/] = { -578,4414f, -874,5964f, 24,9183f };
			fLocal_62[1] = 352,4951f;
			iLocal_44 = 1;
			break;
		
		case 3:
			vLocal_70 = { -468,6309f, 6101,907f, 14,8912f };
			vLocal_71 = { -359,9734f, 5994,152f, 50,36843f };
			fLocal_72 = 152,25f;
			vLocal_63 = { -395,6852f, 6056,967f, 30,5001f };
			fLocal_64 = 188,9862f;
			vLocal_61[0 /*3*/] = { -398,4612f, 6051,296f, 30,5003f };
			fLocal_62[0] = 251,7138f;
			vLocal_61[1 /*3*/] = { -378,408f, 6035,689f, 30,498f };
			fLocal_62[1] = 154,0836f;
			iLocal_44 = 2;
			break;
		
		case 4:
			vLocal_70 = { -631,3408f, -1105,581f, 7,220509f };
			vLocal_71 = { -462,1721f, -1103,597f, 62,53583f };
			fLocal_72 = 177,25f;
			vLocal_63 = { -595,7766f, -1094,089f, 21,1785f };
			fLocal_64 = 263,4662f;
			vLocal_61[0 /*3*/] = { -600,8182f, -1103,778f, 21,3292f };
			fLocal_62[0] = 338,8304f;
			vLocal_61[1 /*3*/] = { -595,3461f, -1096,054f, 21,1785f };
			fLocal_62[1] = 151,297f;
			iLocal_44 = 1;
			break;
		
		case 5:
			vLocal_63 = { -1042,768f, -1049,296f, 1,0825f };
			fLocal_64 = 26,9919f;
			iLocal_44 = 3;
			break;
		
		case 6:
			vLocal_63 = { -595,5618f, -667,7325f, 31,0544f };
			fLocal_64 = 271,1543f;
			iLocal_44 = 3;
			break;
		
		case 7:
			vLocal_63 = { 3018,384f, 3634,017f, 70,4076f };
			fLocal_64 = 335,9052f;
			iLocal_44 = 3;
			break;
		
		case 8:
			vLocal_63 = { -2815,661f, 2208,171f, 27,8382f };
			fLocal_64 = 119,1519f;
			iLocal_44 = 3;
			break;
		
		case 9:
			vLocal_63 = { 856,7742f, -2067,845f, 29,0704f };
			fLocal_64 = 83,1204f;
			iLocal_44 = 3;
			break;
		
		case 10:
			vLocal_63 = { 805,1932f, -703,1327f, 28,1632f };
			fLocal_64 = 248,8625f;
			iLocal_44 = 3;
			break;
		
		default:
			break;
	}
}

void func_182(int iParam0)//Position - 0xC487
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_183();
}

void func_183()//Position - 0xC4BD
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

void func_184(int iParam0)//Position - 0xC4FA
{
	Global_104544 = iParam0;
}

int func_185(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC508
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
		iParam1 = func_59();
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_175())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_171())
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
		if (func_13(func_11()))
		{
			if (func_165(100f, 1) != -1)
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
		if (func_13(func_11()))
		{
			if (func_221(func_11()) == 4 || func_221(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
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
		if (!func_210(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_209(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_209(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_222(30) && !func_209(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_208(iVar4))
				{
					if (func_186(iVar2))
					{
						if (!func_128(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_11() != iVar2)
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

bool func_186(int iParam0)//Position - 0xC8A2
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_187(iVar0);
}

int func_187(int iParam0)//Position - 0xC8C3
{
	return func_188(iParam0, 1);
}

int func_188(int iParam0, int iParam1)//Position - 0xC8D2
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_208(iParam0))
	{
		return 0;
	}
	func_189(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC925
{
	func_190(func_201(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC943
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(iParam0, iParam1))
	{
		iVar0 = func_199(iParam1);
		iVar1 = func_197(iParam0);
		iVar2 = (func_197(iParam0) - func_197(iParam1));
		iVar3 = (func_199(iParam0) - func_199(iParam1));
		iVar4 = (func_196(iParam0) - func_196(iParam1));
		iVar5 = (func_195(iParam0) - func_195(iParam1));
		iVar6 = (func_194(iParam0) - func_194(iParam1));
		iVar7 = (func_193(iParam0) - func_193(iParam1));
	}
	else
	{
		iVar0 = func_199(iParam0);
		iVar1 = func_197(iParam1);
		iVar2 = (func_197(iParam1) - func_197(iParam0));
		iVar3 = (func_199(iParam1) - func_199(iParam0));
		iVar4 = (func_196(iParam1) - func_196(iParam0));
		iVar5 = (func_195(iParam1) - func_195(iParam0));
		iVar6 = (func_194(iParam1) - func_194(iParam0));
		iVar7 = (func_193(iParam1) - func_193(iParam0));
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
		iVar4 = (iVar4 + func_192(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_191(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_191(float fParam0, float fParam1, float fParam2)//Position - 0xCB44
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

int func_192(int iParam0, int iParam1)//Position - 0xCB86
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

int func_193(int iParam0)//Position - 0xCC28
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_194(int iParam0)//Position - 0xCC3B
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_195(int iParam0)//Position - 0xCC4E
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_196(int iParam0)//Position - 0xCC61
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_197(int iParam0)//Position - 0xCC73
{
	return (system::shift_right(iParam0, 26) & 31 * func_198(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_198(bool bParam0, int iParam1, int iParam2)//Position - 0xCC98
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_199(int iParam0)//Position - 0xCCAF
{
	return iParam0 & 15;
}

int func_200(int iParam0, int iParam1)//Position - 0xCCBC
{
	int iVar0;
	int iVar1;
	
	if (!func_208(iParam1) || !func_208(iParam0))
	{
		return 1;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_201()//Position - 0xCDC8
{
	var uVar0;
	
	func_207(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_206(&uVar0, unk_0x95327550F0F2BE7C());
	func_205(&uVar0, unk_0x674C9438180770FE());
	func_204(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_203(&uVar0, unk_0xEAF455949B108589());
	func_202(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_202(var uParam0, int iParam1)//Position - 0xCE0E
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

void func_203(var uParam0, int iParam1)//Position - 0xCE94
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_204(var uParam0, int iParam1)//Position - 0xCEC7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_197(*uParam0);
	if (iParam1 < 1 || iParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_205(var uParam0, int iParam1)//Position - 0xCF18
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_206(var uParam0, int iParam1)//Position - 0xCF52
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_207(var uParam0, int iParam1)//Position - 0xCF8D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_208(int iParam0)//Position - 0xCFC9
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
	iVar0 = func_193(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_194(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_195(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_197(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_199(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_196(iParam0);
	if (iVar5 < 1 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0, int iParam1)//Position - 0xD0A5
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xD0C8
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_1()) || Global_103602) || Global_25235) || func_217()) || func_18(8, -1)) || func_216()) || func_215()) || func_214()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_1()) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_1()) || Global_103602) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_216()) || func_215()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_1()) || Global_103602) || Global_25235) || func_217()) || func_18(8, -1)) || func_216()) || func_215()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_18(8, -1)) || func_213()) || func_212()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_216()) || func_215()) || func_212()) || func_211())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_1()) || Global_25235) || func_217()) || func_18(8, -1)) || func_215()) || func_214()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_1()) || func_215()) || Global_103602) || Global_25235) || func_217()) || Global_36993) || func_18(8, -1)) || func_214()) || func_212()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_1()) || Global_103602) || Global_25235) || func_217()) || func_18(8, -1)) || func_214()) || func_212()) || func_216()) || func_215()) || func_213())
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

var func_211()//Position - 0xD7E5
{
	return Global_92872.f_1;
}

int func_212()//Position - 0xD7F3
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_213()//Position - 0xD819
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_214()//Position - 0xD833
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

bool func_215()//Position - 0xD85D
{
	return Global_92885.f_316 > 0;
}

bool func_216()//Position - 0xD86E
{
	return Global_92885.f_315 > 0;
}

var func_217()//Position - 0xD87F
{
	return Global_1312854;
}

int func_218()//Position - 0xD88B
{
	func_10();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)//Position - 0xD8B3
{
	return func_200(func_201(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0xD8C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_221(int iParam0)//Position - 0xD9A9
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_222(int iParam0)//Position - 0xD9CD
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

int func_223()//Position - 0xDA2B
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

int func_224()//Position - 0xDA6F
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

void func_225()//Position - 0xDB2A
{
	if (func_177())
	{
		if (unk_0xB8B3E5529EDB87D4(iLocal_103))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_58))
			{
				unk_0xE30CF11C0EE14316(&iLocal_58);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_53))
		{
			unk_0x452336926718D62A(&iLocal_53);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_52))
		{
			if (unk_0xEC211A86AB3726B6(iLocal_52))
			{
				unk_0x452336926718D62A(&iLocal_52);
			}
			else
			{
				unk_0x3A703774620FDB42(&iLocal_52);
			}
		}
		unk_0x14776E43F90DD454(iLocal_74);
		unk_0x14776E43F90DD454(iLocal_73);
		unk_0x14776E43F90DD454(iLocal_75);
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0xDF1ACFD53102CEB0(iLocal_73, false);
		unk_0x2E4932E63763FE26(iLocal_74, false);
	}
	if (iLocal_97 != 0)
	{
		unk_0x15AAE2A89BBE596D(iLocal_97);
	}
	unk_0xCA107A9AAF17E75F(iLocal_59, 0);
	func_129(&uLocal_111, 0, 0);
	func_231(-1);
	func_226(&uLocal_123, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_226(var uParam0, bool bParam1)//Position - 0xDBD8
{
	int iVar0;
	
	if (!bParam1)
	{
		func_228(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_227(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_227(var uParam0)//Position - 0xDC13
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_228(var uParam0)//Position - 0xDC2C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_229(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_229(var uParam0)//Position - 0xDC65
{
	func_230(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_230(int iParam0, char* sParam1, int iParam2)//Position - 0xDC7C
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_159(iParam0))
		{
			case 0:
				unk_0x14776E43F90DD454(iParam2);
				break;
			
			case 1:
				unk_0xFCCDDE0E48CF9588(sParam1);
				break;
			
			case 2:
				unk_0x736CC1A30C230950(sParam1);
				break;
			
			case 3:
				unk_0x137FC8E0F58D9E0B(sParam1);
				break;
			
			case 4:
				unk_0x9E6ACDF1473CD846(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD22D83D359390CC6(sParam1);
				break;
			
			case 6:
				unk_0x77A208B3324C04F2();
				break;
			
			case 7:
				unk_0x7A0F3E22D109C816(iParam2);
				break;
			
			case 8:
				unk_0xF40900F61CC88931(iParam2, unk_0xC80D31E4B587871C(iParam0, 26));
				break;
			
			case 9:
				unk_0x74FDC371ED12544B();
				break;
			
			default:
				break;
		}
	}
}

void func_231(int iParam0)//Position - 0xDD3C
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_177())
	{
		func_235(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_104544, 1), 64);
		if (func_58(Global_104544) > 0)
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
	func_232(&Global_25292);
	Global_104545 = 0;
	func_184(-1);
}

void func_232(var uParam0)//Position - 0xDDF1
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

char* func_233(int iParam0, bool bParam1)//Position - 0xDE2E
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

void func_234(int iParam0)//Position - 0xE077
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_235(int iParam0)//Position - 0xE089
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)//Position - 0xE09E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_201();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)//Position - 0xE0CD
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_193(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_197(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)//Position - 0xE19E
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE1B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_199(*uParam0);
	iVar2 = func_196(*uParam0);
	iVar3 = func_195(*uParam0);
	iVar4 = func_194(*uParam0);
	iVar5 = func_193(*uParam0);
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
	iVar6 = func_192(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE338
{
	func_207(uParam0, iParam1);
	func_206(uParam0, iParam2);
	func_205(uParam0, iParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, iParam4);
	func_202(uParam0, iParam6);
}

int func_241(int iParam0)//Position - 0xE370
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

int func_242(int iParam0)//Position - 0xE513
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x8EE3A848975DDF21(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

