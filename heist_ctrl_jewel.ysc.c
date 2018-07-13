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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_61 = 0;
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
	var uLocal_72 = 0;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_254 = -1;
	if (unk_0x7D9C4B359376D38A(82))
	{
		func_235();
	}
	func_234(3);
	func_223(&(Local_46.f_1), func_233(Global_89007[1 /*19*/], Global_89007[2 /*19*/]));
	func_222(&Local_46, 0);
	while (!func_221(4))
	{
		if (!Global_71125)
		{
			if (!func_220(86) && !func_219(14))
			{
				func_208(&Local_46, 32f, 35f);
			}
			else if (unk_0xC80D31E4B587871C(Local_46.f_449, 0))
			{
				func_206(&Local_46);
			}
			if (unk_0xC80D31E4B587871C(Local_46.f_449, 0))
			{
				if (func_205() == 86)
				{
					while (!func_206(&Local_46))
					{
						system::wait(0);
					}
				}
			}
			func_203(&Local_46);
			func_194();
			func_145();
			if (func_143(0) || unk_0xC80D31E4B587871C(Local_46.f_449, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (unk_0x8F38E94BBF3404CD(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		system::wait(0);
	}
	func_1(3);
	func_235();
}

int func_1(int iParam0)//Position - 0x185
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1DF
{
	int iVar0;
	
	if (Global_71116)
	{
		return;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return;
	}
	iVar0 = system::round((1f + (1000f * system::timestep())));
	Global_89198.f_8 = (Global_89198.f_8 + iVar0);
}

void func_3(var uParam0)//Position - 0x221
{
	if (unk_0xC80D31E4B587871C(Global_88986, *uParam0))
	{
		if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 15);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 16);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 14);
			unk_0x0EE72DB1CD8A3B86(&Global_88986, *uParam0);
		}
	}
}

void func_4(var uParam0)//Position - 0x270
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_464 && !(iVar1 == 2 && uParam0->f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_464 == 4))
	{
		if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_464 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x2FE
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_64(uParam0);
			uParam0->f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x330
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 5);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 5);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_417, iParam2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 5);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x53C562FD2B9E3AB0();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 5);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 4);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 9);
			uParam0->f_457 = unk_0x53C562FD2B9E3AB0();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
			Global_104555.f_1.f_6[*uParam0] = 1;
			unk_0x3E80C2F7BC665259(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 5);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 4);
			uParam0->f_457 = unk_0x53C562FD2B9E3AB0();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)//Position - 0x45D
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0x715308393E136EA8(2, 13, true);
	sVar1 = unk_0x715308393E136EA8(2, 11, true);
	sVar2 = unk_0xC9C4B2A22DE54C69(0, 32, true);
	sVar3 = unk_0x715308393E136EA8(0, 1, true);
	sVar4 = unk_0xC9C4B2A22DE54C69(2, 201, true);
	sVar5 = unk_0xC9C4B2A22DE54C69(2, 202, true);
	if (unk_0x4C4813CAAD70E814(2))
	{
		sVar0 = unk_0x715308393E136EA8(2, 6, true);
		sVar1 = unk_0x715308393E136EA8(2, 7, true);
		sVar2 = unk_0x715308393E136EA8(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_MAX_WIDTH");
	unk_0x9499D7329FB840A2(0,6f);
	unk_0x271AA5469AF471B3();
	switch (uParam0->f_464)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				if (bVar6)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					unk_0x271AA5469AF471B3();
				}
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			break;
		
		case 1:
			unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x271AA5469AF471B3();
				if (*uParam0 == 2)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x271AA5469AF471B3();
				}
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			break;
		
		case 3:
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				if (unk_0xC80D31E4B587871C(uParam0->f_449, 9))
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x271AA5469AF471B3();
					unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x271AA5469AF471B3();
				}
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			break;
		
		case 4:
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				unk_0x271AA5469AF471B3();
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0x271AA5469AF471B3();
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0x271AA5469AF471B3();
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0x271AA5469AF471B3();
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0x271AA5469AF471B3();
				unk_0x008F3E3CC076EA0E(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			break;
	}
}

void func_8(char* sParam0)//Position - 0x939
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_9(char* sParam0)//Position - 0x94B
{
	unk_0x8686005F83E832AE(sParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x959
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

void func_11(var uParam0, bool bParam1)//Position - 0x9A6
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 18);
		if (((!func_12(&(uParam0->f_1.f_20[0 /*4*/])) && !func_12(&(uParam0->f_1.f_20[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
		{
			unk_0x3E80C2F7BC665259(0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 18);
	}
}

int func_12(char* sParam0)//Position - 0xA1B
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_13(char* sParam0, int iParam1)//Position - 0xA2E
{
	int iVar0;
	int iVar1;
	
	if (Global_103195 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x64F06B8ECC39BBC2())
		{
			unk_0x3E80C2F7BC665259(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_104555.f_20380.f_145 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_104555.f_20380.f_145 - 1));
			Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()//Position - 0xADB
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

void func_15(int iParam0)//Position - 0xBFB
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, int iParam1)//Position - 0xC95
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

void func_17(var uParam0)//Position - 0xDA5
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415);
	unk_0x271AA5469AF471B3();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(8);
			unk_0x271AA5469AF471B3();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(9);
			unk_0x271AA5469AF471B3();
		}
	}
	Var1 = (uParam0->f_1.f_16 + uParam0->f_1.f_18);
	Var1.f_1 = (uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)//Position - 0xE78
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 7))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_104555.f_1[*uParam0])
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_20[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_20[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_20[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_104555.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xF491DD47B88AA84E())
					{
						if (((!unk_0xC80D31E4B587871C(uParam0->f_449, 11) && !unk_0xC80D31E4B587871C(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
						{
							unk_0x67129637F30DEB3F("PB_H_CHOICE");
							unk_0x376CFA11DE0FE521(0, 1, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_104555.f_1.f_6[*uParam0])
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_108[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_108[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_108[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_104555.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xF491DD47B88AA84E())
					{
						if (!unk_0xC80D31E4B587871C(uParam0->f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_417 < 5)
								{
									if (((!unk_0xC80D31E4B587871C(uParam0->f_449, 11) && !unk_0xC80D31E4B587871C(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0)
									{
										switch (Global_89007[iVar0 /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												unk_0x67129637F30DEB3F("PB_H_GUNM");
												unk_0x376CFA11DE0FE521(0, 1, false, -1);
												break;
											
											case 2:
												unk_0x67129637F30DEB3F("PB_H_HACK");
												unk_0x376CFA11DE0FE521(0, 1, false, -1);
												break;
											
											case 3:
												unk_0x67129637F30DEB3F("PB_H_DRIV");
												unk_0x376CFA11DE0FE521(0, 1, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()//Position - 0x10ED
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x110F
{
	if (Global_104555.f_20380.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x112C
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x114D
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
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)//Position - 0x1320
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_1.f_303, iParam1))
	{
		if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_280[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_1.f_303), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x137A
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!unk_0xAB019B170BF1309C(&Param2))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param2 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam3;
		uParam0->f_483++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)//Position - 0x13DA
{
	vector3 vVar0;
	
	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = unk_0x53C562FD2B9E3AB0() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_411)) };
	func_26(&(uParam0->f_649), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam2)//Position - 0x141F
{
	uParam0->f_11 = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)//Position - 0x143E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * system::cos((90f - fVar6))), (fVar4 * system::sin((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0xD73DFB66C3B7531F((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_649.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0xD73DFB66C3B7531F((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0,95f), fVar14, (-fVar9 * 0,85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1523
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (system::to_float(*uParam1) / system::to_float(iVar0));
	*uParam3 = (system::to_float(uParam1->f_1) / system::to_float(iVar1));
}

int func_29(int iParam0, int iParam1)//Position - 0x158E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1674
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)//Position - 0x16C5
{
	int iVar0;
	
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "CREATE_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415);
	unk_0xD07D5CD276368D36(1);
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_16));
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_16.f_1));
	unk_0x271AA5469AF471B3();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(2);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(1);
			unk_0xD07D5CD276368D36(1);
			unk_0x271AA5469AF471B3();
			break;
		
		case 1:
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(3);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(1);
			unk_0xD07D5CD276368D36(4);
			unk_0x271AA5469AF471B3();
			break;
		
		case 3:
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(6);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(1);
			unk_0xD07D5CD276368D36(7);
			unk_0x271AA5469AF471B3();
			break;
		
		case 4:
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(8);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415);
			unk_0xD07D5CD276368D36(1);
			unk_0xD07D5CD276368D36(9);
			unk_0x271AA5469AF471B3();
			break;
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415);
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415);
	unk_0x1869584A8A72FEDD(func_32(*uParam0, uParam0->f_1.f_29));
	unk_0x271AA5469AF471B3();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
		unk_0xD07D5CD276368D36(uParam0->f_415);
		unk_0x271AA5469AF471B3();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(8);
			unk_0x271AA5469AF471B3();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(9);
			unk_0x271AA5469AF471B3();
		}
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
		unk_0xD07D5CD276368D36(99);
		unk_0x271AA5469AF471B3();
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0x1932
{
	return unk_0xC80D31E4B587871C(Global_104555.f_1.f_120[iParam0], iParam1);
}

void func_33(var uParam0)//Position - 0x194C
{
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0x271AA5469AF471B3();
}

void func_34(var uParam0)//Position - 0x1B4E
{
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xD07D5CD276368D36(uParam0->f_415);
	unk_0x271AA5469AF471B3();
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x1B70
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_89007[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_417);
	func_36(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x1869584A8A72FEDD(true);
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
	func_25(uParam0, &(uParam0->f_1.f_97[iParam1 /*2*/]), uParam0->f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_418[iVar2] != iParam2)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
			unk_0xD07D5CD276368D36(9);
			unk_0x271AA5469AF471B3();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1CA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_89007[iVar1 /*19*/].f_1[iParam1];
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "CREATE_VIEW");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0xD07D5CD276368D36(0);
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_97[iParam1 /*2*/]));
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	unk_0x271AA5469AF471B3();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_104555.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_104555.f_1.f_12[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_413, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_104555.f_1.f_12[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
		unk_0xD07D5CD276368D36(iParam1);
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	else
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
		unk_0xD07D5CD276368D36(iParam1);
		unk_0x1869584A8A72FEDD(false);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

int func_37(var uParam0, int iParam1)//Position - 0x1E30
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_417)
	{
		if (Global_104555.f_1.f_12[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1E75
{
	return unk_0xC80D31E4B587871C(Global_104555.f_1.f_118, iParam0);
}

bool func_39(int iParam0)//Position - 0x1E8B
{
	return unk_0xC80D31E4B587871C(Global_104555.f_1.f_116, iParam0);
}

int func_40(int iParam0)//Position - 0x1EA1
{
	return Global_88853[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EB1
{
	unk_0x008F3E3CC076EA0E(iParam0, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(iParam2);
	unk_0xD07D5CD276368D36(iParam3);
	unk_0xD07D5CD276368D36(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0xD07D5CD276368D36(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0xD07D5CD276368D36(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0xD07D5CD276368D36(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0xD07D5CD276368D36(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0xD07D5CD276368D36(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0xD07D5CD276368D36(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0xD07D5CD276368D36(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0xD07D5CD276368D36(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0xD07D5CD276368D36(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0xD07D5CD276368D36(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0xD07D5CD276368D36(func_42(iParam1));
	unk_0x271AA5469AF471B3();
}

var func_42(int iParam0)//Position - 0x1FED
{
	return Global_88853[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)//Position - 0x1FFF
{
	return system::round(((system::to_float(func_45(iParam0, iParam1)) / system::to_float(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)//Position - 0x2028
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x2062
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x2080
{
	return func_47(iParam1, Global_104555.f_1.f_73[iParam0 /*3*/].f_1, Global_104555.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x20AA
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return system::shift_right(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return system::shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)//Position - 0x20FE
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)//Position - 0x210D
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)//Position - 0x21F0
{
	return system::round(((system::to_float(func_52(iParam0, iParam1)) / system::to_float(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)//Position - 0x2219
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x2253
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)//Position - 0x2271
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)//Position - 0x2280
{
	return system::round(((system::to_float(func_56(iParam0, iParam1)) / system::to_float(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)//Position - 0x22A9
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x22F2
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)//Position - 0x2310
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)//Position - 0x231F
{
	switch (Global_88853[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)//Position - 0x2368
{
	return func_60(iParam0);
}

char* func_60(int iParam0)//Position - 0x2376
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)//Position - 0x2459
{
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xD07D5CD276368D36(iParam1);
	unk_0x271AA5469AF471B3();
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x2478
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(Global_89007[iParam1 /*19*/].f_18, iParam2))
	{
		if (!unk_0x74C475EB8E73D398(&(Global_89007[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_276, Global_89007[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0x872F1C1F8587CCC7(&(Global_89007[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x74C475EB8E73D398(&(Global_89007[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_89007[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x872F1C1F8587CCC7(&(Global_89007[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)//Position - 0x2523
{
	func_25(uParam0, &(uParam0->f_1.f_12), 45f);
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xD07D5CD276368D36(99);
	unk_0x271AA5469AF471B3();
	func_18(uParam0);
}

void func_64(var uParam0)//Position - 0x2559
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xD07D5CD276368D36(99);
			unk_0x271AA5469AF471B3();
			break;
	}
	unk_0x3E80C2F7BC665259(0);
}

int func_65(int iParam0)//Position - 0x259C
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_205[iParam0];
}

int func_66(int iParam0)//Position - 0x25C9
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)//Position - 0x261A
{
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x2635
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!unk_0xC80D31E4B587871C(uParam0->f_449, 2))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), uParam0->f_401) < 4f)
					{
						vVar1 = { uParam0->f_401 - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
						fVar3 = unk_0xE97272C977DEADD3((uParam0->f_404 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_404;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0xE97272C977DEADD3((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_404 - fVar2) < fVar3)
								{
									fVar3 = unk_0xE97272C977DEADD3((uParam0->f_404 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0xE97272C977DEADD3((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				func_132(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_131(uParam0->f_451, 1))
			{
				func_129(&(uParam0->f_451));
				func_115(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_129(&(uParam0->f_451));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_77(uParam0);
		if (((!bVar5 && uParam0->f_453 > 15) && (unk_0xE8C126B7ADBB9D63(2, iLocal_36) || unk_0xE8C126B7ADBB9D63(2, 238))) || unk_0xC80D31E4B587871C(uParam0->f_449, 8))
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)//Position - 0x2854
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_453 = 0;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0f, (1f * system::cos((180f - uParam0->f_404))), (1f * system::sin((180f - uParam0->f_404)))) };
			unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uParam0->f_404);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1871534317, false, 0, 0);
			unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 134);
	}
	unk_0x9B47B379EE749C38(true);
	func_72(0);
	func_71();
	unk_0xC67DD237DAB62CE2();
	unk_0x3B235F54BDEDFCB5(17);
	unk_0xAA3BA69ADAA21CD9(0);
	func_70(&(uParam0->f_649), 0, 1);
	func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	unk_0x3E80C2F7BC665259(1);
	while (unk_0xF491DD47B88AA84E())
	{
		unk_0x3E80C2F7BC665259(1);
		system::wait(0);
	}
	iVar1 = unk_0xD3BB1A515B0A47F3(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0xA1451353A1AED1A5(iVar1);
	}
	unk_0xF960DC0A7CFDD155();
	func_64(uParam0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 7);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 2);
	Global_88985 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)//Position - 0x29D9
{
	if (unk_0x8EA3C8E091EA5BA4(*uParam0))
	{
		if (bParam2)
		{
			unk_0x3458550DF8E9B453(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0xD85097DDDA5447BE(*uParam0))
		{
			unk_0x7849794435F39D49(*uParam0, false);
		}
		unk_0x02934BABFD4CD384(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0xB51C090E561B758E();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_71()//Position - 0x2A73
{
	Global_17162.f_5 = 0;
}

void func_72(bool bParam0)//Position - 0x2A81
{
	if (bParam0)
	{
		func_76();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
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

void func_73(int iParam0)//Position - 0x2AE4
{
	if (Global_14615)
	{
		func_75(0, 0);
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
	if (!func_74())
	{
		Global_14453.f_1 = 3;
	}
}

int func_74()//Position - 0x2B54
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)//Position - 0x2B7B
{
	if (bParam0)
	{
		if (func_142(0))
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

void func_76()//Position - 0x2BEF
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_77(var uParam0)//Position - 0x2C18
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = unk_0x715308393E136EA8(0, 1, true);
	if (!unk_0x74C475EB8E73D398(sVar0, uParam0->f_466))
	{
		func_7(uParam0);
	}
	uParam0->f_466 = sVar0;
	func_113();
	func_101(uParam0);
	func_85(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_82(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_454 > unk_0x53C562FD2B9E3AB0();
	func_78(&(uParam0->f_649), unk_0xC80D31E4B587871C(uParam0->f_449, 4), (unk_0xC80D31E4B587871C(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 7))
	{
		if ((!unk_0xA8113D347D14630F() && unk_0x9F7B586A14398C40()) && !unk_0x0F30C1F1717A6437())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!unk_0xC80D31E4B587871C(uParam0->f_449, 11) && !unk_0xC80D31E4B587871C(uParam0->f_449, 10)) && !func_19()) && uParam0->f_483 == 0))
				{
					if (!unk_0xC80D31E4B587871C(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						unk_0x28E092B1E386EB67(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0x9B47B379EE749C38(false);
	unk_0x553231E7FC3C570D(2);
	unk_0x553231E7FC3C570D(1);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(3);
	unk_0x0467A3C1EFB3B8F0();
	unk_0x73509F6FDA1DB386(82, 66);
	unk_0x76F7AB2157E33DD9(17, 0,612f, 0,818f);
	unk_0x189EEBAACC5D380A();
	if (!unk_0xA8113D347D14630F())
	{
		unk_0x01B48CB2F72AE113(2, 201);
	}
	unk_0x01B48CB2F72AE113(2, 202);
	unk_0x01B48CB2F72AE113(2, 188);
	unk_0x01B48CB2F72AE113(2, 187);
	unk_0x01B48CB2F72AE113(2, 189);
	unk_0x01B48CB2F72AE113(2, 190);
	if (!unk_0xC80D31E4B587871C(uParam0->f_449, 7))
	{
		if (!unk_0xA8113D347D14630F())
		{
			vVar2 = { uParam0->f_401 };
			vVar2 = { vVar2 + Vector(0,5f, (2,9f * system::cos((180f - uParam0->f_404))), (2,9f * system::sin((180f - uParam0->f_404)))) };
			unk_0x7367FB97975F1E29(vVar2, &(vVar2.f_2), 0, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 134);
			unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar2, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uParam0->f_404);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 7);
		}
	}
}

void func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x2E6A
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
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
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
		iVar0[2] = func_80((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_80((iVar0[3] + uParam0->f_25), -127, 127);
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
		uParam0->f_14 = (uParam0->f_14 + func_79(((((vVar6.x - uParam0->f_14) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_79(((((vVar6.y - uParam0->f_14.f_1) * 0,05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_79(((((vVar6.z - uParam0->f_14.f_2) * 0,05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_79(uParam0->f_14, system::to_float(-uParam0->f_21), system::to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_79(uParam0->f_14.f_1, system::to_float(-uParam0->f_22), system::to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_79(uParam0->f_14.f_2, system::to_float(-uParam0->f_20), system::to_float(uParam0->f_20));
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
				uParam0->f_17 = func_79(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_79(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
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

float func_79(float fParam0, float fParam1, float fParam2)//Position - 0x33BE
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

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x33E5
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

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x340A
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

void func_82(var uParam0)//Position - 0x350E
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (unk_0xC80D31E4B587871C(uParam0->f_449, 19))
				{
					uParam0->f_452 = unk_0x53C562FD2B9E3AB0() + 500;
				}
				else
				{
					uParam0->f_452 = unk_0x53C562FD2B9E3AB0();
				}
			}
			else if (unk_0x53C562FD2B9E3AB0() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!unk_0xC80D31E4B587871C(uParam0->f_1.f_303, iVar1 + 4))
						{
							func_84(uParam0, iVar1);
							if (unk_0xC80D31E4B587871C(uParam0->f_1.f_370, iVar1))
							{
								unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 19);
							}
							else
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x35ED
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

void func_84(var uParam0, int iParam1)//Position - 0x3672
{
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
	unk_0xD07D5CD276368D36(99);
	unk_0x271AA5469AF471B3();
	func_25(uParam0, &(uParam0->f_1.f_371[iParam1 /*2*/]), uParam0->f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
}

void func_85(var uParam0)//Position - 0x36B9
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x9F7B586A14398C40()) && !unk_0xA8113D347D14630F())
	{
		if (uParam0->f_483 > 0)
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_449, 13))
			{
				if (func_86(&(uParam0->f_484), &(uParam0->f_467[0 /*5*/]), &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
					if (uParam0->f_467[0 /*5*/].f_4)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 11);
					}
					else
					{
						unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_467[iVar0 /*5*/] = { uParam0->f_467[iVar0 + 1 /*5*/] };
						uParam0->f_467[iVar0 /*5*/].f_2 = { uParam0->f_467[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_467[iVar0 /*5*/].f_4 = uParam0->f_467[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_483 = (uParam0->f_483 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_467[iVar1 /*5*/] = { uParam0->f_467[iVar1 + 1 /*5*/] };
					uParam0->f_467[iVar1 /*5*/].f_2 = { uParam0->f_467[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_467[iVar1 /*5*/].f_4 = uParam0->f_467[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_483 = (uParam0->f_483 - 1);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 13);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 11))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 11);
			}
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 13))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 13);
			}
			uParam0->f_455++;
		}
	}
}

bool func_86(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3870
{
	func_100(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_87(sParam2, iParam3, 0);
}

int func_87(char* sParam0, int iParam1, bool bParam2)//Position - 0x38BE
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
					func_99();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_97();
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
				func_91();
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
				if (func_90())
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
			if (func_74())
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
			func_89();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_88();
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
		func_99();
	}
	return 0;
}

void func_88()//Position - 0x3B8A
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

void func_89()//Position - 0x3BBB
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

int func_90()//Position - 0x3C50
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

void func_91()//Position - 0x3CE9
{
	if (func_219(14))
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
		Global_14453 = func_92();
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

var func_92()//Position - 0x3D8B
{
	func_93();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_93()//Position - 0x3DA4
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_96(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_95(unk_0xFC1458A37D98B502());
			if (func_94(iVar0) && (!func_219(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_94(Global_104555.f_2353.f_539.f_4301))
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

bool func_94(int iParam0)//Position - 0x3EA1
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x3EAD
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)//Position - 0x3EEA
{
	if (func_94(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()//Position - 0x3F14
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

bool func_98(int iParam0, int iParam1)//Position - 0x3F6B
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

void func_99()//Position - 0x3FA6
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

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3FFD
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

void func_101(var uParam0)//Position - 0x4056
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_453++;
	if (unk_0x8CFF76532FEF34D4(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_449, 11))
	{
		if ((unk_0xE8C126B7ADBB9D63(2, iLocal_37) || unk_0xE8C126B7ADBB9D63(2, iLocal_39)) || (unk_0x4C4813CAAD70E814(2) && (unk_0xE8C126B7ADBB9D63(2, iLocal_38) || unk_0xE8C126B7ADBB9D63(2, iLocal_40))))
		{
			func_111();
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 12))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 13);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 11);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 10);
			}
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 12);
		}
	}
	func_81(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (unk_0x4C4813CAAD70E814(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = func_80((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = func_80((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (unk_0x098C8C3D1E0C0518())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > unk_0x53C562FD2B9E3AB0())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 4);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 4);
		}
	}
	if (!unk_0xC80D31E4B587871C(uParam0->f_449, 10))
	{
		if (!unk_0xC80D31E4B587871C(uParam0->f_449, 11))
		{
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_457) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || unk_0xF2B58F79D29425B4(2, 188)) || unk_0xF2B58F79D29425B4(2, 189)) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(2, 241)))
					{
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xD07D5CD276368D36(8);
						unk_0x271AA5469AF471B3();
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x8E8D3D52EE7CEFD3();
						uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || unk_0xF2B58F79D29425B4(2, 187)) || unk_0xF2B58F79D29425B4(2, 190)) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(0, 242)))
					{
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xD07D5CD276368D36(9);
						unk_0x271AA5469AF471B3();
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = unk_0x8E8D3D52EE7CEFD3();
						uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || unk_0xF2B58F79D29425B4(2, 188)) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(0, 40)))
					{
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xD07D5CD276368D36(8);
						unk_0x271AA5469AF471B3();
						if (uParam0->f_416 != 0)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 0;
						if (unk_0xC80D31E4B587871C(uParam0->f_449, 9))
						{
							unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || unk_0xF2B58F79D29425B4(2, 187)) || (unk_0x4C4813CAAD70E814(2) && unk_0x4CD14B4B1E8BD8BA(0, 41)))
					{
						unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_INPUT_EVENT");
						unk_0xD07D5CD276368D36(9);
						unk_0x271AA5469AF471B3();
						if (uParam0->f_416 != 1)
						{
							unk_0x4AFBCBFDE748D4E0(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_416 = 1;
						if (unk_0xC80D31E4B587871C(uParam0->f_449, 9))
						{
							unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 9);
							func_7(uParam0);
						}
						uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!func_19() || unk_0xC80D31E4B587871C(uParam0->f_449, 13))
				{
					if (unk_0xE8C126B7ADBB9D63(2, iLocal_37) || (unk_0x4C4813CAAD70E814(2) && unk_0xE8C126B7ADBB9D63(2, iLocal_38)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xC80D31E4B587871C(uParam0->f_449, 9))
									{
										uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x008F3E3CC076EA0E(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = unk_0x8E8D3D52EE7CEFD3();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_104555.f_1[*uParam0] = 1;
											unk_0x3E80C2F7BC665259(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_450 < Global_89007[iVar1 /*19*/])
									{
										unk_0x008F3E3CC076EA0E(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = unk_0x8E8D3D52EE7CEFD3();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!func_110(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_89007[iVar1 /*19*/])
								{
									if (Global_104555.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_104555.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_89007[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_88853[iVar3 /*5*/] != Global_89007[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xC80D31E4B587871C(Global_104555.f_1.f_116, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_118, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_104555.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (unk_0xE8C126B7ADBB9D63(2, iLocal_39) || (unk_0x4C4813CAAD70E814(2) && unk_0xE8C126B7ADBB9D63(2, iLocal_40)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_450 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_89007[iVar1 /*19*/].f_1[uParam0->f_450];
									func_35(uParam0, uParam0->f_450, iVar6);
									unk_0x4AFBCBFDE748D4E0(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
								}
								else if (!func_221(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0xD07D5CD276368D36(iVar7);
											unk_0x271AA5469AF471B3();
											unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											unk_0xD07D5CD276368D36(iVar7);
											unk_0x1869584A8A72FEDD(true);
											unk_0x271AA5469AF471B3();
											iVar7++;
										}
										unk_0x4AFBCBFDE748D4E0(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												func_107(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										func_11(uParam0, 1);
										uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
										uParam0->f_465 = 0;
										func_106(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
									Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_89007[iVar1 /*19*/].f_1[uParam0->f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											func_107(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_105(8, 0);
									func_83(5, 1, 0);
									uParam0->f_427 = 0;
									func_11(uParam0, 1);
									uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
									func_5(uParam0, 3, 0);
								}
								unk_0x4AFBCBFDE748D4E0(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_450 >= Global_89007[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xD07D5CD276368D36(99);
			unk_0xD07D5CD276368D36(-1);
			unk_0x271AA5469AF471B3();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xC80D31E4B587871C(uParam0->f_449, 17))
			{
				iVar10 = Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
				Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_89007[iVar1 /*19*/].f_1[uParam0->f_450];
				func_35(uParam0, uParam0->f_450, iVar10);
			}
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = unk_0x53C562FD2B9E3AB0();
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 10);
	}
	else if (unk_0xF491DD47B88AA84E())
	{
		if (((!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (unk_0x042804C27782882D(uParam0->f_680))
		{
			iVar11 = unk_0x8EA167BD67A3F619(uParam0->f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			unk_0x4AFBCBFDE748D4E0(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				func_107(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_89007[iVar1 /*19*/])
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
					unk_0xD07D5CD276368D36(iVar12);
					unk_0x1869584A8A72FEDD(true);
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
					unk_0xD07D5CD276368D36(iVar12);
					unk_0x1869584A8A72FEDD(false);
					unk_0x271AA5469AF471B3();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			unk_0x3E80C2F7BC665259(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (unk_0x042804C27782882D(uParam0->f_681))
		{
			iVar13 = unk_0x8EA167BD67A3F619(uParam0->f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_104555.f_1.f_12[iVar1 /*6*/][uParam0->f_450];
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "UPDATE_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_450);
			unk_0xD07D5CD276368D36(iVar13);
			unk_0xD07D5CD276368D36(iVar14);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "FOCUS_VIEW");
			unk_0xD07D5CD276368D36(99);
			unk_0x271AA5469AF471B3();
			unk_0x4AFBCBFDE748D4E0(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 17);
			func_103(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = unk_0x53C562FD2B9E3AB0();
			uParam0->f_457 = uParam0->f_456;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
			if (!func_12(&(uParam0->f_1.f_108[0 /*4*/])) && !func_12(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				unk_0x3E80C2F7BC665259(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (unk_0x042804C27782882D(uParam0->f_682))
		{
			iVar15 = unk_0x8EA167BD67A3F619(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		func_102(uParam0, uParam0->f_427);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x4E1F
{
	if (!func_19())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_119, 14))
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 14);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_119, 16))
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 16);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_119, 15))
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 15);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_119, 17))
					{
						if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 10);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 17);
							func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 17);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x503B
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_463, iParam1))
	{
		if (!unk_0xC80D31E4B587871C(Global_104555.f_1.f_119, iParam1))
		{
			if (!unk_0x74C475EB8E73D398(&(uParam0->f_1.f_304[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 0))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 1))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 3))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 6))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 0))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 7))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 7))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 1))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 8))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 8))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 4))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 2))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 5))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 15))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 3))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 2))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 14))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 14))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 18))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 6))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 17))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 12))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 10))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 0))
								{
									if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 7))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 11))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 1))
								{
									if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 8))
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 13))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 19))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 4))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 16))
							{
								if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 5))
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xC80D31E4B587871C(Global_104555.f_1.f_117, 20))
							{
								func_24(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_463), iParam1);
	}
}

void func_104(int iParam0)//Position - 0x57D2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_104555.f_9055.f_99.f_205[7];
			if (iVar0 == 1)
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_104555.f_9055.f_99.f_205[8];
			if (iVar0 == 3)
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_104555.f_9055.f_99.f_205[10];
			if (iVar0 == 6)
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_104555.f_9055.f_99.f_205[11];
			if (iVar0 == 8)
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0x41495934EA1DEC56(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1)//Position - 0x58CD
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_205[iParam0] = iParam1;
}

void func_106(int iParam0, int iParam1)//Position - 0x5912
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_104555.f_9055.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_104555.f_9055.f_99.f_58[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x5957
{
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_120[iParam0]), iParam1);
	}
	unk_0x872F1C1F8587CCC7(&Global_88986, iParam0);
}

void func_108(int iParam0)//Position - 0x5995
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_104555.f_9055.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_89007[iVar1 /*19*/])
			{
				switch (Global_104555.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 0);
						break;
					
					case 10:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 1);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 14);
						break;
					
					case 7:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 2);
						break;
					
					case 12:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 3);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 4);
						break;
					
					case 8:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 5);
						break;
					
					case 9:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 6);
						break;
				}
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), Global_104555.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_104555.f_9055.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_89007[iVar1 /*19*/])
			{
				switch (Global_104555.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 7);
						break;
					
					case 10:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 8);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 14);
						break;
					
					case 11:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 9);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 17);
						break;
				}
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), Global_104555.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_104555.f_9055.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_89007[iVar1 /*19*/])
			{
				switch (Global_104555.f_1.f_12[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 10);
						break;
					
					case 10:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 11);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 14);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 12);
						break;
					
					case 3:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 13);
						break;
					
					case 4:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 17);
						break;
					
					case 7:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 14);
						break;
					
					case 12:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 15);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 15);
						break;
					
					case 6:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 19);
						break;
					
					case 8:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 16);
						break;
					
					case 9:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 18);
						break;
					
					case 13:
						unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_117), 20);
						unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_119), 16);
						break;
				}
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_1.f_119), Global_104555.f_1.f_12[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)//Position - 0x5D12
{
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 0);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 1);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 2);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 3);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 4);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 5);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 6);
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 7);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 8);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 9);
			break;
		
		case 3:
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 10);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 11);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 12);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 13);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 14);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 15);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 16);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 17);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 18);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 19);
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_1.f_117), 20);
			break;
	}
}

bool func_110(bool bParam0)//Position - 0x5E5A
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_111()//Position - 0x5E85
{
	Global_14622 = 0;
	func_112();
}

void func_112()//Position - 0x5E95
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_113()//Position - 0x5EB6
{
	unk_0x9B16F08390FCC31C();
	func_114();
}

void func_114()//Position - 0x5EC6
{
	Global_17162.f_134 = 1;
}

void func_115(var uParam0)//Position - 0x5ED4
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 9);
	func_11(uParam0, 0);
	if (!unk_0xA8113D347D14630F())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (Global_36993 == 1)
			{
				func_120(unk_0xFC1458A37D98B502());
			}
			vVar0 = { uParam0->f_401 };
			vVar0 = { vVar0 + Vector(0,5f, (2,9f * system::cos((180f - uParam0->f_404))), (2,9f * system::sin((180f - uParam0->f_404)))) };
			unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 134);
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uParam0->f_404);
			unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 7);
	}
	unk_0x9B47B379EE749C38(false);
	func_72(1);
	func_119();
	unk_0x6489707B038D749C();
	unk_0x247EAA2E93D4A021(uParam0->f_401, 5f, 1, 1, 0, false);
	unk_0x2A3035DE2B139D39(uParam0->f_401, 5f);
	unk_0xAA3BA69ADAA21CD9(1);
	unk_0x73509F6FDA1DB386(82, 66);
	unk_0x76F7AB2157E33DD9(17, 0,612f, 0,818f);
	unk_0x189EEBAACC5D380A();
	func_118(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = unk_0xD3BB1A515B0A47F3(uParam0->f_401);
	if (iVar1 != 0)
	{
		unk_0xFF9ADA7B95619F7E(iVar1);
	}
	unk_0x5AA4315C366E622D(&(Global_88924[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xFEBDA826C4D099B2(unk_0x75E0B9223661C868(unk_0xFC1458A37D98B502()));
	}
	func_117(0);
	func_116();
	unk_0xA3A57BA8F775CAFF(0);
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(false);
		unk_0x271AA5469AF471B3();
	}
	uParam0->f_466 = unk_0x715308393E136EA8(2, 10, true);
	unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 2);
	Global_88985 = 1;
	func_6(uParam0, uParam0->f_464, 0);
}

void func_116()//Position - 0x60C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_104555.f_20380.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xF491DD47B88AA84E())
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

void func_117(bool bParam0)//Position - 0x6124
{
	if (!bParam0)
	{
		Global_103197 = unk_0x53C562FD2B9E3AB0() + 250;
	}
	Global_103194 = bParam0;
}

void func_118(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x6142
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
	uParam0->f_19 = uParam7;
	*uParam0 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
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

void func_119()//Position - 0x623A
{
	Global_17162.f_5 = 1;
}

void func_120(int iParam0)//Position - 0x6248
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
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)//Position - 0x62A1
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

int func_122(int iParam0)//Position - 0x6324
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

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0x6355
{
	func_124(iParam0, iParam1, iParam2, 0, 0);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6369
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
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
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

int func_125()//Position - 0x63E0
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

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x6411
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x642C
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

int func_128(int iParam0)//Position - 0x6478
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

void func_129(var uParam0)//Position - 0x64C1
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_130(*uParam0);
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

int func_130(int iParam0)//Position - 0x6518
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

int func_131(int iParam0, bool bParam1)//Position - 0x6553
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_142(0))
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

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x660B
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*uParam0 == -1)
		{
			func_129(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_133(int iParam0)//Position - 0x6736
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_92();
				if (!func_94(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_141()) || Global_103602) || Global_25235) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_141()) || Global_25235) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_141()) || Global_103602) || Global_25235) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_141()) || Global_103602) || Global_25235) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_141()) || Global_25235) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_141()) || func_138()) || Global_103602) || Global_25235) || func_140()) || Global_36993) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_141()) || Global_103602) || Global_25235) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
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

var func_134()//Position - 0x6E53
{
	return Global_92872.f_1;
}

int func_135()//Position - 0x6E61
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_136()//Position - 0x6E87
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x6EA1
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

bool func_138()//Position - 0x6ECB
{
	return Global_92885.f_316 > 0;
}

bool func_139()//Position - 0x6EDC
{
	return Global_92885.f_315 > 0;
}

var func_140()//Position - 0x6EED
{
	return Global_1312854;
}

int func_141()//Position - 0x6EF9
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x6F15
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

bool func_143(int iParam0)//Position - 0x6F6F
{
	return func_144(iParam0, Global_35861);
}

int func_144(int iParam0, int iParam1)//Position - 0x6F80
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

void func_145()//Position - 0x7161
{
	int iVar0;
	vector3 vVar1;
	
	if (func_221(17))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_41, 11))
		{
			unk_0x393584863A2F304E("JH_1_MCS_4P2", 8);
			unk_0xD9E2C360120FEB7C("lesterHandler");
			unk_0xBCBC53983EC3B1BA("JHS1AUD", 6);
			unk_0x872F1C1F8587CCC7(&iLocal_41, 11);
		}
		else if (unk_0x8AD07B6FC24F47C4())
		{
			unk_0x7B9E2A8E7B7BA218("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_221(18))
	{
		if (func_221(17))
		{
			if ((unk_0x0C78C25CF5CD8944("JH_1_MCS_4P2") && unk_0x3B6F9DF9C5FEB3A4("lesterHandler")) && unk_0x9F0887BCBFCF3C2F(6))
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
				{
					unk_0x4982ECE0928DA13D(iLocal_245, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0x4982ECE0928DA13D(iLocal_245, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_248))
				{
					if (unk_0x6049C20F5D5C185B(iLocal_248))
					{
						unk_0x6B7C10B19928914F(iLocal_248, 1, 1);
					}
				}
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x4982ECE0928DA13D(unk_0xFC1458A37D98B502(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_248))
				{
					unk_0x4982ECE0928DA13D(iLocal_248, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0x4982ECE0928DA13D(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0x6FF834D85E2DD4C6(joaat("prop_cs_walking_stick"));
				unk_0x6FF834D85E2DD4C6(joaat("prop_laptop_lester2"));
				func_72(1);
				func_117(1);
				func_185(1, 1, 1, 0);
				iLocal_43 = -1;
				unk_0xD0BFA95B279C174F(0);
				if (func_110(0))
				{
					unk_0x45BC176150D0E5AF(0, 0, 0, 0);
				}
				func_106(17, 0);
			}
		}
		else if (unk_0xA8113D347D14630F())
		{
			func_113();
			if (unk_0xC80D31E4B587871C(iLocal_41, 7))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_248))
				{
					unk_0xB3A8974D2C811672(iLocal_248, true, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_246))
				{
					unk_0xB3A8974D2C811672(iLocal_246, true, 0);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_245))
				{
					unk_0xB3A8974D2C811672(iLocal_245, true, 0);
				}
				unk_0x0EE72DB1CD8A3B86(&iLocal_41, 7);
			}
			if (unk_0xBBC745B9F75E27D0("Lester", 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_245))
				{
					iVar0 = iLocal_245;
					system::start_new_script_with_args("lesterHandler", &iVar0, 1, 1424);
					unk_0x9D2418D7FC697249("lesterHandler");
					iLocal_255 = unk_0x53C562FD2B9E3AB0();
					unk_0x872F1C1F8587CCC7(&iLocal_41, 18);
				}
			}
			if (unk_0xBBC745B9F75E27D0("Michael", 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					vVar1 = { 709,3766f, -964,2602f, 29,3954f };
					unk_0x7367FB97975F1E29(vVar1, &(vVar1.f_2), 0, 0);
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar1, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 261,7831f);
						if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
						{
							unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 2000, 0, 1, 0);
						}
						unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -668482597, false, 0, 0);
					}
					unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
				}
			}
			if (unk_0x65E1868AA01313FF(0))
			{
				unk_0xBB9A3C553EECB180(0f);
				unk_0x7C9705890EF6612E(0f, 1065353216);
			}
		}
		else if (iLocal_43 == -1 && !func_110(0))
		{
			iLocal_43 = unk_0x53C562FD2B9E3AB0() + 1500;
		}
		else if (unk_0x53C562FD2B9E3AB0() > iLocal_43 || func_110(0))
		{
			if (func_110(0))
			{
				unk_0xAE83ED4C9081AE6F(0);
			}
			else
			{
				Global_55903 = 0;
				Global_92872 = 0;
				func_184();
			}
			unk_0x14776E43F90DD454(joaat("prop_cs_walking_stick"));
			unk_0x14776E43F90DD454(joaat("prop_laptop_lester2"));
			func_72(0);
			func_185(0, 1, 1, 0);
			func_182(&(Global_104555.f_2353.f_539), 86);
			func_154(&(Global_104555.f_2353.f_539), 86);
			func_153(&iLocal_45);
			unk_0x0EE72DB1CD8A3B86(&iLocal_41, 1);
			unk_0xCA107A9AAF17E75F(iLocal_249, 0);
			if (iLocal_254 != -1)
			{
				if (unk_0xA12FA3F7428EE798(iLocal_254))
				{
					unk_0x7DC528E86B55C67E(iLocal_254);
				}
			}
			unk_0xD581373770173F1F();
			unk_0x8D3373CFE9542320(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
			unk_0xC0EBC1452FCAB15C(5);
			func_106(18, 0);
			func_146(0, 0);
		}
	}
	else if (!func_221(17))
	{
		if (unk_0x0C78C25CF5CD8944("JH_1_MCS_4P2"))
		{
			unk_0xA6C03E3E2533F8F3();
		}
	}
	if (unk_0xC80D31E4B587871C(iLocal_41, 18))
	{
		unk_0x4FB260623DD93924(0, 26, 1);
		if (unk_0x53C562FD2B9E3AB0() > iLocal_255 + 1000)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_41, 18);
		}
	}
}

void func_146(int iParam0, bool bParam1)//Position - 0x755E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_150(4, 1);
						break;
					
					case 4:
						func_150(8, 1);
						break;
					
					case 6:
						func_150(10, 1);
						break;
					
					case 7:
						func_150(1, 1);
						break;
					
					case 8:
						func_150(3, 1);
						break;
					
					case 9:
						func_150(6, 1);
						break;
					
					case 10:
						func_150(9, 1);
						break;
					
					case 12:
						func_150(11, 1);
						break;
					
					case 13:
						func_150(12, 1);
						break;
					
					case 11:
						if (func_149(91))
						{
							func_150(0, 1);
						}
						break;
					
					case 5:
						if (func_149(91))
						{
							func_150(2, 1);
						}
						break;
					
					case 3:
						if (func_149(67))
						{
							func_150(5, 1);
						}
						break;
					
					case 2:
						if (func_149(77))
						{
							func_150(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[4], 0))
	{
		func_150(9, 1);
	}
	if (!func_39(13) && unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[16], 0))
	{
		func_150(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_150(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_148(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_147("DI_FEED_HST");
	}
}

void func_147(char* sParam0)//Position - 0x772A
{
	unk_0xE3C33644878DCCFD("");
	unk_0xE702609C728B0AF1("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_148(int iParam0)//Position - 0x774E
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

int func_149(int iParam0)//Position - 0x7791
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_150(int iParam0, bool bParam1)//Position - 0x77BD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_152(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_26404.f_1), iVar0);
			if (!bParam1)
			{
				func_147(func_151(iParam0));
			}
		}
	}
}

char* func_151(int iParam0)//Position - 0x7806
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_152(int iParam0)//Position - 0x78E9
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_26404.f_1, iParam0);
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x7918
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

void func_154(var uParam0, int iParam1)//Position - 0x7955
{
	switch (iParam1)
	{
		case 17:
			func_155(uParam0, 0, 12);
			break;
		
		case 19:
			func_155(uParam0, 1, 13);
			break;
		
		case 29:
			func_155(uParam0, 1, 14);
			break;
		
		case 30:
			func_155(uParam0, 2, 15);
			func_155(uParam0, 1, 29);
			break;
		
		case 32:
			func_155(uParam0, 1, 16);
			func_155(uParam0, 0, 17);
			break;
		
		case 39:
			func_155(uParam0, 0, 21);
			func_155(uParam0, 1, 20);
			break;
		
		case 31:
			func_155(uParam0, 0, 18);
			break;
		
		case 20:
			func_155(uParam0, 2, 22);
			break;
		
		case 66:
			func_155(uParam0, 1, 23);
			break;
		
		case 68:
			func_155(uParam0, 1, 24);
			break;
		
		case 70:
			func_155(uParam0, 1, 67);
			break;
		
		case 8:
			func_155(uParam0, 1, 25);
			func_155(uParam0, 2, 26);
			break;
		
		case 67:
			func_155(uParam0, 1, 27);
			break;
		
		case 9:
			func_155(uParam0, 2, 28);
			break;
		
		case 38:
			func_155(uParam0, 2, 30);
			func_155(uParam0, 1, 19);
			break;
		
		case 83:
			func_155(uParam0, 2, 33);
			break;
		
		case 45:
			func_155(uParam0, 1, 35);
			break;
		
		case 64:
			func_155(uParam0, 0, 36);
			func_155(uParam0, 1, 37);
			break;
		
		case 91:
			func_155(uParam0, 0, 41);
			break;
		
		case 42:
			func_155(uParam0, 0, 58);
			Global_92302[0 /*98*/] = 0;
			func_155(uParam0, 2, 59);
			Global_92302[2 /*98*/] = 0;
			break;
		
		case 41:
			func_155(uParam0, 1, 42);
			func_155(uParam0, 2, 42);
			break;
		
		case 15:
			func_155(uParam0, 0, 46);
			func_155(uParam0, 1, 47);
			break;
		
		case 16:
			func_155(uParam0, 0, 48);
			break;
		
		case 48:
			func_155(uParam0, 1, 50);
			func_155(uParam0, 2, 51);
			break;
		
		case 74:
			func_155(uParam0, 0, 52);
			func_155(uParam0, 1, 66);
			break;
		
		case 76:
			func_155(uParam0, 1, 53);
			func_155(uParam0, 2, 54);
			func_155(uParam0, 0, 62);
			break;
		
		case 75:
			func_155(uParam0, 0, 61);
			func_155(uParam0, 1, 31);
			break;
		
		case 69:
			func_155(uParam0, 1, 63);
			break;
		
		case 84:
			func_155(uParam0, 0, 68);
			func_155(uParam0, 2, 69);
			break;
		
		case 85:
			func_155(uParam0, 0, 64);
			func_155(uParam0, 2, 65);
			break;
		
		case 93:
			func_155(uParam0, 1, 38);
			func_155(uParam0, 2, 39);
			break;
		
		case 11:
			func_155(uParam0, 2, 55);
			break;
		
		case 77:
			func_155(uParam0, 1, 56);
			func_155(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_155(var uParam0, int iParam1, int iParam2)//Position - 0x7C9E
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
	{
		iVar0 = Global_104555.f_18503[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_104555.f_18503[iParam1] = iParam2;
	uParam0->f_2276[iParam1] = func_171();
	if (!func_170(iParam2, &(uParam0->f_2280[iParam1 /*3*/]), &(uParam0->f_2290[iParam1])))
	{
		return 0;
	}
	if (!func_169(uParam0->f_2280[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_169(Global_91337[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_156(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_92302[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2294[iParam1] = 0;
	uParam0->f_2298[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2308[iParam1] = 0;
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7DBE
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_92302[iParam0 /*98*/] };
			if (Global_92597[iParam0] != 2)
			{
				if (unk_0x8AE9E5E8F6DC40C9(Global_92605[iParam0 /*3*/], -829,7478f, 192,117f, 76,73248f, -827,1384f, 153,8595f, 59,96172f, 33,25f, 0, true))
				{
					if (Global_92597[iParam0] == 1)
					{
						*uParam3 = { Global_92605[iParam0 /*3*/] - Global_104555.f_2353.f_539.f_2280[iParam0 /*3*/] };
						*uParam4 = (Global_92615[iParam0] - Global_104555.f_2353.f_539.f_2290[iParam0]);
						if (system::vmag2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_92605[iParam0 /*3*/] - Global_104555.f_2353.f_539.f_2280[iParam0 /*3*/] };
				*uParam4 = (Global_92615[iParam0] - Global_104555.f_2353.f_539.f_2290[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_92302[iParam0 /*98*/] };
			if (Global_92597[iParam0] != 2)
			{
				*uParam3 = { Global_92605[iParam0 /*3*/] - Global_104555.f_2353.f_539.f_2280[iParam0 /*3*/] };
				*uParam4 = (Global_92615[iParam0] - Global_104555.f_2353.f_539.f_2290[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_92302[iParam0 /*98*/] };
			if (Global_92597[iParam0] != 2)
			{
				*uParam3 = { Global_92605[iParam0 /*3*/] - Global_104555.f_2353.f_539.f_2280[iParam0 /*3*/] };
				*uParam4 = (Global_92615[iParam0] - Global_104555.f_2353.f_539.f_2290[iParam0]);
				if (system::vmag2(*uParam3) < (0,5f * 0,5f))
				{
					*uParam3 = { *uParam3 * Vector(1,5f, 1,5f, 1,5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 37,43f, -23,81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28,826f, -1277,56f, -90,961f) - Vector(28,3203f, -1324,195f, -90,0089f) };
			*uParam4 = (1,27f - 194,1887f);
			return 1;
			break;
		
		case 9:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_158(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28,764f, -1431,464f, 66,028f) - Vector(28,2954f, -1351,52f, 37,5988f) };
			*uParam4 = (141,28f - 90,0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21,6401f, 38,5601f, 1,9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_158(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_158(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -2,72f, 0,45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29,17f, -1417,047f, 54,081f) - Vector(28,2915f, -1464,68f, 72,2278f) };
			*uParam4 = (0,72f - 156,8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24,9f, -938,8f, 792,3f) - Vector(24,2312f, -906f, 763f) };
			*uParam4 = (2,23f - 7,2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28,701f, -1090,07f, 306,036f) - Vector(28,3684f, -1120,786f, 257,9167f) };
			*uParam4 = (-1f - 97,2736f);
			return 1;
			break;
		
		case 40:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16,5182f, -8,5576f, -2,3291f };
			*uParam4 = 174,24f;
			return 1;
			break;
		
		case 75:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 2,5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4,8006f, -2965,499f, 782,1644f) - Vector(4,0205f, -2975,341f, 798,4536f) };
			*uParam4 = (246,1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5,4446f, -2912,043f, 659,5297f) - Vector(5,0589f, -2916,479f, 709,0244f) };
			*uParam4 = (247,4806f - 355,326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5,1176f, -2936,843f, 656,9753f) - Vector(5,1337f, -2917,325f, 643,5248f) };
			*uParam4 = (253,776f - 334,1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5,681f, -2769,795f, 593,033f) - Vector(5,0558f, -2819,085f, 594,4415f) };
			*uParam4 = (2,62f - 299,0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { -1,5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3,8721f, -5,9568f, 0f };
			*uParam4 = (164,2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28,1755f, -550,2679f, -1170,72f) - Vector(30,2361f, -526,9999f, -1257,5f) };
			*uParam4 = (310,4708f - 220,9554f);
			return 1;
			break;
		
		case 52:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 66:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12,5f;
			return 1;
			break;
		
		case 61:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -2,9117f, -15,0499f, -0,3468f };
			*uParam4 = -139,9751f;
			return 1;
			break;
		
		case 64:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36,5734f, -85,1799f, -737,1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64,1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5,5414f, -6,6035f, 1,0473f };
				*uParam4 = -83,2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5,7209f, -12,3958f, 1,0746f };
				*uParam4 = -152,2593f;
			}
			return 1;
			break;
		
		case 112:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
			*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_156(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
				*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12,5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 114:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,9002f, 1,205f, -0,3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 106:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 99:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 3,2267f, 1,0966f, -0,354f };
			*uParam4 = -31,73f;
			return 1;
			break;
		
		case 125:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -13,7322f, 1,8783f, 1,0593f };
			*uParam4 = 55,3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 91:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 15,4538f, -8,711f, 5,79f };
			*uParam4 = 2,4942f;
			return 1;
			break;
		
		case 93:
			if (func_156(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8,1f, -9,01f, 0,4439f };
				*uParam4 = 94,03f;
				return 1;
			}
			break;
		
		case 121:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 18,8468f, 40,7721f, 0f };
			*uParam4 = -116,3936f;
			return 1;
			break;
		
		case 115:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,517f, -33,7052f, -531,6035f) - Vector(45,6141f, -21,87f, -511,73f) };
			*uParam4 = ((177,259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1,7826f, 12,2098f, -0,6964f };
			*uParam4 = -96,0001f;
			return 1;
			break;
		
		case 117:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 11,8705f, -1,4684f, -1,6487f };
			*uParam4 = -125,8331f;
			return 1;
			break;
		
		case 94:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -13,1578f, 16,3962f, 0,6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -21,0518f, 0,5037f, 0,4091f };
			*uParam4 = -83,1262f;
			return 1;
			break;
		
		case 108:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 10,8971f, 2,0809f, -0,7983f };
			*uParam4 = -150,9417f;
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 79,9901f, -52,83f, -0,3533f };
			*uParam4 = 44,7231f;
			return 1;
			break;
		
		case 135:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
			*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
				*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
				*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x5B811202FCBE9E9D(-5f, 5f), unk_0x5B811202FCBE9E9D(-5f, 5f), 0f };
				*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2,4845f, 2,3286f, -0,383f };
				*uParam4 = -31,4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12,5f;
				return 1;
			}
			break;
		
		case 142:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7,5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_156(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13,2213f, 16,331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_156(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10,3876f, -10,3585f, -1,2183f };
				*uParam4 = 8,6726f;
				return 1;
			}
			break;
		
		case 158:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1,0793f, 15,631f, 1,1744f };
			*uParam4 = 2,52f;
			return 1;
			break;
		
		case 166:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0,1f;
			*uParam5 = { 0,1f, 0,1f, 0,1f };
			*uParam6 = 0,1f;
			return 1;
			break;
		
		case 171:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0,1f, 0f };
			*uParam6 = 0,5f;
			return 1;
			break;
		
		case 209:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_157(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2,19f, -1,23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1,3547f, 2,1615f, -0,3723f };
			*uParam4 = 177,8041f;
			return 1;
			break;
		
		case 213:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,2075f, 1,0943f, 0f };
				*uParam4 = 15,82f;
				return 1;
			}
			break;
		
		case 214:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2,291f, 1,0879f, 0,0635f };
			*uParam4 = 177,798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0,9714f, 1,6112f, -0,2773f };
			*uParam4 = -7,0583f;
			*uParam5 = { Vector(183,8081f, 578,5989f, 174,7651f) - Vector(176,086f, 551,7596f, 10,9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29,4846f, -1457,915f, -17,4132f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam4 = (89,0026f - -1,5f);
			*uParam5 = { Vector(33,6125f, -1563,461f, -147,0307f) - Vector(31,1932f, -1441,182f, -14,8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43,5168f, -33,5909f, -531,4f) - Vector(45,2617f, -28,54f, -521,13f) };
			*uParam4 = (357,1407f - 84,96f);
			return 1;
			break;
		
		case 216:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2,1752f, -2,3781f, 0f };
				*uParam4 = -68,4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3,9761f, 0,2542f, 0f };
				*uParam4 = -70,5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28,225f, -1015,11f, -70,4456f) - Vector(27,5447f, -1019,235f, -78,4023f) };
			*uParam4 = (162,098f - 109,0206f);
			return 1;
			break;
		
		case 192:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,7514f, -1573,632f, -1174,458f) };
			*uParam4 = (302,182f - 105,981f);
			return 1;
			break;
		
		case 193:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,403f, -1531,113f, -1190,017f) - Vector(4,3599f, -1573,692f, -1175,298f) };
			*uParam4 = (302,182f - 172,9187f);
			return 1;
			break;
		
		case 194:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12,74f, 3,26f, 0f };
				*uParam4 = 95,217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1,34f, 7,684f, 0f };
				*uParam4 = 173,52f;
				return 1;
			}
			break;
		
		case 200:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,4055f, -1607,568f, 44,4802f) - Vector(((28,2858f - 0,5f) + 1,5f), -1607,286f, 2,8895f) };
			*uParam4 = (318,2674f - (310,879f - 180f));
			return 1;
			break;
		
		case 201:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,1773f, -1592,787f, 3,6009f) - Vector(29,2903f, -1607,286f, 2,8895f) };
			*uParam4 = (322,6286f - 130,879f);
			return 1;
			break;
		
		case 202:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 91,3579f, 18,1788f, -0,1911f };
			*uParam4 = -90,3475f;
			return 1;
			break;
		
		case 222:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 12,5073f, -3,4625f, -0,3702f };
			*uParam4 = 14,3405f;
			return 1;
			break;
		
		case 223:
			if (func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21,87f, -10,5f, 0f };
				*uParam4 = -104,76f;
				return 1;
			}
			break;
		
		case 224:
			return func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7f, -1356,9f, 24,6f) - Vector(29,3437f, -1351,412f, 28,986f) };
			*uParam4 = ((270,1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -19,8544f, -10,4863f, -0,0334f };
			*uParam4 = -120,12f;
			return 1;
			break;
		
		case 228:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 21,5897f, -6,8544f, 0,6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -7,6041f, 0,1369f, 0,5812f };
			*uParam4 = -145,769f;
			return 1;
			break;
		
		case 230:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -1,6f, 7,6802f, 0,6947f };
			*uParam4 = -50,99f;
			return 1;
			break;
		
		case 238:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22,322f, -6,2034f, 0f };
			*uParam4 = 73,071f;
			return 1;
			break;
		
		case 250:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1,2901f, -5,5798f, -0,0357f };
			*uParam4 = 160,56f;
			return 1;
			break;
		
		case 251:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4,0739f, 7,7692f, -0,2984f };
				*uParam4 = -48,9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5,778f, -4,2397f, 0,9091f };
				*uParam4 = -12,9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0,6968f, 1,1033f, 0,912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_157(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0,6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0,6187f, -1440,421f, 2779,759f) - Vector(0,3109f, -1453,731f, 2789,845f) };
			uParam3->f_2 = (uParam3->f_2 + 0,5f);
			*uParam4 = (340,0835f - 4,44f);
			*uParam3 = { Vector(-0,7f, 16,55f, -3,3962f) + Vector(0,5f, 0,5f, -0,5f) };
			*uParam4 = (23,6441f + 90f);
			*uParam3 = { -4,0164f, 19,9594f, 0f };
			*uParam4 = 113,6465f;
			*uParam3 = { *uParam3 * Vector(1,1f, 1,1f, 1,1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9,8707f, 13,0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7,7078f, 23,9099f, 1,7307f };
			*uParam4 = 24,3187f;
			return 1;
			break;
		
		case 309:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -4,5662f, -3,2485f, (0,9455f - 1,7f) };
			*uParam4 = -138,6056f;
			return 1;
			break;
		
		case 305:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,8797f, 3597,047f, 1399,662f) - Vector(37,9419f, 3602,284f, 1394,208f) };
			*uParam4 = (315,9865f - 122,5269f);
			return 1;
			break;
		
		case 310:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 10,5999f, 3,3997f, 1,0212f };
			*uParam4 = -50,3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13,2279f, -7,5348f, 0f };
			*uParam4 = 4,32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11,9596f, 0,345f, -1,0016f };
			*uParam4 = -42,4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3,424f, 7,6462f, 0,8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(7,1164f, -1094,205f, -1243,65f) - Vector(7,1f, -1105,15f, -1242,68f) };
			*uParam4 = (14,0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,8143f, -930,5448f, -1672,535f) - Vector(6,479f, -974,7168f, -1667,148f) };
			*uParam4 = (144,9416f - 171,253f);
			return 1;
			break;
		
		case 258:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,3025f, 6276,12f, -267,5488f) - Vector(30,5054f, 6250,9f, -301,4778f) };
			*uParam4 = (130,9896f - 10,247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,5629f, -387,5143f, -147,166f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (341,4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(24,4283f, -689,1462f, -1306,782f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (214,6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (115,2022f - -176,25f);
			return 1;
			break;
		
		case 154:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,3324f, 254,0631f, -708,9244f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (115,2022f - -147,192f);
			return 1;
			break;
		
		case 165:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,0054f, -441,1681f, -1100,878f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (297,5568f - -144,622f);
			return 1;
			break;
		
		case 159:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,3852f, -199,5354f, -825,3141f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (29,4869f - -62,5f);
			return 1;
			break;
		
		case 160:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36,2086f, -144,1027f, -730,8218f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (28,532f - 119f);
			return 1;
			break;
		
		case 167:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(31,7307f, -523,2257f, -1144,174f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (299,2956f - -22,32f);
			return 1;
			break;
		
		case 152:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9436f, 314,6989f, -1421,8f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (335,4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,469f, 255,3143f, -706,187f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (117,3069f - 37,27f);
			return 1;
			break;
		
		case 225:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,7165f, -1677,734f, 185,4888f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (54,2538f - -83,8f);
			return 1;
			break;
		
		case 218:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,3218f, -1405,159f, -17,556f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (91,3098f - -70,4124f);
			return 1;
			break;
		
		case 219:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,2611f, -1492,151f, -219,3172f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (139,2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(25,3018f, -1811,693f, -22,6138f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (141,0423f - -117,356f);
			return 1;
			break;
		
		case 206:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(208,5337f, 773,6719f, 164,1308f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (136,3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(108,9995f, 396,924f, -263,3745f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (284,4611f - -95,588f);
			return 1;
			break;
		
		case 274:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(139,5782f, 2030,446f, -1883,836f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (340,5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,0296f, 6560,557f, -200,684f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (134,5505f - 110,5931f);
			return 1;
			break;
		
		case 271:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6,4647f, -1083,751f, -1278,023f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (115,8919f - 26,3597f);
			return 1;
			break;
		
		case 248:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(102,4417f, 164,5124f, 325,8113f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (68,4108f - 10,77f);
			return 1;
			break;
		
		case 242:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(56,616f, -122,9896f, -1622,22f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (210,8653f - 13,7207f);
			return 1;
			break;
		
		case 254:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,0019f, -213,7796f, 172,442f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (250,3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(17,3426f, -836,0328f, -887,9977f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (270,8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,8359f, -1182,704f, -1264,218f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (298,4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(104,8218f, 289,0073f, -80,4564f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (247,6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (228,6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2762f, -1477,282f, 434,9171f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (228,6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(103,1881f, 177,7729f, 288,977f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (68,9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32,7794f, -432,4635f, -161,4589f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (340,0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(202,1143f, 828,3607f, -806,8813f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (101,1612f - -54,347f);
			return 1;
			break;
		
		case 103:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,0174f, -1108,081f, -1724,72f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (319,8931f - 143,4931f);
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,2248f, -628,4899f, -1859,505f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (229,0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53,1469f, 90,4242f, -1393,442f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (123,1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(101,921f, 186,1865f, 370,5876f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (159,7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(45,9871f, -188,5636f, -1391,156f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (36,5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(46,0567f, 3076,742f, 2001,918f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (328,101f - -33,128f);
			return 1;
			break;
		
		case 88:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60,9442f, 314,7191f, -1421,821f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (336,5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(37,4888f, 5643,726f, -569,3535f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (296,1685f - unk_0xA67DD8488EBA5F6D(7,4998f, -7,4995f));
			return 1;
			break;
		
		case 307:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(47,4526f, 4717,728f, -1555,593f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (236,223f - unk_0xA67DD8488EBA5F6D(-10,6345f, -0,7246f));
			return 1;
			break;
		
		case 308:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(22,7549f, 4629,148f, -1553,861f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (332,7842f - unk_0xA67DD8488EBA5F6D(3,4271f, 13,6787f));
			return 1;
			break;
		
		case 278:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35,9161f, -1009,745f, 631,8275f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (98,8128f - -33,77f);
			return 1;
			break;
		
		case 279:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(234,6825f, 900,8749f, -111,9033f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (6,1087f - 155,68f);
			return 1;
			break;
		
		case 240:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33,5351f, 3636,151f, 1546,323f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (298,4009f - -4,124f);
			return 1;
			break;
		
		case 241:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30,512f, 6439,667f, -179,4242f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (225,5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,2977f, -1390,545f, 486,7419f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (178,298f - -90f);
			return 1;
			break;
		
		case 266:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10,5662f, 143,2342f, -3052,895f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (85,3429f - 68,8227f);
			return 1;
			break;
		
		case 267:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(39,9155f, 4934,08f, 2202,375f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (314,2654f - 56,2037f);
			return 1;
			break;
		
		case 269:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28,149f, -782,0952f, 401,2502f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (179,9905f - -106,6605f);
			return 1;
			break;
		
		case 246:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3,3919f, -1534,507f, -1195,256f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (305,8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12,8792f, -1241,213f, -573,3765f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (316,9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4,0002f, -1298,539f, -724,429f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (230,5715f - -32,488f);
			return 1;
			break;
		
		case 260:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(61,203f, 250,8387f, -1309,114f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (10,7756f - -29,093f);
			return 1;
			break;
		
		case 261:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79,764f, 60,3233f, 917,6678f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = (148,021f - 229,6085f);
			return 1;
			break;
		
		case 270:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_91337[iParam1 /*3*/] };
			*uParam4 = unk_0x5B811202FCBE9E9D(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -48,5171f, 28,4211f, 3,0057f };
			*uParam4 = -1,3831f;
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, var uParam1, int iParam2)//Position - 0xB44D
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

int func_158(int iParam0, var uParam1, int iParam2)//Position - 0xB6A9
{
	if (Global_92302[iParam0 /*98*/] == 0)
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("blimp"))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (func_168(iParam0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x428C7026AD2721BA(Global_92302[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x849A8CFD71854E02(Global_92302[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0xF9DDB1C0875FD9E0(Global_92302[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (unk_0x3C4FA7AE145B3F72(Global_92302[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0xC1514CFCEC68CA4A(Global_92302[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x125CDF69FA6EF560(Global_92302[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_159(Global_92302[iParam0 /*98*/], 0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_92302[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_92302[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_157(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_92302[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		func_157(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_92302[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_92302[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	func_157(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_159(int iParam0, bool bParam1)//Position - 0xB8E0
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
		if (!func_167())
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
		if ((((!func_166() && !func_165()) && !func_164()) && !func_163()) && !func_167())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_164())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_162(iParam0))
		{
			return 0;
		}
	}
	if (!func_160(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)//Position - 0xBA6E
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_161())
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

int func_161()//Position - 0xBB3A
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_162(int iParam0)//Position - 0xBB51
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

int func_163()//Position - 0xD3D9
{
	return 0;
}

int func_164()//Position - 0xD3E2
{
	return 1;
}

int func_165()//Position - 0xD3EB
{
	return 1;
}

int func_166()//Position - 0xD3F4
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0xD40D
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

int func_168(int iParam0)//Position - 0xD4C8
{
	if (Global_92302[iParam0 /*98*/] == joaat("blimp") || Global_92302[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("submersible") || Global_92302[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("burrito2") || Global_92302[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("entityxf") && !Global_104555.f_9055.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("cheetah") && !Global_104555.f_9055.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("policeb") && !Global_104555.f_9055.f_330[8 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("ztype") && !Global_104555.f_9055.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("polmav") && !Global_104555.f_9055.f_330[9 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("jb700") && !Global_104555.f_9055.f_330[10 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("monroe") && !Global_104555.f_9055.f_330[11 /*6*/])
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == 1938952078)
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_92302[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_92302[iParam0 /*98*/] == joaat("gauntlet") && !Global_104555.f_9055.f_330[80 /*6*/]) && !Global_104555.f_9055.f_330[81 /*6*/]) && !Global_104555.f_9055.f_330[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_169(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xD748
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_170(int iParam0, var uParam1, float fParam2)//Position - 0xD78F
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
			return func_170(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_170(8, uParam1, fParam2);
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

var func_171()//Position - 0xE0FE
{
	var uVar0;
	
	func_181(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_180(&uVar0, unk_0x95327550F0F2BE7C());
	func_179(&uVar0, unk_0x674C9438180770FE());
	func_174(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_173(&uVar0, unk_0xEAF455949B108589());
	func_172(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_172(var uParam0, int iParam1)//Position - 0xE144
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

void func_173(var uParam0, int iParam1)//Position - 0xE1CA
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)//Position - 0xE1FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_175(int iParam0, int iParam1)//Position - 0xE24E
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

var func_176(int iParam0)//Position - 0xE2F0
{
	return (system::shift_right(iParam0, 26) & 31 * func_177(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)//Position - 0xE315
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)//Position - 0xE32C
{
	return uParam0 & 15;
}

void func_179(var uParam0, int iParam1)//Position - 0xE339
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_180(var uParam0, int iParam1)//Position - 0xE373
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_181(var uParam0, int iParam1)//Position - 0xE3AE
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

void func_182(var uParam0, int iParam1)//Position - 0xE3EA
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
			if (!func_170(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_183(&(uParam0->f_2276[iVar0]));
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

void func_183(var uParam0)//Position - 0xE5B3
{
	*uParam0 = -15;
}

int func_184()//Position - 0xE5C1
{
	if (func_110(0))
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

void func_185(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE60C
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_193(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_74())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_192(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_193(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_192(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_190(unk_0x9EB17624F44A8DA4())) && !func_187(unk_0x9EB17624F44A8DA4(), 0)) && !func_186())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_190(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_186()//Position - 0xE725
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_187(int iParam0, int iParam1)//Position - 0xE742
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_188(-1, 0) == 8;
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

int func_188(int iParam0, bool bParam1)//Position - 0xE78D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_189();
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

int func_189()//Position - 0xE7CE
{
	return Global_1312736;
}

int func_190(int iParam0)//Position - 0xE7DA
{
	if (func_187(iParam0, 0))
	{
		return 1;
	}
	if (func_191())
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

bool func_191()//Position - 0xE81C
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE82D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_193(int iParam0)//Position - 0xE860
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

void func_194()//Position - 0xE883
{
	unk_0x0892DFAEFF2EEADB(-1747852954);
	if (func_221(16))
	{
		if (!func_110(0))
		{
			if (!unk_0xC80D31E4B587871C(iLocal_41, 10))
			{
				unk_0x393584863A2F304E("JH_1_MCS_4_P1_ALT1", 8);
				func_202();
				func_107(0, 0, 1);
				iLocal_249 = unk_0xCB389937EDB1519A(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 1, 1, 1);
				iLocal_254 = unk_0x068179DC75448F03(Local_46.f_1.f_394, Local_46.f_1.f_397 * Vector(1,5f, 1,5f, 1,5f), 0f, 0, 7);
				unk_0xBB0951717202666D(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397);
				unk_0x8D3373CFE9542320(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, false, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_41, 10);
			}
			else if (unk_0x8AD07B6FC24F47C4())
			{
				unk_0x7B9E2A8E7B7BA218("LESTER", 1, 0, 0, 0);
			}
			if (func_149(86))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_41, 1))
				{
					if (func_143(0))
					{
						if (func_199(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_192(1, 0, 1, 0);
							if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
							{
								unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
								unk_0xC0EBC1452FCAB15C(0);
							}
							unk_0x872F1C1F8587CCC7(&iLocal_41, 1);
							unk_0x872F1C1F8587CCC7(&iLocal_41, 2);
						}
					}
				}
			}
			if (unk_0xC80D31E4B587871C(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (unk_0x8EA3C8E091EA5BA4(iLocal_250))
						{
							unk_0x02934BABFD4CD384(iLocal_250, 0);
						}
						if (unk_0x8EA3C8E091EA5BA4(iLocal_251))
						{
							unk_0x02934BABFD4CD384(iLocal_251, 0);
						}
						iLocal_250 = unk_0x5AC38B4D80D4E352(26379945, 724,4682f, -992,0684f, 24,25137f, 5,259225f, 0,000715f, 25,88918f, 44,13121f, 0, 2);
						iLocal_251 = unk_0x5AC38B4D80D4E352(26379945, 724,3727f, -991,3205f, 24,43304f, 31,49925f, 0,000715f, -4,206256f, 44,13121f, 0, 2);
						if (unk_0x6ADD12BF4D6D2587(Global_89475.f_9[0]))
						{
							if (!unk_0x191BE1BC8F26F3C1(Global_89475.f_9[0], 0))
							{
								iLocal_245 = Global_89475.f_9[0];
								unk_0xDD29FF4BAB8AFF9C(iLocal_245, false, 1);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
						{
							if (!unk_0x191BE1BC8F26F3C1(Global_89475[0], 0))
							{
								iLocal_247 = Global_89475[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_185(1, 1, 0, 0);
						unk_0x9B47B379EE749C38(false);
						unk_0x4255E93FCCDE108E(false);
						if (unk_0x6ADD12BF4D6D2587(iLocal_247))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_247, 0))
							{
								unk_0xAA7DE567B3D55DDB(iLocal_250, iLocal_247, 0f, 0f, 0f, 1);
							}
						}
						unk_0xF10DA1539629CC3F(iLocal_251, iLocal_250, 5000, 1, 1);
						unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
						iLocal_43 = unk_0x53C562FD2B9E3AB0();
						iLocal_42++;
						break;
					
					case 2:
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 1200)
						{
							if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
							{
								if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
								{
									if (unk_0xB8DE76287EDC4957(iLocal_247, 0))
									{
										if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_247, 0))
										{
											unk_0x6931076730A4AC5D(&iLocal_252);
											unk_0x4F8A35D7CBC17327(0, iLocal_247, 0);
											unk_0x380C1E7B7740D618(0, 718,1777f, -976,126f, 23,9148f, 1f, 20000, 0,25f, 0, 1193033728);
											unk_0x1B16DD5C115FE009(iLocal_252);
											unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
											unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iLocal_252);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 2400)
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_247))
								{
									if (unk_0xB8DE76287EDC4957(iLocal_247, 0))
									{
										if (unk_0xA8D0477084E86A92(iLocal_245, iLocal_247, 0))
										{
											unk_0x6931076730A4AC5D(&iLocal_253);
											unk_0x4F8A35D7CBC17327(0, iLocal_247, 0);
											unk_0x380C1E7B7740D618(0, 718,1777f, -976,126f, 23,9148f, 1f, 20000, 0,25f, 0, 1193033728);
											unk_0x1B16DD5C115FE009(iLocal_253);
											unk_0xB8E08BD5B184DF4E(iLocal_245);
											unk_0xAB30B1CF01A198C1(iLocal_245, iLocal_253);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 5000)
						{
							unk_0x0EE72DB1CD8A3B86(&iLocal_41, 2);
						}
						break;
					}
			}
			if (unk_0xC80D31E4B587871C(iLocal_41, 1) && !unk_0xC80D31E4B587871C(iLocal_41, 2))
			{
				if (unk_0x0C78C25CF5CD8944("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0xA8113D347D14630F())
					{
						iLocal_246 = unk_0xFC1458A37D98B502();
						if (!unk_0x191BE1BC8F26F3C1(iLocal_246, 0))
						{
							unk_0x4982ECE0928DA13D(iLocal_246, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
						{
							unk_0x4982ECE0928DA13D(iLocal_245, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_41, 9);
						unk_0x4982ECE0928DA13D(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0x872F1C1F8587CCC7(&iLocal_41, 8);
						func_198(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
						func_198(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = unk_0x53C562FD2B9E3AB0();
						unk_0xD0BFA95B279C174F(2048);
					}
					else
					{
						func_113();
						if (!unk_0xC80D31E4B587871C(iLocal_41, 17))
						{
							if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
							{
								unk_0x59C3AC31C7544A28(800);
							}
							unk_0x872F1C1F8587CCC7(&iLocal_41, 17);
						}
						if (unk_0xCE083D214C9DBEF1())
						{
							unk_0x872F1C1F8587CCC7(&iLocal_41, 16);
						}
						if (unk_0xC80D31E4B587871C(iLocal_41, 16))
						{
							if (unk_0x3E9CABD07B829173())
							{
								if (!unk_0xC80D31E4B587871C(iLocal_41, 12))
								{
									func_107(0, 1, 1);
									unk_0x872F1C1F8587CCC7(&iLocal_41, 12);
								}
								if (!unk_0xC80D31E4B587871C(iLocal_41, 13))
								{
									func_107(0, 2, 1);
									unk_0x872F1C1F8587CCC7(&iLocal_41, 13);
								}
								if (!unk_0xC80D31E4B587871C(iLocal_41, 14))
								{
									func_107(0, 3, 1);
									unk_0x872F1C1F8587CCC7(&iLocal_41, 14);
								}
								if (!unk_0xC80D31E4B587871C(iLocal_41, 15))
								{
									func_107(0, 4, 1);
									unk_0x872F1C1F8587CCC7(&iLocal_41, 15);
								}
								func_196(&Local_46);
								if (!unk_0xC80D31E4B587871C(iLocal_41, 0))
								{
									func_195();
									unk_0x872F1C1F8587CCC7(&iLocal_41, 0);
								}
							}
						}
						if (!unk_0xC80D31E4B587871C(iLocal_41, 5))
						{
							if (unk_0x8EA3C8E091EA5BA4(iLocal_250))
							{
								unk_0x7849794435F39D49(iLocal_250, false);
							}
							if (unk_0x8EA3C8E091EA5BA4(iLocal_251))
							{
								unk_0x7849794435F39D49(iLocal_251, false);
							}
							unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
							if (unk_0x8EA3C8E091EA5BA4(iLocal_251))
							{
								unk_0x02934BABFD4CD384(iLocal_251, 0);
							}
							if (unk_0x8EA3C8E091EA5BA4(iLocal_251))
							{
								unk_0x02934BABFD4CD384(iLocal_251, 0);
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_245))
							{
								unk_0x68433819717660CF(&iLocal_245);
							}
							unk_0x872F1C1F8587CCC7(&iLocal_41, 5);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								unk_0x872F1C1F8587CCC7(&iLocal_41, 6);
							}
						}
						if (!unk_0xC80D31E4B587871C(iLocal_41, 12))
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 14058)
							{
								func_107(0, 1, 1);
								unk_0x872F1C1F8587CCC7(&iLocal_41, 12);
							}
						}
						else if (!unk_0xC80D31E4B587871C(iLocal_41, 13))
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 22887)
							{
								func_107(0, 2, 1);
								unk_0x872F1C1F8587CCC7(&iLocal_41, 13);
							}
						}
						else if (!unk_0xC80D31E4B587871C(iLocal_41, 14))
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 27988)
							{
								func_107(0, 3, 1);
								func_196(&Local_46);
								unk_0x872F1C1F8587CCC7(&iLocal_41, 14);
							}
						}
						else if (!unk_0xC80D31E4B587871C(iLocal_41, 15))
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_43) > 42084)
							{
								func_107(0, 4, 1);
								unk_0x872F1C1F8587CCC7(&iLocal_41, 15);
							}
						}
						if (unk_0xC80D31E4B587871C(iLocal_41, 8))
						{
							if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_248 = unk_0xE5D69D5333979D8B(unk_0xA78D8DA2425CB3DB("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0x0EE72DB1CD8A3B86(&iLocal_41, 8);
							}
						}
						if (unk_0xC80D31E4B587871C(iLocal_41, 9))
						{
							if (unk_0x6ADD12BF4D6D2587(unk_0xA78D8DA2425CB3DB("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_245 = unk_0x07F64790D10D1DB5(unk_0xA78D8DA2425CB3DB("Lester", joaat("ig_lestercrest")));
								unk_0x0EE72DB1CD8A3B86(&iLocal_41, 9);
							}
						}
						if (unk_0xBBC745B9F75E27D0("Michael", 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_246, 0))
							{
								unk_0x771A86309E0CA47B(iLocal_246, true);
								unk_0xAE01EF4BC84AFE7C(iLocal_246, 208, true);
								unk_0xAE01EF4BC84AFE7C(iLocal_246, 118, false);
								unk_0xAE01EF4BC84AFE7C(iLocal_246, 213, false);
								unk_0x6EF694689373EE8D(iLocal_246, 708,8129f, -966,3621f, 29,3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0xBBC745B9F75E27D0("Lester", 0))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_248))
								{
									unk_0xA9D382E7BA095148(iLocal_248, iLocal_245, unk_0xDD09837E5235FE91(iLocal_245, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
							{
								unk_0x771A86309E0CA47B(iLocal_245, true);
								unk_0xAE01EF4BC84AFE7C(iLocal_245, 208, true);
								unk_0xAE01EF4BC84AFE7C(iLocal_245, 118, false);
								unk_0xAE01EF4BC84AFE7C(iLocal_245, 213, false);
								unk_0x6EF694689373EE8D(iLocal_245, 708,3643f, -963,9194f, 29,4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x65E1868AA01313FF(0))
						{
							if (!unk_0xC80D31E4B587871C(iLocal_41, 0))
							{
								func_195();
								unk_0x872F1C1F8587CCC7(&iLocal_41, 0);
							}
							if (!unk_0xC80D31E4B587871C(iLocal_41, 7))
							{
								if (!unk_0x191BE1BC8F26F3C1(iLocal_246, 0))
								{
									unk_0xB3A8974D2C811672(iLocal_246, false, 0);
								}
								if (!unk_0x191BE1BC8F26F3C1(iLocal_245, 0))
								{
									unk_0xB3A8974D2C811672(iLocal_245, false, 0);
								}
								if (unk_0x6ADD12BF4D6D2587(iLocal_248))
								{
									unk_0xB3A8974D2C811672(iLocal_248, false, 0);
								}
								unk_0x872F1C1F8587CCC7(&iLocal_41, 7);
							}
							func_106(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_198(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
			func_198(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
			if (func_143(0))
			{
				if (func_199(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0x872F1C1F8587CCC7(&iLocal_41, 1);
				}
			}
			if (unk_0xC80D31E4B587871C(iLocal_41, 1))
			{
				func_195();
				func_106(16, 0);
			}
		}
	}
	else
	{
		if (unk_0x0C78C25CF5CD8944("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0xA6C03E3E2533F8F3();
		}
		if (unk_0xC80D31E4B587871C(iLocal_41, 10))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_41, 10);
		}
	}
}

void func_195()//Position - 0xF1E5
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_203(&Local_46);
	func_67(&Local_46);
}

void func_196(var uParam0)//Position - 0xF207
{
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
	{
		if (!unk_0xA8113D347D14630F())
		{
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_197(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 1);
		unk_0x0EE72DB1CD8A3B86(&Global_88987, *uParam0);
	}
}

void func_197(var uParam0)//Position - 0xF253
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_428[iVar0]))
		{
			unk_0x452336926718D62A(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF28F
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

int func_199(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xF32A
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
		if (func_201(0))
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
		if (!func_143(iParam2))
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
			func_200(iParam0, iParam4);
		}
	}
	return 2;
}

void func_200(var uParam0, int iParam1)//Position - 0xF461
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

int func_201(int iParam0)//Position - 0xF4B0
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_202()//Position - 0xF4D2
{
	Global_92872 = 1;
}

void func_203(var uParam0)//Position - 0xF4DF
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
		{
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 2))
			{
				func_69(uParam0, func_204(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				func_115(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}

int func_204(int iParam0)//Position - 0xF534
{
	switch (iParam0)
	{
		case 0:
			return func_221(18);
			break;
		
		case 1:
			return func_221(22);
			break;
		
		case 2:
			return func_221(40);
			break;
		
		case 3:
			return func_221(8);
			break;
		
		case 4:
			return func_221(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_205()//Position - 0xF5A1
{
	return Global_71118;
}

int func_206(var uParam0)//Position - 0xF5AD
{
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
	{
		func_196(uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 0))
	{
		func_207(uParam0);
	}
	return 1;
}

void func_207(var uParam0)//Position - 0xF5DC
{
	unk_0x751FF861325F816B("HEIST_BULLETIN_BOARD");
	unk_0x14776E43F90DD454(joaat("prop_ld_planning_pin_01"));
	unk_0x14776E43F90DD454(joaat("prop_ld_planning_pin_02"));
	unk_0x14776E43F90DD454(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_414));
	}
	unk_0xF40900F61CC88931(5, false);
	unk_0x0EE72DB1CD8A3B86(&Global_88988, *uParam0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 0);
}

void func_208(var uParam0, float fParam1, float fParam2)//Position - 0xF646
{
	float fVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		fVar0 = system::vdist2(uParam0->f_401, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
		if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
		{
			func_216(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xC80D31E4B587871C(Global_88987, *uParam0))
		{
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 0))
			{
				if (func_215(uParam0))
				{
					if (unk_0xC80D31E4B587871C(Global_88987, *uParam0))
					{
						if (unk_0xC80D31E4B587871C(Global_88989, *uParam0))
						{
							func_210(uParam0);
						}
					}
					else
					{
						func_210(uParam0);
					}
				}
			}
			else
			{
				func_209(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xC80D31E4B587871C(Global_88987, *uParam0))
		{
			if (unk_0xC80D31E4B587871C(uParam0->f_449, 0))
			{
				if (unk_0xC80D31E4B587871C(uParam0->f_449, 1))
				{
					func_196(uParam0);
				}
				func_207(uParam0);
			}
		}
	}
}

void func_209(var uParam0)//Position - 0xF72F
{
	if (!unk_0x076CF0011A36A539())
	{
		return;
	}
	unk_0xBCBC53983EC3B1BA(&(uParam0->f_1.f_272), 5);
	unk_0x1CF95440F1970B4F("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		unk_0x6FF834D85E2DD4C6(joaat("prop_ld_planning_pin_01"));
		unk_0x6FF834D85E2DD4C6(joaat("prop_ld_planning_pin_02"));
		unk_0x6FF834D85E2DD4C6(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = unk_0x4A8BF4917A66587B(&(uParam0->f_1.f_268));
	uParam0->f_414 = unk_0x4A8BF4917A66587B("INSTRUCTIONAL_BUTTONS");
	unk_0x872F1C1F8587CCC7(&Global_88986, *uParam0);
	unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 0);
}

void func_210(var uParam0)//Position - 0xF7AD
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(uParam0->f_449, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_214(uParam0);
		func_213(uParam0);
		func_211(uParam0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 1);
	}
}

void func_211(var uParam0)//Position - 0xF80A
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (system::to_float((unk_0x63A6486593EC7EC3(0, 65535) - 32767)) / 4000f);
			fVar3 = (system::to_float((unk_0x63A6486593EC7EC3(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_212(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
			uParam0->f_428[iVar0] = unk_0x5E35CF35E65D69B9(iVar1, vVar4, true, true, false);
			unk_0x59AF3B40AE222194(uParam0->f_428[iVar0], fVar2, 0f, (uParam0->f_404 + fVar3), 2, 1);
			unk_0xDD29FF4BAB8AFF9C(uParam0->f_428[iVar0], true, 0);
			unk_0x1A0806871323CD16(uParam0->f_428[iVar0], true);
			unk_0xB18E1DBC397238E1(uParam0->f_428[iVar0], false, 0);
			unk_0xE403B4326BB26E78(uParam0->f_428[iVar0], 0);
			unk_0xEDC33A771FAEB393(uParam0->f_428[iVar0], true);
		}
		iVar0++;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_88989, *uParam0);
}

Vector3 func_212(var uParam0, var uParam1)//Position - 0xF93F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0,5f));
	fVar5 = (-fVar1 * (fVar3 - 0,5f));
	fVar6 = uParam0->f_404;
	vVar7 = { uParam0->f_401 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * system::cos((90f - fVar6))), (fVar4 * system::sin((90f - fVar6)))) };
	return vVar7;
}

void func_213(var uParam0)//Position - 0xF9BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		iVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = unk_0xC80D31E4B587871C(Global_104555.f_1.f_120[iVar1], iVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xD07D5CD276368D36(uParam0->f_1.f_118[iVar0]);
			unk_0x1869584A8A72FEDD(bVar3);
			unk_0x271AA5469AF471B3();
		}
		else
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xD07D5CD276368D36(uParam0->f_1.f_118[iVar0]);
			unk_0x1869584A8A72FEDD(bVar3);
			unk_0xD07D5CD276368D36(0);
			unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_141[iVar0 /*2*/]));
			unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			unk_0x271AA5469AF471B3();
		}
		iVar0++;
	}
}

void func_214(var uParam0)//Position - 0xFA9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "CREATE_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
	unk_0xD07D5CD276368D36(2);
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_14));
	unk_0x9499D7329FB840A2(system::to_float(uParam0->f_1.f_14.f_1));
	unk_0x271AA5469AF471B3();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (func_32(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT");
			unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
			unk_0xD07D5CD276368D36(iVar1);
			unk_0xD07D5CD276368D36(iVar3);
			func_8(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			unk_0x271AA5469AF471B3();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "DISPLAY_VIEW");
	unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
	unk_0x271AA5469AF471B3();
	if (func_32(*uParam0, uParam0->f_1.f_210))
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
		unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	else
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_VIEW");
		unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
		unk_0x1869584A8A72FEDD(false);
		unk_0x271AA5469AF471B3();
	}
}

int func_215(var uParam0)//Position - 0xFBDD
{
	if (!unk_0x34D11AB5BA7922C2(uParam0->f_413))
	{
		return 0;
	}
	if (!unk_0x34D11AB5BA7922C2(uParam0->f_414))
	{
		return 0;
	}
	if (!unk_0x9F0887BCBFCF3C2F(5))
	{
		return 0;
	}
	if (unk_0x076CF0011A36A539())
	{
		if (!unk_0x1CF95440F1970B4F("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_planning_pin_01")) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_planning_pin_02"))) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x872F1C1F8587CCC7(&Global_88988, *uParam0);
	return 1;
}

void func_216(var uParam0)//Position - 0xFC78
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_217(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0,5f);
		fVar1 = (uParam0->f_1.f_5 * 0,5f);
		unk_0xED59C9855A8B5CE3(uParam0->f_413, uParam0->f_401 + Vector(fVar1, (fVar0 * system::cos((90f - uParam0->f_404))), (fVar0 * system::sin((90f - uParam0->f_404)))), 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_217(var uParam0)//Position - 0xFD01
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (unk_0xC80D31E4B587871C(Global_88986, *uParam0))
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 16);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 15);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 14);
		unk_0x0EE72DB1CD8A3B86(&Global_88986, *uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_117)
		{
			iVar1 = uParam0->f_1.f_186[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0x008F3E3CC076EA0E(uParam0->f_413, "SHOW_HEIST_ASSET");
			unk_0xD07D5CD276368D36(uParam0->f_1.f_118[iVar0]);
			unk_0x1869584A8A72FEDD(bVar2);
			unk_0xD07D5CD276368D36(0);
			unk_0x271AA5469AF471B3();
			iVar0++;
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 16);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_33)
		{
			if (func_32(*uParam0, uParam0->f_1.f_75[iVar0]))
			{
				if (!unk_0x6ADD12BF4D6D2587(uParam0->f_428[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (system::to_float((unk_0x63A6486593EC7EC3(0, 65535) - 32767)) / 4000f);
					fVar5 = (system::to_float((unk_0x63A6486593EC7EC3(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_212(uParam0, &(uParam0->f_1.f_34[iVar0 /*2*/])) };
					uParam0->f_428[iVar0] = unk_0x5E35CF35E65D69B9(iVar3, vVar6, true, true, false);
					unk_0x59AF3B40AE222194(uParam0->f_428[iVar0], fVar4, 0f, (uParam0->f_404 + fVar5), 2, 1);
					unk_0xDD29FF4BAB8AFF9C(uParam0->f_428[iVar0], true, 0);
					unk_0x1A0806871323CD16(uParam0->f_428[iVar0], true);
					unk_0xB18E1DBC397238E1(uParam0->f_428[iVar0], false, 0);
					unk_0xE403B4326BB26E78(uParam0->f_428[iVar0], 0);
					unk_0xEDC33A771FAEB393(uParam0->f_428[iVar0], true);
				}
			}
			else if (!unk_0x6ADD12BF4D6D2587(uParam0->f_428[iVar0]))
			{
				unk_0x452336926718D62A(&(uParam0->f_428[iVar0]));
			}
			iVar0++;
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 15);
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_449, 14))
	{
		func_218(uParam0);
		func_33(uParam0);
		func_214(uParam0);
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 14);
	}
}

void func_218(var uParam0)//Position - 0xFF4D
{
	unk_0x008F3E3CC076EA0E(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	unk_0xD07D5CD276368D36(uParam0->f_415 + 1);
	unk_0x271AA5469AF471B3();
}

bool func_219(int iParam0)//Position - 0xFF71
{
	return Global_35861 == iParam0;
}

int func_220(int iParam0)//Position - 0xFF7F
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_86963[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_83730)
	{
		if (Global_83730[iVar0 /*5*/] != -1)
		{
			if (Global_71125.f_109[Global_83730[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0xFFE7
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_222(var uParam0, int iParam1)//Position - 0x10015
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_88924[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_88924[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { vVar0 };
	uParam0->f_404 = fVar1;
	uParam0->f_405 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * system::cos((360f - fVar1))), (-uParam0->f_1.f_8 * system::sin((360f - fVar1)))) };
	uParam0->f_408 = { -0,85f, 0f, fVar1 };
	unk_0x872F1C1F8587CCC7(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 1);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_223(var uParam0, var uParam1)//Position - 0x100E1
{
	func_232(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708,9957f, -965,256f, 31,39533f, 5,5f, 6,25f, 4f);
	func_231(uParam0, 750, 540, 2,1f, 1,47f, 3,6f, 2,05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_230(uParam0, 20f, 22f, 28f);
	func_229(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_228(uParam0, 1, "CRW_GM", "");
	func_228(uParam0, 4, "CRW_NR", "");
	func_228(uParam0, 6, "CRW_PH", "");
	func_228(uParam0, 7, "CRW_CF", "");
	func_228(uParam0, 8, "CRW_ET", "");
	func_228(uParam0, 9, "CRW_KD", "");
	func_228(uParam0, 10, "CRW_PM", "CRM_PM");
	func_228(uParam0, 12, "CRW_RL", "CRM_RL");
	func_227(uParam0, 0, 0, 0, 0);
	func_227(uParam0, 6, 0, 0, 0);
	func_227(uParam0, 1, 0, 0, 0);
	func_227(uParam0, 3, 1, 0, 0);
	func_227(uParam0, 11, 2, 0, 0);
	func_227(uParam0, 5, 3, 0, 0);
	func_227(uParam0, 9, 3, 0, 0);
	func_227(uParam0, 2, 4, 0, 0);
	func_227(uParam0, 7, 9, 0, 0);
	func_227(uParam0, 10, 10, 0, 0);
	func_226(uParam0, 2, 2, "H_TD_SEC");
	func_226(uParam0, 2, 2, "H_TD_PHOTO");
	func_226(uParam0, 2, 5, "H_TD_PLAN");
	func_226(uParam0, 2, 6, "H_TD_CREW");
	func_226(uParam0, 7, 11, "H_TD_CARB");
	func_226(uParam0, 8, 9, "H_TD_BUGS");
	func_226(uParam0, 8, 10, "H_TD_GAS");
	func_225(uParam0, 0, 203, 74);
	func_225(uParam0, 1, 368, 181);
	func_225(uParam0, 1, 556, 189);
	func_225(uParam0, 2, 690, 63);
	func_225(uParam0, 2, 673, 308);
	func_225(uParam0, 2, 671, 406);
	func_225(uParam0, 3, 245, 244);
	func_225(uParam0, 4, 70, 68);
	func_224(uParam0, 0, "JHP12", 214, 165, 1);
	func_224(uParam0, 0, "JHP13", 254, 46, 1);
	func_224(uParam0, 0, "JHP14", 70, 97, 1);
	func_224(uParam0, 0, "JHP15", 254, 275, 1);
	func_224(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_224(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x10387
{
	struct<2> Var0;
	
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_225(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10400
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x10444
{
	struct<8> Var0;
	
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x10494
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_228(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x104E4
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!unk_0x74C475EB8E73D398(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_304[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_304[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_304[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_229(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x1057E
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var1 };
	uParam0->f_108[0 /*4*/] = { Var2 };
	uParam0->f_108[1 /*4*/] = { Var3 };
	uParam0->f_280[1 /*2*/] = { Var4 };
	uParam0->f_280[2 /*2*/] = { Var5 };
	uParam0->f_280[0 /*2*/] = { Var6 };
	uParam0->f_280[3 /*2*/] = { Var7 };
}

void func_230(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x10622
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_231(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x1063C
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)//Position - 0x1070A
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { vParam11 };
	uParam0->f_397 = { vParam12 };
}

int func_233(int iParam0, int iParam1)//Position - 0x10776
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_234(int iParam0)//Position - 0x1078C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_9055.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_235()//Position - 0x107E6
{
	if (unk_0x0C78C25CF5CD8944("JH_1_MCS_4P2") || unk_0x0C78C25CF5CD8944("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0xA6C03E3E2533F8F3();
	}
	func_106(16, 0);
	func_106(17, 0);
	func_106(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	unk_0xCA107A9AAF17E75F(iLocal_249, 0);
	if (iLocal_254 != -1)
	{
		if (unk_0xA12FA3F7428EE798(iLocal_254))
		{
			unk_0x7DC528E86B55C67E(iLocal_254);
		}
	}
	unk_0xD581373770173F1F();
	unk_0x8D3373CFE9542320(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
	unk_0xC0EBC1452FCAB15C(5);
	if (iLocal_45 != -1)
	{
		func_153(&iLocal_45);
	}
	while (!func_206(&Local_46))
	{
		system::wait(0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

