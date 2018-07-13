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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[3] = { 0, 0, 0 };
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	vector3 vLocal_249 = { 0f, 0f, 0f };
	int iLocal_250 = 0;
	struct<2> Local_251 = { 0, 5 } ;
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
	var uLocal_267 = 5;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	vector3 vVar1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = unk_0x5354F72E0D8D7E53();
	iLocal_50 = unk_0x526A9A6B1B39C5F0();
	vLocal_66 = { 1180,969f, -402,381f, 67,2f };
	vLocal_67 = { 5f, 0f, 57,33f };
	iLocal_69 = -1;
	iLocal_239 = 77;
	iLocal_240 = -1;
	iLocal_241 = -1;
	iLocal_242 = 1;
	iLocal_243 = 1;
	iLocal_244 = 1;
	unk_0xB8E96DD2D2EF0BC3(1);
	func_364();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar1 = { ScriptParam_251.f_1[0 /*3*/] };
	Global_90250 = 1;
	func_363(&Var0);
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_362(" Force cleanup [TERMINATING]");
		func_347(&Var0, 1);
	}
	if (!func_346(108))
	{
		func_223(&Var0, vVar1);
	}
	else
	{
		func_1(&Var0, vVar1);
	}
}

void func_1(int iParam0, vector3 vParam1)//Position - 0x12B
{
	while (true)
	{
		if (!unk_0x42F1FE4C7EC5F51E())
		{
			func_362("  Ambient - Player isn't within World Point Range");
			func_347(iParam0, 1);
		}
		if (func_222() != 2)
		{
			func_362("  Ambient - Player is not Trevor");
			func_347(iParam0, 1);
		}
		iLocal_241 = func_221(5f);
		if (iLocal_241 != -1)
		{
			if (!func_215())
			{
				*iParam0 = func_214(iLocal_241);
				StringCopy(&(iParam0->f_1), func_213(iLocal_241), 32);
				iParam0->f_16 = 3;
				iParam0->f_15 = 5f;
				if (*iParam0 == -1)
				{
					func_362("  -  Ambient Rampage Mission ID is invalid");
					func_347(iParam0, 1);
				}
				if (unk_0xAB019B170BF1309C(&(iParam0->f_1)))
				{
					func_362("  -  Ambient Rampage Mission ID is invalid");
					func_347(iParam0, 1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_18544[*iParam0 /*6*/]), 0);
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_18544[*iParam0 /*6*/]), 2);
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_18544[*iParam0 /*6*/]), 3);
				Global_103642[*iParam0 /*10*/].f_1 = 0;
				if (!func_212(0))
				{
					Global_103642[*iParam0 /*10*/].f_3 = 0;
				}
				if (!func_204(*iParam0))
				{
					func_362(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_347(iParam0, 1);
				}
				else if (!func_5(iParam0))
				{
					func_362(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_347(iParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0x247EAA2E93D4A021(vParam1, iParam0->f_15, 1, 0, 0, false);
					func_362(" RC Ambient Launcher Waiting To Terminate");
					Global_103642[*iParam0 /*10*/].f_1 = 0;
					if (func_3(iParam0))
					{
						func_362(" Ambient - Ready To Terminate");
						func_347(iParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			iLocal_244 = 0;
		}
		system::wait(0);
	}
}

int func_2(char* sParam0)//Position - 0x2B7
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_3(int iParam0)//Position - 0x2CA
{
	while (!Global_103642[*iParam0 /*10*/])
	{
		system::wait(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)//Position - 0x2E8
{
	if (unk_0x9F7B586A14398C40())
	{
		if (!unk_0x2D0EF1D268F33F25())
		{
			unk_0xAE83ED4C9081AE6F(iParam0);
			if (bParam1)
			{
				while (!unk_0x3E9CABD07B829173())
				{
					system::wait(0);
				}
			}
		}
	}
}

int func_5(int iParam0)//Position - 0x31A
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_203())
	{
		while (!func_198(*iParam0))
		{
			if (func_197(*iParam0))
			{
				func_188();
			}
			if (!func_145(iParam0, *iParam0 != 2))
			{
				func_362("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			system::wait(0);
		}
	}
	if (func_144())
	{
		func_142();
	}
	if (!func_111(iParam0))
	{
		func_362("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_108(*iParam0, &Var0);
	MemCopy(&sVar1, {func_107(*iParam0)}, 4);
	func_106(&sVar1, Var0.f_3, 0);
	func_105(*iParam0);
	if (!func_203())
	{
		if (iParam0->f_16 == 2)
		{
			func_25(&(iParam0->f_1), 0);
		}
		else
		{
			func_25(&(iParam0->f_1), 1);
		}
	}
	func_6(*iParam0, Var0);
	return 1;
}

void func_6(int iParam0, char* sParam1)//Position - 0x3DD
{
	func_24(sParam1);
	unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_18544[iParam0 /*6*/]), 5);
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			system::wait(0);
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) < 1)
	{
		Global_55904 = 0;
		unk_0xD9E2C360120FEB7C("mission_stat_watcher");
		while (!unk_0x3B6F9DF9C5FEB3A4("mission_stat_watcher"))
		{
			system::wait(0);
		}
		system::start_new_script("mission_stat_watcher", 1828);
		unk_0x9D2418D7FC697249("mission_stat_watcher");
	}
	while (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 5))
	{
		if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_18544[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)//Position - 0x49C
{
	int iVar0;
	int iVar1;
	
	if (Global_55901 == 1)
	{
		func_21();
		Global_55901 = 0;
		if (Global_55896)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55904 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_55918, {func_12(iParam0)}, 4);
	Global_55906 = 0;
	Global_55905 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55893 = 1;
			Global_55896 = 1;
			Global_55899 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_55904 = 1;
			Global_55905 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_68148;
	Global_68148 = 1;
	iVar1 = Global_68149;
	Global_68149 = iParam0;
	if (!Global_55893)
	{
		if ((Global_68149 != iVar1 || Global_67998 == 0) || iVar0 != Global_68148)
		{
			Global_25483 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_55896 = 1;
		}
	}
	Global_55931 = unk_0x53C562FD2B9E3AB0();
	func_8();
	Global_55903 = 0;
}

void func_8()//Position - 0x5F6
{
	int iVar0;
	
	if (!Global_55900)
	{
		return;
	}
	if (Global_67998 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		switch (Global_56128[Global_67999[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67999[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55911)
				{
					Global_67999[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67999[iVar0 /*9*/].f_1 != 0)
					{
						Global_67999[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55900 = 0;
}

void func_9(int iParam0)//Position - 0x6A9
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)//Position - 0xA91
{
	Global_55896 = 1;
	Global_55899 = 1;
	if (Global_67998 > 15)
	{
		return;
	}
	func_11(Global_67998);
	Global_67999[Global_67998 /*9*/] = iParam0;
	Global_67998++;
	if (Global_56128[iParam0 /*13*/] == 16)
	{
		Global_68150 = 1;
	}
}

void func_11(int iParam0)//Position - 0xADC
{
	Global_67999[iParam0 /*9*/].f_1 = 0;
	Global_67999[iParam0 /*9*/].f_2 = 0f;
	Global_67999[iParam0 /*9*/].f_3 = 0;
	Global_67999[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)//Position - 0xB10
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_107(iParam0) };
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

void func_13()//Position - 0xB48
{
	if (Global_55903)
	{
		return;
	}
	Global_55912 = 0;
	Global_67998 = 0;
	Global_55914 = 0;
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	func_20(0);
	func_19();
	Global_68150 = 0;
	Global_55902 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_55893 = 0;
	Global_55923 = 0;
	Global_55931 = -1;
}

void func_14()//Position - 0xB9E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68185[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68194 = 0;
}

void func_15()//Position - 0xBCB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_68151[iVar0 /*2*/] = 0;
		Global_68151[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68184 = 0;
}

void func_16()//Position - 0xC02
{
	Global_56062 = 0;
}

void func_17()//Position - 0xC0E
{
	Global_55922 = 0;
	Global_55926 = func_18(joaat("sp0_shots"));
	Global_55925 = func_18(joaat("sp0_hits"));
	Global_55928 = func_18(joaat("sp1_shots"));
	Global_55927 = func_18(joaat("sp1_hits"));
	Global_55930 = func_18(joaat("sp2_shots"));
	Global_55929 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)//Position - 0xC62
{
	var uVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()//Position - 0xC76
{
	int iVar0;
	
	Global_55932 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55933[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)//Position - 0xCA0
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_21()//Position - 0xCB4
{
	int iVar0;
	
	Global_55901 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		Global_67999[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55911)
	{
	}
	Global_55911 = 0;
}

void func_22()//Position - 0xCED
{
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55898 && !Global_55897)
			{
				Global_55898 = 0;
				unk_0xB78F9271050618A3("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xB78F9271050618A3("mission_stat_watcher");
		}
	}
}

int func_23()//Position - 0xD2F
{
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55896)
	{
		return 0;
	}
	return Global_55908;
}

void func_24(char* sParam0)//Position - 0xD59
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)//Position - 0xD6C
{
	unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD89
{
	if (Global_92833 != 10 && Global_92833 != 9)
	{
		StringCopy(&Global_95141, cParam0, 32);
		func_28(&Global_95149, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_87156 = 0;
	}
}

void func_27()//Position - 0xDCE
{
	int iVar0;
	int iVar1;
	
	Global_98118 = Global_95149;
	Global_98118.f_1 = Global_95149.f_1;
	Global_98118.f_6 = Global_95149.f_6;
	Global_98118.f_7 = Global_95149.f_7;
	Global_98118.f_8 = Global_95149.f_8;
	Global_98118.f_2 = Global_95149.f_2;
	Global_98118.f_3 = Global_95149.f_3;
	Global_98118.f_4 = Global_95149.f_4;
	Global_98118.f_5 = Global_95149.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_98118.f_9[iVar1] = Global_95149.f_9[iVar1];
		Global_98118.f_13[iVar1] = Global_95149.f_13[iVar1];
		Global_98118.f_17[iVar1] = Global_95149.f_17[iVar1];
		Global_98118.f_21[iVar1] = Global_95149.f_21[iVar1];
		Global_98118.f_25[0 /*295*/][iVar1 /*98*/] = { Global_95149.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_98118.f_25[1 /*295*/][iVar1 /*98*/] = { Global_95149.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_98118.f_616[iVar1 /*65*/][iVar0] = Global_95149.f_616[iVar1 /*65*/][iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_13[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_26[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_98118.f_616[iVar1 /*65*/].f_59 = Global_95149.f_616[iVar1 /*65*/].f_59;
		Global_98118.f_616[iVar1 /*65*/].f_60 = Global_95149.f_616[iVar1 /*65*/].f_60;
		Global_98118.f_616[iVar1 /*65*/].f_61 = Global_95149.f_616[iVar1 /*65*/].f_61;
		Global_98118.f_616[iVar1 /*65*/].f_62 = Global_95149.f_616[iVar1 /*65*/].f_62;
		Global_98118.f_616[iVar1 /*65*/].f_63 = Global_95149.f_616[iVar1 /*65*/].f_63;
		Global_98118.f_616[iVar1 /*65*/].f_64 = Global_95149.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_98118.f_616[iVar1 /*65*/].f_39[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_49[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_98118.f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_95149.f_812[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_98118.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_95149.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_98118.f_2229[iVar1 /*32*/][iVar0] = Global_95149.f_2229[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_98118.f_2229[iVar1 /*32*/].f_5[iVar0] = Global_95149.f_2229[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_98118.f_2229[iVar1 /*32*/].f_16[iVar0] = Global_95149.f_2229[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_98118.f_2326[iVar1] = Global_95149.f_2326[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_98118.f_2823[iVar1 /*15*/][iVar0] = Global_95149.f_2823[iVar1 /*15*/][iVar0];
			Global_98118.f_2823[iVar1 /*15*/].f_5[iVar0] = Global_95149.f_2823[iVar1 /*15*/].f_5[iVar0];
			Global_98118.f_2823[iVar1 /*15*/].f_10[iVar0] = Global_95149.f_2823[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_98118.f_2330[iVar1 /*164*/][iVar0] = Global_95149.f_2330[iVar1 /*164*/][iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_4[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_4[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_8[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_8[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_12[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_12[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_16[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_16[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_20[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_20[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_24[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_24[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_28[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_28[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_32[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_32[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_36[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_36[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_40[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_40[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_44[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_44[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_48[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_48[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_52[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_52[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_56[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_56[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_60[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_60[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_64[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_64[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_68[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_68[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_72[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_72[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_76[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_76[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_80[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_80[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_84[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_84[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_88[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_88[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_92[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_92[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_96[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_96[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_100[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_100[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_104[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_104[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_108[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_108[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_112[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_112[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_116[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_116[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_120[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_120[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_124[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_124[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_128[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_128[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_132[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_132[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_136[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_136[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_140[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_140[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_144[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_144[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_148[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_148[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_152[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_152[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_156[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_156[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_160[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_98118.f_2869 = { Global_95149.f_2869 };
	Global_98118.f_2869.f_3 = Global_95149.f_2869.f_3;
	Global_98118.f_2875 = { Global_95149.f_2875 };
	Global_98118.f_2875.f_3 = { Global_95149.f_2875.f_3 };
	Global_98118.f_2875.f_6 = Global_95149.f_2875.f_6;
	Global_98118.f_2875.f_8 = Global_98118.f_2875.f_8;
	Global_98118.f_2875.f_7 = Global_95149.f_2875.f_7;
	Global_98118.f_2875.f_9 = Global_95149.f_2875.f_9;
	Global_98118.f_2875.f_11 = Global_95149.f_2875.f_11;
	Global_98118.f_2875.f_10 = Global_95149.f_2875.f_10;
	Global_98118.f_2875.f_12 = Global_95149.f_2875.f_12;
	Global_98118.f_2875.f_12.f_1 = { Global_95149.f_2875.f_12.f_1 };
	Global_98118.f_2875.f_12.f_5 = Global_95149.f_2875.f_12.f_5;
	Global_98118.f_2875.f_12.f_6 = Global_95149.f_2875.f_12.f_6;
	Global_98118.f_2875.f_12.f_7 = Global_95149.f_2875.f_12.f_7;
	Global_98118.f_2875.f_12.f_8 = Global_95149.f_2875.f_12.f_8;
	Global_98118.f_2875.f_12.f_9 = { Global_95149.f_2875.f_12.f_9 };
	Global_98118.f_2875.f_12.f_59 = { Global_95149.f_2875.f_12.f_59 };
	Global_98118.f_2875.f_12.f_62 = Global_95149.f_2875.f_12.f_62;
	Global_98118.f_2875.f_12.f_63 = Global_95149.f_2875.f_12.f_63;
	Global_98118.f_2875.f_12.f_64 = Global_95149.f_2875.f_12.f_64;
	Global_98118.f_2875.f_12.f_65 = Global_95149.f_2875.f_12.f_65;
	Global_98118.f_2875.f_12.f_77 = Global_95149.f_2875.f_12.f_77;
	Global_98118.f_2875.f_12.f_66 = Global_95149.f_2875.f_12.f_66;
	Global_98118.f_2875.f_12.f_67 = Global_95149.f_2875.f_12.f_67;
	Global_98118.f_2875.f_12.f_68 = Global_95149.f_2875.f_12.f_68;
	Global_98118.f_2875.f_12.f_69 = Global_95149.f_2875.f_12.f_69;
	Global_98118.f_2875.f_12.f_71 = Global_95149.f_2875.f_12.f_71;
	Global_98118.f_2875.f_12.f_72 = Global_95149.f_2875.f_12.f_72;
	Global_98118.f_2875.f_12.f_73 = Global_95149.f_2875.f_12.f_73;
	Global_98118.f_2875.f_12.f_74 = Global_95149.f_2875.f_12.f_74;
	Global_98118.f_2875.f_12.f_75 = Global_95149.f_2875.f_12.f_75;
	Global_98118.f_2875.f_12.f_76 = Global_95149.f_2875.f_12.f_76;
	Global_98118.f_2965 = Global_95149.f_2965;
	Global_98118.f_2965.f_1 = Global_95149.f_2965.f_1;
	Global_98118.f_2965.f_2 = Global_95149.f_2965.f_2;
	Global_98118.f_2965.f_3 = Global_95149.f_2965.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A62
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_222();
	uParam0->f_1 = func_94();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_68(&(uParam0->f_2869), 0);
		func_67(unk_0xFC1458A37D98B502());
		func_60(unk_0xFC1458A37D98B502(), 0);
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
		if (iVar1 == func_57())
		{
			func_50(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
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
		func_30(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2965));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)//Position - 0x28EA
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x290C
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2994
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
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

int func_32(int iParam0)//Position - 0x29D4
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

void func_33(var uParam0, int iParam1, int iParam2)//Position - 0x2A02
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
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

int func_34(int iParam0)//Position - 0x2ADE
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

int func_35(int iParam0)//Position - 0x2B20
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

int func_36(int iParam0, int iParam1, int iParam2)//Position - 0x2B83
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
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_37(iParam1, iParam2))
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

int func_37(int iParam0, int iParam1)//Position - 0x2C11
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, var uParam1, int iParam2)//Position - 0x2C53
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

bool func_39(int iParam0)//Position - 0x2EAF
{
	return iParam0 < 3;
}

void func_40(int iParam0, var uParam1)//Position - 0x2EBB
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_44(uParam1);
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
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
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
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_41(iVar0 + 1));
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

int func_41(int iParam0)//Position - 0x3166
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

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x3216
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

int func_43(int iParam0)//Position - 0x32F0
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

void func_44(var uParam0)//Position - 0x3310
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

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x33C1
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
						if (func_46(*uParam1, func_222(), 1))
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

int func_46(int iParam0, int iParam1, bool bParam2)//Position - 0x34F0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &sVar1, &iVar2))
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

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3561
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

int func_48(int iParam0)//Position - 0x363A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)//Position - 0x3677
{
	if (func_39(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_50(int iParam0, var uParam1, int iParam2)//Position - 0x36A1
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_48(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_56(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_55(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(iVar0))
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
			if (func_54(161, -1))
			{
				uParam1->f_59 = func_51(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_51(749, Global_70668, 0);
			}
			uParam1->f_60 = func_51(750, Global_70668, 0);
			uParam1->f_61 = func_51(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_54(161, -1))
			{
				uParam1->f_59 = func_51(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_51(749, Global_70668, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x384B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52(var uParam0)//Position - 0x387D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

int func_53()//Position - 0x38B1
{
	return Global_1312736;
}

int func_54(int iParam0, int iParam1)//Position - 0x38BD
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x38E9
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
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

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3E31
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
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

int func_57()//Position - 0x4074
{
	func_58();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_58()//Position - 0x408D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_49(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_48(unk_0xFC1458A37D98B502());
			if (func_39(iVar0) && (!func_59(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_39(Global_104555.f_2353.f_539.f_4301))
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

bool func_59(int iParam0)//Position - 0x418A
{
	return Global_35861 == iParam0;
}

void func_60(int iParam0, bool bParam1)//Position - 0x4198
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_61(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
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

void func_61(int iParam0, var uParam1)//Position - 0x428B
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
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_66(iVar0));
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
					iVar2 = func_64(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4, iVar1);
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
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_63(Var7.f_1)) && iVar9 < 50)
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
							if (!func_62(Var8.f_3))
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

int func_62(int iParam0)//Position - 0x4515
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

int func_63(int iParam0)//Position - 0x45B0
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

int func_64(int iParam0, int iParam1)//Position - 0x4724
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
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_62(Var5.f_3))
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

int func_65(int iParam0, var uParam1)//Position - 0x5295
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

int func_66(int iParam0)//Position - 0x52D0
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

void func_67(int iParam0)//Position - 0x5544
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_68(var uParam0, int iParam1)//Position - 0x5580
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
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, true, 0))
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
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0))
		{
			iVar3 = func_222();
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
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, true, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_69(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5ADB
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

bool func_70(int iParam0, var uParam1, var uParam2)//Position - 0x5B1F
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
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x61D6
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_72(var uParam0)//Position - 0x621D
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_93())
		{
			*uParam0 = func_78(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)//Position - 0x6278
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x6288
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_76() == 0)
		{
			return unk_0xC80D31E4B587871C(func_51(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x62E8
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

int func_76()//Position - 0x65CD
{
	return Global_25233;
}

int func_77(int iParam0)//Position - 0x65D8
{
	return func_74(iParam0, 5, 1);
}

int func_78(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x65E8
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
		if (iParam1 == 6 || iParam1 == func_92(iVar0))
		{
			if (!bParam3 || func_91(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_79(iVar0, 0), true);
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

Vector3 func_79(int iParam0, bool bParam1)//Position - 0x668A
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
			return func_90(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_89())
			{
				if (func_88(Global_1595538))
				{
					return func_81(2, 2);
				}
				else if (func_80(Global_1595538))
				{
					return func_81(45, 3);
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

int func_80(int iParam0)//Position - 0x6C29
{
	if (iParam0 != func_89())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_81(int iParam0, int iParam1)//Position - 0x6C87
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_89())
	{
		if (iParam1 == 3)
		{
			if (func_82(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_82(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_82(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x6D35
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_87(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_87(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_85(iParam0) };
	}
	else
	{
		Var2 = { func_84(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_83(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_83(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_83(vector3 vParam0, float fParam1)//Position - 0x6DCA
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

struct<6> func_84(int iParam0)//Position - 0x6E0E
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

struct<6> func_85(int iParam0)//Position - 0x6F92
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)//Position - 0x6FA0
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

int func_87(int iParam0, var uParam1)//Position - 0x7A67
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

int func_88(int iParam0)//Position - 0x7AE9
{
	if (iParam0 != func_89())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_89()//Position - 0x7B47
{
	return -1;
}

Vector3 func_90(int iParam0)//Position - 0x7B50
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

int func_91(int iParam0)//Position - 0x7CED
{
	return func_74(iParam0, 0, 0);
}

int func_92(int iParam0)//Position - 0x7CFD
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

bool func_93()//Position - 0x7F8A
{
	return Global_92885.f_315 > 0;
}

var func_94()//Position - 0x7F9B
{
	var uVar0;
	
	func_104(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_103(&uVar0, unk_0x95327550F0F2BE7C());
	func_102(&uVar0, unk_0x674C9438180770FE());
	func_97(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_96(&uVar0, unk_0xEAF455949B108589());
	func_95(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_95(var uParam0, int iParam1)//Position - 0x7FE1
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

void func_96(var uParam0, int iParam1)//Position - 0x8068
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_97(var uParam0, int iParam1)//Position - 0x809B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_101(*uParam0);
	iVar1 = func_99(*uParam0);
	if (iParam1 < 1 || iParam1 > func_98(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_98(int iParam0, int iParam1)//Position - 0x80EC
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

var func_99(int iParam0)//Position - 0x818E
{
	return (system::shift_right(iParam0, 26) & 31 * func_100(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_100(bool bParam0, int iParam1, int iParam2)//Position - 0x81B3
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_101(int iParam0)//Position - 0x81CA
{
	return iParam0 & 15;
}

void func_102(var uParam0, int iParam1)//Position - 0x81D7
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_103(var uParam0, int iParam1)//Position - 0x8211
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_104(var uParam0, int iParam1)//Position - 0x824C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

void func_105(int iParam0)//Position - 0x8288
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		uVar0 = iParam0;
		unk_0x9C6C754DD3BC5452(9, &uVar0, 1, 1);
	}
	else if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x84CCB9DCA385196F(9, &cVar1);
	}
}

void func_106(char* sParam0, int iParam1, int iParam2)//Position - 0x82E1
{
	if (!unk_0xAB019B170BF1309C(&Global_90048))
	{
		unk_0x8119B12F6588AF71(&Global_90048, 0, 0, 0, 1, 0);
		StringCopy(&Global_90048, "", 64);
	}
	StringCopy(&Global_90048, sParam0, 64);
	unk_0xE828B31F48018963(sParam0, iParam1, iParam2, func_212(0));
}

struct<2> func_107(int iParam0)//Position - 0x8323
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

void func_108(int iParam0, var uParam1)//Position - 0x8770
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x99B7
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

int func_110(int iParam0)//Position - 0x9A48
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

int func_111(int iParam0)//Position - 0x9D8E
{
	int iVar0;
	
	if (func_141(&(iParam0->f_1)))
	{
		if (!unk_0xAB019B170BF1309C(&(iParam0->f_9)))
		{
			func_131(1);
			func_129(iParam0, 1, func_130(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_128(*iParam0))
			{
				while (!unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					func_188();
					system::wait(0);
				}
			}
		}
		func_112(*iParam0);
		iVar0 = system::start_new_script_with_args(&(iParam0->f_1), iParam0, 61, 23000);
		unk_0x9D2418D7FC697249(&(iParam0->f_1));
		if (unk_0xA3DDC3767EC660CD())
		{
			func_362("Initial cutscene loaded and passing to RC mission.");
			unk_0x2605C2C9668F9186(iVar0);
		}
		else
		{
			func_362("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xA6C03E3E2533F8F3();
		}
		return 1;
	}
	return 0;
}

void func_112(int iParam0)//Position - 0x9E32
{
	struct<2> Var0;
	
	func_127();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 250, false);
	}
	if (func_126(iParam0))
	{
		unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 0);
	}
	unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
	unk_0xF40900F61CC88931(0, true);
	unk_0xF40900F61CC88931(3, true);
	unk_0xF40900F61CC88931(2, true);
	if (Global_36993 == 1)
	{
		if (func_124(unk_0xFC1458A37D98B502()))
		{
			func_115(unk_0xFC1458A37D98B502());
		}
	}
	if (!func_203())
	{
		if (iParam0 < 63)
		{
			func_113(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x218409883979C46E(1, &Var0);
		}
	}
}

void func_113(int iParam0)//Position - 0x9ECD
{
	if (iParam0 < 63)
	{
		func_114();
		Global_71111 = iParam0;
		Global_71110 = 0;
		Global_71113 = 7;
	}
}

void func_114()//Position - 0x9EF3
{
	if (Global_71110 != 6)
	{
	}
	if (Global_71115)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_71115 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71110 = 6;
	Global_71112 = -1;
	Global_71111 = -1;
}

void func_115(int iParam0)//Position - 0x9F2B
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
	iVar0 = func_123(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_118(1, iVar1, 1);
		return;
	}
	iVar2 = func_117(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_116(iVar2);
}

void func_116(int iParam0)//Position - 0x9F84
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

int func_117(int iParam0)//Position - 0xA007
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

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0xA038
{
	func_119(iParam0, iParam1, iParam2, 0, 0);
}

void func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA04C
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
	if (func_121(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_120();
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

int func_120()//Position - 0xA0C3
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

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0xA0F4
{
	if (func_122(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, int iParam1, int iParam2)//Position - 0xA10F
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

int func_123(int iParam0)//Position - 0xA15B
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

int func_124(int iParam0)//Position - 0xA1A4
{
	if (func_125(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0xA1C4
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)//Position - 0xA1E5
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_127()//Position - 0xA238
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

int func_128(int iParam0)//Position - 0xA2B5
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_129(var uParam0, bool bParam1, bool bParam2)//Position - 0xA308
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_125(uParam0->f_28[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_125(uParam0->f_35[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_125(uParam0->f_41[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), bParam1);
		if (bParam2)
		{
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_130(int iParam0)//Position - 0xA3FD
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_131(bool bParam0)//Position - 0xA468
{
	int iVar0;
	
	iVar0 = unk_0x98EC0789D9F0703B();
	if (!unk_0xC445AB6B86A2138E(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x59F2A26BF856E30A(iVar0, bParam0, 16);
		unk_0x59F2A26BF856E30A(iVar0, bParam0, 32);
	}
	func_132(1, 1, 0, 0);
}

void func_132(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA4A4
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_140(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_139())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_138(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_140(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_138(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_136(unk_0x9EB17624F44A8DA4())) && !func_134(unk_0x9EB17624F44A8DA4(), 0)) && !func_133())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_136(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_133()//Position - 0xA5BD
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_134(int iParam0, int iParam1)//Position - 0xA5DA
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_135(-1, 0) == 8;
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

int func_135(int iParam0, bool bParam1)//Position - 0xA625
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_136(int iParam0)//Position - 0xA666
{
	if (func_134(iParam0, 0))
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

bool func_137()//Position - 0xA6A8
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_138(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA6B9
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

int func_139()//Position - 0xA6EC
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0)//Position - 0xA713
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

int func_141(char* sParam0)//Position - 0xA736
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		unk_0xD9E2C360120FEB7C(sParam0);
		while (!unk_0x3B6F9DF9C5FEB3A4(sParam0))
		{
			unk_0xD9E2C360120FEB7C(sParam0);
			system::wait(0);
		}
		return 1;
	}
	func_362("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_142()//Position - 0xA773
{
	Global_14622 = 0;
	func_143();
}

void func_143()//Position - 0xA783
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

int func_144()//Position - 0xA7DA
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_145(var uParam0, bool bParam1)//Position - 0xA7FC
{
	struct<27> Var0;
	
	if (Global_70856)
	{
		func_362("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_108(*uParam0, &Var0);
	if ((func_187(*uParam0) || func_185(*uParam0)) || Global_71101 == 1)
	{
		return 1;
	}
	if (!unk_0x42F1FE4C7EC5F51E())
	{
		func_362("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_177(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_176(uParam0->f_28[0]);
		}
		func_362("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_156(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_156(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_153(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_152(uParam0);
			}
			else
			{
				func_150(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_153(uParam0, 0, 1))
		{
			func_150(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_153(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_153(uParam0, 1, 0))
		{
			func_150(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_153(uParam0, 0, 0))
		{
			func_150(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_125(uParam0->f_35[0]))
		{
			if (!unk_0x0C88267282FD588F(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x4E69510C44147A5C(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_362("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xC80D31E4B587871C(Var0.f_26, func_222()))
		{
			func_362("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_149(&(uParam0->f_48)) && bParam1)
	{
		func_146(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_146(int iParam0, var uParam1, int iParam2)//Position - 0xAA6F
{
	int iVar0;
	int iVar1;
	
	if (func_125(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_149(uParam1))
				{
					if (unk_0x3A801AA34DD821BE(*uParam1))
					{
						unk_0x957CEE967C939968(iParam0);
						if (iParam2 != 21)
						{
							if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x12C9D41D52A560D6(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x6931076730A4AC5D(&iVar0);
								if (func_148(uParam1))
								{
									unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x1B16DD5C115FE009(iVar0);
								unk_0xAB30B1CF01A198C1(iParam0, iVar0);
								unk_0xFAA3EF7FF92E1F9E(&iVar0);
							}
						}
						else
						{
							unk_0x22F63D02D1D91EBC(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_148(uParam1) || !unk_0xA5F6598E13F98E08(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_147(iParam2) && !unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 25f))
					{
						unk_0xAC838A977FB6E6BC(iParam0, unk_0xFC1458A37D98B502(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_148(uParam1) && uParam1->f_4 == 0) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x6931076730A4AC5D(&iVar1);
				if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x12C9D41D52A560D6(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x1B16DD5C115FE009(iVar1);
				unk_0xAB30B1CF01A198C1(iParam0, iVar1);
				unk_0xFAA3EF7FF92E1F9E(&iVar1);
				uParam1->f_4 = 1;
				if (func_147(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_147(iParam2) || unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 10f))
				{
					if (func_71(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x12C9D41D52A560D6(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x22F63D02D1D91EBC(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_147(int iParam0)//Position - 0xADC7
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0)//Position - 0xADE7
{
	if (unk_0xAB019B170BF1309C(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_149(var uParam0)//Position - 0xADFF
{
	if (unk_0xAB019B170BF1309C(*uParam0) || unk_0xAB019B170BF1309C(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_150(var uParam0)//Position - 0xAE24
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_151(&(uParam0->f_41[1]));
		func_151(&(uParam0->f_41[2]));
	}
	if (func_125(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_124(uParam0->f_28[iVar0]))
			{
				if (!unk_0x88DDBE9908752BF0(uParam0->f_28[iVar0], 0))
				{
					unk_0xB18E1DBC397238E1(uParam0->f_28[iVar0], true, 0);
					unk_0xEDC33A771FAEB393(uParam0->f_28[0], false);
				}
				unk_0xE9B3D12A64CC7C1A(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_125(uParam0->f_41[0]))
					{
						unk_0xB18E1DBC397238E1(uParam0->f_41[0], true, 0);
						unk_0xEDC33A771FAEB393(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_176(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x6450931B826B49D9("rcmcollect_paperleadinout@");
						while (!unk_0x3A801AA34DD821BE("rcmcollect_paperleadinout@"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 0:
					case 1:
						unk_0x6450931B826B49D9("rcmabigail");
						while (!unk_0x3A801AA34DD821BE("rcmabigail"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 32:
						unk_0x6450931B826B49D9("rcmminute1");
						while (!unk_0x3A801AA34DD821BE("rcmminute1"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						if (iVar0 == 0)
						{
							unk_0x12C9D41D52A560D6(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x12C9D41D52A560D6(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 24:
						unk_0x6450931B826B49D9("special_ped@hao@base");
						while (!unk_0x3A801AA34DD821BE("special_ped@hao@base"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					default:
						unk_0x2CEA76A7F93740C6(uParam0->f_28[iVar0]);
						unk_0xD68E88A8E0BE8697(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_151(int iParam0)//Position - 0xB128
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		unk_0x452336926718D62A(iParam0);
	}
}

void func_152(var uParam0)//Position - 0xB153
{
	int iVar0;
	
	if (func_125(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_124(uParam0->f_28[iVar0]))
			{
				unk_0xAE6EBBBBD8B9FB30(uParam0->f_28[iVar0], 1, false);
				unk_0x771A86309E0CA47B(uParam0->f_28[iVar0], false);
				unk_0xE9B3D12A64CC7C1A(uParam0->f_28[iVar0], true);
				unk_0xD7F5B2902EBBD04E(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x486F346ADFE56674(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_153(var uParam0, bool bParam1, bool bParam2)//Position - 0xB1D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_124(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_35[iVar0]))
			{
				if (unk_0x191BE1BC8F26F3C1(uParam0->f_35[iVar0], 0))
				{
					func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xB8DE76287EDC4957(uParam0->f_35[iVar0], 0))
				{
					func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0xEBE499597C718EB8(uParam0->f_35[iVar0], unk_0xFC1458A37D98B502(), 0))
				{
					func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0xDE523AF6F7B269AB(uParam0->f_35[iVar0]) < 850)
				{
					func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (unk_0x9A213A2345825783(uParam0->f_35[iVar0], unk_0xFC1458A37D98B502()) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 5f)
						{
							func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = unk_0xC733212BF9066BDF();
						if (func_155(iVar2))
						{
							if (unk_0x82FF3DFBC3965CC0(iVar2) == joaat("towtruck") || unk_0x82FF3DFBC3965CC0(iVar2) == joaat("towtruck2"))
							{
								if (func_155(uParam0->f_35[iVar0]))
								{
									if (unk_0x03760B63FE11B718(iVar2, uParam0->f_35[iVar0]))
									{
										func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xC733212BF9066BDF();
						if (func_155(iVar3))
						{
							if (unk_0x9A213A2345825783(uParam0->f_35[iVar0], iVar3) && unk_0x90D5DFB054818BA7(iVar3) > 6f)
							{
								func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_154(unk_0xFC1458A37D98B502(), uParam0->f_35[iVar0]))
							{
								func_362("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_154(int iParam0, int iParam1)//Position - 0xB391
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)//Position - 0xB3C1
{
	if (func_125(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_156(var uParam0, bool bParam1, int iParam2)//Position - 0xB3EB
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_124(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_28[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_28[iVar0]))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							if (func_144())
							{
								func_142();
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x9479D23F28CA059C(uParam0->f_28[iVar0]) || unk_0xC545C64D901C635F(uParam0->f_28[iVar0])) || unk_0x55ABE3023BD038CC(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_150(uParam0);
						}
						else
						{
							func_152(uParam0);
						}
						func_362("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x9F887157983E8EFC(uParam0->f_28[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_175(*uParam0))
					{
						if (!func_197(*uParam0))
						{
							if (func_170(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_150(uParam0);
								}
								else
								{
									func_152(uParam0);
								}
								func_362("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_158(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_157(*uParam0))
					{
						if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
						{
							if (iParam2 == 0)
							{
								func_150(uParam0);
							}
							else
							{
								func_152(uParam0);
							}
							func_362("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_362("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_125(uParam0->f_41[0]))
						{
							unk_0xB18E1DBC397238E1(uParam0->f_41[0], true, 0);
							unk_0xEDC33A771FAEB393(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_157(int iParam0)//Position - 0xB6A7
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, float fParam1)//Position - 0xB6DB
{
	float fVar0;
	
	if (func_125(unk_0xFC1458A37D98B502()) && func_125(iParam0))
	{
		if (func_169(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_159(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_159(int iParam0, float fParam1)//Position - 0xB751
{
	return func_160(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

bool func_160(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB769
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_168(iParam0, iParam1);
	if (!func_125(iParam0) || !func_125(iParam1))
	{
		if (iVar2 != -1)
		{
			func_167(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_164(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_163();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_161(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_161(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xB82A
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_125(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_162(iParam2, iParam5) };
		*uParam0 = unk_0x8941008352A0F66A(vParam1, vVar1 + vVar1 - vParam1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x16ACABF450EB00B4(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x52C56492660097C7(iVar3))
	{
		func_125(iVar3);
		if (unk_0x07F64790D10D1DB5(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x53C562FD2B9E3AB0();
			return 1;
		}
		return 0;
	}
	if (unk_0x8A3FF8E81B40BB75(iVar3))
	{
		func_125(iVar3);
		if (unk_0x88DDBE9908752BF0(iParam2, 0))
		{
			if (unk_0x79A6CD762DCCABE4(iVar3) == unk_0xDFD115BB10FE46A9(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0x93C9563BFC895A66(vParam1, unk_0xB3328BA8976B416C(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_162(int iParam0, int iParam1)//Position - 0xB956
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB3328BA8976B416C(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xD0E00576168D19BB(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xD0E00576168D19BB(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xD0E00576168D19BB(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xD0E00576168D19BB(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xD0E00576168D19BB(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB3328BA8976B416C(iParam0, 1);
}

int func_163()//Position - 0xBA1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_164(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xBA65
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_166(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xCE3B2111021F7234(iParam0) };
	}
	else
	{
		vVar1 = { func_166(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_165(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_165(vector3 vParam0, vector3 vParam1)//Position - 0xBAF6
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_166(vector3 vParam0)//Position - 0xBB17
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

void func_167(var uParam0)//Position - 0xBB56
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_168(int iParam0, int iParam1)//Position - 0xBB71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_169(int iParam0)//Position - 0xBBB0
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBBD8
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_125(unk_0xFC1458A37D98B502()) && func_125(iParam0))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_174(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_171(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_174(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_171(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xBCD3
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x692364B06AD5AF40(unk_0xB3328BA8976B416C(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_172(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_172(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF1DE6FAA2EFAA34F(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0, float fParam1)//Position - 0xBDDF
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_173(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xBE74
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_166(vParam1 - unk_0xB3328BA8976B416C(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xCE3B2111021F7234(iParam0) };
	}
	else
	{
		vVar1 = { func_166(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_165(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_174(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xBF02
{
	if (bParam1)
	{
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0xBF4A
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_176(int iParam0)//Position - 0xBF94
{
	int iVar0;
	
	if (func_125(unk_0xFC1458A37D98B502()) && func_125(iParam0))
	{
		unk_0x6450931B826B49D9("rcmextreme3");
		while (!unk_0x3A801AA34DD821BE("rcmextreme3"))
		{
			system::wait(0);
		}
		unk_0x6931076730A4AC5D(&iVar0);
		unk_0x12C9D41D52A560D6(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0xD40A6DFCC31D221A(0, 1);
		unk_0xC052DCF18935534A(0, 64,6f, -737,8f, 44,2f);
		unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
		unk_0x1B16DD5C115FE009(iVar0);
		unk_0xAB30B1CF01A198C1(iParam0, iVar0);
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
	}
}

int func_177(int iParam0)//Position - 0xC036
{
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_187(iParam0))
	{
		return 0;
	}
	if (!func_181(4))
	{
		if (func_185(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_180() && !func_179())
	{
		return 1;
	}
	if (!func_178(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0xC0CE
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_179()//Position - 0xC10D
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

int func_180()//Position - 0xC12A
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_181(int iParam0)//Position - 0xC150
{
	return func_182(iParam0, Global_35861);
}

int func_182(int iParam0, int iParam1)//Position - 0xC161
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

int func_183()//Position - 0xC342
{
	return func_184(unk_0x436287B7DB306165(), 0);
}

int func_184(char* sParam0, int iParam1)//Position - 0xC353
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
		func_108(iVar0, &sVar1);
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

int func_185(int iParam0)//Position - 0xC39C
{
	if ((func_186() && Global_92833.f_11 == 6) && iParam0 == func_184(&(Global_92833.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_186()//Position - 0xC3D0
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0)//Position - 0xC40E
{
	if (func_212(0))
	{
		if (Global_71102.f_1 == 7)
		{
			if (Global_71102 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188()//Position - 0xC436
{
	func_193(0);
	func_192();
	func_189();
}

void func_189()//Position - 0xC44B
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (func_190(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 10,5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1)
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				}
			}
		}
	}
}

int func_190(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xC4A3
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
	func_191(iParam0);
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

void func_191(int iParam0)//Position - 0xC632
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

void func_192()//Position - 0xC65E
{
	unk_0x4FB260623DD93924(0, 21, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0x4FB260623DD93924(0, 141, 1);
	unk_0x4FB260623DD93924(0, 140, 1);
	unk_0x4FB260623DD93924(0, 24, 1);
	unk_0x4FB260623DD93924(0, 257, 1);
	unk_0x4FB260623DD93924(0, 22, 1);
	unk_0x4FB260623DD93924(0, 23, 1);
}

void func_193(int iParam0)//Position - 0xC6AF
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_196(0))
		{
			func_194(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_194(int iParam0)//Position - 0xC6D8
{
	if (Global_14615)
	{
		func_195(0, 0);
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
	if (!func_139())
	{
		Global_14453.f_1 = 3;
	}
}

void func_195(bool bParam0, bool bParam1)//Position - 0xC748
{
	if (bParam0)
	{
		if (func_196(0))
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

int func_196(int iParam0)//Position - 0xC7BC
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

int func_197(int iParam0)//Position - 0xC816
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xC857
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_200(&(Global_103642[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_199(iParam0);
	return 1;
}

void func_199(int iParam0)//Position - 0xC89C
{
	Global_103642[iParam0 /*10*/].f_4 = 1;
	Global_103642[iParam0 /*10*/].f_5 = 0;
	Global_103642[iParam0 /*10*/].f_6 = 0;
	Global_103642[iParam0 /*10*/] = 0;
}

int func_200(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xC8CE
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
		if (func_202(0))
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
		if (!func_181(iParam2))
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
			func_201(uParam0, iParam4);
		}
	}
	return 2;
}

void func_201(var uParam0, int iParam1)//Position - 0xCA05
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

int func_202(int iParam0)//Position - 0xCA54
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_181(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_203()//Position - 0xCA76
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0xCA9A
{
	char* sVar0;
	
	if (Global_70856)
	{
		func_362("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_104555.f_9055 && !func_212(1))
	{
		func_362("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_205(iParam0))
	{
		Global_103642[iParam0 /*10*/].f_1 = 1;
		func_362("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_92833.f_11 == 6)
	{
		if (Global_92833 < 9)
		{
			func_108(iParam0, &sVar0);
			if (unk_0x74C475EB8E73D398(&(Global_92833.f_3), sVar0))
			{
				func_362("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("candidate_controller")) == 0)
	{
		Global_103642[iParam0 /*10*/].f_1 = 1;
		func_362("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_205(int iParam0)//Position - 0xCB53
{
	var uVar0;
	
	func_108(iParam0, &uVar0);
	if (!func_181(4))
	{
		if (func_185(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_180() && !func_179())
	{
		return 0;
	}
	if (func_211(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_187(iParam0))
	{
		if (!func_210(iParam0))
		{
			return 0;
		}
		if (!func_209(iParam0))
		{
			return 0;
		}
		if (func_208(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_206(5))
		{
			Global_103642[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_103642[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_206(int iParam0)//Position - 0xCC14
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_92885.f_313 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_206(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_207(iParam0, &sVar1);
		iVar2 = unk_0xC0765AFBFA616644(Global_88016[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_92885.f_313 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_207(int iParam0, char* sParam1)//Position - 0xCC99
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x74C475EB8E73D398(sParam1, "");
}

bool func_208(int iParam0)//Position - 0xCD7B
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 3);
}

bool func_209(int iParam0)//Position - 0xCDA9
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 2);
}

bool func_210(int iParam0)//Position - 0xCDD7
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 0);
}

int func_211(int iParam0)//Position - 0xCE05
{
	if (func_178(iParam0))
	{
		return 0;
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_212(bool bParam0)//Position - 0xCE3A
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

char* func_213(int iParam0)//Position - 0xCE65
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_214(int iParam0)//Position - 0xCEB9
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_215()//Position - 0xCF00
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_220(unk_0xFC1458A37D98B502()))
	{
		return bVar0;
	}
	if (Global_103642[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (iLocal_243)
		{
			unk_0x3E80C2F7BC665259(1);
			func_219("RAMP_HELP_CRIM", -1);
			iLocal_243 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (iLocal_242)
		{
			unk_0x3E80C2F7BC665259(1);
			func_219("RAMP_HELP_FOOT", -1);
			iLocal_242 = 0;
		}
		bVar0 = true;
	}
	else if ((func_218(0) || unk_0x1E06D00B67177A18()) || func_217())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_218(0))
			{
			}
			else if (unk_0x1E06D00B67177A18())
			{
			}
			else if (func_217())
			{
			}
			unk_0x3E80C2F7BC665259(1);
			iLocal_244 = 0;
		}
		bVar0 = true;
	}
	else if (func_346(108))
	{
		if (!iLocal_244)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0x3E80C2F7BC665259(1);
				func_216("RAMP_HELP_TRIG");
			}
			iLocal_244 = 1;
		}
		bVar0 = !unk_0xF2B58F79D29425B4(2, 51);
	}
	return bVar0;
}

void func_216(char* sParam0)//Position - 0xD00D
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

int func_217()//Position - 0xD023
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

bool func_218(bool bParam0)//Position - 0xD03F
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

void func_219(char* sParam0, int iParam1)//Position - 0xD068
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

bool func_220(int iParam0)//Position - 0xD07F
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

int func_221(float fParam0)//Position - 0xD09D
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!func_220(unk_0xFC1458A37D98B502()))
	{
		return -1;
	}
	vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		vVar1 = { Global_25578[(iLocal_239 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0xBE3C4023003180FC(vVar2, vVar1, true) <= fParam0 && unk_0xE97272C977DEADD3((vVar2.z - vVar1.z)) < 1,5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_222()//Position - 0xD119
{
	func_58();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_223(int iParam0, vector3 vParam1)//Position - 0xD132
{
	int iVar0;
	int iVar1[5];
	int iVar2;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_343(&iVar1, iParam0, vParam1, 5f))
	{
		func_362(" Didn't know which RC To Launch");
		func_347(iParam0, 1);
	}
	if (!func_204(*iParam0))
	{
		func_362(" RC Can't Launch");
		func_347(iParam0, 1);
	}
	if (func_342(*iParam0))
	{
		while (true)
		{
			system::wait(0);
			if (func_341(*iParam0))
			{
				func_347(iParam0, 1);
			}
		}
	}
	func_265(iParam0);
	unk_0x247EAA2E93D4A021(vParam1, iParam0->f_15, 1, 0, 0, false);
	while (true)
	{
		system::wait(0);
		if (*iParam0 == 52 || *iParam0 == 53)
		{
			if (func_125(iParam0->f_28[0]))
			{
				if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(iParam0->f_28[0], 1), 5,1f))
				{
					if (*iParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < iParam0->f_41)
						{
							if (unk_0x6ADD12BF4D6D2587(iParam0->f_41[iVar2]))
							{
								if ((func_125(iParam0->f_28[0]) && unk_0x5D67DB68EF61B3E1(iParam0->f_41[iVar2], iParam0->f_28[0])) || (func_125(iParam0->f_28[1]) && unk_0x5D67DB68EF61B3E1(iParam0->f_41[iVar2], iParam0->f_28[1])))
								{
									unk_0x452336926718D62A(&(iParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0x0FC9D6DF5B59B0AB(iParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0xA08608F006880850(iParam0->f_28[0], 1000, 1, 0);
					if (func_125(iParam0->f_28[1]))
					{
						unk_0x0FC9D6DF5B59B0AB(iParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0xA08608F006880850(iParam0->f_28[1], 1000, 1, 0);
					}
					func_362("Sitting Rampage attacked with explosives, cleaning up");
					func_347(iParam0, 1);
				}
			}
			if (func_125(iParam0->f_28[1]))
			{
				if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(iParam0->f_28[1], 1), 5,1f))
				{
					if (*iParam0 == 52)
					{
						iVar2 = 0;
						while (iVar2 < iParam0->f_41)
						{
							if (unk_0x6ADD12BF4D6D2587(iParam0->f_41[iVar2]))
							{
								if ((func_125(iParam0->f_28[0]) && unk_0x5D67DB68EF61B3E1(iParam0->f_41[iVar2], iParam0->f_28[0])) || (func_125(iParam0->f_28[1]) && unk_0x5D67DB68EF61B3E1(iParam0->f_41[iVar2], iParam0->f_28[1])))
								{
									unk_0x452336926718D62A(&(iParam0->f_41[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0x0FC9D6DF5B59B0AB(iParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0xA08608F006880850(iParam0->f_28[1], 1000, 1, 0);
					if (func_125(iParam0->f_28[0]))
					{
						unk_0x0FC9D6DF5B59B0AB(iParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0xA08608F006880850(iParam0->f_28[0], 1000, 1, 0);
					}
					func_362("Sitting Rampage attacked with explosives, cleaning up");
					func_347(iParam0, 1);
				}
			}
		}
		if (func_264(iParam0))
		{
			func_263(iParam0);
			func_362(" RC combat happening in area, tell peds to flee");
			func_150(iParam0);
			func_347(iParam0, 1);
		}
		if (!func_145(iParam0, 1))
		{
			func_362(" RC Is Not Fine And In Range");
			func_347(iParam0, 1);
		}
		if (func_262(52))
		{
			if (unk_0x8597B3AA38933783("Rampage1"))
			{
				func_362(" Turning Off Scenario Group For Rampage 1");
				unk_0xB4301FCD03DF42F6("Rampage1", false);
			}
		}
		func_261(*iParam0);
		func_253(&iLocal_240, &(iParam0->f_9), vParam1);
		if (iVar0 == 0 && iLocal_240 != -1)
		{
			func_252(iParam0, &uLocal_245);
			if (unk_0xA3DDC3767EC660CD())
			{
				func_362(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		vLocal_249 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		if ((!(*iParam0 == 52 && vLocal_249.z > 34f) && !(*iParam0 == 53 && vLocal_249.z > 71f)) && !(*iParam0 == 54 && vLocal_249.z > 30f))
		{
			if (func_240(iParam0, 0))
			{
				if (*iParam0 == 53)
				{
					if (func_237(iParam0))
					{
						func_362(" Trigger Conditions Met");
						func_188();
						if (!func_5(iParam0))
						{
							func_362(" RC Can't Launch");
							func_347(iParam0, 1);
						}
						func_362(" RC Launcher Waiting To Terminate");
						if (func_3(iParam0))
						{
							func_362(" Ready To Terminate");
							func_347(iParam0, 0);
						}
					}
				}
				else if (func_236(iParam0))
				{
					func_362(" Trigger Conditions Met");
					func_188();
					if (!func_5(iParam0))
					{
						func_362(" RC Can't Launch");
						func_347(iParam0, 1);
					}
					func_362(" RC Launcher Waiting To Terminate");
					if (func_3(iParam0))
					{
						func_362(" Ready To Terminate");
						func_347(iParam0, 0);
					}
				}
			}
			else
			{
				if (*iParam0 == 53)
				{
					func_224(iParam0);
				}
				if (unk_0x38DF88792E2574E5())
				{
					iLocal_69 = -1;
					unk_0x2C5E25A27FEE0F8A(0);
					unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
				}
			}
		}
	}
}

void func_224(int iParam0)//Position - 0xD605
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_70)
	{
		case 0:
			unk_0x6450931B826B49D9(sVar0);
			if (unk_0x3A801AA34DD821BE(sVar0))
			{
				iLocal_70++;
			}
			break;
		
		case 1:
			if (func_125(iParam0->f_28[0]))
			{
				if (func_235(iParam0->f_28[0], unk_0xFC1458A37D98B502(), 1) < 30f && unk_0x841ED61760A7D07B(iParam0->f_28[0]))
				{
					func_234(&uLocal_72, 0, iParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_70++;
				}
			}
			break;
		
		case 2:
			iLocal_71[0] = unk_0x8383F9C605E523B7(vLocal_66, vLocal_67, 2);
			if (func_125(iParam0->f_28[0]))
			{
				func_225(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0x8E628F774C748D93(iParam0->f_28[0], iLocal_71[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xD0E12C501EE26329(iLocal_71[0], false);
			unk_0x7122D672EBE0EA6E(iLocal_71[0], true);
			iLocal_70++;
			break;
		
		case 3:
			if (unk_0xD56F740235B1E8F0(iLocal_71[0]))
			{
				if (unk_0x463C4747B41E35A3(iLocal_71[0]) >= 0,95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 4:
			iLocal_71[1] = unk_0x8383F9C605E523B7(vLocal_66, vLocal_67, 2);
			if (func_125(iParam0->f_28[0]))
			{
				func_225(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0x8E628F774C748D93(iParam0->f_28[0], iLocal_71[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xD0E12C501EE26329(iLocal_71[1], false);
			unk_0x7122D672EBE0EA6E(iLocal_71[1], true);
			iLocal_70++;
			break;
		
		case 5:
			if (unk_0xD56F740235B1E8F0(iLocal_71[1]))
			{
				if (unk_0x463C4747B41E35A3(iLocal_71[1]) >= 0,95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 6:
			iLocal_71[2] = unk_0x8383F9C605E523B7(vLocal_66, vLocal_67, 2);
			if (func_125(iParam0->f_28[0]))
			{
				unk_0x8E628F774C748D93(iParam0->f_28[0], iLocal_71[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xD0E12C501EE26329(iLocal_71[2], true);
			unk_0x7122D672EBE0EA6E(iLocal_71[2], false);
			iLocal_70++;
			break;
		
		case 7:
			break;
	}
}

bool func_225(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD868
{
	func_233(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_226(sParam2, iParam4, 0);
}

int func_226(char* sParam0, int iParam1, bool bParam2)//Position - 0xD8BC
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
					func_143();
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
		if (func_232(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_231();
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
				func_230();
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
				if (func_229())
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
			if (func_139())
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
			func_228();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_227();
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
		func_143();
	}
	return 0;
}

void func_227()//Position - 0xDB88
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

void func_228()//Position - 0xDBBA
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

int func_229()//Position - 0xDC4F
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

void func_230()//Position - 0xDCE8
{
	if (func_59(14))
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
		Global_14453 = func_222();
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

void func_231()//Position - 0xDD8A
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

bool func_232(int iParam0, int iParam1)//Position - 0xDDE2
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

void func_233(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDE1D
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

void func_234(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xDE73
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

float func_235(int iParam0, int iParam1, bool bParam2)//Position - 0xDF0E
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

int func_236(int iParam0)//Position - 0xDF6C
{
	func_188();
	if (iLocal_69 < 0)
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*iParam0)
		{
			case 52:
				unk_0xCDB72D70019A533E(iParam0->f_28[0], 0,1f, 0f, 0,9f, 1, -1, 2500, 2000, 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam0->f_28[0], -1, 0, 2);
				unk_0x002F0394A3FA0CB3(1);
				unk_0x90BA33BD57E4B212(-5f);
				unk_0x8387657DD38B1FCC(0,1f);
				unk_0xB8232F875A8A2A7C(0f);
				unk_0x2D60D2C4CFEB6FAC(0,3f);
				unk_0x20BC9BA90DF0B63D(40f);
				break;
			
			case 54:
				unk_0xCDB72D70019A533E(iParam0->f_28[0], 0f, -0,1f, 0,9f, 1, -1, 2500, 2000, 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam0->f_28[0], -1, 0, 2);
				unk_0x002F0394A3FA0CB3(1);
				unk_0x90BA33BD57E4B212(-10f);
				unk_0x8387657DD38B1FCC(-0,9f);
				unk_0xB8232F875A8A2A7C(0f);
				unk_0x2D60D2C4CFEB6FAC(0,35f);
				unk_0x20BC9BA90DF0B63D(40f);
				break;
			
			case 55:
				unk_0xCDB72D70019A533E(iParam0->f_28[1], 0f, 0f, 0,9f, 1, -1, 2500, 2000, 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam0->f_28[1], -1, 0, 2);
				unk_0x002F0394A3FA0CB3(1);
				unk_0x90BA33BD57E4B212(-8f);
				unk_0x8387657DD38B1FCC(-0,9f);
				unk_0xB8232F875A8A2A7C(0,1f);
				unk_0x2D60D2C4CFEB6FAC(0,35f);
				unk_0x20BC9BA90DF0B63D(40f);
				break;
			
			case 56:
				unk_0xCDB72D70019A533E(iParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam0->f_28[1], -1, 0, 2);
				unk_0x002F0394A3FA0CB3(1);
				unk_0x90BA33BD57E4B212(-5f);
				unk_0x8387657DD38B1FCC(0,15f);
				unk_0xB8232F875A8A2A7C(0f);
				unk_0x2D60D2C4CFEB6FAC(0,3f);
				unk_0x20BC9BA90DF0B63D(40f);
				break;
		}
		iLocal_69 = unk_0x53C562FD2B9E3AB0() + 2500;
	}
	else if (unk_0x53C562FD2B9E3AB0() > iLocal_69)
	{
		iLocal_69 = -1;
		return 1;
	}
	return 0;
}

int func_237(var uParam0)//Position - 0xE161
{
	func_188();
	switch (iLocal_237)
	{
		case 0:
			if (func_125(uParam0->f_28[0]))
			{
				func_238();
				iLocal_237++;
			}
			break;
		
		case 1:
			if (func_125(uParam0->f_28[0]))
			{
				if (!func_144())
				{
					if (func_225(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						iLocal_238 = unk_0x8383F9C605E523B7(vLocal_66, vLocal_67, 2);
						unk_0x8E628F774C748D93(uParam0->f_28[0], iLocal_238, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0xCDB72D70019A533E(uParam0->f_28[0], 0f, 0f, 0,5f, 1, -1, 2500, 2000, 0);
						unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), uParam0->f_28[0], -1, 0, 2);
						unk_0x002F0394A3FA0CB3(1);
						unk_0x90BA33BD57E4B212(0f);
						unk_0x8387657DD38B1FCC(0,1f);
						unk_0xB8232F875A8A2A7C(0f);
						unk_0x2D60D2C4CFEB6FAC(0,35f);
						unk_0x20BC9BA90DF0B63D(40f);
						iLocal_237++;
					}
				}
			}
			break;
		
		case 2:
			if (func_125(uParam0->f_28[0]))
			{
				if (!func_144())
				{
					iLocal_237++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_238()//Position - 0xE29E
{
	Global_14622 = 0;
	func_239();
}

void func_239()//Position - 0xE2AE
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_240(var uParam0, int iParam1)//Position - 0xE2CF
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1826,631f, 4699,115f, 35,38089f, 1812,878f, 4710,457f, 42,05354f, 23,75f, 0, true, 0))
				{
					if (func_125(uParam0->f_28[0]))
					{
						if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_28[0], 1), true) < 3f)
						{
							if (func_245(2))
							{
								if (func_244(uParam0->f_27))
								{
									func_243(uParam0->f_27, *uParam0);
									func_362("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_125(uParam0->f_28[0]))
				{
					if (func_242(uParam0))
					{
						if (func_245(2))
						{
							if (func_244(uParam0->f_27))
							{
								func_243(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*uParam0 == 21)
			{
				if ((((!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1895,788f, -434,0192f, 40,30126f, -1883,038f, -444,0811f, 50,24509f, 8,5f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1883,576f, -443,6434f, 36,40581f, -1874,826f, -448,0797f, 49,15162f, 8,5f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1876,343f, -446,2214f, 35,64637f, -1866,952f, -456,5601f, 49,0442f, 8,5f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1882,997f, -438,9922f, 44,17246f, -1874,079f, -443,342f, 48,69179f, 0,75f, 0, true, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1878,822f, -441,7655f, 44,9175f, -1877,941f, -439,9522f, 47,28982f, 1,25f, 0, true, 0))
				{
					if (func_125(uParam0->f_28[0]))
					{
						if (func_242(uParam0))
						{
							if (func_245(2))
							{
								if (func_244(uParam0->f_27))
								{
									func_243(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (*uParam0 == 22)
			{
				if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 837,0731f, 1261,086f, 366,1592f, 780,8383f, 1260,829f, 351,405f, 17,75f, 0, true, 0))
				{
					if (func_125(uParam0->f_28[0]))
					{
						if (func_242(uParam0))
						{
							if (func_245(2))
							{
								if (func_244(uParam0->f_27))
								{
									func_243(uParam0->f_27, *uParam0);
									return 1;
								}
							}
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
			else if (func_125(uParam0->f_28[0]))
			{
				if (func_242(uParam0))
				{
					if (func_245(2))
					{
						if (func_244(uParam0->f_27))
						{
							func_243(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_125(uParam0->f_35[0]))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), uParam0->f_35[0], 0))
				{
					if (func_245(3))
					{
						func_243(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_241();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_35[0]))
			{
				if (!unk_0x191BE1BC8F26F3C1(uParam0->f_35[0], 0))
				{
					if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_35[0], 1), true) < uParam0->f_15)
					{
						if (func_245(2))
						{
							if (func_244(uParam0->f_27))
							{
								func_243(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), uParam0->f_17[0 /*3*/], true) < uParam0->f_15)
			{
				if (func_245(2))
				{
					if (func_244(uParam0->f_27))
					{
						func_243(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_245(2))
				{
					if (func_244(uParam0->f_27))
					{
						func_243(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*uParam0 == 6)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (func_125(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck2")))
						{
							if (unk_0x03760B63FE11B718(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), uParam0->f_35[0]))
							{
								if (func_245(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob2"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob3")))
						{
							if (unk_0xBB68E30A8B450E14(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && unk_0x61888377B3AC43E7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), uParam0->f_35[0]))
							{
								if (func_245(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (unk_0xD2B032DC10620ECA(unk_0xFC1458A37D98B502()) >= 2f)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 245,8885f, 371,9034f, 103,9884f, 241,5898f, 359,6458f, 107,3461f, 1,25f, 0, true, 0))
					{
						if (func_245(2))
						{
							if (func_244(uParam0->f_27))
							{
								func_243(uParam0->f_27, *uParam0);
								func_362("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -164,2046f, 277,4866f, 91,55322f, -153,6f, 277,4061f, 97,33813f, 10f, 0, true, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2728,948f, 4143,44f, 42,29295f, 2722,213f, 4144,521f, 45,43182f, 10f, 0, true, 0))
				{
					if (func_245(2))
					{
						if (func_244(1))
						{
							func_243(1, *uParam0);
							func_362("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -992,4995f, 358,7455f, 96,3735f, -1021,94f, 361,8888f, 65,36148f, 30f, 0, true, 0))
				{
					if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -983,5426f, 369,1104f, 68,46017f, -1028,566f, 395,4613f, 94,57245f, 15f, 0, true, 0))
					{
						if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -983,875f, 346,7556f, 68,02096f, -1021,451f, 336,3458f, 93,18714f, 14,5f, 0, true, 0))
						{
							if (func_245(2))
							{
								if (func_244(uParam0->f_27))
								{
									func_243(uParam0->f_27, *uParam0);
									func_362("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, true, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2338,697f, 2597,037f, 45,39052f, 2324,003f, 2597,185f, 47,74961f, 8,5f, 0, true, 0))
					{
						return 0;
					}
				}
				if (func_245(2))
				{
					if (func_244(uParam0->f_27))
					{
						func_243(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_241()//Position - 0xEAB2
{
	func_30(&(Global_95149.f_2875), &Global_95149, 0, 1, 1, 0);
}

int func_242(var uParam0)//Position - 0xEACD
{
	float fVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_28[0], 1), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_28[0], 1), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0, int iParam1)//Position - 0xEB5B
{
	if (iParam0 == 1)
	{
		if (!func_128(iParam1))
		{
			return;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			func_362("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				func_362("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xA15269351F50F113(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, true, 0);
			}
			func_188();
		}
	}
}

int func_244(bool bParam0)//Position - 0xEBBF
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xC733212BF9066BDF();
				if (func_155(iVar0))
				{
					if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
					{
						if ((!unk_0x9A3C64A7BB4588B3(iVar0) && !unk_0x0ACC2116170FA204(iVar0)) && unk_0x90D5DFB054818BA7(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x0ACC2116170FA204(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_245(int iParam0)//Position - 0xEC56
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_222();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_251()) || func_232(8, -1)) || func_93()) || func_250()) || func_249()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_217()) || Global_25235) || func_251()) || func_232(8, -1)) || func_249()) || func_93()) || func_250()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_251()) || func_232(8, -1)) || func_249()) || func_93()) || func_250()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_217()) || Global_103602) || Global_25235) || func_251()) || func_232(8, -1)) || func_93()) || func_250()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_232(8, -1)) || func_248()) || func_247()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_232(8, -1) || func_93()) || func_250()) || func_247()) || func_246())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_217()) || Global_25235) || func_251()) || func_232(8, -1)) || func_250()) || func_249()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_217()) || func_250()) || Global_103602) || Global_25235) || func_251()) || Global_36993) || func_232(8, -1)) || func_249()) || func_247()) || func_248()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_217()) || Global_103602) || Global_25235) || func_251()) || func_232(8, -1)) || func_249()) || func_247()) || func_93()) || func_250()) || func_248())
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

var func_246()//Position - 0xF373
{
	return Global_92872.f_1;
}

int func_247()//Position - 0xF381
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_248()//Position - 0xF3A7
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_249()//Position - 0xF3C1
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

bool func_250()//Position - 0xF3EB
{
	return Global_92885.f_316 > 0;
}

var func_251()//Position - 0xF3FC
{
	return Global_1312854;
}

void func_252(var uParam0, var uParam1)//Position - 0xF408
{
	if (unk_0x8AD07B6FC24F47C4())
	{
		if (func_125(unk_0xFC1458A37D98B502()))
		{
			unk_0x6A39A6ADDC38ABE4("Trevor", unk_0xFC1458A37D98B502(), unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_125(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_125(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_125(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_125(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0xEDB61F1ADC509416((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_125(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_125(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0xEDB61F1ADC509416((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_125(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0xEDB61F1ADC509416((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_125(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_125(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x6A39A6ADDC38ABE4((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_253(int iParam0, char* sParam1, vector3 vParam2)//Position - 0xF5FD
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xAB019B170BF1309C(sParam1))
		{
			if (Global_35861 == 17)
			{
				if (*iParam0 != -1)
				{
					func_259(iParam0);
				}
			}
			else if (func_258())
			{
				if (*iParam0 != -1)
				{
					func_259(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_257(unk_0xFC1458A37D98B502(), vParam2, 1) <= 100f)
				{
					func_256(iParam0, 1);
				}
			}
			else
			{
				switch (func_255(*iParam0))
				{
					case 1:
						if (unk_0x74C475EB8E73D398(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x79E39A06DE88EFE2(sParam1, 14, 8);
						}
						else
						{
							unk_0x393584863A2F304E(sParam1, 8);
						}
						unk_0x86B828AE0E423AF2(2);
						func_254(*iParam0, 1);
						break;
					
					case 2:
						unk_0x7042DDDE71665936(0);
						unk_0xA6C03E3E2533F8F3();
						unk_0x86B828AE0E423AF2(0);
						func_254(*iParam0, 0);
						break;
				}
				if (func_257(unk_0xFC1458A37D98B502(), vParam2, 1) > 120f)
				{
					func_259(iParam0);
				}
			}
		}
	}
}

void func_254(int iParam0, bool bParam1)//Position - 0xF6EE
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_70852 == iParam0)
		{
			Global_70853 = iParam0;
		}
	}
	else if (Global_70853 == iParam0)
	{
		Global_70853 = -1;
	}
}

int func_255(int iParam0)//Position - 0xF72A
{
	if (Global_70852 == iParam0)
	{
		if (Global_70853 == -1)
		{
			if (Global_70851 < unk_0x4B64A8D052027742())
			{
				return 1;
			}
		}
	}
	else if (Global_70853 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_256(int iParam0, int iParam1)//Position - 0xF763
{
	bool bVar0;
	int iVar1;
	
	if (Global_70849 < 5)
	{
		Global_70838[Global_70849 /*2*/] = 0;
		Global_70838[Global_70849 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_70849)
			{
				if (Global_70838[iVar1 /*2*/] == Global_70838[Global_70849 /*2*/])
				{
					Global_70838[Global_70849 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_70838[Global_70849 /*2*/];
		Global_70849++;
		Global_70850 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_257(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xF801
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

bool func_258()//Position - 0xF83B
{
	return Global_90287;
}

void func_259(int iParam0)//Position - 0xF847
{
	unk_0x7042DDDE71665936(0);
	unk_0xA6C03E3E2533F8F3();
	func_260(iParam0);
}

void func_260(int iParam0)//Position - 0xF85E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_70853 == *iParam0)
	{
		func_254(*iParam0, 0);
	}
	if (Global_70852 == *iParam0)
	{
		Global_70852 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_70849)
	{
		if (Global_70838[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_70849 - 2))
	{
		Global_70838[iVar2 /*2*/] = Global_70838[iVar2 + 1 /*2*/];
		Global_70838[iVar2 /*2*/].f_1 = Global_70838[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_70838[(Global_70849 - 1) /*2*/] = -1;
	Global_70838[(Global_70849 - 1) /*2*/].f_1 = 3;
	Global_70849 = (Global_70849 - 1);
	Global_70850 = 1;
	Global_70851 = unk_0x4B64A8D052027742();
	*iParam0 = -1;
}

void func_261(int iParam0)//Position - 0xF946
{
	if (iParam0 == -1)
	{
		iParam0 = func_183();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_103642[iParam0 /*10*/].f_1 = 1;
}

bool func_262(int iParam0)//Position - 0xF96E
{
	return Global_103642[iParam0 /*10*/].f_1;
}

void func_263(var uParam0)//Position - 0xF980
{
	if (*uParam0 == 52)
	{
		func_362(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[3]))
		{
			unk_0xEDC33A771FAEB393(uParam0->f_41[3], true);
			unk_0x3A703774620FDB42(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[4]))
		{
			unk_0xEDC33A771FAEB393(uParam0->f_41[4], true);
			unk_0x3A703774620FDB42(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_264(var uParam0)//Position - 0xF9F2
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0x5F89DE0953A72822(unk_0xFC1458A37D98B502()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_265(var uParam0)//Position - 0xFA2C
{
	switch (*uParam0)
	{
		case 52:
			func_340(uParam0);
			iLocal_250 = func_339();
			break;
		
		case 53:
			func_333(uParam0);
			iLocal_250 = func_331();
			break;
		
		case 54:
			func_330(uParam0);
			break;
		
		case 55:
			func_329(uParam0);
			iLocal_250 = func_328();
			break;
		
		case 56:
			func_266(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_250 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_266(var uParam0)//Position - 0xFACD
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	unk_0x6FF834D85E2DD4C6(iVar1);
	unk_0x6FF834D85E2DD4C6(iVar2);
	unk_0x6450931B826B49D9(sVar0);
	unk_0x04562CD765E0C517(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x9A0B2ED5055D3F0B(iVar1) || !unk_0x9A0B2ED5055D3F0B(iVar2)) || !unk_0x3A801AA34DD821BE(sVar0))
	{
		system::wait(0);
	}
	while (!func_326(&(uParam0->f_28[0]), iVar1, -1299,4f, 2506,24f, 21,07f, -122,79f, 0))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[0]));
	unk_0x296D39391436DC64(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x12C9D41D52A560D6(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 0);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 1);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 2);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 3);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 4);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 5);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 6);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 7);
	unk_0x6057F5872C9EFA39(uParam0->f_28[0], 8);
	while (!func_326(&(uParam0->f_28[1]), iVar1, -1299,49f, 2505,53f, 21,05f, -101,94f, 0))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[1]));
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 0);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 1);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 2);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 3);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 4);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 5);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 6);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 7);
	unk_0x6057F5872C9EFA39(uParam0->f_28[1], 8);
	unk_0x296D39391436DC64(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x12C9D41D52A560D6(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_324(&(uParam0->f_35[0]), iVar2, -1298,16f, 2504,153f, 21,062f, 165,48f))
	{
		system::wait(0);
	}
	unk_0xACE486395AA1867D(uParam0->f_35[0], 1084227584);
	func_323(&(uParam0->f_35[0]));
	unk_0x7B3133EBCD34B431(uParam0->f_35[0], 1, false);
	unk_0x7B3133EBCD34B431(uParam0->f_35[0], 1, true);
	unk_0xEDC33A771FAEB393(uParam0->f_35[0], true);
	if (!func_267(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297,84f, 2505,91f, 19,34f, func_322(-0,5f)))
	{
	}
	else
	{
		unk_0xB18E1DBC397238E1(uParam0->f_41[0], false, 0);
		unk_0xBD8D47FDC6902B2D(uParam0->f_41[0], -1297,84f, 2505,91f, 19,34f, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(uParam0->f_41[0], func_322(-0,5f));
		unk_0xEDC33A771FAEB393(uParam0->f_41[0], true);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0x14776E43F90DD454(iVar1);
	unk_0x14776E43F90DD454(iVar2);
}

int func_267(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0xFF56
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0x452336926718D62A(iParam0);
		*iParam0 = 0;
	}
	iVar0 = unk_0xD50D486F1F311BFC(iParam1);
	unk_0x6FF834D85E2DD4C6(iVar0);
	iVar2 = unk_0x53C562FD2B9E3AB0() + 10000;
	while (unk_0x53C562FD2B9E3AB0() < iVar2)
	{
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			*iParam0 = unk_0xD50A2A2DB03A5CF0(iParam1, -1, vParam2, 1, 1065353216, 0, 0, 1);
			unk_0x14776E43F90DD454(iVar0);
			if (func_321(&uVar1, iParam1, joaat("gun_root")))
			{
				if (unk_0x714669D9C29712E4(*iParam0, func_268(&uVar1, iParam1, joaat("gun_root"), 0)))
				{
					unk_0x287B533B0CDC89A1(*iParam0, func_268(&uVar1, iParam1, joaat("gun_root"), 0));
				}
				else if (unk_0x714669D9C29712E4(*iParam0, func_268(&uVar1, iParam1, joaat("gun_root"), 1)))
				{
					unk_0x287B533B0CDC89A1(*iParam0, func_268(&uVar1, iParam1, joaat("gun_root"), 1));
				}
			}
			if (unk_0x6ADD12BF4D6D2587(*iParam0))
			{
				unk_0xBD8D47FDC6902B2D(*iParam0, vParam2, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(*iParam0, fParam3);
				return 1;
			}
		}
		system::wait(0);
	}
	unk_0x14776E43F90DD454(iVar0);
	return 0;
}

int func_268(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1005E
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	
	func_320(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar2 = 0;
	while (func_269(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar2)
			{
				return Var0;
			}
			iVar2++;
		}
		iVar1++;
	}
	return 0;
}

bool func_269(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x100B1
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
	var uVar15;
	struct<4> Var16;
	
	func_320(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_320(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_320(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_320(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_320(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_320(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_320(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_320(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_320(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -2045758401, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -785724817, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -282298175, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -76490669, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, -1478681000, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1675665560, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_320(uParam0, -966040254, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_320(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_320(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_320(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_320(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_320(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_320(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_320(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_320(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_320(uParam0, 1134861606, -1312077031, 1, 1);
					break;
				
				case 24:
					func_320(uParam0, 1447477866, -1312077031, 2, 0);
					break;
				
				case 25:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_320(uParam0, -1860492113, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_320(uParam0, 937772107, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_320(uParam0, 1401650071, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_320(uParam0, 628662130, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_320(uParam0, -985047251, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_320(uParam0, -812944463, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_320(uParam0, -1447352303, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_320(uParam0, -60338860, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_320(uParam0, 2088750491, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_320(uParam0, -1513913454, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_320(uParam0, -1179558480, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 1283078430, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, 1574296533, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, 391640422, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, 1025884839, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 626875735, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1141059345, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_320(uParam0, -966040254, joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_320(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_320(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_320(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_320(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_320(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_320(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_320(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_320(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_320(uParam0, -2093598721, -1312077031, 1, 1);
					break;
				
				case 24:
					func_320(uParam0, -1958983669, -1312077031, 2, 0);
					break;
				
				case 25:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_320(uParam0, 1272803094, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_320(uParam0, 1080719624, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_320(uParam0, 792221348, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_320(uParam0, -452181427, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_320(uParam0, -746774737, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_320(uParam0, -2044296061, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_320(uParam0, -199171978, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_320(uParam0, -1428075016, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_320(uParam0, -1735153315, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_320(uParam0, 1796459838, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_320(uParam0, -631911105, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 1227564412, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, 400507625, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -161179835, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -1020871238, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 696788003, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1475288264, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 1060929921, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_320(uParam0, -966040254, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_320(uParam0, -1181482284, joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_320(uParam0, -932732805, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_320(uParam0, -569259057, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_320(uParam0, -326080308, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_320(uParam0, 48731514, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_320(uParam0, 880736428, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_320(uParam0, 1303784126, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_320(uParam0, -1018236364, -1312077031, 1, 1);
					break;
				
				case 21:
					func_320(uParam0, -1243457701, -1312077031, 2, 0);
					break;
				
				case 22:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_320(uParam0, 1249283253, joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_320(uParam0, -857707587, joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_320(uParam0, -1097543898, joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_320(uParam0, 1980349969, joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_320(uParam0, 1219453777, joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_320(uParam0, -1853459190, joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_320(uParam0, -2074781016, joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_320(uParam0, 457967755, joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_320(uParam0, 235171324, joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_320(uParam0, 42685294, joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_320(uParam0, -687617715, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -98690520, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, 752418717, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, 247526935, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -130689324, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 1005144310, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, -1981031769, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, -2101279869, joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_320(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_320(uParam0, -1233121104, joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_320(uParam0, 776198721, joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, -1404903567, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_320(uParam0, 1764221345, joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_320(uParam0, -1869205321, -1312077031, 1, 1);
					break;
				
				case 15:
					func_320(uParam0, 277524638, -1312077031, 2, 0);
					break;
				
				case 16:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_320(uParam0, -130843390, joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_320(uParam0, -977347227, joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_320(uParam0, -378461067, joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_320(uParam0, 329939175, joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_320(uParam0, 643374672, joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_320(uParam0, 807875052, joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_320(uParam0, -1401804168, joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_320(uParam0, -1096495395, joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_320(uParam0, -847811454, joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_320(uParam0, -1413108537, joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_320(uParam0, 1815270123, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -1795936926, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, 1591132456, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, 634039983, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, 733837882, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, -2046910199, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1329061674, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, -1898661008, joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, 1140676955, joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, 568543123, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_320(uParam0, 1550611612, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_320(uParam0, 368550800, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_320(uParam0, -1769069349, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_320(uParam0, 24902297, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_320(uParam0, -228041614, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_320(uParam0, -584961562, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_320(uParam0, -1153175946, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_320(uParam0, 1301287696, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_320(uParam0, 1597093459, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_320(uParam0, 1769871776, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_320(uParam0, -1827882671, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 1277460590, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -1182573778, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, 2146055916, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -644734235, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 974903034, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 190476639, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, -1613015470, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, -452809877, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_320(uParam0, 1038927834, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_320(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_320(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_320(uParam0, -1181482284, joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_320(uParam0, -932732805, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_320(uParam0, -569259057, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_320(uParam0, -326080308, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_320(uParam0, 48731514, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_320(uParam0, 880736428, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_320(uParam0, 1303784126, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_320(uParam0, -653246751, -1312077031, 1, 1);
					break;
				
				case 22:
					func_320(uParam0, -1520117877, -1312077031, 2, 0);
					break;
				
				case 23:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_320(uParam0, -996700057, joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_320(uParam0, 940943685, joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_320(uParam0, 1263226800, joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_320(uParam0, -328035840, joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_320(uParam0, 1224100642, joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_320(uParam0, 899228776, joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_320(uParam0, 616006309, joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_320(uParam0, -1561952511, joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_320(uParam0, 572063080, joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_320(uParam0, 1170588613, joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_320(uParam0, 966612367, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_320(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_320(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_319(iLocal_65))
			{
				if (!func_310(1623028892, joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_320(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_320(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_320(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_320(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_320(uParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_320(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_320(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_320(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_320(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_320(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_320(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -845938367, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -1618338827, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -380098265, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, 1315288101, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 1004815965, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_320(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_320(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_320(uParam0, 1060929921, joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_320(uParam0, -1404903567, joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_320(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_320(uParam0, -474112444, joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_320(uParam0, 387223451, joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_320(uParam0, 617753366, joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_320(uParam0, -222378256, joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_320(uParam0, 8741501, joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_320(uParam0, -601286203, joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_320(uParam0, -511433605, joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_320(uParam0, -655387818, joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_320(uParam0, -282476598, joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_320(uParam0, 1739501925, joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_320(uParam0, 1178671645, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 382112385, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -568352468, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -2023373174, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -570355066, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 1362433589, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1346235024, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_320(uParam0, -966040254, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_320(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_320(uParam0, -1181482284, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_320(uParam0, -932732805, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_320(uParam0, -569259057, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_320(uParam0, -326080308, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_320(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_320(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_320(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_320(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_320(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_320(uParam0, -415870039, -1312077031, 1, 1);
					break;
				
				case 24:
					func_320(uParam0, -109086661, -1312077031, 2, 0);
					break;
				
				case 25:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_320(uParam0, -737430213, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_320(uParam0, 1125852043, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_320(uParam0, 886015732, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_320(uParam0, -1262287139, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_320(uParam0, -295208411, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_320(uParam0, -544154504, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_320(uParam0, 172765678, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_320(uParam0, -1982877449, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_320(uParam0, 2072122460, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_320(uParam0, -1986220171, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_320(uParam0, 1377355801, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 21392614, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -829683854, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -1876057490, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -424845447, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, -1928301566, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, -1055790298, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, 1246324211, joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, 1205768792, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, -1434287169, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_320(uParam0, 259780317, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_320(uParam0, -1973342474, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_320(uParam0, 1996130345, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_320(uParam0, -1455657812, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_320(uParam0, -1668263084, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_320(uParam0, 1308243489, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_320(uParam0, 1122574335, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_320(uParam0, 1420313469, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_320(uParam0, 109848390, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_320(uParam0, 593945703, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_320(uParam0, 1142457062, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -1797182002, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -422587990, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -679861550, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, 1842849902, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, -193998727, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, -515203373, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_320(uParam0, -966040254, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_320(uParam0, 1528590652, joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_320(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_320(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_320(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_320(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_320(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_320(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_320(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_320(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_320(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_320(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_320(uParam0, 941317513, -1312077031, 1, 1);
					break;
				
				case 23:
					func_320(uParam0, 1748450780, -1312077031, 2, 0);
					break;
				
				case 24:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_320(uParam0, -1869284448, joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_320(uParam0, 1931539634, joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_320(uParam0, 1624199183, joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_320(uParam0, -26834113, joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_320(uParam0, -210406055, joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_320(uParam0, 423313640, joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_320(uParam0, 276639596, joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_320(uParam0, -991356863, joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_320(uParam0, -1682848301, joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_320(uParam0, 996213771, joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_320(uParam0, -1214048550, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, -1172055874, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -958864266, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, 15712037, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, 284438159, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, 231258687, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_320(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_320(uParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_320(uParam0, 654802123, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_320(uParam0, -1069552225, joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_320(uParam0, 11918884, joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_320(uParam0, 176157112, joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_320(uParam0, -220052855, joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_320(uParam0, 288456487, joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_320(uParam0, 398658626, joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_320(uParam0, 628697006, joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_320(uParam0, 925911836, joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_320(uParam0, 1222307441, joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_320(uParam0, 552442715, joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_320(uParam0, -648943513, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_320(uParam0, 25766362, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_320(uParam0, -273676760, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_320(uParam0, -2111807319, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_320(uParam0, -1449330342, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_320(uParam0, -89655827, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_320(uParam0, 1130501904, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_320(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_320(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_320(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_320(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_320(uParam0, -944910075, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_320(uParam0, 1060929921, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_320(uParam0, 1704640795, -1312077031, 1, 1);
					break;
				
				case 13:
					func_320(uParam0, 1005743559, -1312077031, 2, 0);
					break;
				
				case 14:
					func_320(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_320(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_320(uParam0, -1181482284, joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_320(uParam0, -932732805, joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_320(uParam0, -569259057, joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_320(uParam0, -326080308, joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_320(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_320(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_320(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_320(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_320(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_320(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_320(uParam0, -1371515465, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_320(uParam0, -1190793877, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_320(uParam0, -1497085720, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_320(uParam0, -1803148180, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_320(uParam0, -1975971886, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_320(uParam0, 36929477, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_320(uParam0, -268444834, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_320(uParam0, -574769446, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_320(uParam0, -882699739, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_320(uParam0, -1468181474, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_320(uParam0, -974541230, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_65(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < unk_0x16DE9AAC68A15A81(iVar12))
				{
					if (unk_0x768809DD20D4F552(iVar12, iVar13, &Var16))
					{
						if (!func_62(Var16.f_3))
						{
							if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16 == -31573710)
							{
								iVar9++;
							}
							else if (Var16 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var16 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_320(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_270(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_270(int iParam0, int iParam1)//Position - 0x14CDB
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2,5f;
	if (!unk_0x3A711520F83BAE98())
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_309() && (func_308() || func_307()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_309() && (func_308() || func_307()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_309() && (func_308() || func_307()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_65(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x16DE9AAC68A15A81(iVar2))
					{
						if (unk_0x768809DD20D4F552(iVar2, iVar3, &Var5))
						{
							if (!func_62(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_305(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_309() && (func_308() || func_307()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2884));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_9916;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4414));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20015;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_262145.f_19904;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2885));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4338));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_19905;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4339));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11296;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4409));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2887));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4340));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_9915;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4403));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2888));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4344));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_9919;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4413));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2889));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_15453;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_9918;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4418));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20016;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2891));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_15448;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9912;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4404));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20018;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2892));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_15447;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4362));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4363));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_9914;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4407));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20019;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2894));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4369));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4368));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9913;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4402));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4370));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_11297;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4412));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4392));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11298;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4408));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20017;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_11293;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4416));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21722;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2898));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4378));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4380));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4381));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4382));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4383));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9921;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4419));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4385));
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_20020;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4390));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4391));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2890));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4353));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11294;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4352));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_5992;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_6571;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11295;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21727;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_6576;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_15450;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6579;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_6575;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6573;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6578;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_11299;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21723;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_6577;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_6581;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6574;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_6601;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_6584;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6587;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6582;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_6583;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6585;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_11300;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21726;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_7057;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7058;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_7781;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_15454;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7782;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7783;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7784;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_7787;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7788;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7790;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7791;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_7792;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21724;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_13948));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4376));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4377));
						break;
				}
				if (func_309() && (func_308() || func_307()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2886));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4342));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_9917;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4415));
						break;
				}
				if (func_309() && (func_308() || func_307()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_9920;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4417));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_10234;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4422));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_10235;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4423));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_10236;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_10237;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4425));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_10238;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4426));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_10239;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4427));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_10240;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4428));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_10241;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4429));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_10242;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4430));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_10259;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4432));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_15452;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_10260;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4433));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_12141;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_12142;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_12199;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_12140;
						break;
					
					case 1623028892:
						iVar0 = Global_262145.f_21725;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_13878;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_15449;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						iVar0 = 0;
						break;
					
					case -1820405577:
						iVar0 = Global_262145.f_17891;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_19900;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_15451;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_19901;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_19903;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_19902;
						break;
				}
				break;
			
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						iVar0 = 0;
						break;
					
					case -785724817:
						iVar0 = Global_262145.f_20021;
						break;
					
					case -1478681000:
						iVar0 = Global_262145.f_20022;
						break;
					
					case 1675665560:
						iVar0 = Global_262145.f_20023;
						break;
					
					case -76490669:
						iVar0 = Global_262145.f_20024;
						break;
					
					case -282298175:
						iVar0 = Global_262145.f_20025;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20026;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20027;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20028;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20029;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20030;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_20031;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20032;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20033;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20034;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20035;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20036;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20037;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20038;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20039;
						break;
					
					case 1134861606:
						iVar0 = 0;
						break;
					
					case 1447477866:
						iVar0 = Global_262145.f_20040;
						break;
					
					case -1860492113:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 937772107:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 1401650071:
						iVar0 = Global_262145.f_20151;
						break;
					
					case 628662130:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -985047251:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -812944463:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -1447352303:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -60338860:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 2088750491:
						iVar0 = Global_262145.f_20157;
						break;
					
					case -1513913454:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -1179558480:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						iVar0 = 0;
						break;
					
					case 1574296533:
						iVar0 = Global_262145.f_20041;
						break;
					
					case 626875735:
						iVar0 = Global_262145.f_20042;
						break;
					
					case 1141059345:
						iVar0 = Global_262145.f_20043;
						break;
					
					case 1025884839:
						iVar0 = Global_262145.f_20044;
						break;
					
					case 391640422:
						iVar0 = Global_262145.f_20045;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20046;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20047;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20048;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20049;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20050;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_20051;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20052;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20053;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20054;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20055;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20056;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20057;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20058;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20059;
						break;
					
					case -2093598721:
						iVar0 = 0;
						break;
					
					case -1958983669:
						iVar0 = Global_262145.f_20060;
						break;
					
					case 1272803094:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 1080719624:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 792221348:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -452181427:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -746774737:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -2044296061:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -199171978:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -1428075016:
						iVar0 = Global_262145.f_20156;
						break;
					
					case -1735153315:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 1796459838:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -631911105:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						iVar0 = 0;
						break;
					
					case 400507625:
						iVar0 = Global_262145.f_20061;
						break;
					
					case 696788003:
						iVar0 = Global_262145.f_20062;
						break;
					
					case 1475288264:
						iVar0 = Global_262145.f_20063;
						break;
					
					case -1020871238:
						iVar0 = Global_262145.f_20064;
						break;
					
					case -161179835:
						iVar0 = Global_262145.f_20065;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_20066;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_20067;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_20068;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_20069;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20070;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20071;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20072;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20073;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20074;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20075;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20076;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_20077;
						break;
					
					case -1018236364:
						iVar0 = 0;
						break;
					
					case -1243457701:
						iVar0 = Global_262145.f_20078;
						break;
					
					case 1249283253:
						iVar0 = Global_262145.f_20149;
						break;
					
					case -857707587:
						iVar0 = Global_262145.f_20150;
						break;
					
					case -1097543898:
						iVar0 = Global_262145.f_20151;
						break;
					
					case 1980349969:
						iVar0 = Global_262145.f_20152;
						break;
					
					case 1219453777:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -1853459190:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -2074781016:
						iVar0 = Global_262145.f_20155;
						break;
					
					case 457967755:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 235171324:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 42685294:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -687617715:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						iVar0 = 0;
						break;
					
					case 752418717:
						iVar0 = Global_262145.f_20079;
						break;
					
					case -130689324:
						iVar0 = Global_262145.f_20080;
						break;
					
					case 1005144310:
						iVar0 = Global_262145.f_20082;
						break;
					
					case 247526935:
						iVar0 = Global_262145.f_20083;
						break;
					
					case -1981031769:
						iVar0 = Global_262145.f_20081;
						break;
					
					case -2101279869:
						iVar0 = Global_262145.f_20084;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case -1233121104:
						iVar0 = Global_262145.f_20085;
						break;
					
					case 776198721:
						iVar0 = Global_262145.f_20086;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_20087;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_20088;
						break;
					
					case 1764221345:
						iVar0 = Global_262145.f_20089;
						break;
					
					case -1869205321:
						iVar0 = 0;
						break;
					
					case 277524638:
						iVar0 = Global_262145.f_20090;
						break;
					
					case -130843390:
						iVar0 = Global_262145.f_20149;
						break;
					
					case -977347227:
						iVar0 = Global_262145.f_20150;
						break;
					
					case -378461067:
						iVar0 = Global_262145.f_20151;
						break;
					
					case 329939175:
						iVar0 = Global_262145.f_20152;
						break;
					
					case 643374672:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 807875052:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -1401804168:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -1096495395:
						iVar0 = Global_262145.f_20156;
						break;
					
					case -847811454:
						iVar0 = Global_262145.f_20157;
						break;
					
					case -1413108537:
						iVar0 = Global_262145.f_20158;
						break;
					
					case 1815270123:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						iVar0 = 0;
						break;
					
					case 1591132456:
						iVar0 = Global_262145.f_20091;
						break;
					
					case -2046910199:
						iVar0 = Global_262145.f_20093;
						break;
					
					case 1329061674:
						iVar0 = Global_262145.f_20092;
						break;
					
					case 733837882:
						iVar0 = Global_262145.f_20094;
						break;
					
					case 634039983:
						iVar0 = Global_262145.f_20095;
						break;
					
					case 1140676955:
						iVar0 = Global_262145.f_20096;
						break;
					
					case -1898661008:
						iVar0 = Global_262145.f_20097;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_20098;
						break;
					
					case 568543123:
						iVar0 = Global_262145.f_20099;
						break;
					
					case 1550611612:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 368550800:
						iVar0 = Global_262145.f_20150;
						break;
					
					case -1769069349:
						iVar0 = Global_262145.f_20151;
						break;
					
					case 24902297:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -228041614:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -584961562:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -1153175946:
						iVar0 = Global_262145.f_20155;
						break;
					
					case 1301287696:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 1597093459:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 1769871776:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -1827882671:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						iVar0 = 0;
						break;
					
					case -1182573778:
						iVar0 = Global_262145.f_20100;
						break;
					
					case 974903034:
						iVar0 = Global_262145.f_20102;
						break;
					
					case 190476639:
						iVar0 = Global_262145.f_20101;
						break;
					
					case -644734235:
						iVar0 = Global_262145.f_20103;
						break;
					
					case 2146055916:
						iVar0 = Global_262145.f_20104;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20105;
						break;
					
					case -1613015470:
						iVar0 = Global_262145.f_20106;
						break;
					
					case -452809877:
						iVar0 = Global_262145.f_20107;
						break;
					
					case 1038927834:
						iVar0 = Global_262145.f_20108;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_20109;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_20110;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_20111;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_20112;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_20113;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_20114;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_20115;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_20116;
						break;
					
					case -653246751:
						iVar0 = 0;
						break;
					
					case -1520117877:
						iVar0 = Global_262145.f_20117;
						break;
					
					case -996700057:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 940943685:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 1263226800:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -328035840:
						iVar0 = Global_262145.f_20152;
						break;
					
					case 1224100642:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 899228776:
						iVar0 = Global_262145.f_20154;
						break;
					
					case 616006309:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -1561952511:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 572063080:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 1170588613:
						iVar0 = Global_262145.f_20158;
						break;
					
					case 966612367:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						iVar0 = 0;
						break;
					
					case 1315288101:
						iVar0 = Global_262145.f_21754;
						break;
					
					case 1004815965:
						iVar0 = Global_262145.f_21755;
						break;
					
					case -380098265:
						iVar0 = Global_262145.f_21753;
						break;
					
					case -1618338827:
						iVar0 = Global_262145.f_21752;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21781;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_21782;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_21783;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_21784;
						break;
					
					case -1404903567:
						iVar0 = Global_262145.f_21785;
						break;
					
					case 1602080333:
						iVar0 = Global_262145.f_21786;
						break;
					
					case -474112444:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 387223451:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 617753366:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -222378256:
						iVar0 = Global_262145.f_20152;
						break;
					
					case 8741501:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -601286203:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -511433605:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -655387818:
						iVar0 = Global_262145.f_20156;
						break;
					
					case -282476598:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 1739501925:
						iVar0 = Global_262145.f_20158;
						break;
					
					case 1178671645:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						iVar0 = 0;
						break;
					
					case -568352468:
						iVar0 = Global_262145.f_21756;
						break;
					
					case 1362433589:
						iVar0 = Global_262145.f_21760;
						break;
					
					case 1346235024:
						iVar0 = Global_262145.f_21758;
						break;
					
					case -570355066:
						iVar0 = Global_262145.f_21759;
						break;
					
					case -2023373174:
						iVar0 = Global_262145.f_21757;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21787;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_21788;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_21789;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_21790;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_21791;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_21792;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_21793;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_21794;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_21795;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_21796;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_21797;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_21798;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_21799;
						break;
					
					case -415870039:
						iVar0 = 0;
						break;
					
					case -109086661:
						iVar0 = Global_262145.f_21800;
						break;
					
					case -737430213:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 1125852043:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 886015732:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -1262287139:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -295208411:
						iVar0 = Global_262145.f_20153;
						break;
					
					case -544154504:
						iVar0 = Global_262145.f_20154;
						break;
					
					case 172765678:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -1982877449:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 2072122460:
						iVar0 = Global_262145.f_20157;
						break;
					
					case -1986220171:
						iVar0 = Global_262145.f_20158;
						break;
					
					case 1377355801:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						iVar0 = 0;
						break;
					
					case -829683854:
						iVar0 = Global_262145.f_22646;
						break;
					
					case -1055790298:
						iVar0 = Global_262145.f_21776;
						break;
					
					case -1928301566:
						iVar0 = Global_262145.f_21778;
						break;
					
					case -424845447:
						iVar0 = Global_262145.f_21777;
						break;
					
					case -1876057490:
						iVar0 = Global_262145.f_21775;
						break;
					
					case 1246324211:
						iVar0 = Global_262145.f_21832;
						break;
					
					case 1205768792:
						iVar0 = Global_262145.f_21833;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_21834;
						break;
					
					case -1434287169:
						iVar0 = Global_262145.f_21835;
						break;
					
					case 259780317:
						iVar0 = Global_262145.f_20149;
						break;
					
					case -1973342474:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 1996130345:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -1455657812:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -1668263084:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 1308243489:
						iVar0 = Global_262145.f_20154;
						break;
					
					case 1122574335:
						iVar0 = Global_262145.f_20155;
						break;
					
					case 1420313469:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 109848390:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 593945703:
						iVar0 = Global_262145.f_20158;
						break;
					
					case 1142457062:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						iVar0 = 0;
						break;
					
					case -422587990:
						iVar0 = Global_262145.f_21761;
						break;
					
					case -193998727:
						iVar0 = Global_262145.f_21765;
						break;
					
					case -515203373:
						iVar0 = Global_262145.f_21763;
						break;
					
					case 1842849902:
						iVar0 = Global_262145.f_21764;
						break;
					
					case -679861550:
						iVar0 = Global_262145.f_21762;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21801;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_21802;
						break;
					
					case -966040254:
						iVar0 = Global_262145.f_21803;
						break;
					
					case 1528590652:
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21804;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_21805;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_21806;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_21807;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_21808;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_21809;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_21810;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_21811;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_21812;
						break;
					
					case 941317513:
						iVar0 = 0;
						break;
					
					case 1748450780:
						iVar0 = Global_262145.f_21813;
						break;
					
					case -1869284448:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 1931539634:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 1624199183:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -26834113:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -210406055:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 423313640:
						iVar0 = Global_262145.f_20154;
						break;
					
					case 276639596:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -991356863:
						iVar0 = Global_262145.f_20156;
						break;
					
					case -1682848301:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 996213771:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -1214048550:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						iVar0 = 0;
						break;
					
					case -958864266:
						iVar0 = Global_262145.f_21766;
						break;
					
					case 231258687:
						iVar0 = Global_262145.f_21767;
						break;
					
					case 284438159:
						iVar0 = Global_262145.f_21769;
						break;
					
					case 15712037:
						iVar0 = Global_262145.f_21768;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_21814;
						break;
					
					case 77277509:
						iVar0 = Global_262145.f_21815;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_21816;
						break;
					
					case 654802123:
						iVar0 = Global_262145.f_21817;
						break;
					
					case -1069552225:
						iVar0 = Global_262145.f_20149;
						break;
					
					case 11918884:
						iVar0 = Global_262145.f_20150;
						break;
					
					case 176157112:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -220052855:
						iVar0 = Global_262145.f_20152;
						break;
					
					case 288456487:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 398658626:
						iVar0 = Global_262145.f_20154;
						break;
					
					case 628697006:
						iVar0 = Global_262145.f_20155;
						break;
					
					case 925911836:
						iVar0 = Global_262145.f_20156;
						break;
					
					case 1222307441:
						iVar0 = Global_262145.f_20157;
						break;
					
					case 552442715:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -648943513:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						iVar0 = 0;
						break;
					
					case -273676760:
						iVar0 = Global_262145.f_21770;
						break;
					
					case -89655827:
						iVar0 = Global_262145.f_21774;
						break;
					
					case 1130501904:
						iVar0 = Global_262145.f_21772;
						break;
					
					case -1449330342:
						iVar0 = Global_262145.f_21773;
						break;
					
					case -2111807319:
						iVar0 = Global_262145.f_21771;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21818;
						break;
					
					case 1108334355:
						iVar0 = Global_262145.f_21819;
						break;
					
					case -944910075:
						iVar0 = Global_262145.f_21820;
						break;
					
					case 1060929921:
						iVar0 = Global_262145.f_21821;
						break;
					
					case 1704640795:
						iVar0 = 0;
						break;
					
					case 1005743559:
						iVar0 = Global_262145.f_21831;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21822;
						break;
					
					case -1181482284:
						iVar0 = Global_262145.f_21823;
						break;
					
					case -932732805:
						iVar0 = Global_262145.f_21824;
						break;
					
					case -569259057:
						iVar0 = Global_262145.f_21825;
						break;
					
					case -326080308:
						iVar0 = Global_262145.f_21826;
						break;
					
					case 48731514:
						iVar0 = Global_262145.f_21827;
						break;
					
					case 880736428:
						iVar0 = Global_262145.f_21828;
						break;
					
					case 1303784126:
						iVar0 = Global_262145.f_21829;
						break;
					
					case -1654288262:
						iVar0 = Global_262145.f_21830;
						break;
					
					case -1371515465:
						iVar0 = Global_262145.f_20149;
						break;
					
					case -1190793877:
						iVar0 = Global_262145.f_20150;
						break;
					
					case -1497085720:
						iVar0 = Global_262145.f_20151;
						break;
					
					case -1803148180:
						iVar0 = Global_262145.f_20152;
						break;
					
					case -1975971886:
						iVar0 = Global_262145.f_20153;
						break;
					
					case 36929477:
						iVar0 = Global_262145.f_20154;
						break;
					
					case -268444834:
						iVar0 = Global_262145.f_20155;
						break;
					
					case -574769446:
						iVar0 = Global_262145.f_20156;
						break;
					
					case -882699739:
						iVar0 = Global_262145.f_20157;
						break;
					
					case -1468181474:
						iVar0 = Global_262145.f_20158;
						break;
					
					case -974541230:
						iVar0 = Global_262145.f_20159;
						break;
				}
				break;
			
			default:
				iVar6 = func_65(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < unk_0x16DE9AAC68A15A81(iVar6))
					{
						if (unk_0x768809DD20D4F552(iVar6, iVar7, &Var9))
						{
							if (!func_62(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (unk_0x3A711520F83BAE98() && func_303())
	{
		StringCopy(&Var11, func_301(iParam1, iParam0), 16);
		func_297(&sVar10, Var11, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, 1, func_299(iParam0), func_298(iParam0), -1, 0, 0);
		if (unk_0xBBA20694DE4179EB(&sVar10))
		{
			iVar0 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar10), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_271(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_271(int iParam0, int iParam1, float fParam2)//Position - 0x1837F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x3A711520F83BAE98() && func_303())
	{
		return 1f;
	}
	if (!unk_0x3A711520F83BAE98())
	{
		*iParam1 = system::floor((system::to_float(*iParam1) * fParam2));
	}
	if (!Global_70856)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_294(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0,1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0,15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0,25f;
			}
		}
	}
	if (iLocal_64 == 1)
	{
		if (unk_0x3A711520F83BAE98())
		{
			*iParam1 = system::floor((system::to_float(*iParam1) * Global_262145.f_76));
			fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
		}
	}
	if (iLocal_64 == 0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			*iParam1 = system::floor((system::to_float(*iParam1) * Global_262145.f_76));
			if (func_272())
			{
				fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
				iLocal_64 = 1;
			}
			else
			{
				iLocal_64 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = system::floor((system::to_float(*iParam1) * fVar0));
	return fVar0;
}

int func_272()//Position - 0x18495
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		return 0;
	}
	if (func_291())
	{
		if (func_276())
		{
			iVar0 = func_274();
			iVar1 = func_273();
			fVar2 = ((system::to_float(iVar1) / system::to_float(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_273()//Position - 0x184F3
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1368104);
	iVar0 = (iVar0 + Global_1368107);
	return iVar0;
}

int func_274()//Position - 0x1850F
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1368105);
	iVar0 = (iVar0 + Global_1368106);
	iVar0 = (iVar0 + Global_1368104);
	iVar0 = (iVar0 + Global_1368107);
	iVar0 = (iVar0 + Global_1368109);
	iVar0 = (iVar0 + Global_1368108);
	iVar0 = (iVar0 + func_275(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_275(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_275(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_275(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_275(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_275(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_275(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_275(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_275(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_275(int iParam0)//Position - 0x185CD
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

int func_276()//Position - 0x185EB
{
	struct<7> Var0;
	struct<7> Var1;
	
	unk_0x1CCE004C2B8D3ACA(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_290(joaat("mpply_started_mp")) };
	if (func_277(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_277(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x1862F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_288(Param1);
	iVar1 = func_284(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_278(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0, int iParam1)//Position - 0x1866A
{
	int iVar0;
	int iVar1;
	
	if (!func_283(iParam1) || !func_283(iParam0))
	{
		return 1;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_282(iParam0);
	iVar1 = func_282(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_281(iParam0);
	iVar1 = func_281(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_280(iParam0);
	iVar1 = func_280(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	iVar1 = func_279(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x18776
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_280(int iParam0)//Position - 0x18789
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_281(int iParam0)//Position - 0x1879C
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_282(int iParam0)//Position - 0x187AF
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_283(int iParam0)//Position - 0x187C1
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
	iVar0 = func_279(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_280(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_281(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_99(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_101(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_282(iParam0);
	if (iVar5 < 1 || iVar5 > func_98(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_284(struct<7> Param0, int iParam1)//Position - 0x1889D
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_287(Param0) == 0)
	{
		uVar0 = func_288(Param0);
		uVar1 = uVar0;
		func_285(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x188DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_99(*uParam0);
	iVar1 = func_101(*uParam0);
	iVar2 = func_282(*uParam0);
	iVar3 = func_281(*uParam0);
	iVar4 = func_280(*uParam0);
	iVar5 = func_279(*uParam0);
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
	iVar6 = func_98(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_98(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_286(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x18A5F
{
	func_104(uParam0, iParam1);
	func_103(uParam0, iParam2);
	func_102(uParam0, iParam3);
	func_96(uParam0, iParam5);
	func_97(uParam0, iParam4);
	func_95(uParam0, iParam6);
}

int func_287(struct<7> Param0)//Position - 0x18A97
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_288(struct<6> Param0, var uParam1)//Position - 0x18AED
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_95(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_96(&uVar0, func_289(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_97(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_102(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_103(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_104(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_289(int iParam0)//Position - 0x18B63
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_290(int iParam0)//Position - 0x18C28
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	uVar0 = iParam0;
	if (unk_0xD0E3686BEA3F48D8(uVar0, &Var2, 7, -1))
	{
		return Var2;
	}
	return Var1;
}

int func_291()//Position - 0x18C4C
{
	if (func_293() && func_292(0))
	{
		return 1;
	}
	return 0;
}

var func_292(int iParam0)//Position - 0x18C6A
{
	return Global_1312373[iParam0];
}

var func_293()//Position - 0x18C7A
{
	return func_292(func_53() + 1);
}

int func_294(int iParam0)//Position - 0x18C8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_222();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_295(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_295(1, iVar0);
		iVar3[1] = func_295(3, iVar0);
		iVar3[2] = func_295(2, iVar0);
		iVar3[3] = func_295(4, iVar0);
		iVar3[4] = func_295(5, iVar0);
		iVar3[5] = func_295(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_295(int iParam0, int iParam1)//Position - 0x18EE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_296(iVar0, iParam1);
	if (func_296(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_296(iVar1, iParam1);
	}
	if (func_296(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_296(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_296(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_296(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_296(int iParam0, int iParam1)//Position - 0x18FEC
{
	return Global_104555.f_19117[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_297(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x19008
{
	switch (unk_0x8B948C59217A295D(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_68195)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_68196)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_68197)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_68198)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, unk_0x8C8DF9FA5116BB9A(iParam4), 16);
				if (unk_0xAB019B170BF1309C(&cParam1) || unk_0x8B948C59217A295D(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				if (iParam4 == joaat("fcr2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam4 == joaat("diablous2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam4 == joaat("comet3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, unk_0x8C8DF9FA5116BB9A(iParam4), 16);
					if (unk_0xAB019B170BF1309C(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_298(int iParam0)//Position - 0x195CF
{
	switch (iParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 2;
			break;
	}
	return -1;
}

int func_299(int iParam0)//Position - 0x1962E
{
	return func_300(iParam0);
}

int func_300(int iParam0)//Position - 0x1963C
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case 317205821:
			return 72;
			break;
		
		case -1121678507:
			return 73;
			break;
		
		case 125959754:
			return 74;
			break;
		
		case -853065399:
			return 75;
			break;
		
		case -1169823560:
			return 76;
			break;
		
		case -1810795771:
			return 77;
			break;
		
		case 419712736:
			return 78;
			break;
		
		case 961495388:
			return 8;
			break;
		
		case -86904375:
			return 9;
			break;
		
		case -608341376:
			return 13;
			break;
		
		case 177293209:
			return 21;
			break;
		
		case -1075685676:
			return 1;
			break;
		
		case 2024373456:
			return 5;
			break;
		
		case 1432025498:
			return 22;
			break;
		
		case -1768145561:
			return 46;
			break;
		
		case -2009644972:
			return 47;
			break;
		
		case 1785463520:
			return 56;
			break;
		
		case -879347409:
			return 70;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case -1746263880:
			return 79;
			break;
	}
	return 0;
}

char* func_301(int iParam0, int iParam1)//Position - 0x19B4A
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case 1525977990:
			return "WCT_CLIP1";
			break;
		
		case 1824470811:
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 1623028892:
			return "WCT_VAR_GUN";
			break;
		
		case -1214048550:
			return "WCT_CAMO_IND";
			break;
		
		case 1142457062:
			return "WCT_CAMO_IND";
			break;
		
		case -829683854:
			return "WCT_CLIP2";
			break;
		
		case -944910075:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 1060929921:
			return "WCT_SCOPE_SML2";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_65(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar0))
					{
						if (unk_0x768809DD20D4F552(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_302(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_302(var uParam0)//Position - 0x1A2CF
{
	return uParam0;
}

int func_303()//Position - 0x1A2D9
{
	if (unk_0x3A711520F83BAE98() && func_304())
	{
		return 1;
	}
	return 0;
}

int func_304()//Position - 0x1A2F6
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_305(int iParam0)//Position - 0x1A30D
{
	if (!unk_0x3A711520F83BAE98())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_306(iParam0))
	{
		return Global_262145.f_20010;
	}
	return 1;
}

int func_306(int iParam0)//Position - 0x1A36F
{
	switch (iParam0)
	{
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

int func_307()//Position - 0x1A3CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xC80D31E4B587871C(Global_25, 6))
	{
		if (unk_0xC80D31E4B587871C(Global_25, 2) || unk_0xC80D31E4B587871C(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xC80D31E4B587871C(iVar0, 6))
		{
			if (unk_0xC80D31E4B587871C(iVar0, 2) || unk_0xC80D31E4B587871C(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xBC3459AD346669FC(0))
	{
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xFA3CE529DBB66C85(iVar2, &iVar1, -1))
			{
				if (unk_0xC80D31E4B587871C(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2E68557F22711FDA())
	{
		iVar3 = unk_0x496616BFA56C89EB(866);
		if (unk_0xC80D31E4B587871C(iVar3, 2) || unk_0xC80D31E4B587871C(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_308()//Position - 0x1A49F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xC80D31E4B587871C(Global_25, 5))
	{
		if (unk_0xC80D31E4B587871C(Global_25, 1) || unk_0xC80D31E4B587871C(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xC80D31E4B587871C(iVar0, 5))
		{
			if (unk_0xC80D31E4B587871C(iVar0, 1) || unk_0xC80D31E4B587871C(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xBC3459AD346669FC(0))
	{
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xFA3CE529DBB66C85(iVar2, &iVar1, -1))
			{
				if (unk_0xC80D31E4B587871C(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2E68557F22711FDA())
	{
		iVar3 = unk_0x496616BFA56C89EB(866);
		if (unk_0xC80D31E4B587871C(iVar3, 1) || unk_0xC80D31E4B587871C(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0xECC841C67C1F66D9())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x872F1C1F8587CCC7(&iVar4, 1);
				unk_0x872F1C1F8587CCC7(&iVar4, 3);
				unk_0x872F1C1F8587CCC7(&iVar4, 5);
				unk_0x872F1C1F8587CCC7(&Global_25, 1);
				unk_0x872F1C1F8587CCC7(&Global_25, 3);
				unk_0x872F1C1F8587CCC7(&Global_25, 5);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar4 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar4, 1);
					unk_0x872F1C1F8587CCC7(&iVar4, 3);
					unk_0xDDFB38BD8B59BBB9(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_309()//Position - 0x1A5F3
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

bool func_310(int iParam0, int iParam1, int iParam2)//Position - 0x1A6AE
{
	int iVar0;
	int iVar1;
	
	if (func_318())
	{
		return 0;
	}
	iVar0 = func_314(iParam0, iParam1, iParam2);
	iVar1 = func_312(iParam0, iParam1);
	return unk_0xC80D31E4B587871C(iVar0, func_311(iVar1));
}

int func_311(int iParam0)//Position - 0x1A6E3
{
	return (iParam0 % 32);
}

int func_312(int iParam0, int iParam1)//Position - 0x1A6F0
{
	return func_313(iParam0, iParam1);
}

int func_313(int iParam0, int iParam1)//Position - 0x1A700
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case 1623028892:
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case 1623028892:
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case 1623028892:
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case 1623028892:
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case 1623028892:
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case 1623028892:
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
					break;
				
				case 1824470811:
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case 1623028892:
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case 1623028892:
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case 1623028892:
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case 1623028892:
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case 1623028892:
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
					break;
				
				case -1820405577:
					return 210;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
					break;
				
				case 1591132456:
					return 218;
					break;
				
				case 1329061674:
					return 219;
					break;
				
				case -2046910199:
					return 220;
					break;
				
				case 733837882:
					return 221;
					break;
				
				case 634039983:
					return 222;
					break;
				
				case 1140676955:
					return 223;
					break;
				
				case -1898661008:
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case 568543123:
					return 226;
					break;
				
				case 1550611612:
					return 367;
					break;
				
				case 368550800:
					return 368;
					break;
				
				case -1769069349:
					return 369;
					break;
				
				case 24902297:
					return 370;
					break;
				
				case -228041614:
					return 371;
					break;
				
				case -584961562:
					return 372;
					break;
				
				case -1153175946:
					return 373;
					break;
				
				case 1301287696:
					return 374;
					break;
				
				case 1597093459:
					return 375;
					break;
				
				case 1769871776:
					return 376;
					break;
				
				case -1827882671:
					return 377;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
					break;
				
				case -1182573778:
					return 228;
					break;
				
				case 190476639:
					return 229;
					break;
				
				case 974903034:
					return 230;
					break;
				
				case -644734235:
					return 231;
					break;
				
				case 2146055916:
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case -1613015470:
					return 234;
					break;
				
				case -452809877:
					return 235;
					break;
				
				case 1038927834:
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case -1181482284:
					return 238;
					break;
				
				case -932732805:
					return 239;
					break;
				
				case -569259057:
					return 240;
					break;
				
				case -326080308:
					return 241;
					break;
				
				case 48731514:
					return 242;
					break;
				
				case 880736428:
					return 243;
					break;
				
				case 1303784126:
					return 244;
					break;
				
				case -653246751:
					return 245;
					break;
				
				case -1520117877:
					return 246;
					break;
				
				case -996700057:
					return 378;
					break;
				
				case 940943685:
					return 379;
					break;
				
				case 1263226800:
					return 380;
					break;
				
				case -328035840:
					return 381;
					break;
				
				case 1224100642:
					return 382;
					break;
				
				case 899228776:
					return 383;
					break;
				
				case 616006309:
					return 384;
					break;
				
				case -1561952511:
					return 385;
					break;
				
				case 572063080:
					return 386;
					break;
				
				case 1170588613:
					return 387;
					break;
				
				case 966612367:
					return 388;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
					break;
				
				case 752418717:
					return 248;
					break;
				
				case -130689324:
					return 249;
					break;
				
				case -1981031769:
					return 250;
					break;
				
				case 1005144310:
					return 251;
					break;
				
				case 247526935:
					return 252;
					break;
				
				case -2101279869:
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case -1233121104:
					return 255;
					break;
				
				case 776198721:
					return 256;
					break;
				
				case -1404903567:
					return 257;
					break;
				
				case 1602080333:
					return 258;
					break;
				
				case 1764221345:
					return 259;
					break;
				
				case -1869205321:
					return 260;
					break;
				
				case 277524638:
					return 261;
					break;
				
				case -130843390:
					return 356;
					break;
				
				case -977347227:
					return 357;
					break;
				
				case -378461067:
					return 358;
					break;
				
				case 329939175:
					return 359;
					break;
				
				case 643374672:
					return 360;
					break;
				
				case 807875052:
					return 361;
					break;
				
				case -1401804168:
					return 362;
					break;
				
				case -1096495395:
					return 363;
					break;
				
				case -847811454:
					return 364;
					break;
				
				case -1413108537:
					return 365;
					break;
				
				case 1815270123:
					return 366;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
					break;
				
				case 400507625:
					return 263;
					break;
				
				case 696788003:
					return 264;
					break;
				
				case 1475288264:
					return 265;
					break;
				
				case -1020871238:
					return 266;
					break;
				
				case -161179835:
					return 267;
					break;
				
				case -1654288262:
					return 268;
					break;
				
				case 1108334355:
					return 269;
					break;
				
				case 1060929921:
					return 270;
					break;
				
				case -966040254:
					return 271;
					break;
				
				case -1181482284:
					return 272;
					break;
				
				case -932732805:
					return 273;
					break;
				
				case -569259057:
					return 274;
					break;
				
				case -326080308:
					return 275;
					break;
				
				case 48731514:
					return 276;
					break;
				
				case 880736428:
					return 277;
					break;
				
				case 1303784126:
					return 278;
					break;
				
				case -1018236364:
					return 279;
					break;
				
				case -1243457701:
					return 280;
					break;
				
				case 1249283253:
					return 345;
					break;
				
				case -857707587:
					return 346;
					break;
				
				case -1097543898:
					return 347;
					break;
				
				case 1980349969:
					return 348;
					break;
				
				case 1219453777:
					return 349;
					break;
				
				case -1853459190:
					return 350;
					break;
				
				case -2074781016:
					return 351;
					break;
				
				case 457967755:
					return 352;
					break;
				
				case 235171324:
					return 353;
					break;
				
				case 42685294:
					return 354;
					break;
				
				case -687617715:
					return 355;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
					break;
				
				case -785724817:
					return 282;
					break;
				
				case -1478681000:
					return 283;
					break;
				
				case 1675665560:
					return 284;
					break;
				
				case -76490669:
					return 285;
					break;
				
				case -282298175:
					return 286;
					break;
				
				case -1654288262:
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case 1108334355:
					return 289;
					break;
				
				case 77277509:
					return 290;
					break;
				
				case -966040254:
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case -1181482284:
					return 293;
					break;
				
				case -932732805:
					return 294;
					break;
				
				case -569259057:
					return 295;
					break;
				
				case -326080308:
					return 296;
					break;
				
				case 48731514:
					return 297;
					break;
				
				case 880736428:
					return 298;
					break;
				
				case 1303784126:
					return 299;
					break;
				
				case 1134861606:
					return 300;
					break;
				
				case 1447477866:
					return 301;
					break;
				
				case -1860492113:
					return 323;
					break;
				
				case 937772107:
					return 324;
					break;
				
				case 1401650071:
					return 325;
					break;
				
				case 628662130:
					return 326;
					break;
				
				case -985047251:
					return 327;
					break;
				
				case -812944463:
					return 328;
					break;
				
				case -1447352303:
					return 329;
					break;
				
				case -60338860:
					return 330;
					break;
				
				case 2088750491:
					return 331;
					break;
				
				case -1513913454:
					return 332;
					break;
				
				case -1179558480:
					return 333;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
					break;
				
				case 1574296533:
					return 303;
					break;
				
				case 626875735:
					return 304;
					break;
				
				case 1141059345:
					return 305;
					break;
				
				case 1025884839:
					return 306;
					break;
				
				case 391640422:
					return 307;
					break;
				
				case -1654288262:
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case 1108334355:
					return 310;
					break;
				
				case 77277509:
					return 311;
					break;
				
				case -966040254:
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case -1181482284:
					return 314;
					break;
				
				case -932732805:
					return 315;
					break;
				
				case -569259057:
					return 316;
					break;
				
				case -326080308:
					return 317;
					break;
				
				case 48731514:
					return 318;
					break;
				
				case 880736428:
					return 319;
					break;
				
				case 1303784126:
					return 320;
					break;
				
				case -2093598721:
					return 321;
					break;
				
				case -1958983669:
					return 322;
					break;
				
				case 1272803094:
					return 334;
					break;
				
				case 1080719624:
					return 335;
					break;
				
				case 792221348:
					return 336;
					break;
				
				case -452181427:
					return 337;
					break;
				
				case -746774737:
					return 338;
					break;
				
				case -2044296061:
					return 339;
					break;
				
				case -199171978:
					return 340;
					break;
				
				case -1428075016:
					return 341;
					break;
				
				case -1735153315:
					return 342;
					break;
				
				case 1796459838:
					return 343;
					break;
				
				case -631911105:
					return 344;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
					break;
				
				case 1315288101:
					return 396;
					break;
				
				case 1004815965:
					return 397;
					break;
				
				case -380098265:
					return 398;
					break;
				
				case -1618338827:
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case 1108334355:
					return 401;
					break;
				
				case 77277509:
					return 402;
					break;
				
				case 1060929921:
					return 403;
					break;
				
				case -1404903567:
					return 404;
					break;
				
				case 1602080333:
					return 405;
					break;
				
				case -474112444:
					return 488;
					break;
				
				case 387223451:
					return 489;
					break;
				
				case 617753366:
					return 490;
					break;
				
				case -222378256:
					return 491;
					break;
				
				case 8741501:
					return 492;
					break;
				
				case -601286203:
					return 493;
					break;
				
				case -511433605:
					return 494;
					break;
				
				case -655387818:
					return 495;
					break;
				
				case -282476598:
					return 496;
					break;
				
				case 1739501925:
					return 497;
					break;
				
				case 1178671645:
					return 498;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
					break;
				
				case -568352468:
					return 407;
					break;
				
				case 1362433589:
					return 408;
					break;
				
				case 1346235024:
					return 409;
					break;
				
				case -570355066:
					return 410;
					break;
				
				case -2023373174:
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case 1108334355:
					return 413;
					break;
				
				case 77277509:
					return 414;
					break;
				
				case -966040254:
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case -1181482284:
					return 417;
					break;
				
				case -932732805:
					return 418;
					break;
				
				case -569259057:
					return 419;
					break;
				
				case -326080308:
					return 420;
					break;
				
				case 48731514:
					return 421;
					break;
				
				case 880736428:
					return 422;
					break;
				
				case 1303784126:
					return 423;
					break;
				
				case -1654288262:
					return 424;
					break;
				
				case -415870039:
					return 425;
					break;
				
				case -109086661:
					return 426;
					break;
				
				case -737430213:
					return 532;
					break;
				
				case 1125852043:
					return 533;
					break;
				
				case 886015732:
					return 534;
					break;
				
				case -1262287139:
					return 535;
					break;
				
				case -295208411:
					return 536;
					break;
				
				case -544154504:
					return 537;
					break;
				
				case 172765678:
					return 538;
					break;
				
				case -1982877449:
					return 539;
					break;
				
				case 2072122460:
					return 540;
					break;
				
				case -1986220171:
					return 541;
					break;
				
				case 1377355801:
					return 542;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
					break;
				
				case -829683854:
					return 428;
					break;
				
				case -1055790298:
					return 429;
					break;
				
				case -1928301566:
					return 430;
					break;
				
				case -424845447:
					return 431;
					break;
				
				case -1876057490:
					return 432;
					break;
				
				case 1246324211:
					return 433;
					break;
				
				case 1205768792:
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case -1434287169:
					return 436;
					break;
				
				case 259780317:
					return 510;
					break;
				
				case -1973342474:
					return 511;
					break;
				
				case 1996130345:
					return 512;
					break;
				
				case -1455657812:
					return 513;
					break;
				
				case -1668263084:
					return 514;
					break;
				
				case 1308243489:
					return 515;
					break;
				
				case 1122574335:
					return 516;
					break;
				
				case 1420313469:
					return 517;
					break;
				
				case 109848390:
					return 518;
					break;
				
				case 593945703:
					return 519;
					break;
				
				case 1142457062:
					return 520;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
					break;
				
				case -422587990:
					return 438;
					break;
				
				case -193998727:
					return 439;
					break;
				
				case -515203373:
					return 440;
					break;
				
				case 1842849902:
					return 441;
					break;
				
				case -679861550:
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case 1108334355:
					return 444;
					break;
				
				case -966040254:
					return 445;
					break;
				
				case 1528590652:
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case -1181482284:
					return 448;
					break;
				
				case -932732805:
					return 449;
					break;
				
				case -569259057:
					return 450;
					break;
				
				case -326080308:
					return 451;
					break;
				
				case 48731514:
					return 452;
					break;
				
				case 880736428:
					return 453;
					break;
				
				case 1303784126:
					return 454;
					break;
				
				case -1654288262:
					return 455;
					break;
				
				case 941317513:
					return 456;
					break;
				
				case 1748450780:
					return 457;
					break;
				
				case -1869284448:
					return 521;
					break;
				
				case 1931539634:
					return 522;
					break;
				
				case 1624199183:
					return 523;
					break;
				
				case -26834113:
					return 524;
					break;
				
				case -210406055:
					return 525;
					break;
				
				case 423313640:
					return 526;
					break;
				
				case 276639596:
					return 527;
					break;
				
				case -991356863:
					return 528;
					break;
				
				case -1682848301:
					return 529;
					break;
				
				case 996213771:
					return 530;
					break;
				
				case -1214048550:
					return 531;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
					break;
				
				case 231258687:
					return 459;
					break;
				
				case 284438159:
					return 460;
					break;
				
				case 15712037:
					return 461;
					break;
				
				case -958864266:
					return 462;
					break;
				
				case 1108334355:
					return 463;
					break;
				
				case 77277509:
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case 654802123:
					return 466;
					break;
				
				case -1069552225:
					return 499;
					break;
				
				case 11918884:
					return 500;
					break;
				
				case 176157112:
					return 501;
					break;
				
				case -220052855:
					return 502;
					break;
				
				case 288456487:
					return 503;
					break;
				
				case 398658626:
					return 504;
					break;
				
				case 628697006:
					return 505;
					break;
				
				case 925911836:
					return 506;
					break;
				
				case 1222307441:
					return 507;
					break;
				
				case 552442715:
					return 508;
					break;
				
				case -648943513:
					return 509;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
					break;
				
				case -273676760:
					return 468;
					break;
				
				case -89655827:
					return 469;
					break;
				
				case 1130501904:
					return 470;
					break;
				
				case -1449330342:
					return 471;
					break;
				
				case -2111807319:
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case 1108334355:
					return 474;
					break;
				
				case -944910075:
					return 475;
					break;
				
				case 1060929921:
					return 476;
					break;
				
				case 1704640795:
					return 477;
					break;
				
				case 1005743559:
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case -1181482284:
					return 480;
					break;
				
				case -932732805:
					return 481;
					break;
				
				case -569259057:
					return 482;
					break;
				
				case -326080308:
					return 483;
					break;
				
				case 48731514:
					return 484;
					break;
				
				case 880736428:
					return 485;
					break;
				
				case 1303784126:
					return 486;
					break;
				
				case -1654288262:
					return 487;
					break;
				
				case -1371515465:
					return 543;
					break;
				
				case -1190793877:
					return 544;
					break;
				
				case -1497085720:
					return 545;
					break;
				
				case -1803148180:
					return 546;
					break;
				
				case -1975971886:
					return 547;
					break;
				
				case 36929477:
					return 548;
					break;
				
				case -268444834:
					return 549;
					break;
				
				case -574769446:
					return 550;
					break;
				
				case -882699739:
					return 551;
					break;
				
				case -1468181474:
					return 552;
					break;
				
				case -974541230:
					return 553;
					break;
			}
			break;
	}
	return 0;
}

var func_314(int iParam0, int iParam1, var uParam2)//Position - 0x1C846
{
	var uVar0;
	
	uVar0 = func_51(func_315(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_315(int iParam0, int iParam1)//Position - 0x1C861
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_312(iParam0, iParam1);
	iVar1 = func_317(iVar0);
	if ((func_76() == 0 || func_316() == 0) || (func_76() == 999 && func_316() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 684;
				break;
			
			case 1:
				return 685;
				break;
			
			case 2:
				return 686;
				break;
			
			case 3:
				return 687;
				break;
			
			case 4:
				return 1750;
				break;
			
			case 5:
				return 2424;
				break;
			
			case 6:
				return 2816;
				break;
			
			case 7:
				return 5484;
				break;
			
			case 8:
				return 5488;
				break;
			
			case 9:
				return 5492;
				break;
			
			case 10:
				return 5605;
				break;
			
			case 11:
				return 5609;
				break;
			
			case 12:
				return 5613;
				break;
			
			case 13:
				return 5617;
				break;
			
			case 14:
				return 6356;
				break;
			
			case 15:
				return 6479;
				break;
			
			case 16:
				return 6499;
				break;
			
			case 17:
				return 6505;
				break;
			}
	}
	return 1750;
}

int func_316()//Position - 0x1C9C3
{
	return Global_25234;
}

int func_317(int iParam0)//Position - 0x1C9CE
{
	return (iParam0 / 32);
}

bool func_318()//Position - 0x1C9DB
{
	return Global_1312833;
}

int func_319(int iParam0)//Position - 0x1C9E7
{
	if (iParam0 != -1)
	{
		if (iParam0 == 46)
		{
			return 1;
		}
		if (iParam0 == 47)
		{
			return 1;
		}
	}
	return 0;
}

void func_320(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1CA0C
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_321(var uParam0, int iParam1, int iParam2)//Position - 0x1CA2B
{
	struct<5> Var0;
	int iVar1;
	
	func_320(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_269(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

float func_322(float fParam0)//Position - 0x1CA6D
{
	return (fParam0 * 57,29578f);
}

int func_323(var uParam0)//Position - 0x1CA7D
{
	if (!unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		return 0;
	}
	unk_0x35829E9BFCED1A3F(*uParam0, true);
	return 1;
}

int func_324(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x1CA9D
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0xC91FE17AD7353B70(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, true, true, false);
	if (!unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_325(var uParam0)//Position - 0x1CADB
{
	if (!unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		return 0;
	}
	unk_0x6D624C6A284D7D07(*uParam0, 0);
	unk_0x296D39391436DC64(*uParam0, "RAMP:SCENE PED");
	unk_0x5C5D33A1B2711D21(*uParam0, false);
	unk_0x771A86309E0CA47B(*uParam0, true);
	return 1;
}

int func_326(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x1CB16
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0x68433819717660CF(iParam0);
		*iParam0 = 0;
	}
	*iParam0 = unk_0xAC992EFAD62C33BF(26, iParam1, vParam2, fParam3, 1, true);
	if (!unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		func_327(*iParam0, vParam2);
		unk_0x48ED7B2293A96722(*iParam0, fParam3);
	}
	unk_0x6D624C6A284D7D07(*iParam0, 0);
	unk_0x296D39391436DC64(*iParam0, "RAMP:SCENE PED");
	unk_0x5C5D33A1B2711D21(*iParam0, false);
	unk_0x771A86309E0CA47B(*iParam0, true);
	return 1;
}

Vector3 func_327(int iParam0, vector3 vParam1)//Position - 0x1CB94
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0,15f);
	if (unk_0x7367FB97975F1E29(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_220(iParam0))
	{
		unk_0xBD8D47FDC6902B2D(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

int func_328()//Position - 0x1CBDA
{
	return unk_0xCB389937EDB1519A(-177,0628f, -1679,715f, 33,16263f, -157,0628f, -1659,715f, 37,16263f, 0, 1, 1, 1);
}

void func_329(var uParam0)//Position - 0x1CC08
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6450931B826B49D9(sVar1);
	unk_0x04562CD765E0C517(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x9A0B2ED5055D3F0B(iVar0) || !unk_0x3A801AA34DD821BE(sVar1))
	{
		system::wait(0);
	}
	while (!func_326(&(uParam0->f_28[0]), iVar0, -161,37f, -1669,63f, 33,1f, func_322(1,03f), 1))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[0]));
	unk_0x296D39391436DC64(uParam0->f_28[0], "RP0_NOGUN");
	unk_0xE537629E02E8DA21(uParam0->f_28[0]);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x12C9D41D52A560D6(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_326(&(uParam0->f_28[1]), iVar0, -161,93f, -1670,39f, 33,14f, func_322(0,2f), 1))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[1]));
	unk_0x296D39391436DC64(uParam0->f_28[1], "RP1_GUN");
	unk_0xE537629E02E8DA21(uParam0->f_28[1]);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x9E058151726E58DE(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, true, true);
	unk_0x12C9D41D52A560D6(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0x14776E43F90DD454(iVar0);
}

void func_330(var uParam0)//Position - 0x1CEDF
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6450931B826B49D9(sVar1);
	unk_0x04562CD765E0C517(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x9A0B2ED5055D3F0B(iVar0) || !unk_0x0A198E59F03B0E6F(joaat("weapon_microsmg"))) || !unk_0x3A801AA34DD821BE(sVar1))
	{
		system::wait(0);
	}
	while (!func_326(&(uParam0->f_28[0]), iVar0, 464,6125f, -1848,767f, 27,816f, 177,39f, 1))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[0]));
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x296D39391436DC64(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x12C9D41D52A560D6(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_326(&(uParam0->f_28[1]), iVar0, 465,782f, -1849,073f, 27,817f, 129,92f, 1))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[1]));
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x03924C68EFCBC511(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x296D39391436DC64(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x12C9D41D52A560D6(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_267(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855,4f, 32f, func_322(-0,85f)))
	{
		unk_0x0DF81B88D0C53746(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0x0DF81B88D0C53746(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0x14776E43F90DD454(iVar0);
}

int func_331()//Position - 0x1D1DF
{
	return func_332(1182,137f, -400,4787f, 66,92414f, 8f);
}

int func_332(vector3 vParam0, float fParam1)//Position - 0x1D1FF
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0xCB389937EDB1519A(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_333(var uParam0)//Position - 0x1D231
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	vVar5 = { 0f, 0f, 0f };
	vVar6 = { 0f, 0f, 0f };
	unk_0x04562CD765E0C517(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6FF834D85E2DD4C6(iVar1);
	unk_0x6FF834D85E2DD4C6(iVar2);
	unk_0x6450931B826B49D9(sVar3);
	func_337(&uLocal_68);
	while ((((!unk_0x9A0B2ED5055D3F0B(iVar0) || !unk_0x9A0B2ED5055D3F0B(iVar1)) || !unk_0x9A0B2ED5055D3F0B(iVar2)) || !unk_0x3A801AA34DD821BE(sVar3)) || !func_336(&uLocal_68))
	{
		system::wait(0);
	}
	unk_0xBBF9037650162761(1180,021f, -401,7374f, 66,8767f, 0,75f, 0);
	uParam0->f_41[2] = unk_0xCBD07018689DF383(1179,778f, -401,7374f, 66,8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[2]))
	{
		unk_0xBD8D47FDC6902B2D(uParam0->f_41[2], 1180,05f, -401,83f, 66,88f, 1, false, 0, 1);
		unk_0x59AF3B40AE222194(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0xEDC33A771FAEB393(uParam0->f_41[2], true);
	}
	uParam0->f_41[3] = unk_0xCBD07018689DF383(1181,243f, -402,5309f, 67,2564f, 1f, -207026330, 1, 0, 1);
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[3]))
	{
		unk_0xEDC33A771FAEB393(uParam0->f_41[3], true);
	}
	while (!func_326(&(uParam0->f_28[0]), iVar0, 1181,547f, -400,0954f, 67,5757f, -124,2928f, 0))
	{
		system::wait(0);
	}
	func_325(&(uParam0->f_28[0]));
	unk_0xEDC33A771FAEB393(uParam0->f_28[0], true);
	unk_0xE537629E02E8DA21(uParam0->f_28[0]);
	unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 0, 0, 0);
	func_335(&(uParam0->f_41[1]), iVar2, 1181,547f, -400,0954f, 65,5757f, 0f);
	unk_0xA9D382E7BA095148(uParam0->f_41[1], uParam0->f_28[0], unk_0xDD09837E5235FE91(uParam0->f_28[0], iVar4), vVar6, vVar5, 1, 0, 0, 0, 2, 1);
	func_334(&uLocal_68, 0, 3);
	if (!unk_0xD56F740235B1E8F0(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x8383F9C605E523B7(vLocal_66, vLocal_67, 2);
		if (func_125(uParam0->f_28[0]))
		{
			unk_0x8E628F774C748D93(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0xD0E12C501EE26329(uParam0->f_59, true);
	}
	if (!func_267(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162,2f, -395,4f, 72,9f, func_322(-0,71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0x14776E43F90DD454(iVar0);
	unk_0x14776E43F90DD454(iVar1);
	unk_0x14776E43F90DD454(iVar2);
}

void func_334(var uParam0, bool bParam1, int iParam2)//Position - 0x1D4FC
{
	int iVar0;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (bParam1)
		{
			unk_0x1B6337F81B76F0CA(&iVar0);
		}
		else
		{
			if (!unk_0x7118556A56307B25("npcphone"))
			{
				unk_0xD6C700D60B3E88BC("npcphone", 0);
				unk_0xC4ED0C74AE77D371(joaat("prop_npc_phone"));
			}
			iVar0 = unk_0x3B46B5E6947B1597("npcphone");
		}
		unk_0x7913685BF7335C7B(iVar0);
		unk_0x008F3E3CC076EA0E(*uParam0, "DISPLAY_VIEW");
		unk_0xD07D5CD276368D36(iParam2);
		unk_0x271AA5469AF471B3();
		unk_0x0EB9853DF8BC0D87(*uParam0, Global_14373, Global_14374, Global_14375, Global_14376, 255, 255, 255, 255, 0);
	}
}

void func_335(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x1D57B
{
	func_151(iParam0);
	*iParam0 = unk_0x5E35CF35E65D69B9(iParam1, vParam2, true, true, false);
	unk_0x48ED7B2293A96722(*iParam0, fParam3);
}

int func_336(var uParam0)//Position - 0x1D5A2
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_337(var uParam0)//Position - 0x1D5B9
{
	*uParam0 = unk_0xD704C81492296A37(func_338());
}

char* func_338()//Position - 0x1D5CC
{
	return "CELLPHONE_CUTSCENE";
}

int func_339()//Position - 0x1D5D8
{
	return func_332(911,5349f, 3642,111f, 31,64738f, 8f);
}

void func_340(var uParam0)//Position - 0x1D5F8
{
	vector3 vVar0;
	char* sVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	sVar1 = "misstrvram_1";
	iVar2 = 28422;
	vVar3 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, -0,1f };
	iVar5 = joaat("ig_ramp_hic");
	iVar6 = 146905321;
	iVar7 = 1172836182;
	unk_0x6FF834D85E2DD4C6(iVar5);
	unk_0x6FF834D85E2DD4C6(iVar6);
	unk_0x6FF834D85E2DD4C6(iVar7);
	unk_0x6450931B826B49D9(sVar1);
	unk_0x04562CD765E0C517(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x9A0B2ED5055D3F0B(iVar5) || !unk_0x9A0B2ED5055D3F0B(iVar6)) || !unk_0x9A0B2ED5055D3F0B(iVar7)) || !unk_0x3A801AA34DD821BE(sVar1)) || !unk_0x0A198E59F03B0E6F(joaat("weapon_assaultrifle")))
	{
		system::wait(0);
	}
	while (!func_326(&(uParam0->f_28[0]), iVar5, 907,998f, 3643,826f, 32,29243f, -173,0453f, 0))
	{
		system::wait(0);
	}
	if (func_125(uParam0->f_28[0]))
	{
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[0], 11, 0, 0, 0);
		vVar0 = { unk_0xD0E00576168D19BB(uParam0->f_28[0], iVar2, 0f, 0f, 0f) };
		unk_0x296D39391436DC64(uParam0->f_28[0], "RAMP:PED 0");
		func_335(&(uParam0->f_41[1]), iVar7, vVar0, 0f);
		unk_0xA9D382E7BA095148(uParam0->f_41[1], uParam0->f_28[0], unk_0xDD09837E5235FE91(uParam0->f_28[0], iVar2), vVar4, vVar3, 1, 1, 0, 0, 2, 1);
		unk_0xE322818CF08D3198(uParam0->f_41[1], 1);
		unk_0xEDC33A771FAEB393(uParam0->f_28[0], true);
		unk_0xAE01EF4BC84AFE7C(uParam0->f_28[0], 208, true);
		unk_0xCE93FCB8A8D8DF0B(uParam0->f_28[0], 1862763509);
	}
	while (!func_326(&(uParam0->f_28[1]), iVar5, 909,3126f, 3643,507f, 32,2952f, 153,0127f, 0))
	{
		system::wait(0);
	}
	if (func_125(uParam0->f_28[1]))
	{
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0x03924C68EFCBC511(uParam0->f_28[1], 11, 0, 0, 0);
		vVar0 = { unk_0xD0E00576168D19BB(uParam0->f_28[1], iVar2, 0f, 0f, 0f) };
		unk_0x296D39391436DC64(uParam0->f_28[1], "RAMP:PED 1");
		func_335(&(uParam0->f_41[2]), iVar7, vVar0, 0f);
		unk_0xA9D382E7BA095148(uParam0->f_41[2], uParam0->f_28[1], unk_0xDD09837E5235FE91(uParam0->f_28[1], iVar2), vVar4, vVar3, 1, 1, 0, 0, 2, 1);
		unk_0xE322818CF08D3198(uParam0->f_41[2], 1);
		unk_0xEDC33A771FAEB393(uParam0->f_28[1], true);
		unk_0xAE01EF4BC84AFE7C(uParam0->f_28[1], 208, true);
		unk_0xCE93FCB8A8D8DF0B(uParam0->f_28[1], 1862763509);
	}
	uParam0->f_41[3] = unk_0xCBD07018689DF383(909,3884f, 3643,652f, 31,699f, 1f, 146905321, 1, 0, 1);
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[3]))
	{
		unk_0xEDC33A771FAEB393(uParam0->f_41[3], true);
	}
	uParam0->f_41[4] = unk_0xCBD07018689DF383(908,0437f, 3643,682f, 31,7073f, 1f, 146905321, 1, 0, 1);
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_41[4]))
	{
		unk_0xEDC33A771FAEB393(uParam0->f_41[4], true);
	}
	if (!unk_0xD56F740235B1E8F0(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x8383F9C605E523B7(910,13f, 3643,74f, 31,69f, 0f, 0f, func_322(-0,26f), 2);
		if (func_125(uParam0->f_28[0]))
		{
			unk_0x8E628F774C748D93(uParam0->f_28[0], uParam0->f_59, sVar1, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_125(uParam0->f_28[1]))
		{
			unk_0x8E628F774C748D93(uParam0->f_28[1], uParam0->f_59, sVar1, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0xD0E12C501EE26329(uParam0->f_59, true);
	}
	if (!func_267(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907,52f, 3644,32f, 31,86f, -164,89f))
	{
	}
	unk_0x14776E43F90DD454(iVar5);
	unk_0x14776E43F90DD454(iVar6);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_341(int iParam0)//Position - 0x1DB1D
{
	if (!unk_0x42F1FE4C7EC5F51E())
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 1;
	}
	if (func_177(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)//Position - 0x1DB4A
{
	struct<27> Var0;
	int iVar1;
	
	func_108(iParam0, &Var0);
	iVar1 = func_222();
	if (iVar1 == 145)
	{
		return 1;
	}
	else if ((iVar1 != 1 && iVar1 != 0) && iVar1 != 2)
	{
		return 1;
	}
	if (!unk_0xC80D31E4B587871C(Var0.f_26, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_343(int iParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x1DB9E
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_344((*iParam0)[0], vParam2, fParam3, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_344((*iParam0)[iVar0], vParam2, fParam3, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_362("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_344(int iParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x1DC03
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_108(iParam0, &Var1);
	if (func_345(Var1.f_6, vParam1, fParam2, 0))
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 0))
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_187(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_345(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1DC81
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0xE97272C977DEADD3((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x1DCFC
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_347(int iParam0, bool bParam1)//Position - 0x1DD29
{
	func_263(iParam0);
	if (bParam1)
	{
		func_362(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_350(iParam0, 0, 0, 0);
	}
	func_349(&(iParam0->f_48));
	if (iLocal_240 != -1)
	{
		func_362("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_260(&iLocal_240);
	}
	if (iLocal_250 != 0)
	{
		if (*iParam0 == 55 || *iParam0 == 53)
		{
			unk_0xCA107A9AAF17E75F(iLocal_250, 0);
		}
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0x2C5E25A27FEE0F8A(0);
	}
	if (iLocal_244)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0x3E80C2F7BC665259(1);
			iLocal_244 = 0;
		}
	}
	func_348();
	func_362("SCRIPT TERMINATED");
	Global_90250 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

void func_348()//Position - 0x1DDD1
{
	func_362("Running end routines.");
	Global_104273 = (Global_104273 - 1);
}

int func_349(var uParam0)//Position - 0x1DDEB
{
	if (func_149(uParam0))
	{
		if (unk_0x3A801AA34DD821BE(*uParam0))
		{
			unk_0xFCCDDE0E48CF9588(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_350(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1DE21
{
	func_358(uParam0, iParam1);
	func_354(uParam0, bParam2);
	func_351(uParam0, bParam3);
}

void func_351(var uParam0, bool bParam1)//Position - 0x1DE41
{
	func_352(&(uParam0->f_41), bParam1);
}

void func_352(var uParam0, bool bParam1)//Position - 0x1DE53
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_151(uParam0[iVar0]);
		}
		else
		{
			func_353(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_353(int iParam0, bool bParam1)//Position - 0x1DE91
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(iParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*iParam0);
		}
	}
}

void func_354(var uParam0, bool bParam1)//Position - 0x1DECC
{
	func_355(&(uParam0->f_35), bParam1);
}

void func_355(var uParam0, bool bParam1)//Position - 0x1DEDE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_357(uParam0[iVar0]);
		}
		else
		{
			func_356(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_356(int iParam0)//Position - 0x1DF1B
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0x191BE1BC8F26F3C1(*iParam0, 0);
		if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
		{
			unk_0x5380482A432E314E(iParam0);
		}
	}
}

void func_357(int iParam0)//Position - 0x1DF53
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		if (func_155(*iParam0))
		{
			if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
			{
				if (func_125(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
					{
						unk_0x5380482A432E314E(iParam0);
						return;
					}
				}
				unk_0xC91FE17AD7353B70(iParam0);
			}
		}
		else
		{
			if (func_125(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
				{
					unk_0x5380482A432E314E(iParam0);
					return;
				}
			}
			unk_0xC91FE17AD7353B70(iParam0);
		}
	}
}

void func_358(var uParam0, int iParam1)//Position - 0x1DFEF
{
	func_359(&(uParam0->f_28), iParam1);
}

void func_359(var uParam0, int iParam1)//Position - 0x1E001
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_361(uParam0[iVar0]);
		}
		else
		{
			func_360(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_360(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1E042
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*iParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*iParam0, false);
			}
		}
		unk_0x486F346ADFE56674(iParam0);
	}
}

void func_361(int iParam0)//Position - 0x1E092
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
		}
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		unk_0x68433819717660CF(iParam0);
	}
}

void func_362(char* sParam0)//Position - 0x1E0D3
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
	}
}

void func_363(var uParam0)//Position - 0x1E0E5
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_364()//Position - 0x1E118
{
	func_362("Running start routines.");
	Global_104273++;
}

