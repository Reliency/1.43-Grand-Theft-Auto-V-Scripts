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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	var uLocal_129 = 10;
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
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 8;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 8;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	float fLocal_162 = 0f;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	vector3 vLocal_169 = { 0f, 0f, 0f };
	int iLocal_170[2] = { 0, 0 };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	bool bLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
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
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	float fLocal_245 = 0f;
	float fLocal_246 = 0f;
	float fLocal_247 = 0f;
	float fLocal_248 = 0f;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	int iLocal_253 = 0;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256[3] = { NULL, NULL, NULL };
	char* sLocal_257[3] = { NULL, NULL, NULL };
	char* sLocal_258[3] = { NULL, NULL, NULL };
	char* sLocal_259[3] = { NULL, NULL, NULL };
	struct<5> Local_260 = { 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vector3 vVar18;
	vector3 vVar19;
	vector3 vVar20;
	vector3 vVar21;
	char* sVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0,063f;
	vLocal_35 = { -0,0035f, 0f, -0,001f };
	iLocal_37 = joaat("prop_target_bull");
	vLocal_42 = { 987,8541f, -98,4173f, 73,8599f };
	fLocal_47 = 0,1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0,27f;
	fLocal_103 = 0,1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_162 = ((0,05f + 0,275f) - 0,01f);
	vLocal_169 = { 500f, 500f, 500f };
	bLocal_180 = true;
	vLocal_241 = { -573,1373f, 294,0269f, 78,1765f };
	vLocal_242 = { -574,1169f, 292,7964f, 78,1766f };
	vLocal_243 = { 1995,295f, 3050,084f, 46,91535f };
	vLocal_244 = { 1995,488f, 3047,383f, 46,91535f };
	fLocal_245 = 172,6813f;
	fLocal_246 = 274,5094f;
	fLocal_247 = 142,6717f;
	fLocal_248 = 44,8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_254 = "facials@gen_female@variations@happy";
	switch (func_489(unk_0xFC1458A37D98B502()))
	{
		case 0:
			sLocal_255 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_255 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_255 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_256[0] = "mood_happy_1";
	sLocal_256[1] = "mood_happy_2";
	sLocal_256[2] = "mood_happy_3";
	sLocal_257[0] = "darts_outro_01_guy1";
	sLocal_257[1] = "darts_outro_02_guy2";
	sLocal_257[2] = "darts_outro_03_guy2";
	sLocal_258[0] = "darts_outro_01_guy2";
	sLocal_258[1] = "darts_outro_02_guy1";
	sLocal_258[2] = "darts_outro_03_guy1";
	sLocal_259[0] = "darts_outro_01_cam";
	sLocal_259[1] = "darts_outro_02_cam";
	sLocal_259[2] = "darts_outro_03_cam";
	iLocal_170[0] = unk_0xFC1458A37D98B502();
	bLocal_183 = true;
	vVar17 = { 1992,293f, 3050,583f, 47,98973f };
	vVar18 = { -572,0406f, 294,1958f, 79,9374f };
	func_488();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iLocal_207 = 1;
		switch (unk_0x63A6486593EC7EC3(0, 2))
		{
			case 0:
				iLocal_204 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_204 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_202 = 10;
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
	}
	if (!unk_0x6ADD12BF4D6D2587(ScriptParam_260.f_4))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (iLocal_207 == 2)
			{
				ScriptParam_260 = { vVar18 };
				ScriptParam_260.f_3 = -0,09f;
			}
			else
			{
				ScriptParam_260 = { vVar17 };
				ScriptParam_260.f_3 = 57,78315f;
			}
			if (unk_0x50126692B8A3590A(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_260.f_4 = unk_0xCBD07018689DF383(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x5103B3C68E1A61E5(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_260, &vVar19, 0);
				ScriptParam_260.f_3 = vVar19.z;
			}
		}
	}
	else
	{
		vVar19 = { unk_0xB3328BA8976B416C(ScriptParam_260.f_4, 1) };
	}
	if (!unk_0x191BE1BC8F26F3C1(func_487(), 0))
	{
		func_485(iLocal_202, 1);
		if (unk_0x88DDBE9908752BF0(func_487(), 0))
		{
			unk_0x16416C5B54FDBCBB(func_487(), 0, 0);
		}
		iLocal_170[1] = func_487();
	}
	else
	{
		unk_0xBC03901A15107317(1);
	}
	if (unk_0x7D9C4B359376D38A(67))
	{
		func_476();
		func_458(&Var0, &Var5, &Var6);
	}
	unk_0x23C4D78663D144CD(0);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
	func_456(1);
	iLocal_198 = func_453(func_489(iLocal_170[0]), 1);
	fVar15 = (system::to_float(iLocal_198) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = system::round(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_452(23, 1);
	while (true)
	{
		system::wait(0);
		unk_0x553231E7FC3C570D(2);
		unk_0x36853D5037847BF3();
		unk_0x76F7AB2157E33DD9(15, 0f, -0,0375f);
		if (iLocal_190 && Var0 < 13)
		{
			unk_0xED59C9855A8B5CE3(Var4, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0x3AB6A1A9084FB0A4(ScriptParam_260.f_5) && !unk_0x6ADD12BF4D6D2587(func_487())) || (unk_0x6ADD12BF4D6D2587(func_487()) && unk_0x3AB6A1A9084FB0A4(func_487())))
		{
			func_458(&Var0, &Var5, &Var6);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]))
		{
			unk_0x2217C45231E6A537(iLocal_170[0], 239, 1);
			unk_0x2217C45231E6A537(iLocal_170[0], 124, 1);
			func_451();
			unk_0xD67F08F0EFD84A54(0);
			unk_0xD67F08F0EFD84A54(2);
			iVar14 = 0;
			while (iVar14 < unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_170[1])
				{
					if (!unk_0x3AB6A1A9084FB0A4(uVar26[iVar14]))
					{
						unk_0x2217C45231E6A537(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					unk_0x3E80C2F7BC665259(1);
					func_450(&(Var0.f_243), &ScriptParam_260);
					func_449(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x6ADD12BF4D6D2587(Var0.f_243))
					{
						vLocal_239 = { unk_0x3F90543934DCD7E6(Var0.f_243, 0,7792f, -1,138f, 0,1814f) };
						vLocal_240 = { -7,9947f, 0f, (Var0.f_243.f_4 + 36,19176f) };
						iLocal_84 = unk_0x5AC38B4D80D4E352(26379945, vLocal_239, vLocal_240, 65f, 0, 2);
						unk_0xE43C573FE3C5D758(iLocal_84, 30f);
					}
					func_448();
					system::settimera(0);
					Var0 = 1;
					break;
				
				case 1:
					if (system::timera() > 500 && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
					{
						unk_0x247EAA2E93D4A021(ScriptParam_260, 0,5f, 1, 0, 0, false);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
						{
							unk_0xFAA3EF7FF92E1F9E(&uLocal_205);
							unk_0x6931076730A4AC5D(&uLocal_205);
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0x1B16DD5C115FE009(uLocal_205);
							unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), uLocal_205);
						}
						vLocal_42 = { vLocal_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_447(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_447(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_446(0);
					func_444(&Var4, iLocal_207, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0x6ADD12BF4D6D2587(Var0.f_243))
					{
						vVar19 = { unk_0xA05DDB968587006B(Var0.f_243, Var4.f_18) };
					}
					func_441(&Var4, &Var5);
					unk_0xA3A57BA8F775CAFF(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_438(&Var4, &Var5))
					{
						func_435(&(Var0.f_243), &Var2, &vVar3, 0);
						iLocal_249 = func_489(iLocal_170[0]);
						switch (iLocal_249)
						{
							case 0:
								sLocal_251 = func_434("MICHAEL");
								if (!unk_0xC80D31E4B587871C(Global_104516, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_251 = func_434("FRANKLIN");
								bLocal_187 = true;
								if (!unk_0xC80D31E4B587871C(Global_104516, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_251 = func_434("TREVOR");
								if (!unk_0xC80D31E4B587871C(Global_104516, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x191BE1BC8F26F3C1(func_487(), 0))
						{
							iLocal_250 = func_489(func_487());
							if (iLocal_250 == 145)
							{
								iLocal_250 = func_432(func_487());
							}
							switch (iLocal_250)
							{
								case 0:
									sLocal_252 = func_434("MICHAEL");
									break;
								
								case 1:
									sLocal_252 = func_434("FRANKLIN");
									break;
								
								case 2:
									sLocal_252 = func_434("TREVOR");
									break;
								
								case 19:
									sLocal_252 = func_434("LAMAR");
									unk_0x03924C68EFCBC511(func_487(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_252 = func_434("JIMMY");
									break;
								
								default:
									sLocal_252 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0x63A6486593EC7EC3(0, 200);
							if (iLocal_207 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_252 = func_434("RAYMOND");
									iLocal_253 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_252 = func_434("JOHAN");
									iLocal_253 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_252 = func_434("STAN");
									iLocal_253 = 1891555423;
								}
								else
								{
									sLocal_252 = func_434("VINCE");
									iLocal_253 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_252 = func_434("KRISTY");
								iLocal_253 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_252 = func_434("MARLENE");
								iLocal_253 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_252 = func_434("LORIE");
								iLocal_253 = 1954368234;
							}
							else
							{
								sLocal_252 = func_434("SHELLEY");
								iLocal_253 = -863218904;
							}
						}
						iLocal_36 = unk_0x5E35CF35E65D69B9(iLocal_37, vVar3, 1, true, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x1125067FDB875912())
					{
						iVar27 = unk_0x5E35CF35E65D69B9(joaat("prop_dart_1"), vVar3, 1, true, 0);
						func_429(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_260);
						func_428(&Var4, sLocal_251, sLocal_252);
						unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
						iLocal_206 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1871534317, 0, 0, 0);
						}
						func_427(&(Var0.f_257), 0, unk_0xFC1458A37D98B502(), sLocal_251, 0, 1);
						if (unk_0x191BE1BC8F26F3C1(func_487(), 0))
						{
							if (iLocal_207 == 2)
							{
								func_427(&(Var0.f_257), 3, iLocal_170[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_427(&(Var0.f_257), 3, iLocal_170[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_427(&(Var0.f_257), 3, func_487(), sLocal_252, 0, 1);
							func_425(&iVar25);
							iVar13 = 6;
						}
						if (!unk_0xC80D31E4B587871C(Global_104516, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_424(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]) && unk_0xEA8E0258C31BCDE7(iLocal_170[0])) && !unk_0x88DDBE9908752BF0(iLocal_170[0], 1)) && unk_0xEA8E0258C31BCDE7(iLocal_170[1])) && !unk_0x88DDBE9908752BF0(iLocal_170[1], 1))
					{
						bLocal_178 = func_422(&uLocal_194);
						if ((func_421() && unk_0x53C562FD2B9E3AB0() >= iLocal_196 + 1000) && iVar13 != 9)
						{
							if (!unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
							{
								unk_0xAE83ED4C9081AE6F(500);
							}
						}
						if (unk_0x3E9CABD07B829173() && iVar13 != 9)
						{
							func_418(0);
							func_416();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
								{
									iLocal_200 = unk_0x8383F9C605E523B7(unk_0x3F90543934DCD7E6(ScriptParam_260.f_4, 0,337842f, -0,243051f, -0,329731f), 0f, 0f, (unk_0xF0371FE6E2BF9599(ScriptParam_260.f_4) - 3,783146f), 2);
									iLocal_206 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xEFF56C7BDABBF39B(iLocal_206, iLocal_200, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x7849794435F39D49(iLocal_206, true);
									unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
									unk_0xCB3D88C918AA637C(iLocal_170[0]);
									unk_0xCB3D88C918AA637C(iLocal_170[1]);
									unk_0x957CEE967C939968(iLocal_170[0]);
									unk_0x957CEE967C939968(iLocal_170[1]);
									unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x12C9D41D52A560D6(iLocal_170[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x12C9D41D52A560D6(iLocal_170[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xEBB74134CCA3442E(iVar27, iLocal_200, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1148846080);
									func_415(&iVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0xD56F740235B1E8F0(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_414(&iVar25) > 1,5f)
										{
											func_413(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_412(&iVar25);
										}
									}
									else if (!unk_0x33B1D0D0C92D4F18(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_411(&iVar25))
											{
												func_425(&iVar25);
											}
											else if (func_414(&iVar25) > 0,5f)
											{
												func_410(iLocal_170[1]);
												func_412(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_415(&iVar25);
											func_409("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x463C4747B41E35A3(iLocal_200) > 0,25f)
											{
												func_415(&iVar25);
												func_409("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x463C4747B41E35A3(iLocal_200) > 0,55f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x463C4747B41E35A3(iLocal_200) > 0,85f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x463C4747B41E35A3(iLocal_200) > 0,95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x463C4747B41E35A3(iLocal_200) > 0,99f)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
									{
										func_406(Var0.f_243.f_1, Var0.f_243.f_4, func_408(2), func_407(0), 0, 1);
										iLocal_31 = 0;
										unk_0x3E80C2F7BC665259(1);
										unk_0x02934BABFD4CD384(iLocal_206, 0);
										unk_0xB8E08BD5B184DF4E(iLocal_170[0]);
										unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
										unk_0xBD1486160AB0661B(iVar27, -1000f, 0);
										unk_0x452336926718D62A(&iVar27);
										unk_0xE02E32C69260FBB7(func_405(0));
										func_412(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
								{
									iLocal_200 = unk_0x8383F9C605E523B7(unk_0x3F90543934DCD7E6(ScriptParam_260.f_4, 0,337842f, -0,243051f, -0,329731f), 0f, 0f, (unk_0xF0371FE6E2BF9599(ScriptParam_260.f_4) - 3,783146f), 2);
									iLocal_206 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xEFF56C7BDABBF39B(iLocal_206, iLocal_200, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x7849794435F39D49(iLocal_206, true);
									unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
									unk_0xCB3D88C918AA637C(iLocal_170[0]);
									unk_0xCB3D88C918AA637C(iLocal_170[1]);
									unk_0x957CEE967C939968(iLocal_170[0]);
									unk_0x957CEE967C939968(iLocal_170[1]);
									unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x12C9D41D52A560D6(iLocal_170[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x12C9D41D52A560D6(iLocal_170[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xEBB74134CCA3442E(iVar27, iLocal_200, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1148846080);
									func_415(&iVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0xD56F740235B1E8F0(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_414(&iVar25) > 0,5f)
										{
											func_413(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_412(&iVar25);
										}
									}
									else if (!unk_0x33B1D0D0C92D4F18(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_411(&iVar25))
											{
												func_425(&iVar25);
											}
											else if (func_414(&iVar25) > 0,25f)
											{
												func_410(iLocal_170[1]);
												func_412(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0x463C4747B41E35A3(iLocal_200) > 0,95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x463C4747B41E35A3(iLocal_200) > 0,99f)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
									{
										func_404();
										unk_0x02934BABFD4CD384(iLocal_206, 0);
										unk_0xB8E08BD5B184DF4E(iLocal_170[0]);
										unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
										unk_0xBD1486160AB0661B(iVar27, -1000f, 0);
										unk_0x452336926718D62A(&iVar27);
										unk_0xE02E32C69260FBB7(func_405(0));
										func_412(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x3E9CABD07B829173())
								{
									iLocal_190 = 1;
									iLocal_31 = 0;
									unk_0x3E80C2F7BC665259(1);
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
									{
										unk_0xBD8D47FDC6902B2D(iLocal_170[0], Var2, 1, 0, 0, 1);
										unk_0x48ED7B2293A96722(iLocal_170[0], Var0.f_243.f_4);
										unk_0xBD8D47FDC6902B2D(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
										unk_0x48ED7B2293A96722(iLocal_170[1], Var0.f_243.f_4);
										unk_0xB8E08BD5B184DF4E(iLocal_170[0]);
										unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
									}
									unk_0x02934BABFD4CD384(iLocal_206, 0);
									unk_0xBD1486160AB0661B(iVar27, -1000f, 0);
									unk_0x452336926718D62A(&iVar27);
									if (!unk_0xC80D31E4B587871C(Global_104516, 0))
									{
										func_406(Var0.f_243.f_1, Var0.f_243.f_4, func_408(2), func_407(0), 0, 1);
									}
									else
									{
										func_404();
									}
									unk_0xE02E32C69260FBB7(func_405(0));
									func_412(&iVar25);
									unk_0x59C3AC31C7544A28(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_196 = unk_0x53C562FD2B9E3AB0();
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
							{
								unk_0xBD8D47FDC6902B2D(iLocal_170[0], Var2, 1, 0, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_170[0], Var0.f_243.f_4);
								unk_0xBD8D47FDC6902B2D(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_170[1], Var0.f_243.f_4);
							}
							unk_0xE859EF37EA7362D3(func_405(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_196) > 1500)
							{
								func_402(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_401(&(Var5.f_57), 1, 0))
							{
								unk_0xE859EF37EA7362D3(func_405(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xC80D31E4B587871C(Global_104516, 0))
					{
						if (func_398(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &iVar24))
						{
							unk_0x872F1C1F8587CCC7(&Global_104516, 0);
							Var0 = 8;
						}
					}
					else
					{
						unk_0x7849794435F39D49(iLocal_75, true);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x3E9CABD07B829173())
					{
						unk_0x59C3AC31C7544A28(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0x6ADD12BF4D6D2587(func_487()))
							{
								if (!unk_0xC80D31E4B587871C(Global_104516, 10))
								{
									unk_0x872F1C1F8587CCC7(&Global_104516, 10);
								}
								else
								{
									unk_0x0EE72DB1CD8A3B86(&Global_104516, 10);
								}
								func_396(&Var5);
								iVar13++;
							}
							else
							{
								func_396(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0xB9D80B12FE4456A5())
							{
								if (fLocal_89 != unk_0xB6936205ED728A9D(0))
								{
									fLocal_89 = unk_0xB6936205ED728A9D(0);
									unk_0xE43C573FE3C5D758(iLocal_75, func_395(fLocal_89));
									unk_0xE43C573FE3C5D758(iLocal_76, func_395(fLocal_89));
								}
							}
							if (func_335(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xE02E32C69260FBB7(func_405(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_334(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_331(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_324(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_104555.f_18940.f_5 >= 5 && Global_104555.f_18940.f_7 >= 0,8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_104555.f_18940.f_5 >= 3 && Global_104555.f_18940.f_7 >= 0,66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_323(Global_104555.f_18940.f_5, &iLocal_199))
						{
							func_322(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_321(Global_104555.f_18940.f_5);
						fLocal_46 = func_320(Global_104555.f_18940.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
						{
							unk_0x957CEE967C939968(iLocal_170[1]);
							unk_0xBD8D47FDC6902B2D(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_170[1], Var0.f_243.f_4);
						}
						if (func_411(&iVar23))
						{
							func_412(&iVar23);
						}
						unk_0xE859EF37EA7362D3(func_405(2));
						func_319(iLocal_170[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0xB9D80B12FE4456A5())
					{
						if (fLocal_89 != unk_0xB6936205ED728A9D(0))
						{
							fLocal_89 = unk_0xB6936205ED728A9D(0);
							unk_0xE43C573FE3C5D758(iLocal_75, func_395(fLocal_89));
							unk_0xE43C573FE3C5D758(iLocal_76, func_395(fLocal_89));
						}
					}
					if (!bLocal_188)
					{
						unk_0x6450931B826B49D9("mini@dartsoutro");
						bLocal_188 = true;
					}
					if (!iLocal_189)
					{
						if (bLocal_188)
						{
							if (!unk_0x3A801AA34DD821BE("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_189 = 1;
							}
						}
					}
					func_237(&Var0, &vVar3, &Var4, &Var5, &iVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_414(&(Var0.f_254)) > 0,5f)
							{
								unk_0x3E80C2F7BC665259(1);
								unk_0x84CDD933AFA470D2();
								func_236(unk_0xFC1458A37D98B502());
								func_334(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_235(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_234(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_232(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_232(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_232(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_232(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0xB6936205ED728A9D(1);
								if (fVar34 > 2f)
								{
									vVar20 = { 1992,294f, 3047,577f, 46,21517f };
									vVar21 = { 0f, 0f, 138,74f };
								}
								else
								{
									vVar20 = { 1992,336f, 3047,924f, 46,21517f };
									vVar21 = { 0f, 0f, 136,74f };
								}
								iVar33 = func_231();
								iLocal_200 = unk_0x8383F9C605E523B7(vVar20, vVar21, 2);
								iLocal_206 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xEFF56C7BDABBF39B(iLocal_206, iLocal_200, sLocal_259[iVar33], "mini@dartsoutro");
								unk_0x7849794435F39D49(iLocal_206, true);
								unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0x4AFBCBFDE748D4E0(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_230(&iLocal_170, iVar35);
										unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), sLocal_255, sLocal_256[unk_0x63A6486593EC7EC3(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0x4AFBCBFDE748D4E0(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_229(&iLocal_170);
										unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1,5f, 0, 0, 1148846080, 0);
										unk_0x12C9D41D52A560D6(iLocal_170[1], sLocal_254, sLocal_256[unk_0x63A6486593EC7EC3(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_227(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_412(&(Var0.f_254));
							iLocal_184 = 0;
							unk_0xE02E32C69260FBB7(func_405(3));
							func_404();
							if (unk_0x8EA3C8E091EA5BA4(iLocal_206))
							{
								unk_0x02934BABFD4CD384(iLocal_206, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_414(&(Var0.f_254)) > 0,92f)
					{
						func_40(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0x191BE1BC8F26F3C1(func_487(), 0))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0xB8E08BD5B184DF4E(iLocal_170[0]);
							if (!bLocal_186)
							{
								unk_0x3458550DF8E9B453(false, bLocal_186, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x90CE99E954B80CFF(0, 0, 3, 0);
							}
							unk_0xBB9A3C553EECB180(0f);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							unk_0x84CDD933AFA470D2();
							unk_0x60C06BFD037BB7CF(iLocal_170[0], iLocal_170[1], 5000, 2049, 3);
							func_425(&iVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&iVar25) > 0,1f)
							{
								if (!bVar7)
								{
								}
								func_425(&iVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&iVar25) > 0,3f)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_170[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_425(&iVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x58F436C557A0FD7A(2, 201))
					{
						func_1(iLocal_170[1]);
						iLocal_203 = 2;
						bVar7 = true;
						if (unk_0x771D0F8F56A5FE6C(func_405(2)))
						{
							unk_0xE02E32C69260FBB7(func_405(2));
						}
						Var0 = 13;
					}
					if (unk_0x58F436C557A0FD7A(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_322(&(Var5.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_458(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DE4
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1E02
{
	if (!unk_0x0F30C1F1717A6437())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_322(&(uParam0->f_666), 8, 1);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 16, 0);
			func_322(&(uParam0->f_666), 17, 0);
		}
		unk_0x321C68A0C8D65821();
		ui::_set_warning_message_2("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_322(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)//Position - 0x1E87
{
	return unk_0xC80D31E4B587871C(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E98
{
	if (!unk_0x191BE1BC8F26F3C1(func_487(), 0) || iParam2)
	{
		func_413(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1ED8
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)//Position - 0x1EF1
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

float func_7(int iParam0)//Position - 0x20E6
{
	if (func_411(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x2125
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

bool func_9(int iParam0)//Position - 0x217D
{
	return unk_0xC80D31E4B587871C(*iParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x218D
{
	bool bVar0;
	
	if (unk_0x4B64A8D052027742() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x4B64A8D052027742();
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xA7E3B4C3A60721A5(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x12A8D89D51ADF8A6(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x7635EA803CE40962(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			}
		}
	}
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(19);
	unk_0x4FB260623DD93924(2, 19, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 21, 1);
	unk_0x4FB260623DD93924(0, 28, 1);
	unk_0x4FB260623DD93924(0, 29, 1);
	unk_0x4FB260623DD93924(0, 171, 1);
	func_38(0);
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xABB93C2E6C591375() || (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076()))
		{
			unk_0x15F5D3F996CB934F();
		}
	}
	Global_36411 = 1;
	if (!uParam0->f_563)
	{
		switch (func_489(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			case 1:
				unk_0xA91E83FF512776B6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xA91E83FF512776B6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xA91E83FF512776B6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + system::floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + system::round((0f + (1000f * system::timestep()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * system::timestep())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * system::timestep())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_OUT");
			unk_0x271AA5469AF471B3();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * system::timestep())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x8CFF76532FEF34D4(2))
			{
				if (unk_0x34D11AB5BA7922C2(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xE8C126B7ADBB9D63(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x34D11AB5BA7922C2(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0,75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0,3f) * uParam0->f_573) * system::timestep())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0,3f) * uParam0->f_573) * 0,01f) * system::timestep())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xE8C126B7ADBB9D63(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			system::wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)//Position - 0x27E6
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_13(unk_0xC9C4B2A22DE54C69(2, 215, true));
	func_12("ES_HELP");
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x1869584A8A72FEDD(true);
		unk_0xD07D5CD276368D36(215);
	}
	unk_0x271AA5469AF471B3();
	if (bParam1)
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(1);
		func_13(unk_0xC9C4B2A22DE54C69(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x1869584A8A72FEDD(true);
			unk_0xD07D5CD276368D36(216);
		}
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

void func_12(char* sParam0)//Position - 0x28AA
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_13(char* sParam0)//Position - 0x28BC
{
	unk_0x8686005F83E832AE(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x28CA
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

void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28F1
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = system::round((uParam0->f_547 * 255f));
	fVar1 = (func_35() * 0,25f);
	if (unk_0x34D11AB5BA7922C2(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x3A711520F83BAE98())
				{
					unk_0xD07D5CD276368D36(150);
				}
				else
				{
					unk_0xD07D5CD276368D36(100);
				}
				unk_0x1869584A8A72FEDD(true);
				if (uParam0->f_556 == 4)
				{
					unk_0xD07D5CD276368D36((uParam0->f_56 - 1));
				}
				else
				{
					unk_0xD07D5CD276368D36(uParam0->f_56);
				}
				unk_0x1869584A8A72FEDD(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0xD07D5CD276368D36(2);
				}
				else
				{
					unk_0xD07D5CD276368D36(69);
				}
				unk_0x271AA5469AF471B3();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_UP");
				unk_0x9499D7329FB840A2(0,15f);
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x28E092B1E386EB67(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0,1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0xB6936205ED728A9D(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0,119f + 0,05f) / func_35()) / 2,5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x01B48CB2F72AE113(2, 215);
	unk_0x01B48CB2F72AE113(2, 216);
	unk_0x01B48CB2F72AE113(2, 200);
	unk_0x4FB260623DD93924(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0,95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0,166f) * system::timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x2F18DFDBFA4AA0E4();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x28E092B1E386EB67(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				unk_0x4FB260623DD93924(2, 188, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 188))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x4FB260623DD93924(2, 187, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 187))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x4FB260623DD93924(2, 202, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 202))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				if (unk_0xE8C126B7ADBB9D63(2, 215) || unk_0x4CD14B4B1E8BD8BA(2, 200))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x31758B9A51671C43(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, iVar0);
	unk_0xEDC290CB1C56B732(fVar9, fVar10);
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, 0,4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0,6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 - (func_37((2f - 0,5f)) - 0,001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0,8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, system::round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0,6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_37((2f * 0,5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0,6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_37((2f * 0,5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0,8f * func_37(25f))), 0f, 1f);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xC45D692E0BD4797B() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_35()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_35()) / 2,5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_35()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_35()) / 2,5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0xEDC290CB1C56B732(fVar20, fVar21);
				unk_0xA2E2179985C59E40(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0xA2E2179985C59E40(0);
			}
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0xEDC290CB1C56B732(fVar20, fVar21);
			unk_0xA2E2179985C59E40(2);
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			unk_0x0BC5BE26BB7006D2(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xEDC290CB1C56B732(fVar20, fVar22);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x76CCD673085CBF57("PERCENTAGE");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x76CCD673085CBF57("FO_TWO_NUM");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0x6223D539BCD39E76(uParam0->f_555);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x76CCD673085CBF57("MTPHPER_XPNO");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x76CCD673085CBF57("ESDOLLA");
					unk_0xC4DA7D522991B465(uParam0->f_554, 1);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x31758B9A51671C43(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x31758B9A51671C43(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x31758B9A51671C43(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0,001388889f * 5f);
				fVar30 = ((0,00078125f * 16f) * 2f);
				fVar31 = ((0,001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0,006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0,006f * 6f));
				}
				fVar30 = (fVar30 * 0,65f);
				fVar31 = (fVar31 * 0,65f);
				unk_0xEFB3EC0CDCC33841(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, system::round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)//Position - 0x3581
{
	return (fParam0 * 0,00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x3591
{
	unk_0x0BC5BE26BB7006D2(iParam3);
	unk_0x8F5DFDE59FA7D0D0(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(sParam0);
	}
	else
	{
		unk_0x76CCD673085CBF57(sParam0);
	}
	unk_0xD3DA9EADE295C3C5(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x35CE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_20())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
			{
				fVar4 = 1f;
			}
			if (unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
			{
				unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
			}
			iVar2 = system::round((system::to_float(iVar2) / fVar4));
			iVar3 = system::round((system::to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x62415D7FD7ADB9EE(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_19(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_19(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x41226DC6540EC9AA() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)//Position - 0x377F
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0,5f;
			break;
	}
	return 1f;
}

int func_20()//Position - 0x381E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (system::to_float(iVar0) / system::to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)//Position - 0x3850
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_23(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)//Position - 0x3CA2
{
	return uParam0;
}

struct<13> func_23(int iParam0)//Position - 0x3CAC
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)//Position - 0x3CC3
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_23(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3D38
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	unk_0xEDC290CB1C56B732(fParam3, fParam4);
	unk_0xA2E2179985C59E40(1);
	unk_0x8D95497078BC0E3B(1f, func_27(14f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x76CCD673085CBF57(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x6223D539BCD39E76(uParam0->f_489[iParam1]);
		}
	}
	unk_0xD3DA9EADE295C3C5(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_21(7, 0), (fParam4 - 0,006f), ((fParam2 + func_37(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_21(5, 0), (fParam4 - 0,006f), ((fParam2 + func_37(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_21(6, 0), (fParam4 - 0,006f), ((fParam2 + func_37(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xA2E2179985C59E40(1);
	}
	else
	{
		unk_0xA2E2179985C59E40(2);
	}
	unk_0x8D95497078BC0E3B(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x3FC3
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_27(18f));
			unk_0x8F5DFDE59FA7D0D0(4);
			if (iParam0 < 0)
			{
				unk_0x0792909D8327DAEA("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			else
			{
				unk_0x0792909D8327DAEA("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x8D95497078BC0E3B(1f, func_27(14f));
			break;
	}
	unk_0xF92B835A141C6BDD(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x76CCD673085CBF57("PERCENTAGE");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 1:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 2:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_TWO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x76CCD673085CBF57("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
			}
			else
			{
				unk_0x76CCD673085CBF57("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x76CCD673085CBF57(sParam4);
			break;
		
		case 7:
			unk_0x76CCD673085CBF57("STRING");
			unk_0x854FACC4E5F40C82(sParam4);
			break;
		
		case 8:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 14);
			break;
		
		case 9:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 6);
			break;
		
		case 10:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 12:
			unk_0x76CCD673085CBF57("AHD_DIST");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 13:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 16:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xD3DA9EADE295C3C5((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0x8D95497078BC0E3B(1f, func_27(14f));
		}
		else
		{
			unk_0xD3DA9EADE295C3C5(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)//Position - 0x433E
{
	return (fParam0 * 0,025f);
}

float func_28(float fParam0)//Position - 0x434E
{
	return (fParam0 * 0,0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x435E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_30(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)//Position - 0x44AC
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)//Position - 0x44C5
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

float func_32(char* sParam0)//Position - 0x44DE
{
	unk_0x0792909D8327DAEA(sParam0);
	return (unk_0xF2A1AF58CC57C564(1) / 2f);
}

void func_33()//Position - 0x44F3
{
	unk_0x5A66A86A47AC3B57(1);
	if (unk_0x2D0EF1D268F33F25() || unk_0x3E9CABD07B829173())
	{
		unk_0x5A66A86A47AC3B57(7);
	}
	unk_0xAE8C92295C8F2D18(0);
}

void func_34(char* sParam0)//Position - 0x451B
{
	unk_0x8686005F83E832AE(sParam0);
}

float func_35()//Position - 0x4529
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xB9D80B12FE4456A5())
	{
	}
	return fVar0;
}

void func_36(int iParam0)//Position - 0x453D
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

float func_37(float fParam0)//Position - 0x4551
{
	return (fParam0 * 0,001388889f);
}

void func_38(int iParam0)//Position - 0x4561
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_39(0))
		{
			func_418(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

int func_39(int iParam0)//Position - 0x458A
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

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x45E4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x4C4813CAAD70E814(2))
	{
		unk_0x4FB260623DD93924(2, 199, 1);
	}
	if (unk_0x5616476F69B90F14())
	{
		if (!iLocal_191)
		{
			if (func_206(uParam1, 0, &iLocal_192))
			{
				func_322(&(uParam1->f_666), 9, 0);
				iLocal_191 = 1;
			}
		}
	}
	if (iLocal_173)
	{
		if (unk_0x4C4813CAAD70E814(2))
		{
			unk_0x15F5D3F996CB934F();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0x5616476F69B90F14())
			{
				uParam1->f_646 = func_197(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_322(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_120(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_116(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0xE8C126B7ADBB9D63(2, 202))
				{
					uParam1->f_680 = 0;
					func_322(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_115(&(uParam1->f_72)))
			{
				if (!bLocal_193)
				{
					bLocal_193 = true;
					func_114(&(uParam1->f_509), 0, 0, 1, 1);
					func_113(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_113(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_113(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_113(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_110(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_103(uParam1, 0, 0, iLocal_191);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xD56F740235B1E8F0(iLocal_200) && unk_0x463C4747B41E35A3(iLocal_200) >= 0,995f) || !unk_0xD56F740235B1E8F0(iLocal_200))
		{
			bLocal_186 = true;
			if (unk_0x8EA3C8E091EA5BA4(iLocal_206))
			{
				unk_0x02934BABFD4CD384(iLocal_206, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
				{
					unk_0x957CEE967C939968(iLocal_170[0]);
					unk_0x957CEE967C939968(iLocal_170[1]);
					unk_0x9A0C1F836B24E46E(iLocal_170[0], 0, 0);
					unk_0x9A0C1F836B24E46E(iLocal_170[1], 0, 0);
				}
			}
			func_102();
		}
		if (func_414(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_184)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_230(&iLocal_170, iVar2);
				}
				else
				{
					func_229(&iLocal_170);
				}
				iLocal_184 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x3E80C2F7BC665259(1);
			unk_0xE02E32C69260FBB7(func_405(3));
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
			{
				unk_0xCB3D88C918AA637C(iLocal_170[0]);
				unk_0xCB3D88C918AA637C(iLocal_170[1]);
			}
			func_101(uParam3);
			if (bParam4)
			{
				func_334(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_412(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_184 = 0;
			iLocal_182 = 0;
			bLocal_186 = false;
			func_98();
			iLocal_191 = 0;
			iLocal_166 = 0;
			uParam1->f_680 = 0;
			iLocal_192 = 0;
			bLocal_193 = false;
			func_90(&(uParam1->f_72));
			func_448();
		}
		else if (iVar0 == 2)
		{
			func_89(uParam3);
			unk_0xE02E32C69260FBB7(func_405(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_52(func_85(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0x84CDD933AFA470D2();
			*uParam0 = 13;
		}
		else if (((unk_0xE8C126B7ADBB9D63(0, 234) || unk_0xE8C126B7ADBB9D63(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_172)
			{
				vVar3 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_51(vVar3, 0, iLocal_172);
				iLocal_172 = 0;
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_436)
				{
					iLocal_195 = 0;
				}
				vVar3 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_49(vVar3);
			}
			else if (unk_0xE8C126B7ADBB9D63(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_436 - 1);
				}
				vVar3 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_49(vVar3);
			}
		}
		else if (((unk_0xE8C126B7ADBB9D63(0, 211) || unk_0x4CD14B4B1E8BD8BA(0, 211)) && bVar1) && (iLocal_191 || !unk_0x5616476F69B90F14()))
		{
			uParam1->f_680 = 1;
			func_114(&(uParam1->f_509), 0, 0, 1, 1);
			func_113(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_113(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_113(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_193)
			{
				func_113(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_110(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0x3E80C2F7BC665259(1);
		unk_0x84CDD933AFA470D2();
		func_45(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0xB6936205ED728A9D(1);
		if (fVar4 > 2f)
		{
			vVar5 = { 1992,294f, 3047,577f, 46,21517f };
			vVar6 = { 0f, 0f, 138,74f };
		}
		else
		{
			vVar5 = { 1992,336f, 3047,924f, 46,21517f };
			vVar6 = { 0f, 0f, 136,74f };
		}
		iVar7 = func_231();
		iLocal_200 = unk_0x8383F9C605E523B7(vVar5, vVar6, 2);
		iLocal_206 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xEFF56C7BDABBF39B(iLocal_206, iLocal_200, sLocal_259[iVar7], "mini@dartsoutro");
		unk_0x7849794435F39D49(iLocal_206, true);
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
		{
			if (uParam0->f_454)
			{
				unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), sLocal_255, sLocal_256[unk_0x63A6486593EC7EC3(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0x8E628F774C748D93(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1,5f, 0, 0, 1148846080, 0);
				unk_0x12C9D41D52A560D6(iLocal_170[1], sLocal_254, sLocal_256[unk_0x63A6486593EC7EC3(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_186 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x53C562FD2B9E3AB0();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_235(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_234(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0x53C562FD2B9E3AB0() - uParam1->f_671) > 400 && func_41(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0x4AFBCBFDE748D4E0(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_173 = 1;
	}
}

int func_41(var uParam0, bool bParam1, int iParam2)//Position - 0x4DA7
{
	uParam0->f_12 = iParam2;
	func_44(uParam0);
	func_43(uParam0);
	if (unk_0x74C475EB8E73D398(&(uParam0->f_550), "SPR_RESULT") || (unk_0x74C475EB8E73D398(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x128A5DCCD09CCA17("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x128A5DCCD09CCA17("CommonMenu", false);
		unk_0x128A5DCCD09CCA17("MPLeaderboard", false);
		unk_0x128A5DCCD09CCA17("MPHud", false);
		uParam0->f_1 = unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4A8BF4917A66587B("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			system::wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_42(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_71117 = 1;
	return 1;
}

void func_42(var uParam0)//Position - 0x4F47
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(2);
	func_13(unk_0xC9C4B2A22DE54C69(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(1);
	func_13(unk_0xC9C4B2A22DE54C69(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_13(unk_0xC9C4B2A22DE54C69(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

void func_43(var uParam0)//Position - 0x500C
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x0792909D8327DAEA("STRING");
			unk_0x854FACC4E5F40C82(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
		else
		{
			unk_0x0792909D8327DAEA(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
	}
	else
	{
		unk_0x0792909D8327DAEA("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x6223D539BCD39E76(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xA6D2B267C377D7B2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x854FACC4E5F40C82(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xF2A1AF58CC57C564(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_44(var uParam0)//Position - 0x5114
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_45(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x5193
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_48(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_48(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_47(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_47(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_47(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_47(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_46(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5265
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_47(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x52A0
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_48(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x5313
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_49(vector3 vParam0)//Position - 0x5336
{
	vector3 vVar0;
	
	vVar0 = { func_50(vParam0) };
	if (bLocal_88)
	{
		unk_0xA215B2F25E63FA31(iLocal_86, vVar0);
		unk_0xF10DA1539629CC3F(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0xA215B2F25E63FA31(iLocal_85, vVar0);
		unk_0xF10DA1539629CC3F(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_50(vector3 vParam0)//Position - 0x5386
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 0,3495f, -0,0276f, -0,0114f };
	vVar0 = { vParam0 - vVar1 };
	return vVar0;
}

void func_51(vector3 vParam0, bool bParam1, bool bParam2)//Position - 0x53B2
{
	vector3 vVar0;
	
	vVar0 = { func_50(vParam0) };
	if (bParam1)
	{
		unk_0xA215B2F25E63FA31(iLocal_85, vVar0);
		unk_0xF10DA1539629CC3F(iLocal_85, iLocal_84, 1500, 1, 1);
		unk_0x7849794435F39D49(iLocal_84, false);
		unk_0xA215B2F25E63FA31(iLocal_86, vVar0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0xA215B2F25E63FA31(iLocal_85, vVar0);
		unk_0xF10DA1539629CC3F(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0xF10DA1539629CC3F(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0xF10DA1539629CC3F(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		unk_0x7849794435F39D49(iLocal_85, false);
	}
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5444
{
	int iVar0;
	int iVar1;
	
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xFA3CE529DBB66C85(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xBFFF62F75445099D(iVar1, iVar0, 1);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x552B
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_84();
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
					func_83(99, 1);
					func_82(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_66(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_62(5))
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
							func_82(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_62(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_82(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_property"), iParam3);
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
									func_82(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_62(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_61(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_83(95, iParam3);
					break;
				
				case 1:
					func_83(97, iParam3);
					break;
				
				case 2:
					func_83(96, iParam3);
					break;
			}
			func_83(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
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
					func_82(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_total_cash_earned"), iParam3);
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
	func_55(iParam0);
	if (Global_35861 == 15)
	{
		func_54(0);
	}
	return 1;
}

void func_54(bool bParam0)//Position - 0x5B2A
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

void func_55(int iParam0)//Position - 0x5DAC
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

void func_56(int iParam0)//Position - 0x5E06
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_59(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_58() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_58() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_57(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)//Position - 0x5EDD
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

int func_58()//Position - 0x5F65
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_59(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5F72
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
		iParam2 = func_60();
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

int func_60()//Position - 0x643E
{
	return Global_1312736;
}

void func_61(int iParam0)//Position - 0x644A
{
	func_83(93, iParam0);
	func_83(29, iParam0);
	func_83(30, iParam0);
}

bool func_62(int iParam0)//Position - 0x646A
{
	if (iParam0 == 8)
	{
		return func_63(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_58() /*12130*/].f_7676.f_10, iParam0);
}

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x64B8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_60();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)//Position - 0x64F5
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

int func_65(int iParam0, int iParam1)//Position - 0x67B5
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_60();
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

int func_66(bool bParam0)//Position - 0x6A57
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
		func_81(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

int func_67(int iParam0, int iParam1)//Position - 0x6B0E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)//Position - 0x6B29
{
	if (func_80(14) && !func_79(iParam0))
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
	if (func_78(&Global_4267379))
	{
		if (func_76(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4267379, iParam0))
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

int func_69(var uParam0, int iParam1)//Position - 0x6BC6
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)//Position - 0x6C77
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)//Position - 0x6CF2
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)//Position - 0x6D03
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4267378 - 0,5f));
}

void func_73(var uParam0, int iParam1)//Position - 0x6D37
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)//Position - 0x6D47
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

float func_75(var uParam0)//Position - 0x6D64
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)//Position - 0x6D70
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)//Position - 0x6D82
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

bool func_78(var uParam0)//Position - 0x6DAF
{
	return uParam0->f_79 == 1;
}

int func_79(int iParam0)//Position - 0x6DBD
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

bool func_80(int iParam0)//Position - 0x6E0D
{
	return Global_35861 == iParam0;
}

int func_81(int iParam0, int iParam1)//Position - 0x6E1B
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

void func_82(int iParam0, int iParam1)//Position - 0x6E6C
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)//Position - 0x6E8F
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

void func_84()//Position - 0x6EEC
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

int func_85()//Position - 0x6F61
{
	func_86();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_86()//Position - 0x6F7A
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_88(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_489(unk_0xFC1458A37D98B502());
			if (func_87(iVar0) && (!func_80(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_87(Global_104555.f_2353.f_539.f_4301))
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

bool func_87(int iParam0)//Position - 0x7077
{
	return iParam0 < 3;
}

int func_88(int iParam0)//Position - 0x7083
{
	if (func_87(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_89(var uParam0)//Position - 0x70AD
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_90(var uParam0)//Position - 0x70E0
{
	if (uParam0->f_4 != 0)
	{
		func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_96(uParam0);
		func_95(uParam0);
		func_94(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_92();
	}
	if (unk_0x771D0F8F56A5FE6C("LEADERBOARD_SCENE"))
	{
		unk_0xE02E32C69260FBB7("LEADERBOARD_SCENE");
	}
	if (unk_0xDEC0EB6EAE9BC575())
	{
		func_91(&(Global_1840922.f_49));
	}
	Global_2512808.f_3935 = 0;
}

void func_91(var uParam0)//Position - 0x7181
{
	uParam0->f_1 = 0;
}

void func_92()//Position - 0x718E
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_93(&(Global_1835390.f_2780));
	func_91(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_91(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_91(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_93(var uParam0)//Position - 0x72FA
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_94(var uParam0)//Position - 0x7352
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_91(&(Global_1835390.f_2830));
}

void func_95(var uParam0)//Position - 0x7434
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_91(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_96(var uParam0)//Position - 0x74BC
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_97(var uParam0, var uParam1, var uParam2)//Position - 0x758A
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_91(&(Global_1835008.f_1));
	unk_0xB480C77695DDCB0B(*uParam2, uParam2->f_1, -1);
}

void func_98()//Position - 0x75B6
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_100(&(Global_1835013.f_73));
	func_100(&(Global_1835013.f_142));
	func_100(&(Global_1835013.f_211));
	func_100(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_99(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_99(var uParam0)//Position - 0x765A
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

void func_100(var uParam0)//Position - 0x76A2
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_101(var uParam0)//Position - 0x76DD
{
	func_44(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_102()//Position - 0x7707
{
	unk_0x7849794435F39D49(iLocal_81, true);
}

int func_103(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x7716
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_114(&(uParam0->f_509), 0, 0, 1, 1);
			func_113(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_113(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_113(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x5616476F69B90F14())
			{
				func_113(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_106(func_109(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_108(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_106(func_109(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_108(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_106(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_401(&(uParam0->f_57), 0, 0);
			}
			func_116(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0x0F30C1F1717A6437())
		{
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_671) > 900)
			{
				if (unk_0xF2B58F79D29425B4(2, 216))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_322(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 215))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_105();
					func_104();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x58F436C557A0FD7A(2, 201))
		{
			return 2;
		}
		else if (unk_0x58F436C557A0FD7A(2, 202))
		{
			func_322(&(uParam0->f_666), 9, 0);
			func_322(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_104()//Position - 0x7951
{
	if (Global_2436181.f_2592[0 /*79*/].f_2 != 0)
	{
		Global_2436181.f_2592[0 /*79*/].f_2 = 5;
	}
}

void func_105()//Position - 0x7976
{
	Global_25377 = 1;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x7982
{
	int iVar0;
	int iVar1;
	
	if (func_107(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_30(3, iVar0);
		Global_1359035.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_2623.f_183[iVar0] = iParam3;
		Global_1359035.f_2623.f_172[iVar0] = iParam2;
		Global_1359035.f_2623.f_205[iVar0] = iParam4;
		Global_1359035.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_2623.f_420[iVar0] = iParam7;
		Global_1359035.f_2623.f_453[iVar0] = iParam8;
		Global_1359035.f_2623.f_431[iVar0] = iParam9;
		Global_1359035.f_2623.f_442[iVar0] = iParam10;
		Global_1359035.f_2623.f_464[iVar0] = iParam11;
	}
}

int func_107(char* sParam0)//Position - 0x7A94
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

char* func_108(bool bParam0, char* sParam1, char* sParam2)//Position - 0x7ACE
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_109(bool bParam0, int iParam1, int iParam2)//Position - 0x7AE5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_110(var uParam0, bool bParam1)//Position - 0x7AFC
{
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 1024);
	}
	else
	{
		func_111(&(uParam0->f_1), 1024);
	}
}

void func_111(var uParam0, int iParam1)//Position - 0x7B22
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_112(var uParam0, int iParam1)//Position - 0x7B37
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_113(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7B48
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_114(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7C11
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4A8BF4917A66587B("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 32);
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		func_112(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x6A0C4AD62ABCE665(*uParam0, 1);
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (bParam3)
		{
			func_112(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_112(&(uParam0->f_1), 8192);
	}
}

int func_115(var uParam0)//Position - 0x7C8B
{
	if ((unk_0xC80D31E4B587871C(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_116(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x7CC2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076()) || unk_0x3E9CABD07B829173()) || unk_0x0C200A19C058463C())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_119(uParam0))
	{
		return;
	}
	unk_0x2F18DFDBFA4AA0E4();
	unk_0x5A66A86A47AC3B57(iParam2);
	if (!func_118(uParam0->f_1, 256) || (func_118(uParam0->f_1, 8192) && unk_0x8CFF76532FEF34D4(2)))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_CLEAR_SPACE");
		unk_0x9499D7329FB840A2(fParam1);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
		unk_0x9499D7329FB840A2(fParam5);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x271AA5469AF471B3();
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(func_118(uParam0->f_1, 4096));
			unk_0x271AA5469AF471B3();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x4C4813CAAD70E814(2);
					break;
				
				case 2:
					bVar4 = !unk_0x4C4813CAAD70E814(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xD07D5CD276368D36(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xC80D31E4B587871C(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xC80D31E4B587871C(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xC9C4B2A22DE54C69(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x715308393E136EA8(iVar0, iVar1, bVar2);
						}
						if (!unk_0xAB019B170BF1309C(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xAB019B170BF1309C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (func_118(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x1869584A8A72FEDD(true);
								unk_0xD07D5CD276368D36(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x1869584A8A72FEDD(false);
								unk_0xD07D5CD276368D36(-1);
							}
						}
					}
					unk_0x271AA5469AF471B3();
				}
			}
			iVar6++;
		}
		fVar8 = func_117(bParam4, func_117(func_118(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x9499D7329FB840A2(fVar8);
		unk_0x271AA5469AF471B3();
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(0f);
		unk_0x9499D7329FB840A2(80f);
		unk_0x271AA5469AF471B3();
		func_112(&(uParam0->f_1), 256);
		func_111(&(uParam0->f_1), 128);
	}
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 0, 0);
}

float func_117(bool bParam0, float fParam1, float fParam2)//Position - 0x7F82
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_118(var uParam0, int iParam1)//Position - 0x7F99
{
	return (uParam0 && iParam1) != 0;
}

int func_119(var uParam0)//Position - 0x7FA8
{
	if (*uParam0 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			func_112(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_120(var uParam0, var uParam1)//Position - 0x7FCF
{
	func_121(uParam1, uParam0);
}

void func_121(var uParam0, var uParam1)//Position - 0x7FDF
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_196(&(Global_1840922.f_49), 1, 0);
	unk_0x873070BEE2844FE5();
	func_195();
	func_38(0);
	unk_0x36853D5037847BF3();
	func_193();
	unk_0x553231E7FC3C570D(10);
	func_192(1);
	func_191(1);
	if (!func_188())
	{
		if (!unk_0x771D0F8F56A5FE6C("LEADERBOARD_SCENE"))
		{
			unk_0xE859EF37EA7362D3("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam1->f_42, 3))
	{
		*uParam0 = func_187();
		unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 3);
	}
	Var10 = { func_23(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (((!unk_0xE9F0A7BEA240607F() || !unk_0x5616476F69B90F14()) || (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x5616476F69B90F14())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xE9F0A7BEA240607F())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xC80D31E4B587871C(uParam1->f_42, 1))
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x271AA5469AF471B3();
				func_186(*uParam0, Global_1835390.f_2780);
				if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_185(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835390.f_2780.f_9 };
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 4);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 5);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0x872F1C1F8587CCC7(&iVar9, 6);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 1);
				func_181(*uParam0);
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
				unk_0x3E80C2F7BC665259(1);
			}
			else
			{
				func_181(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_146(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 1);
				if (!unk_0xC80D31E4B587871C(uParam1->f_42, 0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271AA5469AF471B3();
					func_186(*uParam0, Global_1835390.f_2780);
					if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_185(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 0);
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 4);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 5);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 6);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 7);
						func_145(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_91(&(Global_1835390.f_2823));
				}
				else if (func_143(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 4);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 5);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0x872F1C1F8587CCC7(&iVar9, 6);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 7);
						func_145(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_91(&(Global_1835390.f_2823));
				}
				func_181(*uParam0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 0);
				if (!unk_0xC80D31E4B587871C(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x271AA5469AF471B3();
					func_186(*uParam0, Global_1835390.f_2780);
					if (unk_0xA1800C71952C596F(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_185(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835390.f_2780.f_9 };
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &Var6, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &cVar7, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_184(*uParam0, &(Global_1835390.f_2780.f_1), &Var6, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xC80D31E4B587871C(uParam1->f_42, 6))
					{
						func_94(&Global_1839721);
						func_139(uParam1, &Global_1839721);
						func_138(uParam1, &Global_1839721);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 4);
									func_182(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_182(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_182(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0x872F1C1F8587CCC7(&iVar9, 6);
									if (!unk_0x851744C54849FD9D())
									{
										bVar14 = true;
									}
									else if (!unk_0xFF3CFF3D74A5AD30())
									{
										bVar14 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_185(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_182(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_182(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_137(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_185(uParam1->f_44))
								{
									unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &uVar11);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0x74C475EB8E73D398(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_136(&(Global_1839721[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0x872F1C1F8587CCC7(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0x872F1C1F8587CCC7(&iVar9, 3);
											}
										}
									}
									if (func_185(uParam1->f_44))
									{
										Var6 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xAB019B170BF1309C(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0x74C475EB8E73D398(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_135(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &Var6, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_135(*uParam0, iVar3, iVar9, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar5 = false;
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_130(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_130(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_127(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_127(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_126();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0x872F1C1F8587CCC7(&iVar9, 2);
											unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_125(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 4);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 5);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0x872F1C1F8587CCC7(&iVar9, 6);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0x872F1C1F8587CCC7(&(uParam1->f_42), 1);
					unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
					func_181(*uParam0);
					unk_0x3E80C2F7BC665259(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_125(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_181(*uParam0);
					func_122(uParam0, uParam1);
				}
			}
		}
	}
}

void func_122(var uParam0, var uParam1)//Position - 0x8FBE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x4C4813CAAD70E814(2))
	{
		unk_0x15F5D3F996CB934F();
		unk_0x01B48CB2F72AE113(2, 239);
		unk_0x01B48CB2F72AE113(2, 240);
		unk_0x01B48CB2F72AE113(2, 237);
		unk_0x01B48CB2F72AE113(2, 238);
		unk_0x4FB260623DD93924(2, 200, 1);
		if (unk_0x5A632962B08A1872(2, 241))
		{
			unk_0x47EF3E74CCFB613A(2, 188, 1f);
		}
		if (unk_0x5A632962B08A1872(2, 242))
		{
			unk_0x47EF3E74CCFB613A(2, 187, 1f);
		}
		if (unk_0xAB5E04183ECB28D3(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x47EF3E74CCFB613A(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x4C4813CAAD70E814(2))
	{
		func_124(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xC80D31E4B587871C(uParam1->f_246, 0))
		{
			if ((unk_0xF2B58F79D29425B4(2, 188) || unk_0x5A632962B08A1872(2, 188)) || iVar6 < -100)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 0);
				func_91(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 188))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 0);
		}
		if (!unk_0xC80D31E4B587871C(uParam1->f_246, 1))
		{
			if ((unk_0xF2B58F79D29425B4(2, 187) || unk_0x5A632962B08A1872(2, 187)) || iVar6 > 100)
			{
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 1);
				func_91(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 187))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam1->f_246, 3))
	{
		if ((unk_0xF2B58F79D29425B4(2, 204) || unk_0x4CD14B4B1E8BD8BA(2, 204)) || unk_0xE8C126B7ADBB9D63(2, 237))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 3);
			func_91(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_123(uParam1, 204))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_125(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0x872F1C1F8587CCC7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_125(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_42), 2);
		}
		if (func_137(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_246, 2))
			{
				if (unk_0xF2B58F79D29425B4(2, 217) || unk_0x4CD14B4B1E8BD8BA(2, 217))
				{
					if (!unk_0x04D7390E1D7464B7())
					{
						unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_246), 2);
						unk_0x695CFD2C14C7E4A7(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xF2B58F79D29425B4(2, 217))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_123(var uParam0, int iParam1)//Position - 0x9360
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_124(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xF2B58F79D29425B4(2, iParam1) && !unk_0x5A632962B08A1872(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_143(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xF2B58F79D29425B4(2, iParam1) && !unk_0x5A632962B08A1872(2, iParam1)) || func_143(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x93FF
{
	*uParam0 = system::floor((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = system::floor((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = system::floor((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_125(int iParam0, int iParam1, int iParam2)//Position - 0x94D4
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT_STATE");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0x271AA5469AF471B3();
}

void func_126()//Position - 0x94F7
{
	unk_0x271AA5469AF471B3();
}

void func_127(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x9503
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x32AD2F36F6EF5A1F(fParam15, 2);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(system::floor(fParam15));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x485A7F3B0AD1A79D())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_129(fParam15);
					}
					else
					{
						fParam15 = func_128(fParam15);
					}
				}
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x32AD2F36F6EF5A1F(fParam15, 2);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 0:
			break;
	}
}

float func_128(float fParam0)//Position - 0x9625
{
	return (fParam0 / 0,3048f);
}

float func_129(float fParam0)//Position - 0x9635
{
	return (fParam0 / 1609,344f);
}

void func_130(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x9645
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(-iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 6);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x7E099EB35339C80D("SC_LB_EMPTY");
					unk_0x9748595E4799A2CF();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 14);
					unk_0x9748595E4799A2CF();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 6);
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam15, 2055);
					unk_0x9748595E4799A2CF();
				}
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xA8698D7EBA72C3DA(iParam15))
				{
					unk_0x7E099EB35339C80D("SCLB_VEH_CUST");
					unk_0xA6D2B267C377D7B2(unk_0x8C8DF9FA5116BB9A(iParam15));
					unk_0x9748595E4799A2CF();
				}
				else
				{
					unk_0x7E099EB35339C80D("SC_LB_EMPTY");
					unk_0x9748595E4799A2CF();
				}
			}
			else if (unk_0xA8698D7EBA72C3DA(iParam15))
			{
				unk_0x7E099EB35339C80D(unk_0x8C8DF9FA5116BB9A(iParam15));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 8:
			if (func_134(iParam15) != 0)
			{
				unk_0x7E099EB35339C80D(func_131(func_134(iParam15), 0));
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x485A7F3B0AD1A79D())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = system::floor(func_129(system::to_float(iParam15)));
					}
					else
					{
						iParam15 = system::floor(func_128(system::to_float(iParam15)));
					}
				}
				unk_0x7E099EB35339C80D("NUMBER");
				unk_0x6223D539BCD39E76(iParam15);
				unk_0x9748595E4799A2CF();
			}
			else
			{
				unk_0x7E099EB35339C80D("SC_LB_EMPTY");
				unk_0x9748595E4799A2CF();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_131(int iParam0, bool bParam1)//Position - 0x99DF
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		default:
			if (func_133(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_132(&(Var0.f_31));
				}
				else
				{
					return func_132(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_132(var uParam0)//Position - 0xA5DF
{
	return uParam0;
}

int func_133(int iParam0, var uParam1)//Position - 0xA5E9
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

int func_134(int iParam0)//Position - 0xA624
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0xA797
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	if (iParam3 > 0)
	{
		unk_0x7E099EB35339C80D("NUMBER");
		unk_0x6223D539BCD39E76(iParam3);
		unk_0x9748595E4799A2CF();
	}
	else
	{
		unk_0x7E099EB35339C80D("SC_LB_EMPTY");
		unk_0x9748595E4799A2CF();
	}
	unk_0x8686005F83E832AE(sParam4);
	unk_0x8686005F83E832AE(sParam5);
}

int func_136(var uParam0, var uParam1)//Position - 0xA7E9
{
	if (!func_137(*uParam0))
	{
		return 0;
	}
	if (!func_137(*uParam1))
	{
		return 0;
	}
	if (unk_0x621B42AE8C13A226(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xA823
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

void func_138(var uParam0, var uParam1)//Position - 0xA833
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 5) && !unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_139(var uParam0, var uParam1)//Position - 0xA9A4
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 5) && !unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_142(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_140(uParam1);
	}
}

void func_140(var uParam0)//Position - 0xAA59
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(unk_0x9EB17624F44A8DA4()) };
	if (unk_0xDAA07938DBBD5115(Global_1835390.f_2826))
	{
		iVar4 = unk_0x82B059ADE497253C(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_141(&Global_1839591);
				iVar2 = 0;
				unk_0xC51C24039D0684CA(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xC80D31E4B587871C(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_136(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xC80D31E4B587871C(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_141(var uParam0)//Position - 0xAC79
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_142(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xACEF
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0x9EB17624F44A8DA4()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = system::floor(system::to_float((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_143(var uParam0, int iParam1, bool bParam2)//Position - 0xAF98
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_144(uParam0, bParam2, 0);
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

void func_144(var uParam0, bool bParam1, bool bParam2)//Position - 0xAFF6
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

void func_145(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xB03B
{
	unk_0x872F1C1F8587CCC7(&iParam2, 7);
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0x7E099EB35339C80D(sParam3);
	unk_0xDED957EFB8EBDAF3();
	unk_0x271AA5469AF471B3();
}

int func_146(var uParam0)//Position - 0xB06F
{
	if (!Global_1835388)
	{
		if (!func_180(&(Global_1835390.f_2827)))
		{
			func_144(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_143(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xE9F0A7BEA240607F() || !unk_0x5616476F69B90F14()) || (!unk_0x0A51F536ECBFA795() && unk_0x464F779D23F6440D())) || Global_1835390.f_2832 != 0)
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 4))
	{
		func_179(uParam0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_177(uParam0))
	{
		return 0;
	}
	if (!func_175(uParam0))
	{
		return 0;
	}
	if (!func_162(uParam0))
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 6))
	{
		func_94(&Global_1839721);
		func_139(uParam0, &Global_1839721);
		func_138(uParam0, &Global_1839721);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 6);
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_42, 7))
	{
		if (!func_180(&(Global_1835390.f_2830)))
		{
			func_144(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_143(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 7);
		}
		if (func_159(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_156(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_151(&Global_1839721))
		{
			func_147(&Global_1839721);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 7);
			func_147(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_147(var uParam0)//Position - 0xB234
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_150(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_149(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_141(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x74C475EB8E73D398(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_137((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1839591.f_61), 0);
			}
			unk_0x872F1C1F8587CCC7(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xC80D31E4B587871C(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			unk_0x07D3AFB23B70B97F(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_148(unk_0x9EB17624F44A8DA4()) };
}

Vector3 func_148(int iParam0)//Position - 0xB41E
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_149(int iParam0, int iParam1)//Position - 0xB431
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xDAA07938DBBD5115(Global_1838575.f_81[iParam1]))
		{
			unk_0x1ABBB6404F13C38C(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xDAA07938DBBD5115(iParam0))
		{
			unk_0x1ABBB6404F13C38C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_150(int iParam0)//Position - 0xB4AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xDAA07938DBBD5115(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x12B40AAFCD236FA4(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_151(var uParam0)//Position - 0xB540
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_155(uParam0);
			if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_137((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_154(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_152(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_137((uParam0[iVar0 /*100*/])->f_32) && func_137(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x621B42AE8C13A226(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB6E3
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x8C0754E02475E0AE())
			{
			}
			else
			{
				unk_0xB5EFDB00213645DF();
				unk_0x87581986560DE8DD(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x8C0754E02475E0AE())
			{
				if (unk_0xFCDA894345E1CE74())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x942604BF4EFDE42D(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_153(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x8C0754E02475E0AE())
			{
				unk_0xEFCD5E1CC442F83B();
			}
			else
			{
				unk_0xB5EFDB00213645DF();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_153(var uParam0, char* sParam1)//Position - 0xB79C
{
	unk_0x22889E844C3772CE(uParam0, 35, sParam1);
}

int func_154(var uParam0, var uParam1)//Position - 0xB7AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_137(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x621B42AE8C13A226(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_155(var uParam0)//Position - 0xB7ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_99(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x8C0754E02475E0AE())
		{
			unk_0xB5EFDB00213645DF();
		}
	}
	if (unk_0x8C0754E02475E0AE())
	{
		unk_0xEFCD5E1CC442F83B();
	}
	Global_1841018.f_206 = 0;
}

int func_156(var uParam0)//Position - 0xB85E
{
	int iVar0;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		return 1;
	}
	else if (unk_0x177281F5FA205A38())
	{
		if (!func_158(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_157(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_157(var uParam0, var uParam1, char* sParam2)//Position - 0xB8C2
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_137(*uParam1))
			{
				if (!unk_0xC3E4E13EDB2F7D88(uParam1))
				{
					if (unk_0x177281F5FA205A38())
					{
						if (unk_0x8AF3CF4F442045D9(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x04E8D1E1170F25E1())
					{
						if (unk_0x8AF3CF4F442045D9(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x7ED645C78531134E(uParam1), 64);
						if (unk_0x8A81E55A71641BC1())
						{
						}
						else if (unk_0xFD6215BABFD843F2())
						{
						}
						else if (unk_0xB9D80B12FE4456A5())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xC3E4E13EDB2F7D88(uParam1))
			{
				if (!unk_0xF433424C80A7F6F1())
				{
					if (unk_0xDA8F35ED05C0DEC4())
					{
						StringCopy(sParam2, unk_0x7ED645C78531134E(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_158(var uParam0)//Position - 0xB9C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x177281F5FA205A38())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_99(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_137((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xB2CD7FC41B52C9AB(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6FF071973F3F6F18((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_137((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_159(var uParam0)//Position - 0xBB55
{
	int iVar0;
	
	if (unk_0x177281F5FA205A38())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_161(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_160(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xBBE8
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB019B170BF1309C(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCE1B21C2EC68CB5(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_137(Var0))
			{
				if (!unk_0xC3E4E13EDB2F7D88(&Var0))
				{
					if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
					{
						if (unk_0x8AF3CF4F442045D9(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x7ED645C78531134E(&Var0), 64);
						if (unk_0x8A81E55A71641BC1())
						{
						}
						else if (unk_0xFD6215BABFD843F2())
						{
						}
						else if (unk_0xB9D80B12FE4456A5())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xC3E4E13EDB2F7D88(&Var0))
			{
				if (!unk_0xF433424C80A7F6F1())
				{
					if (unk_0xDA8F35ED05C0DEC4())
					{
						StringCopy(sParam17, unk_0x7ED645C78531134E(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_161(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xBD00
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x177281F5FA205A38())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xAB019B170BF1309C(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xDCE1B21C2EC68CB5(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_137(Var1[0 /*13*/]))
			{
				if (!unk_0xC3E4E13EDB2F7D88(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xB2CD7FC41B52C9AB(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xDE2D3B9654C31EB3(unk_0x8A6F53F45F2ECE78(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6FF071973F3F6F18(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_162(var uParam0)//Position - 0xBDFC
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_23(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835390.f_2775[iVar9] = -1;
			Global_1835390.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x15DBBAF9E2085C7A())
			{
				if (unk_0xA84F967541249268(&Var12))
				{
					if (unk_0x5CF21D71A8C4CFA6(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_174(), 0, 0, 0))
			{
				func_172(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_174())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xEE7624F5005BED95(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_171(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xEE7624F5005BED95(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_174() && iVar5 == 0)
								{
									func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar9] = 0;
									Global_1835390.f_2704[iVar9]++;
								}
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_136(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835390.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835390.f_2704[iVar9]++;
						}
						if (!func_174())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_171(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar7, &Var0);
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_174() && iVar5 == iVar7)
								{
									if (!func_136(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_136(&Var0, &Var12))
										{
											if (Global_1835390.f_2775[iVar9] < 0)
											{
												Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_169(uParam0->f_44))
										{
											iVar4 = unk_0x94F79AC74CA452DD(iVar7, Global_1835390.f_2709);
											if (iVar4 == 1)
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(iVar7, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(iVar7, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_171(&Var0);
							iVar7++;
						}
						unk_0xA9D092030AE0E916();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835390.f_2775[iVar9] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1835390.f_2704[iVar9]++;
						}
						unk_0xA9D092030AE0E916();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_172(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xEE7624F5005BED95(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835390.f_2704[iVar9] < 12 || bVar10)
							{
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835390.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar9] < 12)
								{
									MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_169(uParam0->f_44))
									{
										iVar4 = unk_0x94F79AC74CA452DD(iVar2, Global_1835390.f_2709);
										if (iVar4 == 1)
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(iVar2, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(iVar2, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835390.f_2704[iVar9]++;
									}
								}
							}
							func_171(&Var0);
							iVar2++;
						}
					}
					unk_0xA9D092030AE0E916();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xA9D092030AE0E916();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar9);
					Global_1835390.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835390.f_2775[iVar9] == -1 && func_174())
				{
					if (Global_1835390.f_2704[iVar9] >= 1)
					{
						func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
					Global_1835390.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_163(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_163(int iParam0, int iParam1)//Position - 0xCC32
{
	int iVar0;
	
	if ((func_174() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_174())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xCD57
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0x03C36DFE4351B0CC(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_165(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xCE0D
{
	Global_1835008 = 1;
	func_196(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_166()//Position - 0xCE38
{
	if (unk_0x0F30C1F1717A6437() && !func_188())
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0xCE56
{
	if (unk_0x7F3CC73A6E3ECD53() || Global_1835008)
	{
		func_168();
		return 1;
	}
	return 0;
}

void func_168()//Position - 0xCE78
{
	if (func_143(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xB480C77695DDCB0B(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_91(&(Global_1835008.f_1));
	}
}

int func_169(int iParam0)//Position - 0xCEB3
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, char* sParam1, int iParam2)//Position - 0xCF11
{
	int iVar0;
	int iVar1;
	
	if (func_185(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()), 64);
		sParam1->f_32 = { func_23(unk_0x9EB17624F44A8DA4()) };
	}
	sParam1->f_59 = iParam2;
	if (func_169(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_171(var uParam0)//Position - 0xD01E
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_172(var uParam0, var uParam1)//Position - 0xD0CC
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_173(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xD0E7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (bParam5)
				{
					if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x0C2485FB694DCEB1(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xB9947ABF0431F783(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x1EA93F2CF7ED697D(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_174()//Position - 0xD21F
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0)//Position - 0xD23C
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_23(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x806EA87864D816ED();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_174())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_176(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar8, 0, 100))
				{
					func_172(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
					{
						if (func_174())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xEE7624F5005BED95(iVar6, &Var0);
									if (func_185(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_136(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_171(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_174() && iVar4 == 0)
						{
							if (Global_1835390.f_2704[iVar9] < 12)
							{
								func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								Global_1835390.f_2775[iVar9] = 0;
								Global_1835390.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xEE7624F5005BED95(0, &Var0);
							if (func_174() && (func_136(&Var0, &Var10) || func_136(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_137(Var0) && Global_1835390.f_2704[iVar9] < 12)
							{
								if (func_136(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_169(uParam0->f_44))
								{
									iVar7 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
									if (iVar7 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_185(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835390.f_2708)
								{
									if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar2]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_171(&Var0);
								unk_0xA9D092030AE0E916();
								func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar9] == -1 && func_174())
								{
									if (Global_1835390.f_2704[iVar9] >= 1)
									{
										func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
									Global_1835390.f_2704[iVar9]++;
								}
								return 0;
							}
							func_171(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_171(&Var0);
							unk_0xA9D092030AE0E916();
							func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar9] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar9] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
								Global_1835390.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_174())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar6, &Var0);
							if (Global_1835390.f_2704[iVar9] < 12 && Var0.f_96 > 1)
							{
								if (func_174() && iVar4 == iVar6)
								{
									if (!func_136(&(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
										Global_1835390.f_2704[iVar9]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var10) || func_136(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1835390[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_136(&Var0, &Var10))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_169(uParam0->f_44))
										{
											iVar7 = unk_0x94F79AC74CA452DD(iVar6, Global_1835390.f_2709);
											if (iVar7 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar2] = unk_0x94F79AC74CA452DD(iVar6, Global_1835390.f_2710[iVar2]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar2] = unk_0xCC9CBA19D9301571(iVar6, Global_1835390.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_171(&Var0);
							iVar6++;
						}
						unk_0xA9D092030AE0E916();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar9] == -1 && func_174())
						{
							if (Global_1835390.f_2704[iVar9] >= 1)
							{
								func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), Global_1835390[iVar9 /*901*/][(Global_1835390.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_170(uParam0, &(Global_1835390[iVar9 /*901*/][Global_1835390.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar9] = Global_1835390.f_2704[iVar9];
							Global_1835390.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_163(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDC3F
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (stats::leaderboards2_read_friends_by_row(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_177(var uParam0)//Position - 0xDCFB
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_23(unk_0x9EB17624F44A8DA4()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835390.f_2775[iVar10] = -1;
			Global_1835390.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_178(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_174(), 0, 0, 0))
			{
				func_172(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_174())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xEE7624F5005BED95(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xC80D31E4B587871C(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x94F79AC74CA452DD(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xCC9CBA19D9301571(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_171(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xEE7624F5005BED95(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar10] < 12)
							{
								if (func_174() && iVar6 == 0)
								{
									func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835390.f_2775[iVar10] = 0;
									Global_1835390.f_2704[iVar10]++;
								}
								if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_136(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835390.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_169(uParam0->f_44))
									{
										iVar5 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
										if (iVar5 == 1)
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_185(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835390.f_2708)
									{
										if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2710[iVar3]);
										}
										else
										{
											Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(0, Global_1835390.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835390.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835390.f_2704[iVar10]++;
						}
						if (!func_174())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_171(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xEE7624F5005BED95(iVar8, &Var1);
							if (Global_1835390.f_2704[iVar10] < 12 && Var1.f_96 > 1)
							{
								if (func_174() && iVar6 == iVar8)
								{
									if (!func_136(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
										Global_1835390.f_2704[iVar10]++;
									}
								}
								if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar10] < 12)
								{
									if (func_137(Var1) && !func_136(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_136(&Var1, &Var0))
										{
											if (Global_1835390.f_2775[iVar10] < 0)
											{
												Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_169(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(iVar8, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar3]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0x94F79AC74CA452DD(iVar8, Global_1835390.f_2710[iVar3]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0xCC9CBA19D9301571(iVar8, Global_1835390.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835390.f_2704[iVar10]++;
									}
								}
							}
							func_171(&Var1);
							iVar8++;
						}
						unk_0xA9D092030AE0E916();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835390.f_2775[iVar10] == -1 && func_174())
							{
								if (Global_1835390.f_2704[iVar10] >= 1)
								{
									func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
								Global_1835390.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1835390.f_2704[iVar10]++;
						}
						unk_0xA9D092030AE0E916();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_172(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xEE7624F5005BED95(iVar3, &Var1);
							if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835390.f_2704[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_169(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(0, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0xCC9CBA19D9301571(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835390.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar10]++;
											}
										}
										else if (Global_1835390.f_2704[iVar10] == 1 && Global_1835390.f_2775[iVar10] == -1)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
									else if (Global_1835390.f_2704[iVar10] < 12)
									{
										MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_169(uParam0->f_44))
										{
											iVar5 = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2709);
											if (iVar5 == 1)
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_185(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835390.f_2708)
										{
											if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar4]))
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0x94F79AC74CA452DD(iVar3, Global_1835390.f_2710[iVar4]);
											}
											else
											{
												Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0xCC9CBA19D9301571(iVar3, Global_1835390.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835390.f_2704[iVar10]++;
										}
									}
								}
							}
							func_171(&Var1);
							iVar3++;
						}
					}
					unk_0xA9D092030AE0E916();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2832), iVar10);
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar10] == -1 && func_174())
			{
				if (Global_1835390.f_2704[iVar10] >= 1)
				{
					func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), Global_1835390[iVar10 /*901*/][(Global_1835390.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_170(uParam0, &(Global_1835390[iVar10 /*901*/][Global_1835390.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar10] = Global_1835390.f_2704[iVar10];
				Global_1835390.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_163(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_178(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xEB36
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x74C475EB8E73D398(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x74C475EB8E73D398(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_179(var uParam0)//Position - 0xEBCE
{
	int iVar0;
	
	if (unk_0xDAA07938DBBD5115(Global_1835390.f_2826))
	{
		iVar0 = unk_0x12B40AAFCD236FA4(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_42), 5);
			func_149(Global_1835390.f_2826, -1);
		}
	}
}

bool func_180(var uParam0)//Position - 0xEC1E
{
	return uParam0->f_1;
}

void func_181(int iParam0)//Position - 0xEC2A
{
	if (unk_0x34D11AB5BA7922C2(iParam0))
	{
		unk_0x28E092B1E386EB67(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_182(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEC4A
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xC80D31E4B587871C(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xC80D31E4B587871C(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xC80D31E4B587871C(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xDEC0EB6EAE9BC575() && unk_0x15DBBAF9E2085C7A())
		{
			if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_23(unk_0x9EB17624F44A8DA4()) };
				if (unk_0xA84F967541249268(&Var4))
				{
					unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var4);
					if (!unk_0xAB019B170BF1309C(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
	unk_0xD07D5CD276368D36(*iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	if (bVar3)
	{
		unk_0x7E099EB35339C80D(sVar0);
		unk_0x4ADDDBC65685A05E(&Var2);
		unk_0x9748595E4799A2CF();
	}
	else
	{
		unk_0x7E099EB35339C80D(sVar0);
		unk_0x9748595E4799A2CF();
	}
	unk_0x271AA5469AF471B3();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0x872F1C1F8587CCC7(&iVar5, 7);
		unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
		unk_0xD07D5CD276368D36(*iParam1);
		unk_0xD07D5CD276368D36(iVar5);
		if (!unk_0xDEC0EB6EAE9BC575())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xE9F0A7BEA240607F())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x7E099EB35339C80D(sVar0);
		unk_0xDED957EFB8EBDAF3();
		unk_0x271AA5469AF471B3();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xC80D31E4B587871C(iParam2, 5))
		{
			if (unk_0x806EA87864D816ED() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xC80D31E4B587871C(iParam2, 6))
		{
			if (unk_0x851744C54849FD9D())
			{
				if (unk_0xFF3CFF3D74A5AD30())
				{
					if (unk_0xDEC0EB6EAE9BC575() && unk_0x15DBBAF9E2085C7A())
					{
						if (unk_0xFD6215BABFD843F2() && !unk_0xCD032B200A8FAC1A(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_23(unk_0x9EB17624F44A8DA4()) };
							if (unk_0xA84F967541249268(&Var6))
							{
								unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var6);
								if (!unk_0xAB019B170BF1309C(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0x872F1C1F8587CCC7(&iVar7, 7);
		unk_0x008F3E3CC076EA0E(iParam0, "SET_SLOT");
		unk_0xD07D5CD276368D36(*iParam1);
		unk_0xD07D5CD276368D36(iVar7);
		if (bVar3)
		{
			unk_0x7E099EB35339C80D(sVar0);
			unk_0x4ADDDBC65685A05E(&Var2);
			unk_0xDED957EFB8EBDAF3();
		}
		else
		{
			unk_0x7E099EB35339C80D(sVar0);
			unk_0xDED957EFB8EBDAF3();
		}
		unk_0x271AA5469AF471B3();
		*iParam1++;
	}
}

void func_183(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xEF20
{
	int iVar0;
	
	unk_0x008F3E3CC076EA0E(iParam0, "SET_TITLE");
	unk_0x7E099EB35339C80D(sParam1);
	unk_0x9748595E4799A2CF();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x7E099EB35339C80D(uParam2[iVar0 /*6*/]);
		unk_0x9748595E4799A2CF();
		iVar0++;
	}
	unk_0x271AA5469AF471B3();
}

void func_184(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xEF62
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x7E099EB35339C80D(sParam1);
	if (!unk_0xAB019B170BF1309C(sParam2))
	{
		unk_0xA6D2B267C377D7B2(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				unk_0x4ADDDBC65685A05E(sParam3);
			}
		}
		else if (!unk_0xAB019B170BF1309C(sParam3))
		{
			unk_0xA6D2B267C377D7B2(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				unk_0x4ADDDBC65685A05E(sParam3);
			}
		}
		else if (!unk_0xAB019B170BF1309C(sParam3))
		{
			unk_0xA6D2B267C377D7B2(sParam3);
		}
		unk_0x6223D539BCD39E76(iParam5);
	}
	unk_0x9748595E4799A2CF();
	unk_0x271AA5469AF471B3();
}

int func_185(int iParam0)//Position - 0xEFF2
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0, int iParam1)//Position - 0xF014
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_DISPLAY_TYPE");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

int func_187()//Position - 0xF031
{
	return unk_0xD704C81492296A37("SC_LEADERBOARD");
}

bool func_188()//Position - 0xF041
{
	return func_189(unk_0x9EB17624F44A8DA4());
}

int func_189(int iParam0)//Position - 0xF051
{
	switch (func_190(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_190(int iParam0)//Position - 0xF0B1
{
	return Global_1595693[iParam0 /*680*/].f_196;
}

void func_191(int iParam0)//Position - 0xF0C4
{
	Global_1315692 = iParam0;
}

void func_192(int iParam0)//Position - 0xF0D2
{
	Global_1359035.f_1079 = iParam0;
}

void func_193()//Position - 0xF0E3
{
	func_195();
	func_194(4, -1);
	func_194(6, -1);
	func_194(7, -1);
	func_194(3, -1);
	func_194(1, -1);
	func_194(2, -1);
	func_194(11, -1);
	func_194(13, -1);
	func_194(14, -1);
	func_194(16, -1);
}

void func_194(int iParam0, int iParam1)//Position - 0xF12F
{
	unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357530.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_195()//Position - 0xF165
{
	Global_2512808.f_4500 = 0;
}

void func_196(var uParam0, bool bParam1, bool bParam2)//Position - 0xF175
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

int func_197(int iParam0, bool bParam1)//Position - 0xF1B2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x4B64A8D052027742() && Global_1840922.f_2 > 0)
	{
		func_91(&Global_1840922);
		func_91(&(Global_1840922.f_49));
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_205(0);
	}
	Global_1840922.f_2 = unk_0x4B64A8D052027742();
	iVar1 = -1;
	if (unk_0xFD6215BABFD843F2())
	{
		if (unk_0x5E0DB1D22F6E9304() == 0)
		{
			iVar1 = unk_0xFDE2FB8906E5B1C3();
		}
	}
	if ((unk_0xFD6215BABFD843F2() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_203() && unk_0xDEC0EB6EAE9BC575()))
	{
		if (unk_0x961852460B030BEE())
		{
			func_200(&(Global_1840922.f_3), func_202(&(Global_1840922.f_3)));
			if (!unk_0xC80D31E4B587871C(*iParam0, 4))
			{
				unk_0x872F1C1F8587CCC7(iParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_198(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_203())
			{
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xC80D31E4B587871C(*iParam0, 0))
			{
				if (!unk_0xF2B58F79D29425B4(2, 201))
				{
					unk_0x872F1C1F8587CCC7(iParam0, 0);
				}
			}
			else if (unk_0x58F436C557A0FD7A(2, 201))
			{
				func_91(&(Global_1840922.f_49));
				func_91(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_205(0);
				return 1;
			}
		}
	}
	else
	{
		func_200(&(Global_1840922.f_3), func_202(&(Global_1840922.f_3)));
		if ((func_180(&(Global_1840922.f_49)) && !func_143(&(Global_1840922.f_49), 2000, 1)) && !unk_0xDEC0EB6EAE9BC575())
		{
			unk_0x872F1C1F8587CCC7(iParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_198(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xC80D31E4B587871C(*iParam0, 3))
		{
			if (!unk_0xC80D31E4B587871C(*iParam0, 1))
			{
				unk_0xB50D7608173794C6(0);
				unk_0x872F1C1F8587CCC7(iParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_198(&(Global_1840922.f_3), 0);
			}
		}
		if (func_180(&Global_1840922))
		{
			if (!func_143(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xDEC0EB6EAE9BC575())
				{
					if (unk_0x73955C3D74019930())
					{
						ui::_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x04D7390E1D7464B7())
					{
						if (!unk_0xC80D31E4B587871C(*iParam0, 0))
						{
							if (!unk_0xF2B58F79D29425B4(2, 201))
							{
								unk_0x872F1C1F8587CCC7(iParam0, 0);
							}
						}
						else if (unk_0x58F436C557A0FD7A(2, 201))
						{
							func_91(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_205(0);
							return 1;
						}
					}
				}
				else
				{
					func_91(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else if (unk_0xC80D31E4B587871C(*iParam0, 3))
			{
				if (unk_0x73955C3D74019930())
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (!unk_0xF2B58F79D29425B4(2, 201))
					{
						unk_0x872F1C1F8587CCC7(iParam0, 0);
					}
				}
				else if (unk_0x58F436C557A0FD7A(2, 201))
				{
					func_91(&(Global_1840922.f_49));
					func_91(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x73955C3D74019930())
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x04D7390E1D7464B7())
				{
					if (!unk_0xC80D31E4B587871C(*iParam0, 0))
					{
						if (!unk_0xF2B58F79D29425B4(2, 201))
						{
							unk_0x872F1C1F8587CCC7(iParam0, 0);
						}
					}
					else if (unk_0x58F436C557A0FD7A(2, 201))
					{
						func_91(&(Global_1840922.f_49));
						func_91(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_205(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_198(var uParam0, bool bParam1)//Position - 0xF629
{
	func_199(uParam0);
	if (bParam1)
	{
		func_205(0);
	}
	uParam0->f_35 = 1;
}

void func_199(var uParam0)//Position - 0xF646
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_200(var uParam0, int iParam1)//Position - 0xF661
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_201(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0x6223D539BCD39E76(uParam0->f_34);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x854FACC4E5F40C82(&(uParam0->f_17));
			unk_0x6223D539BCD39E76(uParam0->f_33);
			unk_0x6223D539BCD39E76(uParam0->f_34);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0x854FACC4E5F40C82(&(uParam0->f_17));
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0xFD1DB5DD208735A3(uParam0->f_33, 70);
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		else
		{
			unk_0xD4D18C50DC965157(&(uParam0->f_1));
			unk_0xC268E592F3FB57EE(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_201(var uParam0)//Position - 0xF75F
{
	uParam0->f_35 = 0;
}

int func_202(var uParam0)//Position - 0xF76C
{
	return uParam0->f_35;
}

int func_203()//Position - 0xF778
{
	if (func_204())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_204()//Position - 0xF798
{
	return Global_2457327;
}

void func_205(bool bParam0)//Position - 0xF7A4
{
	unk_0x6F9D12DB7F437EA4();
	if (bParam0)
	{
		unk_0xC01EC70746CD8A05();
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)//Position - 0xF7B9
{
	if (!iLocal_166)
	{
		func_218(&(uParam0->f_72), bParam1);
		iLocal_166 = 1;
		func_322(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_215(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_207(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_207(var uParam0)//Position - 0xF822
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_185(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_23(unk_0x9EB17624F44A8DA4()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_214(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_172(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0CA30140FFC760AC(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_213(uParam0->f_44, iVar4))
					{
						if (func_212(uParam0->f_44, 4, iVar4))
						{
							unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xEE7624F5005BED95(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_137(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_213(uParam0->f_44, iVar4))
								{
									if (func_212(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = unk_0x94F79AC74CA452DD(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = unk_0xCC9CBA19D9301571(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xA9D092030AE0E916();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_211();
				if (Global_1835013.f_4)
				{
					if (func_210(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xE22885E349E8965D(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x3A711520F83BAE98() && func_209())
			{
				if (func_208())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_210(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				unk_0xE22885E349E8965D(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_172(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xDB5FE4EE25CDACCD(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xEE7624F5005BED95(0, &Var0);
						if (unk_0x74C475EB8E73D398(&(Var0.f_13), ""))
						{
							Global_979643.f_1 = -1;
						}
						else
						{
							Global_979643.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979643.f_1 = -1;
					}
					unk_0xA9D092030AE0E916();
				}
				else
				{
					Global_979643.f_1 = -1;
				}
				Global_1835013 = 999;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_208()//Position - 0xFC46
{
	return unk_0xC80D31E4B587871C(Global_971064.f_8, 1);
}

var func_209()//Position - 0xFC59
{
	return Global_2455152.f_3;
}

int func_210(int iParam0)//Position - 0xFC67
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0xFD38
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_212(int iParam0, int iParam1, int iParam2)//Position - 0xFD98
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xA87731E5249F4E3E(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)//Position - 0xFE9A
{
	if (unk_0x9F44B8E99C907628(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_214(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xFEF5
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0x5D0FE7B4F9908F64(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x26CCC9AA614AFC4B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xC9ECAE03310BD820(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)//Position - 0xFFA9
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x5616476F69B90F14())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_217(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_216(190, 131, 0, 0f, 1);
		func_216(190, 103, iLocal_106[1], 0f, 0);
		func_216(190, 99, iLocal_106[2], 0f, 0);
		func_216(190, 109, iLocal_106[3], 0f, 0);
		func_216(190, 106, iLocal_106[5], 0f, 0);
		func_216(190, 2, iLocal_106[10], 0f, 0);
		func_216(190, 107, iLocal_106[8], 0f, 0);
		func_216(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_216(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x1009B
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0xEC4FA25E0FA458DA(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0CA30140FFC760AC(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_212(iParam0, 4, iVar1))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x9F44B8E99C907628(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_217(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x101B6
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
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0x15DBBAF9E2085C7A())
			{
				Var2 = { func_23(unk_0x9EB17624F44A8DA4()) };
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

void func_218(var uParam0, bool bParam1)//Position - 0x102EA
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_219(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_219(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x10312
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xAB019B170BF1309C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_225(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_55 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xAB019B170BF1309C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_224(Global_4456448.f_143970) || func_221(Global_4456448.f_143970))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0xAB019B170BF1309C(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x0EE72DB1CD8A3B86(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0xAB019B170BF1309C(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835390.f_2708)
	{
		if (unk_0xC80D31E4B587871C(Global_1835390.f_2769, Global_1835390.f_2710[iVar2]))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1835390.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835390.f_2826 = func_220(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_220(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x147E8
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_185(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x8B948C59217A295D(&cVar0);
}

var func_221(int iParam0)//Position - 0x1485A
{
	return (func_223(iParam0) || func_222(iParam0));
}

bool func_222(int iParam0)//Position - 0x14874
{
	return iParam0 == 44;
}

bool func_223(int iParam0)//Position - 0x14881
{
	return iParam0 == 45;
}

bool func_224(int iParam0)//Position - 0x1488E
{
	return iParam0 == 12;
}

struct<6> func_225(int iParam0)//Position - 0x1489B
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_226()//Position - 0x14A24
{
	if ((((((((Global_4456448.f_50256 == 1 || Global_4456448.f_50256 == 3) || Global_4456448.f_50256 == 5) || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 19) || Global_4456448.f_50256 == 8) || Global_4456448.f_50256 == 9) || Global_4456448.f_50256 == 11) || Global_4456448.f_50256 == 13)
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0, int iParam1)//Position - 0x14AD5
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xE8C126B7ADBB9D63(2, 201) || uParam0->f_8)
		{
			if (!func_411(&(uParam0->f_5)))
			{
				func_425(&(uParam0->f_5));
				func_228(uParam0, 1051260355);
			}
		}
		if (func_411(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0,33f)
			{
				func_412(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		if (!func_411(&(uParam0->f_5)))
		{
			func_425(&(uParam0->f_5));
			func_228(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0,33f)
		{
			func_412(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_228(var uParam0, float fParam1)//Position - 0x14BD8
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SHARD_ANIM_OUT");
	unk_0xD07D5CD276368D36(uParam0->f_9);
	unk_0x9499D7329FB840A2(fParam1);
	unk_0x271AA5469AF471B3();
}

void func_229(int iParam0)//Position - 0x14BFE
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_230(int iParam0, int iParam1)//Position - 0x14C77
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_231()//Position - 0x14D44
{
	int iVar0;
	
	if (!bLocal_187)
	{
		iVar0 = (unk_0x63A6486593EC7EC3(0, 65535) % 3);
	}
	else
	{
		iLocal_201++;
		iVar0 = (iLocal_201 % 2);
	}
	return iVar0;
}

void func_232(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x14D74
{
	char* sVar0;
	
	sVar0 = func_233(iParam4);
	if (iParam4 != 5)
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "RESET_MOVIE");
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(*uParam0, sVar0);
	unk_0x7E099EB35339C80D("STRING");
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x9748595E4799A2CF();
	func_12(sParam2);
	unk_0x271AA5469AF471B3();
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_233(int iParam0)//Position - 0x14DD4
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x3A711520F83BAE98())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_234(var uParam0, int iParam1)//Position - 0x14E43
{
	unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_SCORES");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

int func_235(int iParam0)//Position - 0x14E61
{
	iParam0->f_2 = { 0f, -2,3685f, -0,2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0x452336926718D62A(iParam0);
	}
	return 1;
}

void func_236(int iParam0)//Position - 0x14EB1
{
	unk_0xF10DA1539629CC3F(iLocal_77, iLocal_75, 1500, 1, 1);
	unk_0x7849794435F39D49(iLocal_78, true);
	unk_0xF10DA1539629CC3F(iLocal_77, iLocal_78, 8000, 1, 1);
	unk_0x1F2D9CBE337F9DB2(iLocal_80, iParam0, -0,0301f, 1,498f, 0,7435f, 1);
	unk_0xAA7DE567B3D55DDB(iLocal_80, iParam0, 0,0557f, -1,4905f, 0,4958f, 1);
	unk_0xE43C573FE3C5D758(iLocal_80, 35f);
}

void func_237(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x14F15
{
	bool bVar0;
	
	if (!unk_0xCED06F4C77332FC6(iLocal_75))
	{
		bVar0 = false;
		func_318(uParam0);
		if (!bLocal_179)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0x3E80C2F7BC665259(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0xC80D31E4B587871C(Global_104516, 3))
						{
							func_409("DARTS_INSTR_W", -1);
							unk_0x872F1C1F8587CCC7(&Global_104516, 3);
						}
						func_322(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0xC80D31E4B587871C(Global_104516, 4))
						{
							func_409("DARTS_INSTR_B", -1);
							unk_0x872F1C1F8587CCC7(&Global_104516, 4);
						}
						func_322(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0x3E80C2F7BC665259(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0xCED06F4C77332FC6(iLocal_84) && uParam0->f_3 == 2)
			{
				func_317(uParam3);
			}
		}
		else
		{
			func_315(uParam3, iLocal_30);
		}
		func_314(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_311(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_303(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_296(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF2B58F79D29425B4(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_295(iLocal_31, 0);
				if (((((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_409("DARTS_LEVEL", -1);
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_18940.f_6), iLocal_199);
						func_322(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_322(&(uParam3->f_666), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_322(&(uParam3->f_666), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0x84CDD933AFA470D2();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_174)
				{
					if (!func_411(iParam4))
					{
						func_282(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_281(iLocal_170[(1 - iLocal_30)]);
						func_412(iParam4);
						iLocal_174 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_197 = 0;
				func_280(&(uParam0->f_422), &(uParam0->f_249));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (system::timera() > unk_0x63A6486593EC7EC3(1250, 2500))
			{
				func_280(&(uParam0->f_422), &(uParam0->f_249));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_264(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_263(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_246(uParam0, uParam3);
			break;
		
		case 5:
			func_239(uParam0, uParam2, uParam3);
			if (func_411(iParam4))
			{
				func_412(iParam4);
			}
			break;
		
		case 6:
			func_238(uParam0, uParam3);
			break;
	}
}

void func_238(var uParam0, var uParam1)//Position - 0x15375
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_197++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_181 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_246(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_180)
			{
				if (unk_0x6ADD12BF4D6D2587(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x452336926718D62A(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				vVar0 = { unk_0x9EA50C5EC175E58E(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0x6ADD12BF4D6D2587(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xBD8D47FDC6902B2D(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_246(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x5E35CF35E65D69B9(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_40, 1, true, 0);
					vVar0 = { unk_0x9EA50C5EC175E58E(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0xBD8D47FDC6902B2D(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					fVar1 = unk_0x5B811202FCBE9E9D(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0x59AF3B40AE222194(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_280(&(uParam0->f_422), &(uParam0->f_249));
			func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_322(&(uParam1->f_666), 2, 0);
				func_322(&(uParam1->f_666), 3, 0);
				func_322(&(uParam1->f_666), 4, 0);
				func_322(&(uParam1->f_666), 5, 1);
				system::settimerb(0);
			}
			func_246(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0x5E35CF35E65D69B9(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, vLocal_40, 1, true, 0);
							vVar0 = { unk_0x9EA50C5EC175E58E(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0x6ADD12BF4D6D2587(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0xBD8D47FDC6902B2D(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], vVar0, 1, 0, 0, 1);
							}
							fVar3 = unk_0x5B811202FCBE9E9D(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0x59AF3B40AE222194(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_197 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_239(var uParam0, var uParam1, var uParam2)//Position - 0x157FE
{
	vector3 vVar0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_245();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_243("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_244("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_244("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_243("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_244("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			system::settimerb(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0xE8C126B7ADBB9D63(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_436)
				{
					iLocal_195 = 0;
				}
				vVar0 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_49(vVar0);
			}
			if (unk_0xE8C126B7ADBB9D63(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_436 - 1);
				}
				vVar0 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_49(vVar0);
			}
			if (unk_0xE8C126B7ADBB9D63(2, 202))
			{
				vVar0 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_51(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0xE8C126B7ADBB9D63(2, 201))
			{
				iLocal_171 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0xE8C126B7ADBB9D63(2, 201) || (iLocal_181 && bLocal_180))
			{
				iLocal_171 = 1;
			}
			if ((unk_0xE8C126B7ADBB9D63(2, 189) || unk_0xE8C126B7ADBB9D63(2, 190)) && uParam0->f_248 == 1)
			{
				vVar0 = { unk_0xB3328BA8976B416C(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], 1) };
				func_51(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_176)
				{
					if (func_242(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_176 = 1;
					}
				}
				else if ((unk_0x53C562FD2B9E3AB0() % 500) < 50)
				{
				}
			}
			else if (!iLocal_176)
			{
				if (func_241(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_176 = 1;
				}
			}
			else if ((unk_0x53C562FD2B9E3AB0() % 500) < 50)
			{
			}
			if (iLocal_171 || system::timerb() > 2000)
			{
				iLocal_181 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_235(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_240(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x23A4CE7F9EBB02D4(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_424(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_404();
				if (!bLocal_180)
				{
					unk_0x321C68A0C8D65821();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_177 = 0;
				iLocal_174 = 0;
				iLocal_176 = 0;
				iLocal_171 = 0;
				iLocal_195 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_240(var uParam0, int iParam1, int iParam2)//Position - 0x15C17
{
	unk_0x008F3E3CC076EA0E(*uParam0, "ADD_DARTS_SCORE");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0x271AA5469AF471B3();
}

int func_241(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15C3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
		}
	}
	iVar1 = unk_0x63A6486593EC7EC3(0, 100);
	iVar2 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xC80D31E4B587871C(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_242(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15E38
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
		}
	}
	iVar1 = unk_0x63A6486593EC7EC3(0, 100);
	iVar2 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xC80D31E4B587871C(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x6ADD12BF4D6D2587(func_487()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xC80D31E4B587871C(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xFC1458A37D98B502(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_243(char* sParam0, int iParam1, int iParam2)//Position - 0x16091
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_244(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x160AA
{
	iParam3 = iParam3;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x4D0B431E65A53BFC(iParam2, 1);
}

void func_245()//Position - 0x160C9
{
	unk_0x7849794435F39D49(iLocal_84, true);
	unk_0x7849794435F39D49(iLocal_75, false);
}

void func_246(var uParam0, var uParam1)//Position - 0x160DF
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_258(uParam0);
		func_322(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_256(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_256(0);
					iLocal_106[1]++;
				}
			}
			func_322(&(uParam1->f_666), 2, 0);
			func_322(&(uParam1->f_666), 3, 0);
			func_322(&(uParam1->f_666), 4, 0);
			func_322(&(uParam1->f_666), 5, 1);
			func_258(uParam0);
			func_322(&(uParam1->f_666), 5, 0);
			system::settimerb(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_322(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_322(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_176)
			{
				if (func_255(iLocal_170[(1 - iLocal_30)]))
				{
					iLocal_176 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			system::settimera(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_322(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 1);
					func_256(0);
					iLocal_106[1]++;
				}
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_253(iLocal_170[iLocal_30]))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					func_252(iLocal_170[(1 - iLocal_30)]);
					iLocal_176 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_251(iLocal_170[1], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 0);
					func_256(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_249(iLocal_170[iLocal_30], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_322(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_322(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_175)
						{
							func_248(iLocal_170[1]);
							iLocal_175 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_322(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_247("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_314(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			system::settimera(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_322(&(uParam1->f_666), 3, 0);
			func_322(&(uParam1->f_666), 2, 0);
			func_322(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_247(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1667C
{
	iParam4 = iParam4;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	unk_0x4D0B431E65A53BFC(iParam3, 1);
}

void func_248(int iParam0)//Position - 0x166A1
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_249(int iParam0, bool bParam1)//Position - 0x166BF
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x6ADD12BF4D6D2587(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_250()//Position - 0x1673E
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)//Position - 0x1675F
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x6ADD12BF4D6D2587(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0xFC1458A37D98B502(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x167DE
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			iVar1 = 1;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x16821
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_254(var uParam0, int iParam1)//Position - 0x1684D
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_255(int iParam0)//Position - 0x16862
{
	int iVar0;
	
	if (iParam0 == unk_0xFC1458A37D98B502())
	{
		iVar0 = 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_256(int iParam0)//Position - 0x1688E
{
	switch (iParam0)
	{
		case 0:
			Global_104555.f_18940++;
			func_257("DARTS_STAT_NUM_BULLSEYES", Global_104555.f_18940);
			break;
		
		case 1:
			Global_104555.f_18940.f_1++;
			func_257("DARTS_STAT_NUM_180S", Global_104555.f_18940.f_1);
			break;
		
		case 2:
			Global_104555.f_18940.f_2++;
			func_257("DARTS_STAT_NUM_WINS", Global_104555.f_18940.f_2);
			break;
		
		case 3:
			Global_104555.f_18940.f_3++;
			func_257("DARTS_STAT_NUM_LOSS", Global_104555.f_18940.f_3);
			break;
		
		case 4:
			Global_104555.f_18940.f_4++;
			func_257("DARTS_STAT_DARTS_THROWN", Global_104555.f_18940.f_4);
			break;
		
		case 5:
			Global_104555.f_18940.f_5++;
			func_257("DARTS_STAT_NUM_GAMES", Global_104555.f_18940.f_5);
			break;
		
		case 7:
			Global_104555.f_18940.f_7 = (system::to_float(Global_104555.f_18940.f_2) / system::to_float(Global_104555.f_18940.f_5));
			break;
		
		case 8:
			Global_104555.f_18940.f_8 = (system::to_float(Global_104555.f_18940.f_4) / system::to_float(Global_104555.f_18940.f_5));
			break;
	}
}

void func_257(char* sParam0, var uParam1)//Position - 0x16A05
{
}

void func_258(var uParam0)//Position - 0x16A0D
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_256(5);
	unk_0x321C68A0C8D65821();
	unk_0x3E80C2F7BC665259(1);
	if (unk_0x771D0F8F56A5FE6C(func_405(2)))
	{
		unk_0xE02E32C69260FBB7(func_405(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_245();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_185 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_256(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_256(3);
		iLocal_106[9]++;
	}
	func_256(7);
	func_425(&(uParam0->f_254));
	if (func_260(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_259(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_203 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_203 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xE859EF37EA7362D3(func_405(3));
	iLocal_182 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_259(bool bParam0)//Position - 0x16BB6
{
	char* sVar0;
	
	unk_0xA3A57BA8F775CAFF(0);
	switch (func_85())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xA212266606E6ECA8(sVar0);
}

int func_260(var uParam0)//Position - 0x16C29
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_261(var uParam0, var uParam1, bool bParam2)//Position - 0x16CEB
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0,0041f);
	vVar3.z = (vVar3.z + 0,0002f);
	fVar1 = unk_0xAF3D7D969F2C195C(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_262(vVar3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0,009f)
	{
		unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0,021f)
	{
		unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0,3f)
	{
		unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0,226f)
	{
		unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0,1285f && fVar0 < 0,1405f)
		{
			uParam0->f_21 = 3;
			unk_0x23A4CE7F9EBB02D4(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0,2132f && fVar0 < 0,226f)
		{
			uParam0->f_21 = 2;
			unk_0x23A4CE7F9EBB02D4(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8,1f) && fVar1 >= (fVar2 - 9,9f)) || (fVar1 >= (fVar2 + 8,1f) && fVar1 <= (fVar2 + 9,9f)))
				{
					unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_262(vector3 vParam0)//Position - 0x16F1F
{
	return system::sqrt(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_263(var uParam0)//Position - 0x16F3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0,008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0,008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0,008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0,008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_264(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17000
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_265("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0x46C19C2753391FBF();
	vVar1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8,5f, 8,5f, 8,5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0,04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		vVar0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		unk_0xBD8D47FDC6902B2D(*uParam0, vVar0, 1, 0, 0, 1);
		return 1;
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0xBD8D47FDC6902B2D(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0x59AF3B40AE222194(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_265(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17120
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_276(&Var0);
			break;
		
		case 1:
			func_275(&Var0);
			break;
		
		case 5:
			func_274(&Var0);
			break;
		
		case 6:
			func_273(&Var0);
			break;
		
		case 7:
			func_272(&Var0);
			break;
		
		case 8:
			func_271(&Var0);
			break;
		
		case 9:
			func_270(&Var0);
			break;
	}
	if (func_268())
	{
		unk_0x5A66A86A47AC3B57(iParam5);
		if (iParam3 == 1)
		{
			unk_0xEFB3EC0CDCC33841(sParam0, sParam1, func_267(Var0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xEFB3EC0CDCC33841(sParam0, sParam1, func_267(Var0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x5A66A86A47AC3B57(4);
	}
}

float func_266(float fParam0)//Position - 0x17225
{
	return (fParam0 + fLocal_13);
}

float func_267(float fParam0)//Position - 0x17232
{
	return (fParam0 + fLocal_12);
}

int func_268()//Position - 0x1723F
{
	if (func_269())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_269()//Position - 0x1727E
{
	return Global_1312438;
}

void func_270(var uParam0)//Position - 0x1728A
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_271(var uParam0)//Position - 0x172A4
{
	uParam0->f_7 = 2;
}

void func_272(var uParam0)//Position - 0x172B1
{
	uParam0->f_7 = 5;
}

void func_273(var uParam0)//Position - 0x172BE
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_274(var uParam0)//Position - 0x172DB
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_275(var uParam0)//Position - 0x172F8
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_276(var uParam0)//Position - 0x17321
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17349
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0x5B811202FCBE9E9D(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0,14f;
		fVar4 = unk_0x5B811202FCBE9E9D(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0,1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0,218f;
		}
		else
		{
			fVar3 = 0,18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x63A6486593EC7EC3(0, 100);
		iVar6 = unk_0x63A6486593EC7EC3(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x5B811202FCBE9E9D(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x5B811202FCBE9E9D(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x63A6486593EC7EC3(0, 100);
		iVar6 = unk_0x63A6486593EC7EC3(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-0,25f, 0,25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-0,07f, 0,07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-0,15f, 0,15f);
		}
		else
		{
			fVar0 = unk_0x5B811202FCBE9E9D(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x5B811202FCBE9E9D(-1f, -0,3f);
			}
			else
			{
				fVar0 = unk_0x5B811202FCBE9E9D(0,3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (system::sin(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0,23f;
	uParam0->f_8.f_2 = (system::cos(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0,0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0,0002f);
	if (*uParam2 == 6)
	{
		func_278(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_278(uParam0);
		*uParam0 = unk_0x5E35CF35E65D69B9(uParam0->f_1, vLocal_40, 0, false, 0);
		fVar1 = unk_0x5B811202FCBE9E9D(0f, 90f);
		vVar7 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, vLocal_41) };
		vVar8 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0xA67DD8488EBA5F6D((vVar7.x - vVar8.x), (vVar7.y - vVar8.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0x59AF3B40AE222194(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { vLocal_41 };
		*uParam2 = 3;
		unk_0x7CC4363AEEF7EF34(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_278(var uParam0)//Position - 0x176A2
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0,08f;
	uParam0->f_8.f_1 = -0,213f;
	vVar0 = { vLocal_41 - uParam0->f_8 };
	fVar1 = system::vmag(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0xA67DD8488EBA5F6D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0xD12937A416ED6282(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	vVar0 = { vLocal_41 - uParam0->f_11 };
	fVar1 = system::vmag(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
}

int func_279(var uParam0)//Position - 0x1774E
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_280(var uParam0, var uParam1)//Position - 0x17782
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_250())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_281(int iParam0)//Position - 0x178D4
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_282(int iParam0)//Position - 0x17900
{
	func_283(iParam0, 0f);
}

void func_283(int iParam0, float fParam1)//Position - 0x1790F
{
	iParam0->f_1 = (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) + fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_284(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1793D
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (system::timerb() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_293(uParam0, uParam1, 0))
					{
						unk_0x7CC4363AEEF7EF34(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0xE8C126B7ADBB9D63(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_292(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_291();
						}
						func_290(uParam0, iParam6);
						func_289(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x5B811202FCBE9E9D(0,02f, 0,1f);
						iVar1 = unk_0x63A6486593EC7EC3(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0,33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0,33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0x5B811202FCBE9E9D(0,02f, 0,1f);
						iVar1 = unk_0x63A6486593EC7EC3(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0,29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0,29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0x84CDD933AFA470D2();
							iLocal_52 = 1;
							system::settimerb(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (system::timerb() > 25)
				{
					if (func_293(uParam0, uParam1, 1))
					{
						unk_0x7CC4363AEEF7EF34(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_285(uParam0))
			{
				if (!iLocal_55)
				{
					func_292(uParam0, *uParam2);
				}
				else
				{
					func_291();
					func_290(uParam0, iParam6);
					func_289(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				system::settimerb(0);
			}
			break;
	}
	return 0;
}

int func_285(var uParam0)//Position - 0x17BB2
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x869308DF4F5FB0C3(2, 220);
	fVar2 = unk_0x869308DF4F5FB0C3(2, 221);
	iLocal_91 = system::round(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x53C562FD2B9E3AB0();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = system::round(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x53C562FD2B9E3AB0();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (unk_0x53C562FD2B9E3AB0() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = unk_0x53C562FD2B9E3AB0();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = system::round(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0,066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (system::to_float(iLocal_95) / system::to_float(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (system::to_float(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (system::to_float(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0,066477f && fLocal_101 == 0f)
			{
				func_288();
			}
			else if (fLocal_99 <= 0,066477f && fLocal_101 < 0,06f)
			{
				func_287();
			}
			else
			{
				func_286();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_286()//Position - 0x17D70
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_287()//Position - 0x17D8A
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_288()//Position - 0x17DA3
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_289(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x17DBD
{
	vector3 vVar0;
	
	vVar0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	unk_0x80EDC33C2A4DA2CC(vVar0, &Local_38, &(Local_38.f_1));
	if ((unk_0x53C562FD2B9E3AB0() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_265("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_290(var uParam0, int iParam1)//Position - 0x17E6C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0,033367f;
	bVar7 = false;
	fVar3 = unk_0xD65AC54B4C6897F9(2, 218);
	fVar4 = unk_0xD65AC54B4C6897F9(2, 219);
	fVar5 = unk_0x869308DF4F5FB0C3(2, 220);
	fVar6 = unk_0x869308DF4F5FB0C3(2, 221);
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xE97272C977DEADD3(fVar5) > unk_0xE97272C977DEADD3(fVar3) || unk_0xE97272C977DEADD3(fVar6) > unk_0xE97272C977DEADD3(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x7A3414CFDD1FDFA8())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x098C8C3D1E0C0518())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xF2B58F79D29425B4(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0,06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0,06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0,03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0,03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0,33f, 0,33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0,29f, 0,29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0x4C4813CAAD70E814(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0,33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0,33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0,29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0,29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0x5B811202FCBE9E9D((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x5B811202FCBE9E9D((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x5B811202FCBE9E9D((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x5B811202FCBE9E9D((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0,29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0,29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0,5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0,06f;
			fVar9 = 0,08f;
		}
		else
		{
			fVar8 = 0,02f;
			fVar9 = 0,03f;
		}
		fVar2 = unk_0x5B811202FCBE9E9D((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x5B811202FCBE9E9D((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x5B811202FCBE9E9D((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x5B811202FCBE9E9D((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0,33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0,33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_291()//Position - 0x1825F
{
	if (unk_0xF2B58F79D29425B4(2, 227))
	{
		fLocal_47 = 0,3f;
	}
	else
	{
		fLocal_47 = 0,1f;
	}
	if (unk_0xF2B58F79D29425B4(2, 229))
	{
		if (bLocal_49)
		{
			if (system::timera() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0,1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0,03f;
			fLocal_44 = 0,05f;
			fLocal_47 = 0,1f;
			system::settimera(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_294("DARTS_FST_HLP") && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_CLOCK")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!unk_0xC80D31E4B587871C(Global_104516, 1))
			{
				func_409("DARTS_SHT_USE", -1);
				unk_0x872F1C1F8587CCC7(&Global_104516, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0,1f;
		bLocal_49 = false;
	}
}

void func_292(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x18371
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + unk_0x5B811202FCBE9E9D(-0,1f, 0,1f));
	vVar0.z = (vVar0.z + unk_0x5B811202FCBE9E9D(-0,1f, 0,1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_41 };
}

int func_293(var uParam0, var uParam1, bool bParam2)//Position - 0x183C5
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		unk_0xBD8D47FDC6902B2D(*uParam0, vLocal_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x5E35CF35E65D69B9(uParam0->f_1, vLocal_40, 0, false, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0,1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_278(uParam0);
	fVar4 = unk_0x5B811202FCBE9E9D(0f, 90f);
	vVar1 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, vLocal_41) };
	vVar2 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0,0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = unk_0xA67DD8488EBA5F6D((vVar1.x - vVar2.x), (vVar1.y - vVar2.y));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0x59AF3B40AE222194(*uParam0, uParam0->f_17, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0x80EDC33C2A4DA2CC(vVar0, &Local_39, &(Local_39.f_1));
	return 1;
}

int func_294(char* sParam0)//Position - 0x184FC
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_295(int iParam0, int iParam1)//Position - 0x1850F
{
	if (iParam0 == 0)
	{
		if (!unk_0xC80D31E4B587871C(Global_104516, 9))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_AIM_HLP", -1);
				unk_0x872F1C1F8587CCC7(&Global_104516, 9);
			}
		}
		else if (iParam1 && !unk_0xC80D31E4B587871C(Global_104516, 7))
		{
			if ((!func_294("DARTS_AIM_HLP") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_CLOCK", -1);
				unk_0x872F1C1F8587CCC7(&Global_104516, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(Global_104516, 8))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_STD_HLP", -1);
				unk_0x872F1C1F8587CCC7(&Global_104516, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_294("DARTS_SHT_USE")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
		{
			if (!unk_0xC80D31E4B587871C(Global_104516, 2))
			{
				func_409("DARTS_FST_HLP", -1);
				unk_0x872F1C1F8587CCC7(&Global_104516, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18664
{
	vector3 vVar0;
	
	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_299(iParam0) };
			*uParam3 = { unk_0x3F90543934DCD7E6(*uParam1, vVar0) };
			func_298(*uParam3);
			system::settimerb(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (system::timerb() > 3000 || unk_0xE8C126B7ADBB9D63(2, 201))
			{
				func_297();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_297()//Position - 0x186D5
{
	unk_0xF10DA1539629CC3F(iLocal_75, iLocal_87, 2000, 1, 1);
	unk_0x02934BABFD4CD384(iLocal_87, 0);
}

void func_298(vector3 vParam0)//Position - 0x186F1
{
	vector3 vVar0;
	
	vVar0 = { -5,5606f, -0,0106f, -131,6781f };
	iLocal_87 = unk_0x5AC38B4D80D4E352(26379945, vParam0, vVar0, 65f, 0, 2);
	unk_0xF10DA1539629CC3F(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_299(int iParam0)//Position - 0x18733
{
	float fVar0;
	vector3 vVar1;
	
	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0,5f, 0f };
	}
	else
	{
		fVar0 = func_302(iParam0);
		vVar1.y = -0,5f;
		vVar1.x = func_301(fVar0);
		vVar1.z = func_300(fVar0);
	}
	return vVar1;
}

float func_300(float fParam0)//Position - 0x18777
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0,218f;
	fVar1 = (system::cos(fParam0) * fVar0);
	return fVar1;
}

float func_301(float fParam0)//Position - 0x18793
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0,218f;
	fVar1 = (system::sin(fParam0) * fVar0);
	return fVar1;
}

var func_302(int iParam0)//Position - 0x187AF
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_303(var uParam0)//Position - 0x187EB
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0xF2B58F79D29425B4(2, 228))
			{
				func_310(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xF2B58F79D29425B4(2, 228))
			{
				if (!unk_0xCED06F4C77332FC6(iLocal_84))
				{
					func_308();
					func_307(&iLocal_208, vLocal_239, vLocal_240, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0xF2B58F79D29425B4(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_304(&iLocal_208, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_310(0);
			func_488();
			if (unk_0x8EA3C8E091EA5BA4(iLocal_208))
			{
				if (unk_0xD85097DDDA5447BE(iLocal_208))
				{
					unk_0x7849794435F39D49(iLocal_208, false);
				}
				unk_0x02934BABFD4CD384(iLocal_208, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_304(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x188DE
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0xD67F08F0EFD84A54(2);
	func_306(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x098C8C3D1E0C0518())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		fVar1 = unk_0xD65AC54B4C6897F9(2, 239);
		fVar2 = unk_0xD65AC54B4C6897F9(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -system::round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -system::round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = system::round(((unk_0xD65AC54B4C6897F9(2, 290) * fParam5) * 127f));
			iVar0[3] = system::round(((unk_0xD65AC54B4C6897F9(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_305((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_305((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x53C562FD2B9E3AB0())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x4C4813CAAD70E814(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x53C562FD2B9E3AB0() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(system::to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(system::to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * system::timestep());
	vVar6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x4C4813CAAD70E814(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar6.x;
		uParam0->f_14.f_1 = vVar6.y;
		uParam0->f_14.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((vVar6.x - uParam0->f_14) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((vVar6.y - uParam0->f_14.f_1) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((vVar6.z - uParam0->f_14.f_2) * 0,05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, system::to_float(-uParam0->f_21), system::to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, system::to_float(-uParam0->f_22), system::to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, system::to_float(-uParam0->f_20), system::to_float(uParam0->f_20));
	}
	if (unk_0x4C4813CAAD70E814(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x4C4813CAAD70E814(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x4CD14B4B1E8BD8BA(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x53C562FD2B9E3AB0() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x4CD14B4B1E8BD8BA(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x53C562FD2B9E3AB0() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x9473DAD46D61B987(2, 207);
			iVar0[3] = unk_0x9473DAD46D61B987(2, 208);
			if (bParam3)
			{
				if (system::to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(system::round(((system::to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (system::to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(system::round(((system::to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0,06f) * fVar5));
	unk_0xA6DE0FBA9218D7F0(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		if (unk_0xD85097DDDA5447BE(*uParam0))
		{
			if (unk_0xA088EF935178C2F3(*uParam0))
			{
				unk_0x391612227A0274F1();
			}
		}
	}
}

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x18E32
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

void func_306(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x18E57
{
	*uParam0 = system::floor((unk_0xD65AC54B4C6897F9(2, 218) * 127f));
	*uParam1 = system::floor((unk_0xD65AC54B4C6897F9(2, 219) * 127f));
	*uParam2 = system::floor((unk_0xD65AC54B4C6897F9(2, 220) * 127f));
	*uParam3 = system::floor((unk_0xD65AC54B4C6897F9(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF6F627547A24DED8(2, 218))
		{
			*uParam0 = system::floor((unk_0xBAE4B95B10A2442D(2, 218) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 219))
		{
			*uParam1 = system::floor((unk_0xBAE4B95B10A2442D(2, 219) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 220))
		{
			*uParam2 = system::floor((unk_0xBAE4B95B10A2442D(2, 220) * 127f));
		}
		if (!unk_0xF6F627547A24DED8(2, 221))
		{
			*uParam3 = system::floor((unk_0xBAE4B95B10A2442D(2, 221) * 127f));
		}
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (bParam5)
		{
			if (unk_0x098C8C3D1E0C0518())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x7A3414CFDD1FDFA8())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_307(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x18F5B
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7849794435F39D49(*uParam0, true);
	unk_0xA6DE0FBA9218D7F0(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x7E4FCDC8BAD0CF6D(*uParam0, "HAND_SHAKE", 0,19f);
	}
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x7A5CBE84E165CD64(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0xE7CF36BE055ECD7A(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_308()//Position - 0x19053
{
	if (iLocal_168)
	{
		return;
	}
	func_309();
	unk_0x1338C63C6C9CC948("Darts Zoom");
	iLocal_168 = 1;
}

void func_309()//Position - 0x19075
{
	if (iLocal_167 || iLocal_168)
	{
		unk_0xDFAC9ADC0F004412();
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
}

void func_310(bool bParam0)//Position - 0x19098
{
	if (bParam0)
	{
		unk_0xF10DA1539629CC3F(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0xF10DA1539629CC3F(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_311(var uParam0)//Position - 0x190C2
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_232(&(uParam0->f_62), func_313(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_227(&(uParam0->f_62), 0))
			{
				func_312(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_312(var uParam0)//Position - 0x19147
{
	uParam0->f_8 = 0;
	func_412(&(uParam0->f_2));
	func_412(&(uParam0->f_5));
}

char* func_313(int iParam0)//Position - 0x19164
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_314(var uParam0)//Position - 0x19191
{
	if (!iLocal_54)
	{
		if (!unk_0xF2B58F79D29425B4(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0xF2B58F79D29425B4(2, 201) || unk_0xE8C126B7ADBB9D63(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_315(var uParam0, int iParam1)//Position - 0x191E9
{
	if (!unk_0x0F30C1F1717A6437())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				func_114(&(uParam0->f_509), 0, 0, 0, 1);
				func_113(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_509), 1);
				func_322(&(uParam0->f_666), 8, 0);
				func_322(&(uParam0->f_666), 16, 0);
				func_322(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_114(&(uParam0->f_509), 0, 0, 0, 1);
				func_113(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_509), 1);
				func_322(&(uParam0->f_666), 8, 0);
				func_322(&(uParam0->f_666), 16, 0);
				func_322(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_114(&(uParam0->f_509), 1, 0, 0, 1);
			func_113(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_113(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 16, 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 17, 0);
			func_322(&(uParam0->f_666), 23, 0);
		}
		unk_0x73509F6FDA1DB386(76, 66);
		unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
		unk_0x189EEBAACC5D380A();
		func_192(func_109(func_3(&(uParam0->f_666), 16), 1, 2));
		func_116(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_322(&(uParam0->f_666), 15, 0);
		func_322(&(uParam0->f_666), 16, 0);
		func_322(&(uParam0->f_666), 23, 0);
	}
}

int func_316(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x194A5
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0x872F1C1F8587CCC7(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_317(var uParam0)//Position - 0x19570
{
	if (!unk_0x0F30C1F1717A6437())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_114(&(uParam0->f_509), 0, 0, 0, 1);
			func_316(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_113(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_110(&(uParam0->f_509), 1);
			func_322(&(uParam0->f_666), 23, 1);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 16, 0);
			func_322(&(uParam0->f_666), 15, 0);
			func_322(&(uParam0->f_666), 17, 0);
		}
		func_116(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_322(&(uParam0->f_666), 15, 0);
		func_322(&(uParam0->f_666), 16, 0);
		func_322(&(uParam0->f_666), 23, 0);
		func_322(&(uParam0->f_666), 17, 0);
	}
}

void func_318(var uParam0)//Position - 0x19682
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0xF2B58F79D29425B4(2, 201) && !unk_0xF2B58F79D29425B4(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_179 = false;
				unk_0x3E80C2F7BC665259(1);
			}
		}
		if (unk_0x58F436C557A0FD7A(2, 235) || unk_0x3D96C1C362D3E31D(2, 235))
		{
			if (!bLocal_179)
			{
				*uParam0 = 14;
				bLocal_179 = true;
				unk_0x3E80C2F7BC665259(1);
			}
		}
		else if (func_294("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_179 = false;
		}
	}
}

void func_319(int iParam0)//Position - 0x19725
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_320(int iParam0)//Position - 0x19743
{
	if (iParam0 < 10)
	{
		return 0,107f;
	}
	if (iParam0 < 25)
	{
		return 0,096f;
	}
	if (iParam0 < 50)
	{
		return 0,085f;
	}
	if (iParam0 < 70)
	{
		return 0,075f;
	}
	return 0,064f;
}

float func_321(int iParam0)//Position - 0x19798
{
	if (iParam0 < 10)
	{
		return 0,08f;
	}
	if (iParam0 < 25)
	{
		return 0,072f;
	}
	if (iParam0 < 50)
	{
		return 0,064f;
	}
	if (iParam0 < 70)
	{
		return 0,056f;
	}
	return 0,048f;
}

void func_322(int iParam0, int iParam1, bool bParam2)//Position - 0x197ED
{
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(iParam0, iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(iParam0, iParam1);
	}
}

int func_323(int iParam0, var uParam1)//Position - 0x1980D
{
	if (iParam0 >= 10)
	{
		if (!unk_0xC80D31E4B587871C(Global_104555.f_18940.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, var uParam1, var uParam2)//Position - 0x19839
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_235(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_234(uParam1, iVar0);
		func_240(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_195 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_172 = 1;
	iLocal_173 = 0;
	iLocal_175 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_181 = 0;
	func_322(&(uParam2->f_666), 6, 0);
	func_330();
	func_328(uParam2);
	if (iParam0->f_457)
	{
		func_325(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_325(bool bParam0)//Position - 0x19925
{
	unk_0x9B47B379EE749C38(false);
	if (unk_0xD85097DDDA5447BE(iLocal_77))
	{
		unk_0x7849794435F39D49(iLocal_77, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_81))
	{
		unk_0x7849794435F39D49(iLocal_81, false);
	}
	if (unk_0x3E9CABD07B829173())
	{
		func_327();
		unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
		unk_0x59C3AC31C7544A28(500);
	}
	func_326(bParam0);
}

void func_326(bool bParam0)//Position - 0x19976
{
	if (bParam0)
	{
		unk_0x7849794435F39D49(iLocal_75, true);
	}
}

void func_327()//Position - 0x1998A
{
	unk_0x7849794435F39D49(iLocal_77, true);
}

void func_328(var uParam0)//Position - 0x19999
{
	func_329();
	uParam0->f_670 = 3;
	func_322(&(uParam0->f_666), 15, 0);
	func_322(&(uParam0->f_666), 16, 0);
	func_322(&(uParam0->f_666), 17, 0);
}

void func_329()//Position - 0x199CF
{
	int iVar0;
	
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_330()//Position - 0x19A3F
{
	system::settimera(0);
	iLocal_54 = 0;
	unk_0x321C68A0C8D65821();
}

void func_331(bool bParam0, int iParam1)//Position - 0x19A53
{
	int iVar0;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_17301.f_7931 = 0;
	}
	unk_0xA3E8E2D0F73E92C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0xF40900F61CC88931(9, false);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_332(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_332(int iParam0)//Position - 0x19B11
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*iParam0))
		{
			unk_0xA68F7B004463AB6F(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_333(var uParam0, bool bParam1, int iParam2)//Position - 0x19B3A
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x3A711520F83BAE98() && unk_0x8C504A60C2F379BD())
		{
			iParam2 = unk_0x4362A980E5B3780B();
		}
	}
	StringCopy(&cVar0, unk_0x436287B7DB306165(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x8B948C59217A295D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17301.f_5591[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17301.f_5591[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17301.f_5591[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19BD7
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(iParam2);
	unk_0xD07D5CD276368D36(iParam3);
	unk_0xD07D5CD276368D36(iParam4);
	unk_0x271AA5469AF471B3();
}

int func_335(var uParam0, var uParam1, var uParam2)//Position - 0x19C07
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x4FB260623DD93924(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_392(0, 0, 0, 1);
		func_391(0, -1, 1);
		if (func_390())
		{
			if (Global_4265875 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4265875;
				func_389(uParam0->f_660, 1, 1);
				unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0xA1800C71952C596F(sVar0))
				{
					func_388(sVar0, 0, 0);
				}
			}
			Global_4265876 = unk_0x53C562FD2B9E3AB0() + 300;
		}
		else if (func_387() && unk_0x53C562FD2B9E3AB0() > Global_4265876)
		{
			if (Global_4265875 == uParam0->f_660)
			{
				iVar2 = func_386(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4265876 = unk_0x53C562FD2B9E3AB0() + 300;
		}
		if (func_385(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_389(uParam0->f_660, 1, 1);
			unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xA1800C71952C596F(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_384(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_389(uParam0->f_660, 1, 1);
			unk_0x4AFBCBFDE748D4E0(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0xA1800C71952C596F(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_383(&(uParam0->f_633)) || func_382(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0x4AFBCBFDE748D4E0(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if (func_363(&(uParam0->f_636)) || func_361(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0x4AFBCBFDE748D4E0(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if ((unk_0xE8C126B7ADBB9D63(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_360(uParam0->f_662 + 1, 1);
			*uParam2 = func_360(uParam0->f_664 + 1, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_338(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x58F436C557A0FD7A(2, 202) || func_337())
		{
			func_336(0);
			func_322(&(uParam0->f_666), 8, 0);
			func_322(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x58F436C557A0FD7A(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x58F436C557A0FD7A(2, 202))
		{
			func_364(uParam0);
			func_322(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_336(bool bParam0)//Position - 0x1A015
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457366[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0,05f;
	Global_17299 = 0,05f;
	Global_17300 = 0,225f;
	fVar2 = unk_0xB6936205ED728A9D(0);
	if (bParam0)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_17300 = (0,225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0,225f;
	}
}

int func_337()//Position - 0x1A4D3
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xE8C126B7ADBB9D63(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_338(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x1A4F2
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
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_357(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
	{
		fVar58 = Global_17299;
	}
	else
	{
		fVar58 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x5113D2C928A121B2(&iVar59, &iVar60);
		fVar62 = unk_0xB6936205ED728A9D(0);
		if (func_20())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_20())
		{
			fVar61 = 1f;
		}
		iVar59 = system::round((system::to_float(iVar59) / fVar61));
		iVar60 = system::round((system::to_float(iVar60) / fVar61));
	}
	else
	{
		unk_0x9A72C8F89A53C2D1(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
			{
				fVar49 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar64, func_24(29), 64);
					StringCopy(&cVar65, func_21(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_356(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEFB3EC0CDCC33841(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0,5f)), (Global_17299 + ((fVar56 - 0f) * 0,5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_356(Global_17298, (Global_17299 + fVar56), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0,034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_355();
					unk_0x76CCD673085CBF57(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x6223D539BCD39E76(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0x32AD2F36F6EF5A1F(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xD3DA9EADE295C3C5((Global_17298 + 0,00390625f), ((Global_17299 + fVar56) + 0,00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_355();
						func_353((((Global_17298 + fParam5) - 0,00390625f) - func_354("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar55 = 0,034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17301.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0,034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar66 + ((fVar49 - fVar66) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_356(Global_17298, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x62415D7FD7ADB9EE("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0,5f / fVar61));
				vVar38.y = (vVar38.y * (0,5f / fVar61));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x31758B9A51671C43(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x8B948C59217A295D(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_18(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_352(fVar40);
				unk_0x359D94A1D62654F7(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_356(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_352(fVar40);
				unk_0x76CCD673085CBF57(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_18(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4638), func_21(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_17298 + 0,0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_18(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_352(fVar40);
				unk_0x359D94A1D62654F7(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar40, (fVar49 + 0,00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_356(Global_17298, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_352(fVar40);
				unk_0x76CCD673085CBF57(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_18(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_24(Global_4265799.f_67), func_21(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAF6F79C616D36B6E(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_346(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x73509F6FDA1DB386(76, 84);
			unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar67 = (Global_17301.f_5602 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0,034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x31758B9A51671C43(Global_17301.f_7922, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x31758B9A51671C43(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0,5f)), (((fVar58 + fVar69) + (0,00277776f * IntToFloat(iVar12))) + (fVar55 * 0,5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_344(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x76CCD673085CBF57("DFLT_MNU_OPT");
					unk_0xD3DA9EADE295C3C5(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xC80D31E4B587871C(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0,0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar44 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_17298 + Global_17300) - 0,0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0x0792909D8327DAEA(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0xF2A1AF58CC57C564(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0,00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0,00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0x76CCD673085CBF57(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_18(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[(iVar22 + iVar28)]), func_21(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[(iVar22 + iVar28)]), func_21(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0,00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0xD3DA9EADE295C3C5(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0xD3DA9EADE295C3C5((fVar34 + fVar40), fVar35, 0);
												if (func_342() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_344(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0,0185f;
														fVar79 = 0,004f;
														fVar80 = 0,02f;
														unk_0x8D95497078BC0E3B(0f, (0,35f * 0,7f));
														unk_0xA54B8BFDEBB2AF89(255, 255, 255, 150);
														unk_0x09C2CBFA4CD804AC((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
														unk_0x76CCD673085CBF57(&cVar75);
														unk_0x6223D539BCD39E76((Global_17301.f_5605 + iVar30));
														unk_0xD3DA9EADE295C3C5((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0,00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_18(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[(iVar22 + iVar14)]), func_21(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0,00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x6223D539BCD39E76(Global_17301.f_3918[iVar20]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_341((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_343(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar41 = unk_0xF2A1AF58CC57C564(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_344(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_340((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_18(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_351(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_24(Global_17301.f_4433[iVar22]), func_21(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_339(Global_17301.f_4433[iVar22])), (fVar37 * func_339(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0,05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0,05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0,034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar58 + fVar68) + (0,00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar49;
	Global_17301.f_5745 = unk_0x53C562FD2B9E3AB0();
	unk_0xA3E8E2D0F73E92C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_38(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0x553231E7FC3C570D(10);
	}
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(8);
	if (bParam0)
	{
		func_192(1);
	}
	unk_0x189EEBAACC5D380A();
}

float func_339(int iParam0)//Position - 0x1D157
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_340(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1D1C6
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_341(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1D1E5
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

bool func_342()//Position - 0x1D203
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_343(bool bParam0)//Position - 0x1D214
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
}

void func_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D25A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_345(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x31758B9A51671C43(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x31758B9A51671C43(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
		else
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	else
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA2E2179985C59E40(1);
	if (bParam5)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(4);
	}
	else if (bParam6)
	{
		unk_0x8D95497078BC0E3B(0f, 0,425f);
		unk_0x8F5DFDE59FA7D0D0(6);
	}
	else
	{
		unk_0x8F5DFDE59FA7D0D0(0);
	}
	unk_0xEDC290CB1C56B732(0f, 1f);
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_345(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1D408
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1D692
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_357(bParam4, bParam8))
	{
		return;
	}
	if (func_349())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_347(unk_0x9EB17624F44A8DA4(), 0))
		{
			return;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0xE59B25D23E4C4B3E() == 0 || unk_0x02BBA5FDE77816B9())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x8CFF76532FEF34D4(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0xC9C4B2A22DE54C69(2, Global_17301.f_4896[iVar1], true), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x715308393E136EA8(2, Global_17301.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2((1f - (Global_17301.f_4951 / 100f)));
			unk_0x271AA5469AF471B3();
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x8B948C59217A295D("PREV"))
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar1);
					func_13(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_13(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_12(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xFD1DB5DD208735A3(iParam2, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(iParam2);
						}
						unk_0x9748595E4799A2CF();
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xC80D31E4B587871C(Global_17301.f_4922, iVar1))
						{
							unk_0x1869584A8A72FEDD(true);
							unk_0xD07D5CD276368D36(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0x1869584A8A72FEDD(false);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				iVar1++;
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_16)) != unk_0x8B948C59217A295D(""))
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(Global_17301.f_4639);
				func_13(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_12(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
				}
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
			unk_0x271AA5469AF471B3();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD07D5CD276368D36(iVar1);
					unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
					unk_0x271AA5469AF471B3();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD07D5CD276368D36(iVar1);
				unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0xFD1DB5DD208735A3(iParam2, 70);
				}
				else
				{
					unk_0x6223D539BCD39E76(iParam2);
				}
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
			}
		}
		unk_0x73509F6FDA1DB386(76, 66);
		unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x76F7AB2157E33DD9(15, 0f, -0,0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0x3B235F54BDEDFCB5(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x189EEBAACC5D380A();
		if (Global_17301.f_4925)
		{
			unk_0x73509F6FDA1DB386(82, 66);
			unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
			unk_0x0EB9853DF8BC0D87(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x189EEBAACC5D380A();
		}
		else
		{
			unk_0x28E092B1E386EB67(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_347(int iParam0, int iParam1)//Position - 0x1DB6E
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_348(-1, 0) == 8;
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

int func_348(int iParam0, bool bParam1)//Position - 0x1DBB9
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

int func_349()//Position - 0x1DBFA
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_350())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x494F5FA1BF017D58(&vVar0);
		if (Global_14398 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_350()//Position - 0x1DC68
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_351(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1DC82
{
	unk_0x31758B9A51671C43(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_352(float fParam0)//Position - 0x1DD55
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0x4E55BC7DE7AF6FFC(2);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732(fParam0, ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_353(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1DDB4
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_354(char* sParam0, int iParam1, int iParam2)//Position - 0x1DDD7
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_355();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_355()//Position - 0x1DE19
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0,35f);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732((Global_17298 + 0,0046875f), ((Global_17298 + Global_17300) - 0,0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_356(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1DEA3
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_357(bool bParam0, bool bParam1)//Position - 0x1DED2
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_359(8, -1) && func_358() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_358()//Position - 0x1DF6F
{
	return Global_1312789;
}

bool func_359(int iParam0, int iParam1)//Position - 0x1DF7B
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

int func_360(int iParam0, bool bParam1)//Position - 0x1DFB6
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_361(int iParam0, int iParam1, int iParam2)//Position - 0x1E03D
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == 1 && Global_4265875 == iParam1)
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

void func_362(int iParam0)//Position - 0x1E0B5
{
	if (!func_411(iParam0))
	{
		func_425(iParam0);
	}
}

int func_363(int iParam0)//Position - 0x1E0CD
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 218);
	}
	if ((fVar0 > 0,8f || unk_0xF2B58F79D29425B4(2, 190)) || unk_0x5A632962B08A1872(2, 190))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

void func_364(var uParam0)//Position - 0x1E152
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_336(0);
	unk_0x31758B9A51671C43(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, func_360(uParam0->f_662 + 1, 1), 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, func_360(uParam0->f_664 + 1, 0), 0);
	func_367(2, 141, 141, 1);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_366(0);
	func_389(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_388(func_108(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_365(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1E248
{
	char* sVar0;
	
	sVar0 = unk_0xC9C4B2A22DE54C69(2, iParam0, true);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_4922), Global_17301.f_4639);
	}
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_366(int iParam0)//Position - 0x1E2FD
{
	Global_17301.f_5605 = iParam0;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E30D
{
	Global_17301.f_7927 = iParam3;
	Global_17301.f_7924[0] = iParam1;
	Global_17301.f_7924[1] = iParam2;
	Global_17301.f_7928 = iParam0;
}

void func_368(int iParam0, int iParam1, bool bParam2)//Position - 0x1E33B
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 2)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 2)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17301.f_3918[Global_17301.f_5092] = iParam1;
	Global_17301.f_5092++;
	fVar1 = func_370("NUMBER", iParam1);
	if (Global_17301.f_4945[Global_17301.f_5089])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
	{
		Global_17301.f_4938[Global_17301.f_5089] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_369("NUMBER", iParam1);
		if (fVar4 > Global_17301.f_5612[iParam0])
		{
			Global_17301.f_5612[iParam0] = fVar4;
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 2;
}

float func_369(char* sParam0, int iParam1)//Position - 0x1E4BA
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_370(char* sParam0, int iParam1)//Position - 0x1E4DC
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
		return 0f;
	}
	func_344(1, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_371(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1E50E
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xAB019B170BF1309C(sParam1) && !unk_0xA1800C71952C596F(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_374(Global_17301.f_5088, 1);
	}
	else
	{
		func_374(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_373(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_372(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_372(char* sParam0)//Position - 0x1E71A
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0,35f, 0);
}

float func_373(char* sParam0)//Position - 0x1E736
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_344(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_374(int iParam0, bool bParam1)//Position - 0x1E773
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_375(int iParam0, char* sParam1, char* sParam2)//Position - 0x1E7BF
{
	Global_17301 = iParam0;
	func_376(29, sParam1, sParam2);
}

void func_376(int iParam0, char* sParam1, char* sParam2)//Position - 0x1E7D6
{
	StringCopy(&(Global_17301.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17301.f_6719[iParam0 /*16*/]), sParam2, 64);
}

void func_377(char* sParam0)//Position - 0x1E7FA
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E845
{
	Global_17301.f_4945[0] = iParam0;
	Global_17301.f_4945[1] = iParam1;
	Global_17301.f_4945[2] = iParam2;
	Global_17301.f_4945[3] = iParam3;
	Global_17301.f_4945[4] = iParam4;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E884
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E8C3
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_381(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1E96D
{
	Global_17301.f_7901 = iParam4;
	Global_17301.f_7897 = uParam0;
	Global_17301.f_7898 = uParam1;
	Global_17301.f_7899 = uParam2;
	Global_17301.f_7900 = uParam3;
}

int func_382(int iParam0, int iParam1, int iParam2)//Position - 0x1E99D
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == -1 && Global_4265875 == iParam1)
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x1EA15
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 218);
	}
	if (fVar0 < -0,8f || unk_0xF2B58F79D29425B4(2, 189))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_384(int iParam0)//Position - 0x1EA8D
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	}
	if (fVar0 > 0,8f || unk_0xF2B58F79D29425B4(2, 187))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x1EB05
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		fVar0 = unk_0x869308DF4F5FB0C3(2, 219);
	}
	if (fVar0 < -0,8f || unk_0xF2B58F79D29425B4(2, 188))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0,25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_386(float fParam0)//Position - 0x1EB7D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0,02f;
	fVar0 = 0,05f;
	fVar2 = (fVar0 + Global_17300);
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0,034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	unk_0xB3BC3A562B00E8B9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB3BC3A562B00E8B9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x189EEBAACC5D380A();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4265869 >= fVar0 && Global_4265869 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4265869 >= fVar0 && Global_4265869 < fVar4)
	{
		return -1;
	}
	if (Global_4265869 >= fVar4 && Global_4265869 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_387()//Position - 0x1EC4A
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		return unk_0x5A632962B08A1872(2, 237);
	}
	return 0;
}

void func_388(char* sParam0, int iParam1, int iParam2)//Position - 0x1EC65
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x53C562FD2B9E3AB0();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_389(int iParam0, bool bParam1, int iParam2)//Position - 0x1ECCA
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

int func_390()//Position - 0x1EE1C
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2)//Position - 0x1EE43
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x15F5D3F996CB934F();
	}
	if (Global_4265875 == -6)
	{
		unk_0x045FE6847C82E3A6(4);
		if (iParam0 && unk_0xF2B58F79D29425B4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x1B3327E02DE17064())
	{
		unk_0x045FE6847C82E3A6(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0xF2B58F79D29425B4(2, 237))
		{
			unk_0x045FE6847C82E3A6(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x045FE6847C82E3A6(3);
			return 0;
		}
	}
	unk_0x045FE6847C82E3A6(1);
	return 0;
}

void func_392(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1EF23
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0,034722f / 2f);
	iVar13 = -1;
	if (!unk_0x4C4813CAAD70E814(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x1791FD56B0FECC40(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0,034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0,034722f);
		fVar1 = (fVar1 + 0,034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0,034722f);
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xB3BC3A562B00E8B9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB3BC3A562B00E8B9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x189EEBAACC5D380A();
	func_394();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0,034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = system::floor((fVar9 / 0,034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x73509F6FDA1DB386(76, 84);
				unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
				func_356(fVar4, (fVar5 + (IntToFloat(iVar13) * 0,034722f)), Global_17300, (0,034722f - 0,0015f), 255, 255, 255, iVar10);
				unk_0x189EEBAACC5D380A();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0,9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0,25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_393(bool bParam0)//Position - 0x1F1CF
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0,034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_356(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_356(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_394()//Position - 0x1F258
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

float func_395(float fParam0)//Position - 0x1F2A0
{
	if (fParam0 < 1,3f)
	{
		return 35f;
	}
	else if (fParam0 < 1,35f)
	{
		return 33f;
	}
	return 30f;
}

void func_396(var uParam0)//Position - 0x1F2D6
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_336(0);
	unk_0x31758B9A51671C43(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, 1, 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, 1, 0);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_367(2, 141, 141, 1);
	func_366(0);
	func_389(0, 1, 1);
	func_388("DARTS_LEGD", 0, 0);
	func_397();
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_397()//Position - 0x1F3C2
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xCD439FD7E3A8589E(0,325f, 0,3f);
	}
}

int func_398(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x1F3E0
{
	int iVar0;
	int iVar1;
	
	if ((func_421() && unk_0x53C562FD2B9E3AB0() >= iLocal_196 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
		{
			unk_0xAE83ED4C9081AE6F(500);
		}
	}
	if (unk_0x3E9CABD07B829173() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_196 = unk_0x53C562FD2B9E3AB0();
						func_406(uParam1->f_1, uParam1->f_4, func_408(2), func_407(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_277(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_264(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_425(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_DOUBLE_T"))
					{
						func_409("DARTS_DOUBLE_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x3E80C2F7BC665259(1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(3), func_407(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xCED06F4C77332FC6(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_277(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_TRIPLE_T"))
					{
						func_409("DARTS_TRIPLE_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x3E80C2F7BC665259(1);
						func_406(uParam1->f_1, uParam1->f_4, func_408(4), func_407(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xCED06F4C77332FC6(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_277(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x23A4CE7F9EBB02D4(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_BULL_T"))
					{
						func_409("DARTS_BULL_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x3E80C2F7BC665259(1);
						unk_0x4AFBCBFDE748D4E0(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(5), func_407(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0xCED06F4C77332FC6(iLocal_83) && !func_294("DARTS_DBL_WIN"))
			{
				func_409("DARTS_DBL_WIN", -1);
			}
			if (func_414(iParam5) > 6f)
			{
				func_425(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0x4AFBCBFDE748D4E0(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xF10DA1539629CC3F(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0xCED06F4C77332FC6(iLocal_75))
			{
				iLocal_31 = 0;
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_399(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x3E9CABD07B829173())
			{
				iLocal_31 = 0;
				unk_0x3E80C2F7BC665259(1);
				unk_0x84CDD933AFA470D2();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_399(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x7849794435F39D49(iLocal_75, true);
				unk_0x59C3AC31C7544A28(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_399(int iParam0)//Position - 0x1F7FC
{
	vector3 vVar0;
	
	vVar0 = { -1668,044f, -1056,45f, 13,1063f };
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0xBD8D47FDC6902B2D(*iParam0, vVar0, 1, 0, 0, 1);
		unk_0x3A703774620FDB42(iParam0);
		unk_0x452336926718D62A(iParam0);
	}
}

void func_400(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4)//Position - 0x1F83C
{
	unk_0x6B21CB5B873D3277(iLocal_83);
	unk_0xE43C573FE3C5D758(iLocal_83, 35f);
	unk_0xA215B2F25E63FA31(iLocal_83, unk_0x9EA50C5EC175E58E(vParam0, fParam1, vParam2));
	unk_0xBEBD5CAE3510CD2A(iLocal_83, Vector(fParam1, 0f, 0f) - vParam3, 2);
	unk_0xF10DA1539629CC3F(iLocal_83, iLocal_82, iParam4, 1, 1);
}

int func_401(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F885
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0x553231E7FC3C570D(14);
	if (!bParam2)
	{
		unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x28E092B1E386EB67(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > system::to_float(uParam0->f_1)
	{
		func_412(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_402(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)//Position - 0x1F917
{
	char* sVar0;
	
	sVar0 = func_403(iParam5);
	unk_0x008F3E3CC076EA0E(*uParam0, "RESET_MOVIE");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(*uParam0, sVar0);
	unk_0x7E099EB35339C80D("STRING");
	unk_0xF92B835A141C6BDD(iParam4);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x9748595E4799A2CF();
	if (!unk_0xAB019B170BF1309C(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0xD07D5CD276368D36(100);
		unk_0x1869584A8A72FEDD(true);
	}
	unk_0x271AA5469AF471B3();
	if (bParam6)
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "TRANSITION_UP");
		unk_0x9499D7329FB840A2(fParam7);
		unk_0x271AA5469AF471B3();
	}
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_403(int iParam0)//Position - 0x1F9A6
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_404()//Position - 0x1FA21
{
	unk_0x7849794435F39D49(iLocal_75, true);
	unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
	if (unk_0xD85097DDDA5447BE(iLocal_82))
	{
		unk_0x7849794435F39D49(iLocal_82, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_77))
	{
		unk_0x7849794435F39D49(iLocal_77, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_78))
	{
		unk_0x7849794435F39D49(iLocal_78, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_79))
	{
		unk_0x7849794435F39D49(iLocal_79, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_80))
	{
		unk_0x7849794435F39D49(iLocal_80, false);
	}
	if (unk_0xD85097DDDA5447BE(iLocal_81))
	{
		unk_0x7849794435F39D49(iLocal_81, false);
	}
}

char* func_405(int iParam0)//Position - 0x1FA9C
{
	if (iLocal_207 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_207 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_406(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4, bool bParam5)//Position - 0x1FB2F
{
	unk_0x6B21CB5B873D3277(iLocal_82);
	unk_0xE43C573FE3C5D758(iLocal_82, 35f);
	unk_0xA215B2F25E63FA31(iLocal_82, unk_0x9EA50C5EC175E58E(vParam0, fParam1, vParam2));
	unk_0xBEBD5CAE3510CD2A(iLocal_82, Vector(fParam1, 0f, 0f) - vParam3, 2);
	if (bParam5)
	{
		unk_0x7849794435F39D49(iLocal_82, true);
	}
	else
	{
		unk_0xF10DA1539629CC3F(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_407(bool bParam0)//Position - 0x1FB87
{
	if (bParam0)
	{
		return -4,7411f, 0f, -15,32f;
	}
	return 4,9918f, 0f, 4,3916f;
}

Vector3 func_408(int iParam0)//Position - 0x1FBB0
{
	switch (iParam0)
	{
		case 0:
			return -0,0588f, -1,6075f, 0,1336f;
		
		case 2:
			return -0,0944f, -1,2308f, 0,3468f;
		
		case 3:
			return -0,0948f, -1,243f, 0,2067f;
		
		case 4:
			return -0,0955f, -1,2524f, 0,1006f;
		
		case 5:
			return -0,0951f, -1,2526f, 0,0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_409(char* sParam0, int iParam1)//Position - 0x1FC3A
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_410(int iParam0)//Position - 0x1FC51
{
	if (!unk_0x191BE1BC8F26F3C1(func_487(), 0))
	{
		func_4(func_487(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_411(int iParam0)//Position - 0x1FC84
{
	return unk_0xC80D31E4B587871C(*iParam0, 1);
}

void func_412(int iParam0)//Position - 0x1FC94
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_413(int iParam0, char* sParam1, int iParam2)//Position - 0x1FCAA
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_6(iParam2), 1);
}

float func_414(int iParam0)//Position - 0x1FCC1
{
	if (func_411(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_415(int iParam0)//Position - 0x1FCFD
{
	if (!func_411(iParam0))
	{
		func_362(iParam0);
	}
	else
	{
		func_425(iParam0);
	}
}

void func_416()//Position - 0x1FD1E
{
	Global_14622 = 0;
	func_417();
}

void func_417()//Position - 0x1FD2E
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

void func_418(int iParam0)//Position - 0x1FD85
{
	if (Global_14615)
	{
		func_420(0, 0);
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
	if (!func_419())
	{
		Global_14453.f_1 = 3;
	}
}

int func_419()//Position - 0x1FDF5
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_420(bool bParam0, bool bParam1)//Position - 0x1FE1C
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_421()//Position - 0x1FE90
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

int func_422(var uParam0)//Position - 0x1FEC2
{
	int iVar0;
	
	iVar0 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!func_423(iVar0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iVar0, unk_0xFC1458A37D98B502(), vLocal_169, 0, 1, 0))
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

int func_423(int iParam0)//Position - 0x1FF35
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

void func_424(var uParam0, int iParam1)//Position - 0x1FF78
{
	iParam1++;
	unk_0x008F3E3CC076EA0E(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

void func_425(int iParam0)//Position - 0x1FF9C
{
	func_426(iParam0, 0f);
}

void func_426(int iParam0, float fParam1)//Position - 0x1FFAB
{
	iParam0->f_1 = (func_8(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1FFD9
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

void func_428(var uParam0, char* sParam1, char* sParam2)//Position - 0x20075
{
	unk_0x008F3E3CC076EA0E(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(sParam1);
	func_34(sParam2);
	unk_0x271AA5469AF471B3();
}

void func_429(float fParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x20099
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(func_487()) && !unk_0x3AB6A1A9084FB0A4(func_487()))
	{
		unk_0x88235B448509228B(func_487());
	}
	else
	{
		if (unk_0x6ADD12BF4D6D2587(uParam5->f_5) && !unk_0x3AB6A1A9084FB0A4(uParam5->f_5))
		{
			unk_0xDD29FF4BAB8AFF9C(uParam5->f_5, true, 1);
			iLocal_170[1] = uParam5->f_5;
			unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
		}
		else if (func_431(uParam4))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_170[1]);
		}
		else
		{
			iLocal_170[1] = unk_0xAC992EFAD62C33BF(26, iLocal_204, Param1.f_3, fParam0, 1, true);
		}
		if (unk_0xB80A4DA4C06A76F1(iLocal_170[1], "Darts_name"))
		{
			iVar0 = unk_0x2786E663D1846FFC(iLocal_170[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_252 = func_434("RAYMOND");
				iLocal_253 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_252 = func_434("JOHAN");
				iLocal_253 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_252 = func_434("STAN");
				iLocal_253 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_252 = func_434("VINCE");
				iLocal_253 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_252 = func_434("KRISTY");
				iLocal_253 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_252 = func_434("MARLENE");
				iLocal_253 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_252 = func_434("LORIE");
				iLocal_253 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_252 = func_434("SHELLEY");
				iLocal_253 = -863218904;
			}
		}
		unk_0xD91ED8E8618A1DEF(iLocal_170[1], "Darts_name", iLocal_253);
	}
	iVar1 = unk_0x82FF3DFBC3965CC0(iLocal_170[1]);
	func_430(iVar1);
	unk_0xAC838A977FB6E6BC(iLocal_170[1], iLocal_170[0], 0);
	unk_0xAC838A977FB6E6BC(iLocal_170[0], iLocal_170[1], 0);
}

void func_430(int iParam0)//Position - 0x20292
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_431(var uParam0)//Position - 0x20331
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), uParam0, -1))
	{
		if (!unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0]))
		{
			if ((((((unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x82FF3DFBC3965CC0((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0xDD29FF4BAB8AFF9C((*uParam0)[iVar0], true, 1);
				iLocal_170[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_432(int iParam0)//Position - 0x2041A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 3;
		while (iVar0 <= (151 - 1))
		{
			if (func_433(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_433(int iParam0)//Position - 0x2045A
{
	if (!func_87(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_434(char* sParam0)//Position - 0x20485
{
	if (unk_0xC45D692E0BD4797B() == 7)
	{
		if (unk_0x74C475EB8E73D398(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x74C475EB8E73D398(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_435(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x205BF
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		uParam0->f_4 = unk_0xF0371FE6E2BF9599(*uParam0);
	}
	if (!bParam3)
	{
		func_437(uParam1, uParam0);
	}
	vLocal_41 = { 0f, (-2,3685f + fLocal_34), 0,1f };
	vLocal_41 = { vLocal_41 + vLocal_35 };
	vLocal_40 = { unk_0x9EA50C5EC175E58E(uParam0->f_1, uParam0->f_4, vLocal_41) };
	func_436(uParam2, uParam0);
}

void func_436(var uParam0, var uParam1)//Position - 0x20627
{
	uParam0->f_3 = { 0f, -0,15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_35 };
	*uParam0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_437(var uParam0, var uParam1)//Position - 0x20662
{
	*uParam0 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, -0,4f, (-2,4f + fLocal_34), -1,7272f) };
	uParam0->f_3 = { unk_0x9EA50C5EC175E58E(uParam1->f_1, uParam1->f_4, 0,5f, (-2,4f + fLocal_34), -1,7272f) };
}

int func_438(var uParam0, var uParam1)//Position - 0x206B4
{
	if (!unk_0x1CF95440F1970B4F("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!unk_0x1CF95440F1970B4F("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x9A0B2ED5055D3F0B(iLocal_28) || !unk_0x9A0B2ED5055D3F0B(iLocal_29)) || !unk_0x9A0B2ED5055D3F0B(iLocal_37)) || !unk_0x9A0B2ED5055D3F0B(iLocal_204)) || !unk_0x34D11AB5BA7922C2(*uParam0)) || !unk_0x34D11AB5BA7922C2(uParam1->f_645)) || !unk_0x34D11AB5BA7922C2(uParam1->f_57)) || !unk_0x34D11AB5BA7922C2(uParam1->f_62)) || !unk_0x9F0887BCBFCF3C2F(3)) || !unk_0xA51ADD51711B4A15("Darts")) || !unk_0x3A801AA34DD821BE(sLocal_254)) || !unk_0x3A801AA34DD821BE(sLocal_255)) || !func_439(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_439(char* sParam0, int iParam1, bool bParam2)//Position - 0x20798
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_333(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0xBCBC53983EC3B1BA(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x1A0FBC430E1424B4(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x128A5DCCD09CCA17("CommonMenu", false);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0xA51ADD51711B4A15("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x128A5DCCD09CCA17("MPShopSale", false);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0xA51ADD51711B4A15("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_440(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_440(var uParam0)//Position - 0x2088E
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				*uParam0 = unk_0xD704C81492296A37(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x34D11AB5BA7922C2(*uParam0))
					{
						uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_441(var uParam0, var uParam1)//Position - 0x20930
{
	unk_0x6FF834D85E2DD4C6(iLocal_28);
	unk_0x6FF834D85E2DD4C6(iLocal_29);
	unk_0x6FF834D85E2DD4C6(iLocal_37);
	unk_0x6FF834D85E2DD4C6(iLocal_204);
	unk_0x128A5DCCD09CCA17("Darts", false);
	unk_0x128A5DCCD09CCA17("ShopUI_Title_Darts", false);
	unk_0x6450931B826B49D9(sLocal_254);
	unk_0x6450931B826B49D9(sLocal_255);
	*uParam0 = unk_0xD704C81492296A37("darts_scoreboard");
	uParam1->f_645 = func_187();
	uParam1->f_57 = func_443();
	uParam1->f_62 = func_442();
	unk_0xBCBC53983EC3B1BA("DARTS", 3);
}

int func_442()//Position - 0x2099E
{
	return unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
}

int func_443()//Position - 0x209AE
{
	return unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
}

void func_444(var uParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x209BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989,399f, -99,674f, 75,925f };
		uParam0->f_21 = { 180f, 0f, 252,555f };
		uParam0->f_24 = { 1,82f, 1,328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992,223f, 3049,814f, 48,333f };
		uParam0->f_21 = { 180f, 0f, 87,77f };
		uParam0->f_24 = { 1,82f, 1,328f, 1f };
	}
	if (!func_445(vParam2) && fParam3 != 0f)
	{
		uParam0->f_18 = { unk_0x9EA50C5EC175E58E(vParam2, fParam3, -0,687645f, -0,350352f, 0,343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam3 - -29,98685f) };
	}
	uParam0->f_27 = 0,885f;
	uParam0->f_28 = 0,244f;
	uParam0->f_29 = 0,17f;
	uParam0->f_30 = 0,415f;
}

int func_445(vector3 vParam0)//Position - 0x20ADA
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_446(int iParam0)//Position - 0x20B04
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0,5f;
	Local_38.f_1 = 0,5f;
	if (unk_0x41226DC6540EC9AA())
	{
		Local_38.f_2 = 0,05f;
		Local_38.f_3 = 0,095f;
	}
	else
	{
		Local_38.f_2 = 0,065f;
		Local_38.f_3 = 0,09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0,061f;
	Local_39.f_3 = 0,105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_447(var uParam0, int iParam1)//Position - 0x20BD7
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_448()//Position - 0x20BFE
{
	int iVar0;
	
	unk_0x8C6A66A466AE31CF();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_449(vector3 vParam0, float fParam1)//Position - 0x20C27
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	
	fLocal_89 = unk_0xB6936205ED728A9D(0);
	fVar7 = 30f;
	fVar7 = func_395(fLocal_89);
	vVar8 = { -0,192784f, -1,73287f, 0,0262985f };
	fVar9 = 1,7939f;
	fVar10 = -1,3346f;
	if (unk_0x41226DC6540EC9AA())
	{
		vVar11 = { -0,0974819f, -1,65968f, 0,335098f };
		fVar12 = -1,3023f;
		fVar13 = -12,4139f;
	}
	else
	{
		vVar11 = { -0,112635f, -1,86963f, 0,45417f };
		fVar12 = -3,7542f;
		fVar13 = -14,4576f;
	}
	vVar14 = { 0,261599f, -0,750354f, -0,392929f };
	vVar16 = { 0,281314f, -0,573735f, -0,39603f };
	vVar1 = { unk_0x9EA50C5EC175E58E(vParam0, fParam1, vVar8) };
	vVar3 = { fVar10, 0f, (fParam1 - fVar9) };
	vVar0 = { unk_0x9EA50C5EC175E58E(vParam0, fParam1, vVar11) };
	vVar2 = { fVar13, 0f, (fParam1 - fVar12) };
	vVar4 = { unk_0x9EA50C5EC175E58E(vParam0, fParam1, vVar14) };
	vVar5 = { 0,8351f, -0,0048f, (fParam1 - 186,5073f) };
	vVar15 = { unk_0x9EA50C5EC175E58E(vParam0, fParam1, vVar16) };
	vVar6 = { 0,8351f, -0,0048f, (fParam1 - 186,5073f) };
	iLocal_75 = unk_0x5AC38B4D80D4E352(26379945, vVar0, vVar2, fVar7, 0, 2);
	iLocal_76 = unk_0x5AC38B4D80D4E352(26379945, vVar1, vVar3, fVar7, 0, 2);
	iLocal_77 = unk_0x5AC38B4D80D4E352(26379945, vVar4, vVar5, 65f, 0, 2);
	iLocal_78 = unk_0x5AC38B4D80D4E352(26379945, vVar15, vVar6, 65f, 0, 2);
	iLocal_79 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_80 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_82 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_83 = unk_0x5AC38B4D80D4E352(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_81 = unk_0x5AC38B4D80D4E352(26379945, 1996,235f, 3048,456f, 48,0237f, -3,4831f, 0,0223f, 60,6925f, 38,1f, 0, 2);
	unk_0xE43C573FE3C5D758(iLocal_77, 43,35f);
	unk_0xE43C573FE3C5D758(iLocal_78, 42,35f);
	unk_0x7E4FCDC8BAD0CF6D(iLocal_77, "HAND_SHAKE", 0,1f);
	unk_0x7E4FCDC8BAD0CF6D(iLocal_78, "HAND_SHAKE", 0,1f);
}

void func_450(var uParam0, var uParam1)//Position - 0x20E8A
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x6ADD12BF4D6D2587(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_451()//Position - 0x20F46
{
	Global_17162.f_6 = 1;
}

void func_452(int iParam0, bool bParam1)//Position - 0x20F54
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

var func_453(int iParam0, int iParam1)//Position - 0x20F76
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_454(iParam0, iParam1);
	unk_0xFA3CE529DBB66C85(iVar1, &uVar0, -1);
	return uVar0;
}

var func_454(int iParam0, int iParam1)//Position - 0x20F94
{
	var uVar0;
	var uVar1;
	
	func_455(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_455(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x20FAA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_456(bool bParam0)//Position - 0x21201
{
	if (bParam0)
	{
		func_457();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_39(0))
		{
			func_418(0);
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

void func_457()//Position - 0x21264
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_458(int iParam0, var uParam1, var uParam2)//Position - 0x2128D
{
	int iVar0;
	int iVar1;
	
	unk_0x23C4D78663D144CD(1);
	func_256(8);
	func_309();
	if (bLocal_178)
	{
		func_475(&uLocal_194);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_399(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x14776E43F90DD454(iLocal_28);
	unk_0x14776E43F90DD454(iLocal_29);
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_170[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_170[1]))
	{
		unk_0xCB3D88C918AA637C(iLocal_170[0]);
		unk_0xCB3D88C918AA637C(iLocal_170[1]);
	}
	func_474();
	unk_0x14776E43F90DD454(iLocal_37);
	func_473();
	func_472(uParam1->f_645);
	func_471(&(uParam1->f_57));
	if (!unk_0x191BE1BC8F26F3C1(func_487(), 0))
	{
		unk_0x57FB41CABA25835C(func_487(), func_470());
		func_469(iLocal_202, iLocal_203);
	}
	else
	{
		func_467(&(iLocal_170[1]));
	}
	func_456(0);
	func_466(uParam2);
	func_36(0);
	unk_0x3B235F54BDEDFCB5(15);
	if (unk_0x5616476F69B90F14())
	{
		if (iParam0->f_460 && !iLocal_192)
		{
			func_465(190, 0);
		}
	}
	func_98();
	func_448();
	func_90(&(uParam1->f_72));
	system::wait(200);
	if (iLocal_185)
	{
		func_462(130, 0, 0);
		func_459();
	}
	func_452(23, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_459()//Position - 0x213DA
{
	func_460();
}

int func_460()//Position - 0x213E7
{
	if (func_461(0))
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

bool func_461(bool bParam0)//Position - 0x21432
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_462(int iParam0, int iParam1, int iParam2)//Position - 0x2145D
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
		func_59((891 + iParam0), 1, -1, 1);
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
		func_463();
	}
}

void func_463()//Position - 0x21545
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
		func_81(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_464() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_460();
				}
			}
		}
	}
}

int func_464()//Position - 0x21A06
{
	return Global_25233;
}

void func_465(int iParam0, bool bParam1)//Position - 0x21A11
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x5616476F69B90F14())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_217(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0xEC4FA25E0FA458DA(103, iLocal_106[1], 0f);
		unk_0xEC4FA25E0FA458DA(99, iLocal_106[2], 0f);
		unk_0xEC4FA25E0FA458DA(109, iLocal_106[3], 0f);
		unk_0xEC4FA25E0FA458DA(106, iLocal_106[5], 0f);
		unk_0xEC4FA25E0FA458DA(2, iLocal_106[10], 0f);
		unk_0xEC4FA25E0FA458DA(107, iLocal_106[8], 0f);
		unk_0xEC4FA25E0FA458DA(116, iLocal_106[6], 0f);
	}
}

void func_466(var uParam0)//Position - 0x21ABC
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_461(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_36(0);
}

void func_467(var uParam0)//Position - 0x21B63
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0) && !unk_0x3AB6A1A9084FB0A4(*uParam0))
	{
		unk_0xFAA3EF7FF92E1F9E(&uLocal_205);
		unk_0x6931076730A4AC5D(&uLocal_205);
		if (unk_0x6ADD12BF4D6D2587(iLocal_170[0]))
		{
			unk_0x60C06BFD037BB7CF(0, iLocal_170[0], 8000, 2049, 3);
		}
		unk_0x270054D97CD161A8(0, 1000);
		if (bLocal_183)
		{
			if (!unk_0xC80D31E4B587871C(Global_104516, 10))
			{
				unk_0x380C1E7B7740D618(0, func_468(iLocal_207 == 2, vLocal_242, vLocal_244), 1f, 20000, 0,25f, 0, func_117(iLocal_207 == 2, fLocal_246, fLocal_248));
			}
			else
			{
				unk_0x380C1E7B7740D618(0, func_468(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0,25f, 0, func_117(iLocal_207 == 2, fLocal_245, fLocal_247));
			}
			unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x380C1E7B7740D618(0, func_468(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0,25f, 0, func_117(iLocal_207 == 2, 172,6813f, 142,6717f));
			unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x1B16DD5C115FE009(uLocal_205);
		unk_0xAB30B1CF01A198C1(*uParam0, uLocal_205);
		unk_0xE9B3D12A64CC7C1A(*uParam0, true);
	}
	unk_0x14776E43F90DD454(iLocal_204);
}

Vector3 func_468(bool bParam0, vector3 vParam1, vector3 vParam2)//Position - 0x21C9E
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_469(int iParam0, var uParam1)//Position - 0x21CB9
{
	if (Global_88804 == iParam0)
	{
		Global_88805 = Global_88804;
		Global_88806 = uParam1;
		Global_88804 = 23;
	}
}

var func_470()//Position - 0x21CE1
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_471(int iParam0)//Position - 0x21CF1
{
	if (unk_0x34D11AB5BA7922C2(*iParam0))
	{
		unk_0xA68F7B004463AB6F(iParam0);
		*iParam0 = 0;
	}
}

void func_472(var uParam0)//Position - 0x21D0D
{
	unk_0xA68F7B004463AB6F(&uParam0);
}

void func_473()//Position - 0x21D1B
{
	unk_0x3E80C2F7BC665259(1);
	unk_0x4779448854314440(0);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0x9B47B379EE749C38(true);
}

void func_474()//Position - 0x21D3C
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_36))
	{
		unk_0x452336926718D62A(&iLocal_36);
	}
}

void func_475(var uParam0)//Position - 0x21D53
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!func_423(iVar0))
		{
			unk_0xB18E1DBC397238E1(iVar0, true, 0);
			unk_0xB3A8974D2C811672(iVar0, true, 0);
			unk_0xEDC33A771FAEB393(iVar0, false);
		}
	}
}

void func_476()//Position - 0x21D8A
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_461(0))
	{
		if (!func_484())
		{
			iVar0 = func_483();
			if (iVar0 != -1)
			{
				if (!func_478(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_477();
		}
	}
}

void func_477()//Position - 0x21DFB
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_85())
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
			switch (func_85())
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

int func_478(int iParam0)//Position - 0x21EEA
{
	int iVar0;
	int iVar1;
	
	func_477();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_482(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_479(&(Global_104555.f_2353.f_539), iVar1);
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

void func_479(var uParam0, int iParam1)//Position - 0x22001
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
			if (!func_481(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_480(&(uParam0->f_2276[iVar0]));
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

void func_480(var uParam0)//Position - 0x221CA
{
	*uParam0 = -15;
}

int func_481(int iParam0, var uParam1, float fParam2)//Position - 0x221D8
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
			return func_481(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_481(8, uParam1, fParam2);
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

void func_482(int iParam0, bool bParam1)//Position - 0x22B47
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

int func_483()//Position - 0x22B85
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

int func_484()//Position - 0x22BBA
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, bool bParam1)//Position - 0x22BF8
{
	if (unk_0x3AB6A1A9084FB0A4(func_487()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x4759A34EB65CCA39(func_487(), func_470()))
		{
			return;
		}
		if (!unk_0x3AB6A1A9084FB0A4(func_486()))
		{
			if (!unk_0x4759A34EB65CCA39(func_486(), func_470()))
			{
				return;
			}
		}
	}
	if (Global_88804 == 23)
	{
		Global_88806 = 10;
		Global_88804 = iParam0;
	}
}

var func_486()//Position - 0x22C5D
{
	return Global_88811;
}

int func_487()//Position - 0x22C69
{
	return Global_88810;
}

void func_488()//Position - 0x22C75
{
	if (iLocal_167 == 1)
	{
		return;
	}
	func_309();
	unk_0x1338C63C6C9CC948("Darts");
	iLocal_167 = 1;
}

int func_489(int iParam0)//Position - 0x22C98
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

