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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	int iLocal_82 = 0;
	vector3 vLocal_83[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
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
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	iLocal_79 = 6;
	iLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	vLocal_56 = { ScriptParam_274.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x7D9C4B359376D38A(82))
	{
		func_145(1);
	}
	iLocal_53 = unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4());
	iLocal_59 = 0;
	func_143(&Global_103206, 0);
	func_137();
	unk_0xB8E96DD2D2EF0BC3(1);
	if (func_136(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_31631)
	{
		system::wait(0);
	}
	if (!func_136(uLocal_58, 8))
	{
		if (!func_134(iLocal_64))
		{
			if (func_133(0, iLocal_63))
			{
				func_145(0);
			}
			else
			{
				func_145(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_133(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_136(uLocal_58, 8388608))
	{
		func_145(1);
	}
	if (func_136(uLocal_58, 524288) && (func_132() && !func_131()))
	{
		func_145(1);
	}
	if (unk_0x8F38E94BBF3404CD(unk_0x5D6DB7DE15F99EF2()) > 1 && !func_136(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_130(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_129(10);
	}
	while (true)
	{
		if (!func_136(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x7367FB97975F1E29(ScriptParam_274.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					func_128(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4());
		if (func_136(uLocal_58, 1048576))
		{
			if (unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
			{
				func_145(1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_53) && !unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
		{
			vLocal_55 = { unk_0xB3328BA8976B416C(iLocal_53, 1) };
			fLocal_57 = system::vdist2(vLocal_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_274.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = system::vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_134(iLocal_64) || (func_136(uLocal_58, 16) && !func_136(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_124();
						func_129(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_130(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_129(10);
						}
						if ((vLocal_55.z - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_122() && fLocal_57 > ((fLocal_77 * 1,5f) * (fLocal_77 * 1,5f)))
					{
						iLocal_67 = iLocal_67;
						func_129(3);
					}
					else
					{
						func_124();
					}
					break;
				
				case 3:
					if (unk_0x6CF53DE0FDF04073())
					{
						func_145(1);
						return;
					}
					if (!func_134(iLocal_64))
					{
						if (!func_136(uLocal_58, 8))
						{
							bVar2 = true;
							if (unk_0x74C475EB8E73D398(&(Global_92833.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_145(0);
								break;
							}
						}
					}
					if (!func_136(uLocal_58, 4))
					{
						func_111();
						func_128(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_92867)
					{
						if (iLocal_69 != 263)
						{
							if (func_110(6) && !func_109(iLocal_69))
							{
							}
							else
							{
								func_130(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_129(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_136(uLocal_58, 64);
						func_143(&uLocal_58, 128);
						if (!func_108(3) && !Global_92867)
						{
							if (func_136(uLocal_58, 2097152))
							{
								if ((!func_136(uLocal_58, 1) || !unk_0x6ADD12BF4D6D2587(func_107())) && !Global_92867)
								{
									func_129(10);
									break;
								}
							}
						}
						if (func_136(uLocal_58, 524288) && (func_132() && !func_131()))
						{
							func_145(1);
						}
						if (func_106())
						{
							func_145(1);
						}
						if ((!func_98(6) || Global_103602) || func_97())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							func_95(&uLocal_58, 128);
							bVar3 = false;
						}
						if (func_136(uLocal_58, 1))
						{
							if (!func_94())
							{
								func_95(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_93(1))
						{
							bVar3 = false;
						}
						if (Global_70856)
						{
							bVar3 = false;
						}
						if (func_92())
						{
							bVar3 = false;
						}
						if (unk_0x1E06D00B67177A18())
						{
							bVar3 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
						{
							bVar3 = false;
						}
						if (!unk_0x52B74B52F9D50112(unk_0x9EB17624F44A8DA4()))
						{
							bVar3 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x0C88267282FD588F(iLocal_53, ScriptParam_274.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							iVar4 = unk_0x674C9438180770FE();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									func_95(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!func_136(uLocal_58, 134217728))
										{
											func_87("MG_NA_TIME", iLocal_79, iLocal_80);
											func_95(&uLocal_58, 134217728);
										}
									}
									else
									{
										func_143(&uLocal_58, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								func_95(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!func_136(uLocal_58, 134217728))
									{
										func_87("MG_NA_TIME", iLocal_79, iLocal_80);
										func_95(&uLocal_58, 134217728);
									}
								}
								else
								{
									func_143(&uLocal_58, 134217728);
								}
							}
							if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x01B48CB2F72AE113(0, 51);
								if (func_86(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_85(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_95(&uLocal_58, 2048);
									}
									else if (!func_136(uLocal_58, 2048) || !unk_0xF491DD47B88AA84E())
									{
										func_84(&iLocal_60);
										func_143(&uLocal_58, 2048);
									}
									if (func_82(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_84(&iLocal_60);
										func_143(&uLocal_58, 2048);
										unk_0xD9E2C360120FEB7C(&Local_52);
										unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 56);
										func_129(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_84(&iLocal_60);
									func_143(&uLocal_58, 2048);
									unk_0xD9E2C360120FEB7C(&Local_52);
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 56);
									func_129(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_84(&iLocal_60);
								func_143(&uLocal_58, 2048);
								unk_0x3E80C2F7BC665259(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0x01B48CB2F72AE113(0, 51);
					if (unk_0x3B6F9DF9C5FEB3A4(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_84(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_136(uLocal_58, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_47(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_54, 0))
							{
								unk_0x5380482A432E314E(&iLocal_54);
							}
							if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
							{
								unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
							}
							func_46();
							if (Global_36993)
							{
								func_37(unk_0xFC1458A37D98B502());
							}
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 56);
							iLocal_50 = func_36();
							func_95(&uLocal_58, 2);
							func_129(6);
							func_32(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_31(iLocal_63);
								func_29(func_30(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_28();
						}
						else if (iVar5 == 0)
						{
							func_129(10);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 6:
					if (func_136(Global_103206, 262144))
					{
						func_143(&Global_103206, 262144);
						func_27();
					}
					if (func_136(uLocal_58, 2097152))
					{
						if (!func_108(3) && !unk_0x8F05914DD835E69F(iLocal_50))
						{
							func_129(10);
						}
					}
					if (!unk_0x8F05914DD835E69F(iLocal_50))
					{
						unk_0xB4BD3ECA024822EB(system::round((func_23(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_22(&iLocal_71);
						func_143(&uLocal_58, 256);
						func_21();
						if (bVar0)
						{
							func_143(&uLocal_58, 2);
						}
						else if (func_136(uLocal_58, 2))
						{
							if (func_136(Global_103206, 0))
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_143(&uLocal_58, 2);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_143(&uLocal_58, 2);
							}
						}
						func_129(0);
						if (iLocal_63 != -1)
						{
							if (func_136(Global_103206, 0))
							{
								unk_0xEBDD0888F628D3FB(func_30(iLocal_63), 0, Global_92870, 0);
								func_19(func_30(iLocal_63), 0, Global_92870, 1, 0);
							}
							else
							{
								unk_0xEBDD0888F628D3FB(func_30(iLocal_63), 0, Global_92870, 0);
								func_19(func_30(iLocal_63), 0, Global_92870, 0, 0);
							}
						}
						func_5();
						func_143(&Global_103206, 0);
						if (func_136(uLocal_58, 16777216))
						{
							func_145(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_104555.f_9055)
							{
								if (!func_133(0, iLocal_63))
								{
									func_145(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_129(0);
					break;
				
				case 10:
					func_145(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_130(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_129(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_130(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_84(&iLocal_60);
					}
					if (!unk_0xAB019B170BF1309C(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x3E80C2F7BC665259(1);
						}
					}
					func_129(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_134(iLocal_64) && func_133(0, iLocal_63))
									{
										func_137();
										if (iLocal_69 != 263)
										{
											func_130(iLocal_69, 1, 0);
										}
										func_129(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_130(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_129(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_137();
									if (iLocal_69 != 263)
									{
										func_130(iLocal_69, 1, 0);
									}
									func_129(0);
								}
							}
						}
						else
						{
							func_130(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		system::wait(0);
	}
}

int func_1(char* sParam0)//Position - 0xB3C
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_2()//Position - 0xB4F
{
	char* sVar0;
	
	func_3(&(Local_267.f_71));
	func_3(&(Local_267.f_77));
	func_3(&(Local_267.f_99));
	unk_0xFCCDDE0E48CF9588("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0xFCCDDE0E48CF9588("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0xFCCDDE0E48CF9588("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0xFCCDDE0E48CF9588("amb@world_human_aa_smoke@male@idle_a");
	unk_0xFCCDDE0E48CF9588("random@street_race");
	unk_0xFCCDDE0E48CF9588("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xAB019B170BF1309C(sVar0))
	{
		if (unk_0xA33DB5EB9131A829(sVar0))
		{
			if (unk_0x8597B3AA38933783(sVar0))
			{
				unk_0xB4301FCD03DF42F6(sVar0, false);
			}
		}
	}
}

void func_3(var uParam0)//Position - 0xC25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x14776E43F90DD454((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()//Position - 0xC55
{
}

void func_5()//Position - 0xC5D
{
	if (func_136(Global_104555.f_18986, 1))
	{
		func_143(&(Global_104555.f_18986), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()//Position - 0xC8D
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

bool func_7(bool bParam0)//Position - 0xCD8
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_8()//Position - 0xD03
{
	if (Global_104555.f_18986.f_18 < Global_104555.f_18986.f_19[iLocal_82] || Global_104555.f_18986.f_19[iLocal_82] == 0)
	{
		Global_104555.f_18986.f_19[iLocal_82] = Global_104555.f_18986.f_18;
		Global_104555.f_18986.f_18 = 999;
	}
	if (iLocal_82 == Global_104555.f_18986.f_1 || Global_104555.f_18986.f_1 == -1)
	{
		if (Global_104555.f_18986.f_1 != 5)
		{
			Global_104555.f_18986.f_1++;
			switch (Global_104555.f_18986.f_1)
			{
				case 1:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					break;
				
				case 2:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					break;
				
				case 3:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					break;
				
				case 4:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					break;
				
				case 5:
					func_130(70, 1, 0);
					func_17(70, 1);
					func_130(71, 1, 0);
					func_17(71, 1);
					func_130(72, 1, 0);
					func_17(72, 1);
					func_130(73, 1, 0);
					func_17(73, 1);
					func_130(74, 1, 0);
					func_17(74, 1);
					func_130(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_130(70, 1, 0);
			func_17(70, 1);
			func_130(71, 1, 0);
			func_17(71, 1);
			func_130(73, 1, 0);
			func_17(73, 1);
			func_130(74, 1, 0);
			func_17(74, 1);
			func_130(75, 1, 0);
			func_17(75, 1);
			func_130(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_104555.f_18986.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)//Position - 0xFD6
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)//Position - 0xFF4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)//Position - 0x107A
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x1100
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)//Position - 0x11AC
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x11CA
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x11EC
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
		func_16();
	}
}

void func_16()//Position - 0x13C0
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

void func_17(int iParam0, bool bParam1)//Position - 0x14E0
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25575 == 1)
	{
		Global_25576 = 1;
	}
	Global_25575 = 1;
	unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 20);
}

void func_18()//Position - 0x1569
{
	unk_0x3CDDC4760DBA4651();
	unk_0x03BFC089DC526267();
	switch (iLocal_82)
	{
		case 0:
			unk_0x8A4311269B560FDF(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1);
			break;
		
		case 1:
			unk_0x8A4311269B560FDF(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 1);
			break;
		
		case 3:
			unk_0x8A4311269B560FDF(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			unk_0x8A4311269B560FDF(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 1);
			break;
		
		case 2:
			unk_0x8A4311269B560FDF(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x167A
{
	if (unk_0xAB019B170BF1309C(&Global_90048))
	{
		return;
	}
	if (unk_0x389426B382444F87(sParam0, &Global_90048, 0, -1) != 0)
	{
		return;
	}
	unk_0x8119B12F6588AF71(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87155);
	StringCopy(&Global_90048, "", 64);
}

void func_20(int iParam0)//Position - 0x16BF
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35823)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35822 = 0;
	Global_35824 = 0;
	Global_35861 = 15;
	Global_55900 = 0;
	Global_55901 = 0;
}

void func_21()//Position - 0x16FC
{
	vector3 vVar0[24];
	
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		unk_0x9C6C754DD3BC5452(StackVal, 0, 0, 0);
	}
	else if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x84CCB9DCA385196F(0, &cVar0);
	}
}

void func_22(int iParam0)//Position - 0x173F
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_23(int iParam0)//Position - 0x1755
{
	if (func_26(iParam0))
	{
		if (func_25(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_24(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_24(bool bParam0)//Position - 0x1794
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

bool func_25(var uParam0)//Position - 0x17EC
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_26(int iParam0)//Position - 0x17FC
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

int func_27()//Position - 0x180C
{
	func_8();
	return 1;
}

void func_28()//Position - 0x1819
{
}

void func_29(char* sParam0, int iParam1, int iParam2)//Position - 0x1821
{
	if (!unk_0xAB019B170BF1309C(&Global_90048))
	{
		unk_0x8119B12F6588AF71(&Global_90048, 0, 0, 0, 1, 0);
		StringCopy(&Global_90048, "", 64);
	}
	StringCopy(&Global_90048, sParam0, 64);
	unk_0xE828B31F48018963(sParam0, iParam1, iParam2, func_7(0));
}

char* func_30(int iParam0)//Position - 0x1863
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_31(int iParam0)//Position - 0x19B6
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

void func_32(int iParam0)//Position - 0x1A0F
{
	if (!func_26(iParam0))
	{
		func_35(iParam0);
	}
	else
	{
		func_33(iParam0);
	}
}

void func_33(int iParam0)//Position - 0x1A30
{
	func_34(iParam0, 0f);
}

void func_34(int iParam0, float fParam1)//Position - 0x1A3F
{
	iParam0->f_1 = (func_24(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_35(int iParam0)//Position - 0x1A6D
{
	if (!func_26(iParam0))
	{
		func_33(iParam0);
	}
}

int func_36()//Position - 0x1A85
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0x3E80C2F7BC665259(1);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0 = iLocal_82;
	Var0.f_1 = { vLocal_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	unk_0xA91E83FF512776B6("SwitchSceneNeutral", 0, 1);
	system::wait(400);
	iVar2 = system::start_new_script_with_args(&Local_51, &Var0, 18, iLocal_61);
	unk_0x9D2418D7FC697249(&Local_51);
	return iVar2;
}

void func_37(int iParam0)//Position - 0x1B22
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return;
	}
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)//Position - 0x1B7B
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36770[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36770[iParam0 /*5*/].f_1 == unk_0xFC1458A37D98B502())
		{
			Global_36991 = 0;
		}
	}
	Global_36770[iParam0 /*5*/] = 13;
	Global_36770[iParam0 /*5*/].f_1 = 0;
	Global_36770[iParam0 /*5*/].f_2 = 0;
	Global_36770[iParam0 /*5*/].f_3 = 0;
	Global_36770[iParam0 /*5*/].f_4 = 0;
	Global_36769 = (Global_36769 - 1);
	if (Global_36769 < 0)
	{
		Global_36769 = 0;
	}
}

int func_39(int iParam0)//Position - 0x1BFE
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

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x1C2F
{
	func_41(iParam0, iParam1, iParam2, 0, 0);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1C43
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36877[iVar0 /*5*/] = iParam0;
	Global_36877[iVar0 /*5*/].f_1 = iParam1;
	Global_36877[iVar0 /*5*/].f_2 = iParam2;
	Global_36877[iVar0 /*5*/].f_3 = iParam3;
	Global_36877[iVar0 /*5*/].f_4 = iParam4;
}

int func_42()//Position - 0x1CBA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36877[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x1CEB
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1D06
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				if (iParam1 == Global_36877[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0)//Position - 0x1D52
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
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_46()//Position - 0x1D9B
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 25);
	unk_0x872F1C1F8587CCC7(&Global_2324, 11);
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1E18
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
		if (func_49(0))
		{
			return 0;
		}
		Global_35825++;
		*iParam0 = Global_35825;
		unk_0x8FA21D9CF7681249(unk_0x98EC0789D9F0703B(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xE6ABE74AEC92281D(8);
		}
		Global_35861 = iParam2;
		Global_35823 = *iParam0;
		Global_35824 = iParam4;
		Global_35822 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35822 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35822)
			{
				if (Global_35828[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35823 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_134(iParam2))
		{
			return 0;
		}
		if (Global_35822 == 8)
		{
			return 0;
		}
		Global_35825++;
		*iParam0 = Global_35825;
		Global_35828[Global_35822 /*4*/] = Global_35825;
		Global_35828[Global_35822 /*4*/].f_1 = iParam1;
		Global_35828[Global_35822 /*4*/].f_2 = iParam2;
		Global_35828[Global_35822 /*4*/].f_3 = 0;
		Global_35822++;
		if (iParam4 != 0)
		{
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)//Position - 0x1F4F
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

int func_49(int iParam0)//Position - 0x1F9E
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()//Position - 0x1FC0
{
	float fVar0;
	
	fVar0 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_81);
	if (fVar0 < 62500f)
	{
		func_74();
		func_71();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_70();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_98)
	{
		if (func_52())
		{
			iLocal_98 = 1;
			func_51();
		}
	}
}

void func_51()//Position - 0x2028
{
	iLocal_46++;
}

int func_52()//Position - 0x2036
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_53())
	{
		if (!unk_0x6ADD12BF4D6D2587(Local_267[iVar0 /*14*/]) || !unk_0x6ADD12BF4D6D2587(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_267.f_83) || !unk_0x6ADD12BF4D6D2587(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_53()//Position - 0x209E
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_54()//Position - 0x20E0
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_95) && !unk_0x191BE1BC8F26F3C1(iLocal_95, 0))
	{
		if (unk_0x33B1D0D0C92D4F18(iLocal_95))
		{
			return;
		}
	}
	if (func_23(&iLocal_90) >= 8f)
	{
		iVar0 = (unk_0x63A6486593EC7EC3(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (unk_0x191BE1BC8F26F3C1(Local_267[(iVar0 - 1) /*14*/], 0))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_33(&iLocal_90);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x21AA
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0);
}

int func_56(char* sParam0, int iParam1, bool bParam2)//Position - 0x21F8
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
					func_68();
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
		if (func_90(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_67();
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
				func_61();
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
				if (func_60())
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
			if (func_59())
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
			func_58();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_57();
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
		func_68();
	}
	return 0;
}

void func_57()//Position - 0x24C4
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

void func_58()//Position - 0x24F6
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

int func_59()//Position - 0x258B
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_60()//Position - 0x25B2
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

void func_61()//Position - 0x264B
{
	if (func_110(14))
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
		Global_14453 = func_62();
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

var func_62()//Position - 0x26ED
{
	func_63();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_63()//Position - 0x2706
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_66(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_65(unk_0xFC1458A37D98B502());
			if (func_64(iVar0) && (!func_110(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_64(Global_104555.f_2353.f_539.f_4301))
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

bool func_64(int iParam0)//Position - 0x2803
{
	return iParam0 < 3;
}

int func_65(int iParam0)//Position - 0x280F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)//Position - 0x284C
{
	if (func_64(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_67()//Position - 0x2876
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

void func_68()//Position - 0x28CE
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

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2925
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

void func_70()//Position - 0x297B
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x191BE1BC8F26F3C1(Local_267.f_83, 0))
	{
		iVar0 = unk_0x674C9438180770FE();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		unk_0xCDB72D70019A533E(Local_267.f_83, 0f, 0f, 0,75f, 1, 2000, 2000, 2000, 0);
	}
}

void func_71()//Position - 0x29D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x674C9438180770FE();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_95, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		switch (iLocal_266)
		{
			case 0:
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_95, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 64f && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				unk_0x6931076730A4AC5D(&iVar1);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 0, 2);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x1B16DD5C115FE009(iVar1);
				unk_0xAB30B1CF01A198C1(iLocal_95, iVar1);
				unk_0xFAA3EF7FF92E1F9E(&iVar1);
				iLocal_266 = 2;
				break;
			
			case 2:
				if ((unk_0x78F50AA8F955BEFC(iLocal_95, 242628503) != 1 || unk_0xCA3C40448996C9BA(iLocal_95, unk_0xFC1458A37D98B502(), 20f)) && !unk_0x42111BD51D233AAB())
				{
					unk_0xAC838A977FB6E6BC(iLocal_95, unk_0xFC1458A37D98B502(), -1);
					if (!iLocal_100)
					{
						func_72(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_72(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x33B1D0D0C92D4F18(iLocal_95))
				{
					func_33(&iLocal_87);
					unk_0x12C9D41D52A560D6(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_266 = 4;
				}
				break;
			
			case 4:
				if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_95, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 225f)
				{
					unk_0x6931076730A4AC5D(&iVar2);
					unk_0x2DAC3448B66448E8(0, Local_267.f_83.f_9, 1000);
					unk_0x12C9D41D52A560D6(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iVar2);
					unk_0xAB30B1CF01A198C1(iLocal_95, iVar2);
					unk_0xFAA3EF7FF92E1F9E(&iVar2);
					iLocal_266 = 0;
				}
				if (func_26(&iLocal_87))
				{
					if (func_23(&iLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (func_23(&iLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_72(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2C02
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_73(iParam3), 0);
}

int func_73(int iParam0)//Position - 0x2C1B
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

void func_74()//Position - 0x2E10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_267[iVar2 /*14*/].f_1) && unk_0x6ADD12BF4D6D2587(Local_267[iVar2 /*14*/]))
		{
			if (func_79(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_267[iVar2 /*14*/].f_1, 1))
			{
				func_77();
				func_76(iLocal_69);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(Local_267[iVar2 /*14*/]))
			{
				if (func_26(&(vLocal_83[iVar2 /*3*/])))
				{
					if (func_23(&(vLocal_83[iVar2 /*3*/])) > fLocal_93[iVar2])
					{
						if (unk_0xB8DE76287EDC4957(Local_267[iVar2 /*14*/].f_1, 0) && unk_0xA8D0477084E86A92(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, 0))
						{
							iVar0 = unk_0x63A6486593EC7EC3(250, 500);
							iVar1 = unk_0x63A6486593EC7EC3(250, 500);
							unk_0x6931076730A4AC5D(&iVar3);
							unk_0x181B5054237CD6BD(0, Local_267[iVar2 /*14*/].f_1, 1, iVar0);
							unk_0x181B5054237CD6BD(0, Local_267[iVar2 /*14*/].f_1, 31, iVar1);
							unk_0x1B16DD5C115FE009(iVar3);
							if (!unk_0x3AB6A1A9084FB0A4(Local_267[iVar2 /*14*/]))
							{
								unk_0xAB30B1CF01A198C1(Local_267[iVar2 /*14*/], iVar3);
							}
							unk_0xFAA3EF7FF92E1F9E(&iVar3);
						}
						func_33(&(vLocal_83[iVar2 /*3*/]));
						fLocal_93[iVar2] = unk_0x5B811202FCBE9E9D(0f, 3f);
					}
				}
				else
				{
					func_35(&(vLocal_83[iVar2 /*3*/]));
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(Local_267[iVar2 /*14*/], 0))
			{
				if ((unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), Local_267[iVar2 /*14*/]) && !unk_0x9F887157983E8EFC(Local_267[iVar2 /*14*/])) && !unk_0x7CE28D2DD2AF0F42(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					unk_0x6931076730A4AC5D(&iVar3);
					unk_0x2DAC3448B66448E8(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x12C9D41D52A560D6(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iVar3);
					unk_0xAB30B1CF01A198C1(Local_267[iVar2 /*14*/], iVar3);
					unk_0xFAA3EF7FF92E1F9E(&iVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (unk_0x9F887157983E8EFC(Local_267[iVar2 /*14*/]) || unk_0x7CE28D2DD2AF0F42(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (unk_0x9F887157983E8EFC(Local_267[iVar2 /*14*/]) || unk_0x7CE28D2DD2AF0F42(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					unk_0x6931076730A4AC5D(&iVar3);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
					unk_0x12C9D41D52A560D6(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x2DAC3448B66448E8(0, Local_267[iVar2 /*14*/].f_9, 1000);
					unk_0x12C9D41D52A560D6(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(iVar3);
					unk_0xAB30B1CF01A198C1(Local_267[iVar2 /*14*/], iVar3);
					unk_0xFAA3EF7FF92E1F9E(&iVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (unk_0x6ADD12BF4D6D2587(Local_267.f_83.f_1) && unk_0x6ADD12BF4D6D2587(Local_267.f_83))
	{
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_267.f_83.f_1, 0))
		{
			iLocal_54 = Local_267.f_83.f_1;
		}
		if (func_79(Local_267.f_83, 1, 0, 0, 0))
		{
			func_77();
			func_76(iLocal_69);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
		if (!unk_0x3AB6A1A9084FB0A4(Local_267.f_83))
		{
			if (func_26(&iLocal_84))
			{
				if (func_23(&iLocal_84) > fLocal_94)
				{
					if (unk_0xB8DE76287EDC4957(Local_267.f_83.f_1, 0) && unk_0xA8D0477084E86A92(Local_267.f_83, Local_267.f_83.f_1, 0))
					{
						iVar0 = unk_0x63A6486593EC7EC3(250, 500);
						iVar1 = unk_0x63A6486593EC7EC3(250, 500);
						unk_0x6931076730A4AC5D(&iVar3);
						unk_0x181B5054237CD6BD(0, Local_267.f_83.f_1, 1, iVar0);
						unk_0x181B5054237CD6BD(0, Local_267.f_83.f_1, 31, iVar1);
						unk_0x1B16DD5C115FE009(iVar3);
						if (!unk_0x3AB6A1A9084FB0A4(Local_267.f_83))
						{
							unk_0xAB30B1CF01A198C1(Local_267.f_83, iVar3);
						}
						unk_0xFAA3EF7FF92E1F9E(&iVar3);
					}
					func_33(&iLocal_84);
					fLocal_94 = unk_0x5B811202FCBE9E9D(0f, 3f);
				}
			}
			else
			{
				func_35(&iLocal_84);
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(Local_267.f_83, 0))
		{
			if ((unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), Local_267.f_83) && !unk_0x9F887157983E8EFC(Local_267.f_83)) && !unk_0x7CE28D2DD2AF0F42(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				unk_0x6931076730A4AC5D(&iVar3);
				unk_0x2DAC3448B66448E8(0, Local_267.f_83.f_9, 1000);
				unk_0x12C9D41D52A560D6(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iVar3);
				unk_0xAB30B1CF01A198C1(Local_267.f_83, iVar3);
				unk_0xFAA3EF7FF92E1F9E(&iVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (unk_0x9F887157983E8EFC(Local_267.f_83) || unk_0x7CE28D2DD2AF0F42(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				unk_0x6931076730A4AC5D(&iVar3);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1000);
				unk_0x12C9D41D52A560D6(0, "gestures@m@standing@casual", func_75(), 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x2DAC3448B66448E8(0, Local_267.f_83.f_9, 1000);
				unk_0x12C9D41D52A560D6(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iVar3);
				unk_0xAB30B1CF01A198C1(Local_267.f_83, iVar3);
				unk_0xFAA3EF7FF92E1F9E(&iVar3);
				iLocal_266 = 4;
				func_33(&iLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_75()//Position - 0x33AE
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x63A6486593EC7EC3(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_76(int iParam0)//Position - 0x33EA
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_130(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_84(&iLocal_60);
		iLocal_59 = 9;
	}
}

void func_77()//Position - 0x342D
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	
	unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0x6ADD12BF4D6D2587(iVar0[iVar2]) && !unk_0x3AB6A1A9084FB0A4(iVar0[iVar2]))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
			{
				unk_0xD68E88A8E0BE8697(iVar0[iVar2], unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
			}
			else
			{
				unk_0x6931076730A4AC5D(&iVar1);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), unk_0x63A6486593EC7EC3(300, 900));
				unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 0);
				unk_0x1B16DD5C115FE009(iVar1);
				unk_0xAB30B1CF01A198C1(iVar0[iVar2], iVar1);
				unk_0xFAA3EF7FF92E1F9E(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_104555.f_18986.f_1)
	{
		case 0:
			func_78(0);
			break;
		
		case 1:
			func_78(0);
			break;
		
		case 3:
			func_78(0);
			break;
		
		case 4:
			func_78(0);
			break;
		
		case 5:
			func_78(0);
			break;
		
		case 2:
			func_78(0);
			break;
	}
}

void func_78(int iParam0)//Position - 0x353D
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_79(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x355E
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			vVar1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			if (bParam1)
			{
				if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (unk_0x7ED4D0E480A6EC43(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0x9A213A2345825783(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
				{
					if (func_80(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (unk_0x88DDBE9908752BF0(iParam0, 0))
			{
				if (unk_0xEBE499597C718EB8(unk_0xDFD115BB10FE46A9(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0xA6FA9E5D08F067AD(iParam0))
			{
				return 1;
			}
			if (unk_0xC931425E2B416A2F(iVar0, 4))
			{
				if (unk_0x08765A6321A42CA1(iVar0))
				{
					if (unk_0x0C88267282FD588F(iParam0, unk_0xB3328BA8976B416C(iVar0, 1), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x5679106BC7ED79EE(vVar1, 4f, 1))
			{
				return 1;
			}
			if (unk_0xF1DE6FAA2EFAA34F((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return 1;
			}
			if (unk_0x27C8A4034A05DC21(iParam0))
			{
				if (unk_0x4EAE4CAB6D3C4502(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((unk_0x4E69510C44147A5C(-1, vVar1, 25f) && !unk_0x4E69510C44147A5C(11, vVar1, 25f)) && !unk_0x4E69510C44147A5C(13, vVar1, 25f))
			{
				return 1;
			}
			unk_0x2B0DDE3D071497AD(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_80(int iParam0, bool bParam1)//Position - 0x3718
{
	return func_81(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x3730
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

int func_82(int iParam0, bool bParam1)//Position - 0x378E
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x3846
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84(int iParam0)//Position - 0x3881
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_83(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_85(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x38D8
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_84(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = unk_0xBBA15366508D1BDE();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB019B170BF1309C(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_86(int iParam0)//Position - 0x3A03
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1, int iParam2)//Position - 0x3A30
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	unk_0x376CFA11DE0FE521(0, 0, true, -1);
}

var func_88()//Position - 0x3A52
{
	return Global_68215;
}

int func_89(int iParam0)//Position - 0x3A5E
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

bool func_90(int iParam0, int iParam1)//Position - 0x3AB8
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

bool func_91()//Position - 0x3AF3
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_92()//Position - 0x3B08
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)//Position - 0x3B22
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_94()//Position - 0x3B4B
{
	return 1;
}

void func_95(var uParam0, int iParam1)//Position - 0x3B54
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)//Position - 0x3B64
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_97()//Position - 0x3B75
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return ((((bVar1 && unk_0xF2B58F79D29425B4(0, 69)) || (bVar1 && unk_0xF2B58F79D29425B4(0, 70))) || (bVar1 && unk_0xF2B58F79D29425B4(0, 68))) || unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()));
	}
	return (((((bVar1 && unk_0xF2B58F79D29425B4(0, 24)) || (bVar1 && unk_0xF2B58F79D29425B4(0, 25))) || (bVar1 && unk_0xF2B58F79D29425B4(0, 47))) || unk_0x4FF3A1BB97B00CFC(unk_0xFC1458A37D98B502())) || unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()));
}

int func_98(int iParam0)//Position - 0x3C7F
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_62();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_105()) || Global_103602) || Global_25235) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_105()) || Global_25235) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_105()) || Global_103602) || Global_25235) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_105()) || Global_103602) || Global_25235) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_105()) || Global_25235) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_105()) || func_102()) || Global_103602) || Global_25235) || func_104()) || Global_36993) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_105()) || Global_103602) || Global_25235) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()//Position - 0x439D
{
	return Global_92872.f_1;
}

int func_100()//Position - 0x43AB
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()//Position - 0x43D1
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

bool func_102()//Position - 0x43FB
{
	return Global_92885.f_316 > 0;
}

bool func_103()//Position - 0x440C
{
	return Global_92885.f_315 > 0;
}

var func_104()//Position - 0x441D
{
	return Global_1312854;
}

int func_105()//Position - 0x4429
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_106()//Position - 0x4445
{
	if (unk_0x8F38E94BBF3404CD(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()//Position - 0x445F
{
	return Global_88810;
}

int func_108(int iParam0)//Position - 0x446B
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_134(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)//Position - 0x44DD
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xA6DECE14FC9A8C51(Global_25578[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)//Position - 0x4519
{
	return Global_35861 == iParam0;
}

void func_111()//Position - 0x4527
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x674C9438180770FE();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_121();
		func_120();
		switch (iLocal_82)
		{
			case 0:
				func_119(-1930,38f, 4441,9f, 38,12f, 260,86f, -1933,442f, 4440,866f, 37,2504f, 184,125f);
				func_119(-1931,24f, 4440,26f, 38,05f, 257,2117f, -1932,795f, 4438,275f, 37,402f, 78,7749f);
				func_119(-1935,01f, 4442,57f, 37,48f, 263,59f, -1934,964f, 4438,306f, 37,1741f, 297,2304f);
				func_119(-1935,5f, 4440,32f, 37,48f, 258,09f, -1937,251f, 4438,761f, 36,9256f, 23,8377f);
				func_119(-1939,63f, 4440,46f, 37,25f, 253,32f, -1938,319f, 4439,913f, 36,7166f, 250,6112f);
				func_118(-1939,564f, 4443,306f, 36,3803f, 262,3551f, -1936,208f, 4444,125f, 36,8594f, 123,8187f);
				break;
			
			case 1:
				func_119(-520,2097f, 2010,816f, 203,6035f, 17,0169f, -517,2971f, 2008,383f, 204,0454f, 2,9896f);
				func_119(-516,9937f, 2013,98f, 203,5907f, 19,3803f, -517,1741f, 2010,813f, 203,8412f, 125,7555f);
				func_119(-518,3414f, 2005,449f, 204,1878f, 20,7231f, -519,0882f, 2013,649f, 203,3304f, 195,7951f);
				func_119(-514,8247f, 2008,574f, 204,3629f, 20,2278f, -514,2933f, 2004,923f, 204,5935f, 126,8655f);
				func_118(-516,1545f, 1999,374f, 204,7715f, 18,7907f, -515,4201f, 2003,622f, 204,5549f, 1,757f);
				break;
			
			case 3:
				func_119(-225,41f, 4227,53f, 44,45f, 82,7f, -231,9795f, 4226,31f, 43,8587f, 353,3938f);
				func_119(-233,16f, 4225,81f, 44,29f, 76,66f, -231,3181f, 4229,25f, 43,8681f, 179,3787f);
				func_119(-233,33f, 4228,89f, 44,35f, 80,88f, -229,4769f, 4226,102f, 43,8909f, 311,8915f);
				func_119(-229,58f, 4225,21f, 44,34f, 75,78f, -227,6066f, 4228,867f, 43,9069f, 186,6535f);
				func_119(-228,85f, 4227,71f, 44,57f, 83,38f, -226,7015f, 4226,683f, 43,8597f, 28,0083f);
				func_118(-225,6736f, 4224,503f, 43,8435f, 77,7579f, -227,2893f, 4224,699f, 43,8335f, 36,55f);
				break;
			
			case 4:
				func_119(1608,91f, 3845,06f, 33,94f, 307,24f, 1610,476f, 3839,163f, 32,9854f, 29,8332f);
				func_119(1606,2f, 3838,41f, 33,62f, 307,44f, 1612,908f, 3841,492f, 32,9721f, 78,3f);
				func_119(1610,47f, 3842,26f, 33,61f, 311,44f, 1608,097f, 3842,676f, 33,3217f, 198,5355f);
				func_119(1604,49f, 3840,42f, 34,18f, 308,19f, 1608,427f, 3837,368f, 32,9989f, 9,9463f);
				func_118(1603,405f, 3836,324f, 33,1144f, 305,055f, 1605,788f, 3840,236f, 33,2826f, 288,7775f);
				break;
			
			case 5:
				func_119(2046,772f, 2130,442f, 91,9486f, 233,1493f, 2036,123f, 2133,981f, 92,615f, 260,0519f);
				func_119(2045,344f, 2126,352f, 91,9358f, 236,3633f, 2044,422f, 2128,961f, 92,088f, 47,8797f);
				func_119(2036,512f, 2137,807f, 92,6507f, 237,2446f, 2041,778f, 2131,354f, 92,4544f, 226,7534f);
				func_119(2041,739f, 2134,324f, 92,4013f, 232,956f, 2039,603f, 2132,563f, 92,6648f, 61,0834f);
				func_119(2039,775f, 2130,025f, 92,5324f, 241,6337f, 2038,744f, 2134,523f, 92,6235f, 128,98f);
				func_118(2030,898f, 2134,197f, 92,5014f, 249,4471f, 2036,58f, 2135,382f, 92,605f, 233,2111f);
				break;
			
			case 2:
				func_119(2992,58f, 2786,28f, 43,21f, 26,81f, 2998,772f, 2777,392f, 42,1008f, 29,7228f);
				func_119(2995,76f, 2787,72f, 43,26f, 33,42f, 2993,12f, 2779,783f, 42,3128f, 286,9825f);
				func_119(2994,91f, 2779,79f, 42,73f, 11,43f, 2999,253f, 2783,97f, 42,5421f, 108,7426f);
				func_119(2999,44f, 2781,11f, 43,11f, 23,89f, 2997,582f, 2787,476f, 42,6953f, 157,4885f);
				func_119(3000,06f, 2775,26f, 42,47f, 17,16f, 2994,719f, 2784,905f, 42,6444f, 213,8879f);
				func_118(2995,525f, 2775,522f, 41,98f, 4,3249f, 2993,511f, 2776,948f, 42,0941f, 305,3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xAB019B170BF1309C(sVar1))
		{
			if (unk_0xA33DB5EB9131A829(sVar1))
			{
				if (!unk_0x8597B3AA38933783(sVar1))
				{
					unk_0xB4301FCD03DF42F6(sVar1, true);
				}
			}
		}
	}
	func_112();
}

void func_112()//Position - 0x4C0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267)
		{
			if (!func_117(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = unk_0xEA60F3B426BB095B(func_116(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, true, true, false);
				unk_0xACE486395AA1867D(Local_267[iVar5 /*14*/].f_1, 1084227584);
				unk_0x438D30A195B65156(Local_267[iVar5 /*14*/].f_1, true);
				if (func_117(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = unk_0x00D1A9572426E8DD(Local_267[iVar5 /*14*/].f_1, 4, func_115(), -1, 1, true);
					unk_0xA15269351F50F113(Local_267[iVar5 /*14*/].f_1, true, false, 0);
				}
				else
				{
					Local_267[iVar5 /*14*/] = unk_0xAC992EFAD62C33BF(4, func_115(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, 1, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = sVar3;
					Local_267[iVar5 /*14*/].f_13 = sVar4;
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0xB6A7F1EF9625AE96(0, unk_0x63A6486593EC7EC3(100, 500));
					unk_0x12C9D41D52A560D6(0, sVar3, sVar4, 8f, -8f, -1, 8193, unk_0x5B811202FCBE9E9D(0f, 1f), 0, 0, 0);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(Local_267[iVar5 /*14*/], iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
				}
				unk_0x35963CCE03600881(Local_267[iVar5 /*14*/], 1);
				unk_0x622387450247E90D(Local_267[iVar5 /*14*/], 1, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = unk_0xEA60F3B426BB095B(func_116(1), Local_267.f_83.f_2, Local_267.f_83.f_5, true, true, false);
		unk_0xACE486395AA1867D(Local_267.f_83.f_1, 1084227584);
		unk_0x438D30A195B65156(Local_267.f_83.f_1, true);
		if (func_117(Local_267.f_83.f_6))
		{
			Local_267.f_83 = unk_0x00D1A9572426E8DD(Local_267.f_83.f_1, 4, func_115(), -1, 1, true);
			unk_0xA15269351F50F113(Local_267.f_83.f_1, true, false, 0);
		}
		else
		{
			Local_267.f_83 = unk_0xAC992EFAD62C33BF(4, func_115(), Local_267.f_83.f_6, Local_267.f_83.f_9, 1, true);
			iVar1 = (unk_0x63A6486593EC7EC3(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = sVar4;
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0x270054D97CD161A8(0, func_114((unk_0x63A6486593EC7EC3(0, 65535) % 1000), 1, 1000));
			unk_0x12C9D41D52A560D6(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, unk_0x5B811202FCBE9E9D(0f, 1f), 0, 0, 0);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(Local_267.f_83, iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_83;
	if (!unk_0x191BE1BC8F26F3C1(Local_267[0 /*14*/], 0))
	{
		func_113(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_267[1 /*14*/], 0))
	{
		func_113(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_267[2 /*14*/], 0))
	{
		func_113(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
	}
	else
	{
		func_33(&iLocal_90);
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4FDB
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

int func_114(int iParam0, int iParam1, int iParam2)//Position - 0x5076
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_115()//Position - 0x509B
{
	return joaat("a_m_y_motox_01");
}

int func_116(bool bParam0)//Position - 0x50A8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (unk_0xC8A14E3C7BE76201(Local_267.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = unk_0x63A6486593EC7EC3(0, iVar0);
	if (Local_267.f_71[iVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[iVar0];
}

int func_117(vector3 vParam0)//Position - 0x519A
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_118(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x51C4
{
	if (func_117(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { vParam0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { vParam2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_119(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x5208
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		if (!bVar1 && func_117(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { vParam0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { vParam2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_120()//Position - 0x5283
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_121()//Position - 0x52CE
{
	switch (iLocal_82)
	{
		case 0:
			unk_0xA846A937885EB977(-223,42f, 3948,36f, 36,52f, -212,37f, 3818,97f, 37,53f, 50f, 1, 0, 1);
			unk_0x9B8406983378711E(-227,43f, 3888,9f, 36,41f, 50f, 1, 0, 0, 0, false, 0);
			unk_0xFA85ECEE588094C7("WORLD_HUMAN_HIKER", 0);
			break;
		
		case 1:
			unk_0xA846A937885EB977(-509,1254f, 1987,582f, 205,3305f, -948,5215f, 2752,741f, 25,35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0xA846A937885EB977(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 1, 0, 1);
			unk_0xBC489554C806C640(-1943,822f, 4462,286f, 0f, -229,0783f, 4227,072f, 50f, 250f, 0, 0, 0, 0, 0, 0);
			unk_0xA846A937885EB977(-196,58f, 4217,64f, 50,083f, -202,574f, 4210,926f, 40,0262f, 10f, 1, 0, 1);
			unk_0xFA85ECEE588094C7("WORLD_HUMAN_HIKER", 0);
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_EMPTY", 0);
			unk_0xFA85ECEE588094C7("WORLD_MOUNTAIN_LION_WANDER", 0);
			break;
		
		case 4:
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_EMPTY", 1);
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 1);
			break;
		
		case 5:
			unk_0xFA85ECEE588094C7("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			unk_0xA846A937885EB977(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 100f, 1, 0, 1);
			unk_0xBC489554C806C640(2242,488f, 2568,146f, -10f, 2242,488f, 1568,146f, 200f, 1000f, 0, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0xB4301FCD03DF42F6("QUARRY", false);
			unk_0xA846A937885EB977(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 1, 0, 1);
			unk_0xBC489554C806C640(2809,948f, 2993,644f, -9,3564f, 2952,969f, 2530,636f, 177,1921f, 500f, 0, 0, 0, 0, 0, 0);
			break;
	}
}

bool func_122()//Position - 0x5506
{
	return ((((((((func_123(&(Local_267.f_71)) && func_123(&(Local_267.f_77))) && func_123(&(Local_267.f_99))) && unk_0x3A801AA34DD821BE("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0x3A801AA34DD821BE("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0x3A801AA34DD821BE("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0x3A801AA34DD821BE("amb@world_human_aa_smoke@male@idle_a")) && unk_0x3A801AA34DD821BE("random@street_race")) && unk_0x3A801AA34DD821BE("gestures@m@standing@casual"));
}

int func_123(var uParam0)//Position - 0x557B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x9A0B2ED5055D3F0B((*uParam0)[iVar0]))
			{
				if (!unk_0x9A0B2ED5055D3F0B((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_124()//Position - 0x55C2
{
	char cVar0[64];
	
	func_126(&(Local_267.f_77), joaat("a_m_y_motox_01"));
	func_126(&(Local_267.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_126(&(Local_267.f_71), joaat("mesa"));
			func_126(&(Local_267.f_71), joaat("bjxl"));
			func_126(&(Local_267.f_71), joaat("patriot"));
			func_126(&(Local_267.f_71), joaat("dubsta2"));
			func_126(&(Local_267.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_126(&(Local_267.f_71), joaat("mesa"));
			func_126(&(Local_267.f_71), joaat("bfinjection"));
			func_126(&(Local_267.f_71), joaat("bjxl"));
			func_126(&(Local_267.f_71), joaat("sadler"));
			func_126(&(Local_267.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_126(&(Local_267.f_71), joaat("sanchez"));
			func_126(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	unk_0x6450931B826B49D9("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x6450931B826B49D9("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x6450931B826B49D9("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x6450931B826B49D9("amb@world_human_aa_smoke@male@idle_a");
	unk_0x6450931B826B49D9("random@street_race");
	unk_0x6450931B826B49D9("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		unk_0x6FF834D85E2DD4C6(-253064476);
		unk_0x6FF834D85E2DD4C6(1512136012);
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x0D9525F20FB71C52(1, &cVar0);
	func_125(&(Local_267.f_77));
	func_125(&(Local_267.f_71));
	func_125(&(Local_267.f_99));
}

void func_125(var uParam0)//Position - 0x5802
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x6FF834D85E2DD4C6((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_126(var uParam0, int iParam1)//Position - 0x5832
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_127(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_127(var uParam0)//Position - 0x588F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_128(var uParam0, int iParam1)//Position - 0x58BB
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_129(int iParam0)//Position - 0x58CC
{
	iLocal_59 = iParam0;
}

void func_130(int iParam0, bool bParam1, bool bParam2)//Position - 0x58D8
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 18);
		if (Global_25575 == 1)
		{
			Global_25576 = 1;
		}
		Global_25575 = 1;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 0);
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 15);
		unk_0x872F1C1F8587CCC7(&(Global_25578[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 0);
		unk_0x0EE72DB1CD8A3B86(&(Global_25578[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DECE14FC9A8C51(Global_25578[iVar0 /*23*/].f_19))
		{
			unk_0x62D1DA6940EE5FAA(1);
			unk_0xE30CF11C0EE14316(&(Global_25578[iVar0 /*23*/].f_19));
			unk_0x62D1DA6940EE5FAA(0);
		}
	}
}

int func_131()//Position - 0x59E1
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

int func_132()//Position - 0x59FE
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)//Position - 0x5A24
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_134(int iParam0)//Position - 0x5A71
{
	return func_135(iParam0, Global_35861);
}

int func_135(int iParam0, int iParam1)//Position - 0x5A82
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

bool func_136(var uParam0, int iParam1)//Position - 0x5C63
{
	return (uParam0 && iParam1) != 0;
}

void func_137()//Position - 0x5C72
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	unk_0xB8E96DD2D2EF0BC3(1);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	func_95(&uLocal_58, 4194304);
	iLocal_61 = 23000;
	iLocal_54 = 0;
	iLocal_79 = 0;
	iLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_141(vLocal_56, &vLocal_81);
	iLocal_69 = func_140(iLocal_82);
	fLocal_66 = (system::to_float(func_139(iLocal_69)) + 5f);
	if (func_133(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		func_76(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_104555.f_18986.f_1)
	{
		if (func_109(func_140(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		func_76(iLocal_69);
	}
	if (!func_109(func_140(iLocal_82)) && unk_0x9F7B586A14398C40())
	{
		if (iLocal_69 != 263)
		{
			if (func_138(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		func_76(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		iLocal_79 = 20;
		iLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		sLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M";
	}
}

bool func_138(int iParam0, bool bParam1)//Position - 0x5D6D
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 15);
	}
	return unk_0xC80D31E4B587871C(Global_25578[iVar0 /*23*/].f_11, 0);
}

int func_139(int iParam0)//Position - 0x5DC1
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_140(int iParam0)//Position - 0x5ED9
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_141(vector3 vParam0, var uParam1)//Position - 0x5F2D
{
	int iVar0;
	vector3 vVar1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	vVar1[0 /*3*/] = { func_142(0) };
	vVar1[1 /*3*/] = { func_142(1) };
	vVar1[3 /*3*/] = { func_142(3) };
	vVar1[4 /*3*/] = { func_142(4) };
	vVar1[5 /*3*/] = { func_142(5) };
	vVar1[2 /*3*/] = { func_142(2) };
	vVar1[6 /*3*/] = { func_142(6) };
	fVar2 = system::vdist2(vParam0, vVar1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = system::vdist2(vParam0, vVar1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { vVar1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_142(int iParam0)//Position - 0x5FEC
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939,483f, 4443,953f, 37,3474f;
		
		case 1:
			return -516,9256f, 2008,014f, 204,0998f;
		
		case 3:
			return -223,6755f, 4224,644f, 43,7304f;
		
		case 4:
			return 1606,578f, 3841,188f, 33,2931f;
		
		case 5:
			return 2037,664f, 2137,386f, 92,7095f;
		
		case 2:
			return 2996,776f, 2774,085f, 43,26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)//Position - 0x60A5
{
	func_144(uParam0, iParam1);
}

void func_144(var uParam0, var uParam1)//Position - 0x60B5
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_145(bool bParam0)//Position - 0x60CA
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_130(iLocal_69, 0, 0);
		}
	}
	func_84(&iLocal_60);
	if (func_136(uLocal_58, 2))
	{
		func_5();
		func_143(&uLocal_58, 2);
		func_20(&iLocal_62);
	}
	iLocal_62 = -1;
	func_146();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_146()//Position - 0x6113
{
	func_143(&uLocal_58, 4);
	func_147();
	if (unk_0x8F05914DD835E69F(iLocal_50))
	{
		unk_0x41EEB5CC27E31010(iLocal_50, 3);
	}
	if (!unk_0x8C1C362CA8299475(&Local_52))
	{
		if (unk_0x96AAAC172E3B9680(&Local_52) != 0)
		{
			unk_0x9D2418D7FC697249(&Local_52);
		}
	}
}

void func_147()//Position - 0x6150
{
}

