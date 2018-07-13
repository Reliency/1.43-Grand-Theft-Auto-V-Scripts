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
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	unk_0x9D2418D7FC697249("stripperhome");
	unk_0xBC03901A15107317(1);
	unk_0x86B0CC3197C2106C(unk_0x9EB17624F44A8DA4(), 1);
	if (unk_0x7D9C4B359376D38A(75))
	{
		func_289();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0xAEA89A7E72415961(32, 0, -1);
		func_284(0, -1, 0);
		unk_0xBC60D873F181A18E(1);
		unk_0x941BE77305BB5695(0);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_103580.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x674C9438180770FE();
	if (func_283() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_254(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_253(uLocal_300, 1024)))
	{
		func_245(0);
		system::wait(0);
	}
	unk_0x14776E43F90DD454(func_244(0, 0));
	unk_0x14776E43F90DD454(func_244(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		system::wait(0);
		if (iLocal_302 > 0)
		{
			func_242();
			iLocal_302 = (iLocal_302 - system::round((unk_0x46C19C2753391FBF() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_241();
				break;
			
			case 0:
				func_202(1);
				break;
			
			case 1:
				func_105();
				break;
			
			case 2:
				func_202(0);
				break;
			
			case 3:
				func_87();
				break;
			
			case 4:
				func_36(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7,5f))
				{
					func_289();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)//Position - 0x269
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)//Position - 0x27F
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)//Position - 0x2A1
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0x2E0
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

bool func_6(var uParam0)//Position - 0x338
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

void func_7(int iParam0)//Position - 0x348
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x360
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)//Position - 0x36F
{
	iParam0->f_1 = (func_5(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)//Position - 0x39D
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_11()//Position - 0x3AD
{
	if (!func_253(uLocal_300, 8192))
	{
		if (func_35())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_253(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3EB
{
	if (unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
	{
		return 1;
	}
	if (func_253(uLocal_300, 8192))
	{
		unk_0x2217C45231E6A537(iLocal_271[0], 60, true);
		if (unk_0x0C88267282FD588F(iLocal_271[0], 96,8033f, -1287,597f, 28,2688f, 5f, 5f, 2f, false, true, 1) || func_25(unk_0xFC1458A37D98B502(), 96,8033f, -1287,597f, 28,2688f, 1) > 100f)
		{
			if (unk_0x50126692B8A3590A(96,12f, -1284,91f, 29,43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0xFB3E858D6C41D854(joaat("prop_magenta_door"), 96,12f, -1284,91f, 29,43f, 1, 0f, 0);
			}
			if (unk_0x8EA3C8E091EA5BA4(iLocal_279[0]))
			{
				if (unk_0xA088EF935178C2F3(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
					unk_0x02934BABFD4CD384(iLocal_279[0], 1);
				}
			}
			unk_0x68433819717660CF(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x4E7
{
	if (bParam0)
	{
		unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), true, 0);
	}
	unk_0xAE3DF717857FE7CA(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)//Position - 0x522
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

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x544
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_24(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_23())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_24(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_20(unk_0x9EB17624F44A8DA4())) && !func_17(unk_0x9EB17624F44A8DA4(), 0)) && !func_16())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_20(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_16()//Position - 0x65D
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x67A
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6C5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x706
{
	return Global_1312736;
}

int func_20(int iParam0)//Position - 0x712
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()//Position - 0x754
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x765
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

int func_23()//Position - 0x798
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)//Position - 0x7BF
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

float func_25(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7E2
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

void func_26()//Position - 0x81C
{
	int iVar0;
	
	func_29();
	if (unk_0x50126692B8A3590A(96,12f, -1284,91f, 29,43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0xFB3E858D6C41D854(joaat("prop_magenta_door"), 96,12f, -1284,91f, 29,43f, 0, 0f, 0);
	}
	func_27(&uLocal_300, 16384);
	unk_0xEDC33A771FAEB393(iLocal_271[0], false);
	unk_0xAE01EF4BC84AFE7C(iLocal_271[0], 104, true);
	unk_0x6931076730A4AC5D(&iVar0);
	unk_0x380C1E7B7740D618(0, 98,2041f, -1291,252f, 28,2688f, 1f, -1, 0,25f, 1, 1193033728);
	unk_0x380C1E7B7740D618(0, 107,6303f, -1304,742f, 27,7688f, 1f, -1, 0,25f, 0, 1193033728);
	unk_0x12C9D41D52A560D6(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x1B16DD5C115FE009(iVar0);
	unk_0xAB30B1CF01A198C1(iLocal_271[0], iVar0);
	unk_0xFAA3EF7FF92E1F9E(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)//Position - 0x909
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)//Position - 0x919
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()//Position - 0x92A
{
	if (!unk_0xEC211A86AB3726B6(iLocal_271[0]) && func_34(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", 90,1007f, -1281,573f, 28,6661f, 2,4422f, 0f, -113,4013f, 45f, 1, 2);
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x990
{
	unk_0x59F2A26BF856E30A(unk_0x98EC0789D9F0703B(), false, iParam0);
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15f);
	}
	unk_0xAE3DF717857FE7CA(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(false);
	func_14(23, 1);
}

void func_31(int iParam0)//Position - 0x9E6
{
	if (Global_14615)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_14453.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)//Position - 0xA56
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)//Position - 0xACA
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

int func_34(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB24
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

int func_35()//Position - 0xC09
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96,12f, -1284,91f, 29,43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_36(bool bParam0)//Position - 0xC55
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_63();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_62(&vVar0, &uVar1, 0);
	}
	func_59(vVar0);
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x88DDBE9908752BF0(iLocal_271[0], 0))
		{
			iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iVar2) && !unk_0x191BE1BC8F26F3C1(iVar2, 0))
			{
				if (iLocal_305)
				{
					if (func_57(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_56();
						unk_0x16416C5B54FDBCBB(iLocal_271[0], 0, 16777216);
						func_37();
					}
				}
				else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_37()//Position - 0xD0B
{
	func_55();
	func_48(295, 0, 0);
	func_38(0);
	func_289();
}

void func_38(bool bParam0)//Position - 0xD29
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_45())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_43(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0xEC4FA25E0FA458DA(131, func_42(), 0f);
		unk_0xEC4FA25E0FA458DA(108, func_41(), 0f);
		unk_0xEC4FA25E0FA458DA(102, func_40(), 0f);
		unk_0xEC4FA25E0FA458DA(8, func_39(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_39()//Position - 0xDE6
{
	return iLocal_65;
}

int func_40()//Position - 0xDF0
{
	return iLocal_66;
}

int func_41()//Position - 0xDFA
{
	return iLocal_64;
}

int func_42()//Position - 0xE04
{
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE0D
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0xDEC0EB6EAE9BC575())
	{
	}
	if ((!unk_0x6681C497ECD12BEA() && (unk_0x0A51F536ECBFA795() || !unk_0x464F779D23F6440D())) && unk_0x5248D53D4E6A7964())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x15DBBAF9E2085C7A())
			{
				Var2 = { func_44(unk_0x9EB17624F44A8DA4()) };
				if (unk_0xA84F967541249268(&Var2))
				{
					if (unk_0x5CF21D71A8C4CFA6(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x3A711520F83BAE98() && Global_2455152.f_3)
			{
				unk_0xC42924E8061737DB(&Var0, &(Global_1655819.f_10));
			}
			else
			{
				unk_0x9EE3C5408D4CD343(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x6681C497ECD12BEA())
	{
	}
	if (!unk_0x0A51F536ECBFA795())
	{
	}
	if (unk_0x464F779D23F6440D())
	{
	}
	if (!unk_0x5248D53D4E6A7964())
	{
	}
	return 0;
}

struct<13> func_44(int iParam0)//Position - 0xF41
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_45()//Position - 0xF58
{
	if ((unk_0xDEC0EB6EAE9BC575() && unk_0x4CAC17F5502E6EEB()) && func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0xF7E
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_47()//Position - 0xF9E
{
	return Global_2457327;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0xFAA
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
		func_54((891 + iParam0), 1, -1, 1);
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
		func_49();
	}
}

void func_49()//Position - 0x1092
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
		func_53(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_52() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_50();
				}
			}
		}
	}
}

int func_50()//Position - 0x1553
{
	if (func_51(0))
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

bool func_51(bool bParam0)//Position - 0x159E
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_52()//Position - 0x15C9
{
	return Global_25233;
}

int func_53(int iParam0, int iParam1)//Position - 0x15D4
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

int func_54(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1625
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
		iParam2 = func_19();
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

void func_55()//Position - 0x1AE7
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_56()//Position - 0x1AF8
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_271[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
	{
		unk_0x8BB5ECF21DDE505B(iLocal_271[0], 1);
		if (unk_0xC816B63289F7A279(iLocal_271[0]))
		{
			unk_0x88235B448509228B(iLocal_271[0]);
		}
	}
}

int func_57(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1B40
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
	func_58(iParam0);
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

void func_58(int iParam0)//Position - 0x1CCF
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

void func_59(vector3 vParam0)//Position - 0x1CFB
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(iLocal_277))
	{
		unk_0xE30CF11C0EE14316(&iLocal_277);
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		if (unk_0x88DDBE9908752BF0(iLocal_271[0], 0))
		{
			if (unk_0xA8D0477084E86A92(iLocal_271[0], unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_276))
				{
					iLocal_276 = func_60(vParam0, 1);
				}
			}
		}
	}
}

int func_60(vector3 vParam0, bool bParam1)//Position - 0x1D81
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_61(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)//Position - 0x1DAD
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(var uParam0, var uParam1, bool bParam2)//Position - 0x1DC4
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92,8829f, -1281,123f, 28,1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615,991f, 187,4827f, 59,1337f };
				*uParam1 = 217,5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538,432f, 3776,85f, 33,5178f };
				*uParam1 = 225,8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_63()//Position - 0x1ED9
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_271[0]))
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_271[0]))
		{
		}
		else if (unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
		{
		}
		func_64(0);
	}
}

void func_64(int iParam0)//Position - 0x1F12
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_85(uLocal_74[0], (func_86(uLocal_74[0]) / 2));
	}
	func_83();
	switch (iParam0)
	{
		case 0:
			func_81("SCLUB_HOME_D", uLocal_74[0]);
			func_85(uLocal_74[0], 0);
			func_70(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			unk_0x84CDD933AFA470D2();
			func_65("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_81("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92,5861f, -1282,86f, 28,2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_65(char* sParam0, int iParam1, bool bParam2)//Position - 0x1FFE
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_69(iParam1)}, 6);
	if (!func_68(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			func_67(sParam0, &sVar0, -1);
		}
		else
		{
			func_66(sParam0, &sVar0);
		}
	}
}

void func_66(char* sParam0, char* sParam1)//Position - 0x2037
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_67(char* sParam0, char* sParam1, int iParam2)//Position - 0x2053
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam2);
}

int func_68(char* sParam0, char* sParam1)//Position - 0x2070
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

struct<4> func_69(int iParam0)//Position - 0x2089
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_70(int iParam0, bool bParam1)//Position - 0x20A3
{
	if (bParam1)
	{
		func_27(&(Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_71(&(Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x20E5
{
	func_72(uParam0, iParam1);
}

void func_72(var uParam0, var uParam1)//Position - 0x20F5
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_73()//Position - 0x210A
{
	int iVar0;
	
	iVar0 = func_75();
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
			switch (func_74(-1))
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

int func_74(int iParam0)//Position - 0x2198
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_75()//Position - 0x21CC
{
	func_76();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_76()//Position - 0x21E5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_80(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_79(unk_0xFC1458A37D98B502());
			if (func_78(iVar0) && (!func_77(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_78(Global_104555.f_2353.f_539.f_4301))
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

bool func_77(int iParam0)//Position - 0x22E2
{
	return Global_35861 == iParam0;
}

bool func_78(int iParam0)//Position - 0x22F0
{
	return iParam0 < 3;
}

int func_79(int iParam0)//Position - 0x22FC
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_80(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_80(int iParam0)//Position - 0x2339
{
	if (func_78(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_81(char* sParam0, int iParam1)//Position - 0x2363
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_69(iParam1)}, 6);
	func_82(sParam0, &sVar0, 7500, 1);
}

void func_82(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x2382
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

void func_83()//Position - 0x23A1
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_277))
	{
		unk_0xE30CF11C0EE14316(&iLocal_277);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_276))
	{
		unk_0xE30CF11C0EE14316(&iLocal_276);
	}
	func_84();
}

void func_84()//Position - 0x23CF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_278[iVar0]))
		{
			unk_0xE30CF11C0EE14316(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)//Position - 0x2402
{
	Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_86(int iParam0)//Position - 0x241E
{
	return Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/];
}

void func_87()//Position - 0x2438
{
	func_63();
	func_83();
	switch (iLocal_77)
	{
		case 0:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(iLocal_271[0], 0))
				{
					if (!func_104("SCLUB_SECLUDED"))
					{
						func_103("SCLUB_SECLUDED");
					}
					if (func_102() && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) == 0f)
					{
						unk_0x3E80C2F7BC665259(1);
						unk_0x6450931B826B49D9(func_97(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_90())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 242628503) != 1)
			{
				func_242();
				if (unk_0x674C9438180770FE() > 20 || unk_0x674C9438180770FE() < 4)
				{
					bLocal_303 = false;
				}
				unk_0x0B51676846D7C57B(iLocal_45);
				func_88(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_88(bool bParam0)//Position - 0x250F
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_81("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_89("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_89("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_89(char* sParam0, int iParam1, int iParam2)//Position - 0x2590
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_90()//Position - 0x25A9
{
	if (unk_0x3A801AA34DD821BE(func_97(iLocal_271[0], 0, 0)))
	{
		func_91(iLocal_271[0], 0, 1, -1, 1);
		func_91(unk_0xFC1458A37D98B502(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x25E3
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 1);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0x1FB367C588A91451();
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) && func_96(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0x0B51676846D7C57B(4);
		}
	}
	bVar1 = func_95(iVar0);
	sVar2 = func_97(iParam0, 0, 0);
	if (!unk_0x3A801AA34DD821BE(sVar2))
	{
		unk_0x6450931B826B49D9(sVar2);
	}
	else
	{
		unk_0x6931076730A4AC5D(&iVar3);
		unk_0x12C9D41D52A560D6(0, sVar2, func_92(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_92(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_92(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_92(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x12C9D41D52A560D6(0, sVar2, func_92(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x1B16DD5C115FE009(iVar3);
		unk_0xAB30B1CF01A198C1(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xFAA3EF7FF92E1F9E(&iVar3);
		}
	}
}

char* func_92(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2728
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(18);
					}
					else
					{
						sVar0 = func_94(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(8);
				}
				else
				{
					sVar0 = func_94(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(18);
				}
				else
				{
					sVar0 = func_93(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(8);
			}
			else
			{
				sVar0 = func_93(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(19);
					}
					else
					{
						sVar0 = func_94(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(9);
				}
				else
				{
					sVar0 = func_94(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(19);
				}
				else
				{
					sVar0 = func_93(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(9);
			}
			else
			{
				sVar0 = func_93(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(20);
					}
					else
					{
						sVar0 = func_94(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(10);
				}
				else
				{
					sVar0 = func_94(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(20);
				}
				else
				{
					sVar0 = func_93(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(10);
			}
			else
			{
				sVar0 = func_93(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(21);
					}
					else
					{
						sVar0 = func_94(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(11);
				}
				else
				{
					sVar0 = func_94(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(21);
				}
				else
				{
					sVar0 = func_93(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(11);
			}
			else
			{
				sVar0 = func_93(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(22);
					}
					else
					{
						sVar0 = func_94(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(12);
				}
				else
				{
					sVar0 = func_94(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(22);
				}
				else
				{
					sVar0 = func_93(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(12);
			}
			else
			{
				sVar0 = func_93(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_94(3);
				}
				else
				{
					sVar0 = func_94(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(3);
			}
			else
			{
				sVar0 = func_93(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_93(int iParam0)//Position - 0x2A0A
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)//Position - 0x2BC8
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_95(int iParam0)//Position - 0x2D86
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_96(bool bParam0, bool bParam1)//Position - 0x2E2F
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x8E8C94609BA4BEA9(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x8E8C94609BA4BEA9(1) == 4;
		}
	}
	return bVar0;
}

var func_97(int iParam0, bool bParam1, int iParam2)//Position - 0x2E5E
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(iParam0, 1);
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (func_95(iVar0))
			{
				if ((!func_96(0, 1) || iParam2) && !bParam1)
				{
					return func_101();
				}
				else
				{
					return func_100();
				}
			}
		}
	}
	if ((!func_96(0, 1) || iParam2) && !bParam1)
	{
		return func_99();
	}
	return func_98();
}

char* func_98()//Position - 0x2EE0
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_99()//Position - 0x2EEC
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_100()//Position - 0x2EF8
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_101()//Position - 0x2F04
{
	return "mini@prostitutes@sexlow_veh";
}

int func_102()//Position - 0x2F10
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_62(&vVar5, &uVar6, 0);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		vVar3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		if (unk_0x0BEC3E4FA151C846(vVar3, &vVar7, 1077936128, 0))
		{
			fVar8 = system::vdist(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (system::vdist(vVar3, vLocal_287) < 20f || system::vdist(vVar3, vVar5) < 20f)
		{
			return 0;
		}
		if (unk_0x8D44FCFF87C54F50(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0xB7AF4220260C2ACD(vVar3, fVar4, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0xFFCE4302A2DB825B(iVar0, unk_0xFC1458A37D98B502(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0xB306EEF0A280A8F5(vVar3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xB8DE76287EDC4957(iVar1, 0))
					{
						iVar0 = unk_0x317536BCEA8FA6B0(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_103(char* sParam0)//Position - 0x3082
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_104(char* sParam0)//Position - 0x3098
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_105()//Position - 0x30AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_200(3000))
		{
			unk_0xAE83ED4C9081AE6F(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = unk_0x4E7809A068F46A31();
		if (unk_0xB8DE76287EDC4957(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (unk_0x8F1CCD9A61E026D8(unk_0x4E7809A068F46A31()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_197(&uLocal_68, -865f, 516,3f, 90f, 1, 15f);
			}
			else if (func_196(unk_0x4E7809A068F46A31()))
			{
				bLocal_69 = func_197(&uLocal_68, vLocal_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_197(&uLocal_68, vLocal_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		unk_0x36853D5037847BF3();
	}
	switch (iLocal_73)
	{
		case 0:
			unk_0x3E80C2F7BC665259(1);
			unk_0x84CDD933AFA470D2();
			func_83();
			unk_0x1CF95440F1970B4F("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_253(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_253(uLocal_300, 256))
			{
				func_195();
				func_27(&uLocal_300, 256);
			}
			if (!func_253(uLocal_300, 32768))
			{
				unk_0x6450931B826B49D9(func_194());
				func_27(&uLocal_300, 32768);
			}
			if (!func_253(uLocal_300, 256))
			{
				unk_0x6450931B826B49D9(func_193());
				func_27(&uLocal_300, 256);
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_307 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				func_192(unk_0xFC1458A37D98B502(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_56();
				func_190(unk_0xFC1458A37D98B502(), vLocal_285);
				func_190(iLocal_271[0], vLocal_286);
				iLocal_73 = 2;
			}
			func_188();
			break;
		
		case 1:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(iLocal_307, 1), vLocal_287) < 2f)
				{
					func_56();
					func_190(unk_0xFC1458A37D98B502(), vLocal_285);
					func_190(iLocal_271[0], vLocal_286);
					unk_0x81BCCFFE3F019672();
					iLocal_73 = 2;
				}
				else if (unk_0x53C562FD2B9E3AB0() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xA088EF935178C2F3(iLocal_279[0]))
			{
				unk_0x7849794435F39D49(iLocal_279[0], true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
				{
					if (unk_0x82FF3DFBC3965CC0(iLocal_307) == joaat("blimp2"))
					{
						unk_0xB3A8974D2C811672(iLocal_307, false, 0);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_187(&iLocal_252) > 1f)
			{
				unk_0xF10DA1539629CC3F(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_186(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x674C9438180770FE();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xCED06F4C77332FC6(iLocal_279[1]) && unk_0xA088EF935178C2F3(iLocal_279[1]))
			{
				if (!func_253(uLocal_298, 512))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_307) && !unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
					{
						unk_0x6147908AB85766AA(iLocal_307, 1);
					}
					func_183(unk_0xFC1458A37D98B502(), func_185());
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), func_182());
					func_164();
					func_27(&uLocal_298, 512);
				}
				else if (!func_253(uLocal_298, 2048))
				{
					if (unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
					{
					}
					if (!func_163() && !unk_0x33B1D0D0C92D4F18(iLocal_271[0]))
					{
						func_164();
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							unk_0x3D1231846F809DA4(unk_0xFC1458A37D98B502());
							unk_0x74D45BB07BD51F8B(unk_0xFC1458A37D98B502(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_162();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_187(&iLocal_252) > 1f)
			{
				if (func_137(iLocal_297, 0, sLocal_273, "", &Local_280, (func_187(&iLocal_252) * 0,2f), 0))
				{
					if (!func_163())
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_307))
						{
							if (unk_0x82FF3DFBC3965CC0(iLocal_307) != joaat("blimp2"))
							{
								unk_0x247EAA2E93D4A021(vLocal_286, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							unk_0x247EAA2E93D4A021(vLocal_286, 20f, 1, 0, 0, false);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_271[0]))
						{
							unk_0xB3A8974D2C811672(iLocal_271[0], false, 0);
						}
						unk_0x7B8DA957183409C6(unk_0xFC1458A37D98B502(), 0);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
			if (func_187(&iLocal_252) > 1,5f)
			{
				if (bLocal_69)
				{
					func_135(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xA088EF935178C2F3(iLocal_279[2]))
			{
				unk_0x7B2E201667AAB144();
				unk_0x0AD5B4F1F90CE447(1);
				unk_0xD55F04EF19C13160(1);
				unk_0xF10DA1539629CC3F(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_253(uLocal_300, 262144))
			{
				if (func_187(&iLocal_252) >= 1,25f)
				{
					func_134();
				}
			}
			if (func_187(&iLocal_252) > 6f)
			{
				unk_0x7849794435F39D49(iLocal_279[3], true);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
				{
					if (unk_0x82FF3DFBC3965CC0(iLocal_307) == joaat("blimp2"))
					{
						unk_0xB3A8974D2C811672(iLocal_307, true, 0);
					}
					unk_0xDD29FF4BAB8AFF9C(iLocal_307, true, 1);
					unk_0xB38E13EF2EC6F0E9(iLocal_307, 1000f);
					unk_0xC7C8A97B94385008(iLocal_307, 1000f);
					unk_0xB3C8DB09F4A4DE89(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_187(&iLocal_252) > 2f)
			{
				unk_0x90CE99E954B80CFF(0, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
			{
				if (!func_253(uLocal_300, 262144))
				{
					unk_0x90CDE9D4F79FC07E(unk_0x9EB17624F44A8DA4(), vLocal_289, fLocal_293, false, true, 1);
					func_134();
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
				{
					if (unk_0x82FF3DFBC3965CC0(iLocal_307) == joaat("blimp2"))
					{
						unk_0xB3A8974D2C811672(iLocal_307, true, 0);
					}
				}
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_307, true, 1);
					unk_0xB38E13EF2EC6F0E9(iLocal_307, 1000f);
					unk_0xC7C8A97B94385008(iLocal_307, 1000f);
					unk_0xB3C8DB09F4A4DE89(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x2D0EF1D268F33F25() && func_187(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), unk_0x77B0822EAE4CA5DD(unk_0xFC1458A37D98B502()), 0);
				unk_0x26445D58B3FE9957(unk_0x9EB17624F44A8DA4(), 30, 1);
				if (unk_0x90CE698681C6225E(unk_0xFC1458A37D98B502(), func_80(0)))
				{
					func_133();
				}
				unk_0x8A4311269B560FDF(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x191BE1BC8F26F3C1(iLocal_307, 0))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_307, true, 1);
					if (unk_0x82FF3DFBC3965CC0(iLocal_307) != joaat("blimp2"))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_307, vLocal_287, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(iLocal_307, fLocal_294);
						if (unk_0x8F1CCD9A61E026D8(iLocal_307) && uLocal_74[0] == 5)
						{
							unk_0xBD8D47FDC6902B2D(iLocal_307, -865f, 516,3f, 90f, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_307, 15f);
						}
						else if (func_196(iLocal_307))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_307, vLocal_292, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_307, fLocal_295);
						}
						unk_0xACE486395AA1867D(iLocal_307, 1084227584);
					}
				}
				if (!unk_0x3E9CABD07B829173())
				{
					func_186(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0xB8DFB093236ACBD6(8, 0, 0);
					func_131(system::to_float(8));
					unk_0x59C3AC31C7544A28(2000);
					unk_0xBB9A3C553EECB180(0f);
					unk_0x7C9705890EF6612E(0f, 1065353216);
					func_186(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_271[0]))
				{
					unk_0x68433819717660CF(&(iLocal_271[0]));
				}
				if (!func_130(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_65("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_65("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_116(uLocal_74[0], 1, -1);
					system::wait(4000);
				}
				func_114(uLocal_74[0]);
				iVar2 = func_113(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_112(uLocal_74[0]);
					iVar4 = func_111(iVar2);
					func_106(-384575792, iVar3, iVar4, 3, func_110(), func_109(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_37();
			}
			break;
	}
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x396A
{
	struct<14> Var0;
	
	if (func_51(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_108(iParam3);
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		Global_104555.f_7658.f_651[Global_104555.f_7658.f_764 /*14*/] = { Var0 };
		Global_104555.f_7658.f_764++;
		func_107(0);
		func_107(1);
		func_107(2);
		return 1;
	}
	return 0;
}

void func_107(int iParam0)//Position - 0x3AA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_78(iParam0))
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

int func_108(int iParam0)//Position - 0x3B6C
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

int func_109(int iParam0)//Position - 0x3BD6
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

int func_110()//Position - 0x3C73
{
	func_76();
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

int func_111(int iParam0)//Position - 0x3CB9
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_112(int iParam0)//Position - 0x3CF3
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_113(int iParam0)//Position - 0x3D51
{
	return Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_114(int iParam0)//Position - 0x3D6D
{
	if (func_113(iParam0) < 0)
	{
		func_115(iParam0, 0);
	}
	Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_115(int iParam0, int iParam1)//Position - 0x3DB0
{
	Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_116(int iParam0, bool bParam1, int iParam2)//Position - 0x3DCE
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_73();
	}
	if (func_129(iParam2) == 4)
	{
	}
	bVar0 = Global_104555.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			if (!func_128(func_109(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_128(func_109(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_104555.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_127(iParam0, 0);
			func_124(func_109(iParam0), func_129(iParam2), 1);
			iVar1 = unk_0x63A6486593EC7EC3(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x872F1C1F8587CCC7(&(Global_2097152[func_123() /*12130*/].f_7676.f_1272), iParam0);
					func_120(15, 0);
					break;
			}
			func_119(iVar1);
			func_118(iParam0, iVar1);
			Global_103549.f_15[iParam0] = unk_0x53C562FD2B9E3AB0();
		}
	}
	else if (bVar0)
	{
		func_117(func_109(iParam0), func_129(iParam2));
	}
}

void func_117(int iParam0, int iParam1)//Position - 0x3EF2
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

void func_118(int iParam0, int iParam1)//Position - 0x3F35
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

void func_119(int iParam0)//Position - 0x3F72
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

void func_120(int iParam0, int iParam1)//Position - 0x3FA9
{
	int iVar0;
	
	if (func_122(iParam0, iParam1))
	{
		iVar0 = func_121();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_121()//Position - 0x3FCC
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

int func_122(int iParam0, var uParam1)//Position - 0x4003
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

int func_123()//Position - 0x4089
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_124(int iParam0, int iParam1, bool bParam2)//Position - 0x4096
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_126();
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
						func_125();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_125();
			}
		}
	}
}

void func_125()//Position - 0x4240
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

void func_126()//Position - 0x42C1
{
	if (func_77(14))
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
		Global_14453 = func_75();
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

void func_127(int iParam0, int iParam1)//Position - 0x4363
{
	Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_128(int iParam0, int iParam1)//Position - 0x4381
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x43A6
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

bool func_130(int iParam0, int iParam1)//Position - 0x4402
{
	if (iParam1 < 0)
	{
		iParam1 = func_73();
	}
	return Global_104555.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_131(float fParam0)//Position - 0x4428
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5)))
		{
			func_132(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_104555.f_18073.f_362[iVar1 /*3*/])))
		{
			func_132(&(Global_104555.f_18073.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x6E21EFDC4146D718();
}

void func_132(int iParam0, float fParam1)//Position - 0x44B9
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_133()//Position - 0x44DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_89440[iVar0] = Global_89440[iVar0 + 1];
		}
		else
		{
			Global_89440[iVar0] = unk_0x53C562FD2B9E3AB0();
		}
		iVar0++;
	}
}

void func_134()//Position - 0x451D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3A801AA34DD821BE(sLocal_272))
	{
	}
	else
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 50000);
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
		unk_0x6931076730A4AC5D(&iVar1);
		unk_0x380C1E7B7740D618(0, vLocal_289, 1f, -1, 0,25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			unk_0x12C9D41D52A560D6(0, sLocal_272, "fidget_rub_hands", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x12C9D41D52A560D6(0, sLocal_272, "fidget_rub_chin", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x12C9D41D52A560D6(0, sLocal_272, "fidget_arm_swing", 1,5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x1B16DD5C115FE009(iVar1);
		unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iVar1);
		unk_0xFAA3EF7FF92E1F9E(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_135(var uParam0)//Position - 0x45F3
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!func_136(iVar0))
		{
			unk_0xB18E1DBC397238E1(iVar0, true, 0);
			unk_0xB3A8974D2C811672(iVar0, true, 0);
			unk_0xEDC33A771FAEB393(iVar0, false);
		}
	}
}

int func_136(int iParam0)//Position - 0x462A
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

int func_137(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x466D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_161();
			iVar4 = func_161();
			func_160(&iVar4, iParam0);
			func_159(&iVar4, iParam1);
			func_158(&iVar4, 0);
			if (func_156(*uParam4, iVar4))
			{
				func_151(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_148(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_131((system::to_float(uParam4->f_11) / 3600f));
			unk_0x633236B25E1A5942(0,6f);
			unk_0xD55F04EF19C13160(0);
			unk_0x0AD5B4F1F90CE447(0);
			func_147();
			uParam4->f_10 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			unk_0xE859EF37EA7362D3("TOD_SHIFT_SCENE");
			func_146();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0,5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x8B948C59217A295D(sParam2) != 0)
					{
						unk_0xD941F8E30D7231AD(sParam2, 1f);
					}
					if (unk_0x8B948C59217A295D(sParam3) != 0)
					{
						unk_0x7E674434FF907A39();
						unk_0xC11C778BD74C52F2(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0,99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_151(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x7FF44F2CA1AA5702(func_145(iVar4), func_144(iVar4), func_143(iVar4));
				unk_0x0B9D04994D02CC2F(uParam4->f_10);
				unk_0x751FF861325F816B("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0,1f;
			fVar9 = 0,9f;
			fVar11 = func_142(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = system::round((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_151(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0x7FF44F2CA1AA5702(func_145(iVar4), func_144(iVar4), func_143(iVar4));
			if (func_141(iVar4) != unk_0xD3ECC7A5C90D3AA4())
			{
				unk_0x4823DE67A74DCD67(func_141(iVar4), func_140(iVar4), func_138(iVar4));
			}
			func_242();
			unk_0x283AC66D956F6B0E(6);
			break;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x486B
{
	return (system::shift_right(iParam0, 26) & 31 * func_139(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_139(bool bParam0, int iParam1, int iParam2)//Position - 0x4890
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(int iParam0)//Position - 0x48A7
{
	return iParam0 & 15;
}

int func_141(int iParam0)//Position - 0x48B4
{
	return system::shift_right(iParam0, 4) & 31;
}

float func_142(float fParam0, float fParam1, float fParam2)//Position - 0x48C6
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_143(int iParam0)//Position - 0x48ED
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_144(int iParam0)//Position - 0x4900
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_145(int iParam0)//Position - 0x4913
{
	return system::shift_right(iParam0, 9) & 31;
}

void func_146()//Position - 0x4926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_147()//Position - 0x4952
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	unk_0xDFC63F22B454FFF5(iVar0, "OFF");
	return 1;
}

void func_148(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x49A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_140(iParam1);
		iVar1 = func_138(iParam0);
		iVar2 = (func_138(iParam0) - func_138(iParam1));
		iVar3 = (func_140(iParam0) - func_140(iParam1));
		iVar4 = (func_141(iParam0) - func_141(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_140(iParam0);
		iVar1 = func_138(iParam1);
		iVar2 = (func_138(iParam1) - func_138(iParam0));
		iVar3 = (func_140(iParam1) - func_140(iParam0));
		iVar4 = (func_141(iParam1) - func_141(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
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
		iVar4 = (iVar4 + func_150(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_149(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_149(float fParam0, float fParam1, float fParam2)//Position - 0x4BA1
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

int func_150(int iParam0, int iParam1)//Position - 0x4BE3
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

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4C85
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_138(*iParam0);
	iVar1 = func_140(*iParam0);
	iVar2 = func_141(*iParam0);
	iVar3 = func_145(*iParam0);
	iVar4 = func_144(*iParam0);
	iVar5 = func_143(*iParam0);
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
	iVar6 = func_150(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_150(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4E07
{
	func_158(uParam0, iParam1);
	func_159(uParam0, iParam2);
	func_160(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_153(uParam0, iParam6);
}

void func_153(var uParam0, int iParam1)//Position - 0x4E3F
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

void func_154(var uParam0, int iParam1)//Position - 0x4EC5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_155(var uParam0, int iParam1)//Position - 0x4F16
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_156(int iParam0, int iParam1)//Position - 0x4F49
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x5055
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
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_138(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_140(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_141(iParam0);
	if (iVar5 < 1 || iVar5 > func_150(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0, int iParam1)//Position - 0x5131
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 20));
}

void func_159(int iParam0, int iParam1)//Position - 0x516D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 14));
}

void func_160(int iParam0, int iParam1)//Position - 0x51A8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || system::shift_left(iParam1, 9));
}

int func_161()//Position - 0x51E2
{
	var uVar0;
	
	func_158(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_159(&uVar0, unk_0x95327550F0F2BE7C());
	func_160(&uVar0, unk_0x674C9438180770FE());
	func_154(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_155(&uVar0, unk_0xEAF455949B108589());
	func_153(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

char* func_162()//Position - 0x5228
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_163()//Position - 0x529F
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_164()//Position - 0x52C1
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_180(&uLocal_78, 1, 0, func_181(uLocal_74[0]), 0, 1);
			func_167("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_165(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_165(int iParam0, char* sParam1, int iParam2)//Position - 0x5323
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_166(iParam2), 1);
}

int func_166(int iParam0)//Position - 0x533A
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

int func_167(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x552F
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_179())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_178(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_177(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_168(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x558A
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_169(sParam2, iParam3, 0);
}

int func_169(char* sParam0, int iParam1, bool bParam2)//Position - 0x55D8
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
					func_175();
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
		if (func_174(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_173();
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
				func_126();
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
				if (func_172())
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
			if (func_23())
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
			func_171();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_170();
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
		func_175();
	}
	return 0;
}

void func_170()//Position - 0x58A4
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

void func_171()//Position - 0x58D6
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

int func_172()//Position - 0x596B
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

void func_173()//Position - 0x5A04
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

bool func_174(int iParam0, int iParam1)//Position - 0x5A5C
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

void func_175()//Position - 0x5A97
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

void func_176(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5AEE
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

struct<6> func_177(char[24] cParam0)//Position - 0x5B44
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_178(char* sParam0, bool bParam1)//Position - 0x5B65
{
	StringConCat(sParam0, "_", 24);
	if (func_75() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_75() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_75() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_177(*sParam0) };
	}
}

int func_179()//Position - 0x5BBC
{
	if ((unk_0x23F2F89E3D1CB7C4() || unk_0x42111BD51D233AAB()) || Global_15756 != 0)
	{
		return 0;
	}
	return 1;
}

void func_180(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5BE5
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

char* func_181(int iParam0)//Position - 0x5C80
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_182()//Position - 0x5D33
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325,6f;
			break;
		
		case 0:
			return 52,89f;
			break;
		
		case 4:
			return 14,5f;
			break;
		
		case 5:
			return 43,85f;
			break;
		
		case 8:
			return 193,5f;
			break;
		
		case 9:
			return 233,2f;
			break;
	}
	return 0f;
}

Vector3 func_183(int iParam0, vector3 vParam1)//Position - 0x5DAC
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0,15f);
	if (unk_0x7367FB97975F1E29(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_184(iParam0))
	{
		unk_0xBD8D47FDC6902B2D(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_184(int iParam0)//Position - 0x5DF2
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

Vector3 func_185()//Position - 0x5E10
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130,7462f, -1896,513f, 22,3246f;
			break;
		
		case 0:
			return -162,4315f, -1635,107f, 32,6529f;
			break;
		
		case 4:
			return -197,6542f, 92,3329f, 68,5846f;
			break;
		
		case 5:
			return -848,9675f, 510,048f, 89,8218f;
			break;
		
		case 8:
			return -28,5266f, -1565,793f, 28,918f;
			break;
		
		case 9:
			return 3315,045f, 5174,08f, 17,6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_186(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5EC7
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()), 64);
	}
	if (!unk_0xA8113D347D14630F())
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x90CE99E954B80CFF(0, 0, 3, 0);
	}
	else
	{
		unk_0x3458550DF8E9B453(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x3E80C2F7BC665259(1);
	}
	else
	{
		if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4))
		{
			if (unk_0xD85097DDDA5447BE(uParam0->f_4))
			{
				unk_0x7849794435F39D49(uParam0->f_4, false);
			}
			unk_0x02934BABFD4CD384(uParam0->f_4, 1);
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
		}
		iVar0 = unk_0xC733212BF9066BDF();
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			unk_0xB3A8974D2C811672(iVar0, true, 0);
		}
		unk_0x751FF861325F816B("TIME_LAPSE");
		if (unk_0x771D0F8F56A5FE6C("TOD_SHIFT_SCENE"))
		{
			unk_0x0B9D04994D02CC2F(uParam0->f_10);
			unk_0x751FF861325F816B("TIME_LAPSE");
			unk_0xE02E32C69260FBB7("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0);
	func_146();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x59C3AC31C7544A28(250);
		}
	}
	if (!bParam1)
	{
		if (Global_104555.f_32429.f_4801 != -15)
		{
			Global_104555.f_32429.f_4801 = func_161();
		}
	}
}

float func_187(int iParam0)//Position - 0x6038
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_188()//Position - 0x6074
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_189(&vVar1, &vVar2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x8EA3C8E091EA5BA4(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0x5AC38B4D80D4E352(26379945, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_279[iVar0], "HAND_SHAKE", 0,3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
	unk_0xD2EF93491605005F(Local_280.f_4, vVar1[0 /*3*/], vVar2[0 /*3*/], 6000, 3, 2);
	unk_0xD2EF93491605005F(Local_280.f_4, vVar1[1 /*3*/], vVar2[1 /*3*/], 6000, 3, 2);
	unk_0xE43C573FE3C5D758(Local_280.f_4, uVar3[0]);
}

void func_189(var uParam0, var uParam1, var uParam2)//Position - 0x6146
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140,9085f, -1885,527f, 25,6959f };
			*(uParam1[0 /*3*/]) = { -9,0308f, 0f, 126,3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141,712f, -1884,935f, 30,7241f };
			*(uParam1[1 /*3*/]) = { 4,7025f, 0f, 129,5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139,1899f, -1885,865f, 24,96737f };
			*(uParam1[2 /*3*/]) = { -3,535496f, 0,081819f, 135,1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133,9669f, -1893,292f, 23,9573f };
			*(uParam1[3 /*3*/]) = { -1,8669f, -0,0329f, -5,5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186,5408f, -1629,328f, 35,8275f };
			*(uParam1[0 /*3*/]) = { -1,5588f, 0f, -118,8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186,1923f, -1629,505f, 48,7132f };
			*(uParam1[1 /*3*/]) = { -1,2745f, 0f, -116,9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184,9595f, -1632,193f, 36,32303f };
			*(uParam1[2 /*3*/]) = { -3,262451f, 0,073971f, -100,6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164,7078f, -1632,25f, 34,0944f };
			*(uParam1[3 /*3*/]) = { -3,7303f, 0,0222f, 108,1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208,6886f, 112,8581f, 73,0855f };
			*(uParam1[0 /*3*/]) = { -0,1055f, 0f, -156,0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208,9068f, 113,3747f, 85,2889f };
			*(uParam1[1 /*3*/]) = { 3,8438f, 0f, -157,0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206,2357f, 106,941f, 72,07555f };
			*(uParam1[2 /*3*/]) = { -11,58381f, 0,084975f, -158,9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197,6886f, 94,7063f, 69,814f };
			*(uParam1[3 /*3*/]) = { 0,5155f, -0,0266f, 48,8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871,6285f, 520,8466f, 93,1945f };
			*(uParam1[0 /*3*/]) = { -0,1377f, -1,3933f, -105,9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871,5255f, 521,1066f, 104,6356f };
			*(uParam1[1 /*3*/]) = { 3,1118f, -1,3933f, -105,9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866,6436f, 514,6121f, 92,90275f };
			*(uParam1[2 /*3*/]) = { -5,957637f, -1,324997f, -101,9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849,5522f, 514,2322f, 91,0095f };
			*(uParam1[3 /*3*/]) = { -1,626f, -1,3198f, 92,3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27,698f, -1584,646f, 31,1034f };
			*(uParam1[0 /*3*/]) = { 0,0044f, 0f, -1,9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27,698f, -1584,646f, 40,4849f };
			*(uParam1[1 /*3*/]) = { 7,981f, 0f, -1,9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28,63904f, -1579,74f, 30,82423f };
			*(uParam1[2 /*3*/]) = { -7,527712f, 0,030218f, -14,33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28,6719f, -1568,09f, 29,7492f };
			*(uParam1[3 /*3*/]) = { -1,5414f, 0f, -168,6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323,631f, 5148,861f, 20,9592f };
			*(uParam1[0 /*3*/]) = { 1,1547f, 1,0064f, 21,8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323,844f, 5148,672f, 28,2303f };
			*(uParam1[1 /*3*/]) = { 11,4168f, 1,0064f, 22,8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328,904f, 5157,818f, 20,5799f };
			*(uParam1[2 /*3*/]) = { -3,634001f, 1,039937f, 30,44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315,368f, 5171,771f, 18,9066f };
			*(uParam1[3 /*3*/]) = { -2,8773f, 1,0064f, -103,0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_190(int iParam0, vector3 vParam1)//Position - 0x667A
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0x7B8DA957183409C6(iParam0, 1);
		if (unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 1)
		{
			unk_0xFAA3EF7FF92E1F9E(&iLocal_306);
			unk_0x6931076730A4AC5D(&iLocal_306);
			if (unk_0x88DDBE9908752BF0(iParam0, 0))
			{
				unk_0x16416C5B54FDBCBB(0, 0, 16777216);
			}
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				fVar0 = system::vdist(unk_0xB3328BA8976B416C(iParam0, 1), vLocal_285);
				fVar1 = system::vdist(unk_0xB3328BA8976B416C(iParam0, 1), vLocal_286);
				if (fVar1 < fVar0)
				{
					unk_0xAC838A977FB6E6BC(0, iLocal_271[0], 0);
				}
				else if (!unk_0xAB019B170BF1309C(func_191()))
				{
					unk_0xFB02C50CC0E93FAA(0, func_191(), 0, 552, -1);
				}
				else
				{
					unk_0x380C1E7B7740D618(0, vLocal_285, 1f, -1, 0,25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xFC1458A37D98B502())
			{
				if (!unk_0xAB019B170BF1309C(func_191()))
				{
					unk_0xFB02C50CC0E93FAA(0, func_191(), 0, 546, -1);
				}
				else
				{
					unk_0x380C1E7B7740D618(0, vParam1, 1f, -1, 0,25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x12C9D41D52A560D6(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(3000, 6000));
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x12C9D41D52A560D6(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x270054D97CD161A8(0, unk_0x63A6486593EC7EC3(3000, 6000));
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0x12C9D41D52A560D6(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x1B16DD5C115FE009(iLocal_306);
			unk_0xAB30B1CF01A198C1(iParam0, iLocal_306);
		}
	}
}

char* func_191()//Position - 0x6848
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_192(int iParam0, int iParam1)//Position - 0x6861
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		unk_0x9E8EE202E802AC5B(iParam0, iParam1, vLocal_287, fLocal_294, 3, 1092616192, 0);
	}
}

char* func_193()//Position - 0x6897
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_194()//Position - 0x68A3
{
	if (func_75() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_75() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_75() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_195()//Position - 0x68E2
{
	sLocal_272 = "move_p_m_one_idles@generic";
	unk_0x6450931B826B49D9(sLocal_272);
}

int func_196(int iParam0)//Position - 0x68F8
{
	if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0xB0DA749C8A7CCBBF(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_197(var uParam0, vector3 vParam1, bool bParam2, float fParam3)//Position - 0x69E5
{
	if (func_199(uParam0))
	{
		unk_0x4C7232E851BC6D56(*uParam0);
		if (!func_198(vParam1))
		{
			unk_0xBD8D47FDC6902B2D(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam2)
			{
				unk_0x48ED7B2293A96722(*uParam0, fParam3);
			}
			unk_0xACE486395AA1867D(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_198(vector3 vParam0)//Position - 0x6A38
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_199(var uParam0)//Position - 0x6A62
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!func_136(iVar0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iVar0, unk_0xFC1458A37D98B502(), vLocal_63, 0, 1, 0))
			{
				unk_0x4C7232E851BC6D56(iVar0);
				unk_0xB18E1DBC397238E1(iVar0, false, 0);
				unk_0xB3A8974D2C811672(iVar0, false, 0);
				unk_0xEDC33A771FAEB393(iVar0, true);
				unk_0xDD29FF4BAB8AFF9C(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x6AD4
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
			if (func_201())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_201()//Position - 0x6B1E
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

void func_202(bool bParam0)//Position - 0x6B50
{
	struct<4> Var0;
	float fVar1;
	
	func_63();
	if (unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
	{
		return;
	}
	unk_0x4C15495E88D71C61(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar1 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_271[0], 1));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_179()) && !func_253(uLocal_300, 2)) || func_240(iLocal_271[0], 0))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_277))
			{
				unk_0xE30CF11C0EE14316(&iLocal_277);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_276))
			{
				unk_0xE30CF11C0EE14316(&iLocal_276);
			}
			func_237(0);
			func_81("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_277))
			{
				unk_0xE30CF11C0EE14316(&iLocal_277);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_276))
			{
				unk_0xE30CF11C0EE14316(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_226(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_64(4);
	}
	if (iLocal_75 <= 1)
	{
		func_245(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_179())
			{
				if (!func_253(uLocal_300, 1))
				{
					unk_0xEDC33A771FAEB393(iLocal_271[0], true);
					func_81("SCLUB_HOME_MEET", uLocal_74[0]);
					func_237(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_69(uLocal_74[0]) };
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_307 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				iLocal_301 = unk_0xDE523AF6F7B269AB(iLocal_307);
			}
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_271[0], 1), 3f, 3f, 3f, false, true, 0) || (unk_0xB8DE76287EDC4957(iLocal_307, 0) && func_225(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				unk_0xEDC33A771FAEB393(iLocal_271[0], false);
				if (unk_0x6ADD12BF4D6D2587(iLocal_307) && (unk_0x95EC8AE7E4F33F6E(iLocal_307) < 1 || (!bParam0 && !unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iLocal_307)))))
				{
					if (!func_68("SCLUB_SMALL_CAR", &Var0))
					{
						func_65("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x3E80C2F7BC665259(1);
					unk_0xB8E08BD5B184DF4E(iLocal_271[0]);
					func_223();
					if (!func_253(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_222();
					func_83();
					func_215(39, 1);
					func_215(40, 1);
					func_215(41, 1);
					func_215(42, 1);
					func_215(43, 1);
					func_215(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_68("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(iLocal_271[0], 0))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_212();
			if (!func_163())
			{
				if (func_179())
				{
					unk_0xBF98CCF1EA4B13E9(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x4C15495E88D71C61(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x9B8406983378711E(vLocal_287, 10f, 0, 0, 0, 0, false, 0);
					unk_0x60225D4F755DFDB1(vLocal_287, 10f, 0);
					iLocal_284 = unk_0xCB389937EDB1519A(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_88(1);
						func_211();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_208(fVar1, vLocal_288);
			func_203();
			if ((func_4(&iLocal_255) > 45f || system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_291) > (100f * 100f)) && func_25(unk_0xFC1458A37D98B502(), vLocal_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_167("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_165(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_64(3);
			}
			else if (func_240(iLocal_271[0], 1))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_277))
				{
					unk_0xE30CF11C0EE14316(&iLocal_277);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_276))
				{
					unk_0xE30CF11C0EE14316(&iLocal_276);
				}
				func_237(0);
				func_81("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_287, 3f, 3f, 2f, true, true, 2) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				func_211();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_208(fVar1, vLocal_287);
			func_203();
			func_223();
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					func_211();
				}
				else
				{
					func_59(vLocal_287);
				}
				if (func_104("SCLUB_HOME_WALK"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x6ADD12BF4D6D2587(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					if (func_57(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 3f, 2, 0,5f, 0, 1, 0))
					{
						func_56();
						func_190(iLocal_271[0], vLocal_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_167("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_167("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				unk_0x957CEE967C939968(iLocal_271[0]);
				func_211();
				unk_0x3E80C2F7BC665259(1);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_163() && !unk_0x23F2F89E3D1CB7C4()) && !func_253(uLocal_300, 2048))
			{
				Var0 = { func_69(uLocal_74[0]) };
				func_82("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_83();
				func_237(0);
				func_27(&uLocal_300, 2048);
			}
			if ((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_288, 5f, 5f, 2f, false, true, 1) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_286, 5f, 5f, 2f, false, true, 1)) && unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_253(uLocal_298, 4096) && !func_163()) && !unk_0x33B1D0D0C92D4F18(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_271[0], 1)) < (3f * 3f))
				{
					func_165(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_64(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_240(iLocal_271[0], 1))
			{
				unk_0x84CDD933AFA470D2();
				iLocal_75 = iLocal_76;
				if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					func_211();
				}
			}
			break;
	}
}

void func_203()//Position - 0x72E2
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_253(uLocal_300, 16))
	{
		if (func_204())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_97(iLocal_271[0], 0, 0);
	if (!func_253(uLocal_300, 8))
	{
		if (!func_253(uLocal_300, 4))
		{
			if (!func_253(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_167("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				unk_0x6450931B826B49D9(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (unk_0x3A801AA34DD821BE(sVar0))
		{
			func_91(iLocal_271[0], 1, 1, -1, 1);
			unk_0xE9B3D12A64CC7C1A(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_253(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0xA5F6598E13F98E08(iLocal_271[0], sVar0, func_92(4, 1, 1, func_95(iLocal_307)), 3);
		bVar3 = unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502());
		bVar4 = unk_0x78F50AA8F955BEFC(iLocal_271[0], 242628503) == 7;
		bVar5 = unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
			{
				bVar6 = (unk_0x9A3C64A7BB4588B3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 5f);
			}
		}
		if ((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || func_4(&iLocal_252) > 35f) || system::vdist(vLocal_287, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x12C9D41D52A560D6(iLocal_271[0], sVar0, func_92(4, 1, 1, func_95(iLocal_307)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_242();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), (unk_0xDE523AF6F7B269AB(unk_0xFC1458A37D98B502()) - system::ceil((IntToFloat(unk_0x77B0822EAE4CA5DD(unk_0xFC1458A37D98B502())) * 0,1f))), 0);
					func_165(unk_0xFC1458A37D98B502(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_165(unk_0xFC1458A37D98B502(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			unk_0xFCCDDE0E48CF9588(sVar0);
			func_71(&uLocal_300, 4);
		}
		if (!func_253(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_165(unk_0xFC1458A37D98B502(), "SEX_GENERIC", 10);
				func_165(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0x5177B0E0C838D3E3();
		func_242();
	}
}

int func_204()//Position - 0x75CE
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_179())
	{
		return 0;
	}
	func_62(&vVar0, &uVar1, 0);
	if (((system::vdist(vLocal_287, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > (75f * 2f) && system::vdist(vVar0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > (75f / 2f)) && func_113(uLocal_74[0]) > 1) && func_205())
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0x7644
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
		if (func_207(iVar1, 0) && func_206(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x7694
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x96E226626970ABA3(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
						iVar2 = unk_0x8B948C59217A295D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xD9E4EECED37F4370(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
		}
		if (unk_0xD9E4EECED37F4370(iParam0) == 931866387 && unk_0x82FF3DFBC3965CC0(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0, bool bParam1)//Position - 0x78AF
{
	if ((((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0)) || unk_0x125CDF69FA6EF560(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256)
	{
		return 0;
	}
	return 1;
}

void func_208(float fParam0, vector3 vParam1)//Position - 0x7A07
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_253(uLocal_298, 262144))
	{
		if (func_210(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_167("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_165(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_71(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_179()) || func_253(uLocal_300, 4))
	{
		return;
	}
	if (!func_253(uLocal_298, 1) && !func_253(uLocal_298, 128))
	{
		if (system::vdist(vParam1, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_167("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			unk_0x9B8406983378711E(vLocal_287, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (!func_253(uLocal_298, 16))
		{
			func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 4))
		{
			func_71(&uLocal_298, 4);
		}
		if (!func_253(uLocal_298, 8))
		{
			func_71(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = unk_0x90D5DFB054818BA7(iVar0);
		fVar2 = unk_0x617EA99D340A37ED(iVar0);
		if (fVar1 < (fVar2 * 0,9f) || fVar1 > (fVar2 * 0,1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_253(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_165(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_71(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_165(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_71(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 131072))
		{
			if (func_209(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_165(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_71(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_253(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_253(uLocal_298, 32)))
			{
				func_165(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_253(uLocal_298, 524288))
			{
				if (!unk_0x33B1D0D0C92D4F18(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_165(unk_0xFC1458A37D98B502(), "BOOTY_FLIRT_RESP", 10);
					func_71(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_209(int iParam0, int iParam1)//Position - 0x7DBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iVar0))
		{
			if (unk_0x9A3C64A7BB4588B3(iVar0))
			{
				iVar1 = unk_0xDE523AF6F7B269AB(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				unk_0x2B0DDE3D071497AD(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x7E14
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xDD35553224FA4A6A(108, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10f) && unk_0xE56ACE711345F330(iParam0, unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
	}
	return 0;
}

void func_211()//Position - 0x7E52
{
	func_84();
	func_8(&iLocal_243);
	if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_276))
		{
			unk_0xE30CF11C0EE14316(&iLocal_276);
		}
		if (!unk_0xA6DECE14FC9A8C51(iLocal_277))
		{
			iLocal_277 = func_60(vLocal_288, 0);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0xB3328BA8976B416C(iLocal_271[0], 1) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_59(vLocal_287);
		iLocal_75 = 5;
	}
}

void func_212()//Position - 0x7EC7
{
	if (!func_253(uLocal_298, 1024))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (func_213(uLocal_74[0]))
			{
				if (!func_163())
				{
					func_165(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_213(int iParam0)//Position - 0x7F26
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iVar0);
		if (func_214(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, int iParam1)//Position - 0x7F5B
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)//Position - 0x8268
{
	if (bParam1)
	{
		if (!func_221(iParam0, 2, 1))
		{
			func_220(iParam0, 2, 1);
		}
	}
	else if (func_221(iParam0, 2, 1))
	{
		func_216(iParam0, 2, 1);
	}
}

void func_216(int iParam0, int iParam1, bool bParam2)//Position - 0x829F
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_52() == 0)
		{
			iVar0 = func_218(func_219(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_217(func_219(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8308
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_218(int iParam0, int iParam1, int iParam2)//Position - 0x8338
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x836A
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

void func_220(int iParam0, int iParam1, bool bParam2)//Position - 0x864F
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_52() == 0)
		{
			iVar0 = func_218(func_219(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_217(func_219(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_221(int iParam0, int iParam1, bool bParam2)//Position - 0x86B8
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_52() == 0)
		{
			return unk_0xC80D31E4B587871C(func_218(func_219(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_222()//Position - 0x8718
{
	if (uLocal_74[0] == 8)
	{
		func_167("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_165(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_223()//Position - 0x8749
{
	if (!unk_0xC816B63289F7A279(iLocal_271[0]) && system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_271[0], 1)) < 10f)
	{
		unk_0x57FB41CABA25835C(iLocal_271[0], func_224());
		unk_0xF6A83791895D5AA1(iLocal_271[0], 0);
	}
}

int func_224()//Position - 0x879B
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

float func_225(int iParam0, int iParam1, bool bParam2)//Position - 0x87AB
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

int func_226(int iParam0, var uParam1, int iParam2)//Position - 0x8809
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar1 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		if (func_229(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_227(&uVar0);
			if (unk_0x6ADD12BF4D6D2587(iParam0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
				{
					if (!unk_0x7FC5297E8F508B26(iLocal_70))
					{
						unk_0x4DE114E3C7F8B7C2("BootyCall", &iLocal_70);
					}
					unk_0xF96119FCCD4D1889(2, iLocal_70, 1862763509);
					unk_0xF96119FCCD4D1889(2, 1862763509, iLocal_70);
					unk_0xCE93FCB8A8D8DF0B(iParam0, iLocal_70);
					unk_0xD68E88A8E0BE8697(iParam0, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0)//Position - 0x88C3
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_228(1);
			break;
		
		case 2:
			break;
	}
}

void func_228(bool bParam0)//Position - 0x88F6
{
	Global_103549 = 0;
	Global_103549.f_1 = -1;
	Global_103549.f_2 = -1;
	if (bParam0)
	{
		func_119(-1);
	}
}

int func_229(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x891B
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xFC1458A37D98B502();
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (!func_253(*uParam2, 1))
		{
			if (func_236(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_253(*uParam2, 2))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_253(*uParam2, 4))
		{
			if (func_234(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_253(*uParam2, 8))
		{
			if (func_233(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_253(*uParam2, 128);
		if (bParam4)
		{
			if (func_230(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_253(*uParam2, 16))
		{
			if (func_230(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_230(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8A45
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0xDE523AF6F7B269AB(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0xDE523AF6F7B269AB(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xEBE499597C718EB8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
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
	if (func_232(unk_0xFC1458A37D98B502(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x9F887157983E8EFC(iParam0) && func_231(iParam0, 1) < 1,5f)
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

float func_231(int iParam0, bool bParam1)//Position - 0x8C0D
{
	return func_225(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), iParam0, bParam1);
}

int func_232(int iParam0, int iParam1)//Position - 0x8C25
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

int func_233(int iParam0, int iParam1, var uParam2)//Position - 0x8C7A
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

int func_234(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8CC8
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
			if (unk_0x0A1D4A2F0A088C25(iParam0) || func_235(iVar1))
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

int func_235(int iParam0)//Position - 0x8E41
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
						if (func_225(unk_0xFC1458A37D98B502(), iParam0, 1) < 40f)
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

int func_236(int iParam0, var uParam1)//Position - 0x8F0F
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
			{
				if (unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 90f))
				{
					if (func_231(iParam0, 1) < uParam1->f_2)
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

void func_237(int iParam0)//Position - 0x8F94
{
	struct<4> Var0;
	
	if (unk_0xA6DECE14FC9A8C51(uLocal_278[iParam0]))
	{
		unk_0xE30CF11C0EE14316(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_238(iLocal_271[iParam0], 0, 145);
	Var0 = { func_69(uLocal_74[iParam0]) };
	unk_0x62BD54E491535B76(uLocal_278[iParam0], &Var0);
}

int func_238(int iParam0, bool bParam1, int iParam2)//Position - 0x8FE5
{
	int iVar0;
	
	iVar0 = func_239(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_239(int iParam0, bool bParam1, bool bParam2)//Position - 0x9037
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_61(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_61(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_61(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1)//Position - 0x90DB
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (unk_0x92736F90715344D4(iParam0) == func_224())
		{
			if (unk_0xB8DE76287EDC4957(iVar2, 0))
			{
				if (!unk_0xA8D0477084E86A92(iParam0, iVar2, 0) && system::vdist(vVar0, vVar1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_253(uLocal_300, 2))
	{
		fVar3 = unk_0xE97272C977DEADD3((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_241()//Position - 0x9182
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
	{
		if (!unk_0x40189ECE75CF9724())
		{
			func_183(iLocal_271[0], unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_242()//Position - 0x91D2
{
	unk_0x9B16F08390FCC31C();
	func_243();
}

void func_243()//Position - 0x91E2
{
	Global_17162.f_134 = 1;
}

int func_244(int iParam0, bool bParam1)//Position - 0x91F0
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_245(bool bParam0)//Position - 0x9238
{
	struct<8> Var0;
	
	if (!func_157(iLocal_71))
	{
		iLocal_71 = func_161();
		func_151(&iLocal_71, 0, 0, unk_0x63A6486593EC7EC3(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_253(uLocal_300, 512))
		{
			if (func_252(iLocal_71) && unk_0xEC211A86AB3726B6(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_180(&uLocal_78, 1, 0, func_181(uLocal_74[0]), 0, 1);
					func_251(&uLocal_78, func_109(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_249();
				}
				func_248(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_247())
		{
			func_71(&uLocal_300, 512);
		}
		else if ((!func_163() && func_246()) && !func_247())
		{
			func_228(1);
			func_64(2);
		}
	}
}

int func_246()//Position - 0x933D
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0x9354
{
	if (Global_15805 == 1 || Global_16772 == 1)
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0)//Position - 0x9377
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0x7B8DA957183409C6(iParam0, 1);
		if (unk_0x78F50AA8F955BEFC(iParam0, 242628503) != 1)
		{
			unk_0xFAA3EF7FF92E1F9E(&iLocal_306);
			unk_0x6931076730A4AC5D(&iLocal_306);
			unk_0x35DCE13103C5C646(0, 8000);
			unk_0x380C1E7B7740D618(0, vLocal_286, 1,5f, -1, 0,25f, 0, 1193033728);
			unk_0x1B16DD5C115FE009(iLocal_306);
			unk_0xAB30B1CF01A198C1(iParam0, iLocal_306);
		}
	}
}

void func_249()//Position - 0x93E0
{
	int iVar0;
	
	if (func_250())
	{
		return;
	}
	iVar0 = func_112(uLocal_74[0]);
	func_106(-384575792, iVar0, 6, 3, func_110(), func_109(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_250()//Position - 0x9421
{
	if (func_52() == 0)
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9436
{
	func_176(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_169(sParam3, iParam4, bParam7);
}

bool func_252(int iParam0)//Position - 0x9484
{
	return func_156(func_161(), iParam0);
}

bool func_253(var uParam0, int iParam1)//Position - 0x9496
{
	return (uParam0 && iParam1) != 0;
}

int func_254(var uParam0, bool bParam1)//Position - 0x94A5
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_282();
	func_62(&vVar0, &fVar1, bParam1);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_253(uLocal_300, 32))
		{
			func_278(&uLocal_274, func_280((*uParam0)[0], 0));
			func_277(&uLocal_274);
			func_27(&uLocal_300, 32);
			unk_0x6450931B826B49D9("mini@strip_club@idles@stripper");
			unk_0x6450931B826B49D9("gestures@f@standing@casual");
			func_276();
			return 0;
		}
		else if ((!func_275(&uLocal_274) || !unk_0x3A801AA34DD821BE("mini@strip_club@idles@stripper")) || !func_274())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!unk_0x7A419CA188B4A665(1))
			{
				return 0;
			}
		}
		if (!func_253(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = unk_0xAC992EFAD62C33BF(26, func_280((*uParam0)[0], 0), vVar0, fVar1, 1, true);
			func_268(iLocal_271[0], uLocal_74[0], 0);
			unk_0x771A86309E0CA47B(iLocal_271[iVar2], true);
			unk_0xE9B3D12A64CC7C1A(iLocal_271[0], true);
			unk_0xA37FFE314E45ED5D(iLocal_271[0], true);
			func_264(iLocal_271[0]);
			unk_0x12C9D41D52A560D6(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1,5f, -1, 1, 0, 0, 0, 0);
			unk_0x60C06BFD037BB7CF(iLocal_271[iVar2], unk_0xFC1458A37D98B502(), -1, 2048, 4);
			unk_0xF6A83791895D5AA1(iLocal_271[0], 0);
			unk_0x350CEE66BDF90273(iLocal_271[0], func_181((*uParam0)[0]));
			func_180(&uLocal_78, 1, iLocal_271[0], func_181((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0) > 100f)
		{
			if (func_179())
			{
				if (!func_253(uLocal_300, 1))
				{
					func_263(bParam1);
					func_237(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_253(uLocal_300, 64) && !func_253(uLocal_300, 512))
			{
				if (func_262(func_109((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_75() == 2)
					{
						func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_75() == 0)
					{
						func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_75() == 1)
					{
						func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_180(&uLocal_78, 3, 0, func_181((*uParam0)[0]), 0, 1);
					Var4 = { func_261() };
					func_256(&uLocal_78, func_109((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_157(iLocal_71))
				{
					if (func_252(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_180(&uLocal_78, 1, 0, func_181((*uParam0)[0]), 0, 1);
							func_251(&uLocal_78, func_109((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_249();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_247())
			{
				func_71(&uLocal_300, 64);
				func_71(&uLocal_300, 512);
			}
			else if ((!func_163() && func_246()) && !func_247())
			{
				func_255((*uParam0)[0]);
				func_228(1);
				func_64(2);
			}
			if (!func_253(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_65("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_64(1);
			}
			else if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0) < fLocal_296)
			{
				fLocal_296 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_75() == 2)
	{
		func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	else if (func_75() == 0)
	{
		func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else if (func_75() == 1)
	{
		func_180(&uLocal_78, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_255(int iParam0)//Position - 0x9928
{
	if (Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_104555.f_243[func_73() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_256(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9987
{
	var uVar0;
	var uVar1;
	
	func_176(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_260();
	if (iParam8 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_258(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_257(&uVar0, &uVar1, iParam7, bParam11);
}

int func_257(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x99E6
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_175();
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
		if (func_174(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_173();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam3)
			{
				func_126();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_172())
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
					if (Global_16014 == 0)
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
			}
			if (func_23())
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
			}
			func_171();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_170();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_175();
	}
	return 0;
}

void func_258(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9D50
{
	func_259(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_259(var uParam0)//Position - 0x9DC0
{
	Global_15753 = uParam0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
}

void func_260()//Position - 0x9DE6
{
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_15770 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
}

struct<16> func_261()//Position - 0x9E1F
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_262(int iParam0)//Position - 0x9E3D
{
	if ((Global_16870 || Global_16869) || Global_16871)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14453.f_1 == 10)
		{
			if (Global_1638 == iParam0)
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
	return 0;
}

void func_263(bool bParam0)//Position - 0x9EA1
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_81("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_81("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_81("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_81("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_264(int iParam0)//Position - 0x9F34
{
	if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_267(iParam0, 2, unk_0x63A6486593EC7EC3(0, 3));
		func_266(iParam0, 2, unk_0x63A6486593EC7EC3(0, 3));
		func_265(iParam0, 0, 0);
	}
}

void func_265(int iParam0, int iParam1, int iParam2)//Position - 0x9F6C
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 6, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0x9F91
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 3, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0x9FB6
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 8, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, bool bParam2)//Position - 0x9FDD
{
	bool bVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0xE537629E02E8DA21(iParam0);
		bVar0 = false;
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 1);
					func_272(iParam0, 2, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 4, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 1);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 2, 0);
					func_266(iParam0, 0, 2);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 2, 1);
					func_266(iParam0, 1, 2);
					func_271(iParam0, 0, 2);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 1, 2);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 1);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 2);
					func_265(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 1);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 0, 1);
					func_270(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 1, 1);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 0);
					func_267(iParam0, 1, 0);
					func_270(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x03924C68EFCBC511(iParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x03924C68EFCBC511(iParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(iParam0, 2, 0, 1, 0);
				unk_0x03924C68EFCBC511(iParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(iParam0, 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(iParam0, 8, 1, 0, 0);
				unk_0x03924C68EFCBC511(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_269(int iParam0, int iParam1, int iParam2)//Position - 0xA438
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 11, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_270(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA45F
{
	int iVar0;
	
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (iVar0 == func_244(0, 0) || iVar0 == func_244(0, 1))
	{
		if (bParam1)
		{
			func_266(iParam0, 2, 0);
			func_267(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_244(1, 0) || iVar0 == func_244(1, 1))
	{
		if (bParam1)
		{
			func_266(iParam0, 0, iParam2);
			func_265(iParam0, iParam3, 0);
			func_267(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_267(iParam0, 1, 0);
		}
	}
}

void func_271(int iParam0, int iParam1, int iParam2)//Position - 0xA503
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 4, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0xA528
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 2, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0xA54D
{
	if (unk_0xD32278ABB33D4AF1(iParam0, 0, iParam1, iParam2))
	{
		unk_0x03924C68EFCBC511(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_274()//Position - 0xA572
{
	if (unk_0xAB019B170BF1309C(func_191()))
	{
		return 1;
	}
	else if (unk_0xC316B5E3E7ACF515(func_191()))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0)//Position - 0xA59F
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

void func_276()//Position - 0xA5E6
{
	if (!unk_0xAB019B170BF1309C(func_191()))
	{
		unk_0x307EAE14C924E2E7(func_191());
	}
}

void func_277(var uParam0)//Position - 0xA602
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

int func_278(var uParam0, int iParam1)//Position - 0xA632
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
	iVar1 = func_279(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_279(var uParam0)//Position - 0xA68F
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

int func_280(int iParam0, bool bParam1)//Position - 0xA6BB
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_109(iParam0);
	if (iVar0 != 145)
	{
		return func_281(iVar0);
	}
	return func_244(0, 0);
}

int func_281(int iParam0)//Position - 0xA6EE
{
	if (!func_78(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_282()//Position - 0xA719
{
	switch (uLocal_74[0])
	{
		case 1:
			vLocal_285 = { 128,1002f, -1895,001f, 22,4811f };
			vLocal_286 = { 128,1059f, -1896,819f, 22,6792f };
			vLocal_287 = { 133,9411f, -1881,89f, 22,5257f };
			vLocal_288 = { 130,1663f, -1893,057f, 22,3748f };
			vLocal_289 = { 133,4958f, -1891,641f, 22,4252f };
			fLocal_293 = 330,5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146,293f, -1888,049f, 22,2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			vLocal_285 = { -161,9628f, -1636,501f, 33,0339f };
			vLocal_286 = { -159,9415f, -1637,307f, 33,0339f };
			vLocal_287 = { -178,6316f, -1629,522f, 32,1789f };
			vLocal_288 = { -166,1453f, -1633,102f, 32,6574f };
			vLocal_289 = { -166,6636f, -1633,229f, 32,6567f };
			fLocal_293 = 108,072f;
			fLocal_294 = 180,9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			vLocal_285 = { -198,3824f, 87,8785f, 68,7436f };
			vLocal_286 = { -197,2292f, 86,3497f, 68,7561f };
			vLocal_287 = { -200,9078f, 113,537f, 68,5518f };
			vLocal_288 = { -200,1384f, 96,9809f, 68,5203f };
			vLocal_289 = { -199,5068f, 95,7042f, 68,5193f };
			fLocal_293 = 48,99f;
			fLocal_294 = 64,3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			vLocal_285 = { -849,0348f, 510,6906f, 89,8218f };
			vLocal_286 = { -849,0408f, 508,5767f, 89,8218f };
			vLocal_287 = { -846,1005f, 520,2202f, 89,6217f };
			vLocal_288 = { -851,8972f, 512,73f, 89,6217f };
			vLocal_289 = { -851,8746f, 513,6746f, 89,6217f };
			fLocal_293 = 92,365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860,4819f, 514,2496f, 88,1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			vLocal_285 = { -28,2427f, -1555,892f, 29,6918f };
			vLocal_286 = { -24,8589f, -1556,846f, 29,6819f };
			vLocal_287 = { -41,8174f, -1575,609f, 28,2831f };
			vLocal_288 = { -25,3404f, -1556,341f, 29,6919f };
			vLocal_289 = { -27,7382f, -1570,572f, 29,3f };
			fLocal_293 = 181,352f;
			fLocal_294 = 47,9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			vLocal_285 = { 3313,487f, 5175,831f, 18,619f };
			vLocal_286 = { 3310,816f, 5176,331f, 18,619f };
			vLocal_287 = { 3334,321f, 5161,122f, 17,2996f };
			vLocal_288 = { 3317,788f, 5171,707f, 17,4471f };
			vLocal_289 = { 3318,076f, 5171,805f, 17,4385f };
			fLocal_293 = 236,4579f;
			vLocal_292 = { 3322,927f, 5148,607f, 17,3141f };
			fLocal_295 = 310,8648f;
			break;
	}
}

int func_283()//Position - 0xAA91
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_284(int iParam0, int iParam1, bool bParam2)//Position - 0xAAEF
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_288();
			}
			else
			{
				return 0;
			}
		}
		if (!func_287())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_288();
					}
					else
					{
						return 0;
					}
				}
				if (func_286())
				{
					if (!bParam2)
					{
						func_288();
					}
					else
					{
						return 0;
					}
				}
				if (func_285(155))
				{
					if (!bParam2)
					{
						func_288();
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
					func_288();
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
				func_288();
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
			func_288();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_285(int iParam0)//Position - 0xAC04
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_286()//Position - 0xAC1B
{
	return Global_2447174.f_581;
}

bool func_287()//Position - 0xAC2A
{
	return Global_1312831;
}

void func_288()//Position - 0xAC36
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_289()//Position - 0xAC42
{
	unk_0x5BB655320D4DDEF6(0);
	unk_0x087BB7BACBB5FD0B();
	func_83();
	unk_0x84CDD933AFA470D2();
	unk_0xCA107A9AAF17E75F(iLocal_284, 0);
	unk_0x4C15495E88D71C61(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), true, 1);
	unk_0x8A4311269B560FDF(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	}
	unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
	if (unk_0x6ADD12BF4D6D2587(iLocal_271[0]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_271[0], 0))
		{
			if (!func_253(uLocal_300, 8192))
			{
				unk_0x93F12E7D8D931858(iLocal_271[0], 1193033728, 0);
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_271[0], true);
			if (!unk_0x7FC5297E8F508B26(iLocal_70))
			{
				unk_0x4DE114E3C7F8B7C2("BootyCall", &iLocal_70);
			}
			unk_0xF96119FCCD4D1889(2, iLocal_70, 1862763509);
			unk_0xF96119FCCD4D1889(2, 1862763509, iLocal_70);
			unk_0xCE93FCB8A8D8DF0B(iLocal_271[0], iLocal_70);
		}
		unk_0x486F346ADFE56674(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_291(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_135(&uLocal_68);
	}
	unk_0x86B0CC3197C2106C(unk_0x9EB17624F44A8DA4(), 0);
	func_118(uLocal_74[0], -1);
	Global_103549 = 0;
	func_290(0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_290(bool bParam0)//Position - 0xAD7A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_215(iVar0, bParam0);
		iVar0++;
	}
}

void func_291(int iParam0)//Position - 0xAD9D
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

