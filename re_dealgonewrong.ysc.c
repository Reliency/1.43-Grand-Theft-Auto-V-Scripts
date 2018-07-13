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
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_49[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[4] = { 0, 0, 0, 0 };
	int iLocal_84[4] = { 0, 0, 0, 0 };
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_88[4] = { 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[4] = { 0, 0, 0, 0 };
	int iLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95[4] = { 0, 0, 0, 0 };
	var uLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	int iLocal_99[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_280[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_281 = { 0f, 0f, 0f };
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	struct<2> Local_284 = { 0, 5 } ;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
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
	vLocal_100 = { -1635,648f, 4737,801f, 52,4304f };
	vLocal_101 = { -1640,745f, 4696,386f, 39,279f };
	vLocal_47 = { ScriptParam_284.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_170();
	}
	if (func_128(vLocal_47, -1, 0, 0, 0))
	{
		func_125(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		if ((unk_0x42F1FE4C7EC5F51E() || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1503,54f, 4934,923f, 114,2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0x48D75120C879E65E("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_282)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_111())
						{
							func_170();
						}
						func_108();
					}
					break;
				
				case 1:
					func_107();
					func_96();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_107();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_107();
							func_76();
							if (iLocal_46 >= 6)
							{
								if (!func_75())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_110)
										{
											func_74(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
											func_69(iLocal_88[0], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_88[1], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 2f, 0f, 1000, 0f);
											func_64(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_107)
										{
											func_74(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
											func_69(iLocal_86[0], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_86[1], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_64(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_108)
										{
											func_74(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
											func_69(iLocal_87[0], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_87[1], unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_64(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_41();
								}
							}
							if (((unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()) || unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502())) && !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_100, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_41();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

void func_1()//Position - 0x3B1
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0x3CDDC4760DBA4651();
		unk_0x94BD6F0436473406(1f);
		if (unk_0xA6DECE14FC9A8C51(iLocal_89))
		{
			unk_0xE30CF11C0EE14316(&iLocal_89);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_90))
		{
			unk_0xE30CF11C0EE14316(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_93[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_93[iVar0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_95[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_83[iVar0], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_94[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_94[iVar0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_96[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_84[iVar0], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0x1D29C781A978C4FB(5, true);
			unk_0x1D29C781A978C4FB(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_36(), 1, 25000);
		}
		iLocal_105 = 1;
	}
	if (!unk_0x9E06F0EE20F58CED(vLocal_100, 30f) && system::vdist(func_2(unk_0x9EB17624F44A8DA4()), vLocal_100) > 300f)
	{
		func_170();
	}
}

Vector3 func_2(int iParam0)//Position - 0x554
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x567
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5B0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_33(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_33(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_33(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_property"), iParam3);
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
									func_33(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_33(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_35861 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0xBAF
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

void func_6(int iParam0)//Position - 0xE31
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

void func_7(int iParam0)//Position - 0xE8B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_9() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_9() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_8(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0xF5F
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

int func_9()//Position - 0xFDD
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_10(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xFEA
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
		iParam2 = func_11();
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

int func_11()//Position - 0x14AE
{
	return Global_1312736;
}

void func_12(int iParam0)//Position - 0x14BA
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

bool func_13(int iParam0)//Position - 0x14DA
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_9() /*12130*/].f_7676.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)//Position - 0x1528
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x1565
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

int func_16(int iParam0, int iParam1)//Position - 0x1825
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
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

int func_17(bool bParam0)//Position - 0x1ABF
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
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1B76
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)//Position - 0x1B91
{
	if (func_31(14) && !func_30(iParam0))
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
	if (func_29(&Global_4267379))
	{
		if (func_27(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_4267379, iParam0))
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

int func_20(var uParam0, int iParam1)//Position - 0x1C2E
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)//Position - 0x1CDF
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x1D5A
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)//Position - 0x1D6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_4267378 - 0,5f));
}

void func_24(var uParam0, int iParam1)//Position - 0x1D9F
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)//Position - 0x1DAF
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

float func_26(var uParam0)//Position - 0x1DCC
{
	return uParam0->f_80;
}

bool func_27(var uParam0, int iParam1)//Position - 0x1DD8
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)//Position - 0x1DEA
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

bool func_29(var uParam0)//Position - 0x1E17
{
	return uParam0->f_79 == 1;
}

int func_30(int iParam0)//Position - 0x1E25
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

bool func_31(int iParam0)//Position - 0x1E75
{
	return Global_35861 == iParam0;
}

int func_32(int iParam0, int iParam1)//Position - 0x1E83
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

void func_33(int iParam0, int iParam1)//Position - 0x1ED4
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_34(int iParam0, int iParam1)//Position - 0x1EF7
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

void func_35()//Position - 0x1F54
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

int func_36()//Position - 0x1FC9
{
	func_37();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_37()//Position - 0x1FE2
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_40(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_39(unk_0xFC1458A37D98B502());
			if (func_38(iVar0) && (!func_31(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104555.f_2353.f_539.f_4301))
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

bool func_38(int iParam0)//Position - 0x20DF
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x20EB
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x2128
{
	if (func_38(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41()//Position - 0x2152
{
	while (func_63())
	{
		system::wait(0);
	}
	while (!func_62())
	{
		system::wait(0);
	}
	func_45(-1, 0);
	func_42();
	iLocal_45 = 3;
}

void func_42()//Position - 0x2186
{
	func_43();
}

int func_43()//Position - 0x2193
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

bool func_44(bool bParam0)//Position - 0x21DE
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_45(int iParam0, int iParam1)//Position - 0x2209
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_59(iParam0))
	{
		func_58(iParam0, iParam1);
		if (!func_57(51))
		{
			func_53("RE_REWARD", 1, 0, 4000, 10000, func_56(), 0, 138, 0);
			func_52(51);
		}
		if (func_51(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_50(iParam0, iParam1) != 322)
		{
			func_47(func_50(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_46(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)//Position - 0x230D
{
	Global_104541 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)//Position - 0x231B
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
		func_10((891 + iParam0), 1, -1, 1);
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
		func_48();
	}
}

void func_48()//Position - 0x2403
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
		func_32(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_49() == 2 == 0 && !unk_0x3A711520F83BAE98())
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

int func_49()//Position - 0x28C4
{
	return Global_25233;
}

int func_50(int iParam0, int iParam1)//Position - 0x28CF
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

int func_51(int iParam0)//Position - 0x2C43
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

void func_52(int iParam0)//Position - 0x2C72
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

void func_53(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2CB4
{
	func_54(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_54(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2CD5
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
		func_55();
	}
}

void func_55()//Position - 0x2EA8
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

int func_56()//Position - 0x2FC8
{
	func_37();
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

int func_57(int iParam0)//Position - 0x300E
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

void func_58(int iParam0, int iParam1)//Position - 0x3051
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_59(int iParam0)//Position - 0x306C
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

int func_60()//Position - 0x311D
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_61(Var0);
	return uVar1;
}

int func_61(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x313A
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

int func_62()//Position - 0x3314
{
	return 1;
}

int func_63()//Position - 0x331D
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x333F
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x6ADD12BF4D6D2587(*uParam2))
	{
		if (unk_0xB8DE76287EDC4957(*uParam2, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
			{
				if (unk_0xA8D0477084E86A92(*uParam0, *uParam2, 0))
				{
					if (unk_0xA6DECE14FC9A8C51(*iParam1))
					{
						unk_0xE30CF11C0EE14316(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xA6DECE14FC9A8C51(*iParam1))
				{
					*iParam1 = func_67(*uParam0, 1, 145);
				}
			}
			if (!unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_65(unk_0xB3328BA8976B416C(*uParam2, 1), 0);
					unk_0x0C71C8E276E3EC54(*iParam3, 1);
					unk_0xF27F72CA15E148EE(*iParam3, 9);
					unk_0x62BD54E491535B76(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0x67247AA13B7486A3(*iParam3) };
				vVar2 = { unk_0xB3328BA8976B416C(*uParam2, 1) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * system::timestep()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * system::timestep()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * system::timestep()));
				unk_0x645FF8D8B599FD84(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0xE30CF11C0EE14316(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				unk_0xE30CF11C0EE14316(iParam3);
			}
			if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
			{
				if (!unk_0xA6DECE14FC9A8C51(*iParam1))
				{
					*iParam1 = func_67(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)//Position - 0x348A
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)//Position - 0x34B6
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x34CD
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x351F
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

void func_69(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)//Position - 0x35C3
{
	vector3 vVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (((((((unk_0x6ADD12BF4D6D2587(iParam1) && iParam0 != iParam1) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam1))) && unk_0x5E0BEAAD15B888F3(iParam1)) && func_73(iParam0))
		{
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { unk_0x9EA50C5EC175E58E(*uParam2, *uParam3, vParam7) };
				func_72(iParam1, uParam4, fParam5);
			}
			if (!unk_0xEC211A86AB3726B6(iParam0))
			{
				*uParam6 = unk_0x53C562FD2B9E3AB0();
			}
			else if ((unk_0x53C562FD2B9E3AB0() - *uParam6) > iParam8)
			{
				if (func_71(iParam0, iParam1, 1) > fParam9 && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam2, true) > 20f)
				{
					if (!func_70(*uParam2))
					{
						if (!unk_0x9E06F0EE20F58CED(*uParam2, 3f))
						{
							unk_0x60225D4F755DFDB1(*uParam2, 1,5f, 0);
							unk_0x9B8406983378711E(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0xBD8D47FDC6902B2D(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iParam0, *uParam3);
							unk_0xACE486395AA1867D(iParam0, 1084227584);
							unk_0xFB2E9855F95E3BD3(iParam0, 10f);
							unk_0xA15269351F50F113(iParam0, true, true, 0);
							*uParam6 = unk_0x53C562FD2B9E3AB0();
						}
						else
						{
							vVar0 = { unk_0x9EA50C5EC175E58E(vLocal_61, fLocal_60, vParam7) };
							if (!func_70(vVar0))
							{
								if (!unk_0x9E06F0EE20F58CED(vVar0, 2f))
								{
									unk_0x60225D4F755DFDB1(vVar0, 1,5f, 0);
									unk_0x9B8406983378711E(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0xBD8D47FDC6902B2D(iParam0, vVar0, 1, false, 0, 1);
									unk_0x48ED7B2293A96722(iParam0, fLocal_60);
									unk_0xACE486395AA1867D(iParam0, 1084227584);
									unk_0xFB2E9855F95E3BD3(iParam0, 10f);
									unk_0xA15269351F50F113(iParam0, true, true, 0);
									*uParam6 = unk_0x53C562FD2B9E3AB0();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x53C562FD2B9E3AB0();
		}
	}
}

int func_70(vector3 vParam0)//Position - 0x37E1
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x380B
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

void func_72(int iParam0, var uParam1, var uParam2)//Position - 0x3869
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			*uParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			*uParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
	}
}

int func_73(int iParam0)//Position - 0x3899
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (!unk_0x8EE3A848975DDF21(iParam0, -1, 0))
			{
				iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38E4
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0xE30CF11C0EE14316(iParam1);
			}
			unk_0x486F346ADFE56674(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x88DDBE9908752BF0(*iParam0, 0))
			{
			}
			else if (unk_0x6ADD12BF4D6D2587(*iParam2))
			{
				if (unk_0xB8DE76287EDC4957(*iParam2, 0))
				{
					if (unk_0xA8D0477084E86A92(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(*iParam2))
	{
		if (unk_0xB8DE76287EDC4957(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x68130C56528B2CAD(*iParam2);
				unk_0x7E447606AE486B36(*iParam2);
				unk_0xF0037A481D043FE1(*iParam2, 0);
				unk_0x5380482A432E314E(iParam2);
				if (unk_0xA6DECE14FC9A8C51(*iParam3))
				{
					unk_0xE30CF11C0EE14316(iParam3);
				}
			}
		}
		else
		{
			unk_0x68130C56528B2CAD(*iParam2);
			unk_0x7E447606AE486B36(*iParam2);
			unk_0xF0037A481D043FE1(*iParam2, 0);
			unk_0x5380482A432E314E(iParam2);
			if (unk_0xA6DECE14FC9A8C51(*iParam3))
			{
				unk_0xE30CF11C0EE14316(iParam3);
			}
		}
	}
}

int func_75()//Position - 0x39D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_283)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_83[iVar1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar1]))
			{
				if (unk_0x21B6FFFD04C9FF3A(iLocal_83[iVar1], unk_0xFC1458A37D98B502(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_84[iVar1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar1]))
			{
				if (unk_0x21B6FFFD04C9FF3A(iLocal_84[iVar1], unk_0xFC1458A37D98B502(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_76()//Position - 0x3A92
{
	int iVar0;
	
	if (bLocal_283)
	{
		if (bLocal_110)
		{
		}
		else if (bLocal_107)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_86[0], 0))
			{
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_86[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[0]) && !unk_0x191BE1BC8F26F3C1(iLocal_87[0], 0))
			{
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_87[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x29812D3E8CF3BCD8(iLocal_99[iVar0]);
			if (unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_93[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(iLocal_93[iVar0]));
					iLocal_68++;
				}
			}
			else if (!unk_0x88DDBE9908752BF0(iLocal_83[iVar0], 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_93[iVar0]))
				{
					iLocal_93[iVar0] = func_67(iLocal_83[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x29812D3E8CF3BCD8(iLocal_99[iVar0]);
			if (unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar0]))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_94[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(iLocal_94[iVar0]));
					iLocal_69++;
				}
			}
			else if (!unk_0x88DDBE9908752BF0(iLocal_84[iVar0], 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_94[iVar0]))
				{
					iLocal_94[iVar0] = func_67(iLocal_84[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_68 >= 4 && iLocal_69 >= 4)
		{
			func_41();
		}
	}
	func_92();
	func_91();
	switch (iLocal_46)
	{
		case 0:
			if (((unk_0x891D5228E36D191C(unk_0x9EB17624F44A8DA4()) || !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_100 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1555,4f, 4730,817f, 49,1791f, 15f, 25f, 15f, false, true, 0)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1709,211f, 4659,571f, 36,688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_110)
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1555,4f, 4730,817f, 49,1791f, 15f, 25f, 15f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1709,211f, 4659,571f, 36,688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_110 = true;
					}
				}
				if (unk_0xC036F7DE6A42457A(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &vLocal_102, 1, 1077936128, 0))
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_102, 20f, 20f, 20f, false, true, 0))
					{
						unk_0x1D29C781A978C4FB(5, true);
						unk_0x1D29C781A978C4FB(3, true);
						system::settimera(0);
						func_89();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (system::timera() > 5000 || bLocal_110)
			{
				system::settimera(0);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_110)
			{
				if (system::timera() > 3500)
				{
					if (((!unk_0x191BE1BC8F26F3C1(iLocal_88[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_88[1], 0)) && !unk_0x3AB6A1A9084FB0A4(iLocal_83[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_83[1]))
					{
						unk_0xBB0358802AA14401(iLocal_83[0], iLocal_88[0], -1);
						unk_0xBB0358802AA14401(iLocal_83[1], iLocal_88[1], -1);
						unk_0xAE6EBBBBD8B9FB30(iLocal_83[0], 3, false);
						unk_0xAE6EBBBBD8B9FB30(iLocal_83[1], 3, false);
						unk_0x35963CCE03600881(iLocal_83[0], 0);
						unk_0x35963CCE03600881(iLocal_83[1], 0);
						iLocal_46 = 5;
					}
				}
			}
			if (system::timera() > 10000)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (!unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_103 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			iLocal_76 = unk_0x63A6486593EC7EC3(10, 15);
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1603,153f, 4892,943f, 60,1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x49A7AD0000D6AF17(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x9E06F0EE20F58CED(vLocal_280[0 /*3*/], 7f) && !unk_0x9E06F0EE20F58CED(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_86[0], 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_86[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_88(iLocal_86[0], iLocal_83[0]);
						}
						if (unk_0xB8DE76287EDC4957(iLocal_86[1], 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_86[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_88(iLocal_86[1], iLocal_83[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_107 = true;
						system::settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_103 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			iLocal_76 = unk_0x63A6486593EC7EC3(30, 35);
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -1603,153f, 4892,943f, 60,1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x49A7AD0000D6AF17(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x9E06F0EE20F58CED(vLocal_280[0 /*3*/], 7f) && !unk_0x9E06F0EE20F58CED(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_87[0], 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_87[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_88(iLocal_87[0], iLocal_84[0]);
						}
						if (unk_0xB8DE76287EDC4957(iLocal_87[1], 0))
						{
							unk_0xBD8D47FDC6902B2D(iLocal_87[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_88(iLocal_87[1], iLocal_84[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						system::settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_103 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			iLocal_76 = unk_0x63A6486593EC7EC3(5, 10);
			if (unk_0x49A7AD0000D6AF17(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x9E06F0EE20F58CED(vLocal_280[0 /*3*/], 7f) && !unk_0x9E06F0EE20F58CED(vLocal_280[1 /*3*/], 7f))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_88[0], 0))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_88[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
						func_88(iLocal_88[0], iLocal_83[0]);
					}
					if (unk_0xB8DE76287EDC4957(iLocal_88[1], 0))
					{
						unk_0xBD8D47FDC6902B2D(iLocal_88[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
						func_88(iLocal_88[1], iLocal_83[1]);
					}
					if (func_36() == 0)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 1)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 2)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_107 = true;
					system::settimera(0);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_63())
			{
				fLocal_64 = unk_0x5B811202FCBE9E9D(1,5f, 2,5f);
				fLocal_65 = unk_0x5B811202FCBE9E9D(2f, 4f);
				fLocal_66 = unk_0x5B811202FCBE9E9D(0,1f, 2f);
				if (iLocal_78 < 5 && iLocal_79 < unk_0x53C562FD2B9E3AB0())
				{
					vLocal_50 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					unk_0x0BEA49DFEFF2A1EA((vLocal_50.x + fLocal_64), (vLocal_50.y + fLocal_65), (vLocal_50.z + fLocal_66), (vLocal_50.x - fLocal_64), (vLocal_50.y - fLocal_65), vLocal_50.z, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_79 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(200, 500));
					iLocal_78++;
				}
			}
			if (iLocal_78 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4336
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_78(sParam2, iParam3, 0);
}

int func_78(char* sParam0, int iParam1, bool bParam2)//Position - 0x4384
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
					func_86();
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
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_84();
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
				func_83();
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
				if (func_82())
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
			if (func_81())
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
			func_80();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_79();
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
		func_86();
	}
	return 0;
}

void func_79()//Position - 0x4650
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

void func_80()//Position - 0x4681
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

int func_81()//Position - 0x4716
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x473D
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

void func_83()//Position - 0x47D6
{
	if (func_31(14))
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
		Global_14453 = func_36();
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

void func_84()//Position - 0x4878
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

bool func_85(int iParam0, int iParam1)//Position - 0x48CF
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

void func_86()//Position - 0x490A
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

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4961
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

void func_88(int iParam0, int iParam1)//Position - 0x49B7
{
	unk_0xEDC33A771FAEB393(iParam0, false);
	unk_0xACE486395AA1867D(iParam0, 1084227584);
	vLocal_279 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	vLocal_281 = { vLocal_103 - vLocal_279 };
	unk_0x48ED7B2293A96722(iParam0, unk_0xA67DD8488EBA5F6D(vLocal_281.x, vLocal_281.y));
	if (bLocal_110)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x23E30E165964B11A(iParam1, unk_0xFC1458A37D98B502());
				system::wait(1);
				if (!unk_0x3AB6A1A9084FB0A4(iParam1))
				{
					unk_0xCEE184F0AF1715AC(iParam1, 32, 1);
				}
			}
			else
			{
				unk_0xD2C269DBF147B406(iParam1, iParam0, unk_0xFC1458A37D98B502(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
			{
				unk_0xFB2E9855F95E3BD3(iParam0, unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()));
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iParam1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x23E30E165964B11A(iParam1, unk_0xFC1458A37D98B502());
		}
		else
		{
			unk_0xD2C269DBF147B406(iParam1, iParam0, unk_0xFC1458A37D98B502(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0xFB2E9855F95E3BD3(iParam0, unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()));
	}
}

void func_89()//Position - 0x4ABF
{
	int iVar0;
	
	iLocal_86[0] = unk_0xEA60F3B426BB095B(joaat("rebel"), -1595,964f, 4732,479f, 0f, 305f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_86[0], true, 0);
	unk_0xA15269351F50F113(iLocal_86[0], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_86[0], 2);
	unk_0x35829E9BFCED1A3F(iLocal_86[0], true);
	unk_0xEDC33A771FAEB393(iLocal_86[0], true);
	unk_0xE58BC5B025017AE2(iLocal_86[0], "49GNL112");
	iLocal_86[1] = unk_0xEA60F3B426BB095B(joaat("rebel"), -1570,34f, 4733,755f, 0f, 305f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_86[1], true, 0);
	unk_0xA15269351F50F113(iLocal_86[1], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_86[1], 2);
	unk_0x35829E9BFCED1A3F(iLocal_86[1], true);
	unk_0xEDC33A771FAEB393(iLocal_86[1], true);
	unk_0xE58BC5B025017AE2(iLocal_86[1], "47TMS703");
	iLocal_88[0] = unk_0xEA60F3B426BB095B(joaat("sanchez"), Vector(0f, 4732,479f, -1595,964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_88[0], true, 0);
	unk_0xA15269351F50F113(iLocal_88[0], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_88[0], 2);
	unk_0x35829E9BFCED1A3F(iLocal_88[0], true);
	unk_0xEDC33A771FAEB393(iLocal_88[0], true);
	unk_0xE58BC5B025017AE2(iLocal_88[0], "49GNL112");
	iLocal_88[1] = unk_0xEA60F3B426BB095B(joaat("sanchez"), Vector(0f, 4733,755f, -1570,34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_88[1], true, 0);
	unk_0xA15269351F50F113(iLocal_88[1], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_88[1], 2);
	unk_0x35829E9BFCED1A3F(iLocal_88[1], true);
	unk_0xEDC33A771FAEB393(iLocal_88[1], true);
	unk_0xE58BC5B025017AE2(iLocal_88[1], "47TMS703");
	iLocal_83[0] = unk_0x00D1A9572426E8DD(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_83[1] = unk_0x00D1A9572426E8DD(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!bLocal_110)
	{
		iLocal_83[2] = unk_0x00D1A9572426E8DD(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
		iLocal_83[3] = unk_0x00D1A9572426E8DD(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
	}
	iLocal_87[0] = unk_0xEA60F3B426BB095B(joaat("bobcatxl"), -1356,281f, 5000f, 0f, 125,2811f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_87[0], true, 0);
	unk_0xA15269351F50F113(iLocal_87[0], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_87[0], 2);
	unk_0x35829E9BFCED1A3F(iLocal_87[0], true);
	unk_0xEDC33A771FAEB393(iLocal_87[0], true);
	unk_0xE58BC5B025017AE2(iLocal_87[0], "49GNL112");
	iLocal_87[1] = unk_0xEA60F3B426BB095B(joaat("bobcatxl"), -1373,589f, 5000f, 0f, 125,459f, true, true, false);
	unk_0xDD29FF4BAB8AFF9C(iLocal_87[1], true, 0);
	unk_0xA15269351F50F113(iLocal_87[1], true, true, 0);
	unk_0xBAB8785EE2F06BBE(iLocal_87[1], 2);
	unk_0x35829E9BFCED1A3F(iLocal_87[1], true);
	unk_0xEDC33A771FAEB393(iLocal_87[1], true);
	unk_0xE58BC5B025017AE2(iLocal_87[1], "47TMS703");
	iLocal_84[0] = unk_0x00D1A9572426E8DD(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[1] = unk_0x00D1A9572426E8DD(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[2] = unk_0x00D1A9572426E8DD(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	iLocal_84[3] = unk_0x00D1A9572426E8DD(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	unk_0x4DE114E3C7F8B7C2("RE_deal1", &iLocal_111);
	unk_0x4DE114E3C7F8B7C2("RE_deal2", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
		{
			unk_0xCE93FCB8A8D8DF0B(iLocal_83[iVar0], iLocal_111);
			unk_0xDD29FF4BAB8AFF9C(iLocal_83[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x9E058151726E58DE(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[1]))
				{
					unk_0x9E058151726E58DE(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xBB3CC641B6AED5E5(iLocal_83[iVar0], 15);
				unk_0xAE6EBBBBD8B9FB30(iLocal_83[iVar0], 3, false);
			}
			else
			{
				unk_0x9E058151726E58DE(iLocal_83[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xBB3CC641B6AED5E5(iLocal_83[iVar0], 13);
			}
			unk_0xAE6EBBBBD8B9FB30(iLocal_83[iVar0], 13, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_83[iVar0], 2, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_83[iVar0], 1, true);
			func_90(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
		{
			unk_0xCE93FCB8A8D8DF0B(iLocal_84[iVar0], iLocal_112);
			unk_0xDD29FF4BAB8AFF9C(iLocal_84[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x9E058151726E58DE(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[1]))
				{
					unk_0x9E058151726E58DE(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xBB3CC641B6AED5E5(iLocal_83[iVar0], 15);
				unk_0xAE6EBBBBD8B9FB30(iLocal_83[iVar0], 3, false);
				func_90(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x9E058151726E58DE(iLocal_84[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xBB3CC641B6AED5E5(iLocal_84[iVar0], 13);
				func_90(&uLocal_114, 5, iLocal_84[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0xAE6EBBBBD8B9FB30(iLocal_84[iVar0], 13, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_84[iVar0], 2, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_84[iVar0], 1, true);
		}
		iVar0++;
	}
	unk_0xF96119FCCD4D1889(3, iLocal_111, iLocal_112);
	unk_0xF96119FCCD4D1889(3, iLocal_112, iLocal_111);
	unk_0xF96119FCCD4D1889(3, iLocal_111, 1862763509);
	unk_0xF96119FCCD4D1889(3, iLocal_112, 1862763509);
	unk_0x14776E43F90DD454(joaat("g_m_m_chigoon_02"));
	unk_0x14776E43F90DD454(joaat("g_m_y_salvagoon_03"));
	unk_0x14776E43F90DD454(joaat("rebel"));
	unk_0x14776E43F90DD454(joaat("bobcatxl"));
	unk_0x14776E43F90DD454(joaat("sanchez"));
	unk_0x14776E43F90DD454(joaat("a_c_rottweiler"));
	bLocal_283 = true;
	iLocal_44 = 1;
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5059
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

void func_91()//Position - 0x50F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_74)
	{
		case 0:
			if (bLocal_107)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_83[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_108)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar1]))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_84[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xF96119FCCD4D1889(5, iLocal_111, iLocal_112);
			unk_0xF96119FCCD4D1889(5, iLocal_112, iLocal_111);
			unk_0xF96119FCCD4D1889(5, iLocal_111, 1862763509);
			unk_0xF96119FCCD4D1889(5, iLocal_112, 1862763509);
			if (bLocal_107)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar2]))
					{
						if ((!unk_0x7ED4D0E480A6EC43(iLocal_83[iVar2], 0) && unk_0x78F50AA8F955BEFC(iLocal_83[iVar2], 579380604) != 1) && unk_0x78F50AA8F955BEFC(iLocal_83[iVar2], 579380604) != 0)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_83[iVar2]);
							unk_0xD7F5B2902EBBD04E(iLocal_83[iVar2], unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xE9B3D12A64CC7C1A(iLocal_83[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_77(&uLocal_114, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x53C562FD2B9E3AB0();
					iLocal_74 = 4;
				}
			}
			if (bLocal_108)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar3]))
					{
						if ((!unk_0x7ED4D0E480A6EC43(iLocal_84[iVar3], 0) && unk_0x78F50AA8F955BEFC(iLocal_84[iVar3], 579380604) != 1) && unk_0x78F50AA8F955BEFC(iLocal_84[iVar3], 579380604) != 0)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_84[iVar3]);
							unk_0xD7F5B2902EBBD04E(iLocal_84[iVar3], unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xE9B3D12A64CC7C1A(iLocal_84[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_77(&uLocal_114, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x53C562FD2B9E3AB0();
					iLocal_74 = 4;
				}
			}
			break;
	}
}

void func_92()//Position - 0x5329
{
	switch (iLocal_72)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_101, 7f, 7f, 10f, false, true, 0))
				{
					func_94();
					system::wait(0);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x60C06BFD037BB7CF(iLocal_80, unk_0xFC1458A37D98B502(), -1, 2048, 2);
					if (!unk_0xA6DECE14FC9A8C51(iLocal_90))
					{
						iLocal_90 = func_93(iLocal_97);
					}
					iLocal_71 = unk_0x53C562FD2B9E3AB0();
					iLocal_72++;
				}
			}
			else
			{
				iLocal_72++;
			}
			break;
	}
	switch (iLocal_73)
	{
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_80, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_63())
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
						{
							unk_0x60C06BFD037BB7CF(iLocal_80, unk_0xFC1458A37D98B502(), -1, 2048, 2);
							system::settimerb(0);
							iLocal_73++;
						}
					}
				}
			}
			else
			{
				system::settimerb(0);
				iLocal_73++;
			}
			break;
		
		case 2:
			if (!func_63() || system::timerb() > 4000)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
				{
					unk_0xE01CE1EBCD7EE551(iLocal_80, 0, 0);
					unk_0xE30CF11C0EE14316(&iLocal_91);
				}
				if (system::timerb() > 7000)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[6]))
					{
						unk_0xE01CE1EBCD7EE551(iLocal_81[6], 0, 0);
						unk_0xE30CF11C0EE14316(&(iLocal_92[6]));
					}
				}
				if (system::timerb() > 9000)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
					{
						unk_0xE01CE1EBCD7EE551(iLocal_81[7], 0, 0);
						unk_0xE30CF11C0EE14316(&(iLocal_92[7]));
					}
					iLocal_73++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[6]))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_81[6], 0, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_81[7], 0, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_80, 0, 0);
			}
			break;
	}
}

int func_93(int iParam0)//Position - 0x5518
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_66(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

void func_94()//Position - 0x5550
{
	Global_14622 = 0;
	func_95();
}

void func_95()//Position - 0x5560
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_96()//Position - 0x5581
{
	int iVar0;
	
	if (unk_0x58786AA7A9E510C0(iLocal_97))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_89))
		{
			unk_0xE30CF11C0EE14316(&iLocal_89);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_90))
		{
			unk_0xE30CF11C0EE14316(&iLocal_90);
		}
		iLocal_73 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		unk_0x94BD6F0436473406(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_81[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(iLocal_92[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(iLocal_92[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_82)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_82[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_124())
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_48[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_89))
				{
					unk_0xE30CF11C0EE14316(&iLocal_89);
				}
				if ((!unk_0xA6DECE14FC9A8C51(iLocal_91) && !unk_0xA6DECE14FC9A8C51(iLocal_92[6])) && !unk_0xA6DECE14FC9A8C51(iLocal_92[7]))
				{
					iLocal_91 = func_67(iLocal_80, 1, 145);
					iLocal_92[6] = func_67(iLocal_81[6], 1, 145);
					iLocal_92[7] = func_67(iLocal_81[7], 1, 145);
				}
				unk_0x9C27373CC69ECF87(iLocal_91, false);
				unk_0x9C27373CC69ECF87(iLocal_92[6], false);
				unk_0x9C27373CC69ECF87(iLocal_92[7], false);
				func_97(1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[6]))
		{
			if (((((unk_0x78F50AA8F955BEFC(iLocal_81[6], 1785177548) != 1 && unk_0x78F50AA8F955BEFC(iLocal_81[6], 1785177548) != 0) || unk_0x6B4C37F2EEC636CC(iLocal_81[6])) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_81[6])) || unk_0x9479D23F28CA059C(iLocal_81[6])) || unk_0x55ABE3023BD038CC(iLocal_81[6]))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_81[6], 0, 0);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
		{
			if (((((unk_0x78F50AA8F955BEFC(iLocal_81[7], 1785177548) != 1 && unk_0x78F50AA8F955BEFC(iLocal_81[7], 1785177548) != 0) || unk_0x6B4C37F2EEC636CC(iLocal_81[7])) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_81[7])) || unk_0x9479D23F28CA059C(iLocal_81[7])) || unk_0x55ABE3023BD038CC(iLocal_81[7]))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_81[7], 0, 0);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
		{
			if (((((unk_0x78F50AA8F955BEFC(iLocal_80, 1785177548) != 1 && unk_0x78F50AA8F955BEFC(iLocal_80, 1785177548) != 0) || unk_0x6B4C37F2EEC636CC(iLocal_80)) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_80)) || unk_0x9479D23F28CA059C(iLocal_80)) || unk_0x55ABE3023BD038CC(iLocal_80))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_80, 0, 0);
			}
		}
		if (!bLocal_106)
		{
		}
	}
	func_92();
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[6]))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_81[6], 1) + Vector(0f, 2,5f, 0f), 9f, 5f, 5f, false, true, 0) && unk_0xE56ACE711345F330(unk_0xFC1458A37D98B502(), iLocal_81[6]))
				{
					unk_0x60C06BFD037BB7CF(iLocal_81[6], unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_81[6], 4000, 2048, 2);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_71 = unk_0x53C562FD2B9E3AB0();
					iLocal_75 = 1;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_81[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && unk_0xE56ACE711345F330(unk_0xFC1458A37D98B502(), iLocal_81[7]))
				{
					unk_0x60C06BFD037BB7CF(iLocal_81[7], unk_0xFC1458A37D98B502(), -1, 2048, 2);
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_81[7], 4000, 2048, 2);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_71 = unk_0x53C562FD2B9E3AB0();
					iLocal_75 = 1;
				}
			}
			if (unk_0x3AB6A1A9084FB0A4(iLocal_81[6]) && unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
			{
				iLocal_75 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA6DECE14FC9A8C51(iLocal_91))
			{
				unk_0x9C27373CC69ECF87(iLocal_91, true);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_92[6]))
			{
				unk_0x9C27373CC69ECF87(iLocal_92[6], true);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_92[7]))
			{
				unk_0x9C27373CC69ECF87(iLocal_92[7], true);
			}
			iLocal_70 = unk_0x53C562FD2B9E3AB0();
			if ((iLocal_70 - iLocal_71) > 6000 && !func_63())
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[6]))
				{
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_81[7]))
				{
				}
				if (!unk_0xA6DECE14FC9A8C51(iLocal_90))
				{
					iLocal_90 = func_93(iLocal_97);
				}
				unk_0x94BD6F0436473406(0f);
				if (!func_124())
				{
					func_97(1);
				}
				iLocal_75 = 2;
			}
			break;
	}
}

int func_97(int iParam0)//Position - 0x5A32
{
	if (func_101())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_51(Global_104544))
		{
			func_98(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_51(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x5A85
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)//Position - 0x5B66
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

char* func_100(int iParam0)//Position - 0x5B7D
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

int func_101()//Position - 0x5BC0
{
	switch (func_102(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5BF6
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
		if (func_106(0))
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
		if (!func_104(iParam2))
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
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)//Position - 0x5D2D
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

bool func_104(int iParam0)//Position - 0x5D7C
{
	return func_105(iParam0, Global_35861);
}

int func_105(int iParam0, int iParam1)//Position - 0x5D8D
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

int func_106(int iParam0)//Position - 0x5F6E
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()//Position - 0x5F90
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iLocal_85[0], 0))
	{
		if (unk_0x317536BCEA8FA6B0(iLocal_85[0], -1, 0) == iLocal_81[8])
		{
			unk_0x9D4DE1428B768541(iLocal_85[0], 60000f);
			unk_0xA7F30A962399F3CD(iLocal_85[0]);
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_80))
	{
		if (unk_0x9F887157983E8EFC(iLocal_80))
		{
			unk_0xE01CE1EBCD7EE551(iLocal_80, 0, 0);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_91))
	{
		unk_0xE30CF11C0EE14316(&iLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x9E06F0EE20F58CED(vLocal_100, 30f) && system::vdist(func_2(unk_0x9EB17624F44A8DA4()), vLocal_100) > 300f)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_81[iVar0]))
			{
				unk_0x486F346ADFE56674(&(iLocal_81[iVar0]));
			}
		}
		if (unk_0x3AB6A1A9084FB0A4(iLocal_81[iVar0]))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_92[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_92[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_108()//Position - 0x6078
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	unk_0x6FF834D85E2DD4C6(joaat("g_m_m_chigoon_02"));
	unk_0x6FF834D85E2DD4C6(joaat("g_m_y_salvagoon_03"));
	unk_0x6FF834D85E2DD4C6(joaat("rebel"));
	unk_0x6FF834D85E2DD4C6(joaat("bobcatxl"));
	unk_0x6FF834D85E2DD4C6(joaat("sanchez"));
	unk_0x6FF834D85E2DD4C6(joaat("a_c_rottweiler"));
	unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
	unk_0x6450931B826B49D9("random@dealgonewrong");
	unk_0x6450931B826B49D9("random@dealgonewrongdead_peds");
	if ((((((((unk_0x9A0B2ED5055D3F0B(joaat("g_m_m_chigoon_02")) && unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_salvagoon_03"))) && unk_0x9A0B2ED5055D3F0B(joaat("rebel"))) && unk_0x9A0B2ED5055D3F0B(joaat("bobcatxl"))) && unk_0x9A0B2ED5055D3F0B(joaat("sanchez"))) && unk_0x9A0B2ED5055D3F0B(joaat("a_c_rottweiler"))) && unk_0x9A0B2ED5055D3F0B(joaat("prop_security_case_01"))) && unk_0x3A801AA34DD821BE("random@dealgonewrong")) && unk_0x3A801AA34DD821BE("random@dealgonewrongdead_peds"))
	{
		unk_0xCB389937EDB1519A(vLocal_100 - Vector(150f, 150f, 150f), vLocal_100 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x2E4932E63763FE26(joaat("bobcatxl"), true);
		unk_0x2E4932E63763FE26(joaat("rebel"), true);
		unk_0x1D29C781A978C4FB(5, false);
		unk_0x1D29C781A978C4FB(3, false);
		iLocal_85[0] = unk_0xEA60F3B426BB095B(joaat("bobcatxl"), -1626,94f, 4729,889f, 51,3463f, 347,1188f, true, true, false);
		unk_0xDD29FF4BAB8AFF9C(iLocal_85[0], true, 0);
		unk_0xACE486395AA1867D(iLocal_85[0], 1084227584);
		unk_0xA15269351F50F113(iLocal_85[0], true, true, 0);
		unk_0xBAB8785EE2F06BBE(iLocal_85[0], 2);
		unk_0xB38E13EF2EC6F0E9(iLocal_85[0], 500f);
		unk_0xC7C8A97B94385008(iLocal_85[0], 500f);
		unk_0x7B3133EBCD34B431(iLocal_85[0], 1, true);
		unk_0x09762DAA0F9D9309(iLocal_85[0], 0, 0, 1148846080);
		unk_0xCEA670B96BB30D75(iLocal_85[0], 6);
		unk_0xDFC63F22B454FFF5(iLocal_85[0], "RADIO_06_COUNTRY");
		unk_0xE58BC5B025017AE2(iLocal_85[0], "76JON418");
		unk_0x47E2FD029BB8567C(iLocal_85[0], true);
		iLocal_85[1] = unk_0xEA60F3B426BB095B(joaat("rebel"), -1619,432f, 4747,792f, 52,7502f, 146,6017f, true, true, false);
		unk_0xDD29FF4BAB8AFF9C(iLocal_85[1], true, 0);
		unk_0xACE486395AA1867D(iLocal_85[1], 1084227584);
		unk_0xA15269351F50F113(iLocal_85[1], true, true, 0);
		unk_0xBAB8785EE2F06BBE(iLocal_85[1], 2);
		unk_0xB38E13EF2EC6F0E9(iLocal_85[1], 600f);
		unk_0xC7C8A97B94385008(iLocal_85[1], 400f);
		unk_0x7B3133EBCD34B431(iLocal_85[1], 1, true);
		unk_0x7B3133EBCD34B431(iLocal_85[1], 2, true);
		unk_0x7B3133EBCD34B431(iLocal_85[1], 3, false);
		unk_0x7B3133EBCD34B431(iLocal_85[1], 4, false);
		unk_0xCEA670B96BB30D75(iLocal_85[1], 6);
		unk_0xDFC63F22B454FFF5(iLocal_85[1], "RADIO_06_COUNTRY");
		unk_0xE58BC5B025017AE2(iLocal_85[1], "79ERK121");
		unk_0x47E2FD029BB8567C(iLocal_85[1], true);
		unk_0x662185A7CE2038B6(iLocal_85[1], 1);
		iLocal_85[2] = unk_0xEA60F3B426BB095B(joaat("bobcatxl"), -1636,216f, 4748,061f, 51,5484f, 199,3236f, true, true, false);
		unk_0xE58BC5B025017AE2(iLocal_85[2], "83JOH802");
		unk_0xDD29FF4BAB8AFF9C(iLocal_85[2], true, 0);
		unk_0xACE486395AA1867D(iLocal_85[2], 1084227584);
		unk_0xA15269351F50F113(iLocal_85[2], true, true, 0);
		unk_0xBAB8785EE2F06BBE(iLocal_85[2], 2);
		unk_0xB38E13EF2EC6F0E9(iLocal_85[2], 60f);
		unk_0xC7C8A97B94385008(iLocal_85[2], 1000f);
		unk_0x7B3133EBCD34B431(iLocal_85[2], 1, false);
		unk_0x09762DAA0F9D9309(iLocal_85[2], 1, 0, 1148846080);
		iLocal_85[3] = unk_0xEA60F3B426BB095B(joaat("rebel"), -1641,578f, 4736,783f, 52,5984f, 278,1865f, true, true, false);
		unk_0xE58BC5B025017AE2(iLocal_85[3], "85TOR114");
		unk_0xDD29FF4BAB8AFF9C(iLocal_85[3], true, 0);
		unk_0xACE486395AA1867D(iLocal_85[3], 1084227584);
		unk_0xA15269351F50F113(iLocal_85[3], true, true, 0);
		unk_0xBAB8785EE2F06BBE(iLocal_85[3], 2);
		unk_0xB38E13EF2EC6F0E9(iLocal_85[3], 500f);
		unk_0xC7C8A97B94385008(iLocal_85[3], 500f);
		unk_0x7B3133EBCD34B431(iLocal_85[3], 1, false);
		unk_0x7B3133EBCD34B431(iLocal_85[3], 2, false);
		unk_0x7B3133EBCD34B431(iLocal_85[3], 3, false);
		unk_0x7B3133EBCD34B431(iLocal_85[3], 4, false);
		unk_0x09762DAA0F9D9309(iLocal_85[3], 0, 0, 1148846080);
		unk_0x09762DAA0F9D9309(iLocal_85[3], 5, 0, 1148846080);
		if (!unk_0xB8B3E5529EDB87D4(iLocal_97))
		{
			iVar0 = 0;
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
			unk_0x872F1C1F8587CCC7(&iVar0, 4);
			iLocal_97 = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), vLocal_101, -72f, 0f, 42,48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x14776E43F90DD454(joaat("prop_security_case_01"));
		}
		vLocal_104[0 /*3*/] = { -1640,411f, 4740,702f, 52,6218f };
		vLocal_104[1 /*3*/] = { -1624,664f, 4746,569f, 51,541f };
		vLocal_104[2 /*3*/] = { -1626,339f, 4734,232f, 51,6176f };
		vLocal_104[3 /*3*/] = { -1634,297f, 4741,213f, 51,9737f };
		vLocal_104[4 /*3*/] = { -1644,717f, 4736,446f, 52,3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xB8B3E5529EDB87D4(iLocal_98[iVar1]))
			{
				iVar2 = 0;
				unk_0x872F1C1F8587CCC7(&iVar2, 3);
				unk_0x872F1C1F8587CCC7(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_98[iVar1] = unk_0x06583789B8C15A6C(joaat("pickup_weapon_sawnoffshotgun"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_98[iVar1] = unk_0x85CE54AA667066FE(joaat("pickup_weapon_assaultrifle"), vLocal_104[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					iLocal_98[iVar1] = unk_0x06583789B8C15A6C(joaat("pickup_weapon_pistol"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		vLocal_48[0 /*3*/] = { -1636,535f, 4708,455f, 46,09f };
		fLocal_49[0] = 177,0024f;
		vLocal_48[1 /*3*/] = { -1621,19f, 4744,868f, 52,4254f };
		fLocal_49[1] = 146,9645f;
		vLocal_48[2 /*3*/] = { -1622,795f, 4735,975f, 51,474f };
		fLocal_49[2] = 48,6546f;
		vLocal_48[3 /*3*/] = { -1632,695f, 4742,906f, 51,8604f };
		fLocal_49[3] = 155,0678f;
		vLocal_48[4 /*3*/] = { -1629,544f, 4738,6f, 52,1784f };
		fLocal_49[4] = 278,3085f;
		vLocal_48[5 /*3*/] = { -1634,764f, 4745,188f, 51,3926f };
		fLocal_49[5] = 270,3501f;
		vLocal_48[7 /*3*/] = { -1628,321f, 4731,502f, 51,7644f };
		fLocal_49[7] = 352,9167f;
		vLocal_48[6 /*3*/] = { -1640,311f, 4738,4f, 52,2f };
		fLocal_49[6] = 34,1111f;
		vLocal_63 = { -1641,735f, 4692,13f, 39,394f };
		fLocal_67 = 326,7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_81[iVar1] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_y_salvagoon_03"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
				unk_0xAE01EF4BC84AFE7C(iLocal_81[iVar1], 227, true);
			}
			else
			{
				iLocal_81[iVar1] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_m_chigoon_02"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_82[0] = unk_0xAC992EFAD62C33BF(26, joaat("a_c_rottweiler"), -1635,005f, 4737,181f, 53,4995f, 33,4155f, 1, true);
		iLocal_82[1] = unk_0xAC992EFAD62C33BF(26, joaat("a_c_rottweiler"), -1625,215f, 4741,119f, 52,5762f, 316,2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_82)
		{
			unk_0x5718F894FDA63A9E(iLocal_82[iVar1], 1);
			unk_0xB18E1DBC397238E1(iLocal_82[iVar1], true, 0);
			unk_0xAE01EF4BC84AFE7C(iLocal_82[iVar1], 227, true);
			vLocal_50 = { unk_0xB3328BA8976B416C(iLocal_82[iVar1], 1) };
			vLocal_51 = { vLocal_50.x, (vLocal_50.y - 2f), (vLocal_50.z - 0,5f) };
			vLocal_52 = { vLocal_50.x, (vLocal_50.y + 50f), (vLocal_50.z - 0,5f) };
			unk_0x0BEA49DFEFF2A1EA(vLocal_51, vLocal_52, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x22F63D02D1D91EBC(iLocal_81[0], "random@dealgonewrongdead_peds", "ped_b", -1635,928f, 4707,941f, 46,383f, -29,25f, 12,25f, 171,75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_81[1], "random@dealgonewrongdead_peds", "ped_a", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_81[2], "random@dealgonewrongdead_peds", "ped_b", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_81[3], "random@dealgonewrongdead_peds", "ped_c", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_81[4], "random@dealgonewrongdead_peds", "ped_d", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_81[5], "random@dealgonewrongdead_peds", "ped_e", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_82[0], "random@dealgonewrongdead_peds", "dog_a", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x22F63D02D1D91EBC(iLocal_82[1], "random@dealgonewrongdead_peds", "dog_b", -1626,923f, 4729,901f, 52,214f, -1,341f, 1,085f, -12,902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x1B14320C034455E9(50f);
		func_110();
		unk_0x1B14320C034455E9(1f);
		if (unk_0xB8DE76287EDC4957(iLocal_85[0], 0))
		{
			iLocal_81[8] = unk_0x00D1A9572426E8DD(iLocal_85[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			unk_0xDD29FF4BAB8AFF9C(iLocal_81[8], true, 0);
			unk_0x4F94C8AB03F5A349(iLocal_81[8], 1);
			unk_0xE01CE1EBCD7EE551(iLocal_81[8], 0, 0);
		}
		if (!unk_0xA6DECE14FC9A8C51(iLocal_89))
		{
		}
		unk_0x4DE114E3C7F8B7C2("re_DealGoneWrong", &iLocal_113);
		iLocal_81[6] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_m_chigoon_02"), vLocal_48[6 /*3*/], fLocal_49[6], 1, true);
		func_90(&uLocal_114, 4, iLocal_81[6], "REDGWChinese", 0, 1);
		unk_0x771A86309E0CA47B(iLocal_81[6], true);
		unk_0x35829E9BFCED1A3F(iLocal_81[6], true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_81[6], iLocal_113);
		iVar3 = unk_0x8383F9C605E523B7(vLocal_48[6 /*3*/] + Vector(1,05f, 0f, 0f), -7f, 0f, 34,1111f, 0);
		unk_0x8E628F774C748D93(iLocal_81[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xD0E12C501EE26329(iVar3, true);
		unk_0xE9B3D12A64CC7C1A(iLocal_81[6], true);
		unk_0xAE01EF4BC84AFE7C(iLocal_81[6], 227, true);
		iLocal_81[7] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_y_salvagoon_03"), -1640,311f, 4738,4f, 50,2f, fLocal_49[7], 1, true);
		func_90(&uLocal_114, 5, iLocal_81[7], "REDGWSalvadoran", 0, 1);
		unk_0x771A86309E0CA47B(iLocal_81[7], true);
		unk_0x35829E9BFCED1A3F(iLocal_81[7], true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_81[7], iLocal_113);
		iVar4 = unk_0x8383F9C605E523B7(vLocal_48[7 /*3*/] + Vector(0,92f, 0,65f, -0,65f), 0f, 0f, 34,1111f, 0);
		unk_0x8E628F774C748D93(iLocal_81[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xD0E12C501EE26329(iVar4, true);
		unk_0x0ADADE14A7CF26EF(iVar4, 0,5f);
		unk_0xE9B3D12A64CC7C1A(iLocal_81[7], true);
		unk_0xAE01EF4BC84AFE7C(iLocal_81[7], 227, true);
		iLocal_80 = unk_0xAC992EFAD62C33BF(22, joaat("g_m_m_chigoon_02"), vLocal_63, fLocal_67, 1, true);
		func_90(&uLocal_114, 4, iLocal_80, "REDGWChinese", 0, 1);
		unk_0x771A86309E0CA47B(iLocal_80, true);
		unk_0xCE93FCB8A8D8DF0B(iLocal_80, iLocal_113);
		iVar5 = unk_0x8383F9C605E523B7(vLocal_63, 7,5f, -12,75f, 51,5f, 0);
		unk_0x8E628F774C748D93(iLocal_80, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xD0E12C501EE26329(iVar5, true);
		unk_0x59AF3B40AE222194(iLocal_80, 4f, 18f, 326,7277f, 0, 1);
		unk_0xE9B3D12A64CC7C1A(iLocal_80, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_80, 227, true);
		unk_0xF96119FCCD4D1889(5, iLocal_113, 1862763509);
		if (func_36() == 0)
		{
			func_90(&uLocal_114, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		}
		if (func_36() == 1)
		{
			func_90(&uLocal_114, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
		}
		if (func_36() == 2)
		{
			func_90(&uLocal_114, 2, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
		}
		iLocal_99[0] = unk_0x93B85673224CA2DE(1110, -1632,953f, 4745,359f, 51,7876f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[1] = unk_0x93B85673224CA2DE(1110, -1634,87f, 4744,458f, 51,8233f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[2] = unk_0x93B85673224CA2DE(1110, -1636,971f, 4736,595f, 52,2814f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[3] = unk_0x93B85673224CA2DE(1110, -1625,561f, 4741,241f, 51,7102f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[4] = unk_0x93B85673224CA2DE(1110, -1621,533f, 4744,576f, 51,9093f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[5] = unk_0x93B85673224CA2DE(1110, -1621,963f, 4737,039f, 51,4174f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[6] = unk_0x93B85673224CA2DE(1110, -1628,517f, 4736,906f, 51,8207f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[7] = unk_0x93B85673224CA2DE(1110, -1629,324f, 4732,146f, 51,6947f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[8] = unk_0x93B85673224CA2DE(1110, -1640,287f, 4738,437f, 52,1756f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[9] = unk_0x93B85673224CA2DE(1110, -1640,055f, 4701,995f, 41,2428f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		system::wait(0);
		iLocal_99[10] = unk_0x93B85673224CA2DE(1110, -1641,924f, 4692,236f, 38,3762f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0,196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_81[iVar1], 0))
			{
				unk_0x5718F894FDA63A9E(iLocal_81[iVar1], 1);
				unk_0x4CCB38E6EFCF7CD6(iLocal_81[iVar1], 0, 0,3f, 0,6f, 3);
				unk_0x4CCB38E6EFCF7CD6(iLocal_81[iVar1], 0, 0,65f, 0,6f, 3);
				system::wait(unk_0x63A6486593EC7EC3(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_92[iVar1]))
					{
						unk_0xE30CF11C0EE14316(&(iLocal_92[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x6ADD12BF4D6D2587(unk_0xC733212BF9066BDF()))
		{
			if (!unk_0x9761C10D57B68069(unk_0xC733212BF9066BDF()))
			{
				unk_0xDD29FF4BAB8AFF9C(unk_0xC733212BF9066BDF(), true, 0);
			}
		}
		iLocal_282 = 1;
	}
}

Vector3 func_109(vector3 vParam0)//Position - 0x704B
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

void func_110()//Position - 0x708A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		system::wait(0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_85[iVar0]))
		{
			vLocal_53 = { unk_0x3F90543934DCD7E6(iLocal_85[iVar0], 0f, 0f, 0,5f) };
		}
		iLocal_77 = 0;
		while (iLocal_77 < 5)
		{
			fLocal_64 = unk_0x5B811202FCBE9E9D(1,5f, 2,5f);
			fLocal_65 = unk_0x5B811202FCBE9E9D(2f, 4f);
			fLocal_66 = unk_0x5B811202FCBE9E9D(0,1f, 2f);
			system::wait(0);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x0BEA49DFEFF2A1EA(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x0BEA49DFEFF2A1EA(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x0BEA49DFEFF2A1EA(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x0BEA49DFEFF2A1EA(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { vLocal_53.x, (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { vLocal_53.x, (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x0BEA49DFEFF2A1EA(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_77++;
		}
		iVar0++;
	}
}

int func_111()//Position - 0x725E
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)//Position - 0x72E4
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
		if (func_38(func_36()))
		{
			iVar5 = func_56();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_113(iVar1, &Var0);
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

void func_113(int iParam0, var uParam1)//Position - 0x739B
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

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x8551
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

int func_115(int iParam0)//Position - 0x85E2
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

struct<2> func_116(int iParam0)//Position - 0x8928
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_117(iParam0) };
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

struct<2> func_117(int iParam0)//Position - 0x895F
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

int func_118()//Position - 0x8DAB
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()//Position - 0x8DDD
{
	return Global_104273 > 0;
}

int func_120()//Position - 0x8DEB
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x8E00
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()//Position - 0x8E26
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

int func_123()//Position - 0x8E43
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x8EA5
{
	if ((Global_104544 == func_60() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)//Position - 0x8ED0
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_126();
}

void func_126()//Position - 0x8F06
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

void func_127(int iParam0)//Position - 0x8F43
{
	Global_104544 = iParam0;
}

int func_128(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8F51
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
		iParam1 = func_60();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_169())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_122())
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
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_112(100f, 1) != -1)
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
		if (!func_167(iParam1))
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_166(func_36()) == 4 || func_166(func_36()) == 5)
			{
				return 0;
			}
		}
		if (func_38(func_36()))
		{
			if (!func_165(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_163())
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
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_153(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_38(func_36()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_152(iVar4))
				{
					if (func_130(iVar2))
					{
						if (!func_129(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_36() != iVar2)
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

bool func_129(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x92EB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_130(int iParam0)//Position - 0x9332
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)//Position - 0x9353
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)//Position - 0x9362
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x93B5
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x93D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
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
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_135(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)//Position - 0x95D4
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

int func_136(int iParam0, int iParam1)//Position - 0x9616
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

int func_137(int iParam0)//Position - 0x96B8
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_138(int iParam0)//Position - 0x96CB
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_139(int iParam0)//Position - 0x96DE
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_140(int iParam0)//Position - 0x96F1
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_141(int iParam0)//Position - 0x9703
{
	return (system::shift_right(iParam0, 26) & 31 * func_142(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)//Position - 0x9728
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)//Position - 0x973F
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)//Position - 0x974C
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
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
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x9858
{
	var uVar0;
	
	func_151(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_150(&uVar0, unk_0x95327550F0F2BE7C());
	func_149(&uVar0, unk_0x674C9438180770FE());
	func_148(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_147(&uVar0, unk_0xEAF455949B108589());
	func_146(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_146(var uParam0, int iParam1)//Position - 0x989E
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

void func_147(var uParam0, int iParam1)//Position - 0x9924
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)//Position - 0x9957
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_149(var uParam0, int iParam1)//Position - 0x99A8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_150(var uParam0, int iParam1)//Position - 0x99E2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_151(var uParam0, int iParam1)//Position - 0x9A1D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_152(int iParam0)//Position - 0x9A59
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)//Position - 0x9B35
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x9B58
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_36();
				if (!func_38(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_162()) || Global_103602) || Global_25235) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_162()) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_162()) || Global_103602) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_162()) || Global_103602) || Global_25235) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_85(8, -1)) || func_157()) || func_156()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_85(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_162()) || Global_25235) || func_161()) || func_85(8, -1)) || func_159()) || func_158()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_162()) || func_159()) || Global_103602) || Global_25235) || func_161()) || Global_36993) || func_85(8, -1)) || func_158()) || func_156()) || func_157()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_162()) || Global_103602) || Global_25235) || func_161()) || func_85(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()//Position - 0xA275
{
	return Global_92872.f_1;
}

int func_156()//Position - 0xA283
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()//Position - 0xA2A9
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0xA2C3
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

bool func_159()//Position - 0xA2ED
{
	return Global_92885.f_316 > 0;
}

bool func_160()//Position - 0xA2FE
{
	return Global_92885.f_315 > 0;
}

var func_161()//Position - 0xA30F
{
	return Global_1312854;
}

int func_162()//Position - 0xA31B
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_163()//Position - 0xA337
{
	func_83();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)//Position - 0xA35F
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0xA371
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_36();
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

int func_166(int iParam0)//Position - 0xA455
{
	if (!func_38(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_167(int iParam0)//Position - 0xA479
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
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

int func_168()//Position - 0xA4D7
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

int func_169()//Position - 0xA51B
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

void func_170()//Position - 0xA5D6
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0x3CDDC4760DBA4651();
		unk_0x94BD6F0436473406(1f);
		if (unk_0xA6DECE14FC9A8C51(iLocal_89))
		{
			unk_0xE30CF11C0EE14316(&iLocal_89);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_90))
		{
			unk_0xE30CF11C0EE14316(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_93[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_93[iVar0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_95[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_83[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_83[iVar0], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_94[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_94[iVar0]));
			}
			if (unk_0xA6DECE14FC9A8C51(uLocal_96[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_84[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_84[iVar0], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0x1D29C781A978C4FB(5, true);
			unk_0x1D29C781A978C4FB(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_36(), 1, 25000);
		}
	}
	func_171(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_171(int iParam0)//Position - 0xA74E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_104544, 1), 64);
		if (func_59(Global_104544) > 0)
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
	func_172(&Global_25292);
	Global_104545 = 0;
	func_127(-1);
}

void func_172(var uParam0)//Position - 0xA803
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

char* func_173(int iParam0, bool bParam1)//Position - 0xA840
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

void func_174(int iParam0)//Position - 0xAA89
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_175(int iParam0)//Position - 0xAA9B
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0xAAB0
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)//Position - 0xAADF
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_137(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)//Position - 0xABAF
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xABC7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAD49
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)//Position - 0xAD81
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

