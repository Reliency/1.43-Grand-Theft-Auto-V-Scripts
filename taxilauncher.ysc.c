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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<31> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 16;
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
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
	char cLocal_240[16] = "";
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	vector3 vLocal_243 = { 0f, 0f, 0f };
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = unk_0x5354F72E0D8D7E53();
	iLocal_47 = unk_0x526A9A6B1B39C5F0();
	iLocal_60 = 1;
	iLocal_65 = -1;
	iLocal_69 = func_144();
	iLocal_70 = func_143();
	StringCopy(&cLocal_240, "TAXI_HAIL", 16);
	if (unk_0x7D9C4B359376D38A(34))
	{
		func_142();
		unk_0x96A3D9A8A4C7AFD4();
	}
	Global_104555.f_10019.f_120 = 1;
	while (true)
	{
		switch (iLocal_51)
		{
			case 0:
				if (func_141())
				{
					iLocal_51 = 1;
				}
				else
				{
					system::wait(500);
				}
				break;
			
			case 1:
				if (func_141())
				{
					vLocal_243 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
					func_110();
					if (func_109())
					{
						unk_0x2E4932E63763FE26(joaat("taxi"), false);
						func_108();
						if (!func_106())
						{
							func_64();
							func_30();
							func_14();
						}
					}
					else
					{
						func_4(0);
						iLocal_51 = 1;
						func_1();
						system::wait(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_51 = 0;
				}
				break;
			
			case 2:
				if (!unk_0x8F05914DD835E69F(iLocal_239))
				{
					func_4(1);
					iLocal_54 = 3;
					iLocal_51 = 0;
				}
				break;
		}
		system::wait(0);
	}
}

void func_1()//Position - 0x16C
{
	if (!func_3())
	{
		if (unk_0x74C475EB8E73D398("NULL", &Global_103611))
		{
			func_2(0);
		}
		else if (unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D(&Global_103611)) == 0)
		{
			func_2(0);
		}
	}
}

void func_2(bool bParam0)//Position - 0x1A6
{
	if (bParam0)
	{
		StringCopy(&Global_103611, unk_0x436287B7DB306165(), 24);
		Global_103605 = 1;
	}
	else
	{
		StringCopy(&Global_103611, "NULL", 24);
		Global_103605 = 0;
	}
}

int func_3()//Position - 0x1D2
{
	if (!Global_103604)
	{
		return 0;
	}
	if (Global_103605)
	{
		return 0;
	}
	return 1;
}

void func_4(bool bParam0)//Position - 0x1F2
{
	unk_0x2E4932E63763FE26(joaat("taxi"), false);
	func_13();
	func_10();
	func_5();
	iLocal_60 = 1;
	iLocal_58 = 0;
	iLocal_52 = 0;
	iLocal_53 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_66 = 0;
	if (bParam0)
	{
		iLocal_51 = 0;
	}
}

void func_5()//Position - 0x22D
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3))
		{
			unk_0x9C16A63EBDA5A08E(unk_0xFC1458A37D98B502(), "HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			unk_0x9C16A63EBDA5A08E(unk_0xFC1458A37D98B502(), "FP_HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FUCK_U", 3))
		{
			unk_0x9C16A63EBDA5A08E(unk_0xFC1458A37D98B502(), "FUCK_U", &cLocal_240, -2f);
		}
		else if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FORGET_IT", 3))
		{
			unk_0x9C16A63EBDA5A08E(unk_0xFC1458A37D98B502(), "FORGET_IT", &cLocal_240, -2f);
		}
		if (iLocal_65 != -1)
		{
			unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, false);
		}
		if (iLocal_62 == 1)
		{
			unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
			iLocal_62 = 0;
		}
	}
	unk_0xFCCDDE0E48CF9588(&cLocal_240);
	if (iLocal_65 != -1)
	{
		func_8(&iLocal_65);
	}
	if (func_7("TXM_H01"))
	{
		iLocal_64++;
		if (iLocal_64 == 3)
		{
			Global_104555.f_10019.f_120 = 1;
		}
		unk_0x3E80C2F7BC665259(1);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_63))
	{
		unk_0xAAAC88CC20771601(iLocal_63, false);
		unk_0xE30CF11C0EE14316(&iLocal_63);
	}
	if (iLocal_58)
	{
		if (unk_0x38DF88792E2574E5())
		{
			unk_0x2C5E25A27FEE0F8A(0);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Global_103587))
	{
		if (!unk_0x3AB6A1A9084FB0A4(Global_103587))
		{
			if (unk_0xA5F6598E13F98E08(Global_103587, &cLocal_240, "Aknowledge_R", 3))
			{
				unk_0x9C16A63EBDA5A08E(Global_103587, "Aknowledge_R", &cLocal_240, -4f);
			}
			else if (unk_0xA5F6598E13F98E08(Global_103587, &cLocal_240, "Aknowledge_L", 3))
			{
				unk_0x9C16A63EBDA5A08E(Global_103587, "Aknowledge_L", &cLocal_240, -4f);
			}
		}
	}
	if (iLocal_54 == 0)
	{
		func_6();
	}
	iLocal_245 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	Global_103623 = -1;
	iLocal_55 = 0;
}

void func_6()//Position - 0x3EC
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_103587))
	{
		if (!unk_0x3AB6A1A9084FB0A4(Global_103587))
		{
			unk_0xAE01EF4BC84AFE7C(Global_103587, 251, false);
			unk_0x771A86309E0CA47B(Global_103587, false);
			if (!unk_0xA6FA9E5D08F067AD(Global_103587) && !unk_0x7ED4D0E480A6EC43(Global_103587, 0))
			{
				if (unk_0x88DDBE9908752BF0(Global_103587, 0))
				{
					if (unk_0x6ADD12BF4D6D2587(Global_103586))
					{
						if (unk_0xB8DE76287EDC4957(Global_103586, 0))
						{
							if (unk_0xAAA8D20859E2D36D(Global_103587, Global_103586))
							{
								if (unk_0x78F50AA8F955BEFC(Global_103587, -258271821) != 1 && unk_0x78F50AA8F955BEFC(Global_103587, -258271821) != 0)
								{
									unk_0x6931076730A4AC5D(&iVar0);
									if ((!unk_0x8EE3A848975DDF21(Global_103586, 1, 0) || !unk_0x8EE3A848975DDF21(Global_103586, 2, 0)) || !unk_0x8EE3A848975DDF21(Global_103586, 0, 0))
									{
										unk_0xB6A7F1EF9625AE96(0, 2000);
									}
									else
									{
										unk_0xB6A7F1EF9625AE96(0, 500);
									}
									unk_0x96247F0EC873C446(0, Global_103586, 12f, 790699);
									unk_0x1B16DD5C115FE009(iVar0);
									unk_0xAB30B1CF01A198C1(Global_103587, iVar0);
									unk_0xFAA3EF7FF92E1F9E(&iVar0);
								}
							}
							else
							{
								unk_0xD68E88A8E0BE8697(Global_103587, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xD68E88A8E0BE8697(Global_103587, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0x78F50AA8F955BEFC(Global_103587, -1146898486) != 1 && unk_0x78F50AA8F955BEFC(Global_103587, -1146898486) != 0)
				{
					unk_0x93F12E7D8D931858(Global_103587, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Global_103587))
	{
		if (unk_0x9761C10D57B68069(Global_103587))
		{
			if (unk_0xCB234F3DD6FF9368(Global_103587, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(Global_103587))
				{
					unk_0xCFF0CD14B439821D(Global_103587, false, 1);
					unk_0x771A86309E0CA47B(Global_103587, false);
				}
				unk_0x486F346ADFE56674(&Global_103587);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Global_103586))
	{
		if (unk_0x9761C10D57B68069(Global_103586))
		{
			if (unk_0xCB234F3DD6FF9368(Global_103586, 0))
			{
				if (unk_0xB8DE76287EDC4957(Global_103586, 0))
				{
					unk_0x67E8508973E4CC81(Global_103586, 0);
					unk_0x4C44781F822B0B00(Global_103586, true, 0);
					unk_0x8DAC4E7A3269A2CE(Global_103586, 0);
				}
				unk_0x5380482A432E314E(&Global_103586);
			}
		}
	}
	Global_103587 = 0;
	Global_103586 = 0;
	StringCopy(&Global_103617, "NULL", 24);
	Global_103623 = -1;
}

int func_7(char* sParam0)//Position - 0x62A
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_8(int iParam0)//Position - 0x63D
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_9(int iParam0)//Position - 0x694
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

void func_10()//Position - 0x6CF
{
	if (iLocal_54 == 1)
	{
		unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
		func_11();
	}
	else if (iLocal_54 == 2)
	{
		if (unk_0x3B6F9DF9C5FEB3A4("taxiService"))
		{
			unk_0x9D2418D7FC697249("taxiService");
		}
		unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
		func_11();
	}
	func_6();
	if (func_7("TX_H02"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	iLocal_66 = 0;
	iLocal_54 = 0;
}

void func_11()//Position - 0x72A
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x06BD87535C2C9154(func_12()))
	{
		unk_0x28F7F7EF1B64C602(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x89B283B45B191258(func_12(), 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar2))
			{
				unk_0xB8E08BD5B184DF4E(iVar2);
				if (!unk_0x191BE1BC8F26F3C1(Global_103586, 0))
				{
					if (unk_0xA8D0477084E86A92(iVar2, Global_103586, 0))
					{
						unk_0x4F8A35D7CBC17327(iVar2, Global_103586, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x89B283B45B191258(func_12(), 1);
				if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					unk_0xB8E08BD5B184DF4E(iVar2);
					if (!unk_0x191BE1BC8F26F3C1(Global_103586, 0))
					{
						if (unk_0xA8D0477084E86A92(iVar2, Global_103586, 0))
						{
							unk_0x4F8A35D7CBC17327(iVar2, Global_103586, 64);
						}
					}
				}
			}
		}
	}
}

int func_12()//Position - 0x7D9
{
	return unk_0x7C65CFD05F3B9CE9(unk_0x98EC0789D9F0703B());
}

void func_13()//Position - 0x7E9
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Local_56.f_1))
	{
		if (unk_0xCB234F3DD6FF9368(Local_56.f_1, 0))
		{
			if (Local_56.f_1 != Global_103587)
			{
				if (!unk_0x3AB6A1A9084FB0A4(Local_56.f_1))
				{
					unk_0xAE01EF4BC84AFE7C(Local_56.f_1, 251, false);
					unk_0x771A86309E0CA47B(Local_56.f_1, false);
					if (!unk_0xA6FA9E5D08F067AD(Local_56.f_1) && !unk_0x7ED4D0E480A6EC43(Local_56.f_1, 0))
					{
						if (unk_0x88DDBE9908752BF0(Local_56.f_1, 0))
						{
							if (unk_0x6ADD12BF4D6D2587(Local_56))
							{
								if (unk_0xB8DE76287EDC4957(Local_56, 0))
								{
									if (unk_0xAAA8D20859E2D36D(Local_56.f_1, Local_56))
									{
										unk_0x6931076730A4AC5D(&iVar0);
										if ((!unk_0x8EE3A848975DDF21(Local_56, 1, 0) || !unk_0x8EE3A848975DDF21(Local_56, 2, 0)) || !unk_0x8EE3A848975DDF21(Local_56, 0, 0))
										{
											unk_0xB6A7F1EF9625AE96(0, 2000);
										}
										else
										{
											unk_0xB6A7F1EF9625AE96(0, 500);
										}
										unk_0x96247F0EC873C446(0, Local_56, 12f, 790699);
										unk_0x1B16DD5C115FE009(iVar0);
										unk_0xAB30B1CF01A198C1(Local_56.f_1, iVar0);
										unk_0xFAA3EF7FF92E1F9E(&iVar0);
									}
									else
									{
										unk_0xD68E88A8E0BE8697(Local_56.f_1, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
									}
								}
								else
								{
									unk_0xD68E88A8E0BE8697(Local_56.f_1, unk_0xFC1458A37D98B502(), 500f, -1, 0, 0);
								}
							}
						}
						else
						{
							unk_0x93F12E7D8D931858(Local_56.f_1, 1193033728, 0);
						}
					}
				}
				unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(Local_56.f_1));
				unk_0x486F346ADFE56674(&(Local_56.f_1));
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(Local_56))
	{
		if (unk_0xCB234F3DD6FF9368(Local_56, 0))
		{
			if (Local_56 != Global_103586)
			{
				unk_0x5380482A432E314E(&Local_56);
			}
		}
	}
	if (iLocal_53 == 1)
	{
		unk_0x14776E43F90DD454(iLocal_70);
		unk_0x14776E43F90DD454(iLocal_69);
	}
	Local_56 = 0;
	Local_56.f_1 = 0;
	Local_56.f_2 = 0;
	Local_56.f_3 = 0;
	Local_56.f_5 = 0f;
	Local_56.f_6 = 0f;
	Local_56.f_7 = 45f;
	Local_56.f_8 = 0;
	Local_56.f_10 = 0;
	Local_56.f_9 = 0;
	Local_56.f_11 = { 0f, 0f, 0f };
	Local_56.f_14 = { 0f, 0f, 0f };
	Local_56.f_17 = { 0f, 0f, 0f };
	Local_56.f_20 = { 0f, 0f, 0f };
	Local_56.f_23 = { 0f, 0f, 0f };
	Local_56.f_26 = { 0f, 0f, 0f };
	Local_56.f_29 = 1076367531;
	Local_56.f_30 = 151;
	iLocal_53 = 0;
}

void func_14()//Position - 0x9EF
{
	if (iLocal_54 == 0)
	{
		func_26();
	}
	else if (iLocal_54 == 1)
	{
		func_22();
	}
	else if (iLocal_54 == 2)
	{
		func_15();
	}
	else if (iLocal_54 == 3)
	{
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_54 = 0;
		}
	}
}

void func_15()//Position - 0xA34
{
	if (func_21(&Global_103586, iLocal_70, iLocal_69))
	{
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_103586, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), Global_103586))
			{
				func_20();
				if (unk_0x317536BCEA8FA6B0(Global_103586, 1, 0) == unk_0xFC1458A37D98B502())
				{
					iLocal_246 = 1;
				}
				else
				{
					iLocal_246 = 2;
				}
				func_19(&Global_103586, iLocal_246);
				if (!unk_0x3AB6A1A9084FB0A4(Global_103587) && unk_0xB8DE76287EDC4957(Global_103586, 0))
				{
					if (unk_0xAAA8D20859E2D36D(Global_103587, Global_103586))
					{
						if (!func_18(Global_103587, -2118855366))
						{
							unk_0x181B5054237CD6BD(Global_103587, Global_103586, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_59)
				{
					if (func_7("TX_H02"))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					iLocal_59 = 0;
				}
				func_17();
				func_16();
				unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 0);
				unk_0xD9E2C360120FEB7C("taxiService");
				if (unk_0x3B6F9DF9C5FEB3A4("taxiService"))
				{
					iLocal_239 = system::start_new_script("taxiService", 1828);
					unk_0x9D2418D7FC697249("taxiService");
					iLocal_51 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_16()//Position - 0xB47
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xF4DDB3917F071FA0(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1,5f, 1,5f, 1,5f, -1);
		if (!unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0xEA8E0258C31BCDE7(iVar0))
			{
				unk_0xD68E88A8E0BE8697(iVar0, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
			}
		}
	}
}

void func_17()//Position - 0xB9F
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(Global_103586, 0))
	{
		if (!unk_0x8EE3A848975DDF21(Global_103586, 1, 0))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(Global_103586, 1, 0);
			if (unk_0xFC1458A37D98B502() != iVar0)
			{
				if (!unk_0x4759A34EB65CCA39(iVar0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
				{
					unk_0xD68E88A8E0BE8697(iVar0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0x8EE3A848975DDF21(Global_103586, 2, 0))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(Global_103586, 2, 0);
			if (unk_0xFC1458A37D98B502() != iVar0)
			{
				if (!unk_0x4759A34EB65CCA39(iVar0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
				{
					unk_0xD68E88A8E0BE8697(iVar0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1)//Position - 0xC41
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_19(var uParam0, int iParam1)//Position - 0xC89
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0x06BD87535C2C9154(func_12()))
	{
		unk_0x28F7F7EF1B64C602(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x89B283B45B191258(func_12(), 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0x317536BCEA8FA6B0(*uParam0, iVar5, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar3))
				{
					if (iVar3 == unk_0xFC1458A37D98B502())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0xBAEC0BAAC7E135C7(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_18(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0x6F8C8278B7C06889(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x89B283B45B191258(func_12(), 1);
				if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0x317536BCEA8FA6B0(*uParam0, iVar5, 0);
					if (unk_0x6ADD12BF4D6D2587(iVar3))
					{
						if (iVar3 == unk_0xFC1458A37D98B502())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0xBAEC0BAAC7E135C7(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_18(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0x6F8C8278B7C06889(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

void func_20()//Position - 0xDC1
{
	Global_17162.f_6 = 1;
}

int func_21(int iParam0, int iParam1, int iParam2)//Position - 0xDCF
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0xB8DE76287EDC4957(*iParam0, 0))
		{
			if (unk_0x82FF3DFBC3965CC0(*iParam0) == iParam1)
			{
				iVar0 = unk_0x317536BCEA8FA6B0(*iParam0, -1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (!unk_0xA6FA9E5D08F067AD(iVar0))
						{
							if (!unk_0x7ED4D0E480A6EC43(iVar0, 0))
							{
								if (unk_0x90CE698681C6225E(iVar0, iParam2))
								{
									if (unk_0x3B9B1F02BCD69306(*iParam0, 90f))
									{
										iVar1 = unk_0x37956F2B588E40E6(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_22()//Position - 0xE63
{
	if (func_21(&Global_103586, iLocal_70, iLocal_69))
	{
		if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_103586, 0))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), Global_103586))
			{
				iLocal_54 = 2;
			}
			func_20();
		}
		else
		{
			func_23();
		}
	}
	else
	{
		func_10();
	}
}

void func_23()//Position - 0xEAE
{
	int iVar0;
	
	if (func_24(&Global_103586))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				func_20();
				if (!unk_0x3AB6A1A9084FB0A4(Global_103587) && unk_0xB8DE76287EDC4957(Global_103586, 0))
				{
					if (unk_0xAAA8D20859E2D36D(Global_103587, Global_103586))
					{
						if (!func_18(Global_103587, -2118855366))
						{
							unk_0x181B5054237CD6BD(Global_103587, Global_103586, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

int func_24(int iParam0)//Position - 0xF3D
{
	if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), *iParam0, 5f, 5f, 2f, 0, 1, 0))
	{
		return 0;
	}
	if (unk_0x90D5DFB054818BA7(*iParam0) > 0,5f)
	{
		return 0;
	}
	if (unk_0x1ACD6691B9C9AA46(*iParam0) != unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (!func_25(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0xFA8
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x3B9B1F02BCD69306(iParam0, 90f))
		{
			return 1;
		}
	}
	return 0;
}

void func_26()//Position - 0xFCD
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_244))
	{
		if (func_21(&iLocal_244, iLocal_70, iLocal_69))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				func_28();
			}
			else if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_244))
				{
					iVar0 = unk_0x317536BCEA8FA6B0(iLocal_244, -1, 0);
					if (!unk_0x8EE3A848975DDF21(iLocal_244, 1, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iLocal_244, 1, 0) == unk_0xFC1458A37D98B502())
						{
							iLocal_246 = 1;
						}
					}
					if (!unk_0x8EE3A848975DDF21(iLocal_244, 2, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iLocal_244, 2, 0) == unk_0xFC1458A37D98B502())
						{
							iLocal_246 = 2;
						}
					}
					if (iLocal_55 == 4 || iLocal_55 == 2)
					{
						if (iLocal_244 != Global_103586)
						{
							func_5();
						}
					}
					func_20();
					if (func_27(&iLocal_244, &iVar0, 0))
					{
						iLocal_244 = 0;
						iLocal_54 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

int func_27(int iParam0, int iParam1, bool bParam2)//Position - 0x10A5
{
	if (!*iParam0 == Global_103586 && !Global_103586 == 0)
	{
		func_6();
	}
	if (unk_0x6ADD12BF4D6D2587(*iParam0) && unk_0x6ADD12BF4D6D2587(*iParam1))
	{
		if (unk_0xB8DE76287EDC4957(*iParam0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(*iParam1))
			{
				if (unk_0xAAA8D20859E2D36D(*iParam1, *iParam0))
				{
					Global_103586 = *iParam0;
					Global_103587 = *iParam1;
					Global_103601 = 1;
					if (bParam2)
					{
						unk_0xDD29FF4BAB8AFF9C(Global_103587, true, 1);
						unk_0xDD29FF4BAB8AFF9C(Global_103586, true, 1);
						StringCopy(&Global_103617, unk_0x436287B7DB306165(), 24);
					}
					else
					{
						if (!unk_0x9761C10D57B68069(Global_103587))
						{
							unk_0xDD29FF4BAB8AFF9C(Global_103587, true, 0);
						}
						if (!unk_0x9761C10D57B68069(Global_103586))
						{
							unk_0xDD29FF4BAB8AFF9C(Global_103586, true, 0);
							StringCopy(&Global_103617, unk_0x436287B7DB306165(), 24);
						}
					}
					unk_0xAE01EF4BC84AFE7C(Global_103587, 251, true);
					unk_0xAE6EBBBBD8B9FB30(Global_103587, 5, false);
					unk_0xAE6EBBBBD8B9FB30(Global_103587, 17, true);
					unk_0xE17958D3FD0F9EE9(Global_103587, 512, false);
					unk_0x771A86309E0CA47B(Global_103587, true);
					unk_0x350CEE66BDF90273(Global_103587, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x4BEFCD5DAE410A90(Global_103586, 1);
					unk_0x67E8508973E4CC81(Global_103586, 1);
					unk_0x4C44781F822B0B00(Global_103586, false, 0);
					unk_0x8DAC4E7A3269A2CE(Global_103586, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28()//Position - 0x11E8
{
	int iVar0;
	int iVar1;
	
	if (func_24(&iLocal_244))
	{
		if (!iLocal_59)
		{
			if (iLocal_244 == Global_103586 && iLocal_55 == 4)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					if (!func_7("TX_H02"))
					{
						if (Global_104555.f_10019.f_121 < 5)
						{
							func_29("TX_H02", -1);
							Global_104555.f_10019.f_121++;
						}
						iLocal_59 = 1;
					}
				}
			}
		}
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				iVar1 = unk_0x317536BCEA8FA6B0(iLocal_244, -1, 0);
				if (iLocal_55 == 4 || iLocal_55 == 2)
				{
					if (iLocal_244 != Global_103586)
					{
						func_5();
					}
				}
				func_20();
				if (func_27(&iLocal_244, &iVar1, 0))
				{
					if (iLocal_58)
					{
						if (unk_0x38DF88792E2574E5())
						{
							unk_0x2C5E25A27FEE0F8A(0);
						}
						iLocal_58 = 0;
					}
					if (!unk_0x3AB6A1A9084FB0A4(Global_103587) && unk_0xB8DE76287EDC4957(Global_103586, 0))
					{
						if (unk_0xAAA8D20859E2D36D(Global_103587, Global_103586))
						{
							if (!func_18(Global_103587, -2118855366))
							{
								unk_0x181B5054237CD6BD(Global_103587, Global_103586, 1, 10000);
							}
						}
					}
					iLocal_59 = 0;
					iLocal_54 = 1;
				}
			}
		}
	}
	else if (func_7("TX_H02"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

void func_29(char* sParam0, int iParam1)//Position - 0x131F
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_30()//Position - 0x1336
{
	if (iLocal_55 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_245))
		{
			iLocal_55 = 1;
		}
	}
	else if (iLocal_55 == 1)
	{
		func_57();
	}
	else if (iLocal_55 == 2)
	{
		func_48();
	}
	else if (iLocal_55 == 3)
	{
		func_42();
	}
	else if (iLocal_55 == 4)
	{
		func_31();
	}
}

void func_31()//Position - 0x1385
{
	if (func_41(&Global_103586, &Global_103587, iLocal_70, iLocal_69))
	{
		if (!func_35())
		{
			if (!func_18(Global_103587, -2118855366))
			{
				unk_0x181B5054237CD6BD(Global_103587, Global_103586, 1, 1000000);
			}
			unk_0xAE01EF4BC84AFE7C(Global_103587, 251, true);
			func_32();
			if (unk_0xA6DECE14FC9A8C51(iLocal_63))
			{
				unk_0xAA75C45BC4449A40(iLocal_63, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_32()//Position - 0x13F9
{
	if (unk_0x38DF88792E2574E5())
	{
		if (iLocal_58)
		{
			if (func_33())
			{
				unk_0x2C5E25A27FEE0F8A(0);
			}
		}
	}
}

int func_33()//Position - 0x1419
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	func_34(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x145E
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

int func_35()//Position - 0x1533
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (iLocal_55 == 4)
	{
		if (Global_103623 == -1 || Global_103623 == 0)
		{
			Global_103623 = unk_0x53C562FD2B9E3AB0();
		}
		else if (func_40(Global_103623, 30000))
		{
			if (iLocal_54 == 0 || iLocal_54 == 3)
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_103586, 1))
				{
					return 1;
				}
			}
		}
	}
	if (func_38(Global_103586))
	{
		vVar0 = { unk_0xB3328BA8976B416C(Global_103586, 0) };
		if (iLocal_55 == 4)
		{
			if (!func_37(vLocal_243, vVar0, 75f))
			{
				return 1;
			}
		}
		if (unk_0xEBE499597C718EB8(Global_103586, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (unk_0x5679106BC7ED79EE(vVar0, 7f, 0))
		{
			return 1;
		}
		fVar1 = 15f;
		vVar2 = { vVar0 };
		vVar3 = { vVar2 };
		vVar2.x = (vVar2.x - fVar1);
		vVar2.y = (vVar2.y - fVar1);
		vVar2.z = (vVar2.z - fVar1);
		vVar3.x = (vVar3.x + fVar1);
		vVar3.y = (vVar3.y + fVar1);
		vVar3.z = (vVar3.z + fVar1);
		if (unk_0xF1DE6FAA2EFAA34F(vVar2, vVar3, 1))
		{
			return 1;
		}
		if (func_37(vLocal_243, vVar0, 20f))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Global_103586) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Global_103586))
			{
				return 1;
			}
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	if (func_36(Global_103587))
	{
		if (unk_0xEBE499597C718EB8(Global_103587, unk_0xFC1458A37D98B502(), 1))
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

int func_36(int iParam0)//Position - 0x16CE
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_37(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x16F9
{
	return system::vdist2(vParam0, vParam1) <= (fParam2 * fParam2);
}

int func_38(int iParam0)//Position - 0x1713
{
	if (func_39(iParam0))
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

int func_39(int iParam0)//Position - 0x173D
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

bool func_40(int iParam0, int iParam1)//Position - 0x175E
{
	return (unk_0x53C562FD2B9E3AB0() - iParam0) > iParam1;
}

int func_41(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1770
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0xB8DE76287EDC4957(*uParam0, 0))
		{
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(*uParam1))
				{
					if (!unk_0xA6FA9E5D08F067AD(*uParam1))
					{
						if (!unk_0x7ED4D0E480A6EC43(*uParam1, 0))
						{
							if (unk_0xAAA8D20859E2D36D(*uParam1, *uParam0))
							{
								if (unk_0x82FF3DFBC3965CC0(*uParam0) == iParam2)
								{
									if (unk_0x90CE698681C6225E(*uParam1, iParam3))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_42()//Position - 0x17E3
{
	if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_40(iLocal_67, 3000))
	{
		unk_0x6450931B826B49D9(&cLocal_240);
		if (unk_0x3A801AA34DD821BE(&cLocal_240))
		{
			if (func_43())
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, true);
				if (unk_0x63A6486593EC7EC3(0, 3) < 2)
				{
					unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), &cLocal_240, "FORGET_IT", 4f, -2f, -1, 48, 0, 0, 0, 0);
				}
				else
				{
					unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), &cLocal_240, "FUCK_U", 4f, -2f, -1, 48, 0, 0, 0, 0);
				}
			}
			if (unk_0x63A6486593EC7EC3(0, 5) == 1)
			{
				if (!Global_36992)
				{
					iLocal_57 = 1;
				}
			}
			iLocal_67 = unk_0x53C562FD2B9E3AB0();
			iLocal_68 = unk_0x53C562FD2B9E3AB0();
			if (iLocal_62 == 1)
			{
				unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
				iLocal_62 = 0;
			}
			if (iLocal_65 != -1)
			{
				func_8(&iLocal_65);
			}
			iLocal_55 = 0;
		}
	}
}

int func_43()//Position - 0x18D3
{
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (!unk_0x470635BE5DD23831(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()) || unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (!Global_36992 && unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		return 0;
	}
	if (func_47(0))
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if (func_44())
	{
		return 0;
	}
	if (unk_0x586321DCB7FEB6F8())
	{
		return 0;
	}
	return 1;
}

bool func_44()//Position - 0x1982
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

bool func_45()//Position - 0x1997
{
	return Global_92885.f_316 > 0;
}

bool func_46()//Position - 0x19A8
{
	return Global_68215;
}

int func_47(int iParam0)//Position - 0x19B4
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

void func_48()//Position - 0x1A0E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (func_41(&Global_103586, &Global_103587, iLocal_70, iLocal_69))
	{
		bVar0 = false;
		if (unk_0xF2B58F79D29425B4(2, 23))
		{
			bVar0 = true;
		}
		if (func_40(iLocal_67, 1000))
		{
			if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -2017877118) == 7)
			{
				if (((!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FUCK_U", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FORGET_IT", 3))
				{
					if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 242628503) == 7)
					{
						unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, false);
						if (iLocal_62 == 1)
						{
							unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
							iLocal_62 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			unk_0x6450931B826B49D9(&cLocal_240);
			if (unk_0x3A801AA34DD821BE(&cLocal_240))
			{
				if (unk_0x63A6486593EC7EC3(0, 10) < 8)
				{
					if (!func_53(0, 0))
					{
						bVar1 = unk_0x7E2C8B0B99E0B3C2(unk_0xFC1458A37D98B502());
						if (bVar1)
						{
							unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 0);
						}
						func_51(unk_0xFC1458A37D98B502(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 1);
						}
					}
				}
				unk_0x6931076730A4AC5D(&iVar2);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 5000, 2048, 2);
				if (func_50(Global_103586))
				{
					unk_0x12C9D41D52A560D6(0, &cLocal_240, "Aknowledge_R", 8f, -4f, -1, 16785456, 0, 0, 0, 0);
				}
				else
				{
					unk_0x12C9D41D52A560D6(0, &cLocal_240, "Aknowledge_L", 8f, -4f, -1, 16785456, 0, 0, 0, 0);
				}
				unk_0x6F03491E8F9F397C(0, Global_103586, Global_103586, 22, 12f, 262275, 3f, 3f, 1);
				unk_0x6F03491E8F9F397C(0, Global_103586, Global_103586, 5, 12f, 262275, 3f, 3f, 1);
				unk_0x1B16DD5C115FE009(iVar2);
				unk_0xAB30B1CF01A198C1(Global_103587, iVar2);
				unk_0xFAA3EF7FF92E1F9E(&iVar2);
				func_49();
				iLocal_55 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_49()//Position - 0x1BF2
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_63))
	{
		unk_0xAAAC88CC20771601(iLocal_63, false);
		unk_0xE30CF11C0EE14316(&iLocal_63);
	}
	if (func_38(Global_103586))
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_63))
		{
			iLocal_63 = unk_0xCA43F0FC44D9B846(Global_103586);
			unk_0x4B4040A0EC7DBA81(iLocal_63, 198);
			unk_0x62BD54E491535B76(iLocal_63, "TXM_BLIP");
			unk_0x0A8FD2D5529E1737(iLocal_63, true);
			unk_0xAA75C45BC4449A40(iLocal_63, 10000);
		}
	}
}

int func_50(int iParam0)//Position - 0x1C50
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
		vVar1 = { unk_0x3F90543934DCD7E6(iParam0, 1f, 0f, 0f) };
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		vVar3 = { vVar1 - vVar0 };
		vVar4 = { vVar2 - vVar0 };
		if (unk_0xAF3D7D969F2C195C(vVar3.x, vVar3.y, vVar4.x, vVar4.y) < 90f)
		{
			return 1;
		}
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, int iParam2)//Position - 0x1CCB
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_52(iParam2), 1);
}

int func_52(int iParam0)//Position - 0x1CE2
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

int func_53(int iParam0, bool bParam1)//Position - 0x1ED2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x33B1D0D0C92D4F18(iParam0))
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x33B1D0D0C92D4F18(unk_0xFC1458A37D98B502()))
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_54())
	{
		func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x23F2F89E3D1CB7C4())
		{
			func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x06BD87535C2C9154(func_12()))
		{
			unk_0x28F7F7EF1B64C602(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x89B283B45B191258(func_12(), iVar2);
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						if (unk_0x33B1D0D0C92D4F18(iVar0))
						{
							func_55("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_54()//Position - 0x1FAD
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_55(char* sParam0)//Position - 0x1FCF
{
	func_56(sParam0);
}

void func_56(char* sParam0)//Position - 0x1FDD
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

void func_57()//Position - 0x1FF0
{
	int iVar0;
	
	func_63();
	func_32();
	if (unk_0x6ADD12BF4D6D2587(iLocal_245))
	{
		if (func_21(&iLocal_245, iLocal_70, iLocal_69))
		{
			if (func_43())
			{
				unk_0x6450931B826B49D9(&cLocal_240);
				if (unk_0x3A801AA34DD821BE(&cLocal_240))
				{
					if (((!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FUCK_U", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!func_62(&iLocal_245))
						{
							if (!unk_0x490CDFE81E831159(iLocal_245))
							{
								unk_0x945E4BE72EBAC033(iLocal_245, 1);
							}
						}
						if (iLocal_65 == -1)
						{
							func_61(&iLocal_65, 0, "TXM_H01", 1, 0, 0, 0);
						}
						if (func_60(iLocal_65, 1))
						{
							if (func_7("TXM_H01"))
							{
								unk_0x3E80C2F7BC665259(1);
							}
							if (iLocal_62 == 0)
							{
								unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 0);
								iLocal_62 = 1;
							}
							unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_245, 5000, 0, 2);
							func_59();
							func_58();
							iLocal_67 = unk_0x53C562FD2B9E3AB0();
							func_8(&iLocal_65);
							if (func_62(&iLocal_245))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_245, 0))
								{
									unk_0x945E4BE72EBAC033(iLocal_245, 0);
								}
								iLocal_58 = 0;
								iLocal_55 = 3;
							}
							else
							{
								iVar0 = unk_0x317536BCEA8FA6B0(iLocal_245, -1, 0);
								if (func_27(&iLocal_245, &iVar0, 0))
								{
									iLocal_245 = 0;
									unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Global_103586, 5000, 0, 2);
									Global_103623 = unk_0x53C562FD2B9E3AB0();
									if (unk_0xB8DE76287EDC4957(Global_103586, 0))
									{
										if (!unk_0x38DF88792E2574E5())
										{
											unk_0xFE45742ED70F5BA3(Global_103586, 0f, 0f, 0f, 1, 4000, 2000, 2000);
											iLocal_58 = 1;
										}
									}
									Global_104555.f_10019.f_120 = 1;
									iLocal_55 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_58()//Position - 0x21A5
{
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 16, 1);
	unk_0x4FB260623DD93924(0, 17, 1);
	unk_0x4FB260623DD93924(0, 12, 1);
	unk_0x4FB260623DD93924(0, 13, 1);
	unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, true);
}

void func_59()//Position - 0x21E8
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var3;
	int iVar4;
	int iVar5;
	
	bVar1 = unk_0x7E2C8B0B99E0B3C2(unk_0xFC1458A37D98B502());
	unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
	if (!Global_36992)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var3.f_4 = 1065353216;
		Var3.f_5 = 1065353216;
		Var3.f_9 = 1065353216;
		Var3.f_10 = 1065353216;
		Var3.f_14 = 1065353216;
		Var3.f_15 = 1065353216;
		Var3.f_17 = 1040187392;
		Var3.f_18 = 1040187392;
		Var3.f_19 = -1;
		iVar4 = 0;
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			Var3 = 1;
			Var3.f_2 = "FP_HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = unk_0x8B948C59217A295D("UpperbodyAndIk_filter");
			iVar4 += 16;
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
			Var3.f_21 = 1024;
		}
		else
		{
			Var3 = 1;
			Var3.f_2 = "HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = unk_0x8B948C59217A295D("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
		}
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar5, 1);
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7) || (unk_0x74C475EB8E73D398(Var3.f_2, "FP_HAIL_TAXI") && iVar5 == joaat("weapon_petrolcan")))
		{
			if (iVar5 != joaat("weapon_petrolcan") || !unk_0x74C475EB8E73D398(Var3.f_2, "FP_HAIL_TAXI"))
			{
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, true);
			}
			unk_0x6931076730A4AC5D(&iVar0);
			unk_0xF1794430C256DBC0(0, 0);
			unk_0x66D356270A201D92(0, &Var3, &Var2, &Var2, 0,25f, 0,25f);
			unk_0x1B16DD5C115FE009(iVar0);
			unk_0xAB30B1CF01A198C1(unk_0xFC1458A37D98B502(), iVar0);
			unk_0xFAA3EF7FF92E1F9E(&iVar0);
		}
		else
		{
			unk_0x66D356270A201D92(unk_0xFC1458A37D98B502(), &Var3, &Var2, &Var2, 0,25f, 0,25f);
		}
	}
	else
	{
		if (bVar1)
		{
			unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 0);
		}
		func_51(unk_0xFC1458A37D98B502(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 1);
		}
	}
}

int func_60(int iParam0, bool bParam1)//Position - 0x2428
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_47(0))
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

void func_61(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x24E0
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_8(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_62(int iParam0)//Position - 0x260B
{
	int iVar0;
	
	if (!unk_0x8EE3A848975DDF21(*iParam0, 1, 0))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(*iParam0, 1, 0);
		if (!iVar0 == unk_0xFC1458A37D98B502())
		{
			if (!unk_0x4759A34EB65CCA39(iVar0, func_12()))
			{
				if (unk_0x490CDFE81E831159(*iParam0))
				{
					unk_0x945E4BE72EBAC033(*iParam0, 0);
				}
				return 1;
			}
		}
	}
	if (!unk_0x8EE3A848975DDF21(*iParam0, 2, 0))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(*iParam0, 2, 0);
		if (!iVar0 == unk_0xFC1458A37D98B502())
		{
			if (!unk_0x4759A34EB65CCA39(iVar0, func_12()))
			{
				if (unk_0x490CDFE81E831159(*iParam0))
				{
					unk_0x945E4BE72EBAC033(*iParam0, 0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_63()//Position - 0x26A2
{
	bool bVar0;
	
	if (iLocal_57)
	{
		if (func_40(iLocal_68, 1000))
		{
			if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -2017877118) == 7)
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 242628503) == 7)
				{
					if (((!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FUCK_U", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!Global_36992)
						{
							bVar0 = unk_0x7E2C8B0B99E0B3C2(unk_0xFC1458A37D98B502());
							if (!bVar0)
							{
								unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 1);
							}
							func_51(unk_0xFC1458A37D98B502(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 0);
							}
						}
						unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 113, false);
						if (iLocal_62 == 1)
						{
							unk_0x4ACB9D202CFF8727(unk_0xFC1458A37D98B502(), 1);
							iLocal_62 = 0;
						}
						iLocal_57 = 0;
					}
				}
			}
		}
	}
}

void func_64()//Position - 0x278C
{
	if (iLocal_53 != 0)
	{
		if (func_105())
		{
			func_13();
		}
	}
	if (iLocal_53 == 0)
	{
	}
	else if (iLocal_53 == 1)
	{
		func_97();
	}
	else if (iLocal_53 == 2)
	{
		func_73();
	}
	else if (iLocal_53 == 3)
	{
		func_65();
	}
}

void func_65()//Position - 0x27D2
{
	if (func_66())
	{
		if (iLocal_54 == 0 && iLocal_55 != 4)
		{
			func_5();
			if (func_27(&Local_56, &(Local_56.f_1), 0))
			{
				Global_103623 = 0;
				if (func_38(Global_103586))
				{
					unk_0x2883644E7F3F1871(Global_103586, 2500, unk_0x8B948C59217A295D("NORMAL"), 0);
				}
				if (unk_0x6ADD12BF4D6D2587(Global_103587))
				{
					if (!unk_0x3AB6A1A9084FB0A4(Global_103587))
					{
						unk_0x60C06BFD037BB7CF(Global_103587, unk_0xFC1458A37D98B502(), 3000, 0, 2);
						unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), Global_103587, 3000, 0, 2);
					}
				}
				func_49();
				iLocal_55 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_66()//Position - 0x2872
{
	vector3 vVar0;
	
	vVar0 = { unk_0xB3328BA8976B416C(Local_56, 0) };
	if (!Local_56.f_2)
	{
		if (!Local_56.f_3)
		{
			if (func_67(vVar0, Local_56.f_14, Local_56.f_6, &(Local_56.f_17), &(Local_56.f_6)))
			{
				if (!unk_0x191BE1BC8F26F3C1(Local_56.f_1, 0))
				{
					unk_0x0F07FAE596C56D61(Local_56.f_1, 0,5f);
					if (Local_56.f_4)
					{
						unk_0x87A3E70B0AB01608(Local_56.f_1, Local_56, Local_56.f_17, 10f, 0, unk_0x82FF3DFBC3965CC0(Local_56), Local_56.f_29, 5f, unk_0xBE3C4023003180FC(vVar0, Local_56.f_17, true));
						Local_56.f_4 = 0;
					}
					else
					{
						unk_0x9E8EE202E802AC5B(Local_56.f_1, Local_56, Local_56.f_17, Local_56.f_6, 3, 90f, 1);
					}
				}
				Local_56.f_2 = 1;
			}
		}
		else
		{
			unk_0x0F07FAE596C56D61(Local_56.f_1, 0,5f);
			Local_56.f_17 = { vVar0 };
			unk_0x181B5054237CD6BD(Local_56.f_1, Local_56, 6, 15000);
			Local_56.f_2 = 1;
		}
	}
	else if (!func_18(Local_56.f_1, -272084098))
	{
		if (unk_0x9EC5112BB1C4047A(Local_56))
		{
			unk_0x181B5054237CD6BD(Local_56.f_1, Local_56, 1, 1000000);
			return 1;
		}
	}
	else
	{
		if (func_37(vVar0, vLocal_243, 5f))
		{
			if (unk_0x9EC5112BB1C4047A(Local_56) || unk_0x6A6267339FA67D12(Local_56))
			{
				unk_0x181B5054237CD6BD(Local_56.f_1, Local_56, 1, 1000000);
				return 1;
			}
		}
		if (!Local_56.f_3)
		{
			if (!func_37(vVar0, Local_56.f_17, 10f))
			{
				if (func_37(vVar0, vLocal_243, 5f))
				{
					Local_56.f_14 = { vLocal_243 };
					Local_56.f_3 = 1;
					Local_56.f_2 = 0;
				}
			}
		}
	}
	return 0;
}

int func_67(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2A0A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar4 = 1;
	if (!func_72(vParam1))
	{
		iVar4 = 9;
	}
	iVar3 = unk_0x5B253C8E41C51E8E(vParam1, 1, iVar4, 1077936128, 0);
	if (unk_0x415CDAC83972AD02(iVar3))
	{
		unk_0x52854081FE5E271E(iVar3, &vVar0);
		if (unk_0x38C202C726A922A8(vVar0, 0, &vVar1) && unk_0x38C202C726A922A8(vVar0, 1, &vVar2))
		{
			vVar5 = { vVar1 - vVar0 };
			vVar6 = { -vVar5.y, vVar5.x, 0f };
			vVar7 = { vParam0 - vParam1 };
			fVar8 = func_71(vVar6, vVar7);
			if (fVar8 < 0f)
			{
				*uParam3 = { vVar1 };
				*uParam4 = uParam2;
				if (func_69(uParam3, vVar0))
				{
					Local_56.f_4 = 1;
				}
			}
			else
			{
				*uParam3 = { vVar2 };
				*uParam4 = (*uParam4 + 180f);
				*uParam4 = func_68(*uParam4, 0f, 360f);
				if (func_69(uParam3, vVar0))
				{
					Local_56.f_4 = 1;
				}
			}
			return 1;
		}
		else if (unk_0x38C202C726A922A8(vVar0, -1, &vVar1))
		{
			*uParam3 = { vVar1 };
			*uParam4 = uParam2;
			return 1;
		}
	}
	return 0;
}

float func_68(float fParam0, float fParam1, float fParam2)//Position - 0x2B27
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

int func_69(var uParam0, vector3 vParam1)//Position - 0x2B69
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x7367FB97975F1E29(*uParam0, uParam0->f_1, 1000f, &uVar0, 0, 0))
	{
		*uParam0 = { vParam1 };
		return 0;
	}
	vVar1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_70(vVar1, vParam1))
	{
		vVar2 = { vParam1 - vVar1 / Vector(5f, 5f, 5f) };
		iVar3 = 1;
		while (iVar3 <= 5)
		{
			vVar1 = { vVar1 + vVar2 };
			if (!func_70(vVar1, vParam1))
			{
				*uParam0 = { vVar1 };
				return 1;
			}
			iVar3++;
		}
		*uParam0 = { vParam1 };
		return 1;
	}
	return 0;
}

int func_70(vector3 vParam0, vector3 vParam1)//Position - 0x2C09
{
	if ((vParam0.z - vParam1.z) > 0,45f || (vParam0.z - vParam1.z) < -0,45f)
	{
		return 1;
	}
	return 0;
}

float func_71(vector3 vParam0, vector3 vParam1)//Position - 0x2C3D
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_72(vector3 vParam0)//Position - 0x2C5E
{
	char* sVar0;
	
	sVar0 = unk_0x70B029F10FA5ED23(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x74C475EB8E73D398("SanAnd", sVar0) || unk_0x74C475EB8E73D398("Alamo", sVar0)) || unk_0x74C475EB8E73D398("ArmyB", sVar0)) || unk_0x74C475EB8E73D398("BhamCa", sVar0)) || unk_0x74C475EB8E73D398("Baytre", sVar0)) || unk_0x74C475EB8E73D398("BradT", sVar0)) || unk_0x74C475EB8E73D398("BradP", sVar0)) || unk_0x74C475EB8E73D398("CANNY", sVar0)) || unk_0x74C475EB8E73D398("CCreak", sVar0)) || unk_0x74C475EB8E73D398("ChamH", sVar0)) || unk_0x74C475EB8E73D398("CHU", sVar0)) || unk_0x74C475EB8E73D398("COSI", sVar0)) || unk_0x74C475EB8E73D398("CMSW", sVar0)) || unk_0x74C475EB8E73D398("Cypre", sVar0)) || unk_0x74C475EB8E73D398("Desrt", sVar0)) || unk_0x74C475EB8E73D398("ELGorl", sVar0)) || unk_0x74C475EB8E73D398("Galli", sVar0)) || unk_0x74C475EB8E73D398("Galfish", sVar0)) || unk_0x74C475EB8E73D398("Harmo", sVar0)) || unk_0x74C475EB8E73D398("HumLab", sVar0)) || unk_0x74C475EB8E73D398("Jail", sVar0)) || unk_0x74C475EB8E73D398("LAct", sVar0)) || unk_0x74C475EB8E73D398("LDam", sVar0)) || unk_0x74C475EB8E73D398("Lago", sVar0)) || unk_0x74C475EB8E73D398("MTChil", sVar0)) || unk_0x74C475EB8E73D398("MTJose", sVar0)) || unk_0x74C475EB8E73D398("MTGordo", sVar0)) || unk_0x74C475EB8E73D398("NCHU", sVar0)) || unk_0x74C475EB8E73D398("Oceana", sVar0)) || unk_0x74C475EB8E73D398("Palmpow", sVar0)) || unk_0x74C475EB8E73D398("PBluff", sVar0)) || unk_0x74C475EB8E73D398("Paleto", sVar0)) || unk_0x74C475EB8E73D398("PalCov", sVar0)) || unk_0x74C475EB8E73D398("PalFor", sVar0)) || unk_0x74C475EB8E73D398("PalHigh", sVar0)) || unk_0x74C475EB8E73D398("RTRAK", sVar0)) || unk_0x74C475EB8E73D398("Rancho", sVar0)) || unk_0x74C475EB8E73D398("SANDY", sVar0)) || unk_0x74C475EB8E73D398("TongvaH", sVar0)) || unk_0x74C475EB8E73D398("TongvaV", sVar0)) || unk_0x74C475EB8E73D398("Zenora", sVar0)) || unk_0x74C475EB8E73D398("Slab", sVar0)) || unk_0x74C475EB8E73D398("WindF", sVar0)) || unk_0x74C475EB8E73D398("Zancudo", sVar0)) || unk_0x74C475EB8E73D398("SanChia", sVar0)) || unk_0x74C475EB8E73D398("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x2F52
{
	if (func_74())
	{
		Local_56.f_2 = 0;
		iLocal_53 = 3;
	}
}

int func_74()//Position - 0x2F69
{
	vector3 vVar0;
	
	if (!Local_56.f_2)
	{
		if (func_75(Local_56.f_20, &(Local_56.f_14), &(Local_56.f_6), &(Local_56.f_8), 250))
		{
			unk_0x87A3E70B0AB01608(Local_56.f_1, Local_56, Local_56.f_14, 12f, 0, unk_0x82FF3DFBC3965CC0(Local_56), Local_56.f_29, (Local_56.f_7 - 20f), 20f);
			Local_56.f_2 = 1;
		}
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(Local_56, 1) };
		if (func_37(vVar0, Local_56.f_14, Local_56.f_7))
		{
			return 1;
		}
		else if (func_37(vVar0, vLocal_243, 5f))
		{
			Local_56.f_14 = { vLocal_243 };
			return 1;
		}
		else if (!func_18(Local_56.f_1, -1817882002))
		{
			Local_56.f_2 = 0;
			Local_56.f_8 = 0;
		}
	}
	return 0;
}

int func_75(vector3 vParam0, var uParam1, float fParam2, var uParam3, int iParam4)//Position - 0x3031
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2,5f;
	iVar3 = 0;
	iVar6 = *uParam3 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_72(vParam0))
	{
		iVar9 = 9;
	}
	func_95(vParam0, vParam0, &(Local_56.f_23), &(Local_56.f_26), iParam4);
	if (func_94(Local_56.f_23, Local_56.f_26))
	{
		if (!func_78(vParam0, uParam1, fParam2, 1))
		{
			while (!bVar8 && *uParam3 < iVar6)
			{
				if (vParam0.z == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x5C41B0B656C02102(vParam0, *uParam3, uParam1, fParam2, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = unk_0x5B253C8E41C51E8E(*uParam1, 1, iVar9, 1077936128, 0);
					if (unk_0x415CDAC83972AD02(iVar5))
					{
						fVar2 = (vParam0.z - uParam1->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_77(vParam0, *uParam1) || fVar2 < 0,5f)
						{
							if (unk_0xB8DE76287EDC4957(Local_56, 0))
							{
								iVar3 = Local_56;
							}
							if (!unk_0x66614717522DA4A5(*uParam1, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam3++;
				if (*uParam3 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_56.f_5 = func_76(vParam0, *uParam1);
			return 1;
		}
	}
	return 0;
}

float func_76(vector3 vParam0, vector3 vParam1)//Position - 0x3190
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - vParam1 };
	vVar0.z = 0f;
	return system::vmag(vVar0);
}

int func_77(vector3 vParam0, vector3 vParam1)//Position - 0x31B2
{
	float fVar0;
	float fVar1;
	
	fVar1 = (vParam1.z - vParam0.z);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (vParam0.z <= 1f)
	{
		func_55("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = system::vdist(vParam0, vParam1);
	fVar0 = (fVar0 / 1,75f);
	if (fVar1 < fVar0)
	{
		func_55("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_78(vector3 vParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3214
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_93(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261,58f, -3332,685f, 5,4191f };
		*uParam2 = 163,87f;
		return 1;
	}
	else if (func_93(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577,16f, 5166,51f, 19,1864f };
		*uParam2 = 0f;
		return 1;
	}
	else if (func_93(vParam0, -874,9833f, 125,7645f, -100f, -768,6254f, 193,0297f, 100f))
	{
		*uParam1 = { -856,6151f, 163,7361f, 65,093f };
		*uParam2 = 355,3355f;
		return 1;
	}
	else if (func_93(vParam0, -39,2005f, -1473,55f, -100f, 10,6133f, -1430,099f, 100f))
	{
		*uParam1 = { -15,5181f, -1456,4f, 29,4244f };
		*uParam2 = 94,6893f;
		return 1;
	}
	else if (func_93(vParam0, 1964,742f, 3792,59f, -100f, 1992,636f, 3840,253f, 100f))
	{
		*uParam1 = { 1996,372f, 3818,831f, 31,1612f };
		*uParam2 = 170,0221f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -68,2187f, -1086,951f, -100f, -10,54518f, -1106,895f, 100f, 43,5f, 0, true))
	{
		*uParam1 = { -63,5854f, -1074,732f, 26,0995f };
		*uParam2 = 324,1257f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vParam0, 398,7899f, -1651,417f, -100f, 423,8372f, -1619,432f, 100f, 45f, 0, true))
	{
		*uParam1 = { 416,871f, -1613,081f, 28,1401f };
		*uParam2 = 227,9333f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -988,8535f, -2553,177f, -100f, -1041,486f, -2644,97f, 100f, 49,75f, 0, true) && !unk_0x3A711520F83BAE98())
	{
		*uParam1 = { -1039,542f, -2574,467f, 12,7566f };
		*uParam2 = 162,2744f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -906,902f, -2600,461f, -100f, -959,7651f, -2692,057f, 100f, 49,75f, 0, true) && !unk_0x3A711520F83BAE98())
	{
		*uParam1 = { -911,1597f, -2676,132f, 12,7567f };
		*uParam2 = 338,9414f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 28f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -209,3372f, -2011,099f, 26,62037f, -257,2225f, -2076,963f, 36,62037f, 30f, 0, true))
	{
		*uParam1 = { -211,8546f, -2030,771f, 26,6204f };
		*uParam2 = 154,4302f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 159f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -804,05f, 4216,412f, 204,4872f, -509,0679f, 4135,19f, 123,2502f, 250f, 0, true))
	{
		*uParam1 = { -623,3622f, 3996f, 120,7669f };
		*uParam2 = 37,8784f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 180f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -2203,167f, 183,3549f, 167,4022f, -2311,587f, 434,3828f, 195,4669f, 138,5f, 0, true))
	{
		*uParam1 = { -2294,945f, 376,2506f, 173,4669f };
		*uParam2 = 296,6963f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -2041,478f, -553,2159f, -0,089962f, -1787,08f, -768,0886f, 37,99918f, 220f, 0, true))
	{
		*uParam1 = { -1897,077f, -557,3334f, 10,7279f };
		*uParam2 = 228,7709f;
		if (unk_0x8AE9E5E8F6DC40C9(vVar1, -1882,883f, -541,7442f, 4,675224f, -1929,626f, -598,6026f, 40,4298f, 35f, 0, true))
		{
			return 1;
		}
		else
		{
			vVar2[0 /*3*/] = { -1962,468f, -503,4229f, 10,8349f };
			vVar2[1 /*3*/] = { -1924,472f, -534,7357f, 10,8181f };
			vVar2[2 /*3*/] = { -1896,324f, -557,768f, 10,7256f };
			vVar2[3 /*3*/] = { -1850,661f, -595,8367f, 10,4649f };
			vVar2[4 /*3*/] = { -1809f, -632,1207f, 10,0016f };
			vVar2[5 /*3*/] = { -1745,043f, -694,4053f, 9,1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = system::vdist(vVar2[iVar6 /*3*/], vVar1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { vVar2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*uParam2 = 234,3999f;
			}
			else if (iVar3 == 1)
			{
				*uParam2 = 232,2255f;
			}
			else if (iVar3 == 2)
			{
				*uParam2 = 228,2855f;
			}
			else if (iVar3 == 3)
			{
				*uParam2 = 231,4914f;
			}
			else if (iVar3 == 4)
			{
				*uParam2 = 230,6703f;
			}
			else if (iVar3 == 5)
			{
				*uParam2 = 228,7709f;
			}
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 330f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -446,12f, 1057,452f, 318,6169f, -405,8336f, 1194,486f, 337,0966f, 106,25f, 0, true))
	{
		*uParam1 = { -411,3629f, 1174,587f, 324,6421f };
		*uParam2 = 255,2881f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -1362,091f, -29,26777f, -100f, -1377,953f, 152,2389f, 100f, 50f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380,101f, 95,1566f, 53,5054f };
				*uParam2 = 4,555f;
				break;
			
			case 2:
				*uParam1 = { -1379,139f, 84,2472f, 53,0592f };
				*uParam2 = 6,9278f;
				break;
			
			case 3:
				*uParam1 = { -1378,427f, 74,5077f, 52,6622f };
				*uParam2 = 2,6813f;
				break;
			
			case 4:
				*uParam1 = { -1384,177f, 73,9207f, 52,7438f };
				*uParam2 = 5,542f;
				break;
			
			case 5:
				*uParam1 = { -1381,118f, 35,7838f, 52,659f };
				*uParam2 = 7,6687f;
				break;
			
			case 6:
				*uParam1 = { -1383,741f, 64,1491f, 52,6647f };
				*uParam2 = 2,5572f;
				break;
			
			case 7:
				*uParam1 = { -1382,616f, 49,6876f, 52,6585f };
				*uParam2 = 3,0185f;
				break;
			
			default:
				*uParam1 = { -1383,299f, 54,4598f, 52,6562f };
				*uParam2 = 6,2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, 48,31006f, -1120,669f, 28,0305f, -12,12345f, -1112,084f, 36,08567f, 60f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50,9889f, -1092,525f, 28,2152f };
					*uParam2 = 150,8833f;
					break;
				
				case 2:
					*uParam1 = { 46,7725f, -1099,751f, 28,1639f };
					*uParam2 = 149,4322f;
					break;
				
				case 3:
					*uParam1 = { 41,6146f, -1107,742f, 28,1318f };
					*uParam2 = 154,1378f;
					break;
				
				case 4:
					*uParam1 = { 38,1922f, -1113,394f, 28,1507f };
					*uParam2 = 146,3778f;
					break;
				
				case 5:
					*uParam1 = { 13,0436f, -1124,767f, 27,7359f };
					*uParam2 = 91,163f;
					break;
				
				case 6:
					*uParam1 = { 1,4336f, -1125,042f, 27,1705f };
					*uParam2 = 91,0578f;
					break;
				
				case 7:
					*uParam1 = { -11,1811f, -1125,811f, 26,3688f };
					*uParam2 = 91,866f;
					break;
				
				default:
					*uParam1 = { 21,9431f, -1124,573f, 27,9417f };
					*uParam2 = 91,6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1061,018f, -2540,235f, 18,66932f, -1023,332f, -2562,115f, 31,57616f, 250f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
					*uParam2 = 148,7004f;
					break;
				
				case 2:
					*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
					*uParam2 = 148,7144f;
					break;
				
				case 3:
					*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
					*uParam2 = 150,0955f;
					break;
				
				case 4:
					*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
					*uParam2 = 149,5649f;
					break;
				
				case 5:
					*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
					*uParam2 = 150,7363f;
					break;
				
				case 6:
					*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
					*uParam2 = 147,2113f;
					break;
				
				case 7:
					*uParam1 = { -1044,487f, -2525,534f, 19,079f };
					*uParam2 = 150,7597f;
					break;
				
				default:
					*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
					*uParam2 = 150,7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1061,059f, -2540,254f, 10,94467f, -1023,297f, -2562,052f, 18,51685f, 250f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044,741f, -2528,786f, 12,7568f };
					*uParam2 = 150,9439f;
					break;
				
				case 2:
					*uParam1 = { -1050,763f, -2539,498f, 12,7566f };
					*uParam2 = 150,851f;
					break;
				
				case 3:
					*uParam1 = { -1054,952f, -2546,86f, 12,7566f };
					*uParam2 = 149,9285f;
					break;
				
				case 4:
					*uParam1 = { -1060,397f, -2556,898f, 12,6066f };
					*uParam2 = 150,8244f;
					break;
				
				case 5:
					*uParam1 = { -1020,744f, -2490,084f, 12,6396f };
					*uParam2 = 148,6134f;
					break;
				
				case 6:
					*uParam1 = { -1076,904f, -2589,179f, 12,6858f };
					*uParam2 = 149,0112f;
					break;
				
				case 7:
					*uParam1 = { -1026,387f, -2501,952f, 12,6923f };
					*uParam2 = 149,7553f;
					break;
				
				default:
					*uParam1 = { -1070,506f, -2578,389f, 12,6932f };
					*uParam2 = 148,5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1043,364f, -2747,29f, 16,96057f, -991,5368f, -2657,682f, 69,12349f, 200f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067,846f, -2708,94f, 19,0588f };
					*uParam2 = 230,9025f;
					break;
				
				case 2:
					*uParam1 = { -1058,224f, -2716,217f, 19,06f };
					*uParam2 = 237,1285f;
					break;
				
				case 3:
					*uParam1 = { -1004,567f, -2744,797f, 19,0811f };
					*uParam2 = 255,6885f;
					break;
				
				case 4:
					*uParam1 = { -1049,509f, -2721,58f, 19,0546f };
					*uParam2 = 242,3581f;
					break;
				
				case 5:
					*uParam1 = { -1017,154f, -2740,117f, 19,0525f };
					*uParam2 = 243,5798f;
					break;
				
				case 6:
					*uParam1 = { -1042,087f, -2726,077f, 19,0452f };
					*uParam2 = 240,2381f;
					break;
				
				case 7:
					*uParam1 = { -1027,353f, -2734,462f, 19,0509f };
					*uParam2 = 239,8703f;
					break;
				
				default:
					*uParam1 = { -1033,74f, -2730,746f, 19,0521f };
					*uParam2 = 239,9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1047,646f, -2754,947f, 2,941969f, -991,7314f, -2653,153f, 16,89228f, 200f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971,9154f, -2749,122f, 12,6069f };
					*uParam2 = 265,8022f;
					break;
				
				case 2:
					*uParam1 = { -980,6166f, -2748,535f, 12,757f };
					*uParam2 = 263,5472f;
					break;
				
				case 3:
					*uParam1 = { -987,6072f, -2747,273f, 12,6069f };
					*uParam2 = 257,2886f;
					break;
				
				case 4:
					*uParam1 = { -1006,815f, -2739,345f, 12,6334f };
					*uParam2 = 242,1315f;
					break;
				
				case 5:
					*uParam1 = { -1051,83f, -2713,553f, 12,6333f };
					*uParam2 = 239,9312f;
					break;
				
				case 6:
					*uParam1 = { -1041,004f, -2719,647f, 12,6402f };
					*uParam2 = 240,1081f;
					break;
				
				case 7:
					*uParam1 = { -1023,832f, -2729,465f, 12,6445f };
					*uParam2 = 239,6737f;
					break;
				
				default:
					*uParam1 = { -1012,848f, -2735,172f, 12,6656f };
					*uParam2 = 237,6545f;
					break;
			}
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 845,7216f, -990,7473f, 37,4696f, 846,3397f, -1066,88f, 16,96623f, 90f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868,1039f, -995,9224f, 29,7369f };
				*uParam2 = 93,132f;
				break;
			
			case 2:
				*uParam1 = { 859,283f, -996,4102f, 28,7865f };
				*uParam2 = 92,2581f;
				break;
			
			case 3:
				*uParam1 = { 849,4288f, -997,1062f, 27,5347f };
				*uParam2 = 92,714f;
				break;
			
			case 4:
				*uParam1 = { 841,1268f, -997,4826f, 26,5744f };
				*uParam2 = 92,8628f;
				break;
			
			case 5:
				*uParam1 = { 831,2605f, -1009,556f, 25,599f };
				*uParam2 = 268,6186f;
				break;
			
			case 6:
				*uParam1 = { 844,6506f, -1010,09f, 26,9894f };
				*uParam2 = 270,076f;
				break;
			
			case 7:
				*uParam1 = { 852,2498f, -1010,132f, 27,8091f };
				*uParam2 = 269,722f;
				break;
			
			default:
				*uParam1 = { 861,4028f, -1010,025f, 28,808f };
				*uParam2 = 270,7686f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 767,3736f, -1077,429f, -10,78654f, 682,8284f, -1080,686f, 79,67303f, 60f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703,2726f, -1067,7f, 21,4765f };
				*uParam2 = 181,3629f;
				break;
			
			case 2:
				*uParam1 = { 715,2089f, -1070,399f, 21,2708f };
				*uParam2 = 175,4362f;
				break;
			
			case 3:
				*uParam1 = { 715,2911f, -1059,42f, 21,0876f };
				*uParam2 = 181,0347f;
				break;
			
			case 4:
				*uParam1 = { 709,6841f, -1086,78f, 21,419f };
				*uParam2 = 233,169f;
				break;
			
			case 5:
				*uParam1 = { 703,807f, -1057,866f, 21,4152f };
				*uParam2 = 170,1609f;
				break;
			
			case 6:
				*uParam1 = { 708,1994f, -1048,194f, 21,216f };
				*uParam2 = 134,2729f;
				break;
			
			case 7:
				*uParam1 = { 711,1124f, -1069,423f, 21,3129f };
				*uParam2 = 177,9198f;
				break;
			
			default:
				*uParam1 = { 703,545f, -1078,718f, 21,3987f };
				*uParam2 = 180,5686f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 31f;
	}
	if (func_90(3, vVar1))
	{
		if (func_89(vVar1, 3, 0, 0))
		{
			*uParam1 = { -1520,121f, 2731,511f, 16,6437f };
			*uParam2 = 48,1572f;
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 77,2f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1535,987f, -2041,497f, 68,21275f, 1529,357f, -2204,463f, 96,11195f, 105f, 0, true))
	{
		*uParam1 = { 1540,75f, -2051,49f, 76,85f };
		*uParam2 = 255,41f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 51,1739f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1185,81f, -1768,367f, 28,31145f, 1369,068f, -1701,452f, 66,25389f, 70f, 1, true))
	{
		if (func_88(vVar1, 1283,326f, -1731,522f, 51,78555f, 17f))
		{
			*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
			*uParam2 = 275,4274f;
			return 1;
		}
		if (func_88(vVar1, 1334,386f, -1709,762f, 55,70131f, 41f))
		{
			*uParam1 = { 1334,386f, -1709,762f, 55,70131f };
			*uParam2 = 275,4411f;
			return 1;
		}
		if (func_88(vVar1, 1246,166f, -1750,625f, 45,35691f, 28f))
		{
			*uParam1 = { 1246,166f, -1750,625f, 45,35691f };
			*uParam2 = 301,2981f;
			return 1;
		}
		if (func_88(vVar1, 1196,272f, -1753,051f, 37,63976f, 32f))
		{
			*uParam1 = { 1196,272f, -1753,051f, 37,63976f };
			*uParam2 = 209,4354f;
			return 1;
		}
		*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
		*uParam2 = 275,4274f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 25f;
	}
	if (func_88(vVar1, -1693,302f, -1109,13f, 17,89778f, 240f))
	{
		if ((unk_0x8AE9E5E8F6DC40C9(vVar1, -1538,981f, -941,1323f, 10,56623f, -1715,57f, -1139,766f, 52,20361f, 110f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vVar1, -1739,989f, -1115,973f, 10,08726f, -1800,515f, -1187,18f, 52,0172f, 25f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vVar1, -1801,766f, -1180,252f, 4,017236f, -1857,718f, -1244,628f, 38,49653f, 85f, 0, true))
		{
			*uParam1 = { -1624,445f, -976,9755f, 12,0175f };
			*uParam2 = 141,167f;
			return 1;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -1140,89f, -1573,135f, -6,566939f, -1067,084f, -1675,976f, 23,53153f, 52f, 0, true))
	{
		*uParam1 = { -1095,63f, -1577,24f, 3,82f };
		*uParam2 = 216,12f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 114f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1324,172f, 1110,748f, 99,65493f, 1523,097f, 1110,473f, 132,8859f, 170f, 0, true))
	{
		iVar0 = 3;
		switch (unk_0x63A6486593EC7EC3(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369,246f, 1147,653f, 112,7592f };
				*uParam2 = 182,0998f;
				break;
			
			case 1:
				*uParam1 = { 1360,848f, 1139,121f, 112,7592f };
				*uParam2 = 83,3356f;
				break;
			
			case 2:
				*uParam1 = { 1364,751f, 1154,367f, 112,7592f };
				*uParam2 = 223,2795f;
				break;
		}
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 40f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1737,39f, 3287,795f, 35,13897f, 1724,345f, 3337,854f, 57,20038f, 40f, 0, true))
	{
		*uParam1 = { 1782,19f, 3300,076f, 40,4593f };
		*uParam2 = 142,426f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 7f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -695,7981f, -1379,678f, 24,48124f, -777,3731f, -1491,13f, -3,594945f, 72f, 0, true))
	{
		*uParam1 = { -658,2056f, -1388,789f, 9,499f };
		*uParam2 = 174,6945f;
		return 1;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 325f;
	}
	if (system::vdist2(vVar1, -75,59782f, -818,6082f, 325,1745f) < (58f * 58f))
	{
		*uParam1 = { -142,367f, -895,0251f, 28,191f };
		*uParam2 = 71,6555f;
		return 1;
	}
	if (!func_80())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.z = 36,1141f;
		}
		if (func_90(7, vVar1))
		{
			if (func_89(vVar1, 7, 0, 0))
			{
				*uParam1 = { -1012,31f, -465,1634f, 36,1141f };
				*uParam2 = 112,1485f;
				return 1;
			}
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 12,7091f;
	}
	if (func_90(2, vVar1))
	{
		if (func_89(vVar1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x3A711520F83BAE98())
			{
				switch (unk_0x63A6486593EC7EC3(0, iVar0))
				{
					case 0:
						*uParam1 = { -979,95f, -2746,109f, 12,7091f };
						*uParam2 = 91,4929f;
						break;
					
					case 1:
						*uParam1 = { -1025,193f, -2728,218f, 12,6647f };
						*uParam2 = 239,0041f;
						break;
					
					case 2:
						*uParam1 = { -1051,315f, -2713,069f, 12,6676f };
						*uParam2 = 236,4666f;
						break;
					
					case 3:
						*uParam1 = { -1095,742f, -2637,871f, 12,6461f };
						*uParam2 = 188,9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
						*uParam2 = 148,7004f;
						break;
					
					case 2:
						*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
						*uParam2 = 148,7144f;
						break;
					
					case 3:
						*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
						*uParam2 = 150,0955f;
						break;
					
					case 4:
						*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
						*uParam2 = 149,5649f;
						break;
					
					case 5:
						*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
						*uParam2 = 150,7363f;
						break;
					
					case 6:
						*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
						*uParam2 = 147,2113f;
						break;
					
					case 7:
						*uParam1 = { -1044,487f, -2525,534f, 19,079f };
						*uParam2 = 150,7597f;
						break;
					
					default:
						*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
						*uParam2 = 150,7081f;
						break;
					}
			}
			return 1;
		}
	}
	vVar7 = { -509,5746f, 4938,918f, 146,3271f };
	fVar8 = 232,0109f;
	fVar9 = func_79(vParam0, vVar7);
	vVar10 = { 2450,604f, 5129,224f, 45,9722f };
	fVar11 = 241,1957f;
	fVar12 = func_79(vParam0, vVar10);
	vVar1 = { vParam0 };
	bVar13 = false;
	if (vParam0.z == 1f)
	{
		vVar1.z = 400f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -148,8777f, 4862,204f, 305,6442f, 454,6274f, 5573,104f, 804,097f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 200f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -482,8931f, 4990,255f, 155,1601f, 7,830751f, 5009,371f, 430,7604f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { vVar7 };
		*uParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { vVar10 };
			*uParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (vParam0.z == 1f)
	{
		vVar1.z = 700f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 441,3999f, 5579,99f, 802,5138f, 965,7776f, 5675,921f, 601,2646f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 300f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 954,1139f, 5641,051f, 646,5054f, 2140,375f, 5377,753f, 149,1221f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 100f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 2117,348f, 5377,259f, 173,3297f, 2439,934f, 5297,445f, 62,68662f, 100f, 0, true))
	{
		bVar13 = true;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 65f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 2393,347f, 5321,58f, 107,0624f, 2523,946f, 5124,746f, 41,68384f, 70f, 0, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { vVar10 };
		*uParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { vVar7 };
			*uParam2 = fVar8;
		}
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 6f;
	}
	if (func_37(vVar1, -99,68751f, -2448,891f, 5,01731f, 230f))
	{
		if ((((unk_0x8AE9E5E8F6DC40C9(vVar1, 85,05448f, -2511,884f, -2,996267f, -57,59977f, -2412,716f, 15,00095f, 75f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vVar1, 7,516524f, -2546,741f, 1,331557f, -177,3268f, -2417,047f, 19,16044f, 80f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vVar1, -260,0354f, -2419,978f, 1,399635f, -27,26375f, -2423,848f, 25,00064f, 80f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vVar1, -187,4256f, -2516,086f, -6,849975f, -186,7518f, -2438,149f, 25,0016f, 40f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vVar1, -73,60813f, -2538,564f, -6,989857f, -183,2556f, -2465,145f, 25,0203f, 70f, 0, true))
		{
			iVar0 = 2;
			if (unk_0x63A6486593EC7EC3(0, iVar0) == 0)
			{
				*uParam1 = { 29,5582f, -2553,587f, 5,0004f };
				*uParam2 = 253,9545f;
			}
			else
			{
				*uParam1 = { -189,6824f, -2531,649f, 5,0031f };
				*uParam2 = 0,0408f;
			}
			return 1;
		}
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28,4f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 412,279f, 6481,868f, 25,80821f, 468,9353f, 6442,752f, 45,60727f, 24f, 0, true))
	{
		*uParam1 = { 445,231f, 6476,948f, 28,4862f };
		*uParam2 = 219,4788f;
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28,2065f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 476,5394f, -1301,548f, 44,82458f, 499,5822f, -1339,025f, 26,31703f, 35f, 0, true))
	{
		*uParam1 = { 498,185f, -1288,535f, 28,1923f };
		*uParam2 = 181,3208f;
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28,2065f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 496,9816f, -1412,255f, 43,29391f, 497,269f, -1339,364f, 26,31648f, 40f, 0, true))
	{
		*uParam1 = { 504,1738f, -1421,251f, 28,2065f };
		*uParam2 = 83,2905f;
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 73f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 951,1704f, -147,0047f, 71,54326f, 1005,245f, -98,44745f, 95,62679f, 70f, 0, true))
	{
		*uParam1 = { 961,3104f, -150,1964f, 73,4016f };
		*uParam2 = 58,9938f;
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 52f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1137,022f, 89,06853f, 74,89022f, 1267,821f, 292,0106f, 102,9904f, 195f, 0, true))
	{
		*uParam1 = { 1118,751f, 262,0209f, 79,8555f };
		*uParam2 = 52,3086f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vVar1, 1137,022f, 89,06853f, 71,89022f, 1010,046f, -91,56699f, 103,4568f, 180f, 0, true))
	{
		*uParam1 = { 1134,053f, 53,1835f, 79,7553f };
		*uParam2 = 145,5134f;
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 30,6f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, 191,8731f, -723,553f, 40,23576f, 79,58656f, -687,6684f, 29,54734f, 85f, 0, true))
	{
		iVar0 = 2;
		if (unk_0x63A6486593EC7EC3(0, iVar0) == 0)
		{
			*uParam1 = { 182,6361f, -753,5836f, 31,8051f };
			*uParam2 = 162,0019f;
		}
		else
		{
			*uParam1 = { 81,5318f, -675,4875f, 30,5695f };
			*uParam2 = 341,8541f;
		}
		return 1;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 33,5f;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vVar1, -40f, -687,7f, 36,6f, -72,7f, -682f, 29,6f, 15f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vVar1, -45,3f, -687,8f, 29,3f, 5,9f, -688,7f, 36,8f, 55f, 0, true))
	{
		*uParam1 = { -88,4f, -660,9f, 35f };
		*uParam2 = -20f;
		return 1;
	}
	else if (unk_0x8AE9E5E8F6DC40C9(vVar1, 8,1f, -685,5f, 31,2f, 26,3f, -665,7f, 35,2f, 10f, 0, true))
	{
		*uParam1 = { 61,4f, -653,2f, 32f };
		*uParam2 = 160f;
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, 496,2593f, -3116,586f, 13,6414f, 471,4366f, -3116,258f, 5,7109f, 10f, 0, true))
	{
		*uParam1 = { 484,0132f, -3033,162f, 5,0717f };
		*uParam2 = 140,7302f;
		return 1;
	}
	return 0;
}

float func_79(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x5336
{
	return system::vdist2(Param0, Param0.f_1, 0f, Param2, Param2.f_1, 0f);
}

int func_80()//Position - 0x5350
{
	int iVar0;
	
	iVar0 = func_82();
	if (iVar0 == 0)
	{
		if (func_81(65))
		{
			return 1;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_81(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_81(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x53AF
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

int func_82()//Position - 0x53DC
{
	func_83();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_83()//Position - 0x53F5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_87(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_86(unk_0xFC1458A37D98B502());
			if (func_85(iVar0) && (!func_84(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_85(Global_104555.f_2353.f_539.f_4301))
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

bool func_84(int iParam0)//Position - 0x54F2
{
	return Global_35861 == iParam0;
}

bool func_85(int iParam0)//Position - 0x5500
{
	return iParam0 < 3;
}

int func_86(int iParam0)//Position - 0x550C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_87(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_87(int iParam0)//Position - 0x5549
{
	if (func_85(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_88(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x5573
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_89(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x559D
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			vVar1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			vVar0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			vVar1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			vVar1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			vVar1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			vVar1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			vVar1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			vVar0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			vVar1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			vVar1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			vVar0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			vVar1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			vVar0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			vVar1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			vVar1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			vVar1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			vVar1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			vVar0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			vVar1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			vVar1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			vVar0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			vVar1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			vVar1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			vVar1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			vVar1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			vVar1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			vVar0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			vVar1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			vVar0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			vVar1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			vVar0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			vVar1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			vVar1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			vVar1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			vVar0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			vVar1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			vVar1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 127,25f;
			vVar0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			vVar1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			vVar1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			vVar0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			vVar1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			vVar1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			vVar1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			vVar0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			vVar1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			vVar0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			vVar1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			vVar0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			vVar1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			vVar0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			vVar1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			vVar0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			vVar1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			vVar0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			vVar1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			vVar0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			vVar1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			vVar1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			vVar1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			vVar0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			vVar1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			vVar1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			vVar1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			vVar1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			vVar1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			vVar0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			vVar1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			vVar1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			vVar1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			vVar1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			vVar1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			vVar1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			vVar0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			vVar1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			vVar0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			vVar1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			vVar0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			vVar1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			vVar0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			vVar1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_90(int iParam0, vector3 vParam1)//Position - 0x62F1
{
	return system::vdist2(vParam1, func_92(iParam0)) < func_91(iParam0);
}

float func_91(int iParam0)//Position - 0x630E
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_92(int iParam0)//Position - 0x63A6
{
	switch (iParam0)
	{
		case 1:
			return -1155,877f, 48,3426f, 52,4985f;
			break;
		
		case 2:
			return -1245,12f, -2818,38f, 12,94f;
			break;
		
		case 3:
			return -2176,19f, 3092,07f, 31,81f;
			break;
		
		case 4:
			return 1701,666f, 2586,261f, 51,4925f;
			break;
		
		case 5:
			return 3525,058f, 3711,323f, 35,6423f;
			break;
		
		case 6:
			return 548,1421f, -3157,961f, 5,0696f;
			break;
		
		case 7:
			return -1142,411f, -526,4487f, 31,6878f;
			break;
		
		case 8:
			return 456,8879f, -985,2783f, 35,6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(vector3 vParam0, vector3 vParam1, vector3 vParam2)//Position - 0x6490
{
	if (((((vParam0.x > vParam1.x && vParam0.x < vParam2.x) && vParam0.y > vParam1.y) && vParam0.y < vParam2.y) && vParam0.z > vParam1.z) && vParam0.z < vParam2.z)
	{
		return 1;
	}
	return 0;
}

int func_94(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x64E7
{
	if (unk_0x9C0571C926F68BED(Param0, Param0.f_1, Param2, Param2.f_1))
	{
		return 1;
	}
	return 0;
}

void func_95(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x6507
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (Param2 <= Param0)
	{
		vVar0.x = Param2;
		vVar1.x = Param0;
	}
	else
	{
		vVar0.x = Param0;
		vVar1.x = Param2;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		vVar0.y = Param2.f_1;
		vVar1.y = Param0.f_1;
	}
	else
	{
		vVar0.y = Param0.f_1;
		vVar1.y = Param2.f_1;
	}
	vVar0 = { vVar0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	vVar1 = { vVar1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_96(vVar0, *uParam4, 1056964608, 0) || !func_96(vVar0, *uParam4, 1056964608, 0))
	{
		*uParam4 = { vVar0 };
		*uParam5 = { vVar1 };
	}
	unk_0x590D9654A4367AA1(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_96(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x65D2
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

void func_97()//Position - 0x664D
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (func_40(Local_56.f_9, 10000))
		{
			unk_0x6FF834D85E2DD4C6(iLocal_70);
			unk_0x6FF834D85E2DD4C6(iLocal_69);
			if (unk_0x9A0B2ED5055D3F0B(iLocal_70))
			{
				if (unk_0x9A0B2ED5055D3F0B(iLocal_69))
				{
					if (func_72(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0)))
					{
						if (Local_56.f_10 < 2)
						{
							iVar2 = 0;
						}
						else if (Local_56.f_10 < 5)
						{
							iVar2 = 9;
						}
						else
						{
							iVar2 = 1;
						}
					}
					else if (Local_56.f_10 < 5)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 9;
					}
					if (func_99(&vVar0, &fVar1, &(Local_56.f_8), iVar2, 1103626240))
					{
						unk_0x247EAA2E93D4A021(vVar0, 5f, 1, 0, 0, false);
						if (func_98(&Local_56, &(Local_56.f_1), vVar0, fVar1))
						{
							Local_56.f_5 = func_76(unk_0xB3328BA8976B416C(Local_56, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
							Local_56.f_2 = 0;
							Local_56.f_8 = 0;
							iLocal_53 = 2;
						}
					}
					else if (Local_56.f_8 >= 5)
					{
						Local_56.f_10++;
						if (Local_56.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_56.f_8 = 0;
							Local_56.f_9 = (unk_0x53C562FD2B9E3AB0() - 9000);
						}
					}
				}
			}
		}
	}
}

int func_98(var uParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x676E
{
	unk_0x6FF834D85E2DD4C6(func_144());
	unk_0x6FF834D85E2DD4C6(func_143());
	if (unk_0x9A0B2ED5055D3F0B(func_143()))
	{
		if (unk_0x9A0B2ED5055D3F0B(func_144()))
		{
			*uParam0 = unk_0xEA60F3B426BB095B(func_143(), vParam2, fParam3, true, true, false);
			if (unk_0x6ADD12BF4D6D2587(*uParam0))
			{
				if (unk_0xB8DE76287EDC4957(*uParam0, 0))
				{
					unk_0xACE486395AA1867D(*uParam0, 1084227584);
					unk_0x945E4BE72EBAC033(*uParam0, 1);
					unk_0x67E8508973E4CC81(*uParam0, 1);
					unk_0x4C44781F822B0B00(*uParam0, false, 0);
					unk_0xFBA991D3A851E195(*uParam0, true);
					*uParam1 = unk_0x00D1A9572426E8DD(*uParam0, 25, func_144(), -1, 1, true);
					if (unk_0x6ADD12BF4D6D2587(*uParam1))
					{
						if (!unk_0x3AB6A1A9084FB0A4(*uParam1))
						{
							unk_0xFB2E9855F95E3BD3(*uParam0, 5f);
							if (!unk_0x9761C10D57B68069(*uParam1))
							{
								unk_0xDD29FF4BAB8AFF9C(*uParam1, true, 0);
							}
							if (!unk_0x9761C10D57B68069(*uParam0))
							{
								unk_0xDD29FF4BAB8AFF9C(*uParam0, true, 0);
							}
							unk_0x771A86309E0CA47B(*uParam1, true);
							unk_0xAE01EF4BC84AFE7C(*uParam1, 251, true);
							unk_0xAE6EBBBBD8B9FB30(*uParam1, 5, false);
							unk_0xAE6EBBBBD8B9FB30(*uParam1, 17, true);
							unk_0xE17958D3FD0F9EE9(*uParam1, 512, false);
							unk_0x350CEE66BDF90273(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							unk_0x14776E43F90DD454(func_143());
							unk_0x14776E43F90DD454(func_144());
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_99(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4)//Position - 0x689B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	vector3 vVar14;
	
	fVar3 = 0f;
	bVar5 = true;
	if (iParam3 == 0)
	{
		bVar5 = false;
	}
	bVar6 = false;
	iVar7 = 0;
	fVar8 = 100f;
	fVar9 = 2,5f;
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		vVar14 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		iVar13 = func_104(vVar14);
		if (iVar13 != 6)
		{
			if (func_103(vVar14, iVar13, uParam0, uParam1))
			{
				return 1;
			}
		}
		else if (unk_0x5C41B0B656C02102(vVar14, *uParam2, &vVar0, &fVar3, &uVar4, iParam3, fVar8, fVar9))
		{
			while (!bVar6 && iVar7 < 5)
			{
				if (unk_0x07D358D46AA46CB3(&vVar0, &vVar1, &vVar2, 0f, 180f, fParam4, bVar5, 1, 0))
				{
					fVar3 = func_102(0f, 0f, 0f, vVar2, 1);
					if (func_100(vVar14, vVar1, 1133903872, 1101004800))
					{
						bVar6 = true;
						vVar10 = { unk_0x9EA50C5EC175E58E(vVar1, fVar3, 0f, 1f, 0f) };
						vVar11 = { vVar10 - vVar1 };
						vVar12 = { vVar0 - vVar1 };
						if (unk_0xAF3D7D969F2C195C(vVar11.x, vVar11.y, vVar12.x, vVar12.y) > 60f)
						{
							fVar3 = (fVar3 + 180f);
							fVar3 = func_68(fVar3, 0f, 360f);
						}
						*uParam0 = { vVar1 };
						*uParam1 = fVar3;
						return 1;
					}
					else
					{
						iVar7++;
					}
				}
				else
				{
					iVar7++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0;
}

int func_100(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0x6A0F
{
	float fVar0;
	
	fVar0 = system::vdist2(vParam0, vParam1);
	if (fVar0 >= (fParam2 * fParam2))
	{
		return 0;
	}
	if (fVar0 <= (fParam3 * fParam3))
	{
		return 0;
	}
	if (unk_0x9E06F0EE20F58CED(vParam1, 2,5f))
	{
		return 0;
	}
	if (unk_0x66614717522DA4A5(vParam1, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_101(vParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_101(vector3 vParam0, bool bParam1)//Position - 0x6A7B
{
	if (func_37(vParam0, -1144,497f, 43,01712f, 51,94447f, 325f))
	{
		if (func_89(vParam0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1319,769f, 29,52616f, 49,56616f, -1336,527f, 121,0351f, 75,61888f, 18f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1360,02f, 110,1307f, 52,63413f, -1365,276f, 172,0624f, 72,01312f, 52f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1363,007f, 170,533f, 50,00813f, -1296,903f, 178,8133f, 73,37104f, 35f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1197,521f, 199,8643f, 57,04471f, -1298,04f, 176,1384f, 73,33252f, 34f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1103,745f, 221,1367f, 55,34814f, -1208,394f, 191,0909f, 79,13708f, 45f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -989,0328f, -89,39376f, 32,48801f, -1086,211f, -115,7076f, 50,65051f, 70f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -958,5481f, -111,5455f, 30,76432f, -1132,685f, 190,7841f, 73,90366f, 70f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1077,028f, -139,7337f, 38,73388f, -1299,556f, -15,16894f, 63,4371f, 20f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1319,769f, 29,52616f, 47,56616f, -1287,619f, -24,88864f, 67,5273f, 20f, 0, true))
		{
			return 1;
		}
	}
	if (func_90(2, vParam0))
	{
		if (func_89(vParam0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(3, vParam0))
	{
		if (func_89(vParam0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(4, vParam0))
	{
		if (func_89(vParam0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(5, vParam0))
	{
		if (func_89(vParam0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_90(6, vParam0))
	{
		if (func_89(vParam0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_80())
	{
		if (func_90(7, vParam0))
		{
			if (func_89(vParam0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_90(8, vParam0))
	{
		if (func_89(vParam0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, 2591,626f, -268,894f, 111,8859f, 2591,331f, -614,4355f, 55,36921f, 70f, 0, true))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1112,586f, -2674,767f, 12,56804f, -1215,468f, -2854,589f, 19,44588f, 41,25f, 0, true))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, -804,05f, 4216,412f, 204,4872f, -509,0679f, 4135,19f, 123,2502f, 250f, 0, true))
	{
		return 1;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, -148,8777f, 4862,204f, 305,6442f, 454,6274f, 5573,104f, 804,097f, 250f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vParam0, -482,8931f, 4990,255f, 155,1601f, 7,830751f, 5009,371f, 430,7604f, 250f, 0, true))
	{
		return 1;
	}
	if (((unk_0x8AE9E5E8F6DC40C9(vParam0, 441,3999f, 5579,99f, 802,5138f, 965,7776f, 5675,921f, 601,2646f, 250f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vParam0, 954,1139f, 5641,051f, 646,5054f, 2140,375f, 5377,753f, 149,1221f, 250f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vParam0, 2117,348f, 5377,259f, 173,3297f, 2439,934f, 5297,445f, 62,68662f, 100f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vParam0, 2393,347f, 5321,58f, 107,0624f, 2523,946f, 5124,746f, 41,68384f, 70f, 0, true))
	{
		return 1;
	}
	if (func_37(vParam0, -99,68751f, -2448,891f, 5,01731f, 230f))
	{
		if ((((unk_0x8AE9E5E8F6DC40C9(vParam0, 85,05448f, -2511,884f, -2,996267f, -57,59977f, -2412,716f, 15,00095f, 75f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vParam0, 7,516524f, -2546,741f, 1,331557f, -177,3268f, -2417,047f, 19,16044f, 80f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vParam0, -260,0354f, -2419,978f, 1,399635f, -27,26375f, -2423,848f, 25,00064f, 80f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vParam0, -187,4256f, -2516,086f, -6,849975f, -186,7518f, -2438,149f, 25,0016f, 40f, 0, true)) || unk_0x8AE9E5E8F6DC40C9(vParam0, -73,60813f, -2538,564f, -6,989857f, -183,2556f, -2465,145f, 25,0203f, 70f, 0, true))
		{
			return 1;
		}
	}
	if (!bParam1)
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1171,709f, -1524,66f, 23,37969f, -1139,721f, -1573,589f, -1,585432f, 55f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, 476,5394f, -1301,548f, 44,82458f, 499,5822f, -1339,025f, 26,31703f, 35f, 0, true) || unk_0x8AE9E5E8F6DC40C9(vParam0, 496,9816f, -1412,255f, 43,29391f, 497,269f, -1339,364f, 26,31648f, 40f, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

float func_102(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x70F5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF5596B3A7E5F3C68(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_103(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x715A
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 == 0)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { -883,8992f, 76,3237f, 50,9372f };
				fVar1 = 271,8234f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -838,2045f, 88,1067f, 51,3396f };
				fVar1 = 102,3721f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -884,0715f, 217,2857f, 71,7633f };
				fVar1 = 254,5437f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { -834,0018f, 217,2782f, 73,154f };
				fVar1 = 80,7037f;
			}
			else if (iVar2 == 4)
			{
				vVar0 = { -830,9222f, 135,3548f, 58,1352f };
				fVar1 = 92,957f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 1)
	{
		iVar2 = 0;
		iVar3 = 6;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { -1587,096f, -928,5875f, 14,3046f };
				fVar1 = 139,9023f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -1532,458f, -863,667f, 21,6188f };
				fVar1 = 139,9028f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -1472,888f, -733,0396f, 24,0746f };
				fVar1 = 236,3756f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { -1397,303f, -781,1235f, 19,3347f };
				fVar1 = 48,1876f;
			}
			else if (iVar2 == 4)
			{
				vVar0 = { -1605,409f, -1012,578f, 12,0175f };
				fVar1 = 51,1191f;
			}
			else if (iVar2 == 5)
			{
				vVar0 = { -1572,457f, -1007,106f, 12,0184f };
				fVar1 = 141,2024f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { -1126,552f, -1530,591f, 3,294f };
				fVar1 = 214,5477f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -1043,019f, -1644,172f, 3,4894f };
				fVar1 = 35,3163f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -1039,345f, -1532,581f, 4,1467f };
				fVar1 = 32,1734f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { -1067,577f, -1501,944f, 4,0327f };
				fVar1 = 216,1659f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 3)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { -1247,291f, 2549,53f, 16,4214f };
				fVar1 = 137,1185f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -1314,11f, 2470,677f, 23,3185f };
				fVar1 = 309,2187f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -1095,382f, 2686,487f, 18,5919f };
				fVar1 = 130,0954f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { -1373,514f, 2429,944f, 26,7492f };
				fVar1 = 298,9626f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 4)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { 1299,198f, 1164,342f, 105,3728f };
				fVar1 = 3,1765f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { 1304,831f, 1084,598f, 104,6453f };
				fVar1 = 8,2195f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { 1290,873f, 1237,684f, 107,4217f };
				fVar1 = 186,5802f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { 1310,975f, 1001,138f, 104,9354f };
				fVar1 = 359,3654f;
			}
			else if (iVar2 == 4)
			{
				vVar0 = { 1284,936f, 1355,748f, 103,4301f };
				fVar1 = 182,4582f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 5)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				vVar0 = { -1208,617f, -1410,733f, 3,1853f };
				fVar1 = 215,8772f;
			}
			else if (iVar2 == 1)
			{
				vVar0 = { -1172,9f, -1412,38f, 3,6078f };
				fVar1 = 126,9322f;
			}
			else if (iVar2 == 2)
			{
				vVar0 = { -1112,842f, -1437,895f, 4,031f };
				fVar1 = 211,4814f;
			}
			else if (iVar2 == 3)
			{
				vVar0 = { -1079,885f, -1472,878f, 4,0784f };
				fVar1 = 32,9476f;
			}
			else if (iVar2 == 4)
			{
				vVar0 = { -1086,768f, -1540,707f, 3,5549f };
				fVar1 = 128,3527f;
			}
			if (func_100(vParam0, vVar0, 1133903872, 1101004800))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	return 0;
}

int func_104(vector3 vParam0)//Position - 0x770D
{
	if (func_93(vParam0, -874,9833f, 125,7645f, -100f, -768,6254f, 193,0297f, 100f))
	{
		return 0;
	}
	if (func_88(vParam0, -1693,302f, -1109,13f, 17,89778f, 240f))
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1538,981f, -941,1323f, 10,56623f, -1715,57f, -1139,766f, 52,20361f, 110f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1739,989f, -1115,973f, 10,08726f, -1800,515f, -1187,18f, 52,0172f, 25f, 0, true))
		{
			return 1;
		}
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1801,766f, -1180,252f, 4,017236f, -1857,718f, -1244,628f, 38,49653f, 85f, 0, true))
		{
			return 1;
		}
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1140,89f, -1573,135f, -6,566939f, -1067,084f, -1675,976f, 23,53153f, 52f, 0, true))
	{
		return 2;
	}
	if (func_90(3, vParam0))
	{
		if (func_89(vParam0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, 1324,172f, 1110,748f, 99,65493f, 1523,097f, 1110,473f, 132,8859f, 170f, 0, true))
	{
		return 4;
	}
	if (unk_0x8AE9E5E8F6DC40C9(vParam0, -1171,709f, -1524,66f, 23,37969f, -1139,721f, -1573,589f, -1,585432f, 55f, 0, true))
	{
		return 5;
	}
	return 6;
}

int func_105()//Position - 0x78B8
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (!func_37(vLocal_243, Local_56.f_20, 100f))
	{
		return 1;
	}
	if (func_86(unk_0xFC1458A37D98B502()) != Local_56.f_30)
	{
		return 1;
	}
	if (iLocal_55 == 4)
	{
		return 1;
	}
	if (iLocal_53 == 2 || iLocal_53 == 3)
	{
		if (!func_36(Local_56.f_1))
		{
			return 1;
		}
		if (!func_38(Local_56))
		{
			return 1;
		}
		if (!unk_0xAAA8D20859E2D36D(Local_56.f_1, Local_56))
		{
			return 1;
		}
		if (unk_0xA6FA9E5D08F067AD(Local_56.f_1))
		{
			return 1;
		}
		if (unk_0x7ED4D0E480A6EC43(Local_56.f_1, 0))
		{
			return 1;
		}
		if (unk_0xEBE499597C718EB8(Local_56, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (unk_0xEBE499597C718EB8(Local_56.f_1, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		vVar0 = { unk_0xB3328BA8976B416C(Local_56, 0) };
		if (unk_0x5679106BC7ED79EE(vVar0, 7f, 0))
		{
			return 1;
		}
		fVar1 = 15f;
		vVar2 = { vVar0 };
		vVar3 = { vVar2 };
		vVar2.x = (vVar2.x - fVar1);
		vVar2.y = (vVar2.y - fVar1);
		vVar2.z = (vVar2.z - fVar1);
		vVar3.x = (vVar3.x + fVar1);
		vVar3.y = (vVar3.y + fVar1);
		vVar3.z = (vVar3.z + fVar1);
		if (unk_0xF1DE6FAA2EFAA34F(vVar2, vVar3, 1))
		{
			return 1;
		}
		if (func_37(vLocal_243, vVar0, 20f))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), Local_56) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), Local_56))
			{
				return 1;
			}
			if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_106()//Position - 0x7A46
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	vector3 vVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	var uVar13[12];
	
	if (iLocal_54 == 0)
	{
		if (func_40(iLocal_66, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_55 != 0 && iLocal_55 != 1)
			{
				iLocal_60 = 0;
			}
			if (iLocal_60)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar13);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (unk_0x6ADD12BF4D6D2587(uVar13[iVar4]))
						{
							if (unk_0x82FF3DFBC3965CC0(uVar13[iVar4]) == iLocal_70)
							{
								vVar9 = { unk_0xB3328BA8976B416C(uVar13[iVar4], 0) };
								fVar10 = system::vdist2(vLocal_243, vVar9);
								if (fVar10 <= (fVar8 * fVar8))
								{
									if (func_21(&(uVar13[iVar4]), iLocal_70, iLocal_69))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (iLocal_60)
										{
											if (uVar13[iVar4] != Global_103586)
											{
												if (unk_0x1ACD6691B9C9AA46(uVar13[iVar4]) == unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()))
												{
													fVar6 = 1f;
													fVar10 = (fVar10 / fVar10);
													fVar10 = (fVar10 - 35f);
													fVar10 = (fVar10 * -1f);
													fVar10 = (fVar10 / 35f);
													fVar10 = (fVar10 * 0,5f);
													fVar10 = (fVar10 + 0,5f);
													fVar6 = (fVar6 * fVar10);
													fVar10 = (vLocal_243.z - vVar9.z);
													if (fVar10 < 0f)
													{
														fVar10 = (fVar10 * -1f);
													}
													if (fVar10 < 4f)
													{
														vVar11 = { unk_0xCE3B2111021F7234(unk_0xFC1458A37D98B502()) };
														vVar12 = { vVar9 - vLocal_243 };
														if (((vVar11.x * vVar12.x) + (vVar11.y * vVar12.y)) / system::vdist(vVar12, 0f, 0f, 0f)) > system::cos(120f)
														{
															if (unk_0x9E06F0EE20F58CED(vVar9, 2f))
															{
																fVar6 = (fVar6 * 0,5f);
															}
															if (func_62(&(uVar13[iVar4])))
															{
																fVar6 = (fVar6 * 0,2f);
															}
															if (!unk_0x3B9B1F02BCD69306(uVar13[iVar4], 90f) || unk_0x0BA31FF7931F3DD3(uVar13[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_107(&iLocal_244, 0);
				iLocal_244 = 0;
			}
			else if (iLocal_244 != uVar13[iVar2])
			{
				func_107(&iLocal_244, 0);
				iLocal_244 = uVar13[iVar2];
				func_107(&iLocal_244, 1);
			}
			if (iLocal_60)
			{
				if (iVar1 == -1)
				{
					iLocal_245 = 0;
				}
				else
				{
					iLocal_245 = uVar13[iVar1];
				}
				iLocal_60 = 0;
			}
			else
			{
				iLocal_60 = 1;
			}
			iLocal_66 = unk_0x53C562FD2B9E3AB0();
			return 1;
		}
	}
	return 0;
}

void func_107(int iParam0, bool bParam1)//Position - 0x7CE2
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0xB8DE76287EDC4957(*iParam0, 0))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(*iParam0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (unk_0x90CE698681C6225E(iVar0, func_144()))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar0))
					{
						unk_0xAE01EF4BC84AFE7C(iVar0, 251, bParam1);
					}
				}
			}
		}
	}
}

void func_108()//Position - 0x7D34
{
	if (iLocal_55 == 2 || iLocal_55 == 3)
	{
		if (unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "HAIL_TAXI", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			func_58();
		}
	}
}

int func_109()//Position - 0x7D78
{
	if (!func_3())
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	return 1;
}

void func_110()//Position - 0x7DAD
{
	if (iLocal_52 == 0)
	{
		if (func_140(131))
		{
			if (func_139(func_82()))
			{
				func_138();
				func_137(&uLocal_71, 0, unk_0xFC1458A37D98B502(), sLocal_236, 0, 1);
				func_137(&uLocal_71, 1, 0, "TaxiDispatch", 0, 1);
				if (func_131())
				{
					if (func_130(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2", "TX_2", sLocal_238, sLocal_238, 2, 1, 0, 0, 0))
					{
						iLocal_61 = 0;
						iLocal_52 = 2;
					}
				}
				else if (func_116(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (iLocal_52 == 1)
	{
		if (func_115())
		{
			iLocal_52 = 0;
		}
	}
	else if (iLocal_52 == 2)
	{
		if (func_115())
		{
			if (func_114())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			else if (func_113())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_52 != 0)
			{
				if (!func_112(19))
				{
					func_111(19);
				}
				func_13();
				Local_56.f_9 = unk_0x53C562FD2B9E3AB0();
				Local_56.f_20 = { vLocal_243 };
				Local_56.f_30 = func_86(unk_0xFC1458A37D98B502());
				Local_56.f_8 = 0;
				Local_56.f_10 = 0;
				iLocal_53 = 1;
				iLocal_52 = 0;
			}
		}
		else if (!iLocal_61)
		{
			if (unk_0xA2F80D03C2F3570D() == 1)
			{
				iLocal_61 = 1;
			}
		}
	}
}

void func_111(int iParam0)//Position - 0x7EF1
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

int func_112(int iParam0)//Position - 0x7F33
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

int func_113()//Position - 0x7F76
{
	if (Global_14438)
	{
		return 1;
	}
	return 0;
}

int func_114()//Position - 0x7F8C
{
	if (Global_15805 == 1 || Global_16772 == 1)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x7FAF
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_116(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7FC6
{
	var uVar0;
	var uVar1;
	
	func_129(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_128();
	if (iParam8 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_126(2, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_117(&uVar0, &uVar1, iParam7, bParam11);
}

int func_117(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x8027
{
	int iVar0;
	
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam2 > Global_15758)
			{
				if (bParam3 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
				}
				else
				{
					func_125();
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
		if (func_124(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_123();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16752 = Global_16753;
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15375.f_370 = Global_16745;
		Global_15752 = Global_15753;
		Global_15754 = Global_15755;
		if (Global_16014 == 0)
		{
			Global_15910[0 /*6*/] = { Global_15936[0 /*6*/] };
			Global_15910[1 /*6*/] = { Global_15936[1 /*6*/] };
			Global_15962[0 /*6*/] = { Global_15988[0 /*6*/] };
			Global_15962[1 /*6*/] = { Global_15988[1 /*6*/] };
			Global_15923[0 /*6*/] = { Global_15949[0 /*6*/] };
			Global_15923[1 /*6*/] = { Global_15949[1 /*6*/] };
			Global_15975[0 /*6*/] = { Global_16001[0 /*6*/] };
			Global_15975[1 /*6*/] = { Global_16001[1 /*6*/] };
		}
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam3)
			{
				func_122();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_121())
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
					if (Global_16014 == 0)
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
			}
			if (func_120())
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
			}
			func_119();
			Global_15766 = bParam3;
		}
		Global_15758 = iParam2;
		if (Global_15752 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15752)
			{
				StringCopy(&(Global_15375.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15375.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14622 = 0;
		func_118();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15758 || iParam2 == Global_15758)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_125();
	}
	return 0;
}

void func_118()//Position - 0x8391
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

void func_119()//Position - 0x83C3
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

int func_120()//Position - 0x8458
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x847F
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

void func_122()//Position - 0x8518
{
	if (func_84(14))
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
		Global_14453 = func_82();
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

void func_123()//Position - 0x85BA
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

bool func_124(int iParam0, int iParam1)//Position - 0x8612
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

void func_125()//Position - 0x864D
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

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x86A4
{
	func_127(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_127(var uParam0)//Position - 0x8714
{
	Global_15753 = uParam0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
}

void func_128()//Position - 0x873A
{
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_15770 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
}

void func_129(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8773
{
	Global_15210 = { *uParam0 };
	Global_1639 = uParam1;
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

bool func_130(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)//Position - 0x87C9
{
	var uVar0;
	var uVar1;
	
	func_129(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_128();
	if (iParam10 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_126(3, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_117(&uVar0, &uVar1, iParam9, bParam13);
}

int func_131()//Position - 0x882A
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if (iLocal_53 != 0)
	{
		return 0;
	}
	if (iLocal_55 == 4 || iLocal_55 == 2)
	{
		return 0;
	}
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (unk_0x8F05914DD835E69F(iLocal_239))
	{
		return 0;
	}
	if (!func_109())
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x0ACC2116170FA204(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
		{
			return 0;
		}
	}
	func_132();
	fVar1 = 50f;
	iVar2 = 1;
	if (!func_72(vLocal_243))
	{
		iVar2 = 9;
	}
	if (!unk_0xC036F7DE6A42457A(vLocal_243, &vVar0, iVar2, 100f, 2,5f))
	{
		return 0;
	}
	if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vVar0, fVar1, fVar1, 20f, false, true, 0))
	{
		return 0;
	}
	if (func_101(vLocal_243, 1))
	{
		return 0;
	}
	return 1;
}

int func_132()//Position - 0x8906
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		iVar0 = func_82();
		if (func_85(iVar0))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_136)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7658[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_135(vVar1, func_136(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_764)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_651[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_135(vVar1, func_134(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_104555.f_7658.f_866)
			{
				if (unk_0xC80D31E4B587871C(Global_104555.f_7658.f_765[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_135(vVar1, func_133(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x8A0F
{
	return Global_104555.f_7658.f_765[iParam0 /*10*/].f_7;
}

int func_134(int iParam0)//Position - 0x8A27
{
	return Global_104555.f_7658.f_651[iParam0 /*14*/].f_7;
}

int func_135(vector3 vParam0, int iParam1)//Position - 0x8A3F
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_35862)
		{
			return 0;
		}
		if (system::vdist2(vParam0, Global_35862[iParam1 /*5*/]) <= (Global_35862[iParam1 /*5*/].f_3 * Global_35862[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_35862[iParam1 /*5*/].f_4 != -1)
		{
			return func_135(vParam0, Global_35862[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x8AAA
{
	return Global_104555.f_7658[iParam0 /*15*/].f_7;
}

void func_137(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8ABF
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

void func_138()//Position - 0x8B5A
{
	int iVar0;
	
	iVar0 = func_82();
	if (iVar0 == 0)
	{
		sLocal_236 = "MICHAEL";
		sLocal_237 = "TX_1M";
		sLocal_238 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_236 = "FRANKLIN";
		sLocal_237 = "TX_1F";
		sLocal_238 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_236 = "TREVOR";
		sLocal_237 = "TX_1T";
		sLocal_238 = "TX_3T";
	}
}

int func_139(int iParam0)//Position - 0x8BBF
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (Global_104555.f_28020[131 /*29*/].f_12[iParam0] == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == 151)
	{
		if ((Global_104555.f_28020[131 /*29*/].f_12[0] == 1 || Global_104555.f_28020[131 /*29*/].f_12[1] == 1) || Global_104555.f_28020[131 /*29*/].f_12[2] == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x8C4F
{
	if ((Global_16870 || Global_16869) || Global_16871)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14453.f_1 == 10)
		{
			if (Global_1638 == iParam0)
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
	return 0;
}

int func_141()//Position - 0x8CB3
{
	if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (Global_89898 == 1)
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (Global_103606)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (unk_0xC79066AA74B1B323())
	{
		return 0;
	}
	return 1;
}

void func_142()//Position - 0x8D02
{
	func_6();
	func_4(1);
	unk_0xFCCDDE0E48CF9588(&cLocal_240);
	unk_0x2E4932E63763FE26(joaat("taxi"), false);
	unk_0x14776E43F90DD454(iLocal_70);
	unk_0x14776E43F90DD454(iLocal_69);
	if (iLocal_58)
	{
		if (unk_0x38DF88792E2574E5())
		{
			unk_0x2C5E25A27FEE0F8A(0);
		}
	}
}

int func_143()//Position - 0x8D41
{
	return joaat("taxi");
}

int func_144()//Position - 0x8D4E
{
	return joaat("a_m_y_stlat_01");
}

