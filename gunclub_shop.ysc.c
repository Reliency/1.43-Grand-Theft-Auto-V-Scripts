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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 10;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 2;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 8;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	struct<4> Local_98 = { 0, 0, 0, 0 } ;
	var uLocal_99[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	vector3 vLocal_109 = { 0f, 0f, 0f };
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	char* sLocal_140 = NULL;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	bool bLocal_147 = 0;
	struct<882> Local_148 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	bool bLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	bool bLocal_196 = 0;
	bool bLocal_197 = 0;
	int iLocal_198[2] = { 0, 0 };
	int iLocal_199[2] = { 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	vector3 vLocal_202 = { 0f, 0f, 0f };
	bool bLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	bool bLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	bool bLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	char cLocal_216[64] = "";
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	bool bLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = 0;
	int iLocal_228 = 0;
	struct<20> Local_229 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_230 = 0;
	float fLocal_231 = 0f;
	bool bLocal_232 = 0;
	int iLocal_233[110] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	bool bLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	float fLocal_246 = 0f;
	float fLocal_247 = 0f;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	bool bLocal_251 = 0;
	bool bLocal_252 = 0;
	struct<6> Local_253 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_254 = 0;
	struct<11> Local_255 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_256 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_257 = { 0f, 0f, 0f };
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_96 = ((0,05f + 0,275f) - 0,01f);
	iLocal_179 = unk_0x63A6486593EC7EC3(8000, 16000);
	fLocal_231 = 0,001f;
	fLocal_246 = 4f;
	fLocal_247 = -98f;
	vLocal_248 = { 0f, 0f, 0f };
	iLocal_100 = uScriptParam_264;
	if (!unk_0xC80D31E4B587871C(Global_1369394, 1))
	{
		if (iLocal_100 == 28)
		{
			unk_0x872F1C1F8587CCC7(&Global_1369394, 1);
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iLocal_100]), 16);
	func_1149();
	func_1148(iLocal_100);
	while (!func_1147())
	{
		system::wait(0);
	}
	func_1146();
	func_1141(&Global_4265503);
	if (func_1140(1))
	{
		iLocal_106 = 1;
	}
	while (true)
	{
		system::wait(0);
		unk_0xD67F08F0EFD84A54(2);
		unk_0xD67F08F0EFD84A54(0);
		if (iLocal_262)
		{
			func_1138(1, 0);
			iLocal_262 = 0;
		}
		if (func_1137(iLocal_100))
		{
			if (!iLocal_230)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_148.f_12) && !unk_0x3AB6A1A9084FB0A4(Local_148.f_12))
				{
					if (func_1136(0))
					{
						unk_0x94433067C90B34A5(Local_148.f_12, false);
					}
					iLocal_230 = 1;
				}
			}
		}
		else if (iLocal_230)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_148.f_12) && !unk_0x3AB6A1A9084FB0A4(Local_148.f_12))
			{
				if (func_1136(0))
				{
					unk_0x94433067C90B34A5(Local_148.f_12, true);
				}
				iLocal_230 = 0;
			}
		}
		func_1135(&(Local_148.f_12));
		if (func_1134(iLocal_100) && !func_1124(&Local_148, iLocal_100))
		{
			if (func_1123(&Local_148))
			{
				func_1122(iLocal_100);
				func_1114(&Local_148, &(Local_98.f_3), 0, 0);
				func_1107(&Local_148, &(Local_148.f_106));
				if (Local_148.f_9)
				{
					if (!func_1106(Local_148))
					{
						func_1098(&Local_148, &(Local_148.f_106), 0);
					}
					else
					{
						func_1097();
					}
				}
				func_1074();
				func_1068();
				func_1057();
				if (Local_148 == 46)
				{
					if (Global_1595538 != func_1056())
					{
						if (unk_0x9EB17624F44A8DA4() == Global_1595538)
						{
							func_1054();
						}
					}
				}
				else if (Local_148 == 47)
				{
					if (Global_1595542 != func_1056())
					{
						if (unk_0x9EB17624F44A8DA4() == Global_1595542)
						{
							func_1054();
						}
					}
					func_1054();
				}
				func_1053();
				func_1051();
				if (Local_148.f_7 && unk_0x3A711520F83BAE98())
				{
					unk_0x4FB260623DD93924(0, 44, 1);
				}
				if (Local_148.f_11 == 4)
				{
					Global_2458256 = 1;
				}
				else
				{
					Global_2458256 = 0;
				}
				switch (Local_148.f_11)
				{
					case 0:
						func_1041();
						break;
					
					case 1:
						func_1037(0);
						if (func_1036(Local_148))
						{
							func_1024(Local_148, 0, 0);
							func_1024(Local_148, 0, 1);
						}
						func_1023();
						if (Local_148.f_11 == 2)
						{
							if (unk_0x3A711520F83BAE98())
							{
								iLocal_198[0] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), unk_0x63A6486593EC7EC3(4000, 5000));
								iLocal_198[1] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 0);
							}
							else
							{
								iLocal_199[0] = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(4000, 5000));
								iLocal_199[1] = unk_0x53C562FD2B9E3AB0();
							}
							vLocal_202 = { 0f, 0f, 0f };
							func_1014();
						}
						break;
					
					case 2:
						func_1014();
						func_1010(&Local_148, &(Local_148.f_106));
						break;
					
					case 3:
						if (func_1036(Local_148))
						{
							func_1024(Local_148, 0, 0);
							func_1024(Local_148, 0, 1);
						}
						func_1008();
						if (Local_148 == 46)
						{
							if (Global_1595538 != func_1056())
							{
								if (unk_0x9EB17624F44A8DA4() == Global_1595538)
								{
									func_987();
								}
							}
						}
						else if (Local_148 == 47)
						{
							if (Global_1595542 != func_1056())
							{
								if (unk_0x9EB17624F44A8DA4() == Global_1595542)
								{
									func_987();
								}
							}
						}
						else
						{
							func_987();
						}
						func_984();
						if (Local_148 != 46 && Local_148 != 47)
						{
							func_983();
						}
						break;
					
					case 4:
						func_345();
						func_1010(&Local_148, &(Local_148.f_106));
						break;
					
					case 5:
						Local_148.f_11 = 1;
						break;
					}
			}
		}
		else
		{
			func_232(0);
		}
		if (Local_148 == 46)
		{
			if (Global_2492413)
			{
				if (!unk_0xC80D31E4B587871C(Local_148.f_709, 14))
				{
					iLocal_262 = 1;
					unk_0x872F1C1F8587CCC7(&(Local_148.f_709), 14);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_148.f_709, 14))
			{
				func_34(0, 0);
				unk_0x0EE72DB1CD8A3B86(&(Local_148.f_709), 14);
			}
		}
		else if (Local_148 == 47)
		{
			if (Global_2492413)
			{
				if (!unk_0xC80D31E4B587871C(Local_148.f_709, 14))
				{
					iLocal_262 = 1;
					unk_0x872F1C1F8587CCC7(&(Local_148.f_709), 14);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_148.f_709, 14))
			{
				func_34(0, 1);
				unk_0x0EE72DB1CD8A3B86(&(Local_148.f_709), 14);
			}
			if (Local_148.f_11 >= 4)
			{
				if (!unk_0xC80D31E4B587871C(Local_148.f_709, 16))
				{
					if (func_34(0, 0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_148.f_709), 16);
					}
				}
			}
			else
			{
				if (unk_0xC80D31E4B587871C(Local_148.f_709, 16))
				{
					func_1138(1, 1);
					unk_0x0EE72DB1CD8A3B86(&(Local_148.f_709), 16);
				}
				Global_2458257 = 0;
			}
		}
		if (func_27(&Local_148))
		{
			func_21();
		}
		func_1();
	}
}

void func_1()//Position - 0x516
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_148.f_9 && unk_0x3A711520F83BAE98())
	{
		uLocal_99[unk_0x9EB17624F44A8DA4()] = Global_92885.f_1322[Local_148];
		if (Local_148.f_880)
		{
			if (unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), Local_148.f_881))
			{
				if (!unk_0xC80D31E4B587871C(Global_92885.f_1384, 26))
				{
					unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 26);
				}
				if ((!unk_0xC80D31E4B587871C(Global_92885.f_1322[Local_148], 0) && !unk_0xC80D31E4B587871C(Global_92885.f_1322[Local_148], 5)) && (!unk_0x6ADD12BF4D6D2587(Local_148.f_12) || unk_0x3AB6A1A9084FB0A4(Local_148.f_12)))
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (func_20(unk_0xF6A72924028F588B(iVar0), 1, 1))
						{
							if (unk_0xC80D31E4B587871C(uLocal_99[iVar0], 5))
							{
								unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 26);
								unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 28);
								iVar0 = 33;
							}
						}
						iVar0++;
					}
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 26);
					unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 28);
				}
				if (Global_1573868)
				{
					vVar1 = { func_9(Local_148, 0) };
					iVar2 = unk_0xCBD07018689DF383(vVar1, 25f, 1138881502, 0, 0, 1);
					if (unk_0x6ADD12BF4D6D2587(iVar2))
					{
						iVar3 = unk_0xC0765AFBFA616644(vVar1, func_7(Local_148));
						iVar4 = unk_0x1ACD6691B9C9AA46(iVar2);
						if (iVar3 != 0 && iVar3 == iVar4)
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 26);
							unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 28);
						}
					}
				}
				if (Global_2512808.f_4778)
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 26);
					unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 28);
				}
				Local_148.f_880 = 0;
			}
		}
		else
		{
			Local_148.f_881 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 2000);
			Local_148.f_880 = 1;
		}
		if (unk_0xC80D31E4B587871C(Global_92885.f_1384, 26))
		{
			if (!unk_0xC80D31E4B587871C(Global_92885.f_1384, 27))
			{
				if (func_5(Local_148))
				{
					func_2(Local_148, 1, 0, 1);
					unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 27);
					if (unk_0xC80D31E4B587871C(Global_92885.f_1384, 28))
					{
						unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 28);
					}
				}
			}
		}
		else if (!unk_0xC80D31E4B587871C(Global_92885.f_1384, 28))
		{
			if (func_5(Local_148))
			{
				func_2(Local_148, 0, 0, 1);
				unk_0x872F1C1F8587CCC7(&(Global_92885.f_1384), 28);
				if (unk_0xC80D31E4B587871C(Global_92885.f_1384, 27))
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1384), 27);
				}
			}
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x793
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
			iVar1 = 3;
		}
		else
		{
			iVar0 = 3;
			iVar1 = 4;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = func_4(iParam0, iVar2);
		if (iVar3 != 226)
		{
			Var4 = { func_3(iVar3) };
			if (!unk_0x546F10CBA6C484DA(Var4.f_5))
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					unk_0x050E4C90F7375618(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
				}
			}
			if (unk_0x546F10CBA6C484DA(Var4.f_5))
			{
				if (unk_0x89EEA6FA8DE504F4(Var4.f_5))
				{
					if (unk_0x656A318921183B10(Var4.f_5) == iVar1)
					{
						unk_0xB94AAB49E0BB01DB(Var4.f_5, iVar0, iParam3, 1);
					}
				}
				else
				{
					unk_0xA6C11C917FD488A6(Var4.f_5);
				}
			}
		}
		iVar2++;
	}
}

struct<7> func_3(int iParam0)//Position - 0x865
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

int func_4(int iParam0, int iParam1)//Position - 0x346E
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

int func_5(int iParam0)//Position - 0x38EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = func_6(iParam0, iVar2);
		if (iVar1 != 0)
		{
			if (unk_0x546F10CBA6C484DA(iVar1))
			{
				if (!unk_0x89EEA6FA8DE504F4(iVar1))
				{
					unk_0xA6C11C917FD488A6(iVar1);
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1)//Position - 0x393B
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 183249434;
				}
				else if (iParam1 == 1)
				{
					return 758345384;
				}
			}
			break;
		
		case 1:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1804701345;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1403601067;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -2031139496;
				}
			}
			break;
		
		case 4:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1796834809;
				}
			}
			break;
		
		case 5:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 96153298;
				}
			}
			break;
		
		case 6:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -281080954;
				}
			}
			break;
		
		case 7:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1069262641;
				}
				else if (iParam1 == 1)
				{
					return 1968521986;
				}
			}
			break;
		
		case 8:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -2143706301;
				}
				else if (iParam1 == 1)
				{
					return -1403421822;
				}
			}
			break;
		
		case 9:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1950137670;
				}
				else if (iParam1 == 1)
				{
					return 1226259807;
				}
			}
			break;
		
		case 10:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1090833557;
				}
				else if (iParam1 == 1)
				{
					return 897332612;
				}
			}
			break;
		
		case 11:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1095946640;
				}
				else if (iParam1 == 1)
				{
					return 801975945;
				}
			}
			break;
		
		case 12:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -167996547;
				}
				else if (iParam1 == 1)
				{
					return -1935818563;
				}
			}
			break;
		
		case 13:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1891185217;
				}
				else if (iParam1 == 1)
				{
					return 1236591681;
				}
			}
			break;
		
		case 14:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1980808685;
				}
			}
			break;
		
		case 15:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1352749757;
				}
			}
			break;
		
		case 16:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -566554453;
				}
			}
			break;
		
		case 17:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1284749450;
				}
			}
			break;
		
		case 18:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 261851994;
				}
				else if (iParam1 == 1)
				{
					return 217646625;
				}
			}
			break;
		
		case 19:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1801139578;
				}
				else if (iParam1 == 1)
				{
					return -2123275866;
				}
			}
			break;
		
		case 20:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1312689981;
				}
				else if (iParam1 == 1)
				{
					return -595055661;
				}
			}
			break;
		
		case 22:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -265260897;
				}
			}
			break;
		
		case 23:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1284867488;
				}
			}
			break;
		
		case 24:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 302307081;
				}
			}
			break;
		
		case 25:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -681886015;
				}
			}
			break;
		
		case 26:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -2086556500;
				}
			}
			break;
		
		case 27:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1496386696;
				}
			}
			break;
		
		case 39:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1871080926;
				}
			}
			else if (iParam1 == 0)
			{
				return -1871080926;
			}
			break;
		
		case 40:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1168079979;
				}
			}
			else if (iParam1 == 0)
			{
				return 1168079979;
			}
			break;
		
		case 41:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1206354175;
				}
			}
			else if (iParam1 == 0)
			{
				return 1206354175;
			}
			break;
		
		case 42:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1200466273;
				}
				else if (iParam1 == 1)
				{
					return -1038180727;
				}
			}
			else if (iParam1 == 0)
			{
				return 1200466273;
			}
			else if (iParam1 == 1)
			{
				return -1038180727;
			}
			break;
		
		case 43:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -459199009;
				}
				else if (iParam1 == 1)
				{
					return 1391004277;
				}
			}
			else if (iParam1 == 0)
			{
				return -459199009;
			}
			else if (iParam1 == 1)
			{
				return 1391004277;
			}
			break;
		
		case 44:
			if (unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -288764223;
				}
			}
			else if (iParam1 == 0)
			{
				return -288764223;
			}
			break;
		
		case 28:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1071759151;
				}
				else if (iParam1 == 1)
				{
					return -2119023917;
				}
			}
			break;
		
		case 29:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1488490473;
				}
				else if (iParam1 == 1)
				{
					return -511187813;
				}
			}
			break;
		
		case 30:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -248569395;
				}
				else if (iParam1 == 1)
				{
					return 989443413;
				}
			}
			break;
		
		case 31:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 2022251829;
				}
				else if (iParam1 == 1)
				{
					return 649820567;
				}
			}
			break;
		
		case 32:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 537455378;
				}
				else if (iParam1 == 1)
				{
					return 1121431731;
				}
			}
			break;
		
		case 33:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1437380438;
				}
				else if (iParam1 == 1)
				{
					return -946336965;
				}
			}
			break;
		
		case 34:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 1893144650;
				}
				else if (iParam1 == 1)
				{
					return 435841678;
				}
			}
			break;
		
		case 35:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return 948508314;
				}
				else if (iParam1 == 1)
				{
					return -1796714665;
				}
			}
			break;
		
		case 36:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1155247245;
				}
				else if (iParam1 == 1)
				{
					return 782482084;
				}
			}
			break;
		
		case 37:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -1194470801;
				}
				else if (iParam1 == 1)
				{
					return -2129698061;
				}
			}
			break;
		
		case 38:
			if (!unk_0x3A711520F83BAE98())
			{
				if (iParam1 == 0)
				{
					return -675817295;
				}
				else if (iParam1 == 1)
				{
					return 2121442868;
				}
			}
			break;
	}
	return 0;
}

char* func_7(int iParam0)//Position - 0x40C0
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_8(Global_94374);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
	}
	return "";
}

char* func_8(int iParam0)//Position - 0x43B2
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_9(int iParam0, bool bParam1)//Position - 0x4485
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
			return func_19(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_1056())
			{
				if (func_18(Global_1595538))
				{
					return func_11(2, 2);
				}
				else if (func_10(Global_1595538))
				{
					return func_11(45, 3);
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

int func_10(int iParam0)//Position - 0x4A24
{
	if (iParam0 != func_1056())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_11(int iParam0, int iParam1)//Position - 0x4A82
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_1056())
	{
		if (iParam1 == 3)
		{
			if (func_12(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_12(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_12(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x4B30
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_17(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_17(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_15(iParam0) };
	}
	else
	{
		Var2 = { func_14(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_13(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_13(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_13(vector3 vParam0, float fParam1)//Position - 0x4BC5
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

struct<6> func_14(int iParam0)//Position - 0x4C09
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

struct<6> func_15(int iParam0)//Position - 0x4D8D
{
	return func_16(iParam0);
}

struct<6> func_16(int iParam0)//Position - 0x4D9B
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

int func_17(int iParam0, var uParam1)//Position - 0x5862
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

int func_18(int iParam0)//Position - 0x58E4
{
	if (iParam0 != func_1056())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_19(int iParam0)//Position - 0x5942
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

int func_20(int iParam0, bool bParam1, bool bParam2)//Position - 0x5ADF
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

void func_21()//Position - 0x5B29
{
	func_232(1);
	func_22(&Local_148);
}

void func_22(var uParam0)//Position - 0x5B3C
{
	int iVar0;
	
	func_26(&(uParam0->f_106));
	func_25(uParam0);
	func_24(&(uParam0->f_710));
	func_23(&(uParam0->f_174));
	uParam0->f_709 = 0;
	iVar0 = 0;
	while (iVar0 < 110)
	{
		uParam0->f_226.f_116[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_226.f_111)
	{
		uParam0->f_226.f_111[iVar0] = 0;
		iVar0++;
	}
}

void func_23(var uParam0)//Position - 0x5BAD
{
	uParam0->f_1 = { 0f, 0f, 0f };
	StringCopy(&(uParam0->f_7), "", 16);
	uParam0->f_31 = { 0f, 0f, 0f };
	uParam0->f_34 = 0f;
	uParam0->f_35 = { 0f, 0f, 0f };
	uParam0->f_38 = 0f;
	uParam0->f_39 = { 0f, 0f, 0f };
	uParam0->f_42 = { 0f, 0f, 0f };
	uParam0->f_45 = { 0f, 0f, 0f };
}

void func_24(var uParam0)//Position - 0x5BFD
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

void func_25(var uParam0)//Position - 0x5C18
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_98 = 0;
	uParam0->f_9 = 0;
	uParam0->f_11 = 0;
	uParam0->f_87 = 0;
	uParam0->f_12.f_1 = 0;
	uParam0->f_12.f_2 = { 0f, 0f, 0f };
	uParam0->f_12.f_5 = 0f;
	uParam0->f_12.f_6 = { 0f, 0f, 0f };
	uParam0->f_12.f_9 = 0f;
	uParam0->f_12.f_10 = { 0f, 0f, 0f };
	uParam0->f_12.f_13 = 0f;
	uParam0->f_12.f_17 = 0;
	uParam0->f_12.f_14 = 0;
	uParam0->f_30.f_2 = { 0f, 0f, 0f };
	uParam0->f_30.f_5 = 0f;
	uParam0->f_30.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_38[iVar0 /*12*/].f_11 = 0;
		uParam0->f_38[iVar0 /*12*/] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)//Position - 0x5CDB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	StringCopy(&(uParam0->f_11), "", 16);
	uParam0->f_30 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_31 = 0;
}

int func_27(var uParam0)//Position - 0x5D53
{
	if (uParam0->f_9)
	{
		if (func_28(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (func_28(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_92885.f_16)
		{
			return 1;
		}
		if (Global_70856)
		{
			if (Global_1312488.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 82,34222f, -1310,278f, 25,77012f, 142,8917f, -1274,154f, 46,51249f, 62f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x5E05
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_33() == 0)
		{
			return unk_0xC80D31E4B587871C(func_29(func_32(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x5E65
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_30(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x5E97
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_31()//Position - 0x5ECB
{
	return Global_1312736;
}

int func_32(int iParam0)//Position - 0x5ED7
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

int func_33()//Position - 0x61BC
{
	return Global_25233;
}

int func_34(int iParam0, bool bParam1)//Position - 0x61C7
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	
	bVar0 = false;
	if (iParam0 & 1 != 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (iParam0 & 1 != 0)
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (iParam0 & 8 != 0)
	{
		bVar2 = true;
	}
	bVar9 = true;
	bVar10 = true;
	bVar11 = false;
	iVar19 = 1;
	iVar20 = 1;
	bVar21 = true;
	if (iParam0 & 2 != 0 || iParam0 & 4 != 0)
	{
		bVar21 = false;
	}
	if (!bVar21)
	{
		iVar19 = 22;
		iVar20 = 5;
	}
	if (func_231(Local_148))
	{
		iVar19 = 8;
	}
	iVar6 = 0;
	while (iVar6 <= iVar19)
	{
		iVar7 = 0;
		while (iVar7 <= iVar20)
		{
			if (!bVar21)
			{
				iVar3 = iVar6;
				iVar4 = iVar7;
			}
			else
			{
				iVar3 = iLocal_204;
				iVar4 = iLocal_205;
			}
			iVar15 = (iVar3 * 5 + iVar4);
			bVar10 = true;
			bVar11 = false;
			if ((iParam0 & 4 != 0 && !bLocal_206) && !func_231(Local_148))
			{
				if ((((((iVar3 == 0 || iVar3 == 1) || iVar3 == 2) || iVar3 == 10) || iVar3 == 14) || iVar3 == 15) || (iVar3 == 17 && iVar4 > 0))
				{
					bVar11 = true;
				}
			}
			if (func_196(Local_148, &Global_4265503, &Var14, iVar3, iVar4, 0, 0))
			{
				if (func_181(Var14, Var14.f_24, bVar1, Local_148) && !bVar11)
				{
					bVar8 = false;
					if (Var14.f_24 == 3)
					{
						if (iVar4 == 0)
						{
							iVar12 = joaat("prop_armour_pickup");
						}
						else if (iVar4 == 1)
						{
							iVar12 = joaat("prop_bodyarmour_02");
						}
						else if (iVar4 == 2)
						{
							iVar12 = joaat("prop_bodyarmour_03");
						}
						else if (iVar4 == 3)
						{
							iVar12 = joaat("prop_bodyarmour_04");
						}
						else if (iVar4 == 4)
						{
							iVar12 = joaat("prop_bodyarmour_05");
						}
					}
					else if (Var14.f_24 == 4)
					{
						iVar12 = joaat("p_parachute_s_shop");
					}
					else if (Var14.f_24 == 7)
					{
						iVar12 = func_180(&Global_4265503, Var14.f_23);
					}
					else if (Var14.f_24 == 6)
					{
						iVar12 = -1502580877;
					}
					else if (Var14 == joaat("weapon_knife"))
					{
						iVar12 = -518344816;
					}
					else if (Var14 == joaat("weapon_bottle"))
					{
						iVar12 = -789123952;
					}
					else if (Var14 == joaat("weapon_dagger"))
					{
						iVar12 = 1725061196;
					}
					else if (Var14 == joaat("weapon_hatchet"))
					{
						iVar12 = 173095431;
					}
					else
					{
						iVar12 = unk_0xD50D486F1F311BFC(Var14);
						bVar8 = true;
					}
					if (unk_0x6ADD12BF4D6D2587(Local_148.f_226[iVar15]) && unk_0x82FF3DFBC3965CC0(Local_148.f_226[iVar15]) != iVar12)
					{
						iVar12 = unk_0x82FF3DFBC3965CC0(Local_148.f_226[iVar15]);
					}
					if (iVar12 != 0)
					{
						if (bVar8)
						{
							unk_0x04562CD765E0C517(Var14, 0, 0);
							if (!unk_0x0A198E59F03B0E6F(Var14))
							{
								bVar9 = false;
								bVar10 = false;
								iLocal_212 = iVar15;
							}
						}
						else
						{
							unk_0x6FF834D85E2DD4C6(iVar12);
							if (!unk_0x9A0B2ED5055D3F0B(iVar12))
							{
								bVar9 = false;
								bVar10 = false;
								iLocal_212 = iVar15;
							}
						}
						if (!bParam1)
						{
							if (bVar8)
							{
								iVar5 = 0;
								while (func_174(&Local_253, Var14, iVar5, 0))
								{
									if ((Local_253 != 0 && func_172(Local_253)) && ((Local_253.f_1 || (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), Var14, 0) && unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), Var14, Local_253))) || Local_253.f_4 == joaat("WAPClip")))
									{
										iVar13 = unk_0x7FAE56FC172FD992(Local_253);
										if (iVar13 != 0)
										{
											unk_0x6FF834D85E2DD4C6(iVar13);
											func_171(Local_253);
											if (!unk_0x9A0B2ED5055D3F0B(iVar13) || !func_170(Local_253))
											{
												bVar9 = false;
												bVar10 = false;
												iLocal_212 = iVar15;
											}
										}
									}
									iVar5++;
								}
								iVar5 = 0;
								while (func_174(&Local_253, Var14, iVar5, 0))
								{
									if ((Local_253 != 0 && func_172(Local_253)) && ((Local_253.f_1 || (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), Var14, 0) && unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), Var14, Local_253))) || Local_253.f_4 == joaat("WAPClip")))
									{
										if (Local_253.f_4 == joaat("gun_root") && !func_169(Var14))
										{
											iVar16 = unk_0xC72D602927DCEA3F(Local_253);
											iVar17 = 0;
											while (iVar17 <= (iVar16 - 1))
											{
												iVar18 = unk_0x13C5B1E09D8A8F0F(Local_253, iVar17);
												if (iVar18 != 0)
												{
													unk_0x6FF834D85E2DD4C6(iVar18);
													if (!unk_0x9A0B2ED5055D3F0B(iVar18))
													{
														bVar9 = false;
														bVar10 = false;
														iLocal_212 = iVar15;
													}
												}
												iVar17++;
											}
										}
									}
									iVar5++;
								}
							}
						}
						if (bVar0)
						{
							if (bVar10)
							{
								if (unk_0x6ADD12BF4D6D2587(Local_148.f_226[iVar15]) && (unk_0x82FF3DFBC3965CC0(Local_148.f_226[iVar15]) != iVar12 || iLocal_238))
								{
									Var14.f_13 = { unk_0xB3328BA8976B416C(Local_148.f_226[iVar15], 1) };
									Var14.f_16 = { unk_0xDB824D597B53CC40(Local_148.f_226[iVar15], 2) };
									unk_0x452336926718D62A(&(Local_148.f_226[iVar15]));
								}
								if (!unk_0x6ADD12BF4D6D2587(Local_148.f_226[iVar15]))
								{
									if (func_181(Var14, Var14.f_24, bVar1, Local_148) && !bVar11)
									{
										if (((((((Var14.f_24 == 3 || Var14.f_24 == 4) || Var14.f_24 == 7) || Var14.f_24 == 6) || Var14 == joaat("weapon_knife")) || Var14 == joaat("weapon_bottle")) || Var14 == joaat("weapon_dagger")) || Var14 == joaat("weapon_hatchet"))
										{
											Local_148.f_226[iVar15] = func_168(iVar12, Var14.f_1);
										}
										else
										{
											Local_148.f_226[iVar15] = unk_0xD50A2A2DB03A5CF0(Var14, 1, Var14.f_1, 1, 1065353216, 0, 0, 1);
											unk_0x63CDEB6D58456C0A(Local_148.f_226[iVar15], 0);
										}
										if (unk_0x6ADD12BF4D6D2587(Local_148.f_226[iVar15]))
										{
											if (bVar2)
											{
												unk_0xB3A8974D2C811672(Local_148.f_226[iVar15], true, 0);
												unk_0xAA93B7B448E10E40(Local_148.f_226[iVar15], Var14.f_1, 0, 0, 1);
												unk_0x59AF3B40AE222194(Local_148.f_226[iVar15], Var14.f_4, 2, 1);
											}
											else
											{
												unk_0xB3A8974D2C811672(Local_148.f_226[iVar15], false, 0);
												unk_0xAA93B7B448E10E40(Local_148.f_226[iVar15], Var14.f_1 + Vector(-100f, 0f, 0f), 0, 0, 1);
												unk_0x59AF3B40AE222194(Local_148.f_226[iVar15], Var14.f_4, 2, 1);
											}
											if (iVar12 == joaat("prop_ld_test_01"))
											{
												unk_0xB3A8974D2C811672(Local_148.f_226[iVar15], false, 0);
											}
											unk_0x94433067C90B34A5(Local_148.f_226[iVar15], false);
											Local_148.f_226.f_116[iVar15 /*3*/] = { Var14.f_4 };
											func_87(&(Local_148.f_226[iVar15]), &Var14);
											if (func_86(&Local_253, Var14, joaat("gun_root")))
											{
												func_80(&(Local_148.f_226[iVar15]), &Var14);
											}
											if (!func_53(Var14, Var14.f_24, iVar4) || func_35(Local_148, Var14))
											{
												unk_0xCFA0B475EBE9E2B7(Local_148.f_226[iVar15], system::floor((255f * 0,5f)), true);
												if (Var14 == joaat("weapon_appistol") || Var14 == joaat("weapon_combatpistol"))
												{
													unk_0xE99F7351156C1D21(Local_148.f_226[iVar15], 0,05f);
												}
											}
											unk_0x0EE72DB1CD8A3B86(&(Local_148.f_226.f_111[(iVar15 / 32)]), (iVar15 % 32));
											iLocal_209 = 0;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar6++;
	}
	if (((!bVar2 && bVar21) && bVar10) && !bVar11)
	{
		iLocal_205++;
		if (iLocal_205 >= 5)
		{
			iLocal_205 = 0;
			iLocal_204++;
			if (iLocal_204 >= 22)
			{
				iLocal_204 = 0;
				if (iLocal_212 >= 110)
				{
					iLocal_212 = -1;
					bLocal_206 = true;
				}
				else
				{
					iLocal_212 = 110;
				}
			}
		}
	}
	if (bVar9)
	{
		if (!bVar0)
		{
			return 1;
		}
		if (!bVar21)
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x693B
{
	int iVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_231(iParam0))
		{
			if (func_52(iParam1))
			{
				if (func_43(1623028892, iParam1, -1))
				{
					iVar0 = func_42(iParam1);
					if (iVar0 != 0)
					{
						if ((func_41(unk_0xFC1458A37D98B502(), iParam1) || func_37(func_40(iVar0), -1, -1)) || func_36(unk_0x684DC0C684AE74CA(iVar0), iVar0))
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

int func_36(int iParam0, int iParam1)//Position - 0x69B0
{
	if (iParam1 == joaat("weapon_knuckle"))
	{
		if (func_37(7450, -1, -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == joaat("weapon_musket"))
	{
		if (func_37(7454, -1, -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case -728555052:
			if (func_37(7450, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 416676503:
			if (func_37(7451, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1569042529:
			if (func_37(7456, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -1212426201:
			if (func_37(7455, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 860033945:
			if (func_37(7454, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1548507267:
			if (func_37(7457, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1159398588:
		case -957766203:
			if (func_37(7452, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 970310034:
			if (func_37(7453, -1, -1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	if (iParam1 == joaat("weapon_petrolcan") && func_37(7457, -1, -1))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1, int iParam2)//Position - 0x6B25
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar1 = func_39(iParam0, iParam1);
	uVar2 = func_38(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_38(int iParam0)//Position - 0x6B62
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

int func_39(int iParam0, int iParam1)//Position - 0x6E22
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
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

int func_40(int iParam0)//Position - 0x70C4
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 7387;
			break;
		
		case joaat("weapon_combatpistol"):
			return 7388;
			break;
		
		case joaat("weapon_appistol"):
			return 7389;
			break;
		
		case joaat("weapon_smg"):
			return 7390;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 7391;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 7392;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 7393;
			break;
		
		case joaat("weapon_mg"):
			return 7394;
			break;
		
		case joaat("weapon_combatmg"):
			return 7395;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 7396;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 7397;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 7398;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 7399;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 7400;
			break;
		
		case joaat("weapon_rpg"):
			return 7401;
			break;
		
		case joaat("weapon_minigun"):
			return 7402;
			break;
		
		case joaat("weapon_grenade"):
			return 7403;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 7404;
			break;
		
		case joaat("weapon_stickybomb"):
			return 7405;
			break;
		
		case joaat("weapon_molotov"):
			return 7406;
			break;
		
		case joaat("weapon_flare"):
			return 7407;
			break;
		
		case joaat("weapon_knife"):
			return 7408;
			break;
		
		case joaat("weapon_nightstick"):
			return 7409;
			break;
		
		case joaat("weapon_hammer"):
			return 7410;
			break;
		
		case joaat("weapon_pistol50"):
			return 7411;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 7412;
			break;
		
		case -947031628:
			return 7413;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 7414;
			break;
		
		case -572349828:
			return 7415;
			break;
		
		case 392730790:
			return 7416;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 7417;
			break;
		
		case joaat("weapon_bottle"):
			return 7418;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 7419;
			break;
		
		case joaat("weapon_heavypistol"):
			return 7420;
			break;
		
		case joaat("weapon_snspistol"):
			return 7421;
			break;
		
		case joaat("weapon_dagger"):
			return 7422;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 7423;
			break;
		
		case joaat("weapon_gusenberg"):
			return 7424;
			break;
		
		case joaat("weapon_flaregun"):
			return 7425;
			break;
		
		case joaat("weapon_firework"):
			return 7426;
			break;
		
		case joaat("weapon_musket"):
			return 7427;
			break;
		
		case -1523701417:
			return 7428;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 7429;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 7430;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 7431;
			break;
		
		case joaat("weapon_proxmine"):
			return 7432;
			break;
		
		case joaat("weapon_snowball"):
			return 7433;
			break;
		
		case joaat("weapon_combatpdw"):
			return 7434;
			break;
		
		case joaat("weapon_knuckle"):
			return 7435;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 7436;
			break;
		
		case joaat("weapon_hatchet"):
			return 7437;
			break;
		
		case joaat("weapon_compactrifle"):
			return 7438;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 7439;
			break;
		
		case joaat("weapon_machete"):
			return 7440;
			break;
		
		case joaat("weapon_machinepistol"):
			return 7441;
			break;
		
		case joaat("weapon_flashlight"):
			return 7442;
			break;
		
		case joaat("weapon_revolver"):
			return 7443;
			break;
		
		case joaat("weapon_switchblade"):
			return 7444;
			break;
		
		case joaat("weapon_microsmg"):
			return 7445;
			break;
		
		case joaat("weapon_heavysniper"):
			return 7446;
			break;
		
		case joaat("weapon_petrolcan"):
			return 7447;
			break;
		
		case joaat("weapon_golfclub"):
			return 7448;
			break;
		
		case joaat("weapon_bat"):
			return 7449;
			break;
		
		case joaat("weapon_crowbar"):
			return 7466;
			break;
		
		case 317205821:
			return 7621;
			break;
		
		case -853065399:
			return 7622;
			break;
		
		case 125959754:
			return 7623;
			break;
		
		case -1121678507:
			return 7624;
			break;
		
		case -1169823560:
			return 7625;
			break;
		
		case -1810795771:
			return 7626;
			break;
		
		case 419712736:
			return 7627;
			break;
		
		case -1075685676:
			return 15441;
			break;
		
		case 2024373456:
			return 15442;
			break;
		
		case 177293209:
			return 15443;
			break;
		
		case -608341376:
			return 15444;
			break;
		
		case 961495388:
			return 15445;
			break;
		
		case -86904375:
			return 15446;
			break;
		
		case -2066285827:
			return 18100;
			break;
		
		case 1785463520:
			return 18101;
			break;
		
		case 1432025498:
			return 18102;
			break;
		
		case -879347409:
			return 18103;
			break;
		
		case -2009644972:
			return 18104;
			break;
		
		case -1768145561:
			return 18105;
			break;
		
		case -1746263880:
			return 15995;
			break;
	}
	return 7386;
}

int func_41(int iParam0, int iParam1)//Position - 0x75C2
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			return unk_0xA8388473C755363D(iParam0, -1075685676, 0);
		
		case joaat("weapon_smg"):
			return unk_0xA8388473C755363D(iParam0, 2024373456, 0);
		
		case joaat("weapon_heavysniper"):
			return unk_0xA8388473C755363D(iParam0, 177293209, 0);
		
		case joaat("weapon_combatmg"):
			return unk_0xA8388473C755363D(iParam0, -608341376, 0);
		
		case joaat("weapon_assaultrifle"):
			return unk_0xA8388473C755363D(iParam0, 961495388, 0);
		
		case joaat("weapon_carbinerifle"):
			return unk_0xA8388473C755363D(iParam0, -86904375, 0);
		
		case joaat("weapon_pumpshotgun"):
			return unk_0xA8388473C755363D(iParam0, 1432025498, 0);
		
		case joaat("weapon_specialcarbine"):
			return unk_0xA8388473C755363D(iParam0, -1768145561, 0);
		
		case joaat("weapon_snspistol"):
			return unk_0xA8388473C755363D(iParam0, -2009644972, 0);
		
		case joaat("weapon_marksmanrifle"):
			return unk_0xA8388473C755363D(iParam0, 1785463520, 0);
		
		case joaat("weapon_revolver"):
			return unk_0xA8388473C755363D(iParam0, -879347409, 0);
		
		case joaat("weapon_bullpuprifle"):
			return unk_0xA8388473C755363D(iParam0, -2066285827, 0);
		
		default:
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x76CE
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return -1075685676;
		
		case joaat("weapon_smg"):
			return 2024373456;
		
		case joaat("weapon_assaultrifle"):
			return 961495388;
		
		case joaat("weapon_carbinerifle"):
			return -86904375;
		
		case joaat("weapon_combatmg"):
			return -608341376;
		
		case joaat("weapon_heavysniper"):
			return 177293209;
		
		case joaat("weapon_bullpuprifle"):
			return -2066285827;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 1785463520;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 1432025498;
			break;
		
		case joaat("weapon_revolver"):
			return -879347409;
			break;
		
		case joaat("weapon_snspistol"):
			return -2009644972;
			break;
		
		case joaat("weapon_specialcarbine"):
			return -1768145561;
			break;
	}
	return 0;
}

bool func_43(int iParam0, int iParam1, int iParam2)//Position - 0x7798
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar0 = func_47(iParam0, iParam1, iParam2);
	iVar1 = func_45(iParam0, iParam1);
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_44(int iParam0)//Position - 0x77CD
{
	return (iParam0 % 32);
}

int func_45(int iParam0, int iParam1)//Position - 0x77DA
{
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x77EA
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

var func_47(int iParam0, int iParam1, int iParam2)//Position - 0x9931
{
	var uVar0;
	
	uVar0 = func_29(func_48(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_48(int iParam0, int iParam1)//Position - 0x994C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_45(iParam0, iParam1);
	iVar1 = func_50(iVar0);
	if ((func_33() == 0 || func_49() == 0) || (func_33() == 999 && func_49() == 999))
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

int func_49()//Position - 0x9AAE
{
	return Global_25234;
}

int func_50(int iParam0)//Position - 0x9AB9
{
	return (iParam0 / 32);
}

bool func_51()//Position - 0x9AC6
{
	return Global_1312833;
}

int func_52(int iParam0)//Position - 0x9AD2
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_revolver"):
		case joaat("weapon_bullpuprifle"):
			return 1;
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x9B31
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_78(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 == 1)
	{
		return 1;
	}
	iVar2 = func_77(iParam0, &uVar1);
	if (iVar2 != -1)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_33() == 0)
		{
			if (func_76(iParam0))
			{
				if (Local_148 == 46 || Local_148 == 47)
				{
					return 1;
				}
			}
			if (func_72(iParam0))
			{
				return 1;
			}
			if (iParam0 == joaat("weapon_stungun"))
			{
				return 0;
			}
			if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return func_69(156);
				}
				else if (iParam2 == 1)
				{
					return func_69(157);
				}
				else if (iParam2 == 2)
				{
					return func_69(158);
				}
				else if (iParam2 == 3)
				{
					return func_69(159);
				}
				else if (iParam2 == 4)
				{
					return func_69(160);
				}
				else
				{
					return 1;
				}
			}
			if (iParam1 == 4)
			{
				return func_69(1);
			}
			return func_66(iParam0, -1, 0);
		}
	}
	else
	{
		if (iParam0 == joaat("weapon_unarmed"))
		{
			if (iParam1 == 3)
			{
				return 1;
			}
		}
		if (func_57(func_61(), iParam0) && !func_54(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x9C68
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(func_55(iParam0));
	iVar1 = func_44(func_55(iParam0));
	if (iVar0 > -1 && iVar1 > -1)
	{
		if (unk_0xC80D31E4B587871C(Global_92885.f_2[iVar0], iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x9CB0
{
	return func_56(iParam0);
}

int func_56(int iParam0)//Position - 0x9CBE
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

int func_57(int iParam0, int iParam1)//Position - 0xA1CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(iParam0))
	{
		if (func_59(iParam1))
		{
			return 1;
		}
		iVar0 = func_58(iParam0, iParam1);
		iVar1 = func_55(iParam1);
		iVar2 = func_44(iVar1);
		return unk_0xC80D31E4B587871C(iVar0, iVar2);
	}
	return 0;
}

var func_58(int iParam0, int iParam1)//Position - 0xA210
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_55(iParam1);
	iVar2 = func_50(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_unlock_0"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_unlock_0"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_unlock_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_unlock_1"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_unlock_1"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_unlock_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_unlock_2"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_unlock_2"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_unlock_2"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_59(int iParam0)//Position - 0xA32A
{
	int iVar0;
	struct<2> Var1;
	
	switch (iParam0)
	{
		case joaat("weapon_hammer"):
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"):
			return 1;
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x359D12B4F89DA5D6())
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (!unk_0x42683C90F2D005ED(Var1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_60(int iParam0)//Position - 0xA390
{
	return iParam0 < 3;
}

int func_61()//Position - 0xA39C
{
	func_62();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_62()//Position - 0xA3B5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_65(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_64(unk_0xFC1458A37D98B502());
			if (func_60(iVar0) && (!func_63(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_60(Global_104555.f_2353.f_539.f_4301))
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

bool func_63(int iParam0)//Position - 0xA4B2
{
	return Global_35861 == iParam0;
}

int func_64(int iParam0)//Position - 0xA4C0
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)//Position - 0xA4FD
{
	if (func_60(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_66(int iParam0, int iParam1, int iParam2)//Position - 0xA527
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_51())
	{
		return 0;
	}
	iVar0 = func_67(iParam0, iParam1);
	iVar1 = func_55(iParam0);
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

var func_67(int iParam0, int iParam1)//Position - 0xA55E
{
	var uVar0;
	
	uVar0 = func_29(func_68(iParam0), iParam1, 0);
	return uVar0;
}

int func_68(int iParam0)//Position - 0xA577
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_55(iParam0);
	iVar1 = func_50(iVar0);
	if ((func_33() == 0 || func_49() == 0) || (func_33() == 999 && func_49() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 676;
				break;
			
			case 1:
				return 677;
				break;
			
			case 2:
				return 2416;
				break;
			}
	}
	return 7872;
}

bool func_69(int iParam0)//Position - 0xA5F6
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar0 = func_70(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

var func_70(var uParam0)//Position - 0xA621
{
	var uVar0;
	
	uVar0 = func_29(func_71(uParam0, 999), -1, 0);
	return uVar0;
}

int func_71(var uParam0, int iParam1)//Position - 0xA63C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	if (((func_33() == 0 || func_49() == 0) || iParam1 == 0) || (func_33() == 999 && func_49() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 693;
				break;
			
			case 1:
				return 694;
				break;
			
			case 2:
				return 695;
				break;
			
			case 3:
				return 696;
				break;
			
			case 4:
				return 697;
				break;
			
			case 5:
				return 698;
				break;
			
			case 6:
				return 699;
				break;
			
			case 7:
				return 700;
				break;
			
			case 8:
				return 701;
				break;
			
			case 9:
				return 2050;
				break;
			
			case 10:
				return 2062;
				break;
			
			case 11:
				return 2089;
				break;
			
			case 12:
				return 2417;
				break;
			
			case 13:
				return 2936;
				break;
			
			case 14:
				return 5493;
				break;
			
			case 15:
				return 5497;
				break;
			
			case 16:
				return 5501;
				break;
			
			case 17:
				return 5505;
				break;
			
			case 18:
				return 5509;
				break;
			
			case 19:
				return 5513;
				break;
			
			case 20:
				return 5573;
				break;
			
			case 21:
				return 5577;
				break;
			
			case 22:
				return 5581;
				break;
			
			case 23:
				return 5585;
				break;
			
			case 24:
				return 5589;
				break;
			
			case 25:
				return 5593;
				break;
			
			case 26:
				return 5597;
				break;
			
			case 27:
				return 5618;
				break;
			
			case 28:
				return 5622;
				break;
			
			case 29:
				return 5626;
				break;
			
			case 30:
				return 5630;
				break;
			
			case 31:
				return 5634;
				break;
			
			case 32:
				return 5638;
				break;
			
			case 33:
				return 6448;
				break;
			
			case 34:
				return 6452;
				break;
			
			case 35:
				return 6456;
				break;
			
			case 36:
				return 6460;
				break;
			
			case 37:
				return 6464;
				break;
			
			case 38:
				return 6468;
				break;
			
			case 39:
				return 6472;
				break;
			}
	}
	return 7872;
}

int func_72(int iParam0)//Position - 0xA8EC
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_73())
		{
			if ((iParam0 == joaat("weapon_marksmanrifle") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == 125959754)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73()//Position - 0xA92E
{
	return (func_75() || func_74());
}

int func_74()//Position - 0xA944
{
	switch (unk_0x3930A99BA8A316E1())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_75()//Position - 0xA972
{
	switch (unk_0x2D3278CF74E4715B())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_76(int iParam0)//Position - 0xA9A0
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_heavysniper"):
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_revolver"):
		case joaat("weapon_bullpuprifle"):
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 1;
			break;
	}
	return 0;
}

int func_77(int iParam0, var uParam1)//Position - 0xAA47
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

int func_78(int iParam0)//Position - 0xAA82
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == joaat("object"))
	{
		return 1;
	}
	if (iParam0 == -61829581)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if ((((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
		if (iParam0 == joaat("weapon_hatchet"))
		{
			if (func_79() || Global_262145.f_19049)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_hatchet"):
				if (func_79())
				{
					if (Global_104555.f_9055.f_330[62 /*6*/])
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
				break;
			
			case joaat("weapon_railgun"):
				if (func_79())
				{
					if (Global_104555.f_9055.f_330[14 /*6*/])
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
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_hammer"):
				if (Global_104555.f_9055.f_330[1 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_snspistol"):
				if ((Global_104555.f_9055.f_330[1 /*6*/] || Global_104555.f_9055.f_330[43 /*6*/]) || Global_104555.f_9055.f_330[19 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				if (Global_104555.f_9055.f_330[90 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				if (Global_104555.f_9055.f_330[62 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				if (Global_104555.f_9055.f_330[29 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_104555.f_9055.f_330[74 /*6*/] || Global_104555.f_9055.f_330[38 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_musket"):
			case joaat("weapon_marksmanpistol"):
				if (Global_104555.f_9055.f_330[59 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				if (Global_104555.f_9055.f_330[28 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_104555.f_9055.f_330[39 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				if (Global_104555.f_9055.f_330[84 /*6*/] || Global_104555.f_9055.f_330[85 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				if (Global_104555.f_9055.f_330[93 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				if (Global_104555.f_9055.f_330[39 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_firework"):
				if (Global_104555.f_9055.f_330[28 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_proxmine"):
				if (Global_104555.f_9055.f_330[64 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_hominglauncher"):
				if (Global_104555.f_9055.f_330[14 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_knuckle"):
				if (Global_104555.f_9055.f_330[2 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				if (Global_104555.f_9055.f_330[92 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_machete"):
				if (Global_104555.f_9055.f_330[63 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				if (Global_104555.f_9055.f_330[41 /*6*/])
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
		}
		if (((((((((iParam0 == -572349828 || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == 392730790) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == -947031628) || iParam0 == -344484024) || iParam0 == joaat("weapon_pistol50")) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == joaat("weapon_hammer"))
		{
			return 1;
		}
	}
	return -1;
}

int func_79()//Position - 0xAF7B
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

void func_80(var uParam0, int iParam1)//Position - 0xB036
{
	int iVar0;
	
	if (!func_169(*iParam1))
	{
		if ((func_84(&Local_253, *iParam1, joaat("gun_root"), 0) != 0 && unk_0x82FF3DFBC3965CC0(*uParam0) == unk_0x7FAE56FC172FD992(func_84(&Local_253, *iParam1, joaat("gun_root"), 0))) || (func_84(&Local_253, *iParam1, joaat("gun_root"), 1) != 0 && unk_0x82FF3DFBC3965CC0(*uParam0) == unk_0x7FAE56FC172FD992(func_84(&Local_253, *iParam1, joaat("gun_root"), 1))))
		{
			while (func_174(&Local_253, *iParam1, iVar0, 0))
			{
				if (Local_253.f_4 != joaat("gun_root"))
				{
					if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), *iParam1, 0))
					{
						if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), *iParam1, Local_253))
						{
							if (unk_0x714669D9C29712E4(*uParam0, Local_253))
							{
								unk_0x287B533B0CDC89A1(*uParam0, Local_253);
								func_83(*uParam0, Local_253);
							}
							unk_0x0DF81B88D0C53746(*uParam0, Local_253);
							func_81(*uParam0, Local_253);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_81(int iParam0, int iParam1)//Position - 0xB133
{
	int iVar0;
	
	iVar0 = func_82(iParam1);
	if (iVar0 != 0)
	{
		unk_0x0DF81B88D0C53746(iParam0, iVar0);
	}
}

int func_82(int iParam0)//Position - 0xB151
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

void func_83(int iParam0, int iParam1)//Position - 0xB2D7
{
	int iVar0;
	
	iVar0 = func_82(iParam1);
	if (iVar0 != 0)
	{
		if (unk_0x714669D9C29712E4(iParam0, iVar0))
		{
			unk_0x287B533B0CDC89A1(iParam0, iVar0);
		}
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB300
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	
	func_85(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	iVar2 = 0;
	while (func_174(&Var0, iParam1, iVar1, 0))
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

void func_85(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB353
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_86(int iParam0, int iParam1, int iParam2)//Position - 0xB372
{
	struct<5> Var0;
	int iVar1;
	
	func_85(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	while (func_174(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_87(int iParam0, int iParam1)//Position - 0xB3B4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<7> Var8;
	struct<7> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		func_174(&Var9, *iParam1, (Local_148.f_106.f_2 - 2), 0);
		if (iParam1->f_24 == 0 || (func_86(&Var8, *iParam1, joaat("gun_root")) && func_167(iParam1)))
		{
			iVar10 = func_84(&Var8, *iParam1, joaat("gun_root"), 0);
			iVar11 = func_84(&Var8, *iParam1, joaat("gun_root"), 1);
			if (((unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0xD50D486F1F311BFC(*iParam1) || ((iVar10 != 0 && !func_169(*iParam1)) && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(iVar10))) || ((iVar11 != 0 && !func_169(*iParam1)) && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(iVar11))) || (func_86(&Var8, *iParam1, joaat("gun_root")) && func_167(iParam1)))
			{
				if (func_164(*iParam1, 0) != 0)
				{
					bVar13 = true;
					if (func_52(*iParam1) || !func_76(*iParam1))
					{
						if (Local_148.f_106.f_2 >= func_163() && Local_148.f_106.f_2 < (func_163() + func_164(*iParam1, 1)))
						{
							bVar13 = false;
						}
					}
					else if (func_169(*iParam1))
					{
						if (func_231(iLocal_100) && Local_148.f_106.f_5 == 5)
						{
							bVar13 = false;
						}
					}
					if (bVar13)
					{
						if (unk_0x372FE57306523B65(*iParam0) != 0)
						{
							unk_0x63CDEB6D58456C0A(*iParam0, 0);
						}
						if (func_231(iLocal_100) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), *iParam1, 0))
						{
							unk_0x63CDEB6D58456C0A(*iParam0, unk_0x3CC6ABB1D2EC7E28(unk_0xFC1458A37D98B502(), *iParam1));
						}
					}
					else if (unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0xD50D486F1F311BFC(*iParam1))
					{
						iVar1 = 0;
						while (iVar1 < unk_0xE13400DBD14776FE(*iParam1))
						{
							if (func_123(&Local_255, *iParam1, iVar1, 0))
							{
								if (Local_255.f_10 == 0)
								{
									if (func_120(*iParam1, (Local_148.f_106.f_2 - func_163())) == iVar1 && unk_0x372FE57306523B65(*iParam0) != Local_255.f_9)
									{
										if (Local_255.f_9 < 32)
										{
											unk_0x63CDEB6D58456C0A(*iParam0, Local_255.f_9);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				if (Local_148.f_106.f_5 == 6)
				{
					if (func_118(&Var8, &iVar12, *iParam1))
					{
						iVar1 = 0;
						while (iVar1 < func_117(*iParam1))
						{
							if (func_111(&Local_256, *iParam1, iVar1, 0))
							{
								if (Local_256.f_10 == 6)
								{
									if (iVar1 == (Local_148.f_106.f_2 - 40) && unk_0x8F472770392AC808(*iParam0, iVar12) != Local_256.f_9)
									{
										unk_0x73C964C86B32B073(*iParam0, iVar12, Local_256.f_9);
										func_110(iParam0, iVar12, Local_256.f_9);
									}
								}
							}
							iVar1++;
						}
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_148.f_709, 15))
				{
					if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), *iParam1, 0) && func_118(&Var8, &iVar12, *iParam1))
					{
						func_105(&Local_256, &iVar14, *iParam1);
						if (func_111(&Local_256, *iParam1, iVar14, 0))
						{
							unk_0x73C964C86B32B073(*iParam0, iVar12, Local_256.f_9);
							func_110(iParam0, iVar12, Local_256.f_9);
							unk_0x310756AA9ABB406D(unk_0xFC1458A37D98B502(), *iParam1, iVar12, Local_256.f_9);
							func_104(unk_0xFC1458A37D98B502(), *iParam1, iVar12, Local_256.f_9);
							iLocal_194 = Local_256.f_9;
							unk_0x0EE72DB1CD8A3B86(&(Local_148.f_709), 15);
						}
					}
					else
					{
						iLocal_194 = 0;
						unk_0x0EE72DB1CD8A3B86(&(Local_148.f_709), 15);
					}
				}
				while (func_174(&Var8, *iParam1, iVar0, 0))
				{
					if (Var8 != 0)
					{
						bVar2 = false;
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), *iParam1, 0))
						{
							if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), *iParam1, Var8))
							{
								if (Var8 == func_103(*iParam1))
								{
									bVar2 = false;
								}
								if (Var8.f_4 == joaat("gun_root"))
								{
									if (Local_148.f_106.f_2 < func_163())
									{
										bVar2 = true;
									}
									else
									{
										bVar2 = false;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
						}
						else if (Var8.f_1)
						{
							bVar2 = true;
						}
						if (Local_148.f_106.f_5 == 1)
						{
							if (func_231(Local_148))
							{
								if (!func_102(*iParam1))
								{
									if ((Local_148.f_106.f_2 - 2) == iVar0)
									{
										bVar2 = true;
									}
									if ((Local_148.f_106.f_2 - 2) != iVar0)
									{
										if (Var8.f_4 == Var9.f_4 && Var8.f_6 != Var9.f_6)
										{
											bVar2 = false;
										}
									}
								}
								else if (iVar0 == 0)
								{
									bVar2 = true;
								}
							}
							else
							{
								if ((Local_148.f_106.f_2 - 2) == iVar0)
								{
									bVar2 = true;
								}
								if ((Local_148.f_106.f_2 - 2) != iVar0)
								{
									if (Var8.f_4 == Var9.f_4 && Var8.f_6 != Var9.f_6)
									{
										bVar2 = false;
									}
								}
							}
						}
						if (Local_148.f_106.f_5 == 4)
						{
							if (Var9.f_4 == joaat("WAPClip"))
							{
								bLocal_252 = true;
							}
							else
							{
								bLocal_252 = false;
							}
							if ((Local_148.f_106.f_2 - 2) == iVar0 && !func_96(Var8, *iParam1))
							{
								bVar2 = true;
							}
							else if ((func_96(Var9, *iParam1) && func_43(Var8, *iParam1, -1)) && Var8.f_4 == Var9.f_4)
							{
								bVar2 = true;
							}
							if ((Local_148.f_106.f_2 - 2) != iVar0 && !func_96(Var9, *iParam1))
							{
								if (Var8.f_4 == Var9.f_4 && Var8.f_6 != Var9.f_6)
								{
									bVar2 = false;
								}
							}
						}
						else
						{
							bLocal_252 = false;
						}
						if (Local_148.f_106.f_5 == 2 || Local_148.f_106.f_5 == 3)
						{
							if (iVar0 == 0)
							{
								bVar2 = true;
							}
						}
						if (bVar2)
						{
							iVar4 = 1;
							iVar3 = unk_0x7FAE56FC172FD992(Var8);
							if (iVar3 != 0)
							{
								unk_0x6FF834D85E2DD4C6(iVar3);
								func_171(Var8);
								if (!unk_0x9A0B2ED5055D3F0B(iVar3) || !func_170(Var8))
								{
									iVar4 = 0;
								}
							}
							if (Var8.f_4 == joaat("gun_root") && !func_169(*iParam1))
							{
								iVar5 = unk_0xC72D602927DCEA3F(Var8);
								iVar6 = 0;
								while (iVar6 <= (iVar5 - 1))
								{
									iVar7 = unk_0x13C5B1E09D8A8F0F(Var8, iVar6);
									if (iVar7 != 0)
									{
										unk_0x6FF834D85E2DD4C6(iVar7);
										if (!unk_0x9A0B2ED5055D3F0B(iVar7))
										{
											iVar4 = 0;
										}
									}
									iVar6++;
								}
							}
							if (!unk_0x714669D9C29712E4(*iParam0, Var8) && iVar4)
							{
								if ((Var8.f_4 == joaat("gun_root") && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0xD50D486F1F311BFC(*iParam1)) || (func_86(&Var8, *iParam1, joaat("gun_root")) && func_167(iParam1)))
								{
									if (Var8.f_4 == joaat("gun_root") && !func_169(*iParam1))
									{
										if (func_86(&Var8, *iParam1, joaat("WAPClip")))
										{
											if (unk_0x714669D9C29712E4(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 0)))
											{
												unk_0x287B533B0CDC89A1(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 0));
											}
										}
										if (*iParam1 == joaat("weapon_marksmanrifle"))
										{
											unk_0x287B533B0CDC89A1(*iParam0, joaat("component_at_scope_large_fixed_zoom"));
										}
										if (*iParam1 == joaat("weapon_sniperrifle"))
										{
											if (unk_0x714669D9C29712E4(*iParam0, joaat("component_at_scope_large")))
											{
												unk_0x287B533B0CDC89A1(*iParam0, joaat("component_at_scope_large"));
											}
										}
									}
									if (!func_169(*iParam1))
									{
										func_89(iParam0, iParam1, unk_0xB3328BA8976B416C(*iParam0, 0), unk_0xDB824D597B53CC40(*iParam0, 2), iVar3);
									}
								}
								if (!unk_0x714669D9C29712E4(*iParam0, Var8))
								{
									if ((Var8 == func_84(&Var8, *iParam1, joaat("gun_root"), 0) && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(func_84(&Var8, *iParam1, joaat("gun_root"), 0))) && !func_167(iParam1))
									{
										unk_0x0DF81B88D0C53746(*iParam0, Var8);
										func_81(*iParam0, Var8);
									}
									if ((Var8 == func_84(&Var8, *iParam1, joaat("gun_root"), 1) && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(func_84(&Var8, *iParam1, joaat("gun_root"), 1))) && !func_167(iParam1))
									{
										unk_0x0DF81B88D0C53746(*iParam0, Var8);
										func_81(*iParam0, Var8);
									}
									if (func_169(*iParam1))
									{
										unk_0x0DF81B88D0C53746(*iParam0, Var8);
										func_81(*iParam0, Var8);
										if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), *iParam1, 0) && func_169(*iParam1))
										{
											if (func_88(Var8))
											{
												iVar15 = 0;
												func_105(&Local_256, &iVar15, *iParam1);
												if (func_111(&Local_256, *iParam1, iVar15, 0))
												{
													unk_0x73C964C86B32B073(*iParam0, Var8, iVar15);
													func_110(iParam0, Var8, iVar15);
													unk_0x310756AA9ABB406D(unk_0xFC1458A37D98B502(), *iParam1, Var8, iVar15);
													func_104(unk_0xFC1458A37D98B502(), *iParam1, Var8, iVar15);
												}
											}
										}
									}
									else if (Var8 != func_84(&Var8, *iParam1, joaat("gun_root"), 0) && Var8 != func_84(&Var8, *iParam1, joaat("gun_root"), 1))
									{
										if (!(func_86(&Var8, *iParam1, joaat("gun_root")) && func_167(iParam1)))
										{
											unk_0x0DF81B88D0C53746(*iParam0, Var8);
											func_81(*iParam0, Var8);
										}
									}
								}
								if (Var8.f_4 == joaat("gun_root") && !func_169(*iParam1))
								{
									if (func_86(&Var8, *iParam1, joaat("WAPClip")))
									{
										if (!unk_0x714669D9C29712E4(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 1)) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 2)))
										{
											unk_0x0DF81B88D0C53746(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 0));
										}
									}
									if (*iParam1 == joaat("weapon_marksmanrifle"))
									{
										unk_0x0DF81B88D0C53746(*iParam0, joaat("component_at_scope_large_fixed_zoom"));
									}
									if (*iParam1 == joaat("weapon_sniperrifle"))
									{
										unk_0x0DF81B88D0C53746(*iParam0, joaat("component_at_scope_large"));
									}
								}
							}
						}
						else if (unk_0x714669D9C29712E4(*iParam0, Var8))
						{
							if (Var8 == func_84(&Var8, *iParam1, joaat("WAPClip"), 0))
							{
								if (!unk_0x714669D9C29712E4(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 1)) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Var8, *iParam1, joaat("WAPClip"), 2)))
								{
									unk_0x287B533B0CDC89A1(*iParam0, Var8);
								}
							}
							else if (Var8.f_4 == joaat("gun_root"))
							{
								if (!func_169(*iParam1))
								{
									unk_0x287B533B0CDC89A1(*iParam0, Var8);
									func_83(*iParam0, Var8);
								}
								else
								{
									iVar16 = 0;
									if (func_118(&Var8, &iVar16, *iParam1))
									{
										if (iVar16 != Var8)
										{
											unk_0x287B533B0CDC89A1(*iParam0, Var8);
											func_83(*iParam0, Var8);
										}
									}
									else
									{
										unk_0x287B533B0CDC89A1(*iParam0, Var8);
										func_83(*iParam0, Var8);
									}
								}
							}
							else
							{
								unk_0x287B533B0CDC89A1(*iParam0, Var8);
								func_83(*iParam0, Var8);
							}
							if (((Var8.f_4 == joaat("gun_root") && (iVar10 != 0 && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(iVar10))) || (iVar11 != 0 && unk_0x82FF3DFBC3965CC0(*iParam0) == unk_0x7FAE56FC172FD992(iVar11))) || (func_86(&Var8, *iParam1, joaat("gun_root")) && func_167(iParam1)))
							{
								if (!func_169(*iParam1))
								{
									func_89(iParam0, iParam1, unk_0xB3328BA8976B416C(*iParam0, 0), unk_0xDB824D597B53CC40(*iParam0, 2), 0);
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

int func_88(int iParam0)//Position - 0xBE81
{
	switch (iParam0)
	{
		case -1860492113:
		case 937772107:
		case 1401650071:
		case 628662130:
		case -985047251:
		case -812944463:
		case -1447352303:
		case -60338860:
		case 2088750491:
		case -1513913454:
		case -1179558480:
		case 1272803094:
		case 1080719624:
		case 792221348:
		case -452181427:
		case -746774737:
		case -2044296061:
		case -199171978:
		case -1428075016:
		case -1735153315:
		case 1796459838:
		case -631911105:
		case 1249283253:
		case -857707587:
		case -1097543898:
		case 1980349969:
		case 1219453777:
		case -1853459190:
		case -2074781016:
		case 457967755:
		case 235171324:
		case 42685294:
		case -687617715:
		case -130843390:
		case -977347227:
		case -378461067:
		case 329939175:
		case 643374672:
		case 807875052:
		case -1401804168:
		case -1096495395:
		case -847811454:
		case -1413108537:
		case 1815270123:
		case 1550611612:
		case 368550800:
		case -1769069349:
		case 24902297:
		case -228041614:
		case -584961562:
		case -1153175946:
		case 1301287696:
		case 1597093459:
		case 1769871776:
		case -1827882671:
		case -996700057:
		case 940943685:
		case 1263226800:
		case -328035840:
		case 1224100642:
		case 899228776:
		case 616006309:
		case -1561952511:
		case 572063080:
		case 1170588613:
		case 966612367:
		case -474112444:
		case 387223451:
		case 617753366:
		case -222378256:
		case 8741501:
		case -601286203:
		case -511433605:
		case -655387818:
		case -282476598:
		case 1739501925:
		case 1178671645:
		case -1069552225:
		case 11918884:
		case 176157112:
		case -220052855:
		case 288456487:
		case 398658626:
		case 628697006:
		case 925911836:
		case 1222307441:
		case 552442715:
		case -648943513:
		case 259780317:
		case -1973342474:
		case 1996130345:
		case -1455657812:
		case -1668263084:
		case 1308243489:
		case 1122574335:
		case 1420313469:
		case 109848390:
		case 593945703:
		case 1142457062:
		case -1869284448:
		case 1931539634:
		case 1624199183:
		case -26834113:
		case -210406055:
		case 423313640:
		case 276639596:
		case -991356863:
		case -1682848301:
		case 996213771:
		case -1214048550:
		case -737430213:
		case 1125852043:
		case 886015732:
		case -1262287139:
		case -295208411:
		case -544154504:
		case 172765678:
		case -1982877449:
		case 2072122460:
		case -1986220171:
		case 1377355801:
		case -1371515465:
		case -1190793877:
		case -1497085720:
		case -1803148180:
		case -1975971886:
		case 36929477:
		case -268444834:
		case -574769446:
		case -882699739:
		case -1468181474:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

void func_89(int iParam0, var uParam1, vector3 vParam2, vector3 vParam3, int iParam4)//Position - 0xC328
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { vParam2 };
	vVar1 = { vParam3 };
	func_95(iParam0);
	if ((func_84(&Local_253, *uParam1, joaat("gun_root"), 0) != 0 && iParam4 == unk_0x7FAE56FC172FD992(func_84(&Local_253, *uParam1, joaat("gun_root"), 0))) || (func_84(&Local_253, *uParam1, joaat("gun_root"), 1) != 0 && iParam4 == unk_0x7FAE56FC172FD992(func_84(&Local_253, *uParam1, joaat("gun_root"), 1))))
	{
		if (!func_94(uParam1->f_13) && !func_94(uParam1->f_16))
		{
			vVar0 = { uParam1->f_13 };
			vVar1 = { uParam1->f_16 };
		}
	}
	*iParam0 = unk_0xD50A2A2DB03A5CF0(*uParam1, func_90(*uParam1), vVar0, 1, 1f, iParam4, 0, 1);
	unk_0xAA93B7B448E10E40(*iParam0, vVar0, 0, 0, 1);
	unk_0x59AF3B40AE222194(*iParam0, vVar1, 2, 0);
	if ((func_84(&Local_253, *uParam1, joaat("gun_root"), 1) != 0 && iParam4 == unk_0x7FAE56FC172FD992(func_84(&Local_253, *uParam1, joaat("gun_root"), 1))) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 1)))
	{
		unk_0x0DF81B88D0C53746(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 1));
		func_81(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 1));
	}
	else if ((func_84(&Local_253, *uParam1, joaat("gun_root"), 0) != 0 && iParam4 == unk_0x7FAE56FC172FD992(func_84(&Local_253, *uParam1, joaat("gun_root"), 0))) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 0)))
	{
		unk_0x0DF81B88D0C53746(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 0));
		func_81(*iParam0, func_84(&Local_253, *uParam1, joaat("gun_root"), 0));
	}
	if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), *uParam1, func_84(&Local_253, *uParam1, joaat("WAPClip"), 2)) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 2)))
	{
		unk_0x0DF81B88D0C53746(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 2));
	}
	else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), *uParam1, func_84(&Local_253, *uParam1, joaat("WAPClip"), 1)) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 1)))
	{
		unk_0x0DF81B88D0C53746(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 1));
	}
	else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), *uParam1, func_84(&Local_253, *uParam1, joaat("WAPClip"), 0)) && !unk_0x714669D9C29712E4(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 0)))
	{
		unk_0x0DF81B88D0C53746(*iParam0, func_84(&Local_253, *uParam1, joaat("WAPClip"), 0));
	}
}

int func_90(int iParam0)//Position - 0xC60A
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4089C5064EC44730(iParam0))
	{
		iVar0 = unk_0x1AD036320DA68345(unk_0xFC1458A37D98B502(), iParam0, 1) * 4;
		if (func_93(iParam0))
		{
			iVar0 = func_91(iParam0);
		}
	}
	return iVar0;
}

int func_91(int iParam0)//Position - 0xC640
{
	int iVar0;
	
	iVar0 = func_92(iParam0, 2);
	switch (iParam0)
	{
		case joaat("weapon_minigun"):
			iVar0 = 200;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 10;
			break;
		
		case joaat("weapon_rpg"):
		case joaat("weapon_firework"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_musket"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
			iVar0 = 8;
			break;
	}
	return iVar0;
}

int func_92(int iParam0, int iParam1)//Position - 0xC69F
{
	if (iParam0 != 0)
	{
		return (unk_0x29E49EE03BC36422(iParam0) * iParam1);
	}
	return 0;
}

int func_93(int iParam0)//Position - 0xC6BA
{
	switch (iParam0)
	{
		case joaat("weapon_minigun"):
			return 1;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 1;
			break;
		
		case joaat("weapon_rpg"):
			return 1;
			break;
		
		case joaat("weapon_musket"):
			return 1;
			break;
		
		case joaat("weapon_firework"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
			return 1;
			break;
		
		case joaat("weapon_stickybomb"):
			return 1;
			break;
	}
	return 0;
}

int func_94(vector3 vParam0)//Position - 0xC725
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_95(int iParam0)//Position - 0xC74F
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, 1);
		}
		unk_0x452336926718D62A(iParam0);
	}
}

int func_96(int iParam0, int iParam1)//Position - 0xC77A
{
	if (func_101(iParam0, iParam1) != -1 && !func_97(func_101(iParam0, iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0xC7A6
{
	if (func_100(iParam0))
	{
		return 1;
	}
	return func_98(iParam0);
}

bool func_98(int iParam0)//Position - 0xC7C1
{
	return func_37(func_99(iParam0), -1, -1);
}

int func_99(int iParam0)//Position - 0xC7D5
{
	switch (iParam0)
	{
		case 0:
			return 15381;
		
		case 1:
			return 15382;
		
		case 2:
			return 15428;
		
		case 3:
			return 15429;
		
		case 4:
			return 15430;
		
		case 5:
			return 15431;
		
		case 6:
			return 15491;
		
		case 7:
			return 15432;
		
		case 8:
			return 15433;
		
		case 9:
			return 15434;
		
		case 10:
			return 15435;
		
		case 11:
			return 15436;
		
		case 12:
			return 15437;
		
		case 13:
			return 15438;
		
		case 14:
			return 15439;
		
		case 15:
			return 15447;
		
		case 16:
			return 15448;
		
		case 17:
			return 15449;
		
		case 18:
			return 15450;
		
		case 19:
			return 15451;
		
		case 20:
			return 15452;
		
		case 21:
			return 15453;
		
		case 22:
			return 15454;
		
		case 23:
			return 15455;
		
		case 24:
			return 15456;
		
		case 25:
			return 15457;
		
		case 26:
			return 15458;
		
		case 27:
			return 15459;
		
		case 28:
			return 15460;
		
		case 29:
			return 15461;
		
		case 30:
			return 15462;
		
		case 31:
			return 15463;
		
		case 32:
			return 15464;
		
		case 33:
			return 15465;
		
		case 34:
			return 15466;
		
		case 35:
			return 15467;
		
		case 36:
			return 15468;
		
		case 37:
			return 15469;
		
		case 38:
			return 15470;
		
		case 39:
			return 15471;
		
		case 40:
			return 15472;
		
		case 41:
			return 15473;
		
		case 42:
			return 15474;
		
		case 43:
			return 15492;
		
		case 44:
			return 15493;
		
		case 45:
			return 15494;
		
		case 46:
			return 15495;
		
		case 47:
			return 15496;
		
		case 48:
			return 15497;
		
		case 49:
			return 15498;
		
		case 50:
			return 15499;
		
		default:
	}
	return 15381;
}

int func_100(int iParam0)//Position - 0xCA4B
{
	if (Global_262145.f_20674)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_20623;
		
		case 1:
			return Global_262145.f_20624;
		
		case 2:
			return Global_262145.f_20625;
		
		case 3:
			return Global_262145.f_20626;
		
		case 4:
			return Global_262145.f_20627;
		
		case 5:
			return Global_262145.f_20628;
		
		case 6:
			return Global_262145.f_20629;
		
		case 7:
			return Global_262145.f_20630;
		
		case 8:
			return Global_262145.f_20631;
		
		case 9:
			return Global_262145.f_20632;
		
		case 10:
			return Global_262145.f_20633;
		
		case 11:
			return Global_262145.f_20634;
		
		case 12:
			return Global_262145.f_20635;
		
		case 13:
			return Global_262145.f_20636;
		
		case 14:
			return Global_262145.f_20637;
		
		case 15:
			return Global_262145.f_20638;
		
		case 16:
			return Global_262145.f_20639;
		
		case 17:
			return Global_262145.f_20640;
		
		case 18:
			return Global_262145.f_20641;
		
		case 19:
			return Global_262145.f_20642;
		
		case 20:
			return Global_262145.f_20643;
		
		case 21:
			return Global_262145.f_20644;
		
		case 22:
			return Global_262145.f_20645;
		
		case 23:
			return Global_262145.f_20646;
		
		case 24:
			return Global_262145.f_20647;
		
		case 25:
			return Global_262145.f_20648;
		
		case 26:
			return Global_262145.f_20649;
		
		case 27:
			return Global_262145.f_20650;
		
		case 28:
			return Global_262145.f_20651;
		
		case 29:
			return Global_262145.f_20652;
		
		case 30:
			return Global_262145.f_20653;
		
		case 31:
			return Global_262145.f_20654;
		
		case 32:
			return Global_262145.f_20655;
		
		case 33:
			return Global_262145.f_20656;
		
		case 34:
			return Global_262145.f_20657;
		
		case 35:
			return Global_262145.f_20658;
		
		case 36:
			return Global_262145.f_20659;
		
		case 37:
			return Global_262145.f_20660;
		
		case 38:
			return Global_262145.f_20661;
		
		case 39:
			return Global_262145.f_20662;
		
		case 40:
			return Global_262145.f_20663;
		
		case 41:
			return Global_262145.f_20664;
		
		case 42:
			return Global_262145.f_20665;
		
		case 43:
			return Global_262145.f_20666;
		
		case 44:
			return Global_262145.f_20667;
		
		case 45:
			return Global_262145.f_20668;
		
		case 46:
			return Global_262145.f_20669;
		
		case 47:
			return Global_262145.f_20670;
		
		case 48:
			return Global_262145.f_20671;
		
		case 49:
			return Global_262145.f_20672;
		
		case 50:
			return Global_262145.f_20673;
		
		default:
	}
	return 0;
}

int func_101(int iParam0, int iParam1)//Position - 0xCD99
{
	switch (iParam1)
	{
		case 961495388:
			switch (iParam0)
			{
				case 1108334355:
					return 38;
					break;
				
				case 1447477866:
					return 39;
					break;
				
				case -1478681000:
					return 26;
					break;
				
				case 1675665560:
					return 27;
					break;
				
				case -76490669:
					return 24;
					break;
				
				case 937772107:
					return 43;
					break;
				
				case 628662130:
					return 44;
					break;
				
				case -985047251:
					return 45;
					break;
				
				case -812944463:
					return 46;
					break;
				
				case -1447352303:
					return 47;
					break;
				
				case -60338860:
					return 48;
					break;
				
				case 2088750491:
					return 49;
					break;
				
				case -1513913454:
					return 50;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam0)
			{
				case 1108334355:
					return 40;
					break;
				
				case -1958983669:
					return 41;
					break;
				
				case 626875735:
					return 26;
					break;
				
				case 1141059345:
					return 27;
					break;
				
				case 1025884839:
					return 24;
					break;
				
				case 1080719624:
					return 43;
					break;
				
				case -452181427:
					return 44;
					break;
				
				case -746774737:
					return 45;
					break;
				
				case -2044296061:
					return 46;
					break;
				
				case -199171978:
					return 47;
					break;
				
				case -1428075016:
					return 48;
					break;
				
				case -1735153315:
					return 49;
					break;
				
				case 1796459838:
					return 50;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam0)
			{
				case 1108334355:
					return 36;
					break;
				
				case -1243457701:
					return 37;
					break;
				
				case 696788003:
					return 26;
					break;
				
				case 1475288264:
					return 27;
					break;
				
				case -1020871238:
					return 24;
					break;
				
				case -857707587:
					return 43;
					break;
				
				case 1980349969:
					return 44;
					break;
				
				case 1219453777:
					return 45;
					break;
				
				case -1853459190:
					return 46;
					break;
				
				case -2074781016:
					return 47;
					break;
				
				case 457967755:
					return 48;
					break;
				
				case 235171324:
					return 49;
					break;
				
				case 42685294:
					return 50;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam0)
			{
				case -1233121104:
					return 33;
					break;
				
				case 776198721:
					return 34;
					break;
				
				case 277524638:
					return 35;
					break;
				
				case -130689324:
					return 26;
					break;
				
				case 1005144310:
					return 27;
					break;
				
				case 247526935:
					return 24;
					break;
				
				case -1981031769:
					return 28;
					break;
				
				case -977347227:
					return 43;
					break;
				
				case 329939175:
					return 44;
					break;
				
				case 643374672:
					return 45;
					break;
				
				case 807875052:
					return 46;
					break;
				
				case -1401804168:
					return 47;
					break;
				
				case -1096495395:
					return 48;
					break;
				
				case -847811454:
					return 49;
					break;
				
				case -1413108537:
					return 50;
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam0)
			{
				case 568543123:
					return 30;
					break;
				
				case -1898661008:
					return 29;
					break;
				
				case -2046910199:
					return 25;
					break;
				
				case 1329061674:
					return 27;
					break;
				
				case 733837882:
					return 24;
					break;
				
				case 368550800:
					return 43;
					break;
				
				case 24902297:
					return 44;
					break;
				
				case -228041614:
					return 45;
					break;
				
				case -584961562:
					return 46;
					break;
				
				case -1153175946:
					return 47;
					break;
				
				case 1301287696:
					return 48;
					break;
				
				case 1597093459:
					return 49;
					break;
				
				case 1769871776:
					return 50;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam0)
			{
				case -1613015470:
					return 31;
					break;
				
				case -1520117877:
					return 32;
					break;
				
				case 974903034:
					return 25;
					break;
				
				case 190476639:
					return 27;
					break;
				
				case -644734235:
					return 24;
					break;
				
				case 940943685:
					return 43;
					break;
				
				case -328035840:
					return 44;
					break;
				
				case 1224100642:
					return 45;
					break;
				
				case 899228776:
					return 46;
					break;
				
				case 616006309:
					return 47;
					break;
				
				case -1561952511:
					return 48;
					break;
				
				case 572063080:
					return 49;
					break;
				
				case 1170588613:
					return 50;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam0)
			{
				case 1315288101:
					return 26;
					break;
				
				case 1004815965:
					return 28;
					break;
				
				case -380098265:
					return 25;
					break;
				
				case -1618338827:
					return 24;
					break;
				
				case 387223451:
					return 43;
					break;
				
				case -222378256:
					return 44;
					break;
				
				case 8741501:
					return 45;
					break;
				
				case -601286203:
					return 46;
					break;
				
				case -511433605:
					return 47;
					break;
				
				case -655387818:
					return 48;
					break;
				
				case -282476598:
					return 49;
					break;
				
				case 1739501925:
					return 50;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam0)
			{
				case 1362433589:
					return 26;
					break;
				
				case 1346235024:
					return 27;
					break;
				
				case -570355066:
					return 24;
					break;
				
				case 1125852043:
					return 43;
					break;
				
				case -1262287139:
					return 44;
					break;
				
				case -295208411:
					return 45;
					break;
				
				case -544154504:
					return 46;
					break;
				
				case 172765678:
					return 47;
					break;
				
				case -1982877449:
					return 48;
					break;
				
				case 2072122460:
					return 49;
					break;
				
				case -1986220171:
					return 50;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam0)
			{
				case -1055790298:
					return 27;
					break;
				
				case -1928301566:
					return 25;
					break;
				
				case -424845447:
					return 24;
					break;
				
				case -1973342474:
					return 43;
					break;
				
				case -1455657812:
					return 44;
					break;
				
				case -1668263084:
					return 45;
					break;
				
				case 1308243489:
					return 46;
					break;
				
				case 1122574335:
					return 47;
					break;
				
				case 1420313469:
					return 48;
					break;
				
				case 109848390:
					return 49;
					break;
				
				case 593945703:
					return 50;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam0)
			{
				case -193998727:
					return 26;
					break;
				
				case -515203373:
					return 27;
					break;
				
				case 1842849902:
					return 24;
					break;
				
				case 1931539634:
					return 43;
					break;
				
				case -26834113:
					return 44;
					break;
				
				case -210406055:
					return 45;
					break;
				
				case 423313640:
					return 46;
					break;
				
				case 276639596:
					return 47;
					break;
				
				case -991356863:
					return 48;
					break;
				
				case -1682848301:
					return 49;
					break;
				
				case 996213771:
					return 50;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam0)
			{
				case 231258687:
					return 27;
					break;
				
				case 284438159:
					return 25;
					break;
				
				case 15712037:
					return 24;
					break;
				
				case 11918884:
					return 43;
					break;
				
				case -220052855:
					return 44;
					break;
				
				case 288456487:
					return 45;
					break;
				
				case 398658626:
					return 46;
					break;
				
				case 628697006:
					return 47;
					break;
				
				case 925911836:
					return 48;
					break;
				
				case 1222307441:
					return 49;
					break;
				
				case 552442715:
					return 50;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam0)
			{
				case -89655827:
					return 26;
					break;
				
				case 1130501904:
					return 27;
					break;
				
				case -1449330342:
					return 24;
					break;
				
				case -1190793877:
					return 43;
					break;
				
				case -1803148180:
					return 44;
					break;
				
				case -1975971886:
					return 45;
					break;
				
				case 36929477:
					return 46;
					break;
				
				case -268444834:
					return 47;
					break;
				
				case -574769446:
					return 48;
					break;
				
				case -882699739:
					return 49;
					break;
				
				case -1468181474:
					return 50;
					break;
			}
			break;
	}
	return -1;
}

int func_102(int iParam0)//Position - 0xD673
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_43(1623028892, joaat("weapon_pistol"), -1);
		
		case joaat("weapon_smg"):
			return func_43(1623028892, joaat("weapon_smg"), -1);
		
		case joaat("weapon_assaultrifle"):
			return func_43(1623028892, joaat("weapon_assaultrifle"), -1);
		
		case joaat("weapon_carbinerifle"):
			return func_43(1623028892, joaat("weapon_carbinerifle"), -1);
		
		case joaat("weapon_combatmg"):
			return func_43(1623028892, joaat("weapon_combatmg"), -1);
		
		case joaat("weapon_heavysniper"):
			return func_43(1623028892, joaat("weapon_heavysniper"), -1);
		
		case -1075685676:
			return func_43(1623028892, joaat("weapon_pistol"), -1);
		
		case 2024373456:
			return func_43(1623028892, joaat("weapon_smg"), -1);
		
		case 961495388:
			return func_43(1623028892, joaat("weapon_assaultrifle"), -1);
		
		case -86904375:
			return func_43(1623028892, joaat("weapon_carbinerifle"), -1);
		
		case -608341376:
			return func_43(1623028892, joaat("weapon_combatmg"), -1);
		
		case 177293209:
			return func_43(1623028892, joaat("weapon_heavysniper"), -1);
		
		case joaat("weapon_pumpshotgun"):
			return func_43(1623028892, joaat("weapon_pumpshotgun"), -1);
		
		case joaat("weapon_specialcarbine"):
			return func_43(1623028892, joaat("weapon_specialcarbine"), -1);
		
		case joaat("weapon_snspistol"):
			return func_43(1623028892, joaat("weapon_snspistol"), -1);
		
		case joaat("weapon_marksmanrifle"):
			return func_43(1623028892, joaat("weapon_marksmanrifle"), -1);
		
		case joaat("weapon_revolver"):
			return func_43(1623028892, joaat("weapon_revolver"), -1);
		
		case joaat("weapon_bullpuprifle"):
			return func_43(1623028892, joaat("weapon_bullpuprifle"), -1);
		
		case 1432025498:
			return func_43(1623028892, joaat("weapon_pumpshotgun"), -1);
		
		case -1768145561:
			return func_43(1623028892, joaat("weapon_specialcarbine"), -1);
		
		case -2009644972:
			return func_43(1623028892, joaat("weapon_snspistol"), -1);
		
		case 1785463520:
			return func_43(1623028892, joaat("weapon_marksmanrifle"), -1);
		
		case -879347409:
			return func_43(1623028892, joaat("weapon_revolver"), -1);
		
		case -2066285827:
			return func_43(1623028892, joaat("weapon_bullpuprifle"), -1);
		
		default:
	}
	return 0;
}

int func_103(int iParam0)//Position - 0xD8C3
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_revolver"):
		case joaat("weapon_bullpuprifle"):
			return 1623028892;
		
		default:
	}
	return 0;
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD923
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	if (iVar0 != 0)
	{
		unk_0x310756AA9ABB406D(iParam0, iParam1, iVar0, iParam3);
	}
}

void func_105(char* sParam0, int iParam1, int iParam2)//Position - 0xD945
{
	int iVar0;
	var uVar1;
	
	*iParam1 = 0;
	while (func_111(sParam0, iParam2, iVar0, 0))
	{
		uVar1 = func_109(iParam2, iVar0);
		if (func_106(uVar1, -1))
		{
			*iParam1 = iVar0;
		}
		iVar0++;
	}
}

bool func_106(int iParam0, int iParam1)//Position - 0xD981
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar0 = func_107(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

var func_107(var uParam0, int iParam1)//Position - 0xD9AE
{
	var uVar0;
	
	uVar0 = func_29(func_108(uParam0), iParam1, 0);
	return uVar0;
}

int func_108(var uParam0)//Position - 0xD9C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	if ((func_33() == 0 || func_49() == 0) || (func_33() == 999 && func_49() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 702;
				break;
			
			case 1:
				return 703;
				break;
			
			case 2:
				return 704;
				break;
			
			case 3:
				return 705;
				break;
			
			case 4:
				return 706;
				break;
			
			case 5:
				return 707;
				break;
			
			case 6:
				return 708;
				break;
			
			case 7:
				return 709;
				break;
			
			case 8:
				return 710;
				break;
			
			case 9:
				return 2051;
				break;
			
			case 10:
				return 2063;
				break;
			
			case 11:
				return 2090;
				break;
			
			case 12:
				return 2418;
				break;
			
			case 13:
				return 2937;
				break;
			
			case 14:
				return 5494;
				break;
			
			case 15:
				return 5498;
				break;
			
			case 16:
				return 5502;
				break;
			
			case 17:
				return 5506;
				break;
			
			case 18:
				return 5510;
				break;
			
			case 19:
				return 5514;
			
			case 20:
				return 5574;
			
			case 21:
				return 5578;
			
			case 22:
				return 5582;
			
			case 23:
				return 5586;
			
			case 24:
				return 5590;
			
			case 25:
				return 5594;
				break;
			
			case 26:
				return 5598;
				break;
			
			case 27:
				return 5619;
				break;
			
			case 28:
				return 5623;
				break;
			
			case 29:
				return 5627;
				break;
			
			case 30:
				return 5631;
				break;
			
			case 31:
				return 5635;
				break;
			
			case 32:
				return 5639;
				break;
			
			case 33:
				return 6449;
				break;
			
			case 34:
				return 6453;
				break;
			
			case 35:
				return 6457;
				break;
			
			case 36:
				return 6461;
				break;
			
			case 37:
				return 6465;
				break;
			
			case 38:
				return 6469;
				break;
			
			case 39:
				return 6473;
				break;
			}
	}
	return 7872;
}

int func_109(int iParam0, int iParam1)//Position - 0xDC5B
{
	switch (iParam0)
	{
		case -1075685676:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 626;
					break;
				
				case 2:
					return 627;
					break;
				
				case 3:
					return 628;
					break;
				
				case 4:
					return 629;
					break;
				
				case 5:
					return 630;
					break;
				
				case 6:
					return 631;
					break;
				
				case 7:
					return 632;
					break;
				
				case 8:
					return 633;
					break;
				
				case 9:
					return 634;
					break;
				
				case 10:
					return 635;
					break;
				
				case 11:
					return 636;
					break;
				
				case 12:
					return 637;
					break;
				
				case 13:
					return 638;
					break;
				
				case 14:
					return 639;
					break;
				
				case 15:
					return 640;
					break;
				
				case 16:
					return 641;
					break;
				
				case 17:
					return 642;
					break;
				
				case 18:
					return 643;
					break;
				
				case 19:
					return 644;
					break;
				
				case 20:
					return 645;
					break;
				
				case 21:
					return 646;
					break;
				
				case 22:
					return 647;
					break;
				
				case 23:
					return 648;
					break;
				
				case 24:
					return 649;
					break;
				
				case 25:
					return 650;
					break;
				
				case 26:
					return 651;
					break;
				
				case 27:
					return 652;
					break;
				
				case 28:
					return 653;
					break;
				
				case 29:
					return 654;
					break;
				
				case 30:
					return 655;
					break;
				
				case 31:
					return 656;
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 657;
					break;
				
				case 2:
					return 658;
					break;
				
				case 3:
					return 659;
					break;
				
				case 4:
					return 660;
					break;
				
				case 5:
					return 661;
					break;
				
				case 6:
					return 662;
					break;
				
				case 7:
					return 663;
					break;
				
				case 8:
					return 664;
					break;
				
				case 9:
					return 665;
					break;
				
				case 10:
					return 666;
					break;
				
				case 11:
					return 667;
					break;
				
				case 12:
					return 668;
					break;
				
				case 13:
					return 669;
					break;
				
				case 14:
					return 670;
					break;
				
				case 15:
					return 671;
					break;
				
				case 16:
					return 672;
					break;
				
				case 17:
					return 673;
					break;
				
				case 18:
					return 674;
					break;
				
				case 19:
					return 675;
					break;
				
				case 20:
					return 676;
					break;
				
				case 21:
					return 677;
					break;
				
				case 22:
					return 678;
					break;
				
				case 23:
					return 679;
					break;
				
				case 24:
					return 680;
					break;
				
				case 25:
					return 681;
					break;
				
				case 26:
					return 682;
					break;
				
				case 27:
					return 683;
					break;
				
				case 28:
					return 684;
					break;
				
				case 29:
					return 685;
					break;
				
				case 30:
					return 686;
					break;
				
				case 31:
					return 687;
					break;
			}
			break;
		
		case 177293209:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 688;
					break;
				
				case 2:
					return 689;
					break;
				
				case 3:
					return 690;
					break;
				
				case 4:
					return 691;
					break;
				
				case 5:
					return 692;
					break;
				
				case 6:
					return 693;
					break;
				
				case 7:
					return 694;
					break;
				
				case 8:
					return 695;
					break;
				
				case 9:
					return 696;
					break;
				
				case 10:
					return 697;
					break;
				
				case 11:
					return 698;
					break;
				
				case 12:
					return 699;
					break;
				
				case 13:
					return 700;
					break;
				
				case 14:
					return 701;
					break;
				
				case 15:
					return 702;
					break;
				
				case 16:
					return 703;
					break;
				
				case 17:
					return 704;
					break;
				
				case 18:
					return 705;
					break;
				
				case 19:
					return 706;
					break;
				
				case 20:
					return 707;
					break;
				
				case 21:
					return 708;
					break;
				
				case 22:
					return 709;
					break;
				
				case 23:
					return 710;
					break;
				
				case 24:
					return 711;
					break;
				
				case 25:
					return 712;
					break;
				
				case 26:
					return 713;
					break;
				
				case 27:
					return 714;
					break;
				
				case 28:
					return 715;
					break;
				
				case 29:
					return 716;
					break;
				
				case 30:
					return 717;
					break;
				
				case 31:
					return 718;
					break;
			}
			break;
		
		case -608341376:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 719;
					break;
				
				case 2:
					return 720;
					break;
				
				case 3:
					return 721;
					break;
				
				case 4:
					return 722;
					break;
				
				case 5:
					return 723;
					break;
				
				case 6:
					return 724;
					break;
				
				case 7:
					return 725;
					break;
				
				case 8:
					return 726;
					break;
				
				case 9:
					return 727;
					break;
				
				case 10:
					return 728;
					break;
				
				case 11:
					return 729;
					break;
				
				case 12:
					return 730;
					break;
				
				case 13:
					return 731;
					break;
				
				case 14:
					return 732;
					break;
				
				case 15:
					return 733;
					break;
				
				case 16:
					return 734;
					break;
				
				case 17:
					return 735;
					break;
				
				case 18:
					return 736;
					break;
				
				case 19:
					return 737;
					break;
				
				case 20:
					return 738;
					break;
				
				case 21:
					return 739;
					break;
				
				case 22:
					return 740;
					break;
				
				case 23:
					return 741;
					break;
				
				case 24:
					return 742;
					break;
				
				case 25:
					return 743;
					break;
				
				case 26:
					return 744;
					break;
				
				case 27:
					return 745;
					break;
				
				case 28:
					return 746;
					break;
				
				case 29:
					return 747;
					break;
				
				case 30:
					return 748;
					break;
				
				case 31:
					return 749;
					break;
			}
			break;
		
		case 961495388:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 750;
					break;
				
				case 2:
					return 751;
					break;
				
				case 3:
					return 752;
					break;
				
				case 4:
					return 753;
					break;
				
				case 5:
					return 754;
					break;
				
				case 6:
					return 755;
					break;
				
				case 7:
					return 756;
					break;
				
				case 8:
					return 757;
					break;
				
				case 9:
					return 758;
					break;
				
				case 10:
					return 759;
					break;
				
				case 11:
					return 760;
					break;
				
				case 12:
					return 761;
					break;
				
				case 13:
					return 762;
					break;
				
				case 14:
					return 763;
					break;
				
				case 15:
					return 764;
					break;
				
				case 16:
					return 765;
					break;
				
				case 17:
					return 766;
					break;
				
				case 18:
					return 767;
					break;
				
				case 19:
					return 768;
					break;
				
				case 20:
					return 769;
					break;
				
				case 21:
					return 770;
					break;
				
				case 22:
					return 771;
					break;
				
				case 23:
					return 772;
					break;
				
				case 24:
					return 773;
					break;
				
				case 25:
					return 774;
					break;
				
				case 26:
					return 775;
					break;
				
				case 27:
					return 776;
					break;
				
				case 28:
					return 777;
					break;
				
				case 29:
					return 778;
					break;
				
				case 30:
					return 779;
					break;
				
				case 31:
					return 780;
					break;
			}
			break;
		
		case -86904375:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 781;
					break;
				
				case 2:
					return 782;
					break;
				
				case 3:
					return 783;
					break;
				
				case 4:
					return 784;
					break;
				
				case 5:
					return 785;
					break;
				
				case 6:
					return 786;
					break;
				
				case 7:
					return 787;
					break;
				
				case 8:
					return 788;
					break;
				
				case 9:
					return 789;
					break;
				
				case 10:
					return 790;
					break;
				
				case 11:
					return 791;
					break;
				
				case 12:
					return 792;
					break;
				
				case 13:
					return 793;
					break;
				
				case 14:
					return 794;
					break;
				
				case 15:
					return 795;
					break;
				
				case 16:
					return 796;
					break;
				
				case 17:
					return 797;
					break;
				
				case 18:
					return 798;
					break;
				
				case 19:
					return 799;
					break;
				
				case 20:
					return 800;
					break;
				
				case 21:
					return 801;
					break;
				
				case 22:
					return 802;
					break;
				
				case 23:
					return 803;
					break;
				
				case 24:
					return 804;
					break;
				
				case 25:
					return 805;
					break;
				
				case 26:
					return 806;
					break;
				
				case 27:
					return 807;
					break;
				
				case 28:
					return 808;
					break;
				
				case 29:
					return 809;
					break;
				
				case 30:
					return 810;
					break;
				
				case 31:
					return 811;
					break;
			}
			break;
		
		case 1432025498:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 998;
					break;
				
				case 2:
					return 999;
					break;
				
				case 3:
					return 1000;
					break;
				
				case 4:
					return 1001;
					break;
				
				case 5:
					return 1002;
					break;
				
				case 6:
					return 1003;
					break;
				
				case 7:
					return 1004;
					break;
				
				case 8:
					return 1005;
					break;
				
				case 9:
					return 1006;
					break;
				
				case 10:
					return 1007;
					break;
				
				case 11:
					return 1008;
					break;
				
				case 12:
					return 1009;
					break;
				
				case 13:
					return 1010;
					break;
				
				case 14:
					return 1011;
					break;
				
				case 15:
					return 1012;
					break;
				
				case 16:
					return 1013;
					break;
				
				case 17:
					return 1014;
					break;
				
				case 18:
					return 1015;
					break;
				
				case 19:
					return 1016;
					break;
				
				case 20:
					return 1017;
					break;
				
				case 21:
					return 1018;
					break;
				
				case 22:
					return 1019;
					break;
				
				case 23:
					return 1020;
					break;
				
				case 24:
					return 1021;
					break;
				
				case 25:
					return 1022;
					break;
				
				case 26:
					return 1023;
					break;
				
				case 27:
					return 1024;
					break;
				
				case 28:
					return 1025;
					break;
				
				case 29:
					return 1026;
					break;
				
				case 30:
					return 1027;
					break;
				
				case 31:
					return 1028;
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1029;
					break;
				
				case 2:
					return 1030;
					break;
				
				case 3:
					return 1031;
					break;
				
				case 4:
					return 1032;
					break;
				
				case 5:
					return 1033;
					break;
				
				case 6:
					return 1034;
					break;
				
				case 7:
					return 1035;
					break;
				
				case 8:
					return 1036;
					break;
				
				case 9:
					return 1037;
					break;
				
				case 10:
					return 1038;
					break;
				
				case 11:
					return 1039;
					break;
				
				case 12:
					return 1040;
					break;
				
				case 13:
					return 1041;
					break;
				
				case 14:
					return 1042;
					break;
				
				case 15:
					return 1043;
					break;
				
				case 16:
					return 1044;
					break;
				
				case 17:
					return 1045;
					break;
				
				case 18:
					return 1046;
					break;
				
				case 19:
					return 1047;
					break;
				
				case 20:
					return 1048;
					break;
				
				case 21:
					return 1049;
					break;
				
				case 22:
					return 1050;
					break;
				
				case 23:
					return 1051;
					break;
				
				case 24:
					return 1052;
					break;
				
				case 25:
					return 1053;
					break;
				
				case 26:
					return 1054;
					break;
				
				case 27:
					return 1055;
					break;
				
				case 28:
					return 1056;
					break;
				
				case 29:
					return 1057;
					break;
				
				case 30:
					return 1058;
					break;
				
				case 31:
					return 1059;
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1060;
					break;
				
				case 2:
					return 1061;
					break;
				
				case 3:
					return 1062;
					break;
				
				case 4:
					return 1063;
					break;
				
				case 5:
					return 1064;
					break;
				
				case 6:
					return 1065;
					break;
				
				case 7:
					return 1066;
					break;
				
				case 8:
					return 1067;
					break;
				
				case 9:
					return 1068;
					break;
				
				case 10:
					return 1069;
					break;
				
				case 11:
					return 1070;
					break;
				
				case 12:
					return 1071;
					break;
				
				case 13:
					return 1072;
					break;
				
				case 14:
					return 1073;
					break;
				
				case 15:
					return 1074;
					break;
				
				case 16:
					return 1075;
					break;
				
				case 17:
					return 1076;
					break;
				
				case 18:
					return 1077;
					break;
				
				case 19:
					return 1078;
					break;
				
				case 20:
					return 1079;
					break;
				
				case 21:
					return 1080;
					break;
				
				case 22:
					return 1081;
					break;
				
				case 23:
					return 1082;
					break;
				
				case 24:
					return 1083;
					break;
				
				case 25:
					return 1084;
					break;
				
				case 26:
					return 1085;
					break;
				
				case 27:
					return 1086;
					break;
				
				case 28:
					return 1087;
					break;
				
				case 29:
					return 1088;
					break;
				
				case 30:
					return 1089;
					break;
				
				case 31:
					return 1090;
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1153;
					break;
				
				case 2:
					return 1154;
					break;
				
				case 3:
					return 1155;
					break;
				
				case 4:
					return 1156;
					break;
				
				case 5:
					return 1157;
					break;
				
				case 6:
					return 1158;
					break;
				
				case 7:
					return 1159;
					break;
				
				case 8:
					return 1160;
					break;
				
				case 9:
					return 1161;
					break;
				
				case 10:
					return 1162;
					break;
				
				case 11:
					return 1163;
					break;
				
				case 12:
					return 1164;
					break;
				
				case 13:
					return 1165;
					break;
				
				case 14:
					return 1166;
					break;
				
				case 15:
					return 1167;
					break;
				
				case 16:
					return 1168;
					break;
				
				case 17:
					return 1169;
					break;
				
				case 18:
					return 1170;
					break;
				
				case 19:
					return 1171;
					break;
				
				case 20:
					return 1172;
					break;
				
				case 21:
					return 1173;
					break;
				
				case 22:
					return 1174;
					break;
				
				case 23:
					return 1175;
					break;
				
				case 24:
					return 1176;
					break;
				
				case 25:
					return 1177;
					break;
				
				case 26:
					return 1178;
					break;
				
				case 27:
					return 1179;
					break;
				
				case 28:
					return 1180;
					break;
				
				case 29:
					return 1181;
					break;
				
				case 30:
					return 1182;
					break;
				
				case 31:
					return 1183;
					break;
			}
			break;
		
		case -879347409:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1122;
					break;
				
				case 2:
					return 1123;
					break;
				
				case 3:
					return 1124;
					break;
				
				case 4:
					return 1125;
					break;
				
				case 5:
					return 1126;
					break;
				
				case 6:
					return 1127;
					break;
				
				case 7:
					return 1128;
					break;
				
				case 8:
					return 1129;
					break;
				
				case 9:
					return 1130;
					break;
				
				case 10:
					return 1131;
					break;
				
				case 11:
					return 1132;
					break;
				
				case 12:
					return 1133;
					break;
				
				case 13:
					return 1134;
					break;
				
				case 14:
					return 1135;
					break;
				
				case 15:
					return 1136;
					break;
				
				case 16:
					return 1137;
					break;
				
				case 17:
					return 1138;
					break;
				
				case 18:
					return 1139;
					break;
				
				case 19:
					return 1140;
					break;
				
				case 20:
					return 1141;
					break;
				
				case 21:
					return 1142;
					break;
				
				case 22:
					return 1143;
					break;
				
				case 23:
					return 1144;
					break;
				
				case 24:
					return 1145;
					break;
				
				case 25:
					return 1146;
					break;
				
				case 26:
					return 1147;
					break;
				
				case 27:
					return 1148;
					break;
				
				case 28:
					return 1149;
					break;
				
				case 29:
					return 1150;
					break;
				
				case 30:
					return 1151;
					break;
				
				case 31:
					return 1152;
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 1091;
					break;
				
				case 2:
					return 1092;
					break;
				
				case 3:
					return 1093;
					break;
				
				case 4:
					return 1094;
					break;
				
				case 5:
					return 1095;
					break;
				
				case 6:
					return 1096;
					break;
				
				case 7:
					return 1097;
					break;
				
				case 8:
					return 1098;
					break;
				
				case 9:
					return 1099;
					break;
				
				case 10:
					return 1100;
					break;
				
				case 11:
					return 1101;
					break;
				
				case 12:
					return 1102;
					break;
				
				case 13:
					return 1103;
					break;
				
				case 14:
					return 1104;
					break;
				
				case 15:
					return 1105;
					break;
				
				case 16:
					return 1106;
					break;
				
				case 17:
					return 1107;
					break;
				
				case 18:
					return 1108;
					break;
				
				case 19:
					return 1109;
					break;
				
				case 20:
					return 1110;
					break;
				
				case 21:
					return 1111;
					break;
				
				case 22:
					return 1112;
					break;
				
				case 23:
					return 1113;
					break;
				
				case 24:
					return 1114;
					break;
				
				case 25:
					return 1115;
					break;
				
				case 26:
					return 1116;
					break;
				
				case 27:
					return 1117;
					break;
				
				case 28:
					return 1118;
					break;
				
				case 29:
					return 1119;
					break;
				
				case 30:
					return 1120;
					break;
				
				case 31:
					return 1121;
					break;
			}
			break;
	}
	return 0;
}

void func_110(int iParam0, int iParam1, int iParam2)//Position - 0xF363
{
	int iVar0;
	
	iVar0 = func_82(iParam1);
	if (iVar0 != 0)
	{
		unk_0x73C964C86B32B073(*iParam0, iVar0, iParam2);
	}
}

bool func_111(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF384
{
	char* sVar0;
	int iVar1;
	
	func_116(sParam0, "", "", -1, -1, 6);
	if (func_169(iParam1))
	{
		switch (iParam2)
		{
			case 0:
				func_116(sParam0, "WCT_C_TINT_0", "", 5000, 0, 6);
				break;
			
			case 1:
				func_116(sParam0, "WCT_C_TINT_1", "", 5000, 1, 6);
				break;
			
			case 2:
				func_116(sParam0, "WCT_C_TINT_2", "", 5000, 2, 6);
				break;
			
			case 3:
				func_116(sParam0, "WCT_C_TINT_3", "", 5000, 3, 6);
				break;
			
			case 4:
				func_116(sParam0, "WCT_C_TINT_4", "", 5000, 4, 6);
				break;
			
			case 5:
				func_116(sParam0, "WCT_C_TINT_5", "", 5000, 5, 6);
				break;
			
			case 6:
				func_116(sParam0, "WCT_C_TINT_6", "", 5000, 6, 6);
				break;
			
			case 7:
				func_116(sParam0, "WCT_C_TINT_7", "", 5000, 7, 6);
				break;
			
			case 8:
				func_116(sParam0, "WCT_C_TINT_8", "", 5000, 8, 6);
				break;
			
			case 9:
				func_116(sParam0, "WCT_C_TINT_9", "", 5000, 9, 6);
				break;
			
			case 10:
				func_116(sParam0, "WCT_C_TINT_10", "", 5000, 10, 6);
				break;
			
			case 11:
				func_116(sParam0, "WCT_C_TINT_11", "", 5000, 11, 6);
				break;
			
			case 12:
				func_116(sParam0, "WCT_C_TINT_12", "", 5000, 12, 6);
				break;
			
			case 13:
				func_116(sParam0, "WCT_C_TINT_13", "", 5000, 13, 6);
				break;
			
			case 14:
				func_116(sParam0, "WCT_C_TINT_14", "", 5000, 14, 6);
				break;
			
			case 15:
				func_116(sParam0, "WCT_C_TINT_15", "", 5000, 15, 6);
				break;
			
			case 16:
				func_116(sParam0, "WCT_C_TINT_16", "", 5000, 16, 6);
				break;
			
			case 17:
				func_116(sParam0, "WCT_C_TINT_17", "", 5000, 17, 6);
				break;
			
			case 18:
				func_116(sParam0, "WCT_C_TINT_18", "", 5000, 18, 6);
				break;
			
			case 19:
				func_116(sParam0, "WCT_C_TINT_19", "", 5000, 19, 6);
				break;
			
			case 20:
				func_116(sParam0, "WCT_C_TINT_20", "", 5000, 20, 6);
				break;
			
			case 21:
				func_116(sParam0, "WCT_C_TINT_21", "", 5000, 21, 6);
				break;
			
			case 22:
				func_116(sParam0, "WCT_C_TINT_22", "", 5000, 22, 6);
				break;
			
			case 23:
				func_116(sParam0, "WCT_C_TINT_23", "", 5000, 23, 6);
				break;
			
			case 24:
				func_116(sParam0, "WCT_C_TINT_24", "", 5000, 24, 6);
				break;
			
			case 25:
				func_116(sParam0, "WCT_C_TINT_25", "", 5000, 25, 6);
				break;
			
			case 26:
				func_116(sParam0, "WCT_C_TINT_26", "", 5000, 26, 6);
				break;
			
			case 27:
				func_116(sParam0, "WCT_C_TINT_27", "", 5000, 27, 6);
				break;
			
			case 28:
				func_116(sParam0, "WCT_C_TINT_28", "", 5000, 28, 6);
				break;
			
			case 29:
				func_116(sParam0, "WCT_C_TINT_29", "", 5000, 29, 6);
				break;
			
			case 30:
				func_116(sParam0, "WCT_C_TINT_30", "", 5000, 30, 6);
				break;
			
			case 31:
				func_116(sParam0, "WCT_C_TINT_31", "", 5000, 31, 6);
				break;
		}
		if (iParam3 && sParam0->f_8 != -1)
		{
			switch (iParam2)
			{
				case 0:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 1:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 2:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 3:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 4:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 5:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 6:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 7:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 8:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 9:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 10:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 11:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 12:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 13:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 14:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 15:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 16:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 17:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 18:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 19:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 20:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 21:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 22:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 23:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 24:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 25:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 26:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 27:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 28:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 29:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 30:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				
				case 31:
					sParam0->f_8 = Global_262145.f_20160;
					break;
				}
			}
	}
	if (unk_0x3A711520F83BAE98() && func_114())
	{
		iVar1 = 2;
		func_112(&sVar0, *sParam0, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, iVar1, func_55(iParam1), func_113(iParam1), -1, 0, 0);
		if (unk_0xBBA20694DE4179EB(&sVar0))
		{
			sParam0->f_8 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar0), 1671640801, 1);
		}
	}
	return sParam0->f_8 != -1;
}

void func_112(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xF9F2
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

int func_113(int iParam0)//Position - 0xFFB7
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

int func_114()//Position - 0x10058
{
	if (unk_0x3A711520F83BAE98() && func_115())
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x10075
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_116(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1008C
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_117(int iParam0)//Position - 0x100B4
{
	int iVar0;
	
	if (func_169(iParam0))
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1, int iParam2)//Position - 0x100CB
{
	if (func_169(iParam2) && func_119(iParam0, iParam1, iParam2, joaat("gun_root")))
	{
		return 1;
	}
	return 0;
}

int func_119(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x100F5
{
	struct<5> Var0;
	int iVar1;
	
	func_85(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_174(&Var0, iParam2, iVar1, 0))
	{
		if (Var0.f_4 == iParam3)
		{
			if (!Var0.f_1)
			{
				if (func_43(Var0, iParam2, -1))
				{
					*uParam1 = Var0;
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)//Position - 0x10150
{
	if (iParam0 == joaat("gadget_parachute"))
	{
		return iParam1;
	}
	if (iParam0 == -61829581)
	{
		return iParam1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		return iParam1;
	}
	else if (func_122() || func_121())
	{
		return iParam1;
	}
	else if (iParam1 == 0)
	{
		return 0;
	}
	else if (iParam1 == 1)
	{
		return 1;
	}
	else if (iParam1 == 2)
	{
		return 4;
	}
	return -1;
}

int func_121()//Position - 0x101C3
{
	return 1;
}

int func_122()//Position - 0x101CC
{
	return 1;
}

bool func_123(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x101D5
{
	var uVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	float fVar4;
	
	func_162(sParam0, "", "", -1, -1, 0);
	switch (iParam1)
	{
		case joaat("gadget_parachute"):
			if (unk_0x3A711520F83BAE98())
			{
				switch (iParam2)
				{
					case 0:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_162(sParam0, "PS_BAG_47", "PD_CONTENT_11", 9000, 47, 1);
						break;
					
					case 2:
						func_162(sParam0, "PS_BAG_49", "PD_CONTENT_11", 9000, 49, 1);
						break;
					
					case 3:
						func_162(sParam0, "PS_BAG_51", "PD_CONTENT_11", 9000, 51, 1);
						break;
					
					case 4:
						func_162(sParam0, "PS_BAG_48", "PD_CONTENT_11", 9000, 48, 1);
						break;
					
					case 5:
						func_162(sParam0, "PS_BAG_50", "PD_CONTENT_11", 9000, 50, 1);
						break;
					
					case 6:
						func_162(sParam0, "PS_BAG_13", "PD_CONTENT_9", 0, 13, 1);
						break;
					
					case 7:
						func_162(sParam0, "PS_BAG_22", "PD_CONTENT_9", 15000, 22, 1);
						break;
					
					case 8:
						func_162(sParam0, "PS_BAG_2", "PD_CONTENT_9", 15000, 2, 1);
						break;
					
					case 9:
						func_162(sParam0, "PS_BAG_20", "PD_CONTENT_9", 15000, 20, 1);
						break;
					
					case 10:
						func_162(sParam0, "PS_BAG_18", "PD_CONTENT_9", 15000, 18, 1);
						break;
					
					case 11:
						func_162(sParam0, "PS_BAG_3", "PD_CONTENT_9", 15000, 3, 1);
						break;
					
					case 12:
						func_162(sParam0, "PS_BAG_5", "PD_CONTENT_9", 15000, 5, 1);
						break;
					
					case 13:
						func_162(sParam0, "PS_BAG_31", "PD_CONTENT_10", 15000, 31, 1);
						break;
					
					case 14:
						func_162(sParam0, "PS_BAG_15", "PD_CONTENT_9", 15000, 15, 1);
						break;
					
					case 15:
						func_162(sParam0, "PS_BAG_32", "PD_CONTENT_10", 15000, 32, 1);
						break;
					
					case 16:
						func_162(sParam0, "PS_BAG_33", "PD_CONTENT_10", 15000, 33, 1);
						break;
					
					case 17:
						func_162(sParam0, "PS_BAG_28", "PD_CONTENT_10", 15000, 28, 1);
						break;
					
					case 18:
						func_162(sParam0, "PS_BAG_26", "PD_CONTENT_9", 15000, 26, 1);
						break;
					
					case 19:
						func_162(sParam0, "PS_BAG_27", "PD_CONTENT_10", 15000, 27, 1);
						break;
					
					case 20:
						func_162(sParam0, "PS_BAG_6", "PD_CONTENT_9", 15000, 6, 1);
						break;
					
					case 21:
						func_162(sParam0, "PS_BAG_7", "PD_CONTENT_9", 15000, 7, 1);
						break;
					
					case 22:
						func_162(sParam0, "PS_BAG_34", "PD_CONTENT_10", 15000, 34, 1);
						break;
					
					case 23:
						func_162(sParam0, "PS_BAG_24", "PD_CONTENT_9", 15000, 24, 1);
						break;
					
					case 24:
						func_162(sParam0, "PS_BAG_46", "PD_CONTENT_10", 15000, 46, 1);
						break;
					
					case 25:
						func_162(sParam0, "PS_BAG_11", "PD_CONTENT_9", 15000, 11, 1);
						break;
					
					case 26:
						func_162(sParam0, "PS_BAG_14", "PD_CONTENT_9", 15000, 14, 1);
						break;
					
					case 27:
						func_162(sParam0, "PS_BAG_8", "PD_CONTENT_9", 15000, 8, 1);
						break;
					
					case 28:
						func_162(sParam0, "PS_BAG_35", "PD_CONTENT_10", 15000, 35, 1);
						break;
					
					case 29:
						func_162(sParam0, "PS_BAG_36", "PD_CONTENT_10", 15000, 36, 1);
						break;
					
					case 30:
						func_162(sParam0, "PS_BAG_19", "PD_CONTENT_9", 15000, 19, 1);
						break;
					
					case 31:
						func_162(sParam0, "PS_BAG_29", "PD_CONTENT_10", 15000, 29, 1);
						break;
					
					case 32:
						func_162(sParam0, "PS_BAG_37", "PD_CONTENT_10", 15000, 37, 1);
						break;
					
					case 33:
						func_162(sParam0, "PS_BAG_38", "PD_CONTENT_10", 15000, 38, 1);
						break;
					
					case 34:
						func_162(sParam0, "PS_BAG_16", "PD_CONTENT_9", 15000, 16, 1);
						break;
					
					case 35:
						func_162(sParam0, "PS_BAG_45", "PD_CONTENT_10", 15000, 45, 1);
						break;
					
					case 36:
						func_162(sParam0, "PS_BAG_39", "PD_CONTENT_10", 15000, 39, 1);
						break;
					
					case 37:
						func_162(sParam0, "PS_BAG_30", "PD_CONTENT_10", 15000, 30, 1);
						break;
					
					case 38:
						func_162(sParam0, "PS_BAG_40", "PD_CONTENT_10", 15000, 40, 1);
						break;
					
					case 39:
						func_162(sParam0, "PS_BAG_21", "PD_CONTENT_9", 15000, 21, 1);
						break;
					
					case 40:
						func_162(sParam0, "PS_BAG_9", "PD_CONTENT_9", 15000, 9, 1);
						break;
					
					case 41:
						func_162(sParam0, "PS_BAG_41", "PD_CONTENT_10", 15000, 41, 1);
						break;
					
					case 42:
						func_162(sParam0, "PS_BAG_42", "PD_CONTENT_10", 15000, 42, 1);
						break;
					
					case 43:
						func_162(sParam0, "PS_BAG_43", "PD_CONTENT_10", 15000, 43, 1);
						break;
					
					case 44:
						func_162(sParam0, "PS_BAG_44", "PD_CONTENT_10", 15000, 44, 1);
						break;
					
					case 45:
						func_162(sParam0, "PS_BAG_4", "PD_CONTENT_9", 15000, 4, 1);
						break;
					
					case 46:
						func_162(sParam0, "PS_BAG_17", "PD_CONTENT_9", 15000, 17, 1);
						break;
					
					case 47:
						func_162(sParam0, "PS_BAG_12", "PD_CONTENT_9", 15000, 12, 1);
						break;
					
					case 48:
						func_162(sParam0, "PS_BAG_23", "PD_CONTENT_9", 15000, 23, 1);
						break;
					
					case 49:
						func_162(sParam0, "PS_BAG_10", "PD_CONTENT_9", 15000, 10, 1);
						break;
					
					case 50:
						func_162(sParam0, "PS_BAG_1", "PD_CONTENT_9", 15000, 1, 1);
						break;
					
					case 51:
						func_162(sParam0, "PS_BAG_25", "PD_CONTENT_9", 15000, 25, 1);
						break;
					
					case 52:
						func_162(sParam0, "", "", 0, 52, 1);
						break;
					
					case 53:
						func_162(sParam0, "", "", 0, 53, 1);
						break;
					
					case 54:
						func_162(sParam0, "", "", 0, 54, 1);
						break;
					
					case 55:
						func_162(sParam0, "", "", 0, 55, 1);
						break;
					
					case 56:
						func_162(sParam0, "", "", 0, 56, 1);
						break;
					
					case 57:
						func_162(sParam0, "", "", 0, 57, 1);
						break;
					
					case 58:
						func_162(sParam0, "", "", 0, 58, 1);
						break;
					
					case 59:
						func_162(sParam0, "", "", 0, 59, 1);
						break;
					
					case 60:
						func_162(sParam0, "", "", 0, 60, 1);
						break;
					
					case 61:
						func_162(sParam0, "", "", 0, 61, 1);
						break;
					
					case 62:
						func_162(sParam0, "PS_CAN_0", "PSD_CAN_0", 21500, 8, 2);
						break;
					
					case 63:
						func_162(sParam0, "PS_CAN_1", "PSD_CAN_1", 22100, 9, 2);
						break;
					
					case 64:
						func_162(sParam0, "PS_CAN_2", "PSD_CAN_2", 23900, 10, 2);
						break;
					
					case 65:
						func_162(sParam0, "PS_CAN_3", "PSD_CAN_3", 24800, 11, 2);
						break;
					
					case 66:
						func_162(sParam0, "PS_CAN_4", "PSD_CAN_4", 21000, 12, 2);
						break;
					
					case 67:
						func_162(sParam0, "PS_CAN_5", "PSD_CAN_5", 25000, 13, 2);
						break;
					
					case 68:
						func_162(sParam0, "PM_TINT5", "PD_TINT5", 18500, 5, 2);
						break;
					
					case 69:
						func_162(sParam0, "PM_TINT1", "PD_TINT1", 19250, 1, 2);
						break;
					
					case 70:
						func_162(sParam0, "PM_TINT2", "PD_TINT2", 18750, 2, 2);
						break;
					
					case 71:
						func_162(sParam0, "PM_TINT7", "PD_TINT7", 19000, 7, 2);
						break;
					
					case 72:
						func_162(sParam0, "PM_TINT4", "PD_TINT4", 12500, 4, 2);
						break;
					
					case 73:
						func_162(sParam0, "PM_TINT3", "PD_TINT3", 19500, 3, 2);
						break;
					
					case 74:
						func_162(sParam0, "PM_TINT0", "PD_TINT0", 19750, 0, 2);
						break;
					
					case 75:
						func_162(sParam0, "PM_TINT6", "PD_TINT6", 20000, 6, 2);
						break;
					
					case 76:
						func_162(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 10750, 8, 3);
						break;
					
					case 77:
						func_162(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 11050, 9, 3);
						break;
					
					case 78:
						func_162(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 11950, 10, 3);
						break;
					
					case 79:
						func_162(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 12400, 11, 3);
						break;
					
					case 80:
						func_162(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 10500, 12, 3);
						break;
					
					case 81:
						func_162(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 12500, 13, 3);
						break;
					
					case 82:
						func_162(sParam0, "PM_TINT5", "PD_TINT5_R", 9250, 5, 3);
						break;
					
					case 83:
						func_162(sParam0, "PM_TINT1", "PD_TINT1_R", 9625, 1, 3);
						break;
					
					case 84:
						func_162(sParam0, "PM_TINT2", "PD_TINT2_R", 9375, 2, 3);
						break;
					
					case 85:
						func_162(sParam0, "PM_TINT7", "PD_TINT7_R", 9500, 7, 3);
						break;
					
					case 86:
						func_162(sParam0, "PM_TINT4", "PD_TINT4_R", 6250, 4, 3);
						break;
					
					case 87:
						func_162(sParam0, "PM_TINT3", "PD_TINT3_R", 9750, 3, 3);
						break;
					
					case 88:
						func_162(sParam0, "PM_TINT0", "PD_TINT0_R", 9875, 0, 3);
						break;
					
					case 89:
						func_162(sParam0, "PM_TINT6", "PD_TINT6_R", 10000, 6, 3);
						break;
					
					case 90:
						func_162(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 91:
						func_162(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 92:
						func_162(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 93:
						func_162(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 94:
						func_162(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 95:
						func_162(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					
					case 96:
						func_162(sParam0, "PM_TINT14", "PD_TINT14", 25000, 6, 4);
						break;
					
					case 97:
						func_162(sParam0, "PM_TINT15", "PD_TINT15", 30000, 7, 4);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 1:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 2:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 3:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 4:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 5:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 6:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 7:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 8:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 9:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 10:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 11:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 12:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 13:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 14:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 15:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 16:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 17:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 18:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 19:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 20:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 21:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 22:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 23:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 24:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 25:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 26:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 27:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 28:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 29:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 30:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 31:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 32:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 33:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 34:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 35:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 36:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 37:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 38:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 39:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 40:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 41:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 42:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 43:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 44:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 45:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 46:
						func_162(sParam0, "PS_BAG_0", "PD_CONTENT_9", 0, 0, 1);
						break;
					
					case 47:
						func_162(sParam0, "PS_CAN_0", "PSD_CAN_0", 2750, 8, 2);
						break;
					
					case 48:
						func_162(sParam0, "PS_CAN_1", "PSD_CAN_1", 2750, 9, 2);
						break;
					
					case 49:
						func_162(sParam0, "PS_CAN_2", "PSD_CAN_2", 2750, 10, 2);
						break;
					
					case 50:
						func_162(sParam0, "PS_CAN_3", "PSD_CAN_3", 2750, 11, 2);
						break;
					
					case 51:
						func_162(sParam0, "PS_CAN_4", "PSD_CAN_4", 2750, 12, 2);
						break;
					
					case 52:
						func_162(sParam0, "PS_CAN_5", "PSD_CAN_5", 2750, 13, 2);
						break;
					
					case 53:
						func_162(sParam0, "PM_TINT5", "PD_TINT5", 250, 5, 2);
						break;
					
					case 54:
						func_162(sParam0, "PM_TINT1", "PD_TINT1", 500, 1, 2);
						break;
					
					case 55:
						func_162(sParam0, "PM_TINT2", "PD_TINT2", 1000, 2, 2);
						break;
					
					case 56:
						func_162(sParam0, "PM_TINT7", "PD_TINT7", 1250, 7, 2);
						break;
					
					case 57:
						func_162(sParam0, "PM_TINT4", "PD_TINT4", 1500, 4, 2);
						break;
					
					case 58:
						func_162(sParam0, "PM_TINT3", "PD_TINT3", 1750, 3, 2);
						break;
					
					case 59:
						func_162(sParam0, "PM_TINT0", "PD_TINT0", 2000, 0, 2);
						break;
					
					case 60:
						func_162(sParam0, "PM_TINT6", "PD_TINT6", 2500, 6, 2);
						break;
					
					case 61:
						func_162(sParam0, "PS_CAN_0", "PSD_CAN_0_R", 1375, 8, 3);
						break;
					
					case 62:
						func_162(sParam0, "PS_CAN_1", "PSD_CAN_1_R", 1375, 9, 3);
						break;
					
					case 63:
						func_162(sParam0, "PS_CAN_2", "PSD_CAN_2_R", 1375, 10, 3);
						break;
					
					case 64:
						func_162(sParam0, "PS_CAN_3", "PSD_CAN_3_R", 1375, 11, 3);
						break;
					
					case 65:
						func_162(sParam0, "PS_CAN_4", "PSD_CAN_4_R", 1375, 12, 3);
						break;
					
					case 66:
						func_162(sParam0, "PS_CAN_5", "PSD_CAN_5_R", 1375, 13, 3);
						break;
					
					case 67:
						func_162(sParam0, "PM_TINT5", "PD_TINT5_R", 125, 5, 3);
						break;
					
					case 68:
						func_162(sParam0, "PM_TINT1", "PD_TINT1_R", 250, 1, 3);
						break;
					
					case 69:
						func_162(sParam0, "PM_TINT2", "PD_TINT2_R", 500, 2, 3);
						break;
					
					case 70:
						func_162(sParam0, "PM_TINT7", "PD_TINT7_R", 625, 7, 3);
						break;
					
					case 71:
						func_162(sParam0, "PM_TINT4", "PD_TINT4_R", 750, 4, 3);
						break;
					
					case 72:
						func_162(sParam0, "PM_TINT3", "PD_TINT3_R", 875, 3, 3);
						break;
					
					case 73:
						func_162(sParam0, "PM_TINT0", "PD_TINT0_R", 1000, 0, 3);
						break;
					
					case 74:
						func_162(sParam0, "PM_TINT6", "PD_TINT6_R", 1250, 6, 3);
						break;
					
					case 75:
						func_162(sParam0, "PM_TINT8", "PD_TINT8", 100, 0, 4);
						break;
					
					case 76:
						func_162(sParam0, "PM_TINT9", "PD_TINT9", 14300, 1, 4);
						break;
					
					case 77:
						func_162(sParam0, "PM_TINT10", "PD_TINT10", 14475, 2, 4);
						break;
					
					case 78:
						func_162(sParam0, "PM_TINT11", "PD_TINT11", 14650, 3, 4);
						break;
					
					case 79:
						func_162(sParam0, "PM_TINT12", "PD_TINT12", 14825, 4, 4);
						break;
					
					case 80:
						func_162(sParam0, "PM_TINT13", "PD_TINT13", 15000, 5, 4);
						break;
					}
			}
			break;
		
		case joaat("weapon_knuckle"):
			break;
		
		case -1746263880:
			break;
		
		default:
			if (iParam1 == -61829581)
			{
				switch (iParam2)
				{
					case 0:
						func_162(sParam0, "FW_TINT0", "FWD_TYPE1", Global_262145.f_7188, 0, 5);
						break;
					
					case 1:
						func_162(sParam0, "FW_TINT1", "FWD_TYPE1", Global_262145.f_7188, 1, 5);
						break;
					
					case 2:
						func_162(sParam0, "FW_TINT2", "FWD_TYPE1", Global_262145.f_7188, 2, 5);
						break;
					
					case 3:
						func_162(sParam0, "FW_TINT3", "FWD_TYPE2", Global_262145.f_7189, 3, 5);
						break;
					
					case 4:
						func_162(sParam0, "FW_TINT4", "FWD_TYPE2", Global_262145.f_7189, 4, 5);
						break;
					
					case 5:
						func_162(sParam0, "FW_TINT5", "FWD_TYPE2", Global_262145.f_7189, 5, 5);
						break;
					
					case 6:
						func_162(sParam0, "FW_TINT6", "FWD_TYPE3", Global_262145.f_7190, 6, 5);
						break;
					
					case 7:
						func_162(sParam0, "FW_TINT7", "FWD_TYPE3", Global_262145.f_7190, 7, 5);
						break;
					
					case 8:
						func_162(sParam0, "FW_TINT8", "FWD_TYPE3", Global_262145.f_7190, 8, 5);
						break;
					
					case 9:
						func_162(sParam0, "FW_TINT9", "FWD_TYPE4", Global_262145.f_7191, 9, 5);
						break;
					
					case 10:
						func_162(sParam0, "FW_TINT10", "FWD_TYPE4", Global_262145.f_7191, 10, 5);
						break;
					
					case 11:
						func_162(sParam0, "FW_TINT11", "FWD_TYPE4", Global_262145.f_7191, 11, 5);
						break;
				}
			}
			else if (unk_0x3A711520F83BAE98() || func_77(iParam1, &uVar0) != -1)
			{
				if (func_169(iParam1))
				{
					switch (iParam2)
					{
						case 0:
							func_162(sParam0, "WCT_TINT_0", "", 5000, 0, 0);
							break;
						
						case 1:
							func_162(sParam0, "WCT_TINT_1", "", 5000, 1, 0);
							break;
						
						case 2:
							func_162(sParam0, "WCT_TINT_2", "", 5000, 2, 0);
							break;
						
						case 3:
							func_162(sParam0, "WCT_TINT_3", "", 5000, 3, 0);
							break;
						
						case 4:
							func_162(sParam0, "WCT_TINT_4", "", 5000, 4, 0);
							break;
						
						case 5:
							func_162(sParam0, "WCT_TINT_5", "", 5000, 5, 0);
							break;
						
						case 6:
							func_162(sParam0, "WCT_TINT_6", "", 5000, 6, 0);
							break;
						
						case 7:
							func_162(sParam0, "WCT_TINT_7", "", 5000, 7, 0);
							break;
						
						case 8:
							func_162(sParam0, "WCT_TINT_8", "", 5000, 8, 0);
							break;
						
						case 9:
							func_162(sParam0, "WCT_TINT_9", "", 5000, 9, 0);
							break;
						
						case 10:
							func_162(sParam0, "WCT_TINT_10", "", 5000, 10, 0);
							break;
						
						case 11:
							func_162(sParam0, "WCT_TINT_11", "", 5000, 11, 0);
							break;
						
						case 12:
							func_162(sParam0, "WCT_TINT_12", "", 5000, 12, 0);
							break;
						
						case 13:
							func_162(sParam0, "WCT_TINT_13", "", 5000, 13, 0);
							break;
						
						case 14:
							func_162(sParam0, "WCT_TINT_14", "", 5000, 14, 0);
							break;
						
						case 15:
							func_162(sParam0, "WCT_TINT_15", "", 5000, 15, 0);
							break;
						
						case 16:
							func_162(sParam0, "WCT_TINT_16", "", 5000, 16, 0);
							break;
						
						case 17:
							func_162(sParam0, "WCT_TINT_17", "", 5000, 17, 0);
							break;
						
						case 18:
							func_162(sParam0, "WCT_TINT_18", "", 5000, 18, 0);
							break;
						
						case 19:
							func_162(sParam0, "WCT_TINT_19", "", 5000, 19, 0);
							break;
						
						case 20:
							func_162(sParam0, "WCT_TINT_20", "", 5000, 20, 0);
							break;
						
						case 21:
							func_162(sParam0, "WCT_TINT_21", "", 5000, 21, 0);
							break;
						
						case 22:
							func_162(sParam0, "WCT_TINT_22", "", 5000, 22, 0);
							break;
						
						case 23:
							func_162(sParam0, "WCT_TINT_23", "", 5000, 23, 0);
							break;
						
						case 24:
							func_162(sParam0, "WCT_TINT_24", "", 5000, 24, 0);
							break;
						
						case 25:
							func_162(sParam0, "WCT_TINT_25", "", 5000, 25, 0);
							break;
						
						case 26:
							func_162(sParam0, "WCT_TINT_26", "", 5000, 26, 0);
							break;
						
						case 27:
							func_162(sParam0, "WCT_TINT_27", "", 5000, 27, 0);
							break;
						
						case 28:
							func_162(sParam0, "WCT_TINT_28", "", 5000, 28, 0);
							break;
						
						case 29:
							func_162(sParam0, "WCT_TINT_29", "", 5000, 29, 0);
							break;
						
						case 30:
							func_162(sParam0, "WCT_TINT_30", "", 5000, 30, 0);
							break;
						
						case 31:
							func_162(sParam0, "WCT_TINT_31", "", 5000, 31, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							if ((((iParam1 == joaat("weapon_musket") || iParam1 == joaat("weapon_flaregun")) || iParam1 == joaat("weapon_firework")) || iParam1 == joaat("weapon_marksmanpistol")) || iParam1 == joaat("weapon_dbshotgun"))
							{
								func_162(sParam0, "WM_TINTDF", "", 500, 0, 0);
							}
							else
							{
								func_162(sParam0, "WM_TINT0", "", 500, 0, 0);
							}
							break;
						
						case 1:
							func_162(sParam0, "WM_TINT4", "", 5000, 4, 0);
							break;
						
						case 2:
							func_162(sParam0, "WM_TINT1", "", 5250, 1, 0);
							break;
						
						case 3:
							func_162(sParam0, "WM_TINT6", "", 5500, 6, 0);
							break;
						
						case 4:
							func_162(sParam0, "WM_TINT5", "", 5750, 5, 0);
							break;
						
						case 5:
							func_162(sParam0, "WM_TINT3", "", 7500, 3, 0);
							break;
						
						case 6:
							func_162(sParam0, "WM_TINT2", "", 10000, 2, 0);
							break;
						
						case 7:
							func_162(sParam0, "WM_TINT7", "", 12500, 7, 0);
							break;
						
						case 8:
							func_162(sParam0, "WM_TINT8", "", 15000, 8, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_162(sParam0, "WM_TINT0", "", 500, 0, 0);
						break;
					
					case 1:
						func_162(sParam0, "WM_TINT4", "", 100, 4, 0);
						break;
					
					case 2:
						func_162(sParam0, "WM_TINT1", "", 200, 1, 0);
						break;
					
					case 3:
						func_162(sParam0, "WM_TINT6", "", 400, 6, 0);
						break;
					
					case 4:
						func_162(sParam0, "WM_TINT5", "", 600, 5, 0);
						break;
					
					case 5:
						func_162(sParam0, "WM_TINT3", "", 800, 3, 0);
						break;
					
					case 6:
						func_162(sParam0, "WM_TINT2", "", 1000, 2, 0);
						break;
					
					case 7:
						func_162(sParam0, "WM_TINT7", "", 1500, 7, 0);
						break;
					
					case 8:
						func_162(sParam0, "WM_TINT8", "", 2000, 8, 0);
						break;
					}
			}
			break;
	}
	if (iParam3 && sParam0->f_8 != -1)
	{
		if (unk_0x3A711520F83BAE98())
		{
			switch (iParam1)
			{
				case joaat("gadget_parachute"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_8336;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_8338;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_8340;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_8337;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_8339;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7482;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7624;
							break;
						
						case 8:
							sParam0->f_8 = Global_262145.f_7477;
							break;
						
						case 9:
							sParam0->f_8 = Global_262145.f_7622;
							break;
						
						case 10:
							sParam0->f_8 = Global_262145.f_7620;
							break;
						
						case 11:
							sParam0->f_8 = Global_262145.f_7479;
							break;
						
						case 12:
							sParam0->f_8 = Global_262145.f_7473;
							break;
						
						case 13:
							sParam0->f_8 = Global_262145.f_7798;
							break;
						
						case 14:
							sParam0->f_8 = Global_262145.f_7617;
							break;
						
						case 15:
							sParam0->f_8 = Global_262145.f_7799;
							break;
						
						case 16:
							sParam0->f_8 = Global_262145.f_7800;
							break;
						
						case 17:
							sParam0->f_8 = Global_262145.f_7795;
							break;
						
						case 18:
							sParam0->f_8 = Global_262145.f_7628;
							break;
						
						case 19:
							sParam0->f_8 = Global_262145.f_7794;
							break;
						
						case 20:
							sParam0->f_8 = Global_262145.f_7474;
							break;
						
						case 21:
							sParam0->f_8 = Global_262145.f_7475;
							break;
						
						case 22:
							sParam0->f_8 = Global_262145.f_7801;
							break;
						
						case 23:
							sParam0->f_8 = Global_262145.f_7626;
							break;
						
						case 24:
							sParam0->f_8 = Global_262145.f_7813;
							break;
						
						case 25:
							sParam0->f_8 = Global_262145.f_7614;
							break;
						
						case 26:
							sParam0->f_8 = Global_262145.f_7616;
							break;
						
						case 27:
							sParam0->f_8 = Global_262145.f_7478;
							break;
						
						case 28:
							sParam0->f_8 = Global_262145.f_7802;
							break;
						
						case 29:
							sParam0->f_8 = Global_262145.f_7803;
							break;
						
						case 30:
							sParam0->f_8 = Global_262145.f_7621;
							break;
						
						case 31:
							sParam0->f_8 = Global_262145.f_7796;
							break;
						
						case 32:
							sParam0->f_8 = Global_262145.f_7804;
							break;
						
						case 33:
							sParam0->f_8 = Global_262145.f_7805;
							break;
						
						case 34:
							sParam0->f_8 = Global_262145.f_7618;
							break;
						
						case 35:
							sParam0->f_8 = Global_262145.f_7812;
							break;
						
						case 36:
							sParam0->f_8 = Global_262145.f_7806;
							break;
						
						case 37:
							sParam0->f_8 = Global_262145.f_7797;
							break;
						
						case 38:
							sParam0->f_8 = Global_262145.f_7807;
							break;
						
						case 39:
							sParam0->f_8 = Global_262145.f_7623;
							break;
						
						case 40:
							sParam0->f_8 = Global_262145.f_7472;
							break;
						
						case 41:
							sParam0->f_8 = Global_262145.f_7808;
							break;
						
						case 42:
							sParam0->f_8 = Global_262145.f_7809;
							break;
						
						case 43:
							sParam0->f_8 = Global_262145.f_7810;
							break;
						
						case 44:
							sParam0->f_8 = Global_262145.f_7811;
							break;
						
						case 45:
							sParam0->f_8 = Global_262145.f_7476;
							break;
						
						case 46:
							sParam0->f_8 = Global_262145.f_7619;
							break;
						
						case 47:
							sParam0->f_8 = Global_262145.f_7615;
							break;
						
						case 48:
							sParam0->f_8 = Global_262145.f_7625;
							break;
						
						case 49:
							sParam0->f_8 = Global_262145.f_7471;
							break;
						
						case 50:
							sParam0->f_8 = Global_262145.f_7470;
							break;
						
						case 51:
							sParam0->f_8 = Global_262145.f_7627;
							break;
						
						case 52:
							break;
						
						case 53:
							break;
						
						case 54:
							break;
						
						case 55:
							break;
						
						case 56:
							break;
						
						case 57:
							break;
						
						case 58:
							break;
						
						case 59:
							break;
						
						case 60:
							break;
						
						case 61:
							break;
						
						case 62:
							sParam0->f_8 = Global_262145.f_7464;
							break;
						
						case 63:
							sParam0->f_8 = Global_262145.f_7465;
							break;
						
						case 64:
							sParam0->f_8 = Global_262145.f_7466;
							break;
						
						case 65:
							sParam0->f_8 = Global_262145.f_7467;
							break;
						
						case 66:
							sParam0->f_8 = Global_262145.f_7468;
							break;
						
						case 67:
							sParam0->f_8 = Global_262145.f_7469;
							break;
						
						case 68:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2675));
							break;
						
						case 69:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2671));
							break;
						
						case 70:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2672));
							break;
						
						case 71:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2677));
							break;
						
						case 72:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2674));
							break;
						
						case 73:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2673));
							break;
						
						case 74:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2670));
							break;
						
						case 75:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2676));
							break;
						
						case 76:
							sParam0->f_8 = (Global_262145.f_7464 / 2);
							break;
						
						case 77:
							sParam0->f_8 = (Global_262145.f_7465 / 2);
							break;
						
						case 78:
							sParam0->f_8 = (Global_262145.f_7466 / 2);
							break;
						
						case 79:
							sParam0->f_8 = (Global_262145.f_7467 / 2);
							break;
						
						case 80:
							sParam0->f_8 = (Global_262145.f_7468 / 2);
							break;
						
						case 81:
							sParam0->f_8 = (Global_262145.f_7469 / 2);
							break;
						
						case 82:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2675));
							break;
						
						case 83:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2671));
							break;
						
						case 84:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2672));
							break;
						
						case 85:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2677));
							break;
						
						case 86:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2674));
							break;
						
						case 87:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2673));
							break;
						
						case 88:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2670));
							break;
						
						case 89:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2676));
							break;
						
						case 90:
							break;
						
						case 91:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2664));
							break;
						
						case 92:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2665));
							break;
						
						case 93:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2666));
							break;
						
						case 94:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2669));
							break;
						
						case 95:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2668));
							break;
						
						case 96:
							sParam0->f_8 = Global_262145.f_12498;
							break;
						
						case 97:
							sParam0->f_8 = Global_262145.f_7213;
							break;
					}
					break;
				
				case joaat("weapon_assaultsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6602;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6603;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6604;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6605;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6606;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6607;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6608;
							break;
					}
					break;
				
				case joaat("weapon_snspistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6456;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6457;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6458;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6459;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6460;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6454;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6455;
							break;
					}
					break;
				
				case joaat("weapon_specialcarbine"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6463;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6464;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6465;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6466;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6467;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6461;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6462;
							break;
					}
					break;
				
				case joaat("weapon_heavypistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6470;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6471;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6472;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6473;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6474;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6468;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6469;
							break;
					}
					break;
				
				case joaat("weapon_bullpuprifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_6477;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_6478;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_6479;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_6480;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_6481;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_6475;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_6476;
							break;
					}
					break;
				
				case joaat("weapon_vintagepistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7817;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7818;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7819;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7820;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7821;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7815;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7816;
							break;
					}
					break;
				
				case joaat("weapon_heavyshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7831;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7832;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7833;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7834;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7835;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7829;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7830;
							break;
					}
					break;
				
				case joaat("weapon_marksmanrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_7824;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_7825;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_7826;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_7827;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_7828;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_7822;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_7823;
							break;
					}
					break;
				
				case joaat("weapon_flaregun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13951;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13952;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13953;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13954;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13955;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13949;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13950;
							break;
					}
					break;
				
				case joaat("weapon_bullpupshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13958;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13959;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13960;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13961;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13962;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13956;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13957;
							break;
					}
					break;
				
				case joaat("weapon_gusenberg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13965;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13966;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13967;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13968;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13969;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13963;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13964;
							break;
					}
					break;
				
				case joaat("weapon_hominglauncher"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13972;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13973;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13974;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13975;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13976;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13970;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13971;
							break;
					}
					break;
				
				case joaat("weapon_combatpdw"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13979;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13980;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13981;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13982;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13983;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13977;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13978;
							break;
					}
					break;
				
				case joaat("weapon_marksmanpistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13986;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13987;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13988;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13989;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13990;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13984;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13985;
							break;
					}
					break;
				
				case joaat("weapon_machinepistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_13993;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_13994;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_13995;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_13996;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_13997;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13991;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13992;
							break;
					}
					break;
				
				case joaat("weapon_revolver"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14000;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14001;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14002;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14003;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14004;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_13998;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_13999;
							break;
					}
					break;
				
				case joaat("weapon_dbshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14007;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14008;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14009;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14010;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14011;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14005;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14006;
							break;
					}
					break;
				
				case joaat("weapon_compactrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14014;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14015;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14016;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14017;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14018;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14012;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14013;
							break;
					}
					break;
				
				case joaat("weapon_musket"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14028;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14029;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14030;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14031;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14032;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14026;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14027;
							break;
					}
					break;
				
				case joaat("weapon_firework"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_14021;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_14022;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_14023;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_14024;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_14025;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_14019;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_14020;
							break;
					}
					break;
				
				case 317205821:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_17872;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_17873;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_17874;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_17875;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_17876;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_17870;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_17871;
							break;
					}
					break;
				
				case -1121678507:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_17879;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_17880;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_17881;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_17882;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_17883;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_17877;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_17878;
							break;
					}
					break;
				
				case 125959754:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_17886;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_17887;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_17888;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_17889;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_17890;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_17884;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_17885;
							break;
					}
					break;
				
				case joaat("weapon_pistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2718));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2738));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2758));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2778));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2798));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2678));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2698));
							break;
					}
					break;
				
				case joaat("weapon_combatpistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2719));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2739));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2759));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2779));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2799));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2679));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2699));
							break;
					}
					break;
				
				case joaat("weapon_appistol"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2720));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2740));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2760));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2780));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2800));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2680));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2700));
							break;
					}
					break;
				
				case joaat("weapon_microsmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2721));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2741));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2761));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2781));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2801));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2681));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2701));
							break;
					}
					break;
				
				case joaat("weapon_smg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2722));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2742));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2762));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2782));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2802));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2682));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2702));
							break;
					}
					break;
				
				case joaat("weapon_assaultrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2723));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2743));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2763));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2783));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2803));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2683));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2703));
							break;
					}
					break;
				
				case joaat("weapon_carbinerifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2724));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2744));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2764));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2784));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2804));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2684));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2704));
							break;
					}
					break;
				
				case joaat("weapon_advancedrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2725));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2745));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2765));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2785));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2805));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2685));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2705));
							break;
					}
					break;
				
				case joaat("weapon_mg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2726));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2746));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2766));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2786));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2806));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2686));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2706));
							break;
					}
					break;
				
				case joaat("weapon_combatmg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2727));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2747));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2767));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2787));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2807));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2687));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2707));
							break;
					}
					break;
				
				case joaat("weapon_pumpshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2728));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2748));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2768));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2788));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2808));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2688));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2708));
							break;
					}
					break;
				
				case joaat("weapon_sawnoffshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2729));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2749));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2769));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2789));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2809));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2689));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2709));
							break;
					}
					break;
				
				case joaat("weapon_assaultshotgun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2730));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2750));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2770));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2790));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2810));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2690));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2710));
							break;
					}
					break;
				
				case joaat("weapon_stungun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2732));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2752));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2772));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2792));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2812));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2692));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2712));
							break;
					}
					break;
				
				case joaat("weapon_sniperrifle"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2733));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2753));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2773));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2793));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2813));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2693));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2713));
							break;
					}
					break;
				
				case joaat("weapon_heavysniper"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2734));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2754));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2774));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2794));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2814));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2694));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2714));
							break;
					}
					break;
				
				case joaat("weapon_grenadelauncher"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2735));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2755));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2775));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2795));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2815));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2695));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2715));
							break;
					}
					break;
				
				case joaat("weapon_rpg"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2736));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2756));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2776));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2796));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2816));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2696));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2716));
							break;
					}
					break;
				
				case joaat("weapon_minigun"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2737));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2757));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2777));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2797));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2817));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2697));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2717));
							break;
					}
					break;
				
				case joaat("weapon_pistol50"):
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2837));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2856));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2839));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2838));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2836));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2835));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_2840));
							break;
					}
					break;
				
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
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = Global_262145.f_20118;
							break;
						
						case 2:
							sParam0->f_8 = Global_262145.f_20119;
							break;
						
						case 3:
							sParam0->f_8 = Global_262145.f_20120;
							break;
						
						case 4:
							sParam0->f_8 = Global_262145.f_20121;
							break;
						
						case 5:
							sParam0->f_8 = Global_262145.f_20122;
							break;
						
						case 6:
							sParam0->f_8 = Global_262145.f_20123;
							break;
						
						case 7:
							sParam0->f_8 = Global_262145.f_20124;
							break;
						
						case 8:
							sParam0->f_8 = Global_262145.f_20125;
							break;
						
						case 9:
							sParam0->f_8 = Global_262145.f_20126;
							break;
						
						case 10:
							sParam0->f_8 = Global_262145.f_20127;
							break;
						
						case 11:
							sParam0->f_8 = Global_262145.f_20128;
							break;
						
						case 12:
							sParam0->f_8 = Global_262145.f_20129;
							break;
						
						case 13:
							sParam0->f_8 = Global_262145.f_20130;
							break;
						
						case 14:
							sParam0->f_8 = Global_262145.f_20131;
							break;
						
						case 15:
							sParam0->f_8 = Global_262145.f_20132;
							break;
						
						case 16:
							sParam0->f_8 = Global_262145.f_20133;
							break;
						
						case 17:
							sParam0->f_8 = Global_262145.f_20134;
							break;
						
						case 18:
							sParam0->f_8 = Global_262145.f_20135;
							break;
						
						case 19:
							sParam0->f_8 = Global_262145.f_20136;
							break;
						
						case 20:
							sParam0->f_8 = Global_262145.f_20137;
							break;
						
						case 21:
							sParam0->f_8 = Global_262145.f_20138;
							break;
						
						case 22:
							sParam0->f_8 = Global_262145.f_20139;
							break;
						
						case 23:
							sParam0->f_8 = Global_262145.f_20140;
							break;
						
						case 24:
							sParam0->f_8 = Global_262145.f_20141;
							break;
						
						case 25:
							sParam0->f_8 = Global_262145.f_20142;
							break;
						
						case 26:
							sParam0->f_8 = Global_262145.f_20143;
							break;
						
						case 27:
							sParam0->f_8 = Global_262145.f_20144;
							break;
						
						case 28:
							sParam0->f_8 = Global_262145.f_20145;
							break;
						
						case 29:
							sParam0->f_8 = Global_262145.f_20146;
							break;
						
						case 30:
							sParam0->f_8 = Global_262145.f_20147;
							break;
						
						case 31:
							sParam0->f_8 = Global_262145.f_20148;
							break;
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4396));
							break;
						
						case 2:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4399));
							break;
						
						case 3:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4395));
							break;
						
						case 4:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4397));
							break;
						
						case 5:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4400));
							break;
						
						case 6:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4401));
							break;
						
						case 7:
							sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_262145.f_4398));
							break;
					}
					break;
			}
			sParam0->f_8 = system::floor((system::to_float(sParam0->f_8) * Global_284993.f_8));
		}
		if (unk_0x3A711520F83BAE98() && func_114())
		{
			iVar2 = 2;
			if (iParam1 == joaat("gadget_parachute"))
			{
				iVar2 = sParam0->f_10;
			}
			if (iParam1 == -61829581)
			{
				func_112(&sVar1, *sParam0, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, 6, 1, func_113(iParam1), -1, 0, 0);
				if (unk_0xBBA20694DE4179EB(&sVar1))
				{
					sParam0->f_8 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar1), 1067618600, 1);
				}
			}
			else
			{
				func_112(&sVar1, *sParam0, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, iVar2, func_55(iParam1), func_113(iParam1), -1, 0, 0);
				if (unk_0xBBA20694DE4179EB(&sVar1))
				{
					sParam0->f_8 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar1), 1671640801, 1);
				}
			}
		}
		if (func_79() && (func_161() || func_160()))
		{
			if (iParam1 == joaat("weapon_pistol50") || iParam1 == joaat("weapon_bullpupshotgun"))
			{
				if (!unk_0xB9D80B12FE4456A5())
				{
					sParam0->f_8 = 0;
				}
				else
				{
					func_112(&sVar3, *sParam0, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, 3, func_55(iParam1), func_113(iParam1), -1, 0, 0);
					if (unk_0xBBA20694DE4179EB(&sVar3))
					{
						sParam0->f_8 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar3), 1671640801, 1);
					}
				}
			}
		}
		fVar4 = func_124(iParam1, &(sParam0->f_8));
		if (fVar4 != 1f)
		{
		}
	}
	return sParam0->f_8 != -1;
}

float func_124(int iParam0, var uParam1)//Position - 0x14D1F
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x3A711520F83BAE98() && func_114())
	{
		return 1f;
	}
	if (func_122() || func_121())
	{
		if ((((((iParam0 == -572349828 || iParam0 == 392730790) || iParam0 == -947031628) || iParam0 == -572349828) || iParam0 == -1887867191) || iParam0 == -837150131) || iParam0 == -344484024)
		{
			*uParam1 = 0;
		}
	}
	if (!Global_70856)
	{
		iVar2 = func_157(iParam0);
		if (iVar2 == 3)
		{
			fVar1 = (fVar1 + 0,1f);
		}
		else if (iVar2 == 2)
		{
			fVar1 = (fVar1 + 0,15f);
		}
		else if (iVar2 == 1)
		{
			fVar1 = (fVar1 + 0,25f);
		}
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x3A711520F83BAE98())
		{
			fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			if (func_125())
			{
				fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*uParam1 = system::floor((system::to_float(*uParam1) * fVar0));
	return fVar0;
}

int func_125()//Position - 0x14E68
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		return 0;
	}
	if (func_154())
	{
		if (func_129())
		{
			iVar0 = func_127();
			iVar1 = func_126();
			fVar2 = ((system::to_float(iVar1) / system::to_float(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126()//Position - 0x14EC6
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1368104);
	iVar0 = (iVar0 + Global_1368107);
	return iVar0;
}

int func_127()//Position - 0x14EE2
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1368105);
	iVar0 = (iVar0 + Global_1368106);
	iVar0 = (iVar0 + Global_1368104);
	iVar0 = (iVar0 + Global_1368107);
	iVar0 = (iVar0 + Global_1368109);
	iVar0 = (iVar0 + Global_1368108);
	iVar0 = (iVar0 + func_128(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_128(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_128(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_128(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_128(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_128(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_128(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_128(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_128(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_128(int iParam0)//Position - 0x14FA0
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

int func_129()//Position - 0x14FBE
{
	struct<7> Var0;
	struct<7> Var1;
	
	unk_0x1CCE004C2B8D3ACA(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_153(joaat("mpply_started_mp")) };
	if (func_130(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x15002
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_151(Param1);
	iVar1 = func_141(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_131(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0, int iParam1)//Position - 0x1503D
{
	int iVar0;
	int iVar1;
	
	if (!func_139(iParam1) || !func_139(iParam0))
	{
		return 1;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x15149
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_133(int iParam0)//Position - 0x1515C
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_134(int iParam0)//Position - 0x1516F
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_135(int iParam0)//Position - 0x15182
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_136(int iParam0)//Position - 0x15194
{
	return iParam0 & 15;
}

var func_137(int iParam0)//Position - 0x151A1
{
	return (system::shift_right(iParam0, 26) & 31 * func_138(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)//Position - 0x151C6
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)//Position - 0x151DD
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
	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_134(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)//Position - 0x152B9
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

var func_141(struct<7> Param0, int iParam1)//Position - 0x1535B
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_150(Param0) == 0)
	{
		uVar0 = func_151(Param0);
		uVar1 = uVar0;
		func_142(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_142(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1539B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_134(*uParam0);
	iVar4 = func_133(*uParam0);
	iVar5 = func_132(*uParam0);
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
	func_143(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1551D
{
	func_149(uParam0, iParam1);
	func_148(uParam0, iParam2);
	func_147(uParam0, iParam3);
	func_146(uParam0, iParam5);
	func_145(uParam0, iParam4);
	func_144(uParam0, iParam6);
}

void func_144(var uParam0, int iParam1)//Position - 0x15555
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

void func_145(var uParam0, int iParam1)//Position - 0x155DB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_146(var uParam0, int iParam1)//Position - 0x1562C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_147(var uParam0, int iParam1)//Position - 0x1565F
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_148(var uParam0, int iParam1)//Position - 0x15699
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_149(var uParam0, int iParam1)//Position - 0x156D4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_150(struct<7> Param0)//Position - 0x15710
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_151(struct<6> Param0, var uParam1)//Position - 0x15766
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_144(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_146(&uVar0, func_152(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_145(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_147(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_148(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_149(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_152(int iParam0)//Position - 0x157DC
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

struct<7> func_153(int iParam0)//Position - 0x158A1
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

int func_154()//Position - 0x158C5
{
	if (func_156() && func_155(0))
	{
		return 1;
	}
	return 0;
}

var func_155(int iParam0)//Position - 0x158E3
{
	return Global_1312373[iParam0];
}

var func_156()//Position - 0x158F3
{
	return func_155(func_31() + 1);
}

int func_157(int iParam0)//Position - 0x15905
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_61();
	if (iParam0 == 0 || !func_60(iVar0))
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
		switch (func_158(iVar1, iVar0))
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
		iVar3[0] = func_158(1, iVar0);
		iVar3[1] = func_158(3, iVar0);
		iVar3[2] = func_158(2, iVar0);
		iVar3[3] = func_158(4, iVar0);
		iVar3[4] = func_158(5, iVar0);
		iVar3[5] = func_158(0, iVar0);
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

int func_158(int iParam0, int iParam1)//Position - 0x15B61
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
	iVar4 = func_159(iVar0, iParam1);
	if (func_159(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_159(iVar1, iParam1);
	}
	if (func_159(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_159(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_159(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_159(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_159(int iParam0, int iParam1)//Position - 0x15C65
{
	return Global_104555.f_19117[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_160()//Position - 0x15C81
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

int func_161()//Position - 0x15D52
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

void func_162(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x15EA6
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_163()//Position - 0x15ECE
{
	if (Global_92885.f_1 == joaat("gadget_parachute"))
	{
		return 0;
	}
	return 41;
}

int func_164(int iParam0, bool bParam1)//Position - 0x15EEA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == joaat("gadget_parachute"))
	{
		iVar0 += 62;
		iVar0 += 14;
		iVar0 += 14;
	}
	else if (iParam0 == -61829581)
	{
		iVar0 = 12;
	}
	else if (iParam0 == joaat("weapon_knuckle"))
	{
		iVar0 = 0;
	}
	else if (iParam0 == -1746263880)
	{
		iVar0 = 0;
	}
	else if (iParam0 == joaat("weapon_switchblade"))
	{
		iVar0 = 0;
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (unk_0xE13400DBD14776FE(iParam0) > 0)
		{
			if (unk_0x3A711520F83BAE98())
			{
				iVar0 = unk_0xE13400DBD14776FE(iParam0);
			}
			else if (func_122() || func_121())
			{
				iVar0 = unk_0xE13400DBD14776FE(iParam0);
			}
			else
			{
				iVar0 = 3;
			}
		}
		bVar2 = false;
	}
	if (bParam1)
	{
		if (iParam0 == joaat("gadget_parachute"))
		{
			iVar1 = func_165();
		}
	}
	return (iVar0 + iVar1);
}

int func_165()//Position - 0x15FC2
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_166() && (Global_262145.f_7183 || func_37(3602, -1, -1)))
		{
			return 8;
		}
		return 7;
	}
	return 6;
}

bool func_166()//Position - 0x15FFD
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_167(int iParam0)//Position - 0x1600E
{
	switch (*iParam0)
	{
		case joaat("weapon_unarmed"):
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736:
			return 1;
			break;
	}
	return 0;
}

int func_168(int iParam0, vector3 vParam1)//Position - 0x1608C
{
	return unk_0x9A331BBF019DCAD2(iParam0, vParam1, false, false, false);
}

int func_169(int iParam0)//Position - 0x160A1
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
			return 1;
			break;
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x16100
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_82(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = unk_0x7FAE56FC172FD992(iVar0);
		if (iVar1 != 0)
		{
			return unk_0x9A0B2ED5055D3F0B(iVar1);
		}
	}
	return 1;
}

void func_171(int iParam0)//Position - 0x1612E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_82(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = unk_0x7FAE56FC172FD992(iVar0);
		if (iVar1 != 0)
		{
			unk_0x6FF834D85E2DD4C6(iVar1);
		}
	}
}

int func_172(int iParam0)//Position - 0x16158
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
	else if (func_173(iParam0))
	{
		return Global_262145.f_20010;
	}
	return 1;
}

int func_173(int iParam0)//Position - 0x161BA
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

bool func_174(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x16219
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
	
	func_85(iParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(iParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_85(iParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_85(iParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_85(iParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_85(iParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(iParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_85(iParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_85(iParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -2045758401, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -785724817, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -282298175, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -76490669, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, -1478681000, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1675665560, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_85(iParam0, -966040254, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_85(iParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_85(iParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_85(iParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_85(iParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_85(iParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_85(iParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_85(iParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_85(iParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_85(iParam0, 1134861606, -1312077031, 1, 1);
					break;
				
				case 24:
					func_85(iParam0, 1447477866, -1312077031, 2, 0);
					break;
				
				case 25:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(iParam0, -1860492113, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(iParam0, 937772107, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(iParam0, 1401650071, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(iParam0, 628662130, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(iParam0, -985047251, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(iParam0, -812944463, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(iParam0, -1447352303, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(iParam0, -60338860, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(iParam0, 2088750491, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(iParam0, -1513913454, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(iParam0, -1179558480, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 1283078430, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, 1574296533, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, 391640422, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, 1025884839, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 626875735, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1141059345, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_85(iParam0, -966040254, joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_85(iParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_85(iParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_85(iParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_85(iParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_85(iParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_85(iParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_85(iParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_85(iParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_85(iParam0, -2093598721, -1312077031, 1, 1);
					break;
				
				case 24:
					func_85(iParam0, -1958983669, -1312077031, 2, 0);
					break;
				
				case 25:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(iParam0, 1272803094, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(iParam0, 1080719624, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(iParam0, 792221348, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(iParam0, -452181427, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(iParam0, -746774737, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(iParam0, -2044296061, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(iParam0, -199171978, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(iParam0, -1428075016, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(iParam0, -1735153315, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(iParam0, 1796459838, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(iParam0, -631911105, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 1227564412, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, 400507625, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -161179835, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -1020871238, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 696788003, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1475288264, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 1060929921, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_85(iParam0, -966040254, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_85(iParam0, -1181482284, joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_85(iParam0, -932732805, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_85(iParam0, -569259057, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_85(iParam0, -326080308, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_85(iParam0, 48731514, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_85(iParam0, 880736428, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_85(iParam0, 1303784126, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_85(iParam0, -1018236364, -1312077031, 1, 1);
					break;
				
				case 21:
					func_85(iParam0, -1243457701, -1312077031, 2, 0);
					break;
				
				case 22:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_85(iParam0, 1249283253, joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_85(iParam0, -857707587, joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_85(iParam0, -1097543898, joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_85(iParam0, 1980349969, joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_85(iParam0, 1219453777, joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_85(iParam0, -1853459190, joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_85(iParam0, -2074781016, joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_85(iParam0, 457967755, joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_85(iParam0, 235171324, joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_85(iParam0, 42685294, joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_85(iParam0, -687617715, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -98690520, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, 752418717, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, 247526935, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -130689324, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 1005144310, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, -1981031769, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, -2101279869, joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_85(iParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_85(iParam0, -1233121104, joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_85(iParam0, 776198721, joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, -1404903567, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_85(iParam0, 1764221345, joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_85(iParam0, -1869205321, -1312077031, 1, 1);
					break;
				
				case 15:
					func_85(iParam0, 277524638, -1312077031, 2, 0);
					break;
				
				case 16:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_85(iParam0, -130843390, joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_85(iParam0, -977347227, joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_85(iParam0, -378461067, joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_85(iParam0, 329939175, joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_85(iParam0, 643374672, joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_85(iParam0, 807875052, joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_85(iParam0, -1401804168, joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_85(iParam0, -1096495395, joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_85(iParam0, -847811454, joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_85(iParam0, -1413108537, joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_85(iParam0, 1815270123, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -1795936926, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, 1591132456, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, 634039983, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, 733837882, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, -2046910199, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1329061674, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, -1898661008, joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, 1140676955, joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, 568543123, joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_85(iParam0, 1550611612, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_85(iParam0, 368550800, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_85(iParam0, -1769069349, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_85(iParam0, 24902297, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_85(iParam0, -228041614, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_85(iParam0, -584961562, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_85(iParam0, -1153175946, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_85(iParam0, 1301287696, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_85(iParam0, 1597093459, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_85(iParam0, 1769871776, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_85(iParam0, -1827882671, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 1277460590, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -1182573778, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, 2146055916, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -644734235, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 974903034, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 190476639, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, -1613015470, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, -452809877, joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_85(iParam0, 1038927834, joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_85(iParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_85(iParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_85(iParam0, -1181482284, joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_85(iParam0, -932732805, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_85(iParam0, -569259057, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_85(iParam0, -326080308, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_85(iParam0, 48731514, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_85(iParam0, 880736428, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_85(iParam0, 1303784126, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_85(iParam0, -653246751, -1312077031, 1, 1);
					break;
				
				case 22:
					func_85(iParam0, -1520117877, -1312077031, 2, 0);
					break;
				
				case 23:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_85(iParam0, -996700057, joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_85(iParam0, 940943685, joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_85(iParam0, 1263226800, joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_85(iParam0, -328035840, joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_85(iParam0, 1224100642, joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_85(iParam0, 899228776, joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_85(iParam0, 616006309, joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_85(iParam0, -1561952511, joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_85(iParam0, 572063080, joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_85(iParam0, 1170588613, joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_85(iParam0, 966612367, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_85(iParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_85(iParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_231(iLocal_54))
			{
				if (!func_43(1623028892, joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_85(iParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_85(iParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_85(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_85(iParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_85(iParam0, 1623028892, -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_85(iParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_85(iParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_85(iParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_85(iParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_85(iParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_85(iParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -845938367, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -1618338827, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -380098265, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, 1315288101, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 1004815965, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_85(iParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_85(iParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_85(iParam0, 1060929921, joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_85(iParam0, -1404903567, joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_85(iParam0, 1602080333, joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_85(iParam0, -474112444, joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_85(iParam0, 387223451, joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_85(iParam0, 617753366, joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_85(iParam0, -222378256, joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_85(iParam0, 8741501, joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_85(iParam0, -601286203, joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_85(iParam0, -511433605, joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_85(iParam0, -655387818, joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_85(iParam0, -282476598, joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_85(iParam0, 1739501925, joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_85(iParam0, 1178671645, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 382112385, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -568352468, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -2023373174, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -570355066, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 1362433589, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1346235024, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 77277509, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_85(iParam0, -966040254, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_85(iParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_85(iParam0, -1181482284, joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_85(iParam0, -932732805, joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_85(iParam0, -569259057, joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_85(iParam0, -326080308, joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_85(iParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_85(iParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_85(iParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_85(iParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_85(iParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_85(iParam0, -415870039, -1312077031, 1, 1);
					break;
				
				case 24:
					func_85(iParam0, -109086661, -1312077031, 2, 0);
					break;
				
				case 25:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(iParam0, -737430213, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(iParam0, 1125852043, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(iParam0, 886015732, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(iParam0, -1262287139, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(iParam0, -295208411, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(iParam0, -544154504, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(iParam0, 172765678, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(iParam0, -1982877449, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(iParam0, 2072122460, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(iParam0, -1986220171, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(iParam0, 1377355801, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 21392614, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -829683854, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -1876057490, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -424845447, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, -1928301566, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, -1055790298, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, 1246324211, joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, 1205768792, joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, -1434287169, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_85(iParam0, 259780317, joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_85(iParam0, -1973342474, joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_85(iParam0, 1996130345, joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_85(iParam0, -1455657812, joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_85(iParam0, -1668263084, joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_85(iParam0, 1308243489, joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_85(iParam0, 1122574335, joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_85(iParam0, 1420313469, joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_85(iParam0, 109848390, joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_85(iParam0, 593945703, joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_85(iParam0, 1142457062, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -1797182002, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -422587990, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -679861550, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, 1842849902, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, -193998727, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, -515203373, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_85(iParam0, -966040254, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_85(iParam0, 1528590652, joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_85(iParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_85(iParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_85(iParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_85(iParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_85(iParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_85(iParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_85(iParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_85(iParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_85(iParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_85(iParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_85(iParam0, 941317513, -1312077031, 1, 1);
					break;
				
				case 23:
					func_85(iParam0, 1748450780, -1312077031, 2, 0);
					break;
				
				case 24:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_85(iParam0, -1869284448, joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_85(iParam0, 1931539634, joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_85(iParam0, 1624199183, joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_85(iParam0, -26834113, joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_85(iParam0, -210406055, joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_85(iParam0, 423313640, joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_85(iParam0, 276639596, joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_85(iParam0, -991356863, joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_85(iParam0, -1682848301, joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_85(iParam0, 996213771, joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_85(iParam0, -1214048550, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, -1172055874, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -958864266, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, 15712037, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, 284438159, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, 231258687, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_85(iParam0, 1108334355, joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_85(iParam0, 77277509, joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_85(iParam0, 654802123, joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_85(iParam0, -1069552225, joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_85(iParam0, 11918884, joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_85(iParam0, 176157112, joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_85(iParam0, -220052855, joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_85(iParam0, 288456487, joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_85(iParam0, 398658626, joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_85(iParam0, 628697006, joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_85(iParam0, 925911836, joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_85(iParam0, 1222307441, joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_85(iParam0, 552442715, joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_85(iParam0, -648943513, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_85(iParam0, 25766362, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_85(iParam0, -273676760, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_85(iParam0, -2111807319, joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_85(iParam0, -1449330342, joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_85(iParam0, -89655827, joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_85(iParam0, 1130501904, joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_85(iParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_85(iParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_85(iParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_85(iParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_85(iParam0, -944910075, joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_85(iParam0, 1060929921, joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_85(iParam0, 1704640795, -1312077031, 1, 1);
					break;
				
				case 13:
					func_85(iParam0, 1005743559, -1312077031, 2, 0);
					break;
				
				case 14:
					func_85(iParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_85(iParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_85(iParam0, -1181482284, joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_85(iParam0, -932732805, joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_85(iParam0, -569259057, joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_85(iParam0, -326080308, joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_85(iParam0, 48731514, joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_85(iParam0, 880736428, joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_85(iParam0, 1303784126, joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_85(iParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_85(iParam0, -1654288262, joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_85(iParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_85(iParam0, -1371515465, joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_85(iParam0, -1190793877, joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_85(iParam0, -1497085720, joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_85(iParam0, -1803148180, joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_85(iParam0, -1975971886, joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_85(iParam0, 36929477, joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_85(iParam0, -268444834, joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_85(iParam0, -574769446, joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_85(iParam0, -882699739, joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_85(iParam0, -1468181474, joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_85(iParam0, -974541230, joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_77(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < unk_0x16DE9AAC68A15A81(iVar12))
				{
					if (unk_0x768809DD20D4F552(iVar12, iVar13, &Var16))
					{
						if (!func_179(Var16.f_3))
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
								func_85(iParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
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
		iParam0->f_2 = func_175(iParam1, *iParam0);
	}
	return iParam0->f_4 != 989182658;
}

int func_175(int iParam0, int iParam1)//Position - 0x1AE18
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
				if (func_79() && (func_161() || func_160()))
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
				if (func_79() && (func_161() || func_160()))
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
				if (func_79() && (func_161() || func_160()))
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
				iVar2 = func_77(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x16DE9AAC68A15A81(iVar2))
					{
						if (unk_0x768809DD20D4F552(iVar2, iVar3, &Var5))
						{
							if (!func_179(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_172(iParam1))
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
										if (func_79() && (func_161() || func_160()))
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
				if (func_79() && (func_161() || func_160()))
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
				if (func_79() && (func_161() || func_160()))
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
				iVar6 = func_77(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < unk_0x16DE9AAC68A15A81(iVar6))
					{
						if (unk_0x768809DD20D4F552(iVar6, iVar7, &Var9))
						{
							if (!func_179(Var9.f_3))
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
	if (unk_0x3A711520F83BAE98() && func_114())
	{
		StringCopy(&Var11, func_177(iParam1, iParam0), 16);
		func_112(&sVar10, Var11, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, 1, func_55(iParam0), func_113(iParam0), -1, 0, 0);
		if (unk_0xBBA20694DE4179EB(&sVar10))
		{
			iVar0 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&sVar10), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_176(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_176(int iParam0, int iParam1, float fParam2)//Position - 0x1E4BB
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x3A711520F83BAE98() && func_114())
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
			iVar2 = func_157(iParam0);
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
	if (iLocal_53 == 1)
	{
		if (unk_0x3A711520F83BAE98())
		{
			*iParam1 = system::floor((system::to_float(*iParam1) * Global_262145.f_76));
			fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
		}
	}
	if (iLocal_53 == 0)
	{
		if (unk_0x3A711520F83BAE98())
		{
			*iParam1 = system::floor((system::to_float(*iParam1) * Global_262145.f_76));
			if (func_125())
			{
				fVar1 = (fVar1 + (system::to_float(Global_262145.f_121) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = system::floor((system::to_float(*iParam1) * fVar0));
	return fVar0;
}

char* func_177(int iParam0, int iParam1)//Position - 0x1E5D1
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
				iVar0 = func_77(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar0))
					{
						if (unk_0x768809DD20D4F552(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_178(&(Var3.f_6));
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

var func_178(var uParam0)//Position - 0x1ED56
{
	return uParam0;
}

int func_179(int iParam0)//Position - 0x1ED60
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

int func_180(var uParam0, int iParam1)//Position - 0x1EDFB
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		return joaat("prop_ld_test_01");
	}
	iVar0 = unk_0x8B948C59217A295D(unk_0x50DFD66271612C37(uParam0->f_27[iParam1]));
	if (iVar0 == joaat("weapon_pistol50"))
	{
		return joaat("v_ilev_gunsign_pistol50");
	}
	else if (!unk_0x3A711520F83BAE98() && iVar0 == joaat("weapon_assaultsmg"))
	{
		return joaat("v_ilev_gunsign_asssmg");
	}
	else if (iVar0 == -947031628)
	{
		return joaat("v_ilev_gunsign_hvyrif");
	}
	else if (iVar0 == -572349828)
	{
		return joaat("v_ilev_gunsign_assmg");
	}
	else if (iVar0 == joaat("weapon_bullpupshotgun"))
	{
		return joaat("v_ilev_gunsign_bull");
	}
	else if (iVar0 == 392730790)
	{
		return joaat("v_ilev_gunsign_asssniper");
	}
	else if (iVar0 == -1887867191)
	{
		return joaat("v_ilev_gunsign_progar");
	}
	return joaat("prop_ld_test_01");
}

int func_181(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1EEC3
{
	if (unk_0x3A711520F83BAE98())
	{
		if (iParam3 == 46 || iParam3 == 47)
		{
			return func_76(iParam0);
		}
	}
	if (bParam2)
	{
		if (iParam1 == 3)
		{
			if (Local_148.f_174 != 12)
			{
				return 0;
			}
		}
		else if (Local_148.f_174 == 12)
		{
			return 0;
		}
	}
	if (iParam0 == joaat("object"))
	{
		return 1;
	}
	if (!func_193(iParam0))
	{
		return 0;
	}
	if (func_182(iParam0, Local_148, iParam1))
	{
		return 0;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (func_33() == 0)
		{
			if (iParam0 == joaat("weapon_stungun"))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_182(int iParam0, int iParam1, int iParam2)//Position - 0x1EF61
{
	switch (iParam0)
	{
		case joaat("weapon_railgun"):
			if (!func_79() || unk_0x3A711520F83BAE98())
			{
				return 1;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (unk_0x3A711520F83BAE98())
			{
				if (!func_79())
				{
					return !Global_262145.f_19049;
				}
			}
			else if (!func_79())
			{
				return 1;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (unk_0x3A711520F83BAE98())
			{
				if ((!Global_262145.f_5990 && !func_188(iParam0, -1, 0)) && !Global_262145.f_10896)
				{
					return 1;
				}
			}
			break;
		
		case joaat("weapon_musket"):
			if (unk_0x3A711520F83BAE98())
			{
				if (!Global_262145.f_7183 && !func_188(iParam0, -1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("weapon_firework"):
			if (!unk_0x3A711520F83BAE98())
			{
				return 1;
			}
			else if (Global_262145.f_7192)
			{
				return 1;
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (unk_0x3A711520F83BAE98())
			{
				if (!Global_262145.f_10918 && !func_188(iParam0, -1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 317205821:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16382 && Global_262145.f_16375)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1121678507:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16383 && Global_262145.f_16376)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 125959754:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16384 && Global_262145.f_16377)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1169823560:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16385 && Global_262145.f_16378)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1810795771:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16386 && Global_262145.f_16379)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case -853065399:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16387 && Global_262145.f_16380)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 419712736:
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xE3CCAFB1555348DF() > Global_262145.f_16388 && Global_262145.f_16381)
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case -1075685676:
		case 2024373456:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			if (iParam1 != -1)
			{
				if (iParam1 == 46)
				{
					return 0;
				}
			}
			if (unk_0x74C475EB8E73D398("AM_PI_MENU", unk_0x436287B7DB306165()))
			{
				return 0;
			}
			if (iParam1 != -1)
			{
				if (iParam1 == 47)
				{
					return 0;
				}
			}
			return 1;
			break;
		
		case -1746263880:
			if (unk_0x3A711520F83BAE98())
			{
				if (func_184() && Global_262145.f_21780)
				{
					return 0;
				}
				else
				{
					return 1;
				}
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	if (iParam0 == -61829581)
	{
		if ((unk_0x3A711520F83BAE98() && func_166()) && !Global_262145.f_7193)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		if (!func_183(iParam0, iParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)//Position - 0x1F327
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("gadget_parachute"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultsmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_rpg"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_minigun"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_gusenberg"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_bullpuprifle"):
		case joaat("weapon_musket"):
		case joaat("weapon_marksmanrifle"):
		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_combatpdw"):
		case joaat("weapon_marksmanpistol"):
		case joaat("weapon_railgun"):
		case joaat("weapon_hominglauncher"):
		case joaat("weapon_petrolcan"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
		case -1169823560:
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_vintagepistol"):
		case joaat("weapon_pistol50"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_stungun"):
		case joaat("weapon_heavypistol"):
		case joaat("weapon_machinepistol"):
		case joaat("weapon_bottle"):
		case joaat("weapon_machete"):
		case joaat("weapon_hammer"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knife"):
			iVar0 = 1;
			break;
	}
	if (iParam1 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_184()//Position - 0x1F47C
{
	if (func_185(18981, -1, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2)//Position - 0x1F496
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar0 = 0;
	iVar1 = func_187(iParam0, iParam1);
	iVar2 = func_186(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_186(int iParam0)//Position - 0x1F4DC
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_187(int iParam0, int iParam1)//Position - 0x1F822
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

bool func_188(int iParam0, int iParam1, int iParam2)//Position - 0x1FB21
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_51())
	{
		return 0;
	}
	if (func_154() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_191(func_192(iParam0), -1))
		{
			return 0;
		}
	}
	iVar0 = func_189(iParam0, iParam1);
	iVar1 = func_55(iParam0);
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

var func_189(int iParam0, int iParam1)//Position - 0x1FB8E
{
	var uVar0;
	
	uVar0 = func_29(func_190(iParam0), iParam1, 0);
	return uVar0;
}

int func_190(int iParam0)//Position - 0x1FBA7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_55(iParam0);
	iVar1 = func_50(iVar0);
	if ((func_33() == 0 || func_49() == 0) || (func_33() == 999 && func_49() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 796;
				break;
			
			case 1:
				return 797;
				break;
			
			case 2:
				return 2407;
				break;
			}
	}
	return 7872;
}

int func_191(int iParam0, int iParam1)//Position - 0x1FC26
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_30(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x1FC52
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 231;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 229;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 233;
			break;
		
		case joaat("weapon_gusenberg"):
			return 235;
			break;
		
		case joaat("weapon_dagger"):
			return 256;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 258;
			break;
		
		case joaat("weapon_firework"):
			return 260;
			break;
		
		case joaat("weapon_musket"):
			return 262;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 274;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 276;
			break;
		
		case joaat("weapon_proxmine"):
			return 280;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 282;
			break;
		
		case joaat("weapon_combatpdw"):
			return 284;
			break;
		
		case joaat("weapon_knuckle"):
			return 286;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 288;
			break;
		
		case joaat("weapon_hatchet"):
			return 278;
			break;
		
		case joaat("weapon_machete"):
			return 290;
			break;
		
		case joaat("weapon_machinepistol"):
			return 292;
			break;
		
		case joaat("weapon_compactrifle"):
			return 295;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 297;
			break;
		
		case joaat("weapon_flashlight"):
			return 299;
			break;
		
		case joaat("weapon_revolver"):
			return 302;
			break;
		
		case joaat("weapon_switchblade"):
			return 304;
			break;
		
		case 317205821:
			return 309;
			break;
		
		case -1121678507:
			return 315;
			break;
		
		case 125959754:
			return 313;
			break;
		
		case -853065399:
			return 311;
			break;
		
		case -1169823560:
			return 317;
			break;
		
		case -1810795771:
			return 319;
			break;
		
		case 419712736:
			return 10;
			break;
		
		case 961495388:
			return 32;
			break;
		
		case -86904375:
			return 34;
			break;
		
		case -608341376:
			return 40;
			break;
		
		case 177293209:
			return 56;
			break;
		
		case -1075685676:
			return 18;
			break;
		
		case 2024373456:
			return 28;
			break;
		
		case -2066285827:
			return 48;
			break;
		
		case 1785463520:
			return 276;
			break;
		
		case 1432025498:
			return 44;
			break;
		
		case -879347409:
			return 302;
			break;
		
		case -2009644972:
			return 145;
			break;
		
		case -1768145561:
			return 231;
			break;
		
		case -1746263880:
			return 343;
			break;
	}
	return 2;
}

bool func_193(int iParam0)//Position - 0x200EC
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == -61829581)
	{
		if (unk_0x3A711520F83BAE98() && func_166())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == joaat("weapon_firework") && !unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("weapon_assaultsmg"):
			if (!unk_0x3A711520F83BAE98())
			{
				if (!func_195(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (unk_0x3A711520F83BAE98())
			{
				if (!func_195(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_railgun"):
			if (!func_79() || unk_0x3A711520F83BAE98())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!unk_0x3A711520F83BAE98())
			{
				if (!func_79() && !Global_262145.f_19049)
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x359D12B4F89DA5D6())
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (unk_0x42683C90F2D005ED(Var1) || func_194(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return unk_0x4089C5064EC44730(iParam0);
}

int func_194(int iParam0)//Position - 0x20218
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

int func_195(bool bParam0, bool bParam1)//Position - 0x2038C
{
	if (bParam0)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_668.f_1307, 2))
		{
			return 1;
		}
	}
	if (unk_0x851744C54849FD9D())
	{
		if (!bParam1 || unk_0xDEC0EB6EAE9BC575())
		{
			if (!unk_0x8A81E55A71641BC1() && !unk_0xFD6215BABFD843F2())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x464F779D23F6440D())
		{
			return 0;
		}
	}
	if (unk_0x851744C54849FD9D())
	{
		return 1;
	}
	return 0;
}

bool func_196(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x203F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	
	func_230(iParam2, 8, 0, 0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar0 = unk_0x8B948C59217A295D("v_gun");
	iVar1 = unk_0x8B948C59217A295D("v_gun2");
	iVar2 = unk_0x8B948C59217A295D("gr_grdlc_int_01");
	iVar3 = unk_0x8B948C59217A295D("xm_x17dlc_int_01");
	iVar4 = unk_0x8B948C59217A295D(func_7(iParam0));
	fVar5 = -0,05f;
	fVar6 = 0,92f;
	fVar7 = 1,94f;
	fVar8 = 2,99f;
	fVar9 = 3,7f;
	bVar10 = false;
	if (unk_0x3A711520F83BAE98())
	{
		if (func_79() || Global_262145.f_19049)
		{
			bVar10 = true;
		}
	}
	else if (func_79())
	{
		bVar10 = true;
	}
	if ((unk_0xE3CCAFB1555348DF() > Global_262145.f_16385 && Global_262145.f_16378) && unk_0x3A711520F83BAE98())
	{
		if (iVar4 == iVar0)
		{
			vVar11 = { 22,8f, -1108,5f, 29,5878f };
			vVar12 = { 22,85f, -1108,35f, 29,557f };
		}
		else
		{
			vVar11 = { 1695,139f, 3759,949f, 34,4655f };
			vVar12 = { 1695f, 3760,089f, 34,4655f };
		}
	}
	else if (iVar4 == iVar0)
	{
		vVar11 = { 22,79f, -1108,442f, 29,5878f };
		vVar12 = { 22,93f, -1108,282f, 29,557f };
	}
	else
	{
		vVar11 = { 1695,068f, 3760,049f, 34,4655f };
		vVar12 = { 1694,928f, 3760,189f, 34,4655f };
	}
	if ((iVar4 != iVar2 && iVar4 != iVar3) && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 4, 0, joaat("gadget_parachute"), 1, 19,7012f, -1103,268f, 31,3153f, -10,75f, 0f, -200f, 0f, 0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 1820140472, joaat("weapon_microsmg"), 16, 19,52f, -1103,05f, 30,8f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, 1820140472, joaat("weapon_smg"), 30, 19,54f, -1103,05f, 30,36f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (unk_0x3A711520F83BAE98())
						{
							func_230(iParam2, 0, 1820140472, joaat("weapon_assaultsmg"), 30, 20,755f, -1103,491f, 31,425f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_230(iParam2, 0, -1878508229, joaat("weapon_sawnoffshotgun"), 8, 20,53f, -1103,41f, 31,4f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						func_230(iParam2, 0, -1878508229, joaat("weapon_pumpshotgun"), 8, 20,48f, -1103,4f, 30,9f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, -1878508229, joaat("weapon_assaultshotgun"), 8, 20,62f, -1103,44f, 30,43f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 218444191, joaat("weapon_assaultrifle"), 30, 21,65f, -1103,79f, 31,37f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, 218444191, joaat("weapon_carbinerifle"), 30, 21,7f, -1103,81f, 30,89f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, 218444191, joaat("weapon_advancedrifle"), 30, 21,7f, -1103,81f, 30,41f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 1285032059, joaat("weapon_sniperrifle"), 10, 22,61f, -1104,16f, 30,9f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, 1285032059, joaat("weapon_heavysniper"), 6, 22,56f, -1104,14f, 30,42f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 1788949567, joaat("weapon_mg"), 54, 23,99f, -1104,71f, 31,17f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, 1788949567, joaat("weapon_combatmg"), 100, 24,08f, -1104,77f, 30,58f, 0f, 0f, -20f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 1742569970, joaat("weapon_rpg"), 1, 25,6f, -1105,35f, 31,35f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, 1003267566, joaat("weapon_grenadelauncher"), 10, 25,38f, -1105,22f, 30,96f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, -1614428030, joaat("weapon_minigun"), 50, 25,28f, -1105,25f, 30,47f, 0f, 0f, -20f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 1, 0, joaat("weapon_knife"), 1, 19,647f, -1105,051f, 29,54f, -89,9802f, 65f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 1:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_230(iParam2, 1, 0, joaat("weapon_nightstick"), 1, 19,881f, -1105,446f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_230(iParam2, 1, 0, joaat("weapon_nightstick"), 1, 19,961f, -1105,476f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else
						{
							func_230(iParam2, 1, 0, joaat("weapon_nightstick"), 1, 20,081f, -1105,516f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 2:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_230(iParam2, 1, 0, joaat("weapon_hammer"), 1, 20,521f, -1105,636f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_230(iParam2, 1, 0, joaat("weapon_hammer"), 1, 20,651f, -1105,676f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else
						{
							func_230(iParam2, 1, 0, joaat("weapon_hammer"), 1, 20,491f, -1105,626f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 3:
						func_230(iParam2, 1, 0, joaat("weapon_bottle"), 1, 19,597f, -1105,301f, 29,56f, -89,966f, 110f, 0f, 0f, 0f, 0,475f, 75f, -60f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 1, 0, joaat("weapon_knuckle"), 1, 20,147f, -1105,131f, 29,56f, -2,5f, 95f, 168f, 0f, 0f, 0,475f, 265f, 210f, 30f);
						break;
				}
				break;
			
			case 8:
				if (unk_0x3A711520F83BAE98())
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, 0, joaat("weapon_stungun"), 1, 21,925f, -1105,835f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, 1950175060, joaat("weapon_appistol"), 18, 22,11f, -1106,117f, 29,5387f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, 1950175060, joaat("weapon_combatpistol"), 12, 22,359f, -1105,969f, 29,5407f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, 1950175060, joaat("weapon_pistol"), 12, 22,494f, -1106,262f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, 1950175060, joaat("weapon_pistol50"), 24, 22,854f, -1106,382f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, 0, joaat("weapon_stungun"), 1, 21,9484f, -1105,858f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, 1950175060, joaat("weapon_appistol"), 18, 22,07f, -1106,117f, 29,5387f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, 1950175060, joaat("weapon_combatpistol"), 12, 22,319f, -1105,969f, 29,5407f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, 1950175060, joaat("weapon_pistol"), 12, 22,454f, -1106,262f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, 1950175060, joaat("weapon_pistol50"), 24, 22,814f, -1106,382f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 2, -435287898, joaat("weapon_smokegrenade"), 1, 23,2676f, -1107,351f, 29,6454f, 0f, 0f, 245f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 2, 214501711, joaat("weapon_grenade"), 1, 23,0382f, -1108,005f, 29,5878f, 0f, 0f, 245f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 2, 1411692055, joaat("weapon_stickybomb"), 1, vVar11, 0f, 0f, 25f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 3:
						func_230(iParam2, 2, -1356724057, joaat("weapon_proxmine"), 1, vVar12, 0f, 0f, 25f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 4:
						func_230(iParam2, 2, 357983224, -1169823560, 1, 22,9f, -1108,2f, 29,557f, 90f, -154f, 0f, 0f, 0f, 0,475f, -90f, -26f, 0f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 22,9739f, -1109,181f, 29,6053f, 90f, 0f, 115f, -0,278f, -0,073f, 0,693f, -90f, 0f, 0f);
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[0], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[1], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[2], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[3], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[4], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[5], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[7], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[6], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[8], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[9], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[10], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[11], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[12], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[13], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[14], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[15], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[16], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[17], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[18], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[19], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 16:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 3, 0, joaat("weapon_unarmed"), 20, 16,2547f, -1110,088f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 3, 0, joaat("weapon_unarmed"), 40, 16,4693f, -1109,498f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 3, 0, joaat("weapon_unarmed"), 60, 16,6786f, -1108,923f, 30,7311f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 3, 0, joaat("weapon_unarmed"), 80, 16,3512f, -1109,822f, 29,9462f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 3, 0, joaat("weapon_unarmed"), 100, 16,5802f, -1109,193f, 29,9462f, 0f, 0f, 70f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 17:
				switch (iParam4)
				{
					case 0:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_230(iParam2, 1, 0, joaat("weapon_machete"), 1, 20,717f, -1105,731f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_230(iParam2, 1, 0, joaat("weapon_machete"), 1, 20,907f, -1105,781f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						else
						{
							func_230(iParam2, 1, 0, joaat("weapon_machete"), 1, 20,827f, -1105,771f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						}
						break;
					
					case 1:
						func_230(iParam2, 1, 0, joaat("weapon_dagger"), 1, 19,687f, -1105,151f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 1, 0, joaat("weapon_switchblade"), 1, 19,762f, -1105,274f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 1, 0, joaat("weapon_flashlight"), 1, 20,141f, -1105,416f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
						break;
					
					case 4:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_230(iParam2, 1, 0, joaat("weapon_hatchet"), 1, 20,281f, -1105,506f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
							else
							{
								func_230(iParam2, 1, 0, joaat("weapon_hatchet"), 1, 20,341f, -1105,526f, 29,54f, -89,966f, 60f, 0f, 0f, 0f, 0,475f, 75f, -20f, 0f);
							}
						}
						break;
				}
				break;
			
			case 18:
				if (unk_0x3A711520F83BAE98())
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, 1950175060, joaat("weapon_snspistol"), 12, 22,714f, -1106,102f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, 1950175060, joaat("weapon_heavypistol"), 36, 21,754f, -1105,992f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, 1950175060, joaat("weapon_vintagepistol"), 14, 23,034f, -1106,222f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, 1173416293, joaat("weapon_flaregun"), 2, 21,4779f, -1105,93f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, 1950175060, joaat("weapon_snspistol"), 12, 22,674f, -1106,102f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, 1950175060, joaat("weapon_heavypistol"), 36, 21,714f, -1105,992f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, 1950175060, joaat("weapon_vintagepistol"), 14, 22,994f, -1106,222f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, 1173416293, joaat("weapon_flaregun"), 2, 21,885f, -1105,835f, 29,5454f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 19:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[20], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[21], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[22], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[23], 1, 25,573f, -1106,415f, 32f, 0f, 0f, -120f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 20:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, 1950175060, joaat("weapon_revolver"), 12, 21,6059f, -1105,711f, 29,5416f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						break;
					
					case 1:
						if (unk_0x3A711520F83BAE98())
						{
							func_230(iParam2, 0, 1950175060, joaat("weapon_machinepistol"), 24, 21,9285f, -1105,841f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						else
						{
							func_230(iParam2, 0, 1950175060, joaat("weapon_machinepistol"), 24, 21,6161f, -1105,727f, 29,562f, -90f, 0f, -20f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						}
						break;
				}
				break;
			
			case 21:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 1, 0, -1810795771, 1, 20,434f, -1105,161f, 29,54f, 0f, 90f, -19,5f, 0f, 0f, 0,43f, 0f, -45f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 1, 0, -853065399, 1, 20,994f, -1105,771f, 29,54f, -89,98f, 60f, 0f, 0f, 0f, 0,43f, 45f, 0f, 0f);
						break;
				}
				break;
		}
		if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
		{
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = 31,365f;
					break;
				
				case 1:
					iParam2->f_1.f_2 = 31,017f;
					break;
				
				case 2:
					iParam2->f_1.f_2 = 30,681f;
					break;
				
				case 3:
					iParam2->f_1.f_2 = 30,265f;
					break;
				}
		}
		if (*iParam2 == joaat("weapon_musket"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_firework"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,245f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_specialcarbine"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_hominglauncher"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,4f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_bullpupshotgun"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_heavyshotgun"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,01f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_combatpdw"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,05f, 0f, 0f) };
		}
		if (*iParam2 == 419712736)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == 419712736)
		{
			iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
		}
		if (unk_0x3A711520F83BAE98())
		{
			fVar5 = -0,05f;
			fVar6 = 0,92f;
			fVar7 = 1,94f;
			fVar8 = 2,99f;
			fVar9 = 3,7f;
		}
		else
		{
			fVar5 = -0,05f;
			fVar6 = 0,99f;
			fVar7 = 2,18f;
			fVar8 = 3,34f;
			fVar9 = 3,7f;
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar5)) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar6)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar7)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar8)) };
		}
		else if (iParam3 == 15)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar9)) };
		}
	}
	if (iVar4 == iVar1 && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("gadget_parachute"), 1689,082f, 3759,161f, 36,2236f, 0f, 0f, -132f, 0f, 0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_microsmg"), 1688,8f, 3759,09f, 35,7f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_smg"), 1688,82f, 3759,1f, 35,27f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						if (unk_0x3A711520F83BAE98())
						{
							func_229(iParam2, joaat("weapon_assaultsmg"), 1689,693f, 3760,031f, 36,328f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						else
						{
							func_229(iParam2, joaat("weapon_sawnoffshotgun"), 1689,51f, 3759,85f, 36,3f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_pumpshotgun"), 1689,51f, 3759,83f, 35,8f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_assaultshotgun"), 1689,56f, 3759,91f, 35,34f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_assaultrifle"), 1690,32f, 3760,76f, 36,27f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_carbinerifle"), 1690,36f, 3760,8f, 35,79f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_advancedrifle"), 1690,35f, 3760,8f, 35,32f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_sniperrifle"), 1691,02f, 3761,51f, 35,81f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_heavysniper"), 1690,99f, 3761,47f, 35,32f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_mg"), 1692,06f, 3762,57f, 36,08f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_combatmg"), 1692,15f, 3762,63f, 35,49f, 0f, 0f, 47,3919f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_rpg"), 1693,26f, 3763,82f, 36,26f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_grenadelauncher"), 1693,12f, 3763,72f, 35,88f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_minigun"), 1693,06f, 3763,56f, 35,39f, 0f, 0f, 47,3919f, -0,5f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_knife"), 1690,703f, 3758,437f, 34,449f, -90f, 0f, 0f, 0f, 0f, 0,475f, 35f, 0f, 0f);
						break;
					
					case 1:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_229(iParam2, joaat("weapon_nightstick"), 1691,133f, 3758,507f, 34,4425f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_229(iParam2, joaat("weapon_nightstick"), 1691,183f, 3758,547f, 34,443f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else
						{
							func_229(iParam2, joaat("weapon_nightstick"), 1691,233f, 3758,647f, 34,443f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 2:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_229(iParam2, joaat("weapon_hammer"), 1691,58f, 3759f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_229(iParam2, joaat("weapon_hammer"), 1691,653f, 3759,13f, 34,449f, -89,98f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else
						{
							func_229(iParam2, joaat("weapon_hammer"), 1691,493f, 3758,97f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 3:
						func_229(iParam2, joaat("weapon_bottle"), 1690,903f, 3758,287f, 34,466f, -89,9657f, 42,9f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 4:
						func_229(iParam2, joaat("weapon_knuckle"), 1690,943f, 3758,847f, 34,415f, -182f, 96,0003f, 41f, 0f, 0f, 0,475f, 90f, 0f, 0f);
						break;
				}
				break;
			
			case 8:
				if (unk_0x3A711520F83BAE98())
				{
					switch (iParam4)
					{
						case 0:
							func_229(iParam2, joaat("weapon_stungun"), 1692,277f, 3760,185f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 1:
							func_229(iParam2, joaat("weapon_appistol"), 1692,642f, 3760,265f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_229(iParam2, joaat("weapon_combatpistol"), 1692,592f, 3760,559f, 34,449f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 3:
							func_229(iParam2, joaat("weapon_pistol"), 1692,909f, 3760,548f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 4:
							func_229(iParam2, joaat("weapon_pistol50"), 1693,159f, 3760,838f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_229(iParam2, joaat("weapon_stungun"), 1692,352f, 3760,272f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 1:
							func_229(iParam2, joaat("weapon_appistol"), 1692,622f, 3760,245f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_229(iParam2, joaat("weapon_combatpistol"), 1692,592f, 3760,559f, 34,449f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 3:
							func_229(iParam2, joaat("weapon_pistol"), 1692,889f, 3760,528f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 4:
							func_229(iParam2, joaat("weapon_pistol50"), 1693,139f, 3760,818f, 34,4499f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						}
				}
				break;
			
			case 9:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_smokegrenade"), 1694,224f, 3760,886f, 34,5537f, 0f, 0f, 310f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_grenade"), 1694,739f, 3760,423f, 34,4961f, 0f, 0f, 310f, 0f, 0f, 0,475f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_stickybomb"), vVar11, 0f, 0f, 90f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 3:
						func_229(iParam2, joaat("weapon_proxmine"), vVar12, 0f, 0f, 90f, 0f, 0f, 0,475f, 90f, 0f, -135f);
						break;
					
					case 4:
						func_229(iParam2, -1169823560, 1694,85f, 3760,2f, 34,4655f, 90f, -90f, 0f, 0f, 0f, 0,475f, 90f, 90f, -110f);
						break;
				}
				break;
			
			case 10:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 5, 0, joaat("weapon_petrolcan"), 5000, 1695,804f, 3759,918f, 34,5136f, -90f, 0f, 2,5f, -0,278f, -0,073f, 0,693f, 90f, 0f, -2,5f);
						break;
				}
				break;
			
			case 11:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[0], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[1], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[2], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[3], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 12:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[4], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[5], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[7], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[6], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 13:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[8], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[9], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[10], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[11], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 14:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[12], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[13], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[14], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[15], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 15:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[16], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[17], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[18], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[19], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 16:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_unarmed"), 1694,045f, 3753,344f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_unarmed"), 1693,583f, 3753,768f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_unarmed"), 1693,133f, 3754,183f, 35,6458f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_229(iParam2, joaat("weapon_unarmed"), 1693,838f, 3753,535f, 34,8608f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_229(iParam2, joaat("weapon_unarmed"), 1693,345f, 3753,988f, 34,8608f, 0f, 0f, 137,392f, 0f, -0,565f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 17:
				switch (iParam4)
				{
					case 0:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_229(iParam2, joaat("weapon_machete"), 1691,755f, 3759,16f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_229(iParam2, joaat("weapon_machete"), 1691,885f, 3759,36f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						else
						{
							func_229(iParam2, joaat("weapon_machete"), 1691,765f, 3759,22f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						}
						break;
					
					case 1:
						func_229(iParam2, joaat("weapon_dagger"), 1690,813f, 3758,442f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 2:
						func_229(iParam2, joaat("weapon_switchblade"), 1690,95f, 3758,485f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 3:
						func_229(iParam2, joaat("weapon_flashlight"), 1691,223f, 3758,727f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 4:
						if (bVar10)
						{
							if (unk_0x3A711520F83BAE98())
							{
								func_229(iParam2, joaat("weapon_hatchet"), 1691,363f, 3758,85f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
							else
							{
								func_229(iParam2, joaat("weapon_hatchet"), 1691,403f, 3758,9f, 34,449f, -89,966f, -2,392f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
							}
						}
						break;
				}
				break;
			
			case 18:
				if (unk_0x3A711520F83BAE98())
				{
					switch (iParam4)
					{
						case 0:
							func_229(iParam2, joaat("weapon_snspistol"), 1692,859f, 3760,838f, 34,4499f, -90f, -46f, 0f, 0f, 0f, 0,475f, 90f, 46f, 45f);
							break;
						
						case 1:
							func_229(iParam2, joaat("weapon_heavypistol"), 1692,4f, 3760,005f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_229(iParam2, joaat("weapon_vintagepistol"), 1693,109f, 3761,108f, 34,4537f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 3:
							func_229(iParam2, joaat("weapon_flaregun"), 1692,234f, 3759,775f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
					}
				}
				else
				{
					switch (iParam4)
					{
						case 0:
							func_229(iParam2, joaat("weapon_snspistol"), 1692,859f, 3760,838f, 34,4499f, -90f, -46f, 0f, 0f, 0f, 0,475f, 90f, 46f, 45f);
							break;
						
						case 1:
							func_229(iParam2, joaat("weapon_heavypistol"), 1692,337f, 3759,945f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						
						case 2:
							func_229(iParam2, joaat("weapon_vintagepistol"), 1693,109f, 3761,108f, 34,4537f, -90f, -46,5f, 0f, 0f, 0f, 0,475f, 90f, 46,5f, 45f);
							break;
						
						case 3:
							func_229(iParam2, joaat("weapon_flaregun"), 1692,277f, 3760,185f, 34,4537f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
							break;
						}
				}
				break;
			
			case 19:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 7, 0, (*uParam1)[20], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 7, 0, (*uParam1)[21], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 7, 0, (*uParam1)[22], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 7, 0, (*uParam1)[23], 1, 1694,283f, 3763,622f, 37,06f, 0f, 0f, -42,608f, 0f, -0,755f, 0f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 20:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, joaat("weapon_revolver"), 1692,054f, 3759,98f, 34,4499f, -90f, -46f, 0f, 0f, 0f, 0,475f, 90f, 46f, 45f);
						break;
					
					case 1:
						if (unk_0x3A711520F83BAE98())
						{
							func_229(iParam2, joaat("weapon_machinepistol"), 1692,312f, 3760,233f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						else
						{
							func_229(iParam2, joaat("weapon_machinepistol"), 1692,102f, 3759,973f, 34,447f, -90f, -47f, 0f, 0f, 0f, 0,475f, 90f, 47f, 45f);
						}
						break;
				}
				break;
			
			case 21:
				switch (iParam4)
				{
					case 0:
						func_229(iParam2, -1810795771, 1691,15f, 3759,175f, 34,449f, -89,9657f, 42,9f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
					
					case 1:
						func_229(iParam2, -853065399, 1691,895f, 3759,38f, 34,449f, -89,9657f, -2,39193f, 0f, 0f, 0f, 0,475f, 45f, 0f, 0f);
						break;
				}
				break;
		}
		if ((((iParam3 == 11 || iParam3 == 12) || iParam3 == 13) || iParam3 == 14) || iParam3 == 15)
		{
			iParam2->f_1.f_2 = (iParam2->f_1.f_2 - 0,15f);
			switch (iParam4)
			{
				case 0:
					iParam2->f_1.f_2 = 36,275f;
					break;
				
				case 1:
					iParam2->f_1.f_2 = 35,929f;
					break;
				
				case 2:
					iParam2->f_1.f_2 = 35,593f;
					break;
				
				case 3:
					iParam2->f_1.f_2 = 35,177f;
					break;
				}
		}
		if (*iParam2 == joaat("weapon_musket"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,15f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_firework"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,245f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_specialcarbine"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_hominglauncher"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,4f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_bullpupshotgun"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,05f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_heavyshotgun"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,01f, 0f, 0f) };
		}
		if (*iParam2 == joaat("weapon_combatpdw"))
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, 0,05f, 0f, 0f) };
		}
		if (*iParam2 == 419712736)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, -0,08f, 0f, 0f) };
		}
		if (*iParam2 == 419712736)
		{
			iParam2->f_4.f_1 = (iParam2->f_4.f_1 + 90f);
		}
		if (unk_0x3A711520F83BAE98())
		{
			fVar5 = -0,05f;
			fVar6 = 0,92f;
			fVar7 = 1,94f;
			fVar8 = 2,99f;
			fVar9 = 3,7f;
		}
		else
		{
			fVar5 = -0,05f;
			fVar6 = 0,99f;
			fVar7 = 2,18f;
			fVar8 = 3,34f;
			fVar9 = 3,7f;
		}
		if (iParam3 == 11)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar5)) };
		}
		else if (iParam3 == 12)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar6)) };
		}
		else if (iParam3 == 13)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar7)) };
		}
		else if (iParam3 == 14)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar8)) };
		}
		else if (iParam3 == 15)
		{
			iParam2->f_1 = { unk_0x9EA50C5EC175E58E(iParam2->f_1, iParam2->f_4.f_2, Vector(0f, 0f, -0,4f) + Vector(0f, 0f, fVar9)) };
		}
	}
	if (iVar4 == iVar2 && iParam6 == 0)
	{
		switch (iParam3)
		{
			case 0:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_snspistol")), joaat("weapon_snspistol"), func_225(joaat("weapon_snspistol")), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(joaat("weapon_revolver")), joaat("weapon_revolver"), func_225(joaat("weapon_revolver")), func_11(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(joaat("weapon_specialcarbine")), joaat("weapon_specialcarbine"), func_225(joaat("weapon_specialcarbine")), func_11(2, 2) + Vector(0,85f, 1,15f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(joaat("weapon_bullpuprifle")), joaat("weapon_bullpuprifle"), func_225(joaat("weapon_bullpuprifle")), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(joaat("weapon_pumpshotgun")), joaat("weapon_pumpshotgun"), func_225(joaat("weapon_pumpshotgun")), func_11(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_snspistol")), joaat("weapon_snspistol"), func_225(joaat("weapon_snspistol")), func_11(45, 3) + Vector(0,85f, 1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(joaat("weapon_revolver")), joaat("weapon_revolver"), func_225(joaat("weapon_revolver")), func_11(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(joaat("weapon_specialcarbine")), joaat("weapon_specialcarbine"), func_225(joaat("weapon_specialcarbine")), func_11(45, 3) + Vector(0,85f, 1,13f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(joaat("weapon_bullpuprifle")), joaat("weapon_bullpuprifle"), func_225(joaat("weapon_bullpuprifle")), func_11(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(joaat("weapon_pumpshotgun")), joaat("weapon_pumpshotgun"), func_225(joaat("weapon_pumpshotgun")), func_11(45, 3) + Vector(0,85f, 1,11f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 1:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_marksmanrifle")), joaat("weapon_marksmanrifle"), func_225(joaat("weapon_marksmanrifle")), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_marksmanrifle")), joaat("weapon_marksmanrifle"), func_225(joaat("weapon_marksmanrifle")), func_11(45, 3) + Vector(0,85f, 1,08f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 2:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(-2009644972), -2009644972, func_225(-2009644972), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(-879347409), -879347409, func_225(-879347409), func_11(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(-1768145561), -1768145561, func_225(-1768145561), func_11(2, 2) + Vector(0,85f, 1,15f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(-2066285827), -2066285827, func_225(-2066285827), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(1432025498), 1432025498, func_225(1432025498), func_11(2, 2) + Vector(0,85f, 1,1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(-2009644972), -2009644972, func_225(-2009644972), func_11(45, 3) + Vector(0,85f, 1f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(-879347409), -879347409, func_225(-879347409), func_11(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(-1768145561), -1768145561, func_225(-1768145561), func_11(45, 3) + Vector(0,85f, 1,13f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(-2066285827), -2066285827, func_225(-2066285827), func_11(45, 3) + Vector(0,85f, 1,04f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(1432025498), 1432025498, func_225(1432025498), func_11(45, 3) + Vector(0,85f, 1,11f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 3:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(1785463520), 1785463520, func_225(1785463520), func_11(2, 2) + Vector(0,85f, 1,05f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(1785463520), 1785463520, func_225(1785463520), func_11(45, 3) + Vector(0,85f, 1,08f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 4:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_pistol")), joaat("weapon_pistol"), func_225(joaat("weapon_pistol")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(joaat("weapon_smg")), joaat("weapon_smg"), func_225(joaat("weapon_smg")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(joaat("weapon_assaultrifle")), joaat("weapon_assaultrifle"), func_225(joaat("weapon_assaultrifle")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(joaat("weapon_carbinerifle")), joaat("weapon_carbinerifle"), func_225(joaat("weapon_carbinerifle")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(joaat("weapon_combatmg")), joaat("weapon_combatmg"), func_225(joaat("weapon_combatmg")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_pistol")), joaat("weapon_pistol"), func_225(joaat("weapon_pistol")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(joaat("weapon_smg")), joaat("weapon_smg"), func_225(joaat("weapon_smg")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(joaat("weapon_assaultrifle")), joaat("weapon_assaultrifle"), func_225(joaat("weapon_assaultrifle")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(joaat("weapon_carbinerifle")), joaat("weapon_carbinerifle"), func_225(joaat("weapon_carbinerifle")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(joaat("weapon_combatmg")), joaat("weapon_combatmg"), func_225(joaat("weapon_combatmg")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 5:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_heavysniper")), joaat("weapon_heavysniper"), func_225(joaat("weapon_heavysniper")), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(joaat("weapon_heavysniper")), joaat("weapon_heavysniper"), func_225(joaat("weapon_heavysniper")), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 6:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(-1075685676), -1075685676, func_225(-1075685676), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(2024373456), 2024373456, func_225(2024373456), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(961495388), 961495388, func_225(961495388), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(-86904375), -86904375, func_225(-86904375), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(-608341376), -608341376, func_225(-608341376), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(-1075685676), -1075685676, func_225(-1075685676), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 1:
							func_230(iParam2, 0, func_226(2024373456), 2024373456, func_225(2024373456), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 2:
							func_230(iParam2, 0, func_226(961495388), 961495388, func_225(961495388), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 3:
							func_230(iParam2, 0, func_226(-86904375), -86904375, func_225(-86904375), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) + Vector(0f, 0,15f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						
						case 4:
							func_230(iParam2, 0, func_226(-608341376), -608341376, func_225(-608341376), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			
			case 7:
				if (func_227(2, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(177293209), 177293209, func_225(177293209), func_11(2, 2) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
					}
				}
				else if (func_227(3, &uVar13))
				{
					switch (iParam4)
					{
						case 0:
							func_230(iParam2, 0, func_226(177293209), 177293209, func_225(177293209), func_11(45, 3) + Vector(0,85f, 0,96f, -0,4f) - Vector(0f, 0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 0,95f, 0f, 0f, 0f);
							break;
						}
				}
				break;
			}
	}
	if (iVar4 == iVar3 || iParam6 == 1)
	{
		switch (iParam3)
		{
			case 0:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(joaat("weapon_snspistol")), joaat("weapon_snspistol"), func_225(joaat("weapon_snspistol")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, func_226(joaat("weapon_revolver")), joaat("weapon_revolver"), func_225(joaat("weapon_revolver")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, func_226(joaat("weapon_specialcarbine")), joaat("weapon_specialcarbine"), func_225(joaat("weapon_specialcarbine")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 0, func_226(joaat("weapon_bullpuprifle")), joaat("weapon_bullpuprifle"), func_225(joaat("weapon_bullpuprifle")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,16f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 0, func_226(joaat("weapon_pumpshotgun")), joaat("weapon_pumpshotgun"), func_225(joaat("weapon_pumpshotgun")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 1:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(joaat("weapon_marksmanrifle")), joaat("weapon_marksmanrifle"), func_225(joaat("weapon_marksmanrifle")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,13f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 2:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(-2009644972), -2009644972, func_225(-2009644972), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, func_226(-879347409), -879347409, func_225(-879347409), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, func_226(-1768145561), -1768145561, func_225(-1768145561), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,02f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 0, func_226(-2066285827), -2066285827, func_225(-2066285827), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,16f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 0, func_226(1432025498), 1432025498, func_225(1432025498), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,07f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 3:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(1785463520), 1785463520, func_225(1785463520), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,12f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 4:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(joaat("weapon_pistol")), joaat("weapon_pistol"), func_225(joaat("weapon_pistol")), 517,605f, 4751,7f, -69,1f, 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, func_226(joaat("weapon_smg")), joaat("weapon_smg"), func_225(joaat("weapon_smg")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,04f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, func_226(joaat("weapon_assaultrifle")), joaat("weapon_assaultrifle"), func_225(joaat("weapon_assaultrifle")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 0, func_226(joaat("weapon_carbinerifle")), joaat("weapon_carbinerifle"), func_225(joaat("weapon_carbinerifle")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,01f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 0, func_226(joaat("weapon_combatmg")), joaat("weapon_combatmg"), func_225(joaat("weapon_combatmg")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,1f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 5:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(joaat("weapon_heavysniper")), joaat("weapon_heavysniper"), func_225(joaat("weapon_heavysniper")), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,18f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 6:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(-1075685676), -1075685676, func_225(-1075685676), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,06f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 1:
						func_230(iParam2, 0, func_226(2024373456), 2024373456, func_225(2024373456), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,14f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 2:
						func_230(iParam2, 0, func_226(961495388), 961495388, func_225(961495388), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,11f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 3:
						func_230(iParam2, 0, func_226(-86904375), -86904375, func_225(-86904375), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
					
					case 4:
						func_230(iParam2, 0, func_226(-608341376), -608341376, func_225(-608341376), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,05f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			
			case 7:
				switch (iParam4)
				{
					case 0:
						func_230(iParam2, 0, func_226(177293209), 177293209, func_225(177293209), Vector(-69,1f, 4751,7f, 517,605f) + Vector(0f, -0,18f, 0f), 0f, 0f, 90f, 0f, 0f, 1,13f, 0f, 0f, 0f);
						break;
				}
				break;
			}
	}
	if (bParam5)
	{
		if (*iParam2 == joaat("weapon_unarmed"))
		{
			func_204(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), iParam4);
		}
		else
		{
			func_204(*iParam2, &(iParam2->f_19), &(iParam2->f_20), &(iParam2->f_21), 0);
		}
	}
	if (iVar4 == iVar0)
	{
		iVar14 = 28;
	}
	else if (iVar4 == iVar1)
	{
		iVar14 = 29;
	}
	else if (iVar4 == iVar2)
	{
		iVar14 = 46;
	}
	else if (iVar4 == iVar3)
	{
		iVar14 = 47;
	}
	func_203(iVar14, iParam0, &(iParam2->f_1));
	func_199(iVar14, iParam0, &(iParam2->f_4));
	if (iParam2->f_24 == 7)
	{
		if (*iParam2 == joaat("object"))
		{
			iVar15 = 0;
			while (iVar15 < 25)
			{
				if (uParam1->f_80[iVar15] == iParam3 && uParam1->f_54[iVar15] == iParam4)
				{
					iParam2->f_23 = iVar15;
				}
				iVar15++;
			}
		}
		else if (*iParam2 != 0)
		{
			if (*iParam2 == -61829581)
			{
				iParam2->f_24 = 6;
			}
			else if (*iParam2 == joaat("weapon_knuckle"))
			{
				iParam2->f_24 = 1;
			}
			else
			{
				func_197(iParam2, *iParam2);
				switch (unk_0x684DC0C684AE74CA(*iParam2))
				{
					case 416676503:
					case -957766203:
					case 970310034:
					case 1159398588:
					case 860033945:
					case -1212426201:
					case -1569042529:
					case 88899580:
					case 690389602:
						iParam2->f_24 = 0;
						break;
					
					case -728555052:
					case -37788308:
					case 1595662460:
					case 507375312:
					case -755518101:
					case -801780072:
					case 431593103:
						iParam2->f_24 = 1;
						break;
					
					case 1548507267:
						iParam2->f_24 = 2;
						break;
					}
				}
			}
	}
	return *iParam2 != 0;
}

void func_197(var uParam0, int iParam1)//Position - 0x254C6
{
	struct<7> Var0;
	
	switch (iParam1)
	{
		case joaat("weapon_assaultsmg"):
			func_198(uParam0, 1820140472, 30);
			break;
		
		case joaat("weapon_bullpupshotgun"):
			func_198(uParam0, -1878508229, 8);
			break;
		
		case joaat("weapon_pistol50"):
			func_198(uParam0, 1950175060, 12);
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			func_198(uParam0, -1878508229, 8);
			break;
		
		case joaat("weapon_machinepistol"):
			func_198(uParam0, 1820140472, 18);
			break;
		
		default:
			if (func_77(iParam1, &Var0) != -1)
			{
				func_198(uParam0, Var0.f_5, Var0.f_6);
			}
			break;
	}
}

void func_198(var uParam0, int iParam1, int iParam2)//Position - 0x25560
{
	uParam0->f_25 = iParam1;
	uParam0->f_22 = iParam2;
}

void func_199(int iParam0, int iParam1, var uParam2)//Position - 0x25574
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	
	func_200(iParam0, &uVar0, &vVar1);
	func_200(iParam1, &uVar2, &vVar3);
	while (vVar3.z > 180f)
	{
		vVar3.z = (vVar3.z - 360f);
	}
	while (vVar3.z < -180f)
	{
		vVar3.z = (vVar3.z + 360f);
	}
	while (vVar1.z > 180f)
	{
		vVar1.z = (vVar1.z - 360f);
	}
	while (vVar1.z < -180f)
	{
		vVar1.z = (vVar1.z + 360f);
	}
	uParam2->f_2 = (uParam2->f_2 + (vVar3.z - vVar1.z));
	while (uParam2->f_2 > 180f)
	{
		uParam2->f_2 = (uParam2->f_2 - 360f);
	}
	while (uParam2->f_2 < -180f)
	{
		uParam2->f_2 = (uParam2->f_2 + 360f);
	}
}

int func_200(int iParam0, var uParam1, var uParam2)//Position - 0x25658
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -1:
			break;
		
		case 0:
			*uParam1 = { -821,61f, -183,79f, 37,43f };
			*uParam2 = { 0f, 0f, func_202(-2,6f) };
			break;
		
		case 1:
			*uParam1 = { 133,97f, -1708,3f, 29,48f };
			*uParam2 = { 0f, 0f, func_202(-3,84f) };
			break;
		
		case 2:
			*uParam1 = { -1284,88f, -1115,09f, 7,18f };
			*uParam2 = { 0f, 0f, func_202(-4,71f) };
			break;
		
		case 3:
			*uParam1 = { 1930,9f, 3727,41f, 33,03f };
			*uParam2 = { 0f, 0f, func_202(-2,62f) };
			break;
		
		case 4:
			*uParam1 = { 1210,92f, -470,18f, 66,39f };
			*uParam2 = { 0f, 0f, func_202(-4,97f) };
			break;
		
		case 5:
			*uParam1 = { -30,28f, -151,18f, 57,26f };
			*uParam2 = { 0f, 0f, func_202(-0,35f) };
			break;
		
		case 6:
			*uParam1 = { -278,21f, 6231,15f, 31,88f };
			*uParam2 = { 0f, 0f, func_202(-5,49f) };
			break;
		
		case 7:
			*uParam1 = { 74,6f, -1392,09f, 29,53f };
			*uParam2 = { 0f, 0f, func_202(-1,57f) };
			break;
		
		case 8:
			*uParam1 = { 1694,87f, 4822,11f, 42,22f };
			*uParam2 = { 0f, 0f, func_202(-4,58f) };
			break;
		
		case 9:
			*uParam1 = { 426,35f, -807,12f, 29,65f };
			*uParam2 = { 0f, 0f, func_202(-4,71f) };
			break;
		
		case 10:
			*uParam1 = { -1101,41f, 2711,75f, 19,26f };
			*uParam2 = { 0f, 0f, func_202(-2,41f) };
			break;
		
		case 11:
			*uParam1 = { 1197,49f, 2711f, 38,38f };
			*uParam2 = { 0f, 0f, func_202(-3,14f) };
			break;
		
		case 12:
			*uParam1 = { -822,1f, -1072,44f, 11,48f };
			*uParam2 = { 0f, 0f, func_202(-2,62f) };
			break;
		
		case 13:
			*uParam1 = { 4,75f, 6511,3f, 32,03f };
			*uParam2 = { 0f, 0f, func_202(-5,54f) };
			break;
		
		case 14:
			*uParam1 = { -1193,51f, -767,47f, 17,33f };
			*uParam2 = { 0f, 0f, func_202(-2,5f) };
			break;
		
		case 15:
			*uParam1 = { 613,6f, 2762,76f, 42,1f };
			*uParam2 = { 0f, 0f, func_202(-1,5f) };
			break;
		
		case 16:
			*uParam1 = { 126,36f, -224,03f, 54,57f };
			*uParam2 = { 0f, 0f, func_202(1,22f) };
			break;
		
		case 17:
			*uParam1 = { -3170f, 1043,45f, 20,87f };
			*uParam2 = { 0f, 0f, func_202(1,16f) };
			break;
		
		case 18:
			*uParam1 = { -708,59f, -152,21f, 37,09f };
			*uParam2 = { 0f, 0f, func_202(-1,05f) };
			break;
		
		case 19:
			*uParam1 = { -164,82f, -302,45f, 39,41f };
			*uParam2 = { 0f, 0f, func_202(1,24f) };
			break;
		
		case 20:
			*uParam1 = { -1449,23f, -238,49f, 49,49f };
			*uParam2 = { 0f, 0f, func_202(-2,3f) };
			break;
		
		case 21:
			break;
		
		case 22:
			*uParam1 = { 320,59f, 181,43f, 103,79f };
			*uParam2 = { 0f, 0f, func_202(-1,92f) };
			break;
		
		case 23:
			*uParam1 = { 1861,29f, 3748,57f, 33,24f };
			*uParam2 = { 0f, 0f, func_202(-5,67f) };
			break;
		
		case 24:
			*uParam1 = { -290,83f, 6199,93f, 31,69f };
			*uParam2 = { 0f, 0f, func_202(-2,27f) };
			break;
		
		case 25:
			*uParam1 = { -1152,24f, -1424,77f, 5,16f };
			*uParam2 = { 0f, 0f, func_202(-4,1f) };
			break;
		
		case 26:
			*uParam1 = { 1324,44f, -1650,99f, 52,47f };
			*uParam2 = { 0f, 0f, func_202(-4,03f) };
			break;
		
		case 27:
			*uParam1 = { -3170,92f, 1073,84f, 21,04f };
			*uParam2 = { 0f, 0f, func_202(-0,41f) };
			break;
		
		case 28:
			*uParam1 = { 23,6862f, -1106,461f, 29,9159f };
			*uParam2 = { 0f, 0f, 160f };
			break;
		
		case 29:
			*uParam1 = { 1693,572f, 3761,601f, 34,8242f };
			*uParam2 = { 0f, 0f, -132,6081f };
			break;
		
		case 30:
			*uParam1 = { 252,8583f, -51,6284f, 70,06f };
			*uParam2 = { 0f, 0f, 69,9999f };
			break;
		
		case 31:
			*uParam1 = { 841,0564f, -1034,762f, 28,3137f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 32:
			*uParam1 = { -330,2908f, 6085,548f, 31,5737f };
			*uParam2 = { 0f, 0f, -135,0001f };
			break;
		
		case 33:
			*uParam1 = { -660,9294f, -934,1031f, 21,9481f };
			*uParam2 = { 0f, 0f, 180f };
			break;
		
		case 34:
			*uParam1 = { -1304,976f, -395,8181f, 36,8147f };
			*uParam2 = { 0f, 0f, 75,7783f };
			break;
		
		case 35:
			*uParam1 = { -1117,612f, 2700,264f, 18,673f };
			*uParam2 = { 0f, 0f, -138,1729f };
			break;
		
		case 36:
			*uParam1 = { -3172,511f, 1089,412f, 20,9576f };
			*uParam2 = { 0f, 0f, -113,4187f };
			break;
		
		case 37:
			*uParam1 = { 2566,592f, 293,1332f, 108,8538f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 38:
			*uParam1 = { 808,8609f, -2158,508f, 29,7379f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 39:
			*uParam1 = { -1148,15f, -2003,86f, 13,89f };
			*uParam2 = { 0f, 0f, func_202(2,36f) };
			break;
		
		case 40:
			*uParam1 = { 730,73f, -1073,13f, 23,02f };
			*uParam2 = { 0f, 0f, func_202(1,57f) };
			break;
		
		case 41:
			*uParam1 = { -343,62f, -131,44f, 39,71f };
			*uParam2 = { 0f, 0f, func_202(-1,92f) };
			break;
		
		case 42:
			*uParam1 = { 106,42f, 6623,02f, 33,52f };
			*uParam2 = { 0f, 0f, func_202(0,78f) };
			break;
		
		case 43:
			*uParam1 = { 1180,45f, 2639,85f, 39,48f };
			*uParam2 = { 0f, 0f, func_202(-3,14f) };
			break;
		
		case 44:
			*uParam1 = { -202,98f, -1312,58f, 29,89f };
			*uParam2 = { 0f, 0f, func_202(-1,57f) };
			break;
		
		case 45:
			*uParam1 = { func_19(Global_94374) };
			*uParam2 = { 0f, 0f, func_202(-1f) };
			break;
		
		case 46:
			if (Global_1595538 != func_1056())
			{
				if (func_18(Global_1595538))
				{
					*uParam1 = { func_11(2, 2) };
				}
				else if (func_10(Global_1595538))
				{
					*uParam1 = { func_11(45, 3) };
				}
			}
			break;
		
		case 47:
			*uParam1 = { 518,675f, 4752,354f, -68,073f };
			*uParam2 = { -6,512f, 0f, 119,031f };
			break;
	}
	if (func_201(*uParam1, 0f, 0f, 0f, 0) && func_201(*uParam2, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_201(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x25E65
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

float func_202(float fParam0)//Position - 0x25EAC
{
	return (fParam0 * 57,29578f);
}

void func_203(int iParam0, int iParam1, var uParam2)//Position - 0x25EBC
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (func_201(*uParam2, 0f, 0f, 0f, 0))
	{
		return;
	}
	func_200(iParam0, &vVar0, &vVar1);
	func_200(iParam1, &vVar2, &vVar3);
	vVar4 = { *uParam2 - vVar0 };
	vVar4 = { func_13(vVar4, -vVar1.z) };
	vVar4 = { func_13(vVar4, vVar3.z) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar2, 0f, vVar4) };
}

bool func_204(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x25F2B
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	char cVar4[64];
	struct<4> Var5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!unk_0x3A711520F83BAE98())
	{
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_minigun"):
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_knife"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_nightstick"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_assaultsmg"):
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pistol50"):
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_hammer"):
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_railgun"):
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			
			case joaat("weapon_knuckle"):
				*uParam1 = 7500;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*uParam1 = 4350;
				*uParam2 = 5;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			
			case joaat("weapon_machete"):
				*uParam1 = 8900;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_machinepistol"):
				*uParam1 = 6250;
				*uParam2 = 85;
				break;
			
			case joaat("weapon_revolver"):
				*uParam1 = Global_262145.f_8044;
				*uParam2 = Global_262145.f_8045;
				break;
			
			case joaat("weapon_switchblade"):
				*uParam1 = Global_262145.f_8046;
				*uParam2 = 0;
				break;
			
			default:
				if (func_77(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("weapon_bullpupshotgun") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_hammer"))
		{
			if (func_79() && (func_160() || func_161()))
			{
				*uParam1 = 0;
			}
		}
		iVar1 = *uParam2;
		switch (iParam0)
		{
			case joaat("weapon_appistol"):
				iVar1 = 25;
				break;
			
			case joaat("weapon_snspistol"):
				iVar1 = 10;
				break;
			
			case joaat("weapon_heavypistol"):
				iVar1 = 100;
				break;
			
			case joaat("weapon_vintagepistol"):
				iVar1 = 10;
				break;
			
			case joaat("weapon_microsmg"):
				iVar1 = 20;
				break;
			
			case joaat("weapon_specialcarbine"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_mg"):
				iVar1 = 50;
				break;
			
			case joaat("weapon_gusenberg"):
				iVar1 = 108;
				break;
			
			case joaat("weapon_heavyshotgun"):
				iVar1 = 18;
				break;
			
			case joaat("weapon_musket"):
				iVar1 = 15;
				break;
			
			case joaat("weapon_heavysniper"):
				iVar1 = 29;
				break;
			
			case joaat("weapon_marksmanrifle"):
				iVar1 = 87;
				break;
		}
		if (*uParam2 != iVar1)
		{
			*uParam2 = iVar1;
		}
	}
	else
	{
		iVar2 = -1;
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2818));
					*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2818));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2819));
					*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2819));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2820));
					*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2820));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2821));
					*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2821));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2822));
					*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2822));
				}
				iVar2 = 16;
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 500;
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_262145.f_2663));
				*uParam2 = 500;
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_262145.f_2663));
				iVar2 = 99;
				break;
			
			case joaat("weapon_microsmg"):
				if (Global_262145.f_2347 == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_262145.f_2347;
				}
				if (Global_262145.f_2376 == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_262145.f_2376;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_smg"):
				if (Global_262145.f_2348 == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_262145.f_2348;
				}
				if (Global_262145.f_2377 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2377;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (Global_262145.f_2358 == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_2358;
				}
				if (Global_262145.f_2387 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2387;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_pumpshotgun"):
				if (Global_262145.f_2357 == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_262145.f_2357;
				}
				if (Global_262145.f_2386 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2386;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_assaultshotgun"):
				if (Global_262145.f_2360 == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_262145.f_2360;
				}
				if (Global_262145.f_2389 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2389;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_assaultrifle"):
				if (Global_262145.f_2350 == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_262145.f_2350;
				}
				if (Global_262145.f_2379 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_carbinerifle"):
				if (Global_262145.f_2351 == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_262145.f_2351;
				}
				if (Global_262145.f_2380 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_advancedrifle"):
				if (Global_262145.f_2353 == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_262145.f_2353;
				}
				if (Global_262145.f_2382 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2382;
				}
				iVar2 = 3;
				break;
			
			case joaat("weapon_sniperrifle"):
				if (Global_262145.f_2363 == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_262145.f_2363;
				}
				if (Global_262145.f_2392 == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_262145.f_2392;
				}
				iVar2 = 4;
				break;
			
			case joaat("weapon_heavysniper"):
				if (Global_262145.f_2361 == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_262145.f_2361;
				}
				if (Global_262145.f_2390 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2390;
				}
				iVar2 = 4;
				break;
			
			case joaat("weapon_mg"):
				if (Global_262145.f_2354 == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_262145.f_2354;
				}
				if (Global_262145.f_2383 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2383;
				}
				iVar2 = 5;
				break;
			
			case joaat("weapon_combatmg"):
				if (Global_262145.f_2355 == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_262145.f_2355;
				}
				if (Global_262145.f_2384 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2384;
				}
				iVar2 = 5;
				break;
			
			case joaat("weapon_rpg"):
				if (Global_262145.f_2366 == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_262145.f_2366;
				}
				if (Global_262145.f_2395 == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_262145.f_2395;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_grenadelauncher"):
				if (Global_262145.f_2365 == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_262145.f_2365;
				}
				if (Global_262145.f_2394 == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_262145.f_2394;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_minigun"):
				if (Global_262145.f_2367 == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_262145.f_2367;
				}
				if (Global_262145.f_2396 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2396;
				}
				iVar2 = 6;
				break;
			
			case joaat("weapon_knife"):
				if (Global_262145.f_2400 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2400;
				}
				if (Global_262145.f_2406 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2406;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_nightstick"):
				if (Global_262145.f_2401 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2401;
				}
				if (Global_262145.f_2407 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2407;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_dagger"):
				if (Global_262145.f_6598 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_6598;
				}
				if (Global_262145.f_6600 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_6600;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				if (Global_262145.f_2346 == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_262145.f_2346;
				}
				if (Global_262145.f_2375 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_2375;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_combatpistol"):
				if (Global_262145.f_2344 == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_262145.f_2344;
				}
				if (Global_262145.f_2373 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2373;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_pistol"):
				if (Global_262145.f_2343 == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_262145.f_2343;
				}
				if (Global_262145.f_2372 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2372;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_smokegrenade"):
				if (Global_262145.f_2368 == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_262145.f_2368;
				}
				if (Global_262145.f_2405 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2405;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_grenade"):
				if (Global_262145.f_2398 == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_262145.f_2398;
				}
				if (Global_262145.f_2404 == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_262145.f_2404;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_stickybomb"):
				if (Global_262145.f_2397 == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_262145.f_2397;
				}
				if (Global_262145.f_2403 == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_262145.f_2403;
				}
				iVar2 = 9;
				break;
			
			case joaat("weapon_petrolcan"):
				if (Global_262145.f_2369 == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_262145.f_2369;
				}
				*uParam2 = Global_262145.f_10872;
				iVar2 = 10;
				break;
			
			case joaat("weapon_assaultsmg"):
				if (Global_262145.f_2349 == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_262145.f_2349;
				}
				if (Global_262145.f_2378 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2378;
				}
				iVar2 = 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_262145.f_2359 == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_262145.f_2359;
				}
				if (Global_262145.f_2388 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2388;
				}
				if (func_79() && (func_161() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 2;
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_262145.f_2345 == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_262145.f_2345;
				}
				if (Global_262145.f_2374 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2374;
				}
				if (func_79() && (func_161() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 8;
				break;
			
			case joaat("weapon_hammer"):
				if (Global_262145.f_2371 == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_262145.f_2371;
				}
				*uParam2 = 0;
				if (func_79() && (func_161() || func_160()))
				{
					*uParam1 = 0;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_snspistol"):
				*uParam1 = Global_262145.f_6593;
				*uParam2 = Global_262145.f_6588;
				iVar2 = 8;
				break;
			
			case joaat("weapon_bottle"):
				*uParam1 = Global_262145.f_6592;
				*uParam2 = 0;
				iVar2 = 7;
				break;
			
			case joaat("weapon_gusenberg"):
				*uParam1 = Global_262145.f_5987;
				*uParam2 = Global_262145.f_5993;
				iVar2 = 3;
				break;
			
			case joaat("weapon_heavypistol"):
				*uParam1 = Global_262145.f_6594;
				*uParam2 = Global_262145.f_6590;
				iVar2 = 8;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = Global_262145.f_6595;
				*uParam2 = Global_262145.f_6589;
				iVar2 = 3;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = Global_262145.f_6596;
				*uParam2 = Global_262145.f_6591;
				iVar2 = 3;
				break;
			
			case joaat("weapon_vintagepistol"):
				*uParam1 = Global_262145.f_6597;
				*uParam2 = Global_262145.f_6599;
				iVar2 = 8;
				break;
			
			case joaat("weapon_musket"):
				*uParam1 = Global_262145.f_7209;
				*uParam2 = Global_262145.f_7210;
				iVar2 = 4;
				break;
			
			case joaat("weapon_firework"):
				*uParam1 = Global_262145.f_7211;
				*uParam2 = Global_262145.f_7212;
				iVar2 = 6;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*uParam1 = Global_262145.f_7780;
				*uParam2 = Global_262145.f_7785;
				iVar2 = 2;
				break;
			
			case joaat("weapon_marksmanrifle"):
				if (func_73())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_7786;
				}
				*uParam2 = Global_262145.f_7793;
				iVar2 = 4;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = Global_262145.f_8118;
				*uParam2 = 0;
				if (func_79())
				{
					*uParam1 = Global_262145.f_19032;
				}
				else if (Global_262145.f_19049)
				{
					*uParam1 = Global_262145.f_8118;
				}
				iVar2 = 7;
				break;
			
			case joaat("weapon_flaregun"):
				*uParam1 = Global_262145.f_8032;
				*uParam2 = Global_262145.f_8033;
				iVar2 = 6;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = Global_262145.f_8335;
				*uParam2 = Global_262145.f_8335;
				iVar2 = 9;
				break;
			
			case joaat("weapon_knuckle"):
				*uParam1 = Global_262145.f_8034;
				*uParam2 = Global_262145.f_8035;
				iVar2 = 7;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*uParam1 = Global_262145.f_8036;
				*uParam2 = Global_262145.f_8037;
				iVar2 = 8;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = Global_262145.f_9951;
				*uParam2 = Global_262145.f_9952;
				iVar2 = 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = Global_262145.f_8333;
				*uParam2 = Global_262145.f_8334;
				iVar2 = 6;
				break;
			
			case joaat("weapon_machete"):
				*uParam1 = Global_262145.f_11291;
				iVar2 = 7;
				break;
			
			case joaat("weapon_machinepistol"):
				*uParam1 = Global_262145.f_11290;
				*uParam2 = Global_262145.f_11292;
				iVar2 = 8;
				break;
			
			case joaat("weapon_flashlight"):
				*uParam1 = Global_262145.f_11452;
				iVar2 = 7;
				break;
			
			case joaat("weapon_revolver"):
				*uParam1 = Global_262145.f_8044;
				*uParam2 = Global_262145.f_8045;
				iVar2 = 8;
				break;
			
			case joaat("weapon_switchblade"):
				*uParam1 = Global_262145.f_8046;
				iVar2 = 7;
				break;
			
			case joaat("weapon_dbshotgun"):
				*uParam1 = Global_262145.f_13879;
				*uParam2 = Global_262145.f_13880;
				iVar2 = 2;
				break;
			
			case joaat("weapon_compactrifle"):
				if (func_73())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_13876;
				}
				*uParam2 = Global_262145.f_13877;
				iVar2 = 3;
				break;
			
			case 317205821:
				*uParam1 = Global_262145.f_16764;
				*uParam2 = Global_262145.f_16765;
				iVar2 = 2;
				break;
			
			case -853065399:
				*uParam1 = Global_262145.f_16761;
				iVar2 = 7;
				break;
			
			case 125959754:
				if (func_73())
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_16762;
				}
				*uParam2 = Global_262145.f_16763;
				iVar2 = 6;
				break;
			
			case -1121678507:
				*uParam1 = Global_262145.f_16766;
				*uParam2 = Global_262145.f_16767;
				iVar2 = 1;
				break;
			
			case -1169823560:
				*uParam1 = Global_262145.f_16768;
				*uParam2 = Global_262145.f_16768;
				iVar2 = 9;
				break;
			
			case -1810795771:
				*uParam1 = Global_262145.f_16759;
				iVar2 = 7;
				break;
			
			case 419712736:
				*uParam1 = Global_262145.f_16760;
				iVar2 = 7;
				break;
			
			case -1075685676:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 634039983))
				{
					*uParam2 = Global_262145.f_20161;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1329061674))
				{
					*uParam2 = Global_262145.f_20166;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2046910199))
				{
					*uParam2 = Global_262145.f_20178;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 733837882))
				{
					*uParam2 = Global_262145.f_20172;
				}
				else if (Global_262145.f_2372 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2372;
				}
				break;
			
			case 2024373456:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 2146055916))
				{
					*uParam2 = Global_262145.f_20162;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 190476639))
				{
					*uParam2 = Global_262145.f_20167;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 974903034))
				{
					*uParam2 = Global_262145.f_20179;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -644734235))
				{
					*uParam2 = Global_262145.f_20173;
				}
				else if (Global_262145.f_2377 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2377;
				}
				break;
			
			case -608341376:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -161179835))
				{
					*uParam2 = Global_262145.f_20163;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1475288264))
				{
					*uParam2 = Global_262145.f_20168;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 696788003))
				{
					*uParam2 = Global_262145.f_20180;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1020871238))
				{
					*uParam2 = Global_262145.f_20174;
				}
				else if (Global_262145.f_2384 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2384;
				}
				break;
			
			case 961495388:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -282298175))
				{
					*uParam2 = Global_262145.f_20164;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1675665560))
				{
					*uParam2 = Global_262145.f_20169;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1478681000))
				{
					*uParam2 = Global_262145.f_20181;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -76490669))
				{
					*uParam2 = Global_262145.f_20175;
				}
				else if (Global_262145.f_2379 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				break;
			
			case -86904375:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 391640422))
				{
					*uParam2 = Global_262145.f_20165;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1141059345))
				{
					*uParam2 = Global_262145.f_20170;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 626875735))
				{
					*uParam2 = Global_262145.f_20182;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1025884839))
				{
					*uParam2 = Global_262145.f_20176;
				}
				else if (Global_262145.f_2380 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				break;
			
			case 177293209:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1981031769))
				{
					*uParam2 = Global_262145.f_20184;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1005144310))
				{
					*uParam2 = Global_262145.f_20171;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -130689324))
				{
					*uParam2 = Global_262145.f_20183;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 247526935))
				{
					*uParam2 = Global_262145.f_20177;
				}
				else if (Global_262145.f_2390 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2390;
				}
				break;
			
			case 1432025498:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1618338827))
				{
					*uParam2 = Global_262145.f_21738;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -380098265))
				{
					*uParam2 = Global_262145.f_21744;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1315288101))
				{
					*uParam2 = Global_262145.f_21747;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1004815965))
				{
					*uParam2 = Global_262145.f_21751;
				}
				else if (Global_262145.f_2386 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2386;
				}
				break;
			
			case -1768145561:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2023373174))
				{
					*uParam2 = Global_262145.f_21728;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1346235024))
				{
					*uParam2 = Global_262145.f_21733;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -570355066))
				{
					*uParam2 = Global_262145.f_21739;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1362433589))
				{
					*uParam2 = Global_262145.f_21748;
				}
				else if (Global_262145.f_2380 == -1)
				{
					*uParam2 = Global_262145.f_6589;
				}
				else
				{
					*uParam2 = Global_262145.f_2380;
				}
				break;
			
			case -2009644972:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1876057490))
				{
					*uParam2 = Global_262145.f_21732;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1055790298))
				{
					*uParam2 = Global_262145.f_21737;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -424845447))
				{
					*uParam2 = Global_262145.f_21743;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1928301566))
				{
					*uParam2 = Global_262145.f_21746;
				}
				else if (Global_262145.f_2372 == -1)
				{
					*uParam2 = Global_262145.f_6588;
				}
				else
				{
					*uParam2 = Global_262145.f_2372;
				}
				break;
			
			case 1785463520:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -679861550))
				{
					*uParam2 = Global_262145.f_21729;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -515203373))
				{
					*uParam2 = Global_262145.f_21734;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1842849902))
				{
					*uParam2 = Global_262145.f_21740;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -193998727))
				{
					*uParam2 = Global_262145.f_21749;
				}
				else if (Global_262145.f_2392 == -1)
				{
					*uParam2 = Global_262145.f_7793;
				}
				else
				{
					*uParam2 = Global_262145.f_2392;
				}
				break;
			
			case -879347409:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -958864266))
				{
					*uParam2 = Global_262145.f_21730;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 231258687))
				{
					*uParam2 = Global_262145.f_21735;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 15712037))
				{
					*uParam2 = Global_262145.f_21741;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 284438159))
				{
					*uParam2 = Global_262145.f_21745;
				}
				else if (Global_262145.f_2372 == -1)
				{
					*uParam2 = Global_262145.f_8045;
				}
				else
				{
					*uParam2 = Global_262145.f_2372;
				}
				break;
			
			case -2066285827:
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2111807319))
				{
					*uParam2 = Global_262145.f_21731;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1130501904))
				{
					*uParam2 = Global_262145.f_21736;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1449330342))
				{
					*uParam2 = Global_262145.f_21742;
				}
				else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -89655827))
				{
					*uParam2 = Global_262145.f_21750;
				}
				else if (Global_262145.f_2379 == -1)
				{
					*uParam2 = Global_262145.f_6591;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				break;
			
			case -1746263880:
				*uParam1 = 1000;
				*uParam2 = Global_262145.f_21720;
				iVar2 = 8;
				break;
			
			default:
				if (func_77(iParam0, &Var3) != -1)
				{
					*uParam1 = Var3.f_3;
					*uParam2 = Var3.f_4;
				}
				break;
		}
		switch (iVar2)
		{
			case 0:
				break;
			
			case 1:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 2:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 3:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 4:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 5:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 6:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 7:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_6));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_6));
				break;
			
			case 8:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_4));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_4));
				break;
			
			case 9:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 10:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_2));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993));
				break;
			
			case 17:
			case 21:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_6));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_6));
				break;
			
			case 18:
			case 20:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_4));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_4));
				break;
			
			case 99:
				*uParam1 = system::floor((system::to_float(*uParam1) * Global_284993.f_7));
				*uParam2 = system::floor((system::to_float(*uParam2) * Global_284993.f_7));
				break;
			}
	}
	if (unk_0x3A711520F83BAE98() && func_114())
	{
		StringCopy(&Var5, func_224(iParam0, 0), 16);
		iVar7 = 0;
		func_223(iParam0, &iVar6, &iVar7);
		if (func_79() && (func_161() || func_160()))
		{
			if ((iParam0 == joaat("weapon_hammer") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_bullpupshotgun"))
			{
				iVar7 = 1;
			}
		}
		if (func_79())
		{
			if (iParam0 == joaat("weapon_hatchet"))
			{
				iVar7 = 1;
			}
		}
		bVar8 = false;
		if (func_72(iParam0))
		{
			bVar8 = true;
			iVar7 = 2;
		}
		func_112(&cVar4, Var5, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, iVar6, iVar7, func_113(iParam0), -1, 0, bVar8);
		if (unk_0xBBA20694DE4179EB(&cVar4))
		{
			*uParam1 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&cVar4), -1829708865, 1);
		}
		if (func_222(iParam0, &iVar9))
		{
			func_221(iVar9, 2, &Var5, 0);
			func_112(&cVar4, Var5, unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 3, 0, func_55(iParam0), func_113(iParam0), -1, 0, 0);
			if (unk_0xBBA20694DE4179EB(&cVar4))
			{
				*uParam2 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&cVar4), 1067618600, 1);
				switch (iParam0)
				{
					case joaat("weapon_rpg"):
					case joaat("weapon_grenadelauncher"):
					case joaat("weapon_hominglauncher"):
					case joaat("weapon_firework"):
						*uParam3 = 1;
						break;
					}
			}
		}
		else if ((((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine")) || iParam0 == -1169823560)
		{
			switch (iParam0)
			{
				case joaat("weapon_grenade"):
					StringCopy(&cVar4, "WP_WT_GNADE_t2_v1", 64);
					break;
				
				case joaat("weapon_smokegrenade"):
					StringCopy(&cVar4, "WP_WT_GNADE_SMK_t2_v1", 64);
					break;
				
				case joaat("weapon_stickybomb"):
					StringCopy(&cVar4, "WP_WT_GNADE_STK_t2_v1", 64);
					break;
				
				case joaat("weapon_proxmine"):
					StringCopy(&cVar4, "WP_WT_PRXMINE_t2_v1", 64);
					break;
				
				case -1169823560:
					StringCopy(&cVar4, "WP_WT_PIPEBOMB_t2_v1", 64);
					break;
			}
			if (unk_0xBBA20694DE4179EB(&cVar4))
			{
				*uParam2 = unk_0xBD2F9EB13C7841FC(unk_0x8B948C59217A295D(&cVar4), 1067618600, 1);
			}
		}
	}
	fVar10 = func_205(iParam0, uParam1, uParam2);
	if (fVar10 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_205(int iParam0, int iParam1, int iParam2)//Position - 0x27F87
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar1 = 0f;
	fVar2 = 0f;
	if (unk_0x3A711520F83BAE98() && func_114())
	{
		return 1f;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 = func_157(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0,05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0,1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0,15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0,1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0,08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0,06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0,04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0,02f);
		}
		fVar2 = (fVar2 + func_220(iParam0));
		fVar2 = (fVar2 + func_219());
		fVar2 = (fVar2 + func_206());
		if (iLocal_53 == 1)
		{
			fVar2 = (fVar2 + (system::to_float(Global_262145.f_121) / 100f));
		}
		if (iLocal_53 == 0)
		{
			if (func_125())
			{
				fVar2 = (fVar2 + (system::to_float(Global_262145.f_121) / 100f));
				iLocal_53 = 1;
			}
			else
			{
				iLocal_53 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*iParam1 = system::floor((system::to_float(*iParam1) * fVar1));
		*iParam1 = system::floor((system::to_float(*iParam1) * Global_262145.f_76));
		*iParam2 = system::floor((system::to_float(*iParam2) * Global_262145.f_76));
		return fVar1;
	}
	iVar0 = func_157(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0,1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0,15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0,25f);
	}
	fVar1 = (1f - fVar2);
	*iParam1 = system::floor((system::to_float(*iParam1) * fVar1));
	*iParam2 = system::floor((system::to_float(*iParam2) * fVar1));
	return fVar1;
}

float func_206()//Position - 0x28179
{
	if (func_216(12))
	{
		return 0,04f;
	}
	else if (func_213(12))
	{
		return 0,03f;
	}
	else if (func_210(12))
	{
		return 0,02f;
	}
	else if (func_207(12))
	{
		return 0,01f;
	}
	return 0f;
}

bool func_207(int iParam0)//Position - 0x281CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_208(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_208(var uParam0)//Position - 0x281EF
{
	switch (func_209(uParam0))
	{
		case 784:
			return Global_1368159[func_30(-1)];
		
		case 785:
			return Global_1368165[func_30(-1)];
		
		case 786:
			return Global_1368171[func_30(-1)];
		
		case 787:
			return Global_1368171[func_30(-1)];
		
		default:
	}
	return 0;
}

int func_209(var uParam0)//Position - 0x28253
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	switch (iVar1)
	{
		case 0:
			return 784;
			break;
		
		case 1:
			return 785;
			break;
		
		case 2:
			return 786;
			break;
		
		case 3:
			return 787;
			break;
	}
	return 7872;
}

bool func_210(int iParam0)//Position - 0x282AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_211(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_211(var uParam0)//Position - 0x282CD
{
	switch (func_212(uParam0))
	{
		case 774:
			return Global_1368135[func_30(-1)];
		
		case 775:
			return Global_1368141[func_30(-1)];
		
		case 776:
			return Global_1368147[func_30(-1)];
		
		case 777:
			return Global_1368147[func_30(-1)];
		
		default:
	}
	return 0;
}

int func_212(var uParam0)//Position - 0x28331
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	switch (iVar1)
	{
		case 0:
			return 774;
			break;
		
		case 1:
			return 775;
			break;
		
		case 2:
			return 776;
			break;
		
		case 3:
			return 777;
			break;
	}
	return 7872;
}

bool func_213(int iParam0)//Position - 0x2838B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_214(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_214(var uParam0)//Position - 0x283AB
{
	switch (func_215(uParam0))
	{
		case 764:
			return Global_1368111[func_30(-1)];
		
		case 765:
			return Global_1368117[func_30(-1)];
		
		case 766:
			return Global_1368123[func_30(-1)];
		
		case 767:
			return Global_1368123[func_30(-1)];
		
		default:
	}
	return 0;
}

int func_215(var uParam0)//Position - 0x2840F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	switch (iVar1)
	{
		case 0:
			return 764;
			break;
		
		case 1:
			return 765;
			break;
		
		case 2:
			return 766;
			break;
		
		case 3:
			return 767;
			break;
	}
	return 7872;
}

bool func_216(int iParam0)//Position - 0x28469
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_217(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_217(var uParam0)//Position - 0x28489
{
	switch (func_218(uParam0))
	{
		case 754:
			return Global_1368183[func_30(-1)];
		
		case 755:
			return Global_1368189[func_30(-1)];
		
		case 756:
			return Global_1368195[func_30(-1)];
		
		case 757:
			return Global_1368195[func_30(-1)];
		
		default:
	}
	return 0;
}

int func_218(var uParam0)//Position - 0x284ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	switch (iVar1)
	{
		case 0:
			return 754;
			break;
		
		case 1:
			return 755;
			break;
		
		case 2:
			return 756;
			break;
		
		case 3:
			return 757;
			break;
	}
	return 7872;
}

float func_219()//Position - 0x28547
{
	if (func_216(9))
	{
		return 0,04f;
	}
	else if (func_213(9))
	{
		return 0,03f;
	}
	else if (func_210(9))
	{
		return 0,02f;
	}
	else if (func_207(9))
	{
		return 0,01f;
	}
	return 0f;
}

float func_220(int iParam0)//Position - 0x2859D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0f;
	}
	iVar0 = 12;
	switch (iParam0)
	{
		case joaat("weapon_microsmg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 5;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 4;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 25;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 2;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 26;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 6;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_knife"):
			iVar0 = 8;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_pistol"):
			iVar0 = 1;
			break;
		
		case joaat("weapon_smokegrenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_grenade"):
			iVar0 = 3;
			break;
		
		case joaat("weapon_stickybomb"):
			iVar0 = 7;
			break;
	}
	if (iVar0 != 12)
	{
		if (func_216(iVar0))
		{
			return 0,08f;
		}
		else if (func_213(iVar0))
		{
			return 0,06f;
		}
		else if (func_210(iVar0))
		{
			return 0,04f;
		}
		else if (func_207(iVar0))
		{
			return 0,02f;
		}
	}
	return 0f;
}

bool func_221(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x28711
{
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		StringCopy(sParam2, sParam3, 16);
	}
	else
	{
		StringCopy(sParam2, "GSA", 16);
	}
	if (iParam0 == 1950175060)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1820140472)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 218444191)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1788949567)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1866678455)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 1285032059)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -19235536)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1614428030)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -873900901)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == -1878508229)
	{
		StringConCat(sParam2, "_TYPE_C", 16);
	}
	else if (iParam0 == -1339118112)
	{
		StringConCat(sParam2, "_TYPE_CH", 16);
	}
	else if (iParam0 == 1003267566)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 826266432)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == -435287898)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 214501711)
	{
		StringConCat(sParam2, "_TYPE_G", 16);
	}
	else if (iParam0 == 1411692055)
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == 1742569970)
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == 1173416293)
	{
		StringConCat(sParam2, "_TYPE_F", 16);
	}
	else if (iParam0 == -1356599793)
	{
		StringConCat(sParam2, "_TYPE_FW", 16);
	}
	else if (iParam0 == -1726673363)
	{
		StringConCat(sParam2, "_TYPE_RO", 16);
	}
	else if (iParam0 == -1356724057)
	{
		StringConCat(sParam2, "_TYPE_M", 16);
	}
	else if (iParam0 == 2034517757)
	{
		StringConCat(sParam2, "_TYPE_R", 16);
	}
	else if (iParam0 == 357983224)
	{
		StringConCat(sParam2, "_TYPE_B", 16);
	}
	else if (iParam0 == 784861712)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == 234717365)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 1461941360)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1226421483)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == -1132792829)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == -836519658)
	{
		StringCopy(sParam2, "WCT_CLIP_HP", 16);
	}
	else if (iParam0 == -1416716039)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == -1193480661)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 423744068)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == 1586900444)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == -1829688883)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == -1340502689)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 758230489)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 670318226)
	{
		StringCopy(sParam2, "WCT_CLIP_HP", 16);
	}
	else if (iParam0 == -332892697)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1569785553)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == -1497580119)
	{
		StringCopy(sParam2, "WCT_CLIP_AP", 16);
	}
	else if (iParam0 == -1378784071)
	{
		StringCopy(sParam2, "WCT_CLIP_EX", 16);
	}
	else if (iParam0 == -168704490)
	{
		StringCopy(sParam2, "WCT_CLIP_FMJ", 16);
	}
	else if (iParam0 == 796697766)
	{
		StringCopy(sParam2, "WCT_CLIP_INC", 16);
	}
	else if (iParam0 == 1184011213)
	{
		StringCopy(sParam2, "WCT_CLIP_TR", 16);
	}
	else if (iParam0 == 1923327840)
	{
		StringCopy(sParam2, "WCT_SHELL_AP", 16);
	}
	else if (iParam0 == -309302955)
	{
		StringCopy(sParam2, "WCT_SHELL_EX", 16);
	}
	else if (iParam0 == 2089185906)
	{
		StringCopy(sParam2, "WCT_SHELL_HP", 16);
	}
	else if (iParam0 == -609429612)
	{
		StringCopy(sParam2, "WCT_SHELL_INC", 16);
	}
	else
	{
		return 0;
	}
	if (iParam1 == 1 && iParam0 != -1356599793)
	{
		StringConCat(sParam2, "1", 16);
	}
	return unk_0x8B948C59217A295D(sParam2) != 0;
}

bool func_222(int iParam0, var uParam1)//Position - 0x28B4C
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_combatpistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_appistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_pistol50"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_snspistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_heavypistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_vintagepistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_microsmg"):
			*uParam1 = 1820140472;
			break;
		
		case joaat("weapon_smg"):
			*uParam1 = 1820140472;
			break;
		
		case joaat("weapon_assaultsmg"):
			*uParam1 = 1820140472;
			break;
		
		case joaat("weapon_combatpdw"):
			*uParam1 = 1820140472;
			break;
		
		case joaat("weapon_assaultrifle"):
			*uParam1 = 218444191;
			break;
		
		case joaat("weapon_carbinerifle"):
			*uParam1 = 218444191;
			break;
		
		case joaat("weapon_advancedrifle"):
			*uParam1 = 218444191;
			break;
		
		case joaat("weapon_specialcarbine"):
			*uParam1 = 218444191;
			break;
		
		case -947031628:
			*uParam1 = 218444191;
			break;
		
		case joaat("weapon_bullpuprifle"):
			*uParam1 = 218444191;
			break;
		
		case joaat("weapon_mg"):
			*uParam1 = 1788949567;
			break;
		
		case joaat("weapon_combatmg"):
			*uParam1 = 1788949567;
			break;
		
		case -572349828:
			*uParam1 = 1788949567;
			break;
		
		case joaat("weapon_gusenberg"):
			*uParam1 = 1788949567;
			break;
		
		case joaat("weapon_pumpshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_assaultshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_heavyshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_sniperrifle"):
			*uParam1 = 1285032059;
			break;
		
		case joaat("weapon_heavysniper"):
			*uParam1 = 1285032059;
			break;
		
		case joaat("weapon_musket"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_marksmanrifle"):
			*uParam1 = 1285032059;
			break;
		
		case joaat("weapon_grenadelauncher"):
			*uParam1 = 1003267566;
			break;
		
		case joaat("weapon_rpg"):
			*uParam1 = 1742569970;
			break;
		
		case joaat("weapon_minigun"):
			*uParam1 = -1614428030;
			break;
		
		case joaat("weapon_firework"):
			*uParam1 = -1356599793;
			break;
		
		case joaat("weapon_flaregun"):
			*uParam1 = 1173416293;
			break;
		
		case joaat("weapon_hominglauncher"):
			*uParam1 = -1726673363;
			break;
		
		case joaat("weapon_proxmine"):
			*uParam1 = -1356724057;
			break;
		
		case joaat("weapon_railgun"):
			*uParam1 = 2034517757;
			break;
		
		case joaat("weapon_marksmanpistol"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_machinepistol"):
			*uParam1 = 1820140472;
			break;
		
		case joaat("weapon_revolver"):
			*uParam1 = 1950175060;
			break;
		
		case joaat("weapon_dbshotgun"):
			*uParam1 = -1878508229;
			break;
		
		case joaat("weapon_compactrifle"):
			*uParam1 = 218444191;
			break;
		
		case 317205821:
			*uParam1 = -1878508229;
			break;
		
		case 125959754:
			*uParam1 = 1003267566;
			break;
		
		case -1121678507:
			*uParam1 = 1820140472;
			break;
		
		case -1169823560:
			*uParam1 = 357983224;
			break;
		
		case -1746263880:
			*uParam1 = 1950175060;
			break;
		
		case -1075685676:
			*uParam1 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1329061674))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2046910199))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 733837882))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 634039983))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case 2024373456:
			*uParam1 = 1820140472;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 190476639))
				{
					*uParam1 = 758230489;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 974903034))
				{
					*uParam1 = 670318226;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -644734235))
				{
					*uParam1 = -332892697;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 2146055916))
				{
					*uParam1 = 1569785553;
				}
			}
			break;
		
		case 177293209:
			*uParam1 = 1285032059;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -130689324))
				{
					*uParam1 = -1497580119;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1981031769))
				{
					*uParam1 = -1378784071;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1005144310))
				{
					*uParam1 = -168704490;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 247526935))
				{
					*uParam1 = 796697766;
				}
			}
			break;
		
		case -608341376:
			*uParam1 = 1788949567;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 696788003))
				{
					*uParam1 = 784861712;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1475288264))
				{
					*uParam1 = 234717365;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1020871238))
				{
					*uParam1 = 1461941360;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -161179835))
				{
					*uParam1 = 1226421483;
				}
			}
			break;
		
		case 961495388:
			*uParam1 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1478681000))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1675665560))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -76490669))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -282298175))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case -86904375:
			*uParam1 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 626875735))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1141059345))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1025884839))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 391640422))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case 1432025498:
			*uParam1 = -1878508229;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1315288101))
				{
					*uParam1 = 1923327840;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1004815965))
				{
					*uParam1 = -309302955;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -380098265))
				{
					*uParam1 = 2089185906;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1618338827))
				{
					*uParam1 = -609429612;
				}
			}
			break;
		
		case -1768145561:
			*uParam1 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1362433589))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1346235024))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -570355066))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2023373174))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
		
		case -2009644972:
			*uParam1 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1055790298))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1928301566))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -424845447))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1876057490))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case 1785463520:
			*uParam1 = 1285032059;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -193998727))
				{
					*uParam1 = -1497580119;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -515203373))
				{
					*uParam1 = -168704490;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1842849902))
				{
					*uParam1 = 796697766;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -679861550))
				{
					*uParam1 = 1184011213;
				}
			}
			break;
		
		case -879347409:
			*uParam1 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 231258687))
				{
					*uParam1 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 284438159))
				{
					*uParam1 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 15712037))
				{
					*uParam1 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -958864266))
				{
					*uParam1 = -1193480661;
				}
			}
			break;
		
		case -2066285827:
			*uParam1 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -89655827))
				{
					*uParam1 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1130501904))
				{
					*uParam1 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1449330342))
				{
					*uParam1 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2111807319))
				{
					*uParam1 = -1340502689;
				}
			}
			break;
	}
	return *uParam1 != -1;
}

void func_223(int iParam0, var uParam1, int iParam2)//Position - 0x29577
{
	*iParam2 = 0;
	if (iParam0 == joaat("weapon_petrolcan"))
	{
		*uParam1 = 5;
	}
	else if (iParam0 == joaat("gadget_parachute"))
	{
		*uParam1 = 4;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		*uParam1 = 3;
	}
	else if ((((iParam0 == joaat("weapon_pistol50") || iParam0 == joaat("weapon_snspistol")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_vintagepistol")) || iParam0 == joaat("weapon_flaregun"))
	{
		*uParam1 = 0;
	}
	else if (((((((((iParam0 == joaat("weapon_bottle") || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_hatchet")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_flashlight")) || iParam0 == joaat("weapon_switchblade")) || iParam0 == joaat("weapon_knuckle")) || iParam0 == joaat("weapon_machete"))
	{
		*uParam1 = 1;
	}
	else if ((((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine")) || iParam0 == -1169823560)
	{
		*uParam1 = 2;
		*iParam2 = 1;
	}
	else
	{
		*uParam1 = 0;
	}
}

char* func_224(int iParam0, bool bParam1)//Position - 0x296E2
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
			if (func_77(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_178(&(Var0.f_31));
				}
				else
				{
					return func_178(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

int func_225(int iParam0)//Position - 0x2A2E2
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 12;
			break;
		
		case -1075685676:
			iVar0 = 12;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1329061674))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2046910199))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 733837882))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 634039983))
				{
					iVar0 = 12;
				}
			}
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 30;
			break;
		
		case 2024373456:
			iVar0 = 30;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 190476639))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 974903034))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -644734235))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 2146055916))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 6;
			break;
		
		case 177293209:
			iVar0 = 6;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -130689324))
				{
					iVar0 = 4;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1981031769))
				{
					iVar0 = 4;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1005144310))
				{
					iVar0 = 4;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 247526935))
				{
					iVar0 = 4;
				}
			}
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 100;
			break;
		
		case -608341376:
			iVar0 = 100;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 696788003))
				{
					iVar0 = 80;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1475288264))
				{
					iVar0 = 80;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1020871238))
				{
					iVar0 = 80;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -161179835))
				{
					iVar0 = 100;
				}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 30;
			break;
		
		case 961495388:
			iVar0 = 30;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1478681000))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1675665560))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -76490669))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -282298175))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 30;
			break;
		
		case -86904375:
			iVar0 = 30;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 626875735))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1141059345))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1025884839))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 391640422))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 8;
			break;
		
		case 1432025498:
			iVar0 = 8;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1315288101))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1004815965))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -380098265))
				{
					iVar0 = 8;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1618338827))
				{
					iVar0 = 8;
				}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 30;
			break;
		
		case -1768145561:
			iVar0 = 30;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1362433589))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1346235024))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -570355066))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2023373174))
				{
					iVar0 = 30;
				}
			}
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 12;
			break;
		
		case -2009644972:
			iVar0 = 12;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1055790298))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1928301566))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -424845447))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1876057490))
				{
					iVar0 = 6;
				}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 16;
			break;
		
		case 1785463520:
			iVar0 = 16;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -193998727))
				{
					iVar0 = 5;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -515203373))
				{
					iVar0 = 5;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1842849902))
				{
					iVar0 = 5;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -679861550))
				{
					iVar0 = 8;
				}
			}
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 12;
			break;
		
		case -879347409:
			iVar0 = 12;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 231258687))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 284438159))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 15712037))
				{
					iVar0 = 6;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -958864266))
				{
					iVar0 = 6;
				}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 30;
			break;
		
		case -2066285827:
			iVar0 = 30;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -89655827))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1130501904))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1449330342))
				{
					iVar0 = 20;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2111807319))
				{
					iVar0 = 30;
				}
			}
			break;
	}
	return iVar0;
}

int func_226(int iParam0)//Position - 0x2A971
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 1950175060;
			break;
		
		case -1075685676:
			iVar0 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1329061674))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2046910199))
				{
					iVar0 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 733837882))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 634039983))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 1820140472;
			break;
		
		case 2024373456:
			iVar0 = 1820140472;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 190476639))
				{
					iVar0 = 758230489;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 974903034))
				{
					iVar0 = 670318226;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -644734235))
				{
					iVar0 = -332892697;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 2146055916))
				{
					iVar0 = 1569785553;
				}
			}
			break;
		
		case joaat("weapon_heavysniper"):
			iVar0 = 1285032059;
			break;
		
		case 177293209:
			iVar0 = 1285032059;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -130689324))
				{
					iVar0 = -1497580119;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1981031769))
				{
					iVar0 = -1378784071;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1005144310))
				{
					iVar0 = -168704490;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 247526935))
				{
					iVar0 = 796697766;
				}
			}
			break;
		
		case joaat("weapon_combatmg"):
			iVar0 = 1788949567;
			break;
		
		case -608341376:
			iVar0 = 1788949567;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 696788003))
				{
					iVar0 = 784861712;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1475288264))
				{
					iVar0 = 234717365;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1020871238))
				{
					iVar0 = 1461941360;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -161179835))
				{
					iVar0 = 1226421483;
				}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar0 = 218444191;
			break;
		
		case 961495388:
			iVar0 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1478681000))
				{
					iVar0 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1675665560))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -76490669))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -282298175))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar0 = 218444191;
			break;
		
		case -86904375:
			iVar0 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 626875735))
				{
					iVar0 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1141059345))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1025884839))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 391640422))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = -1878508229;
			break;
		
		case 1432025498:
			iVar0 = -1878508229;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1315288101))
				{
					iVar0 = 1923327840;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1004815965))
				{
					iVar0 = -309302955;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -380098265))
				{
					iVar0 = 2089185906;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1618338827))
				{
					iVar0 = -609429612;
				}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 218444191;
			break;
		
		case -1768145561:
			iVar0 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1362433589))
				{
					iVar0 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1346235024))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -570355066))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2023373174))
				{
					iVar0 = -1340502689;
				}
			}
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1950175060;
			break;
		
		case -2009644972:
			iVar0 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1055790298))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1928301566))
				{
					iVar0 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -424845447))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1876057490))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 1285032059;
			break;
		
		case 1785463520:
			iVar0 = 1285032059;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -193998727))
				{
					iVar0 = -1497580119;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -515203373))
				{
					iVar0 = -168704490;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1842849902))
				{
					iVar0 = 796697766;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -679861550))
				{
					iVar0 = 1184011213;
				}
			}
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 1950175060;
			break;
		
		case -879347409:
			iVar0 = 1950175060;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 231258687))
				{
					iVar0 = -1132792829;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 284438159))
				{
					iVar0 = -836519658;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 15712037))
				{
					iVar0 = -1416716039;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -958864266))
				{
					iVar0 = -1193480661;
				}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 218444191;
			break;
		
		case -2066285827:
			iVar0 = 218444191;
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -89655827))
				{
					iVar0 = 423744068;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, 1130501904))
				{
					iVar0 = 1586900444;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -1449330342))
				{
					iVar0 = -1829688883;
				}
				if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam0, -2111807319))
				{
					iVar0 = -1340502689;
				}
			}
			break;
	}
	return iVar0;
}

int func_227(int iParam0, var uParam1)//Position - 0x2B0E9
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (func_228(iVar1, 0, &iVar0))
		{
			if (func_185(iVar0, -1, -1) == iParam0)
			{
				*uParam1 = iVar1;
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_228(int iParam0, int iParam1, var uParam2)//Position - 0x2B126
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15268;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15269;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 15270;
					break;
				
				case 1:
					*uParam2 = 15267;
					break;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_229(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5)//Position - 0x2B1CA
{
	*uParam0 = iParam1;
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { vParam3 };
	uParam0->f_7 = { vParam4 };
	uParam0->f_10 = { vParam5 };
	uParam0->f_23 = -1;
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, vector3 vParam8)//Position - 0x2B204
{
	*uParam0 = iParam3;
	uParam0->f_24 = iParam1;
	uParam0->f_25 = iParam2;
	uParam0->f_22 = iParam4;
	uParam0->f_1 = { vParam5 };
	uParam0->f_4 = { vParam6 };
	uParam0->f_7 = { vParam7 };
	uParam0->f_10 = { vParam8 };
	uParam0->f_23 = -1;
}

int func_231(int iParam0)//Position - 0x2B250
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

void func_232(bool bParam0)//Position - 0x2B275
{
	int iVar0;
	
	func_1037(1);
	if (Local_148.f_106.f_19)
	{
		if (func_344())
		{
			Global_2447174.f_671.f_40 = 0;
			func_342();
			Global_2447174.f_671.f_33[0] = Local_148.f_106.f_1;
			Global_2447174.f_671.f_33[1] = Local_148.f_106.f_3;
			Global_2447174.f_671.f_39 = Local_148.f_106;
			if (Local_148.f_106.f_5 == 1)
			{
				Global_2447174.f_671.f_33[2] = Local_148.f_106.f_2;
				Global_2447174.f_671.f_40 = 1;
			}
		}
	}
	if (Local_148.f_3 != -1)
	{
		func_340(&(Local_148.f_3));
	}
	func_332(&Local_148, iLocal_100);
	func_331(&(Local_148.f_38));
	if (!bParam0 && !iLocal_209)
	{
		func_1138(1, 0);
	}
	func_330(0, 1);
	unk_0x51B813700F855144(0);
	func_327(1, Local_148);
	Global_4262423 = 0;
	Global_2458257 = 0;
	func_322(Local_148, 0);
	if (!unk_0xAB019B170BF1309C(sLocal_140) && !bParam0)
	{
		unk_0xFCCDDE0E48CF9588(sLocal_140);
	}
	unk_0x751FF861325F816B("HUD_AMMO_SHOP");
	func_321();
	func_320();
	Global_92885.f_1 = 0;
	func_279();
	if (Local_148.f_11 == 2)
	{
		if (unk_0x8EA3C8E091EA5BA4(Local_148.f_145.f_10))
		{
			if (unk_0xD85097DDDA5447BE(Local_148.f_145.f_10))
			{
				unk_0x7849794435F39D49(Local_148.f_145.f_10, false);
			}
			unk_0x02934BABFD4CD384(Local_148.f_145.f_10, 0);
		}
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		func_272();
	}
	if (Local_148.f_106.f_19)
	{
		iVar0 = unk_0xFC1458A37D98B502();
		func_266(iVar0, 1, 0);
		func_238(&(Local_148.f_106), 0, 1, 1, 1);
		if (Global_70856)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 185, false);
		}
		unk_0xF0E859A5278D3AA0(false, 0);
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0xBB9A3C553EECB180(0f);
		unk_0x7C9705890EF6612E(0f, 1065353216);
		func_237(1);
		func_272();
		func_236();
		Local_229.f_19 = 0;
		func_235(&Local_229, 1);
	}
	if (!unk_0x3AB6A1A9084FB0A4(Local_148.f_12))
	{
		if (Local_148.f_10)
		{
			if (func_234(iLocal_100) || unk_0x3A711520F83BAE98())
			{
				if (func_231(iLocal_100))
				{
					if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
					{
						if (func_1136(0))
						{
							unk_0x68433819717660CF(&(Local_148.f_12));
						}
					}
				}
			}
			else
			{
				unk_0x68433819717660CF(&(Local_148.f_12));
			}
		}
		else if (bParam0)
		{
			if (func_234(iLocal_100) || unk_0x3A711520F83BAE98())
			{
				if (func_231(iLocal_100))
				{
					if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
					{
						if (func_1136(0))
						{
							unk_0x68433819717660CF(&(Local_148.f_12));
						}
					}
				}
			}
			else
			{
				unk_0x68433819717660CF(&(Local_148.f_12));
			}
		}
		else if (func_234(iLocal_100) || unk_0x3A711520F83BAE98())
		{
			if (func_231(iLocal_100))
			{
				if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
				{
					if (func_1136(0))
					{
						unk_0x68433819717660CF(&(Local_148.f_12));
					}
				}
			}
		}
		else
		{
			unk_0xB89BC60EFF7F2571(Local_148.f_12, 1);
			unk_0xE9B3D12A64CC7C1A(Local_148.f_12, true);
			unk_0x486F346ADFE56674(&(Local_148.f_12));
		}
	}
	else
	{
		if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
		{
			if (unk_0x191BE1BC8F26F3C1(Local_148.f_12, 0))
			{
				if (!unk_0x841ED61760A7D07B(Local_148.f_12))
				{
					if (func_234(iLocal_100) || unk_0x3A711520F83BAE98())
					{
						if (func_231(iLocal_100))
						{
							if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
							{
								if (func_1136(0))
								{
									unk_0x68433819717660CF(&(Local_148.f_12));
								}
							}
						}
					}
					else
					{
						unk_0x68433819717660CF(&(Local_148.f_12));
					}
				}
				else if (func_234(iLocal_100) || unk_0x3A711520F83BAE98())
				{
				}
				else
				{
					unk_0x486F346ADFE56674(&(Local_148.f_12));
				}
			}
		}
		Local_148.f_12 = 0;
	}
	if (iLocal_131)
	{
		unk_0x9EA1BA1DD45771B3(iLocal_132);
		iLocal_131 = 0;
	}
	if (iLocal_100 == 46)
	{
		Global_1669244 = -1;
	}
	if (iLocal_100 == 47)
	{
		Global_1669245 = -1;
	}
	if (bParam0)
	{
		func_233("Resetting script", -1);
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iLocal_100]), 11);
	}
	else
	{
		func_233("Terminating script", -1);
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iLocal_100]), 16);
		if (unk_0xC80D31E4B587871C(Global_1369394, 1))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_1369394, 1);
		}
		unk_0x96A3D9A8A4C7AFD4();
	}
}

void func_233(char* sParam0, int iParam1)//Position - 0x2B644
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return;
	}
	if (iParam1 == -1)
	{
	}
}

int func_234(int iParam0)//Position - 0x2B661
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_92885.f_67[iParam0];
}

void func_235(var uParam0, bool bParam1)//Position - 0x2B67D
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!uParam0->f_18)
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar2 = unk_0xD1A659E6867D8FF6(unk_0xFC1458A37D98B502(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				(*uParam0)[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				if (iVar0 < *uParam0)
				{
					if ((unk_0x6ADD12BF4D6D2587(uVar1[iVar3]) && !unk_0x3AB6A1A9084FB0A4(uVar1[iVar3])) && !unk_0x88DDBE9908752BF0(uVar1[iVar3], 0))
					{
						if (unk_0x4759A34EB65CCA39(uVar1[iVar3], unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
						{
							(*uParam0)[iVar0] = uVar1[iVar3];
							uParam0->f_5[iVar0 /*3*/] = { unk_0xB3328BA8976B416C(uVar1[iVar3], 1) };
							iVar0++;
						}
					}
				}
				iVar3++;
			}
			uParam0->f_18 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if ((unk_0x6ADD12BF4D6D2587((*uParam0)[iVar0]) && !unk_0x3AB6A1A9084FB0A4((*uParam0)[iVar0])) && !unk_0x88DDBE9908752BF0((*uParam0)[iVar0], 0))
			{
				if (uParam0->f_19)
				{
					unk_0xB3A8974D2C811672((*uParam0)[iVar0], false, 0);
					if (bParam1)
					{
						unk_0xB18E1DBC397238E1((*uParam0)[iVar0], false, 0);
						unk_0xEDC33A771FAEB393((*uParam0)[iVar0], true);
						unk_0xAA93B7B448E10E40((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				else if (!unk_0xDE3C98B57A41E603((*uParam0)[iVar0]))
				{
					unk_0xB3A8974D2C811672((*uParam0)[iVar0], true, 0);
					if (bParam1)
					{
						unk_0xB18E1DBC397238E1((*uParam0)[iVar0], true, 0);
						unk_0xEDC33A771FAEB393((*uParam0)[iVar0], false);
						unk_0xAA93B7B448E10E40((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_236()//Position - 0x2B832
{
	if (Global_92885.f_5 && Global_92885.f_6 == unk_0x8B948C59217A295D(unk_0x436287B7DB306165()))
	{
		unk_0x3E80C2F7BC665259(1);
		Global_92885.f_5 = 0;
	}
}

void func_237(bool bParam0)//Position - 0x2B863
{
	if (!Global_2492481)
	{
		if (bParam0)
		{
			if (Global_70856)
			{
				if (unk_0x78E929955680CA05())
				{
					unk_0xAC58AA6C1340C475(0, 0);
				}
			}
		}
	}
}

void func_238(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2B88F
{
	if (Global_70856)
	{
		func_256();
	}
	if (func_255(1))
	{
		if (uParam0->f_19)
		{
		}
		if (Global_70856)
		{
			if (bParam3)
			{
				if (!func_253())
				{
				}
				else if ((!func_252() && !func_344()) && !unk_0x40189ECE75CF9724())
				{
					if (!bParam4)
					{
						func_244(unk_0x9EB17624F44A8DA4(), 1, 8388608);
					}
					else
					{
						func_244(unk_0x9EB17624F44A8DA4(), 1, 0);
					}
				}
				else if (!bParam4)
				{
					func_244(unk_0x9EB17624F44A8DA4(), 0, 8454656);
				}
				else
				{
					func_244(unk_0x9EB17624F44A8DA4(), 0, 66048);
				}
			}
		}
		else
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		}
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
		unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
	}
	if (bParam2)
	{
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xBB9A3C553EECB180(0f);
		unk_0x7C9705890EF6612E(0f, 1065353216);
	}
	uParam0->f_30 = 1;
	uParam0->f_28 = unk_0x53C562FD2B9E3AB0();
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_29 = unk_0xD1952A425B78FFC0();
	}
	if (Global_70856)
	{
		func_241();
		func_239();
	}
	if (uParam0->f_33 != 0 || !unk_0xAB019B170BF1309C(&(uParam0->f_34)))
	{
		StringCopy(&(uParam0->f_34), "", 16);
		uParam0->f_33 = 0;
	}
	if ((unk_0x3A711520F83BAE98() && unk_0xB01117EF93F91860()) && uParam0->f_32 != 0)
	{
		if (!unk_0xB4C93C911EF09353())
		{
			unk_0xAB5F2B5E1F2443BB();
			uParam0->f_32 = 0;
		}
	}
}

void func_239()//Position - 0x2B9ED
{
	if (!Global_1312568)
	{
		return;
	}
	func_240();
}

void func_240()//Position - 0x2BA04
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_241()//Position - 0x2BA22
{
	func_243(1);
	func_242(4, 0, -1);
	func_242(6, 0, -1);
	func_242(7, 0, -1);
	func_242(3, 0, -1);
	func_242(1, 0, -1);
	func_242(2, 0, -1);
	func_242(11, 0, -1);
	func_242(13, 0, -1);
	func_242(14, 0, -1);
	func_242(16, 0, -1);
}

void func_242(int iParam0, bool bParam1, int iParam2)//Position - 0x2BA79
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1357530.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1046), iParam0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1357530.f_1046), iParam0);
			}
			break;
	}
}

void func_243(int iParam0)//Position - 0x2BAC8
{
	Global_2512808.f_4499 = iParam0;
}

void func_244(int iParam0, bool bParam1, int iParam2)//Position - 0x2BAD9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(false);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		iVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_253())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			iVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_250(unk_0x9EB17624F44A8DA4(), 0) && !func_249()))
				{
					unk_0xB3A8974D2C811672(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_248(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(iVar25, false);
					}
					unk_0xFBA991D3A851E195(iVar25, true);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_247();
				func_246();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_248(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(iVar25, true);
						}
					}
					if (func_245(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(iVar25) && !unk_0x88DDBE9908752BF0(iVar25, 0))
					{
						unk_0x957CEE967C939968(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_245(int iParam0)//Position - 0x2BEBB
{
	return iParam0 == 17;
}

void func_246()//Position - 0x2BEC8
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_247()//Position - 0x2BF15
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_248(int iParam0)//Position - 0x2BF53
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_249()//Position - 0x2BF84
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_250(int iParam0, int iParam1)//Position - 0x2BF95
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_251(-1, 0) == 8;
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

int func_251(int iParam0, bool bParam1)//Position - 0x2BFE0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

bool func_252()//Position - 0x2C023
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

int func_253()//Position - 0x2C034
{
	if (func_254() == 0)
	{
		return 1;
	}
	return 0;
}

int func_254()//Position - 0x2C049
{
	return Global_1312466.f_18;
}

bool func_255(bool bParam0)//Position - 0x2C057
{
	if (Global_70856)
	{
		return func_20(unk_0x9EB17624F44A8DA4(), bParam0, !func_1140(1));
	}
	return !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502());
}

void func_256()//Position - 0x2C085
{
	if (Global_1312416.f_1 == 1)
	{
		func_257(0);
		Global_1312416.f_1 = 0;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_9 = 0;
	}
}

void func_257(int iParam0)//Position - 0x2C0B1
{
	if (func_265())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_264(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_264(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_263(1);
		}
		if ((!unk_0x4916190900E76373() && !func_262()) && !func_258(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_258(int iParam0)//Position - 0x2C14B
{
	if (func_259(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0, bool bParam1)//Position - 0x2C16F
{
	if (bParam1)
	{
		if (func_260(iParam0))
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

bool func_260(int iParam0)//Position - 0x2C19B
{
	return func_261(iParam0);
}

bool func_261(int iParam0)//Position - 0x2C1A9
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_262()//Position - 0x2C1C3
{
	return Global_2447174.f_727;
}

void func_263(bool bParam0)//Position - 0x2C1D2
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_265())
		{
			if (func_20(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(true);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_20(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, true);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0,5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(false);
		}
	}
}

void func_264(var uParam0, bool bParam1, bool bParam2)//Position - 0x2C2CB
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

bool func_265()//Position - 0x2C308
{
	return Global_1312416;
}

void func_266(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C314
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_64(iParam0);
	if (func_60(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		func_267(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			unk_0xD402E75E7DEE1173(Global_104555.f_2353.f_539.f_1715[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_104555.f_2353.f_539.f_1748 || (Global_104555.f_2353.f_539.f_1748 == -1 && iVar1 == 4))
				{
					if (Global_104555.f_2353.f_539.f_1715[iVar1 /*4*/][iVar0] != 0 && Global_104555.f_2353.f_539.f_1715[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (unk_0xA8388473C755363D(iParam0, Global_104555.f_2353.f_539.f_1715[iVar1 /*4*/][iVar0], 0))
						{
							unk_0x385A213BEB355C2B(iParam0, Global_104555.f_2353.f_539.f_1715[iVar1 /*4*/][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			unk_0xFA3CE529DBB66C85(joaat("sp0_parachute_current_tint"), &iVar2, -1);
		}
		else if (iVar0 == 1)
		{
			unk_0xFA3CE529DBB66C85(joaat("sp1_parachute_current_tint"), &iVar2, -1);
		}
		else if (iVar0 == 2)
		{
			unk_0xFA3CE529DBB66C85(joaat("sp2_parachute_current_tint"), &iVar2, -1);
		}
		unk_0xE1D0F0036E01DD8A(unk_0x9EB17624F44A8DA4(), iVar2);
	}
}

void func_267(int iParam0, var uParam1, bool bParam2)//Position - 0x2C475
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
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	int iVar12;
	int iVar13[44];
	int iVar14[50];
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_271(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = unk_0xB50B73D3F4DD1613(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (func_193(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar13[iVar5] = unk_0x5088CF774DF6D935(iParam0, iVar2);
							}
							else
							{
								unk_0xF28A81E331A3F337(iParam0, iVar2, 0, 0);
								unk_0xCAD1743A7DCE3B1D(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar13[iVar5] = 0;
							unk_0xF28A81E331A3F337(iParam0, iVar2, 0, 0);
							unk_0xCAD1743A7DCE3B1D(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar8 = 0;
			while (iVar8 < unk_0x359D12B4F89DA5D6())
			{
				if (unk_0xD10DDFA63A9D9BDA(iVar8, &Var9))
				{
					if (!unk_0x42683C90F2D005ED(Var9) && !func_194(Var9.f_1))
					{
						if (iVar7 == 0)
						{
							iVar14[iVar8] = unk_0x5088CF774DF6D935(iParam0, Var9.f_1);
						}
						else
						{
							unk_0xF28A81E331A3F337(iParam0, Var9.f_1, 0, 0);
							unk_0xCAD1743A7DCE3B1D(iParam0, Var9.f_1, 0);
						}
					}
					else
					{
						iVar14[iVar8] = 0;
						unk_0xF28A81E331A3F337(iParam0, Var9.f_1, 0, 0);
						unk_0xCAD1743A7DCE3B1D(iParam0, Var9.f_1, 0);
					}
				}
				iVar8++;
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_271(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = unk_0xB50B73D3F4DD1613(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*5*/];
				iVar0 = (uParam1[iVar5 /*5*/])->f_1;
				if (!func_193(iVar3))
				{
					(*uParam1)[iVar5 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0xA8388473C755363D(iParam0, iVar3, 0))
						{
							unk_0x9E058151726E58DE(iParam0, iVar3, 0, false, false);
						}
						if (unk_0x5088CF774DF6D935(iParam0, iVar3) < iVar0)
						{
							unk_0xF28A81E331A3F337(iParam0, iVar3, iVar0, 0);
						}
						if (iVar3 != joaat("weapon_petrolcan") && unk_0xA8388473C755363D(iParam0, iVar3, 0))
						{
							unk_0x7781EF646E05FA35(iParam0, iVar3, (uParam1[iVar5 /*5*/])->f_3);
						}
						iVar6 = 0;
						iVar4 = func_270(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0xC80D31E4B587871C((uParam1[iVar5 /*5*/])->f_2, iVar6))
							{
								if (!unk_0xB1C7BCEE5648EB7D(iParam0, iVar3, iVar4))
								{
									unk_0x3A41B9B06FB233AE(iParam0, iVar3, iVar4);
									func_269(iParam0, iVar3, iVar4);
									if (func_88(iVar4))
									{
										unk_0x310756AA9ABB406D(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
										func_104(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
									}
								}
							}
							else if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar3, iVar4))
							{
								unk_0xF573D037AE52B814(iParam0, iVar3, iVar4);
								func_268(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_270(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0xABBEF2EAC74A02EB(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_270(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, iVar4))
							{
								unk_0xF573D037AE52B814(iParam0, iVar2, iVar4);
								func_268(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_270(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (unk_0x5088CF774DF6D935(iParam0, iVar2) < iVar13[iVar5])
						{
							unk_0xF28A81E331A3F337(iParam0, iVar2, iVar13[iVar5], 0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_221)
		{
			iVar3 = uParam1->f_221[iVar11 /*5*/];
			iVar0 = uParam1->f_221[iVar11 /*5*/].f_1;
			iVar8 = func_77(iVar3, &Var9);
			if (iVar8 != -1 && !func_194(Var9.f_1))
			{
				if (unk_0x42683C90F2D005ED(Var9) || func_194(Var9.f_1))
				{
					uParam1->f_221[iVar11 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0xA8388473C755363D(iParam0, iVar3, 0))
						{
							unk_0x9E058151726E58DE(iParam0, iVar3, 0, false, false);
						}
						if (unk_0x5088CF774DF6D935(iParam0, iVar3) < iVar0)
						{
							unk_0xF28A81E331A3F337(iParam0, iVar3, iVar0, 0);
						}
						if (unk_0xA8388473C755363D(iParam0, iVar3, 0))
						{
							unk_0x7781EF646E05FA35(iParam0, iVar3, uParam1->f_221[iVar11 /*5*/].f_3);
						}
						iVar12 = 0;
						iVar6 = 0;
						while (iVar6 < unk_0x16DE9AAC68A15A81(iVar8))
						{
							if (unk_0x768809DD20D4F552(iVar8, iVar6, &Var10))
							{
								if (!func_179(Var10.f_3))
								{
									if (unk_0xC80D31E4B587871C(uParam1->f_221[iVar11 /*5*/].f_2, iVar12))
									{
										if (!unk_0xB1C7BCEE5648EB7D(iParam0, iVar3, Var10.f_3))
										{
											unk_0x3A41B9B06FB233AE(iParam0, iVar3, Var10.f_3);
											func_269(iParam0, iVar3, Var10.f_3);
											if (func_88(Var10.f_3))
											{
												unk_0x310756AA9ABB406D(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
												func_104(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
											}
										}
									}
									else if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar3, Var10.f_3))
									{
										unk_0xF573D037AE52B814(iParam0, iVar3, Var10.f_3);
										func_268(iParam0, iVar3, Var10.f_3);
									}
									iVar12++;
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0xABBEF2EAC74A02EB(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < unk_0x16DE9AAC68A15A81(iVar8))
						{
							if (unk_0x768809DD20D4F552(iVar8, iVar6, &Var10))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, Var10.f_3))
								{
									unk_0xF573D037AE52B814(iParam0, iVar2, Var10.f_3);
									func_268(iParam0, iVar2, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("weapon_unarmed"))
					{
						if (unk_0x5088CF774DF6D935(iParam0, iVar3) < iVar14[iVar8])
						{
							unk_0xF28A81E331A3F337(iParam0, iVar3, iVar14[iVar8], 0);
						}
					}
				}
			}
			iVar11++;
		}
		if (((unk_0x5AD8564EFD5BEC2E(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
		{
			iVar0 = unk_0x5088CF774DF6D935(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > unk_0x1AD036320DA68345(iParam0, iVar2, 1))
			{
				unk_0xF28A81E331A3F337(iParam0, iVar2, (iVar0 - unk_0x1AD036320DA68345(iParam0, iVar2, 1)), 0);
				unk_0xCAD1743A7DCE3B1D(iParam0, iVar2, unk_0x1AD036320DA68345(iParam0, iVar2, 1));
			}
		}
	}
}

void func_268(int iParam0, int iParam1, int iParam2)//Position - 0x2CAC5
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	if (iVar0 != 0)
	{
		if (unk_0xB1C7BCEE5648EB7D(iParam0, iParam1, iVar0))
		{
			unk_0xF573D037AE52B814(iParam0, iParam1, iVar0);
		}
	}
}

void func_269(int iParam0, int iParam1, int iParam2)//Position - 0x2CAF2
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	if (iVar0 != 0)
	{
		unk_0x3A41B9B06FB233AE(iParam0, iParam1, iVar0);
	}
}

int func_270(int iParam0, int iParam1)//Position - 0x2CB12
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
				iVar1 = func_77(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_179(Var5.f_3))
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

int func_271(int iParam0)//Position - 0x2D683
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

void func_272()//Position - 0x2D8F7
{
	unk_0xF0E859A5278D3AA0(false, -1);
	func_236();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
		if (!Global_70856)
		{
			unk_0xC7CB065B66F66C5F(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
		}
	}
	Global_94367 = 0;
	func_273(0, 1, 1, 0);
}

void func_273(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2D944
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_278(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_277())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_276(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_278(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_276(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_275(unk_0x9EB17624F44A8DA4())) && !func_250(unk_0x9EB17624F44A8DA4(), 0)) && !func_274())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_275(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_274()//Position - 0x2DA5D
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_275(int iParam0)//Position - 0x2DA7A
{
	if (func_250(iParam0, 0))
	{
		return 1;
	}
	if (func_249())
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

int func_276(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2DABC
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

int func_277()//Position - 0x2DAEF
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_278(int iParam0)//Position - 0x2DB16
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

void func_279()//Position - 0x2DB39
{
	if (iLocal_258 > 0 || Local_148.f_106.f_25)
	{
		Local_148.f_106.f_26 = 90;
		Local_148.f_106.f_25 = 1;
		func_280();
	}
}

int func_280()//Position - 0x2DB69
{
	int iVar0;
	int iVar1;
	
	if (Local_148.f_106.f_25)
	{
		switch (Local_148.f_106.f_26)
		{
			case 0:
				iVar0 = 0;
				while (iVar0 < iLocal_258)
				{
					if (Global_4265686[iVar0] == -1)
					{
						if (!func_316(78225582, 1067618600, Global_4265675[iVar0], 537254313, Global_4265697[iVar0], Global_4265708[iVar0], 1, 4, 0, 3))
						{
							Local_148.f_106.f_26 = 90;
							return 1;
						}
					}
					else if (!func_316(78225582, -1829708865, Global_4265686[iVar0], 537254313, 1, 0, 1, 4, 0, 3) || !func_316(78225582, 1067618600, Global_4265675[iVar0], 537254313, Global_4265697[iVar0], Global_4265708[iVar0], 1, 4, 0, 3))
					{
						Local_148.f_106.f_26 = 90;
						return 1;
					}
					iVar0++;
				}
				if (func_314())
				{
					Local_148.f_106.f_26 = 70;
				}
				else
				{
					Local_148.f_106.f_26 = 90;
				}
				break;
			
			case 70:
				if (func_312(func_313()))
				{
					if (func_311(func_313()) == 2)
					{
						Local_148.f_106.f_26 = 80;
					}
					else
					{
						Local_148.f_106.f_26 = 90;
					}
				}
				break;
			
			case 80:
				Local_148.f_106.f_25 = 0;
				Local_148.f_106.f_26 = 0;
				unk_0x72A98FC7A21311A4(0);
				unk_0x1A153C1DB3B9D181(0, 0);
				iVar0 = 0;
				while (iVar0 < iLocal_258)
				{
					if (Global_4265686[iVar0] == -1)
					{
						func_294(iLocal_100, 1, 2, 0);
						func_290(joaat("mpply_ingamestore_moneyspent"), (Global_4265708[iVar0] * Global_4265697[iVar0]));
					}
					else
					{
						func_290(joaat("mpply_ingamestore_moneyspent"), (Global_4265708[iVar0] * Global_4265697[iVar0]));
						func_294(iLocal_100, 1, 0, 0);
						func_287(Global_4265664[iVar0]);
						func_285();
					}
					iVar0++;
				}
				if (iLocal_258 != 0)
				{
					if (func_115())
					{
						func_281(func_313());
					}
				}
				iLocal_258 = 0;
				iLocal_261 = 0;
				iLocal_260 = 0;
				break;
			
			case 90:
				func_281(func_313());
				unk_0x72A98FC7A21311A4(0);
				unk_0x1A153C1DB3B9D181(0, 0);
				iVar0 = 0;
				while (iVar0 < iLocal_258)
				{
					if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), Global_4265664[iVar0], 0))
					{
						iVar1 = unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), Global_4265664[iVar0]);
						if (iVar1 >= Global_4265697[iVar0])
						{
							iVar1 = (iVar1 - Global_4265697[iVar0]);
						}
						else
						{
							iVar1 = 0;
						}
						unk_0xF28A81E331A3F337(unk_0xFC1458A37D98B502(), Global_4265664[iVar0], iVar1, 0);
					}
					iVar0++;
				}
				iLocal_258 = 0;
				iLocal_261 = 0;
				iLocal_260 = 0;
				Local_148.f_106.f_25 = 0;
				Local_148.f_106.f_26 = 0;
				Local_148.f_106.f_21 = 0;
				return 0;
				break;
			}
	}
	return 1;
}

void func_281(int iParam0)//Position - 0x2DE10
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_115())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_284(iParam0))
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
		func_282(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_282(var uParam0)//Position - 0x2DE62
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
	func_283(&(uParam0->f_8.f_3));
	func_283(&(uParam0->f_8.f_16));
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

void func_283(var uParam0)//Position - 0x2DF54
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

int func_284(int iParam0)//Position - 0x2DF9C
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_285()//Position - 0x2DFC4
{
	int iVar0;
	
	iVar0 = func_286(19);
	Global_2413945[iVar0 /*83*/] = 19;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_286(int iParam0)//Position - 0x2DFF1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413945[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413945[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_287(int iParam0)//Position - 0x2E03E
{
	switch (func_289(iParam0))
	{
		case 1:
			func_288(49, 1);
			break;
		
		case 2:
			func_288(50, 1);
			break;
	}
}

void func_288(int iParam0, int iParam1)//Position - 0x2E071
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

int func_289(int iParam0)//Position - 0x2E0CE
{
	switch (iParam0)
	{
		case joaat("weapon_stickybomb"):
		case joaat("weapon_stungun"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_appistol"):
			return 0;
			break;
		
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_rpg"):
		case joaat("weapon_mg"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_grenade"):
		case joaat("weapon_minigun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		default:
			return 3;
			break;
	}
	return 3;
}

void func_290(int iParam0, int iParam1)//Position - 0x2E18A
{
	int iVar0;
	
	iVar0 = func_128(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_293(iParam0))
	{
		func_292(iParam0, iVar0);
	}
	else
	{
		func_291(iParam0, iVar0);
	}
}

void func_291(int iParam0, int iParam1)//Position - 0x2E1BE
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

void func_292(int iParam0, int iParam1)//Position - 0x2E2E3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_293(int iParam0)//Position - 0x2E2FF
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_294(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2E383
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam1)
	{
		if (!func_28(iParam0, 3, 0))
		{
			func_310(iParam0, 3, 0);
		}
		if (!unk_0x3A711520F83BAE98())
		{
			switch (func_309(iParam0))
			{
				case 4:
					func_304(305, 0, 0);
					break;
				
				case 1:
					func_304(304, 0, 0);
					break;
				
				case 3:
					func_304(308, 0, 0);
					break;
				
				case 0:
					func_304(306, 0, 0);
					break;
				
				case 2:
					func_304(307, 0, 0);
					break;
				}
		}
		if (Global_92885.f_1318 >= 0)
		{
			if (unk_0x3A711520F83BAE98())
			{
				bVar0 = true;
				if (iParam2 == 4)
				{
					if (func_303(0))
					{
						func_299(0);
						bVar0 = false;
					}
				}
				if (iParam2 == 6)
				{
					if (func_303(1))
					{
						func_299(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = unk_0x916D3D5FA17D33A4() > 0;
					bVar2 = unk_0x916D3D5FA17D33A4() < Global_92885.f_1318;
					if (func_115())
					{
						if (func_298(func_313()) > 0)
						{
							unk_0x39FC927F4B6458C0(func_298(func_313()));
						}
					}
					if (iParam2 == 1 && Global_92885.f_1319 == -61829581)
					{
						unk_0xA30AD54D149568D2(Global_92885.f_1318, unk_0x8B948C59217A295D(&(Global_92885.f_1314)), 17, Global_92885.f_1320, bVar1, &(Global_92885.f_1314), unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321, bVar2);
					}
					else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
					{
						unk_0xA30AD54D149568D2(Global_92885.f_1318, Global_92885.f_1319, iParam2, Global_92885.f_1320, bVar1, &(Global_92885.f_1314), unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321, bVar2);
					}
					else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
					{
						unk_0xA30AD54D149568D2(Global_92885.f_1318, Global_92885.f_1319, iParam2, Global_92885.f_1320, bVar1, &(Global_92885.f_1314), unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321, bVar2);
					}
					else
					{
						unk_0xA30AD54D149568D2(Global_92885.f_1318, unk_0x8B948C59217A295D(&(Global_92885.f_1314)), iParam2, Global_92885.f_1320, bVar1, &(Global_92885.f_1314), unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321, bVar2);
					}
				}
			}
			else if (unk_0xA1800C71952C596F(&(Global_92885.f_1314)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_92885.f_1318 >= 0)
					{
						unk_0x25606B28CFDFA189(unk_0x8B948C59217A295D(&(Global_92885.f_1314)), Global_92885.f_1318, unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_92885.f_1318 >= 0)
					{
						unk_0x25606B28CFDFA189(unk_0x8B948C59217A295D(&(Global_92885.f_1314)), Global_92885.f_1318, unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), Global_92885.f_1319, Global_92885.f_1321);
					}
				}
				else if (Global_92885.f_1318 >= 0)
				{
					unk_0x25606B28CFDFA189(unk_0x8B948C59217A295D(&(Global_92885.f_1314)), Global_92885.f_1318, unk_0x8B948C59217A295D(func_297(iParam0, iParam3)), 0, Global_92885.f_1321);
				}
			}
		}
	}
	else if (func_28(iParam0, 3, 0))
	{
		func_295(iParam0, 3, 0);
	}
}

void func_295(int iParam0, int iParam1, bool bParam2)//Position - 0x2E744
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_33() == 0)
		{
			iVar0 = func_29(func_32(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_296(func_32(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2E7AD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_30(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

char* func_297(int iParam0, int iParam1)//Position - 0x2E7DD
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_298(int iParam0)//Position - 0x2EB5E
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

void func_299(int iParam0)//Position - 0x2EB82
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_302(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_301() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_301() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_300(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_300(int iParam0)//Position - 0x2EC57
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

int func_301()//Position - 0x2ECDD
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_302(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2ECEA
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
		iParam2 = func_31();
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

bool func_303(int iParam0)//Position - 0x2F1B6
{
	if (iParam0 == 8)
	{
		return func_37(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_301() /*12130*/].f_7676.f_10, iParam0);
}

void func_304(int iParam0, int iParam1, int iParam2)//Position - 0x2F204
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
		func_302((891 + iParam0), 1, -1, 1);
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
		func_305();
	}
}

void func_305()//Position - 0x2F2EC
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
		func_308(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_33() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_306();
				}
			}
		}
	}
}

int func_306()//Position - 0x2F7AD
{
	if (func_307(0))
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

bool func_307(bool bParam0)//Position - 0x2F7F8
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_308(int iParam0, int iParam1)//Position - 0x2F823
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

int func_309(int iParam0)//Position - 0x2F874
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

void func_310(int iParam0, int iParam1, bool bParam2)//Position - 0x2FB01
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_33() == 0)
		{
			iVar0 = func_29(func_32(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_296(func_32(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_311(int iParam0)//Position - 0x2FB6A
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_312(int iParam0)//Position - 0x2FB90
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

int func_313()//Position - 0x2FBB8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_298(iVar0) != 2147483647)
		{
			if (func_284(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_314()//Position - 0x2FBF2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_115())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_313();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_31()) || unk_0xD7D895B4B5395982())
		{
			if (func_315(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457985)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_298(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = unk_0x4B64A8D052027742();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1, int iParam2)//Position - 0x2FD1E
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x3034F
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_115())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_31()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_313();
	if (iVar1 == -1)
	{
		if (!func_318(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_317(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0x15A46872C5B66D6B(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int iParam0)//Position - 0x3046B
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_318(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x304FA
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_115())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_31()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x4A843C260B34973D())
		{
			unk_0x166C543410DE9A3F();
		}
	}
	if (bVar0 || unk_0x270730F2007CFC17(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_319(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_319(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x305F0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_115())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = uParam0;
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

void func_320()//Position - 0x306E9
{
	if (vLocal_257.x)
	{
		unk_0x14776E43F90DD454(vLocal_257.y);
		vLocal_257.x = 0;
	}
	if (unk_0x6ADD12BF4D6D2587(vLocal_257.z))
	{
		unk_0x68433819717660CF(&(vLocal_257.f_2));
	}
	if (unk_0x6ADD12BF4D6D2587(Global_4264923))
	{
		unk_0x68433819717660CF(&Global_4264923);
	}
}

void func_321()//Position - 0x3072C
{
	if (iLocal_102)
	{
		unk_0x033A57F54C7551D5();
		iLocal_102 = 0;
		bLocal_103 = false;
	}
}

void func_322(int iParam0, int iParam1)//Position - 0x30743
{
	char cVar0[64];
	struct<13> Var1;
	var uVar2;
	
	StringCopy(&cVar0, func_326(iParam0, iParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar0) == -1487683087)
	{
		if (((unk_0x3A711520F83BAE98() && func_20(unk_0x9EB17624F44A8DA4(), 0, 1)) && func_324()) && unk_0x15DBBAF9E2085C7A())
		{
			Var1 = { func_323(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xA84F967541249268(&Var1) && unk_0x5CF21D71A8C4CFA6(&uVar2, 35, &Var1))
			{
				unk_0x65B602E8DDD1F13C(uVar2);
			}
		}
	}
	else if (unk_0x8B948C59217A295D(&cVar0) != 0)
	{
		unk_0x137FC8E0F58D9E0B(&cVar0);
	}
}

struct<13> func_323(int iParam0)//Position - 0x307CB
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_324()//Position - 0x307E2
{
	struct<13> Var0;
	
	if (unk_0x5616476F69B90F14())
	{
		if ((unk_0xDEC0EB6EAE9BC575() && unk_0x4CAC17F5502E6EEB()) && unk_0x851744C54849FD9D())
		{
			Var0 = { func_325() };
			if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_325()//Position - 0x3082A
{
	struct<13> Var0;
	
	unk_0xB3C5C4AE35A3EC8B(&Var0, 13);
	return Var0;
}

char* func_326(int iParam0, int iParam1)//Position - 0x3083F
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
			return "ShopUI_Title_GR_GunMod";
			break;
		
		case 47:
			return "ShopUI_Title_GR_GunMod";
	}
	return "";
}

void func_327(bool bParam0, int iParam1)//Position - 0x30A9D
{
	int iVar0;
	
	if (!func_329(&iVar0, 0, iParam1))
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
		func_328(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_328(int iParam0)//Position - 0x30B5B
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

int func_329(var uParam0, bool bParam1, int iParam2)//Position - 0x30B84
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

void func_330(bool bParam0, bool bParam1)//Position - 0x30C21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<25> Var5;
	vector3 vVar6;
	vector3 vVar7;
	
	iVar3 = 22;
	if (func_231(Local_148))
	{
		iVar3 = 8;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_196(Local_148, &Global_4265503, &Var5, iVar0, iVar1, 0, 0))
			{
				if (Var5.f_24 == 3)
				{
					if (iVar1 == 0)
					{
						iVar4 = joaat("prop_armour_pickup");
					}
					else if (iVar1 == 1)
					{
						iVar4 = joaat("prop_bodyarmour_02");
					}
					else if (iVar1 == 2)
					{
						iVar4 = joaat("prop_bodyarmour_03");
					}
					else if (iVar1 == 3)
					{
						iVar4 = joaat("prop_bodyarmour_04");
					}
					else if (iVar1 == 4)
					{
						iVar4 = joaat("prop_bodyarmour_05");
					}
				}
				else if (Var5.f_24 == 4)
				{
					iVar4 = joaat("p_parachute_s_shop");
				}
				else if (Var5.f_24 == 7)
				{
					iVar4 = func_180(&Global_4265503, Var5.f_23);
				}
				else if (Var5.f_24 == 6)
				{
					iVar4 = -1502580877;
				}
				else if (Var5 == joaat("weapon_knife"))
				{
					iVar4 = -518344816;
				}
				else if (Var5 == joaat("weapon_bottle"))
				{
					iVar4 = -789123952;
				}
				else if (Var5 == joaat("weapon_dagger"))
				{
					iVar4 = 1725061196;
				}
				else if (Var5 == joaat("weapon_hatchet"))
				{
					iVar4 = 173095431;
				}
				else
				{
					iVar4 = unk_0xD50D486F1F311BFC(Var5);
				}
				if (iVar4 != 0 && !func_231(Local_148))
				{
					if (bParam1)
					{
						if (bLocal_105)
						{
							unk_0x143DCD09D82EE129(Var5.f_1, fLocal_231, iVar4, false);
						}
					}
					else if (!bLocal_105)
					{
						unk_0xA25B44929E552182(Var5.f_1, fLocal_231, iVar4, 1);
					}
				}
				if (unk_0x6ADD12BF4D6D2587(Local_148.f_226[iVar2]))
				{
					if (bParam0)
					{
						unk_0xB3A8974D2C811672(Local_148.f_226[iVar2], true, 0);
						unk_0xAA93B7B448E10E40(Local_148.f_226[iVar2], Var5.f_1, 0, 0, 1);
						unk_0x59AF3B40AE222194(Local_148.f_226[iVar2], Var5.f_4, 2, 1);
					}
					else
					{
						unk_0xB3A8974D2C811672(Local_148.f_226[iVar2], true, 0);
						unk_0xAA93B7B448E10E40(Local_148.f_226[iVar2], Var5.f_1 + Vector(-100f, 0f, 0f), 0, 0, 1);
						unk_0x59AF3B40AE222194(Local_148.f_226[iVar2], Var5.f_4, 2, 1);
					}
					if (iVar4 == joaat("prop_ld_test_01"))
					{
						unk_0xB3A8974D2C811672(Local_148.f_226[iVar2], false, 0);
					}
				}
			}
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	if (Local_148 != 46 && Local_148 != 47)
	{
		if (bParam1)
		{
			if (bLocal_105)
			{
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_weapons"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_handguns"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("p_parachute_s"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("v_7_wallhooks"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("v_22_wallhooks"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_grenades"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 2f, joaat("prop_box_ammo07b"), false);
				unk_0x143DCD09D82EE129(Local_148.f_12.f_2, 2f, joaat("v_ret_gc_calc"), false);
				if (unk_0x6ADD12BF4D6D2587(iLocal_128))
				{
					func_95(&iLocal_128);
				}
			}
		}
		else if (!bLocal_105)
		{
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_weapons"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_handguns"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("p_parachute_s"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("v_7_wallhooks"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("v_22_wallhooks"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 20f, joaat("v_ilev_gc_grenades"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 2f, joaat("prop_box_ammo07b"), 1);
			unk_0xA25B44929E552182(Local_148.f_12.f_2, 2f, joaat("v_ret_gc_calc"), 1);
			if (unk_0x9A0B2ED5055D3F0B(iLocal_250))
			{
				if (unk_0x8B948C59217A295D(func_7(Local_148)) == unk_0x8B948C59217A295D("v_gun2"))
				{
					vVar6 = { -1305,318f, -394,031f, 36,51f };
					vVar7 = { 0f, 0f, -105f };
					func_203(34, Local_148, &vVar6);
					func_199(34, Local_148, &vVar7);
					iLocal_128 = unk_0x9A331BBF019DCAD2(iLocal_250, vVar6, false, true, false);
					unk_0x59AF3B40AE222194(iLocal_128, vVar7, 2, 1);
				}
				else
				{
					vVar6 = { 21,852f, -1106,65f, 29,61f };
					vVar7 = { 0f, 0f, -20f };
					func_203(28, Local_148, &vVar6);
					func_199(28, Local_148, &vVar7);
					iLocal_128 = unk_0x9A331BBF019DCAD2(iLocal_250, vVar6, false, true, false);
					unk_0x59AF3B40AE222194(iLocal_128, vVar7, 2, 1);
				}
			}
		}
	}
	bLocal_105 = !bParam1;
}

void func_331(var uParam0)//Position - 0x310A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x8EA3C8E091EA5BA4((*uParam0)[iVar0 /*12*/]))
		{
			unk_0x02934BABFD4CD384((*uParam0)[iVar0 /*12*/], 0);
		}
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1)//Position - 0x310DE
{
	if (*uParam0 == iParam1 && uParam0->f_7)
	{
		func_233("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else
	{
		func_1024(iParam1, 1, 0);
	}
	func_339(iParam1, 0);
	func_338(iParam1, 0);
	func_295(iParam1, 1, 1);
	func_295(iParam1, 10, 1);
	func_295(iParam1, 11, 1);
	func_295(iParam1, 12, 1);
	func_295(iParam1, 13, 1);
	func_295(iParam1, 22, 1);
	func_295(iParam1, 25, 1);
	if (uParam0->f_1 == 1)
	{
		func_295(iParam1, 19, 1);
	}
	if (!func_1134(iParam1))
	{
		func_233("Letting shop controller know to relaunch when in range.", -1);
		func_310(iParam1, 17, 1);
	}
	func_337(iParam1);
	func_334(iParam1);
	func_333(unk_0x9EB17624F44A8DA4(), iParam1);
	func_236();
	if (func_234(iParam1))
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_12) && !unk_0x3AB6A1A9084FB0A4(uParam0->f_12))
		{
			if (!unk_0x3A711520F83BAE98() || unk_0xA0BF73C5030D3F60(uParam0->f_12))
			{
				unk_0xE9B3D12A64CC7C1A(uParam0->f_12, true);
			}
		}
	}
	else
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
		}
		if (func_1124(uParam0, iParam1))
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_12))
			{
				unk_0x68433819717660CF(&(uParam0->f_12));
			}
		}
		else if (unk_0x6ADD12BF4D6D2587(uParam0->f_12))
		{
			unk_0x486F346ADFE56674(&(uParam0->f_12));
		}
	}
}

void func_333(int iParam0, int iParam1)//Position - 0x3122B
{
	if (iParam1 == -1)
	{
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (Global_1595693[iParam0 /*680*/].f_207)
		{
			Global_1595693[iParam0 /*680*/].f_207 = 0;
			Global_1595693[iParam0 /*680*/].f_208 = 0;
		}
	}
}

void func_334(int iParam0)//Position - 0x31266
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_335(iParam0, iVar0);
		iVar0++;
	}
}

void func_335(int iParam0, int iParam1)//Position - 0x31288
{
	if (iParam0 != -1 && iParam1 != 0)
	{
		if (Global_92885.f_317[func_336(iParam0) /*5*/][iParam1] == 2)
		{
			Global_92885.f_317[func_336(iParam0) /*5*/][iParam1] = 4;
		}
		else
		{
			Global_92885.f_317[func_336(iParam0) /*5*/][iParam1] = 0;
		}
		if (Global_92885.f_353[func_336(iParam0)] == iParam1)
		{
			Global_92885.f_353[func_336(iParam0)] = 0;
		}
	}
}

int func_336(int iParam0)//Position - 0x31306
{
	switch (iParam0)
	{
		case 39:
			return 1;
			break;
		
		case 40:
			return 2;
			break;
		
		case 41:
			return 3;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 5;
			break;
		
		case 44:
			return 6;
			break;
	}
	return 0;
}

void func_337(int iParam0)//Position - 0x31364
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_338(int iParam0, bool bParam1)//Position - 0x3137E
{
	if (bParam1)
	{
		unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		if (!func_28(iParam0, 6, 1))
		{
			func_310(iParam0, 6, 1);
			Global_92885.f_316++;
			if (!unk_0x3A711520F83BAE98())
			{
				unk_0xE6ABE74AEC92281D(8);
			}
		}
	}
	else if (func_28(iParam0, 6, 1))
	{
		func_295(iParam0, 6, 1);
		if (Global_92885.f_316 > 0)
		{
			Global_92885.f_316 = (Global_92885.f_316 - 1);
		}
		unk_0x9AFE5CB05EAC9F50("act_cinema");
	}
}

void func_339(int iParam0, bool bParam1)//Position - 0x313FE
{
	if (bParam1)
	{
		Global_92885.f_402 = iParam0;
		if (!func_28(iParam0, 5, 1))
		{
			func_310(iParam0, 5, 1);
			func_337(iParam0);
			Global_92885.f_315++;
		}
	}
	else if (func_28(iParam0, 5, 1))
	{
		func_295(iParam0, 5, 1);
		func_337(iParam0);
		if (Global_92885.f_315 > 0)
		{
			Global_92885.f_315 = (Global_92885.f_315 - 1);
		}
	}
}

void func_340(var uParam0)//Position - 0x31475
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_341(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_341(int iParam0)//Position - 0x314CC
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

void func_342()//Position - 0x31507
{
	Global_2447174.f_671.f_28 = 1;
	Global_2447174.f_671.f_32 = 0;
	Global_2447174.f_671.f_31 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
	func_343(&(Global_2447174.f_671.f_29));
}

void func_343(var uParam0)//Position - 0x31541
{
	uParam0->f_1 = 0;
}

bool func_344()//Position - 0x3154E
{
	return Global_2447174.f_671.f_5;
}

void func_345()//Position - 0x3155F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<25> Var3;
	
	if (func_1140(1))
	{
		if (func_20(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			func_982();
			func_981();
		}
		else if (!func_980())
		{
			func_981();
		}
		return;
	}
	bLocal_196 = (((((!unk_0x0F30C1F1717A6437() && !unk_0x04D7390E1D7464B7()) && !unk_0x08D525BE62A22AE0()) && !iLocal_215) && !Global_92885.f_1377) && !unk_0x02BBA5FDE77816B9());
	bLocal_197 = true;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar0, 1);
		if ((unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), Global_92885.f_1, 0) && Local_148.f_106.f_31 == 2) && Global_92885.f_1 != joaat("gadget_parachute"))
		{
			iVar1 = Global_92885.f_1;
		}
		else
		{
			iVar1 = joaat("weapon_unarmed");
		}
		if (iVar0 != iVar1)
		{
			if (iVar1 == joaat("gadget_parachute"))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iVar1, false);
			}
			else if (func_231(Local_148) && Local_148.f_106.f_5 != 5)
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iVar1, true);
				unk_0x7781EF646E05FA35(unk_0xFC1458A37D98B502(), iVar1, iLocal_189);
			}
			else
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iVar1, true);
			}
			unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), true);
			unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 0, 0, 1, 0);
		}
		if ((iVar1 != 0 && iVar1 != joaat("weapon_unarmed")) && iVar1 != joaat("gadget_parachute"))
		{
			bLocal_197 = false;
		}
	}
	if ((unk_0x3A711520F83BAE98() && unk_0x6ADD12BF4D6D2587(Local_148.f_12)) && !unk_0x3AB6A1A9084FB0A4(Local_148.f_12))
	{
		unk_0x3E4EB82E0873B09C(Local_148.f_12);
	}
	func_976(&Local_148);
	func_942(&Local_148, &(Local_148.f_106), -1);
	if (Local_148.f_106.f_31 > 1)
	{
		func_939(0, bLocal_197, 1);
	}
	func_935(0);
	switch (Local_148.f_106.f_31)
	{
		case 0:
			func_909(1);
			func_902(&(Local_148.f_106), 0);
			if (unk_0x717FFCE23DE4C8C8(Local_148.f_174.f_31, 7f) && !Global_70856)
			{
				func_900(&Local_148);
			}
			Local_229.f_19 = 0;
			Local_229.f_18 = 0;
			unk_0x51B813700F855144(1);
			func_898("GUN_MNU", Local_148, 1);
			Global_4262423 = 1;
			func_897(Local_148, 0);
			func_896();
			unk_0x1CF95440F1970B4F("HUD_AMMO_SHOP", false, -1);
			func_895();
			bVar2 = true;
			if (!func_34(5, 0))
			{
				func_233("Waiting for weapons to load", -1);
				bVar2 = false;
			}
			if (!func_898("GUN_MNU", Local_148, 1))
			{
				func_233("Waiting for menu assets to load", -1);
				bVar2 = false;
			}
			if (!func_897(Local_148, 0))
			{
				func_233("Waiting for intro assets to load", -1);
				bVar2 = false;
			}
			if (!func_896())
			{
			}
			if (bVar2)
			{
				Local_148.f_106.f_31 = 1;
				Local_148.f_106.f_5 = 0;
			}
			else if (system::timera() > 25000)
			{
				Local_148.f_106.f_31 = 8;
			}
			else if (!Local_148.f_7 || !Local_148.f_8)
			{
				Local_148.f_106.f_31 = 8;
			}
			break;
		
		case 1:
			switch (Local_148.f_106.f_5)
			{
				case 0:
					Local_148.f_106.f_19 = 1;
					func_894(0, 1, Local_148.f_12, 0, 0, 0, 1, 0, 0, 0);
					func_902(&(Local_148.f_106), 0);
					func_893(&Local_148, 1077936128);
					iLocal_182 = 0;
					bLocal_184 = true;
					iLocal_183 = 1;
					iLocal_185 = 1;
					bLocal_211 = false;
					iLocal_187 = 0;
					bLocal_232 = false;
					iLocal_186 = unk_0x53C562FD2B9E3AB0();
					Local_148.f_106.f_1 = 0;
					Local_148.f_106.f_2 = -1;
					Local_148.f_106.f_3 = 0;
					Local_148.f_106.f_4 = 0;
					Local_148.f_106.f_9 = 0;
					Local_148.f_106.f_10 = 1;
					Local_148.f_106.f_5 = 0;
					Local_148.f_106.f_16 = 0;
					Local_148.f_106.f_17 = 0;
					Local_148.f_106.f_23 = 0;
					StringCopy(&(Local_148.f_106.f_11), "", 16);
					bLocal_241 = false;
					if (Local_148 == 46 || Local_148 == 47)
					{
						Local_148.f_106.f_2 = 0;
						Local_148.f_106.f_38 = 0;
						Local_148.f_106.f_3 = 0;
						if (func_43(1623028892, joaat("weapon_snspistol"), -1))
						{
							Local_148.f_106.f_3 = 2;
						}
					}
					if (unk_0x3A711520F83BAE98())
					{
						unk_0x382FF30F07572DA0();
						unk_0xEA26AA61DD59BCE7();
					}
					if (!Global_70856)
					{
						Local_229.f_19 = 1;
					}
					func_330(1, 0);
					func_891(Local_148, Local_148.f_106, &(Local_148.f_106.f_1), &(Local_148.f_106.f_3), &Var3);
					if (!func_181(Var3, Var3.f_24, 0, Local_148))
					{
						func_890(Local_148, &(Local_148.f_106.f_1), Local_148.f_106.f_3, &Var3);
					}
					func_889(Var3);
					func_886(&Var3);
					func_832();
					if (func_196(Local_148, &Global_4265503, &Var3, Local_148.f_106.f_3, Local_148.f_106.f_1, 0, 0))
					{
						func_829(&Local_148, &(Local_148.f_106), &Var3, 0);
					}
					else
					{
						func_827(&Local_148, Local_148.f_106.f_4, Local_148.f_106.f_3);
					}
					if (Local_148 == 47)
					{
						Local_148.f_38[Local_148.f_106.f_4 /*12*/].f_4 = { -6,721f, 0f, 117,859f };
					}
					func_824(&(Local_148.f_38[Local_148.f_106.f_4 /*12*/]));
					if (!Global_70856)
					{
						if (func_255(1))
						{
							unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
						}
					}
					else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 185, true);
					}
					iLocal_106 = 0;
					iLocal_243 = 0;
					iLocal_245 = 0;
					iLocal_244 = 0;
					Local_148.f_106.f_31 = 2;
					break;
			}
			break;
		
		case 2:
			if (!bLocal_206)
			{
				func_34(11, 0);
			}
			if (unk_0x8CFF76532FEF34D4(2))
			{
				func_832();
			}
			func_896();
			func_491();
			func_484();
			func_482();
			func_479();
			func_352();
			break;
		
		case 6:
			func_909(0);
			func_236();
			Local_148.f_106.f_31 = 7;
			break;
		
		case 7:
			if (unk_0x3A711520F83BAE98())
			{
				unk_0x1DF7F16D2B3A0E02();
				unk_0xEBE04776127EC5C8();
			}
			func_237(1);
			Local_229.f_19 = 0;
			if (unk_0x6ADD12BF4D6D2587(Local_148.f_12))
			{
				unk_0x60C06BFD037BB7CF(Local_148.f_12, unk_0xFC1458A37D98B502(), -1, 0, 2);
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				if (Global_70856)
				{
					unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 185, false);
				}
			}
			func_351(&(Local_148.f_38));
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			func_330(0, 1);
			unk_0x51B813700F855144(0);
			func_320();
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 1, 1, 1, 0);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
			}
			if (!unk_0x3A711520F83BAE98())
			{
				func_349(unk_0xFC1458A37D98B502(), 0);
			}
			if (!unk_0x3A711520F83BAE98())
			{
				if (iLocal_187)
				{
					if (!Global_104555.f_668.f_1309)
					{
						func_346("AM_H_ARMR", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_104555.f_668.f_1309 = 0;
					}
					iLocal_187 = 0;
				}
			}
			func_272();
			Global_92885.f_1 = 0;
			func_238(&(Local_148.f_106), 0, 1, 1, 1);
			func_327(1, Local_148);
			Global_4262423 = 0;
			Local_148.f_106.f_19 = 0;
			Local_148.f_11 = 3;
			break;
		
		case 8:
			if (unk_0x3A711520F83BAE98())
			{
				unk_0x1DF7F16D2B3A0E02();
				unk_0xEBE04776127EC5C8();
			}
			func_351(&(Local_148.f_38));
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0x730F5A4EC599BB13(unk_0xFC1458A37D98B502(), 1, 1, 1, 0);
				unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
			}
			func_330(0, 1);
			unk_0x51B813700F855144(0);
			func_327(1, Local_148);
			Global_4262423 = 0;
			func_322(Local_148, 0);
			unk_0x751FF861325F816B("HUD_AMMO_SHOP");
			func_321();
			func_320();
			func_238(&(Local_148.f_106), 0, 1, 1, 1);
			func_237(1);
			func_272();
			Local_229.f_19 = 0;
			Global_92885.f_1 = 0;
			func_279();
			Local_148.f_106.f_19 = 0;
			Local_148.f_11 = 3;
			break;
	}
	func_235(&Local_229, 0);
}

void func_346(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x31CAC
{
	func_347(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_347(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x31CCC
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
		func_348();
	}
}

void func_348()//Position - 0x31E9E
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

void func_349(int iParam0, bool bParam1)//Position - 0x31FBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_64(iParam0);
	if (func_60(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_350(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
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

void func_350(int iParam0, var uParam1)//Position - 0x320B1
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
			iVar3 = func_271(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_271(iVar0));
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
					iVar2 = func_270(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_270(Var4, iVar1);
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
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_194(Var7.f_1)) && iVar9 < 50)
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
							if (!func_179(Var8.f_3))
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

void func_351(var uParam0)//Position - 0x3233B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x8EA3C8E091EA5BA4((*uParam0)[iVar0 /*12*/]))
		{
			unk_0x7849794435F39D49((*uParam0)[iVar0 /*12*/], false);
		}
		iVar0++;
	}
}

void func_352()//Position - 0x32371
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	char* sVar5;
	struct<2> Var6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	var uVar18;
	float fVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	var uVar23;
	float fVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	struct<5> Var38;
	struct<5> Var39;
	struct<5> Var40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	float fVar46;
	float fVar47;
	float fVar48;
	float fVar49;
	float fVar50[4];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	
	if (iLocal_195 && !Local_148.f_106.f_25)
	{
		if ((((Local_148.f_106.f_5 == 1 && Local_148.f_106.f_2 == -1) || (Local_148.f_106.f_5 == 4 && Local_148.f_106.f_2 == -1)) || (Local_148.f_106.f_5 == 5 && Local_148.f_106.f_2 == -1)) || (Local_148.f_106.f_5 == 6 && Local_148.f_106.f_2 == -1))
		{
			if (func_196(Local_148, &Global_4265503, &Var0, Local_148.f_106.f_3, Local_148.f_106.f_1, 0, 0))
			{
				if (Var0.f_24 == 0)
				{
					if (func_231(Local_148) && func_76(Var0))
					{
						if (!func_102(Var0))
						{
							Local_148.f_106.f_2 = 0;
						}
						else if (Var0.f_25 != 0)
						{
							Local_148.f_106.f_2 = 1;
						}
						else if (func_478(Var0, &(Local_148.f_106.f_2)))
						{
							Local_148.f_106.f_2 += 2;
						}
						else if (func_474(Var0, &(Local_148.f_106.f_2)))
						{
							Local_148.f_106.f_2 = (Local_148.f_106.f_2 + func_163());
						}
						else
						{
							Local_148.f_106.f_2 = -1;
						}
					}
					else if (Var0.f_25 != 0)
					{
						Local_148.f_106.f_2 = 1;
					}
					else if (func_478(Var0, &(Local_148.f_106.f_2)))
					{
						Local_148.f_106.f_2 += 2;
					}
					else if (func_474(Var0, &(Local_148.f_106.f_2)))
					{
						Local_148.f_106.f_2 = (Local_148.f_106.f_2 + func_163());
					}
					else
					{
						Local_148.f_106.f_2 = -1;
					}
				}
				else if (func_478(Var0, &(Local_148.f_106.f_2)))
				{
					Local_148.f_106.f_2 += 2;
				}
				else if (func_474(Var0, &(Local_148.f_106.f_2)))
				{
					Local_148.f_106.f_2 = (Local_148.f_106.f_2 + func_163());
				}
				else
				{
					Local_148.f_106.f_2 = -1;
				}
			}
			if (Var0 == joaat("gadget_parachute"))
			{
				unk_0xC308F5443B936215(unk_0x9EB17624F44A8DA4(), &iLocal_189);
				if (unk_0x3A711520F83BAE98())
				{
					iLocal_192 = func_29(2037, -1, 0);
				}
				iLocal_191 = func_473();
				if (unk_0xCDD90FD5301799E0(unk_0x9EB17624F44A8DA4()))
				{
					unk_0x33DE197051A9B304(unk_0x9EB17624F44A8DA4(), &iLocal_190);
				}
				else
				{
					iLocal_190 = -1;
				}
			}
			else if (Var0 == -61829581)
			{
			}
			else
			{
				iLocal_189 = unk_0x3CC6ABB1D2EC7E28(unk_0xFC1458A37D98B502(), Var0);
				if (func_86(&Local_253, Var0, joaat("gun_root")))
				{
					if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), Var0, func_84(&Local_253, Var0, joaat("gun_root"), 0)) || unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), Var0, func_84(&Local_253, Var0, joaat("gun_root"), 1)))
					{
						if (unk_0x6ADD12BF4D6D2587(Local_148.f_226[(Local_148.f_106.f_3 * 5 + Local_148.f_106.f_1)]))
						{
							if (unk_0x714669D9C29712E4(Local_148.f_226[(Local_148.f_106.f_3 * 5 + Local_148.f_106.f_1)], func_84(&Local_253, Var0, joaat("gun_root"), 0)) || unk_0x714669D9C29712E4(Local_148.f_226[(Local_148.f_106.f_3 * 5 + Local_148.f_106.f_1)], func_84(&Local_253, Var0, joaat("gun_root"), 1)))
							{
								if ((func_231(Local_148) && func_76(Var0)) && func_102(Var0))
								{
								}
								else
								{
									iLocal_189 = 31;
								}
							}
						}
					}
				}
			}
			iLocal_193 = Local_148.f_106.f_2;
		}
		func_886(&Var0);
		func_832();
		iLocal_195 = 0;
	}
	unk_0x4973A6BA6E910C25(3);
	unk_0x4973A6BA6E910C25(4);
	unk_0x4973A6BA6E910C25(5);
	unk_0x4973A6BA6E910C25(13);
	if (!bLocal_197)
	{
		if (func_231(Local_148))
		{
			if (Var0 != 0)
			{
				if (func_188(Var0, -1, 0))
				{
					func_465(Var0, 1, -1);
				}
			}
		}
		unk_0x4973A6BA6E910C25(2);
	}
	if (Local_148.f_106.f_16)
	{
		if (unk_0x8B948C59217A295D(&(Local_148.f_106.f_11)) == 1053587609)
		{
			if (!unk_0x3A711520F83BAE98())
			{
				func_464(&(Local_148.f_106.f_11), 0, 0);
			}
			else if (Global_92885.f_1 == joaat("weapon_bottle"))
			{
				func_464("SHOP_UNLOCKDLC", 0, 0);
				func_463("SHOP_CONTENT_1");
			}
			else if (Global_92885.f_1 == joaat("weapon_snspistol"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("gun_root")) + 1)
				{
					func_464("SHOP_UNLOCKDLC6", 0, 0);
					func_463("SHOP_CONTENT_15");
				}
				else
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_1");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_gusenberg"))
			{
				func_464("SHOP_UNLOCKDLC", 0, 0);
				func_463("SHOP_CONTENT_4");
			}
			else if (Global_92885.f_1 == joaat("weapon_heavypistol"))
			{
				func_464("SHOP_UNLOCKDLC2", 0, 0);
				func_463("SHOP_CONTENT_2");
			}
			else if (Global_92885.f_1 == joaat("weapon_specialcarbine"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPClip")) + 3)
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
				else if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("gun_root")) + 1)
				{
					func_464("SHOP_UNLOCKDLC6", 0, 0);
					func_463("SHOP_CONTENT_15");
				}
				else
				{
					func_464("SHOP_UNLOCKDLC2", 0, 0);
					func_463("SHOP_CONTENT_2");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_bullpuprifle"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("gun_root")) + 1)
				{
					func_464("SHOP_UNLOCKDLC6", 0, 0);
					func_463("SHOP_CONTENT_15");
				}
				else
				{
					func_464("SHOP_UNLOCKDLC2", 0, 0);
					func_463("SHOP_CONTENT_5");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_dagger") || Global_92885.f_1 == joaat("weapon_vintagepistol"))
			{
				func_464("SHOP_UNLOCKDLC2", 0, 0);
				func_463("SHOP_CONTENT_6b");
			}
			else if (Global_92885.f_1 == joaat("weapon_combatpdw"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPClip")) + 4)
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
				else
				{
					func_464("SHOP_UNLOCKDLC2", 0, 0);
					func_463("SHOP_CONTENT_12");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_knuckle") || Global_92885.f_1 == joaat("weapon_marksmanpistol"))
			{
				func_464("SHOP_UNLOCKDLC2", 0, 0);
				func_463("SHOP_CONTENT_14");
			}
			else if (Global_92885.f_1 == joaat("weapon_musket"))
			{
				func_464("SHOP_UNLOCKDLC3", 0, 0);
				func_463("SHOP_CONTENT_8");
			}
			else if (Global_92885.f_1 == joaat("weapon_hominglauncher") || Global_92885.f_1 == joaat("weapon_proxmine"))
			{
				func_464("SHOP_UNLOCKDLC4", 0, 0);
				func_463("SHOP_CONTENT_3");
			}
			else if (Global_92885.f_1 == joaat("weapon_flashlight"))
			{
				func_464("SHOP_UNLOCKDLC4", 0, 0);
				func_463("SHOP_CONTENT_16");
			}
			else if (Global_92885.f_1 == joaat("weapon_machinepistol"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPSupp")))
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
				else
				{
					func_464("SHOP_UNLOCKDLC6", 0, 0);
					func_463("SHOP_CONTENT_15");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_machete"))
			{
				func_464("SHOP_UNLOCKDLC6", 0, 0);
				func_463("SHOP_CONTENT_15");
			}
			else if (Global_92885.f_1 == joaat("weapon_assaultrifle"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPGrip")))
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_carbinerifle"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPClip")) + 4)
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_compactrifle"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPClip")) + 3)
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_smg"))
			{
				if (Local_148.f_106.f_2 == func_462(&Local_253, Global_92885.f_1, joaat("WAPScop")))
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
			}
			else if (Global_92885.f_1 == joaat("weapon_heavyshotgun"))
			{
				if (Local_148.f_106.f_2 == (func_462(&Local_253, Global_92885.f_1, joaat("WAPSupp_2")) - 1))
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_22");
				}
			}
			else if ((((((Global_92885.f_1 == 317205821 || Global_92885.f_1 == -853065399) || Global_92885.f_1 == 125959754) || Global_92885.f_1 == -1121678507) || Global_92885.f_1 == -1169823560) || Global_92885.f_1 == -1810795771) || Global_92885.f_1 == 419712736)
			{
				if (Local_148.f_106.f_5 == 0)
				{
					func_464("SHOP_UNLOCKDLC", 0, 0);
					func_463("SHOP_CONTENT_24");
				}
			}
			else if (Global_92885.f_1 == joaat("gadget_parachute"))
			{
				if (func_196(Local_148, &Global_4265503, &Var0, Local_148.f_106.f_3, Local_148.f_106.f_1, 0, 0))
				{
					if (func_123(&Local_255, Var0, func_120(Var0, (Local_148.f_106.f_2 - func_163())), 0))
					{
						if (Local_255.f_10 == 1 && Local_255.f_9 > 46)
						{
							func_464("SHOP_UNLOCKDLC4", 0, 0);
							func_463("SHOP_CONTENT_3");
						}
						else if (Local_255.f_10 == 1 && Local_255.f_9 > 26)
						{
							func_464("SHOP_UNLOCKDLC2", 0, 0);
							func_463("SHOP_CONTENT_10b");
						}
						else if (((Local_255.f_10 == 1 && Local_255.f_9 > 0) || (Local_255.f_10 == 2 && Local_255.f_9 >= 8)) || (Local_255.f_10 == 3 && Local_255.f_9 >= 8))
						{
							func_464("SHOP_UNLOCKDLC2", 0, 0);
							func_463("SHOP_CONTENT_9b");
						}
						else
						{
							func_464(&(Local_148.f_106.f_11), 0, 0);
						}
					}
				}
			}
			else
			{
				func_464(&(Local_148.f_106.f_11), 0, 0);
			}
		}
		else
		{
			func_464(&(Local_148.f_106.f_11), 0, 0);
			if (unk_0x8B948C59217A295D(&(Local_148.f_106.f_11)) == 819148274)
			{
				if (!func_69(238))
				{
					func_460(func_461(238));
				}
				else if (!func_69(239))
				{
					func_460(func_461(239));
				}
				else if (!func_69(240))
				{
					func_460(func_461(240));
				}
				else if (!func_69(241))
				{
					func_460(func_461(241));
				}
				else if (!func_69(242))
				{
					func_460(func_461(242));
				}
				else if (!func_69(243))
				{
					func_460(func_461(243));
				}
				else if (!func_69(244))
				{
					func_460(func_461(244));
				}
				else if (!func_69(245))
				{
					func_460(func_461(245));
				}
				else if (!func_69(246))
				{
					func_460(func_461(246));
				}
				else if (!func_69(247))
				{
					func_460(func_461(247));
				}
			}
		}
		if (bLocal_113)
		{
			func_458(func_459(), 0, 0);
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			fVar3 = (1f - func_205(Var0, &iVar1, &iVar2));
			if (fVar3 != 0f)
			{
				func_458("GSHOP_DISC", 0, 0);
				func_457(system::round((fVar3 * 100f)));
			}
		}
		if ((unk_0x3A711520F83BAE98() && unk_0x05BC39B137F4CA7B(unk_0xD1952A425B78FFC0(), Local_148.f_106.f_7)) || (!unk_0x3A711520F83BAE98() && (unk_0x53C562FD2B9E3AB0() - Local_148.f_106.f_6) > 0))
		{
			Local_148.f_106.f_16 = 0;
		}
	}
	if (!Local_148.f_106.f_16)
	{
		bVar4 = false;
		if (func_196(Local_148, &Global_4265503, &Var0, Local_148.f_106.f_3, Local_148.f_106.f_1, 0, 0))
		{
			if (Local_148.f_106.f_5 == 0)
			{
				if (Var0.f_24 == 7)
				{
					if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
					{
						func_464("GSM_DLC1", 0, 0);
						bVar4 = true;
					}
					else if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
					{
						func_464("GSM_DLC2", 0, 0);
						bVar4 = true;
					}
				}
				else if (!unk_0xC80D31E4B587871C(Local_148.f_709, 7))
				{
					if (Global_70856)
					{
						if (Var0.f_24 == 4)
						{
							func_464("GS_STOCK2", 0, 0);
							func_460(func_461(1));
						}
						else if (Var0.f_24 == 3)
						{
							if (Local_148.f_106.f_1 == 0)
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_461(156));
							}
							else if (Local_148.f_106.f_1 == 1)
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_461(157));
							}
							else if (Local_148.f_106.f_1 == 2)
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_461(158));
							}
							else if (Local_148.f_106.f_1 == 3)
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_461(159));
							}
							else if (Local_148.f_106.f_1 == 4)
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_461(160));
							}
							else
							{
								func_464("GS_STOCK", 0, 0);
							}
						}
						else if (((Var0.f_24 == 0 || Var0.f_24 == 1) || Var0.f_24 == 2) || Var0.f_24 == 5)
						{
							if ((unk_0x3A711520F83BAE98() && !func_195(1, 1)) && Var0 == joaat("weapon_sawnoffshotgun"))
							{
								func_464("GSM_LOCK_SCLUB", 0, 0);
							}
							else
							{
								func_464("GS_STOCK2", 0, 0);
								func_460(func_456(Var0));
							}
						}
						else
						{
							func_464("GS_STOCK", 0, 0);
						}
						bVar4 = true;
					}
					else
					{
						func_464("GS_STOCK", 0, 0);
						bVar4 = true;
					}
				}
				else if (Var0.f_24 == 3 && Global_70856)
				{
					if (Local_148.f_106.f_1 == 0)
					{
						iVar7 = 156;
					}
					else if (Local_148.f_106.f_1 == 1)
					{
						iVar7 = 157;
					}
					else if (Local_148.f_106.f_1 == 2)
					{
						iVar7 = 158;
					}
					else if (Local_148.f_106.f_1 == 3)
					{
						iVar7 = 159;
					}
					else if (Local_148.f_106.f_1 == 4)
					{
						iVar7 = 160;
					}
					if (func_454(func_61(), iVar7))
					{
						func_445(func_61(), iVar7);
						func_443(&(Local_148.f_106), "GSM_UNLOCK_N", 3000);
					}
					else
					{
						func_442(&Global_4265503, Local_148.f_106.f_3, Local_148.f_106.f_1, &sVar5, &Var6, Local_148);
						if (!unk_0xAB019B170BF1309C(&Var6) && unk_0xA1800C71952C596F(&Var6))
						{
							func_464(&Var6, 0, 0);
							bVar4 = true;
						}
					}
				}
				else
				{
					bVar8 = false;
					if (!unk_0x3A711520F83BAE98())
					{
						switch (Var0)
						{
							case joaat("weapon_bottle"):
								StringCopy(&Var6, "WTD2_Bottle", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_snspistol"):
								StringCopy(&Var6, "WTD2_SNSPistol", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_gusenberg"):
								StringCopy(&Var6, "WTD2_GUSNBRG", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_heavypistol"):
								StringCopy(&Var6, "WTD2_HvyPistol", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_specialcarbine"):
								StringCopy(&Var6, "WTD2_SpCarbine", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_bullpuprifle"):
								StringCopy(&Var6, "WTD2_BullRifle", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_dagger"):
								StringCopy(&Var6, "WTD2_DAGGER", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_vintagepistol"):
								StringCopy(&Var6, "WTD2_VPISTOL", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_firework"):
								StringCopy(&Var6, "WTD2_FIREWRK", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_musket"):
								StringCopy(&Var6, "WTD2_MUSKET", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_marksmanrifle"):
								StringCopy(&Var6, "WTD2_MKRIFLE", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_heavyshotgun"):
								StringCopy(&Var6, "WTD2_HVYSHGN", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_hominglauncher"):
								StringCopy(&Var6, "WTD2_HOMLNCH", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_proxmine"):
								StringCopy(&Var6, "WTD2_PRXMINE", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_combatpdw"):
								StringCopy(&Var6, "WTD2_COMBATPDW", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_knuckle"):
								StringCopy(&Var6, "WTD2_KNUCKLE", 16);
								bVar8 = true;
								break;
							
							case joaat("weapon_marksmanpistol"):
								StringCopy(&Var6, "WTD2_MKPISTOL", 16);
								bVar8 = true;
								break;
							}
					}
					if (bVar8)
					{
						func_464(&Var6, 0, 0);
						bVar4 = true;
					}
					else
					{
						func_442(&Global_4265503, Local_148.f_106.f_3, Local_148.f_106.f_1, &sVar5, &Var6, Local_148);
						if (!unk_0xAB019B170BF1309C(&Var6) && unk_0xA1800C71952C596F(&Var6))
						{
							func_464(&Var6, 0, 0);
							bVar4 = true;
						}
					}
				}
			}
			else if ((Local_148.f_106.f_5 == 1 || Local_148.f_106.f_5 == 5) || Local_148.f_106.f_5 == 6)
			{
				if (((func_231(Local_148) && func_76(Var0)) && !Local_148.f_106.f_5 == 5) && !Local_148.f_106.f_5 == 6)
				{
					if (!func_102(Var0))
					{
						if (Local_148.f_106.f_2 == 0)
						{
							func_464("WCT_UPGRADE_AV", 0, 0);
							bVar4 = true;
						}
					}
					else if (Local_148.f_106.f_2 == 42)
					{
						func_464("WCT_DOWNGRADE", 0, 0);
						func_463(func_224(func_441(Var0), 0));
						bVar4 = true;
					}
					else if (Local_148.f_106.f_2 == 40)
					{
						if (bLocal_147)
						{
							sVar9 = "WCD_SUB_LCOL";
						}
						else
						{
							sVar9 = "WCD_SUB_LLCK";
							iVar10 = 0;
							if (!func_440(Var0, &iVar10))
							{
								sVar9 = "WCD_SUB_LTNT";
							}
						}
						func_464(sVar9, 0, 0);
						bVar4 = true;
					}
				}
				if (bLocal_239)
				{
					if (iLocal_240 == 0)
					{
						func_464("GS_PARA_M0", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_240 == 1)
					{
						func_464("GS_PARA_M1", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_240 == 2)
					{
						func_464("GS_PARA_M2", 0, 0);
						bVar4 = true;
					}
					else if (iLocal_240 == 3)
					{
						func_464("GS_PARA_M3", 0, 0);
						bVar4 = true;
					}
				}
				else if ((unk_0xC80D31E4B587871C(Local_148.f_709, 10) && !Local_148.f_106.f_5 == 5) && !Local_148.f_106.f_5 == 6)
				{
					if (func_174(&Local_253, Var0, (Local_148.f_106.f_2 - 2), 0))
					{
						if (!unk_0xC80D31E4B587871C(Local_148.f_709, 8))
						{
							if (Global_70856)
							{
								if (func_439(Local_253, Var0))
								{
								}
								else
								{
									func_464("GS_STOCK2", 0, 0);
								}
								func_460(func_438(Local_253.f_4, Var0));
								bVar4 = true;
							}
							else
							{
								func_464("GS_STOCK", 0, 0);
								bVar4 = true;
							}
						}
						else if (func_437(Var0, Local_148))
						{
							if (Local_148.f_106.f_2 - 2) == func_462(&Local_253, Var0, Local_253.f_4)
							{
								func_464(func_436(Local_253.f_4, Var0), 0, 0);
								bVar4 = true;
							}
						}
						else
						{
							func_433(Var0, (Local_148.f_106.f_2 - 2), &sVar5, &Var6);
							if (!unk_0xAB019B170BF1309C(&Var6) && unk_0xA1800C71952C596F(&Var6))
							{
								func_464(&Var6, 0, 0);
								bVar4 = true;
							}
							bVar11 = false;
							if (func_425(Local_253, Var0, &bVar11) || Local_253.f_1)
							{
								if (bVar11)
								{
									func_464("GSM_OWN_EQUIP", 0, 0);
									bVar4 = true;
								}
								else
								{
									func_464("GSM_TICK", 0, 0);
									bVar4 = true;
								}
							}
						}
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_148.f_709, 11))
				{
					if (func_123(&Local_255, Var0, func_120(Var0, (Local_148.f_106.f_2 - func_163())), 0))
					{
						if (unk_0x3A711520F83BAE98())
						{
							if (!func_422(Var0, Local_255.f_9, Local_255.f_10))
							{
								if (func_421(Var0, Local_255.f_9, &Var6, &iVar12, &bVar13))
								{
									if (unk_0x8B948C59217A295D(&Var6) == unk_0x8B948C59217A295D("GSM_TINT_CASH"))
									{
										if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
										{
											StringConCat(&Var6, "1", 16);
										}
										else if ((unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38()) || unk_0xB9D80B12FE4456A5())
										{
											StringConCat(&Var6, "2", 16);
										}
									}
									else if (unk_0x8B948C59217A295D(&Var6) == unk_0x8B948C59217A295D("GSM_TINT_KILL"))
									{
										iVar12 = (iVar12 - func_420(Var0));
									}
									func_464(&Var6, 0, 0);
									if (iVar12 != -1)
									{
										func_460(iVar12);
									}
									if (bVar13)
									{
										func_442(&Global_4265503, Local_148.f_106.f_3, Local_148.f_106.f_1, &sVar5, &Var6, Local_148);
										func_463(func_419(Var0));
									}
									bVar4 = true;
									if (Var0 == joaat("gadget_parachute"))
									{
										iVar14 = func_418(Var0, Local_255.f_9, Local_255.f_10);
										if (iVar14 != 0)
										{
											func_464("GS_STOCK2", 0, 0);
											func_460(func_461(iVar14));
											bVar4 = true;
										}
									}
								}
								if (unk_0x3A711520F83BAE98())
								{
									if ((Var0 == joaat("gadget_parachute") && Local_255.f_10 == 4) && Local_255.f_9 == 6)
									{
										if (!func_324())
										{
											func_464("GSM_LOCK_CREW", 0, 0);
											bVar4 = true;
										}
										else if (!func_415(6, 0))
										{
											if (func_414(unk_0x9EB17624F44A8DA4()))
											{
												func_464("GSM_LOCK_RNK", 0, 0);
											}
											else
											{
												func_464("GSM_LOCK_RNKT", 0, 0);
											}
											bVar4 = true;
										}
									}
								}
							}
							else if ((func_413(Var0, Local_148) && !Local_148.f_106.f_5 == 5) && !Local_148.f_106.f_5 == 6)
							{
								if ((Local_148.f_106.f_2 - func_163()) == 0)
								{
									func_464("WCD_SUB_TINT", 0, 0);
									bVar4 = true;
								}
							}
							else
							{
								bVar15 = false;
								if (!unk_0xAB019B170BF1309C(&(Local_255.f_4)) && unk_0xA1800C71952C596F(&(Local_255.f_4)))
								{
									func_464(&(Local_255.f_4), 0, 0);
									bVar4 = true;
									bVar15 = true;
								}
								bVar16 = false;
								if (Local_255.f_10 != 5)
								{
									iVar17 = iLocal_189;
									if (Local_255.f_10 == 1)
									{
										iVar17 = iLocal_192;
									}
									else if (Local_255.f_10 == 4)
									{
										iVar17 = iLocal_191;
									}
									else if (Local_255.f_10 == 2)
									{
										iVar17 = iLocal_189;
									}
									else if (Local_255.f_10 == 3)
									{
										iVar17 = iLocal_190;
									}
									if (Local_148.f_106.f_5 == 6)
									{
										if (func_111(&Local_256, Var0, (Local_148.f_106.f_2 - 40), 0))
										{
											if (func_412(&Local_253, &bVar16, Var0, Local_256.f_9, iLocal_194))
											{
												if (bVar16)
												{
													func_464("GSM_OWN_EQUIP", 0, 0);
													bVar4 = true;
													bVar15 = false;
												}
												else
												{
													func_464("GSM_TICK", 0, 0);
													bVar4 = true;
													bVar15 = false;
												}
											}
										}
									}
									else if (func_402(Var0, Local_255.f_9, Local_255.f_10, iVar17, &bVar16))
									{
										if (bVar16)
										{
											func_464("GSM_OWN_EQUIP", 0, 0);
											bVar4 = true;
											bVar15 = false;
										}
										else
										{
											func_464("GSM_TICK", 0, 0);
											bVar4 = true;
											bVar15 = false;
										}
									}
								}
								if (bVar15)
								{
									uVar18 = Local_255.f_8;
									fVar19 = (1f - func_124(Var0, &uVar18));
									if (fVar19 != 0f)
									{
										func_458("GSHOP_DISC", 0, 0);
										func_457(system::round((fVar19 * 100f)));
									}
								}
							}
						}
						else
						{
							bVar20 = false;
							if (!unk_0xAB019B170BF1309C(&(Local_255.f_4)) && unk_0xA1800C71952C596F(&(Local_255.f_4)))
							{
								func_464(&(Local_255.f_4), 0, 0);
								bVar4 = true;
								bVar20 = true;
							}
							bVar21 = false;
							if (Local_255.f_10 != 5)
							{
								iVar22 = iLocal_189;
								if (Local_255.f_10 == 1)
								{
									iVar22 = iLocal_192;
								}
								else if (Local_255.f_10 == 4)
								{
									iVar22 = iLocal_191;
								}
								else if (Local_255.f_10 == 2)
								{
									iVar22 = iLocal_189;
								}
								else if (Local_255.f_10 == 3)
								{
									iVar22 = iLocal_190;
								}
								if (func_402(Var0, Local_255.f_9, Local_255.f_10, iVar22, &bVar21))
								{
									if (bVar21)
									{
										func_464("GSM_OWN_EQUIP", 0, 0);
										bVar4 = true;
										bVar20 = false;
									}
									else
									{
										func_464("GSM_TICK", 0, 0);
										bVar4 = true;
										bVar20 = false;
									}
								}
							}
							if (bVar20)
							{
								uVar23 = Local_255.f_8;
								fVar24 = (1f - func_124(Var0, &uVar23));
								if (fVar24 != 0f)
								{
									func_458("GSHOP_DISC", 0, 0);
									func_457(system::round((fVar24 * 100f)));
								}
							}
						}
					}
				}
			}
			else if (Local_148.f_106.f_5 == 2)
			{
				if (func_231(Local_148) && (func_76(Var0) || func_169(Var0)))
				{
					if (bLocal_251)
					{
						func_464(func_401(Var0, 0), 0, 0);
						func_463(func_224(Var0, 0));
						bVar4 = true;
					}
					else
					{
						func_464(func_399(func_42(Var0), 0), 0, 0);
						bVar4 = true;
					}
				}
			}
			else if (Local_148.f_106.f_5 == 3)
			{
				if (func_231(Local_148) && (func_76(Var0) || func_169(Var0)))
				{
					if (bLocal_251)
					{
						func_464(func_401(Var0, 1), 0, 0);
						func_463(func_224(Var0, 0));
						bVar4 = true;
					}
					else
					{
						func_464(func_399(func_441(Var0), 0), 0, 0);
						bVar4 = true;
					}
				}
			}
			else if (Local_148.f_106.f_5 == 4)
			{
				if (unk_0xC80D31E4B587871C(Local_148.f_709, 10))
				{
					if (func_174(&Local_253, Var0, (Local_148.f_106.f_2 - 2), 0))
					{
						if (!unk_0xC80D31E4B587871C(Local_148.f_709, 8))
						{
							if (Global_70856)
							{
								if (func_439(Local_253, Var0))
								{
								}
								else
								{
									func_464("GS_STOCK2", 0, 0);
								}
								func_460(func_438(Local_253.f_4, Var0));
								bVar4 = true;
							}
							else
							{
								func_464("GS_STOCK", 0, 0);
								bVar4 = true;
							}
						}
						else
						{
							func_433(Var0, (Local_148.f_106.f_2 - 2), &sVar5, &Var6);
							if (!unk_0xAB019B170BF1309C(&Var6) && unk_0xA1800C71952C596F(&Var6))
							{
								func_464(&Var6, 0, 0);
								bVar4 = true;
							}
							bVar25 = false;
							if (func_231(Local_148))
							{
								if (Local_253.f_4 != joaat("WAPClip") && Local_253.f_4 != joaat("WAPClip_2"))
								{
									if (func_425(Local_253, Var0, &bVar25) || Local_253.f_1)
									{
										if (bVar25)
										{
											if (func_173(Local_253))
											{
												func_464("GSM_OWN_EQUIP_D", 0, 0);
												func_463("SHOP_CONTENT_8b");
											}
											else
											{
												func_464("GSM_OWN_EQUIP", 0, 0);
											}
											bVar4 = true;
										}
										else
										{
											if (func_173(Local_253))
											{
												func_464("GSM_TICK_D", 0, 0);
												func_463("SHOP_CONTENT_8b");
											}
											else
											{
												func_464("GSM_TICK", 0, 0);
											}
											bVar4 = true;
										}
									}
									else if (func_173(Local_253))
									{
										func_464("SHOP_DLC_PACK3", 0, 0);
										func_463("SHOP_CONTENT_8");
										bVar4 = true;
									}
								}
							}
							else if (func_425(Local_253, Var0, &bVar25) || Local_253.f_1)
							{
								if (bVar25)
								{
									func_464("GSM_OWN_EQUIP", 0, 0);
									bVar4 = true;
								}
								else
								{
									func_464("GSM_TICK", 0, 0);
									bVar4 = true;
								}
							}
						}
					}
				}
			}
		}
		if (bLocal_113)
		{
			func_458(func_459(), 0, 0);
		}
		else
		{
			fVar28 = (1f - func_205(Var0, &iVar26, &iVar27));
			if (fVar28 != 0f)
			{
				func_458("GSHOP_DISC", 0, 0);
				func_457(system::round((fVar28 * 100f)));
			}
		}
		if (!bVar4)
		{
			func_464("", 0, 0);
		}
	}
	if (iLocal_215)
	{
		if (iLocal_214 == 0)
		{
			iLocal_214++;
		}
		else if (iLocal_214 == 1)
		{
			bVar29 = false;
			bVar30 = false;
			bVar31 = false;
			bVar32 = false;
			if (func_398())
			{
				if (unk_0xDEC0EB6EAE9BC575())
				{
					if (unk_0x4916190900E76373())
					{
						iVar33 = 2;
						ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar33, 0, 0, -1, 0, 0, 1, 0);
						if (unk_0xE8C126B7ADBB9D63(2, 201))
						{
							bVar30 = true;
						}
					}
					else if (!unk_0x32684FE76023BF4C())
					{
						iVar34 = 2;
						if (unk_0x177281F5FA205A38())
						{
							unk_0xFA9719BBFC4288D4();
							unk_0xAD7E2BA84014A5F3(0, 16384, 1);
							bVar30 = true;
						}
						else
						{
							ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar34, 0, 0, -1, 0, 0, 1, 0);
						}
						if (unk_0xE8C126B7ADBB9D63(2, 201))
						{
							bVar30 = true;
						}
					}
					else if (!unk_0xC13991556C1A3593())
					{
						iVar35 = 2;
						ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar35, 0, 0, -1, 0, 0, 1, 0);
						if (unk_0xE8C126B7ADBB9D63(2, 201))
						{
							bVar30 = true;
						}
					}
					else
					{
						bVar29 = true;
					}
				}
				else
				{
					bVar31 = true;
				}
			}
			else
			{
				bVar32 = true;
			}
			if (bVar32)
			{
				iLocal_214 = 0;
				iLocal_215 = 0;
				iLocal_228 = 1;
			}
			else if (bVar31)
			{
				iLocal_214 = 3;
			}
			else if (bVar29)
			{
				if (unk_0x3A711520F83BAE98())
				{
					Global_2458239 = 1;
					Global_2458240 = 1;
				}
				unk_0x4AFBCBFDE748D4E0(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", true);
				unk_0x76F01BFE5BE37D40(unk_0x8B948C59217A295D(&(Global_92885.f_1314)), Global_92885.f_1318, unk_0x8B948C59217A295D(func_297(Local_148, 0)));
				unk_0x14E7A995FCE0F575(&cLocal_216, "", func_397(Local_148));
				iLocal_104 = 1;
				iLocal_214++;
			}
			else if (bVar30)
			{
				iLocal_214++;
			}
		}
		else if (iLocal_214 == 2)
		{
			if (!unk_0x9A4EAADB45DA07DB())
			{
				iLocal_214 = 0;
				iLocal_215 = 0;
			}
		}
		else if (iLocal_214 == 3)
		{
			if (func_385(&iLocal_213, 1))
			{
				if (unk_0xDEC0EB6EAE9BC575())
				{
					iLocal_214 = 4;
				}
				else
				{
					iLocal_214 = 2;
				}
			}
		}
		else if (iLocal_214 == 4)
		{
			if (unk_0xDEC0EB6EAE9BC575())
			{
				if (!unk_0xDAD3B438A9B2C9A2())
				{
					if (unk_0x3A711520F83BAE98())
					{
						Global_2458239 = 1;
						Global_2458240 = 1;
					}
					if (unk_0xC13991556C1A3593())
					{
						unk_0x76F01BFE5BE37D40(unk_0x8B948C59217A295D(&(Global_92885.f_1314)), Global_92885.f_1318, unk_0x8B948C59217A295D(func_297(Local_148, 0)));
						unk_0x14E7A995FCE0F575(&cLocal_216, "", func_397(Local_148));
						iLocal_104 = 1;
					}
					iLocal_214 = 2;
				}
			}
			else
			{
				iLocal_214 = 2;
			}
		}
	}
	else if (bLocal_211)
	{
	}
	else if (((bLocal_227 && !func_398()) && !unk_0x3A711520F83BAE98()) || iLocal_228)
	{
		iLocal_228 = 1;
		iVar36 = 2;
		ui::_set_warning_message_2("PM_INF_QMFT", "STORE_CON_ONL", iVar36, 0, 0, -1, 0, 0, 1, 0);
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			bLocal_227 = func_398();
			iLocal_228 = 0;
		}
	}
	else if (((bLocal_225 && !unk_0xDEC0EB6EAE9BC575()) && !unk_0x3A711520F83BAE98()) || iLocal_226)
	{
		iLocal_226 = 1;
		iVar37 = 2;
		ui::_set_warning_message_2("PM_INF_QMFT", "STORE_SGN_ONL2", iVar37, 0, 0, -1, 0, 0, 1, 0);
		if (unk_0xF2B58F79D29425B4(2, 201))
		{
			bLocal_225 = unk_0xDEC0EB6EAE9BC575();
			iLocal_226 = 0;
		}
	}
	else
	{
		func_362(1, Local_148, unk_0x8F38E94BBF3404CD(joaat("lamar1")) == 0, 0, 1, -1082130432, 0, 0);
		if (func_359(0, 0))
		{
			if ((func_196(Local_148, &Global_4265503, &Var0, Local_148.f_106.f_3, Local_148.f_106.f_1, 0, 0) && Local_148.f_106.f_5 != 2) && Local_148.f_106.f_5 != 3)
			{
				if ((Var0.f_24 == 0 || Var0.f_24 == 2) || Var0.f_24 == 5)
				{
					if (func_231(Local_148))
					{
						if (func_169(Var0))
						{
							if (Local_148.f_106.f_5 == 4)
							{
								bVar55 = true;
							}
						}
						else if (Local_148.f_106.f_5 == 1)
						{
							bVar55 = true;
						}
					}
					else if (Local_148.f_106.f_5 == 1)
					{
						bVar55 = true;
					}
					if (bVar55)
					{
						while (func_174(&Local_253, Var0, iVar56, 0))
						{
							if (Local_253 != 0 && unk_0x714669D9C29712E4(Local_148.f_226[(Local_148.f_106.f_3 * 5 + Local_148.f_106.f_1)], Local_253))
							{
								if (unk_0xE5EECC498E64F62E(Local_253, &Var39))
								{
									if (iVar56 != (Local_148.f_106.f_2 - 2) || unk_0xC80D31E4B587871C(Local_148.f_709, 6))
									{
										iVar51 = (iVar51 + Var39);
										iVar52 = (iVar52 + Var39.f_1);
										iVar53 = (iVar53 + Var39.f_3);
										iVar54 = (iVar54 + Var39.f_4);
									}
								}
							}
							iVar56++;
						}
					}
					if (unk_0x30DAC7C728E28A4A(Var0, &Var38))
					{
						Var39 = 0;
						Var39.f_1 = 0;
						Var39.f_3 = 0;
						Var39.f_4 = 0;
						if (func_231(Local_148))
						{
							if (func_169(Var0))
							{
								if ((Local_148.f_106.f_5 == 4 || Local_148.f_106.f_5 == 2) || Local_148.f_106.f_5 == 3)
								{
									bVar57 = true;
								}
							}
							else if (Local_148.f_106.f_5 == 1)
							{
								bVar57 = true;
							}
						}
						else if (Local_148.f_106.f_5 == 1)
						{
							bVar57 = true;
						}
						if (bVar57)
						{
							if (func_174(&Local_253, Var0, (Local_148.f_106.f_2 - 2), 0))
							{
								if (Local_253 != 0 && !unk_0xC80D31E4B587871C(Local_148.f_709, 6))
								{
									unk_0xE5EECC498E64F62E(Local_253, &Var39);
									iVar58 = func_358(&Local_253, Var0, -1312077031);
									if (iVar58 != 0)
									{
										unk_0xE5EECC498E64F62E(iVar58, &Var40);
										Var39 = (Var39 - Var40);
										Var39.f_1 = (Var39.f_1 - Var40.f_1);
										Var39.f_3 = (Var39.f_3 - Var40.f_3);
										Var39.f_4 = (Var39.f_4 - Var40.f_4);
									}
								}
							}
						}
						fVar59 = ((func_357() - unk_0x85D2696CBA462F28()) + (0,00138888f * 76f));
						fVar60 = (125f - 8f);
						unk_0x73509F6FDA1DB386(76, 66);
						unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
						unk_0x31758B9A51671C43(140, &iVar41, &iVar42, &iVar43, &iVar44);
						func_356(0f, fVar59, Global_17300, (0,00138888f * 108f), iVar41, iVar42, iVar43, iVar44);
						fVar45 = 0,0046875f;
						fVar46 = ((0,00138888f * 108f) + (0,00138888f * 42f));
						fVar47 = fVar59;
						func_354(0, 1, 0, 0, 0, 0, 0);
						unk_0x76CCD673085CBF57("PM_DAMAGE");
						unk_0xD3DA9EADE295C3C5(fVar45, (fVar46 + fVar47), 0);
						fVar47 = (fVar47 + 0,034722f);
						func_354(0, 1, 0, 0, 0, 0, 0);
						unk_0x76CCD673085CBF57("PM_FIRERATE");
						unk_0xD3DA9EADE295C3C5(fVar45, (fVar46 + fVar47), 0);
						fVar47 = (fVar47 + 0,034722f);
						func_354(0, 1, 0, 0, 0, 0, 0);
						unk_0x76CCD673085CBF57("PM_ACCURACY");
						unk_0xD3DA9EADE295C3C5(fVar45, (fVar46 + fVar47), 0);
						fVar47 = (fVar47 + 0,034722f);
						func_354(0, 1, 0, 0, 0, 0, 0);
						unk_0x76CCD673085CBF57("PM_RANGE");
						unk_0xD3DA9EADE295C3C5(fVar45, (fVar46 + fVar47), 0);
						fVar47 = (fVar47 + 0,034722f);
						unk_0x31758B9A51671C43(1, &iVar41, &iVar42, &iVar43, &iVar44);
						iVar44 = 76;
						fVar48 = (0,00138888f * -89f);
						fVar49 = fVar59;
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (0,00078125f * fVar60), (0,00138888f * 6f), iVar41, iVar42, iVar43, iVar44);
						fVar49 = (fVar49 + 0,034722f);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (0,00078125f * fVar60), (0,00138888f * 6f), iVar41, iVar42, iVar43, iVar44);
						fVar49 = (fVar49 + 0,034722f);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (0,00078125f * fVar60), (0,00138888f * 6f), iVar41, iVar42, iVar43, iVar44);
						fVar49 = (fVar49 + 0,034722f);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (0,00078125f * fVar60), (0,00138888f * 6f), iVar41, iVar42, iVar43, iVar44);
						fVar49 = (fVar49 + 0,034722f);
						fVar48 = (0,00138888f * -89f);
						fVar49 = fVar59;
						fVar50[0] = (0,00078125f * ((fVar60 / 100f) * system::to_float(Var38)));
						fVar50[0] = (fVar50[0] + (fVar50[0] * (system::to_float(iVar51) / 100f)));
						if (bVar57)
						{
							if (Var39 >= 0)
							{
								unk_0x31758B9A51671C43(9, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (fVar50[0] + (fVar50[0] * (system::to_float(Var39) / 100f))), (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
							}
							else
							{
								unk_0x31758B9A51671C43(6, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[0], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
								fVar50[0] = (fVar50[0] + (fVar50[0] * (system::to_float(Var39) / 100f)));
							}
						}
						unk_0x31758B9A51671C43(1, &iVar41, &iVar42, &iVar43, &iVar44);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[0], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
						fVar49 = (fVar49 + 0,034722f);
						fVar50[1] = (0,00078125f * ((fVar60 / 100f) * system::to_float(Var38.f_1)));
						fVar50[1] = (fVar50[1] + (fVar50[1] * (system::to_float(iVar52) / 100f)));
						if (bVar57)
						{
							if (Var39.f_1 >= 0)
							{
								unk_0x31758B9A51671C43(9, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (fVar50[1] + (fVar50[1] * (system::to_float(Var39.f_1) / 100f))), (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
							}
							else
							{
								unk_0x31758B9A51671C43(6, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[1], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
								fVar50[1] = (fVar50[1] + (fVar50[1] * (system::to_float(Var39.f_1) / 100f)));
							}
						}
						unk_0x31758B9A51671C43(1, &iVar41, &iVar42, &iVar43, &iVar44);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[1], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
						fVar49 = (fVar49 + 0,034722f);
						fVar50[2] = (0,00078125f * ((fVar60 / 100f) * system::to_float(Var38.f_3)));
						fVar50[2] = (fVar50[2] + (fVar50[2] * (system::to_float(iVar53) / 100f)));
						if (bVar57)
						{
							if (Var39.f_3 >= 0)
							{
								unk_0x31758B9A51671C43(9, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (fVar50[2] + (fVar50[2] * (system::to_float(Var39.f_3) / 100f))), (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
							}
							else
							{
								unk_0x31758B9A51671C43(6, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[2], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
								fVar50[2] = (fVar50[2] + (fVar50[2] * (system::to_float(Var39.f_3) / 100f)));
							}
						}
						unk_0x31758B9A51671C43(1, &iVar41, &iVar42, &iVar43, &iVar44);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[2], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
						fVar49 = (fVar49 + 0,034722f);
						fVar50[3] = (0,00078125f * ((fVar60 / 100f) * system::to_float(Var38.f_4)));
						fVar50[3] = (fVar50[3] + (fVar50[3] * (system::to_float(iVar54) / 100f)));
						if (bVar57)
						{
							if (Var39.f_4 >= 0)
							{
								unk_0x31758B9A51671C43(9, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), (fVar50[3] + (fVar50[3] * (system::to_float(Var39.f_4) / 100f))), (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
							}
							else
							{
								unk_0x31758B9A51671C43(6, &iVar41, &iVar42, &iVar43, &iVar44);
								func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[3], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
								fVar50[3] = (fVar50[3] + (fVar50[3] * (system::to_float(Var39.f_4) / 100f)));
							}
						}
						unk_0x31758B9A51671C43(1, &iVar41, &iVar42, &iVar43, &iVar44);
						func_353((Global_17300 - (0,00078125f * 150f)), (fVar48 + fVar49), fVar50[3], (0,00138888f * 6f), iVar41, iVar42, iVar43, 255);
						fVar49 = (fVar49 + 0,034722f);
						unk_0x189EEBAACC5D380A();
					}
				}
			}
		}
	}
	if (Local_148 == 47)
	{
		if (!Global_2458257)
		{
			Global_2458257 = 1;
		}
	}
}

void func_353(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3497E
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar0 = ((125f - 8f) * 0,00078125f);
	fVar1 = (125f * 0,00078125f);
	fVar2 = fParam0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (fParam2 > ((fVar0 / 100f) * 20f))
		{
			func_356(fVar2, fParam1, ((fVar0 / 100f) * 20f), fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else if (fParam2 > 0f)
		{
			func_356(fVar2, fParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		fParam2 = (fParam2 - ((fVar0 / 100f) * 20f));
		fVar2 = (fVar2 + ((fVar1 / 100f) * 20f));
		iVar3++;
	}
}

void func_354(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x34A34
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_355(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_355(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x34BE2
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

void func_356(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x34E6C
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

float func_357()//Position - 0x34E9B
{
	return Global_17301.f_5743;
}

int func_358(int iParam0, int iParam1, int iParam2)//Position - 0x34EA9
{
	struct<5> Var0;
	int iVar1;
	
	func_85(&Var0, *iParam0, iParam0->f_4, iParam0->f_6, iParam0->f_1);
	while (func_174(&Var0, iParam1, iVar1, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), iParam1, Var0))
			{
				return Var0;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_359(bool bParam0, bool bParam1)//Position - 0x34EFB
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_361(8, -1) && func_360() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_360()//Position - 0x34F98
{
	return Global_1312789;
}

bool func_361(int iParam0, int iParam1)//Position - 0x34FA4
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

void func_362(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x34FDF
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
	
	if (!func_329(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_359(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0,05f, -0,05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_383(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_382())
		{
			iVar59 = system::round((system::to_float(iVar60) * fVar62));
		}
		fVar63 = (system::to_float(iVar59) / system::to_float(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_382())
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
					StringCopy(&cVar64, func_381(29), 64);
					StringCopy(&cVar65, func_379(29, 1), 64);
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
					func_378();
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
						func_378();
						func_376((((Global_17298 + fParam5) - 0,00390625f) - func_377("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0,00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
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
					func_383(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_375(fVar40);
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
				func_375(fVar40);
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
					func_383(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_374(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4638), func_379(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_383(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_375(fVar40);
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
				func_375(fVar40);
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
					func_383(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_374(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEFB3EC0CDCC33841(func_381(Global_4265799.f_67), func_379(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_369(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_354(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_383(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_383(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_383(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(26), func_379(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_383(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_383(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(27), func_379(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_368(bVar32);
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
													if (func_383(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_383(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_374(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[(iVar22 + iVar28)]), func_379(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[(iVar22 + iVar28)]), func_379(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_367() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_354(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_383(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0,5f));
														if (func_383(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_374(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[(iVar22 + iVar14)]), func_379(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[(iVar22 + iVar14)]), func_379(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[(iVar22 + iVar14)]), func_379(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_368(bVar32);
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
											if (func_383(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_383(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(26), func_379(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_383(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_383(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(27), func_379(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_366((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_368(bVar32);
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
											if (func_383(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_383(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(26), func_379(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_383(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_383(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_374(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0xEFB3EC0CDCC33841(func_381(27), func_379(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_354(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_365((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_383(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_383(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0,5f);
													if (func_383(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_374(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_381(26), func_379(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_383(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0,5f);
													if (func_383(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_374(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0xEFB3EC0CDCC33841(func_381(27), func_379(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_383(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_374(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEFB3EC0CDCC33841(func_381(Global_17301.f_4433[iVar22]), func_379(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar55 * 0,5f)), (fVar36 * func_364(Global_17301.f_4433[iVar22])), (fVar37 * func_364(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_383(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_935(0);
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
		func_363(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_363(int iParam0)//Position - 0x37C3F
{
	Global_1359035.f_1079 = iParam0;
}

float func_364(int iParam0)//Position - 0x37C50
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

void func_365(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x37CBF
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(fParam3, iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_366(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x37CDE
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

bool func_367()//Position - 0x37CFC
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_368(bool bParam0)//Position - 0x37D0D
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

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x37D53
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_329(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_359(bParam4, bParam8))
	{
		return;
	}
	if (func_372())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_250(unk_0x9EB17624F44A8DA4(), 0))
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
					func_371(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_371(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_370(&(Global_17301.f_4834[iVar1 /*4*/]));
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
				func_371(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_370(&(Global_4265799.f_16));
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

void func_370(char* sParam0)//Position - 0x38230
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_371(char* sParam0)//Position - 0x38242
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_372()//Position - 0x38250
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_373())
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

int func_373()//Position - 0x382BE
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_374(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x382D8
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

void func_375(float fParam0)//Position - 0x383AB
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

void func_376(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x3840A
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0x6223D539BCD39E76(iParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_377(char* sParam0, int iParam1, int iParam2)//Position - 0x3842D
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
	func_378();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(iParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_378()//Position - 0x3846F
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

var func_379(int iParam0, bool bParam1)//Position - 0x384F9
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_323(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_380(&uVar1);
			}
		}
		else
		{
			return func_380(&(Global_17301.f_6719[iParam0 /*16*/]));
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

var func_380(var uParam0)//Position - 0x38947
{
	return uParam0;
}

char* func_381(int iParam0)//Position - 0x38951
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_323(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_380(&uVar0);
		}
		else
		{
			return func_380(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_382()//Position - 0x389C6
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

int func_383(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x389F8
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_381(iParam0), 64);
	StringCopy(&cVar1, func_379(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_382())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_382())
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
		vVar7.x = (vVar7.x * (func_384(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_384(iParam0) / fVar4));
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

float func_384(int iParam0)//Position - 0x38BA9
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

int func_385(int iParam0, bool bParam1)//Position - 0x38C48
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x4B64A8D052027742() && Global_1840922.f_2 > 0)
	{
		func_343(&Global_1840922);
		func_343(&(Global_1840922.f_49));
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_396(0);
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
	if ((unk_0xFD6215BABFD843F2() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_394() && unk_0xDEC0EB6EAE9BC575()))
	{
		if (unk_0x961852460B030BEE())
		{
			func_391(&(Global_1840922.f_3), func_393(&(Global_1840922.f_3)));
			if (!unk_0xC80D31E4B587871C(*iParam0, 4))
			{
				unk_0x872F1C1F8587CCC7(iParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_389(&(Global_1840922.f_3), 0);
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
			else if (!func_394())
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
				func_343(&(Global_1840922.f_49));
				func_343(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_396(0);
				return 1;
			}
		}
	}
	else
	{
		func_391(&(Global_1840922.f_3), func_393(&(Global_1840922.f_3)));
		if ((func_388(&(Global_1840922.f_49)) && !func_386(&(Global_1840922.f_49), 2000, 1)) && !unk_0xDEC0EB6EAE9BC575())
		{
			unk_0x872F1C1F8587CCC7(iParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_389(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xC80D31E4B587871C(*iParam0, 3))
		{
			if (!unk_0xC80D31E4B587871C(*iParam0, 1))
			{
				unk_0xB50D7608173794C6(0);
				unk_0x872F1C1F8587CCC7(iParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_389(&(Global_1840922.f_3), 0);
			}
		}
		if (func_388(&Global_1840922))
		{
			if (!func_386(&Global_1840922, 4000, 1))
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
							func_343(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_396(0);
							return 1;
						}
					}
				}
				else
				{
					func_343(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_396(0);
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
					func_343(&(Global_1840922.f_49));
					func_343(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_396(0);
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
						func_343(&(Global_1840922.f_49));
						func_343(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_396(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_386(var uParam0, int iParam1, bool bParam2)//Position - 0x390B9
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_387(uParam0, bParam2, 0);
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

void func_387(var uParam0, bool bParam1, bool bParam2)//Position - 0x39117
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

bool func_388(var uParam0)//Position - 0x3915C
{
	return uParam0->f_1;
}

void func_389(var uParam0, bool bParam1)//Position - 0x39168
{
	func_390(uParam0);
	if (bParam1)
	{
		func_396(0);
	}
	uParam0->f_35 = 1;
}

void func_390(var uParam0)//Position - 0x39185
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_391(var uParam0, int iParam1)//Position - 0x391A0
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_392(uParam0);
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

void func_392(var uParam0)//Position - 0x3929E
{
	uParam0->f_35 = 0;
}

int func_393(var uParam0)//Position - 0x392AB
{
	return uParam0->f_35;
}

int func_394()//Position - 0x392B7
{
	if (func_395())
	{
		return 0;
	}
	if (unk_0x73EC29164C21897D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_395()//Position - 0x392D7
{
	return Global_2457327;
}

void func_396(bool bParam0)//Position - 0x392E3
{
	unk_0x6F9D12DB7F437EA4();
	if (bParam0)
	{
		unk_0xC01EC70746CD8A05();
	}
}

int func_397(int iParam0)//Position - 0x392F8
{
	switch (func_309(iParam0))
	{
		case 4:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 3:
			return 7;
			break;
		
		case 0:
			return 9;
			break;
		
		case 2:
			return 11;
			break;
		
		case 5:
			return 12;
			break;
	}
	return 0;
}

bool func_398()//Position - 0x3935F
{
	return unk_0x73955C3D74019930();
}

char* func_399(int iParam0, bool bParam1)//Position - 0x3936B
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_72(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("weapon_marksmanrifle"):
				if (unk_0x3A711520F83BAE98())
				{
					if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), 1785463520, 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("weapon_compactrifle"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case 125959754:
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case 1742569970:
			return "";
			break;
		
		case -1474608608:
			return "";
			break;
		
		case 527765612:
			return "";
			break;
		
		case -165357558:
			return "";
			break;
		
		case -1372674932:
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_hatchet"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		case -1746263880:
			if (func_400(2052114177) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (unk_0x851744C54849FD9D())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), -1768145561, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_77(iParam0, &Var0) != -1)
			{
				return func_178(&(Var0.f_15));
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), 1785463520, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_77(iParam0, &Var1) != -1)
			{
				return func_178(&(Var1.f_15));
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), -2066285827, 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_77(iParam0, &Var2) != -1)
			{
				return func_178(&(Var2.f_15));
			}
			break;
		
		default:
			if (func_77(iParam0, &Var3) != -1)
			{
				return func_178(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_400(int iParam0)//Position - 0x398C4
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

char* func_401(int iParam0, bool bParam1)//Position - 0x398E2
{
	char* sVar0;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case -1075685676:
			sVar0 = "WCD_CONF_PIST";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_PIST";
			}
			break;
		
		case joaat("weapon_smg"):
		case 2024373456:
			sVar0 = "WCD_CONF_SMG";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SMG";
			}
			break;
		
		case joaat("weapon_heavysniper"):
		case 177293209:
			sVar0 = "WCD_CONF_HS";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_HS";
			}
			break;
		
		case joaat("weapon_combatmg"):
		case -608341376:
			sVar0 = "WCD_CONF_CMG";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_CMG";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
		case 961495388:
			sVar0 = "WCD_CONF_ASSR";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_ASSR";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
		case -86904375:
			sVar0 = "WCD_CONF_CARB";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_CARB";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
		case 1432025498:
			sVar0 = "WCD_CONF_PSGN";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_PSGN";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
		case -1768145561:
			sVar0 = "WCD_CONF_SCRB";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SCRB";
			}
			break;
		
		case joaat("weapon_snspistol"):
		case -2009644972:
			sVar0 = "WCD_CONF_SNSP";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_SNSP";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
		case 1785463520:
			sVar0 = "WCD_CONF_MKRF";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_MKRF";
			}
			break;
		
		case joaat("weapon_revolver"):
		case -879347409:
			sVar0 = "WCD_CONF_HREV";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_HREV";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
		case -2066285827:
			sVar0 = "WCD_CONF_BRFL";
			if (bParam1)
			{
				sVar0 = "WCD_REVT_BRFL";
			}
			break;
	}
	return sVar0;
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x39A73
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_70856)
	{
		iVar1 = func_418(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_409(iVar1, -1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar1 = func_418(iParam0, iParam1, iParam2);
		if (iVar1 != 0)
		{
			if (func_403(func_61(), iVar1))
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	*bParam4 = iParam1 == iParam3;
	return iVar0;
}

int func_403(int iParam0, int iParam1)//Position - 0x39ADF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(iParam0))
	{
		iVar0 = func_407(iParam0, iParam1);
		iVar1 = func_405(iParam1);
		iVar2 = func_404(iVar1);
		return unk_0xC80D31E4B587871C(iVar0, iVar2);
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x39B16
{
	return (iParam0 % 32);
}

int func_405(int iParam0)//Position - 0x39B23
{
	return func_406(iParam0);
}

int func_406(int iParam0)//Position - 0x39B31
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
		
		case 16:
			return 7;
			break;
		
		case 17:
			return 8;
			break;
		
		case 18:
			return 9;
			break;
		
		case 19:
			return 10;
			break;
		
		case 20:
			return 11;
			break;
		
		case 21:
			return 12;
			break;
		
		case 22:
			return 13;
			break;
		
		case 23:
			return 14;
			break;
		
		case 24:
			return 15;
			break;
		
		case 25:
			return 16;
			break;
		
		case 26:
			return 17;
			break;
		
		case 27:
			return 18;
			break;
		
		case 28:
			return 19;
			break;
		
		case 29:
			return 20;
			break;
		
		case 30:
			return 21;
			break;
		
		case 31:
			return 22;
			break;
		
		case 32:
			return 23;
			break;
		
		case 33:
			return 24;
			break;
		
		case 34:
			return 25;
			break;
		
		case 35:
			return 26;
			break;
		
		case 36:
			return 27;
			break;
		
		case 37:
			return 28;
			break;
		
		case 38:
			return 29;
			break;
		
		case 39:
			return 30;
			break;
		
		case 40:
			return 31;
			break;
		
		case 41:
			return 32;
			break;
		
		case 42:
			return 33;
			break;
		
		case 43:
			return 34;
			break;
		
		case 44:
			return 35;
			break;
		
		case 45:
			return 36;
			break;
		
		case 46:
			return 37;
			break;
		
		case 47:
			return 38;
			break;
		
		case 48:
			return 39;
			break;
		
		case 49:
			return 40;
			break;
		
		case 50:
			return 41;
			break;
		
		case 51:
			return 42;
			break;
		
		case 52:
			return 43;
			break;
		
		case 53:
			return 44;
			break;
		
		case 54:
			return 45;
			break;
		
		case 55:
			return 46;
			break;
		
		case 56:
			return 47;
			break;
		
		case 57:
			return 48;
			break;
		
		case 58:
			return 49;
			break;
		
		case 59:
			return 50;
			break;
		
		case 60:
			return 51;
			break;
		
		case 61:
			return 52;
			break;
		
		case 62:
			return 53;
			break;
		
		case 63:
			return 54;
			break;
		
		case 64:
			return 55;
			break;
		
		case 65:
			return 56;
			break;
		
		case 66:
			return 57;
			break;
		
		case 67:
			return 58;
			break;
		
		case 68:
			return 59;
			break;
		
		case 69:
			return 60;
			break;
		
		case 70:
			return 61;
			break;
		
		case 71:
			return 62;
			break;
		
		case 72:
			return 63;
			break;
		
		case 73:
			return 64;
			break;
		
		case 74:
			return 65;
			break;
		
		case 75:
			return 66;
			break;
		
		case 76:
			return 67;
			break;
		
		case 77:
			return 68;
			break;
		
		case 78:
			return 69;
			break;
		
		case 79:
			return 70;
			break;
		
		case 80:
			return 71;
			break;
		
		case 81:
			return 72;
			break;
		
		case 82:
			return 73;
			break;
		
		case 83:
			return 74;
			break;
		
		case 84:
			return 75;
			break;
		
		case 85:
			return 76;
			break;
		
		case 86:
			return 77;
			break;
		
		case 87:
			return 78;
			break;
		
		case 88:
			return 79;
			break;
		
		case 89:
			return 80;
			break;
		
		case 90:
			return 81;
			break;
		
		case 91:
			return 82;
			break;
		
		case 92:
			return 83;
			break;
		
		case 93:
			return 84;
			break;
		
		case 94:
			return 85;
			break;
		
		case 95:
			return 86;
			break;
		
		case 96:
			return 87;
			break;
		
		case 97:
			return 88;
			break;
		
		case 98:
			return 89;
			break;
		
		case 99:
			return 90;
			break;
		
		case 100:
			return 91;
			break;
		
		case 101:
			return 92;
			break;
		
		case 102:
			return 93;
			break;
		
		case 103:
			return 94;
			break;
		
		case 104:
			return 95;
			break;
		
		case 105:
			return 96;
			break;
		
		case 106:
			return 97;
			break;
		
		case 107:
			return 98;
			break;
		
		case 108:
			return 99;
			break;
		
		case 109:
			return 100;
			break;
		
		case 110:
			return 101;
			break;
		
		case 111:
			return 102;
			break;
		
		case 112:
			return 103;
			break;
		
		case 113:
			return 104;
			break;
		
		case 114:
			return 105;
			break;
		
		case 115:
			return 106;
			break;
		
		case 116:
			return 107;
			break;
		
		case 117:
			return 108;
			break;
		
		case 118:
			return 109;
			break;
		
		case 119:
			return 110;
			break;
		
		case 120:
			return 111;
			break;
		
		case 121:
			return 112;
			break;
		
		case 122:
			return 113;
			break;
		
		case 123:
			return 114;
			break;
		
		case 124:
			return 115;
			break;
		
		case 125:
			return 116;
			break;
		
		case 126:
			return 117;
			break;
		
		case 127:
			return 118;
			break;
		
		case 128:
			return 119;
			break;
		
		case 129:
			return 120;
			break;
		
		case 130:
			return 121;
			break;
		
		case 131:
			return 122;
			break;
		
		case 132:
			return 123;
			break;
		
		case 133:
			return 124;
			break;
		
		case 134:
			return 125;
			break;
		
		case 135:
			return 126;
			break;
		
		case 136:
			return 127;
			break;
		
		case 137:
			return 128;
			break;
		
		case 138:
			return 129;
			break;
		
		case 139:
			return 130;
			break;
		
		case 140:
			return 131;
			break;
		
		case 141:
			return 132;
			break;
		
		case 142:
			return 133;
			break;
		
		case 143:
			return 134;
			break;
		
		case 144:
			return 135;
			break;
		
		case 145:
			return 136;
			break;
		
		case 146:
			return 137;
			break;
		
		case 147:
			return 138;
			break;
		
		case 148:
			return 139;
			break;
		
		case 149:
			return 140;
			break;
		
		case 150:
			return 141;
			break;
		
		case 151:
			return 142;
			break;
		
		case 152:
			return 143;
			break;
		
		case 153:
			return 144;
			break;
		
		case 154:
			return 145;
			break;
		
		case 155:
			return 146;
			break;
		
		case 156:
			return 147;
			break;
		
		case 157:
			return 148;
			break;
		
		case 158:
			return 149;
			break;
		
		case 159:
			return 150;
			break;
		
		case 160:
			return 151;
			break;
		
		case 8:
			return 152;
			break;
		
		case 9:
			return 153;
			break;
		
		case 10:
			return 154;
			break;
		
		case 11:
			return 155;
			break;
		
		case 12:
			return 156;
			break;
		
		case 13:
			return 157;
			break;
		
		case 14:
			return 158;
			break;
		
		case 15:
			return 159;
			break;
		
		case 185:
			return 178;
			break;
		
		case 186:
			return 179;
			break;
		
		case 187:
			return 180;
			break;
		
		case 188:
			return 181;
			break;
		
		case 189:
			return 182;
			break;
		
		case 190:
			return 183;
			break;
		
		case 161:
			return 172;
			break;
		
		case 162:
			return 173;
			break;
		
		case 163:
			return 174;
			break;
		
		case 164:
			return 175;
			break;
		
		case 165:
			return 176;
			break;
		
		case 166:
			return 177;
			break;
		
		case 179:
			return 166;
			break;
		
		case 180:
			return 167;
			break;
		
		case 181:
			return 168;
			break;
		
		case 182:
			return 169;
			break;
		
		case 183:
			return 170;
			break;
		
		case 184:
			return 171;
			break;
		
		case 173:
			return 160;
			break;
		
		case 174:
			return 161;
			break;
		
		case 175:
			return 162;
			break;
		
		case 176:
			return 163;
			break;
		
		case 177:
			return 164;
			break;
		
		case 178:
			return 165;
			break;
		
		case 191:
			return 184;
			break;
		
		case 192:
			return 185;
			break;
		
		case 193:
			return 186;
			break;
		
		case 194:
			return 187;
			break;
		
		case 216:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 195:
			return 196;
			break;
		
		case 196:
			return 197;
			break;
		
		case 197:
			return 198;
			break;
		
		case 198:
			return 199;
			break;
		
		case 199:
			return 200;
			break;
		
		case 200:
			return 201;
			break;
		
		case 201:
			return 202;
			break;
		
		case 202:
			return 189;
			break;
		
		case 203:
			return 190;
			break;
		
		case 204:
			return 191;
			break;
		
		case 205:
			return 192;
			break;
		
		case 206:
			return 193;
			break;
		
		case 207:
			return 194;
			break;
		
		case 208:
			return 195;
			break;
		
		case 209:
			return 217;
			break;
		
		case 210:
			return 218;
			break;
		
		case 211:
			return 219;
			break;
		
		case 212:
			return 220;
			break;
		
		case 213:
			return 221;
			break;
		
		case 214:
			return 222;
			break;
		
		case 215:
			return 223;
			break;
		
		case 224:
			return 210;
			break;
		
		case 225:
			return 211;
			break;
		
		case 226:
			return 212;
			break;
		
		case 227:
			return 213;
			break;
		
		case 228:
			return 214;
			break;
		
		case 229:
			return 215;
			break;
		
		case 230:
			return 216;
			break;
		
		case 217:
			return 203;
			break;
		
		case 218:
			return 204;
			break;
		
		case 219:
			return 205;
			break;
		
		case 220:
			return 206;
			break;
		
		case 221:
			return 207;
			break;
		
		case 222:
			return 208;
			break;
		
		case 223:
			return 209;
			break;
		
		case 232:
			return 231;
			break;
		
		case 233:
			return 232;
			break;
		
		case 234:
			return 233;
			break;
		
		case 235:
			return 234;
			break;
		
		case 236:
			return 235;
			break;
		
		case 237:
			return 236;
			break;
		
		case 231:
			return 237;
			break;
		
		case 238:
			return 245;
			break;
		
		case 239:
			return 246;
			break;
		
		case 240:
			return 247;
			break;
		
		case 241:
			return 248;
			break;
		
		case 242:
			return 249;
			break;
		
		case 243:
			return 250;
			break;
		
		case 244:
			return 251;
			break;
		
		case 245:
			return 252;
			break;
		
		case 246:
			return 253;
			break;
		
		case 247:
			return 254;
			break;
		
		case 248:
			return 224;
			break;
		
		case 249:
			return 225;
			break;
		
		case 250:
			return 226;
			break;
		
		case 251:
			return 227;
			break;
		
		case 252:
			return 228;
			break;
		
		case 253:
			return 229;
			break;
		
		case 254:
			return 230;
			break;
		
		case 255:
			return 255;
			break;
		
		case 256:
			return 256;
			break;
		
		case 257:
			return 257;
			break;
		
		case 258:
			return 258;
			break;
		
		case 259:
			return 259;
			break;
		
		case 260:
			return 260;
			break;
		
		case 261:
			return 261;
			break;
		
		case 262:
			return 262;
			break;
		
		case 263:
			return 263;
			break;
		
		case 264:
			return 264;
			break;
		
		case 265:
			return 265;
			break;
	}
	switch (iParam0)
	{
		case 267:
			return 238;
			break;
		
		case 268:
			return 239;
			break;
		
		case 269:
			return 240;
			break;
		
		case 270:
			return 241;
			break;
		
		case 271:
			return 242;
			break;
		
		case 272:
			return 243;
			break;
		
		case 266:
			return 244;
			break;
		
		case 274:
			return 266;
			break;
		
		case 275:
			return 267;
			break;
		
		case 276:
			return 268;
			break;
		
		case 277:
			return 269;
			break;
		
		case 278:
			return 270;
			break;
		
		case 279:
			return 271;
			break;
		
		case 273:
			return 272;
			break;
		
		case 281:
			return 273;
			break;
		
		case 282:
			return 274;
			break;
		
		case 283:
			return 275;
			break;
		
		case 284:
			return 276;
			break;
		
		case 285:
			return 277;
			break;
		
		case 286:
			return 278;
			break;
		
		case 280:
			return 279;
			break;
		
		case 287:
			return 280;
			break;
		
		case 288:
			return 281;
			break;
		
		case 289:
			return 282;
			break;
		
		case 290:
			return 283;
			break;
		
		case 291:
			return 284;
			break;
		
		case 292:
			return 285;
			break;
		
		case 293:
			return 286;
			break;
		
		case 294:
			return 287;
			break;
		
		case 295:
			return 288;
			break;
		
		case 296:
			return 289;
			break;
		
		case 297:
			return 290;
			break;
		
		case 298:
			return 291;
			break;
		
		case 299:
			return 292;
			break;
		
		case 300:
			return 293;
			break;
		
		case 301:
			return 294;
			break;
		
		case 302:
			return 295;
			break;
		
		case 303:
			return 296;
			break;
		
		case 304:
			return 297;
			break;
		
		case 305:
			return 298;
			break;
		
		case 306:
			return 299;
			break;
		
		case 307:
			return 300;
			break;
		
		case 308:
			return 301;
			break;
		
		case 309:
			return 302;
			break;
		
		case 310:
			return 303;
			break;
		
		case 311:
			return 304;
			break;
		
		case 312:
			return 305;
			break;
		
		case 313:
			return 306;
			break;
		
		case 314:
			return 307;
			break;
		
		case 315:
			return 308;
			break;
		
		case 316:
			return 309;
			break;
		
		case 317:
			return 310;
			break;
		
		case 318:
			return 311;
			break;
		
		case 319:
			return 312;
			break;
		
		case 320:
			return 313;
			break;
		
		case 321:
			return 314;
			break;
		
		case 322:
			return 315;
			break;
		
		case 323:
			return 316;
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 338;
			break;
		
		case 346:
			return 339;
			break;
		
		case 347:
			return 340;
			break;
		
		case 348:
			return 341;
			break;
		
		case 349:
			return 342;
			break;
		
		case 350:
			return 343;
			break;
		
		case 351:
			return 344;
			break;
		
		case 352:
			return 345;
			break;
		
		case 353:
			return 346;
			break;
		
		case 354:
			return 347;
			break;
		
		case 355:
			return 348;
			break;
		
		case 356:
			return 349;
			break;
		
		case 357:
			return 350;
			break;
		
		case 358:
			return 351;
			break;
		
		case 359:
			return 352;
			break;
		
		case 360:
			return 353;
			break;
		
		case 361:
			return 354;
			break;
		
		case 362:
			return 355;
			break;
		
		case 363:
			return 356;
			break;
		
		case 364:
			return 357;
			break;
	}
	switch (iParam0)
	{
		case 325:
			return 317;
			break;
		
		case 326:
			return 318;
			break;
		
		case 327:
			return 319;
			break;
		
		case 328:
			return 320;
			break;
		
		case 329:
			return 321;
			break;
		
		case 330:
			return 322;
			break;
		
		case 324:
			return 323;
			break;
		
		case 332:
			return 324;
			break;
		
		case 333:
			return 325;
			break;
		
		case 334:
			return 326;
			break;
		
		case 335:
			return 327;
			break;
		
		case 336:
			return 328;
			break;
		
		case 337:
			return 329;
			break;
		
		case 331:
			return 330;
			break;
		
		case 366:
			return 370;
			break;
		
		case 367:
			return 371;
			break;
		
		case 368:
			return 372;
			break;
		
		case 369:
			return 373;
			break;
		
		case 370:
			return 374;
			break;
		
		case 371:
			return 375;
			break;
		
		case 365:
			return 376;
			break;
		
		case 338:
			return 358;
			break;
		
		case 339:
			return 359;
			break;
		
		case 340:
			return 360;
			break;
		
		case 341:
			return 361;
			break;
		
		case 342:
			return 362;
			break;
		
		case 343:
			return 363;
			break;
		
		case 344:
			return 364;
			break;
		
		case 372:
			return 365;
			break;
		
		case 373:
			return 366;
			break;
		
		case 374:
			return 367;
			break;
		
		case 375:
			return 368;
			break;
		
		case 376:
			return 369;
			break;
		
		case 377:
			return 383;
			break;
		
		case 378:
			return 377;
			break;
		
		case 379:
			return 378;
			break;
		
		case 380:
			return 379;
			break;
		
		case 381:
			return 380;
			break;
		
		case 382:
			return 381;
			break;
		
		case 383:
			return 382;
			break;
		
		case 384:
			return 384;
			break;
		
		case 385:
			return 385;
			break;
		
		case 386:
			return 386;
			break;
		
		case 387:
			return 387;
			break;
		
		case 388:
			return 388;
			break;
		
		case 389:
			return 389;
			break;
		
		case 390:
			return 390;
			break;
		
		case 391:
			return 405;
			break;
		
		case 392:
			return 406;
			break;
		
		case 393:
			return 407;
			break;
		
		case 394:
			return 408;
			break;
		
		case 395:
			return 409;
			break;
		
		case 396:
			return 410;
			break;
		
		case 397:
			return 397;
			break;
		
		case 405:
			return 391;
			break;
		
		case 406:
			return 392;
			break;
		
		case 407:
			return 393;
			break;
		
		case 408:
			return 394;
			break;
		
		case 409:
			return 395;
			break;
		
		case 410:
			return 396;
			break;
		
		case 411:
			return 397;
			break;
		
		case 398:
			return 398;
			break;
		
		case 399:
			return 399;
			break;
		
		case 400:
			return 400;
			break;
		
		case 401:
			return 401;
			break;
		
		case 402:
			return 402;
			break;
		
		case 403:
			return 403;
			break;
		
		case 404:
			return 404;
			break;
		
		case 412:
			return 412;
			break;
		
		case 413:
			return 413;
			break;
		
		case 414:
			return 414;
			break;
		
		case 415:
			return 415;
			break;
		
		case 416:
			return 416;
			break;
		
		case 417:
			return 417;
			break;
		
		case 418:
			return 418;
			break;
		
		case 419:
			return 419;
			break;
		
		case 420:
			return 420;
			break;
		
		case 421:
			return 421;
			break;
		
		case 422:
			return 422;
			break;
		
		case 423:
			return 423;
			break;
		
		case 424:
			return 424;
			break;
		
		case 425:
			return 425;
			break;
		
		case 426:
			return 433;
			break;
		
		case 427:
			return 434;
			break;
		
		case 428:
			return 435;
			break;
		
		case 429:
			return 436;
			break;
		
		case 430:
			return 437;
			break;
		
		case 431:
			return 438;
			break;
		
		case 432:
			return 439;
			break;
		
		case 433:
			return 426;
			break;
		
		case 434:
			return 427;
			break;
		
		case 435:
			return 428;
			break;
		
		case 436:
			return 429;
			break;
		
		case 437:
			return 430;
			break;
		
		case 438:
			return 431;
			break;
		
		case 439:
			return 432;
			break;
	}
	switch (iParam0)
	{
		case 440:
			return 440;
			break;
		
		case 441:
			return 441;
			break;
		
		case 442:
			return 442;
			break;
		
		case 443:
			return 443;
			break;
		
		case 444:
			return 444;
			break;
		
		case 445:
			return 445;
			break;
		
		case 446:
			return 446;
			break;
		
		case 447:
			return 447;
			break;
		
		case 448:
			return 448;
			break;
		
		case 449:
			return 449;
			break;
		
		case 450:
			return 450;
			break;
		
		case 451:
			return 451;
			break;
		
		case 452:
			return 452;
			break;
		
		case 453:
			return 453;
			break;
		
		case 454:
			return 454;
			break;
		
		case 455:
			return 455;
			break;
		
		case 456:
			return 456;
			break;
		
		case 457:
			return 457;
			break;
		
		case 458:
			return 458;
			break;
		
		case 459:
			return 459;
			break;
		
		case 460:
			return 460;
			break;
		
		case 461:
			return 461;
			break;
		
		case 462:
			return 462;
			break;
		
		case 463:
			return 463;
			break;
		
		case 464:
			return 464;
			break;
		
		case 465:
			return 465;
			break;
		
		case 466:
			return 466;
			break;
		
		case 467:
			return 467;
			break;
		
		case 468:
			return 468;
			break;
		
		case 469:
			return 469;
			break;
		
		case 470:
			return 470;
			break;
	}
	switch (iParam0)
	{
		case 471:
			return 471;
			break;
		
		case 472:
			return 472;
			break;
		
		case 473:
			return 473;
			break;
		
		case 474:
			return 474;
			break;
		
		case 475:
			return 475;
			break;
		
		case 476:
			return 476;
			break;
		
		case 477:
			return 477;
			break;
		
		case 478:
			return 478;
			break;
		
		case 479:
			return 479;
			break;
		
		case 480:
			return 480;
			break;
		
		case 481:
			return 481;
			break;
		
		case 482:
			return 482;
			break;
		
		case 483:
			return 483;
			break;
		
		case 484:
			return 484;
			break;
		
		case 485:
			return 485;
			break;
		
		case 486:
			return 486;
			break;
		
		case 487:
			return 487;
			break;
		
		case 488:
			return 488;
			break;
		
		case 489:
			return 489;
			break;
		
		case 490:
			return 490;
			break;
		
		case 491:
			return 491;
			break;
		
		case 492:
			return 492;
			break;
		
		case 493:
			return 493;
			break;
		
		case 494:
			return 494;
			break;
		
		case 495:
			return 495;
			break;
		
		case 496:
			return 496;
			break;
		
		case 497:
			return 497;
			break;
		
		case 498:
			return 498;
			break;
		
		case 499:
			return 499;
			break;
		
		case 500:
			return 500;
			break;
		
		case 501:
			return 501;
			break;
	}
	switch (iParam0)
	{
		case 502:
			return 502;
			break;
		
		case 503:
			return 503;
			break;
		
		case 504:
			return 504;
			break;
		
		case 505:
			return 505;
			break;
		
		case 506:
			return 506;
			break;
		
		case 507:
			return 507;
			break;
		
		case 508:
			return 508;
			break;
		
		case 509:
			return 509;
			break;
		
		case 510:
			return 510;
			break;
		
		case 511:
			return 511;
			break;
		
		case 512:
			return 512;
			break;
		
		case 513:
			return 513;
			break;
		
		case 514:
			return 514;
			break;
		
		case 515:
			return 515;
			break;
		
		case 516:
			return 516;
			break;
		
		case 517:
			return 517;
			break;
		
		case 518:
			return 518;
			break;
		
		case 519:
			return 519;
			break;
		
		case 520:
			return 520;
			break;
		
		case 521:
			return 521;
			break;
		
		case 522:
			return 522;
			break;
		
		case 523:
			return 523;
			break;
		
		case 524:
			return 524;
			break;
		
		case 525:
			return 525;
			break;
		
		case 526:
			return 526;
			break;
		
		case 527:
			return 527;
			break;
		
		case 528:
			return 528;
			break;
		
		case 529:
			return 529;
			break;
		
		case 530:
			return 530;
			break;
		
		case 531:
			return 531;
			break;
		
		case 532:
			return 532;
			break;
	}
	switch (iParam0)
	{
		case 533:
			return 533;
			break;
		
		case 534:
			return 534;
			break;
		
		case 535:
			return 535;
			break;
		
		case 536:
			return 536;
			break;
		
		case 537:
			return 537;
			break;
		
		case 538:
			return 538;
			break;
		
		case 539:
			return 539;
			break;
		
		case 540:
			return 540;
			break;
		
		case 541:
			return 541;
			break;
		
		case 542:
			return 542;
			break;
		
		case 543:
			return 543;
			break;
		
		case 544:
			return 544;
			break;
		
		case 545:
			return 545;
			break;
		
		case 546:
			return 546;
			break;
		
		case 547:
			return 547;
			break;
		
		case 548:
			return 548;
			break;
		
		case 549:
			return 549;
			break;
		
		case 550:
			return 550;
			break;
		
		case 551:
			return 551;
			break;
		
		case 552:
			return 552;
			break;
		
		case 553:
			return 553;
			break;
		
		case 554:
			return 554;
			break;
		
		case 555:
			return 555;
			break;
		
		case 556:
			return 556;
			break;
		
		case 557:
			return 557;
			break;
		
		case 558:
			return 558;
			break;
		
		case 559:
			return 559;
			break;
		
		case 560:
			return 560;
			break;
		
		case 561:
			return 561;
			break;
		
		case 562:
			return 562;
			break;
		
		case 563:
			return 563;
			break;
	}
	switch (iParam0)
	{
		case 564:
			return 564;
			break;
		
		case 565:
			return 565;
			break;
		
		case 566:
			return 566;
			break;
		
		case 567:
			return 567;
			break;
		
		case 568:
			return 568;
			break;
		
		case 569:
			return 569;
			break;
		
		case 570:
			return 570;
			break;
		
		case 571:
			return 571;
			break;
		
		case 572:
			return 572;
			break;
		
		case 573:
			return 573;
			break;
		
		case 574:
			return 574;
			break;
		
		case 575:
			return 575;
			break;
		
		case 576:
			return 576;
			break;
		
		case 577:
			return 577;
			break;
		
		case 578:
			return 578;
			break;
		
		case 579:
			return 579;
			break;
		
		case 580:
			return 580;
			break;
		
		case 581:
			return 581;
			break;
		
		case 582:
			return 582;
			break;
		
		case 583:
			return 583;
			break;
		
		case 584:
			return 584;
			break;
		
		case 585:
			return 585;
			break;
		
		case 586:
			return 586;
			break;
		
		case 587:
			return 587;
			break;
		
		case 588:
			return 588;
			break;
		
		case 589:
			return 589;
			break;
		
		case 590:
			return 590;
			break;
		
		case 591:
			return 591;
			break;
		
		case 592:
			return 592;
			break;
		
		case 593:
			return 593;
			break;
		
		case 594:
			return 594;
			break;
		
		case 595:
			return 595;
			break;
		
		case 596:
			return 596;
			break;
		
		case 597:
			return 597;
			break;
		
		case 598:
			return 598;
			break;
		
		case 599:
			return 599;
			break;
		
		case 600:
			return 600;
			break;
		
		case 601:
			return 601;
			break;
		
		case 602:
			return 602;
			break;
		
		case 603:
			return 603;
			break;
		
		case 604:
			return 604;
			break;
		
		case 605:
			return 605;
			break;
		
		case 606:
			return 606;
			break;
		
		case 607:
			return 607;
			break;
		
		case 608:
			return 608;
			break;
		
		case 609:
			return 609;
			break;
		
		case 610:
			return 610;
			break;
		
		case 611:
			return 611;
			break;
		
		case 612:
			return 612;
			break;
		
		case 613:
			return 613;
			break;
		
		case 614:
			return 614;
			break;
		
		case 615:
			return 615;
			break;
		
		case 616:
			return 616;
			break;
		
		case 617:
			return 617;
			break;
		
		case 618:
			return 618;
			break;
		
		case 619:
			return 619;
			break;
		
		case 620:
			return 620;
			break;
		
		case 621:
			return 621;
			break;
		
		case 622:
			return 622;
			break;
		
		case 623:
			return 623;
			break;
		
		case 624:
			return 624;
			break;
		
		case 625:
			return 625;
			break;
	}
	switch (iParam0)
	{
		case 626:
			return 626;
			break;
		
		case 627:
			return 627;
			break;
		
		case 628:
			return 628;
			break;
		
		case 629:
			return 629;
			break;
		
		case 630:
			return 630;
			break;
		
		case 631:
			return 631;
			break;
		
		case 632:
			return 632;
			break;
		
		case 633:
			return 633;
			break;
		
		case 634:
			return 634;
			break;
		
		case 635:
			return 635;
			break;
		
		case 636:
			return 636;
			break;
		
		case 637:
			return 637;
			break;
		
		case 638:
			return 638;
			break;
		
		case 639:
			return 639;
			break;
		
		case 640:
			return 640;
			break;
		
		case 641:
			return 641;
			break;
		
		case 642:
			return 642;
			break;
		
		case 643:
			return 643;
			break;
		
		case 644:
			return 644;
			break;
		
		case 645:
			return 645;
			break;
		
		case 646:
			return 646;
			break;
		
		case 647:
			return 647;
			break;
		
		case 648:
			return 648;
			break;
		
		case 649:
			return 649;
			break;
		
		case 650:
			return 650;
			break;
		
		case 651:
			return 651;
			break;
		
		case 652:
			return 652;
			break;
		
		case 653:
			return 653;
			break;
		
		case 654:
			return 654;
			break;
		
		case 655:
			return 655;
			break;
		
		case 656:
			return 656;
			break;
	}
	switch (iParam0)
	{
		case 657:
			return 657;
			break;
		
		case 658:
			return 658;
			break;
		
		case 659:
			return 659;
			break;
		
		case 660:
			return 660;
			break;
		
		case 661:
			return 661;
			break;
		
		case 662:
			return 662;
			break;
		
		case 663:
			return 663;
			break;
		
		case 664:
			return 664;
			break;
		
		case 665:
			return 665;
			break;
		
		case 666:
			return 666;
			break;
		
		case 667:
			return 667;
			break;
		
		case 668:
			return 668;
			break;
		
		case 669:
			return 669;
			break;
		
		case 670:
			return 670;
			break;
		
		case 671:
			return 671;
			break;
		
		case 672:
			return 672;
			break;
		
		case 673:
			return 673;
			break;
		
		case 674:
			return 674;
			break;
		
		case 675:
			return 675;
			break;
		
		case 676:
			return 676;
			break;
		
		case 677:
			return 677;
			break;
		
		case 678:
			return 678;
			break;
		
		case 679:
			return 679;
			break;
		
		case 680:
			return 680;
			break;
		
		case 681:
			return 681;
			break;
		
		case 682:
			return 682;
			break;
		
		case 683:
			return 683;
			break;
		
		case 684:
			return 684;
			break;
		
		case 685:
			return 685;
			break;
		
		case 686:
			return 686;
			break;
		
		case 687:
			return 687;
			break;
	}
	switch (iParam0)
	{
		case 688:
			return 688;
			break;
		
		case 689:
			return 689;
			break;
		
		case 690:
			return 690;
			break;
		
		case 691:
			return 691;
			break;
		
		case 692:
			return 692;
			break;
		
		case 693:
			return 693;
			break;
		
		case 694:
			return 694;
			break;
		
		case 695:
			return 695;
			break;
		
		case 696:
			return 696;
			break;
		
		case 697:
			return 697;
			break;
		
		case 698:
			return 698;
			break;
		
		case 699:
			return 699;
			break;
		
		case 700:
			return 700;
			break;
		
		case 701:
			return 701;
			break;
		
		case 702:
			return 702;
			break;
		
		case 703:
			return 703;
			break;
		
		case 704:
			return 704;
			break;
		
		case 705:
			return 705;
			break;
		
		case 706:
			return 706;
			break;
		
		case 707:
			return 707;
			break;
		
		case 708:
			return 708;
			break;
		
		case 709:
			return 709;
			break;
		
		case 710:
			return 710;
			break;
		
		case 711:
			return 711;
			break;
		
		case 712:
			return 712;
			break;
		
		case 713:
			return 713;
			break;
		
		case 714:
			return 714;
			break;
		
		case 715:
			return 715;
			break;
		
		case 716:
			return 716;
			break;
		
		case 717:
			return 717;
			break;
		
		case 718:
			return 718;
			break;
	}
	switch (iParam0)
	{
		case 719:
			return 719;
			break;
		
		case 720:
			return 720;
			break;
		
		case 721:
			return 721;
			break;
		
		case 722:
			return 722;
			break;
		
		case 723:
			return 723;
			break;
		
		case 724:
			return 724;
			break;
		
		case 725:
			return 725;
			break;
		
		case 726:
			return 726;
			break;
		
		case 727:
			return 727;
			break;
		
		case 728:
			return 728;
			break;
		
		case 729:
			return 729;
			break;
		
		case 730:
			return 730;
			break;
		
		case 731:
			return 731;
			break;
		
		case 732:
			return 732;
			break;
		
		case 733:
			return 733;
			break;
		
		case 734:
			return 734;
			break;
		
		case 735:
			return 735;
			break;
		
		case 736:
			return 736;
			break;
		
		case 737:
			return 737;
			break;
		
		case 738:
			return 738;
			break;
		
		case 739:
			return 739;
			break;
		
		case 740:
			return 740;
			break;
		
		case 741:
			return 741;
			break;
		
		case 742:
			return 742;
			break;
		
		case 743:
			return 743;
			break;
		
		case 744:
			return 744;
			break;
		
		case 745:
			return 745;
			break;
		
		case 746:
			return 746;
			break;
		
		case 747:
			return 747;
			break;
		
		case 748:
			return 748;
			break;
		
		case 749:
			return 749;
			break;
	}
	switch (iParam0)
	{
		case 750:
			return 750;
			break;
		
		case 751:
			return 751;
			break;
		
		case 752:
			return 752;
			break;
		
		case 753:
			return 753;
			break;
		
		case 754:
			return 754;
			break;
		
		case 755:
			return 755;
			break;
		
		case 756:
			return 756;
			break;
		
		case 757:
			return 757;
			break;
		
		case 758:
			return 758;
			break;
		
		case 759:
			return 759;
			break;
		
		case 760:
			return 760;
			break;
		
		case 761:
			return 761;
			break;
		
		case 762:
			return 762;
			break;
		
		case 763:
			return 763;
			break;
		
		case 764:
			return 764;
			break;
		
		case 765:
			return 765;
			break;
		
		case 766:
			return 766;
			break;
		
		case 767:
			return 767;
			break;
		
		case 768:
			return 768;
			break;
		
		case 769:
			return 769;
			break;
		
		case 770:
			return 770;
			break;
		
		case 771:
			return 771;
			break;
		
		case 772:
			return 772;
			break;
		
		case 773:
			return 773;
			break;
		
		case 774:
			return 774;
			break;
		
		case 775:
			return 775;
			break;
		
		case 776:
			return 776;
			break;
		
		case 777:
			return 777;
			break;
		
		case 778:
			return 778;
			break;
		
		case 779:
			return 779;
			break;
		
		case 780:
			return 780;
			break;
	}
	switch (iParam0)
	{
		case 781:
			return 781;
			break;
		
		case 782:
			return 782;
			break;
		
		case 783:
			return 783;
			break;
		
		case 784:
			return 784;
			break;
		
		case 785:
			return 785;
			break;
		
		case 786:
			return 786;
			break;
		
		case 787:
			return 787;
			break;
		
		case 788:
			return 788;
			break;
		
		case 789:
			return 789;
			break;
		
		case 790:
			return 790;
			break;
		
		case 791:
			return 791;
			break;
		
		case 792:
			return 792;
			break;
		
		case 793:
			return 793;
			break;
		
		case 794:
			return 794;
			break;
		
		case 795:
			return 795;
			break;
		
		case 796:
			return 796;
			break;
		
		case 797:
			return 797;
			break;
		
		case 798:
			return 798;
			break;
		
		case 799:
			return 799;
			break;
		
		case 800:
			return 800;
			break;
		
		case 801:
			return 801;
			break;
		
		case 802:
			return 802;
			break;
		
		case 803:
			return 803;
			break;
		
		case 804:
			return 804;
			break;
		
		case 805:
			return 805;
			break;
		
		case 806:
			return 806;
			break;
		
		case 807:
			return 807;
			break;
		
		case 808:
			return 808;
			break;
		
		case 809:
			return 809;
			break;
		
		case 810:
			return 810;
			break;
		
		case 811:
			return 811;
			break;
	}
	switch (iParam0)
	{
		case 812:
			return 874;
			break;
		
		case 813:
			return 875;
			break;
		
		case 814:
			return 876;
			break;
		
		case 815:
			return 877;
			break;
		
		case 816:
			return 878;
			break;
		
		case 817:
			return 879;
			break;
		
		case 818:
			return 880;
			break;
		
		case 819:
			return 881;
			break;
		
		case 820:
			return 882;
			break;
		
		case 821:
			return 883;
			break;
		
		case 822:
			return 884;
			break;
		
		case 823:
			return 885;
			break;
		
		case 824:
			return 886;
			break;
		
		case 825:
			return 887;
			break;
		
		case 826:
			return 888;
			break;
		
		case 827:
			return 889;
			break;
		
		case 828:
			return 890;
			break;
		
		case 829:
			return 891;
			break;
		
		case 830:
			return 892;
			break;
		
		case 831:
			return 893;
			break;
		
		case 832:
			return 894;
			break;
		
		case 833:
			return 895;
			break;
		
		case 834:
			return 896;
			break;
		
		case 835:
			return 897;
			break;
		
		case 836:
			return 898;
			break;
		
		case 837:
			return 899;
			break;
		
		case 838:
			return 900;
			break;
		
		case 839:
			return 901;
			break;
		
		case 840:
			return 902;
			break;
		
		case 841:
			return 903;
			break;
		
		case 842:
			return 904;
			break;
	}
	switch (iParam0)
	{
		case 843:
			return 967;
			break;
		
		case 844:
			return 968;
			break;
		
		case 845:
			return 969;
			break;
		
		case 846:
			return 970;
			break;
		
		case 847:
			return 971;
			break;
		
		case 848:
			return 972;
			break;
		
		case 849:
			return 973;
			break;
		
		case 850:
			return 974;
			break;
		
		case 851:
			return 975;
			break;
		
		case 852:
			return 976;
			break;
		
		case 853:
			return 977;
			break;
		
		case 854:
			return 978;
			break;
		
		case 855:
			return 979;
			break;
		
		case 856:
			return 980;
			break;
		
		case 857:
			return 981;
			break;
		
		case 858:
			return 982;
			break;
		
		case 859:
			return 983;
			break;
		
		case 860:
			return 984;
			break;
		
		case 861:
			return 985;
			break;
		
		case 862:
			return 986;
			break;
		
		case 863:
			return 987;
			break;
		
		case 864:
			return 988;
			break;
		
		case 865:
			return 989;
			break;
		
		case 866:
			return 990;
			break;
		
		case 867:
			return 991;
			break;
		
		case 868:
			return 992;
			break;
		
		case 869:
			return 993;
			break;
		
		case 870:
			return 994;
			break;
		
		case 871:
			return 995;
			break;
		
		case 872:
			return 996;
			break;
		
		case 873:
			return 997;
			break;
	}
	switch (iParam0)
	{
		case 874:
			return 936;
			break;
		
		case 875:
			return 937;
			break;
		
		case 876:
			return 938;
			break;
		
		case 877:
			return 939;
			break;
		
		case 878:
			return 940;
			break;
		
		case 879:
			return 941;
			break;
		
		case 880:
			return 942;
			break;
		
		case 881:
			return 943;
			break;
		
		case 882:
			return 944;
			break;
		
		case 883:
			return 945;
			break;
		
		case 884:
			return 946;
			break;
		
		case 885:
			return 947;
			break;
		
		case 886:
			return 948;
			break;
		
		case 887:
			return 949;
			break;
		
		case 888:
			return 950;
			break;
		
		case 889:
			return 951;
			break;
		
		case 890:
			return 952;
			break;
		
		case 891:
			return 953;
			break;
		
		case 892:
			return 954;
			break;
		
		case 893:
			return 955;
			break;
		
		case 894:
			return 956;
			break;
		
		case 895:
			return 957;
			break;
		
		case 896:
			return 958;
			break;
		
		case 897:
			return 959;
			break;
		
		case 898:
			return 960;
			break;
		
		case 899:
			return 961;
			break;
		
		case 900:
			return 962;
			break;
		
		case 901:
			return 963;
			break;
		
		case 902:
			return 964;
			break;
		
		case 903:
			return 965;
			break;
		
		case 904:
			return 966;
			break;
	}
	switch (iParam0)
	{
		case 905:
			return 843;
			break;
		
		case 906:
			return 844;
			break;
		
		case 907:
			return 845;
			break;
		
		case 908:
			return 846;
			break;
		
		case 909:
			return 847;
			break;
		
		case 910:
			return 848;
			break;
		
		case 911:
			return 849;
			break;
		
		case 912:
			return 850;
			break;
		
		case 913:
			return 851;
			break;
		
		case 914:
			return 852;
			break;
		
		case 915:
			return 853;
			break;
		
		case 916:
			return 854;
			break;
		
		case 917:
			return 855;
			break;
		
		case 918:
			return 856;
			break;
		
		case 919:
			return 857;
			break;
		
		case 920:
			return 858;
			break;
		
		case 921:
			return 859;
			break;
		
		case 922:
			return 860;
			break;
		
		case 923:
			return 861;
			break;
		
		case 924:
			return 862;
			break;
		
		case 925:
			return 863;
			break;
		
		case 926:
			return 864;
			break;
		
		case 927:
			return 865;
			break;
		
		case 928:
			return 866;
			break;
		
		case 929:
			return 867;
			break;
		
		case 930:
			return 868;
			break;
		
		case 931:
			return 869;
			break;
		
		case 932:
			return 870;
			break;
		
		case 933:
			return 871;
			break;
		
		case 934:
			return 872;
			break;
		
		case 935:
			return 873;
			break;
	}
	switch (iParam0)
	{
		case 936:
			return 905;
			break;
		
		case 937:
			return 906;
			break;
		
		case 938:
			return 907;
			break;
		
		case 939:
			return 908;
			break;
		
		case 940:
			return 909;
			break;
		
		case 941:
			return 910;
			break;
		
		case 942:
			return 911;
			break;
		
		case 943:
			return 912;
			break;
		
		case 944:
			return 913;
			break;
		
		case 945:
			return 914;
			break;
		
		case 946:
			return 915;
			break;
		
		case 947:
			return 916;
			break;
		
		case 948:
			return 917;
			break;
		
		case 949:
			return 918;
			break;
		
		case 950:
			return 919;
			break;
		
		case 951:
			return 920;
			break;
		
		case 952:
			return 921;
			break;
		
		case 953:
			return 922;
			break;
		
		case 954:
			return 923;
			break;
		
		case 955:
			return 924;
			break;
		
		case 956:
			return 925;
			break;
		
		case 957:
			return 926;
			break;
		
		case 958:
			return 927;
			break;
		
		case 959:
			return 928;
			break;
		
		case 960:
			return 929;
			break;
		
		case 961:
			return 930;
			break;
		
		case 962:
			return 931;
			break;
		
		case 963:
			return 932;
			break;
		
		case 964:
			return 933;
			break;
		
		case 965:
			return 934;
			break;
		
		case 966:
			return 935;
			break;
	}
	switch (iParam0)
	{
		case 967:
			return 812;
			break;
		
		case 968:
			return 813;
			break;
		
		case 969:
			return 814;
			break;
		
		case 970:
			return 815;
			break;
		
		case 971:
			return 816;
			break;
		
		case 972:
			return 817;
			break;
		
		case 973:
			return 818;
			break;
		
		case 974:
			return 819;
			break;
		
		case 975:
			return 820;
			break;
		
		case 976:
			return 821;
			break;
		
		case 977:
			return 822;
			break;
		
		case 978:
			return 823;
			break;
		
		case 979:
			return 824;
			break;
		
		case 980:
			return 825;
			break;
		
		case 981:
			return 826;
			break;
		
		case 982:
			return 827;
			break;
		
		case 983:
			return 828;
			break;
		
		case 984:
			return 829;
			break;
		
		case 985:
			return 830;
			break;
		
		case 986:
			return 831;
			break;
		
		case 987:
			return 832;
			break;
		
		case 988:
			return 833;
			break;
		
		case 989:
			return 834;
			break;
		
		case 990:
			return 835;
			break;
		
		case 991:
			return 836;
			break;
		
		case 992:
			return 837;
			break;
		
		case 993:
			return 838;
			break;
		
		case 994:
			return 839;
			break;
		
		case 995:
			return 840;
			break;
		
		case 996:
			return 841;
			break;
		
		case 997:
			return 842;
			break;
	}
	switch (iParam0)
	{
		case 998:
			return 1060;
			break;
		
		case 999:
			return 1061;
			break;
		
		case 1000:
			return 1062;
			break;
		
		case 1001:
			return 1063;
			break;
		
		case 1002:
			return 1064;
			break;
		
		case 1003:
			return 1065;
			break;
		
		case 1004:
			return 1066;
			break;
		
		case 1005:
			return 1067;
			break;
		
		case 1006:
			return 1068;
			break;
		
		case 1007:
			return 1069;
			break;
		
		case 1008:
			return 1070;
			break;
		
		case 1009:
			return 1071;
			break;
		
		case 1010:
			return 1072;
			break;
		
		case 1011:
			return 1073;
			break;
		
		case 1012:
			return 1074;
			break;
		
		case 1013:
			return 1075;
			break;
		
		case 1014:
			return 1076;
			break;
		
		case 1015:
			return 1077;
			break;
		
		case 1016:
			return 1078;
			break;
		
		case 1017:
			return 1079;
			break;
		
		case 1018:
			return 1080;
			break;
		
		case 1019:
			return 1081;
			break;
		
		case 1020:
			return 1082;
			break;
		
		case 1021:
			return 1083;
			break;
		
		case 1022:
			return 1084;
			break;
		
		case 1023:
			return 1085;
			break;
		
		case 1024:
			return 1086;
			break;
		
		case 1025:
			return 1087;
			break;
		
		case 1026:
			return 1088;
			break;
		
		case 1027:
			return 1089;
			break;
		
		case 1028:
			return 1090;
			break;
	}
	switch (iParam0)
	{
		case 1029:
			return 1153;
			break;
		
		case 1030:
			return 1154;
			break;
		
		case 1031:
			return 1155;
			break;
		
		case 1032:
			return 1156;
			break;
		
		case 1033:
			return 1157;
			break;
		
		case 1034:
			return 1158;
			break;
		
		case 1035:
			return 1159;
			break;
		
		case 1036:
			return 1160;
			break;
		
		case 1037:
			return 1161;
			break;
		
		case 1038:
			return 1162;
			break;
		
		case 1039:
			return 1163;
			break;
		
		case 1040:
			return 1164;
			break;
		
		case 1041:
			return 1165;
			break;
		
		case 1042:
			return 1166;
			break;
		
		case 1043:
			return 1167;
			break;
		
		case 1044:
			return 1168;
			break;
		
		case 1045:
			return 1169;
			break;
		
		case 1046:
			return 1170;
			break;
		
		case 1047:
			return 1171;
			break;
		
		case 1048:
			return 1172;
			break;
		
		case 1049:
			return 1173;
			break;
		
		case 1050:
			return 1174;
			break;
		
		case 1051:
			return 1175;
			break;
		
		case 1052:
			return 1176;
			break;
		
		case 1053:
			return 1177;
			break;
		
		case 1054:
			return 1178;
			break;
		
		case 1055:
			return 1179;
			break;
		
		case 1056:
			return 1180;
			break;
		
		case 1057:
			return 1181;
			break;
		
		case 1058:
			return 1182;
			break;
		
		case 1059:
			return 1183;
			break;
	}
	switch (iParam0)
	{
		case 1060:
			return 1122;
			break;
		
		case 1061:
			return 1123;
			break;
		
		case 1062:
			return 1124;
			break;
		
		case 1063:
			return 1125;
			break;
		
		case 1064:
			return 1126;
			break;
		
		case 1065:
			return 1127;
			break;
		
		case 1066:
			return 1128;
			break;
		
		case 1067:
			return 1129;
			break;
		
		case 1068:
			return 1130;
			break;
		
		case 1069:
			return 1131;
			break;
		
		case 1070:
			return 1132;
			break;
		
		case 1071:
			return 1133;
			break;
		
		case 1072:
			return 1134;
			break;
		
		case 1073:
			return 1135;
			break;
		
		case 1074:
			return 1136;
			break;
		
		case 1075:
			return 1137;
			break;
		
		case 1076:
			return 1138;
			break;
		
		case 1077:
			return 1139;
			break;
		
		case 1078:
			return 1140;
			break;
		
		case 1079:
			return 1141;
			break;
		
		case 1080:
			return 1142;
			break;
		
		case 1081:
			return 1143;
			break;
		
		case 1082:
			return 1144;
			break;
		
		case 1083:
			return 1145;
			break;
		
		case 1084:
			return 1146;
			break;
		
		case 1085:
			return 1147;
			break;
		
		case 1086:
			return 1148;
			break;
		
		case 1087:
			return 1149;
			break;
		
		case 1088:
			return 1150;
			break;
		
		case 1089:
			return 1151;
			break;
		
		case 1090:
			return 1152;
			break;
	}
	switch (iParam0)
	{
		case 1153:
			return 1029;
			break;
		
		case 1154:
			return 1030;
			break;
		
		case 1155:
			return 1031;
			break;
		
		case 1156:
			return 1032;
			break;
		
		case 1157:
			return 1033;
			break;
		
		case 1158:
			return 1034;
			break;
		
		case 1159:
			return 1035;
			break;
		
		case 1160:
			return 1036;
			break;
		
		case 1161:
			return 1037;
			break;
		
		case 1162:
			return 1038;
			break;
		
		case 1163:
			return 1039;
			break;
		
		case 1164:
			return 1040;
			break;
		
		case 1165:
			return 1041;
			break;
		
		case 1166:
			return 1042;
			break;
		
		case 1167:
			return 1043;
			break;
		
		case 1168:
			return 1044;
			break;
		
		case 1169:
			return 1045;
			break;
		
		case 1170:
			return 1046;
			break;
		
		case 1171:
			return 1047;
			break;
		
		case 1172:
			return 1048;
			break;
		
		case 1173:
			return 1049;
			break;
		
		case 1174:
			return 1050;
			break;
		
		case 1175:
			return 1051;
			break;
		
		case 1176:
			return 1052;
			break;
		
		case 1177:
			return 1053;
			break;
		
		case 1178:
			return 1054;
			break;
		
		case 1179:
			return 1055;
			break;
		
		case 1180:
			return 1056;
			break;
		
		case 1181:
			return 1057;
			break;
		
		case 1182:
			return 1058;
			break;
		
		case 1183:
			return 1059;
			break;
	}
	switch (iParam0)
	{
		case 1122:
			return 1091;
			break;
		
		case 1123:
			return 1092;
			break;
		
		case 1124:
			return 1093;
			break;
		
		case 1125:
			return 1094;
			break;
		
		case 1126:
			return 1095;
			break;
		
		case 1127:
			return 1096;
			break;
		
		case 1128:
			return 1097;
			break;
		
		case 1129:
			return 1098;
			break;
		
		case 1130:
			return 1099;
			break;
		
		case 1131:
			return 1100;
			break;
		
		case 1132:
			return 1101;
			break;
		
		case 1133:
			return 1102;
			break;
		
		case 1134:
			return 1103;
			break;
		
		case 1135:
			return 1104;
			break;
		
		case 1136:
			return 1105;
			break;
		
		case 1137:
			return 1106;
			break;
		
		case 1138:
			return 1107;
			break;
		
		case 1139:
			return 1108;
			break;
		
		case 1140:
			return 1109;
			break;
		
		case 1141:
			return 1110;
			break;
		
		case 1142:
			return 1111;
			break;
		
		case 1143:
			return 1112;
			break;
		
		case 1144:
			return 1113;
			break;
		
		case 1145:
			return 1114;
			break;
		
		case 1146:
			return 1115;
			break;
		
		case 1147:
			return 1116;
			break;
		
		case 1148:
			return 1117;
			break;
		
		case 1149:
			return 1118;
			break;
		
		case 1150:
			return 1119;
			break;
		
		case 1151:
			return 1120;
			break;
		
		case 1152:
			return 1121;
			break;
	}
	switch (iParam0)
	{
		case 1091:
			return 998;
			break;
		
		case 1092:
			return 999;
			break;
		
		case 1093:
			return 1000;
			break;
		
		case 1094:
			return 1001;
			break;
		
		case 1095:
			return 1002;
			break;
		
		case 1096:
			return 1003;
			break;
		
		case 1097:
			return 1004;
			break;
		
		case 1098:
			return 1005;
			break;
		
		case 1099:
			return 1006;
			break;
		
		case 1100:
			return 1007;
			break;
		
		case 1101:
			return 1008;
			break;
		
		case 1102:
			return 1009;
			break;
		
		case 1103:
			return 1010;
			break;
		
		case 1104:
			return 1011;
			break;
		
		case 1105:
			return 1012;
			break;
		
		case 1106:
			return 1013;
			break;
		
		case 1107:
			return 1014;
			break;
		
		case 1108:
			return 1015;
			break;
		
		case 1109:
			return 1016;
			break;
		
		case 1110:
			return 1017;
			break;
		
		case 1111:
			return 1018;
			break;
		
		case 1112:
			return 1019;
			break;
		
		case 1113:
			return 1020;
			break;
		
		case 1114:
			return 1021;
			break;
		
		case 1115:
			return 1022;
			break;
		
		case 1116:
			return 1023;
			break;
		
		case 1117:
			return 1024;
			break;
		
		case 1118:
			return 1025;
			break;
		
		case 1119:
			return 1026;
			break;
		
		case 1120:
			return 1027;
			break;
		
		case 1121:
			return 1028;
			break;
	}
	return 146;
}

var func_407(int iParam0, int iParam1)//Position - 0x3DFF0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_405(iParam1);
	iVar2 = func_408(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &uVar0, -1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &uVar0, -1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &uVar0, -1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &uVar0, -1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &uVar0, -1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &uVar0, -1);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &uVar0, -1);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &uVar0, -1);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &uVar0, -1);
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &uVar0, -1);
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &uVar0, -1);
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &uVar0, -1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 1:
					unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_12"), &uVar0, -1);
					break;
				
				case 2:
					unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_12"), &uVar0, -1);
					break;
			}
			break;
		
		default:
			break;
	}
	return uVar0;
}

int func_408(int iParam0)//Position - 0x3E43E
{
	return (iParam0 / 32);
}

bool func_409(int iParam0, int iParam1)//Position - 0x3E44B
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar0 = func_410(iParam0, iParam1);
	iVar1 = func_405(iParam0);
	return unk_0xC80D31E4B587871C(iVar0, func_404(iVar1));
}

int func_410(int iParam0, int iParam1)//Position - 0x3E47C
{
	int iVar0;
	
	iVar0 = func_29(func_411(iParam0), iParam1, 0);
	return iVar0;
}

int func_411(int iParam0)//Position - 0x3E495
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_405(iParam0);
	iVar1 = func_50(iVar0);
	if ((func_33() == 0 || func_49() == 0) || (func_33() == 999 && func_49() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 798;
				break;
			
			case 1:
				return 799;
				break;
			
			case 2:
				return 800;
				break;
			
			case 3:
				return 801;
				break;
			
			case 4:
				return 802;
				break;
			
			case 5:
				return 803;
				break;
			
			case 6:
				return 804;
				break;
			
			case 7:
				return 805;
				break;
			
			case 8:
				return 806;
				break;
			
			case 9:
				return 2049;
				break;
			
			case 10:
				return 2061;
				break;
			
			case 11:
				return 2088;
				break;
			
			case 12:
				return 2420;
				break;
			
			case 13:
				return 2939;
				break;
			
			case 14:
				return 5496;
				break;
			
			case 15:
				return 5500;
				break;
			
			case 16:
				return 5504;
				break;
			
			case 17:
				return 5508;
				break;
			
			case 18:
				return 5512;
				break;
			
			case 19:
				return 5516;
				break;
			
			case 20:
				return 5576;
				break;
			
			case 21:
				return 5580;
				break;
			
			case 22:
				return 5584;
				break;
			
			case 23:
				return 5588;
				break;
			
			case 24:
				return 5592;
				break;
			
			case 25:
				return 5596;
				break;
			
			case 26:
				return 5600;
				break;
			
			case 27:
				return 5621;
				break;
			
			case 28:
				return 5625;
				break;
			
			case 29:
				return 5629;
				break;
			
			case 30:
				return 5633;
				break;
			
			case 31:
				return 5637;
				break;
			
			case 32:
				return 5641;
				break;
			
			case 33:
				return 6451;
				break;
			
			case 34:
				return 6455;
				break;
			
			case 35:
				return 6459;
				break;
			
			case 36:
				return 6463;
				break;
			
			case 37:
				return 6467;
				break;
			
			case 38:
				return 6471;
				break;
			
			case 39:
				return 6475;
				break;
			}
	}
	return 7872;
}

int func_412(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3E73F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_118(iParam0, &iVar2, iParam2))
	{
		if (Global_70856)
		{
			iVar1 = func_109(iParam2, iParam3);
			if (iVar1 != 0)
			{
				if (func_409(iVar1, -1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		*iParam1 = iParam3 == iParam4;
	}
	return iVar0;
}

int func_413(int iParam0, int iParam1)//Position - 0x3E788
{
	if (func_231(iParam1) && (func_102(iParam0) || func_169(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_414(int iParam0)//Position - 0x3E7B5
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

bool func_415(int iParam0, bool bParam1)//Position - 0x3E7CE
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_416(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_44(iVar1));
}

int func_416(int iParam0)//Position - 0x3E7FE
{
	int iVar0;
	
	iVar0 = func_29(func_417(iParam0), -1, 0);
	return iVar0;
}

int func_417(var uParam0)//Position - 0x3E816
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_50(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1287;
			break;
	}
	return 1287;
}

int func_418(int iParam0, int iParam1, int iParam2)//Position - 0x3E843
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			if (func_231(Local_148))
			{
				if (func_76(iParam0) && func_43(func_103(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 440;
							break;
						
						case 2:
							return 441;
							break;
						
						case 3:
							return 442;
							break;
						
						case 4:
							return 443;
							break;
						
						case 5:
							return 444;
							break;
						
						case 6:
							return 445;
							break;
						
						case 7:
							return 446;
							break;
						
						case 8:
							return 447;
							break;
						
						case 9:
							return 448;
							break;
						
						case 10:
							return 449;
							break;
						
						case 11:
							return 450;
							break;
						
						case 12:
							return 451;
							break;
						
						case 13:
							return 452;
							break;
						
						case 14:
							return 453;
							break;
						
						case 15:
							return 454;
							break;
						
						case 16:
							return 455;
							break;
						
						case 17:
							return 456;
							break;
						
						case 18:
							return 457;
							break;
						
						case 19:
							return 458;
							break;
						
						case 20:
							return 459;
							break;
						
						case 21:
							return 460;
							break;
						
						case 22:
							return 461;
							break;
						
						case 23:
							return 462;
							break;
						
						case 24:
							return 463;
							break;
						
						case 25:
							return 464;
							break;
						
						case 26:
							return 465;
							break;
						
						case 27:
							return 466;
							break;
						
						case 28:
							return 467;
							break;
						
						case 29:
							return 468;
							break;
						
						case 30:
							return 469;
							break;
						
						case 31:
							return 470;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 76;
							break;
						
						case 2:
							return 16;
							break;
						
						case 3:
							return 136;
							break;
						
						case 4:
							return 56;
							break;
						
						case 5:
							return 116;
							break;
						
						case 6:
							return 96;
							break;
						
						case 7:
							return 36;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 76;
						break;
					
					case 2:
						return 16;
						break;
					
					case 3:
						return 136;
						break;
					
					case 4:
						return 56;
						break;
					
					case 5:
						return 116;
						break;
					
					case 6:
						return 96;
						break;
					
					case 7:
						return 36;
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 77;
					break;
				
				case 2:
					return 17;
					break;
				
				case 3:
					return 137;
					break;
				
				case 4:
					return 57;
					break;
				
				case 5:
					return 117;
					break;
				
				case 6:
					return 97;
					break;
				
				case 7:
					return 37;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 78;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 138;
					break;
				
				case 4:
					return 58;
					break;
				
				case 5:
					return 118;
					break;
				
				case 6:
					return 98;
					break;
				
				case 7:
					return 38;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					return 79;
					break;
				
				case 2:
					return 19;
					break;
				
				case 3:
					return 139;
					break;
				
				case 4:
					return 59;
					break;
				
				case 5:
					return 119;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 39;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_231(Local_148))
			{
				if (func_76(iParam0) && func_43(func_103(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 471;
							break;
						
						case 2:
							return 472;
							break;
						
						case 3:
							return 473;
							break;
						
						case 4:
							return 474;
							break;
						
						case 5:
							return 475;
							break;
						
						case 6:
							return 476;
							break;
						
						case 7:
							return 477;
							break;
						
						case 8:
							return 478;
							break;
						
						case 9:
							return 479;
							break;
						
						case 10:
							return 480;
							break;
						
						case 11:
							return 481;
							break;
						
						case 12:
							return 482;
							break;
						
						case 13:
							return 483;
							break;
						
						case 14:
							return 484;
							break;
						
						case 15:
							return 485;
							break;
						
						case 16:
							return 486;
							break;
						
						case 17:
							return 487;
							break;
						
						case 18:
							return 488;
							break;
						
						case 19:
							return 489;
							break;
						
						case 20:
							return 490;
							break;
						
						case 21:
							return 491;
							break;
						
						case 22:
							return 492;
							break;
						
						case 23:
							return 493;
							break;
						
						case 24:
							return 494;
							break;
						
						case 25:
							return 495;
							break;
						
						case 26:
							return 496;
							break;
						
						case 27:
							return 497;
							break;
						
						case 28:
							return 498;
							break;
						
						case 29:
							return 499;
							break;
						
						case 30:
							return 500;
							break;
						
						case 31:
							return 501;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 80;
							break;
						
						case 2:
							return 20;
							break;
						
						case 3:
							return 140;
							break;
						
						case 4:
							return 60;
							break;
						
						case 5:
							return 120;
							break;
						
						case 6:
							return 100;
							break;
						
						case 7:
							return 40;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						break;
					
					case 1:
						return 80;
						break;
					
					case 2:
						return 20;
						break;
					
					case 3:
						return 140;
						break;
					
					case 4:
						return 60;
						break;
					
					case 5:
						return 120;
						break;
					
					case 6:
						return 100;
						break;
					
					case 7:
						return 40;
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_231(Local_148))
			{
				if (func_76(iParam0) && func_43(func_103(iParam0), iParam0, -1))
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 564;
							break;
						
						case 2:
							return 565;
							break;
						
						case 3:
							return 566;
							break;
						
						case 4:
							return 567;
							break;
						
						case 5:
							return 568;
							break;
						
						case 6:
							return 569;
							break;
						
						case 7:
							return 570;
							break;
						
						case 8:
							return 571;
							break;
						
						case 9:
							return 572;
							break;
						
						case 10:
							return 573;
							break;
						
						case 11:
							return 574;
							break;
						
						case 12:
							return 575;
							break;
						
						case 13:
							return 576;
							break;
						
						case 14:
							return 577;
							break;
						
						case 15:
							return 578;
							break;
						
						case 16:
							return 579;
							break;
						
						case 17:
							return 580;
							break;
						
						case 18:
							return 581;
							break;
						
						case 19:
							return 582;
							break;
						
						case 20:
							return 583;
							break;
						
						case 21:
							return 584;
							break;
						
						case 22:
							return 585;
							break;
						
						case 23:
							return 586;
							break;
						
						case 24:
							return 587;
							break;
						
						case 25:
							return 588;
							break;
						
						case 26:
							return 589;
							break;
						
						case 27:
							return 590;
							break;
						
						case 28:
							return 591;
							break;
						
						case 29:
							return 592;
							break;
						
						case 30:
							return 593;
							break;
						
						case 31:
							return 594;
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							break;
						
						case 1:
							return 81;
							break;
						
						case 2:
							return 21;
							break;
						
						case 3:
							return 141;
							break;
						
						case 4:
							return 61;
							break;
						
						case 5:
							return 121;
							break;
						
						case 6:
							return 101;
							break;
						
						case 7:
							return 41;
							break;
						}
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
					
		