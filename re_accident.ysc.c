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
	bool bLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	int iLocal_59 = 0;
	struct<5> Local_60[31];
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<5> Local_68[14];
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
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
	int iLocal_88[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 16;
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
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	vector3 vLocal_273 = { 0f, 0f, 0f };
	vector3 vLocal_274 = { 0f, 0f, 0f };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<33> Local_283 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 1;
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
	iLocal_49 = -1;
	iLocal_52 = -1;
	fLocal_55 = 0,5f;
	fLocal_56 = 0f;
	iLocal_62 = 1;
	fLocal_69 = 160f;
	iLocal_73 = 55000;
	vLocal_76 = { 30f, 30f, 5f };
	iLocal_102 = -1;
	vLocal_273 = { -458,4085f, -984,6459f, 22,5892f };
	vLocal_274 = { -458,1934f, -995,4897f, 22,7427f };
	vLocal_74 = { ScriptParam_285.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_174();
	}
	if (unk_0x674C9438180770FE() > 18 || unk_0x674C9438180770FE() < 5)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_132(vLocal_74, -1, 0, 0, 0))
	{
		func_129(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x42F1FE4C7EC5F51E())
		{
			if (!func_128())
			{
				if (func_127())
				{
					func_174();
				}
			}
			unk_0x48D75120C879E65E("RE_CA", 0);
			switch (iLocal_70)
			{
				case 0:
					if (func_115())
					{
						func_174();
					}
					func_109();
					func_106(&Local_283);
					break;
				
				case 1:
					func_22();
					func_106(&Local_283);
					func_13();
					break;
				
				case 2:
					if (((unk_0x6ADD12BF4D6D2587(iLocal_78) && unk_0xA7E3B4C3A60721A5(iLocal_78, 1)) && iLocal_98 < 5) && !bLocal_95)
					{
						func_12();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_174();
		}
	}
}

void func_1()//Position - 0x1CF
{
	if (iLocal_280 && !iLocal_281)
	{
		unk_0x8810DC630928B398("RE14A_FAIL");
		iLocal_97 = 0;
		while (iLocal_97 < 11)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_88[iLocal_97]))
			{
				unk_0xEDC33A771FAEB393(iLocal_88[iLocal_97], false);
			}
			iLocal_97++;
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
		{
			unk_0xB38E13EF2EC6F0E9(iLocal_80, 0f);
			unk_0xEDC33A771FAEB393(iLocal_80, false);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_89))
		{
			unk_0xEDC33A771FAEB393(iLocal_89, false);
		}
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		unk_0x9B47B379EE749C38(true);
		unk_0x4255E93FCCDE108E(true);
		func_2(0, 1, 1, 0);
		iLocal_92 = 1;
		unk_0x41390D2B41D5502D(1f);
		unk_0xFCCDDE0E48CF9588("re@construction");
		if (unk_0x8EA3C8E091EA5BA4(iLocal_275))
		{
			unk_0x02934BABFD4CD384(iLocal_275, 0);
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_84))
		{
			unk_0xE30CF11C0EE14316(&iLocal_84);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_85))
		{
			unk_0xE30CF11C0EE14316(&iLocal_85);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_86))
		{
			unk_0xE30CF11C0EE14316(&iLocal_86);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_87))
		{
			unk_0xE30CF11C0EE14316(&iLocal_87);
		}
		iLocal_281 = 1;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_88[0]) || unk_0x6ADD12BF4D6D2587(iLocal_88[1]))
	{
		if (!unk_0x9E06F0EE20F58CED(vLocal_75 + Vector(20f, 0f, 0f), 30f) && !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_75, 80f, 80f, 80f, false, true, 0))
		{
			func_174();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x36F
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_11(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_10())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_9(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_11(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_9(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_4(unk_0x9EB17624F44A8DA4(), 0)) && !func_3())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_7(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_3()//Position - 0x488
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_4(int iParam0, int iParam1)//Position - 0x4A5
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_5(-1, 0) == 8;
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

int func_5(int iParam0, bool bParam1)//Position - 0x4F0
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

int func_6()//Position - 0x531
{
	return Global_1312736;
}

int func_7(int iParam0)//Position - 0x53D
{
	if (func_4(iParam0, 0))
	{
		return 1;
	}
	if (func_8())
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

bool func_8()//Position - 0x57F
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_9(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x590
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

int func_10()//Position - 0x5C3
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)//Position - 0x5EA
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

void func_12()//Position - 0x60D
{
	if (iLocal_102 == -1)
	{
		iLocal_102 = unk_0x53C562FD2B9E3AB0() + 5000;
	}
	if (unk_0x53C562FD2B9E3AB0() > iLocal_102)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_80))
		{
			unk_0xEDC33A771FAEB393(iLocal_80, false);
			unk_0xB8D9F55BA414128D(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
			{
				unk_0xD1DE05EA2C437098(iLocal_80, 1, 0);
			}
		}
	}
}

void func_13()//Position - 0x66F
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_21();
		func_20();
		func_17();
		func_14();
	}
}

void func_14()//Position - 0x693
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_61 == 0)
	{
		if (unk_0x460D11CD8248B67D(&vVar1, Local_68[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_68)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0xBE3C4023003180FC(Local_68[(iVar0 - 1) /*5*/], Local_68[iVar0 /*5*/], true));
				}
				if (Local_68[iVar0 /*5*/].f_4)
				{
					if (unk_0x460D11CD8248B67D(&vVar1, Local_68[iVar0 /*5*/]))
					{
						fVar4 = unk_0xBE3C4023003180FC(Local_68[iVar0 /*5*/], vVar1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_55)
			{
				iVar3 = iVar3;
				iLocal_61 = 1;
				iLocal_63 = unk_0x53C562FD2B9E3AB0();
				fVar6 = fVar6;
				vLocal_58 = { Local_68[iVar3 /*5*/] };
				iLocal_59 = iVar3;
				iLocal_64 = iVar3 * 2;
				iLocal_66 = iLocal_64;
				iLocal_67 = iLocal_64;
				if (iLocal_67 < 0)
				{
					iLocal_67 = 0;
				}
				if (iLocal_66 >= Local_68 * 2)
				{
					iLocal_66 = (Local_68 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_61 == 1)
	{
		unk_0x7FA1A84E8D843CD7();
		fVar7 = (system::to_float((unk_0x53C562FD2B9E3AB0() - iLocal_63)) / fLocal_69);
		iVar8 = (system::floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_64 + iVar8);
		iVar10 = (iLocal_64 - iVar8);
		if (iVar9 >= 28)
		{
			iVar9 = 27;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_66)
		{
			iVar0 = iLocal_66 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_66 = iVar9;
		}
		if (iVar10 < iLocal_67)
		{
			iVar0 = (iLocal_67 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_68)
				{
					if (Local_68[iVar11 /*5*/].f_4)
					{
						func_15(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_67 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_60)
		{
			if ((unk_0x53C562FD2B9E3AB0() - Local_60[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xDC4784695BCD5F0A(Local_60[iVar0 /*5*/].f_1, 0,4f, 1f);
			}
			if ((unk_0x53C562FD2B9E3AB0() - Local_60[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x3DCFE29D7523C919(Local_60[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_15(int iParam0, int iParam1)//Position - 0x8CB
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_16(Local_68[(iParam0 / 2) /*5*/] + Local_68[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_16(Local_68[(iParam0 / 2) /*5*/] + Vector(fLocal_56, fLocal_56, fLocal_56), iParam1);
		}
	}
}

void func_16(vector3 vParam0, int iParam1)//Position - 0x934
{
	if (iLocal_62 == 0)
	{
		iParam1 = 0;
	}
	unk_0x3DCFE29D7523C919(Local_60[iLocal_65 /*5*/]);
	if (Local_60[iLocal_65 /*5*/].f_4 != 0)
	{
		unk_0xDC4784695BCD5F0A(Local_60[iLocal_65 /*5*/].f_1, 0,4f, 1f);
	}
	Local_60[iLocal_65 /*5*/].f_4 = unk_0x53C562FD2B9E3AB0();
	Local_60[iLocal_65 /*5*/].f_1 = { vParam0 };
	Local_60[iLocal_65 /*5*/] = unk_0x2893DA23B6233C20(vParam0, iLocal_53, iParam1);
	iLocal_65++;
	if (iLocal_65 >= 31)
	{
		iLocal_65 = 0;
	}
}

void func_17()//Position - 0x9AB
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_48)
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0xF2B58F79D29425B4(0, 24) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				if (iLocal_54 == 0)
				{
					unk_0x1267474D9A69CA37(2f, 8f, 4);
					iLocal_54 = unk_0x53C562FD2B9E3AB0() + 250;
				}
				if (unk_0x53C562FD2B9E3AB0() > iLocal_54)
				{
					if (!bLocal_44)
					{
						fVar4 = 9999,9f;
						vLocal_57 = { func_19() };
						iVar0 = 0;
						while (iVar0 < Local_68)
						{
							if (unk_0xA6DECE14FC9A8C51(Local_68[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0xBE3C4023003180FC(vLocal_57, unk_0x67247AA13B7486A3(Local_68[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0xBE3C4023003180FC(Local_68[iVar0 /*5*/], unk_0x67247AA13B7486A3(Local_68[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_68[iVar0 /*5*/] = { vLocal_57 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_50 != -1)
							{
								if (unk_0xB89BB11E0945F6F0((iLocal_51 - iVar5)) > 1)
								{
									iLocal_51 = -1;
								}
								if (iLocal_51 == -1)
								{
									iLocal_51 = iLocal_50;
								}
								if (unk_0xB89BB11E0945F6F0((iLocal_51 - iVar5)) < 3 && unk_0xB89BB11E0945F6F0((iLocal_51 - iVar5)) > 0)
								{
									if (iLocal_51 < iVar5)
									{
										iVar6 = iLocal_51;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xA6DECE14FC9A8C51(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0x94540F498465F1A2(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF20857E4CB32A2B7(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_51)
										{
											if (unk_0xA6DECE14FC9A8C51(Local_68[iVar6 /*5*/].f_3))
											{
												if (unk_0x94540F498465F1A2(Local_68[iVar6 /*5*/].f_3) > 0)
												{
													unk_0xF20857E4CB32A2B7(Local_68[iVar6 /*5*/].f_3, 0);
													Local_68[iVar6 /*5*/].f_4 = 1;
													iLocal_52 = (iLocal_52 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_51 = iLocal_50;
								}
								if (iVar5 == 0)
								{
									if (unk_0xA6DECE14FC9A8C51(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0x94540F498465F1A2(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF20857E4CB32A2B7(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (unk_0xA6DECE14FC9A8C51(Local_68[iVar5 /*5*/].f_3))
									{
										if (unk_0x94540F498465F1A2(Local_68[iVar5 /*5*/].f_3) > 0)
										{
											unk_0xF20857E4CB32A2B7(Local_68[iVar5 /*5*/].f_3, 0);
											Local_68[iVar5 /*5*/].f_4 = 1;
											iLocal_52 = (iLocal_52 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_18(Local_68[iVar5 + 1 /*5*/]))
									{
										if (unk_0xA6DECE14FC9A8C51(Local_68[iVar5 /*5*/].f_3))
										{
											if (unk_0x94540F498465F1A2(Local_68[iVar5 /*5*/].f_3) > 0)
											{
												unk_0xF20857E4CB32A2B7(Local_68[iVar5 /*5*/].f_3, 0);
												Local_68[iVar5 /*5*/].f_4 = 1;
												iLocal_52 = (iLocal_52 - 1);
											}
										}
									}
								}
							}
							iLocal_50 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_50 = -1;
				iLocal_51 = -1;
				iLocal_54 = 0;
			}
		}
	}
}

int func_18(vector3 vParam0)//Position - 0xC80
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_19()//Position - 0xCAA
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0x5F9FFFEC91F9D9C7(unk_0xFC1458A37D98B502());
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		iVar1 = unk_0xD323488FDDE4A80F(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { unk_0xDCD8BDD2E10C660E(iVar0, iVar1) };
		vVar2 = { unk_0x9EA50C5EC175E58E(vVar2, unk_0xF0371FE6E2BF9599(iVar0), 0,35f, 0f, -0,15f) };
		unk_0x7367FB97975F1E29(vVar2, &uVar4, 0, 0);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_20()//Position - 0xD19
{
	int iVar0;
	
	if (iLocal_46)
	{
		if (iLocal_61)
		{
			iVar0 = 0;
			while (iVar0 < Local_60)
			{
				unk_0x3DCFE29D7523C919(Local_60[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_46 = 0;
		iLocal_61 = 1;
		iLocal_63 = unk_0x53C562FD2B9E3AB0();
		iVar0 = 0;
		while (iVar0 < Local_68)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_49 != -1)
		{
			iLocal_67 = iLocal_49;
			iLocal_66 = iLocal_49;
			iLocal_64 = iLocal_49;
		}
		else
		{
			iLocal_67 = -1;
			iLocal_66 = -1;
			iLocal_64 = iLocal_49;
		}
		iLocal_65 = 1;
	}
}

void func_21()//Position - 0xD92
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_22()//Position - 0xDA3
{
	switch (iLocal_71)
	{
		case 0:
			unk_0x1CF95440F1970B4F("CONSTRUCTION_ACCIDENT_1", false, -1);
			unk_0x6450931B826B49D9("re@construction");
			if (Local_283.f_32 <= 0)
			{
				Local_283.f_32 = unk_0x4B64A8D052027742();
			}
			func_105(&Local_283, joaat("s_m_m_dockwork_01"));
			func_105(&Local_283, -415509317);
			func_105(&Local_283, joaat("p_amb_phone_01"));
			func_102(&Local_283);
			if ((unk_0x1CF95440F1970B4F("CONSTRUCTION_ACCIDENT_1", false, -1) && unk_0x3A801AA34DD821BE("re@construction")) && func_98(&Local_283))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_80, 0))
				{
					iLocal_78 = unk_0x00D1A9572426E8DD(iLocal_80, 26, joaat("s_m_m_dockwork_01"), -1, 1, true);
					unk_0x03924C68EFCBC511(iLocal_78, 0, 1, 0, 0);
					unk_0x03924C68EFCBC511(iLocal_78, 3, 1, 1, 0);
					unk_0x03924C68EFCBC511(iLocal_78, 4, 0, 1, 0);
					unk_0x03924C68EFCBC511(iLocal_78, 8, 0, 0, 0);
					unk_0x12C9D41D52A560D6(iLocal_78, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0,4f, 0, 0, 0);
					iLocal_90 = unk_0x5E35CF35E65D69B9(joaat("p_amb_phone_01"), -455,6561f, -985,8071f, 22,4868f, true, true, false);
					unk_0x14776E43F90DD454(joaat("p_amb_phone_01"));
					unk_0xA9D382E7BA095148(iLocal_90, iLocal_78, unk_0xDD09837E5235FE91(iLocal_78, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xAE6EBBBBD8B9FB30(iLocal_78, 17, true);
					unk_0x1E24C412D1C63CCB(iLocal_78, 1);
					unk_0x771A86309E0CA47B(iLocal_78, true);
					unk_0x5C5D33A1B2711D21(iLocal_78, false);
					func_97(&uLocal_108, 3, iLocal_78, "RECONACWorker", 0, 1);
					unk_0x350CEE66BDF90273(iLocal_78, "S_M_Y_GENERICWORKER_01_WHITE_01");
					iLocal_79 = unk_0xAC992EFAD62C33BF(26, joaat("s_m_m_dockwork_01"), -462,2982f, -978,3272f, 65f, 221,4041f, 1, true);
					unk_0x771A86309E0CA47B(iLocal_79, true);
					unk_0xCFF0CD14B439821D(iLocal_79, true, 1);
					unk_0xEDC33A771FAEB393(iLocal_79, true);
					unk_0x12AB4F0F26F66D9B(iLocal_78, -1143637011);
					unk_0xBF78A349F82E06D5(-1143637011, 24);
					unk_0xBF78A349F82E06D5(-1143637011, 46);
					unk_0xBF78A349F82E06D5(-1143637011, 61);
					unk_0xBF78A349F82E06D5(-1143637011, 136);
					unk_0xBF78A349F82E06D5(-1143637011, 55);
					iLocal_89 = unk_0x5E35CF35E65D69B9(-415509317, vLocal_274.x, (vLocal_274.y + 0,5f), (vLocal_274.z - 0,25f), true, true, false);
					unk_0x48ED7B2293A96722(iLocal_89, 75f);
					unk_0xD38F266C132F2897(iLocal_89, false, true, true, false, false, false, 0, false);
					iLocal_279 = unk_0x1E3116EEB28D5F17("scr_sparking_generator", iLocal_89, 0f, 0f, 0,2f, 0f, 0f, 0f, 1f, 0, 0, 0);
					unk_0xEDC33A771FAEB393(iLocal_89, true);
					func_96(&uLocal_108, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
					iLocal_71 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_91)
			{
				func_91();
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!iLocal_92)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
					{
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -532,2208f, -849,2668f, 19,7038f, -531,6973f, -1065,341f, 60,7893f, 190,8125f, 0, true, 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
							{
								if (!unk_0xA6DECE14FC9A8C51(iLocal_85))
								{
									iLocal_85 = func_90(iLocal_80, 0, 0);
								}
							}
						}
						if (unk_0xEBE499597C718EB8(iLocal_78, unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_80, unk_0xFC1458A37D98B502(), 1))
						{
							unk_0xEDC33A771FAEB393(iLocal_80, false);
							unk_0xB8E08BD5B184DF4E(iLocal_78);
							unk_0x6931076730A4AC5D(&iLocal_107);
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_107);
							unk_0xAB30B1CF01A198C1(iLocal_78, iLocal_107);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_107);
							func_89();
						}
						unk_0x6FF834D85E2DD4C6(joaat("prop_ld_pipe_single_01"));
						if ((((unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -473,1686f, -984,6405f, 22,487f, 40f, 40f, 5f, false, true, 0) && !unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502())) && !unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) && func_88(1, 0, 1)) && unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_128())
							{
								if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
								{
									iLocal_83 = unk_0xC733212BF9066BDF();
								}
								func_78(1);
							}
							iLocal_91 = 1;
						}
					}
					else
					{
						func_89();
					}
				}
				else
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
					{
						if (unk_0x88DDBE9908752BF0(iLocal_78, 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0) && !unk_0xA6DECE14FC9A8C51(iLocal_85))
							{
								iLocal_85 = func_90(iLocal_80, 0, 0);
							}
						}
						else if (!unk_0xA6DECE14FC9A8C51(iLocal_84))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_85))
							{
								unk_0xE30CF11C0EE14316(&iLocal_85);
							}
							iLocal_84 = func_75(iLocal_78, 0, 145);
						}
					}
					func_46();
					func_43();
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_78, vLocal_76, 0, 1, 0))
						{
							if (!bLocal_93)
							{
								func_42();
							}
						}
					}
					else
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_84))
						{
							unk_0xE30CF11C0EE14316(&iLocal_84);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_85))
						{
							unk_0xE30CF11C0EE14316(&iLocal_85);
						}
						if (unk_0xA6DECE14FC9A8C51(iLocal_86))
						{
							unk_0xE30CF11C0EE14316(&iLocal_86);
						}
						if (unk_0x3AB6A1A9084FB0A4(iLocal_78) || unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
						{
							func_89();
						}
					}
					if (!unk_0xB8DE76287EDC4957(iLocal_81, 0))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_86))
						{
							unk_0xE30CF11C0EE14316(&iLocal_86);
							if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0) && !unk_0xA6DECE14FC9A8C51(iLocal_85))
							{
								iLocal_85 = func_90(iLocal_80, 0, 0);
							}
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iLocal_81, 0))
				{
					if (iLocal_103 >= 3)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("bulldozer")))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_86))
							{
								unk_0xE30CF11C0EE14316(&iLocal_86);
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_78) && !unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
								{
									if (unk_0x88DDBE9908752BF0(iLocal_78, 0) && !unk_0xA6DECE14FC9A8C51(iLocal_85))
									{
										iLocal_85 = func_90(iLocal_80, 0, 0);
									}
								}
							}
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_78) && !unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
						{
							if (unk_0x88DDBE9908752BF0(iLocal_78, 0) && unk_0xA6DECE14FC9A8C51(iLocal_85))
							{
								unk_0xE30CF11C0EE14316(&iLocal_85);
								if (!unk_0xA6DECE14FC9A8C51(iLocal_86))
								{
									iLocal_86 = func_90(iLocal_81, 0, 0);
								}
							}
						}
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("bulldozer")))
						{
							iLocal_97 = 0;
							while (iLocal_97 < 11)
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_88[iLocal_97]))
								{
									unk_0xEDC33A771FAEB393(iLocal_88[iLocal_97], false);
								}
								iLocal_97++;
							}
						}
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
				{
					if (unk_0x6B4C37F2EEC636CC(iLocal_80))
					{
						iLocal_97 = 0;
						while (iLocal_97 < 11)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_88[iLocal_97]))
							{
								unk_0xEDC33A771FAEB393(iLocal_88[iLocal_97], false);
							}
							iLocal_97++;
						}
						unk_0xEDC33A771FAEB393(iLocal_80, false);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
						{
							if (unk_0x88DDBE9908752BF0(iLocal_78, 0))
							{
								unk_0x771A86309E0CA47B(iLocal_78, true);
								unk_0xAE01EF4BC84AFE7C(iLocal_78, 116, false);
								unk_0xAE01EF4BC84AFE7C(iLocal_78, 29, false);
								if (!bLocal_95)
								{
									func_40();
									system::wait(0);
									func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_23())
									{
										system::wait(0);
									}
									bLocal_95 = true;
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
								{
									unk_0xE01CE1EBCD7EE551(iLocal_78, 99, 0);
								}
								if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
								{
									unk_0xEDC33A771FAEB393(iLocal_80, false);
									unk_0xB8D9F55BA414128D(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									unk_0xD1DE05EA2C437098(iLocal_80, 1, 0);
								}
								func_89();
							}
						}
					}
				}
			}
			break;
	}
}

int func_23()//Position - 0x150C
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x152E
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_25(char* sParam0, int iParam1, bool bParam2)//Position - 0x157C
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_36();
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
				func_29();
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
				if (func_28())
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
			if (func_10())
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
			func_27();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_26();
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
		func_38();
	}
	return 0;
}

void func_26()//Position - 0x1848
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

void func_27()//Position - 0x1879
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

int func_28()//Position - 0x190E
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

void func_29()//Position - 0x19A7
{
	if (func_35(14))
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
		Global_14453 = func_30();
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

int func_30()//Position - 0x1A49
{
	func_31();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_31()//Position - 0x1A62
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_34(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_33(unk_0xFC1458A37D98B502());
			if (func_32(iVar0) && (!func_35(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_32(Global_104555.f_2353.f_539.f_4301))
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

bool func_32(int iParam0)//Position - 0x1B5F
{
	return iParam0 < 3;
}

int func_33(int iParam0)//Position - 0x1B6B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)//Position - 0x1BA8
{
	if (func_32(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_35(int iParam0)//Position - 0x1BD2
{
	return Global_35861 == iParam0;
}

void func_36()//Position - 0x1BE0
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

bool func_37(int iParam0, int iParam1)//Position - 0x1C37
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

void func_38()//Position - 0x1C72
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1CC9
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

void func_40()//Position - 0x1D1F
{
	Global_14622 = 0;
	func_41();
}

void func_41()//Position - 0x1D2F
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_42()//Position - 0x1D50
{
	switch (iLocal_103)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 3000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_105 = unk_0x53C562FD2B9E3AB0();
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
					iLocal_103 = 2;
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 3000)
				{
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
					iLocal_103++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 5000 && !func_23())
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iLocal_106 = unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0));
					}
					if (unk_0x88DDBE9908752BF0(iLocal_78, 0))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_81, 0))
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								if (!unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("bulldozer")))
								{
									if (!unk_0xA6DECE14FC9A8C51(iLocal_86))
									{
										iLocal_86 = func_90(iLocal_81, 0, 0);
										if (unk_0xA6DECE14FC9A8C51(iLocal_85))
										{
											unk_0xE30CF11C0EE14316(&iLocal_85);
										}
									}
								}
							}
							else if (!unk_0xA6DECE14FC9A8C51(iLocal_86))
							{
								iLocal_86 = func_90(iLocal_81, 0, 0);
								if (unk_0xA6DECE14FC9A8C51(iLocal_85))
								{
									unk_0xE30CF11C0EE14316(&iLocal_85);
								}
							}
						}
					}
					if (iLocal_106 == joaat("bulldozer"))
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_24(&uLocal_108, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
					iLocal_103++;
				}
			}
			break;
		
		case 3:
			if (unk_0x53C562FD2B9E3AB0() - iLocal_101) > unk_0x63A6486593EC7EC3(5000, 8000)
			{
				if (!func_23())
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
				}
			}
			break;
	}
}

void func_43()//Position - 0x1F26
{
	switch (iLocal_99)
	{
		case 0:
			unk_0x31BE438986CBB2FC(vLocal_274 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			system::wait(0);
			unk_0xB3E501F097D20717(1f);
			unk_0x08563CA188BE873A(vLocal_273, 1f);
			system::wait(0);
			unk_0x08563CA188BE873A(vLocal_273 - Vector(0f, 4f, 0f), 1f);
			system::wait(0);
			unk_0x08563CA188BE873A(vLocal_273 - Vector(0f, 8f, 0f), 1f);
			system::wait(0);
			unk_0x08563CA188BE873A(vLocal_274, 1f);
			unk_0xD07B7A478765ECB5();
			iLocal_105 = unk_0x53C562FD2B9E3AB0();
			iLocal_99 = 2;
			break;
		
		case 2:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_105) > iLocal_73 || func_45())
			{
				if (unk_0xE0B0126B4689CB72(iLocal_279))
				{
					unk_0x990DE45B7A2B6426(iLocal_279, 0);
				}
				func_44();
				if (!bLocal_95)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_78) && !unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
					{
						if (!unk_0x8EA8060A1C856203(iLocal_78, iLocal_80, -1, 0, false) && !unk_0x8EA8060A1C856203(iLocal_78, iLocal_80, 0, 0, false))
						{
							func_40();
							system::wait(0);
							func_24(&uLocal_108, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_95 = true;
						}
					}
				}
				unk_0x1D29C781A978C4FB(3, true);
				unk_0x5EB6EABA5BFA56A3(80f);
				unk_0xA846A937885EB977(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 0, true, 1);
				unk_0x23AE8F1DF396E41E(3, -539,4481f, -962,3162f, 22,4918f, 4, 0f, &uLocal_278, 0, 0);
				system::settimera(0);
				iLocal_99 = 3;
			}
			break;
		
		case 3:
			if (unk_0x6ADD12BF4D6D2587(iLocal_80))
			{
				if (!unk_0x6B4C37F2EEC636CC(iLocal_80))
				{
				}
			}
			if (iLocal_98 < 2)
			{
				if (system::timera() > 5000)
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
					{
						unk_0xEDC33A771FAEB393(iLocal_80, false);
						unk_0xB8D9F55BA414128D(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xD1DE05EA2C437098(iLocal_80, 1, 0);
					}
				}
			}
			break;
	}
}

void func_44()//Position - 0x2109
{
	iLocal_46 = 1;
}

int func_45()//Position - 0x2114
{
	if (iLocal_61 == 1)
	{
		return 1;
	}
	return 0;
}

void func_46()//Position - 0x2127
{
	vector3 vVar0;
	
	switch (iLocal_98)
	{
		case 0:
			if (iLocal_103 >= 2)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_78) && !unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
				{
					if (!unk_0x88DDBE9908752BF0(iLocal_78, 0))
					{
						iLocal_98++;
					}
					unk_0x452336926718D62A(&iLocal_90);
					if (unk_0x8EA8060A1C856203(iLocal_78, iLocal_80, -1, 0, false) || unk_0x8EA8060A1C856203(iLocal_78, iLocal_80, 0, 0, false))
					{
						if (unk_0x8EA8060A1C856203(iLocal_78, iLocal_80, -1, 0, false))
						{
							bLocal_94 = true;
							vLocal_77 = { unk_0xB3328BA8976B416C(iLocal_80, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							vLocal_77 = { unk_0xB3328BA8976B416C(iLocal_80, 0) + Vector(0f, 1,5f, -3f) };
						}
						if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), vLocal_77, 4,2f, 4f, 5f, false, true, 0))
						{
							if (!bLocal_93)
							{
								func_40();
								system::wait(0);
								func_24(&uLocal_108, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_93 = true;
							}
						}
						else
						{
							bLocal_93 = true;
							iLocal_98++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78) && !unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_81, 0))
				{
					unk_0xD38F266C132F2897(iLocal_81, false, true, true, false, false, false, 0, false);
				}
				unk_0xD38F266C132F2897(iLocal_78, false, true, false, false, false, false, 0, false);
				unk_0xEDC33A771FAEB393(iLocal_80, false);
				unk_0x6931076730A4AC5D(&iLocal_107);
				if (bLocal_94)
				{
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 0, 2);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0x380C1E7B7740D618(0, -476,3904f, -986,836f, 22,5569f, 3f, -1, 0,25f, 0, 1193033728);
				}
				else
				{
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 0, 2);
					unk_0x16416C5B54FDBCBB(0, 0, 0);
					unk_0x380C1E7B7740D618(0, -476,3904f, -986,836f, 22,5569f, 3f, -1, 0,25f, 0, 1193033728);
				}
				unk_0x1B16DD5C115FE009(iLocal_107);
				unk_0xAB30B1CF01A198C1(iLocal_78, iLocal_107);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_107);
				unk_0xE9B3D12A64CC7C1A(iLocal_78, true);
				iLocal_101 = unk_0x53C562FD2B9E3AB0();
				iLocal_98++;
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 500 && !unk_0x88DDBE9908752BF0(iLocal_78, 0))
				{
					iLocal_73 = 0;
					if (unk_0xB8DE76287EDC4957(iLocal_80, 0))
					{
					}
					func_40();
					system::wait(0);
					func_24(&uLocal_108, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_101 = unk_0x53C562FD2B9E3AB0();
					iLocal_98++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if (unk_0x0C88267282FD588F(iLocal_78, -464,7217f, -989,7214f, 22,4867f, 3f, 10f, 3f, false, true, 0) || (unk_0x53C562FD2B9E3AB0() - iLocal_101) > 10000)
				{
					func_24(&uLocal_108, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_98++;
				}
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if (unk_0x0C88267282FD588F(iLocal_78, -472,7056f, -991,105f, 22,4867f, 3f, 30f, 3f, false, true, 0) || (unk_0x53C562FD2B9E3AB0() - iLocal_101) > 10000)
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
					{
						unk_0xEDC33A771FAEB393(iLocal_80, false);
						unk_0xB8D9F55BA414128D(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0xD1DE05EA2C437098(iLocal_80, 1, 0);
					}
					iLocal_98++;
				}
			}
			break;
		
		case 5:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 3000)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_80, 0))
				{
					unk_0xEDC33A771FAEB393(iLocal_80, false);
					unk_0xB8D9F55BA414128D(iLocal_80, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0xD1DE05EA2C437098(iLocal_80, 1, 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
				{
					unk_0x8810DC630928B398("RE14A_SAFE");
					if (!unk_0x191BE1BC8F26F3C1(iLocal_81, 0))
					{
						unk_0xD38F266C132F2897(iLocal_81, false, false, false, false, false, false, 0, false);
					}
					unk_0xD38F266C132F2897(iLocal_78, false, false, false, false, false, false, 0, false);
					unk_0x5718F894FDA63A9E(iLocal_78, 1);
					unk_0x5C5D33A1B2711D21(iLocal_78, true);
					unk_0x1E24C412D1C63CCB(iLocal_78, 0);
					unk_0x771A86309E0CA47B(iLocal_78, false);
					unk_0x12AB4F0F26F66D9B(iLocal_78, -455129387);
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					unk_0x6931076730A4AC5D(&iLocal_107);
					unk_0x12C9D41D52A560D6(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xDFD7CAAA70F1F7D2(iLocal_107, 1);
					unk_0x1B16DD5C115FE009(iLocal_107);
					unk_0xAB30B1CF01A198C1(iLocal_78, iLocal_107);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_107);
				}
				unk_0xA846A937885EB977(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 0, true, 1);
				unk_0x23AE8F1DF396E41E(3, -539,4481f, -962,3162f, 22,4918f, 4, 0f, &uLocal_278, 0, 0);
				iLocal_101 = unk_0x53C562FD2B9E3AB0();
				iLocal_98++;
			}
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_101) > 6400)
				{
					vVar0 = { -477,2774f, -990,0638f, 23,5497f };
					if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
					{
						if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_83))
					{
						if (unk_0x0C88267282FD588F(iLocal_83, -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_81))
					{
						if (unk_0x0C88267282FD588F(iLocal_81, -477,2774f, -990,0638f, 23,5497f, 3f, 3f, 3f, false, true, 0))
						{
							vVar0 = { -477,7884f, -996,3974f, 23,5503f };
						}
					}
					unk_0x6931076730A4AC5D(&iLocal_107);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 2052, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
					unk_0xE81769B567532C48(0, "WORLD_HUMAN_PICNIC", vVar0, 304,8172f, 0, 1, 0);
					unk_0x1B16DD5C115FE009(iLocal_107);
					unk_0xAB30B1CF01A198C1(iLocal_78, iLocal_107);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_107);
					func_24(&uLocal_108, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_47();
				}
			}
			else
			{
				func_89();
			}
			break;
	}
}

void func_47()//Position - 0x272F
{
	while (!func_74())
	{
		system::wait(0);
	}
	func_70(func_30(), 4, 2);
	func_51(-1, 0);
	func_48();
	iLocal_70 = 2;
}

void func_48()//Position - 0x275F
{
	func_49();
}

int func_49()//Position - 0x276C
{
	if (func_50(0))
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

bool func_50(bool bParam0)//Position - 0x27B7
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_51(int iParam0, int iParam1)//Position - 0x27E2
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_67(iParam0))
	{
		func_66(iParam0, iParam1);
		if (!func_65(51))
		{
			func_61("RE_REWARD", 1, 0, 4000, 10000, func_64(), 0, 138, 0);
			func_60(51);
		}
		if (func_59(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_58(iParam0, iParam1) != 322)
		{
			func_53(func_58(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_52(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_52(7);
			}
			else
			{
				func_52(1);
			}
		}
	}
}

void func_52(int iParam0)//Position - 0x28E6
{
	Global_104541 = iParam0;
}

void func_53(int iParam0, var uParam1, var uParam2)//Position - 0x28F4
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
		func_57((891 + iParam0), 1, -1, 1);
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
		func_54();
	}
}

void func_54()//Position - 0x29DC
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
		func_56(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_55() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_49();
				}
			}
		}
	}
}

int func_55()//Position - 0x2E9D
{
	return Global_25233;
}

int func_56(int iParam0, int iParam1)//Position - 0x2EA8
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

int func_57(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2EF9
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

int func_58(int iParam0, int iParam1)//Position - 0x33C5
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

int func_59(int iParam0)//Position - 0x3739
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

void func_60(int iParam0)//Position - 0x3768
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

void func_61(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x37AA
{
	func_62(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_62(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x37CB
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
		func_63();
	}
}

void func_63()//Position - 0x399E
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

int func_64()//Position - 0x3ABE
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

int func_65(int iParam0)//Position - 0x3B04
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

void func_66(int iParam0, int iParam1)//Position - 0x3B47
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_67(int iParam0)//Position - 0x3B62
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

int func_68()//Position - 0x3C13
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_69(Var0);
	return uVar1;
}

int func_69(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3C30
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

void func_70(int iParam0, int iParam1, int iParam2)//Position - 0x3E0A
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7872;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7872)
			{
				iVar0 = func_73(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_71(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EFA
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)//Position - 0x3F2A
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

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x3F5E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_72(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74()//Position - 0x3F90
{
	return 1;
}

int func_75(int iParam0, bool bParam1, int iParam2)//Position - 0x3F99
{
	int iVar0;
	
	iVar0 = func_76(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2)//Position - 0x3FEB
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_77(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_77(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_77(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_77(bool bParam0, float fParam1, float fParam2)//Position - 0x4091
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_78(int iParam0)//Position - 0x40A8
{
	if (func_82())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_59(Global_104544))
		{
			func_79(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_59(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x40FB
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_80(func_81(iParam0), -1);
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
					func_80(func_81(iParam0), -1);
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
					func_80(func_81(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_80(char* sParam0, int iParam1)//Position - 0x41DC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

char* func_81(int iParam0)//Position - 0x41F3
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

int func_82()//Position - 0x4236
{
	switch (func_83(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_83(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x426C
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
		if (func_87(0))
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
		if (!func_85(iParam2))
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
			func_84(uParam0, iParam4);
		}
	}
	return 2;
}

void func_84(var uParam0, int iParam1)//Position - 0x43A3
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

bool func_85(int iParam0)//Position - 0x43F2
{
	return func_86(iParam0, Global_35861);
}

int func_86(int iParam0, int iParam1)//Position - 0x4403
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

int func_87(int iParam0)//Position - 0x45E4
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4606
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

void func_89()//Position - 0x46EB
{
	unk_0x8810DC630928B398("RE14A_FAIL");
	iLocal_70 = 2;
}

int func_90(int iParam0, bool bParam1, bool bParam2)//Position - 0x46FF
{
	return func_76(iParam0, !bParam1, bParam2);
}

void func_91()//Position - 0x4712
{
	if (func_94(1000))
	{
		func_40();
		unk_0xAE83ED4C9081AE6F(800);
		while (unk_0x2D0EF1D268F33F25())
		{
			system::wait(0);
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
		{
			unk_0x3399302C36042548(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_282 = true;
		iLocal_72 = 8;
	}
	switch (iLocal_72)
	{
		case 0:
			func_2(1, 1, 1, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
			unk_0xBC79F7D5230CA7E8();
			unk_0x9B47B379EE749C38(false);
			unk_0x4255E93FCCDE108E(false);
			unk_0x687903C882D93029(0);
			if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
			{
				unk_0xDD29FF4BAB8AFF9C(unk_0xC733212BF9066BDF(), true, 0);
			}
			unk_0x60225D4F755DFDB1(vLocal_75, 50f, 0);
			unk_0x9B8406983378711E(vLocal_75, 30f, 0, 0, 0, 0, false, 0);
			unk_0xA896149A4DE38DEA(vLocal_75, 100f, 0);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), vLocal_75, 8f, 8f, 8f, false, true, 0))
				{
					iLocal_82 = unk_0xC733212BF9066BDF();
					unk_0xDD29FF4BAB8AFF9C(iLocal_82, true, 0);
					unk_0xC91FE17AD7353B70(&iLocal_82);
				}
			}
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -473,1686f, -984,6405f, 22,487f, 15f, 15f, 5f, false, true, 0))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -477,3538f, -972,67f, 22,5494f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 237,4839f);
			}
			iLocal_276 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -462,711f, -992,5728f, 23,8729f, -0,1371f, -0,0346f, -29,6605f, 28f, 1, 2);
			iLocal_277 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -462,711f, -992,5728f, 23,8729f, 69,4831f, -0,0346f, -40,8884f, 28f, 1, 2);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_276, "HAND_SHAKE", 0,3f);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_277, "HAND_SHAKE", 0,3f);
			func_93();
			unk_0x7849794435F39D49(iLocal_276, true);
			unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			system::wait(500);
			unk_0xF10DA1539629CC3F(iLocal_277, iLocal_276, 3500, 1, 1);
			unk_0x8810DC630928B398("RE14A_START");
			iLocal_104 = unk_0x53C562FD2B9E3AB0();
			iLocal_72 = 1;
			break;
		
		case 1:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 3500)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0x4AFBCBFDE748D4E0(iLocal_100, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				unk_0xE322818CF08D3198(iLocal_88[0], 1);
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -455,4617f, -990,631f, 61,6885f, -89,0761f, -0,0146f, -49,881f, 80,5355f, 1, 2);
				iLocal_277 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -455,4543f, -990,6208f, 61,012f, -89,0759f, -0,0146f, -47,8226f, 80,5355f, 1, 2);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_276, "HAND_SHAKE", 0,3f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_277, "HAND_SHAKE", 0,3f);
				unk_0xF10DA1539629CC3F(iLocal_277, iLocal_276, 4000, 1, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_78);
					unk_0xBA54D3D84EF38E3D(iLocal_78, -461,4785f, -984,8583f, 28,0809f, 30000, 2080, 2);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_90))
				{
					unk_0x6B7C10B19928914F(iLocal_90, 1, true);
					unk_0x452336926718D62A(&iLocal_90);
				}
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				iLocal_72 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 1500)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				iLocal_72 = 3;
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 500)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_88[0]))
				{
					unk_0xEDC33A771FAEB393(iLocal_88[0], false);
					unk_0xB8D9F55BA414128D(iLocal_88[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 11, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 18, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 19, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 23, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 9, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 12, 0);
					unk_0x3B78A536ADFE867F(iLocal_88[0], 17, 0);
					unk_0xAEB228D978E7ADD1("scr_reconstruct_pipefall_debris", iLocal_88[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				iLocal_72 = 4;
			}
			break;
		
		case 4:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 2000)
			{
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -470,5648f, -976,951f, 24,2657f, 25,437f, -0,0087f, -118,3831f, 34f, 1, 2);
				iLocal_277 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -470,5648f, -976,951f, 24,2657f, 2,0695f, -0,0087f, -120,2811f, 34f, 1, 2);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_276, "HAND_SHAKE", 0,3f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_277, "HAND_SHAKE", 0,3f);
				unk_0xF10DA1539629CC3F(iLocal_277, iLocal_276, 1000, 3, 3);
				unk_0x0B9D04994D02CC2F(iLocal_100);
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				iLocal_72 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 500)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
				{
					unk_0xEDC33A771FAEB393(iLocal_80, false);
					unk_0x4AFBCBFDE748D4E0(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", true);
					unk_0x3399302C36042548(iLocal_80, 0f, 1f, 1f, 200f, 800f, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
					{
						unk_0xCB3D88C918AA637C(iLocal_78);
					}
					unk_0x12C9D41D52A560D6(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0, 0, 0, 0);
					unk_0xAEB228D978E7ADD1("scr_reconstruct_pipe_impact", iLocal_80, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_24(&uLocal_108, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (unk_0x8EA3C8E091EA5BA4(iLocal_276) && unk_0x8EA3C8E091EA5BA4(iLocal_277))
					{
						unk_0x7E4FCDC8BAD0CF6D(iLocal_276, "HAND_SHAKE", 1,5f);
						unk_0x7E4FCDC8BAD0CF6D(iLocal_277, "HAND_SHAKE", 1,5f);
					}
					iLocal_104 = unk_0x53C562FD2B9E3AB0();
					iLocal_72 = 6;
				}
			}
			break;
		
		case 6:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 500)
			{
				func_92(iLocal_276);
				func_92(iLocal_277);
				iLocal_276 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -459,2609f, -987,5602f, 24,2611f, 0,583f, 0,2617f, -32,7532f, 49,9914f, 1, 2);
				iLocal_277 = unk_0xC84BA58897A54045("DEFAULT_SCRIPTED_CAMERA", -459,0622f, -987,2584f, 24,2661f, 5,0301f, 0,2617f, -36,7308f, 49,9914f, 1, 2);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_276, "HAND_SHAKE", 0,5f);
				unk_0x7E4FCDC8BAD0CF6D(iLocal_277, "HAND_SHAKE", 0,5f);
				unk_0xF10DA1539629CC3F(iLocal_277, iLocal_276, 2500, 3, 3);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
				{
					unk_0xBA54D3D84EF38E3D(iLocal_78, unk_0xB3328BA8976B416C(iLocal_78, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_104 = unk_0x53C562FD2B9E3AB0();
				iLocal_72 = 7;
			}
			break;
		
		case 7:
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 2200 && !iLocal_96)
			{
				if ((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) && unk_0x1FB367C588A91451() == 4) || (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x60584F41FBCE28CD() == 4))
				{
					unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
					unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_96 = 1;
				}
			}
			if ((unk_0x53C562FD2B9E3AB0() - iLocal_104) > 2500)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_80, 0))
				{
					unk_0xEDC33A771FAEB393(iLocal_80, true);
				}
				iLocal_72 = 8;
			}
			break;
		
		case 8:
			unk_0x8810DC630928B398("RE14A_PIPES");
			if (unk_0x6ADD12BF4D6D2587(iLocal_88[0]))
			{
				unk_0x452336926718D62A(&(iLocal_88[0]));
			}
			if (unk_0xB8DE76287EDC4957(iLocal_80, 0))
			{
				unk_0xB38E13EF2EC6F0E9(iLocal_80, 250f);
				unk_0xBD8D47FDC6902B2D(iLocal_80, vLocal_75, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(iLocal_80, 80f);
				unk_0xBBF9037650162761(vLocal_75, 50f, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_78);
				unk_0xCB3D88C918AA637C(iLocal_78);
				unk_0x12C9D41D52A560D6(iLocal_78, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x7849794435F39D49(iLocal_276, false);
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x02934BABFD4CD384(iLocal_276, 0);
			unk_0x02934BABFD4CD384(iLocal_277, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x9B47B379EE749C38(true);
			unk_0x4255E93FCCDE108E(true);
			unk_0x687903C882D93029(1);
			func_2(0, 1, 1, 0);
			iLocal_101 = unk_0x53C562FD2B9E3AB0();
			unk_0x14776E43F90DD454(1668676931);
			iLocal_88[1] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -457,8815f, -988,9059f, 22,9554f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[1], -0,1939f, 105,0058f, 77,3964f, 2, 1);
			iLocal_88[2] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -451,5131f, -986,8079f, 24,6947f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[2], 24,3941f, 32,5423f, 80,6862f, 2, 1);
			iLocal_88[3] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -450,8099f, -985,9972f, 24,7104f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[3], 24,1841f, 110,287f, 78,4357f, 2, 1);
			iLocal_88[4] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -456,6558f, -987,3979f, 22,9537f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[4], -0,0264f, 29,5754f, 79,1811f, 2, 1);
			iLocal_88[5] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -456,1279f, -988,4162f, 22,9889f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[5], -0,6337f, 108,4339f, 77,9539f, 2, 1);
			iLocal_88[6] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -457,0807f, -987,3059f, 23,7564f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[6], 0,0929f, 74,2657f, 79,3839f, 2, 1);
			iLocal_88[7] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -456,6558f, -983,7804f, 22,9712f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[7], -0,0264f, 29,5754f, 80,9061f, 2, 1);
			iLocal_88[8] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -455,3279f, -983,1712f, 22,9564f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[8], -0,1087f, 109,7339f, 80,9789f, 2, 1);
			iLocal_88[9] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -456,1632f, -983,9359f, 23,7964f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[9], -0,3321f, 74,1907f, 81,6089f, 2, 1);
			iLocal_88[10] = unk_0x9A331BBF019DCAD2(joaat("prop_ld_pipe_single_01"), -454,644f, -994,1709f, 23,3329f, true, true, false);
			unk_0x59AF3B40AE222194(iLocal_88[10], 5,7811f, 104,6058f, 104,6964f, 2, 1);
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_88[iLocal_97]))
				{
					unk_0x42B3DBD52AED7B7D(iLocal_88[iLocal_97], 1);
					unk_0xEDC33A771FAEB393(iLocal_88[iLocal_97], true);
				}
				iLocal_97++;
			}
			if (bLocal_282)
			{
				unk_0x59C3AC31C7544A28(800);
				while (unk_0x9BB64DDCD9C7B076())
				{
					system::wait(0);
				}
			}
			iLocal_92 = 1;
			iLocal_91 = 0;
			break;
	}
}

void func_92(int iParam0)//Position - 0x5257
{
	if (unk_0x8EA3C8E091EA5BA4(iParam0))
	{
		unk_0x02934BABFD4CD384(iParam0, 0);
	}
}

void func_93()//Position - 0x526F
{
	unk_0x278F19E969607FAC();
	Global_16748 = 0;
}

int func_94(int iParam0)//Position - 0x527F
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
			if (func_95())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_95()//Position - 0x52C9
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

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x52FB
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x534E
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

int func_98(var uParam0)//Position - 0x53E9
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_99(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_99(var uParam0)//Position - 0x544B
{
	return func_100(*uParam0, "NULL", uParam0->f_1);
}

int func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x5460
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_101(iParam0))
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

int func_101(int iParam0)//Position - 0x5554
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

void func_102(var uParam0)//Position - 0x5580
{
	func_103(uParam0, 9, -1, 0);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5592
{
	int iVar0;
	
	if (!func_104(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_104(int iParam0)//Position - 0x5655
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_105(var uParam0, int iParam1)//Position - 0x56F4
{
	func_103(uParam0, 0, iParam1, 0);
}

void func_106(var uParam0)//Position - 0x5706
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_32 + uParam0->f_33) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
					{
						func_107(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_107(int iParam0)//Position - 0x5790
{
	func_108(iParam0, "NULL", iParam0->f_1);
}

void func_108(int iParam0, char* sParam1, int iParam2)//Position - 0x57A4
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_101(*iParam0))
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

void func_109()//Position - 0x587E
{
	int iVar0;
	
	func_105(&Local_283, joaat("bulldozer"));
	func_105(&Local_283, joaat("utillitruck2"));
	func_105(&Local_283, 1668676931);
	if (func_98(&Local_283))
	{
		unk_0x2E4932E63763FE26(joaat("utillitruck2"), true);
		unk_0x94BD6F0436473406(0,1f);
		unk_0x1D29C781A978C4FB(3, false);
		unk_0xCB389937EDB1519A(vLocal_74 + Vector(50f, 50f, 50f), vLocal_74 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		vLocal_75 = { -455,6561f, -985,8071f, 22,4868f };
		iLocal_80 = unk_0xEA60F3B426BB095B(joaat("utillitruck2"), vLocal_75, 80f, true, true, false);
		unk_0xA15269351F50F113(iLocal_80, false, true, 0);
		unk_0x4BEFCD5DAE410A90(iLocal_80, 3);
		unk_0x7B3133EBCD34B431(iLocal_80, 1, true);
		unk_0x7B3133EBCD34B431(iLocal_80, 2, true);
		unk_0x7B3133EBCD34B431(iLocal_80, 3, false);
		unk_0x7B3133EBCD34B431(iLocal_80, 4, true);
		unk_0x7B3133EBCD34B431(iLocal_80, 5, true);
		unk_0x7B3133EBCD34B431(iLocal_80, 6, false);
		unk_0x7B3133EBCD34B431(iLocal_80, 7, true);
		unk_0xEDC33A771FAEB393(iLocal_80, true);
		unk_0xD38F266C132F2897(iLocal_80, false, false, false, true, false, false, 0, false);
		unk_0xCFB385D0FF082808(iLocal_80, 10000);
		unk_0x2BD1EBC57D746940(iLocal_80, 5f);
		iLocal_81 = unk_0xEA60F3B426BB095B(joaat("bulldozer"), -472,9444f, -966,671f, 22,5534f, 181,8365f, true, true, false);
		unk_0x247EAA2E93D4A021(vLocal_75, 10f, 1, 0, 0, false);
		iLocal_88[0] = unk_0x9A331BBF019DCAD2(1668676931, -453,2f, -986,1f, 59,45f, true, true, false);
		unk_0x48ED7B2293A96722(iLocal_88[0], 90f);
		unk_0xEDC33A771FAEB393(iLocal_88[0], true);
		unk_0xD38F266C132F2897(iLocal_88[0], true, true, true, true, false, false, 0, false);
		unk_0xCFB385D0FF082808(iLocal_88[0], 10000000);
		Local_68[0 /*5*/] = { vLocal_274 };
		Local_68[1 /*5*/] = { vLocal_274 + Vector(0f, 0,5f, 0f) };
		Local_68[2 /*5*/] = { vLocal_274 + Vector(0f, 1f, 0f) };
		Local_68[3 /*5*/] = { vLocal_274 + Vector(0f, 2,5f, 0f) };
		Local_68[4 /*5*/] = { vLocal_274 + Vector(0f, 3f, 0f) };
		Local_68[5 /*5*/] = { vLocal_274 + Vector(0f, 3,5f, 0f) };
		Local_68[6 /*5*/] = { vLocal_274 + Vector(0f, 4f, 0f) };
		Local_68[7 /*5*/] = { vLocal_274 + Vector(0f, 4,5f, 0f) };
		Local_68[8 /*5*/] = { vLocal_274 + Vector(0f, 5f, 0f) };
		Local_68[9 /*5*/] = { vLocal_274 + Vector(0f, 5,5f, 0f) };
		Local_68[10 /*5*/] = { vLocal_274 + Vector(0f, 6f, 0f) };
		Local_68[11 /*5*/] = { vLocal_274 + Vector(0f, 6,5f, 0f) };
		Local_68[12 /*5*/] = { vLocal_274 + Vector(0f, 7f, 0f) };
		Local_68[13 /*5*/] = { vLocal_273 };
		iVar0 = 0;
		while (iVar0 < Local_68)
		{
			Local_68[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!unk_0xA6DECE14FC9A8C51(iLocal_87))
		{
		}
		func_110(&Local_283, 0);
		iLocal_280 = 1;
		iLocal_70 = 1;
	}
}

void func_110(var uParam0, bool bParam1)//Position - 0x5B64
{
	int iVar0;
	
	if (!bParam1)
	{
		func_112(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_111(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_111(var uParam0)//Position - 0x5BA4
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_112(var uParam0)//Position - 0x5BB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			func_113(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_113(var uParam0)//Position - 0x5BEE
{
	func_114(*uParam0, "NULL", uParam0->f_1);
}

void func_114(int iParam0, char* sParam1, int iParam2)//Position - 0x5C03
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_101(iParam0))
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

int func_115()//Position - 0x5CC3
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_116(float fParam0, bool bParam1)//Position - 0x5D49
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
		if (func_32(func_30()))
		{
			iVar5 = func_64();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_117(iVar1, &Var0);
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

void func_117(int iParam0, var uParam1)//Position - 0x5E00
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
		
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
		
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
		
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
		
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
		
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
		
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
		
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
		
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_118(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x6FB5
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

int func_119(int iParam0)//Position - 0x7046
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

struct<2> func_120(int iParam0)//Position - 0x738C
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_121(iParam0) };
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

struct<2> func_121(int iParam0)//Position - 0x73C3
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

int func_122()//Position - 0x780F
{
	if (func_125() && !func_126())
	{
		return 1;
	}
	if (func_124() && func_123())
	{
		return 1;
	}
	return 0;
}

bool func_123()//Position - 0x7841
{
	return Global_104273 > 0;
}

int func_124()//Position - 0x784F
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_125()//Position - 0x7864
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_126()//Position - 0x788A
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

int func_127()//Position - 0x78A7
{
	if (!func_85(5))
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_126())
		{
			return 0;
		}
	}
	if (func_116(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7909
{
	if ((Global_104544 == func_68() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x7934
{
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_131(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_130();
}

void func_130()//Position - 0x796A
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

void func_131(int iParam0)//Position - 0x79A7
{
	Global_104544 = iParam0;
}

int func_132(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x79B5
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
		iParam1 = func_68();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_173())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_126())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_122())
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_116(100f, 1) != -1)
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
		if (!func_171(iParam1))
		{
			return 0;
		}
		if (func_32(func_30()))
		{
			if (func_170(func_30()) == 4 || func_170(func_30()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_30()))
		{
			if (!func_169(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_168(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_167())
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
		if (!func_158(4))
		{
			return 0;
		}
		if (!func_85(5))
		{
			return 0;
		}
		if (func_157(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_157(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_171(30) && !func_157(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_30()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_156(iVar4))
				{
					if (func_134(iVar2))
					{
						if (!func_133(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_30() != iVar2)
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

bool func_133(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x7D4F
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_134(int iParam0)//Position - 0x7D96
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_135(iVar0);
}

int func_135(int iParam0)//Position - 0x7DB7
{
	return func_136(iParam0, 1);
}

int func_136(int iParam0, int iParam1)//Position - 0x7DC6
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_156(iParam0))
	{
		return 0;
	}
	func_137(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7E19
{
	func_138(func_149(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_138(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7E37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_148(iParam0, iParam1))
	{
		iVar0 = func_147(iParam1);
		iVar1 = func_145(iParam0);
		iVar2 = (func_145(iParam0) - func_145(iParam1));
		iVar3 = (func_147(iParam0) - func_147(iParam1));
		iVar4 = (func_144(iParam0) - func_144(iParam1));
		iVar5 = (func_143(iParam0) - func_143(iParam1));
		iVar6 = (func_142(iParam0) - func_142(iParam1));
		iVar7 = (func_141(iParam0) - func_141(iParam1));
	}
	else
	{
		iVar0 = func_147(iParam0);
		iVar1 = func_145(iParam1);
		iVar2 = (func_145(iParam1) - func_145(iParam0));
		iVar3 = (func_147(iParam1) - func_147(iParam0));
		iVar4 = (func_144(iParam1) - func_144(iParam0));
		iVar5 = (func_143(iParam1) - func_143(iParam0));
		iVar6 = (func_142(iParam1) - func_142(iParam0));
		iVar7 = (func_141(iParam1) - func_141(iParam0));
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
		iVar4 = (iVar4 + func_140(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_139(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_139(float fParam0, float fParam1, float fParam2)//Position - 0x8038
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

int func_140(int iParam0, int iParam1)//Position - 0x807A
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

int func_141(int iParam0)//Position - 0x811C
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_142(int iParam0)//Position - 0x812F
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_143(int iParam0)//Position - 0x8142
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_144(int iParam0)//Position - 0x8155
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_145(int iParam0)//Position - 0x8167
{
	return (system::shift_right(iParam0, 26) & 31 * func_146(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_146(bool bParam0, int iParam1, int iParam2)//Position - 0x818C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_147(int iParam0)//Position - 0x81A3
{
	return iParam0 & 15;
}

int func_148(int iParam0, int iParam1)//Position - 0x81B0
{
	int iVar0;
	int iVar1;
	
	if (!func_156(iParam1) || !func_156(iParam0))
	{
		return 1;
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
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
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
	return 0;
}

int func_149()//Position - 0x82BC
{
	var uVar0;
	
	func_155(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_154(&uVar0, unk_0x95327550F0F2BE7C());
	func_153(&uVar0, unk_0x674C9438180770FE());
	func_152(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_151(&uVar0, unk_0xEAF455949B108589());
	func_150(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_150(var uParam0, int iParam1)//Position - 0x8302
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

void func_151(var uParam0, int iParam1)//Position - 0x8388
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)//Position - 0x83BB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_145(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_153(var uParam0, int iParam1)//Position - 0x840C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_154(var uParam0, int iParam1)//Position - 0x8446
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_155(var uParam0, int iParam1)//Position - 0x8481
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_156(int iParam0)//Position - 0x84BD
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_145(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_147(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_144(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)//Position - 0x8599
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x85BC
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_30();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_166()) || Global_103602) || Global_25235) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_162()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_166()) || Global_25235) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_166()) || Global_103602) || Global_25235) || func_165()) || func_37(8, -1)) || func_162()) || func_164()) || func_163()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_166()) || Global_103602) || Global_25235) || func_165()) || func_37(8, -1)) || func_164()) || func_163()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_37(8, -1)) || func_161()) || func_160()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_37(8, -1) || func_164()) || func_163()) || func_160()) || func_159())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_166()) || Global_25235) || func_165()) || func_37(8, -1)) || func_163()) || func_162()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_166()) || func_163()) || Global_103602) || Global_25235) || func_165()) || Global_36993) || func_37(8, -1)) || func_162()) || func_160()) || func_161()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_166()) || Global_103602) || Global_25235) || func_165()) || func_37(8, -1)) || func_162()) || func_160()) || func_164()) || func_163()) || func_161())
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

var func_159()//Position - 0x8CD9
{
	return Global_92872.f_1;
}

int func_160()//Position - 0x8CE7
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()//Position - 0x8D0D
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0x8D27
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

bool func_163()//Position - 0x8D51
{
	return Global_92885.f_316 > 0;
}

bool func_164()//Position - 0x8D62
{
	return Global_92885.f_315 > 0;
}

var func_165()//Position - 0x8D73
{
	return Global_1312854;
}

int func_166()//Position - 0x8D7F
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_167()//Position - 0x8D9B
{
	func_29();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)//Position - 0x8DC3
{
	return func_148(func_149(), iParam0);
}

int func_169(int iParam0, int iParam1, int iParam2)//Position - 0x8DD5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_30();
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

int func_170(int iParam0)//Position - 0x8EB9
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_171(int iParam0)//Position - 0x8EDD
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_173())
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

int func_172()//Position - 0x8F3B
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

int func_173()//Position - 0x8F7F
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

void func_174()//Position - 0x903A
{
	if (iLocal_280)
	{
		if (!iLocal_281)
		{
			unk_0x8810DC630928B398("RE14A_FAIL");
			func_210();
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_78))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_78, 317, true);
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_83, 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_83, 0) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_83, 50f, 50f, 50f, 0, 1, 0))
				{
					func_186(iLocal_83, 0, 145);
				}
			}
			iLocal_97 = 0;
			while (iLocal_97 < 11)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_88[iLocal_97]))
				{
					unk_0xEDC33A771FAEB393(iLocal_88[iLocal_97], false);
				}
				iLocal_97++;
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_80, 0))
			{
				unk_0xB38E13EF2EC6F0E9(iLocal_80, 0f);
				unk_0xEDC33A771FAEB393(iLocal_80, false);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_89))
			{
				unk_0xEDC33A771FAEB393(iLocal_89, false);
			}
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			unk_0x9B47B379EE749C38(true);
			unk_0x4255E93FCCDE108E(true);
			func_2(0, 1, 1, 0);
			iLocal_92 = 1;
			unk_0x41390D2B41D5502D(1f);
			unk_0xFCCDDE0E48CF9588("re@construction");
			if (unk_0x8EA3C8E091EA5BA4(iLocal_275))
			{
				unk_0x02934BABFD4CD384(iLocal_275, 0);
				unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_84))
			{
				unk_0xE30CF11C0EE14316(&iLocal_84);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_85))
			{
				unk_0xE30CF11C0EE14316(&iLocal_85);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_86))
			{
				unk_0xE30CF11C0EE14316(&iLocal_86);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_87))
			{
				unk_0xE30CF11C0EE14316(&iLocal_87);
			}
		}
		unk_0x8A4311269B560FDF(-460,3019f, -870,3607f, 21,89325f, -508,4859f, -981,1199f, 27,32087f, 36,5625f, 1);
		unk_0x94BD6F0436473406(1f);
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x2F07051DB79A59FB();
		unk_0x3CDDC4760DBA4651();
	}
	func_110(&Local_283, 0);
	func_175(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_175(int iParam0)//Position - 0x9224
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_68();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_128())
	{
		func_179(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_178(30000);
		StringCopy(&cVar0, func_177(Global_104544, 1), 64);
		if (func_67(Global_104544) > 0)
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
	func_176(&Global_25292);
	Global_104545 = 0;
	func_131(-1);
}

void func_176(var uParam0)//Position - 0x92D9
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

char* func_177(int iParam0, bool bParam1)//Position - 0x9316
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

void func_178(int iParam0)//Position - 0x955F
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_179(int iParam0)//Position - 0x9571
{
	func_180(iParam0, 0, func_185(iParam0));
}

void func_180(int iParam0, int iParam1, int iParam2)//Position - 0x9586
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_149();
	func_183(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_182(iParam0, &uVar0);
	Var1 = { func_181(&uVar0) };
}

struct<16> func_181(var uParam0)//Position - 0x95B5
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_142(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_141(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_144(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_145(*uParam0), 64);
	return Var0;
}

void func_182(int iParam0, var uParam1)//Position - 0x9685
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x969D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_147(*uParam0);
	iVar2 = func_144(*uParam0);
	iVar3 = func_143(*uParam0);
	iVar4 = func_142(*uParam0);
	iVar5 = func_141(*uParam0);
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
	iVar6 = func_140(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_140(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_184(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x981F
{
	func_155(uParam0, iParam1);
	func_154(uParam0, iParam2);
	func_153(uParam0, iParam3);
	func_151(uParam0, iParam5);
	func_152(uParam0, iParam4);
	func_150(uParam0, iParam6);
}

int func_185(int iParam0)//Position - 0x9857
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

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0x99FA
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
	func_187(iParam0, iParam2);
	return 1;
}

void func_187(int iParam0, int iParam1)//Position - 0x9A3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_193(iParam0))
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
	func_188(iParam0, &(Global_104555.f_32429.f_5510));
}

void func_188(int iParam0, var uParam1)//Position - 0x9C3C
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_192(uParam1);
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
		if (uParam1->f_65 == -1 && !func_191(uParam1->f_66))
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
		func_190(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_189(iVar0 + 1));
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

int func_189(int iParam0)//Position - 0x9EE7
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

int func_190(int iParam0, var uParam1, var uParam2)//Position - 0x9F97
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

int func_191(int iParam0)//Position - 0xA071
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

void func_192(var uParam0)//Position - 0xA091
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

int func_193(int iParam0)//Position - 0xA141
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_208(iParam0, 0, 0)) || func_208(iParam0, 1, 0)) || func_208(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_206(iParam0)) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || !func_194(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_205(iParam0))
		{
		}
		if (func_205(iParam0))
		{
		}
		if (func_208(iParam0, 0, 0))
		{
		}
		if (func_208(iParam0, 1, 0))
		{
		}
		if (func_208(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_194(int iParam0)//Position - 0xA21E
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_195(iParam0, 0))
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

int func_195(int iParam0, bool bParam1)//Position - 0xA3CF
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
		if (!func_173())
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
		if ((((!func_202() && !func_201()) && !func_200()) && !func_199()) && !func_173())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_200())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_198(iParam0))
		{
			return 0;
		}
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0)//Position - 0xA55D
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_197())
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

int func_197()//Position - 0xA629
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xA640
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

int func_199()//Position - 0xBEC8
{
	return 0;
}

int func_200()//Position - 0xBED1
{
	return 1;
}

int func_201()//Position - 0xBEDA
{
	return 1;
}

int func_202()//Position - 0xBEE3
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0xBEFC
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_195(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0xBF42
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

int func_205(int iParam0)//Position - 0xBF7D
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

int func_206(int iParam0)//Position - 0xBFF9
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

int func_207(int iParam0)//Position - 0xC0E3
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

int func_208(int iParam0, int iParam1, bool bParam2)//Position - 0xC146
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_209(iParam1, iVar0, &sVar1, &iVar2))
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

int func_209(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC1B7
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

void func_210()//Position - 0xC28F
{
	Global_14622 = 0;
	func_211();
}

void func_211()//Position - 0xC29F
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

