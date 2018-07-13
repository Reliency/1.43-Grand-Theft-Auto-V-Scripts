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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	iLocal_101 = -1;
	iLocal_104 = -1;
	if (unk_0x3A711520F83BAE98())
	{
		func_527(ScriptParam_289);
	}
	while (true)
	{
		func_526();
		if (func_516())
		{
			func_513();
		}
		iLocal_106 = unk_0xD1952A425B78FFC0();
		func_504();
		func_501();
		func_496();
		func_495();
		switch (func_494(unk_0xF19B3230511B7F9F()))
		{
			case 0:
				if (func_493() == 1)
				{
					Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 1;
				}
				else if (func_493() == 4)
				{
					Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_493() == 1)
				{
					func_487();
				}
				else if (func_493() == 0)
				{
					func_481();
					Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 0;
				}
				else if (func_493() == 4)
				{
					Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_456();
				func_454(&(Local_95.f_54));
				if (func_453(&(Local_95.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_452(iLocal_101))
					{
						func_456();
						iVar0++;
					}
					Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 4;
			
			case 4:
				func_249();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_247();
			func_246();
			func_245();
			switch (func_493())
			{
				case 0:
					func_244();
					if (func_240())
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0x25D049AAC4603E65(iLocal_103), 0))
						{
							func_238(unk_0x25D049AAC4603E65(iLocal_103));
						}
						else
						{
							Local_95.f_36 = { vLocal_105 };
						}
						unk_0x0EE72DB1CD8A3B86(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_60())
					{
						func_59();
						func_58();
					}
					func_40();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x235
{
	int iVar0;
	
	if (func_493() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_452(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()//Position - 0x271
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xC80D31E4B587871C(Local_95.f_10[iLocal_107 /*7*/].f_2, 1) || unk_0xC80D31E4B587871C(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
	{
		if (unk_0x93C304998B457C45(Local_95.f_10[iLocal_107 /*7*/]))
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0x47BA76CE3C825A08(Local_95.f_10[iLocal_107 /*7*/])))
			{
				if (unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_95.f_10[iLocal_107 /*7*/]), 0))
				{
					if (!unk_0xC80D31E4B587871C(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_48++;
							if (!unk_0xC80D31E4B587871C(Local_95.f_2, 12))
							{
								if (unk_0xDFB139FC1B23446B(Local_95.f_10[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_42 == iLocal_107 && !unk_0xC80D31E4B587871C(Local_95.f_2, 5)) || Local_95.f_48 == func_452(iLocal_101))
							{
								Var1.f_2 = 268394403;
								Var1.f_10 = iLocal_103;
								Var1.f_11 = iLocal_102;
								if (func_452(iLocal_101) > 1)
								{
									Var1.f_12 = unk_0xF6A72924028F588B(1);
								}
								else
								{
									Var1.f_12 = unk_0xF6A72924028F588B(0);
								}
								Var1.f_3 = Local_95.f_43;
								func_20(Var1, func_21(1));
								if (Local_95.f_42 == iLocal_107)
								{
									unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 5);
								}
							}
							else if (!unk_0xC80D31E4B587871C(Local_95.f_2, 5))
							{
								Var1.f_2 = -1913735985;
								Var1.f_11 = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xC80D31E4B587871C(Local_95.f_10[iLocal_107 /*7*/].f_2, 5))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_98, 2);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&iLocal_98, 1);
		unk_0x872F1C1F8587CCC7(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_452(iLocal_101))
	{
		iLocal_107 = 0;
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_98, 1))
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_1, 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 1);
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_98, 2))
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_1, 9))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 9);
				}
			}
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_98, 1);
		unk_0x0EE72DB1CD8A3B86(&iLocal_98, 2);
	}
}

void func_3(int iParam0)//Position - 0x4B3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (unk_0x93C304998B457C45(Local_95.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x3F16BDDA53C396EE(iVar0) == 2 || (Global_2422736[iLocal_103 /*420*/].f_251 != -1 && func_18(Global_2422736[iLocal_103 /*420*/].f_251) == 4)) || Global_1595693[iLocal_103 /*680*/].f_575) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_10[iParam0 /*7*/].f_3 = iLocal_106;
									unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x3F16BDDA53C396EE(iVar0) != 2 && Global_2422736[iLocal_103 /*420*/].f_251 == -1) && !Global_1595693[iLocal_103 /*680*/].f_575) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x3F16BDDA53C396EE(iVar0) != 2)
							{
								if (!unk_0xC80D31E4B587871C(Local_95.f_2, 10))
								{
									unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 10);
									Local_95.f_39 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_452(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0xD2B032DC10620ECA(iVar0) == 3f && !unk_0xBAEC0BAAC7E135C7(iVar0, 118, 1))
									{
										unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xC80D31E4B587871C(Local_95.f_2, 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1), 25f) || !func_5(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1), 625f))
								{
									unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1)) || (unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0x25D049AAC4603E65(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xC80D31E4B587871C(Local_95.f_2, 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1)) && !(unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0x25D049AAC4603E65(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0xBAEC0BAAC7E135C7(iVar0, 118, 1))
								{
									unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)//Position - 0x8B7
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xE97272C977DEADD3((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x8FE
{
	if (system::vdist2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x91D
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

void func_7(int iParam0, int iParam1)//Position - 0x967
{
	Local_95.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)//Position - 0x97B
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_9(int iParam0)//Position - 0x98E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x552F39AE86E07792(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x25D049AAC4603E65(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					if (unk_0xA8D0477084E86A92(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x9E2
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3) && unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
			if (unk_0xC80D31E4B587871C(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA25
{
	if (func_14(iParam0, 1))
	{
		return Global_2512808.f_4856.f_44[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)//Position - 0xA4C
{
	if (iParam0 != func_13())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_13();
}

int func_13()//Position - 0xA6F
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)//Position - 0xA78
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_13();
}

int func_15(int iParam0)//Position - 0xAA3
{
	if (iParam0 != func_13())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_13())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xAD8
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		if (unk_0x88DDBE9908752BF0(iVar0, iParam1))
		{
			if (func_17(unk_0xDFD115BB10FE46A9(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xB13
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xB51
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

int func_19(int iParam0, int iParam1)//Position - 0xDDE
{
	if (unk_0x6C5223DB5E5CFD9B("AttributeDamage", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "AttributeDamage"))
		{
			if (unk_0xC80D31E4B587871C(unk_0x2786E663D1846FFC(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xE14
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)//Position - 0xE41
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()//Position - 0xE9E
{
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_1, 4))
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xC80D31E4B587871C(Local_95.f_1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_95.f_1, 2))
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 1);
		unk_0x872F1C1F8587CCC7(&Global_1647209, iLocal_101);
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 2))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 2);
			return 1;
		}
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 8))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 8);
			return 1;
		}
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 5))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 3);
			return 1;
		}
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 9))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 9);
			return 1;
		}
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 15))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !unk_0xC80D31E4B587871C(Local_95.f_2, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_38(iLocal_103, 129))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 13);
			unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_38(iLocal_103, 131) || unk_0xC80D31E4B587871C(Global_1627537[iLocal_103 /*532*/].f_1, 11))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 13);
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 136) || (func_37(unk_0x9EB17624F44A8DA4(), 24) && func_36(iLocal_103)))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 146))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_35(unk_0x9EB17624F44A8DA4()) && ((func_33(unk_0x9EB17624F44A8DA4()) == 148 || func_33(unk_0x9EB17624F44A8DA4()) == 142) || func_33(unk_0x9EB17624F44A8DA4()) == 164))
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0x9EB17624F44A8DA4()) == 153)
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0x9EB17624F44A8DA4()) && func_33(unk_0x9EB17624F44A8DA4()) == 170)
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0x9EB17624F44A8DA4()) == 167)
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0x9EB17624F44A8DA4()) == 168)
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			return 1;
		}
		if (unk_0x191BE1BC8F26F3C1(unk_0x25D049AAC4603E65(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_38(iLocal_103, 146))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 7);
					return 1;
				}
				if (!unk_0xC80D31E4B587871C(Local_95.f_1, 16))
				{
					if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_9) > func_30())
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != unk_0x8B948C59217A295D(unk_0xDE2D3B9654C31EB3(iLocal_103)))
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x122C
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x123F
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_13())
		{
			if (iParam1 == Global_1627537[iParam0 /*532*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)//Position - 0x12A2
{
	if (func_15(iParam0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)//Position - 0x12C8
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_13())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					if (Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()//Position - 0x1320
{
	if (((func_29(iLocal_103, 1, 0) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)//Position - 0x1362
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0x1377
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x13E1
{
	if (Local_95.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)//Position - 0x13FB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_32(iParam0, 9);
	}
	return 0;
}

bool func_32(int iParam0, int iParam1)//Position - 0x1419
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_33(int iParam0)//Position - 0x1434
{
	if (func_34(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)//Position - 0x1457
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x1492
{
	if (func_15(iParam0))
	{
		if (func_31(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_36(int iParam0)//Position - 0x14B1
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

bool func_37(int iParam0, int iParam1)//Position - 0x14C9
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_38(int iParam0, int iParam1)//Position - 0x14E2
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_39(iParam0);
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1502
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_40()//Position - 0x1528
{
	func_51();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_41();
}

void func_41()//Position - 0x1543
{
	int iVar0;
	
	if (func_6(unk_0xF6A72924028F588B(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0xF6A72924028F588B(iLocal_108) == iLocal_103)
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_1, 16))
				{
					if (unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_1, 11))
			{
				if (func_47(unk_0xF6A72924028F588B(iLocal_108)))
				{
					if (!unk_0xC80D31E4B587871C(Local_95.f_4, iLocal_108))
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 11);
						unk_0x872F1C1F8587CCC7(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_95.f_4, iLocal_108))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 11);
					unk_0x0EE72DB1CD8A3B86(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != -1)
					{
						if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
						{
							unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 1);
							Local_95.f_42 = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_43 = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_46())
							{
								func_45();
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_95.f_2, 9))
					{
						if (!func_46())
						{
							func_44();
						}
						iVar0 = 0;
						while (iVar0 < func_452(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 9);
						unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 1);
					}
				}
				if (func_46())
				{
					if (!unk_0xC80D31E4B587871C(iLocal_98, 17))
					{
						if (unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_45();
							unk_0x872F1C1F8587CCC7(&iLocal_98, 17);
						}
						else if (unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_44();
							unk_0x872F1C1F8587CCC7(&iLocal_98, 17);
						}
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_98, 3))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_98, 3);
					}
				}
				else if (unk_0xF6A72924028F588B(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
						{
							if (!unk_0xC80D31E4B587871C(Local_95.f_2, 6))
							{
								unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!unk_0xC80D31E4B587871C(iLocal_98, 3))
			{
				func_43();
			}
			else
			{
				func_42();
			}
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 3);
		}
	}
}

void func_42()//Position - 0x17BC
{
	if (unk_0xC80D31E4B587871C(Local_95.f_2, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_95.f_2), 3);
	}
}

void func_43()//Position - 0x17D9
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 3);
	}
}

void func_44()//Position - 0x17FE
{
	struct<14> Var0;
	
	Var0.f_2 = 753968808;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_45()//Position - 0x182B
{
	struct<14> Var0;
	
	Var0.f_2 = 1150183820;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	if (func_452(iLocal_101) > 1)
	{
		Var0.f_12 = unk_0xF6A72924028F588B(1);
	}
	else
	{
		Var0.f_12 = unk_0xF6A72924028F588B(0);
	}
	Var0.f_3 = Local_95.f_43;
	func_20(Var0, func_21(1));
}

int func_46()//Position - 0x1880
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x1897
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return func_50();
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_241.f_136[func_49(10) /*33*/][iParam0], func_48(10));
}

int func_48(int iParam0)//Position - 0x18CD
{
	return (iParam0 % 32);
}

int func_49(int iParam0)//Position - 0x18DA
{
	return (iParam0 / 32);
}

var func_50()//Position - 0x18E7
{
	return Global_1312416;
}

void func_51()//Position - 0x18F3
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 3))
		{
			if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_6) > 10000)
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_2, 1))
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 2);
				}
			}
		}
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 8))
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
			{
				if (func_55())
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 6);
					func_54();
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = unk_0x25D049AAC4603E65(iLocal_103);
				if (func_53(iVar0))
				{
					func_238(iVar0);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 15);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 5))
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_1, 4))
			{
				if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_5) > 600000)
				{
					unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 4);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_95.f_3, 12))
		{
			if (func_52())
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_52()//Position - 0x1A23
{
	switch (Local_95.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_565 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_565 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1A78
{
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 17))
	{
		if (!unk_0x0BA31FF7931F3DD3(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_36, unk_0xB3328BA8976B416C(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_54()//Position - 0x1AC3
{
	func_481();
	Local_95 = 0;
}

int func_55()//Position - 0x1AD2
{
	if ((((((((unk_0xC80D31E4B587871C(Local_95.f_2, 6) || unk_0xC445AB6B86A2138E(iLocal_103)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2422736[iLocal_103 /*420*/].f_253) || func_56(unk_0x25D049AAC4603E65(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_103 != -1)
	{
		if (unk_0xC80D31E4B587871C(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x1B81
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (unk_0x1ED974E122CB5C47(iParam0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0x82FF3DFBC3965CC0(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1BC7
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

void func_58()//Position - 0x1C06
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 5);
	}
}

void func_59()//Position - 0x1C2B
{
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_95.f_1), 5);
	}
}

int func_60()//Position - 0x1C48
{
	bool bVar0;
	
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_240())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_235())
			{
				if (func_232())
				{
					if (func_231())
					{
						bVar0 = true;
					}
					else if (func_229(func_230(iLocal_101)))
					{
						if (func_66())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_58();
			if (func_61())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x1CC2
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_452(iLocal_101))
					{
						if ((!unk_0x93C304998B457C45(Local_95.f_10[iVar0 /*7*/]) && !unk_0xC80D31E4B587871C(Local_95.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0xC80D31E4B587871C(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_62(iVar0, func_65(iLocal_101), Local_95.f_32, Local_95.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_452(iLocal_101))
				{
					if (!unk_0x93C304998B457C45(Local_95.f_10[iVar0 /*7*/]))
					{
						if (!unk_0xC80D31E4B587871C(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x872F1C1F8587CCC7(&iLocal_98, 1);
			unk_0x872F1C1F8587CCC7(&iLocal_98, 2);
			unk_0x872F1C1F8587CCC7(&iLocal_98, 3);
			unk_0x872F1C1F8587CCC7(&iLocal_98, 4);
			unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 0);
			unk_0x872F1C1F8587CCC7(&Global_1647210, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x1DE0
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!unk_0x93C304998B457C45(Local_95.f_10[iParam0 /*7*/]))
		{
			if (unk_0x098390F4365DA157(0) < unk_0x3930B0AA9F6A0C8C(false, 0))
			{
				if (unk_0x7A419CA188B4A665(1))
				{
					if (func_229(func_230(iLocal_101)))
					{
						if (func_64(&(Local_95.f_10[iParam0 /*7*/]), 7, func_230(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_10[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_63(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_63(int iParam0)//Position - 0x1E62
{
	char cVar0[16];
	
	if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), Global_1574760);
				unk_0x4BC06B6FCC1CE27B(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 1);
				unk_0x94926085D8EF8443(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xD38F266C132F2897(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0x2C8C730E9565B998(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 2);
			unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 13, 1);
			unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 41, 1);
			unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 20, 1);
			unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 132, true);
			unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 118, false);
			unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 311, true);
			unk_0xC87DF3B5D32E898C(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x296D39391436DC64(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0, 0);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 2, 0);
					unk_0x4F9A62E773100FDC(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 2);
					unk_0xD1D0B4122585CC63(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0);
					unk_0xD0A6028E561242DA(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 32, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 4, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 1024, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 128, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 32, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 8, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 64, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 256, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 1, false);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 2, true);
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 16, true);
					if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 512, true);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x9E058151726E58DE(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					unk_0x6D624C6A284D7D07(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 0);
					unk_0x60C06BFD037BB7CF(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), unk_0x25D049AAC4603E65(iLocal_103), -1, 0, 2);
					unk_0x396A8C7824F9CCB7(Local_95.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), system::round((Global_262145.f_153 * IntToFloat(unk_0xDE523AF6F7B269AB(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]))))), 0);
			if (!unk_0xC80D31E4B587871C(Local_95.f_1, 8))
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 8);
			}
			unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_64(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x21EE
{
	int iVar0;
	
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	iVar0 = unk_0xAC992EFAD62C33BF(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xABF6E3937F555048(iVar0);
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(iVar0, iParam7);
		if (unk_0x0D4BF24EE51A419A(iVar0))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x224D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_66()//Position - 0x226A
{
	struct<26> Var0;
	
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (unk_0x552F39AE86E07792(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_25 = -1082130432;
					Var0 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1) };
					Var0.f_5 = 20f;
					if (func_67(Local_95.f_36, 40f, &(Local_95.f_32), &(Local_95.f_35), Var0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0x9F99C09A1147E75A();
					unk_0x4D1DF3388A933CF8();
					if (Global_2405047.f_2439)
					{
						unk_0xA97AB0E9B7AF96B6();
						Global_2405047.f_2439 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_67(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x2338
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_68(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_12 > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = Param4.f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2)//Position - 0x2432
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405047.f_2433 == *uParam0 || !Global_2405047.f_2433.f_1 == uParam0->f_1) || !Global_2405047.f_2433.f_2 == uParam0->f_2) || !Global_2405047.f_2436 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2447 == uParam0->f_8 || !Global_2405047.f_2447.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2447.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2450 == uParam0->f_11) || !Global_2405047.f_2450.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2450.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2453 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (unk_0x8F05914DD835E69F(Global_2405047.f_2440))
			{
				if (Global_2405047.f_2440 == unk_0xBBA15366508D1BDE())
				{
					if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_228(0))
					{
						return 0;
					}
				}
				else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) < func_228(0))
				{
					return 0;
				}
			}
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_227();
		}
		Global_2405047.f_2431 = 0;
	}
	else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2437) > func_228(0))
	{
		Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
		func_221();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x590D9654A4367AA1(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	vVar7 = { vVar6 + Vector(-0,1f, -0,1f, -0,1f) };
	vVar8 = { vVar6 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2405047.f_2431)
	{
		unk_0x9F99C09A1147E75A();
		unk_0x4D1DF3388A933CF8();
		func_227();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (system::vmag(*uParam0) > 0f)
			{
				if (func_220(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1A1094F3B2B73324())
		{
			Global_2405047.f_2454 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2433 = { *uParam0 };
					Global_2405047.f_2436 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = 0f;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2447 = { uParam0->f_8 };
					Global_2405047.f_2450 = { uParam0->f_11 };
					Global_2405047.f_2453 = uParam0->f_14;
					Global_2405047.f_2433 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_219(vVar6.x, vVar6.y);
			}
			Global_2405047.f_2432 = 1;
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2440 = unk_0xBBA15366508D1BDE();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2431)
	{
		if (Global_2405047.f_2432 == 1)
		{
			if (unk_0x9C0571C926F68BED(fVar2, fVar3, fVar4, fVar5) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 5000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var14.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_23;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_218(Global_4456448.f_143970))
					{
						Var14.f_9 = 1;
					}
					func_196(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_195(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2432 = 9;
				}
				else
				{
					Global_2405047.f_2432 = 2;
				}
			}
		}
		if (Global_2405047.f_2432 == 2)
		{
			if ((unk_0x99C56B529F029F9E(vVar7, vVar8) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 15000) || unk_0x6A53B51B72E7941B(vVar7, vVar8) == 0)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (uParam0->f_5 && !func_192(unk_0x9EB17624F44A8DA4(), 0))
				{
					Global_2405047.f_2432 = 3;
				}
				else
				{
					Global_2405047.f_2432 = 4;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2442) > 7000)
			{
				func_191(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405047.f_2432 == 3)
		{
			if (func_190() || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 10000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 4;
			}
		}
		if (Global_2405047.f_2432 == 4)
		{
			if (unk_0x1A1094F3B2B73324())
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
			}
			else
			{
				iVar0 = 0;
				func_221();
				if (uParam0->f_5)
				{
					if (system::vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xCCF32B3FD0FF4C53(unk_0x9EB17624F44A8DA4(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 1:
							func_189(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD6D9916F15673C93(unk_0x9EB17624F44A8DA4(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
								Global_2405047.f_2432 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_189(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2432 == 5)
		{
			if (func_118(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2458.f_5)
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					Global_2405047.f_2432 = 6;
				}
				else
				{
					Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
					if (!uParam0->f_5)
					{
						if (!system::vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						}
					}
					Global_2405047.f_2432 = 9;
				}
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				unk_0x9F99C09A1147E75A();
				unk_0x4D1DF3388A933CF8();
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2458.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_117(uParam0->f_4))
				{
					if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_116(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x8814134CB7E5C28B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_189(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0xA6B4B94DC0DE8A5F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xA6B4B94DC0DE8A5F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2432 == 7)
		{
			if (func_118(uParam2, uParam0, uParam1, 1))
			{
				if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!system::vmag(Global_2405047.f_2587[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_195(Global_2405047.f_2587[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_114(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x8AE9E5E8F6DC40C9(Global_2405047.f_2587[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2587[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_71(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				if (!system::vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405047.f_2432 = 9;
			}
			else if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2405047.f_2438) > 20000)
			{
				Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
				Global_2405047.f_2432 = 8;
			}
		}
		if (Global_2405047.f_2432 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_70(Global_2405047.f_482))
				{
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_69(uParam2, &(Global_2405047.f_2458.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2433 };
				func_71(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2438 = unk_0xD1952A425B78FFC0();
			Global_2405047.f_2432 = 9;
		}
		if (Global_2405047.f_2432 == 9)
		{
			Global_2405047.f_2431 = 0;
			unk_0x9F99C09A1147E75A();
			unk_0x4D1DF3388A933CF8();
			func_227();
			return 1;
		}
		Global_2405047.f_2437 = unk_0xD1952A425B78FFC0();
	}
	return 0;
}

void func_69(var uParam0, var uParam1)//Position - 0x33EB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_70(int iParam0)//Position - 0x3435
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x3454
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_117(uParam5->f_4) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_116(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_116(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_73(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var2.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_23;
		Var2.f_55 = uParam5->f_16;
		func_196(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_73(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x7367FB97975F1E29(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405047.f_642 = 1;
}

int func_72(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x388C
{
	switch (iParam1)
	{
		case 0:
			if (system::vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_114(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_73(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x38F9
{
	if (func_113(vParam0, uParam1))
	{
		if (func_74(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0x3F3EC0940E331911(vParam0, 0, uParam1, iParam2))
	{
		if (func_74(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3955
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = system::vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_94(Global_2405047.f_505, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_81(*uParam1, 1056964608))
			{
				if (!func_75(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_75(var uParam0, bool bParam1)//Position - 0x39DA
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_80(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_79(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_76(&vVar1, Global_2409893[iVar2 /*127*/][iVar0 /*7*/], Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_79(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_76(&vVar1, Global_2409893[8 /*127*/][iVar0 /*7*/], Global_2409893[8 /*127*/][iVar0 /*7*/].f_3, Global_2409893[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_76(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x3AE7
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_78(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
	fVar3 = (system::vmag(vVar1) * system::sin(unk_0xAF3D7D969F2C195C(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_77(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_77(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = system::vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_78(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0,5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_78(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(system::vmag(vVar2)) };
		fVar3 = (system::vmag(vVar11) * system::sin(unk_0xAF3D7D969F2C195C(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_77(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_77(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0,5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (system::vdist(vVar4, *uParam0, uParam0->f_1, 0f) < system::vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_77(vector3 vParam0, vector3 vParam1)//Position - 0x3DB6
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_78(vector3 vParam0, vector3 vParam1)//Position - 0x3DD7
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_79(vector3 vParam0, var uParam1)//Position - 0x3E10
{
	return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_80(struct<2> Param0, var uParam1)//Position - 0x3E30
{
	if (Param0.f_1 > Global_2411047[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411047[1])
	{
		if (Param0 < Global_2411051[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411047[2])
	{
		if (Param0 < Global_2411051[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411051[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411051[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_81(vector3 vParam0, float fParam1)//Position - 0x3ECB
{
	int iVar0;
	
	if (func_91(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (Global_4456448.f_54288 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_54288)
			{
				if (Global_4456448.f_54289[iVar0 /*71*/].f_7 != 0)
				{
					if (func_82(vParam0, Global_4456448.f_54289[iVar0 /*71*/], Global_4456448.f_54289[iVar0 /*71*/].f_6, Global_4456448.f_54289[iVar0 /*71*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_51079 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_51079)
			{
				if (Global_4456448.f_51082[iVar0 /*130*/].f_16 != 0)
				{
					if (func_82(vParam0, Global_4456448.f_51082[iVar0 /*130*/], Global_4456448.f_51082[iVar0 /*130*/].f_3, Global_4456448.f_51082[iVar0 /*130*/].f_16, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_71947 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_71947)
			{
				if (Global_4456448.f_71951[iVar0 /*213*/].f_12 != 0)
				{
					if (func_82(vParam0, Global_4456448.f_71951[iVar0 /*213*/], Global_4456448.f_71951[iVar0 /*213*/].f_3, Global_4456448.f_71951[iVar0 /*213*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_82(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x4056
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (system::vdist(vParam0, vParam1) < func_90(iParam3, 1008981770))
	{
		func_83(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_83(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x40A9
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_89(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	func_84(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0,5f * unk_0xE97272C977DEADD3((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0xE97272C977DEADD3((vVar2.x - vVar1.x));
}

void func_84(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4175
{
	int iVar0;
	
	if (unk_0x3B0047CED068C463(iParam0))
	{
		unk_0x04FE252E98FAA4C3(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_87(iParam0);
		if (iVar0 != 0)
		{
			func_85(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (system::vmag(*fParam1) <= 0,01f || system::vmag(*fParam2) <= 0,01f)
	{
		*fParam1 = (0f - (fParam4 * 0,5f));
		*fParam2 = (0f + (fParam4 * 0,5f));
		fParam1->f_1 = (0f - (fParam3 * 0,5f));
		fParam2->f_1 = (0f + (fParam3 * 0,5f));
		fParam1->f_2 = (0f - (fParam5 * 0,5f));
		fParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_85(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4234
{
	int iVar0;
	
	func_86(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3B0047CED068C463(Global_1315788[iVar0]))
		{
			unk_0x04FE252E98FAA4C3(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (system::vmag(Global_1315792[iVar0 /*3*/]) <= 0,01f || system::vmag(Global_1315799[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0,5f);
	Global_1315820 = (Global_1315815 * 0,5f);
	Global_1315817.f_1 = ((((0,5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0,5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0,5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0,5f);
	*fParam1 = { Global_1315817 };
	*fParam2 = { Global_1315820 };
}

void func_86(int iParam0, var uParam1)//Position - 0x4440
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_87(int iParam0)//Position - 0x44C1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_88(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x44F0
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_89(var uParam0, vector3 vParam1)//Position - 0x4502
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = system::cos(vParam1.x);
	fVar1 = system::sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.y);
	fVar1 = system::sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = system::cos(vParam1.z);
	fVar1 = system::sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_90(int iParam0, float fParam1)//Position - 0x45D9
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_84(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (system::sqrt(((((vVar2.x * 0,5f) * (vVar2.x * 0,5f)) + ((vVar2.y * 0,5f) * (vVar2.y * 0,5f))) + ((vVar2.z * 0,5f) * (vVar2.z * 0,5f)))) + fParam1);
	return fVar3;
}

int func_91(int iParam0, bool bParam1)//Position - 0x4659
{
	if (bParam1)
	{
		if (func_92(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_92(int iParam0)//Position - 0x4685
{
	return func_93(iParam0);
}

bool func_93(int iParam0)//Position - 0x4693
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_94(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x46AD
{
	int iVar0;
	bool bVar1;
	
	if (func_107(vParam0))
	{
		if (func_106(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_97(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_96(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (system::vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_95(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_95(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x4769
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (system::vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_89(&vVar0, 0f, 0f, unk_0x5B811202FCBE9E9D(0f, 360f));
		}
		else
		{
			func_89(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_96(vector3 vParam0, float fParam1)//Position - 0x4811
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (system::vdist(vParam0, Global_2405047.f_2695[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(var uParam0, bool bParam1, bool bParam2)//Position - 0x484C
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_102(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_99(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_102(vVar2, &uVar1) || func_98(vVar2))
			{
				vVar2 = { *uParam0 };
				func_99(&vVar2, &(Global_2405047.f_361[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_98(vector3 vParam0)//Position - 0x48D0
{
	float fVar0;
	
	if (Global_2405047.f_577 > 0f)
	{
		fVar0 = system::vdist(vParam0, Global_2405047.f_574);
		if (fVar0 < Global_2405047.f_577)
		{
			return 1;
		}
	}
	return 0;
}

void func_99(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x4909
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_101(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_101(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_101(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_95(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_100(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_76(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_100(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x4A13
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_101(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x4B12
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_95(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_100(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_76(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x49A7AD0000D6AF17(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_195(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_114(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x8AE9E5E8F6DC40C9(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_102(vector3 vParam0, var uParam1)//Position - 0x4C15
{
	int iVar0;
	int iVar1;
	
	if (func_105())
	{
		return 0;
	}
	iVar1 = func_104();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9 == 1)
		{
			if (func_103(vParam0, &(Global_2405047.f_361[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_103(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x4C79
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_195(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405047.f_2693) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_114(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x8AE9E5E8F6DC40C9(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_104()//Position - 0x4DDA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_105()//Position - 0x4E0D
{
	return Global_1669535.f_28;
}

int func_106(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4E1B
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409756[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409756[iVar0 /*17*/].f_16))
			{
				if (func_103(*uParam0, &(Global_2409756[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409756[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409756[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_99(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_106(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_99(&vVar1, &(Global_2409756[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_107(vector3 vParam0)//Position - 0x4EF6
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405047.f_508 && !Global_2405047.f_509)
	{
		if (!Global_2405047.f_44.f_314)
		{
			if (!func_111(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 1;
			}
			if (!func_110(vParam0, 1008981770))
			{
				if (!func_106(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_106(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_109(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_108(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_106(&vVar1, 0, 0, 0, 1))
					{
						if (!func_106(&vParam0, 0, 0, 0, 1))
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

Vector3 func_108(var uParam0)//Position - 0x4FB6
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_109(vector3 vParam0, float fParam1)//Position - 0x4FFF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_103(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(vector3 vParam0, float fParam1)//Position - 0x5047
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_103(vParam0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, bool bParam1)//Position - 0x508E
{
	if (Global_1312447 != 0)
	{
		return func_112(iParam0) != 0;
	}
	return func_91(iParam0, bParam1);
}

int func_112(int iParam0)//Position - 0x50B4
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_113(vector3 vParam0, var uParam1)//Position - 0x50D6
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			fVar3 = system::vdist(Global_2405047.f_2230[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405047.f_2230[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_114(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x5150
{
	func_115(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_115(var uParam0, var uParam1)//Position - 0x51FB
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_116(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x525D
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (system::vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_117(float fParam0)//Position - 0x5308
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_118(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5320
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405047.f_2458.f_1 == 0 && Global_2405047.f_2458 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x22D98A042592706D(&(Global_2405047.f_2458.f_1)))
			{
				case 0:
					func_187(uParam1, uParam2);
					if (!Global_2405047.f_2458.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_539.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
							}
							if (uParam1->f_5 && func_70(Global_2405047.f_482))
							{
								if (!Global_2405047.f_2458.f_5)
								{
									Global_2405047.f_2458.f_5 = 1;
								}
								else
								{
									func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_71(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_187(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x1A1094F3B2B73324())
		{
			if (!unk_0x998311CC2C553D30())
			{
				if (unk_0x63B0243EB1873848())
				{
					func_187(uParam1, uParam2);
					Global_2405047.f_2458.f_1 = unk_0x90740CF1CC0202BB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x4D1DF3388A933CF8();
				func_187(uParam1, uParam2);
				if (!Global_2405047.f_2458.f_2)
				{
					Global_2405047.f_2458.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_184(Global_2405047.f_539, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2458.f_4)
	{
		Global_2405047.f_2458.f_4 = 1;
		func_126(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405047.f_2458.f_1 > 0 || Global_2405047.f_2458 > 0)
	{
		if (uParam1->f_5 || unk_0x1A1094F3B2B73324())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405047.f_2458.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405047.f_2458.f_3)
					{
						iVar2 = Global_2405047.f_2458.f_3 + 1;
					}
					if (iVar2 > (Global_2405047.f_2458.f_1 - 1))
					{
						iVar2 = (Global_2405047.f_2458.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xEA80F1CF460B38B7(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57,29578f);
					}
					else
					{
						unk_0x8808EFD99B7C618E(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x5CBCFAA65C2870A1(iVar2);
					}
					else
					{
						unk_0xC8B6E30ABF9D63FC(iVar2, &iVar3);
					}
					func_126(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405047.f_2458.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405047.f_2458.f_1;
		}
		if (Global_2405047.f_2458.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405047.f_2847)
			{
				func_120(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_70(Global_2405047.f_482))
			{
				if (Global_2405047.f_2458.f_2)
				{
					func_69(uParam0, &(Global_2405047.f_2458.f_6));
					func_119(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_119(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2458.f_2)
			{
				func_69(uParam0, &(Global_2405047.f_2458.f_6));
				func_119(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x63A6486593EC7EC3(0, Global_2405047.f_2458.f_1);
				unk_0xEA80F1CF460B38B7(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_75(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_119(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
					func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
					func_119(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
				func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
				func_119(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2433 };
		if (uParam1->f_5 && func_70(Global_2405047.f_482))
		{
			if (!Global_2405047.f_2458.f_5)
			{
				Global_2405047.f_2458.f_5 = 1;
			}
			else
			{
				func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_71(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x5B811202FCBE9E9D(0f, 360f);
		func_119(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_119(vector3 vParam0)//Position - 0x58E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2587[(3 - iVar0) /*3*/] = { Global_2405047.f_2587[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2587[0 /*3*/] = { vParam0 };
}

void func_120(var uParam0, var uParam1, var uParam2)//Position - 0x5937
{
	if (func_70(Global_2405047.f_482) && func_125() < 4096)
	{
		func_124(uParam0, 0f);
		func_124(uParam1, uParam0->f_2);
		func_124(uParam2, uParam1->f_2);
	}
	else
	{
		func_123(uParam0);
		func_122(uParam2, uParam0->f_4);
		func_121(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_121(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x599C
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar3 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_122(var uParam0, vector3 vParam1)//Position - 0x5A3B
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			fVar2 = system::vdist(Global_2407922[iVar0 /*9*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407922[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_123(var uParam0)//Position - 0x5ABD
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_1;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_124(var uParam0, float fParam1)//Position - 0x5B2A
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_2 < fVar1 && Global_2407922[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407922[iVar0 /*9*/].f_2;
				Var2 = { Global_2407922[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_125()//Position - 0x5BAD
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407922[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_126(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x5BE4
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	int iVar17;
	struct<9> Var18;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam2->f_5)
	{
		if (Global_2405047.f_482 == 1)
		{
			if (unk_0xE97272C977DEADD3((Global_2405047.f_505.f_2 - vParam0.z)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam2->f_5)
	{
		if (func_181(unk_0x9EB17624F44A8DA4()))
		{
			if (iParam5 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_180(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x15BCAEC850B1E33D(unk_0xFC1458A37D98B502(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_179(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar12 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (system::vmag(uParam3->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!system::vdist(vParam0, uParam3->f_13[iVar10 /*3*/]) > uParam3->f_20[iVar10])
			{
				bVar12 = false;
			}
		}
		iVar10++;
	}
	if (bVar12)
	{
		iVar7 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_173(vParam0, fParam1, uParam2->f_15, func_178(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_170(vParam0, 25f, unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_166(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_166(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			vVar11 = { Global_2405047.f_505 };
			if (Global_2405047.f_482 == 26)
			{
				vVar11 = { Global_2405047.f_539.f_18 };
			}
			if (!func_96(vParam0, 0,5f))
			{
				if (func_107(vVar11))
				{
					if (!func_106(&vParam0, 0, 0, 0, 1) && !func_165(&vParam0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_165(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_164(vParam0, 2,5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_163(unk_0x9EB17624F44A8DA4()) && func_162(unk_0x9EB17624F44A8DA4())))
		{
			if (!func_161(&vParam0, &(Global_2405047.f_2458.f_85), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_162(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_160(vParam0, &(Global_2405047.f_2458.f_52), &(Global_2405047.f_2458.f_85), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_159(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_70(Global_2405047.f_482))
			{
				if (func_110(vParam0, 0,01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_158(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x2C2E1E35924B9FF2(unk_0xD3BB1A515B0A47F3(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405047.f_674)
		{
			if (!func_97(&vParam0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_75(&vParam0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar13 = func_109(vParam0, 1008981770);
		if (iVar13 > -1)
		{
			func_157(vParam0, &vVar14, &vVar15, &fVar16);
			if (!func_152(&(Global_2405047.f_44[iVar13 /*12*/]), vVar14, vVar15, fVar16))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_81(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam2->f_5)
	{
	}
	else if (func_151(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var18.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	if (Global_2405047.f_2847 && uParam2->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_143(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			else
			{
				fVar0 = func_143(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_70(Global_2405047.f_482) && iVar7 < 4096)
			{
				Var18.f_2 = func_141(vParam0);
			}
			Var18.f_4 = { vParam0 };
			Var18.f_7 = fParam1;
			Var18 = iVar7;
			Var18.f_1 = fVar0;
			func_140(Var18);
			Global_2405047.f_2458.f_2 = 1;
		}
	}
	else
	{
		iVar17 = 0;
		while (iVar17 < 5)
		{
			if (iVar7 >= Global_2405047.f_2458.f_6[iVar17 /*9*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar19)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_143(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						else
						{
							fVar0 = func_143(vParam0, Global_2405047.f_2433, uParam3->f_6, uParam3->f_4, bVar4, iVar9, &(Var18.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar19 = true;
					}
					if ((func_70(Global_2405047.f_482) && iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar20)
						{
							fVar2 = func_141(vParam0);
							bVar20 = true;
						}
						if (fVar2 < Global_2405047.f_2458.f_6[iVar17 /*9*/].f_2)
						{
							Var18.f_4 = { vParam0 };
							Var18.f_7 = fParam1;
							Var18 = iVar7;
							Var18.f_1 = fVar0;
							Var18.f_2 = fVar2;
							func_139(Var18, iVar17);
							Global_2405047.f_2458.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar0 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_1))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_1 = fVar0;
						func_139(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar19)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_138(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_128(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_127(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_127(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar19 = true;
					}
					if (iVar7 > Global_2405047.f_2458.f_6[iVar17 /*9*/] || (iVar7 == Global_2405047.f_2458.f_6[iVar17 /*9*/] && fVar3 > Global_2405047.f_2458.f_6[iVar17 /*9*/].f_3))
					{
						Var18.f_4 = { vParam0 };
						Var18.f_7 = fParam1;
						Var18 = iVar7;
						Var18.f_3 = fVar3;
						func_139(Var18, iVar17);
						Global_2405047.f_2458.f_2 = 1;
						return;
					}
				}
			}
			iVar17++;
		}
	}
}

float func_127(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x64FB
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_128(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x6599
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0x9EB17624F44A8DA4() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_130(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x917EE18109C5ACEA(iVar7) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0x917EE18109C5ACEA(iVar7) == -1 || !func_111(unk_0x9EB17624F44A8DA4(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar7) || !bParam4)
					{
						if (func_129(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == unk_0x9EB17624F44A8DA4())
							{
								vVar6 = { unk_0xC2E51FC090040CBB(unk_0x25D049AAC4603E65(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar5, 1);
							fVar2 = unk_0xBE3C4023003180FC(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_129(int iParam0)//Position - 0x66E5
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x6711
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_136(iParam0))
		{
			if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (!unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
				{
					if (func_91(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_135(unk_0x917EE18109C5ACEA(iParam0), unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
				{
					if (!func_91(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (!func_131(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x67BC
{
	if (func_134(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_133(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_132(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x6803
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_133(int iParam0)//Position - 0x682E
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_134(int iParam0, int iParam1)//Position - 0x6845
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_133(iParam0) };
		Global_2492170 = { func_133(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x68B2
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x6A7D
{
	if (func_192(iParam0, 0))
	{
		return 1;
	}
	if (func_137())
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

bool func_137()//Position - 0x6ABF
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

float func_138(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x6AD0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
				{
					fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_192(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if (func_129(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam5 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								fVar4 = system::vdist2(vParam0, unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return system::sqrt(fVar3);
	}
	return -1f;
}

void func_139(struct<9> Param0, int iParam1)//Position - 0x6C67
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2458.f_6[iParam1 /*9*/] };
	Global_2405047.f_2458.f_6[iParam1 /*9*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_139(Var0, iParam1 + 1);
	}
}

void func_140(struct<9> Param0)//Position - 0x6CB9
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_125();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] < iVar2)
		{
			Global_2407922[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] == 0)
		{
			Global_2407922[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999,9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407922[iVar0 /*9*/] > 0)
		{
			if (Global_2407922[iVar0 /*9*/].f_1 < fVar3)
			{
				fVar3 = Global_2407922[iVar0 /*9*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407922[iVar4 /*9*/] = { Param0 };
	}
}

float func_141(vector3 vParam0)//Position - 0x6DAD
{
	var uVar0;
	
	return func_142(vParam0, &(Global_2405047.f_44), &uVar0);
}

float func_142(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6DC5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = system::vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2693) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_143(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x6F41
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (system::to_float(iParam5) / system::to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_127(system::vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_128(vParam0, 1, 0, 0, 1);
	fVar0 = func_127(fVar4, 0f, func_150(), func_148(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_146(vParam0);
	fVar0 = func_127(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !func_111(unk_0x9EB17624F44A8DA4(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_145(vParam0, unk_0x9EB17624F44A8DA4(), 0);
	fVar0 = func_127(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_144(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_127(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_127(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_127(system::vdist(Global_2405047.f_505, vParam0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_144(vector3 vParam0, var uParam1, var uParam2)//Position - 0x7127
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0xC35B067544C496CB(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x415CDAC83972AD02(iVar1))
	{
		unk_0x52854081FE5E271E(iVar1, &vVar0);
		*uParam1 = system::vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0xE97272C977DEADD3((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_145(vector3 vParam0, int iParam1, int iParam2)//Position - 0x7180
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999,9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar3) != unk_0x917EE18109C5ACEA(iParam1) || (unk_0x917EE18109C5ACEA(iVar3) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1))
					{
						if (Global_2416800.f_261[iVar2])
						{
							fVar1 = system::vdist(Global_2416800.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_146(vector3 vParam0)//Position - 0x722C
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x6ADD12BF4D6D2587(uVar4[iVar2]))
		{
			if (!unk_0x191BE1BC8F26F3C1(uVar4[iVar2], 0))
			{
				if (func_147(uVar4[iVar2]))
				{
					vVar3 = { unk_0xB3328BA8976B416C(uVar4[iVar2], 1) };
					fVar1 = unk_0xBE3C4023003180FC(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_147(int iParam0)//Position - 0x72B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1479B36DFB6174A5(iParam0);
	switch (unk_0x8801269555D2E37F(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x7FC5297E8F508B26(Global_1574725[unk_0x9EB17624F44A8DA4()]))
	{
		switch (unk_0x8801269555D2E37F(iVar0, Global_1574725[unk_0x9EB17624F44A8DA4()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 0)
	{
		iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x7FC5297E8F508B26(Global_1574436[iVar1]))
			{
				switch (unk_0x8801269555D2E37F(iVar0, Global_1574436[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_148()//Position - 0x7384
{
	if (func_149())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_149()//Position - 0x73E0
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_301)
	{
		if (!func_136(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
	}
	return 0;
}

float func_150()//Position - 0x7416
{
	if (func_149())
	{
		if ((unk_0x849A8CFD71854E02(Global_2405047.f_44.f_67) || unk_0xF9DDB1C0875FD9E0(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_151(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x7472
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x717FFCE23DE4C8C8(vParam0, fParam5)) || (fVar0 > 0f && unk_0x0D3330EAF6340496(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x83A4DE08E23A2F1F(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_152(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x7501
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_156(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_155(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_153(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_153(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x758D
{
	vector3 vVar0[8];
	int iVar1;
	
	func_154(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_154(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x75DF
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0,01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_78(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(system::vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0,5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_155(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x770C
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_156(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x77D6
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x8AE9E5E8F6DC40C9(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_157(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x785A
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_80(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411037[iVar2])
	{
		if (func_79(vVar1, &(Global_2409893[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411037[8])
	{
		if (func_79(vVar1, &(Global_2409893[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2409893[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_2409893[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2409893[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_158(vector3 vParam0)//Position - 0x7948
{
	int iVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (unk_0x2C2E1E35924B9FF2(Global_2405047.f_44.f_56))
		{
			if (!unk_0xD42907FA80A6F327(vParam0))
			{
				iVar0 = unk_0xD3BB1A515B0A47F3(vParam0);
				if (unk_0x2C2E1E35924B9FF2(iVar0))
				{
					iVar1 = unk_0x0BD7EF76BF7CFC43(iVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
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
		}
	}
	return 1;
}

int func_159(vector3 vParam0)//Position - 0x79B3
{
	switch (Global_2405047.f_2454)
	{
		case 0:
			return func_195(vParam0, Global_2405047.f_2433, Global_2405047.f_2436, 0, 0);
			break;
		
		case 1:
			return func_114(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, 0, 0);
			break;
		
		case 2:
			return unk_0x8AE9E5E8F6DC40C9(vParam0, Global_2405047.f_2447, Global_2405047.f_2450, Global_2405047.f_2453, 0, 1);
			break;
	}
	return 0;
}

int func_160(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x7A45
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (system::vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_161(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x7AF3
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (system::vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_95(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x7B66
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1595693[iParam0 /*680*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x7B9C
{
	if (func_91(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam1, int iParam2)//Position - 0x7BC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (system::vdist2(Global_2405047.f_2587[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(var uParam0, bool bParam1)//Position - 0x7BFE
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_98(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x5B811202FCBE9E9D(0,01f, 360f);
			func_95(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 0, fVar2);
			if (func_102(vVar1, &uVar0) || func_98(vVar1))
			{
				vVar1 = { *uParam0 };
				func_95(&vVar1, Global_2405047.f_574, Global_2405047.f_577, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_166(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x7C96
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_167(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_192(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_129(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_167(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_167(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_167(int iParam0)//Position - 0x7E4E
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_169() && Global_1595693[iVar0 /*680*/].f_673) && !func_168(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_8(iParam0);
}

int func_168(vector3 vParam0)//Position - 0x7EA1
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_169()//Position - 0x7ECB
{
	return Global_2447174.f_16;
}

int func_170(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7ED9
{
	if (func_172(vParam0, fParam1, iParam2, iParam3, 0) || func_171(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_171(vector3 vParam0, int iParam1, int iParam2)//Position - 0x7F0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_82(vParam0, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7FCC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2416800.f_261[iVar0])
					{
						if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416800.f_261[iVar0])
				{
					if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (system::vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_173(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x80EB
{
	Global_2405047.f_3 = 0;
	if (!func_170(vParam0, 0,5f, unk_0x9EB17624F44A8DA4(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam3)
		{
			if (func_220(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_177(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_81(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_220(vParam0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_177(vParam0, fParam10))
				{
					Global_2405047.f_3++;
					if (!func_174(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_81(vParam0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_220(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_177(vParam0, fParam10))
			{
				Global_2405047.f_3++;
				if (!func_174(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405047.f_3++;
					if (!func_81(vParam0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_174(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x832B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x9EB17624F44A8DA4() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_129(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (!func_176(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
				{
					if (func_175(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_175(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x83AA
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = system::sin(fParam2);
	vVar0.y = system::cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(system::vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x8AE9E5E8F6DC40C9(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_176(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8436
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_177(vector3 vParam0, float fParam1)//Position - 0x84AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_129(iVar1)) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
		{
			if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && unk_0x917EE18109C5ACEA(iVar1) == -1) && !func_111(unk_0x9EB17624F44A8DA4(), 1))
			{
				return 0;
			}
			else if ((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && !unk_0x9EB17624F44A8DA4() == iVar1) || !func_176(unk_0x9EB17624F44A8DA4(), iVar1, -2, 0))
			{
				if (system::vdist(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x856A
{
	if ((Global_2405047.f_482 == 9 || Global_2405047.f_482 == 9) || (Global_2405047.f_482 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_179(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x85AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_129(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam7) && bParam4) && func_131(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_8(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x86A9
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_192(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1)) && iVar1 != unk_0x9EB17624F44A8DA4())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x917EE18109C5ACEA(iVar1) == iVar3)
					{
						if (unk_0xBE3C4023003180FC(func_8(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x876E
{
	if (((func_111(iParam0, 1) || func_183(iParam0)) || func_34(iParam0, 0)) || func_182(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x87AA
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_183(int iParam0)//Position - 0x87CD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

void func_184(vector3 vParam0, var uParam1, var uParam2)//Position - 0x87EE
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xC80D31E4B587871C(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < system::vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_186(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (system::vmag(*(uParam2[iVar0 /*10*/])) == 0f || system::vdist(vVar4, vParam0) < system::vdist(vVar5, vParam0))
			{
				Var3 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_185(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_185(var uParam0, var uParam1, int iParam2)//Position - 0x89D6
{
	Global_2412035 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_185(&Global_2412035, uParam1, iParam2 + 1);
	}
}

void func_186(var uParam0, var uParam1, int iParam2)//Position - 0x8A14
{
	Global_2412031 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_186(&Global_2412031, uParam1, iParam2 + 1);
	}
}

void func_187(var uParam0, var uParam1)//Position - 0x8A4E
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405047.f_2229 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2229)
		{
			if (func_188(Global_2405047.f_2230[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405047.f_2230[iVar0 /*4*/].f_3;
				if (system::vmag(*uParam1) > 0,01f)
				{
					vVar1 = { *uParam1 - Global_2405047.f_2230[iVar0 /*4*/] };
					fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
				}
				func_126(Global_2405047.f_2230[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405047.f_2458++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2847)
	{
		func_120(&(Global_2405047.f_2458.f_6[0 /*9*/]), &(Global_2405047.f_2458.f_6[1 /*9*/]), &(Global_2405047.f_2458.f_6[2 /*9*/]));
	}
}

int func_188(vector3 vParam0, var uParam1)//Position - 0x8B3B
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_72(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_72(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_189(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x8B98
{
	float fVar0;
	
	func_115(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0,5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0,5f);
}

var func_190()//Position - 0x8BEE
{
	return Global_1310987.f_4;
}

void func_191(var uParam0, var uParam1)//Position - 0x8BFC
{
	func_227();
	func_219(uParam0, uParam1);
}

bool func_192(int iParam0, int iParam1)//Position - 0x8C10
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_193(-1, 0) == 8;
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

int func_193(int iParam0, bool bParam1)//Position - 0x8C5B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_194();
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

int func_194()//Position - 0x8C9C
{
	return Global_1312736;
}

bool func_195(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x8CA8
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
	}
	return system::vdist(vParam0, vParam1) < (fParam2 + 0,01f);
}

void func_196(var uParam0, var uParam1, var uParam2)//Position - 0x8D5B
{
	if (Global_2405047.f_1721 > 0 && func_215(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_197(uParam0, uParam1, uParam2);
	}
}

void func_197(var uParam0, var uParam1, var uParam2)//Position - 0x8D8B
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!system::vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_94(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_214(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2,75f;
			fVar12 = 7,5f;
			break;
		
		default:
			fVar11 = 2,5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412045.f_162 = 0;
	Global_2412045.f_163 = 0;
	Global_2412045.f_164 = -99;
	Global_2412045.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412045.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_87(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xC35B067544C496CB(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x415CDAC83972AD02(iVar6))
		{
			unk_0x52854081FE5E271E(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412045.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412045.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x81B7CF786E5C8681(iVar6)) || unk_0xAEB36CE218651907(iVar6))
			{
				unk_0x77EC37553A5DBA63(vVar1, &uVar4, &uVar5);
				if (system::vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_165(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_213(vVar1))
									{
										vVar1 = { func_211(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (system::vmag(vVar1) > 0f)
										{
											if (!func_81(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_210(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_214(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (system::vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && system::vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_206(vVar1, fVar2, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_94(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0,375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_205(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_220(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_220(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_203(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_202(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162)
																										{
																											Global_2412045[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412045.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412045.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412045.f_162 == 0)
																									{
																										Global_2412045[0 /*3*/] = { vVar1 };
																										Global_2412045.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412045.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (system::vdist2(vVar1, uParam2->f_35) < system::vdist2(Global_2412045[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_201(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412045.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412045.f_162++;
																									if (Global_2412045.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412045[Global_2412045.f_162 /*3*/] = { vVar1 };
																									Global_2412045.f_121[Global_2412045.f_162] = fVar2;
																									Global_2412045.f_162++;
																									if (func_210(vVar1, uParam2))
																									{
																										Global_2412045.f_163++;
																									}
																									if (Global_2412045.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412045.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412045.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
					else
					{
						if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
						{
							func_199(0, uParam2);
						}
						iVar24 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412045[0 /*3*/] };
						uVar26 = Global_2412045.f_121[0];
						Global_2412045[0 /*3*/] = { Global_2412045[iVar24 /*3*/] };
						Global_2412045.f_121[0] = Global_2412045.f_121[iVar24];
						Global_2412045[iVar24 /*3*/] = { vVar25 };
						Global_2412045.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412045[0 /*3*/] };
						*uParam1 = Global_2412045.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_197(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x63A6486593EC7EC3((1 + iVar13), (40 + iVar13));
						unk_0x5C41B0B656C02102(*uParam0, iVar0, &vVar1, &fVar2, &iVar7, iVar3, fVar11, fVar12);
						vVar1 = { func_211(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, 0, 0, uParam2->f_51) };
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_94(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_214(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								func_197(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_197(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_198(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412045.f_164 = iVar6;
	}
}

void func_198(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x97FA
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = system::vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_170(*(uParam0[iVar2 /*4*/]), 5f, unk_0x9EB17624F44A8DA4(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_199(int iParam0, var uParam1)//Position - 0x987E
{
	if (!func_210(Global_2412045[iParam0 /*3*/], uParam1))
	{
		Global_2412045.f_162 = (Global_2412045.f_162 - 1);
		func_200(iParam0);
		if (Global_2412045.f_162 > Global_2412045.f_163)
		{
			func_199(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_199(iParam0 + 1, uParam1);
	}
}

void func_200(int iParam0)//Position - 0x98D9
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412045[iParam0 /*3*/] = { Global_2412045[iParam0 + 1 /*3*/] };
			Global_2412045.f_121[iParam0] = Global_2412045.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_201(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9924
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412045[iParam2 /*3*/] };
	uVar1 = Global_2412045.f_121[iParam2];
	Global_2412045[iParam2 /*3*/] = { vParam0 };
	Global_2412045.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412045.f_162 && iParam2 < 39)
	{
		if (system::vmag(vVar0) > 0f)
		{
			func_201(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_202(vector3 vParam0, float fParam1, float fParam2)//Position - 0x9991
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_130(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = system::vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_203(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x99F9
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam6 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_129(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && iParam8) && bParam5) && func_131(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iVar1), 0))
								{
									iVar3 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iVar1), 0);
									if (unk_0x6ADD12BF4D6D2587(iVar3) && !unk_0x191BE1BC8F26F3C1(iVar3, 0))
									{
										iVar4 = unk_0x82FF3DFBC3965CC0(iVar3);
										vVar5 = { unk_0xB3328BA8976B416C(iVar3, 0) };
										fVar6 = unk_0xF0371FE6E2BF9599(iVar3);
										if (func_204(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_82(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x9B6C
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_82(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_84(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_89(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_89(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0xE97272C977DEADD3((vVar3.x - vVar2.x)) * 0,5f), 0f, 0f };
	func_89(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0,5f * unk_0xE97272C977DEADD3((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_82(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_204(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9D26
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_204(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x87889570F3396ABD(vParam0, 30f, 0, iVar0);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		vVar3 = { unk_0xB3328BA8976B416C(iVar1, 0) };
		fVar4 = unk_0xF0371FE6E2BF9599(iVar1);
		if (func_204(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9E32
{
	if (func_209(vParam0, fParam1, iParam2, iParam3, iParam4) || func_207(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_207(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9E68
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_208(vParam0, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_204(vParam0, fParam1, iParam2, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416800.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_208(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x9F42
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_90(iParam1, 1008981770);
	fVar1 = func_90(iParam3, 1008981770);
	fVar2 = system::vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_209(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9F82
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2416800.f_261[iVar0])
				{
					if (func_82(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_82(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416800.f_261[iVar0])
			{
				if (func_82(Global_2416800.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
				{
					if (func_82(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_210(vector3 vParam0, var uParam1)//Position - 0xA091
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_195(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_114(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_211(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA122
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	
	if (bParam11)
	{
		if (system::vmag(vParam4) > 0f)
		{
			if (!func_212(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x77EC37553A5DBA63(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0xA72AB170F6ACDE36(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*bParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *bParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar4) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar5) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0,95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0,5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4,2f * -0,5f));
			}
			if (!iParam7 == 0)
			{
				func_84(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				if (fVar12 > 1,8f)
				{
					fVar7 = (fVar7 + ((fVar12 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (system::vmag(vParam4) > 0f)
	{
		if (!func_212(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4DDE76238079885E(vParam0, *fParam1, &vVar13))
		{
			vVar14 = { vVar13 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar15 = { vVar14 / FtoV(system::vmag(vVar14)) };
				func_84(iParam7, &fVar10, &fVar11, 1086324736, 1080033280, 1077936128);
				fVar12 = (fVar11 - fVar10);
				vVar15 = { vVar15 * FtoV((fVar12 * 0,5f)) };
				vVar14 = { vVar14 - vVar15 };
				vVar13 = { vParam0 + vVar14 };
			}
			vVar15 = { vVar0 - vVar13 };
			vVar0 = { vVar13 };
		}
	}
	return vVar0;
}

int func_212(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0xA541
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_89(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_77(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_213(vector3 vParam0)//Position - 0xA57D
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411759[iVar1])
	{
		if (func_79(vParam0, &(Global_2411056[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411759[8])
	{
		if (func_79(vParam0, &(Global_2411056[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_214(var uParam0, bool bParam1)//Position - 0xA5F8
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_195(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_114(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x8AE9E5E8F6DC40C9(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_101(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_215(var uParam0, var uParam1, var uParam2)//Position - 0xA6EA
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405047.f_1721 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!system::vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_94(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_214(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2412045.f_162 = 0;
		Global_2412045.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412045.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_216(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1721)
		{
			iVar1 = Global_2405047.f_2127[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405047.f_1722[iVar1 /*4*/] };
				fVar3 = Global_2405047.f_1722[iVar1 /*4*/].f_3;
				if (system::vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && system::vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && system::vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_206(vVar2, fVar3, uParam2->f_34, unk_0x9EB17624F44A8DA4(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_94(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0,375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0,375f);
												}
											}
										}
										bVar9 = false;
										if (!func_205(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_220(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_220(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_203(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_202(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162)
															{
																Global_2412045[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412045.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412045.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412045.f_162 == 0)
														{
															Global_2412045[0 /*3*/] = { vVar2 };
															Global_2412045.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412045.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (system::vdist2(vVar2, uParam2->f_35) < system::vdist2(Global_2412045[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_201(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412045.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
													else
													{
														Global_2412045[Global_2412045.f_162 /*3*/] = { vVar2 };
														Global_2412045.f_121[Global_2412045.f_162] = fVar3;
														Global_2412045.f_162++;
														if (Global_2412045.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1721;
															}
															else if (Global_2412045.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1721;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412045.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412045.f_163 > 0 && !Global_2412045.f_163 == Global_2412045.f_162)
				{
					func_199(0, uParam2);
				}
				iVar12 = unk_0x63A6486593EC7EC3(0, Global_2412045.f_162);
				vVar13 = { Global_2412045[0 /*3*/] };
				uVar14 = Global_2412045.f_121[0];
				Global_2412045[0 /*3*/] = { Global_2412045[iVar12 /*3*/] };
				Global_2412045.f_121[0] = Global_2412045.f_121[iVar12];
				Global_2412045[iVar12 /*3*/] = { vVar13 };
				Global_2412045.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412045[0 /*3*/] };
				*uParam1 = Global_2412045.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_215(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_197(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_216(vector3 vParam0)//Position - 0xAD3A
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1721)
	{
		uVar1 = func_217(vParam0, fVar0, &fVar0);
		Global_2405047.f_2127[iVar2] = uVar1;
		iVar2++;
	}
}

int func_217(vector3 vParam0, float fParam1, float fParam2)//Position - 0xAD75
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1721)
	{
		fVar2 = system::vdist2(vParam0, Global_2405047.f_1722[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_218(int iParam0)//Position - 0xADD7
{
	return iParam0 == 50;
}

void func_219(var uParam0, var uParam1)//Position - 0xADE4
{
	unk_0xC38F0D30350641A3(uParam0, uParam1, 0,1f);
	Global_2405047.f_2441 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_2439 = 1;
	Global_2405047.f_2442 = unk_0xD1952A425B78FFC0();
}

int func_220(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0xAE17
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_179(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_166(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_221()//Position - 0xAF28
{
	func_226();
	func_225();
	func_224();
	func_223();
	func_222();
}

void func_222()//Position - 0xAF44
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407922[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_223()//Position - 0xAF7C
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405047.f_2458.f_85[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_224()//Position - 0xAFAB
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405047.f_2458.f_52[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_225()//Position - 0xAFD9
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405047.f_2458.f_6[iVar1 /*9*/] = { Var0 };
		iVar1++;
	}
}

void func_226()//Position - 0xB015
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2458 = { Var0 };
}

void func_227()//Position - 0xB033
{
	if (Global_2405047.f_2439)
	{
		if (unk_0xBBA15366508D1BDE() == Global_2405047.f_2441)
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		else
		{
			unk_0xA97AB0E9B7AF96B6();
		}
		Global_2405047.f_2439 = 0;
	}
}

int func_228(bool bParam0)//Position - 0xB066
{
	if (unk_0x3E9CABD07B829173())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_229(int iParam0)//Position - 0xB089
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_230(int iParam0)//Position - 0xB0A7
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_49;
			break;
	}
	return 0;
}

int func_231()//Position - 0xB0C7
{
	if (iLocal_101 == 0)
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_232()//Position - 0xB0E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xC80D31E4B587871C(Local_95.f_2, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (unk_0x3930B0AA9F6A0C8C(false, 0) - unk_0x098390F4365DA157(0)) >= func_452(iLocal_101)
			{
				if (unk_0x7A419CA188B4A665(func_452(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x25D049AAC4603E65(iLocal_103);
					iVar3 = unk_0xD1A659E6867D8FF6(iVar2, &uLocal_284, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_452(iLocal_101))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x93C304998B457C45(Local_95.f_10[iVar1 /*7*/]) && !unk_0xC80D31E4B587871C(Local_95.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0xC80D31E4B587871C(Local_95.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0xC80D31E4B587871C(Local_95.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x6ADD12BF4D6D2587(uLocal_284[iVar0]))
								{
									if (!unk_0x191BE1BC8F26F3C1(uLocal_284[iVar0], 0))
									{
										if (!unk_0x1417A5CC924DE120(uLocal_284[iVar0]))
										{
											if (func_234(unk_0x82FF3DFBC3965CC0(uLocal_284[iVar0])))
											{
												if (!unk_0x9761C10D57B68069(uLocal_284[iVar0]))
												{
													if (!unk_0x88DDBE9908752BF0(uLocal_284[iVar0], 0))
													{
														if (func_5(unk_0xB3328BA8976B416C(uLocal_284[iVar0], 1), unk_0xB3328BA8976B416C(iVar2, 1), 625f))
														{
															unk_0xDD29FF4BAB8AFF9C(uLocal_284[iVar0], 1, 0);
															Local_95.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0xC80D31E4B587871C(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_452(iLocal_101))
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_10[iVar6 /*7*/].f_2, 1) || unk_0xC80D31E4B587871C(Local_95.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xC80D31E4B587871C(Local_95.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x191BE1BC8F26F3C1(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x9761C10D57B68069(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0xA0BF73C5030D3F60(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0xC8DAB4CEBB9AB263(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0x7346A36E01E18FEC(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 1);
							Local_95.f_10[iVar6 /*7*/] = unk_0xABF6E3937F555048(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							unk_0x9CE66BFF230839CE(Local_95.f_10[iVar6 /*7*/], 1);
							unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iVar6 /*7*/].f_2), 0);
							Local_95.f_10[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iVar6 /*7*/].f_4 = func_65(iLocal_101);
							func_63(iVar6);
							unk_0x0EE72DB1CD8A3B86(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_452(iLocal_101))
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_452(iLocal_101))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_233(&(Local_95.f_10[iVar6 /*7*/]));
					unk_0x0EE72DB1CD8A3B86(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x0EE72DB1CD8A3B86(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_233(var uParam0)//Position - 0xB4C6
{
	int iVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		iVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&iVar0);
	}
}

int func_234(int iParam0)//Position - 0xB4EA
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_235()//Position - 0xB7E8
{
	if (unk_0xC80D31E4B587871C(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_49 = func_236(Local_95.f_36, 1);
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_236(vector3 vParam0, int iParam1)//Position - 0xB837
{
	int iVar0;
	
	if (func_237(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_237(vParam0, 1100f, -196f, 300f, 350f, 0) || func_237(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_237(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_237(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_237(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_237(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_237(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = unk_0x63A6486593EC7EC3(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_237(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xB9F4
{
	return unk_0xBE3C4023003180FC(vParam0, vParam1, iParam3) <= fParam2;
}

void func_238(int iParam0)//Position - 0xBA0D
{
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
	}
	Local_95.f_36 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	if (func_239(iParam0, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 17);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_95.f_1), 17);
	}
}

int func_239(int iParam0, int iParam1)//Position - 0xBA4C
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) || iParam1)
		{
			if (unk_0x0BA31FF7931F3DD3(iParam0))
			{
				if (unk_0x8AA8CAD184F4332C(iParam0) >= 0,7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_240()//Position - 0xBA8D
{
	bool bVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (unk_0xC80D31E4B587871C(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (system::vdist2(func_8(iLocal_103), Local_95.f_39) > 625f)
							{
								unk_0x0EE72DB1CD8A3B86(&(Local_95.f_2), 11);
								unk_0x0EE72DB1CD8A3B86(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_243())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_58();
						}
						else
						{
							func_59();
						}
						if (unk_0xC80D31E4B587871C(Local_95.f_1, 5))
						{
							if (func_242())
							{
								func_59();
								unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_241())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_58();
					}
					else
					{
						func_59();
					}
					if (unk_0xC80D31E4B587871C(Local_95.f_1, 5))
					{
						if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_5) > 30000)
						{
							func_59();
							unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_241()//Position - 0xBBB2
{
	int iVar0;
	
	iVar0 = unk_0x25D049AAC4603E65(iLocal_103);
	if (((((unk_0x0ACC2116170FA204(iVar0) || unk_0x0BA31FF7931F3DD3(iVar0)) || func_29(iLocal_103, 1, 0)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_111(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1595693[iLocal_103 /*680*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_242()//Position - 0xBC39
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_1, 18))
	{
		if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_5) > 5000)
		{
			unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_243()//Position - 0xBC88
{
	int iVar0;
	
	iVar0 = unk_0x25D049AAC4603E65(iLocal_103);
	if (((((((((unk_0x90D5DFB054818BA7(iVar0) > 10f || unk_0x0ACC2116170FA204(iVar0)) || unk_0x0BA31FF7931F3DD3(iVar0)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2422736[iLocal_103 /*420*/].f_253) || func_56(unk_0x25D049AAC4603E65(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (func_111(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1595693[iLocal_103 /*680*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != -1)
	{
		if (unk_0xC80D31E4B587871C(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_244()//Position - 0xBD72
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 14);
	}
}

void func_245()//Position - 0xBD99
{
	if (Local_95.f_44 != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_44 = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_246()//Position - 0xBDBE
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_1, 10))
	{
		Local_95.f_45 = func_452(iLocal_101);
		Local_95.f_46 = 0;
		Local_95.f_47 = 0;
		unk_0x872F1C1F8587CCC7(&(Local_95.f_1), 10);
	}
}

void func_247()//Position - 0xBDF3
{
	func_248();
	if (!unk_0xC80D31E4B587871C(Local_95.f_1, 8))
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_2, 7))
		{
			if (unk_0x38F6270C9AE5FE40(iLocal_106, Local_95.f_7) > 300000)
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_248()//Position - 0xBE35
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 7);
	}
}

void func_249()//Position - 0xBE5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 1))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 2))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 3))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 9))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 4))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 5))
	{
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 11))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
			}
			else if (func_354("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 6))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
			}
			else if (func_354("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 7))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
			if (func_325())
			{
				if (!Local_95.f_50)
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_324(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_320(12);
					}
					if (iLocal_285 > 0)
					{
						func_318(iLocal_285, 1, 0, 0f);
						func_306(iLocal_285, 4, 1, 1);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 0))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
			{
				unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
				if (func_354("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
			}
		}
		else if (unk_0x9EB17624F44A8DA4() == iLocal_103)
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_2, 1))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_2, 12))
				{
					iVar0 = system::round((IntToFloat(Global_262145.f_6033) * Global_262145.f_4293));
					func_265(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_251(47, 1);
				}
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 8))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
			if (func_325())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_320(2) * func_452(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_324(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_320(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_318(iLocal_285, 1, 0, 0f);
						func_306(iLocal_285, iVar1, 1, 0);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xC80D31E4B587871C(Local_95.f_3, 10))
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 7);
			if (func_325())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_320(2) * func_452(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_324(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_320(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_318(iLocal_285, 1, 0, 0f);
						func_306(iLocal_285, iVar2, 1, 0);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_98, 7))
	{
		func_250();
	}
}

void func_250()//Position - 0xC1B3
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0xF19B3230511B7F9F() /*680*/].f_143), iLocal_101);
	Global_1595693[unk_0xF19B3230511B7F9F() /*680*/].f_144 = -1;
	if (iLocal_101 == 1)
	{
		if (unk_0xDB01A42DFF6FB273(uLocal_283))
		{
			unk_0x241EE3366006220F(uLocal_283);
		}
	}
	func_481();
	func_513();
}

int func_251(int iParam0, int iParam1)//Position - 0xC1FD
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_252(iParam0, iParam1);
}

int func_252(int iParam0, int iParam1)//Position - 0xC218
{
	if (func_264(14) && !func_263(iParam0))
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
	if (func_262(&Global_4267379))
	{
		if (func_260(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_253(&Global_4267379, iParam0))
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

int func_253(var uParam0, int iParam1)//Position - 0xC2B5
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_264(14) && !func_263(iParam1))
	{
		return 0;
	}
	if (func_260(uParam0, iParam1))
	{
		return 0;
	}
	if (func_259(uParam0) < 0f)
	{
		func_258(uParam0, 0);
	}
	func_256(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_254(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_254(var uParam0, int iParam1)//Position - 0xC366
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_264(14) && !func_263(iParam1))
	{
		return 0;
	}
	if (func_260(uParam0, iParam1))
	{
		return 0;
	}
	if (func_259(uParam0) < 0f)
	{
		func_258(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_255(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_255(var uParam0, int iParam1)//Position - 0xC3E1
{
	return (*uParam0)[iParam1] == 78;
}

void func_256(var uParam0)//Position - 0xC3F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_257(uParam0, iVar0);
		iVar0++;
	}
	func_258(uParam0, (Global_4267378 - 0,5f));
}

void func_257(var uParam0, int iParam1)//Position - 0xC426
{
	(*uParam0)[iParam1] = 78;
}

void func_258(var uParam0, float fParam1)//Position - 0xC436
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

float func_259(var uParam0)//Position - 0xC453
{
	return uParam0->f_80;
}

bool func_260(var uParam0, int iParam1)//Position - 0xC45F
{
	return func_261(uParam0, iParam1) != -1;
}

int func_261(var uParam0, int iParam1)//Position - 0xC471
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

bool func_262(var uParam0)//Position - 0xC49E
{
	return uParam0->f_79 == 1;
}

int func_263(int iParam0)//Position - 0xC4AC
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

bool func_264(int iParam0)//Position - 0xC4FC
{
	return Global_35861 == iParam0;
}

var func_265(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC50A
{
	return func_266(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_266(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC526
{
	var uVar0;
	
	uVar0 = func_267(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_267(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC549
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_305(unk_0x9EB17624F44A8DA4()) || func_304(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_302() || func_300(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_299(sParam2))
	{
	}
	if (func_298())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_296(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_295(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_293(0, &iVar1);
					break;
				
				case 3:
					func_293(1, &iVar1);
					break;
				
				case 1:
					func_291(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_288(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_277((func_287(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_288(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_272(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_268((func_270(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_268((func_270(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_268(int iParam0)//Position - 0xC747
{
	if (func_298())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_269(joaat("mpply_globalxp"), iParam0);
	}
}

void func_269(int iParam0, int iParam1)//Position - 0xC772
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_270(int iParam0)//Position - 0xC78E
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_271(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_271(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_271(int iParam0)//Position - 0xC7DF
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_272(int iParam0)//Position - 0xC7FD
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_133(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_275(func_276(&Var0));
			if (iVar1 == 0)
			{
				func_274(&Global_1368098, iParam0);
				func_273(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_274(&Global_1368099, iParam0);
				func_273(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_274(&Global_1368100, iParam0);
				func_273(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_274(&Global_1368101, iParam0);
				func_273(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_274(&Global_1368102, iParam0);
				func_273(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_273(int iParam0, int iParam1)//Position - 0xC8D1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_274(var uParam0, int iParam1)//Position - 0xC9F6
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_275(int iParam0)//Position - 0xCA07
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_276(var uParam0)//Position - 0xCA64
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_277(int iParam0, int iParam1, int iParam2)//Position - 0xCA87
{
	if (func_298())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_286(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_286(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_285(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_283(iParam0, 1);
		}
		func_282(636, iParam0, -1, 1);
		func_281(637, func_283(iParam0, 1), -1, 1, 0);
		Global_1368213[func_286(-1)] = iParam0;
		func_278(7, 0);
	}
}

void func_278(int iParam0, int iParam1)//Position - 0xCBA8
{
	int iVar0;
	
	if (func_280(iParam0, iParam1))
	{
		iVar0 = func_279();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_279()//Position - 0xCBCB
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

int func_280(int iParam0, var uParam1)//Position - 0xCC00
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

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xCC86
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_286(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCCB6
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_286(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_286(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_286(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_286(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_286(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_286(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_286(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_286(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_286(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_286(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_286(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_286(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_286(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_286(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_286(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_286(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_286(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_286(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_286(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_286(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_286(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_286(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_286(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_286(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_286(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_286(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_286(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_286(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_286(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_286(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_286(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_286(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_286(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_283(int iParam0, bool bParam1)//Position - 0xD381
{
	if (bParam1)
	{
	}
	return func_284(iParam0, 0);
}

int func_284(int iParam0, int iParam1)//Position - 0xD395
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_285(int iParam0)//Position - 0xD454
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

int func_286(int iParam0)//Position - 0xD479
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_194();
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

int func_287(int iParam0)//Position - 0xD4AD
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_286(-1)];
			}
			else if (func_285(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_286(-1)];
	}
	return 0;
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0xD50A
{
	int iVar0;
	
	iVar0 = func_290(iParam0, func_286(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_289(iParam0))
	{
		func_281(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_282(iParam0, iVar0, iParam2, 1);
	}
}

int func_289(int iParam0)//Position - 0xD54C
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)//Position - 0xD702
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_286(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_291(int iParam0)//Position - 0xD734
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_135(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_134(unk_0x9EB17624F44A8DA4(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_292(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_292(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_292(int iParam0, int iParam1)//Position - 0xD81F
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_293(bool bParam0, int iParam1)//Position - 0xD840
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_134(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_294(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_134(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_292(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_292(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_294(int iParam0, int iParam1)//Position - 0xD958
{
	return system::vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_295(int iParam0)//Position - 0xD974
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_292(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_296(int iParam0)//Position - 0xD9AB
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_287(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_287(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_297(8000, 0, 0) > 0)
	{
		if (func_297(8000, 0, 0) < (iParam0 + func_287(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_297(8000, 0, 0) - func_287(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_297(int iParam0, bool bParam1, int iParam2)//Position - 0xDA0F
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_285062[iParam0];
}

int func_298()//Position - 0xDA37
{
	return 1;
}

int func_299(char* sParam0)//Position - 0xDA40
{
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(sParam0, "") || unk_0x74C475EB8E73D398(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)//Position - 0xDA78
{
	return func_301(func_33(iParam0));
}

int func_301(int iParam0)//Position - 0xDA8A
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_302()//Position - 0xDAA4
{
	if (unk_0x4916190900E76373())
	{
		return func_169();
	}
	return func_303(Global_4456448.f_122309);
}

int func_303(int iParam0)//Position - 0xDAC8
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_304(int iParam0)//Position - 0xDB02
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_305(int iParam0)//Position - 0xDB17
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_306(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDB2C
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_317(iParam1), 16);
	StringCopy(&Var1, func_316(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_46())
	{
		func_307(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4261865[iVar3 /*80*/].f_8.f_43 = { Var0 };
		Global_4261865[iVar3 /*80*/].f_8.f_47 = { Var1 };
	}
	else
	{
		unk_0xB55903868EC9248F(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_307(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDCA8
{
	int iVar0;
	
	if (!func_46())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_308(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_308(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_308(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE132
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_194()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_315(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_314(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_309(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE2D6
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_310(iParam0);
	}
}

void func_310(int iParam0)//Position - 0xE30E
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_313(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_311(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_311(var uParam0)//Position - 0xE360
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_312(&(uParam0->f_8.f_3));
	func_312(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_312(var uParam0)//Position - 0xE456
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_313(int iParam0)//Position - 0xE49E
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_314(int iParam0, int iParam1)//Position - 0xE4C6
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_315(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xE4DA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_46())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = iParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_316(int iParam0)//Position - 0xE5D3
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_317(int iParam0)//Position - 0xE65D
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

void func_318(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xE73D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_4 = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 = (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_319(iVar1, 0);
	}
}

void func_319(int iParam0, bool bParam1)//Position - 0xE7C0
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_320(int iParam0)//Position - 0xE7D1
{
	int iVar0;
	
	iVar0 = 0;
	if (func_323(iParam0) >= 0)
	{
		iVar0 = func_323(iParam0);
	}
	else
	{
		iVar0 = func_321(iParam0);
	}
	return iVar0;
}

int func_321(int iParam0)//Position - 0xE7FB
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_322())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return 200;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return 400;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return 600;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return 800;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_322()//Position - 0xE9FE
{
	return unk_0xC80D31E4B587871C(func_290(6407, -1, 0), 19);
}

int func_323(int iParam0)//Position - 0xEA15
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6036;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (func_322())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return Global_262145.f_6043;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return Global_262145.f_6044;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return Global_262145.f_6045;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return Global_262145.f_6046;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
			{
				return Global_262145.f_6047;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_6612;
			break;
		
		case 15:
			return Global_262145.f_6037;
			break;
		
		case 17:
			return Global_262145.f_6037;
			break;
		
		case 18:
			return Global_262145.f_6037;
			break;
		
		case 19:
			return Global_262145.f_6037;
			break;
		
		case 21:
			return Global_262145.f_6037;
			break;
		
		case 36:
			return Global_262145.f_7077;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12212;
			break;
		
		case 41:
			return Global_262145.f_12213;
			break;
		
		case 42:
			return Global_262145.f_12214;
			break;
		
		case 43:
			return Global_262145.f_14755;
			break;
		
		case 44:
			return Global_262145.f_14757;
			break;
	}
	return 0;
}

int func_324(int iParam0)//Position - 0xECD4
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_22728;
		
		case 2:
			return Global_262145.f_22729;
		
		case 3:
			return Global_262145.f_22730;
		
		default:
	}
	return 9999999;
}

int func_325()//Position - 0xED17
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_50 || Local_95.f_52)
	{
		if (!Local_95.f_51)
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_3, 7))
			{
				func_326("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_354(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_326(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xEDA5
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x917EE18109C5ACEA(iParam1);
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var2))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		if ((iVar1 != -1 && unk_0x4916190900E76373()) && iVar1 < 4)
		{
			if (Global_4456448.f_117386[iVar1] != -1)
			{
				unk_0xF92B835A141C6BDD(func_352(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xF92B835A141C6BDD(func_334(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xF92B835A141C6BDD(func_334(iParam1, -2, 1, 0));
		}
		unk_0x854FACC4E5F40C82(func_332(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x65F0733C4A64907A(0, 1);
		}
		else
		{
			Global_2492157 = { func_133(iParam1) };
			if (unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157))
			{
				iVar3 = 0;
				if (unk_0x74C475EB8E73D398(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2492087.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_331(&Var2) };
					}
					iVar0 = unk_0x679630D62246D8FF(iVar4, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar3, 0, Global_2492087, &Var2, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = unk_0xFEAF1A64BAF2011F(iVar4, unk_0x12D16CE3923A2F1B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar3, 0, Global_2492087, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = unk_0x65F0733C4A64907A(0, 1);
			}
		}
		func_327(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_327(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xEF63
{
	int iVar0;
	
	if ((!func_330() || !unk_0x4916190900E76373()) || !func_192(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_328(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_328(int iParam0)//Position - 0xF06B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_329(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_329(int iParam0)//Position - 0xF0CD
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_330()//Position - 0xF106
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

struct<16> func_331(char* sParam0)//Position - 0xF117
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_332(char* sParam0)//Position - 0xF142
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_333(&cVar0);
}

var func_333(char[4] cParam0)//Position - 0xF166
{
	return cParam0;
}

int func_334(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xF170
{
	int iVar0;
	int iVar1;
	
	if (func_136(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_136(unk_0x9EB17624F44A8DA4()) || (func_351() && func_350())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_349();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_6(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_352(iParam1, iParam0, 0);
							}
							else
							{
								return func_341(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_341(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_352(iParam1, iParam0, 0);
				}
				else
				{
					return func_335(0, -1, 0);
				}
			}
			else
			{
				return func_335(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_352(iParam1, iParam0, 0);
		}
		else
		{
			return func_341(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_341(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_335(bool bParam0, int iParam1, bool bParam2)//Position - 0xF340
{
	return func_336(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_336(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xF356
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_135(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_340(1);
				}
				else
				{
					return func_340(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_337(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_337(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_340(1);
	}
	return func_340(0);
}

int func_337(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xF41A
{
	int iVar0;
	
	iVar0 = func_339(iParam0, iParam1, iParam3);
	if (func_338(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_338(int iParam0)//Position - 0xF531
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_339(int iParam0, int iParam1, int iParam2)//Position - 0xF56A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_135(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_340(bool bParam0)//Position - 0xF5B1
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xF5C8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_346(1))
			{
				iVar3 = func_345(iParam0);
				if (!iVar3 == -1)
				{
					return func_343(iVar3);
				}
			}
			if ((func_176(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_135(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_340(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_342(1);
			}
			else
			{
				return func_336(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_340(1);
			}
			else
			{
				return func_336(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_345(iParam0);
	if (!iVar4 == -1)
	{
		return func_343(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_342(bool bParam0)//Position - 0xF76C
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_343(int iParam0)//Position - 0xF783
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_344(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_344(int iParam0)//Position - 0xF846
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_345(int iParam0)//Position - 0xF85D
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_346(int iParam0)//Position - 0xF88F
{
	if ((func_348() || func_347()) || (func_169() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_347()//Position - 0xF8BE
{
	return Global_2447174.f_15;
}

var func_348()//Position - 0xF8CC
{
	return Global_2447174.f_14;
}

var func_349()//Position - 0xF8DA
{
	return Global_2359302.f_2;
}

bool func_350()//Position - 0xF8E8
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_351()//Position - 0xF8F9
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_352(int iParam0, int iParam1, bool bParam2)//Position - 0xF916
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_346(1))
	{
		iVar2 = func_345(iParam1);
		if (!iVar2 == -1)
		{
			return func_343(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_336(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_353(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_353(int iParam0)//Position - 0xFA7B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_354(char* sParam0, char* sParam1, int iParam2)//Position - 0xFB50
{
	if (!unk_0x74C475EB8E73D398(sParam0, "NULL"))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_100, 0))
		{
			func_451(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_356(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_100, 0);
			}
		}
		else if (!unk_0xC80D31E4B587871C(iLocal_100, 1))
		{
			if (func_355(0))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_100, 1);
			}
		}
		else if (!func_355(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0xFBCD
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

int func_356(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xFC27
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_449())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_357(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_357(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xFC6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam3))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
	iVar1 = func_447(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		iVar2 = unk_0x8B948C59217A295D(sParam7);
	}
	if (func_446(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_441(iParam6))
	{
		return 0;
	}
	if (func_438(iVar0, iVar1, iVar2))
	{
		if (func_437())
		{
			return 0;
		}
		func_436();
		return func_364(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_363(iParam4))
	{
		return 0;
	}
	func_358(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_358(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFD51
{
	Global_1351013.f_40.f_1 = iParam0;
	Global_1351013.f_40.f_2 = iParam1;
	Global_1351013.f_40.f_3 = iParam2;
	StringCopy(&(Global_1351013.f_40.f_4), sParam3, 16);
	Global_1351013.f_40.f_8 = iParam4;
	Global_1351013.f_40.f_9 = iParam5;
	Global_1351013.f_40.f_14 = iParam6;
	func_359(iParam4);
	func_436();
	Global_1351013.f_40.f_13 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 7000);
}

void func_359(int iParam0)//Position - 0xFDBE
{
	if (func_362(iParam0))
	{
		func_361();
		return;
	}
	func_360();
}

void func_360()//Position - 0xFDDA
{
	Global_1351013.f_40.f_10 = 0;
}

void func_361()//Position - 0xFDEB
{
	Global_1351013.f_40.f_10 = 1;
}

int func_362(int iParam0)//Position - 0xFDFC
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_363(int iParam0)//Position - 0xFE44
{
	return iParam0 > Global_1351013.f_40.f_8;
}

int func_364(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xFE57
{
	struct<2> Var0;
	
	func_435();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_432(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_429(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_432(uParam0, sParam3, sParam4);
		}
		return func_412(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_411(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_401(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_400(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_365(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_365(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFF51
{
	bool bVar0;
	
	func_399();
	bVar0 = true;
	if (func_367(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_366(120000);
		return 1;
	}
	return 0;
}

void func_366(int iParam0)//Position - 0xFF88
{
	Global_1351013.f_40.f_11 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam0);
	Global_1351013.f_40.f_12 = 1;
}

int func_367(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xFFAB
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_393(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_392(sParam5, bParam6, &iVar3);
	uVar5 = func_390(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xC80D31E4B587871C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
	{
		bVar12 = func_389(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_371(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(iParam4, 0))
	{
		func_370();
	}
	func_399();
	func_369();
	func_368();
	return 1;
}

void func_368()//Position - 0x100FF
{
	Global_1351013.f_57 = 0;
	Global_1351013.f_57.f_1 = 0;
}

void func_369()//Position - 0x10117
{
	Global_1351013.f_40 = 3;
}

void func_370()//Position - 0x10126
{
	unk_0x872F1C1F8587CCC7(&Global_2323, 8);
}

int func_371(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x10137
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_372(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_372(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x101A3
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_383();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_4267128 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_382() == 0)
	{
		func_380();
		return 0;
	}
	func_379(Global_4267127);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/]), sParam1, 64);
	Global_4265878[Global_4267127 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4265878[Global_4267127 /*104*/].f_24 = iParam2;
	}
	Global_4265878[Global_4267127 /*104*/].f_25 = iParam7;
	Global_4265878[Global_4267127 /*104*/].f_26 = uParam8;
	Global_4265878[Global_4267127 /*104*/].f_29 = uParam9;
	Global_4265878[Global_4267127 /*104*/].f_30 = uParam12;
	Global_4265878[Global_4267127 /*104*/].f_31 = uParam11;
	Global_4265878[Global_4267127 /*104*/].f_28 = 0;
	Global_4265878[Global_4267127 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_33), sParam4, 64);
	Global_4265878[Global_4267127 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_50), sParam5, 64);
	Global_4265878[Global_4267127 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_83), sParam15, 64);
	func_383();
	switch (iParam16)
	{
		case 3:
			Global_4265878[Global_4267127 /*104*/].f_99[Global_14453] = 1;
			break;
		
		case 0:
			Global_4265878[Global_4267127 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4265878[Global_4267127 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4265878[Global_4267127 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14453)
		{
			case 0:
				func_378(0);
				break;
			
			case 1:
				func_378(1);
				break;
			
			case 2:
				func_378(2);
				break;
			
			case 3:
				func_378(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4267128 = 1;
				break;
			
			case 0:
				Global_4267128 = 1;
				break;
			
			case 2:
				Global_4267128 = 1;
				break;
			
			case 1:
				Global_4267128 = 1;
				break;
			}
	}
	Global_16825[Global_4267127] = 0;
	if (bParam10)
	{
		func_383();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_377())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_376(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_373(1);
			func_376(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_373(int iParam0)//Position - 0x10566
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_264(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_375(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_374(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_374(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x10B0C
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_375(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_375(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_375(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_375(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_375(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_375(char* sParam0)//Position - 0x10BBF
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_376(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x10BD1
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

bool func_377()//Position - 0x10C34
{
	return Global_1312854;
}

void func_378(int iParam0)//Position - 0x10C40
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_379(int iParam0)//Position - 0x10C5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x2F31FD7674CB6CD3();
	iVar1 = unk_0x95327550F0F2BE7C();
	iVar2 = unk_0x674C9438180770FE();
	iVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	iVar5 = unk_0x93F322D6E98835CC();
	Global_4265878[iParam0 /*104*/].f_18 = iVar0;
	Global_4265878[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4265878[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4265878[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4265878[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4265878[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_380()//Position - 0x10CDF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_381(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
		{
			Global_4267127 = iVar2;
		}
		iVar2++;
	}
	Global_4265878[Global_4267127 /*104*/].f_24 = 1;
}

int func_381(struct<6> Param0, struct<6> Param1)//Position - 0x10D89
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_382()//Position - 0x10E74
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267127 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0 || Global_4265878[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_381(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
			{
				Global_4267127 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267127 == 11)
	{
		return 0;
	}
	Global_4265878[Global_4267127 /*104*/].f_99[0] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[1] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[2] = 0;
	return 1;
}

void func_383()//Position - 0x10F9F
{
	if (func_264(14))
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
		Global_14453 = func_384();
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

var func_384()//Position - 0x11041
{
	func_385();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_385()//Position - 0x1105A
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_388(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_387(unk_0xFC1458A37D98B502());
			if (func_386(iVar0) && (!func_264(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_386(Global_104555.f_2353.f_539.f_4301))
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

bool func_386(int iParam0)//Position - 0x11157
{
	return iParam0 < 3;
}

int func_387(int iParam0)//Position - 0x11163
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_388(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_388(int iParam0)//Position - 0x111A0
{
	if (func_386(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_389(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x111CA
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_372(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_390(int iParam0, int iParam1)//Position - 0x1124C
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_391(2, iParam1);
	return iParam0;
}

void func_391(int iParam0, var uParam1)//Position - 0x1126B
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_392(char* sParam0, bool bParam1, int iParam2)//Position - 0x1131C
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x74C475EB8E73D398(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_391(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xB2E1B414DD88808E(sParam0);
}

int func_393(int iParam0)//Position - 0x11359
{
	int iVar0;
	
	iVar0 = func_396(iParam0);
	if (iVar0 == -1)
	{
		func_394(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_394(int iParam0, bool bParam1)//Position - 0x1138F
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_396(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_395(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_395(int iParam0)//Position - 0x113FB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x1142D
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_397(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_397(int iParam0)//Position - 0x114AC
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_398(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_398(var uParam0)//Position - 0x11562
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

void func_399()//Position - 0x1158F
{
	Global_1351013.f_40.f_9 = 4;
}

int func_400(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x115A0
{
	bool bVar0;
	
	func_399();
	bVar0 = false;
	return func_367(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_401(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x115C7
{
	bool bVar0;
	
	bVar0 = false;
	return func_402(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_402(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x115EA
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_393(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16817 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_392(sParam5, bParam6, &iVar3);
	uVar5 = func_390(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xC80D31E4B587871C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
	{
		bVar12 = func_410(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_404(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(iParam4, 0))
	{
		func_370();
	}
	func_403();
	func_369();
	func_368();
	return 1;
}

void func_403()//Position - 0x11741
{
	Global_1351013.f_40.f_9 = 3;
}

int func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x11752
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_405(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_405(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x117EA
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_383();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_409() == 0)
	{
		func_407();
		return 0;
	}
	func_406(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_378(0);
		func_378(2);
		func_378(1);
	}
	else
	{
		func_383();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_378(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_378(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_378(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_378(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_383();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_377())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_376(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_373(1);
			func_376(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_406(int iParam0)//Position - 0x11CA1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x2F31FD7674CB6CD3();
	iVar1 = unk_0x95327550F0F2BE7C();
	iVar2 = unk_0x674C9438180770FE();
	iVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	iVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = iVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_407()//Position - 0x11D33
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_408(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_408(struct<6> Param0, struct<6> Param1)//Position - 0x11DFE
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_409()//Position - 0x11EE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_408(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

int func_410(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x12051
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 3;
	if (func_405(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x12106
{
	bool bVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	func_403();
	bVar0 = true;
	if (func_402(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_366(120000);
		return 1;
	}
	return 0;
}

int func_412(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x12158
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xC80D31E4B587871C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xC80D31E4B587871C(iParam4, 4))
	{
		bVar0 = func_428(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_418(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xC80D31E4B587871C(iParam4, 3))
		{
			func_417(1);
		}
		if (unk_0xC80D31E4B587871C(iParam4, 5))
		{
			func_416(1);
		}
		func_415();
		func_369();
		func_414();
		func_413();
		return 1;
	}
	return 0;
}

void func_413()//Position - 0x121FB
{
	Global_2521200 = 0;
}

void func_414()//Position - 0x12208
{
	Global_1351013.f_57 = 1;
	Global_1351013.f_57.f_1 = 0;
}

void func_415()//Position - 0x12220
{
	Global_1351013.f_40.f_9 = 1;
}

void func_416(int iParam0)//Position - 0x12231
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2325, 0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
	}
}

void func_417(int iParam0)//Position - 0x12252
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
	}
}

int func_418(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12275
{
	func_427(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_419(sParam3, iParam4, bParam7);
}

int func_419(char* sParam0, int iParam1, bool bParam2)//Position - 0x122C3
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
					func_426();
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
		if (func_425(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_424();
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
				func_383();
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
				if (func_423())
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
			if (func_422())
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
			func_421();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_420();
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
		func_426();
	}
	return 0;
}

void func_420()//Position - 0x1258F
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

void func_421()//Position - 0x125C0
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

int func_422()//Position - 0x12655
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_423()//Position - 0x1267C
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

void func_424()//Position - 0x12715
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

bool func_425(int iParam0, int iParam1)//Position - 0x1276C
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

void func_426()//Position - 0x127A7
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

void func_427(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x127FE
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

int func_428(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12854
{
	func_427(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_419(sParam3, iParam4, bParam7);
}

int func_429(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x128A2
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (func_431(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_430();
		func_415();
		func_369();
		func_414();
		func_413();
		return 1;
	}
	return 0;
}

void func_430()//Position - 0x128F4
{
	Global_16774 = 0;
}

bool func_431(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x12900
{
	func_427(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 1;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 1;
	Global_15810 = 0;
	StringCopy(&Global_15904, sParam5, 24);
	Global_2621441 = 0;
	return func_419(sParam3, iParam4, bParam8);
}

int func_432(var uParam0, char* sParam1, char* sParam2)//Position - 0x12955
{
	if (func_434(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_433();
		func_369();
		func_414();
		return 1;
	}
	return 0;
}

void func_433()//Position - 0x12980
{
	Global_1351013.f_40.f_9 = 2;
}

bool func_434(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12991
{
	func_427(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_419(sParam2, iParam3, 0);
}

void func_435()//Position - 0x129DF
{
	Global_1351013.f_55 = Global_1351013.f_40.f_1;
	Global_1351013.f_55.f_1 = Global_1351013.f_40.f_10;
}

void func_436()//Position - 0x12A05
{
	Global_1351013.f_40 = 1;
}

bool func_437()//Position - 0x12A14
{
	return Global_1351013.f_40 == 1;
}

int func_438(int iParam0, int iParam1, int iParam2)//Position - 0x12A24
{
	if (!func_439(iParam0))
	{
		return 0;
	}
	if (Global_1351013.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1351013.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_439(int iParam0)//Position - 0x12A63
{
	if (!func_440())
	{
		return 0;
	}
	if (!Global_1351013.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_440()//Position - 0x12A8B
{
	if (Global_1351013.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_441(int iParam0)//Position - 0x12AA2
{
	if (func_445())
	{
		return 0;
	}
	if (func_444())
	{
		return 0;
	}
	if (func_355(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1655673 || func_443())
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(iParam0, 6))
	{
		if (func_442())
		{
			return 0;
		}
	}
	return 1;
}

bool func_442()//Position - 0x12B06
{
	return unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1367897);
}

int func_443()//Position - 0x12B1A
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_444()//Position - 0x12B32
{
	return Global_1351013.f_40 == 3;
}

bool func_445()//Position - 0x12B42
{
	return func_422();
}

int func_446(int iParam0, int iParam1, int iParam2)//Position - 0x12B4E
{
	if (!func_444())
	{
		return 0;
	}
	return func_438(iParam0, iParam1, iParam2);
}

int func_447(char* sParam0, char* sParam1)//Position - 0x12B6C
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x8B948C59217A295D(&cVar0);
}

bool func_448()//Position - 0x12B86
{
	return Global_2518688.f_1;
}

int func_449()//Position - 0x12B94
{
	if (Global_1351201.f_2)
	{
		return 1;
	}
	return func_450();
}

bool func_450()//Position - 0x12BAD
{
	return func_445();
}

void func_451(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x12BB9
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

int func_452(int iParam0)//Position - 0x12C54
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_453(var uParam0)//Position - 0x12C71
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_454(var uParam0)//Position - 0x12C9A
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_455(uParam0, 0, 0);
		}
	}
}

void func_455(var uParam0, bool bParam1, bool bParam2)//Position - 0x12CB9
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_456()//Position - 0x12CFE
{
	if (unk_0x918CA1BFFAA03556(Local_95.f_10[iLocal_109 /*7*/]) && !unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_95.f_10[iLocal_109 /*7*/]), 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (func_5(unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_95.f_10[iLocal_109 /*7*/]), 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 50625f))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_98, 4))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_98, 4);
				}
			}
			else if (!unk_0xC80D31E4B587871C(iLocal_98, 5))
			{
				if (Local_95.f_42 != -1)
				{
					if (iLocal_109 == Local_95.f_42)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_98, 5))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_457(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_452(iLocal_101))
	{
		if ((!unk_0xC80D31E4B587871C(iLocal_98, 4) && unk_0xC80D31E4B587871C(Local_95.f_1, 8)) || unk_0xC80D31E4B587871C(iLocal_98, 5))
		{
			if (!unk_0xC80D31E4B587871C(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1, 1))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 1);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_98, 4);
		unk_0x0EE72DB1CD8A3B86(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_457(int iParam0)//Position - 0x12E4A
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0x93C304998B457C45(Local_95.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (unk_0x9EB17624F44A8DA4() == iLocal_103)
			{
				if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_99[iParam0], 0))
				{
					unk_0x872F1C1F8587CCC7(&Global_1573336, 0);
					unk_0x872F1C1F8587CCC7(&(iLocal_99[iParam0]), 0);
				}
				if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (unk_0xC80D31E4B587871C(iLocal_99[iParam0], 1))
				{
					unk_0x0EE72DB1CD8A3B86(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0x93C304998B457C45(Local_95.f_10[iParam0 /*7*/]))
			{
				if (!unk_0xE53FD7AF7F25C0A8(Local_95.f_10[iParam0 /*7*/]))
				{
					unk_0x04092215B40E1262(Local_95.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0xE53FD7AF7F25C0A8(Local_95.f_10[iParam0 /*7*/]))
		{
			if (unk_0x9EB17624F44A8DA4() == iLocal_102)
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 9) && !unk_0xC80D31E4B587871C(iLocal_99[iParam0], 1))
				{
					if (unk_0xEAE48EEC14DB2663(iVar0, unk_0x9EB17624F44A8DA4()))
					{
						switch (Local_95.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_480(iVar0, 3);
								break;
						}
						unk_0x872F1C1F8587CCC7(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
			{
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x2217C45231E6A537(iVar0, 187, 1);
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x296B0C9D06719132(iVar0, 3f);
									unk_0x771A86309E0CA47B(iVar0, 1);
									unk_0xAE01EF4BC84AFE7C(iVar0, 118, false);
								}
							}
						}
						if (unk_0x9EB17624F44A8DA4() == iLocal_103 && func_5(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1), 25f))
						{
							unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4554), 0);
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4554), 0);
						}
						if (!unk_0xA6FA9E5D08F067AD(iVar0))
						{
							if (!unk_0xC73F864B858B1096(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!unk_0xC80D31E4B587871C(Local_95.f_2, 13))
									{
										if (func_479(iLocal_103) && !unk_0x6CCC46F395931037(unk_0x25D049AAC4603E65(iLocal_103)))
										{
											if (!func_478(iVar0, -1794415470))
											{
												if (func_477(iVar0))
												{
													iVar1 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iLocal_103), 0);
													if (unk_0x6ADD12BF4D6D2587(iVar1))
													{
														if (unk_0xB8DE76287EDC4957(iVar1, 0))
														{
														}
														if (!unk_0x0CAAAC6B57530706(iVar1, func_476(unk_0x25D049AAC4603E65(iLocal_103), 0)))
														{
															unk_0x6F8C8278B7C06889(iVar0, iVar1, -1, func_475(unk_0x25D049AAC4603E65(iLocal_103), iVar1), func_474(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0x25D049AAC4603E65(iLocal_103)) && !unk_0x88DDBE9908752BF0(iVar0, 1))
										{
											if (func_478(iVar0, -1794415470))
											{
												unk_0xB8E08BD5B184DF4E(iVar0);
											}
											if (!func_478(iVar0, 1227113341))
											{
												if (func_477(iVar0))
												{
													unk_0x4C7AF3B2BE8C3193(iVar0, unk_0x25D049AAC4603E65(iLocal_103), -1, 0f, func_474(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x2217C45231E6A537(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x9EB17624F44A8DA4() == iLocal_103 && func_5(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iLocal_103), 1), 25f))
						{
							unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4554), 0);
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4554), 0);
						}
						if (unk_0x9EB17624F44A8DA4() == iLocal_103)
						{
							if (!unk_0xC80D31E4B587871C(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1, 0))
							{
								if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
								{
									if ((func_4(unk_0xB3328BA8976B416C(iVar0, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) && (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) || unk_0x6CCC46F395931037(unk_0xFC1458A37D98B502()))) || (unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0xFC1458A37D98B502()))
									{
										iVar2 = func_472(unk_0x9EB17624F44A8DA4());
										fVar5 = (system::to_float(Global_262145.f_6041) / 100f);
										iVar2 = system::round((system::to_float(iVar2) * fVar5));
										iVar6 = func_471(unk_0x9EB17624F44A8DA4());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_6042))
										{
											iVar2 = (iVar6 * Global_262145.f_6042);
										}
										if (iVar2 > 0)
										{
											unk_0x872F1C1F8587CCC7(&iLocal_98, 16);
										}
										unk_0x14726A84EECBD17B(unk_0xFC1458A37D98B502(), 5000, 10000, 4);
										if (!(unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0x25D049AAC4603E65(iLocal_103)))
										{
											vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(iVar0, 1) };
											vVar3 = { func_470(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											unk_0xB8D9F55BA414128D(unk_0xFC1458A37D98B502(), 1, vVar3, 0f, 0f, 0,5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xE17958D3FD0F9EE9(iVar0, 512, false);
										unk_0xAE6EBBBBD8B9FB30(iVar0, 17, 1);
										if (((unk_0x88DDBE9908752BF0(iVar0, 1) || unk_0x66488CC6E6AE7348(iVar0)) && func_468(iVar0)) && func_476(iVar0, 0) == -1)
										{
											unk_0xE17958D3FD0F9EE9(iVar0, 2, true);
											unk_0xAE6EBBBBD8B9FB30(iVar0, 3, 0);
											unk_0xAE6EBBBBD8B9FB30(iVar0, 6, 1);
										}
										else
										{
											unk_0xB8E08BD5B184DF4E(iVar0);
											unk_0xD68E88A8E0BE8697(iVar0, unk_0xFC1458A37D98B502(), 10000f, -1, 1, 0);
										}
										Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_2 = -1;
										}
										unk_0xCE93FCB8A8D8DF0B(iVar0, Global_1574765);
										unk_0x872F1C1F8587CCC7(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 0);
										unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4554), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x178083375FEC92C3(iVar0, 187))
						{
							unk_0x2217C45231E6A537(iVar0, 187, 0);
						}
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x771A86309E0CA47B(iVar0, 0);
								unk_0xAE01EF4BC84AFE7C(iVar0, 118, true);
							}
						}
						if (!(unk_0x66488CC6E6AE7348(iVar0) && unk_0x4F94D62B5FCB0CED(iVar0) == unk_0x25D049AAC4603E65(iLocal_103)))
						{
							if (!unk_0xA6FA9E5D08F067AD(iVar0))
							{
								if (func_477(iVar0))
								{
									if ((unk_0x88DDBE9908752BF0(iVar0, 1) || unk_0x66488CC6E6AE7348(iVar0)) && !unk_0xC80D31E4B587871C(Local_95.f_2, 10))
									{
										if (!func_478(iVar0, -258271821) && !func_478(iVar0, -1273030092))
										{
											if (unk_0x1ED974E122CB5C47(iVar0))
											{
												iVar7 = unk_0xDFD115BB10FE46A9(iVar0, 1);
												iVar8 = unk_0x82FF3DFBC3965CC0(iVar7);
												if (unk_0xC80D31E4B587871C(Local_95.f_2, 13))
												{
													unk_0xAE6EBBBBD8B9FB30(iVar0, 17, 1);
													unk_0xAE6EBBBBD8B9FB30(iVar0, 6, 0);
													unk_0xAE6EBBBBD8B9FB30(iVar0, 1, 0);
												}
												else if (unk_0xF9DDB1C0875FD9E0(iVar8))
												{
													unk_0x8F7859DFA5ECF628(iVar0, iVar7, 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (unk_0x849A8CFD71854E02(iVar8))
												{
													unk_0x1A7A03CE00E217F2(iVar0, iVar7, 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x82FF3DFBC3965CC0(iVar7) == joaat("taxi"))
												{
													unk_0xE17958D3FD0F9EE9(iVar0, 2, false);
													unk_0xAE6EBBBBD8B9FB30(iVar0, 3, 1);
													unk_0xAE6EBBBBD8B9FB30(iVar0, 6, 0);
													unk_0xD68E88A8E0BE8697(iVar0, unk_0x25D049AAC4603E65(iLocal_103), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x96247F0EC873C446(iVar0, unk_0xDFD115BB10FE46A9(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_478(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											unk_0xD68E88A8E0BE8697(iVar0, unk_0x25D049AAC4603E65(iLocal_103), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_466(Local_95.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xC80D31E4B587871C(Local_95.f_2, 13))
				{
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]));
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 17, 1);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 6, 0);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_95.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_458(iVar0);
			}
		}
	}
}

void func_458(int iParam0)//Position - 0x136B6
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(iLocal_98, 16))
	{
		iVar0 = Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_3;
		iVar1 = func_459(iVar0);
		if (iVar1 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 15);
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 16);
			if (!func_46())
			{
				unk_0x89DCCB988CE75025(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_7453)
			{
				iVar0 = Global_262145.f_7453;
			}
			unk_0x6D624C6A284D7D07(iParam0, iVar0);
			unk_0x872F1C1F8587CCC7(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 15);
			unk_0x0EE72DB1CD8A3B86(&iLocal_98, 16);
			unk_0x872F1C1F8587CCC7(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_459(int iParam0)//Position - 0x13762
{
	if (func_46())
	{
		if (func_462(iParam0))
		{
			if (func_461(iLocal_286) == 2)
			{
				unk_0x39FC927F4B6458C0(func_460(iLocal_286));
				unk_0x89DCCB988CE75025(iParam0, 0, 0);
				func_310(iLocal_286);
				return 1;
			}
			else
			{
				func_310(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_460(int iParam0)//Position - 0x137BA
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_461(int iParam0)//Position - 0x137DE
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x13804
{
	if (!unk_0xC80D31E4B587871C(iLocal_98, 15))
	{
		func_308(&iLocal_286, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_465(&uLocal_287, 0, 0);
		unk_0x872F1C1F8587CCC7(&iLocal_98, 15);
	}
	else if (func_464(iLocal_286) || func_463(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_463(var uParam0, int iParam1, bool bParam2)//Position - 0x1386E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_455(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x138CC
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_465(var uParam0, bool bParam1, bool bParam2)//Position - 0x138F4
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

void func_466(var uParam0, bool bParam1)//Position - 0x13931
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		if (unk_0xE53FD7AF7F25C0A8(uParam0))
		{
			if (!func_467(uParam0))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_2, 13))
				{
					unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(uParam0));
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(uParam0), 17, 1);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(uParam0), 6, 0);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(uParam0));
					}
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(uParam0), 6, 1);
					unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(uParam0), 1, 1);
				}
			}
		}
		func_233(&uParam0);
	}
}

int func_467(var uParam0)//Position - 0x139C1
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

int func_468(int iParam0)//Position - 0x139E0
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 1);
	}
	if (unk_0x66488CC6E6AE7348(iParam0))
	{
		iVar0 = unk_0x0191A52225EFA665(iParam0);
	}
	if (!unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (func_479(iLocal_103))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iLocal_103), 1);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (func_469(iVar0))
		{
			return 0;
		}
		if (unk_0x42CEF0F4671324EA(iParam0) || unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iVar0)))
		{
			if (!unk_0x0BA31FF7931F3DD3(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x82FF3DFBC3965CC0(iVar0) == -1881846085)
		{
			return 0;
		}
	}
	return 1;
}

int func_469(int iParam0)//Position - 0x13A7E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_470(vector3 vParam0)//Position - 0x13AC1
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

var func_471(int iParam0)//Position - 0x13B00
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_472(int iParam0)//Position - 0x13B15
{
	var uVar0;
	
	uVar0 = func_473(iParam0);
	return uVar0;
}

int func_473(int iParam0)//Position - 0x13B27
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return unk_0x3C5A2E3D125A1FB1(-1);
		}
		else if (func_285(iParam0))
		{
			return Global_1595693[iParam0 /*680*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_474(int iParam0)//Position - 0x13B6A
{
	if (!unk_0xC80D31E4B587871C(Local_95.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_475(int iParam0, int iParam1)//Position - 0x13B8A
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

int func_476(int iParam0, int iParam1)//Position - 0x13BFC
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

int func_477(int iParam0)//Position - 0x13C81
{
	if ((!unk_0x3AB6A1A9084FB0A4(iParam0) && !unk_0xE2446300EBE6E77D(iParam0, 0)) && !unk_0x9F887157983E8EFC(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0, int iParam1)//Position - 0x13CB1
{
	if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0)//Position - 0x13CDB
{
	if (unk_0x1327FFC8ECF24E25(iParam0))
	{
		return 0;
	}
	if (unk_0x1ED974E122CB5C47(unk_0x25D049AAC4603E65(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_480(int iParam0, int iParam1)//Position - 0x13D02
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB80A4DA4C06A76F1(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x2786E663D1846FFC(iParam0, "AttributeDamage");
	}
	unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
	unk_0xD91ED8E8618A1DEF(iParam0, "AttributeDamage", iVar0);
}

void func_481()//Position - 0x13D38
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xC80D31E4B587871C(Local_95.f_2, 6);
	bVar1 = unk_0xC80D31E4B587871C(Local_95.f_2, 10);
	func_486();
	if (iLocal_101 != 1)
	{
		if (unk_0xC80D31E4B587871C(Local_95.f_3, 12))
		{
			func_483();
		}
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_110))
	{
		func_482(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_452(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_95.f_42 = -1;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_452(iLocal_101))
		{
			bVar2 = unk_0xC80D31E4B587871C(Local_95.f_10[iVar3 /*7*/].f_2, 6);
			Local_95.f_10[iVar3 /*7*/].f_2 = 0;
			Local_95.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x872F1C1F8587CCC7(&(Local_95.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1 = 0;
	Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_2 = -1;
	iLocal_98 = 0;
	if (bVar0)
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x872F1C1F8587CCC7(&(Local_95.f_2), 11);
		unk_0x872F1C1F8587CCC7(&iLocal_98, 8);
	}
	unk_0x872F1C1F8587CCC7(&iLocal_98, 4);
	unk_0x872F1C1F8587CCC7(&iLocal_98, 11);
}

void func_482(int iParam0)//Position - 0x13E78
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(iParam0->f_7))
			{
				unk_0x36EE765E851207BF(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_483()//Position - 0x13EEA
{
	switch (iLocal_101)
	{
		case 0:
			func_485(&(Global_1574770[3]));
			break;
		
		case 1:
			func_484();
			break;
	}
}

void func_484()//Position - 0x13F1B
{
	int iVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xF96119FCCD4D1889(3, Global_1574725[iVar0], -1467815081);
			unk_0xF96119FCCD4D1889(3, -1467815081, Global_1574725[iVar0]);
			iVar0++;
		}
	}
}

void func_485(var uParam0)//Position - 0x13F61
{
	int iVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xF96119FCCD4D1889(3, Global_1574725[iVar0], *uParam0);
			unk_0xF96119FCCD4D1889(3, *uParam0, Global_1574725[iVar0]);
			iVar0++;
		}
	}
}

void func_486()//Position - 0x13FA3
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_452(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!unk_0xC80D31E4B587871C(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_466(Local_95.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_487()//Position - 0x13FEE
{
	func_488();
	if (iLocal_101 != 1)
	{
		func_456();
	}
}

void func_488()//Position - 0x14007
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_452(iLocal_101))
	{
		if (unk_0x93C304998B457C45(Local_95.f_10[iVar0 /*7*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_95.f_10[iVar0 /*7*/]))
			{
				iVar1 = unk_0x47BA76CE3C825A08(Local_95.f_10[iVar0 /*7*/]);
				if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
				{
					unk_0x2217C45231E6A537(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2512808.f_1678)
	{
	}
	if (iLocal_101 == 1)
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_103)
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
			{
				if (!unk_0xDB01A42DFF6FB273(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							unk_0x70C84F4C9DFC927F(15, unk_0x25D049AAC4603E65(iLocal_103), 4, 0f, &uLocal_283, -1467815081, 0);
						}
						else if (Local_95.f_52)
						{
							unk_0x70C84F4C9DFC927F(16, unk_0x25D049AAC4603E65(iLocal_103), 4, 0f, &uLocal_283, -1467815081, Local_95.f_53);
						}
						else
						{
							unk_0x70C84F4C9DFC927F(14, unk_0x25D049AAC4603E65(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_2512808.f_1678)
				{
					if (!unk_0xC80D31E4B587871C(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1, 3))
					{
						unk_0x872F1C1F8587CCC7(&(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_42 != -1)
		{
			if (unk_0x918CA1BFFAA03556(Local_95.f_10[Local_95.f_42 /*7*/]))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_95.f_10[Local_95.f_42 /*7*/]), 0) && !func_492(unk_0x47BA76CE3C825A08(Local_95.f_10[Local_95.f_42 /*7*/])))
				{
					if (Local_95.f_10[Local_95.f_42 /*7*/].f_5 == 3)
					{
						func_489(Local_95.f_10[Local_95.f_42 /*7*/], &iLocal_110, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0xA6DECE14FC9A8C51(iLocal_110))
						{
							if (!unk_0xC80D31E4B587871C(iLocal_98, 6))
							{
								unk_0x62BD54E491535B76(iLocal_110, "FM_MGR_BLP");
								unk_0x872F1C1F8587CCC7(&iLocal_98, 6);
							}
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(iLocal_110))
				{
					func_482(&iLocal_110);
				}
			}
			if (unk_0x9EB17624F44A8DA4() == iLocal_102)
			{
				if (!unk_0xC80D31E4B587871C(iLocal_98, 14))
				{
					if (func_354("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_489(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x14224
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		if (func_491())
		{
			Global_2436181 = unk_0x9EB17624F44A8DA4();
		}
		if (bParam3)
		{
			func_490(unk_0x47BA76CE3C825A08(uParam0), iParam1, 1, Global_2436181, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_490(unk_0x47BA76CE3C825A08(uParam0), iParam1, -1, Global_2436181, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(*iParam1))
	{
		func_482(iParam1);
	}
}

int func_490(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1429F
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, iParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*uParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*uParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(sParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(sParam7);
					}
					unk_0x476C008681363650(*uParam1);
				}
				unk_0xF27F72CA15E148EE(*uParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*uParam1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			uParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(uParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(sParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(sParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(sParam7);
						}
						unk_0x476C008681363650(uParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(uParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_491()//Position - 0x14476
{
	return Global_1312831;
}

int func_492(int iParam0)//Position - 0x14482
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 0);
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x2786E663D1846FFC(iVar0, "MPBitset");
				}
				if (unk_0xC80D31E4B587871C(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_493()//Position - 0x144D6
{
	return Local_95;
}

int func_494(int iParam0)//Position - 0x144E0
{
	return Local_97[iParam0 /*5*/];
}

void func_495()//Position - 0x144EE
{
	if (unk_0x9EB17624F44A8DA4() == iLocal_103)
	{
		if (Global_25383)
		{
			if (!unk_0xC80D31E4B587871C(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				unk_0x872F1C1F8587CCC7(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_496()//Position - 0x14537
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x9EB17624F44A8DA4() == iLocal_102)
	{
		if (unk_0xC80D31E4B587871C(Global_1573336, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_1573336, 0);
			bVar0 = true;
		}
		if (!unk_0xC80D31E4B587871C(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (unk_0xC80D31E4B587871C(Local_95.f_1, 11))
			{
				unk_0x872F1C1F8587CCC7(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xC80D31E4B587871C(Local_95.f_1, 11))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_4 = func_500();
			func_497(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_4);
		}
	}
	else if (Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_4 != Local_95.f_44)
	{
		Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_4 = Local_95.f_44;
		func_497(Local_97[unk_0xF19B3230511B7F9F() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_497(int iParam0)//Position - 0x14607
{
	switch (iLocal_101)
	{
		case 0:
			func_499(&(Global_1574770[3]), iParam0);
			break;
		
		case 1:
			func_498(iParam0);
			break;
	}
}

void func_498(int iParam0)//Position - 0x1463C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC80D31E4B587871C(iParam0, iVar0))
		{
			unk_0xF96119FCCD4D1889(1, Global_1574725[iVar0], -1467815081);
			unk_0xF96119FCCD4D1889(1, -1467815081, Global_1574725[iVar0]);
		}
		else
		{
			unk_0xF96119FCCD4D1889(3, Global_1574725[iVar0], -1467815081);
			unk_0xF96119FCCD4D1889(3, -1467815081, Global_1574725[iVar0]);
		}
		iVar0++;
	}
}

void func_499(var uParam0, int iParam1)//Position - 0x146AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC80D31E4B587871C(iParam1, iVar0))
		{
			unk_0xF96119FCCD4D1889(1, Global_1574725[iVar0], *uParam0);
			unk_0xF96119FCCD4D1889(1, *uParam0, Global_1574725[iVar0]);
		}
		else
		{
			unk_0xF96119FCCD4D1889(3, Global_1574725[iVar0], *uParam0);
			unk_0xF96119FCCD4D1889(3, *uParam0, Global_1574725[iVar0]);
		}
		iVar0++;
	}
}

int func_500()//Position - 0x14716
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == unk_0xF6A72924028F588B(iVar1))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
			}
		}
		else if (unk_0x9EB17624F44A8DA4() == unk_0xF6A72924028F588B(iVar1))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
		}
		else if (func_6(unk_0xF6A72924028F588B(iVar1), 0, 1))
		{
			if (func_47(unk_0xF6A72924028F588B(iVar1)))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_501()//Position - 0x1479F
{
	switch (iLocal_101)
	{
		case 0:
			if (!unk_0xC80D31E4B587871C(iLocal_98, 11))
			{
				if (unk_0x9EB17624F44A8DA4() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_326("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						unk_0x872F1C1F8587CCC7(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_98, 12))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_1, 8))
				{
					if (unk_0x9EB17624F44A8DA4() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_326("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_98, 12);
						}
					}
				}
			}
			if (unk_0xC80D31E4B587871C(Local_95.f_2, 10))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_98, 8))
				{
					if (unk_0x9EB17624F44A8DA4() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_326("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0x872F1C1F8587CCC7(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!unk_0xC80D31E4B587871C(iLocal_98, 13))
			{
				if (!unk_0xC80D31E4B587871C(Local_95.f_2, 11))
				{
					if (unk_0xC80D31E4B587871C(Local_95.f_1, 8))
					{
						if (unk_0xC80D31E4B587871C(Local_95.f_2, 6))
						{
							if (unk_0x9EB17624F44A8DA4() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_326("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									unk_0x872F1C1F8587CCC7(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(iLocal_98, 11))
			{
				if (unk_0x9EB17624F44A8DA4() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							func_326("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_52)
						{
							func_326("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_326("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_98, 11);
					}
				}
				else if (unk_0x9EB17624F44A8DA4() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_50)
						{
							if (Local_95.f_51)
							{
								func_503("HS_A_SUCC", 1);
							}
							else
							{
								func_326("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_52)
						{
							func_326("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_326("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_98, 10))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
				{
					if (unk_0xC80D31E4B587871C(Local_95.f_3, 6))
					{
						if (unk_0x9EB17624F44A8DA4() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_502(-1);
								if (Local_95.f_50)
								{
									if (!Local_95.f_51)
									{
										func_326("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_52)
								{
									func_326("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_326("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0x872F1C1F8587CCC7(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_98, 9))
			{
				if (unk_0xC80D31E4B587871C(Local_95.f_1, 0))
				{
					if (unk_0xC80D31E4B587871C(Local_95.f_3, 7))
					{
						if (unk_0x9EB17624F44A8DA4() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_50)
								{
									func_326("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_52)
								{
									func_326("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_326("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0x872F1C1F8587CCC7(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_502(int iParam0)//Position - 0x14B1C
{
	if (Global_1574303)
	{
		if (Global_1574307 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 148)
		{
			if (Global_1573842.f_14 == unk_0xF6A72924028F588B(iParam0))
			{
				Global_1625986++;
			}
		}
		else
		{
			Global_1625986++;
		}
	}
}

int func_503(char* sParam0, int iParam1)//Position - 0x14B6B
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_327(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_504()//Position - 0x14B97
{
	if (unk_0x3930B0AA9F6A0C8C(false, 0) != Local_95.f_45)
	{
		if (func_512(Local_95.f_45, 0, 1))
		{
			if (unk_0x098390F4365DA157(0) <= Local_95.f_45)
			{
				unk_0xBC60D873F181A18E(Local_95.f_45);
			}
		}
	}
	if (unk_0x9E883378D9B4735D(false, 0) != Local_95.f_46)
	{
		if (func_511(Local_95.f_45, 0, 1))
		{
			if (unk_0x5F5AFD354B2C767D(0) <= Local_95.f_46)
			{
				unk_0x7BC094E5B24A760D(Local_95.f_46);
			}
		}
	}
	if (unk_0x5A9A3A92F1F0B182(false, 0) != Local_95.f_47)
	{
		if (func_505(Local_95.f_45, 0, 1))
		{
			if (unk_0x872021507E4213D4(0) <= Local_95.f_47)
			{
				unk_0xB66EA47EE710E67F(Local_95.f_47);
			}
		}
	}
}

bool func_505(int iParam0, bool bParam1, bool bParam2)//Position - 0x14C29
{
	return func_506(2, iParam0, 1, bParam1, bParam2);
}

int func_506(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x14C3D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_510(iParam0) - func_509(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_509(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_510(iParam0) - func_508(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_509(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_510(iParam0) - func_509(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_507(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x14D06
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x14D40
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_509(int iParam0, bool bParam1)//Position - 0x14D86
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_510(int iParam0)//Position - 0x14E23
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

bool func_511(int iParam0, bool bParam1, bool bParam2)//Position - 0x14E63
{
	return func_506(1, iParam0, 1, bParam1, bParam2);
}

bool func_512(int iParam0, bool bParam1, bool bParam2)//Position - 0x14E77
{
	return func_506(0, iParam0, 1, bParam1, bParam2);
}

void func_513()//Position - 0x14E8B
{
	if (Local_95.f_50)
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			func_515(9);
		}
		else if (unk_0x9EB17624F44A8DA4() == iLocal_103)
		{
			func_515(13);
		}
	}
	else if (Local_95.f_52)
	{
	}
	func_514();
}

void func_514()//Position - 0x14ECB
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_515(int iParam0)//Position - 0x14ED7
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_5), iParam0);
}

int func_516()//Position - 0x14EF4
{
	var uVar0;
	
	func_523(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_522())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_521())
	{
		return 1;
	}
	if (func_520(157))
	{
		if (!func_519())
		{
			return 1;
		}
	}
	if (func_520(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_517() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_517()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_517()//Position - 0x14F7E
{
	switch (func_518())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_518()//Position - 0x14FB2
{
	return Global_25233;
}

bool func_519()//Position - 0x14FBD
{
	return Global_2447174.f_586;
}

int func_520(int iParam0)//Position - 0x14FCC
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_521()//Position - 0x14FE3
{
	return Global_2456830;
}

bool func_522()//Position - 0x14FEF
{
	return Global_2447174.f_581;
}

void func_523(var uParam0)//Position - 0x14FFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_524(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_524(int iParam0)//Position - 0x15071
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_525(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_525(int iParam0, var uParam1)//Position - 0x150F2
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_526()//Position - 0x15151
{
	system::wait(0);
}

void func_527(struct<21> Param0)//Position - 0x1515E
{
	func_533(32, Param0);
	func_532(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_95, 56);
	unk_0xE7BC983D1386C9EE(&Local_97, 161);
	unk_0x941BE77305BB5695(0);
	if (!func_531())
	{
		func_250();
	}
	iLocal_101 = Param0.f_16;
	iLocal_102 = unk_0xF6A72924028F588B(Param0.f_17);
	if (unk_0x552F39AE86E07792(iLocal_102))
	{
	}
	iLocal_103 = unk_0xF6A72924028F588B(Param0.f_18);
	if (unk_0x552F39AE86E07792(iLocal_103))
	{
		iLocal_104 = unk_0x8B948C59217A295D(unk_0xDE2D3B9654C31EB3(iLocal_103));
	}
	if (func_530(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_50 = 1;
		if (func_530(iLocal_103, 13))
		{
			Local_95.f_51 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_529(iLocal_102))
		{
			Local_95.f_52 = 1;
			Local_95.f_53 = func_528(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_10 };
	if (iLocal_101 == 1)
	{
		if (unk_0x9EB17624F44A8DA4() == iLocal_102)
		{
			unk_0x872F1C1F8587CCC7(&Global_1573336, 0);
		}
	}
	Global_1647209 = 0;
	Global_1647210 = 0;
	if (iLocal_101 == 1)
	{
		Global_2512808.f_1678 = 0;
	}
	Local_97[unk_0xF19B3230511B7F9F() /*5*/] = 0;
}

var func_528(int iParam0)//Position - 0x1526C
{
	return Global_1595693[iParam0 /*680*/].f_183.f_4;
}

bool func_529(int iParam0)//Position - 0x15281
{
	return Global_1595693[iParam0 /*680*/].f_183 != func_13();
}

bool func_530(int iParam0, int iParam1)//Position - 0x15299
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_531()//Position - 0x152B4
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_522())
		{
			return 0;
		}
		if (func_520(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_532(int iParam0, int iParam1, bool bParam2)//Position - 0x1530D
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
		if (!func_491())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_522())
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
				if (func_520(155))
				{
					if (!bParam2)
					{
						func_514();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_514();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_514();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_514();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_533(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x15422
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_514();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

