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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char* sLocal_46 = NULL;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	vector3 vLocal_50[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<6> Local_55 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_56 = { 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_57[24] = "";
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	struct<6> Local_66[25];
	float fLocal_67 = 0f;
	struct<4> Local_68[8];
	struct<10> Local_69[36];
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	struct<7> Local_72[49];
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_79 = 0;
	int iLocal_80[4] = { 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	vector3 vLocal_93 = { 0f, 0f, 0f };
	struct<14> Local_94[27];
	struct<2> Local_95[10];
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char[] cLocal_107[8] = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<12> Local_111[5];
	var uLocal_112 = 0;
	struct<6> Local_113[20];
	bool bLocal_114 = 0;
	char* sLocal_115 = NULL;
	var uLocal_116 = 4;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 4;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 4;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 4;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 4;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 4;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 8;
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
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	vector3 vLocal_205[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char* sLocal_213 = NULL;
	struct<14> Local_214 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 3;
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
	var uLocal_235 = 21;
	var uLocal_236 = 6;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_241[5] = { 0, 0, 0, 0, 0 };
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	vector3 vLocal_250[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	struct<7> Local_254[3];
	vector3 vLocal_255[31] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_256[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_257 = NULL;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	float fLocal_268 = 0f;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 1000;
	var uLocal_280 = 1000;
	var uLocal_281 = 0;
	vector3 vLocal_282 = { 0f, 0f, 0f };
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	int iLocal_290[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_291 = NULL;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	float fLocal_303 = 0f;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	
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
	fLocal_67 = 0,45f;
	iLocal_79 = -1;
	iLocal_88 = 1;
	vLocal_93 = { 0f, 0f, 0f };
	iLocal_110 = -1;
	iLocal_265 = -1;
	vLocal_282 = { -1110,31f, -1603,043f, 3,6765f };
	fLocal_283 = 95f;
	fLocal_284 = 0,27f;
	iLocal_296 = -1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_651();
		func_650(2);
	}
	unk_0xD941F8E30D7231AD("EXTRASUNNY", 45f);
	iLocal_92 = 0;
	func_647();
	func_645();
	if (func_644())
	{
		iVar1 = func_643();
		while (!unk_0x9F0887BCBFCF3C2F(0))
		{
			system::wait(0);
		}
		if (Global_87155 == 1)
		{
			iVar1++;
		}
		switch (iVar1)
		{
			case 0:
				iLocal_92 = 1;
				func_588(1, 1, 0);
				break;
			
			case 1:
				iLocal_92 = 2;
				func_588(1, 1, 0);
				break;
			
			case 2:
				if (Global_87155)
				{
					bVar0 = true;
					iLocal_92 = 6;
				}
				else
				{
					iLocal_92 = 7;
				}
				func_588(1, 1, 0);
				break;
			
			case 3:
				iLocal_92 = 9;
				func_588(1, 1, 0);
				break;
			
			case 4:
				if (Global_87155)
				{
					bVar0 = true;
				}
				iLocal_92 = 11;
				func_588(1, 1, 0);
				break;
		}
	}
	else if (func_587(0))
	{
		while (!unk_0x9F0887BCBFCF3C2F(0))
		{
			system::wait(0);
		}
		iLocal_92 = 0;
		func_588(1, 0, 1);
		bVar0 = true;
	}
	else
	{
		func_585(0);
	}
	if (!bVar0)
	{
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x59C3AC31C7544A28(500);
		}
	}
	while (true)
	{
		unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		if (!func_584(138))
		{
			if (unk_0x8E8C94609BA4BEA9(1) == 4 || unk_0x8E8C94609BA4BEA9(0) == 4)
			{
				func_583(138, 1);
			}
		}
		func_581();
		func_578();
		func_122();
		func_35();
		func_34();
		func_24();
		func_23();
		func_22();
		unk_0x48D75120C879E65E("m_Repossession", 0);
		if (iLocal_74 > unk_0x53C562FD2B9E3AB0())
		{
			unk_0x391612227A0274F1();
		}
		func_21(unk_0xFC1458A37D98B502(), 17);
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			func_21(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 12);
			func_20(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 16);
		}
		else
		{
			func_21(0, 12);
			func_20(0, 16);
		}
		if (bLocal_114)
		{
			func_1(sLocal_115, iLocal_87);
		}
		system::wait(0);
	}
}

void func_1(char* sParam0, int iParam1)//Position - 0x282
{
	int iVar0;
	
	while (!unk_0x8810DC630928B398("ARM2_MISSION_FAIL"))
	{
		func_19(21, 0);
	}
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		sParam0 = "ARM2_FAIL";
	}
	iVar0 = (unk_0x53C562FD2B9E3AB0() + iParam1);
	if (iParam1 > 0)
	{
		while (unk_0x53C562FD2B9E3AB0() < iVar0)
		{
			system::wait(0);
		}
	}
	func_3(sParam0);
	while (!func_2())
	{
		system::wait(0);
	}
	func_650(1);
}

int func_2()//Position - 0x2E8
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92833 == 7 || Global_92833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_3(char* sParam0)//Position - 0x315
{
	func_18(sParam0);
	func_4(0);
}

void func_4(int iParam0)//Position - 0x328
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_587(0))
	{
		iVar0 = func_17();
		if (!func_5(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_5(int iParam0)//Position - 0x36D
{
	int iVar0;
	int iVar1;
	
	func_10();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_9(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_6(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_6(var uParam0, int iParam1)//Position - 0x484
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_8(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_7(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_7(var uParam0)//Position - 0x64D
{
	*uParam0 = -15;
}

int func_8(int iParam0, var uParam1, float fParam2)//Position - 0x65B
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_8(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_8(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_9(int iParam0, bool bParam1)//Position - 0xFCA
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_10()//Position - 0x1008
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_11())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_11())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

int func_11()//Position - 0x10EF
{
	func_12();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_12()//Position - 0x1108
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_16(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_15(unk_0xFC1458A37D98B502());
			if (func_14(iVar0) && (!func_13(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_14(Global_104555.f_2353.f_539.f_4301))
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

bool func_13(int iParam0)//Position - 0x1205
{
	return Global_35861 == iParam0;
}

bool func_14(int iParam0)//Position - 0x1213
{
	return iParam0 < 3;
}

int func_15(int iParam0)//Position - 0x121F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0x125C
{
	if (func_14(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17()//Position - 0x1286
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(char* sParam0)//Position - 0x12BB
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

void func_19(int iParam0, int iParam1)//Position - 0x12FA
{
	iParam0 = iParam0;
	system::wait(iParam1);
}

void func_20(int iParam0, int iParam1)//Position - 0x130C
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_21(int iParam0, int iParam1)//Position - 0x131E
{
	int iVar0;
	
	Global_55916 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (iParam1 == -1 || Global_67999[iVar0 /*9*/] == iParam1)
		{
			if (Global_67999[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67999[iVar0 /*9*/].f_6 = iParam0;
				Global_67999[iVar0 /*9*/].f_7 = 1;
				Global_67999[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_22()//Position - 0x1389
{
	if (iLocal_285)
	{
		if (iLocal_286)
		{
			if (unk_0xAAB7D68F04F8C8BA(sLocal_288))
			{
				if (unk_0x8810DC630928B398(sLocal_288))
				{
					iLocal_285 = 0;
					iLocal_286 = 0;
				}
			}
		}
		else if (unk_0x8810DC630928B398(sLocal_288))
		{
			iLocal_285 = 0;
		}
	}
	else if (iLocal_287)
	{
		if (unk_0xAAB7D68F04F8C8BA(sLocal_289))
		{
			iLocal_287 = 0;
		}
	}
}

void func_23()//Position - 0x13E1
{
	var uVar0;
	
	switch (iLocal_301)
	{
		case 0:
			unk_0x050E4C90F7375618(-913931260, joaat("prop_arm_gate_l"), -1127,1f, -1586,96f, 5,09f, 0, 1, 0);
			unk_0x050E4C90F7375618(-2077066915, joaat("prop_arm_gate_l"), -1131,99f, -1590,4f, 5,09f, 0, 1, 0);
			iLocal_301 = 1;
			break;
		
		case 2:
			if (unk_0x546F10CBA6C484DA(-913931260) && unk_0x546F10CBA6C484DA(-2077066915))
			{
				unk_0x99B6EAC23065A02E(-913931260, 0f, 0, 0);
				unk_0xB94AAB49E0BB01DB(-913931260, 4, 0, 1);
				unk_0x99B6EAC23065A02E(-2077066915, 0f, 0, 0);
				unk_0xB94AAB49E0BB01DB(-2077066915, 4, 0, 1);
				iLocal_301 = 1;
			}
			else
			{
				if (!unk_0x546F10CBA6C484DA(-913931260))
				{
					unk_0x050E4C90F7375618(-913931260, joaat("prop_arm_gate_l"), -1127,1f, -1586,96f, 5,09f, 0, 1, 0);
				}
				if (!unk_0x546F10CBA6C484DA(-2077066915))
				{
					unk_0x050E4C90F7375618(-2077066915, joaat("prop_arm_gate_l"), -1131,99f, -1590,4f, 5,09f, 0, 1, 0);
				}
			}
			break;
		
		case 3:
			unk_0xB94AAB49E0BB01DB(-913931260, 0, 0, 1);
			unk_0xB94AAB49E0BB01DB(-2077066915, 0, 0, 1);
			iLocal_301 = 1;
			break;
		
		case 5:
			switch (iLocal_302)
			{
				case 0:
					fLocal_303 = 1f;
					iLocal_302 = 1;
					break;
				
				case 1:
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
					{
						if (!unk_0x0F3033474C49912D(Local_94[4 /*14*/], -1133,818f, -1583,41f, 2,790712f, -1123,055f, -1598,921f, 5,836129f, 7,625f, 0, 1, 0))
						{
							iLocal_302 = 2;
						}
					}
					break;
				
				case 2:
					fLocal_303 = (fLocal_303 + (-0,13f * system::timestep()));
					if (fLocal_303 <= 0f)
					{
						fLocal_303 = 0f;
						iLocal_301 = 1;
					}
					unk_0x99B6EAC23065A02E(-913931260, fLocal_303, 0, 1);
					unk_0x99B6EAC23065A02E(-2077066915, (fLocal_303 * -1f), 0, 1);
					break;
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
			{
				switch (iLocal_302)
				{
					case 0:
						fLocal_303 = 0f;
						iLocal_302 = 1;
						break;
					
					case 1:
						if (unk_0x0F3033474C49912D(Local_94[4 /*14*/], -1129,023f, -1590,408f, 2,9455f, -1123,055f, -1598,921f, 5,836129f, 7,625f, 0, 1, 0))
						{
							fLocal_303 = (fLocal_303 + (0,13f * system::timestep()));
							if (fLocal_303 >= 1f)
							{
								fLocal_303 = 1f;
								iLocal_301 = 5;
							}
							unk_0x99B6EAC23065A02E(-913931260, fLocal_303, 0, 1);
							unk_0x99B6EAC23065A02E(-2077066915, (fLocal_303 * -1f), 0, 1);
						}
						break;
					}
			}
			break;
		
		case 6:
			unk_0x99B6EAC23065A02E(-913931260, 0f, 0, 0);
			unk_0xB94AAB49E0BB01DB(-913931260, 0, 0, 1);
			unk_0x99B6EAC23065A02E(-2077066915, 0f, 0, 0);
			unk_0xB94AAB49E0BB01DB(-2077066915, 0, 0, 1);
			iLocal_301 = 1;
			break;
		
		case 7:
			unk_0xB94AAB49E0BB01DB(-913931260, 0, 0, 1);
			unk_0xB94AAB49E0BB01DB(-2077066915, 0, 0, 1);
			iLocal_301 = 1;
			break;
		
		case 8:
		case 9:
		case 1:
			if (unk_0x6ADD12BF4D6D2587(Local_94[4 /*14*/]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
				{
					if (unk_0x0F3033474C49912D(Local_94[4 /*14*/], -1129,023f, -1590,408f, 2,9455f, -1123,055f, -1598,921f, 5,836129f, 7,625f, 0, 1, 0))
					{
						iLocal_301 = 4;
					}
				}
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x90D5DFB054818BA7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 7f)
				{
					if (iLocal_301 != 8 && iLocal_301 != 9)
					{
						iLocal_301 = 8;
						unk_0xB94AAB49E0BB01DB(-913931260, 0, 0, 1);
						unk_0xB94AAB49E0BB01DB(-2077066915, 0, 0, 1);
					}
				}
				else if (iLocal_301 == 8 && iLocal_301 != 9)
				{
					iLocal_301 = 2;
				}
			}
			else if (iLocal_301 == 8 && iLocal_301 != 9)
			{
				iLocal_301 = 2;
			}
			if ((iLocal_301 == 8 || iLocal_301 == 1) || iLocal_301 == 2)
			{
				uVar0 = uVar0;
				if (unk_0x53C562FD2B9E3AB0() > iLocal_73)
				{
					unk_0x1ECA6D9C81DFDDD2(joaat("prop_arm_gate_l"), -1131,99f, -1590,4f, 5,09f, &uVar0, &fLocal_303);
					if (unk_0xE97272C977DEADD3(fLocal_303) > 0,02f)
					{
						iLocal_301 = 9;
					}
					unk_0x1ECA6D9C81DFDDD2(joaat("prop_arm_gate_l"), -1127f, -1587f, 5f, &uVar0, &fLocal_303);
					if (unk_0xE97272C977DEADD3(fLocal_303) > 0,02f)
					{
						iLocal_301 = 9;
					}
					iLocal_73 = unk_0x53C562FD2B9E3AB0() + 200;
				}
			}
			break;
	}
}

void func_24()//Position - 0x185F
{
	var uVar0;
	
	if (unk_0xF491DD47B88AA84E() || func_28())
	{
		if (!unk_0xF491DD47B88AA84E())
		{
			iLocal_300 = 0;
		}
		else if (iLocal_300 == 0)
		{
			iLocal_300 = unk_0x53C562FD2B9E3AB0() + 3000;
		}
		if (func_27("ARM2_HLP09"))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0xF2B58F79D29425B4(0, 25))
					{
						unk_0x3E80C2F7BC665259(0);
						if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
						{
							func_26("ARM2_HLP19", 12000);
						}
					}
				}
				else
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
		}
		if (func_27("ARM2_HLP19"))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && unk_0x53C562FD2B9E3AB0() > iLocal_300)
			{
				unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &uVar0, 1);
				if (((unk_0xF2B58F79D29425B4(0, 25) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4)) && unk_0xED8F1048B699E467()) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1091,086f, -1671,047f, 3,0388f, -1069,428f, -1653,939f, 6,0045f, 9,625f, 0, 1, 0))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
		}
		if (func_27("ARM2_HLP16"))
		{
			if (func_25(3) || (unk_0x191BE1BC8F26F3C1(Local_94[13 /*14*/], 0) && unk_0x191BE1BC8F26F3C1(Local_94[14 /*14*/], 0)))
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_300)
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
		}
		if (func_27("ARM2_HLP13"))
		{
			if (unk_0xAA0BDFF32B6BC02A(-1100,541f, -1634,196f, 3,5236f, 20f) > 2)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_208))
				{
					unk_0x452336926718D62A(&iLocal_208);
				}
			}
		}
	}
}

int func_25(int iParam0)//Position - 0x19E9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/] == iParam0)
		{
			if (Local_113[iVar0 /*6*/].f_1 == 1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_26(char* sParam0, int iParam1)//Position - 0x1A22
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_27(char* sParam0)//Position - 0x1A39
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_28()//Position - 0x1A4C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_103207)
	{
		if (func_29(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x1A7A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x74C475EB8E73D398(&(Global_103207[iParam0 /*28*/]), "") && !unk_0x8C1C362CA8299475(&(Global_103207[iParam0 /*28*/])))
	{
		if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
			{
				return func_33(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4), Global_103207[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_32(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
		{
			return func_31(iVar0, &(Global_103207[iParam0 /*28*/]), Global_103207[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_30(iVar0, &(Global_103207[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_30(int iParam0, char* sParam1)//Position - 0x1B57
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_31(int iParam0, char* sParam1, int iParam2)//Position - 0x1B6D
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_32(int iParam0, char* sParam1, char* sParam2)//Position - 0x1B89
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_33(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1BA5
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	return unk_0x0683D2027E169355((1 + iParam0));
}

void func_34()//Position - 0x1BC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_94)
	{
		if (unk_0xA6DECE14FC9A8C51(Local_94[iVar0 /*14*/].f_1))
		{
			if (unk_0x6ADD12BF4D6D2587(Local_94[iVar0 /*14*/]))
			{
				if (unk_0x3AB6A1A9084FB0A4(Local_94[iVar0 /*14*/]))
				{
					unk_0xE30CF11C0EE14316(&(Local_94[iVar0 /*14*/].f_1));
				}
			}
			else
			{
				unk_0xE30CF11C0EE14316(&(Local_94[iVar0 /*14*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_35()//Position - 0x1C2C
{
	switch (iLocal_305)
	{
		case 0:
			if (iLocal_92 >= 2)
			{
				func_36(1, "Follow Lemar down the alley", 0, 0, 0, 1);
				iLocal_305++;
			}
			break;
		
		case 1:
			if (iLocal_92 >= 7)
			{
				func_36(2, "Alleyway shootout", 0, 0, 0, 1);
				iLocal_305++;
			}
			break;
		
		case 2:
			if (iLocal_92 >= 9)
			{
				func_36(3, "Chase bike", 1, 0, 0, 1);
				iLocal_305++;
			}
			break;
	}
}

void func_36(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1CA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_121(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_119(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_117(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, iVar2, Global_92870, iParam0);
		}
		else
		{
			iVar4 = func_112(unk_0x436287B7DB306165(), 1);
			if (iVar4 != -1)
			{
				Global_104555.f_18544[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_111(iVar4)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar5, 0, Global_92870, iParam0);
			}
			else
			{
				iVar6 = func_110(&(Global_92833.f_3));
				if (iVar6 > -1)
				{
					Global_104555.f_24956.f_4[iVar6] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_37(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_37(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1E1B
{
	func_38(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_38(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x1E37
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_11();
	uParam0->f_1 = func_99();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_73(&(uParam0->f_2869), 0);
		func_72(unk_0xFC1458A37D98B502());
		func_65(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_64())
		{
			func_57(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_40(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_39(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_39(var uParam0)//Position - 0x2CBF
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CE1
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_15(iParam2);
	}
	if (func_54(iParam2, &iVar0, iParam3, iParam5))
	{
		func_41(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_41(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_41(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2D69
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_43(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_42(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x2DA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_43(var uParam0, int iParam1, int iParam2)//Position - 0x2DD7
{
	func_49(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_46(iParam1, 145, 0);
	uParam0->f_11 = func_45(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_44(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_44(int iParam0)//Position - 0x2EB3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x2EF5
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

int func_46(int iParam0, int iParam1, int iParam2)//Position - 0x2F58
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_47(iParam1, iParam2))
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

int func_47(int iParam0, int iParam1)//Position - 0x2FE6
{
	struct<82> Var0;
	
	if (func_14(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_48(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_48(int iParam0, var uParam1, int iParam2)//Position - 0x3028
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_49(int iParam0, var uParam1)//Position - 0x3281
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_53(uParam1);
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
		if (uParam1->f_65 == -1 && !func_52(uParam1->f_66))
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
		func_51(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_50(iVar0 + 1));
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

int func_50(int iParam0)//Position - 0x352C
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

int func_51(int iParam0, var uParam1, var uParam2)//Position - 0x35DC
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

int func_52(int iParam0)//Position - 0x36B6
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

void func_53(var uParam0)//Position - 0x36D6
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

int func_54(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3786
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_55(*uParam1, func_11(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1, bool bParam2)//Position - 0x38B5
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_56(iParam1, iVar0, &sVar1, &iVar2))
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

int func_56(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3926
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

void func_57(int iParam0, var uParam1, int iParam2)//Position - 0x39FE
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_15(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_63(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_62(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_14(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_61(161, -1))
			{
				uParam1->f_59 = func_58(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_58(749, Global_70668, 0);
			}
			uParam1->f_60 = func_58(750, Global_70668, 0);
			uParam1->f_61 = func_58(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_61(161, -1))
			{
				uParam1->f_59 = func_58(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_58(749, Global_70668, 0);
			}
		}
	}
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x3BA8
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(var uParam0)//Position - 0x3BDA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_60();
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

int func_60()//Position - 0x3C0E
{
	return Global_1312736;
}

int func_61(int iParam0, int iParam1)//Position - 0x3C1A
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_59(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_62(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3C46
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_63(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x4190
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_64()//Position - 0x43D1
{
	func_12();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_65(int iParam0, bool bParam1)//Position - 0x43EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_66(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_66(int iParam0, var uParam1)//Position - 0x44DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_71(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_71(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_69(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_69(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x359D12B4F89DA5D6();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_68(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar5))
					{
						if (unk_0x768809DD20D4F552(iVar5, iVar1, &Var8))
						{
							if (!func_67(Var8.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, Var8.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_67(int iParam0)//Position - 0x4767
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x4802
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x4976
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_70(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_67(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_70(int iParam0, var uParam1)//Position - 0x54E7
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_71(int iParam0)//Position - 0x5522
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_72(int iParam0)//Position - 0x5796
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_73(var uParam0, int iParam1)//Position - 0x57D2
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_77(&iVar0))
		{
			if (func_75(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_11();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_74(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_74(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5D2D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(vParam0))
	{
		iVar0 = unk_0xC0765AFBFA616644(vParam2, sParam1);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_75(int iParam0, var uParam1, var uParam2)//Position - 0x5D71
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_76(*uParam1, 0f, 0f, 0f, 0);
}

bool func_76(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6428
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_77(var uParam0)//Position - 0x646F
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_98())
		{
			*uParam0 = func_83(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_82(*uParam0) && !func_78(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_78(int iParam0)//Position - 0x64CA
{
	return func_79(iParam0, 0, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x64DA
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_81() == 0)
		{
			return unk_0xC80D31E4B587871C(func_58(func_80(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x653A
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

int func_81()//Position - 0x681F
{
	return Global_25233;
}

int func_82(int iParam0)//Position - 0x682A
{
	return func_79(iParam0, 5, 1);
}

int func_83(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x683A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_97(iVar0))
		{
			if (!bParam3 || func_96(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_84(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_84(int iParam0, bool bParam1)//Position - 0x68DC
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_95(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_94())
			{
				if (func_93(Global_1595538))
				{
					return func_86(2, 2);
				}
				else if (func_85(Global_1595538))
				{
					return func_86(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_85(int iParam0)//Position - 0x6E7B
{
	if (iParam0 != func_94())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_86(int iParam0, int iParam1)//Position - 0x6ED9
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_94())
	{
		if (iParam1 == 3)
		{
			if (func_87(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_87(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_87(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_87(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x6F87
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_92(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_92(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_90(iParam0) };
	}
	else
	{
		Var2 = { func_89(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_88(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_88(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_88(vector3 vParam0, float fParam1)//Position - 0x701C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_89(int iParam0)//Position - 0x7060
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_90(int iParam0)//Position - 0x71E4
{
	return func_91(iParam0);
}

struct<6> func_91(int iParam0)//Position - 0x71F2
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_92(int iParam0, var uParam1)//Position - 0x7CB9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x7D3B
{
	if (iParam0 != func_94())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x7D99
{
	return -1;
}

Vector3 func_95(int iParam0)//Position - 0x7DA2
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_96(int iParam0)//Position - 0x7F3F
{
	return func_79(iParam0, 0, 0);
}

int func_97(int iParam0)//Position - 0x7F4F
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

bool func_98()//Position - 0x8286
{
	return Global_92885.f_315 > 0;
}

var func_99()//Position - 0x8297
{
	var uVar0;
	
	func_109(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_108(&uVar0, unk_0x95327550F0F2BE7C());
	func_107(&uVar0, unk_0x674C9438180770FE());
	func_102(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_101(&uVar0, unk_0xEAF455949B108589());
	func_100(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_100(var uParam0, int iParam1)//Position - 0x82DD
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

void func_101(var uParam0, int iParam1)//Position - 0x8363
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_102(var uParam0, int iParam1)//Position - 0x8396
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_106(*uParam0);
	iVar1 = func_104(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_103(int iParam0, int iParam1)//Position - 0x83E7
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

var func_104(int iParam0)//Position - 0x8489
{
	return (system::shift_right(iParam0, 26) & 31 * func_105(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_105(bool bParam0, int iParam1, int iParam2)//Position - 0x84AE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_106(var uParam0)//Position - 0x84C5
{
	return uParam0 & 15;
}

void func_107(var uParam0, int iParam1)//Position - 0x84D2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_108(var uParam0, int iParam1)//Position - 0x850C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_109(var uParam0, int iParam1)//Position - 0x8547
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_110(char* sParam0)//Position - 0x8583
{
	if (unk_0x74C475EB8E73D398("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x74C475EB8E73D398("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x74C475EB8E73D398("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_111(int iParam0)//Position - 0x85D9
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

int func_112(char* sParam0, int iParam1)//Position - 0x8A25
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x8B948C59217A295D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_113(iVar0, &sVar1);
		if (unk_0x8B948C59217A295D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_113(int iParam0, var uParam1)//Position - 0x8A6E
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9C23
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

int func_115(int iParam0)//Position - 0x9CB4
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

struct<2> func_116(int iParam0)//Position - 0x9FFA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_111(iParam0) };
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

int func_117(int iParam0)//Position - 0xA031
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_118(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_118(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_118(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_118(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_118(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0xA0ED
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_119(char* sParam0, bool bParam1)//Position - 0xA141
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_120(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_120(int iParam0, bool bParam1)//Position - 0xA16B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83766[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_121(bool bParam0)//Position - 0xA1A1
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

void func_122()//Position - 0xA423
{
	switch (iLocal_92)
	{
		case 0:
			if (func_573())
			{
				func_568(14);
			}
			break;
		
		case 1:
			if (func_567())
			{
				func_568(14);
			}
			break;
		
		case 2:
			if (func_566())
			{
				func_568(14);
			}
			break;
		
		case 3:
			if (func_566())
			{
				func_568(14);
			}
			break;
		
		case 4:
			if (func_566())
			{
				func_568(14);
			}
			break;
		
		case 5:
			if (func_566())
			{
				func_568(14);
			}
			break;
		
		case 6:
			if (func_559())
			{
				func_568(14);
			}
			break;
		
		case 7:
			if (func_556())
			{
				func_568(14);
			}
			break;
		
		case 8:
			if (func_556())
			{
				func_568(14);
			}
			break;
		
		case 9:
			if (func_555())
			{
				func_568(14);
			}
			break;
		
		case 10:
			if (func_259())
			{
				func_568(14);
			}
			break;
		
		case 11:
			if (func_164())
			{
				func_568(14);
			}
			break;
		
		case 12:
			func_161();
			break;
	}
	unk_0x1D29C781A978C4FB(3, 0);
	unk_0x1D29C781A978C4FB(5, 0);
	func_160();
	func_123(0);
}

void func_123(int iParam0)//Position - 0xA55D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 19;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Local_113[iVar0 /*6*/] == iParam0)
			{
				iVar1 = iVar0;
				iVar2 = iVar0;
			}
			iVar0++;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Local_113[iVar0 /*6*/].f_1 == 1)
			{
				if (iLocal_92 >= Local_113[iVar0 /*6*/].f_5)
				{
					Local_113[iVar0 /*6*/].f_2 = 99;
				}
				switch (Local_113[iVar0 /*6*/])
				{
					case 1:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_92 == 1)
								{
									if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1139,074f, -1575,961f, 3,3289f, true) < 200f)
									{
										func_585(2);
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								else
								{
									if (iLocal_51 < 2)
									{
										func_585(2);
									}
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (!iLocal_52)
								{
									unk_0x247EAA2E93D4A021(-1101,813f, -1618,129f, 3,5544f, 3f, 1, 0, 0, false);
									func_159(3, 12, 0);
									unk_0x8D3373CFE9542320(Vector(3,943655f, -1586,096f, -1131,871f) - Vector(1,125f, 6,6875f, 5,5625f), Vector(3,943655f, -1586,096f, -1131,871f) + Vector(1,125f, 6,6875f, 5,5625f), 0, 0);
									unk_0x8D3373CFE9542320(Vector(4,110459f, -1656,14f, -1090,723f) - Vector(1f, 2,125f, 2,125f), Vector(4,110459f, -1656,14f, -1090,723f) + Vector(1f, 2,125f, 2,125f), 0, 0);
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0xCFF0CD14B439821D(Local_94[2 /*14*/], 1, 1);
									}
									unk_0xCB389937EDB1519A(Vector(4,7285f, -1719,19f, -1078,01f) - Vector(20f, 50f, 50f), Vector(4,7285f, -1719,19f, -1078,01f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									unk_0xCB389937EDB1519A(Vector(4,712814f, -1595,976f, -1077,122f) - Vector(20f, 50f, 50f), Vector(4,712814f, -1595,976f, -1077,122f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									unk_0xCB389937EDB1519A(Vector(4,623703f, -1649,837f, -1144,853f) - Vector(20f, 50f, 50f), Vector(4,623703f, -1649,837f, -1144,853f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									unk_0xCB389937EDB1519A(Vector(4,776398f, -1654,28f, -1018,07f) - Vector(20f, 50f, 50f), Vector(4,776398f, -1654,28f, -1018,07f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
									unk_0xCB389937EDB1519A(-2000f, -1846f, 68f, -1120f, -580f, 83f, 0, 1, 1, 1);
									unk_0x247EAA2E93D4A021(-1090,982f, -1632,927f, 3,7328f, 2f, 1, 0, 0, false);
									unk_0x247EAA2E93D4A021(-1100,893f, -1618,562f, 3,7723f, 5f, 1, 0, 0, false);
									if (iLocal_92 <= 4)
									{
										func_158(1, joaat("bison"), -1090,038f, -1634,969f, 4,1764f, 125,6f, -1027080192);
										unk_0xFBA991D3A851E195(Local_95[1 /*2*/], 1);
										unk_0x1E7A8525FB41AAFE(Local_95[1 /*2*/], 58, 63);
										Local_94[4 /*14*/] = unk_0x00D1A9572426E8DD(Local_95[1 /*2*/], 26, iLocal_259, -1, 1, true);
										Local_94[5 /*14*/] = unk_0x00D1A9572426E8DD(Local_95[1 /*2*/], 26, iLocal_259, 0, 1, true);
										unk_0xAE6EBBBBD8B9FB30(Local_94[4 /*14*/], 3, 0);
										unk_0xAE6EBBBBD8B9FB30(Local_94[5 /*14*/], 3, 0);
										unk_0xBAB8785EE2F06BBE(Local_95[1 /*2*/], 1);
										unk_0xA15269351F50F113(Local_95[1 /*2*/], false, 1, 0);
										unk_0x4BEFCD5DAE410A90(Local_95[1 /*2*/], 3);
										unk_0xAE6EBBBBD8B9FB30(Local_94[4 /*14*/], 14, 0);
										unk_0xAE6EBBBBD8B9FB30(Local_94[5 /*14*/], 14, 0);
									}
									unk_0x050E4C90F7375618(-967780114, joaat("prop_gar_door_03_ld"), -1074,65f, -1676,13f, 4,66f, 0, 1, 0);
									func_158(2, joaat("bison"), -1078,228f, -1651,632f, 4,192808f, -56,0181f, -1027080192);
									unk_0x1E7A8525FB41AAFE(Local_95[2 /*2*/], 124, 124);
									unk_0x4BEFCD5DAE410A90(Local_95[2 /*2*/], 7);
									unk_0x6862DF5504F63883(Local_95[2 /*2*/], 1);
									if (iLocal_92 <= 8)
									{
										func_158(6, joaat("penumbra"), -1090,608f, -1631,216f, 3,7328f, 307,1f, -1027080192);
										unk_0xD765CD854AD335A4(Local_95[6 /*2*/], 1);
										unk_0x1E7A8525FB41AAFE(Local_95[6 /*2*/], 73, 73);
										unk_0x4BEFCD5DAE410A90(Local_95[6 /*2*/], 7);
										unk_0x6862DF5504F63883(Local_95[6 /*2*/], 1);
										unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], true);
									}
									iLocal_75 = unk_0x068179DC75448F03(-1090,411f, -1648,12f, 3,507f, 2,225f, 3,1754f, 1f, func_157(36f), 0, 7);
									iLocal_76 = unk_0x068179DC75448F03(-1095f, -1655f, 4f, 14,648f, 8,071f, 2f, func_157(33,48f), 0, 7);
									func_146(94, 4);
									func_146(95, 4);
									if (unk_0xB8B3E5529EDB87D4(uLocal_77))
									{
										unk_0x60727D07B2D72C82(uLocal_77);
									}
									iLocal_263 = 0;
									unk_0x872F1C1F8587CCC7(&iLocal_263, 1);
									uLocal_77 = unk_0x85CE54AA667066FE(joaat("pickup_armour_standard"), -1064,439f, -1664,484f, 3,6409f, -90f, 0f, 83,88f, iLocal_263, -1, 2, 1, 0);
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 2:
								if (!unk_0x6ADD12BF4D6D2587(iLocal_209))
								{
									iLocal_209 = unk_0xCBD07018689DF383(-1067f, -1665,61f, 4,79f, 1f, joaat("prop_gar_door_01"), 1, 0, 1);
								}
								if (!unk_0x6ADD12BF4D6D2587(iLocal_210))
								{
									iLocal_210 = unk_0xCBD07018689DF383(-1064,76f, -1668,76f, 4,79f, 1f, joaat("prop_gar_door_02"), 1, 0, 1);
								}
								if (unk_0x6ADD12BF4D6D2587(iLocal_209) && unk_0x6ADD12BF4D6D2587(iLocal_210))
								{
									unk_0x1A0806871323CD16(iLocal_209, true);
									unk_0x1A0806871323CD16(iLocal_210, true);
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 2:
						iVar3 = joaat("weapon_unarmed");
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								Local_113[iVar0 /*6*/].f_2++;
								break;
							
							case 1:
								unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar3, 1);
								if (iVar3 != joaat("weapon_unarmed"))
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 2:
								if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*6*/].f_3 + 3000 || !unk_0xF491DD47B88AA84E())
								{
									if (unk_0xF042D4F77E86ED49())
									{
										func_26("ARM2_HLP18ALT", 12000);
									}
									else
									{
										func_26("ARM2_HLP18", 12000);
									}
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 3:
								if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()) || unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
								{
									Local_113[iVar0 /*6*/].f_2++;
									Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 1000;
								}
								break;
							
							case 4:
								if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*6*/].f_3)
								{
									if (func_27("ARM2_HLP18") || func_27("ARM2_HLP18ALT"))
									{
										unk_0x3E80C2F7BC665259(1);
									}
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 4:
						if (unk_0x6ADD12BF4D6D2587(iLocal_85))
						{
							if ((unk_0xCA61C7E425DAB6B3(uLocal_206) && unk_0x20D62902F28677D2(uLocal_206) == 10) || iLocal_92 == 9)
							{
								unk_0x918A5136E2680810(iLocal_85);
								Local_113[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					
					case 3:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (iLocal_92 > 1)
								{
									uLocal_206 = unk_0x0B4BABF632AE674E(-1093,4f, -1653,1f, 3f, 10f, "DES_Scaffolding");
									if (unk_0xCA61C7E425DAB6B3(uLocal_206))
									{
										unk_0xD0C906ABF8DD7B95(uLocal_206, 2);
										func_139(79, 0, 0, 1, 0);
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								break;
							
							case 1:
								if (unk_0xCA61C7E425DAB6B3(uLocal_206))
								{
									if (unk_0x20D62902F28677D2(uLocal_206) == 3)
									{
										unk_0xD0C906ABF8DD7B95(uLocal_206, 4);
									}
								}
								if (unk_0xCA61C7E425DAB6B3(uLocal_206))
								{
									if (unk_0x20D62902F28677D2(uLocal_206) == 5)
									{
										Local_113[iVar0 /*6*/].f_2 = 2;
									}
								}
								break;
							
							case 2:
								if (unk_0xCA61C7E425DAB6B3(uLocal_206))
								{
									if (unk_0x20D62902F28677D2(uLocal_206) == 5)
									{
										if (unk_0x31DBB84AFB5DFAB7(-1087,801f, -1655,349f, 6,6f, -1089,401f, -1654,464f, 7,555488f, 1f, 1))
										{
											iLocal_85 = unk_0xCBD07018689DF383(-1081,018f, -1647,606f, 4,1603f, 0,5f, -1268884662, 1, 0, 1);
											if (unk_0x6ADD12BF4D6D2587(iLocal_85))
											{
												if (!unk_0x191BE1BC8F26F3C1(iLocal_85, 0))
												{
													unk_0x86C66B2AA0BF4656(iLocal_85, 1);
												}
											}
											Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 250;
											Local_113[iVar0 /*6*/].f_2 = 3;
										}
										if (unk_0x34D9850FEBB1F859(-1, -1087,801f, -1655,349f, 6,691953f, -1089,401f, -1654,464f, 7,555488f, 1f))
										{
											if (((unk_0x34D9850FEBB1F859(0, -1087,801f, -1655,349f, 6,691953f, -1089,401f, -1654,464f, 7,555488f, 1f) || unk_0x34D9850FEBB1F859(4, -1087,801f, -1655,349f, 6,691953f, -1089,401f, -1654,464f, 7,555488f, 1f)) || unk_0x34D9850FEBB1F859(1, -1087,801f, -1655,349f, 6,691953f, -1089,401f, -1654,464f, 7,555488f, 1f)) || unk_0x34D9850FEBB1F859(2, -1087,801f, -1655,349f, 6,691953f, -1089,401f, -1654,464f, 7,555488f, 1f))
											{
												iLocal_85 = unk_0xCBD07018689DF383(-1081,018f, -1647,606f, 4,1603f, 0,5f, -1268884662, 1, 0, 1);
												if (unk_0x6ADD12BF4D6D2587(iLocal_85))
												{
													if (!unk_0x191BE1BC8F26F3C1(iLocal_85, 0))
													{
														unk_0x86C66B2AA0BF4656(iLocal_85, 1);
													}
												}
												Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 250;
												Local_113[iVar0 /*6*/].f_2 = 3;
											}
										}
										if (Local_113[iVar0 /*6*/].f_2 == 3)
										{
											unk_0x0662098C9EF126B4(3);
										}
									}
									else
									{
										Local_113[iVar0 /*6*/].f_2 = 0;
									}
								}
								break;
							
							case 3:
								if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*6*/].f_3)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_207))
									{
										if (unk_0xD5BF96615F17406E(iLocal_207))
										{
											unk_0x821F888271EDBEF0(iLocal_207, 0);
											unk_0x452336926718D62A(&iLocal_207);
										}
										else
										{
											unk_0x821F888271EDBEF0(iLocal_207, 0);
											unk_0x3A703774620FDB42(&iLocal_207);
										}
									}
									func_138(101, 1);
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
									{
										func_136(33, 87, 1);
									}
									Local_113[iVar0 /*6*/].f_2 = 4;
								}
								break;
							
							case 4:
								if (unk_0xCA61C7E425DAB6B3(uLocal_206))
								{
									if (unk_0x20D62902F28677D2(uLocal_206) == 5)
									{
										unk_0xD0C906ABF8DD7B95(uLocal_206, 6);
										unk_0xE859EF37EA7362D3("ARM_2_RAYFIRE");
										Local_113[iVar0 /*6*/].f_2++;
									}
								}
								break;
							
							case 5:
								if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*6*/].f_3)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0xD38F266C132F2897(Local_94[2 /*14*/], 0, 1, 1, 1, 0, 0, 0, 0);
									}
									if (unk_0xB8DE76287EDC4957(Local_95[2 /*2*/], 0))
									{
										unk_0xD38F266C132F2897(Local_95[2 /*2*/], 0, 0, 1, 0, 0, 0, 0, 0);
									}
									if (func_135(unk_0xFC1458A37D98B502(), -1090,74f, -1654,78f, 3,4f, 1) > 4,875f)
									{
										unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), 0, 0, 1, 0, 0, 0, 0, 0);
									}
									unk_0x91C52DAA1CBF6F0B(-1091,245f, -1653,531f, 7,07065f, 34, 4f, 0, 1, 1f, 0);
									unk_0x91C52DAA1CBF6F0B(-1088,896f, -1654,399f, 4,2178f, 34, 3,5f, 0, 1, 1f, 0);
									unk_0x23A4CE7F9EBB02D4(-1, "Gas_Explosion", -1088,801f, -1655,546f, 7,3146f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
									iLocal_74 = unk_0x53C562FD2B9E3AB0() + 1500;
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
									{
										if (func_135(Local_94[13 /*14*/], -1091,245f, -1653,531f, 7,07065f, 1) < 4f)
										{
											unk_0x0FC9D6DF5B59B0AB(Local_94[13 /*14*/], 5000, 5000, 0, 1, 1, 0);
											unk_0xE01CE1EBCD7EE551(Local_94[13 /*14*/], 0, 0);
											unk_0xF486F507473D2F86(Local_94[13 /*14*/]);
										}
									}
									Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 1000;
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 6:
								if (unk_0x53C562FD2B9E3AB0() > Local_113[iVar0 /*6*/].f_3)
								{
									unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), 0, 0, 0, 0, 0, 0, 0, 0);
									if (unk_0xB8DE76287EDC4957(Local_95[2 /*2*/], 0))
									{
										unk_0xD38F266C132F2897(Local_95[2 /*2*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 5:
						if (iLocal_92 >= 2)
						{
							switch (Local_113[iVar0 /*6*/].f_2)
							{
								case 0:
									unk_0x13A127961044F71B("ANIM_GROUP_MOVE_LEMAR_ALLEY");
									Local_113[iVar0 /*6*/].f_2++;
									break;
								
								case 1:
									if (unk_0xA2B1B9FAFA5BDF26("ANIM_GROUP_MOVE_LEMAR_ALLEY"))
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
										{
											unk_0x60C54803C97FDAAB(Local_94[2 /*14*/], "ANIM_GROUP_MOVE_LEMAR_ALLEY", 1048576000);
											Local_113[iVar0 /*6*/].f_1 = 0;
										}
									}
									break;
								}
						}
						break;
					
					case 6:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_113[iVar0 /*6*/].f_2)
							{
								case 0:
									if (unk_0xA8113D347D14630F())
									{
										Local_113[iVar0 /*6*/].f_2++;
									}
									break;
								
								case 1:
									if (unk_0xBBC745B9F75E27D0("Lamar", unk_0x82FF3DFBC3965CC0(Local_94[2 /*14*/])) || unk_0x6F1392C5F51B32A4())
									{
										if (unk_0x6F1392C5F51B32A4())
										{
											unk_0x31BBD48AA2503617(Local_94[2 /*14*/], -530524, 0, 0, 0);
										}
										else
										{
											unk_0x31BBD48AA2503617(Local_94[2 /*14*/], -530524, 0, 1, 0);
										}
										unk_0x691491EBC2D892F5(Local_94[2 /*14*/], 2f);
										unk_0xAA1B868AE8D9DACD(Local_94[2 /*14*/], 0,1f);
										if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
										{
											func_134();
											unk_0x380C1E7B7740D618(0, -1130,321f, -1589,826f, 3,3891f, 2f, 20000, 0,25f, 0, 39f);
											unk_0xC03E5BD866BFEC82(0, 1);
											func_133(Local_94[2 /*14*/], 0);
										}
										Local_113[iVar0 /*6*/].f_2 = 2;
										Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 2000;
									}
									break;
								
								case 2:
									if (unk_0x53C562FD2B9E3AB0() < Local_113[iVar0 /*6*/].f_3)
									{
										unk_0x691491EBC2D892F5(Local_94[2 /*14*/], 2f);
									}
									else
									{
										Local_113[iVar0 /*6*/].f_1 = 0;
									}
									break;
								}
						}
						break;
					
					case 7:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (unk_0xA8113D347D14630F())
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (unk_0xBBC745B9F75E27D0("Franklin", 0) || unk_0x6F1392C5F51B32A4())
								{
									if (!unk_0xA8113D347D14630F())
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -530524, 0, 0, 0);
									}
									else
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -530524, 0, 1, 0);
									}
									unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 2f);
									Local_113[iVar0 /*6*/].f_2 = 2;
									Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 2000;
								}
								break;
							
							case 2:
								if (unk_0x53C562FD2B9E3AB0() < Local_113[iVar0 /*6*/].f_3)
								{
									unk_0x691491EBC2D892F5(unk_0xFC1458A37D98B502(), 2f);
								}
								else
								{
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 8:
						if (unk_0x6ADD12BF4D6D2587(Local_95[4 /*2*/]))
						{
							if (!unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
							{
								func_132("ARM2_F03");
							}
							else if ((unk_0xB6579D6FEB63269C(Local_95[4 /*2*/], 3, 30000) || unk_0xB6579D6FEB63269C(Local_95[4 /*2*/], 2, 30000)) || unk_0xB6579D6FEB63269C(Local_95[4 /*2*/], 0, 7000))
							{
								func_132("ARM2_F03");
							}
						}
						if (iLocal_92 >= 2 && iLocal_92 < 9)
						{
							if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
							{
								func_132("ARM2_F04");
							}
						}
						break;
					
					case 9:
						if (Local_113[iVar0 /*6*/].f_2 == 0)
						{
							unk_0x72CB9F3FA10C599B(1f);
							unk_0xAD6F3DFB1F960182(1f);
							unk_0xC39DDDC969581586(1f, 1f);
							if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1121,811f, -1599,719f, 1,023538f, -1066,708f, -1676,495f, 11,54423f, 34,4375f, 0, 1, 0))
							{
								Local_113[iVar0 /*6*/].f_2 = 1;
							}
						}
						else if (Local_113[iVar0 /*6*/].f_2 == 1)
						{
							unk_0x72CB9F3FA10C599B(0f);
							unk_0xAD6F3DFB1F960182(0f);
							unk_0xC39DDDC969581586(0f, 0f);
							if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1121,811f, -1599,719f, 1,023538f, -1066,708f, -1676,495f, 11,54423f, 34,4375f, 0, 1, 0))
							{
								Local_113[iVar0 /*6*/].f_2 = 0;
							}
						}
						break;
					
					case 10:
						if (Local_113[iVar0 /*6*/].f_2 == 0)
						{
							if (unk_0xA8113D347D14630F())
							{
								func_125(-19,28961f, -1085,295f, 25,31096f, -35,2638f, -1079,359f, 30,06847f, 12,625f, -27,3711f, -1082,111f, 25,589f, 249,7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								func_125(-29,77057f, -1086,7f, 24,11305f, -33,11995f, -1094,056f, 29,0473f, 6,3125f, -27,3711f, -1082,111f, 25,589f, 249,7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								func_125(-31,77917f, -1094,77f, 25,10984f, -35,30418f, -1104,367f, 28,23484f, 5,9375f, -27,3711f, -1082,111f, 25,589f, 249,7235f, 4f, 20f, 10f, 1, 1, 1, 0, 0);
								func_125(-20,76915f, -1077,899f, 24,25114f, -4,940775f, -1083,379f, 29,29708f, 5,8125f, -14,9697f, -1085,401f, 25,6721f, 238,037f, 6f, 10f, 10f, 1, 1, 1, 0, 0);
								Local_95[0 /*2*/] = unk_0xC733212BF9066BDF();
								if (unk_0x6ADD12BF4D6D2587(Local_95[0 /*2*/]))
								{
									if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
									{
										unk_0xDD29FF4BAB8AFF9C(Local_95[0 /*2*/], true, 1);
										unk_0xE01CE1EBCD7EE551(Local_95[0 /*2*/], 1800, 0);
									}
								}
								unk_0x247EAA2E93D4A021(-12,8803f, -1080,609f, 25,6721f, 20f, 1, 0, 0, false);
								Local_113[iVar0 /*6*/].f_1 = 0;
							}
						}
						break;
					
					case 11:
						switch (Local_113[iVar0 /*6*/].f_2)
						{
							case 0:
								if (unk_0xA8113D347D14630F())
								{
									Local_113[iVar0 /*6*/].f_2++;
								}
								break;
							
							case 1:
								if (unk_0xBBC745B9F75E27D0("Franklin", 0) || unk_0x6F1392C5F51B32A4())
								{
									if (func_124())
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), 1063765679, 1, 0, 0);
										unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 2000, 0, 1, 0);
									}
									else
									{
										unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, 1, 0, 0);
										unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 1000, 0, 1, 0);
									}
									Local_113[iVar0 /*6*/].f_2 = 2;
									Local_113[iVar0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 1000;
								}
								break;
							
							case 2:
								if (unk_0x53C562FD2B9E3AB0() < Local_113[iVar0 /*6*/].f_3)
								{
								}
								else
								{
									Local_113[iVar0 /*6*/].f_1 = 0;
								}
								break;
						}
						break;
					
					case 12:
						if (func_135(unk_0xFC1458A37D98B502(), -39,62799f, -1099,24f, 25,25259f, 1) < 150,5f)
						{
							if (unk_0x4FB2BF5239979F9A(-39,62799f, -1099,24f, 25,25259f, 26,5f, 1, 1))
							{
								func_132("ARM2_F07");
							}
							if (unk_0x4E69510C44147A5C(-1, -39,62799f, -1099,24f, 25,25259f, 26,5f))
							{
								func_132("ARM2_F07");
							}
							if (func_135(unk_0xFC1458A37D98B502(), -39,62799f, -1099,24f, 25,25259f, 1) < 26,5f)
							{
								if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
								{
									iVar4 = joaat("weapon_unarmed");
									unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar4, 1);
									switch (iVar4)
									{
										case joaat("weapon_bat"):
										case joaat("weapon_crowbar"):
										case joaat("weapon_hammer"):
										case joaat("weapon_knife"):
										case joaat("weapon_nightstick"):
										case joaat("weapon_petrolcan"):
										case joaat("weapon_stickybomb"):
										case joaat("weapon_grenade"):
										case joaat("weapon_bottle"):
											break;
										
										default:
											func_132("ARM2_F07");
											break;
										}
									}
								}
						}
						break;
				}
				if (Local_113[iVar0 /*6*/].f_2 == 99)
				{
					Local_113[iVar0 /*6*/].f_1 = 0;
				}
			}
			iVar0++;
		}
	}
}

int func_124()//Position - 0xB9EB
{
	if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_125(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xBA04
{
	func_126(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_126(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xBA2E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x9761C10D57B68069(iVar0))
		{
			unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			if (bParam10)
			{
				func_131(iVar0);
			}
			if (unk_0x0F3033474C49912D(iVar0, vParam0, vParam1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_128(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("taxi")))
				{
					if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502() && unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != 0)
					{
						if (unk_0xBE3C4023003180FC(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0xB3328BA8976B416C(iVar0, 1), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_55(iVar0, func_11(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_127(vParam5))
				{
					if (unk_0xB8DE76287EDC4957(iVar0, 0))
					{
						iVar7 = unk_0x82FF3DFBC3965CC0(iVar0);
						unk_0x830C2FE029F90C3F(iVar0, &vVar4, &vVar5);
						if (unk_0xF9DDB1C0875FD9E0(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1,1f, 1,1f, 1,1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1,2f, 1,2f, 1,2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x9B8406983378711E(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x48ED7B2293A96722(iVar0, fParam4);
						unk_0xBD8D47FDC6902B2D(iVar0, vParam3, 1, 0, 0, 1);
						unk_0xACE486395AA1867D(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0xA15269351F50F113(iVar0, false, 1, 0);
							unk_0x6147908AB85766AA(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x9761C10D57B68069(iVar0) || !unk_0xCB234F3DD6FF9368(iVar0, 1))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar0, true, 1);
						}
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xC91FE17AD7353B70(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0xBC489554C806C640(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (unk_0x9761C10D57B68069(iVar0))
					{
						unk_0x5380482A432E314E(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x9761C10D57B68069(iVar0))
			{
				unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
			}
			iVar8 = unk_0x317536BCEA8FA6B0(iVar0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
			{
				unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = unk_0x317536BCEA8FA6B0(iVar0, 2, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar8) && !unk_0x3AB6A1A9084FB0A4(iVar8))
				{
					unk_0xBD8D47FDC6902B2D(iVar8, unk_0xB3328BA8976B416C(iVar8, 1), 1, 0, 0, 1);
				}
			}
			unk_0xC91FE17AD7353B70(&iVar0);
		}
	}
}

int func_127(vector3 vParam0)//Position - 0xBE22
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xBE4C
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_130(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x3F90543934DCD7E6(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_129(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_129(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_129(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_129(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_129(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_129(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_129(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_129(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_129(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_129(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_129(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_129(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_129(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_129(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_129(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_129(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0xC144
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
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(vector3 vParam0)//Position - 0xC1F8
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

void func_131(int iParam0)//Position - 0xC237
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xA7B0253B80B52B2B(iParam0) <= 200f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
			if (unk_0x32DFD9C17763ABE0(iParam0) <= 700f)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 900f);
			}
			if (unk_0xDE523AF6F7B269AB(iParam0) < 200)
			{
				unk_0xB38E13EF2EC6F0E9(iParam0, 500f);
			}
		}
	}
}

void func_132(char* sParam0)//Position - 0xC29C
{
	bLocal_114 = true;
	bLocal_114 = bLocal_114;
	sLocal_115 = sLocal_115;
	sLocal_115 = sParam0;
}

void func_133(int iParam0, bool bParam1)//Position - 0xC2B9
{
	if (bParam1)
	{
		unk_0xDFD7CAAA70F1F7D2(uLocal_298, 1);
	}
	unk_0x1B16DD5C115FE009(uLocal_298);
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0xAB30B1CF01A198C1(iParam0, uLocal_298);
	}
	unk_0xFAA3EF7FF92E1F9E(&uLocal_298);
}

void func_134()//Position - 0xC2EF
{
	unk_0x6931076730A4AC5D(&uLocal_298);
}

float func_135(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xC2FE
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

void func_136(int iParam0, int iParam1, int iParam2)//Position - 0xC338
{
	char cVar0[64];
	
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		Local_69[iParam0 /*10*/].f_6 = iParam2;
	}
	else
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "SET_ACTION_FLAG() fail:", 64);
		StringConCat(&cVar0, func_137(iParam1), 64);
	}
}

char* func_137(int iParam0)//Position - 0xC373
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "	ACT_NULL	 ";
			break;
		
		case 1:
			sVar0 = "	ACT_LAMAR_RUNS_UP_TO_CAR	 ";
			break;
		
		case 2:
			sVar0 = "	ACT_LAMAR_FOLLOWS_PLAYER	 ";
			break;
		
		case 3:
			sVar0 = "	ACT_SET_GARAGE_DOORS_LOCKED	 ";
			break;
		
		case 4:
			sVar0 = "	ACT_STOP_FOLLOWING_LAMAR_DOWN_ALLEY	 ";
			break;
		
		case 5:
			sVar0 = "	ACT_GET_PLAYER_CAR	 ";
			break;
		
		case 6:
			sVar0 = "	ACT_GPS_CUSTOM_ROUTE	 ";
			break;
		
		case 7:
			sVar0 = "	ACT_SIMEON	 ";
			break;
		
		case 8:
			sVar0 = "	ACT_SET_PLAYER_THROUGH_DRIVER_DOOR	 ";
			break;
		
		case 9:
			sVar0 = "	ACT_TURN_ON_CAR_RADIO	 ";
			break;
		
		case 10:
			sVar0 = "	ACT_LOCK_SHOWROOM_CARS	 ";
			break;
		
		case 11:
			sVar0 = "	ACT_AUDIO_SCENE_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		
		case 12:
			sVar0 = "	ACT_SET_GARAGE_VEHICLES_AS_NO_LONGER_NEEDED	 ";
			break;
		
		case 13:
			sVar0 = "	ACT_RELEASE_MISSION_TRIGGER	 ";
			break;
		
		case 14:
			sVar0 = "	ACT_SPAWN_FAIL_RESPONSE_ELSALVS	 ";
			break;
		
		case 15:
			sVar0 = "	ACT_BUDDY_HEAD_TRACKING	 ";
			break;
		
		case 16:
			sVar0 = "	ACT_LEMAR_EXITS_CAR	 ";
			break;
		
		case 17:
			sVar0 = "	action_LEMAR_APPROACHES_GATE	 ";
			break;
		
		case 18:
			sVar0 = "	action_player_exits_car	 ";
			break;
		
		case 19:
			sVar0 = "	ACTION_BUM_STAGGERS_FROM_GARAGE	 ";
			break;
		
		case 20:
			sVar0 = "	ACTION_LEMAR_WALKS_TOWARDS_BUM	 ";
			break;
		
		case 21:
			sVar0 = "	ACTION_LEMAR_INTERRACTS_WITH_BUM	 ";
			break;
		
		case 22:
			sVar0 = "	ACTION_LEMAR_IGNORES_BUM_IF_HIT	 ";
			break;
		
		case 23:
			sVar0 = "	ACTION_BUM_RETURNS_TO_GARAGE	 ";
			break;
		
		case 24:
			sVar0 = "	ACTION_WAIT_FOR_PLAYER_TO_CLIMB_GATE	 ";
			break;
		
		case 25:
			sVar0 = "	ACTION_VEHICLE_DRIVES_OFF	 ";
			break;
		
		case 26:
			sVar0 = "	ACTION_PLAYER_LOOK_ABOUT	 ";
			break;
		
		case 27:
			sVar0 = "	ACTION_LEMAR_LOOKS_AT_PASSING_CAR	 ";
			break;
		
		case 28:
			sVar0 = "	ACTION_DRUNK_GETS_UP_AFTER_LEMAR_INTERACTION	 ";
			break;
		
		case 29:
			sVar0 = "	ACTION_VEHICLE_BLOCKED_BY_PLAYER	 ";
			break;
		
		case 30:
			sVar0 = "	ACTION_VEHICLE_CONTINUES_DRIVING	 ";
			break;
		
		case 31:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_PLAYER_BLOCKING_ELSAL	 ";
			break;
		
		case 32:
			sVar0 = "	ACTION_LEMAR_WAITS_FOR_PLAYER	 ";
			break;
		
		case 33:
			sVar0 = "	ACTION_LEMAR_RESUMES_WALK_DOWN_ALLEY	 ";
			break;
		
		case 34:
			sVar0 = "	ACTION_LEMAR_FOLLOWS_PLAYER_AT_GARAGES	 ";
			break;
		
		case 35:
			sVar0 = "	ACTION_PLAY_IDLES	 ";
			break;
		
		case 37:
			sVar0 = "	ACTION_LOAD_CUTSCENE	 ";
			break;
		
		case 38:
			sVar0 = "	ACTION_OPEN_GARAGE_1	 ";
			break;
		
		case 39:
			sVar0 = "	ACTION_OPEN_GARAGE_2	 ";
			break;
		
		case 40:
			sVar0 = "	ACTION_OPEN_GARAGE_3	 ";
			break;
		
		case 41:
			sVar0 = "	ACTION_LOCK_GARAGE_3	 ";
			break;
		
		case 42:
			sVar0 = "	ACTION_MUSIC_AT_BUM	 ";
			break;
		
		case 43:
			sVar0 = "	ACTION_INITIALISE_DRIVEOFF_VEHICLE	 ";
			break;
		
		case 44:
			sVar0 = "	ACT_UNFREEZE_DRIVEOFF_CAR	 ";
			break;
		
		case 45:
			sVar0 = "	ACT_LAMAR_LOOK_AT_GARAGES_ON_APPROACH	 ";
			break;
		
		case 46:
			sVar0 = "	ACT_REDUCE_PLAYER_SPEED	 ";
			break;
		
		case 47:
			sVar0 = "	ACT_ADUIO_END_ARM_2_DRIVE_TO_ALLEY	 ";
			break;
		
		case 48:
			sVar0 = "	ACTION_UPDATE_LAMAR_PROGRESS	 ";
			break;
		
		case 49:
			sVar0 = "	ACT_DRIVERS_LOOK_AT_PLAYER	 ";
			break;
		
		case 50:
			sVar0 = "	ACTION_LOCK_OPEN_GARAGE_3	 ";
			break;
		
		case 52:
			sVar0 = "	ACTION_LEMAR_EXITS_GARAGE	 ";
			break;
		
		case 53:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_POST	 ";
			break;
		
		case 54:
			sVar0 = "	ACTION_MAKE_LAMAR_INVINCIBLE	 ";
			break;
		
		case 55:
			sVar0 = "	ACTION_LEMAR_ADVANCES_TO_PORTALOO	 ";
			break;
		
		case 56:
			sVar0 = "	ACTION_LEMAR_DIVERTS_TO_BISON	 ";
			break;
		
		case 58:
			sVar0 = "	ACTION_LEMAR_REACTS_TO_GUNFIRE	 ";
			break;
		
		case 59:
			sVar0 = "	ACTION_LEMAR_ADVANCES_AFTER_PORTALOO	 ";
			break;
		
		case 60:
			sVar0 = "	ACTION_LEMAR_MOVES_TO_COVER	 ";
			break;
		
		case 61:
			sVar0 = "	ACTION_LAMAR_SHOOTS_CAR	 ";
			break;
		
		case 62:
			sVar0 = "	acTION_lemar_RUN_TOWARDS_GATE	 ";
			break;
		
		case 63:
			sVar0 = "	ACTION_FORCE_GARAGE	 ";
			break;
		
		case 64:
			sVar0 = "	action_make_balcony_destructible	 ";
			break;
		
		case 65:
			sVar0 = "	ACTION_MAKE_CAR_TYRE_BURST	 ";
			break;
		
		case 66:
			sVar0 = "	ACTION_SET_STAGE_STUFF	 ";
			break;
		
		case 67:
			sVar0 = "	ACTION_ENEMY_BACKS_OFF	 ";
			break;
		
		case 68:
			sVar0 = "	ACTION_ENEMY_BY_BISON	 ";
			break;
		
		case 69:
			sVar0 = "	ACTION_ENEMY_FROM_LEFT	 ";
			break;
		
		case 70:
			sVar0 = "	ACTION_ENEMY_FROM_SKIP	 ";
			break;
		
		case 71:
			sVar0 = "	ACTION_ENEMY_FROM_SCAFFOLD	 ";
			break;
		
		case 72:
			sVar0 = "	ACTION_SCAFFOLD_PED_DROPS	 ";
			break;
		
		case 73:
			sVar0 = "	ACTION_ENEMY_AFTER_SCAFFOLD	 ";
			break;
		
		case 74:
			sVar0 = "	ACTION_ENEMY_ON_VERANDA	 ";
			break;
		
		case 75:
			sVar0 = "	ACTION_ENEMY_ON_BALCONY	 ";
			break;
		
		case 76:
			sVar0 = "	ACTION_ENEMY_FROM_DOOR	 ";
			break;
		
		case 77:
			sVar0 = "	ACTION_DRIVER_RUNS_TO_CAR	 ";
			break;
		
		case 78:
			sVar0 = "	ACTION_DRIVER_DRIVES_OFF	 ";
			break;
		
		case 79:
			sVar0 = "	ACTION_FLEEING_CAR_DAMAGE	 ";
			break;
		
		case 80:
			sVar0 = "	ACTION_PETROL_TRAIL	 ";
			break;
		
		case 81:
			sVar0 = "	ACTION_EXPLODE_CAR	 ";
			break;
		
		case 82:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS	 ";
			break;
		
		case 83:
			sVar0 = "	ACTION_LOCK_ON_TO_GAS_TRAIL	 ";
			break;
		
		case 84:
		case 85:
			sVar0 = "	ACTION_MUSIC_SHOOTOUT	 ";
			break;
		
		case 86:
			sVar0 = "	ACTION_UNFREEZE_FLEE_CAR_IF_ENTERED 	 ";
			break;
		
		case 87:
			sVar0 = "	ACT_STAT_PROPANE 	 ";
			break;
		
		case 91:
		case 92:
			sVar0 = "	ACTION_REMOVE_ALLEYWAY_ASSETS	 ";
			break;
		
		case 93:
			sVar0 = "	ACTION_PREP_CHASE_STAGE	 ";
			break;
		
		case 94:
			sVar0 = "	ACTION_DEAL_WITH_STUCK_BIKER	 ";
			break;
		
		case 95:
			sVar0 = "	ACTION_BIKER_FLEES	 ";
			break;
		
		case 96:
			sVar0 = "	ACTION_LEMAR_FOLLOW_PLAYER	 ";
			break;
		
		case 97:
			sVar0 = "	ACTION_BIKER_REACTS_TO_PLAYER_CLOSING_IN	 ";
			break;
		
		case 98:
			sVar0 = "	ACTION_BIKER_REACTS_TO_BEING_JACKED	 ";
			break;
		
		case 99:
			sVar0 = "	ACTION_BIKER_REACTS_TO_COMING_OFF_BIKE	 ";
			break;
		
		case 100:
			sVar0 = "	ACTION_MUSIC_CHASE	 ";
			break;
		
		case 101:
			sVar0 = "	ACTION_MUSIC_IN_CAR	 ";
			break;
		
		case 102:
			sVar0 = "	ACTION_MUSIC_BIKER_DOWN	 ";
			break;
		
		case 103:
			sVar0 = "	ACTION_ENSURE_LAMAR_CLIMBS_GATE	 ";
			break;
		
		case 104:
			sVar0 = "	ACTION_LAMAR_GETS_IN_PLAYER_CAR	 ";
			break;
		
		case 108:
			sVar0 = "	ACT_SET_LAMAR_FOR_STAGE	 ";
			break;
		
		case 109:
			sVar0 = "	ACT_LAMAR_GETS_IN_DRIVER_SEAT	 ";
			break;
		
		case 110:
			sVar0 = "	ACT_LAMAR_HEADS_BACK_HOME	 ";
			break;
		
		case 112:
			sVar0 = "	ACT_LAMAR_DRIVES_BACK_TO_HOME	 ";
			break;
		
		case 113:
			sVar0 = "	ACT_LAMAR_EXITS_UNDRIVEABLE_CAR	 ";
			break;
		
		case 114:
			sVar0 = "	ACT_LAMAR_GETS_IN_ANY_CAR	 ";
			break;
		
		case 116:
			sVar0 = "	ACT_STUCK_BIKE_CHECK	 ";
			break;
		
		case 117:
			sVar0 = "	ACT_LOAD_CUTSENE	 ";
			break;
		
		case 118:
			sVar0 = "	ACT_WARP_LAMAR_BACK	 ";
			break;
		
		case 119:
			sVar0 = "	ACT_STAT_BIKE_DAMAGE	 ";
			break;
		
		case 120:
			sVar0 = "	ACT_DO_HINT_CAM	 ";
			break;
		
		case 121:
			sVar0 = "	ACT_CUTSCENE_LEAD_IN	 ";
			break;
		
		default:
			sVar0 = " -NOT DEFINED-";
			break;
	}
	return sVar0;
}

int func_138(int iParam0, int iParam1)//Position - 0xC9FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_72)
	{
		if (iParam0 == Local_72[iVar0 /*7*/])
		{
			if (iParam1 == 1)
			{
				Local_72[iVar0 /*7*/].f_2 = 1;
			}
			else
			{
				Local_72[iVar0 /*7*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_139(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xCA46
{
	if (iParam0 != 198)
	{
		if (Global_70856)
		{
			Global_2436181.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_104555.f_7231.f_227[iParam0] = iParam1;
		}
		Global_32828[iParam0] = iParam2;
		Global_33027[iParam0] = 1;
		func_142(iParam0, bParam3, iParam4, 0);
		func_140(iParam0, iParam1);
	}
}

void func_140(int iParam0, int iParam1)//Position - 0xCAA1
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x227E209A59DB1F6F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x227E209A59DB1F6F("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x8DEB0F67766EF8D6("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x8DEB0F67766EF8D6("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_141(0, 0);
			}
			else
			{
				func_141(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x227E209A59DB1F6F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x227E209A59DB1F6F("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x2FAF13FE5256740F("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xD4BB744A696E8ABF("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_141(int iParam0, bool bParam1)//Position - 0xCB8A
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&Global_103193, iParam0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_103193, iParam0);
	}
	Global_103192 = 1;
}

bool func_142(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xCBB3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1646295 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_145(&Var3, iParam0);
	if (func_143())
	{
		iVar1 = Global_104555.f_7231.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2436181.f_75.f_227[iParam0];
	}
	iVar2 = Global_33226[iParam0];
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !bParam3)
	{
		Global_1646295 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != unk_0x8B948C59217A295D("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32828[iParam0] && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1646295 = 1;
				}
				if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) || unk_0x12A8D89D51ADF8A6(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3E9CABD07B829173())
					{
						bVar5 = false;
						Global_1646295 = 1;
					}
				}
			}
		}
		if (unk_0x40189ECE75CF9724() && (!unk_0x1E06D00B67177A18() || unk_0x70522E2561AD22FE() != 5))
		{
			bVar5 = false;
			Global_1646295 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x143DCD09D82EE129(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xA25B44929E552182(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34422[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[1 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[2 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[0 /*8*/]));
								Global_1646295 = 1;
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_34));
								Global_1646295 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_34));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_34)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_34)))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_34));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x990A0EC8D6FEA4BB(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES"))
						{
							if (!unk_0xAB84FBE3AB3FFAD3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xBC469A15B0FBB2B3(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34223[iParam0] = 1;
					Global_34422[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0xC0765AFBFA616644(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x8B948C59217A295D(&(Var3.f_50)) != unk_0x8B948C59217A295D(""))
						{
							if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_50)))
							{
								unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES")) && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x8B948C59217A295D(&(Var3.f_8[0 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[1 /*8*/])) != unk_0x8B948C59217A295D(""))
							{
								if (unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9D03737FF3A3886F(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("") && unk_0x8B948C59217A295D(&(Var3.f_8[2 /*8*/])) != unk_0x8B948C59217A295D("REMOVE_ALL_STATES"))
							{
								if (!unk_0xAE9429EF5E8F7D8A(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xE4B2AFF0C4EE2A76(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x9CAF59533FADA559(iVar6);
						}
					}
					Global_34422[iParam0] = 1;
					Global_34223[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xBE3C4023003180FC(Var3, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), true) < 250f)
					{
						uVar4 = unk_0x0B4BABF632AE674E(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xCA61C7E425DAB6B3(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xD0C906ABF8DD7B95(uVar4, 3);
								Global_34422[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x20D62902F28677D2(uVar4) != 6 && unk_0x20D62902F28677D2(uVar4) != 7) && unk_0x20D62902F28677D2(uVar4) != 8)
								{
									unk_0xD0C906ABF8DD7B95(uVar4, 10);
									Global_34422[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x1D1553831CE3D9D2(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x0EE72DB1CD8A3B86(&(Global_32574[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x71B1398D26DE0463(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x872F1C1F8587CCC7(&(Global_32574[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33027[iParam0] = 0;
				Global_33226[iParam0] = iVar1;
				if (!func_143())
				{
					if (!Global_33823[iParam0])
					{
						Global_33823[iParam0] = 1;
						Global_34022++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_143()//Position - 0xD505
{
	if ((func_81() == -1 || func_81() == 999) && !func_144() == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()//Position - 0xD535
{
	return Global_25234;
}

int func_145(var uParam0, int iParam1)//Position - 0xD540
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

void func_146(int iParam0, int iParam1)//Position - 0x10CDD
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
			func_148(iParam0);
			if (unk_0xC80D31E4B587871C(Global_31648[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_147(iParam0);
			}
		}
	}
}

void func_147(int iParam0)//Position - 0x10DD6
{
	if (!unk_0xC80D31E4B587871C(Global_32591.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x872F1C1F8587CCC7(&(Global_32591.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32591[Global_32591.f_227] = iParam0;
		Global_32591.f_227++;
	}
}

void func_148(int iParam0)//Position - 0x10E24
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
	
	if (!func_143())
	{
		return;
	}
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	Var0 = { func_156(iParam0) };
	if (unk_0xC80D31E4B587871C(Var0.f_4, 2))
	{
		func_153(iParam0, &Var0);
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
			iVar3 = func_150(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_13(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0xC80D31E4B587871C(Var0.f_4, 1) && unk_0x8F38E94BBF3404CD(joaat("ambient_solomon")) == 0)
	{
		if (func_149())
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
		func_147(iParam0);
		if (Global_31666[iParam0] < 2)
		{
			Global_31666[iParam0]++;
		}
	}
}

int func_149()//Position - 0x11307
{
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	switch (func_11())
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

int func_150(int iParam0)//Position - 0x11386
{
	int iVar0;
	
	iVar0 = func_11();
	if (func_151(iParam0))
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
		if (func_14(iVar0))
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
			if (func_14(iVar0))
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
			if (func_14(iVar0))
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
			if (func_14(iVar0))
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
				if (func_14(iVar0))
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
				if (func_14(iVar0))
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
			if (func_14(iVar0))
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

int func_151(int iParam0)//Position - 0x115DB
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				iVar0 = unk_0x82FF3DFBC3965CC0(func_152(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1)));
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

int func_152(int iParam0)//Position - 0x11647
{
	return iParam0;
}

void func_153(int iParam0, var uParam1)//Position - 0x11651
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_99();
	iVar1 = func_155(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_154(iParam0))
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
			if (func_154(iParam0))
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
			if (func_154(iParam0))
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
			if (func_154(iParam0))
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
			if (!func_154(iParam0))
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
			if (!func_154(iParam0))
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
				if (!func_154(iParam0))
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
				if (!func_154(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_154(iParam0) && unk_0x8F38E94BBF3404CD(Global_83766[26 /*34*/].f_6) == 0)
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
			if (!func_154(iParam0))
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
			if (!func_154(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_154(iParam0))
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
			if (!func_154(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_154(iParam0))
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
			if (!func_154(iParam0))
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
				if (!func_154(iParam0))
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
				if (!func_154(iParam0))
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
				if (!func_154(iParam0))
				{
					Global_104555.f_7231[iParam0] = 1;
					unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_154(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_154(iParam0))
			{
				Global_104555.f_7231[iParam0] = 1;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_154(iParam0))
			{
				Global_104555.f_7231[iParam0] = 0;
				unk_0xB94AAB49E0BB01DB(uParam1->f_5, Global_104555.f_7231[iParam0], 1, 1);
			}
			break;
	}
}

bool func_154(int iParam0)//Position - 0x11FEC
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_156(iParam0) };
	iVar1 = unk_0x656A318921183B10(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_155(int iParam0)//Position - 0x12020
{
	return system::shift_right(iParam0, 9) & 31;
}

struct<7> func_156(int iParam0)//Position - 0x12033
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

float func_157(float fParam0)//Position - 0x14C41
{
	return (fParam0 * 0,01745329f);
}

void func_158(int iParam0, int iParam1, vector3 vParam2, float fParam3, float fParam4)//Position - 0x14C51
{
	if (iParam0 == -1 || iParam0 >= 10)
	{
	}
	if (unk_0xB8DE76287EDC4957(Local_95[iParam0 /*2*/], 0))
	{
		if (unk_0x82FF3DFBC3965CC0(Local_95[iParam0 /*2*/]) != iParam1 && iParam1 != 0)
		{
			unk_0xC91FE17AD7353B70(&(Local_95[iParam0 /*2*/]));
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(Local_95[iParam0 /*2*/]))
	{
		Local_95[iParam0 /*2*/] = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, 1, 1, 0);
	}
	else if (!unk_0x191BE1BC8F26F3C1(Local_95[iParam0 /*2*/], 0))
	{
		unk_0xBD8D47FDC6902B2D(Local_95[iParam0 /*2*/], vParam2, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(Local_95[iParam0 /*2*/], fParam3);
	}
	else
	{
		unk_0x5380482A432E314E(&(Local_95[iParam0 /*2*/]));
		Local_95[iParam0 /*2*/] = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, 1, 1, 0);
	}
	if (unk_0xB8DE76287EDC4957(Local_95[iParam0 /*2*/], 0))
	{
		if (fParam4 != -100f)
		{
			unk_0xFB2E9855F95E3BD3(Local_95[iParam0 /*2*/], fParam4);
		}
		if (unk_0x9761C10D57B68069(Local_95[iParam0 /*2*/]))
		{
			unk_0x36C7B6DDA53E2DAF(Local_95[iParam0 /*2*/], 0);
			unk_0x36A50B92F547633A(Local_95[iParam0 /*2*/], 0);
		}
	}
}

int func_159(int iParam0, int iParam1, int iParam2)//Position - 0x14D68
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_113[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_113[iVar0 /*6*/].f_1 == 0)
		{
			Local_113[iVar0 /*6*/].f_1 = 1;
			Local_113[iVar0 /*6*/] = iParam0;
			Local_113[iVar0 /*6*/].f_2 = 0;
			Local_113[iVar0 /*6*/].f_4 = iParam2;
			Local_113[iVar0 /*6*/].f_5 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_160()//Position - 0x14DF8
{
	if (iLocal_261 == 1)
	{
		unk_0x40E1F6E9CDE3A6B3(-1089,766f, -1631,065f, 8,9467f, 255, 255, 200, 7f, 1f);
	}
	if (iLocal_262 == 1)
	{
		unk_0x40E1F6E9CDE3A6B3(-1085,957f, -1662,724f, 8,6111f, 255, 255, 200, 7f, 1f);
	}
}

void func_161()//Position - 0x14E40
{
	unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), false);
	unk_0x84CDD933AFA470D2();
	func_162(0, 0);
	func_650(0);
}

void func_162(bool bParam0, int iParam1)//Position - 0x14E65
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_587(0) && Global_71102.f_1 == 1) && func_163(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_587(0))
	{
		iVar0 = func_17();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_163(int iParam0)//Position - 0x14F3B
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_164()//Position - 0x14F79
{
	unk_0x72CB9F3FA10C599B(0,2f);
	unk_0xAD6F3DFB1F960182(0,2f);
	if (unk_0xCE083D214C9DBEF1())
	{
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), false);
		iLocal_96 = 3;
	}
	switch (iLocal_96)
	{
		case 0:
			sLocal_213 = "Armenian_2_mcs_6";
			func_256();
			unk_0x393584863A2F304E(sLocal_213, 8);
			iLocal_96 = 1;
			break;
		
		case 1:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_175("Franklin", unk_0xFC1458A37D98B502(), 0, 2);
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
				{
					unk_0xEDB61F1ADC509416("LAMAR", 0, 0, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 1, 0, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 2, 2, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 3, 2, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 4, 3, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 5, 0, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 7, 0, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 8, 0, 0, 0);
					unk_0xEDB61F1ADC509416("LAMAR", 9, 0, 0, 0);
				}
			}
			if (func_174())
			{
				func_585(11);
				func_165(1, 1, 1, 0);
				if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
				{
					unk_0x1A0806871323CD16(Local_95[4 /*2*/], true);
					unk_0x4982ECE0928DA13D(Local_95[4 /*2*/], "Armenian_bike", 1, joaat("bagger"), 0);
				}
				if (unk_0x6ADD12BF4D6D2587(Local_94[2 /*14*/]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
					{
						unk_0x4982ECE0928DA13D(Local_94[2 /*14*/], "Lamar", 1, joaat("ig_lamardavis"), 3);
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_211))
				{
					unk_0x452336926718D62A(&iLocal_211);
				}
				if (unk_0x771D0F8F56A5FE6C("ARM_2_RIDE_BIKE_BACK"))
				{
					unk_0xE02E32C69260FBB7("ARM_2_RIDE_BIKE_BACK");
				}
				unk_0xD0BFA95B279C174F(0);
				unk_0x3CDDC4760DBA4651();
				unk_0xCB389937EDB1519A(-21,8129f, -1454,343f, 20,7942f, -17,8129f, -1450,343f, 40,7942f, 0, 1, 1, 1);
				unk_0x8D3373CFE9542320(-21,8129f, -1454,343f, 20,7942f, -17,8129f, -1450,343f, 40,7942f, 0, 0);
				unk_0x14BB9709F9BFF17B(-12,5851f, -1471,319f, 30,9463f, 6f, 1);
				unk_0x0662098C9EF126B4(4);
				iLocal_96 = 2;
			}
			break;
		
		case 2:
			if (unk_0x6C97EEC6339FB45C())
			{
				if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
				{
					func_125(-9,370698f, -1402,745f, 26,9317f, -9,507262f, -1386,303f, 32,58361f, 270,39f, -17,2307f, -1412,02f, 28,3117f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
					if (func_135(Local_95[0 /*2*/], -5,3f, -1396f, 29f, 1) < 7f)
					{
						unk_0x247EAA2E93D4A021(-17,347f, -1401,371f, 28,3343f, 3f, 1, 0, 0, false);
						unk_0xBD8D47FDC6902B2D(Local_95[0 /*2*/], -17,347f, -1401,371f, 28,3343f, 1, 0, 0, 1);
						unk_0x48ED7B2293A96722(Local_95[0 /*2*/], 270f);
					}
				}
				unk_0x247EAA2E93D4A021(-5,3f, -1396f, 29f, 5f, 1, 0, 0, false);
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x59C3AC31C7544A28(500);
				}
				unk_0x2C5E25A27FEE0F8A(1);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), false);
				unk_0xA896149A4DE38DEA(-17,0167f, -1456,231f, 29,6774f, 40f, 0);
				unk_0x9B8406983378711E(-17,0167f, -1456,231f, 29,6774f, 40f, 0, 0, 0, 0, false, 0);
				unk_0x60225D4F755DFDB1(-17,0167f, -1456,231f, 29,6774f, 8f, 0);
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
				}
				iLocal_96 = 3;
			}
			break;
		
		case 3:
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(-10f, 1065353216);
			}
			if (unk_0x6F1392C5F51B32A4())
			{
				func_165(0, 1, 1, 0);
				unk_0x61635C0A7950C875();
				return 1;
			}
			break;
	}
	return 0;
}

void func_165(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x15329
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_173(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_172())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_171(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_173(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_171(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_169(unk_0x9EB17624F44A8DA4())) && !func_167(unk_0x9EB17624F44A8DA4(), 0)) && !func_166())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_169(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_166()//Position - 0x15442
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_167(int iParam0, int iParam1)//Position - 0x1545F
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_168(-1, 0) == 8;
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

int func_168(int iParam0, bool bParam1)//Position - 0x154AA
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_60();
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

int func_169(int iParam0)//Position - 0x154EB
{
	if (func_167(iParam0, 0))
	{
		return 1;
	}
	if (func_170())
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

bool func_170()//Position - 0x1552D
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_171(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1553E
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

int func_172()//Position - 0x15571
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_173(int iParam0)//Position - 0x15598
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

bool func_174()//Position - 0x155BB
{
	bool bVar0;
	
	bVar0 = unk_0xA3DDC3767EC660CD();
	if (!Global_70855)
	{
		if (!bVar0)
		{
			Global_70855 = 1;
		}
	}
	return bVar0;
}

void func_175(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x155DE
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_176(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0xEDB61F1ADC509416(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0x7B9E2A8E7B7BA218(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0x7B9E2A8E7B7BA218(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_176(int iParam0, var uParam1, int iParam2)//Position - 0x15699
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = unk_0x82FF3DFBC3965CC0(iParam0);
	func_57(iParam0, &Var2, 0);
	func_57(iParam0, uParam1, iParam2);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_253(iVar4, func_255(iVar0), func_254(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_255(iVar0)), &iVar1))
			{
				Var3 = { func_187(iVar4, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_185(iVar4, func_255(iVar0), func_254(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_255(iVar0)), &iVar1))
			{
				Var3 = { func_187(iVar4, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_253(iVar4, 14, func_178(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_187(iVar4, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_185(iVar4, 14, func_178(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_187(iVar4, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_254(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_254(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_177(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_187(iVar4, 0, iVar9) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_177(int iParam0, int iParam1, int iParam2)//Position - 0x15907
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15A5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_184(iParam3);
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar1 = unk_0xA2FAB7A15B84DCA2(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_180(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_180(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x52913C7C981BE317(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x34221E435D75D46F(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_179(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_184(iParam3);
}

int func_179(int iParam0, int iParam1)//Position - 0x15B5A
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_180(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15C98
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_183(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var4);
		iVar6 = 0;
		iVar7 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_182(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0x19002A6D4CBCE1E2(iVar5, &Var4);
			if (!unk_0x42683C90F2D005ED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_181(iParam0, func_182(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_181(int iParam0, int iParam1)//Position - 0x15D78
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_182(int iParam0)//Position - 0x1611F
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x161CF
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_184(int iParam0)//Position - 0x16230
{
	switch (iParam0)
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
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x162B6
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_186(iParam0);
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x16540
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_187(int iParam0, int iParam1, int iParam2)//Position - 0x1657B
{
	func_252();
	if (iParam0 == joaat("player_zero"))
	{
		func_234(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_215(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_188(iParam1, iParam2);
	}
	return Global_70671[0 /*14*/];
}

void func_188(int iParam0, int iParam1)//Position - 0x165CD
{
	switch (iParam0)
	{
		case 0:
			func_214(iParam1);
			break;
		
		case 2:
			func_213(iParam1);
			break;
		
		case 3:
			func_210(iParam1);
			break;
		
		case 4:
			func_209(iParam1);
			break;
		
		case 6:
			func_208(iParam1);
			break;
		
		case 5:
			func_207(iParam1);
			break;
		
		case 8:
			func_206(iParam1);
			break;
		
		case 9:
			func_205(iParam1);
			break;
		
		case 10:
			func_204(iParam1);
			break;
		
		case 1:
			func_203(iParam1);
			break;
		
		case 7:
			func_202(iParam1);
			break;
		
		case 11:
			func_201(iParam1);
			break;
		
		case 12:
			func_200(iParam1);
			break;
		
		case 13:
			func_199(iParam1);
			break;
		
		case 14:
			func_189(iParam1);
			break;
	}
}

void func_189(int iParam0)//Position - 0x166BD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 155);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x17933
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_197(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8B948C59217A295D(sParam3) != unk_0x8B948C59217A295D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 6);
		if (func_13(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x6C297174CFC8C5B2(Global_2621444, 1827025211, 0))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_195(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_195(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_195(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_195(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_195(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_195(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		if (func_194(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		}
		if (func_194(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
		if (!func_194(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_13(14))
			{
				return;
			}
			iVar0 = func_58(func_193(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			}
			iVar0 = func_58(func_192(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
			}
			if (func_191(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_58(iVar1, Global_70668, 0);
				if (!unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
}

bool func_191(int iParam0, int iParam1, var uParam2)//Position - 0x17CC4
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_192(int iParam0, int iParam1)//Position - 0x180CB
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_193(int iParam0, int iParam1)//Position - 0x184C6
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x188C1
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_195(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x197DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_196(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_58(iVar2, iVar0, 0);
		return unk_0xC80D31E4B587871C(iVar3, iVar1);
	}
	return 0;
}

bool func_196(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x19821
{
	int iVar0;
	
	*uParam2 = 7872;
	if ((bParam4 && Global_4264612) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4264612)
		{
			iVar0 = unk_0xEE7957BF5F06F733(iParam0);
		}
		else
		{
			iVar0 = unk_0x412F97477A158C0F(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xEE7957BF5F06F733(iParam0);
	}
	else
	{
		iVar0 = unk_0x412F97477A158C0F(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2440;
					break;
				
				case 42:
					*uParam2 = 2441;
					break;
				
				case 43:
					*uParam2 = 2442;
					break;
				
				case 44:
					*uParam2 = 2443;
					break;
				
				case 45:
					*uParam2 = 2444;
					break;
				
				case 46:
					*uParam2 = 2445;
					break;
				
				case 47:
					*uParam2 = 2446;
					break;
				
				case 48:
					*uParam2 = 2447;
					break;
				
				case 49:
					*uParam2 = 2448;
					break;
				
				case 50:
					*uParam2 = 2449;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3185;
					break;
				
				case 63:
					*uParam2 = 3186;
					break;
				
				case 64:
					*uParam2 = 3187;
					break;
				
				case 65:
					*uParam2 = 3188;
					break;
				
				case 66:
					*uParam2 = 3189;
					break;
				
				case 67:
					*uParam2 = 3190;
					break;
				
				case 68:
					*uParam2 = 3658;
					break;
				
				case 69:
					*uParam2 = 3659;
					break;
				
				case 70:
					*uParam2 = 3660;
					break;
				
				case 71:
					*uParam2 = 3661;
					break;
				
				case 72:
					*uParam2 = 3662;
					break;
				
				case 73:
					*uParam2 = 3663;
					break;
				
				case 74:
					*uParam2 = 3664;
					break;
				
				case 75:
					*uParam2 = 3665;
					break;
				
				case 76:
					*uParam2 = 3666;
					break;
				
				case 77:
					*uParam2 = 3667;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case 79:
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3885;
					break;
				
				case 87:
					*uParam2 = 3886;
					break;
				
				case 88:
					*uParam2 = 3887;
					break;
				
				case 89:
					*uParam2 = 5320;
					break;
				
				case 90:
					*uParam2 = 5321;
					break;
				
				case 91:
					*uParam2 = 5322;
					break;
				
				case 92:
					*uParam2 = 5323;
					break;
				
				case 93:
					*uParam2 = 5324;
					break;
				
				case 94:
					*uParam2 = 5325;
					break;
				
				case 95:
					*uParam2 = 5326;
					break;
				
				case 96:
					*uParam2 = 5327;
					break;
				
				case 97:
					*uParam2 = 5328;
					break;
				
				case 98:
					*uParam2 = 5329;
					break;
				
				case 99:
					*uParam2 = 5330;
					break;
				
				case 100:
					*uParam2 = 5331;
					break;
				
				case 101:
					*uParam2 = 5377;
					break;
				
				case 102:
					*uParam2 = 5378;
					break;
				
				case 103:
					*uParam2 = 5379;
					break;
				
				case 104:
					*uParam2 = 5380;
					break;
				
				case 105:
					*uParam2 = 5381;
					break;
				
				case 106:
					*uParam2 = 5382;
					break;
				
				case 107:
					*uParam2 = 5383;
					break;
				
				case 108:
					*uParam2 = 5384;
					break;
				
				case 109:
					*uParam2 = 5385;
					break;
				
				case 110:
					*uParam2 = 5386;
					break;
				
				case 111:
					*uParam2 = 5387;
					break;
				
				case 112:
					*uParam2 = 5388;
					break;
				
				case 113:
					*uParam2 = 5389;
					break;
				
				case 114:
					*uParam2 = 5390;
					break;
				
				case 115:
					*uParam2 = 5391;
					break;
				
				case 116:
					*uParam2 = 5392;
					break;
				
				case 117:
					*uParam2 = 5393;
					break;
				
				case 118:
					*uParam2 = 5394;
					break;
				
				case 119:
					*uParam2 = 5395;
					break;
				
				case 120:
					*uParam2 = 5396;
					break;
				
				case 121:
					*uParam2 = 5397;
					break;
				
				case 122:
					*uParam2 = 5398;
					break;
				
				case 123:
					*uParam2 = 5399;
					break;
				
				case 124:
					*uParam2 = 6105;
					break;
				
				case 125:
					*uParam2 = 6106;
					break;
				
				case 126:
					*uParam2 = 6107;
					break;
				
				case 127:
					*uParam2 = 6108;
					break;
				
				case 128:
					*uParam2 = 6109;
					break;
				
				case 129:
					*uParam2 = 6110;
					break;
				
				case 130:
					*uParam2 = 6111;
					break;
				
				case 131:
					*uParam2 = 6112;
					break;
				
				case 132:
					*uParam2 = 6113;
					break;
				
				case 133:
					*uParam2 = 6114;
					break;
				
				case 134:
					*uParam2 = 6115;
					break;
				
				case 135:
					*uParam2 = 6116;
					break;
				
				case 136:
					*uParam2 = 6117;
					break;
				
				case 137:
					*uParam2 = 6118;
					break;
				
				case 138:
					*uParam2 = 6119;
					break;
				
				case 139:
					*uParam2 = 6418;
					break;
				
				case 140:
					*uParam2 = 6419;
					break;
				
				case 141:
					*uParam2 = 6420;
					break;
				
				case 142:
					*uParam2 = 6421;
					break;
				
				case 143:
					*uParam2 = 6422;
					break;
				
				case 144:
					*uParam2 = 6423;
					break;
				
				case 145:
					*uParam2 = 6424;
					break;
				
				case 146:
					*uParam2 = 6425;
					break;
				
				case 147:
					*uParam2 = 6426;
					break;
				
				case 148:
					*uParam2 = 6427;
					break;
				
				case 149:
					*uParam2 = 6428;
					break;
				
				case 150:
					*uParam2 = 6429;
					break;
				
				case 151:
					*uParam2 = 6430;
					break;
				
				case 152:
					*uParam2 = 6431;
					break;
				
				case 153:
					*uParam2 = 6432;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2382;
					break;
				
				case 38:
					*uParam2 = 2383;
					break;
				
				case 39:
					*uParam2 = 2384;
					break;
				
				case 40:
					*uParam2 = 2385;
					break;
				
				case 41:
					*uParam2 = 2450;
					break;
				
				case 42:
					*uParam2 = 2451;
					break;
				
				case 43:
					*uParam2 = 2452;
					break;
				
				case 44:
					*uParam2 = 2453;
					break;
				
				case 45:
					*uParam2 = 2454;
					break;
				
				case 46:
					*uParam2 = 2455;
					break;
				
				case 47:
					*uParam2 = 2456;
					break;
				
				case 48:
					*uParam2 = 2457;
					break;
				
				case 49:
					*uParam2 = 2458;
					break;
				
				case 50:
					*uParam2 = 2459;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3191;
					break;
				
				case 63:
					*uParam2 = 3192;
					break;
				
				case 64:
					*uParam2 = 3193;
					break;
				
				case 65:
					*uParam2 = 3194;
					break;
				
				case 66:
					*uParam2 = 3195;
					break;
				
				case 67:
					*uParam2 = 3196;
					break;
				
				case 68:
					*uParam2 = 3668;
					break;
				
				case 69:
					*uParam2 = 3669;
					break;
				
				case 70:
					*uParam2 = 3670;
					break;
				
				case 71:
					*uParam2 = 3671;
					break;
				
				case 72:
					*uParam2 = 3672;
					break;
				
				case 73:
					*uParam2 = 3673;
					break;
				
				case 74:
					*uParam2 = 3674;
					break;
				
				case 75:
					*uParam2 = 3675;
					break;
				
				case 76:
					*uParam2 = 3676;
					break;
				
				case 77:
					*uParam2 = 3677;
					break;
				
				case 78:
					*uParam2 = 3783;
					break;
				
				case 79:
					*uParam2 = 3784;
					break;
				
				case 80:
					*uParam2 = 3785;
					break;
				
				case 81:
					*uParam2 = 3786;
					break;
				
				case 82:
					*uParam2 = 3787;
					break;
				
				case 83:
					*uParam2 = 3788;
					break;
				
				case 84:
					*uParam2 = 3789;
					break;
				
				case 85:
					*uParam2 = 3790;
					break;
				
				case 86:
					*uParam2 = 3888;
					break;
				
				case 87:
					*uParam2 = 3889;
					break;
				
				case 88:
					*uParam2 = 3890;
					break;
				
				case 89:
					*uParam2 = 5332;
					break;
				
				case 90:
					*uParam2 = 5333;
					break;
				
				case 91:
					*uParam2 = 5334;
					break;
				
				case 92:
					*uParam2 = 5335;
					break;
				
				case 93:
					*uParam2 = 5336;
					break;
				
				case 94:
					*uParam2 = 5337;
					break;
				
				case 95:
					*uParam2 = 5338;
					break;
				
				case 96:
					*uParam2 = 5339;
					break;
				
				case 97:
					*uParam2 = 5340;
					break;
				
				case 98:
					*uParam2 = 5341;
					break;
				
				case 99:
					*uParam2 = 5342;
					break;
				
				case 100:
					*uParam2 = 5343;
					break;
				
				case 101:
					*uParam2 = 5400;
					break;
				
				case 102:
					*uParam2 = 5401;
					break;
				
				case 103:
					*uParam2 = 5402;
					break;
				
				case 104:
					*uParam2 = 5403;
					break;
				
				case 105:
					*uParam2 = 5404;
					break;
				
				case 106:
					*uParam2 = 5405;
					break;
				
				case 107:
					*uParam2 = 5406;
					break;
				
				case 108:
					*uParam2 = 5407;
					break;
				
				case 109:
					*uParam2 = 5408;
					break;
				
				case 110:
					*uParam2 = 5409;
					break;
				
				case 111:
					*uParam2 = 5410;
					break;
				
				case 112:
					*uParam2 = 5411;
					break;
				
				case 113:
					*uParam2 = 5412;
					break;
				
				case 114:
					*uParam2 = 5413;
					break;
				
				case 115:
					*uParam2 = 5414;
					break;
				
				case 116:
					*uParam2 = 5415;
					break;
				
				case 117:
					*uParam2 = 5416;
					break;
				
				case 118:
					*uParam2 = 5417;
					break;
				
				case 119:
					*uParam2 = 5418;
					break;
				
				case 120:
					*uParam2 = 5419;
					break;
				
				case 121:
					*uParam2 = 5420;
					break;
				
				case 122:
					*uParam2 = 5421;
					break;
				
				case 123:
					*uParam2 = 5422;
					break;
				
				case 124:
					*uParam2 = 6120;
					break;
				
				case 125:
					*uParam2 = 6121;
					break;
				
				case 126:
					*uParam2 = 6122;
					break;
				
				case 127:
					*uParam2 = 6123;
					break;
				
				case 128:
					*uParam2 = 6124;
					break;
				
				case 129:
					*uParam2 = 6125;
					break;
				
				case 130:
					*uParam2 = 6126;
					break;
				
				case 131:
					*uParam2 = 6127;
					break;
				
				case 132:
					*uParam2 = 6128;
					break;
				
				case 133:
					*uParam2 = 6129;
					break;
				
				case 134:
					*uParam2 = 6130;
					break;
				
				case 135:
					*uParam2 = 6131;
					break;
				
				case 136:
					*uParam2 = 6132;
					break;
				
				case 137:
					*uParam2 = 6133;
					break;
				
				case 138:
					*uParam2 = 6134;
					break;
				
				case 139:
					*uParam2 = 6433;
					break;
				
				case 140:
					*uParam2 = 6434;
					break;
				
				case 141:
					*uParam2 = 6435;
					break;
				
				case 142:
					*uParam2 = 6436;
					break;
				
				case 143:
					*uParam2 = 6437;
					break;
				
				case 144:
					*uParam2 = 6438;
					break;
				
				case 145:
					*uParam2 = 6439;
					break;
				
				case 146:
					*uParam2 = 6440;
					break;
				
				case 147:
					*uParam2 = 6441;
					break;
				
				case 148:
					*uParam2 = 6442;
					break;
				
				case 149:
					*uParam2 = 6443;
					break;
				
				case 150:
					*uParam2 = 6444;
					break;
				
				case 151:
					*uParam2 = 6445;
					break;
				
				case 152:
					*uParam2 = 6446;
					break;
				
				case 153:
					*uParam2 = 6447;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7872;
}

int func_197(int iParam0)//Position - 0x1B046
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_198(int iParam0, int iParam1, int iParam2)//Position - 0x1B11A
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_70671[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x23A6BE673BD02B2D(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x54F960113E1CDCA9(iVar3, &Var2);
			if (!unk_0x42683C90F2D005ED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_190(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_190(&(Global_70671[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x53CE22B0EDFAB540(iVar8, &Var6);
			if (!unk_0x42683C90F2D005ED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_190(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x6C297174CFC8C5B2(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var11);
		iVar13 = 0;
		iVar14 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 0, -1, func_182(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0x19002A6D4CBCE1E2(iVar12, &Var11);
			if (!unk_0x42683C90F2D005ED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_190(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x6C297174CFC8C5B2(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_199(int iParam0)//Position - 0x1B395
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 9);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)//Position - 0x1B4EB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 48);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)//Position - 0x1B9F8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 1);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)//Position - 0x1BA6C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 1);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)//Position - 0x1BADF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 6);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0)//Position - 0x1BBC5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_198(iVar7, iParam0, 33);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)//Position - 0x1BF27
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_198(iVar7, iParam0, 17);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)//Position - 0x1C139
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 18);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)//Position - 0x1C368
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 7);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0)//Position - 0x1C477
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_198(iVar7, iParam0, 84);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0)//Position - 0x1CE15
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_198(iVar7, iParam0, 104);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)//Position - 0x1D987
{
	if (iParam0 < 136)
	{
		func_212(iParam0);
	}
	else
	{
		func_211(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_198(3, iParam0, 242);
	}
}

void func_211(int iParam0)//Position - 0x1D9BB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0)//Position - 0x1E5BF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_213(int iParam0)//Position - 0x1F4CD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 9);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)//Position - 0x1F5F9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_198(iVar7, iParam0, 7);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0, int iParam1)//Position - 0x1F6F6
{
	switch (iParam0)
	{
		case 0:
			func_233(iParam1);
			break;
		
		case 2:
			func_232(iParam1);
			break;
		
		case 3:
			func_228(iParam1);
			break;
		
		case 4:
			func_227(iParam1);
			break;
		
		case 6:
			func_226(iParam1);
			break;
		
		case 5:
			func_225(iParam1);
			break;
		
		case 8:
			func_224(iParam1);
			break;
		
		case 9:
			func_223(iParam1);
			break;
		
		case 10:
			func_222(iParam1);
			break;
		
		case 1:
			func_221(iParam1);
			break;
		
		case 7:
			func_220(iParam1);
			break;
		
		case 11:
			func_219(iParam1);
			break;
		
		case 12:
			func_218(iParam1);
			break;
		
		case 13:
			func_217(iParam1);
			break;
		
		case 14:
			func_216(iParam1);
			break;
	}
}

void func_216(int iParam0)//Position - 0x1F7E6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 175);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0)//Position - 0x20CD7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 9);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)//Position - 0x20E27
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 47);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)//Position - 0x21331
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_198(iVar7, iParam0, 63);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0)//Position - 0x2199E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 1);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0)//Position - 0x21A11
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 5);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0)//Position - 0x21AE0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 53);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0)//Position - 0x2200F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 12);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)//Position - 0x221A5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 77);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)//Position - 0x229A2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 7);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0)//Position - 0x22AB1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_198(iVar7, iParam0, 134);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227(int iParam0)//Position - 0x239DB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_198(iVar7, iParam0, 117);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_228(int iParam0)//Position - 0x24699
{
	if (iParam0 < 107)
	{
		func_231(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_230(iParam0);
	}
	else
	{
		func_229(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_198(3, iParam0, 318);
	}
}

void func_229(int iParam0)//Position - 0x246DE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230(int iParam0)//Position - 0x25183
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(int iParam0)//Position - 0x25F72
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_232(int iParam0)//Position - 0x26BBB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 21);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233(int iParam0)//Position - 0x26E33
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_198(iVar7, iParam0, 10);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_234(int iParam0, int iParam1)//Position - 0x26F78
{
	switch (iParam0)
	{
		case 0:
			func_251(iParam1);
			break;
		
		case 2:
			func_250(iParam1);
			break;
		
		case 3:
			func_247(iParam1);
			break;
		
		case 4:
			func_246(iParam1);
			break;
		
		case 6:
			func_245(iParam1);
			break;
		
		case 5:
			func_244(iParam1);
			break;
		
		case 8:
			func_243(iParam1);
			break;
		
		case 9:
			func_242(iParam1);
			break;
		
		case 10:
			func_241(iParam1);
			break;
		
		case 1:
			func_240(iParam1);
			break;
		
		case 7:
			func_239(iParam1);
			break;
		
		case 11:
			func_238(iParam1);
			break;
		
		case 12:
			func_237(iParam1);
			break;
		
		case 13:
			func_236(iParam1);
			break;
		
		case 14:
			func_235(iParam1);
			break;
	}
}

void func_235(int iParam0)//Position - 0x27068
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_198(iVar7, iParam0, 113);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_236(int iParam0)//Position - 0x27DF1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 10);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_237(int iParam0)//Position - 0x27F6A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 53);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_238(int iParam0)//Position - 0x2854E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 45);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_239(int iParam0)//Position - 0x28A77
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 1);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_240(int iParam0)//Position - 0x28AEA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 5);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_241(int iParam0)//Position - 0x28BB9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_198(iVar7, iParam0, 48);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_242(int iParam0)//Position - 0x29090
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 20);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_243(int iParam0)//Position - 0x292F8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 24);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_244(int iParam0)//Position - 0x295CD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_198(iVar7, iParam0, 14);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_245(int iParam0)//Position - 0x29795
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_198(iVar7, iParam0, 99);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_246(int iParam0)//Position - 0x2A2E8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 113);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_247(int iParam0)//Position - 0x2AF31
{
	if (iParam0 < 60)
	{
		func_249(iParam0);
	}
	else
	{
		func_248(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_198(3, iParam0, 181);
	}
}

void func_248(int iParam0)//Position - 0x2AF65
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_249(int iParam0)//Position - 0x2BD37
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_250(int iParam0)//Position - 0x2C3F7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_198(iVar7, iParam0, 6);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_251(int iParam0)//Position - 0x2C4E2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_198(iVar7, iParam0, 7);
			return;
			break;
	}
	func_190(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_252()//Position - 0x2C5DF
{
	Global_70671[0 /*14*/].f_1 = -1;
	Global_70671[0 /*14*/].f_2 = -1;
	Global_70671[0 /*14*/].f_5 = -1;
	Global_70671[0 /*14*/].f_3 = -1;
	Global_70671[0 /*14*/].f_4 = -1;
	Global_70671[0 /*14*/].f_7 = 0;
	Global_70671[0 /*14*/].f_6 = 0;
	Global_70671[0 /*14*/].f_13 = -1;
	Global_70671[0 /*14*/].f_12 = 0;
	Global_70671[0 /*14*/] = 0;
	StringCopy(&(Global_70671[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C658
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_186(iParam0);
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_104555.f_2353.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C95F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_182(iParam3);
	iVar1 = unk_0x7A8C4EAB4DAEE8ED(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0BE76048E700C028(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_255(int iParam0)//Position - 0x2C9E3
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_256()//Position - 0x2CA93
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_111 - 1))
	{
		Local_111[iVar0 /*12*/] = 0;
		Local_111[iVar0 /*12*/].f_1 = -1;
		Local_111[iVar0 /*12*/].f_2 = -1;
		Local_111[iVar0 /*12*/].f_3 = 0;
		Local_111[iVar0 /*12*/].f_5 = -1;
		Local_111[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	unk_0x3E80C2F7BC665259(1);
	func_257(1);
}

void func_257(int iParam0)//Position - 0x2CAF5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_103207)
	{
		unk_0xCF14F4421582B24A(iVar0, iParam0);
		func_258(iVar0);
		iVar0++;
	}
}

void func_258(int iParam0)//Position - 0x2CB23
{
	Global_103207[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103207[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103207[iParam0 /*28*/].f_4), "", 64);
	Global_103207[iParam0 /*28*/].f_23 = 0;
	Global_103207[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103207[iParam0 /*28*/].f_27 = 0;
	Global_103207[iParam0 /*28*/].f_20 = 0;
	Global_103207[iParam0 /*28*/].f_22 = 0;
}

int func_259()//Position - 0x2CB8D
{
	func_546(137, 156);
	unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
	func_468(0, 25, 2, 145, 1, 0, 1, 0);
	func_468(1, 26, 2, 145, 1, 0, 1, 0);
	func_468(2, 27, 3, 145, 1, 0, 1, 0);
	func_342(0, 108, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(1, 109, 1, 2, 139, 5, 140, 4, 144, 1, 0, 1, 0);
	func_342(2, 110, 0, 2, 143, 5, 140, 1, 0, 1, 0, 1, 0);
	func_342(3, 114, 1, 3, 141, 4, 144, 5, 140, 1, 0, 1, 0);
	func_342(14, 115, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(4, 113, 1, 2, 141, 4, 142, 5, 140, 1, 0, 1, 0);
	func_342(7, 118, 0, 2, 150, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(6, 117, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(8, 119, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(9, 121, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(10, 120, 0, 2, 151, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(5, 116, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(11, 92, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(12, 105, 1, 2, 153, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(13, 107, 0, 2, 145, 1, 0, 1, 0, 1, 0, 1, 0);
	func_342(15, 106, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_300(0, 69, 0, 0, 1, 0, 1, 0, 1, 0);
	func_298(1, 70, 0, 69, 2, 143, 6, 149, 1, 0, 1, 0);
	func_298(2, 71, 0, 69, 2, 152, 1, 0, 1, 0, 1, 0);
	func_300(3, 72, 2, 153, 5, 154, 5, 155, 1, 0);
	func_300(4, 73, 2, 153, 4, 155, 1, 0, 1, 0);
	func_261(7, 0, 0, 1, 0);
	func_261(9, 0, 0, 1, 0);
	if (func_260(9, 121))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)//Position - 0x2CD7A
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		if (Local_69[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CDA0
{
	if (func_292(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 1:
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
				{
					unk_0x9E058151726E58DE(Local_94[4 /*14*/], joaat("weapon_pistol"), -1, true, true);
					func_134();
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					func_133(Local_94[4 /*14*/], 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
				{
					unk_0x9E058151726E58DE(Local_94[5 /*14*/], joaat("weapon_pistol"), -1, true, true);
					func_134();
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					func_133(Local_94[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 2000);
				break;
			
			case 2:
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
				{
					unk_0x9E058151726E58DE(Local_94[4 /*14*/], joaat("weapon_pistol"), -1, true, true);
					unk_0xAE6EBBBBD8B9FB30(Local_94[4 /*14*/], 2, 1);
					func_134();
					if (func_135(unk_0xFC1458A37D98B502(), unk_0xD0E00576168D19BB(Local_94[4 /*14*/], 0, 0f, 0f, 0f), 1) > 1,4f)
					{
						unk_0x16416C5B54FDBCBB(0, 0, 0);
					}
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					func_133(Local_94[4 /*14*/], 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
				{
					unk_0x9E058151726E58DE(Local_94[5 /*14*/], joaat("weapon_pistol"), -1, true, true);
					unk_0xAE6EBBBBD8B9FB30(Local_94[5 /*14*/], 2, 1);
					func_134();
					if (func_135(unk_0xFC1458A37D98B502(), unk_0xD0E00576168D19BB(Local_94[5 /*14*/], 0, 0f, 0f, 0f), 1) > 1,4f)
					{
						unk_0x16416C5B54FDBCBB(0, 0, 0);
					}
					unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
					func_133(Local_94[5 /*14*/], 0);
				}
				func_1("ARM2_F01", 1500);
				break;
			
			case 14:
				func_1("ARM2_F01", 2000);
				break;
			
			case 15:
				if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
				{
					if (unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
					{
						if (iLocal_301 == 4 && fLocal_303 == 1f)
						{
							if (!func_291(Local_94[2 /*14*/], -1133,037f, -1583,803f, 2,556583f, -1129,521f, -1588,63f, 6,842f, 5,125f))
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
								{
									unk_0x9E058151726E58DE(Local_94[4 /*14*/], joaat("weapon_pistol"), -1, true, true);
									func_134();
									unk_0x16416C5B54FDBCBB(0, 0, 0);
									unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
									func_133(Local_94[4 /*14*/], 0);
								}
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
								{
									unk_0x9E058151726E58DE(Local_94[5 /*14*/], joaat("weapon_pistol"), -1, true, true);
									func_134();
									unk_0x16416C5B54FDBCBB(0, 0, 0);
									unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
									func_133(Local_94[5 /*14*/], 0);
								}
								while (!func_275("AR2_BLOCK2", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									system::wait(0);
								}
								func_1("ARM2_F01", 2000);
							}
						}
					}
				}
				break;
			
			case 3:
				func_1("ARM2_F01", 2000);
				break;
			
			case 4:
				if (iLocal_301 == 9)
				{
					func_273(22, -1128,141f, -1605,52f, 3,3985f, 341,9648f, joaat("weapon_pistol"), 0, 0, -1);
					func_273(23, -1127,131f, -1607,135f, 3,3985f, 2,1088f, joaat("weapon_pistol"), 0, 0, -1);
					unk_0xF96119FCCD4D1889(5, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()), iLocal_98);
					unk_0xF96119FCCD4D1889(5, iLocal_98, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
					unk_0x3811A0FC01E02FC1(Local_94[22 /*14*/], 1);
					unk_0x3811A0FC01E02FC1(Local_94[23 /*14*/], 1);
					unk_0x992E814DF611C58C(Local_94[22 /*14*/], 150f, 0);
					unk_0x992E814DF611C58C(Local_94[23 /*14*/], 150f, 0);
					unk_0x45BD02A17452ECE4(Local_94[22 /*14*/], 2, 6f);
					unk_0x45BD02A17452ECE4(Local_94[22 /*14*/], 13, 5f);
					unk_0x45BD02A17452ECE4(Local_94[23 /*14*/], 2, 6f);
					unk_0x45BD02A17452ECE4(Local_94[23 /*14*/], 13, 5f);
					unk_0xAE6EBBBBD8B9FB30(Local_94[22 /*14*/], 50, 1);
					unk_0xAE6EBBBBD8B9FB30(Local_94[23 /*14*/], 50, 1);
					func_270(Local_94[22 /*14*/], 1, 145);
					func_270(Local_94[23 /*14*/], 1, 145);
					func_268();
					unk_0x84CDD933AFA470D2();
					while (!func_275("ARM2_GET4", 8, Local_94[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						system::wait(0);
					}
					func_1("ARM2_F11", 2000);
				}
				break;
			
			case 6:
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
				{
					if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) > 100f && !func_98())
					{
						func_1("ARM2_F05", 0);
					}
					if (iLocal_92 < 9 && iLocal_92 >= 7)
					{
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1136,172f, -1579,05f, 2,68122f, -1129,543f, -1588,645f, 7,067074f, 56,75f, 0, 1, 0))
						{
							func_1("ARM2_F05", 0);
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x6ADD12BF4D6D2587(Local_95[4 /*2*/]))
				{
					if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
					{
						if (func_267(unk_0xFC1458A37D98B502(), Local_95[4 /*2*/], 1) > 500f)
						{
							func_262("ARM2_F06", "ARM2_LOSEB");
						}
					}
				}
				break;
			
			case 7:
				if (unk_0x6ADD12BF4D6D2587(Local_95[4 /*2*/]))
				{
					if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
					{
						if (func_267(unk_0xFC1458A37D98B502(), Local_95[4 /*2*/], 1) > 500f)
						{
							func_1("ARM2_F09", 0);
						}
					}
				}
				break;
			
			case 5:
				func_1("ARM2_F07", 0);
				break;
			
			case 9:
				if (unk_0x6ADD12BF4D6D2587(Local_94[2 /*14*/]))
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
					{
						func_1("ARM2_F02", 0);
					}
				}
				break;
			
			case 10:
				if (unk_0x6ADD12BF4D6D2587(Local_94[3 /*14*/]))
				{
					if (unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
					{
						func_1("ARM2_F10", 0);
					}
				}
				break;
			
			case 11:
				break;
			
			case 12:
				if (iLocal_304 > 0)
				{
					if (!unk_0x6ADD12BF4D6D2587(Local_94[22 /*14*/]))
					{
						iLocal_304 = -1;
					}
				}
				if (iLocal_304 == 0)
				{
					iLocal_304 = unk_0x53C562FD2B9E3AB0() + 4000;
				}
				if (unk_0x53C562FD2B9E3AB0() > iLocal_304)
				{
					func_1("ARM2_F01", 0);
				}
				break;
			
			case 13:
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					func_1("ARM2_F01", 0);
				}
				break;
			}
	}
}

void func_262(char* sParam0, char* sParam1)//Position - 0x2D3F8
{
	func_265();
	while (!func_275(sParam1, 0, unk_0xFC1458A37D98B502(), "Franklin", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
	{
		func_19(18, 0);
	}
	while (!func_263(sParam1))
	{
		func_19(19, 0);
	}
	while (func_263(sParam1))
	{
		func_19(20, 0);
	}
	while (!unk_0x8810DC630928B398("ARM2_MISSION_FAIL"))
	{
		func_19(21, 0);
	}
	func_3(sParam0);
	while (!func_2())
	{
		system::wait(0);
	}
	func_650(1);
}

int func_263(char* sParam0)//Position - 0x2D48B
{
	struct<6> Var0;
	
	Var0 = { func_264() };
	if (unk_0x74C475EB8E73D398(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_264()//Position - 0x2D4AB
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_265()//Position - 0x2D4CF
{
	Global_14622 = 0;
	func_266();
}

void func_266()//Position - 0x2D4DF
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

float func_267(int iParam0, int iParam1, bool bParam2)//Position - 0x2D503
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

void func_268()//Position - 0x2D561
{
	Global_14622 = 0;
	func_269();
}

void func_269()//Position - 0x2D571
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_270(int iParam0, bool bParam1, int iParam2)//Position - 0x2D592
{
	int iVar0;
	
	iVar0 = func_271(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_271(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D5E4
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_272(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_272(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_272(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_272(bool bParam0, float fParam1, float fParam2)//Position - 0x2D688
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_273(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2D69F
{
	int iVar0;
	
	if (unk_0x63A6486593EC7EC3(0, 2) == 0)
	{
		iVar0 = iLocal_259;
	}
	else
	{
		iVar0 = iLocal_260;
	}
	if (unk_0x6ADD12BF4D6D2587(Local_94[iParam0 /*14*/]))
	{
		unk_0x486F346ADFE56674(&(Local_94[iParam0 /*14*/]));
	}
	if (iParam5 == 0)
	{
		Local_94[iParam0 /*14*/] = unk_0xAC992EFAD62C33BF(26, iVar0, vParam1, fParam2, 1, true);
	}
	else if (!unk_0x191BE1BC8F26F3C1(iParam5, 0))
	{
		if (unk_0x8EE3A848975DDF21(iParam5, iParam6, 0))
		{
			Local_94[iParam0 /*14*/] = unk_0x00D1A9572426E8DD(iParam5, 26, iVar0, iParam6, 1, true);
		}
	}
	unk_0x9E058151726E58DE(Local_94[iParam0 /*14*/], iParam3, 1000, true, true);
	unk_0xCE93FCB8A8D8DF0B(Local_94[iParam0 /*14*/], iLocal_98);
	if (iParam4 == 1)
	{
	}
	else
	{
		unk_0xAE6EBBBBD8B9FB30(Local_94[iParam0 /*14*/], 8, 0);
		unk_0xAE6EBBBBD8B9FB30(Local_94[iParam0 /*14*/], 9, 0);
		unk_0xAE01EF4BC84AFE7C(Local_94[iParam0 /*14*/], 118, false);
	}
	unk_0xA37FFE314E45ED5D(Local_94[iParam0 /*14*/], true);
	unk_0xE01CE1EBCD7EE551(Local_94[iParam0 /*14*/], 130, 0);
	unk_0xC7478C0CABC29C5E(Local_94[iParam0 /*14*/], 130);
	unk_0xDD1E7F41F625A69B(Local_94[iParam0 /*14*/], 100f);
	unk_0x3811A0FC01E02FC1(Local_94[iParam0 /*14*/], 1);
	unk_0xBB3CC641B6AED5E5(Local_94[iParam0 /*14*/], 30);
	func_274(Local_94[iParam0 /*14*/], 0);
	if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
	{
		unk_0xDD1E7F41F625A69B(Local_94[2 /*14*/], 100f);
	}
	iLocal_74 = unk_0x53C562FD2B9E3AB0() + 1000;
	return 1;
}

void func_274(int iParam0, bool bParam1)//Position - 0x2D7FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55933[iVar0 /*2*/] != 0)
			{
				if (Global_55933[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55932)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55933[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55933[iVar1 /*2*/] = iParam0;
	Global_55933[iVar1 /*2*/].f_1 = 7;
	Global_55932++;
}

int func_275(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x2D895
{
	if (!func_290())
	{
		func_289(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_286(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_286(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_286(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_286(iParam10, iParam11, sParam12);
		}
		if (unk_0x23F2F89E3D1CB7C4() && unk_0x248C9865A96D3EA4())
		{
			if (func_276(&Local_102, cLocal_107, sParam0, iParam13, 1, 0, 0))
			{
				bLocal_49 = true;
				return 1;
			}
		}
		else if (func_276(&Local_102, cLocal_107, sParam0, iParam13, 0, 0, 0))
		{
			bLocal_49 = false;
			return 1;
		}
	}
	return 0;
}

bool func_276(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2D937
{
	func_285(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_277(sParam2, iParam3, 0);
}

int func_277(char* sParam0, int iParam1, bool bParam2)//Position - 0x2D985
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
					func_284();
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
		if (func_283(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_282();
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
				func_281();
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
				if (func_280())
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
			if (func_172())
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
			func_279();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_278();
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
		func_284();
	}
	return 0;
}

void func_278()//Position - 0x2DC51
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

void func_279()//Position - 0x2DC82
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

int func_280()//Position - 0x2DD17
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

void func_281()//Position - 0x2DDB0
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

void func_282()//Position - 0x2DE52
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

bool func_283(int iParam0, int iParam1)//Position - 0x2DEA9
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

void func_284()//Position - 0x2DEE4
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

void func_285(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DF3B
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

void func_286(int iParam0, int iParam1, char* sParam2)//Position - 0x2DF91
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (iLocal_290[iVar0] == iParam1)
		{
			func_288(&Local_102, iVar0);
			iLocal_290[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_290[iParam0] != 0)
	{
		func_288(&Local_102, iParam0);
	}
	func_287(&Local_102, iParam0, iParam1, sParam2, 0, 1);
	iLocal_290[iParam0] = iParam1;
}

void func_287(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2DFF6
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

void func_288(var uParam0, int iParam1)//Position - 0x2E091
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_289(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2E0AE
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(sLocal_291) || !unk_0x74C475EB8E73D398(sLocal_291, sParam0))
	{
		sLocal_291 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_102[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_288(&Local_102, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_290()//Position - 0x2E123
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x2E145
{
	var uVar0[20];
	int iVar1;
	int iVar2;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar1 = unk_0x3689C35A674B0772(iParam0, &uVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			if (unk_0xB8DE76287EDC4957(uVar0[iVar2], 0))
			{
				if (func_128(uVar0[iVar2], vParam1, vParam2, fParam3))
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	return 1;
}

int func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2E1A6
{
	bLocal_70 = false;
	iLocal_71 = 0;
	if (func_293(&bLocal_70, &iLocal_71, iParam0, iParam1))
	{
		if (func_293(&bLocal_70, &iLocal_71, iParam2, iParam3))
		{
			if (func_293(&bLocal_70, &iLocal_71, iParam4, iParam5))
			{
				if (func_293(&bLocal_70, &iLocal_71, iParam6, iParam7))
				{
					if (func_293(&bLocal_70, &iLocal_71, iParam8, iParam9))
					{
					}
				}
			}
		}
	}
	if (bLocal_70)
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E216
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_297(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_296(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_297(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_297(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_296(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_297(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_295(iParam3))
			{
				if (func_296(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_297(iParam3))
				{
					func_294(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_294(int iParam0)//Position - 0x2E36F
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		Local_72[iVar0 /*7*/].f_3 = 1;
	}
}

int func_295(int iParam0)//Position - 0x2E39B
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && Local_72[iVar0 /*7*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x2E3DC
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && !Local_72[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x2E41E
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_72[0 /*7*/]);
	if (Local_72[iVar0 /*7*/] == iParam0)
	{
		if (Local_72[iVar0 /*7*/].f_1 && Local_72[iVar0 /*7*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2E45F
{
	if (!Local_66[iParam0 /*6*/].f_1)
	{
		if (func_299(iParam2, iParam3))
		{
			func_300(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11);
		}
	}
}

int func_299(int iParam0, int iParam1)//Position - 0x2E496
{
	if (Local_66[iParam0 /*6*/] == iParam1)
	{
		if (Local_66[iParam0 /*6*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_66[iParam0 /*6*/] != 0)
	{
	}
	return 0;
}

void func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2E4C6
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Local_66[iParam0 /*6*/] != iParam1)
	{
		Local_66[iParam0 /*6*/].f_1 = 0;
		Local_66[iParam0 /*6*/] = iParam1;
	}
	if (!Local_66[iParam0 /*6*/].f_1)
	{
		if (func_292(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0) && !bLocal_114)
		{
			if (!Local_66[iParam0 /*6*/].f_2)
			{
				Local_66[iParam0 /*6*/].f_2 = 1;
			}
			switch (Local_66[iParam0 /*6*/])
			{
				case 0:
					break;
				
				case 1:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (bLocal_49)
							{
								if (unk_0x42111BD51D233AAB())
								{
									if (!unk_0x23F2F89E3D1CB7C4())
									{
										cLocal_57 = { func_341() };
										if (!func_340(&cLocal_57))
										{
											vLocal_61 = { func_264() };
										}
										func_265();
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						
						case 1:
							if (!unk_0x42111BD51D233AAB())
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 2:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("AR2_BU01b", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 3000;
							}
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_339(6, 0))
								{
									if (func_339(6, 1))
									{
										iLocal_269 = func_321(unk_0xFC1458A37D98B502(), 2);
										if (iLocal_269 == 3)
										{
											if (func_275("AR2_BU27", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												func_320(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 1)
										{
											if (func_275("AR2_BU27b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												func_320(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 2)
										{
											if (func_275("AR2_BU27", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												func_320(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
										if (iLocal_269 == 4)
										{
											if (func_275("AR2_BU27b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_48 = 1;
												func_320(6, 0, 0);
												Local_66[iParam0 /*6*/].f_3++;
											}
										}
									}
									else if (func_275("AR2_BU31", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						
						case 2:
							if (!func_290())
							{
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 3000;
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 3:
							if (func_297(6) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
							{
								if (func_275("inCar", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 9000;
								}
							}
							else if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_275("get_wheels", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 11000;
								}
							}
							break;
						
						case 4:
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_275("ARM2_NODRIVE", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_4 = (unk_0x53C562FD2B9E3AB0() + 10000 + Local_66[iParam0 /*6*/].f_5 * 7000);
									Local_66[iParam0 /*6*/].f_5++;
									if (Local_66[iParam0 /*6*/].f_5 == 3)
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
							{
								if (func_135(unk_0xFC1458A37D98B502(), -31,3082f, -1102,691f, 25,4223f, 1) < 3,25f)
								{
									if (func_275("AR2_SIEMON", 5, Local_94[3 /*14*/], "SIMEON", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3++;
										Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 10000;
										Local_66[iParam0 /*6*/].f_5++;
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (Local_66[iParam0 /*6*/].f_5 == 3)
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
								else
								{
									Local_66[iParam0 /*6*/].f_3 = 0;
								}
							}
							break;
					}
					break;
				
				case 11:
					if (func_275("AR2_MESS", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 12:
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[22 /*14*/]))
					{
						unk_0x84CDD933AFA470D2();
						func_268();
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							if (func_275("ARM2_GET4", 8, Local_94[22 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
					}
					break;
				
				case 5:
					if (Local_66[iParam0 /*6*/].f_4 < 2)
					{
						if (func_275("ARM2_WANT", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_138(18, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					else if (Local_66[iParam0 /*6*/].f_4 < 6)
					{
						if (func_275("ARM2_WANTb", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_138(18, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					break;
				
				case 6:
					if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])))
						{
							if (Local_66[iParam0 /*6*/].f_5 < 2)
							{
								if (func_275("AR2_GETON", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_138(15, 0);
									Local_66[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_66[iParam0 /*6*/].f_4 < 5)
						{
							if (func_275("ARM2_OUTCAR", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_138(15, 0);
								Local_66[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				
				case 68:
					if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
					{
						if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])))
						{
							if (Local_66[iParam0 /*6*/].f_5 < 2)
							{
								if (func_275("AR2_GETON", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_138(15, 0);
									Local_66[iParam0 /*6*/].f_5++;
								}
							}
						}
						else if (Local_66[iParam0 /*6*/].f_4 < 5)
						{
							if (func_275("ARM2_BACKCH", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_138(15, 0);
								Local_66[iParam0 /*6*/].f_4++;
							}
						}
					}
					break;
				
				case 7:
					if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
					{
						if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) < 10f)
						{
							if (Local_66[iParam0 /*6*/].f_4 < 5)
							{
								if (func_275("ARM2_OUTCARB", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									func_138(17, 0);
									Local_66[iParam0 /*6*/].f_4++;
								}
							}
						}
					}
					break;
				
				case 8:
					if (Local_66[iParam0 /*6*/].f_4 < 5)
					{
						if (func_275("ARM2_BACKIN", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							func_138(16, 0);
							Local_66[iParam0 /*6*/].f_4++;
						}
					}
					break;
				
				case 64:
					if (Local_66[iParam0 /*6*/].f_4 < 5)
					{
						func_138(16, 0);
					}
					break;
				
				case 3:
					if (func_297(2) && !unk_0xAB019B170BF1309C(&vLocal_61))
					{
						if (func_318(&vLocal_61, &cLocal_57, 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_48 = 1;
							StringCopy(&vLocal_61, "", 24);
							StringCopy(&cLocal_57, "", 24);
							func_138(2, 0);
						}
					}
					else if (func_135(unk_0xFC1458A37D98B502(), -1134,2f, -1574,5f, 5,1f, 1) > 60f)
					{
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_317(43))
								{
									if (func_275("AR2_BU02d", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_317(40))
								{
									if (func_275("AR2_BU02c", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_48 = 1;
										Local_66[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_275("AR2_BU02", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3 = 3;
								}
								break;
							
							case 3:
								if (func_275("AR2_BU02b", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 4:
								if (func_290())
								{
									Local_66[iParam0 /*6*/].f_3 = 7;
								}
								break;
							
							case 7:
								if (func_275("driveBant", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 9:
								if (func_290())
								{
									func_265();
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
							
							case 10:
								if (func_275("DriveApp1", 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, -1, 0, 0, 8))
								{
									iLocal_48 = 1;
									Local_66[iParam0 /*6*/].f_3++;
								}
								break;
						}
					}
					else
					{
						func_265();
						iLocal_48 = 0;
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 14:
					if (func_275("AR2_BU04", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 13:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							func_265();
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_275("AR2_BU03", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (!func_263("AR2_BU03"))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					if (func_275("AR2_AN04", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 16:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_315("AR2_AN04b", "AR2_AN04b_1", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_315("AR2_AN04b", "AR2_AN04b_2", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 1000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_315("AR2_AN04b", "AR2_AN04b_4", 3, Local_94[2 /*14*/], "Lamar", 1, Local_94[3 /*14*/], "Arm2bum", -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
						
						case 2:
							if (!func_263("AR2_AN04b"))
							{
								unk_0xE44A9E63DC81244A(Local_94[3 /*14*/], "AR2_DFAH", "ARM2bum", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							func_265();
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_275("AR2_AN04d", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 1000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_275("AR2_see", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 39:
					if (!func_297(64))
					{
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
							{
								switch (Local_66[iParam0 /*6*/].f_3)
								{
									case 0:
										if (func_267(Local_95[1 /*2*/], Local_94[2 /*14*/], 1) < 6f)
										{
											Local_66[iParam0 /*6*/].f_3++;
										}
										break;
									
									case 1:
										if (func_275("AR2_AN05", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_1 = 1;
										}
										break;
									}
								}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 21:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("ARM2_OUT", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_263("move"))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
							{
								if (unk_0x90D5DFB054818BA7(Local_95[1 /*2*/]) > 1f)
								{
									if (func_275("ARM2_OUT2", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3++;
									}
								}
								else if (func_315("ARM2_OUT2", "ARM2_OUT2_2", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 3:
							if (func_275("ARM2_OUT3", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 4:
							if (func_275("ARM2_OUT4", 4, Local_94[4 /*14*/], "arm2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 23:
					if (func_275("ARM2_GET4", 8, Local_94[4 /*14*/], "arm2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
						{
							unk_0x9E058151726E58DE(Local_94[4 /*14*/], joaat("weapon_pistol"), -1, true, true);
							func_134();
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							func_133(Local_94[4 /*14*/], 0);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
						{
							unk_0x9E058151726E58DE(Local_94[5 /*14*/], joaat("weapon_pistol"), -1, true, true);
							func_134();
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							func_133(Local_94[5 /*14*/], 0);
						}
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							if (unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
							{
								vVar0 = { unk_0x8FD9FCCB6E4BD999(Local_95[1 /*2*/]) };
								unk_0x7674774BB9279265(Local_95[1 /*2*/]);
								unk_0xD91B0600CD72C5F7(Local_95[1 /*2*/], vVar0);
							}
						}
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_263("ARM2_OUT"))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_275("move", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 24:
					if (func_275("AR2_BU12", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
					{
						if (!unk_0x7E2C8B0B99E0B3C2(Local_94[5 /*14*/]))
						{
							unk_0x8BB5ECF21DDE505B(Local_94[5 /*14*/], 1);
						}
						if (!unk_0x7E2C8B0B99E0B3C2(Local_94[4 /*14*/]))
						{
							unk_0x8BB5ECF21DDE505B(Local_94[4 /*14*/], 1);
						}
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
								{
									if (func_267(unk_0xFC1458A37D98B502(), Local_94[4 /*14*/], 1) < 15f)
									{
										if (unk_0x63A6486593EC7EC3(0, 2) == 0)
										{
											unk_0x74D45BB07BD51F8B(Local_94[4 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_66[iParam0 /*6*/].f_3 = 2;
										}
										else
										{
											unk_0x74D45BB07BD51F8B(Local_94[5 /*14*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
											Local_66[iParam0 /*6*/].f_3 = 3;
										}
									}
								}
								break;
							
							case 2:
								if (!unk_0x33B1D0D0C92D4F18(Local_94[4 /*14*/]))
								{
									unk_0x74D45BB07BD51F8B(Local_94[5 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_66[iParam0 /*6*/].f_3 = 4;
								}
								break;
							
							case 3:
								if (!unk_0x33B1D0D0C92D4F18(Local_94[5 /*14*/]))
								{
									unk_0x74D45BB07BD51F8B(Local_94[4 /*14*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
									Local_66[iParam0 /*6*/].f_3 = 4;
								}
								break;
							
							case 4:
								if (!unk_0x33B1D0D0C92D4F18(Local_94[4 /*14*/]) && !unk_0x33B1D0D0C92D4F18(Local_94[5 /*14*/]))
								{
									Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 9000;
									Local_66[iParam0 /*6*/].f_3 = 0;
								}
								break;
							}
					}
					break;
				
				case 26:
					if (func_275("AR2_BU12", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 27:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 10000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) < 15f)
							{
								if (func_275("AR2_BU07", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							else if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 28:
					if (func_275("ARM2_adoor", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 29:
					if (func_275("ARM2_nextone", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 30:
					if (func_275("ARM2_last", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 31:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_314("ARM2_INS07", 0, 0))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (Local_66[iParam0 /*6*/].f_4 < 3)
							{
								if (func_275("WaitAtGar", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3++;
									Local_66[iParam0 /*6*/].f_4++;
									Local_66[iParam0 /*6*/].f_3 = unk_0x53C562FD2B9E3AB0() + 4000;
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										func_313(Local_94[2 /*14*/]);
										unk_0x60C06BFD037BB7CF(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 4000, 0, 2);
									}
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
						
						default:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_3)
							{
								func_312(Local_94[2 /*14*/], 1);
								Local_66[iParam0 /*6*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 19:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_311(14, 32) > 0)
							{
								if (!func_297(55))
								{
									if (func_275("AR2_BU12", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 1) - Vector(5f, 0f, 0f), -1065,555f, -1675,355f, 24,1932f, 150f, 0, 1, 0))
								{
									if (func_275("AR2_LEAVE2", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (func_275("AR2_LEAVE1", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_3 = 1;
								}
							}
							break;
						
						case 1:
							if (func_311(14, 32) == 0)
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 33:
					if (func_275("ARM2_UPTO", 4, Local_94[4 /*14*/], "ARM2VAGOSCAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_4++;
					}
					if (Local_66[iParam0 /*6*/].f_4 >= 5)
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 34:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 3000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							if (func_275("frank_hit", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 36:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 10000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (func_290())
							{
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 10000;
							}
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (func_310("ARM2_HURRY", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 12000;
							}
							break;
						
						case 3:
							if (func_290())
							{
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 10000;
							}
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 4:
							if (func_310("openit", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3 = 1;
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 12000;
								Local_66[iParam0 /*6*/].f_5++;
								if (Local_66[iParam0 /*6*/].f_5 == 2)
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 37:
					if (Local_66[iParam0 /*6*/].f_5 < 6)
					{
						if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_275("AR2_MESS", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_138(87, 0);
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 5000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 38:
					if (Local_66[iParam0 /*6*/].f_5 < 2)
					{
						if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_275("AR2_BLOCK", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_138(86, 0);
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 40:
					if (func_275("ARM2_GET", 5, Local_94[9 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 41:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_309("ARM2_ATTACK", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_315("ARM2_COVER", "ARM2_COVER_1", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 43:
					if (func_309("AR2_MCS_4_LO", 0, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 7))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 42:
					if (func_275("AR2_HELP", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 44:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 3000;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[11 /*14*/]) && unk_0x53C562FD2B9E3AB0() < Local_66[iParam0 /*6*/].f_4)
							{
								if (func_275("AR2_BU40", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 45:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("ARM2_MORE", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_275("AR2_BU18", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_26("ARM2_HLP15", 12000);
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 46:
					if (func_275("AR2_BU37", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						func_138(130, 1);
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 47:
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
					{
						if (func_315("AR2_BU37b", "AR2_BU37b_2", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
						{
							func_138(130, 1);
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 48:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!func_290())
							{
								Local_66[iParam0 /*6*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(8000, 14000));
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							else if (func_290())
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
						
						case 2:
							iVar1 = 0;
							if (iLocal_78[0] < 8 && iLocal_79 != 0)
							{
								iLocal_80[0] = 0;
								iVar1++;
							}
							if (((iLocal_78[1] == 0 || iLocal_78[2] == 0) || iLocal_78[3] == 0) || iLocal_78[4] == 0)
							{
								if (iLocal_79 != 1)
								{
									iLocal_80[iVar1] = 1;
									iVar1++;
								}
							}
							if (((iLocal_78[5] < 3 || iLocal_78[6] < 3) || iLocal_78[7] < 3) || iLocal_78[8] < 3)
							{
								if (iLocal_79 != 2)
								{
									iLocal_80[iVar1] = 2;
									iVar1++;
								}
							}
							if (iLocal_78[9] < 8 && iLocal_79 != 3)
							{
								iLocal_80[iVar1] = 3;
								iVar1++;
							}
							if (iVar1 > 0)
							{
								Local_66[iParam0 /*6*/].f_4 = iLocal_80[unk_0x63A6486593EC7EC3(0, iVar1)];
								Local_66[iParam0 /*6*/].f_3++;
							}
							else if (iLocal_79 == -1)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							iLocal_79 = -1;
							break;
						
						case 3:
							if (!func_290())
							{
								switch (Local_66[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_275("ARM2_SHOUT", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[0]++;
											iLocal_79 = 0;
										}
										break;
									
									case 1:
										iVar2 = unk_0x63A6486593EC7EC3(0, 12);
										while (iVar2 > 0)
										{
											switch ((iVar2 % 4))
											{
												case 0:
													if (iLocal_78[1] == 0)
													{
														iVar3 = 0;
													}
													break;
												
												case 1:
													if (iLocal_78[2] == 0)
													{
														iVar3 = 1;
													}
													break;
												
												case 2:
													if (iLocal_78[3] == 0)
													{
														iVar3 = 2;
													}
													break;
												
												case 3:
													if (iLocal_78[4] == 0)
													{
														iVar3 = 3;
													}
													break;
											}
											iVar2 = (iVar2 - 1);
										}
										Local_66[iParam0 /*6*/].f_3 = 4;
										iLocal_79 = 1;
										Local_66[iParam0 /*6*/].f_4 = iVar3;
										break;
									
									case 2:
										iVar6 = 0;
										iVar5 = -1;
										iVar4 = unk_0x63A6486593EC7EC3(0, 4);
										while (iVar5 == -1)
										{
											iVar6++;
											switch (iVar4)
											{
												case 0:
													if (iLocal_78[5] < 3)
													{
														iVar5 = 0;
													}
													else
													{
														iVar4++;
													}
													break;
												
												case 1:
													if (iLocal_78[6] < 3)
													{
														iVar5 = 1;
													}
													else
													{
														iVar4++;
													}
													break;
												
												case 2:
													if (iLocal_78[7] < 3)
													{
														iVar5 = 2;
													}
													else
													{
														iVar4++;
													}
													break;
												
												case 3:
													if (iLocal_78[8] < 3)
													{
														iVar5 = 3;
													}
													else
													{
														iVar4 = 0;
													}
													break;
											}
											if (iVar6 == 5)
											{
												iVar5 = 10;
											}
										}
										if (iVar5 != 10)
										{
											Local_66[iParam0 /*6*/].f_3 = 5;
											iLocal_79 = 2;
											Local_66[iParam0 /*6*/].f_4 = iVar5;
										}
										else
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
										}
										break;
									
									case 3:
										if (func_275("AR2_tnt", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[9]++;
											iLocal_79 = 3;
										}
										break;
								}
							}
							else
							{
								Local_66[iParam0 /*6*/].f_3 = 0;
							}
							break;
						
						case 4:
							switch (Local_66[iParam0 /*6*/].f_4)
							{
								case 0:
									if (func_275("shtchat1", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 2, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[1] = 1;
									}
									break;
								
								case 1:
									if (func_275("shtchat2", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[2] = 1;
									}
									break;
								
								case 2:
									if (func_275("shtchat3", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[3] = 1;
									}
									break;
								
								case 3:
									if (func_275("shtchat4", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_3 = 0;
										iLocal_78[4] = 1;
									}
									break;
							}
							break;
						
						case 5:
							iVar7 = func_308();
							if (iVar7 != -1)
							{
								switch (Local_66[iParam0 /*6*/].f_4)
								{
									case 0:
										if (func_275("ARM2_GET", 5, Local_94[iVar7 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[5]++;
										}
										break;
									
									case 1:
										if (unk_0x63A6486593EC7EC3(0, 2) == 0)
										{
											if (func_275("ARM2_GET2", 6, Local_94[iVar7 /*14*/], "ARM2VAGOS2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_66[iParam0 /*6*/].f_3 = 0;
												iLocal_78[6]++;
											}
										}
										else if (func_275("ARM2_NOGO", 5, Local_94[iVar7 /*14*/], "ARM2VAGOS1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[6]++;
										}
										break;
									
									case 2:
										if (func_275("ARM2_GET3", 7, Local_94[iVar7 /*14*/], "ARM2VAGOS3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[7]++;
										}
										break;
									
									case 3:
										if (func_275("ARM2_GET4", 8, Local_94[iVar7 /*14*/], "ARM2VAGOS4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_66[iParam0 /*6*/].f_3 = 0;
											iLocal_78[8]++;
										}
										break;
									}
							}
							break;
					}
					break;
				
				case 49:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_263("AR2_BU37"))
							{
								func_268();
							}
							if (func_275("AR2_BLOWUP", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 670;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							else if (func_275("AR2_BLOWUP", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 50:
					if (func_297(101))
					{
						if (func_275("AR2_godst", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else if (func_315("AR2_godst", "AR2_godst_3", 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 51:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("AR2_BU19", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_275("AR2_BU19b", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 52:
					if (unk_0x6ADD12BF4D6D2587(Local_94[18 /*14*/]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[18 /*14*/]))
						{
							if (func_275("ARM2_BALCON", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 53:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!func_290())
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0x6ADD12BF4D6D2587(Local_94[19 /*14*/]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[19 /*14*/]))
								{
									if (func_315("AR2_BU20b", "AR2_BU20b_1", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 54:
					if (unk_0x6ADD12BF4D6D2587(Local_94[21 /*14*/]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[21 /*14*/]))
						{
							if (func_275("AR2_DOOR", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				
				case 55:
					if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
					{
						if (unk_0x8DDE799D31A3D099(Local_95[6 /*2*/]))
						{
							if (func_275("AR2_BU26", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
						}
						else
						{
							Local_66[iParam0 /*6*/].f_1 = 1;
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 57:
					if (bLocal_91)
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					else if (func_275("AR2_BU36", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 56:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("ARM2_MORE2", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_275("ARM2_MORE2", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 58:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 500;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_275("AR2_safe", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4 + 4000)
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 59:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
							{
								if (unk_0x0F3033474C49912D(Local_95[4 /*2*/], -1129,596f, -1588,691f, -0,139362f, -1141,044f, -1572,93f, 7,562129f, 25,25f, 0, 1, 0))
								{
									Local_66[iParam0 /*6*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (func_275("AR2_MCS5_LI", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 1, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 63:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_275("AR2_BU23", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 1:
							if (func_275("ARM2_GOBIKE", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3++;
							}
							break;
						
						case 2:
							if (func_297(30))
							{
								if (func_296(33))
								{
									if (func_275("get_wheels", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 60:
					if (func_275("ARM2_burn", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 61:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 4500;
							Local_66[iParam0 /*6*/].f_3++;
							break;
						
						case 1:
							if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
							{
								if (func_296(101) && func_296(110))
								{
									if (func_275("AR2_BU24", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_66[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_66[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 62:
					if (func_275("AR2_LEAVE3", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 65:
					if (func_297(31) && !unk_0xAB019B170BF1309C(&vLocal_61))
					{
						if (func_318(&vLocal_61, &cLocal_57, 3, Local_94[2 /*14*/], "Lamar", 0, Local_94[0 /*14*/], "Franklin", -1, 0, 0, 8))
						{
							iLocal_48 = 1;
							StringCopy(&vLocal_61, "", 24);
							StringCopy(&cLocal_57, "", 24);
							func_138(31, 0);
						}
					}
					else
					{
						switch (Local_66[iParam0 /*6*/].f_3)
						{
							case 0:
								func_306(1);
								Local_66[iParam0 /*6*/].f_3++;
								break;
							
							case 1:
								func_306(0);
								break;
							}
					}
					break;
				
				case 66:
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
					{
						if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_267(unk_0xFC1458A37D98B502(), Local_94[8 /*14*/], 1) < 40f)
							{
								unk_0x350CEE66BDF90273(Local_94[8 /*14*/], "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_02");
								func_304(Local_94[8 /*14*/], "GENERIC_INSULT_HIGH", 10);
								Local_66[iParam0 /*6*/].f_3++;
								Local_66[iParam0 /*6*/].f_4 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(2500, 4000));
							}
						}
					}
					break;
				
				case 67:
					if (func_275("ARM2_GETIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 69:
					switch (Local_66[iParam0 /*6*/].f_3)
					{
						case 0:
							func_268();
							Local_66[iParam0 /*6*/].f_3 = 100;
							break;
						
						case 100:
							if (func_275("AR2_AN14", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_3 = 1;
							}
							break;
						
						case 1:
							if (func_275("AR2_BU34", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_66[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 70:
					if (func_275("AR2_bye", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 71:
					if (func_275("AR2_FINDCAR", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 72:
					if (Local_66[iParam0 /*6*/].f_5 < 3)
					{
						if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_303(6, 117) == 2)
							{
								func_302();
							}
							if (func_275("AR2_BRING", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_301(6, 117, 0);
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				
				case 73:
					if (Local_66[iParam0 /*6*/].f_5 < 3)
					{
						if (unk_0x53C562FD2B9E3AB0() > Local_66[iParam0 /*6*/].f_4)
						{
							if (func_303(6, 117) == 2)
							{
								func_302();
							}
							if (func_275("AR2_NOBIKE", 3, Local_94[2 /*14*/], "LAMAR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								func_301(6, 117, 0);
								Local_66[iParam0 /*6*/].f_4 = unk_0x53C562FD2B9E3AB0() + 8000;
								Local_66[iParam0 /*6*/].f_5++;
							}
						}
					}
					else
					{
						Local_66[iParam0 /*6*/].f_1 = 1;
					}
					break;
				}
			}
	}
	if (unk_0x42111BD51D233AAB())
	{
		Local_55 = { func_264() };
	}
	else
	{
		Local_56 = { Local_55 };
		Local_56 = { Local_56 };
	}
}

void func_301(int iParam0, int iParam1, int iParam2)//Position - 0x31568
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		Local_69[iParam0 /*10*/].f_8 = iParam2;
	}
}

void func_302()//Position - 0x3158A
{
	Global_14622 = 0;
	func_284();
}

int func_303(int iParam0, int iParam1)//Position - 0x3159A
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		return Local_69[iParam0 /*10*/].f_8;
	}
	return -1;
}

void func_304(int iParam0, char* sParam1, int iParam2)//Position - 0x315BE
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_305(iParam2), 1);
}

int func_305(int iParam0)//Position - 0x315D5
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

void func_306(int iParam0)//Position - 0x317EF
{
	if (iParam0 == 1)
	{
		iLocal_294 = 1;
		iLocal_293 = 0;
		iLocal_292 = 1;
		iLocal_295 = 10;
		iLocal_86 = 0;
	}
	else if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]) && unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), Local_95[4 /*2*/], (unk_0x90D5DFB054818BA7(Local_95[0 /*2*/]) * 3,5f), (unk_0x90D5DFB054818BA7(Local_95[0 /*2*/]) * 3,5f), 20f, 0, 1, 0))
		{
			if (iLocal_292 == 1)
			{
				iLocal_294 = 3;
				func_265();
			}
		}
		switch (iLocal_294)
		{
			case 2:
				if (iLocal_296 == -1)
				{
					iLocal_296 = unk_0x63A6486593EC7EC3(0, 2);
				}
				if (iLocal_296 == 0)
				{
					if (func_275("AR2_AN09", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_296 = -1;
						iLocal_294 = 4;
					}
				}
				else if (func_275("ARM2_BIKE", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_296 = -1;
					iLocal_294 = 4;
				}
				break;
			
			case 4:
				if (!unk_0xAB019B170BF1309C(sLocal_257))
				{
					if (func_275(sLocal_257, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						sLocal_257 = "";
					}
				}
				else if (!func_290())
				{
					iLocal_293 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 6000));
					iLocal_294 = 5;
				}
				break;
			
			case 5:
				if (unk_0x53C562FD2B9E3AB0() > iLocal_293)
				{
					if (func_267(unk_0xFC1458A37D98B502(), Local_94[8 /*14*/], 1) < 50f)
					{
						iLocal_295 = 11;
						iLocal_294 = 4;
						sLocal_257 = "AR2_AN13";
					}
					else if (func_267(unk_0xFC1458A37D98B502(), Local_94[8 /*14*/], 1) > 100f)
					{
						if (iLocal_295 == 11)
						{
							if (func_275("AR2_lost", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
							{
								iLocal_294 = 4;
								iLocal_295 = 10;
							}
						}
						else
						{
							if (!unk_0xAB019B170BF1309C(sLocal_257))
							{
							}
							else if (func_307(&iLocal_264, &iLocal_86, 0, 2, 0, 0))
							{
								if (iLocal_264 == 0)
								{
									sLocal_257 = "AR2_AN10";
								}
								else if (iLocal_264 == 1)
								{
									sLocal_257 = "AR2_AN11";
								}
								else if (iLocal_264 == 2)
								{
									sLocal_257 = "AR2_AN12";
								}
								iLocal_294 = 4;
							}
							iLocal_295 = 10;
						}
					}
				}
				break;
			
			case 3:
				iLocal_292 = 0;
				if (unk_0x69EFDF3384995190(unk_0xFC1458A37D98B502(), 0) != joaat("weapon_unarmed"))
				{
					if (func_275("AR2_AN15", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
					{
						iLocal_294 = 7;
					}
				}
				else if (func_275("AR2_AN15b", 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 3, Local_94[2 /*14*/], "Lamar", -1, 0, 0, -1, 0, 0, 8))
				{
					iLocal_294 = 9;
				}
				break;
			
			case 7:
				if (!func_290())
				{
					func_159(2, 12, 0);
					iLocal_294 = 5;
				}
				break;
			
			case 8:
				iLocal_294 = 5;
				break;
			
			case 9:
				if (!func_290())
				{
					iLocal_294 = 5;
				}
				break;
			
			case 1:
				if (!func_290())
				{
					iLocal_294 = 2;
				}
				break;
			}
	}
}

int func_307(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x31B2D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (!unk_0xC80D31E4B587871C(*iParam1, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = unk_0x63A6486593EC7EC3(0, iVar1);
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (!unk_0xC80D31E4B587871C(*iParam1, iVar0))
		{
			if (iVar2 == 0)
			{
				if (iParam4 == 1)
				{
					*iParam1 = 0;
				}
				unk_0x872F1C1F8587CCC7(iParam1, iVar0);
				*uParam0 = iVar0;
				return 1;
			}
			else
			{
				iVar2 = (iVar2 - 1);
			}
		}
		iVar0++;
	}
	if (iParam5 == 1)
	{
		*iParam1 = 0;
		*uParam0 = unk_0x63A6486593EC7EC3(0, iVar1);
		unk_0x872F1C1F8587CCC7(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

int func_308()//Position - 0x31BD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_94)
	{
		if (!unk_0x3AB6A1A9084FB0A4(Local_94[iVar0 /*14*/]))
		{
			if (unk_0x1479B36DFB6174A5(Local_94[iVar0 /*14*/]) == iLocal_98)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_309(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10)//Position - 0x31C17
{
	func_289(sParam0, iParam1, iParam4, iParam7, -1);
	func_286(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_286(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_286(iParam7, iParam8, sParam9);
	}
	if (func_276(&Local_102, cLocal_107, sParam0, iParam10, 1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_310(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x31C6F
{
	if (!unk_0x23F2F89E3D1CB7C4())
	{
		if (func_275(sParam0, iParam1, iParam2, sParam3, iParam4, iParam5, sParam6, iParam7, iParam8, sParam9, iParam10, iParam11, sParam12, iParam13))
		{
			return 1;
		}
	}
	return 0;
}

int func_311(int iParam0, int iParam1)//Position - 0x31CA7
{
	if (Local_69[iParam0 /*10*/] == iParam1)
	{
		return Local_69[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_312(int iParam0, bool bParam1)//Position - 0x31CC8
{
	bool bVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && unk_0x1ED974E122CB5C47(iParam0))
			{
				if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == unk_0xDFD115BB10FE46A9(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0xABF985A1AF8C953F(iParam0, unk_0xFC1458A37D98B502()))
		{
			if (!bVar0)
			{
				unk_0x60C06BFD037BB7CF(iParam0, unk_0xFC1458A37D98B502(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x62991A7E535036BD(iParam0))
			{
				unk_0xCB3D88C918AA637C(iParam0);
			}
		}
	}
}

void func_313(int iParam0)//Position - 0x31D4F
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xABF985A1AF8C953F(iParam0, unk_0xFC1458A37D98B502()))
		{
			unk_0xCB3D88C918AA637C(iParam0);
		}
	}
}

bool func_314(char* sParam0, int iParam1, char* sParam2)//Position - 0x31D74
{
	unk_0x4AF56F03659830D9(sParam0);
	if (iParam1 == 1)
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	return unk_0xC20F7134D3568246();
}

int func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x31D92
{
	if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
	{
		func_289(sParam0, iParam2, iParam5, iParam8, -1);
		func_286(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_286(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_286(iParam8, iParam9, sParam10);
		}
		if (func_316(&Local_102, cLocal_107, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_316(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x31DFE
{
	func_285(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_277(sParam2, iParam4, 0);
}

int func_317(int iParam0)//Position - 0x31E52
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x31E7E
{
	if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
	{
		func_289(sParam0, iParam2, iParam5, iParam8, -1);
		func_286(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_286(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_286(iParam8, iParam9, sParam10);
		}
		if (func_319(&Local_102, cLocal_107, sParam0, sParam1, iParam11, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_319(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x31EEA
{
	func_285(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_277(sParam2, iParam4, 0);
}

void func_320(int iParam0, int iParam1, bool bParam2)//Position - 0x31F3E
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iParam0]), iParam1);
	}
}

int func_321(int iParam0, int iParam1)//Position - 0x31FC3
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (!func_338(iVar0, 0))
	{
		return 2;
	}
	iVar1 = func_322(iParam0, iParam1, -1);
	if (iVar1 == -99)
	{
		return 0;
	}
	Global_70671[1 /*14*/] = { func_187(unk_0x82FF3DFBC3965CC0(iParam0), iParam1, iVar1) };
	return Global_70671[1 /*14*/];
}

int func_322(int iParam0, int iParam1, int iParam2)//Position - 0x32018
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_325(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_325(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_324(iParam0, iParam2);
			}
		}
		else
		{
			return func_323(iParam0, iParam1);
		}
	}
	return -99;
}

int func_323(int iParam0, int iParam1)//Position - 0x320B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = func_182(iParam1);
	iVar1 = unk_0x4CDD2D1D66ED1DE4(iParam0, iVar0);
	iVar2 = unk_0xDCC2BD4C56470D10(iParam0, iVar0);
	return func_254(iParam0, iVar1, iVar2, iParam1);
}

int func_324(int iParam0, int iParam1)//Position - 0x32119
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_184(iParam1);
	}
	iVar1 = unk_0xC563C871267881C4(iParam0, iParam1);
	return func_178(iParam0, iVar0, iVar1, iParam1);
}

int func_325(int iParam0, int iParam1, int iParam2)//Position - 0x3215F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Global_70671[1 /*14*/] = { func_187(iVar0, iParam1, iParam2) };
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_335(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_325(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_332(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_325(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_70671[2 /*14*/] = { func_187(iVar0, 14, iVar4) };
									if (Global_70671[2 /*14*/].f_12 == iVar3)
									{
										if (func_325(iParam0, 14, iVar4))
										{
											if (!func_326(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_70671[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_323(iParam0, iVar2);
						Global_70671[2 /*14*/] = { func_187(iVar0, iVar2, iVar1) };
						if (!func_326(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_70671[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_332(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_325(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_70671[1 /*14*/].f_3 == unk_0x4CDD2D1D66ED1DE4(iParam0, func_182(iParam1)) && Global_70671[1 /*14*/].f_4 == unk_0xDCC2BD4C56470D10(iParam0, func_182(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x323B7
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_332(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_331(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_330(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_329(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_327(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_330(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_329(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_327(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_330(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_329(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_327(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x329BB
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_328(iParam0, iParam2, 14, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_328(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_328(iParam0, iParam2, 1, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_328(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_328(iParam0, iParam2, 14, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_328(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_328(iParam0, iParam2, 1, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_328(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32C38
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_183(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_181(iParam0, func_182(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70793.f_26[iParam2] && iParam1 == Global_70793[iParam2]) && Global_70793.f_13[iParam2] != 0)
		{
			return Global_70793.f_13[iParam2];
		}
		iVar9 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_182(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0x19002A6D4CBCE1E2(iVar6, &Var5);
			if (!unk_0x42683C90F2D005ED(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_70793.f_13[iParam2] = Var5.f_1;
					Global_70793[iParam2] = iParam1;
					Global_70793.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_329(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32D94
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_328(iParam0, iParam2, 1, 3);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_328(iParam0, iParam2, 1, 4);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x331B9
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_328(iParam0, iParam2, 14, 3);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_328(iParam0, iParam2, 14, 4);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2)//Position - 0x334AC
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_332(int iParam0, int iParam1)//Position - 0x33545
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_334(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_334(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_334(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_334(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_334(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_334(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_334(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_334(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_334(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_334(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_334(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_333(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_334(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_334(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_334(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_334(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_334(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_334(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_334(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_334(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_334(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_334(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_333(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_334(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_334(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_334(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_334(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_334(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_334(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_334(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_334(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_334(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_334(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_333(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_334(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_334(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_334(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_334(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_334(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_334(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_334(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_334(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_334(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_334(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_334(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_334(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_334(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_334(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_334(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_334(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_334(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_334(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_334(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_334(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_334(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_334(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_334(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_334(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_334(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_334(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_333(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_334(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_334(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_334(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_334(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_334(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_334(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_334(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_334(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_334(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_334(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_334(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_334(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_334(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_334(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_334(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_334(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_334(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_334(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_334(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_334(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_334(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_334(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_334(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_334(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_334(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_333(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33E74
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x060EBC19DD9EF446(iParam2, &Var1);
		if (!unk_0x42683C90F2D005ED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xDF7B1D9AE5581C01(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_180(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x33F9E
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_335(int iParam0, int iParam1)//Position - 0x33FE6
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						func_337(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_337(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_337(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_337(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_337(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_337(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_337(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[0], Global_104555.f_2353.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_337(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_337(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_337(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_337(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_337(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_337(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_337(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_337(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_337(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_337(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_337(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_337(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_337(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_337(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_337(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_337(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_337(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_337(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_337(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_337(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_337(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_337(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_337(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_337(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_337(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_337(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_337(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_337(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_337(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_337(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_337(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_337(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_337(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_337(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_337(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_337(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_337(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_337(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_337(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_337(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_337(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_337(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_337(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_337(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_337(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_337(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_337(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_336(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_337(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_337(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_337(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[1], Global_104555.f_2353.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_337(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_337(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_337(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_337(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_337(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_337(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_337(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_337(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_337(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_337(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_337(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_337(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_337(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_337(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_337(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_337(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_337(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_337(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_337(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_337(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_337(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_337(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_337(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_337(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_337(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_337(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_337(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_337(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_337(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_337(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_337(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_337(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_337(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_337(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_337(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_337(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_337(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_337(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_337(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_337(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_337(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_337(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_337(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_337(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_336(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_337(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_337(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_337(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_337(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_337(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[2], Global_104555.f_2353.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_337(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_337(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_337(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_337(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_337(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_337(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_337(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_337(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_337(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_337(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_337(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_337(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_337(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_337(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_337(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_337(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_337(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_337(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_337(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_337(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_337(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_337(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_337(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_337(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_337(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_337(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_337(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_337(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_337(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_337(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_337(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_337(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_337(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_337(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_337(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_337(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_337(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_337(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_337(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_337(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_337(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_337(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_337(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_336(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_337(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_337(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_337(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_337(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_337(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_337(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_337(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_337(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_337(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_337(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_337(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_337(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_337(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_337(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_337(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_337(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_337(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_337(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_337(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_337(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_337(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_337(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_337(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_337(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_337(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_337(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_336(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_337(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_337(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_337(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_337(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_337(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_337(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_337(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_337(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_337(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_337(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_337(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_337(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_337(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_337(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_337(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_337(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_337(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_337(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_337(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_337(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_337(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_337(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_337(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_337(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_337(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_337(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_337(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_337(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_336(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_336(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35E31
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x23A6BE673BD02B2D(iVar0, 0);
	unk_0x54F960113E1CDCA9((iParam2 - iParam3), &Var1);
	if (!unk_0x42683C90F2D005ED(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x4D94EF46ACF845D4(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x74B493EE892897A5(&Var3);
						unk_0xD1994E7F12547273(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_255(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_255(vVar2.z)] = func_180(iParam1, vVar2.x, func_255(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_255(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_337(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3601B
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_338(int iParam0, bool bParam1)//Position - 0x3608C
{
	if (bParam1)
	{
		if ((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two"))
		{
			return 1;
		}
	}
	else if ((((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two")) || iParam0 == joaat("mp_m_freemode_01")) || iParam0 == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_339(int iParam0, int iParam1)//Position - 0x3610F
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

int func_340(char* sParam0)//Position - 0x3615C
{
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		return 1;
	}
	if (unk_0x96AAAC172E3B9680(sParam0) <= 0)
	{
		return 1;
	}
	if (unk_0x74C475EB8E73D398(sParam0, "NULL"))
	{
		return 1;
	}
	return 0;
}

struct<6> func_341()//Position - 0x3618F
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar1 = unk_0xA2F80D03C2F3570D();
		iVar1 = (iVar1 + Global_16766);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
			{
				return Global_14624[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xA1800C71952C596F(&(Global_14624[iVar3 /*6*/])))
					{
						return Global_14624[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14624[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x3623B
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar20;
	float fVar21;
	float fVar22;
	vector3 vVar23;
	vector3 vVar24;
	vector3 vVar25;
	vector3 vVar26;
	bool bVar27;
	float fVar28;
	float fVar29;
	int iVar30;
	vector3 vVar31;
	vector3 vVar32;
	int iVar33;
	int iVar34;
	vector3 vVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	
	if (Local_69[iParam0 /*10*/] != iParam1 || Local_69[iParam0 /*10*/].f_1 == 0)
	{
		Local_69[iParam0 /*10*/] = iParam1;
		Local_69[iParam0 /*10*/].f_1 = 1;
		Local_69[iParam0 /*10*/].f_3 = 0;
		Local_69[iParam0 /*10*/].f_6 = 0;
		Local_69[iParam0 /*10*/].f_4 = 0;
		Local_69[iParam0 /*10*/].f_7 = 0;
		Local_69[iParam0 /*10*/].f_8 = 0;
		Local_69[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_69[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_292(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_69[iParam0 /*10*/].f_2 = 0;
	}
	if (!bLocal_114 || Local_69[iParam0 /*10*/].f_6 == 99)
	{
		if (Local_69[iParam0 /*10*/].f_3 == 0 || Local_69[iParam0 /*10*/].f_6 == 99)
		{
			if (bVar0 == 1)
			{
				if (!Local_69[iParam0 /*10*/].f_2)
				{
					Local_69[iParam0 /*10*/].f_2 = 1;
				}
				switch (Local_69[iParam0 /*10*/])
				{
					case 2:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!unk_0xC816B63289F7A279(Local_94[2 /*14*/]))
							{
								if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) < 50f)
								{
									unk_0x57FB41CABA25835C(Local_94[2 /*14*/], unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()));
									unk_0xB2442651179CF706(unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()), 100f);
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x546F10CBA6C484DA(-967780114))
						{
							unk_0x99B6EAC23065A02E(-967780114, 0f, 0, 1);
							unk_0xB94AAB49E0BB01DB(-967780114, 4, 0, 1);
							Local_69[iParam0 /*10*/].f_3 = 0;
						}
						break;
					
					case 4:
						Local_69[1 /*10*/].f_2 = 0;
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (unk_0xC816B63289F7A279(Local_94[2 /*14*/]))
							{
								unk_0x88235B448509228B(Local_94[2 /*14*/]);
							}
						}
						break;
					
					case 1:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0x6F8C8278B7C06889(Local_94[2 /*14*/], Local_95[0 /*2*/], 20000, -1, 2f, 1, 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 1:
								if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0) && !unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									if (unk_0xA8D0477084E86A92(Local_94[2 /*14*/], Local_95[0 /*2*/], 0))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 5:
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()) != Local_95[0 /*2*/])
							{
								if (unk_0x6ADD12BF4D6D2587(Local_95[0 /*2*/]))
								{
									unk_0x5380482A432E314E(&(Local_95[0 /*2*/]));
								}
								Local_95[0 /*2*/] = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
								unk_0xDD29FF4BAB8AFF9C(Local_95[0 /*2*/], true, 1);
							}
						}
						break;
					
					case 11:
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							unk_0xE859EF37EA7362D3("ARM_2_DRIVE_TO_ALLEY");
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 12:
						iVar1 = 0;
						while (iVar1 < iLocal_241)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_241[iVar1]))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_241[iVar1], 0))
								{
									if (Local_95[0 /*2*/] != iLocal_241[iVar1])
									{
										unk_0x5380482A432E314E(&(iLocal_241[iVar1]));
									}
								}
							}
							iVar1++;
						}
						unk_0x4C15495E88D71C61(Vector(25,85983f, -1098,932f, -43,78194f) - Vector(2,5625f, 6,75f, 9,75f), Vector(25,85983f, -1098,932f, -43,78194f) + Vector(2,5625f, 6,75f, 9,75f), true, 1);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 13:
						func_467(1);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 14:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								fVar3 = 1000f;
								iVar5 = 0;
								while (iVar5 < vLocal_250.x)
								{
									if (!unk_0x9E06F0EE20F58CED(vLocal_250[iVar5 /*3*/], 2f))
									{
										fVar2 = func_135(unk_0xFC1458A37D98B502(), vLocal_250[iVar5 /*3*/], 1);
										if (fVar2 < fVar3 && fVar2 > 10f)
										{
											fVar3 = fVar2;
											iVar4 = iVar5;
										}
									}
									iVar5++;
								}
								if (fVar3 != 1000f)
								{
									func_273(22, vLocal_250[iVar4 /*3*/] - Vector(0f, 0,5f, 0,5f), func_466(vLocal_250[iVar4 /*3*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1), joaat("weapon_pistol"), 0, 0, -1);
									func_273(23, vLocal_250[iVar4 /*3*/] - Vector(0f, 0,5f, 0,5f), func_466(vLocal_250[iVar4 /*3*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1), joaat("weapon_pistol"), 0, 0, -1);
									unk_0xF96119FCCD4D1889(5, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()), iLocal_98);
									unk_0xF96119FCCD4D1889(5, iLocal_98, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
									unk_0x3811A0FC01E02FC1(Local_94[22 /*14*/], 1);
									unk_0x3811A0FC01E02FC1(Local_94[23 /*14*/], 1);
									unk_0x992E814DF611C58C(Local_94[22 /*14*/], 150f, 0);
									unk_0x992E814DF611C58C(Local_94[23 /*14*/], 150f, 0);
									unk_0x45BD02A17452ECE4(Local_94[22 /*14*/], 2, 6f);
									unk_0x45BD02A17452ECE4(Local_94[22 /*14*/], 13, 5f);
									unk_0x45BD02A17452ECE4(Local_94[23 /*14*/], 2, 6f);
									unk_0x45BD02A17452ECE4(Local_94[23 /*14*/], 13, 5f);
									unk_0xAE6EBBBBD8B9FB30(Local_94[22 /*14*/], 50, 1);
									unk_0xAE6EBBBBD8B9FB30(Local_94[23 /*14*/], 50, 1);
									if (unk_0xA6DECE14FC9A8C51(iLocal_244))
									{
										unk_0xE30CF11C0EE14316(&iLocal_244);
									}
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 1500;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 0);
										unk_0x9E058151726E58DE(Local_94[2 /*14*/], joaat("weapon_microsmg"), 2000, true, true);
										unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
										unk_0x992E814DF611C58C(Local_94[2 /*14*/], 150f, 0);
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 1500;
									}
								}
								break;
							
							case 2:
								if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[22 /*14*/]))
									{
										unk_0x45BD02A17452ECE4(Local_94[22 /*14*/], 2, 100f);
									}
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[23 /*14*/]))
									{
										unk_0x45BD02A17452ECE4(Local_94[23 /*14*/], 2, 100f);
									}
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 6:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (unk_0xA6DECE14FC9A8C51(iLocal_244))
								{
									vVar6 = { unk_0x2EC078E897E7EF54(iLocal_244) };
									if (func_76(vVar6, -1141,093f, -1576,759f, 3,3048f, 0))
									{
										if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -39,15905f, -1078,176f, 23,77321f, -3,364391f, -1091,281f, 40,83922f, 23,8125f, 0, 1, 0))
										{
											unk_0x57EA9A1F94FD1E76(156, 1, 0);
											unk_0xD67635C897384B1F(-13,445f, -1090,946f, 25,6721f);
											unk_0xD67635C897384B1F(-23,5158f, -1119,839f, 25,8719f);
											unk_0xD67635C897384B1F(-1141,093f, -1576,759f, 3,3048f);
											unk_0xF906FCF8A11CBA9A(1);
											unk_0xAAAC88CC20771601(iLocal_244, 0);
											Local_69[iParam0 /*10*/].f_6++;
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6++;
										}
									}
								}
								break;
							
							case 1:
								if (unk_0xA6DECE14FC9A8C51(iLocal_244))
								{
									vVar7 = { unk_0x2EC078E897E7EF54(iLocal_244) };
									if (!func_76(vVar7, -1141,093f, -1576,759f, 3,3048f, 0))
									{
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -39,15905f, -1078,176f, 23,77321f, -3,364391f, -1091,281f, 40,83922f, 23,8125f, 0, 1, 0))
									{
										unk_0xF906FCF8A11CBA9A(0);
										unk_0xAAAC88CC20771601(iLocal_244, 1);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 7:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_465(17))
								{
									if (!unk_0x6ADD12BF4D6D2587(Local_94[3 /*14*/]))
									{
										Local_94[3 /*14*/] = unk_0xAC992EFAD62C33BF(26, joaat("ig_siemonyetarian"), -31,4785f, -1107,098f, 25,4223f, 7,5788f, 1, true);
										unk_0xE537629E02E8DA21(Local_94[3 /*14*/]);
										unk_0x03924C68EFCBC511(Local_94[3 /*14*/], 0, 0, 0, 0);
										unk_0x03924C68EFCBC511(Local_94[3 /*14*/], 3, 0, 1, 0);
										unk_0x03924C68EFCBC511(Local_94[3 /*14*/], 4, 0, 0, 0);
										unk_0x03924C68EFCBC511(Local_94[3 /*14*/], 5, 0, 0, 0);
										unk_0x03924C68EFCBC511(Local_94[3 /*14*/], 7, 0, 0, 0);
									}
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
									{
										unk_0xBD8D47FDC6902B2D(Local_94[3 /*14*/], -31,4785f, -1107,098f, 25,4223f, 1, 0, 0, 1);
										unk_0x48ED7B2293A96722(Local_94[3 /*14*/], 7f);
										unk_0x2EA90674750EA01E(Local_94[3 /*14*/], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
										if (unk_0x50126692B8A3590A(-31,72f, -1101,85f, 26,57f, 1f, joaat("v_ilev_fib_door1"), 0))
										{
											iVar8 = unk_0xCBD07018689DF383(-31,72f, -1101,85f, 26,57f, 1f, joaat("v_ilev_fib_door1"), 0, 0, 1);
											if (iVar8 != 0)
											{
												if (unk_0xD5BF96615F17406E(iVar8))
												{
													unk_0xD93EB606DC3D867B(-31,72f, -1101,85f, 26,57f, 1f, joaat("v_ilev_fib_door1"), -1000f);
												}
											}
										}
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (unk_0xE97272C977DEADD3(unk_0xED2D01296ADA88DB(-1831288286)) < 0,05f && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -32,47615f, -1104,299f, 25,4438f, -27,75145f, -1106f, 27,92234f, 6f, 0, 1, 0))
								{
									func_146(97, 2);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_267(Local_94[3 /*14*/], unk_0xFC1458A37D98B502(), 1) > 200f)
								{
									if (unk_0x6ADD12BF4D6D2587(Local_94[3 /*14*/]))
									{
										unk_0x68433819717660CF(&(Local_94[3 /*14*/]));
										unk_0x14776E43F90DD454(joaat("ig_siemonyetarian"));
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 8:
						unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 96, 1);
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (iLocal_92 == 9)
							{
								unk_0x2217C45231E6A537(Local_94[2 /*14*/], 96, 1);
							}
						}
						break;
					
					case 9:
						if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_95[0 /*2*/], 0))
							{
								unk_0x47E2FD029BB8567C(Local_95[0 /*2*/], 1);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 10:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_65 = unk_0xC0765AFBFA616644(-41,3822f, -1101,637f, 26,6294f, "v_carshowroom");
								if (unk_0x1A595E6882473810(iLocal_65))
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (iLocal_65 != 0)
								{
									if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iLocal_65)
									{
										if (!unk_0xC80D31E4B587871C(Local_69[iParam0 /*10*/].f_7, 0))
										{
											iVar9 = unk_0x87889570F3396ABD(-36,5853f, -1101,474f, 26,3444f, 5f, joaat("bjxl"), 4);
											if (unk_0xB8DE76287EDC4957(iVar9, 0))
											{
												unk_0x4BEFCD5DAE410A90(iVar9, 10);
												unk_0xCF5EB2CB1B30F02C(iVar9, 0);
												unk_0x872F1C1F8587CCC7(&(Local_69[iParam0 /*10*/].f_7), 0);
											}
										}
										if (!unk_0xC80D31E4B587871C(Local_69[iParam0 /*10*/].f_7, 1))
										{
											iVar9 = unk_0x87889570F3396ABD(-46,2594f, -1097,839f, 26,3444f, 5f, joaat("bjxl"), 4);
											if (unk_0xB8DE76287EDC4957(iVar9, 0))
											{
												unk_0x4BEFCD5DAE410A90(iVar9, 10);
												unk_0xCF5EB2CB1B30F02C(iVar9, 0);
												unk_0x872F1C1F8587CCC7(&(Local_69[iParam0 /*10*/].f_7), 1);
											}
										}
										if (!unk_0xC80D31E4B587871C(Local_69[iParam0 /*10*/].f_7, 2))
										{
											iVar9 = unk_0x87889570F3396ABD(-50,08f, -1094,463f, 26,0671f, 5f, joaat("tailgater"), 4);
											if (unk_0xB8DE76287EDC4957(iVar9, 0))
											{
												unk_0x4BEFCD5DAE410A90(iVar9, 10);
												unk_0xCF5EB2CB1B30F02C(iVar9, 0);
												unk_0x872F1C1F8587CCC7(&(Local_69[iParam0 /*10*/].f_7), 2);
											}
										}
										if (!unk_0xC80D31E4B587871C(Local_69[iParam0 /*10*/].f_7, 3))
										{
											iVar9 = unk_0x87889570F3396ABD(-37,4128f, -1088,562f, 26,0671f, 5f, joaat("tailgater"), 4);
											if (unk_0xB8DE76287EDC4957(iVar9, 0))
											{
												unk_0x4BEFCD5DAE410A90(iVar9, 10);
												unk_0xCF5EB2CB1B30F02C(iVar9, 0);
												unk_0x872F1C1F8587CCC7(&(Local_69[iParam0 /*10*/].f_7), 3);
											}
										}
										if (!unk_0xC80D31E4B587871C(Local_69[iParam0 /*10*/].f_7, 4))
										{
											iVar9 = unk_0x87889570F3396ABD(-41,4259f, -1099,648f, 26,0534f, 5f, joaat("tailgater"), 4);
											if (unk_0xB8DE76287EDC4957(iVar9, 0))
											{
												unk_0x4BEFCD5DAE410A90(iVar9, 10);
												unk_0xCF5EB2CB1B30F02C(iVar9, 0);
												unk_0x872F1C1F8587CCC7(&(Local_69[iParam0 /*10*/].f_7), 4);
											}
										}
									}
								}
								break;
						}
						break;
					
					case 15:
						func_464();
						break;
					
					case 18:
						if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
						{
							func_134();
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xBA54D3D84EF38E3D(0, -1129,619f, -1588,344f, 4,7752f, 5000, 0, 2);
							iVar10 = unk_0xFC1458A37D98B502();
							func_133(iVar10, 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
							unk_0x1267474D9A69CA37(2f, 2f, 4);
						}
						break;
					
					case 16:
						unk_0x16416C5B54FDBCBB(Local_94[2 /*14*/], 0, 0);
						func_313(Local_94[2 /*14*/]);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 17:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0))
							{
								if (!func_291(Local_94[2 /*14*/], -1128,192f, -1587,6f, 3,26637f, -1128,882f, -1584,653f, 5,953067f, 1,25f))
								{
									bVar11 = true;
								}
								if (!func_291(Local_94[2 /*14*/], -1131,293f, -1590,194f, 3,252203f, -1134,276f, -1587,549f, 5,917865f, 1,25f))
								{
									bVar12 = true;
								}
								if (bVar11 || bVar12)
								{
									func_138(86, 1);
								}
								else
								{
									func_138(86, 0);
								}
								switch (Local_69[iParam0 /*10*/].f_6)
								{
									case 0:
										if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) > 1,5f)
										{
											if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1129,458f, -1585,963f, 3,079151f, -1125,517f, -1591,644f, 7,022579f, 3,0625f, 0, 1, 0) && !bVar11)
											{
												unk_0x380C1E7B7740D618(Local_94[2 /*14*/], -1128,417f, -1587,442f, 3,3875f, 1f, 20000, 0,2f, 0, 221f);
												Local_69[iParam0 /*10*/].f_6 = 2;
											}
											else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1132,342f, -1587,769f, 3,071801f, -1127,968f, -1593,953f, 6,90706f, 3,0625f, 0, 1, 0) && !bVar12)
											{
												unk_0x380C1E7B7740D618(Local_94[2 /*14*/], -1131,704f, -1589,453f, 3,3934f, 1f, 20000, 0,2f, 0, 221f);
												Local_69[iParam0 /*10*/].f_6 = 3;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_6 = 5;
												unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), -1);
											}
										}
										else if (func_135(unk_0xFC1458A37D98B502(), -1131,704f, -1589,453f, 4,3934f, 1) > func_135(unk_0xFC1458A37D98B502(), -1128,417f, -1587,442f, 3,3875f, 1))
										{
											unk_0x380C1E7B7740D618(Local_94[2 /*14*/], -1131,704f, -1589,453f, 3,3934f, 1f, 20000, 0,2f, 0, 221f);
											Local_69[iParam0 /*10*/].f_6 = 3;
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6 = 2;
											unk_0x380C1E7B7740D618(Local_94[2 /*14*/], -1128,417f, -1587,442f, 3,3875f, 1f, 20000, 0,2f, 0, 221f);
										}
										break;
									
									case 2:
									case 3:
										if (((Local_69[iParam0 /*10*/].f_6 == 2 && !bVar11) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1129,458f, -1585,963f, 3,079151f, -1125,517f, -1591,644f, 7,022579f, 3,0625f, 0, 1, 0)) || ((Local_69[iParam0 /*10*/].f_6 == 3 && !bVar12) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1132,342f, -1587,769f, 3,071801f, -1127,968f, -1593,953f, 6,90706f, 3,0625f, 0, 1, 0)))
										{
											if (unk_0x0F3033474C49912D(Local_94[2 /*14*/], -1132,485f, -1590,005f, 2,394994f, -1127,201f, -1586,46f, 6,384637f, 1,5f, 0, 1, 0))
											{
												if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) > 1,5f)
												{
													fLocal_268 = unk_0xE97272C977DEADD3(func_463((unk_0xF0371FE6E2BF9599(Local_94[2 /*14*/]) - 221f), -1020002304, 1127481344));
													if (fLocal_268 < 20f)
													{
														unk_0xC03E5BD866BFEC82(Local_94[2 /*14*/], 0);
														Local_69[iParam0 /*10*/].f_6 = 4;
													}
													else
													{
														func_134();
														unk_0x2DAC3448B66448E8(0, 221f, 0);
														func_133(Local_94[2 /*14*/], 0);
													}
												}
												else if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 713668775) == 7)
												{
													func_138(87, 1);
													Local_69[iParam0 /*10*/].f_6 = 0;
													unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
												}
											}
											else if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 713668775) == 7)
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
										}
										else
										{
											Local_69[iParam0 /*10*/].f_6 = 0;
											unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
										}
										break;
									
									case 4:
										if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -1207763510) == 2)
										{
											if (!func_297(49))
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -1207763510) == 7)
										{
											if (func_297(49))
											{
												unk_0x1267474D9A69CA37(3f, 6f, 4);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												Local_69[iParam0 /*10*/].f_6 = 0;
											}
										}
										break;
									
									case 5:
										if (!bVar11 || !bVar12)
										{
											unk_0x380C1E7B7740D618(Local_94[2 /*14*/], -1128,417f, -1587,442f, 3,3875f, 1f, 20000, 0,2f, 0, 221f);
											Local_69[iParam0 /*10*/].f_6 = 0;
										}
										break;
									}
								}
						}
						break;
					
					case 20:
						if (!func_297(50))
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
							{
								if (!unk_0x0ACC2116170FA204(Local_94[2 /*14*/]))
								{
									func_134();
									unk_0x380C1E7B7740D618(0, -1116,379f, -1603,855f, 4,439f, 1f, 20000, 0,25f, 1, 1193033728);
									func_133(Local_94[2 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
									Local_69[iParam0 /*10*/].f_6++;
								}
							}
						}
						else
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 21:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (!unk_0xDFFD5F8C8ABCB7EF(Local_94[2 /*14*/]) && !unk_0xDFFD5F8C8ABCB7EF(Local_94[3 /*14*/]))
									{
										unk_0x48ED7B2293A96722(Local_94[2 /*14*/], 220f);
										unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 1,5f, -1,5f, -1, 49152, 0, 0, 0, 0);
										unk_0x12C9D41D52A560D6(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 4f, -4f, -1, 8, 0, 0, 0, 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									unk_0x691491EBC2D892F5(Local_94[2 /*14*/], 1f);
									if (unk_0x7B82209ED5D8E168(Local_94[2 /*14*/], unk_0x8B948C59217A295D("Alternate_Walk_Finished")))
									{
										bVar13 = true;
									}
									if (!unk_0xA5F6598E13F98E08(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3))
									{
										bVar13 = true;
									}
									if (bVar13)
									{
										unk_0x31BBD48AA2503617(Local_94[2 /*14*/], -668482597, 1, 0, 0);
										func_134();
										unk_0xFB02C50CC0E93FAA(0, "arm2", 0, 8, -1);
										func_133(Local_94[2 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 22:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
							func_134();
							unk_0xFB02C50CC0E93FAA(0, "arm2", 0, 12, -1);
							func_133(Local_94[2 /*14*/], 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 19:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_585(3);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								unk_0x391612227A0274F1();
								if (func_462(3))
								{
									if (unk_0x9A0B2ED5055D3F0B(iLocal_258))
									{
									}
									func_461(3, iLocal_258, vLocal_282, fLocal_283, 4, 0, 0);
									unk_0xAE01EF4BC84AFE7C(Local_94[3 /*14*/], 42, true);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								unk_0x391612227A0274F1();
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
								{
									if (!unk_0x81FE9C1618BDF46B(Local_94[3 /*14*/]))
									{
										unk_0x48ED7B2293A96722(Local_94[3 /*14*/], fLocal_283);
										unk_0x5C5D33A1B2711D21(Local_94[3 /*14*/], true);
										unk_0xAE01EF4BC84AFE7C(Local_94[3 /*14*/], 122, true);
										unk_0x8BB5ECF21DDE505B(Local_94[3 /*14*/], 1);
										func_134();
										unk_0x12C9D41D52A560D6(0, "missarmenian2", "exit_garage_drunk", 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0x12C9D41D52A560D6(0, "missarmenian2", "standing_idle_loop_drunk", 8f, -8f, -1, 1, 0, 0, 0, 0);
										func_133(Local_94[3 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 3:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
								{
									if (unk_0xA5F6598E13F98E08(Local_94[3 /*14*/], "missarmenian2", "exit_garage_drunk", 3))
									{
										unk_0xCBF5827EA5303F2B(Local_94[3 /*14*/], "missarmenian2", "exit_garage_drunk", fLocal_284);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
								{
									if (unk_0xA5F6598E13F98E08(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 5:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
								{
									if (unk_0xA5F6598E13F98E08(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK", 3))
									{
										if (unk_0x7A70772AE40E3821(Local_94[3 /*14*/], "missarmenian2", "PUNCH_REACTION_&_FALL_DRUNK") > 0,155f)
										{
											unk_0xB8E08BD5B184DF4E(Local_94[3 /*14*/]);
											unk_0x14726A84EECBD17B(Local_94[3 /*14*/], 13000, 15000, 4);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 23:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
						{
							if (!unk_0x9F887157983E8EFC(Local_94[3 /*14*/]))
							{
								func_456(Local_94[3 /*14*/]);
								unk_0x771A86309E0CA47B(Local_94[3 /*14*/], 1);
								func_134();
								unk_0x380C1E7B7740D618(0, -1105,912f, -1601,903f, 3,6709f, 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x380C1E7B7740D618(0, -1105,28f, -1601,131f, 3,6709f, 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x380C1E7B7740D618(0, -1106,231f, -1601,962f, 3,6709f, 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x380C1E7B7740D618(0, -1108,15f, -1601,985f, 3,668f, 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x380C1E7B7740D618(0, -1107,381f, -1603,752f, 3,6879f, 1f, 20000, 0,25f, 0, 1193033728);
								unk_0x380C1E7B7740D618(0, -1104,652f, -1601,999f, 3,6709f, 1f, 20000, 0,25f, 0, 1193033728);
								func_133(Local_94[3 /*14*/], 1);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 24:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (func_263("AR2_BU12"))
							{
								if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -2017877118) != 1)
								{
									unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
							else
							{
								unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 0);
								if (func_297(55))
								{
									if (func_297(53))
									{
										func_134();
										unk_0xFB02C50CC0E93FAA(0, "arm2", 0, 12, -1);
										func_133(Local_94[2 /*14*/], 0);
									}
									else
									{
										func_134();
										unk_0x380C1E7B7740D618(0, -1117,739f, -1601,903f, 3,39776f, 1f, 20000, 0,25f, 1, 1193033728);
										unk_0x380C1E7B7740D618(0, -1115,415f, -1605,237f, 3,44196f, 1f, 20000, 0,25f, 1, 1193033728);
										func_133(Local_94[2 /*14*/], 0);
									}
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 25:
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									func_585(4);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (func_462(4))
									{
										if (!unk_0x191BE1BC8F26F3C1(Local_95[1 /*2*/], 0))
										{
											if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
											{
												unk_0xBAB8785EE2F06BBE(Local_95[1 /*2*/], 2);
												unk_0xA15269351F50F113(Local_95[1 /*2*/], true, 1, 0);
												unk_0x47E2FD029BB8567C(Local_95[1 /*2*/], 1);
												unk_0x662185A7CE2038B6(Local_95[1 /*2*/], 1);
												unk_0xFD1BF3E7984393B7(Local_95[1 /*2*/]);
												if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
												{
													unk_0x12C9D41D52A560D6(Local_94[4 /*14*/], "missarmenian2", "car_react_gang_ds", 1f, -8f, -1, 0, 0, 0, 0, 0);
													unk_0x12C9D41D52A560D6(Local_94[5 /*14*/], "missarmenian2", "car_react_gang_ps", 1f, -8f, -1, 0, 0, 0, 0, 0);
												}
												unk_0xE859EF37EA7362D3("ARM_2_GANG_DRIVE_PAST");
												unk_0xDFC63F22B454FFF5(Local_95[1 /*2*/], "RADIO_03_HIPHOP_NEW");
												unk_0x6CF99BCE94E6F07C(Local_95[1 /*2*/], "ARM_2_GANG_CAR_GROUP", 0);
												func_455(1);
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								
								case 2:
									if (func_297(86))
									{
										if (!func_454(-1133,978f, -1581,576f, 5,2445f, 20f, 150f))
										{
											if (Local_69[iParam0 /*10*/].f_7 == 0)
											{
												Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 7000;
											}
											else if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
											{
												if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
												{
													unk_0xBD8D47FDC6902B2D(Local_95[0 /*2*/], -1139,01f, -1575,648f, 3,3153f, 1, 0, 0, 1);
													unk_0x48ED7B2293A96722(Local_95[0 /*2*/], 304f);
												}
											}
										}
										else
										{
											Local_69[iParam0 /*10*/].f_7 = 0;
										}
									}
									if (!unk_0x191BE1BC8F26F3C1(Local_95[1 /*2*/], 0))
									{
										if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
										{
											if (!unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
												{
													unk_0x87A3E70B0AB01608(Local_94[4 /*14*/], Local_95[1 /*2*/], -1114,8f, -1567,425f, 3,3492f, 7f, 0, 0, 786469, 5f, 5f);
												}
												Local_69[iParam0 /*10*/].f_6++;
												if (unk_0x771D0F8F56A5FE6C("ARM_2_GANG_DRIVE_PAST"))
												{
													unk_0xE02E32C69260FBB7("ARM_2_GANG_DRIVE_PAST");
													unk_0xF0037A481D043FE1(Local_95[1 /*2*/], 0);
												}
											}
										}
									}
									break;
								
								case 3:
									if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
										{
											if (unk_0x78F50AA8F955BEFC(Local_94[4 /*14*/], -1817882002) != 1)
											{
												unk_0x96247F0EC873C446(Local_94[4 /*14*/], Local_95[1 /*2*/], 15f, 786599);
												unk_0xE9B3D12A64CC7C1A(Local_94[4 /*14*/], 1);
												unk_0x5380482A432E314E(&(Local_95[1 /*2*/]));
												unk_0x486F346ADFE56674(&(Local_94[4 /*14*/]));
												if (!unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
												{
													unk_0xB6A7F1EF9625AE96(Local_94[5 /*14*/], -1);
													unk_0xE9B3D12A64CC7C1A(Local_94[5 /*14*/], 1);
													unk_0x486F346ADFE56674(&(Local_94[5 /*14*/]));
												}
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
								}
						}
						break;
					
					case 26:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 5000, 0, 2);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_297(57))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
									{
										unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Local_94[3 /*14*/], 9000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (func_297(52))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
									{
										unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Local_94[3 /*14*/], 15000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 3:
								if (func_297(61))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]))
									{
										unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Local_94[4 /*14*/], 10000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
						}
						break;
					
					case 27:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									unk_0xEE299B2381B26039(Local_94[2 /*14*/], "missarmenian2", "car_react", 1f, 0);
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 10000;
									break;
								
								case 1:
									if (unk_0x7B82209ED5D8E168(Local_94[2 /*14*/], unk_0x8B948C59217A295D("Alternate_Walk_Finished")))
									{
										unk_0xCF9DFDA1C6C69401(Local_94[2 /*14*/], -1056964608);
									}
									break;
								}
						}
						break;
					
					case 28:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
								{
									vVar14 = { unk_0x09E51060F59912ED("missarmenian2", "drunk_getup", unk_0xB3328BA8976B416C(Local_94[3 /*14*/], 1), 0f, 0f, unk_0xF0371FE6E2BF9599(Local_94[3 /*14*/]), 0f, 2) };
									vVar15 = { unk_0x4AA2C5A4980B3F34("missarmenian2", "drunk_getup", unk_0xB3328BA8976B416C(Local_94[3 /*14*/], 1), 0f, 0f, unk_0xF0371FE6E2BF9599(Local_94[3 /*14*/]), 0f, 2) };
									iLocal_267 = unk_0x8383F9C605E523B7(vVar14, vVar15, 2);
									unk_0x8E628F774C748D93(Local_94[3 /*14*/], iLocal_267, "missarmenian2", "drunk_getup", 4f, -4f, 1, 0, 1148846080, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0xD56F740235B1E8F0(iLocal_267))
								{
									if (unk_0x463C4747B41E35A3(iLocal_267) >= 1f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 29:
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_69[iParam0 /*10*/].f_9 = 1f;
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 - system::timestep());
									if (Local_69[iParam0 /*10*/].f_9 < 0f)
									{
										Local_69[iParam0 /*10*/].f_9 = 0f;
										Local_69[iParam0 /*10*/].f_3 = 1;
										func_453(12, 30);
									}
									if (unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
									{
										unk_0x3998782E46B46C7F(Local_95[1 /*2*/], Local_69[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					
					case 30:
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									Local_69[iParam0 /*10*/].f_9 = 0f;
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 + system::timestep());
									if (Local_69[iParam0 /*10*/].f_9 >= 1f)
									{
										Local_69[iParam0 /*10*/].f_9 = 1f;
										Local_69[iParam0 /*10*/].f_3 = 1;
										func_453(11, 29);
									}
									if (unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
									{
										unk_0x3998782E46B46C7F(Local_95[1 /*2*/], Local_69[iParam0 /*10*/].f_9);
									}
									break;
								}
						}
						break;
					
					case 31:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									unk_0xCF9DFDA1C6C69401(Local_94[2 /*14*/], -1056964608);
									func_452(9, 27, 1, 0);
									unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 4000);
									if (func_263("move"))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
									if (func_263("AR2_BU12"))
									{
										Local_69[iParam0 /*10*/].f_6 = 3;
									}
									break;
								
								case 1:
									unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "MISSARMENIAN2", "lamar_impatient_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 2:
									if (func_263("AR2_BU12"))
									{
										unk_0xFB02C50CC0E93FAA(Local_94[2 /*14*/], "arm2", 0, 8, -1);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 3:
									unk_0xFB02C50CC0E93FAA(Local_94[2 /*14*/], "arm2", 0, 8, -1);
									Local_69[iParam0 /*10*/].f_3 = 1;
									break;
								}
						}
						break;
					
					case 32:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if ((iLocal_47 == 5 || iLocal_47 == 7) || iLocal_47 == 3)
								{
									if (func_297(71))
									{
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (func_297(71))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										if ((unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -875674219) == 1 || unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -875674219) == 2) || unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -875674219) == 0)
										{
											unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 1000);
										}
										else
										{
											unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
											unk_0xCF9DFDA1C6C69401(Local_94[2 /*14*/], -1056964608);
											func_452(9, 27, 1, 0);
											unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 1000);
										}
									}
								}
								else
								{
									switch (iLocal_47)
									{
										case 3:
											vVar16 = { unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 1) };
											if (vVar16.y < -1601,903f)
											{
												func_134();
												unk_0x380C1E7B7740D618(0, -1115,415f, -1605,237f, 3,44196f, 1f, 20000, 0,25f, 1, 1193033728);
												func_133(Local_94[2 /*14*/], 0);
											}
											else
											{
												func_134();
												unk_0x380C1E7B7740D618(0, -1117,739f, -1601,903f, 3,39776f, 1f, 20000, 0,25f, 1, 1193033728);
												unk_0x380C1E7B7740D618(0, -1115,415f, -1605,237f, 3,44196f, 1f, 20000, 0,25f, 1, 1193033728);
												func_133(Local_94[2 /*14*/], 0);
											}
											Local_69[iParam0 /*10*/].f_6 = 0;
											break;
										
										case 5:
										case 7:
											func_134();
											unk_0xFB02C50CC0E93FAA(0, "arm2", 0, 8, -1);
											func_133(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_6 = 0;
											break;
										}
								}
								break;
						}
						break;
					
					case 33:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0xFB02C50CC0E93FAA(Local_94[2 /*14*/], "arm2", 0, 8, -1);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 34:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1065,348f, -1667,966f, 2,260047f, -1074,575f, -1676,186f, 6,517583f, 11,875f, 0, 1, 0) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
									{
										unk_0x57FB41CABA25835C(Local_94[2 /*14*/], unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()));
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1065,348f, -1667,966f, 2,260047f, -1074,575f, -1676,186f, 6,517583f, 11,875f, 0, 1, 0) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
									{
										unk_0xAC838A977FB6E6BC(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 3000);
										unk_0x88235B448509228B(Local_94[2 /*14*/]);
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					
					case 38:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								unk_0x6FF834D85E2DD4C6(joaat("prop_gar_door_plug"));
								if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
									Local_94[0 /*14*/] = unk_0xFC1458A37D98B502();
									func_134();
									unk_0x380C1E7B7740D618(0, Vector(3,55f, -1665,66f, -1067,02f) + Vector(0f, -0,78f, -0,63f), 1f, 20000, 0,1f, 4608, -55f);
									unk_0xF1794430C256DBC0(0, 0);
									unk_0x12C9D41D52A560D6(0, "MISSARMENIAN2", "open_garage_franklin", 4f, 2f, -1, 0, 0, 0, 0, 0);
									func_133(Local_94[0 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_6++;
									unk_0x6FF834D85E2DD4C6(joaat("prop_gar_door_plug"));
									unk_0x1267474D9A69CA37(3f, 3f, 3);
								}
								break;
							
							case 1:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar17 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin");
									fVar17 = (fVar17 / unk_0x5736FE91FA97CD65(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar17 < 0f || fVar17 > 1f)
									{
										fVar17 = 0f;
									}
									unk_0x90CD41CAEBB68E99(iLocal_209, "open_garage_door", "MISSARMENIAN2", 16f, 0, 1, 0, 0f, 0);
									unk_0xB18E1DBC397238E1(iLocal_209, false, 0);
									unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
									iLocal_82[0] = unk_0x5E35CF35E65D69B9(joaat("prop_gar_door_plug"), -1066,72f, -1665,41f, 4,5f, 1, true, 0);
									unk_0x59AF3B40AE222194(iLocal_82[0], -90f, 0f, -55,93f, 2, 1);
									unk_0xB3A8974D2C811672(iLocal_82[0], false, 0);
									unk_0xEDC33A771FAEB393(iLocal_82[0], true);
									unk_0x1267474D9A69CA37(3f, 3f, 3);
									Local_69[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar18 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin");
									fVar18 = (fVar18 / unk_0x5736FE91FA97CD65(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar18 < 0f || fVar18 > 1f)
									{
										fVar18 = 0f;
									}
									if (!unk_0x191BE1BC8F26F3C1(iLocal_209, 0))
									{
										if (unk_0xA5F6598E13F98E08(iLocal_209, "MISSARMENIAN2", "open_garage_door", 3))
										{
											unk_0xCBF5827EA5303F2B(iLocal_209, "MISSARMENIAN2", "open_garage_door", fVar18);
										}
									}
									Local_69[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								if (!unk_0x191BE1BC8F26F3C1(iLocal_82[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_210, 0))
								{
									unk_0xBD8D47FDC6902B2D(iLocal_82[0], unk_0xB3328BA8976B416C(iLocal_209, 1), 1, 0, 0, 1);
									unk_0x59AF3B40AE222194(iLocal_82[0], unk_0xDB824D597B53CC40(iLocal_209, 2), 2, 1);
									vVar19 = { unk_0xB3328BA8976B416C(iLocal_209, 1) };
									vVar20 = { unk_0xDB824D597B53CC40(iLocal_209, 2) };
								}
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin") > 0,22f)
									{
										unk_0x23A4CE7F9EBB02D4(-1, "Garage_Open_01", -1066,949f, -1665,65f, 4,7981f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
										Local_69[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							
							case 4:
								if (unk_0x9A0B2ED5055D3F0B(joaat("prop_gar_door_plug")))
								{
									if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
									{
										if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin") > 0,77f)
										{
											unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
											if (unk_0xA6DECE14FC9A8C51(iLocal_246))
											{
												unk_0xE30CF11C0EE14316(&iLocal_246);
											}
											unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
											unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), -1064,049f, -1663,417f, 4,8837f, 3000, 0, 2);
											if (!unk_0x191BE1BC8F26F3C1(iLocal_82[0], 0))
											{
												unk_0xBD8D47FDC6902B2D(iLocal_82[0], -1066,72f, -1665,41f, 5,73f, 1, 0, 0, 1);
												unk_0x59AF3B40AE222194(iLocal_82[0], -90f, 0f, -55,93f, 2, 1);
											}
											iLocal_81++;
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 39:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									unk_0x6FF834D85E2DD4C6(joaat("prop_gar_door_plug"));
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
									Local_94[0 /*14*/] = unk_0xFC1458A37D98B502();
									func_134();
									unk_0x380C1E7B7740D618(0, Vector(3,55f, -1668,82f, -1064,81f) + Vector(0f, -0,78f, -0,63f), 1f, 20000, 0,1f, 4608, -55f);
									unk_0xF1794430C256DBC0(0, 0);
									unk_0x12C9D41D52A560D6(0, "MISSARMENIAN2", "open_garage_franklin", 4f, -8f, -1, 0, 0, 0, 0, 0);
									func_133(Local_94[0 /*14*/], 0);
									unk_0x1267474D9A69CA37(2,5f, 3,5f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar21 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin");
									fVar21 = (fVar21 / unk_0x5736FE91FA97CD65(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar21 < 0f || fVar21 > 1f)
									{
										fVar21 = 0f;
									}
									unk_0x90CD41CAEBB68E99(iLocal_210, "open_garage_door", "MISSARMENIAN2", 16f, 0, 1, 0, 0f, 0);
									unk_0xB18E1DBC397238E1(iLocal_210, false, 0);
									unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 0, -1, 0);
									Local_69[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									fVar22 = unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin");
									fVar22 = (fVar22 / unk_0x5736FE91FA97CD65(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin"));
									if (fVar22 < 0f || fVar22 > 1f)
									{
										fVar22 = 0f;
									}
									if (!unk_0x191BE1BC8F26F3C1(iLocal_210, 0))
									{
										if (unk_0xA5F6598E13F98E08(iLocal_210, "MISSARMENIAN2", "open_garage_door", 3))
										{
											unk_0xCBF5827EA5303F2B(iLocal_210, "MISSARMENIAN2", "open_garage_door", fVar22);
										}
									}
									if (unk_0x9A0B2ED5055D3F0B(joaat("prop_gar_door_plug")))
									{
										iLocal_82[1] = unk_0x5E35CF35E65D69B9(joaat("prop_gar_door_plug"), -1064,45f, -1668,56f, 4,5f, 1, true, 0);
										unk_0x59AF3B40AE222194(iLocal_82[1], -90f, 0f, -55,93f, 2, 1);
										unk_0xB3A8974D2C811672(iLocal_82[1], false, 0);
										unk_0xEDC33A771FAEB393(iLocal_82[1], true);
									}
									Local_69[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								if (!unk_0x191BE1BC8F26F3C1(iLocal_82[1], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_210, 0))
								{
									unk_0xBD8D47FDC6902B2D(iLocal_82[1], unk_0xB3328BA8976B416C(iLocal_210, 1), 1, 0, 0, 1);
									unk_0x59AF3B40AE222194(iLocal_82[1], unk_0xDB824D597B53CC40(iLocal_210, 2), 2, 1);
									vVar23 = { unk_0xB3328BA8976B416C(iLocal_210, 1) };
									vVar24 = { unk_0xDB824D597B53CC40(iLocal_210, 2) };
								}
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin") > 0,25f)
									{
										unk_0x23A4CE7F9EBB02D4(-1, "Garage_Open_02", -1064,632f, -1668,981f, 4,8996f, "ARM_2_REPO_SOUNDS", 0, 0, 0);
										Local_69[iParam0 /*10*/].f_6 = 4;
									}
								}
								break;
							
							case 4:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin", 3))
								{
									if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2", "open_garage_franklin") > 0,77f)
									{
										unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
										if (unk_0xA6DECE14FC9A8C51(iLocal_247))
										{
											unk_0xE30CF11C0EE14316(&iLocal_247);
										}
										unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
										iLocal_81++;
										unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), -1063,143f, -1667,331f, 4,9339f, 3000, 0, 2);
										if (!unk_0x191BE1BC8F26F3C1(iLocal_82[1], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_210, 0))
										{
											unk_0xBD8D47FDC6902B2D(iLocal_82[1], -1064,45f, -1668,56f, 5,73f, 1, 0, 0, 1);
											unk_0x59AF3B40AE222194(iLocal_82[1], -90f, 0f, -55,93f, 2, 1);
										}
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 40:
						if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							vVar25 = { 0f, 0f, 0f };
							if (func_450(&vVar25, -1076,163f, -1673,723f, 3,61753f, -1073,07f, -1678,339f, 3,59893f, func_130(1,41f, -2f, 0f), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)))
							{
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 41:
						if (unk_0x546F10CBA6C484DA(-967780114))
						{
							unk_0x99B6EAC23065A02E(-967780114, 0f, 0, 1);
							unk_0xB94AAB49E0BB01DB(-967780114, 4, 0, 1);
						}
						break;
					
					case 50:
						if (unk_0x546F10CBA6C484DA(-967780114))
						{
							unk_0x99B6EAC23065A02E(-967780114, 1f, 0, 1);
							unk_0xB94AAB49E0BB01DB(-967780114, 4, 0, 1);
						}
						break;
					
					case 51:
						if (unk_0xA8113D347D14630F())
						{
							if (unk_0xE57A999388F7FD02() > 16757)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_202))
								{
									unk_0x8B8D1CEBA80E6B77(iLocal_202, 0, 0,875f, 0,758f, 279,331f, 1f, 6, 0f, "BulletLarge");
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 42:
						func_449("ARM2_MISSION_START", 0, "ARM2_FIGHT_START");
						unk_0xE859EF37EA7362D3("ARM_2_SEARCH_FOR_BIKE");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 43:
						if (unk_0xB8DE76287EDC4957(Local_95[1 /*2*/], 0))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_465(9))
									{
										unk_0x8D7ABC97ED508270(Local_95[1 /*2*/], 1, "ARM2", 1);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (unk_0x8DDE799D31A3D099(Local_95[1 /*2*/]))
									{
										unk_0x5496EE849BB0CFF1(Local_95[1 /*2*/]);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 44:
						if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()) == Local_95[6 /*2*/] || unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()) == Local_95[6 /*2*/])
									{
										unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], false);
										Local_69[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 1:
									if (!unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_95[6 /*2*/], 0))
									{
										unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], true);
										Local_69[iParam0 /*10*/].f_6 = 0;
									}
									break;
								}
						}
						break;
					
					case 47:
						if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0x771D0F8F56A5FE6C("ARM_2_DRIVE_TO_ALLEY"))
							{
								unk_0xE02E32C69260FBB7("ARM_2_DRIVE_TO_ALLEY");
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 49:
						if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[4 /*14*/]) && !unk_0x3AB6A1A9084FB0A4(Local_94[5 /*14*/]))
							{
								if (func_267(unk_0xFC1458A37D98B502(), Local_94[4 /*14*/], 1) < 15f)
								{
									unk_0x60C06BFD037BB7CF(Local_94[4 /*14*/], unk_0xFC1458A37D98B502(), 15000, 0, 2);
									unk_0x60C06BFD037BB7CF(Local_94[5 /*14*/], unk_0xFC1458A37D98B502(), 15000, 0, 2);
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 15000;
								}
							}
						}
						break;
					
					case 48:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_47 = 1;
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_297(49))
								{
									iLocal_47 = 3;
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								vVar26 = { unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 1) };
								if ((unk_0xA5F6598E13F98E08(Local_94[2 /*14*/], "missarmenian2", "fake_punch_walk_by_lamar", 3) || vVar26.y < -1601f) || func_448(4, 17) > 0)
								{
									iLocal_47 = 4;
									Local_69[iParam0 /*10*/].f_6++;
								}
								else if (func_297(53))
								{
									Local_69[iParam0 /*10*/].f_6 = 4;
									iLocal_47 = 5;
								}
								break;
							
							case 3:
								if (func_297(53) || func_260(3, 21))
								{
									Local_69[iParam0 /*10*/].f_6 = 4;
									iLocal_47 = 5;
								}
								break;
							
							case 4:
								if (func_297(62) && !func_297(64))
								{
									Local_69[iParam0 /*10*/].f_6 = 5;
									iLocal_47 = 6;
								}
								break;
							
							case 5:
								if (func_297(64) || func_260(9, 27))
								{
									Local_69[iParam0 /*10*/].f_6 = 6;
									iLocal_47 = 7;
								}
								break;
						}
						break;
					
					case 45:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									unk_0xBA54D3D84EF38E3D(Local_94[2 /*14*/], -1074,437f, -1674,698f, 5,0856f, 3000, 0, 2);
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 3000;
									break;
								
								case 1:
									if (unk_0x53C562FD2B9E3AB0() > 3000)
									{
										unk_0xBA54D3D84EF38E3D(Local_94[2 /*14*/], -1068,423f, -1665,641f, 4,9303f, 3000, 0, 2);
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 3000;
									}
									break;
								
								case 2:
									if (unk_0x53C562FD2B9E3AB0() > 3000)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 46:
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1066,288f, -1675,862f, 2,403591f, -1074,154f, -1664,753f, 8,428232f, 13,4375f, 0, 1, 0))
						{
							bVar27 = true;
							unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
						}
						if (iLocal_92 > 1 && iLocal_92 < 6)
						{
							if (!unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) && ((!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 0) - Vector(2f, 0f, 0f), -1064,003f, -1679,903f, 7,516632f, 52,5f, 0, 1, 0)) || iLocal_266))
							{
								unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 1f);
								if (unk_0x1FB367C588A91451() == 4)
								{
									iLocal_266 = 1;
								}
								bVar27 = true;
							}
						}
						if (iLocal_266)
						{
							fVar28 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 1), -1064,003f, -1679,903f, 7,516632f, false);
							fVar29 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1064,003f, -1679,903f, 7,516632f, false);
							if (fVar29 > (fVar28 + 3f) || unk_0x1FB367C588A91451() != 4)
							{
								iLocal_266 = 0;
							}
						}
						if (!bVar27)
						{
							unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 3f);
							iLocal_266 = 0;
						}
						break;
					
					case 35:
						Local_69[iParam0 /*10*/].f_6 = 2;
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									unk_0x6EF694689373EE8D(Local_94[2 /*14*/], -1074,48f, -1673,231f, 3,4137f, 1f, 20000, 1193033728, 1056964608);
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0xEE299B2381B26039(Local_94[2 /*14*/], "missarmenian2", "LEMAR_INDICATE_GARAGE", 8f, 1);
									}
									if (unk_0xA6DECE14FC9A8C51(iLocal_244))
									{
										unk_0xE30CF11C0EE14316(&iLocal_244);
									}
									iLocal_244 = func_447(-1073,575f, -1675,605f, 3,4401f, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 2106541073) == 7)
								{
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_465(15))
								{
									if (func_267(unk_0xFC1458A37D98B502(), Local_94[2 /*14*/], 1) < 5f && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
										{
											if (!unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0) && !unk_0x0F299BBD0DC14B18(Local_94[2 /*14*/]))
											{
												if (unk_0xDE42C4904F29B0CE(Local_94[2 /*14*/]))
												{
													if (!unk_0xA5F6598E13F98E08(Local_94[2 /*14*/], "missarmenian2", "GARAGE_POINT_lemar", 3))
													{
														func_446(&(Local_69[iParam0 /*10*/].f_8), &(Local_69[iParam0 /*10*/].f_7));
													}
												}
											}
										}
									}
									else if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -2017877118) == 1)
									{
										unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
									}
								}
								break;
						}
						break;
					
					case 36:
						if (func_297(13))
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						else
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
							{
								unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
								if (unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0))
								{
									unk_0x16416C5B54FDBCBB(Local_94[2 /*14*/], 0, 0);
								}
							}
							unk_0x0EE72DB1CD8A3B86(&(Local_214.f_13), 26);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 37:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_585(5);
								unk_0x393584863A2F304E("Arm_2_mcs_4", 8);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (unk_0x8AD07B6FC24F47C4())
								{
									unk_0x6A39A6ADDC38ABE4("Franklin", unk_0xFC1458A37D98B502(), 0);
									unk_0xEDB61F1ADC509416("LAMAR", 0, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 1, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 2, 2, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 3, 2, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 4, 3, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 5, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 6, 1, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 7, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 8, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 9, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 66:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[3 /*14*/]))
						{
							unk_0x68433819717660CF(&(Local_94[3 /*14*/]));
						}
						if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
						{
							unk_0x94BD6F0436473406(0f);
							unk_0xC0EBC1452FCAB15C(0);
							unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0xF96119FCCD4D1889(5, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()), iLocal_98);
							unk_0xF96119FCCD4D1889(5, iLocal_98, unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
							unk_0xBB3CC641B6AED5E5(Local_94[2 /*14*/], 15);
							unk_0x88235B448509228B(Local_94[2 /*14*/]);
						}
						if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
							{
								unk_0xCE93FCB8A8D8DF0B(Local_94[2 /*14*/], unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
							}
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!unk_0xA6DECE14FC9A8C51(Local_94[2 /*14*/].f_1))
							{
								Local_94[2 /*14*/].f_1 = func_270(Local_94[2 /*14*/], 0, 145);
							}
						}
						unk_0xC234848D21B6064E(1);
						unk_0xD0A6028E561242DA(unk_0xFC1458A37D98B502(), 1, -1, 0);
						iLocal_263 = 0;
						unk_0x872F1C1F8587CCC7(&iLocal_263, 3);
						unk_0x872F1C1F8587CCC7(&iLocal_263, 4);
						uLocal_226 = unk_0x06583789B8C15A6C(joaat("pickup_weapon_pumpshotgun"), -1082,852f, -1651,92f, 3,3987f, iLocal_263, 40, 1, 0);
						iLocal_196 = unk_0xF2FAD350A3F91B3B(-1071,326f, -1663,061f, 3,4888f, 27f, 1, 0, 1, 1);
						iLocal_197 = unk_0xF2FAD350A3F91B3B(-1082,397f, -1649,098f, 3,5038f, 27f, 1, 0, 1, 1);
						iLocal_198 = unk_0xF2FAD350A3F91B3B(-1089,433f, -1639,457f, 3,4724f, 27f, 1, 0, 1, 1);
						iLocal_200 = unk_0xF2FAD350A3F91B3B(-1073,505f, -1657,754f, 3,394f, 226,1309f, 0, 2, 0, 1);
						iLocal_199 = unk_0xF2FAD350A3F91B3B(-1079,18f, -1653,95f, 3,4f, 27f, 1, 0, 1, 1);
						unk_0xE859EF37EA7362D3("ARM_2_SHOOTOUT");
						func_312(Local_94[2 /*14*/], 1);
						func_159(4, 12, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 65:
						if (unk_0xB8DE76287EDC4957(Local_95[2 /*2*/], 0))
						{
							if (unk_0xEBE499597C718EB8(Local_95[2 /*2*/], unk_0xFC1458A37D98B502(), 1))
							{
								if (unk_0xDE523AF6F7B269AB(Local_95[2 /*2*/]) < 950)
								{
									unk_0x09762DAA0F9D9309(Local_95[2 /*2*/], 5, 0, 1148846080);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 54:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									unk_0x35829E9BFCED1A3F(Local_94[2 /*14*/], 1);
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 9000;
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										unk_0x35829E9BFCED1A3F(Local_94[2 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 64:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								unk_0x6FF834D85E2DD4C6(-1926582578);
								Local_69[iParam0 /*10*/].f_6 = 1;
								break;
							
							case 1:
								if (unk_0x9A0B2ED5055D3F0B(-1926582578))
								{
									unk_0xA25B44929E552182(-1089,8f, -1637,8f, 7,3f, 1f, joaat("prop_ld_balcfnc_02a"), 1);
									iVar30 = unk_0x9A331BBF019DCAD2(-1926582578, -1089,83f, -1637,81f, 7,35f, 1, true, 0);
									unk_0x59AF3B40AE222194(iVar30, 0f, 0f, 32,65f, 2, 1);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 52:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								unk_0x385A213BEB355C2B(Local_94[2 /*14*/], unk_0x69EFDF3384995190(Local_94[2 /*14*/], 0), false);
								iLocal_195 = unk_0xF2FAD350A3F91B3B(Vector(3,429f, -1671,302f, -1076,674f) + Vector(0,03f, -0,29f, -0,1f), 31f, 0, 0, 1, 0);
								unk_0x4EC2D0046891F1C5(Local_94[2 /*14*/], -1076,667f, -1671,331f, 3,4299f, 2f, 0, 0);
								func_134();
								unk_0x655ECA1E65A8498E(0, iLocal_195, -1087,844f, -1645,891f, 3,3987f, 30000, 1);
								unk_0x992E814DF611C58C(0, 50f, 0);
								func_133(Local_94[2 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 53:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									unk_0x3B4E7F52D5CB92BA(iLocal_195);
									iLocal_195 = unk_0xF2FAD350A3F91B3B(-1081,219f, -1667,344f, 3,8438f, 16f, 0, 2, 3, 0);
									unk_0x4EC2D0046891F1C5(Local_94[2 /*14*/], -1082,511f, -1666,637f, 3,483845f, 2,437f, 0, 0);
									unk_0xAE6EBBBBD8B9FB30(Local_94[2 /*14*/], 29, 1);
									unk_0x655ECA1E65A8498E(Local_94[2 /*14*/], iLocal_195, -1085,314f, -1653,031f, 4,7843f, -1, 1);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_135(Local_94[2 /*14*/], -1083,49f, -1667,09f, 3,71f, 1) < 2,8f)
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 55:
						if (func_296(110))
						{
							if (func_260(7, 53))
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									switch (Local_69[iParam0 /*10*/].f_6)
									{
										case 0:
											unk_0x3B4E7F52D5CB92BA(iLocal_195);
											iLocal_195 = unk_0xF2FAD350A3F91B3B(-1085,27f, -1655,59f, 3,4f, 16f, 1, 2, 4, 0);
											unk_0x4EC2D0046891F1C5(Local_94[2 /*14*/], -1084,75f, -1656,766f, 3,398659f, 6f, 0, 0);
											unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 1);
											func_134();
											unk_0x655ECA1E65A8498E(0, iLocal_195, -1085,27f, -1655,59f, 3,4f, -1, 0);
											unk_0x4E0F66531BFA3A51(0);
											func_133(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_6++;
											break;
										
										case 1:
											if (func_135(Local_94[2 /*14*/], -1084,75f, -1656,766f, 3,398659f, 1) < 3f)
											{
												if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
												{
													if (unk_0xA22878C8A83377D3(-1085,27f, -1655,59f, 3,4f))
													{
														Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 1000;
													}
												}
												Local_69[iParam0 /*10*/].f_6++;
											}
											break;
										
										case 2:
											if (unk_0xA22878C8A83377D3(-1085,27f, -1655,59f, 3,4f))
											{
												unk_0x191BE1BC8F26F3C1(Local_94[13 /*14*/], 0);
												if (((unk_0x6ADD12BF4D6D2587(Local_94[13 /*14*/]) && unk_0x9479D23F28CA059C(Local_94[13 /*14*/])) || func_297(109)) || func_297(101))
												{
													unk_0x3B4E7F52D5CB92BA(iLocal_195);
													unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
													func_134();
													unk_0x1D077D3591C6FFA7(0, -1084,219f, -1657,146f, 3,3987f, -1088,602f, -1655,998f, 6,9797f, 1f, 0, 0,5f, 4f, 1, 0, 0, -957453492);
													unk_0xD40A6DFCC31D221A(0, 0);
													unk_0x992E814DF611C58C(0, 100f, 0);
													func_133(Local_94[2 /*14*/], 0);
													func_452(12, 58, 1, 0);
													Local_69[iParam0 /*10*/].f_3 = 1;
												}
											}
											else
											{
												unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 0);
												unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
												func_134();
												unk_0x1D077D3591C6FFA7(0, -1084,219f, -1657,146f, 3,3987f, -1088,602f, -1655,998f, 6,9797f, 1f, 0, 0,5f, 4f, 1, 0, 0, -957453492);
												unk_0xD40A6DFCC31D221A(0, 0);
												unk_0x992E814DF611C58C(0, 100f, 0);
												func_133(Local_94[2 /*14*/], 0);
												func_452(12, 58, 1, 0);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											break;
										}
									}
							}
						}
						else
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 56:
						unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
						unk_0x4EC2D0046891F1C5(Local_94[2 /*14*/], -1085,27f, -1655,59f, 3,4f, 3f, 0, 0);
						unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 57:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_135(Local_94[2 /*14*/], -1089,2f, -1655,05f, 3,42f, 0) < 6,375f)
								{
									func_452(3, 52, 1, 0);
									func_452(7, 53, 1, 0);
									func_452(10, 55, 1, 0);
									func_452(12, 58, 1, 0);
									func_452(13, 56, 1, 0);
									unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 1);
									unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react", 8f, -1f, -1, 131080, 0, 0, 0, 0);
									unk_0x1267474D9A69CA37(3f, 4f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 1:
								if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -2017877118) == 7 || (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -2017877118) == 1 && unk_0x7A70772AE40E3821(Local_94[2 /*14*/], "missarmenian2lamar_in_cover", "lamar_explosion_react") > 0,78f))
								{
									unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 0);
									unk_0x992E814DF611C58C(Local_94[2 /*14*/], 100f, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 58:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									func_134();
									unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_intro", 4f, -4f, -1, 0, 0, 0, 0, 0);
									unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
									unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
									func_133(Local_94[2 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_7 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(800, 2800));
									Local_69[iParam0 /*10*/].f_8 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3800, 6800));
									unk_0x1267474D9A69CA37(3f, 1f, 4);
									unk_0x45BD02A17452ECE4(Local_94[2 /*14*/], 5, 1f);
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
									{
										if (func_260(14, 59))
										{
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
										else if (func_296(102))
										{
											if (!func_445(14, 59))
											{
												if (!unk_0xACB5C13823C09021(Local_94[2 /*14*/], 0) || (unk_0xACB5C13823C09021(Local_94[2 /*14*/], 0) && func_135(Local_94[2 /*14*/], -1085,27f, -1655,59f, 3,4f, 1) > 1f))
												{
													if (unk_0xA22878C8A83377D3(-1085,27f, -1655,59f, 3,4f))
													{
														unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 0);
														unk_0x655ECA1E65A8498E(Local_94[2 /*14*/], iLocal_195, -1085,27f, -1655,59f, 3,4f, -1, 0);
													}
												}
											}
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_8)
									{
										if (!func_445(14, 59) && !func_260(14, 59))
										{
											func_134();
											if (unk_0x63A6486593EC7EC3(0, 2) == 0)
											{
												unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											}
											else
											{
												unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_idle_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
											}
											unk_0x12C9D41D52A560D6(0, "missarmenian2lamar_in_cover", "lamar_cover_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
											func_133(Local_94[2 /*14*/], 0);
											Local_69[iParam0 /*10*/].f_8 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(3800, 6800));
										}
										else
										{
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 59:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!func_445(35, 57))
							{
								func_452(3, 52, 1, 0);
								func_452(7, 53, 1, 0);
								func_452(10, 55, 1, 0);
								func_452(12, 58, 1, 0);
								func_452(13, 56, 1, 0);
								unk_0x3B4E7F52D5CB92BA(iLocal_195);
								iLocal_195 = unk_0xF2FAD350A3F91B3B(-1086,16f, -1651,64f, 3,4f, 40f, 0, 2, 1, 0);
								unk_0x45BD02A17452ECE4(Local_94[2 /*14*/], 3, 0,5f);
								unk_0x45BD02A17452ECE4(Local_94[2 /*14*/], 4, 1000f);
								unk_0x45BD02A17452ECE4(Local_94[2 /*14*/], 0, 0f);
								unk_0x4EC2D0046891F1C5(Local_94[2 /*14*/], -1086,11f, -1651,8f, 3,4f, 3f, 0, 0);
								func_134();
								if (unk_0x0C88267282FD588F(Local_94[2 /*14*/], -1085,515f, -1656,071f, 4,39866f, 0,75f, 0,8125f, 1f, 0, 1, 0))
								{
									unk_0xD40A6DFCC31D221A(0, 1);
									unk_0x1D077D3591C6FFA7(0, -1084,219f, -1657,146f, 3,3987f, -1087,149f, -1646,533f, 4,662f, 1f, 0, 0,5f, 4f, 1, 0, 0, -957453492);
								}
								unk_0xD40A6DFCC31D221A(0, 0);
								unk_0x992E814DF611C58C(0, 50f, 0);
								func_133(Local_94[2 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 63:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (unk_0x546F10CBA6C484DA(-967780114))
								{
									unk_0x99B6EAC23065A02E(-967780114, 1f, 0, 1);
									unk_0xB94AAB49E0BB01DB(-967780114, 4, 0, 1);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x546F10CBA6C484DA(-967780114))
								{
									if (unk_0xED2D01296ADA88DB(-967780114) > 0,8f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 67:
						func_273(9, -1075,848f, -1663,647f, 3,3987f, 175,1524f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0x4EC2D0046891F1C5(Local_94[9 /*14*/], -1073,721f, -1657,576f, 3,401901f, 3f, 0, 0);
						unk_0xAE6EBBBBD8B9FB30(Local_94[9 /*14*/], 11, 1);
						func_134();
						unk_0xD40A6DFCC31D221A(0, 1);
						unk_0x517BE2428CAF5092(0, -1075,513f, -1679,814f, 4,9952f, 1500, -687903391);
						unk_0xD40A6DFCC31D221A(0, 0);
						unk_0x992E814DF611C58C(0, 50f, 0);
						func_133(Local_94[9 /*14*/], 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 68:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_273(10, -1080,693f, -1650,787f, 3,4234f, 196f, joaat("weapon_pistol"), 0, 0, -1);
								unk_0x45BD02A17452ECE4(Local_94[10 /*14*/], 3, 0,5f);
								unk_0x45BD02A17452ECE4(Local_94[10 /*14*/], 4, 1000f);
								unk_0x45BD02A17452ECE4(Local_94[10 /*14*/], 0, 0f);
								unk_0xAE01EF4BC84AFE7C(Local_94[10 /*14*/], 188, true);
								unk_0xAE6EBBBBD8B9FB30(Local_94[10 /*14*/], 12, 0);
								unk_0xAE6EBBBBD8B9FB30(Local_94[10 /*14*/], 8, 0);
								unk_0xE86964E664D0232A(Local_94[10 /*14*/], 0, -1);
								unk_0xAE6EBBBBD8B9FB30(Local_94[10 /*14*/], 34, 0);
								unk_0xAE6EBBBBD8B9FB30(Local_94[10 /*14*/], 50, 1);
								unk_0x992E814DF611C58C(Local_94[10 /*14*/], 50f, 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (unk_0x6ADD12BF4D6D2587(Local_94[12 /*14*/]) && unk_0x3AB6A1A9084FB0A4(Local_94[12 /*14*/]))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[10 /*14*/]))
									{
										unk_0x4EC2D0046891F1C5(Local_94[10 /*14*/], -1084,321f, -1648,257f, 3,3987f, 2f, 0, 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 69:
						func_273(11, -1092,917f, -1660,434f, 3,5354f, 296f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0x4EC2D0046891F1C5(Local_94[11 /*14*/], -1081,759f, -1657,341f, 3,398672f, 2,25f, 0, 0);
						unk_0xAE6EBBBBD8B9FB30(Local_94[11 /*14*/], 50, 1);
						unk_0x4F9A62E773100FDC(Local_94[11 /*14*/], 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[11 /*14*/], 51, 1);
						unk_0x992E814DF611C58C(Local_94[11 /*14*/], 50f, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 70:
						vVar32 = { Vector(4,47f, -1649,87f, -1088,97f) - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						vVar32 = { func_130(vVar32) };
						vVar32 = { vVar32 * Vector(4,48f, 4,48f, 4,48f) };
						vVar31 = { Vector(3,4f, -1649,87f, -1088,97f) + Vector(0f, vVar32.y, vVar32.x) };
						iLocal_201 = unk_0xF2FAD350A3F91B3B(vVar31, -148f, 2, 0, 0, 0);
						func_273(12, vVar31, 222f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[12 /*14*/], 29, 1);
						unk_0x4EC2D0046891F1C5(Local_94[12 /*14*/], -1085,302f, -1653,68f, 3,469686f, 2,125f, 0, 0);
						unk_0xAE6EBBBBD8B9FB30(Local_94[12 /*14*/], 50, 1);
						unk_0x4F9A62E773100FDC(Local_94[12 /*14*/], 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[12 /*14*/], 51, 1);
						func_134();
						unk_0x7C7B3B9FE1579DA8(0, -1089,061f, -1648,209f, 3,3985f, 500, 0, -1f, 1, 0, iLocal_201, 0);
						unk_0x992E814DF611C58C(0, 50f, 0);
						func_133(Local_94[12 /*14*/], 0);
						unk_0x9A0C1F836B24E46E(Local_94[12 /*14*/], 1, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 71:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									if (unk_0xCA61C7E425DAB6B3(uLocal_206))
									{
										if (unk_0x20D62902F28677D2(uLocal_206) == 7)
										{
											func_273(13, -1104,981f, -1665,011f, 6,3488f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
										}
										else
										{
											func_273(13, -1098,214f, -1660,421f, 6,2581f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
										}
									}
									else
									{
										func_273(13, -1098,214f, -1660,421f, 6,2581f, 307f, joaat("weapon_microsmg"), 0, 0, -1);
									}
									unk_0xBB3CC641B6AED5E5(Local_94[13 /*14*/], 0);
									unk_0x4EC2D0046891F1C5(Local_94[13 /*14*/], -1089,65f, -1655,94f, 6,36f, 1,875f, 0, 0);
									if (func_297(101))
									{
										func_134();
										unk_0xD40A6DFCC31D221A(0, 1);
										unk_0x380C1E7B7740D618(0, -1089,705f, -1656,506f, 6,3482f, 2f, 20000, 0,25f, 0, 1193033728);
										unk_0xD40A6DFCC31D221A(0, 0);
										unk_0xDF28F1574E61F9EA(0, Local_94[2 /*14*/], -1, -957453492);
										func_133(Local_94[13 /*14*/], 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										unk_0xBB3CC641B6AED5E5(Local_94[13 /*14*/], 0);
										func_134();
										unk_0xD40A6DFCC31D221A(0, 1);
										unk_0x28D62AF360997F32(0, -1089,705f, -1656,506f, 6,3482f, Local_94[2 /*14*/], 2f, 1, 0,25f, 1082130432, 1, 0, 0, -957453492, 20000);
										unk_0xDF28F1574E61F9EA(0, Local_94[2 /*14*/], -1, -957453492);
										func_133(Local_94[13 /*14*/], 0);
										unk_0x691491EBC2D892F5(Local_94[13 /*14*/], 2f);
									}
									unk_0x31BBD48AA2503617(Local_94[13 /*14*/], -530524, 0, 0, 0);
									unk_0x1267474D9A69CA37(1f, 3f, 3);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (func_135(unk_0xFC1458A37D98B502(), -1089,865f, -1656,486f, 6,202436f, 1) < 4,625f || unk_0x9479D23F28CA059C(Local_94[13 /*14*/]))
								{
									unk_0x771A86309E0CA47B(Local_94[13 /*14*/], 0);
									unk_0x992E814DF611C58C(Local_94[13 /*14*/], 70f, 0);
									unk_0xBB3CC641B6AED5E5(Local_94[13 /*14*/], 30);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 2:
								if (unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (func_135(unk_0xFC1458A37D98B502(), -1089,865f, -1656,486f, 6,202436f, 1) < 4,625f || unk_0x9479D23F28CA059C(Local_94[13 /*14*/]))
								{
									unk_0x771A86309E0CA47B(Local_94[13 /*14*/], 0);
									unk_0x992E814DF611C58C(Local_94[13 /*14*/], 70f, 0);
									unk_0xBB3CC641B6AED5E5(Local_94[13 /*14*/], 30);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 72:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
						{
							unk_0x4EC2D0046891F1C5(Local_94[13 /*14*/], unk_0xB3328BA8976B416C(Local_94[13 /*14*/], 1), 5,25f, 0, 0);
							unk_0x992E814DF611C58C(Local_94[13 /*14*/], 50f, 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 73:
						func_273(16, -1108,89f, -1637,478f, 3,6162f, 300f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0x4EC2D0046891F1C5(Local_94[16 /*14*/], -1098,419f, -1629,159f, 3,3987f, 2,5f, 0, 0);
						unk_0x4F9A62E773100FDC(Local_94[16 /*14*/], 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[16 /*14*/], 51, 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[16 /*14*/], 50, 1);
						unk_0x992E814DF611C58C(Local_94[16 /*14*/], 100f, 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 74:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_273(18, -1090,482f, -1635,052f, 6,7641f, 167f, joaat("weapon_pistol"), 0, 0, -1);
								unk_0x45BD02A17452ECE4(Local_94[18 /*14*/], 4, 10f);
								unk_0x3811A0FC01E02FC1(Local_94[18 /*14*/], 1);
								unk_0xAE01EF4BC84AFE7C(Local_94[18 /*14*/], 188, true);
								unk_0x35829E9BFCED1A3F(Local_94[18 /*14*/], 0);
								unk_0x4EC2D0046891F1C5(Local_94[18 /*14*/], -1090,146f, -1636,204f, 6,716715f, 2,375f, 0, 0);
								unk_0xE01CE1EBCD7EE551(Local_94[18 /*14*/], 350, 0);
								unk_0xC7478C0CABC29C5E(Local_94[18 /*14*/], 350);
								unk_0x31BBD48AA2503617(Local_94[18 /*14*/], -530524, 1, 0, 0);
								unk_0xDD1E7F41F625A69B(Local_94[18 /*14*/], 150f);
								func_134();
								unk_0xD40A6DFCC31D221A(0, 1);
								unk_0x380C1E7B7740D618(0, -1090,276f, -1637,367f, 6,7641f, 2f, 20000, 0,4f, 0, 1193033728);
								unk_0xD40A6DFCC31D221A(0, 0);
								unk_0x992E814DF611C58C(0, 150f, 0);
								func_133(Local_94[18 /*14*/], 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[18 /*14*/]))
								{
									if (unk_0x9F887157983E8EFC(Local_94[18 /*14*/]))
									{
										unk_0xE01CE1EBCD7EE551(Local_94[18 /*14*/], 0, 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else if (unk_0x78F50AA8F955BEFC(Local_94[18 /*14*/], 1435919172) != 1)
									{
										unk_0x992E814DF611C58C(Local_94[18 /*14*/], 150f, 0);
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								if (Local_69[iParam0 /*10*/].f_7 == 0)
								{
									if (func_297(97))
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_94[18 /*14*/]))
										{
											unk_0x3B706D635A314C20(Local_94[18 /*14*/], 0);
											unk_0xAE6EBBBBD8B9FB30(Local_94[18 /*14*/], 12, 0);
											unk_0xAE6EBBBBD8B9FB30(Local_94[18 /*14*/], 0, 0);
										}
										Local_69[iParam0 /*10*/].f_7 = 1;
									}
								}
								else if (func_296(97))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[18 /*14*/]))
									{
										unk_0x3B706D635A314C20(Local_94[18 /*14*/], 1);
										unk_0xAE6EBBBBD8B9FB30(Local_94[18 /*14*/], 12, 1);
										unk_0xAE6EBBBBD8B9FB30(Local_94[18 /*14*/], 0, 1);
									}
									Local_69[iParam0 /*10*/].f_7 = 0;
								}
								break;
						}
						break;
					
					case 75:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_273(19, -1098,691f, -1626,716f, 9,9315f, 209,2257f, joaat("weapon_pistol"), 0, 0, -1);
								unk_0x2489B9DB7A9BD262(Local_94[19 /*14*/], unk_0x69EFDF3384995190(Local_94[19 /*14*/], 0));
								unk_0xD28B96789F5A9CD4(Local_94[19 /*14*/], -1095,918f, -1630,074f, 9,936975f, -1097,003f, -1630,831f, 10,91186f, 1f, 0, 0);
								unk_0x31BBD48AA2503617(Local_94[19 /*14*/], -530524, 1, 0, 0);
								unk_0xAE01EF4BC84AFE7C(Local_94[19 /*14*/], 188, true);
								unk_0x35829E9BFCED1A3F(Local_94[19 /*14*/], 1);
								unk_0x3B706D635A314C20(Local_94[19 /*14*/], 0);
								unk_0xAE6EBBBBD8B9FB30(Local_94[19 /*14*/], 12, 0);
								unk_0xAE6EBBBBD8B9FB30(Local_94[19 /*14*/], 0, 0);
								unk_0xAE6EBBBBD8B9FB30(Local_94[19 /*14*/], 29, 0);
								unk_0x66698545014E2F21(Local_94[19 /*14*/], 1);
								unk_0x992E814DF611C58C(Local_94[19 /*14*/], 150f, 0);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[19 /*14*/]))
								{
									if (unk_0x0F3033474C49912D(Local_94[19 /*14*/], -1095,918f, -1630,074f, 9,936975f, -1097,003f, -1630,831f, 10,91186f, 1f, 0, 1, 0))
									{
										if (unk_0xD6E36912F4B2FBAD(Local_94[19 /*14*/]) != 0)
										{
											unk_0x4F9A62E773100FDC(Local_94[19 /*14*/], 0);
										}
									}
									if (unk_0x9F887157983E8EFC(Local_94[19 /*14*/]))
									{
										unk_0xE01CE1EBCD7EE551(Local_94[19 /*14*/], 0, 0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 76:
						if (unk_0x6ADD12BF4D6D2587(Local_94[21 /*14*/]))
						{
							if (unk_0x3AB6A1A9084FB0A4(Local_94[21 /*14*/]))
							{
								unk_0xD22D83D359390CC6("arm2_15");
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						Local_69[iParam0 /*10*/].f_9 = (Local_69[iParam0 /*10*/].f_9 + (-2f * system::timestep()));
						if (Local_69[iParam0 /*10*/].f_9 <= -1f)
						{
							Local_69[iParam0 /*10*/].f_9 = -1f;
						}
						func_444(joaat("prop_map_door_01"), -1104,657f, -1638,481f, 4,6754f, 1, Local_69[iParam0 /*10*/].f_9);
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 99:
								break;
							
							case 0:
								unk_0x307EAE14C924E2E7("arm2_15");
								Local_69[iParam0 /*10*/].f_6++;
								Local_69[iParam0 /*10*/].f_4 = 1;
								break;
							
							case 1:
								if (unk_0xC316B5E3E7ACF515("arm2_15"))
								{
									func_273(21, -1106,876f, -1638,7f, 3,6407f, 288,3654f, joaat("weapon_pistol"), 0, 0, -1);
									unk_0x4EC2D0046891F1C5(Local_94[21 /*14*/], -1100,477f, -1641,042f, 3,616217f, 2,75f, 0, 0);
									unk_0xAE6EBBBBD8B9FB30(Local_94[21 /*14*/], 29, 0);
									unk_0x4F9A62E773100FDC(Local_94[21 /*14*/], 1);
									unk_0xAE6EBBBBD8B9FB30(Local_94[21 /*14*/], 51, 1);
									unk_0xAE6EBBBBD8B9FB30(Local_94[21 /*14*/], 50, 1);
									unk_0x992E814DF611C58C(Local_94[21 /*14*/], 100f, 0);
									unk_0x23A4CE7F9EBB02D4(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104,359f, -1637,575f, 2,366156f, 0, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								break;
							
							case 3:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[21 /*14*/]))
								{
									unk_0x91AD7123A61E33F8(Local_94[21 /*14*/], 1f);
									if (unk_0x4B2B9484BBAA2F31(Local_94[21 /*14*/]))
									{
										unk_0x5EA0BDE5A880DCB7(Local_94[21 /*14*/], unk_0xFC1458A37D98B502(), 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[21 /*14*/]))
								{
									unk_0x91AD7123A61E33F8(Local_94[21 /*14*/], 1f);
									if (unk_0x0F3033474C49912D(Local_94[21 /*14*/], -1104,359f, -1637,575f, 2,366156f, -1105,299f, -1638,249f, 6,828245f, 1,5625f, 0, 1, 0))
									{
										unk_0x23A4CE7F9EBB02D4(-1, "ARM_2_REPO_DOOR_KICK_OPEN", -1104,359f, -1637,575f, 2,366156f, 0, 0, 0, 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 5:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[21 /*14*/]))
								{
									unk_0x91AD7123A61E33F8(Local_94[21 /*14*/], 1f);
									if (unk_0x0F3033474C49912D(Local_94[21 /*14*/], -1103,139f, -1638,565f, 2,803717f, -1104,735f, -1636,18f, 4,803716f, 1,375f, 0, 1, 0))
									{
										unk_0x771A86309E0CA47B(Local_94[21 /*14*/], 0);
										unk_0x992E814DF611C58C(Local_94[21 /*14*/], 100f, 0);
										func_146(96, 4);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 60:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0xD28B96789F5A9CD4(Local_94[2 /*14*/], -1100,694f, -1647,66f, 2,457902f, -1092,784f, -1647,704f, 5,39866f, 2,375f, 0, 0);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 77:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
								{
									Local_94[20 /*14*/] = unk_0xAC992EFAD62C33BF(26, iLocal_259, -1084,383f, -1633,023f, 3,7424f, 81f, 1, true);
									unk_0x5C5D33A1B2711D21(Local_94[20 /*14*/], false);
									unk_0x4BEFCD5DAE410A90(Local_95[6 /*2*/], 1);
									unk_0x6862DF5504F63883(Local_95[6 /*2*/], 0);
									unk_0x771A86309E0CA47B(Local_94[20 /*14*/], 1);
									unk_0x6F8C8278B7C06889(Local_94[20 /*14*/], Local_95[6 /*2*/], 20000, -1, 2f, 262144, 0);
									unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], false);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[20 /*14*/]))
									{
										if (unk_0xAAA8D20859E2D36D(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											unk_0x12C9D41D52A560D6(Local_94[20 /*14*/], "missarmenian2", "In_Car_Nervous", 8f, -8f, -1, 1, 0, 0, 0, 0);
											Local_69[iParam0 /*10*/].f_6++;
										}
										else if (unk_0x78F50AA8F955BEFC(Local_94[20 /*14*/], -1794415470) == 7)
										{
											unk_0x6F8C8278B7C06889(Local_94[20 /*14*/], Local_95[6 /*2*/], 20000, -1, 2f, 262144, 0);
										}
									}
								}
								break;
							
							case 2:
								if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[20 /*14*/]))
									{
										if (!unk_0xAAA8D20859E2D36D(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											unk_0xD68E88A8E0BE8697(Local_94[20 /*14*/], unk_0xFC1458A37D98B502(), 70f, -1, 0, 0);
											unk_0xE9B3D12A64CC7C1A(Local_94[20 /*14*/], 1);
											unk_0x486F346ADFE56674(&(Local_94[20 /*14*/]));
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 78:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[20 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
									{
										if (unk_0xAAA8D20859E2D36D(Local_94[20 /*14*/], Local_95[6 /*2*/]))
										{
											if (unk_0xE97272C977DEADD3((unk_0xF0371FE6E2BF9599(Local_95[6 /*2*/]) - 307,1f)) < 0,5f)
											{
												unk_0xAE6EBBBBD8B9FB30(Local_94[20 /*14*/], 3, 0);
												unk_0xD38F266C132F2897(Local_94[20 /*14*/], 1, 0, 0, 0, 0, 0, 0, 0);
												unk_0xCE93FCB8A8D8DF0B(Local_94[20 /*14*/], iLocal_98);
												unk_0xAE01EF4BC84AFE7C(Local_94[20 /*14*/], 116, false);
												unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], false);
												unk_0x8D7ABC97ED508270(Local_95[6 /*2*/], 6, "ARM2", 1);
												unk_0xC0F1749B04775C59(Local_95[6 /*2*/], 0);
												unk_0x771A86309E0CA47B(Local_94[20 /*14*/], 1);
												unk_0xE859EF37EA7362D3("ARM_2_GAS_TRAIL");
												unk_0x6CF99BCE94E6F07C(Local_95[6 /*2*/], "ARM_2_GAS_TRAIL_CAR_GROUP", 0);
												unk_0x1267474D9A69CA37(2f, 7f, 4);
												Local_69[iParam0 /*10*/].f_6++;
											}
											else
											{
												unk_0xD68E88A8E0BE8697(Local_94[20 /*14*/], unk_0xFC1458A37D98B502(), 100f, 100000, 0, 0);
												unk_0xE9B3D12A64CC7C1A(Local_94[20 /*14*/], 1);
												unk_0x486F346ADFE56674(&(Local_94[20 /*14*/]));
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else
										{
											unk_0xD68E88A8E0BE8697(Local_94[20 /*14*/], unk_0xFC1458A37D98B502(), 100f, 100000, 0, 0);
											unk_0xE9B3D12A64CC7C1A(Local_94[20 /*14*/], 1);
											unk_0x486F346ADFE56674(&(Local_94[20 /*14*/]));
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										unk_0xD68E88A8E0BE8697(Local_94[20 /*14*/], unk_0xFC1458A37D98B502(), 100f, 100000, 0, 0);
										unk_0xE9B3D12A64CC7C1A(Local_94[20 /*14*/], 1);
										unk_0x486F346ADFE56674(&(Local_94[20 /*14*/]));
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 1:
									if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
									{
										if (!unk_0x8DDE799D31A3D099(Local_95[6 /*2*/]))
										{
											unk_0x1A0806871323CD16(Local_94[20 /*14*/], false);
											unk_0xE01CE1EBCD7EE551(Local_94[20 /*14*/], 0, 0);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 79:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0();
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
								{
									if (unk_0xDE523AF6F7B269AB(Local_95[6 /*2*/]) < 300)
									{
										unk_0xE01CE1EBCD7EE551(Local_95[6 /*2*/], 300, 0);
									}
									if (unk_0xA7B0253B80B52B2B(Local_95[6 /*2*/]) < 200f)
									{
										unk_0xB38E13EF2EC6F0E9(Local_95[6 /*2*/], 200f);
									}
									if (unk_0x32DFD9C17763ABE0(Local_95[6 /*2*/]) < 150f)
									{
										unk_0xC7C8A97B94385008(Local_95[6 /*2*/], 150f);
									}
									Local_69[iParam0 /*10*/].f_8 = (unk_0x53C562FD2B9E3AB0() - Local_69[iParam0 /*10*/].f_7);
									iVar33 = 0;
									iVar33 = 0;
									while (iVar33 <= 8)
									{
										if (Local_69[iParam0 /*10*/].f_8 > vLocal_205[iVar33 /*3*/])
										{
											if (vLocal_205[iVar33 /*3*/].f_1 == 0)
											{
												vLocal_205[iVar33 /*3*/].f_1 = 1;
												switch (vLocal_205[iVar33 /*3*/].f_2)
												{
													case 0:
														unk_0x203F30C5B9F93620(Local_95[6 /*2*/]);
														break;
													
													case 1:
														unk_0xCEA670B96BB30D75(Local_95[6 /*2*/], 3);
														break;
													
													case 2:
														unk_0x09762DAA0F9D9309(Local_95[6 /*2*/], 1, 0, 1148846080);
														break;
													
													case 3:
														unk_0x36A50B92F547633A(Local_95[6 /*2*/], 1);
														unk_0xB38E13EF2EC6F0E9(Local_95[6 /*2*/], 200f);
														unk_0xC7C8A97B94385008(Local_95[6 /*2*/], 150f);
														unk_0x4BEFCD5DAE410A90(Local_95[6 /*2*/], 2);
														break;
													
													case 4:
														unk_0xCEA670B96BB30D75(Local_95[6 /*2*/], 1);
														break;
													
													case 5:
														unk_0x193F4218CC4CF4BB(Local_95[6 /*2*/], 5, 0, 0, 1);
														unk_0x30C37143C720F2AA(Local_95[6 /*2*/], 5, 3, 0,25f);
														break;
													
													case 7:
														unk_0x9B61DD542916B30C(Local_95[6 /*2*/], 2, 0);
														Local_69[iParam0 /*10*/].f_3 = 1;
														break;
													
													case 6:
														unk_0x9B61DD542916B30C(Local_95[6 /*2*/], 3, 0);
														break;
													
													case 8:
														unk_0x3399302C36042548(Local_95[6 /*2*/], 0f, -2f, 0f, 5f, 0,3f, 1);
														if (!unk_0x3AB6A1A9084FB0A4(Local_94[20 /*14*/]))
														{
															unk_0x4F94C8AB03F5A349(Local_94[20 /*14*/], 1);
															unk_0xE01CE1EBCD7EE551(Local_94[20 /*14*/], 0, 0);
														}
														break;
													}
												}
										}
										iVar33++;
									}
								}
								break;
						}
						break;
					
					case 84:
						func_273(22, -1117,177f, -1625,52f, 3,4419f, 289,343f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[22 /*14*/], 29, 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[22 /*14*/], 51, 1);
						unk_0x4EC2D0046891F1C5(Local_94[22 /*14*/], -1105,623f, -1627,569f, 3,4014f, 3f, 0, 0);
						unk_0xDD1E7F41F625A69B(Local_94[22 /*14*/], 200f);
						unk_0x3811A0FC01E02FC1(Local_94[22 /*14*/], 1);
						unk_0x992E814DF611C58C(Local_94[22 /*14*/], 100f, 0);
						func_273(24, -1100,041f, -1619,929f, 3,7226f, 115,4267f, joaat("weapon_pistol"), 0, 0, -1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[24 /*14*/], 29, 1);
						unk_0xAE6EBBBBD8B9FB30(Local_94[24 /*14*/], 51, 1);
						unk_0x4EC2D0046891F1C5(Local_94[24 /*14*/], -1107,335f, -1630,705f, 3,5958f, 3f, 0, 0);
						unk_0xDD1E7F41F625A69B(Local_94[24 /*14*/], 200f);
						unk_0x3811A0FC01E02FC1(Local_94[24 /*14*/], 1);
						unk_0x992E814DF611C58C(Local_94[24 /*14*/], 100f, 0);
						func_585(7);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 85:
						func_449("ARM2_FIGHT_START", 1, "ARM2_CAR");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 86:
						if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
						{
							unk_0xEDC33A771FAEB393(Local_95[6 /*2*/], false);
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 87:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								break;
							
							case 1:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_6++;
									Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 500;
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 2:
								if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (unk_0x3AB6A1A9084FB0A4(Local_94[13 /*14*/]))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 88:
						if (unk_0x6ADD12BF4D6D2587(Local_94[8 /*14*/]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
							{
								if (!unk_0x299B8D0F9C239719(Local_94[8 /*14*/], 0, 2))
								{
									func_443(19);
								}
							}
							else if (unk_0x4050C3F752DDC5B3(Local_94[8 /*14*/]) == 0)
							{
								func_443(19);
							}
						}
						unk_0x1267474D9A69CA37(3f, 5f, 4);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 89:
						func_449("ARM2_GATE", 0, "ARM2_CHASE_START");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 90:
						if (unk_0x38DF88792E2574E5() && func_297(6))
						{
							if (Local_69[iParam0 /*10*/].f_7 == 0)
							{
								if (unk_0xE859EF37EA7362D3("ARM_2_FOCUS_ON_BIKE"))
								{
									Local_69[iParam0 /*10*/].f_7 = 1;
								}
							}
						}
						else if (Local_69[iParam0 /*10*/].f_7 == 1)
						{
							if (unk_0x771D0F8F56A5FE6C("ARM_2_FOCUS_ON_BIKE"))
							{
								unk_0xE02E32C69260FBB7("ARM_2_FOCUS_ON_BIKE");
							}
							Local_69[iParam0 /*10*/].f_7 = 0;
						}
						break;
					
					case 91:
						if (unk_0xCA61C7E425DAB6B3(uLocal_206))
						{
							if (unk_0x20D62902F28677D2(uLocal_206) == 10)
							{
								if (unk_0x771D0F8F56A5FE6C("ARM_2_RAYFIRE"))
								{
									unk_0xE02E32C69260FBB7("ARM_2_RAYFIRE");
								}
								else
								{
									unk_0x61635C0A7950C875();
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 80:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								func_442(&(Local_254[0 /*7*/]), 0f, -1095,341f, -1643,916f, 3,4784f, -1,0505f, 2,4131f, 0f);
								func_442(&(Local_254[1 /*7*/]), 1f, -1097,301f, -1637,029f, 3,463f, 0,0203f, 2,7398f, 0f);
								func_442(&(Local_254[2 /*7*/]), 2f, -1104,442f, -1629,705f, 3,4128f, -4,9086f, 2,179f, 0f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_439(&bLocal_91))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								if (bLocal_91)
								{
									func_443(10);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_439(&bLocal_91))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 81:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 2200;
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (unk_0xB8DE76287EDC4957(Local_95[6 /*2*/], 0))
								{
									if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
									{
										if (unk_0x771D0F8F56A5FE6C("ARM_2_GAS_TRAIL"))
										{
											unk_0xE02E32C69260FBB7("ARM_2_GAS_TRAIL");
											unk_0xF0037A481D043FE1(Local_95[6 /*2*/], 0);
										}
										unk_0xEBACB44A11FA743B(Local_95[6 /*2*/], 11, "ARM2", 16, 0, 786603);
										unk_0x512FEE935C79BFCF(Local_95[6 /*2*/], 1, 0, -1);
										unk_0x1267474D9A69CA37(3f, 4f, 4);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								func_449("ARM2_CAR", 1, "ARM2_CHASE_START");
								Local_69[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 61:
						func_134();
						unk_0xD40A6DFCC31D221A(0, 1);
						unk_0xDF28F1574E61F9EA(0, Local_95[6 /*2*/], 4000, -957453492);
						unk_0xD40A6DFCC31D221A(0, 0);
						unk_0x992E814DF611C58C(0, 60f, 0);
						func_133(Local_94[2 /*14*/], 0);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 62:
						func_418(iParam0);
						break;
					
					case 82:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_207 = unk_0x9A331BBF019DCAD2(joaat("prop_ld_test_01"), -1087,825f, -1655,361f, 7,1638f, 1, true, 0);
								unk_0xB3A8974D2C811672(iLocal_207, false, 0);
								unk_0xEDC33A771FAEB393(iLocal_207, true);
								unk_0xD38F266C132F2897(iLocal_207, 1, 1, 1, 1, 1, 0, 0, 0);
								unk_0x1A0806871323CD16(iLocal_207, true);
								unk_0x35829E9BFCED1A3F(iLocal_207, 1);
								unk_0xB18E1DBC397238E1(iLocal_207, false, 0);
								unk_0x821F888271EDBEF0(iLocal_207, 1);
								unk_0xE0F761CE722765C1(iLocal_207, 1, 30f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_297(110))
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_207))
									{
										unk_0x452336926718D62A(&iLocal_207);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 83:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								iLocal_208 = unk_0x9A331BBF019DCAD2(joaat("prop_ld_test_01"), -1097,36f, -1636,76f, 3,4f, 1, true, 0);
								unk_0xB3A8974D2C811672(iLocal_208, false, 0);
								unk_0xEDC33A771FAEB393(iLocal_208, true);
								unk_0xD38F266C132F2897(iLocal_208, 1, 1, 1, 1, 1, 0, 0, 0);
								unk_0x1A0806871323CD16(iLocal_208, true);
								unk_0x35829E9BFCED1A3F(iLocal_208, 1);
								unk_0xB18E1DBC397238E1(iLocal_208, false, 0);
								unk_0x821F888271EDBEF0(iLocal_208, 1);
								unk_0xE0F761CE722765C1(iLocal_208, 1, 30f);
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_297(121) || bLocal_91)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_208))
									{
										unk_0x452336926718D62A(&iLocal_208);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 92:
						if (func_135(unk_0xFC1458A37D98B502(), -1106,28f, -1624,36f, 3,4f, 1) > 70f)
						{
							iVar34 = 0;
							while (iVar34 < Local_94)
							{
								if ((iVar34 != 2 && iVar34 != 0) && iVar34 != 8)
								{
									if (unk_0x6ADD12BF4D6D2587(Local_94[iVar34 /*14*/]))
									{
										if (unk_0xCB234F3DD6FF9368(Local_94[iVar34 /*14*/], 0))
										{
											unk_0x486F346ADFE56674(&(Local_94[iVar34 /*14*/]));
										}
									}
								}
								iVar34++;
							}
							iVar34 = 0;
							while (iVar34 < Local_95)
							{
								if (iVar34 != 0 && iVar34 != 4)
								{
									if (unk_0x6ADD12BF4D6D2587(Local_95[iVar34 /*2*/]))
									{
										if (unk_0x9761C10D57B68069(Local_95[iVar34 /*2*/]))
										{
											if (unk_0xCB234F3DD6FF9368(Local_95[iVar34 /*2*/], 0))
											{
												unk_0x5380482A432E314E(&(Local_95[iVar34 /*2*/]));
											}
										}
									}
								}
								iVar34++;
							}
							unk_0x14776E43F90DD454(-1426008804);
							unk_0x14776E43F90DD454(joaat("g_m_y_mexgoon_01"));
							unk_0x14776E43F90DD454(joaat("g_m_y_mexgoon_03"));
							unk_0x14776E43F90DD454(joaat("bison"));
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 93:
						if (!unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
						{
							Local_95[7 /*2*/] = unk_0xEA60F3B426BB095B(joaat("bison"), -1149,332f, -1593,024f, 3,2546f, 307,5245f, 1, 1, 0);
							unk_0x5380482A432E314E(&(Local_95[7 /*2*/]));
						}
						else if (func_135(Local_95[0 /*2*/], -1139,456f, -1579,801f, 3,365427f, 1) > 32,8f)
						{
							if (!unk_0xCB234F3DD6FF9368(Local_95[0 /*2*/], 1))
							{
								unk_0xDD29FF4BAB8AFF9C(Local_95[0 /*2*/], true, 0);
								unk_0xC91FE17AD7353B70(&(Local_95[0 /*2*/]));
							}
							Local_95[7 /*2*/] = unk_0xEA60F3B426BB095B(joaat("bison"), -1149,332f, -1593,024f, 3,2546f, 307,5245f, 1, 1, 0);
						}
						unk_0xC234848D21B6064E(2);
						unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), 0);
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0x28B42081D6BEFFF2(Local_94[2 /*14*/], 0);
						}
						unk_0xC1CEF375B44856F4(1);
						if (!unk_0x6ADD12BF4D6D2587(Local_95[4 /*2*/]))
						{
							while (!func_382(&(Local_95[4 /*2*/]), 1, -1134,078f, -1582,068f, 3,2928f, 300f, 1, 2))
							{
								func_19(2, 0);
							}
						}
						if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
						{
							unk_0xCFF0CD14B439821D(Local_95[4 /*2*/], 1, 1);
						}
						unk_0xA846A937885EB977(-966,1594f, -1187,304f, -0,770555f, -1094,655f, -964,7231f, 15,13055f, 10,3125f, 0, 0, 1);
						if (unk_0xA6DECE14FC9A8C51(Local_94[2 /*14*/].f_1))
						{
							unk_0xE30CF11C0EE14316(&(Local_94[2 /*14*/].f_1));
						}
						if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
						{
							Local_95[4 /*2*/].f_1 = func_381(Local_95[4 /*2*/], 0, 0);
						}
						if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
						{
							unk_0xE859EF37EA7362D3("ARM_2_GET_TO_THE_CAR");
							unk_0x6CF99BCE94E6F07C(Local_95[4 /*2*/], "ARM_2_BAGGER_GROUP", 0);
						}
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 1);
						}
						if (unk_0x771D0F8F56A5FE6C("ARM_2_GAS_TRAIL"))
						{
							unk_0xE02E32C69260FBB7("ARM_2_GAS_TRAIL");
							unk_0xF0037A481D043FE1(Local_95[6 /*2*/], 0);
						}
						func_585(8);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 94:
						break;
					
					case 95:
						unk_0x590D9654A4367AA1(-1549f, -1712f, -950f, -100f);
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (unk_0x9C0571C926F68BED(-1549f, -1712f, -950f, -100f))
								{
									func_134();
									unk_0xD40A6DFCC31D221A(0, 1);
									unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1082,167f, -1544,527f, 3,5825f, 25f, 1, 0, 571211828, 10f, 5f);
									unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1068,112f, -1535,106f, 3,8693f, 25f, 1, 0, 571211828, 10f, 5f);
									unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1106,441f, -943,8071f, 1,5151f, 25f, 1, 0, 571211828, 10f, 5f);
									unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1188,955f, -728,5704f, 19,7766f, 25f, 1, 0, 571211828, 10f, 5f);
									unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1322,462f, -579,8076f, 28,4281f, 25f, 1, 0, 571211828, 10f, 5f);
									unk_0x96247F0EC873C446(0, Local_95[4 /*2*/], 25f, 537657381);
									func_133(Local_94[8 /*14*/], 0);
									if (!unk_0x191BE1BC8F26F3C1(Local_95[4 /*2*/], 0))
									{
										unk_0x4D7D93C6E0C1063B(Local_95[4 /*2*/], false);
										unk_0xFB2E9855F95E3BD3(Local_95[4 /*2*/], 5f);
									}
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
									{
										unk_0xE01CE1EBCD7EE551(Local_94[8 /*14*/], 100, 0);
										unk_0x5C5D33A1B2711D21(Local_94[8 /*14*/], true);
										unk_0xD38F266C132F2897(Local_94[8 /*14*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									unk_0x1267474D9A69CA37(4f, 5f, 4);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 96:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!unk_0x4759A34EB65CCA39(Local_94[2 /*14*/], unk_0x92736F90715344D4(unk_0xFC1458A37D98B502())))
							{
								if (func_267(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 1) < 30f)
								{
									unk_0x57FB41CABA25835C(Local_94[2 /*14*/], unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()));
									unk_0xB2442651179CF706(unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()), 45f);
									unk_0xABC8CA8BED762037(Local_94[2 /*14*/], unk_0x92736F90715344D4(unk_0xFC1458A37D98B502()), 1);
									unk_0xF6A83791895D5AA1(Local_94[2 /*14*/], 0);
									unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 268, true);
								}
							}
						}
						break;
					
					case 97:
						if (unk_0x9C0571C926F68BED(-1549f, -1712f, -950f, -100f))
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
							{
								if (unk_0x78F50AA8F955BEFC(Local_94[8 /*14*/], 242628503) == 1)
								{
									func_134();
									if (unk_0x2332DC2174507412(Local_94[8 /*14*/]) <= 0)
									{
										unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1061,849f, -1530,716f, 4,0065f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (unk_0x2332DC2174507412(Local_94[8 /*14*/]) <= 1)
									{
										unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1068,112f, -1535,106f, 3,8693f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (unk_0x2332DC2174507412(Local_94[8 /*14*/]) <= 2)
									{
										unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1106,441f, -943,8071f, 1,5151f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (unk_0x2332DC2174507412(Local_94[8 /*14*/]) <= 3)
									{
										unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1188,955f, -728,5704f, 19,7766f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									if (unk_0x2332DC2174507412(Local_94[8 /*14*/]) <= 4)
									{
										unk_0x87A3E70B0AB01608(0, Local_95[4 /*2*/], -1322,462f, -579,8076f, 28,4281f, 30f, 1, 0, 571211828, 5f, 5f);
									}
									unk_0xD2C269DBF147B406(0, unk_0xC6757F745366DB47(Local_94[8 /*14*/]), unk_0xFC1458A37D98B502(), 8, 25f, 537657380, 10f, 15f, 1);
									func_133(Local_94[8 /*14*/], 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else
								{
									unk_0xD2C269DBF147B406(Local_94[8 /*14*/], unk_0xC6757F745366DB47(Local_94[8 /*14*/]), unk_0xFC1458A37D98B502(), 8, 25f, 571211828, 10f, 15f, 1);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 98:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
						{
							if (unk_0x27C8A4034A05DC21(Local_94[8 /*14*/]))
							{
								unk_0xD68E88A8E0BE8697(Local_94[8 /*14*/], unk_0xFC1458A37D98B502(), 100f, 100000, 0, 0);
								unk_0x771A86309E0CA47B(Local_94[8 /*14*/], 0);
								unk_0xE9B3D12A64CC7C1A(Local_94[8 /*14*/], 1);
								unk_0x486F346ADFE56674(&(Local_94[8 /*14*/]));
								unk_0x5C5D33A1B2711D21(Local_94[8 /*14*/], true);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 99:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[8 /*14*/]))
						{
							unk_0xD68E88A8E0BE8697(Local_94[8 /*14*/], unk_0xFC1458A37D98B502(), 100f, 100000, 0, 0);
							unk_0x771A86309E0CA47B(Local_94[8 /*14*/], 0);
							unk_0xE9B3D12A64CC7C1A(Local_94[8 /*14*/], 1);
							unk_0x5C5D33A1B2711D21(Local_94[8 /*14*/], true);
							unk_0x486F346ADFE56674(&(Local_94[8 /*14*/]));
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 100:
						func_449("ARM2_CHASE_START", 0, "ARM2_CHASE_MID");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 101:
						func_449("ARM2_CHASE_MID", 1, "ARM2_STOP_TRACK");
						if (unk_0x771D0F8F56A5FE6C("ARM_2_GET_TO_THE_CAR"))
						{
							unk_0xE02E32C69260FBB7("ARM_2_GET_TO_THE_CAR");
						}
						unk_0xE859EF37EA7362D3("ARM_2_CHASE_THE_BIKE");
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 102:
						if (!iLocal_287)
						{
							func_449("ARM2_STOP_TRACK", 1, "");
							if (unk_0x771D0F8F56A5FE6C("ARM_2_CHASE_THE_BIKE"))
							{
								unk_0xE02E32C69260FBB7("ARM_2_CHASE_THE_BIKE");
							}
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 103:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 242628503) == 7)
							{
								func_134();
								unk_0x380C1E7B7740D618(0, -1130,321f, -1589,826f, 3,3891f, 2f, 20000, 0,25f, 0, 39f);
								unk_0xC03E5BD866BFEC82(0, 1);
								func_133(Local_94[2 /*14*/], 0);
							}
						}
						break;
					
					case 104:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (!unk_0xC816B63289F7A279(Local_94[2 /*14*/]))
							{
								if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
								{
									unk_0x6F8C8278B7C06889(Local_94[2 /*14*/], Local_95[0 /*2*/], -1, 0, 2f, 1, 0);
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 105:
						if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
							{
								unk_0x60C06BFD037BB7CF(Local_94[2 /*14*/], unk_0xFC1458A37D98B502(), 3000, 0, 2);
								Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 2500;
							}
						}
						break;
					
					case 106:
						vVar35 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						if (vVar35.x > -77f && vVar35.y > -1107,376f)
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									unk_0x6FF834D85E2DD4C6(joaat("prop_employee_month_02"));
									Local_69[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (unk_0x9A0B2ED5055D3F0B(joaat("prop_employee_month_02")))
									{
										iLocal_83 = unk_0xCBD07018689DF383(-29,13f, -1102,377f, 27,26f, 0,5f, joaat("prop_employee_month_01"), 1, 0, 1);
										if (unk_0x6ADD12BF4D6D2587(iLocal_83))
										{
											if (unk_0xDE3C98B57A41E603(iLocal_83))
											{
												unk_0xB3A8974D2C811672(iLocal_83, false, 0);
												iLocal_84 = unk_0x9A331BBF019DCAD2(joaat("prop_employee_month_02"), unk_0xB3328BA8976B416C(iLocal_83, 1), 1, true, 0);
												unk_0x59AF3B40AE222194(iLocal_84, 0f, 0f, -20f, 2, 1);
												Local_69[iParam0 /*10*/].f_6++;
											}
										}
									}
									break;
							}
						}
						else
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 1:
									unk_0x14776E43F90DD454(joaat("prop_employee_month_02"));
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								
								case 2:
									if (unk_0x6ADD12BF4D6D2587(iLocal_84))
									{
										unk_0x452336926718D62A(&iLocal_84);
										unk_0x14776E43F90DD454(joaat("prop_employee_month_02"));
									}
									if (unk_0x6ADD12BF4D6D2587(iLocal_83))
									{
										unk_0xB3A8974D2C811672(iLocal_83, true, 0);
										unk_0x3A703774620FDB42(&iLocal_83);
									}
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					
					case 107:
						unk_0x94BD6F0436473406(1f);
						unk_0xC0EBC1452FCAB15C(6);
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 108:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (unk_0xC816B63289F7A279(Local_94[2 /*14*/]))
							{
								unk_0x88235B448509228B(Local_94[2 /*14*/]);
								unk_0x07224EEE13A1B6AE(Local_94[2 /*14*/], 1);
								unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 1);
								Local_69[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 109:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									if (unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0))
									{
										iVar36 = unk_0xC6757F745366DB47(Local_94[2 /*14*/]);
										if (unk_0xAAA8D20859E2D36D(Local_94[2 /*14*/], iVar36))
										{
											if (func_380(Local_94[2 /*14*/], iVar36) == 0)
											{
												if (unk_0x8EE3A848975DDF21(iVar36, -1, 0))
												{
													Local_69[iParam0 /*10*/].f_6++;
													Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 1000;
												}
											}
										}
									}
								}
								break;
							
							case 1:
								if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
								{
									iVar37 = unk_0xC6757F745366DB47(Local_94[2 /*14*/]);
									if (unk_0x8EE3A848975DDF21(iVar37, -1, 0) && !unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502()))
									{
										if ((!unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iVar37)) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar37))) && unk_0x82FF3DFBC3965CC0(iVar37) != joaat("bus"))
										{
											if (unk_0x3A4943DAC5579EF1(iVar37, 0))
											{
												unk_0x09DC36247844A9E1(Local_94[2 /*14*/], iVar37, 0);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												unk_0x6F8C8278B7C06889(Local_94[2 /*14*/], iVar37, 20000, -1, 2f, 1, 0);
												Local_69[iParam0 /*10*/].f_3 = 1;
											}
										}
										else if (!unk_0x0ACC2116170FA204(iVar37))
										{
											unk_0x16416C5B54FDBCBB(Local_94[2 /*14*/], 0, 0);
											Local_69[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
						}
						break;
					
					case 110:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (func_297(144))
									{
										if (unk_0x1ED974E122CB5C47(Local_94[2 /*14*/]))
										{
											iVar38 = unk_0xDFD115BB10FE46A9(Local_94[2 /*14*/], 0);
											Local_95[8 /*2*/] = iVar38;
											if (unk_0xB8DE76287EDC4957(iVar38, 0))
											{
												if (func_380(Local_94[2 /*14*/], iVar38) == -1)
												{
													unk_0x96247F0EC873C446(Local_94[2 /*14*/], iVar38, 10f, 786619);
													Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 5000;
													Local_69[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
									break;
								
								case 1:
									if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_7)
									{
										if (unk_0x1ED974E122CB5C47(Local_94[2 /*14*/]))
										{
											iVar39 = unk_0xDFD115BB10FE46A9(Local_94[2 /*14*/], 0);
											if (unk_0xB8DE76287EDC4957(iVar39, 0))
											{
												if (func_380(Local_94[2 /*14*/], iVar39) == -1)
												{
													if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
													{
														func_134();
														unk_0x94B94B1663C8D232(0, iVar39, -230,4853f, -888,2496f, 28,985f, 20f, 786484, 5f);
														unk_0x94B94B1663C8D232(0, iVar39, -472,5658f, -1092,59f, 25,8562f, 20f, 786484, 5f);
														func_133(Local_94[2 /*14*/], 1);
														Local_69[iParam0 /*10*/].f_6 = 3;
													}
													else
													{
														func_134();
														unk_0x94B94B1663C8D232(0, iVar39, -230,4853f, -888,2496f, 28,985f, 12f, 786603, 5f);
														unk_0x94B94B1663C8D232(0, iVar39, -472,5658f, -1092,59f, 25,8562f, 12f, 786603, 5f);
														func_133(Local_94[2 /*14*/], 1);
														Local_69[iParam0 /*10*/].f_6++;
													}
												}
											}
										}
									}
									break;
								
								case 2:
									if (unk_0x1ED974E122CB5C47(Local_94[2 /*14*/]))
									{
										iVar40 = unk_0xDFD115BB10FE46A9(Local_94[2 /*14*/], 0);
										if (unk_0xB8DE76287EDC4957(iVar40, 0))
										{
											if (func_380(Local_94[2 /*14*/], iVar40) == -1)
											{
												if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
												{
													func_134();
													unk_0x94B94B1663C8D232(0, iVar40, -230,4853f, -888,2496f, 28,985f, 20f, 786468, 5f);
													unk_0x94B94B1663C8D232(0, iVar40, -472,5658f, -1092,59f, 25,8562f, 20f, 786468, 5f);
													func_133(Local_94[2 /*14*/], 1);
													Local_69[iParam0 /*10*/].f_6 = 3;
												}
											}
										}
									}
									break;
								}
						}
						break;
					
					case 113:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -828834893) == 7)
							{
								if (!unk_0x0ACC2116170FA204(Local_94[2 /*14*/]))
								{
									unk_0x16416C5B54FDBCBB(Local_94[2 /*14*/], 0, 0);
								}
							}
						}
						break;
					
					case 116:
						Local_69[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 114:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							iVar41 = func_376();
							if (unk_0xB8DE76287EDC4957(iVar41, 0))
							{
								func_138(152, 1);
								unk_0xCF5EB2CB1B30F02C(iVar41, 0);
								unk_0x6F8C8278B7C06889(Local_94[2 /*14*/], iVar41, -1, -1, 2f, 9, 0);
								func_136(2, 110, 0);
								Local_95[8 /*2*/] = iVar41;
							}
							else if ((unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 1435919172) != 1 && unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 1435919172) != 0) && unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 1435919172) != 2)
							{
								unk_0x93F12E7D8D931858(Local_94[2 /*14*/], 1193033728, 0);
								unk_0x691491EBC2D892F5(Local_94[2 /*14*/], 2f);
							}
						}
						break;
					
					case 115:
						if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
						{
							switch (Local_69[iParam0 /*10*/].f_6)
							{
								case 0:
									if (unk_0x7ED4D0E480A6EC43(Local_94[2 /*14*/], 0))
									{
										Local_69[iParam0 /*10*/].f_6++;
										Local_69[iParam0 /*10*/].f_7 = unk_0x53C562FD2B9E3AB0() + 5000;
									}
									if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -1794415470) == 1)
									{
										if (unk_0x53C562FD2B9E3AB0() > Local_69[iParam0 /*10*/].f_8)
										{
											Local_69[iParam0 /*10*/].f_8 = unk_0x53C562FD2B9E3AB0() + 5000;
											iVar42 = func_376();
											if (iVar42 != unk_0x0191A52225EFA665(Local_94[2 /*14*/]))
											{
												unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
											}
										}
									}
									break;
								
								case 1:
									unk_0xB8E08BD5B184DF4E(Local_94[2 /*14*/]);
									Local_69[iParam0 /*10*/].f_6 = 0;
									break;
								}
						}
						break;
					
					case 117:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_135(unk_0xFC1458A37D98B502(), -19,0794f, -1452,704f, 29,524f, 1) < (100f + 100f))
								{
									unk_0x6450931B826B49D9("MISSARMENIAN2LeadInOutMCS_6");
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_135(unk_0xFC1458A37D98B502(), -19,0794f, -1452,704f, 29,524f, 1) < 100f && !func_375())
								{
									unk_0x393584863A2F304E("Armenian_2_mcs_6", 8);
									func_585(10);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (unk_0x8AD07B6FC24F47C4())
								{
									func_175("Franklin", unk_0xFC1458A37D98B502(), 0, 2);
									unk_0xEDB61F1ADC509416("LAMAR", 0, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 1, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 2, 2, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 3, 2, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 4, 3, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 5, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 6, 1, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 7, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 8, 0, 0, 0);
									unk_0xEDB61F1ADC509416("LAMAR", 9, 0, 0, 0);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (Local_69[iParam0 /*10*/].f_8 == 0)
								{
									func_288(&Local_102, 1);
									func_286(1, unk_0xFC1458A37D98B502(), "Franklin");
									Local_69[iParam0 /*10*/].f_8 = 1;
								}
								else if (Local_69[iParam0 /*10*/].f_8 == 1)
								{
									if (func_374(&Local_102, "AR2AUD", "AR2_MCS6_LI", 7, 0, 0, 0, 0))
									{
										Local_69[iParam0 /*10*/].f_8 = 2;
									}
								}
								if (func_135(unk_0xFC1458A37D98B502(), -19,0794f, -1452,704f, 29,524f, 1) > (100f + 100f) || func_375())
								{
									unk_0xA6C03E3E2533F8F3();
									Local_69[iParam0 /*10*/].f_6 = 1;
								}
								break;
						}
						break;
					
					case 118:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (iLocal_265 < 0)
								{
									iLocal_265 = unk_0x53C562FD2B9E3AB0();
								}
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
								{
									if (!unk_0x841ED61760A7D07B(Local_94[2 /*14*/]) && ((unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0) || unk_0x53C562FD2B9E3AB0() >= iLocal_265 + 15000) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -4,03f, -1401,22f, 28,28f, 200f, 200f, 200f, 0, 0, 0)))
									{
										unk_0x9B8406983378711E(-17,2737f, -1401,285f, 28,3354f, 5f, 0, 0, 0, 0, false, 0);
										if (unk_0xB8DE76287EDC4957(Local_95[0 /*2*/], 0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_95[0 /*2*/], 0))
											{
												if (func_46(Local_95[0 /*2*/], 145, 0) && unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/]) == func_47(1, 1))
												{
													unk_0xBD8D47FDC6902B2D(Local_95[0 /*2*/], -17,347f, -1401,371f, 28,3343f, 1, 0, 0, 1);
													unk_0x48ED7B2293A96722(Local_95[0 /*2*/], 270f);
													func_347(Local_95[0 /*2*/], -17,347f, -1401,371f, 28,3343f, 270f, 24, 0);
													unk_0xCFF0CD14B439821D(Local_95[0 /*2*/], 1, 1);
													unk_0xFBA991D3A851E195(Local_95[0 /*2*/], 1);
													unk_0xCF5EB2CB1B30F02C(Local_95[0 /*2*/], 1);
												}
												else if (unk_0x88DDBE9908752BF0(Local_94[2 /*14*/], 0))
												{
													iVar43 = unk_0xDFD115BB10FE46A9(Local_94[2 /*14*/], 0);
													if (iVar43 == Local_95[0 /*2*/])
													{
														if (!unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])))
														{
															unk_0xDD29FF4BAB8AFF9C(Local_95[0 /*2*/], true, 0);
															unk_0xBD8D47FDC6902B2D(Local_95[0 /*2*/], -17,347f, -1401,371f, 28,3343f, 1, 0, 0, 1);
															unk_0x48ED7B2293A96722(Local_95[0 /*2*/], 270f);
															unk_0xCFF0CD14B439821D(Local_95[0 /*2*/], 1, 1);
															unk_0xFBA991D3A851E195(Local_95[0 /*2*/], 1);
														}
														unk_0xCF5EB2CB1B30F02C(Local_95[0 /*2*/], 1);
														func_347(Local_95[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
													}
													else
													{
														if (!unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(Local_95[0 /*2*/])))
														{
															unk_0xDD29FF4BAB8AFF9C(Local_95[0 /*2*/], true, 0);
														}
														func_347(Local_95[0 /*2*/], 0f, 0f, 0f, 0f, 24, 0);
														if (unk_0xB8DE76287EDC4957(iVar43, 0))
														{
															unk_0xDD29FF4BAB8AFF9C(iVar43, true, 1);
															unk_0xBD8D47FDC6902B2D(iVar43, -17,347f, -1401,371f, 28,3343f, 1, 0, 0, 1);
															unk_0x48ED7B2293A96722(iVar43, 270f);
															unk_0xCFF0CD14B439821D(iVar43, 1, 1);
															unk_0xFBA991D3A851E195(iVar43, 1);
															unk_0xCF5EB2CB1B30F02C(iVar43, 1);
														}
													}
												}
											}
										}
										unk_0xBD8D47FDC6902B2D(Local_94[2 /*14*/], -4,03f, -1401,22f, 28,28f, 1, 0, 0, 1);
										unk_0x48ED7B2293A96722(Local_94[2 /*14*/], 77,9221f);
										func_346(0);
										unk_0x957CEE967C939968(Local_94[2 /*14*/]);
										func_452(1, 109, 1, 0);
										func_452(2, 110, 1, 0);
										func_452(3, 112, 1, 0);
										func_452(4, 113, 1, 0);
										func_452(5, 114, 1, 0);
										unk_0x771A86309E0CA47B(Local_94[2 /*14*/], 1);
										func_138(140, 1);
										unk_0xCB389937EDB1519A(Vector(28,5742f, -1391,944f, 25,3192f) - Vector(20f, 40f, 40f), Vector(28,5742f, -1391,944f, 25,3192f) + Vector(20f, 40f, 40f), 0, 1, 1, 1);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								func_125(-9,370698f, -1402,745f, 26,9317f, -9,507262f, -1386,303f, 32,58361f, 9,9375f, -17,384f, -1406,261f, 28,3184f, 0f, 6f, 20f, 10f, 1, 1, 1, 0, 0);
								unk_0x6FF834D85E2DD4C6(joaat("prop_npc_phone"));
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (unk_0x9A0B2ED5055D3F0B(joaat("prop_npc_phone")))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
									{
										iLocal_211 = unk_0x5E35CF35E65D69B9(joaat("prop_npc_phone"), -4,7755f, -1402,027f, 28,2746f, 1, true, 0);
										unk_0xA9D382E7BA095148(iLocal_211, Local_94[2 /*14*/], unk_0xDD09837E5235FE91(Local_94[2 /*14*/], 60309), vLocal_93, vLocal_93, 0, 0, 0, 0, 2, 1);
										unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 262145, 0, 0, 0, 0);
									}
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], -2017877118) == 7 && unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 242628503) == 7)
								{
									if (func_135(Local_94[2 /*14*/], -4,03f, -1401,22f, 28,28f, 0) <= 0,5f)
									{
										unk_0x12C9D41D52A560D6(Local_94[2 /*14*/], "missarmenian2", "lamar_texting", 8f, -8f, -1, 1, 0, 0, 0, 0);
									}
								}
								if (func_135(Local_94[2 /*14*/], -4,03f, -1401,22f, 28,28f, 0) > 0,5f)
								{
									if (unk_0x78F50AA8F955BEFC(Local_94[2 /*14*/], 242628503) == 7)
									{
										func_134();
										unk_0x380C1E7B7740D618(0, -4,03f, -1401,22f, 28,28f, 1f, 20000, 0,25f, 0, 1193033728);
										unk_0x2DAC3448B66448E8(0, 77,9221f, 0);
										func_133(Local_94[2 /*14*/], 0);
									}
								}
								break;
						}
						break;
					
					case 119:
						if (unk_0xB8DE76287EDC4957(Local_95[4 /*2*/], 0))
						{
							Local_69[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 120:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]) && unk_0x8E8C94609BA4BEA9(2) != 4)
								{
									unk_0x7777A5D8CAFB91D7(unk_0xB3328BA8976B416C(Local_94[2 /*14*/], 1), -1, 5000, 2000, 0);
									unk_0x2D60D2C4CFEB6FAC(0,51f);
									unk_0x8387657DD38B1FCC(0,4f);
									unk_0xB8232F875A8A2A7C(-0,925f);
									unk_0x20BC9BA90DF0B63D(30f);
									Local_69[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (unk_0x38DF88792E2574E5())
								{
									if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0x2C5E25A27FEE0F8A(0);
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 121:
						switch (Local_69[iParam0 /*10*/].f_6)
						{
							case 0:
								unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 256);
								if (func_344(Local_95[4 /*2*/], 4f, 2, 1056964608, 0, 1, 0))
								{
									if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else if (unk_0x3A801AA34DD821BE("MISSARMENIAN2LeadInOutMCS_6"))
									{
										func_134();
										unk_0x60C06BFD037BB7CF(0, Local_94[2 /*14*/], 12000, 0, 2);
										unk_0x12C9D41D52A560D6(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0, 0, 0, 0);
										func_133(unk_0xFC1458A37D98B502(), 0);
										Local_69[iParam0 /*10*/].f_6 = 2;
									}
									else
									{
										unk_0x6450931B826B49D9("MISSARMENIAN2LeadInOutMCS_6");
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 1:
								if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								else if (unk_0x3A801AA34DD821BE("MISSARMENIAN2LeadInOutMCS_6"))
								{
									if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
									else
									{
										func_134();
										unk_0x60C06BFD037BB7CF(0, Local_94[2 /*14*/], 12000, 0, 2);
										unk_0x12C9D41D52A560D6(0, "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 8f, -8f, -1, 2, 0, 0, 0, 0);
										func_133(unk_0xFC1458A37D98B502(), 0);
										Local_69[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								func_343();
								Local_69[iParam0 /*10*/].f_6++;
								break;
							
							case 3:
								if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra", 3))
								{
									if (unk_0x7A70772AE40E3821(unk_0xFC1458A37D98B502(), "MISSARMENIAN2LeadInOutMCS_6", "_leadin_fra") == 1f)
									{
										Local_69[iParam0 /*10*/].f_3 = 1;
									}
								}
								else
								{
									Local_69[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
				}
				if (Local_69[iParam0 /*10*/].f_6 == 99)
				{
					Local_69[iParam0 /*10*/].f_3 = 1;
					Local_69[iParam0 /*10*/].f_6 = 0;
					Local_69[iParam0 /*10*/].f_1 = 0;
				}
			}
		}
	}
}

void func_343()//Position - 0x3DF12
{
	unk_0x278F19E969607FAC();
	Global_16748 = 0;
}

int func_344(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x3DF22
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
	func_345(iParam0);
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

void func_345(int iParam0)//Position - 0x3E0B1
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

void func_346(bool bParam0)//Position - 0x3E0DD
{
	if (!unk_0xA7E3B4C3A60721A5(Local_94[2 /*14*/], 1))
	{
		unk_0x5C5D33A1B2711D21(Local_94[2 /*14*/], false);
		unk_0xCE93FCB8A8D8DF0B(Local_94[2 /*14*/], unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502()));
		unk_0xAE6EBBBBD8B9FB30(Local_94[2 /*14*/], 8, 0);
		unk_0xAE6EBBBBD8B9FB30(Local_94[2 /*14*/], 29, 1);
		unk_0x45BD02A17452ECE4(Local_94[2 /*14*/], 12, 3f);
		unk_0xD1D0B4122585CC63(Local_94[2 /*14*/], 2);
		unk_0x41613433DA018B46(Local_94[2 /*14*/], 50f);
		unk_0x253DB96AF5D6551B(Local_94[2 /*14*/], 50f);
		unk_0xC7478C0CABC29C5E(Local_94[2 /*14*/], 500);
		unk_0xE01CE1EBCD7EE551(Local_94[2 /*14*/], 500, 0);
		unk_0xD1980BC8CFFBF0B9(Local_94[2 /*14*/], 0);
		unk_0x66698545014E2F21(Local_94[2 /*14*/], 17);
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 188, true);
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 182, true);
		unk_0x2217C45231E6A537(Local_94[2 /*14*/], 64, 1);
		func_312(Local_94[2 /*14*/], 1);
		if (iLocal_92 <= 9)
		{
			func_159(5, 10, 0);
		}
		unk_0xBB3CC641B6AED5E5(Local_94[2 /*14*/], 15);
		if (bParam0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
			{
				while (!unk_0xF0D051E82D0DB8C2(Local_94[2 /*14*/]))
				{
					func_19(1, 0);
					if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
					{
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(Local_94[2 /*14*/]))
				{
					unk_0xE537629E02E8DA21(Local_94[2 /*14*/]);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 0, 0, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 1, 1, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 2, 2, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 3, 2, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 4, 3, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 5, 0, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 6, 1, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 7, 0, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 8, 0, 0, 0);
					unk_0x03924C68EFCBC511(Local_94[2 /*14*/], 9, 0, 0, 0);
				}
			}
		}
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 118, false);
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 32, false);
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 185, true);
		unk_0x3811A0FC01E02FC1(Local_94[2 /*14*/], 1);
		unk_0xAE01EF4BC84AFE7C(Local_94[2 /*14*/], 118, false);
		unk_0xAE6EBBBBD8B9FB30(Local_94[2 /*14*/], 26, 1);
		unk_0xF6A83791895D5AA1(Local_94[2 /*14*/], 0);
		unk_0xD38F266C132F2897(Local_94[2 /*14*/], 0, 1, 0, 0, 0, 0, 0, 0);
		unk_0xDD88BF2396D7A4E8(Local_94[2 /*14*/]);
		unk_0x5C5D33A1B2711D21(Local_94[2 /*14*/], false);
	}
}

void func_347(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x3E33E
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_373(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_49(iParam0, &Var0);
		if (func_76(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			fParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_367(iParam3, &Var0, vParam1, fParam2, func_45(iParam0));
		func_348(iParam3, iParam0, 0);
	}
}

void func_348(int iParam0, int iParam1, int iParam2)//Position - 0x3E467
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_366(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_99();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_365(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_349(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_349(int iParam0, int iParam1)//Position - 0x3E584
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_350(iParam0))
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
	func_49(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_350(int iParam0)//Position - 0x3E786
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_55(iParam0, 0, 0)) || func_55(iParam0, 1, 0)) || func_55(iParam0, 2, 0)) || func_45(iParam0) != 145) || func_364(iParam0)) || func_363(iParam0)) || func_362(iParam0)) || func_361(iParam0)) || !func_351(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_363(iParam0))
		{
		}
		if (func_363(iParam0))
		{
		}
		if (func_55(iParam0, 0, 0))
		{
		}
		if (func_55(iParam0, 1, 0))
		{
		}
		if (func_55(iParam0, 2, 0))
		{
		}
		if (func_45(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_351(int iParam0)//Position - 0x3E863
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_352(iParam0, 0))
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

int func_352(int iParam0, bool bParam1)//Position - 0x3EA14
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
		if (!func_360())
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
		if ((((!func_359() && !func_358()) && !func_357()) && !func_356()) && !func_360())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_357())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_355(iParam0))
		{
			return 0;
		}
	}
	if (!func_353(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0)//Position - 0x3EBA2
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_354())
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

int func_354()//Position - 0x3EC76
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x3EC8D
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
}