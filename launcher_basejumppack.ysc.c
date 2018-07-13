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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
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
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
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
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
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
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	vLocal_56 = { ScriptParam_261.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x7D9C4B359376D38A(114))
	{
		func_138(1);
	}
	iLocal_53 = unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4());
	iLocal_59 = 0;
	func_136(&Global_103206, 0);
	func_130();
	unk_0xB8E96DD2D2EF0BC3(1);
	if (func_129(uLocal_58, 1))
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
	if (!func_129(uLocal_58, 8))
	{
		if (!func_127(iLocal_64))
		{
			if (func_126(0, iLocal_63))
			{
				func_138(0);
			}
			else
			{
				func_138(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_126(0, iLocal_63))
		{
			func_138(1);
		}
	}
	if (func_129(uLocal_58, 8388608))
	{
		func_138(1);
	}
	if (func_129(uLocal_58, 524288) && (func_125() && !func_124()))
	{
		func_138(1);
	}
	if (unk_0x8F38E94BBF3404CD(unk_0x5D6DB7DE15F99EF2()) > 1 && !func_129(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_123(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_122(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_138(1);
		}
		iLocal_53 = unk_0x25D049AAC4603E65(unk_0x9EB17624F44A8DA4());
		if (func_129(uLocal_58, 1048576))
		{
			if (unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
			{
				func_138(1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_53) && !unk_0x191BE1BC8F26F3C1(iLocal_53, 0))
		{
			vLocal_55 = { unk_0xB3328BA8976B416C(iLocal_53, 1) };
			fLocal_57 = system::vdist2(vLocal_55, ScriptParam_261.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_261.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = system::vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_127(iLocal_64) || (func_129(uLocal_58, 16) && !func_129(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_118();
						func_122(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_123(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_122(10);
						}
						if ((vLocal_55.z - ScriptParam_261.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_116())
					{
						iLocal_67 = iLocal_67;
						func_122(3);
					}
					else
					{
						func_118();
					}
					break;
				
				case 3:
					if (unk_0x6CF53DE0FDF04073())
					{
						func_138(1);
						return;
					}
					if (!func_127(iLocal_64))
					{
						if (!func_129(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0x74C475EB8E73D398(&(Global_92833.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_138(0);
								break;
							}
						}
					}
					if (!func_129(uLocal_58, 4))
					{
						func_113();
						func_112(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_92867)
					{
						if (iLocal_69 != 263)
						{
							if (func_111(6) && !func_110(iLocal_69))
							{
							}
							else
							{
								func_123(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_122(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_129(uLocal_58, 64);
						func_136(&uLocal_58, 128);
						if (!func_109(3) && !Global_92867)
						{
							if (func_129(uLocal_58, 2097152))
							{
								if ((!func_129(uLocal_58, 1) || !unk_0x6ADD12BF4D6D2587(func_108())) && !Global_92867)
								{
									func_122(10);
									break;
								}
							}
						}
						if (func_129(uLocal_58, 524288) && (func_125() && !func_124()))
						{
							func_138(1);
						}
						if (func_107())
						{
							func_138(1);
						}
						if ((!func_99(6) || Global_103602) || func_98())
						{
							bVar2 = false;
						}
						if (func_129(uLocal_58, 1))
						{
							if (!func_97())
							{
								func_95(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_94(1))
						{
							bVar2 = false;
						}
						if (Global_70856)
						{
							bVar2 = false;
						}
						if (func_93())
						{
							bVar2 = false;
						}
						if (unk_0x1E06D00B67177A18())
						{
							bVar2 = false;
						}
						if (func_92() || func_91(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
						{
							bVar2 = false;
						}
						if (!unk_0x52B74B52F9D50112(unk_0x9EB17624F44A8DA4()))
						{
							bVar2 = false;
						}
						if (func_90(0) || func_89())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x0C88267282FD588F(iLocal_53, ScriptParam_261.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar2 = false;
							}
							if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x01B48CB2F72AE113(0, 51);
								if (func_88(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_87(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_95(&uLocal_58, 2048);
									}
									else if (!func_129(uLocal_58, 2048) || !unk_0xF491DD47B88AA84E())
									{
										func_86(&iLocal_60);
										func_136(&uLocal_58, 2048);
									}
									if (func_84(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_86(&iLocal_60);
										func_136(&uLocal_58, 2048);
										unk_0xD9E2C360120FEB7C(&Local_52);
										unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 56);
										func_122(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_86(&iLocal_60);
									func_136(&uLocal_58, 2048);
									unk_0xD9E2C360120FEB7C(&Local_52);
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 56);
									func_122(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_86(&iLocal_60);
								func_136(&uLocal_58, 2048);
								unk_0x3E80C2F7BC665259(0);
							}
						}
					}
					func_81();
					break;
				
				case 5:
					unk_0x01B48CB2F72AE113(0, 51);
					if (unk_0x3B6F9DF9C5FEB3A4(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_86(&iLocal_60);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_129(uLocal_58, 1))
						{
							if (func_111(6) || func_111(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_78(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
							{
								unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
							}
							func_77();
							if (Global_36993)
							{
								func_68(unk_0xFC1458A37D98B502());
							}
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 56);
							iLocal_50 = func_24();
							func_95(&uLocal_58, 2);
							func_122(6);
							func_20(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_19(iLocal_63);
								func_16(func_18(iLocal_63), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_122(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_129(Global_103206, 262144))
					{
						func_136(&Global_103206, 262144);
						func_14();
					}
					if (func_129(uLocal_58, 2097152))
					{
						if (!func_109(3) && !unk_0x8F05914DD835E69F(iLocal_50))
						{
							func_122(10);
						}
					}
					if (!unk_0x8F05914DD835E69F(iLocal_50))
					{
						unk_0xB4BD3ECA024822EB(system::round((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_136(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_136(&uLocal_58, 2);
						}
						else if (func_129(uLocal_58, 2))
						{
							if (func_129(Global_103206, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_136(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_136(&uLocal_58, 2);
							}
						}
						func_122(0);
						if (iLocal_63 != -1)
						{
							if (func_129(Global_103206, 0))
							{
								unk_0xEBDD0888F628D3FB(func_18(iLocal_63), 0, Global_92870, 0);
								func_6(func_18(iLocal_63), 0, Global_92870, 1, 0);
							}
							else
							{
								unk_0xEBDD0888F628D3FB(func_18(iLocal_63), 0, Global_92870, 0);
								func_6(func_18(iLocal_63), 0, Global_92870, 0, 0);
							}
						}
						func_5();
						func_136(&Global_103206, 0);
						if (func_129(uLocal_58, 16777216))
						{
							func_138(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_104555.f_9055)
							{
								if (!func_126(0, iLocal_63))
								{
									func_138(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_122(0);
					break;
				
				case 10:
					func_138(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_123(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_122(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_123(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_86(&iLocal_60);
					}
					if (!unk_0xAB019B170BF1309C(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x3E80C2F7BC665259(1);
						}
					}
					func_122(4);
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
									if (func_127(iLocal_64) && func_126(0, iLocal_63))
									{
										func_130();
										if (iLocal_69 != 263)
										{
											func_123(iLocal_69, 1, 0);
										}
										func_122(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_123(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_122(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_130();
									if (iLocal_69 != 263)
									{
										func_123(iLocal_69, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else
						{
							func_123(iLocal_69, 1, 0);
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

int func_1(char* sParam0)//Position - 0x9EB
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_2()//Position - 0x9FE
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	unk_0xFCCDDE0E48CF9588("pickup_object");
	unk_0xFCCDDE0E48CF9588("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)//Position - 0xA20
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

void func_4()//Position - 0xA50
{
}

void func_5()//Position - 0xA58
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA60
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

void func_7(int iParam0)//Position - 0xAA4
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

void func_8()//Position - 0xAE1
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

void func_9(int iParam0)//Position - 0xB23
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)//Position - 0xB39
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0xB78
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

bool func_12(var uParam0)//Position - 0xBD0
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0xBE0
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

int func_14()//Position - 0xBF0
{
	return 1;
}

void func_15()//Position - 0xBF9
{
}

void func_16(char* sParam0, int iParam1, int iParam2)//Position - 0xC01
{
	if (!unk_0xAB019B170BF1309C(&Global_90048))
	{
		unk_0x8119B12F6588AF71(&Global_90048, 0, 0, 0, 1, 0);
		StringCopy(&Global_90048, "", 64);
	}
	StringCopy(&Global_90048, sParam0, 64);
	unk_0xE828B31F48018963(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)//Position - 0xC42
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

char* func_18(int iParam0)//Position - 0xC6D
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

void func_19(int iParam0)//Position - 0xDAB
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

void func_20(int iParam0)//Position - 0xE02
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)//Position - 0xE23
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)//Position - 0xE32
{
	iParam0->f_1 = (func_11(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_23(int iParam0)//Position - 0xE60
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()//Position - 0xE78
{
	int iVar0;
	
	Global_104555.f_18937 = iLocal_82;
	switch (iLocal_82)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
	}
	iVar0 = system::start_new_script_with_args(&Local_51, &vLocal_83, 170, iLocal_61);
	unk_0x9D2418D7FC697249(&Local_51);
	return iVar0;
}

void func_25(bool bParam0)//Position - 0xEEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	vVar6 = { func_67(iLocal_82) };
	vVar6 = { func_66(system::cos(vVar6.z), system::sin(vVar6.z), unk_0xD12937A416ED6282(vVar6.x)) };
	unk_0xDCBF71199890F355(func_65(iLocal_82), vVar6, 5000f, 0);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
	unk_0x4255E93FCCDE108E(false);
	unk_0x9B47B379EE749C38(false);
	func_63(1);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
		if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,3f)
		{
			unk_0x270054D97CD161A8(unk_0xFC1458A37D98B502(), -1);
			while (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 0,3f)
			{
				system::wait(0);
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_255))
		{
			vVar4 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(iLocal_255, 0) };
			vVar4.z = 0f;
			fVar7 = system::vmag(vVar4);
			unk_0x6931076730A4AC5D(&iVar1);
			if (fVar7 > 0,8f)
			{
				vVar4 = { vVar4 * FtoV((0,78f / fVar7)) };
				vVar5 = { unk_0xB3328BA8976B416C(iLocal_255, 0) + vVar4 };
				if (iLocal_82 == 12)
				{
					unk_0x380C1E7B7740D618(0, vVar5, 1f, 20000, 0,25f, 0, func_62(vVar5, unk_0xB3328BA8976B416C(iLocal_255, 0)));
				}
				else
				{
					unk_0x6EF694689373EE8D(0, vVar5, 1f, -1, func_62(vVar5, unk_0xB3328BA8976B416C(iLocal_255, 0)), 1056964608);
				}
			}
			else if (fVar7 > 0,15f)
			{
				unk_0x2DAC3448B66448E8(0, func_62(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_255, 0)), 0);
			}
			unk_0x12C9D41D52A560D6(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x1B16DD5C115FE009(iVar1);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
				unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iVar1);
			}
			unk_0xFAA3EF7FF92E1F9E(&iVar1);
			func_63(1);
		}
	}
	func_23(&iLocal_251);
	while ((func_10(&iLocal_251) < 6f && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 3))
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
		system::wait(0);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 3))
	{
		unk_0xCA854FCB18A4FD22(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 0,8f);
		bVar8 = true;
	}
	while ((func_10(&iLocal_251) < 6f && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low") < 0,22f)
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
		if (!bVar8 && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 3))
		{
			unk_0xCA854FCB18A4FD22(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 0,8f);
			bVar8 = true;
		}
		system::wait(0);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (!bVar8 && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 3))
		{
			unk_0xCA854FCB18A4FD22(unk_0xFC1458A37D98B502(), "pickup_object", "pickup_low", 0,7f);
			bVar8 = true;
		}
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
	}
	func_9(&iLocal_251);
	func_40();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_35() == 0)
		{
			unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_82)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			unk_0x380C1E7B7740D618(unk_0xFC1458A37D98B502(), func_34(iLocal_82), 1f, -1, 0,25f, 0, 1193033728);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_255))
		{
			unk_0x452336926718D62A(&iLocal_255);
		}
		iVar2 = unk_0x5AC38B4D80D4E352(26379945, func_32(iLocal_82), func_31(iLocal_82), func_30(iLocal_82), 1, 2);
		iVar3 = unk_0x5AC38B4D80D4E352(26379945, func_29(iLocal_82), func_28(iLocal_82), func_27(iLocal_82), 0, 2);
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
		unk_0xF27397BB6F84A4E5("HAND_SHAKE", 0,2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1,5f)
		{
			system::wait(0);
		}
		unk_0xF10DA1539629CC3F(iVar3, iVar2, func_26(iLocal_82), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((system::to_float(func_26(iLocal_82)) / 1000f) + 0,3f))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
			}
			system::wait(0);
		}
	}
	else
	{
		vLocal_83.z = iLocal_255;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, true);
	}
}

int func_26(int iParam0)//Position - 0x13DB
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)//Position - 0x1400
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)//Position - 0x1430
{
	switch (iParam0)
	{
		case 4:
			return 58,4197f, 0f, -47,9402f;
		
		case 8:
			return 47,6798f, 0f, -55,2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)//Position - 0x146A
{
	switch (iParam0)
	{
		case 4:
			return -119,8524f, -866,9928f, 42,3211f;
		
		case 8:
			return -846,0496f, 277,5203f, 92,9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)//Position - 0x14AC
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)//Position - 0x14DC
{
	switch (iParam0)
	{
		case 4:
			return -4,0151f, 0f, -47,5544f;
		
		case 8:
			return 2,5127f, 0f, -55,2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)//Position - 0x1516
{
	switch (iParam0)
	{
		case 4:
			return -119,8524f, -866,9928f, 42,3211f;
		
		case 8:
			return -846,0496f, 277,5203f, 92,9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(vector3 vParam0)//Position - 0x1558
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x1582
{
	switch (iParam0)
	{
		case 4:
			return -83,4741f, -835,4191f, 39,5575f;
		
		case 8:
			return -772,8513f, 312,9656f, 84,6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()//Position - 0x15C4
{
	func_36();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_36()//Position - 0x15DD
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_39(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_38(unk_0xFC1458A37D98B502());
			if (func_37(iVar0) && (!func_111(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_37(Global_104555.f_2353.f_539.f_4301))
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

bool func_37(int iParam0)//Position - 0x16DA
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x16E6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)//Position - 0x1723
{
	if (func_37(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()//Position - 0x174D
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
	if (unk_0x6ADD12BF4D6D2587(iLocal_255))
	{
		unk_0x452336926718D62A(&iLocal_255);
	}
	func_48(0, 0, 1);
	iLocal_255 = unk_0x9A331BBF019DCAD2(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
	unk_0x59AF3B40AE222194(iLocal_255, func_46(iLocal_82), 2, 1);
	func_41(&vVar0, &uVar1);
	vVar2 = { 0f, 0f, uVar1 };
	iVar3 = unk_0x8383F9C605E523B7(vVar0, vVar2, 2);
	unk_0xEBB74134CCA3442E(iLocal_255, iVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x4AFBCBFDE748D4E0(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar4 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
	unk_0xEFF56C7BDABBF39B(iVar4, iVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x7849794435F39D49(iVar4, true);
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
	while (unk_0x463C4747B41E35A3(iVar3) < 0,6f)
	{
		system::wait(0);
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
}

void func_41(var uParam0, var uParam1)//Position - 0x187B
{
	*uParam0 = { func_45(iLocal_82) };
	switch (iLocal_82)
	{
		case 5:
			*uParam1 = -1,8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_62(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111,6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104,04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_62(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79,28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_62(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_62(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)//Position - 0x19A3
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)//Position - 0x19BA
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)//Position - 0x19D1
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

Vector3 func_45(int iParam0)//Position - 0x1A13
{
	switch (iParam0)
	{
		case 0:
			return -829,3729f, -1289,817f, 4,0005f;
		
		case 1:
			return 1208,2f, 174,3914f, 80,1245f;
		
		case 2:
			return 2463,793f, 1509,956f, 35,0349f;
		
		case 3:
			return -274,6549f, 6633,898f, 7,1166f;
		
		case 4:
			return -92,35f, -854,3f, 39,571f;
		
		case 5:
			return -120,92f, -976,05f, 295,49f;
		
		case 6:
			return -1237,2f, 4540,75f, 184,75f;
		
		case 7:
			return -742,5269f, 4493,315f, 75,1444f;
		
		case 8:
			return -801,3582f, 298,8532f, 84,949f;
		
		case 9:
			return -1367,595f, 4381,943f, 41,132f;
		
		case 10:
			return 2517,931f, 4971,752f, 44,7082f;
		
		case 11:
			return 1054,534f, -179,6562f, 70,3066f;
		
		case 12:
			return -767,415f, 4331,792f, 147,682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)//Position - 0x1B5D
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12,77f;
		
		case 5:
			return 10f, 0f, -134,58f;
		
		case 6:
			return 76f, 0f, -89,95f;
		
		case 8:
			return 12f, 0f, 89,56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)//Position - 0x1BD3
{
	switch (iParam0)
	{
		case 4:
			return -92,25f, -854,28f, 39,85f;
		
		case 5:
			return -120,92f, -976,05f, 295,49f;
		
		case 6:
			return -1237,2f, 4540,75f, 184,75f;
		
		case 8:
			return -801,57f, 298,85f, 85,25f;
		
		case 12:
			return -767,415f, 4331,792f, 147,682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1C5D
{
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, iParam0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
	}
	unk_0xAE3DF717857FE7CA(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(false);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)//Position - 0x1CB3
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

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)//Position - 0x1CD5
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_59(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_58())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_59(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_55(unk_0x9EB17624F44A8DA4())) && !func_52(unk_0x9EB17624F44A8DA4(), 0)) && !func_51())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_55(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_51()//Position - 0x1DEE
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_52(int iParam0, int iParam1)//Position - 0x1E0B
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_53(-1, 0) == 8;
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

int func_53(int iParam0, bool bParam1)//Position - 0x1E56
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_54()//Position - 0x1E97
{
	return Global_1312736;
}

int func_55(int iParam0)//Position - 0x1EA3
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
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

bool func_56()//Position - 0x1EE5
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1EF6
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

int func_58()//Position - 0x1F29
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1F50
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

void func_60(int iParam0)//Position - 0x1F73
{
	if (Global_14615)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_14453.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)//Position - 0x1FE3
{
	if (bParam0)
	{
		if (func_90(0))
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

float func_62(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x2057
{
	return unk_0xA67DD8488EBA5F6D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_63(bool bParam0)//Position - 0x2071
{
	if (bParam0)
	{
		func_64();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_90(0))
		{
			func_60(0);
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

void func_64()//Position - 0x20D4
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

Vector3 func_65(int iParam0)//Position - 0x20FD
{
	switch (iParam0)
	{
		case 0:
			return -1143,586f, -1859,747f, 208,3878f;
		
		case 1:
			return 877,5864f, -436,3322f, 536,9036f;
		
		case 2:
			return 2041,231f, 1978,98f, 585,9358f;
		
		case 3:
			return 405,2326f, 5705,887f, 697,2318f;
		
		case 4:
			return -103,8901f, -870,8046f, 298,7574f;
		
		case 5:
			return -118,2569f, -975,1133f, 297,3781f;
		
		case 6:
			return -1237,465f, 4526,661f, 181,7929f;
		
		case 7:
			return -357,7932f, 4107,914f, 314,8059f;
		
		case 8:
			return -809,6324f, 331,3331f, 233,2818f;
		
		case 9:
			return -1286,926f, 3660,203f, 1076,051f;
		
		case 10:
			return 1022,178f, 3975,738f, 1362,533f;
		
		case 11:
			return 1608,553f, -434,5186f, 1321,916f;
		
		case 12:
			return -756,3533f, 4341,521f, 143,8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_66(vector3 vParam0)//Position - 0x2247
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

Vector3 func_67(int iParam0)//Position - 0x2286
{
	switch (iParam0)
	{
		case 0:
			return -21,7965f, -0,0328f, 70,0438f;
		
		case 1:
			return -26,5541f, 0,0092f, -86,4416f;
		
		case 2:
			return -11,2825f, 0,0213f, 148,5283f;
		
		case 3:
			return -39,935f, 0f, 12,8174f;
		
		case 4:
			return 0,9749f, 0f, -5,2236f;
		
		case 5:
			return -12,889f, 0f, 1,6227f;
		
		case 6:
			return -48,5605f, 0f, 160,4909f;
		
		case 7:
			return -37,0509f, 0,0324f, 24,0288f;
		
		case 8:
			return -17,4118f, 0f, 117,7175f;
		
		case 9:
			return -15,4633f, 0,0328f, -5,1142f;
		
		case 10:
			return -20,9567f, 0f, 170,5743f;
		
		case 11:
			return 1,9344f, 0f, -55,2084f;
		
		case 12:
			return -46,0342f, 0f, 37,5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0)//Position - 0x23B0
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
	iVar0 = func_76(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_69(iVar2);
}

void func_69(int iParam0)//Position - 0x2409
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

int func_70(int iParam0)//Position - 0x248C
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

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x24BD
{
	func_72(iParam0, iParam1, iParam2, 0, 0);
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x24D1
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
	if (func_74(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_73();
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

int func_73()//Position - 0x2548
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

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2579
{
	if (func_75(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x2594
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

int func_76(int iParam0)//Position - 0x25E0
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

void func_77()//Position - 0x2629
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

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x26A6
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
		if (func_80(0))
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
		if (!func_127(iParam2))
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
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

void func_79(var uParam0, int iParam1)//Position - 0x27DD
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

int func_80(int iParam0)//Position - 0x282C
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_81()//Position - 0x284E
{
	switch (iLocal_82)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_82();
			break;
		
		default:
			break;
	}
}

void func_82()//Position - 0x2885
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		vLocal_83.y = iVar0;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_255))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iLocal_255, 1) };
		if (system::vdist2(vVar1, vLocal_56) > 25f)
		{
			func_83(0);
		}
	}
}

void func_83(int iParam0)//Position - 0x28D2
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

int func_84(int iParam0, bool bParam1)//Position - 0x28F3
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_90(0))
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

int func_85(int iParam0)//Position - 0x29AB
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

void func_86(int iParam0)//Position - 0x29E6
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_85(*iParam0);
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

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2A3D
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_86(iParam0);
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

int func_88(var uParam0)//Position - 0x2B68
{
	return 1;
}

var func_89()//Position - 0x2B71
{
	return Global_68215;
}

int func_90(int iParam0)//Position - 0x2B7D
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

bool func_91(int iParam0, int iParam1)//Position - 0x2BD7
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

bool func_92()//Position - 0x2C12
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_93()//Position - 0x2C27
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)//Position - 0x2C41
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

void func_95(var uParam0, int iParam1)//Position - 0x2C6A
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)//Position - 0x2C7A
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_97()//Position - 0x2C8B
{
	return 1;
}

bool func_98()//Position - 0x2C94
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

int func_99(int iParam0)//Position - 0x2D9E
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_106()) || Global_103602) || Global_25235) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_102()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_106()) || Global_25235) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_106()) || Global_103602) || Global_25235) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_106()) || Global_103602) || Global_25235) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_106() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_91(8, -1)) || func_93()) || func_101()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_91(8, -1) || func_104()) || func_103()) || func_101()) || func_100())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_106()) || Global_25235) || func_105()) || func_91(8, -1)) || func_103()) || func_102()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_106()) || func_103()) || Global_103602) || Global_25235) || func_105()) || Global_36993) || func_91(8, -1)) || func_102()) || func_101()) || func_93()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_106()) || Global_103602) || Global_25235) || func_105()) || func_91(8, -1)) || func_102()) || func_101()) || func_104()) || func_103()) || func_93())
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

var func_100()//Position - 0x34BB
{
	return Global_92872.f_1;
}

int func_101()//Position - 0x34C9
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_102()//Position - 0x34EF
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

bool func_103()//Position - 0x3519
{
	return Global_92885.f_316 > 0;
}

bool func_104()//Position - 0x352A
{
	return Global_92885.f_315 > 0;
}

var func_105()//Position - 0x353B
{
	return Global_1312854;
}

int func_106()//Position - 0x3547
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_107()//Position - 0x3563
{
	if (unk_0x8F38E94BBF3404CD(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_108()//Position - 0x357D
{
	return Global_88810;
}

int func_109(int iParam0)//Position - 0x3589
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_111(6) || func_111(7))
			{
				return 1;
			}
			else
			{
				return func_109(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_127(5))
			{
				if (func_99(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)//Position - 0x35FB
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xA6DECE14FC9A8C51(Global_25578[iVar0 /*23*/].f_19);
}

bool func_111(int iParam0)//Position - 0x3637
{
	return Global_35861 == iParam0;
}

void func_112(var uParam0, int iParam1)//Position - 0x3645
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113()//Position - 0x3656
{
	vector3 vVar0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 4:
			case 5:
			case 8:
				iLocal_255 = unk_0x9A331BBF019DCAD2(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x59AF3B40AE222194(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0xEDC33A771FAEB393(iLocal_255, true);
				break;
			
			case 6:
			case 12:
				iLocal_255 = unk_0x9A331BBF019DCAD2(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x59AF3B40AE222194(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0x0CCEC5D9DA9BEEC7(iLocal_255);
				vVar0 = { func_115(iLocal_82) };
				if (!func_33(vVar0))
				{
					iLocal_256 = unk_0xEA60F3B426BB095B(joaat("bati"), vVar0, func_114(iLocal_82), true, true, false);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_114(int iParam0)//Position - 0x371F
{
	switch (iParam0)
	{
		case 6:
			return 165,0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_115(int iParam0)//Position - 0x373D
{
	switch (iParam0)
	{
		case 6:
			return -1243,606f, 4543,016f, 185,9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_116()//Position - 0x3767
{
	switch (iLocal_82)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0x3A801AA34DD821BE("pickup_object") && unk_0x3A801AA34DD821BE("oddjobs@basejump@ig_15")) && func_117(&uLocal_78)) && func_117(&uLocal_80));
			break;
		
		case 12:
			return ((unk_0x3A801AA34DD821BE("pickup_object") && unk_0x3A801AA34DD821BE("oddjobs@basejump@ig_15")) && func_117(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_117(&uLocal_78) && func_117(&uLocal_80));
}

int func_117(var uParam0)//Position - 0x37FB
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

void func_118()//Position - 0x3842
{
	switch (iLocal_82)
	{
		case 5:
		case 8:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			unk_0x6450931B826B49D9("pickup_object");
			unk_0x6450931B826B49D9("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			func_120(&uLocal_80, joaat("bati"));
			unk_0x6450931B826B49D9("pickup_object");
			unk_0x6450931B826B49D9("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			unk_0x6450931B826B49D9("pickup_object");
			unk_0x6450931B826B49D9("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_119(&uLocal_78);
	func_119(&uLocal_80);
}

void func_119(var uParam0)//Position - 0x38E1
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

int func_120(var uParam0, int iParam1)//Position - 0x3911
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
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_121(var uParam0)//Position - 0x396E
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

void func_122(int iParam0)//Position - 0x399A
{
	iLocal_59 = iParam0;
}

void func_123(int iParam0, bool bParam1, bool bParam2)//Position - 0x39A6
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

int func_124()//Position - 0x3AAF
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

int func_125()//Position - 0x3ACC
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_126(int iParam0, int iParam1)//Position - 0x3AF2
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

bool func_127(int iParam0)//Position - 0x3B3F
{
	return func_128(iParam0, Global_35861);
}

int func_128(int iParam0, int iParam1)//Position - 0x3B50
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

bool func_129(var uParam0, int iParam1)//Position - 0x3D31
{
	return (uParam0 && iParam1) != 0;
}

void func_130()//Position - 0x3D40
{
	if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		func_95(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_134(vLocal_56, 0);
	switch (iLocal_82)
	{
		case 4:
			iLocal_69 = 129;
			break;
		
		case 5:
			iLocal_69 = 130;
			break;
		
		case 6:
			iLocal_69 = 131;
			break;
		
		case 8:
			iLocal_69 = 133;
			break;
		
		case 12:
			iLocal_69 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 129)
	{
		if (func_133(19))
		{
			func_132(iLocal_69);
		}
	}
	func_95(&uLocal_58, 4194304);
	iLocal_63 = 0;
	fLocal_66 = (system::to_float(func_131(iLocal_69)) + 5f);
	fLocal_77 = 1,1f;
	sLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 263)
	{
		if (!func_126(0, iLocal_63))
		{
			bLocal_254 = false;
			func_132(iLocal_69);
		}
		else
		{
			bLocal_254 = true;
		}
	}
	else
	{
		bLocal_254 = false;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("bj")) > 0)
	{
		func_95(&uLocal_58, 8);
	}
	else
	{
		func_136(&uLocal_58, 8);
	}
	if (func_111(12))
	{
		func_95(&uLocal_58, 8);
	}
	iLocal_61 = 23000;
}

int func_131(int iParam0)//Position - 0x3E5E
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

void func_132(int iParam0)//Position - 0x3F76
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_86(&iLocal_60);
		iLocal_59 = 9;
	}
}

bool func_133(int iParam0)//Position - 0x3FB9
{
	return Global_103642[iParam0 /*10*/].f_1;
}

int func_134(vector3 vParam0, int iParam1)//Position - 0x3FCB
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_135(iVar3))
		{
			fVar1 = system::vdist2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_135(int iParam0)//Position - 0x401C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)//Position - 0x4063
{
	func_137(uParam0, iParam1);
}

void func_137(var uParam0, var uParam1)//Position - 0x4073
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_138(bool bParam0)//Position - 0x4088
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_123(iLocal_69, 0, 0);
		}
	}
	func_86(&iLocal_60);
	if (func_129(uLocal_58, 2))
	{
		func_5();
		func_136(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_139();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_139()//Position - 0x40D1
{
	func_136(&uLocal_58, 4);
	func_140();
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

void func_140()//Position - 0x410E
{
}

