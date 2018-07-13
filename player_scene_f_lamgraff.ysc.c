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
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 10;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 2;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 8;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 16;
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
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	vector3 vLocal_269 = { 0f, 0f, 0f };
	float fLocal_270 = 0f;
	char* sLocal_271 = NULL;
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
	char[] cLocal_287[8] = 0;
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
	char cLocal_303[64] = "";
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	float fLocal_314 = 0f;
	float fLocal_315 = 0f;
	float fLocal_316 = 0f;
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_99 = 318;
	iLocal_265 = 1;
	iLocal_312 = -1;
	fLocal_314 = 0f;
	fLocal_315 = 1f;
	fLocal_316 = 1f;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_48();
	}
	system::wait(0);
	func_34();
	func_31();
	func_27();
	while (iLocal_265 && func_23(2, 0))
	{
		system::wait(0);
		switch (iLocal_98)
		{
			case 0:
				if (func_21())
				{
					iLocal_98 = 1;
				}
				break;
			
			case 1:
				if (func_20())
				{
					iLocal_98 = 2;
				}
				break;
			
			case 2:
				if (func_2())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_1();
				break;
		}
	}
	func_48();
}

void func_1()//Position - 0x122
{
	iLocal_265 = 0;
}

int func_2()//Position - 0x12E
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(Global_92619))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_267))
		{
			if (unk_0xA5F6598E13F98E08(Global_92619, &sLocal_271, &cLocal_303, 3))
			{
				if (unk_0x6B4C37F2EEC636CC(Global_92619))
				{
					unk_0xA03AF603968943A1(Global_92619, 0, 0);
					unk_0xB8E08BD5B184DF4E(Global_92619);
					return 0;
				}
				fVar0 = unk_0x463C4747B41E35A3(iLocal_312);
				if (!iLocal_266)
				{
					if (func_3(&uLocal_100, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
					{
						iLocal_266 = 1;
					}
				}
				if (fVar0 < 0,2812f)
				{
					if (iLocal_313 != 0)
					{
						unk_0x990DE45B7A2B6426(iLocal_313, 0);
						iLocal_313 = 0;
					}
				}
				else if (fVar0 < 0,4778f)
				{
					if (iLocal_313 == 0)
					{
						iLocal_313 = unk_0x1E3116EEB28D5F17("scr_lamgraff_paint_spray", iLocal_267, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						unk_0xBCEA363B5EFB935C(iLocal_313, fLocal_314, fLocal_315, fLocal_316, 0);
					}
				}
				else if (fVar0 < 0,5745f)
				{
					if (iLocal_313 != 0)
					{
						unk_0x990DE45B7A2B6426(iLocal_313, 0);
						iLocal_313 = 0;
					}
				}
				else if (fVar0 < 0,7712f)
				{
					if (iLocal_313 == 0)
					{
						iLocal_313 = unk_0x1E3116EEB28D5F17("scr_lamgraff_paint_spray", iLocal_267, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						unk_0xBCEA363B5EFB935C(iLocal_313, fLocal_314, fLocal_315, fLocal_316, 0);
					}
				}
				else if (iLocal_313 != 0)
				{
					unk_0x990DE45B7A2B6426(iLocal_313, 0);
					iLocal_313 = 0;
				}
			}
			else if (iLocal_313 != 0)
			{
				unk_0x990DE45B7A2B6426(iLocal_313, 0);
				iLocal_313 = 0;
			}
		}
	}
	else
	{
		func_48();
		return 0;
	}
	return 0;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29E
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)//Position - 0x2EC
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
					func_18();
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
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_16();
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
				func_9();
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
				if (func_8())
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
			if (func_7())
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
			func_6();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_5();
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
		func_18();
	}
	return 0;
}

void func_5()//Position - 0x5B8
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

void func_6()//Position - 0x5E9
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

int func_7()//Position - 0x67E
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0x6A5
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

void func_9()//Position - 0x73E
{
	if (func_15(14))
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
		Global_14453 = func_10();
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

var func_10()//Position - 0x7E0
{
	func_11();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_11()//Position - 0x7F9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_14(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_13(unk_0xFC1458A37D98B502());
			if (func_12(iVar0) && (!func_15(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_12(Global_104555.f_2353.f_539.f_4301))
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

bool func_12(int iParam0)//Position - 0x8F6
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0x902
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)//Position - 0x93F
{
	if (func_12(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0x969
{
	return Global_35861 == iParam0;
}

void func_16()//Position - 0x977
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

bool func_17(int iParam0, int iParam1)//Position - 0x9CE
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

void func_18()//Position - 0xA09
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

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xA60
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

int func_20()//Position - 0xAB6
{
	float fVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(Global_92619))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_267))
		{
			if (unk_0xA5F6598E13F98E08(Global_92619, &sLocal_271, &cLocal_287, 3))
			{
				if (unk_0x6B4C37F2EEC636CC(Global_92619))
				{
					unk_0xA03AF603968943A1(Global_92619, 0, 0);
					unk_0xB8E08BD5B184DF4E(Global_92619);
					return 0;
				}
				fVar0 = unk_0x463C4747B41E35A3(Global_90308);
				if (fVar0 < 0,3812f)
				{
					if (iLocal_313 != 0)
					{
						unk_0x990DE45B7A2B6426(iLocal_313, 0);
						iLocal_313 = 0;
					}
				}
				else if (fVar0 < 0,4778f)
				{
					if (iLocal_313 == 0)
					{
						iLocal_313 = unk_0x1E3116EEB28D5F17("scr_lamgraff_paint_spray", iLocal_267, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						unk_0xBCEA363B5EFB935C(iLocal_313, fLocal_314, fLocal_315, fLocal_316, 0);
					}
				}
				else if (fVar0 < 0,5745f)
				{
					if (iLocal_313 != 0)
					{
						unk_0x990DE45B7A2B6426(iLocal_313, 0);
						iLocal_313 = 0;
					}
				}
				else if (fVar0 < 0,6712f)
				{
					if (iLocal_313 == 0)
					{
						iLocal_313 = unk_0x1E3116EEB28D5F17("scr_lamgraff_paint_spray", iLocal_267, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
						unk_0xBCEA363B5EFB935C(iLocal_313, fLocal_314, fLocal_315, fLocal_316, 0);
					}
				}
				else if (fVar0 < 1f)
				{
					if (iLocal_313 != 0)
					{
						unk_0x990DE45B7A2B6426(iLocal_313, 0);
						iLocal_313 = 0;
					}
				}
				else
				{
					unk_0xB8E08BD5B184DF4E(Global_92619);
					if (!unk_0xD56F740235B1E8F0(iLocal_312))
					{
						iLocal_312 = unk_0x8383F9C605E523B7(vLocal_269, 0f, 0f, fLocal_270, 2);
						unk_0xD0E12C501EE26329(iLocal_312, true);
					}
					unk_0x8E628F774C748D93(Global_92619, iLocal_312, &sLocal_271, &cLocal_303, 8f, -8f, 257, 0, 8f, 0);
					return 1;
				}
			}
			else
			{
				if (iLocal_313 != 0)
				{
					unk_0x990DE45B7A2B6426(iLocal_313, 0);
					iLocal_313 = 0;
				}
				if (func_3(&uLocal_100, "PRSAUD", "FRAS_IG_7x", 3, 0, 0, 0))
				{
					unk_0xB8E08BD5B184DF4E(Global_92619);
					unk_0x014BC1A813500377(Global_92619, 16);
					if (!unk_0xD56F740235B1E8F0(iLocal_312))
					{
						iLocal_312 = unk_0x8383F9C605E523B7(vLocal_269, 0f, 0f, fLocal_270, 2);
						unk_0xD0E12C501EE26329(iLocal_312, true);
					}
					unk_0x8E628F774C748D93(Global_92619, iLocal_312, &sLocal_271, &cLocal_303, 8f, -8f, 257, 0, 8f, 0);
					return 1;
				}
			}
		}
	}
	else
	{
		func_48();
		return 0;
	}
	return 0;
}

int func_21()//Position - 0xCDC
{
	if (!func_22())
	{
		return 1;
	}
	return 0;
}

int func_22()//Position - 0xCF1
{
	if (!unk_0x1E06D00B67177A18() || unk_0x950AEA4C7FFF9EA4() == 3)
	{
		return 0;
	}
	if (unk_0x70522E2561AD22FE() > 8)
	{
		if (unk_0x70522E2561AD22FE() != 11)
		{
			return 0;
		}
		if (unk_0x70522E2561AD22FE() == 11)
		{
			if (unk_0x509F10D500697F53() > 0)
			{
				if (unk_0xE33A527118A873BF() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_23(int iParam0, int iParam1)//Position - 0xD46
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x1E06D00B67177A18())
	{
		if (unk_0x950AEA4C7FFF9EA4() != 3)
		{
			if (unk_0x70522E2561AD22FE() <= 2 && unk_0x70522E2561AD22FE() != 1)
			{
				return 1;
			}
		}
	}
	if (!unk_0x1E06D00B67177A18())
	{
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0x9E0D1EED4A8BA9B1())
		{
			return 0;
		}
		if (!func_25(iParam0, func_26()))
		{
			return 0;
		}
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			vVar0 = { unk_0xB3328BA8976B416C(iParam1, 0) };
			fVar1 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar0);
			if (fVar1 > 250f)
			{
				if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
				{
					if (!unk_0x841ED61760A7D07B(iParam1))
					{
						return 0;
					}
				}
				else if (!unk_0x9E06F0EE20F58CED(vVar0, 1,5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_24(Global_92619) && iParam1 != 0)
		{
			Global_92619 = 0;
		}
	}
	return 1;
}

int func_24(var uParam0)//Position - 0xE2A
{
	return uParam0;
}

bool func_25(var uParam0, var uParam1)//Position - 0xE34
{
	return (uParam0 && uParam1) != 0;
}

int func_26()//Position - 0xE43
{
	func_11();
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

void func_27()//Position - 0xE89
{
	if (!unk_0x1E06D00B67177A18())
	{
		if (unk_0x3E9CABD07B829173())
		{
			func_30();
		}
		return;
	}
	if (unk_0x950AEA4C7FFF9EA4() == 3)
	{
		func_30();
		return;
	}
	func_28();
	if (Global_92621 > 0)
	{
		return;
	}
	unk_0x6FEA7EB828B00848();
}

void func_28()//Position - 0xEC9
{
	func_29((Global_92621 - 1));
}

void func_29(int iParam0)//Position - 0xEDB
{
	Global_92621 = iParam0;
}

void func_30()//Position - 0xEE9
{
	func_29(0);
}

void func_31()//Position - 0xEF6
{
	unk_0x6FF834D85E2DD4C6(iLocal_268);
	unk_0x36905B9EE07F38CC();
	while (!unk_0x6ADD12BF4D6D2587(Global_92619) || !unk_0x9A0B2ED5055D3F0B(iLocal_268))
	{
		system::wait(0);
	}
	unk_0xDD29FF4BAB8AFF9C(Global_92619, true, 1);
	if (unk_0x6ADD12BF4D6D2587(Global_92619))
	{
		if (!unk_0x3AB6A1A9084FB0A4(Global_92619))
		{
			unk_0x270054D97CD161A8(Global_92619, -1);
		}
		unk_0xCE93FCB8A8D8DF0B(Global_92619, 1862763509);
	}
	unk_0xDD29FF4BAB8AFF9C(Global_92619, true, 1);
	unk_0xAE01EF4BC84AFE7C(Global_92619, 132, true);
	unk_0x66698545014E2F21(Global_92619, 16);
	func_33(&Global_92619, Global_87982);
	func_32(&uLocal_100, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	iLocal_267 = unk_0x5E35CF35E65D69B9(iLocal_268, unk_0xB3328BA8976B416C(Global_92619, 1), true, true, false);
	unk_0xA9D382E7BA095148(iLocal_267, Global_92619, unk_0xDD09837E5235FE91(Global_92619, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
}

void func_32(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xFD5
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

void func_33(var uParam0, int iParam1)//Position - 0x1070
{
	unk_0x5C5D33A1B2711D21(*uParam0, false);
	unk_0xAE01EF4BC84AFE7C(*uParam0, 20, true);
	unk_0x66698545014E2F21(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		unk_0xCE93FCB8A8D8DF0B(*uParam0, iParam1);
	}
}

void func_34()//Position - 0x10A6
{
	char[] cVar0[8];
	struct<109> Var1;
	struct<97> Var2;
	char[] cVar3[8];
	var uVar4;
	var uVar5;
	
	iLocal_99 = Global_92301;
	func_40(iLocal_99, &vLocal_269, &fLocal_270, &cVar0);
	iLocal_268 = joaat("prop_cs_spray_can");
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var2.f_1 = -1;
	Var2.f_17 = 4;
	Var2.f_17.f_8 = 4;
	Var2.f_17.f_13 = 4;
	Var2.f_17.f_18 = 4;
	Var2.f_17.f_24 = 4;
	Var2.f_17.f_29 = 4;
	Var2.f_17.f_34 = 4;
	Var2.f_62 = 8;
	Var2.f_96.f_7 = 21;
	Var2.f_96.f_8 = 6;
	Var1 = 0;
	Var1.f_2 = iLocal_99;
	Var1.f_3 = Global_90456.f_45;
	func_37(Var1, &Var2);
	func_35(iLocal_99, &sLocal_271, &cVar3, &cLocal_287, &uVar4, &uVar5);
	StringCopy(&cLocal_303, "Lamar_tagging_EXIT_LOOP_LAMAR", 64);
}

int func_35(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)//Position - 0x11A6
{
	*uParam4 = 9;
	*uParam5 = 8;
	switch (iParam0)
	{
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return 1;
			break;
		
		case 79:
			func_36(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 262144;
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			if (func_35(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 204:
			if (func_35(205, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 1;
			}
			break;
		
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return 1;
			break;
		
		case 289:
			func_36(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_36(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x18B7
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_37(struct<109> Param0, var uParam1)//Position - 0x18D1
{
	uParam1->f_119 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1435919172;
			uParam1->f_110 = 1435919172;
			func_39(uParam1);
			uParam1->f_118 = 0;
			return 0;
			break;
		
		case 1:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = { Global_91009[0 /*109*/] };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[0];
			return 1;
			break;
		
		case 3:
			*uParam1 = { Global_91009[1 /*109*/] };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[1];
			return 1;
			break;
		
		case 4:
			*uParam1 = { Global_91009[2 /*109*/] };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[2];
			return 1;
			break;
		
		case 5:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[Param0.f_3];
			return 1;
			break;
		
		case 6:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[Param0.f_3];
			return 1;
			break;
		
		case 7:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = Global_92597[Param0.f_3];
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam1 = { Param0 };
			uParam1->f_109 = 936589729;
			uParam1->f_110 = 936589729;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 11:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 14:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 13:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 15:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 54:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 55:
			*uParam1 = { Param0 };
			uParam1->f_109 = 936589729;
			uParam1->f_110 = 936589729;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 57:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 12:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = 451360105;
			func_38(uParam1, 144, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 16:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 17:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 18:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 19:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 20:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 22:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 74:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 67:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 58:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 59:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 60:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 25:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 26:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 27:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 28:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 38:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 40:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1959848946;
			uParam1->f_110 = -1959848946;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 47:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 49:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 48:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -1794415470;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 50:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 51:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 52:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 66:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 61:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 62:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 63:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 69:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 64:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 65:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 234:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 316:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 315:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 75:
			*uParam1 = { Param0 };
			uParam1->f_109 = -235832601;
			uParam1->f_110 = -235832601;
			func_38(uParam1, 30, -982327190, -982327190, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 76:
			*uParam1 = { Param0 };
			uParam1->f_109 = -235832601;
			uParam1->f_110 = -235832601;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 77:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, -0,7035f, -0,0282f, 0f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 78:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, -3,03f, -0,72f, 0,08f, 168f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 79:
		case 80:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, -2017877118, -2017877118, Vector(2,6407f, 8,164f, -14,1564f) + Vector(-1f, 0,03f, -2,16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_39(uParam1);
			}
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 124:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 82:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 84:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 83:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 85:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 291:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 86:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 87:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 88:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			if (Param0.f_2 == 92)
			{
				uParam1->f_118 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam1->f_118 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_39(uParam1);
				uParam1->f_118 = 1;
			}
			return 1;
			break;
		
		case 94:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_38(uParam1, 17, 1785177548, 1785177548, -1,71f, 1,05f, 0f, -138f);
			}
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 96:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = 2106541073;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 134:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 108:
		case 109:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 150:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 20, 1785177548, 1785177548, 0,98f, 0,8017f, -0,42f, -180f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 118:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 119:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 120:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 114:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 98:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 99:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_38(uParam1, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 100:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_38(uParam1, 15, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 101:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_38(uParam1, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 102:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_38(uParam1, 14, -982327190, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 103:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 121:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 122:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, -2,04f, -0,15f, 0f, 14,4f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 125:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 110:
		case 111:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 131:
		case 132:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 126:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 128:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 129:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 130:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 133:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 151:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, -1,71f, 1,05f, 0f, -138f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 152:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, 1,1779f, 2,4276f, 0f, 162,1022f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 153:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 154:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 155:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f, unk_0x5B811202FCBE9E9D(-180f, 180f));
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 156:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 14, 1785177548, 1785177548, 0,3427f, 1,1592f, 1,0351f, 139,912f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 157:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 158:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f, unk_0x5B811202FCBE9E9D(-180f, 180f));
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 159:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 160:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 161:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 163:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, -3,03f, -0,72f, 0,08f, 168f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 164:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 165:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 166:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 167:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 14, -982327190, 1785177548, -0,8472f, 0,155f, 0f, 152,556f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 168:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 169:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 14, 1785177548, 1785177548, -0,3577f, -0,8968f, -0,0003f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 170:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 171:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 172:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 173:
			*uParam1 = { Param0 };
			uParam1->f_109 = -235832601;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 174:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 0;
			return 1;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 177:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 178:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 179:
		case 180:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 192:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam1->f_118 = 1;
			if (Global_3)
			{
				uParam1->f_118 = 1;
			}
			return 1;
			break;
		
		case 193:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, -982327190, 1785177548, 4,2943f, -6,7858f, 0f, -133,5332f);
			uParam1->f_118 = 1;
			if (Global_3)
			{
				uParam1->f_118 = 1;
			}
			return 1;
			break;
		
		case 194:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 1;
			if (Global_3)
			{
				uParam1->f_118 = 1;
			}
			return 1;
			break;
		
		case 195:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 1;
			if (Global_3)
			{
				uParam1->f_118 = 1;
			}
			return 1;
			break;
		
		case 198:
		case 199:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 200:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 201:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 202:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 184:
		case 185:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 186:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 187:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 188:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 189:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 190:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 191:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 196:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 43, 1785177548, 1785177548, unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f, unk_0x5B811202FCBE9E9D(-180f, 180f));
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 197:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 3,4381f, -0,8269f, 0f, -87,6612f);
			if (Param0.f_2 != 205)
			{
				uParam1->f_112 = { 3,4381f, -0,8269f, 0f };
				uParam1->f_115 = -87,6612f;
			}
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 24:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 212:
		case 214:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
			break;
		
		case 215:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 3,4381f, -0,8269f, 0f, -87,6612f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 221:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, -0,7949f, -0,508f, 0f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 218:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 19, 1785177548, 1785177548, 1,29f, 1,41f, 0f, 57,52f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 219:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 19, 1785177548, 1785177548, 1,29f, 1,41f, 0f, 57,52f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 220:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 19, 1785177548, 1785177548, 0,5504f, -0,2322f, 0f, -9,9741f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 225:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 19, 1785177548, 1785177548, 1,23f, 0,6f, -1f, 34,56f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 231:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 0;
			return 1;
			break;
		
		case 232:
		case 233:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 235:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 236:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 1,5033f, 1,2118f, 0f, -78,0449f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 237:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 1,5033f, 1,2118f, 0f, -78,0449f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 238:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 239:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 273:
		case 274:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 245:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 243:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 244:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 271:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 280:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			uParam1->f_118 = 1;
			func_39(uParam1);
			return 1;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			uParam1->f_118 = 1;
			func_39(uParam1);
			if (Param0.f_2 == 265)
			{
				uParam1->f_118 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam1->f_118 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_38(uParam1, 144, -982327190, 2106541073, -2,4166f, -0,15f, 0f, -148,7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_38(uParam1, 144, 2106541073, 2106541073, -5,7915f, -11,0439f, 0,67f, -72,589f);
			}
			return 1;
			break;
		
		case 246:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 247:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 263:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 278:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 279:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 264:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 255:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 248:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f, unk_0x5B811202FCBE9E9D(-180f, 180f));
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 249:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f, unk_0x5B811202FCBE9E9D(-180f, 180f));
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam1 = { Param0 };
			uParam1->f_109 = -235832601;
			uParam1->f_110 = -235832601;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam1 = { Param0 };
			uParam1->f_109 = -235832601;
			uParam1->f_110 = -235832601;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
		
		case 254:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 285:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 259:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 260:
		case 261:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 286:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 287:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 288:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 262:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 289:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 144, -2017877118, -2017877118, -3,264f, -14,7895f, 14,1815f, -0,6311f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 290:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 292:
		case 295:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 293:
		case 294:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 299:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 0,24f, 0,33f, -0,5f, -11,88f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 0,24f, 0,33f, -0,5f, -11,88f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 296:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 1,41f, 1,35f, 0f, 168f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 297:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 1,7491f, 0,6423f, 0f, 166,479f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 298:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_38(uParam1, 32, 1785177548, 1785177548, 0,72f, -0,69f, 0f, 172,44f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 304:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 305:
			*uParam1 = { Param0 };
			uParam1->f_109 = -2017877118;
			uParam1->f_110 = -2017877118;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 309:
			*uParam1 = { Param0 };
			uParam1->f_109 = -982327190;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 310:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 311:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1785177548;
			uParam1->f_110 = 1785177548;
			func_39(uParam1);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 312:
			*uParam1 = { Param0 };
			uParam1->f_109 = 1630799643;
			uParam1->f_110 = 1630799643;
			func_38(uParam1, 144, 474215631, -1519143300, -9,5443f, -3,191f, -0,3f, 180f);
			uParam1->f_118 = 1;
			return 1;
			break;
		
		case 313:
			*uParam1 = { Param0 };
			uParam1->f_109 = 2106541073;
			uParam1->f_110 = -982327190;
			func_39(uParam1);
			uParam1->f_118 = 0;
			return 1;
			break;
		
		case 314:
			*uParam1 = { Param0 };
			uParam1->f_109 = -1817882002;
			uParam1->f_110 = -1817882002;
			func_39(uParam1);
			uParam1->f_118 = 2;
			return 1;
			break;
	}
	*uParam1 = { Param0 };
	uParam1->f_109 = 1435919172;
	uParam1->f_110 = 1435919172;
	func_39(uParam1);
	uParam1->f_118 = 0;
	return 0;
}

void func_38(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam5)//Position - 0x4C4D
{
	uParam0->f_111 = iParam1;
	uParam0->f_116 = iParam2;
	uParam0->f_117 = iParam3;
	uParam0->f_112 = { vParam4 };
	uParam0->f_115 = fParam5;
}

void func_39(var uParam0)//Position - 0x4C77
{
	func_38(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_40(int iParam0, var uParam1, var uParam2, char* sParam3)//Position - 0x4C95
{
	int iVar0;
	
	if (func_43(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_41(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_88181[iVar0 /*9*/].f_3 };
					*uParam2 = Global_88181[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_88181[0 /*9*/].f_3 };
					*uParam2 = Global_88181[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_91009[0 /*109*/].f_4 };
				*uParam2 = Global_91009[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_91009[1 /*109*/].f_4 };
				*uParam2 = Global_91009[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_91009[2 /*109*/].f_4 };
				*uParam2 = Global_91009[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_104555.f_2353.f_539.f_2280[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_104555.f_2353.f_539.f_2290[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_104555.f_2353.f_539.f_2280[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_104555.f_2353.f_539.f_2290[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_104555.f_2353.f_539.f_2280[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_104555.f_2353.f_539.f_2290[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_91337[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

bool func_41(var uParam0)//Position - 0x4E88
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_104555.f_2353.f_539.f_4303;
	vVar1 = { Global_104555.f_2353.f_539.f_2280[iVar0 /*3*/] };
	if (func_42(vVar1, 0f, 0f, 0f, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	}
	*uParam0 = 5;
	fVar2 = 9999999f;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_7199.f_11[iVar3], 0))
		{
			vVar4 = { Global_88181[iVar3 /*9*/].f_3 };
			fVar5 = system::vdist(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 5;
}

bool func_42(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x4F43
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_43(int iParam0, var uParam1, char* sParam2)//Position - 0x4F8A
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_41(&iVar1);
			if (iVar1 < 5)
			{
				*uParam1 = Global_88181[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_88181[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_91009[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_91009[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_91009[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_104555.f_2353.f_539.f_2290[0];
			StringCopy(sParam2, func_47(Global_104555.f_2353.f_539.f_2294[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_104555.f_2353.f_539.f_2290[1];
			StringCopy(sParam2, func_47(Global_104555.f_2353.f_539.f_2294[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_104555.f_2353.f_539.f_2290[2];
			StringCopy(sParam2, func_47(Global_104555.f_2353.f_539.f_2294[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_43(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_43(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_43(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			vVar0 = { -803,734f, 168,148f, 76,3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_46(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122,69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60,31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41,654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172,697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181,8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20,353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48,53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173,748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32,7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84,8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90,5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105,0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54,347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34,621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150,6148f + 0,0095f);
			*uParam1 = (*uParam1 + 0,0004f);
			*uParam1 = (*uParam1 + 0,0015f);
			*uParam1 = (*uParam1 + 0,0002f);
			*uParam1 = (*uParam1 + -0,0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84,6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249,0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143,4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63,4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82,254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152,965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10,099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158,5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99,18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218,4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125,6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142,373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34,878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172,419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107,439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157,311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68,812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4,693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78,65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74,7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48,36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144,178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99,72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76,3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80,6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9,1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161,0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226,5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33,128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176,25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147,192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59,082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26,087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37,27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13,8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62,5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86,3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144,622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61,2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22,32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_44(0, 25, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222,8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112,841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103,8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28,0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0,0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30,185f;
			*uParam1 = (*uParam1 + 0,003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14,98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179,653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95,4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16,0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86,613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111,688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143,7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143,792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4,6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172,2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12,5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1,5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107,981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172,9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67,608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74,1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1,0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152,203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310,879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130,879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35,604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119,3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121,9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95,588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230,78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165,7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1,2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117,03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49,0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84,96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59,3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43,82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_43(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14,749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96,0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43,6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70,4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117,356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83,8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350,3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109,0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4,124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13,7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27,746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42,8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2,6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30,24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144,274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68,8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56,2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106,6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26,3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83,3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277,613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4,7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33,77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155,68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49,56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5,8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70,1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158,979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67,1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47,054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171,253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10,247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32,488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29,093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229,6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11,5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28,7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_43(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_43(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34,661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_43(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_43(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_43(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116,742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100,46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152,0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122,5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			vVar4 = { -7,4998f, 7,4995f, -0,5258f };
			*uParam1 = unk_0xA67DD8488EBA5F6D(-vVar4.x, -vVar4.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			vVar5 = { 10,6345f, 0,7246f, 1,2508f };
			*uParam1 = unk_0xA67DD8488EBA5F6D(-vVar5.x, -vVar5.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			vVar6 = { -3,4271f, -13,6787f, -1,4107f };
			*uParam1 = unk_0xA67DD8488EBA5F6D(-vVar6.x, -vVar6.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			vVar7 = { -19,6582f, 7,896f, 0,1334f };
			*uParam1 = unk_0xA67DD8488EBA5F6D(-vVar7.x, -vVar7.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87,7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103,2841f + 88,7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327,7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_44(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7491
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13,904f, 1,193f, 0,7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_44(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1,1731f, 0,809f) };
						*uParam3 = (*uParam3 + (456,7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71,8356f, 180,5483f, -796,9911f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((16f - 222,8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10,9793f, -5,9f, 4,6f };
					*uParam3 = 163,0716f;
					return 1;
					break;
				
				case 1:
					if (func_44(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0,25f, -0,6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_44(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0,5f, -1,2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71,835f, 180,548f, -796,991f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = (((16f + 90f) - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6,8878f, -5,5247f, 1,5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,1937f, -9,0309f, 4,5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,4577f, -9,6399f, 4,5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,799f, -9,41f, 4,5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_44(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12,552f, 4,373f, (4,6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0,4395f, -11,0022f, 0,0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5,5001f, -12,4406f, 4,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,5f, -9,1f, 4,6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0,849f, 1,575f, 0f };
					*uParam3 = 272,857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8,183f, -3,0467f, 5,5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9,383f, -3,3887f, 5,73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76,89f, 176,176f, -802,702f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-159,23f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4,488f, -9,098f, 5,4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9,04f, 5,71f, 1,44f };
					*uParam3 = 159,3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3,25f, -9,53f, 4,588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11,0022f, -0,4395f) + Vector(0f, unk_0x5B811202FCBE9E9D(-0,5f, 0,5f), unk_0x5B811202FCBE9E9D(-0,5f, 0,5f)) };
					*uParam3 = (306f + unk_0x5B811202FCBE9E9D(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60,2063f, 141,5129f, -863,5425f) - Vector(71,1531f, 179,5117f, -812,0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0,95f, 0,95f, 0,95f) };
					*uParam3 = unk_0xA67DD8488EBA5F6D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71,8266f, 180,4725f, -796,7593f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((26,087f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72,6876f, 173,987f, -805,173f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((13f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72,8447f, 172,4196f, -803,1823f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-28,7112f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27,9648f, 8,3766f, 0,7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0,6f, -6,5f, 10,3f) + Vector(0,1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0,3142f, -10,9926f, 0,0747f };
					*uParam3 = 304,1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,3f, -6,5f, 4,6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_44(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,505f, -10,9717f, 4,6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12,7165f, 4,7109f, (4,6f + 1f) };
					*uParam3 = 310,6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,0529f, -8,9175f, 1,6907f };
					*uParam3 = 102,156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,4799f, -7,5315f, 0,682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,352f, -3,356f, 5,7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,3003f, -10,3127f, 4,5874f };
					*uParam3 = 262,789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,76f, -5,95f, 4,59f };
					*uParam3 = 177,6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9,6691f, -7,6405f, 0,6817f };
					*uParam3 = 159,156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1,228f, 4,044f, 0,7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,2365f, -7,6073f, 6,2761f };
					*uParam3 = 157,0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8,161f, -7,562f, 2,17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,7668f, -7,8757f, 5,5559f };
					*uParam3 = 144,6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10,6257f, -9,4927f, 5,5876f };
					*uParam3 = 257,4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_44(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8,4451f, 3,1568f, 1,47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9,0477f, -7,9397f, 0,6817f };
					*uParam3 = 88,5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21,7f, 9f, 1,7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1,3278f, 1,534f, 0f };
					*uParam3 = 159,72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3,0265f, 1,7627f, 0,1273f };
					*uParam3 = 338,5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15,2374f, 8,723f, 1,4495f };
					*uParam3 = 205,677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28,7f, 8,8241f, 0,6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1,1936f, -9,0107f, 9,0567f) + Vector((0,03f - 0,02f), 0f, 0f) };
					*uParam3 = 94,2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5,2891f, 2,0403f, -2,8213f) + Vector((0,03f - 0,05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,84f };
					*uParam3 = 311,4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5,5782f, 5,7755f, 3,8418f };
					*uParam3 = 306,6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5,8092f, 5,7965f, 3,85f };
					*uParam3 = 337,4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13,3221f, 0,0684f, 0,6817f };
					*uParam3 = 277,317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_44(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x5B811202FCBE9E9D(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2,235f, 1,725f, 4,5877f };
					*uParam3 = 172,714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75,7407f, 181,264f, -814,246f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-158f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76,7233f, 181,114f, -812,896f) - Vector(71,1531f, 179,5117f, -812,0607f) };
					*uParam3 = ((-164f - 222,8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7,394f, 5,368f, 1,451f };
					*uParam3 = 235,0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1,0704f, -1,4624f, 0,999f };
					*uParam3 = 157,44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14,8186f, 6,8253f, 0,5f };
					*uParam3 = 87,3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13,6486f, 6,2253f, 0,45f };
					*uParam3 = 262,32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_44(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16,319f, -1,375f, 0,6817f };
					*uParam3 = 334,126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0,39f, 3,27f, 0f };
					*uParam3 = 154,126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,0213f, 6,9622f, 1,39f };
					*uParam3 = 142,889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15,128f, 6,842f, 0,4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9019f, -23,8349f, -2,1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10,9937f, -24,9005f, -2,18f };
					*uParam3 = 314,2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31,7401f, -1,0943f, 0,6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27,1728f, -3,75f, -1,626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14,7722f, -10,9336f, -0,537f };
					*uParam3 = 110,8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17,2536f, 2,451f, -0,6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23,9716f, -20,3533f, -3,18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,1416f, -2,0799f, -0,0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3,2746f, -4,1995f, -0,0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2,983f, -4,094f, 0,4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5,5235f, 2,9133f, 0,7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30,7131f, -1454,676f, -42,2059f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (84,7009f - 188,5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30,6803f, -1455,848f, -40,7478f) - Vector(30,116f, -1435,997f, -14,3064f) };
					*uParam3 = (90,6417f - 188,5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2,0126f, 0,3422f, -0,0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,2931f, 1,4476f, 1,0127f };
					*uParam3 = 61,7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0,0158f, 1,4182f, 0,9913f };
					*uParam3 = 119,008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3,467f, 0,074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,1014f, -5,4089f, -0,013f };
					*uParam3 = 123,753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2,802f, -6,3295f, -0,01f };
					*uParam3 = 42,757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2,156f, -4,9564f, 1,4886f };
					*uParam3 = 136,309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7,2656f, 3,022f, -0,9061f };
					*uParam3 = 92,8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0,5066f, 1,6992f, 0,0168f };
					*uParam3 = 115,77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0,2121f, -6,2791f, -0,0089f };
					*uParam3 = 114,3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8,2458f, -0,7136f, -0,2503f };
					*uParam3 = 252,2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2,334f, 1,6889f, 0,586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0,6331f, 1,2093f, -0,0086f };
					*uParam3 = 137,1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3,887f, -0,166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3,5179f, 9,1355f, -1f };
					*uParam3 = 141,79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0,15f, -1,9326f, -6,013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121,6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,2823f, 2,2595f, -1,0742f };
					*uParam3 = (170,2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1,077f, -5,1446f, 0,9904f };
					*uParam3 = 107,1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12,903f, -6,623f, -0,0406f };
					*uParam3 = 63,48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10,5514f, 5,393f, -0,0998f };
					*uParam3 = 327,483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0,9794f, -0,3043f, 0f };
					*uParam3 = 179,7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11,9759f, 1f, -1,0728f };
					*uParam3 = 238,9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0,576f, 1,671f, 0,601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0,6532f, 0,9556f, -0,0087f };
					*uParam3 = 121,0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0,18f, -4,173f, 0,9981f };
					*uParam3 = 216,61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,5937f, 0,3521f, 1f };
					*uParam3 = 119,4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_104555.f_18503[2] == 299)
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else if (((Global_104555.f_18503[2] == 300 || Global_104555.f_18503[2] == 301) || Global_104555.f_18503[2] == 302) || Global_104555.f_18503[2] == 303)
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					if (func_45())
					{
						*uParam2 = { Vector(9,6327f, -1521,394f, -1158,133f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (34,661f - 90,6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9,6327f, -1521,334f, -1157,803f) - Vector(9,6346f, -1517,601f, -1152,571f) };
						*uParam3 = (32f - 90,6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10,6327f, -1519,561f, -1156,422f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = (102f - 90,6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2,8352f, 0,0552f, 0f };
					*uParam3 = 334,44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_44(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x5B811202FCBE9E9D(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7,213f, -1,4536f, 0,9981f };
					*uParam3 = 42,6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9,6327f + 1f), -1518,736f, -1148,466f) - Vector(9,6346f, -1517,601f, -1152,571f) };
					*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5,24f, 6,217f, 0,998f };
					*uParam3 = 315,72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6,6447f, 0,7635f, 1,0507f };
					*uParam3 = 296,683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3,968f, -1,04f, 0f };
					*uParam3 = 214,92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4,617f, -1,1314f, 0f };
					*uParam3 = 39,4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { unk_0x5B811202FCBE9E9D(-10f, 10f), unk_0x5B811202FCBE9E9D(-10f, 10f), 0f };
			*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { unk_0x5B811202FCBE9E9D(-10f, 10f), unk_0x5B811202FCBE9E9D(-10f, 10f), 0f };
	*uParam3 = unk_0x5B811202FCBE9E9D(0f, 360f);
	return 0;
}

int func_45()//Position - 0x93DE
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, var uParam1, var uParam2)//Position - 0x93FF
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*uParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_46(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_46(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*uParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*uParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*uParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*uParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*uParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*uParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*uParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*uParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*uParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*uParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*uParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*uParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*uParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*uParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*uParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*uParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*uParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*uParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*uParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*uParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*uParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*uParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*uParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*uParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*uParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*uParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*uParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*uParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*uParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*uParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*uParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*uParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*uParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*uParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*uParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_47(int iParam0)//Position - 0x9D6E
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_48()//Position - 0x9E00
{
	if (iLocal_313 != 0)
	{
		unk_0x990DE45B7A2B6426(iLocal_313, 0);
		iLocal_313 = 0;
	}
	unk_0x6ACDC20166AA3FAC(0);
	unk_0x96A3D9A8A4C7AFD4();
}

