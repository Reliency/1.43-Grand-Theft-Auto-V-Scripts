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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	struct<27> Local_41 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_42[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 16;
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
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0,0375f;
	fLocal_29 = 0,17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vLocal_40 = { -690,938f, 512,2703f, 109,3639f };
	iLocal_52 = -1;
	iLocal_60 = 60000;
	iLocal_231 = 99;
	if (unk_0x7D9C4B359376D38A(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		unk_0x96A3D9A8A4C7AFD4();
	}
	iLocal_51 = Global_104555.f_10019.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_41, joaat("prop_ch2_09c_garage_door"), -689,81f, 510,34f, 109,98f, vLocal_40, -688,4919f, 507,2549f, 108,9186f, -691,8835f, 516,2689f, 113,4316f, 9,25f, -687,4553f, 507,5179f, 109,3635f, -690,9484f, 506,2783f, 109,3631f);
	func_83(&Local_41, 2);
	Local_41.f_4 = 3;
	unk_0x9B8406983378711E(vLocal_40, 5f, 0, 0, 0, 0, false, 0);
	func_82(&vLocal_61, -691,9059f, 515,8249f, 108,6139f, -684,0605f, 493,0171f, 110,8504f, 8,25f);
	unk_0xA846A937885EB977(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8,25f, 0, 0, 1);
	unk_0xA846A937885EB977(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 0, 0, 1);
	func_81(-688,5f, 503,7f, 110,2f, 30f, &vVar0, &vVar1);
	iLocal_64 = unk_0xCB389937EDB1519A(vVar0, vVar1, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_104555.f_10019.f_104 == 0)
	{
		Global_104555.f_10019.f_104 = unk_0xD3ECC7A5C90D3AA4();
	}
	func_77(1);
	func_76(0);
	while (true)
	{
		if (func_89(90) == 1)
		{
			func_88();
			func_90();
		}
		func_75(unk_0xFC1458A37D98B502());
		if (unk_0x5A0744D504CC705F() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_46)
		{
			case 0:
				func_64(&iLocal_45);
				break;
			
			case 4:
				func_63(&iLocal_45);
				break;
			
			case 1:
				func_62(&iLocal_45);
				break;
			
			case 2:
				func_56(&iLocal_45);
				break;
			
			case 3:
				func_52(&iLocal_45);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_41);
		if (func_43(&Local_41))
		{
			if (func_37(&Local_41))
			{
				if (unk_0x4E7809A068F46A31() == Global_70583)
				{
					Global_70583 = 0;
					Global_104555.f_32429.f_5588 = 0;
				}
				unk_0x9B8406983378711E(Local_41.f_14, 8,5f, 0, 0, 0, 0, false, 0);
				Global_104555.f_10019.f_103 = iLocal_51;
				func_35();
				func_34(&uLocal_65, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
				func_22(&uLocal_65, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_19();
			}
		}
		if (Global_104555.f_10019.f_104 != 0)
		{
			iLocal_49 = (Global_104555.f_10019.f_104 + 14 % func_18(unk_0xEAF455949B108589(), unk_0x93F322D6E98835CC()));
			if (((unk_0xD3ECC7A5C90D3AA4() == iLocal_49 && !func_17(0)) && !unk_0xC445AB6B86A2138E(unk_0x9EB17624F44A8DA4())) && unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_230, &uLocal_232, &iLocal_231);
		if ((iLocal_59 > 0 && unk_0x53C562FD2B9E3AB0() > iLocal_59) && iLocal_231 == 99)
		{
			iLocal_59 = 0;
			if (func_86())
			{
				func_76(6);
			}
		}
		system::wait(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)//Position - 0x3E4
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0xD704C81492296A37("MIDSIZED_MESSAGE");
			if (unk_0x34D11AB5BA7922C2(*iParam0))
			{
				iVar0 = unk_0xD0CA83418A236CB4();
				unk_0x4AFBCBFDE748D4E0(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			unk_0x008F3E3CC076EA0E(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x7E099EB35339C80D("EPS_CAR_TITLE");
			unk_0x9748595E4799A2CF();
			unk_0x7E099EB35339C80D("EPS_CAR_NOTE");
			unk_0x6223D539BCD39E76(func_3());
			unk_0x9748595E4799A2CF();
			unk_0x271AA5469AF471B3();
			*uParam1 = unk_0x53C562FD2B9E3AB0();
			*iParam2++;
			break;
		
		case 2:
			if ((unk_0x53C562FD2B9E3AB0() - *uParam1) > 7000)
			{
				unk_0x008F3E3CC076EA0E(*iParam0, "SHARD_ANIM_OUT");
				unk_0xD07D5CD276368D36(1);
				unk_0x9499D7329FB840A2(0,33f);
				unk_0x271AA5469AF471B3();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x34D11AB5BA7922C2(*iParam0))
				{
					unk_0x28E092B1E386EB67(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x34D11AB5BA7922C2(*iParam0))
				{
					unk_0x28E092B1E386EB67(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (unk_0x34D11AB5BA7922C2(*iParam0))
			{
				unk_0xA68F7B004463AB6F(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()//Position - 0x539
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

int func_3()//Position - 0x563
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xC80D31E4B587871C(iLocal_51, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)//Position - 0x596
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_49(2, vLocal_42[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_52))
	{
		func_48(2, vLocal_42[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, vLocal_42[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_43)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_43[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_104555.f_10019.f_104 = unk_0xD3ECC7A5C90D3AA4();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)//Position - 0x632
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46306[iVar0 /*203*/].f_9 - 1);
	if (!Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_37006[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_37006[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_37006[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_37006[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46306[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x99F
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xA8113D347D14630F())
	{
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xE3C33644878DCCFD("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xE3C33644878DCCFD(sParam3);
				if (!unk_0xAB019B170BF1309C(sParam4))
				{
					unk_0xA6D2B267C377D7B2(sParam4);
				}
				if (!unk_0xAB019B170BF1309C(sParam5))
				{
					unk_0xA6D2B267C377D7B2(sParam5);
				}
				if (!unk_0xAB019B170BF1309C(sParam6))
				{
					unk_0xA6D2B267C377D7B2(sParam6);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xA6D2B267C377D7B2(sParam7);
				}
				if (!unk_0xAB019B170BF1309C(sParam8))
				{
					unk_0xA6D2B267C377D7B2(sParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam9))
				{
					unk_0xA6D2B267C377D7B2(sParam9);
				}
				if (!unk_0xAB019B170BF1309C(sParam10))
				{
					unk_0xA6D2B267C377D7B2(sParam10);
				}
				if (!unk_0xAB019B170BF1309C(sParam11))
				{
					unk_0xA6D2B267C377D7B2(sParam11);
				}
				if (!unk_0xAB019B170BF1309C(sParam12))
				{
					unk_0xA6D2B267C377D7B2(sParam12);
				}
				if (!unk_0xAB019B170BF1309C(sParam13))
				{
					unk_0xA6D2B267C377D7B2(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0x9F42263EE935D84B(&cVar2, &cVar2, 0, 2, unk_0xB2E1B414DD88808E(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0x9F42263EE935D84B("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xB2E1B414DD88808E(func_8(iParam1)), 0));
		}
		switch (Global_14453)
		{
			case 0:
				StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
				Global_36998++;
				if (Global_36998 > 16)
				{
					Global_36998 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
				Global_37000++;
				if (Global_37000 > 16)
				{
					Global_37000 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
				Global_36999++;
				if (Global_36999 > 16)
				{
					Global_36999 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4AFBCBFDE748D4E0(-1, "Notification", &Global_14442, 1);
	}
}

void func_7(var uParam0)//Position - 0xB85
{
	Global_37001[Global_37005] = uParam0;
	Global_16814 = 1;
	Global_16813 = uParam0;
	Global_37005++;
	if (Global_37005 == 3)
	{
		Global_37005 = 0;
	}
}

char* func_8(int iParam0)//Position - 0xBB3
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)//Position - 0xF1E
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[0 /*29*/].f_7));
		
		case 1:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[1 /*29*/].f_7));
		
		case 2:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[2 /*29*/].f_7));
		
		case 7:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[12 /*29*/].f_7));
		
		case 4:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[60 /*29*/].f_7));
		
		case 6:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[62 /*29*/].f_7));
		
		case 3:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[14 /*29*/].f_7));
		
		case 16:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[97 /*29*/].f_7));
		
		case 19:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[99 /*29*/].f_7));
		
		case 15:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[15 /*29*/].f_7));
		
		case 26:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[30 /*29*/].f_7));
		
		case 27:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[17 /*29*/].f_7));
		
		case 29:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[20 /*29*/].f_7));
		
		case 30:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[43 /*29*/].f_7));
		
		case 31:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[44 /*29*/].f_7));
		
		case 32:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[19 /*29*/].f_7));
		
		case 34:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[40 /*29*/].f_7));
		
		case 36:
			return unk_0xB2E1B414DD88808E("CELL_E_381");
		
		case 38:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[122 /*29*/].f_7));
		
		case 40:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[125 /*29*/].f_7));
		
		case 41:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[113 /*29*/].f_7));
		
		case 42:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[126 /*29*/].f_7));
		
		case 43:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[127 /*29*/].f_7));
		
		case 44:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[124 /*29*/].f_7));
		
		case 45:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[114 /*29*/].f_7));
		
		case 46:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[115 /*29*/].f_7));
		
		case 47:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[116 /*29*/].f_7));
		
		case 48:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[123 /*29*/].f_7));
		
		case 49:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[117 /*29*/].f_7));
		
		case 50:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[118 /*29*/].f_7));
		
		case 51:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[119 /*29*/].f_7));
		
		case 52:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[120 /*29*/].f_7));
		
		case 53:
			return unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)//Position - 0x1371
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_11(int iParam0)//Position - 0x13A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46306[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46306[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46306[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)//Position - 0x1406
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)//Position - 0x14BB
{
	if (iParam0 == iLocal_43[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_43[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_43[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_43[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_43[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)//Position - 0x151C
{
	return unk_0xC80D31E4B587871C(iLocal_51, iParam0);
}

bool func_15(int iParam0)//Position - 0x152C
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(iLocal_51, iParam0 + 5);
}

int func_16()//Position - 0x1548
{
	return (5 - func_3());
}

int func_17(int iParam0)//Position - 0x1556
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

int func_18(int iParam0, int iParam1)//Position - 0x15B0
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

void func_19()//Position - 0x1652
{
	int iVar0;
	
	iLocal_231 = 0;
	unk_0xFA3CE529DBB66C85(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xBFFF62F75445099D(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)//Position - 0x1694
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

int func_21(char* sParam0)//Position - 0x16E5
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16F8
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x1746
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
					func_32();
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
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_30();
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
				func_28();
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
				if (func_27())
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
			if (func_26())
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
			func_25();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_24();
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
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x1A12
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

void func_25()//Position - 0x1A44
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

int func_26()//Position - 0x1AD9
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1B00
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

void func_28()//Position - 0x1B99
{
	if (func_29(14))
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
		Global_14453 = func_70();
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

bool func_29(int iParam0)//Position - 0x1C3B
{
	return Global_35861 == iParam0;
}

void func_30()//Position - 0x1C49
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

bool func_31(int iParam0, int iParam1)//Position - 0x1CA1
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

void func_32()//Position - 0x1CDC
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

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1D33
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

void func_34(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D89
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

int func_35()//Position - 0x1E24
{
	if (func_36(0))
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

bool func_36(bool bParam0)//Position - 0x1E6F
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_37(var uParam0)//Position - 0x1E9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (unk_0x0F3033474C49912D(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26)
			{
				if (func_38(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_104555.f_10019.f_104 = unk_0xD3ECC7A5C90D3AA4();
		iLocal_59 = (unk_0x53C562FD2B9E3AB0() + iLocal_60);
	}
	return iVar2;
}

int func_38(int iParam0)//Position - 0x1F41
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
	if (func_42(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_41(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_40(iVar0, unk_0xDE523AF6F7B269AB(iParam0) < 875);
				func_39(iVar0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)//Position - 0x1FA1
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_51, iParam0);
		iLocal_52 = iParam0;
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_51, iParam0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1FC5
{
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_51, iParam0 + 5);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_51, iParam0 + 5);
	}
}

int func_41(int iParam0, int iParam1)//Position - 0x1FE9
{
	if (iParam0 == iLocal_43[iParam1])
	{
		return 1;
	}
	if (iLocal_43[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x204B
{
	if (!func_75(iParam0))
	{
		return 1;
	}
	if (unk_0xDE523AF6F7B269AB(iParam0) < 750)
	{
		return 1;
	}
	if (unk_0xD29635EFF2A67134(iParam0, 1) || unk_0xD29635EFF2A67134(iParam0, 0))
	{
		return 1;
	}
	return unk_0xE0F4BDE2BD09B0C6(iParam0) > 0;
}

bool func_43(var uParam0)//Position - 0x2094
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_44(var uParam0)//Position - 0x20AD
{
	vector3 vVar0;
	
	uParam0->f_26 = 0;
	if (unk_0x396220A87B46A7B8(uParam0->f_19[0 /*3*/], 1,2f, 0, 1, 1, 0, 0, unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (unk_0x396220A87B46A7B8(uParam0->f_19[1 /*3*/], 1,2f, 0, 1, 1, 0, 0, unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		vVar0 = { func_45(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0,5f, 1) };
		uParam0->f_26 = unk_0x396220A87B46A7B8(vVar0, 1,2f, 0, 1, 1, 0, 0, unk_0xFC1458A37D98B502(), 0);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			unk_0x0B9D04994D02CC2F(iLocal_47);
			iLocal_48 = 0;
			unk_0x23A4CE7F9EBB02D4(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_48)
		{
			unk_0x23A4CE7F9EBB02D4(iLocal_47, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_48 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			unk_0x0B9D04994D02CC2F(iLocal_47);
			iLocal_48 = 0;
			unk_0x23A4CE7F9EBB02D4(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_48)
		{
			unk_0x23A4CE7F9EBB02D4(iLocal_47, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_48 = 1;
		}
	}
	if (unk_0x50126692B8A3590A(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0xFB3E858D6C41D854(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
	}
}

Vector3 func_45(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x226D
{
	if (bParam3)
	{
		fParam2 = func_46(fParam2, 0f, 1f);
	}
	return vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1 - vParam0;
}

float func_46(float fParam0, float fParam1, float fParam2)//Position - 0x2296
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

void func_47(int iParam0)//Position - 0x22BD
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xC80D31E4B587871C(Global_104555.f_24956, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46306[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, bool bParam2)//Position - 0x22FA
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_46306[iVar0 /*203*/].f_10[(Global_46306[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_49(int iParam0, int iParam1, bool bParam2)//Position - 0x2421
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_46306[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46306[iVar0 /*203*/].f_2 = iParam0;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46306[iVar0 /*203*/].f_10[Global_46306[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46306[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46306[iVar0 /*203*/].f_4[iVar1] == Global_37006[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46306[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46306[iVar0 /*203*/].f_4[Global_46306[iVar0 /*203*/].f_3] = Global_37006[iParam1 /*12*/].f_3;
			Global_46306[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46306[iVar0 /*203*/].f_4[iVar1] == Global_37006[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46306[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46306[iVar0 /*203*/].f_4[Global_46306[iVar0 /*203*/].f_3] = Global_37006[iParam1 /*12*/].f_2;
			Global_46306[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46306[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46306[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_50(Global_46306[iVar0 /*203*/].f_4[iVar1], Global_46306[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x261D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_40331[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_40331[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_10(Global_37006[iVar5 /*12*/].f_1) };
		if (Global_37006[iVar5 /*12*/].f_2 == iParam0 && !Global_37006[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_37006[iVar5 /*12*/].f_2;
		iVar0 = Global_45944[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_45944[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
						}
						break;
					
					case 1:
						Global_36999 = (Global_36999 - 1);
						if (Global_36999 < 0)
						{
							Global_36999 = 0;
						}
						break;
					
					case 2:
						Global_37000 = (Global_37000 - 1);
						if (Global_37000 < 0)
						{
							Global_37000 = 0;
						}
						break;
					}
				}
		}
		Global_45944[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45944[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_45944[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45944[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45944[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_45944[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36998 = (Global_36998 - 1);
						if (Global_36998 < 0)
						{
							Global_36998 = 0;
						}
						break;
					
					case 1:
						Global_36999 = (Global_36999 - 1);
						if (Global_36999 < 0)
						{
							Global_36999 = 0;
						}
						break;
					
					case 2:
						Global_37000 = (Global_37000 - 1);
						if (Global_37000 < 0)
						{
							Global_37000 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_46306[iVar9 /*203*/].f_1 == iParam1 && Global_46306[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_45944[iParam0 /*120*/].f_18[iVar0] = Global_46306[iVar8 /*203*/].f_1;
		Global_45944[iParam0 /*120*/].f_1[iVar0] = (Global_46306[iVar8 /*203*/].f_9 - 1);
		Global_45944[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45944[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45944[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45944[iParam0 /*120*/]++;
		iVar10 = Global_45944[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_46306[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_37006[iVar11 /*12*/].f_2;
		if (Global_46306[iVar8 /*203*/].f_10[(Global_46306[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46306[iVar8 /*203*/].f_10[(Global_46306[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_37006[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45944[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_51(int iParam0, bool bParam1)//Position - 0x29F1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46306[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46306[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46306[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46306[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46306[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46306[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46306[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46306[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45944[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45944[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45944[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45944[iVar6 /*120*/].f_18[iVar8] == Global_46306[iVar4 /*203*/].f_1)
							{
								if (Global_45944[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36998 = (Global_36998 - 1);
											break;
										
										case 1:
											Global_36999 = (Global_36999 - 1);
											break;
										
										case 2:
											Global_37000 = (Global_37000 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46306[iVar4 /*203*/].f_2 = iParam0;
	Global_46306[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46306[iVar4 /*203*/] = 1;
	}
	Global_104555.f_21007.f_310++;
	if (Global_104555.f_21007.f_310 == 0)
	{
		Global_104555.f_21007.f_310 = 1;
	}
	Global_46306[iVar4 /*203*/].f_1 = Global_104555.f_21007.f_310;
	Global_46306[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_52(int iParam0)//Position - 0x2C09
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_44);
			func_54("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
				if (func_75(iVar0))
				{
					if (unk_0x1635D2AD9D560E95(iVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				func_54("EPS_DROP_ESCAPE", -1);
				func_76(2);
			}
			break;
	}
}

int func_53()//Position - 0x2CA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_75(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		iLocal_54 = 0;
		return 0;
	}
	iVar1 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
	if (!func_75(iVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(unk_0x82FF3DFBC3965CC0(iVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_54)
					{
						func_54("EPS_DROP_FAIL", -1);
						iLocal_54 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(char* sParam0, int iParam1)//Position - 0x2D38
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_55(int iParam0)//Position - 0x2D4F
{
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xAAAC88CC20771601(*iParam0, 0);
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

void func_56(int iParam0)//Position - 0x2D6F
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_41, 1);
			Local_41.f_4 = 4;
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x49779D62887BC4A2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1,5f);
			}
			*iParam0 = 2;
			iLocal_50 = 0;
			iLocal_58 = 0;
			break;
		
		case 2:
			switch (iLocal_50)
			{
				case 0:
					if (iLocal_55 == 1 && !Local_41.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							unk_0x3E80C2F7BC665259(1);
						}
					}
					if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
					}
					if (func_75(iVar0) && unk_0x1635D2AD9D560E95(iVar0) > 0)
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, 0, 0) != unk_0xFC1458A37D98B502())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_41.f_26)
					{
						if (iLocal_56 == 0)
						{
							if (func_60(iVar0))
							{
								if (unk_0x0F3033474C49912D(iVar0, Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, 1, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_58 = 0;
									iLocal_56 = 1;
									iLocal_55 = 0;
								}
							}
						}
						if (func_58(unk_0xFC1458A37D98B502(), Local_41.f_14, 0) < 3f)
						{
							func_55(&iLocal_44);
						}
						if (func_58(unk_0xFC1458A37D98B502(), Local_41, 0) > (15f + 5f))
						{
							func_83(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_56 = 0;
							iLocal_55 = 0;
							iLocal_58 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_41) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							func_83(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_58 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_41.f_26 && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
					{
						if (iLocal_58 == 0)
						{
							iLocal_58 = unk_0x53C562FD2B9E3AB0();
						}
						else if ((unk_0x53C562FD2B9E3AB0() - iLocal_58) > 500)
						{
							if (iLocal_55 == 0)
							{
								unk_0x84CDD933AFA470D2();
								func_54("EPS_DROP_MESS", -1);
								iLocal_55 = 1;
								iLocal_56 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_57(var uParam0)//Position - 0x2F81
{
	return (!uParam0->f_26 && !unk_0x396220A87B46A7B8(uParam0->f_14, 6,2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_58(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x2FAA
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

void func_59(char* sParam0, int iParam1, int iParam2)//Position - 0x2FE4
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

int func_60(int iParam0)//Position - 0x2FFD
{
	if (func_61(iParam0))
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

int func_61(int iParam0)//Position - 0x3027
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

void func_62(int iParam0)//Position - 0x3048
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!unk_0xA6DECE14FC9A8C51(iLocal_44))
			{
				iLocal_44 = unk_0x6F4378873333A0C2(vLocal_40);
				if (unk_0xA6DECE14FC9A8C51(iLocal_44))
				{
					unk_0x4B4040A0EC7DBA81(iLocal_44, 206);
					unk_0x0C71C8E276E3EC54(iLocal_44, 42);
				}
			}
			*iParam0 = 2;
			iLocal_50 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(unk_0xFC1458A37D98B502()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
			}
			if (func_75(iVar0) && unk_0x1635D2AD9D560E95(iVar0) > 0)
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, 0, 0) != unk_0xFC1458A37D98B502())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(unk_0xFC1458A37D98B502(), Local_41, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_76(2);
			break;
	}
}

void func_63(int iParam0)//Position - 0x313E
{
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_44);
			if (iLocal_57 == 0)
			{
				func_54("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				if (iLocal_57 == 0)
				{
					func_54("EPS_DROP_ESCAPE", -1);
				}
				func_76(2);
			}
			iLocal_57 = 1;
			break;
	}
}

void func_64(int iParam0)//Position - 0x31B9
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_53 = 0;
			iLocal_55 = 0;
			func_55(&iLocal_44);
			break;
		
		case 2:
			if (func_61(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, 1, 0) && func_43(&Local_41))
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -687,6668f, 500,598f, 109,0364f, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 200,7367f);
				}
			}
			if (func_58(unk_0xFC1458A37D98B502(), Local_41, 0) > (15f + 5f))
			{
				func_83(&Local_41, 2);
				if (Local_41.f_4 != 2)
				{
					Local_41.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_53 == 0 && func_61(unk_0xFC1458A37D98B502()))
			{
				if (iLocal_63 != unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1))
				{
					iLocal_63 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
					func_54("EPS_DROP_HELP", -1);
					iLocal_53 = 1;
				}
			}
			iLocal_54 = 0;
			func_76(1);
			break;
	}
}

void func_65()//Position - 0x32E6
{
	func_67();
	while (unk_0x5A0744D504CC705F() || func_70() != 0)
	{
		system::wait(0);
	}
	func_66();
}

void func_66()//Position - 0x3311
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_75(unk_0xFC1458A37D98B502()))
	{
	}
	unk_0xA846A937885EB977(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 0, 0, 1);
	func_81(-688,5f, 503,7f, 110,2f, 30f, &vVar0, &vVar1);
	iLocal_64 = unk_0xCB389937EDB1519A(vVar0, vVar1, 0, 1, 1, 1);
	iLocal_51 = Global_104555.f_10019.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()//Position - 0x33B5
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_44))
	{
		func_55(&iLocal_44);
		iLocal_44 = 0;
	}
	Global_104555.f_10019.f_103 = iLocal_51;
	func_55(&iLocal_44);
	func_77(0);
	func_69();
	func_68(&Local_41);
	unk_0xCA107A9AAF17E75F(iLocal_64, 0);
	unk_0x8A4311269B560FDF(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 1);
	unk_0x8A4311269B560FDF(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8,25f, 1);
}

void func_68(var uParam0)//Position - 0x3436
{
	if (unk_0x50126692B8A3590A(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0xFB3E858D6C41D854(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_69()//Position - 0x3462
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x14776E43F90DD454(iLocal_43[iVar0]);
		iVar0++;
	}
}

int func_70()//Position - 0x3489
{
	func_71();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_71()//Position - 0x34A2
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_74(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_73(unk_0xFC1458A37D98B502());
			if (func_72(iVar0) && (!func_29(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_72(Global_104555.f_2353.f_539.f_4301))
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

bool func_72(int iParam0)//Position - 0x359F
{
	return iParam0 < 3;
}

int func_73(int iParam0)//Position - 0x35AB
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)//Position - 0x35E8
{
	if (func_72(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_75(int iParam0)//Position - 0x3612
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

void func_76(int iParam0)//Position - 0x3630
{
	iLocal_46 = iParam0;
	iLocal_45 = 1;
}

void func_77(bool bParam0)//Position - 0x363F
{
	func_78(44, bParam0);
	func_78(45, bParam0);
	func_78(46, bParam0);
	func_78(47, bParam0);
	func_78(48, bParam0);
	func_78(49, bParam0);
	func_78(50, bParam0);
}

void func_78(int iParam0, bool bParam1)//Position - 0x367F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_80(iParam0, 0))
		{
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_79(iParam0, 0, 0);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x36DC
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_80(int iParam0, int iParam1)//Position - 0x3717
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_81(vector3 vParam0, float fParam1, var uParam2, var uParam3)//Position - 0x373A
{
	vector3 vVar0;
	
	vVar0 = { fParam1, fParam1, fParam1 };
	*uParam2 = { vParam0 - vVar0 };
	*uParam3 = { vParam0 + vVar0 };
}

void func_82(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x3766
{
	*(uParam0[0 /*3*/]) = { vParam1 };
	*(uParam0[1 /*3*/]) = { vParam2 };
	uParam0->f_7 = fParam3;
}

void func_83(var uParam0, int iParam1)//Position - 0x378A
{
	uParam0->f_5 = iParam1;
}

void func_84(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, float fParam6, vector3 vParam7, vector3 vParam8)//Position - 0x3798
{
	uParam0->f_3 = iParam1;
	*uParam0 = { vParam2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { vParam7 };
	uParam0->f_19[1 /*3*/] = { vParam8 };
	uParam0->f_14 = { vParam3 };
	func_82(&(uParam0->f_6), vParam4, vParam5, fParam6);
}

int func_85(int iParam0)//Position - 0x37EE
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

bool func_86()//Position - 0x3848
{
	return func_3() == 5;
}

void func_87()//Position - 0x3856
{
	iLocal_43[0] = joaat("vacca");
	iLocal_43[1] = joaat("surano");
	iLocal_43[2] = joaat("tornado2");
	iLocal_43[3] = joaat("superd");
	iLocal_43[4] = joaat("double");
	vLocal_42[0 /*3*/] = 1;
	vLocal_42[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_42[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_42[1 /*3*/] = 2;
	vLocal_42[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_42[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_42[2 /*3*/] = 3;
	vLocal_42[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_42[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_42[3 /*3*/] = 4;
	vLocal_42[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_42[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_42[4 /*3*/] = 5;
	vLocal_42[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_42[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()//Position - 0x391C
{
	int iVar0;
	
	iLocal_51 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_51, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)//Position - 0x3941
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

void func_90()//Position - 0x396E
{
	int iVar0;
	
	func_55(&iLocal_44);
	func_77(0);
	func_69();
	func_68(&Local_41);
	Global_104555.f_10019.f_103 = iLocal_51;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	unk_0x8A4311269B560FDF(-683,4503f, 492,9922f, 108,8737f, -688,8357f, 506,9997f, 112,1928f, 11,25f, 1);
	unk_0x8A4311269B560FDF(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8,25f, 1);
	unk_0xCA107A9AAF17E75F(iLocal_64, 0);
	if (iLocal_230 != 0)
	{
		unk_0xA68F7B004463AB6F(&iLocal_230);
		iLocal_230 = 0;
	}
	unk_0xFA3CE529DBB66C85(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xBFFF62F75445099D(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	unk_0x96A3D9A8A4C7AFD4();
}

int func_91(int iParam0)//Position - 0x3A4B
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

void func_92(int iParam0, int iParam1)//Position - 0x3AA5
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

