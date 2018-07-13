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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
	var uLocal_62 = 16;
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
	struct<2> Local_227 = { 0, 0 } ;
	var uLocal_228 = 745926877;
	var uLocal_229 = 0;
	var uLocal_230 = 3;
	var uLocal_231 = 0;
	var uLocal_232 = -839953400;
	var uLocal_233 = 0;
	var uLocal_234 = -839953400;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
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
	int iLocal_248[2] = { 0, 0 };
	struct<21> Local_249 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0,0375f;
	fLocal_34 = 0,17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (unk_0x3A711520F83BAE98())
	{
		func_104(ScriptParam_249);
	}
	while (true)
	{
		func_103();
		if (func_93())
		{
			func_89();
		}
		if (unk_0x3A711520F83BAE98())
		{
			func_88();
			func_86();
			switch (func_85(unk_0x622FF3AE4B1D07C3()))
			{
				case 0:
					if (func_84() > 0)
					{
						iLocal_248[unk_0x622FF3AE4B1D07C3()] = 2;
					}
					break;
				
				case 2:
					func_57();
					if (func_84() == 3)
					{
						iLocal_248[unk_0x622FF3AE4B1D07C3()] = 3;
					}
					break;
				
				case 3:
					func_89();
					break;
			}
			if (unk_0x8E1421E2A2A2FBD4())
			{
				switch (func_84())
				{
					case 0:
						Local_227 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x12D
{
	func_7();
	if (Local_227.f_1.f_2 == 5)
	{
		Local_227 = 3;
	}
	if (func_6(&(Local_227.f_1.f_19)))
	{
		if (func_4(&(Local_227.f_1.f_19), 20000, 0))
		{
			Local_227 = 3;
		}
	}
	if (func_3())
	{
		Local_227 = 3;
	}
	if (bLocal_48)
	{
		if (!unk_0xB01117EF93F91860())
		{
			Local_227 = 3;
		}
	}
	else if (unk_0xB01117EF93F91860())
	{
		Local_227 = 3;
	}
	if (func_2())
	{
		Local_227 = 3;
	}
}

bool func_2()//Position - 0x198
{
	return Global_1647212.f_3;
}

bool func_3()//Position - 0x1A6
{
	return Global_1312416;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x1B2
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x210
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

bool func_6(var uParam0)//Position - 0x255
{
	return uParam0->f_1;
}

void func_7()//Position - 0x261
{
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_56(1);
			break;
		
		case 1:
			if (func_36())
			{
				if (func_25())
				{
					func_5(&(Local_227.f_1.f_17), 0, 0);
					func_56(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
			{
				func_56(3);
			}
			else
			{
				if (func_6(&(Local_227.f_1.f_17)))
				{
					if (func_4(&(Local_227.f_1.f_17), 120000, 0))
					{
						func_56(3);
					}
				}
				if (func_10(unk_0x9EB17624F44A8DA4(), 0))
				{
					func_56(3);
				}
				if (bLocal_52)
				{
					func_56(3);
				}
				if (func_8(unk_0x9EB17624F44A8DA4(), 136))
				{
					func_56(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x453
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x473
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x499
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_11(var uParam0)//Position - 0x4B2
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

int func_12(var uParam0)//Position - 0x4D1
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_13(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x4F1
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14()//Position - 0x52A
{
	if (Global_2436181.f_3873)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2436181.f_3872 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)//Position - 0x564
{
	if (Global_2436181.f_3756[iParam0] < iParam1)
	{
		Global_2436181.f_3756[iParam0] = iParam1;
	}
	unk_0x872F1C1F8587CCC7(&(Global_2436181.f_3755), iParam0);
}

void func_16()//Position - 0x596
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_227.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x6ADD12BF4D6D2587(unk_0xF32FBF2453AC1753(Local_227.f_1)))
	{
		func_24(&(Local_227.f_1));
		iLocal_56++;
	}
	if (func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x918CA1BFFAA03556(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x918CA1BFFAA03556(Local_227.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (unk_0x918CA1BFFAA03556(Local_227.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x9E883378D9B4735D(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x7BC094E5B24A760D(iLocal_56);
		}
	}
	if (unk_0x3930B0AA9F6A0C8C(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0xBC60D873F181A18E(iLocal_57);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)//Position - 0x6C1
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6D5
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)//Position - 0x79E
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x7D8
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)//Position - 0x81E
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x8BB
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x8FB
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)//Position - 0x90F
{
	var uVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&uVar0);
	}
}

int func_25()//Position - 0x933
{
	if (func_35(Local_227.f_1.f_1))
	{
		if (func_35(Local_227.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_227.f_1))
			{
				if (func_34(&(Local_227.f_1), Local_227.f_1.f_1, Local_227.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					unk_0xFDAFE1354D61AE41(unk_0xF32FBF2453AC1753(Local_227.f_1));
					unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_227.f_1), 1, 1, 0);
					unk_0x764B52EA8B8FFFA3(unk_0xF32FBF2453AC1753(Local_227.f_1));
					unk_0x42B3DBD52AED7B7D(unk_0xF32FBF2453AC1753(Local_227.f_1), 1);
					func_33(unk_0xF32FBF2453AC1753(Local_227.f_1), 4);
					Global_2436181.f_3867 = unk_0xF32FBF2453AC1753(Local_227.f_1);
					if (func_32(&(Local_227.f_1.f_3[0 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_227.f_1.f_3[0 /*2*/]);
						func_26(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0xEAE48EEC14DB2663(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]), unk_0x9EB17624F44A8DA4());
						func_33(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]), 4);
						Global_2436181.f_3868[0] = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_227.f_1.f_3[1 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_227.f_1.f_3[1 /*2*/]);
							func_26(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0xEAE48EEC14DB2663(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]), unk_0x9EB17624F44A8DA4());
							func_33(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]), 4);
							Global_2436181.f_3868[1] = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_227.f_1.f_3[2 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_227.f_1.f_3[2 /*2*/]);
								func_26(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0xEAE48EEC14DB2663(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]), unk_0x9EB17624F44A8DA4());
								func_33(unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]), 4);
								Global_2436181.f_3868[2] = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB6B
{
	unk_0x8135E0D869A8ECFC(iParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xAE6EBBBBD8B9FB30(iParam0, 5, 1);
	unk_0xAE6EBBBBD8B9FB30(iParam0, 3, 0);
	unk_0x4F9A62E773100FDC(iParam0, 2);
	unk_0x2C8C730E9565B998(iParam0, 1);
	unk_0xD1D0B4122585CC63(iParam0, 2);
	unk_0x3811A0FC01E02FC1(iParam0, 1);
	unk_0x2A2AEB84A449E99E(iParam0, 1);
	unk_0x5C5D33A1B2711D21(iParam0, true);
	unk_0x253DB96AF5D6551B(iParam0, (fLocal_61[iParam1] + 100f));
	unk_0x471F966B9F527DA3(iParam0, 400f);
	unk_0x45BD02A17452ECE4(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x8710B0752BF74EA2(iParam0, 250);
			unk_0xE01CE1EBCD7EE551(iParam0, 250, 0);
			unk_0xEE632EEBBC285F6E(iParam0, 250);
		}
	}
	else
	{
		unk_0x1A0806871323CD16(iParam0, 1);
	}
}

void func_27(var uParam0)//Position - 0xC14
{
	int iVar0;
	
	if (!func_29(unk_0x9EB17624F44A8DA4(), 0) && !func_28())
	{
		iVar0 = Global_1574770[5];
	}
	else
	{
		iVar0 = unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502());
	}
	unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(uParam0), iVar0);
}

bool func_28()//Position - 0xC55
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_29(int iParam0, bool bParam1)//Position - 0xC71
{
	if (bParam1)
	{
		if (func_30(iParam0))
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

bool func_30(int iParam0)//Position - 0xC9D
{
	return func_31(iParam0);
}

bool func_31(int iParam0)//Position - 0xCAB
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xCC5
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_33(int iParam0, int iParam1)//Position - 0xD4D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB80A4DA4C06A76F1(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x2786E663D1846FFC(iParam0, "AttributeDamage");
	}
	unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
	unk_0xD91ED8E8618A1DEF(iParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xD80
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_35(int iParam0)//Position - 0xE7A
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_36()//Position - 0xE98
{
	vector3 vVar0;
	
	if (func_55(Local_227.f_1.f_10))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vVar0 = { func_53(func_54(unk_0x9EB17624F44A8DA4()), 0f, (-200f * system::sin((system::to_float(Local_227.f_1.f_15) * 30f))), (200f * system::cos((system::to_float(Local_227.f_1.f_15) * 30f))), 0f) };
				vVar0.z = unk_0xAE478891F170E61E(vVar0.x, vVar0.y);
				vVar0.z = (vVar0.z + 30f);
				if (func_37(vVar0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_227.f_1.f_10 = { vVar0 };
					return 1;
				}
				else
				{
					Local_227.f_1.f_15++;
					if (Local_227.f_1.f_15 >= 12)
					{
						Local_227.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0xF8B
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_46(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_38(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_38(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x109C
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_45(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_43(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_45(iVar1, 1, 1))
		{
			if (!func_40(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_39(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_43(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_43(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1254
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)//Position - 0x1280
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_41(-1, 0) == 8;
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

int func_41(int iParam0, bool bParam1)//Position - 0x12CB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
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

int func_42()//Position - 0x130C
{
	return Global_1312736;
}

Vector3 func_43(int iParam0)//Position - 0x1318
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_44() && Global_1595693[iVar0 /*680*/].f_673) && !func_55(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_54(iParam0);
}

var func_44()//Position - 0x136B
{
	return Global_2447174.f_16;
}

int func_45(int iParam0, bool bParam1, bool bParam2)//Position - 0x1379
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

int func_46(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x13C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_45(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_47(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_54(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x14BF
{
	if (func_52(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_51(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_48(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x1506
{
	int iVar0;
	
	iVar0 = func_50(iParam0);
	if (!iVar0 == func_49())
	{
		if (iVar0 == func_50(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_49()//Position - 0x1531
{
	return -1;
}

int func_50(int iParam0)//Position - 0x153A
{
	if (iParam0 != func_49())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_49();
}

struct<13> func_51(int iParam0)//Position - 0x155D
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_52(int iParam0, int iParam1)//Position - 0x1574
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_51(iParam0) };
		Global_2492170 = { func_51(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_53(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x15E1
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = system::cos(fVar1);
	fVar3 = system::sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

Vector3 func_54(int iParam0)//Position - 0x162E
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_55(vector3 vParam0)//Position - 0x1641
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0)//Position - 0x166B
{
	Local_227.f_1.f_2 = iParam0;
}

void func_57()//Position - 0x167B
{
	func_82();
	func_58();
}

void func_58()//Position - 0x168B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_81();
			break;
		
		case 1:
			func_81();
			break;
		
		case 2:
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xF32FBF2453AC1753(Local_227.f_1);
				if (!unk_0xA6DECE14FC9A8C51(iLocal_47))
				{
					iLocal_47 = unk_0xCA43F0FC44D9B846(iVar1);
					unk_0x4B4040A0EC7DBA81(iLocal_47, 422);
					unk_0x9C27373CC69ECF87(iLocal_47, 0);
					unk_0x62BD54E491535B76(iLocal_47, "MPCT_MERRY3");
					func_79(&iLocal_47, 1);
				}
				if (func_78(Local_227.f_1))
				{
					if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1))
					{
						if (func_77())
						{
							if (!unk_0x731ACD6C19E56C57(iVar1))
							{
								unk_0x4F83770657E2403D(iVar1, 1, 0);
							}
						}
						else if (unk_0x731ACD6C19E56C57(iVar1))
						{
							unk_0x4F83770657E2403D(iVar1, 0, 0);
						}
					}
				}
				if (unk_0x93C304998B457C45(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]);
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						iVar2 = unk_0x84801DF26E514929(iVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_78(Local_227.f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x771A86309E0CA47B(iVar0, 1);
									func_26(iVar0, 0, 0, 0);
									unk_0xFDAFE1354D61AE41(iVar1);
									unk_0xA15269351F50F113(iVar1, 1, 1, 0);
									if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
									{
										if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
										{
											unk_0x8F7859DFA5ECF628(iVar0, iVar1, 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 23, 20f, 40f, -1f, system::ceil(fLocal_61[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (system::vdist(func_54(unk_0x9EB17624F44A8DA4()), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_227.f_1), 1)) <= 50f)
							{
								func_60(&uLocal_62, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x93C304998B457C45(Local_227.f_1.f_3[1 /*2*/]))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]);
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (!unk_0x7ED4D0E480A6EC43(iVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_78(Local_227.f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x771A86309E0CA47B(iVar0, 0);
									func_26(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x93C304998B457C45(Local_227.f_1.f_3[2 /*2*/]))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]);
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (!unk_0x7ED4D0E480A6EC43(iVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_78(Local_227.f_1))
							{
								if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x771A86309E0CA47B(iVar0, 0);
									func_26(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_59();
			}
			break;
		
		case 3:
			func_81();
			if (!func_6(&(Local_227.f_1.f_19)))
			{
				func_5(&(Local_227.f_1.f_19), 0, 0);
			}
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xF32FBF2453AC1753(Local_227.f_1);
				if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_78(Local_227.f_1))
						{
							if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[0 /*2*/]))
							{
								unk_0x771A86309E0CA47B(iVar0, 0);
								unk_0xB8E08BD5B184DF4E(iVar0);
								unk_0xCE93FCB8A8D8DF0B(iVar0, Global_1574758);
								if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
								{
									if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0x8F7859DFA5ECF628(iVar0, iVar1, 0, unk_0xFC1458A37D98B502(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										unk_0xE9B3D12A64CC7C1A(iVar0, 1);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]);
						if (func_78(Local_227.f_1))
						{
							if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[1 /*2*/]))
							{
								unk_0xB8E08BD5B184DF4E(iVar0);
								unk_0x771A86309E0CA47B(iVar0, 1);
								unk_0xE9B3D12A64CC7C1A(iVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (system::vdist(func_54(unk_0x9EB17624F44A8DA4()), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_227.f_1), 1)) <= 50f)
						{
							func_60(&uLocal_62, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]);
						if (func_78(Local_227.f_1))
						{
							if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[2 /*2*/]))
							{
								unk_0xB8E08BD5B184DF4E(iVar0);
								unk_0x771A86309E0CA47B(iVar0, 1);
								unk_0xE9B3D12A64CC7C1A(iVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_59();
			}
			break;
		
		case 5:
			func_81();
			break;
	}
}

void func_59()//Position - 0x1B6C
{
	int iVar0;
	
	if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (func_78(Local_227.f_1.f_3[0 /*2*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[0 /*2*/]))
			{
				iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]);
				unk_0xE01CE1EBCD7EE551(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (func_78(Local_227.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[1 /*2*/]))
			{
				iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[1 /*2*/]);
				unk_0xE01CE1EBCD7EE551(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (func_78(Local_227.f_1.f_3[2 /*2*/]))
		{
			if (unk_0xE53FD7AF7F25C0A8(Local_227.f_1.f_3[2 /*2*/]))
			{
				iVar0 = unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[2 /*2*/]);
				unk_0xE01CE1EBCD7EE551(iVar0, 0, 0);
			}
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1C4C
{
	func_76(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_61(sParam2, iParam3, 0);
}

int func_61(char* sParam0, int iParam1, bool bParam2)//Position - 0x1C9A
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
					func_75();
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
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_73();
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
				func_66();
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
				if (func_65())
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
			if (func_64())
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
			func_63();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_62();
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
		func_75();
	}
	return 0;
}

void func_62()//Position - 0x1F66
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

void func_63()//Position - 0x1F97
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

int func_64()//Position - 0x202C
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()//Position - 0x2053
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

void func_66()//Position - 0x20EC
{
	if (func_72(14))
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
		Global_14453 = func_67();
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

var func_67()//Position - 0x218E
{
	func_68();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_68()//Position - 0x21A7
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_71(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_70(unk_0xFC1458A37D98B502());
			if (func_69(iVar0) && (!func_72(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_69(Global_104555.f_2353.f_539.f_4301))
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

bool func_69(int iParam0)//Position - 0x22A4
{
	return iParam0 < 3;
}

int func_70(int iParam0)//Position - 0x22B0
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)//Position - 0x22ED
{
	if (func_69(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x2317
{
	return Global_35861 == iParam0;
}

void func_73()//Position - 0x2325
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

bool func_74(int iParam0, int iParam1)//Position - 0x237C
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

void func_75()//Position - 0x23B7
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

void func_76(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x240E
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

int func_77()//Position - 0x2464
{
	if (unk_0x674C9438180770FE() >= 22)
	{
		return 1;
	}
	if (unk_0x674C9438180770FE() <= 6 && unk_0x674C9438180770FE() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0)//Position - 0x2492
{
	if (unk_0x0070DE1A1E73C71C(uParam0))
	{
		return 1;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		unk_0x04092215B40E1262(uParam0);
	}
	return 0;
}

void func_79(int iParam0, int iParam1)//Position - 0x24B6
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		iVar0 = func_80(iParam1);
		unk_0x0C71C8E276E3EC54(*iParam0, iVar0);
	}
}

int func_80(int iParam0)//Position - 0x24DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_81()//Position - 0x2744
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_47))
	{
		unk_0xE30CF11C0EE14316(&iLocal_47);
	}
}

void func_82()//Position - 0x275B
{
	if (!iLocal_49)
	{
		if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_83(&uLocal_62, 3, unk_0x47BA76CE3C825A08(Local_227.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2796
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

int func_84()//Position - 0x2831
{
	return Local_227;
}

int func_85(int iParam0)//Position - 0x283B
{
	return iLocal_248[iParam0];
}

void func_86()//Position - 0x2849
{
	bool bVar0;
	vector3 vVar1;
	
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_59))
	{
		func_5(&uLocal_59, 0, 0);
	}
	else if (func_4(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		vVar1 = { func_54(unk_0x9EB17624F44A8DA4()) };
		fLocal_58 = unk_0xAE478891F170E61E(vVar1.x, vVar1.y);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_87(&uLocal_59);
	}
}

void func_87(var uParam0)//Position - 0x28B8
{
	uParam0->f_1 = 0;
}

void func_88()//Position - 0x28C5
{
}

void func_89()//Position - 0x28CD
{
	var uVar0;
	var uVar1;
	
	Global_2436181.f_3867 = uVar0;
	Global_2436181.f_3868[0] = uVar1;
	Global_2436181.f_3868[1] = uVar1;
	Global_2436181.f_3868[2] = uVar1;
	Global_2436181.f_3872 = 0f;
	Global_2436181.f_3873 = 0;
	func_91(func_92(1, 1), 10, func_49());
	func_90();
}

void func_90()//Position - 0x2926
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_91(int iParam0, int iParam1, var uParam2)//Position - 0x2932
{
	struct<4> Var0;
	
	Var0 = -332158592;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iParam0);
	}
}

int func_92(int iParam0, bool bParam1)//Position - 0x296A
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_45(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_93()//Position - 0x29CF
{
	var uVar0;
	
	func_100(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_99())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97(157))
	{
		if (!func_96())
		{
			return 1;
		}
	}
	if (func_97(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_94() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_94()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x2A59
{
	switch (func_95())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_95()//Position - 0x2A8D
{
	return Global_25233;
}

bool func_96()//Position - 0x2A98
{
	return Global_2447174.f_586;
}

int func_97(int iParam0)//Position - 0x2AA7
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98()//Position - 0x2ABE
{
	return Global_2456830;
}

bool func_99()//Position - 0x2ACA
{
	return Global_2447174.f_581;
}

void func_100(var uParam0)//Position - 0x2AD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_101(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_101(int iParam0)//Position - 0x2B4C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_45(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_102(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_102(int iParam0, var uParam1)//Position - 0x2BCD
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_103()//Position - 0x2C2C
{
	system::wait(0);
}

void func_104(struct<21> Param0)//Position - 0x2C39
{
	func_110(func_111(Param0), Param0);
	unk_0xBC60D873F181A18E(3);
	unk_0x7BC094E5B24A760D(1);
	func_108(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_227, 22);
	unk_0xE7BC983D1386C9EE(&iLocal_248, 3);
	unk_0x941BE77305BB5695(0);
	if (!func_107())
	{
		func_89();
	}
	if (unk_0xB01117EF93F91860())
	{
		bLocal_48 = true;
	}
	func_105(62, 1);
	iLocal_248[unk_0x622FF3AE4B1D07C3()] = 0;
}

void func_105(int iParam0, bool bParam1)//Position - 0x2C9C
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_106() /*12130*/].f_7676.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_106() /*12130*/].f_7676.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_106() /*12130*/].f_7676.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_106() /*12130*/].f_7676.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_106() /*12130*/].f_7676.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_106() /*12130*/].f_7676.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_106() /*12130*/].f_7676.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_106() /*12130*/].f_7676.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_106() /*12130*/].f_7676.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_106() /*12130*/].f_7676.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_106() /*12130*/].f_7676.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_106() /*12130*/].f_7676.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_106() /*12130*/].f_7676.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_106() /*12130*/].f_7676.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_106() /*12130*/].f_7676.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_106() /*12130*/].f_7676.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_106() /*12130*/].f_7676.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_106() /*12130*/].f_7676.f_30 = iVar0;
			break;
	}
}

int func_106()//Position - 0x2EDB
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_107()//Position - 0x2EE8
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_99())
		{
			return 0;
		}
		if (func_97(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x2F41
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_90();
			}
			else
			{
				return 0;
			}
		}
		if (!func_109())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_90();
					}
					else
					{
						return 0;
					}
				}
				if (func_99())
				{
					if (!bParam2)
					{
						func_90();
					}
					else
					{
						return 0;
					}
				}
				if (func_97(155))
				{
					if (!bParam2)
					{
						func_90();
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
					func_90();
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
				func_90();
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
			func_90();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_109()//Position - 0x3056
{
	return Global_1312831;
}

void func_110(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3062
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_90();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_111(int iParam0)//Position - 0x3081
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

