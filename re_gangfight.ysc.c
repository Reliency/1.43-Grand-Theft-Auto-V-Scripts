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
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
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
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_140();
	}
	if (func_98(vLocal_48, -1, 0, 0, 0))
	{
		func_95(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		func_94();
		if (unk_0x42F1FE4C7EC5F51E())
		{
			if (iLocal_55 > unk_0x53C562FD2B9E3AB0())
			{
				unk_0x391612227A0274F1();
			}
			if (!func_93())
			{
				if (!func_93())
				{
					if (func_92())
					{
						func_140();
					}
				}
				unk_0x48D75120C879E65E("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
						{
							if ((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
							{
								if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 969,2191f, 3608,665f, 41,8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = func_74(iLocal_58, 0, 145);
									unk_0xF27F72CA15E148EE(iLocal_56, 9);
									iLocal_57[0] = func_74(iLocal_59[0], 1, 145);
									iLocal_57[1] = func_74(iLocal_59[1], 1, 145);
									unk_0x9C27373CC69ECF87(iLocal_56, false);
									unk_0x9C27373CC69ECF87(iLocal_57[0], false);
									unk_0x9C27373CC69ECF87(iLocal_57[1], false);
									func_64(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]))
								{
									unk_0xD68E88A8E0BE8697(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
							{
								unk_0xD68E88A8E0BE8697(iLocal_58, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				unk_0x94BD6F0436473406(0f);
				unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
				{
					if (unk_0xEBE499597C718EB8(iLocal_58, unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xD68E88A8E0BE8697(iLocal_58, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
						func_63();
					}
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_45)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !unk_0x3AB6A1A9084FB0A4(iLocal_58))
								{
									if (unk_0xCA3C40448996C9BA(unk_0xFC1458A37D98B502(), iLocal_58, 90f))
									{
										if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_58) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_58))
										{
											func_58();
										}
									}
								}
								func_53();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_63();
					}
				}
				else
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_56))
					{
						unk_0xE30CF11C0EE14316(&iLocal_56);
					}
					if (((!unk_0x3AB6A1A9084FB0A4(iLocal_59[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[1])) && !unk_0x191BE1BC8F26F3C1(iLocal_61[0], 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_61[1], 0))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar2]))
						{
							unk_0xD7F5B2902EBBD04E(iLocal_59[iVar2], unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar2], true);
							if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_59[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (unk_0xA6DECE14FC9A8C51(iLocal_57[iVar2]))
						{
							unk_0xE30CF11C0EE14316(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_63();
					}
				}
			}
		}
		else
		{
			func_140();
		}
	}
}

void func_1()//Position - 0x431
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_56))
		{
			unk_0xE30CF11C0EE14316(&iLocal_56);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
		{
			unk_0x35829E9BFCED1A3F(iLocal_58, false);
			unk_0x771A86309E0CA47B(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_57[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_57[iVar0]));
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
					{
						unk_0xD2C269DBF147B406(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xFC1458A37D98B502(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0xD68E88A8E0BE8697(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xD68E88A8E0BE8697(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
				}
				unk_0x771A86309E0CA47B(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
			{
				unk_0x5380482A432E314E(&(iLocal_61[iVar0]));
				if (unk_0x771D0F8F56A5FE6C("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xE02E32C69260FBB7("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x94BD6F0436473406(1f);
		unk_0x8A4311269B560FDF(417,901f, 3578,002f, 31,176f, 1305,897f, 3604,306f, 40,1064f, 100,0625f, 1);
		unk_0x3CDDC4760DBA4651();
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (unk_0xBE3C4023003180FC(func_2(unk_0x9EB17624F44A8DA4()), vLocal_48, true) > 50f)
	{
		func_140();
	}
}

Vector3 func_2(int iParam0)//Position - 0x600
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_3(var uParam0, int iParam1)//Position - 0x613
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x630
{
	Global_14622 = 0;
	func_5();
}

void func_5()//Position - 0x640
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_6(char* sParam0)//Position - 0x661
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()//Position - 0x689
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_8()//Position - 0x6AD
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (system::timerb() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
					{
						if (!unk_0xA6DECE14FC9A8C51(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = func_74(iLocal_59[iVar0], 1, 145);
							if (unk_0x88DDBE9908752BF0(iLocal_59[iVar0], 0))
							{
								if (!bLocal_51)
								{
									unk_0x3D625AB3CFE71DF3(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0x6931076730A4AC5D(&iLocal_62);
									unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
									unk_0x1B16DD5C115FE009(iLocal_62);
									unk_0xAB30B1CF01A198C1(iLocal_59[iVar0], iLocal_62);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
									unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar1]))
				{
					if (unk_0x0C88267282FD588F(iLocal_59[iVar1], 904,3153f, 3631,684f, 31,574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar1], 0))
						{
							unk_0xF0037A481D043FE1(iLocal_61[iVar1], 0);
						}
						if (unk_0x88DDBE9908752BF0(iLocal_59[iVar1], 0))
						{
							unk_0x6931076730A4AC5D(&iLocal_62);
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(iLocal_62);
							unk_0xAB30B1CF01A198C1(iLocal_59[iVar1], iLocal_62);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
							unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar1], true);
						}
					}
					if (!unk_0x88DDBE9908752BF0(iLocal_59[iVar1], 0))
					{
						unk_0xD7F5B2902EBBD04E(iLocal_59[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar1], true);
					}
					if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar1], 0))
					{
						if (unk_0xA2E853C4E12289ED(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar1]))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_57[iVar1]))
					{
						unk_0xE30CF11C0EE14316(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0x3AB6A1A9084FB0A4(iLocal_59[2]) && unk_0x3AB6A1A9084FB0A4(iLocal_59[3])) && unk_0x3AB6A1A9084FB0A4(iLocal_59[4])) && unk_0x3AB6A1A9084FB0A4(iLocal_59[5]))
			{
				unk_0xE02E32C69260FBB7("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_58);
				unk_0x6931076730A4AC5D(&iLocal_62);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2056, 2);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), -1);
				unk_0x1B16DD5C115FE009(iLocal_62);
				unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_62);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
			{
				unk_0x2B0DDE3D071497AD(iLocal_60);
				if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 5f, 5f, 5f, 0, 1, 0))
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0xCA3C40448996C9BA(iLocal_58, unk_0xFC1458A37D98B502(), 60f))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (!unk_0x21B6FFFD04C9FF3A(iLocal_58, unk_0xFC1458A37D98B502(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
			{
				unk_0x6931076730A4AC5D(&iLocal_62);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 1500);
				unk_0x6F8C8278B7C06889(0, iLocal_60, -1, -1, 2f, 8, 0);
				unk_0xB6A7F1EF9625AE96(0, 2000);
				unk_0x12C9D41D52A560D6(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x96247F0EC873C446(0, iLocal_60, 10f, 786603);
				unk_0x1B16DD5C115FE009(iLocal_62);
				unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_62);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
				unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
				unk_0xC7ED915AB706A5D8(iLocal_60, 1);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x7A70772AE40E3821(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0,436f && unk_0x88DDBE9908752BF0(iLocal_58, 0))
					{
						unk_0xD01469EFD4E826B3(unk_0x3F90543934DCD7E6(unk_0xDFD115BB10FE46A9(iLocal_58, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()//Position - 0xB8C
{
	while (func_8())
	{
		system::wait(0);
	}
	while (!func_39())
	{
		system::wait(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()//Position - 0xBC0
{
	func_12();
}

int func_12()//Position - 0xBCD
{
	if (func_13(0))
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

bool func_13(bool bParam0)//Position - 0xC18
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_14(int iParam0, int iParam1)//Position - 0xC43
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_36(iParam0))
	{
		func_35(iParam0, iParam1);
		if (!func_34(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_15(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)//Position - 0xD46
{
	Global_104541 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)//Position - 0xD54
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
		func_20((891 + iParam0), 1, -1, 1);
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
		func_17();
	}
}

void func_17()//Position - 0xE3C
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
		func_19(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_18() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()//Position - 0x12FD
{
	return Global_25233;
}

int func_19(int iParam0, int iParam1)//Position - 0x1308
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

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1359
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
		iParam2 = func_21();
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

int func_21()//Position - 0x181D
{
	return Global_1312736;
}

int func_22(int iParam0, int iParam1)//Position - 0x1829
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

int func_23(int iParam0)//Position - 0x1B9D
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

void func_24(int iParam0)//Position - 0x1BCC
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

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1C0E
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1C30
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
		func_27();
	}
}

void func_27()//Position - 0x1E04
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

int func_28()//Position - 0x1F24
{
	func_29();
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

void func_29()//Position - 0x1F6A
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_33(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_32(unk_0xFC1458A37D98B502());
			if (func_31(iVar0) && (!func_30(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_31(Global_104555.f_2353.f_539.f_4301))
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

bool func_30(int iParam0)//Position - 0x2067
{
	return Global_35861 == iParam0;
}

bool func_31(int iParam0)//Position - 0x2075
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x2081
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x20BE
{
	if (func_31(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x20E8
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

void func_35(int iParam0, int iParam1)//Position - 0x212B
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_36(int iParam0)//Position - 0x2146
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

int func_37()//Position - 0x21F7
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_38(Var0);
	return uVar1;
}

int func_38(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2214
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

int func_39()//Position - 0x23EE
{
	return 1;
}

void func_40(int iParam0)//Position - 0x23F7
{
	int iVar0;
	
	iVar0 = (unk_0x53C562FD2B9E3AB0() + iParam0);
	while (unk_0x53C562FD2B9E3AB0() <= iVar0)
	{
		system::wait(0);
		if (iLocal_55 > unk_0x53C562FD2B9E3AB0())
		{
			unk_0x391612227A0274F1();
		}
	}
}

bool func_41(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2426
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)//Position - 0x2474
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_49();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_43();
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
		func_51();
	}
	return 0;
}

void func_43()//Position - 0x2740
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

void func_44()//Position - 0x2772
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

int func_45()//Position - 0x2807
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x282E
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

void func_47()//Position - 0x28C7
{
	if (func_30(14))
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
		Global_14453 = func_48();
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

int func_48()//Position - 0x2969
{
	func_29();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_49()//Position - 0x2982
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

bool func_50(int iParam0, int iParam1)//Position - 0x29DA
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

void func_51()//Position - 0x2A15
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2A6C
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

void func_53()//Position - 0x2AC2
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x60C06BFD037BB7CF(iLocal_58, unk_0xFC1458A37D98B502(), -1, 2060, 2);
					func_41(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
			{
				unk_0x6931076730A4AC5D(&iLocal_62);
				unk_0x380C1E7B7740D618(0, 916,5764f, 3602,146f, 31,9262f, 1f, 40000, 0,25f, 0, 1193033728);
				unk_0x1B16DD5C115FE009(iLocal_62);
				unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_62);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_48() == 2)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0x0C88267282FD588F(iLocal_58, 916,5764f, 3602,146f, 31,9262f, 3,3f, 3,3f, 3,3f, false, true, 0))
				{
					if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0xAC838A977FB6E6BC(iLocal_58, unk_0xFC1458A37D98B502(), -1);
								if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
								{
									unk_0x2B0DDE3D071497AD(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
						{
							unk_0x2B0DDE3D071497AD(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[2])) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
							{
								unk_0x6931076730A4AC5D(&iLocal_62);
								unk_0x1C0FEF3EF4965A09(0, iLocal_60, -1, -1, 1f);
								unk_0x60C06BFD037BB7CF(0, iLocal_59[2], 2000, 0, 2);
								unk_0xAC838A977FB6E6BC(0, iLocal_59[2], 0);
								unk_0x1B16DD5C115FE009(iLocal_62);
								unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_62);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
								func_40(2000);
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0)) && unk_0x88DDBE9908752BF0(iLocal_58, 0))
								{
									iLocal_46++;
								}
								else
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[2]))
									{
										unk_0x6931076730A4AC5D(&iLocal_62);
										unk_0xF21E6EBE8EFDCC28(0, -1);
										unk_0x1B16DD5C115FE009(iLocal_62);
										unk_0xAB30B1CF01A198C1(iLocal_58, iLocal_62);
										unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
									}
									bLocal_51 = false;
									system::settimerb(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_60, 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_60, unk_0xFC1458A37D98B502(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x191BE1BC8F26F3C1(iLocal_60, 0)) && !unk_0xA8D0477084E86A92(iLocal_58, iLocal_60, 0)) && !unk_0xACB5C13823C09021(iLocal_58, 0)) && !unk_0x77F4730139ECE86B(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
				{
					if (((((unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), (916,3351f - 100f), (3602,048f - 100f), (31,9209f - 100f), (916,3351f + 100f), (3602,048f + 100f), (31,9209f + 100f), 0, 1) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_59[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0xEBE499597C718EB8(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 1)) || unk_0xEBE499597C718EB8(iLocal_61[iVar0], unk_0xFC1458A37D98B502(), 1)) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_59[iVar0])) || unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						system::settimerb(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0x3AB6A1A9084FB0A4(iLocal_59[2]) && unk_0x3AB6A1A9084FB0A4(iLocal_59[3])) && unk_0x3AB6A1A9084FB0A4(iLocal_59[4])) && unk_0x3AB6A1A9084FB0A4(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (unk_0x0C88267282FD588F(iLocal_59[2], 970,3641f, 3629,886f, 31,3694f, 5f, 5f, 5f, false, true, 0) || system::timerb() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]))
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
						{
							if (unk_0xA8D0477084E86A92(iLocal_59[iVar0], iLocal_61[iVar0], 0))
							{
								unk_0xD2C269DBF147B406(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xFC1458A37D98B502(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
					{
						func_54();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				system::settimerb(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_54()//Position - 0x30F7
{
	Global_14622 = 0;
	func_55();
}

void func_55()//Position - 0x3107
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

int func_56()//Position - 0x312B
{
	int iVar0;
	
	if (((((((!unk_0x6ADD12BF4D6D2587(iLocal_61[2]) && !unk_0x6ADD12BF4D6D2587(iLocal_61[3])) && !unk_0x6ADD12BF4D6D2587(iLocal_61[4])) && !unk_0x6ADD12BF4D6D2587(iLocal_61[5])) && !unk_0x6ADD12BF4D6D2587(iLocal_59[2])) && !unk_0x6ADD12BF4D6D2587(iLocal_59[3])) && !unk_0x6ADD12BF4D6D2587(iLocal_59[4])) && !unk_0x6ADD12BF4D6D2587(iLocal_59[5]))
	{
		unk_0x6FF834D85E2DD4C6(joaat("hexer"));
		unk_0x6FF834D85E2DD4C6(joaat("g_m_y_lost_01"));
		unk_0x6FF834D85E2DD4C6(joaat("g_m_y_lost_02"));
		unk_0xE859EF37EA7362D3("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0x9A0B2ED5055D3F0B(joaat("hexer")))
		{
			iLocal_61[2] = unk_0xEA60F3B426BB095B(joaat("hexer"), 863,4697f, 3633,5f, 31,9874f, 290,5797f, true, true, false);
			iLocal_61[3] = unk_0xEA60F3B426BB095B(joaat("hexer"), 866,4073f, 3636,039f, 31,9514f, 270,3649f, true, true, false);
			iLocal_61[4] = unk_0xEA60F3B426BB095B(joaat("hexer"), 866,3153f, 3631,587f, 31,9545f, 276,6327f, true, true, false);
			iLocal_61[5] = unk_0xEA60F3B426BB095B(joaat("hexer"), 868,5937f, 3633,523f, 31,9622f, 267,0991f, true, true, false);
			unk_0x14776E43F90DD454(joaat("hexer"));
			unk_0xEE2CEBA4B170838D(iLocal_61[2], 3);
			unk_0xEE2CEBA4B170838D(iLocal_61[4], 3);
			iLocal_55 = unk_0x53C562FD2B9E3AB0() + 1500;
		}
		if ((unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_lost_01")) && unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_lost_02"))) && unk_0x771D0F8F56A5FE6C("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = unk_0x00D1A9572426E8DD(iLocal_61[2], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[3] = unk_0x00D1A9572426E8DD(iLocal_61[3], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			iLocal_59[4] = unk_0x00D1A9572426E8DD(iLocal_61[4], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[5] = unk_0x00D1A9572426E8DD(iLocal_61[5], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			func_57(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = unk_0x53C562FD2B9E3AB0() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]) && !unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
				{
					unk_0x6CF99BCE94E6F07C(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0xAE01EF4BC84AFE7C(iLocal_59[iVar0], 137, true);
					unk_0x230697B667C63948(iLocal_59[iVar0], 0);
					unk_0x4F9A62E773100FDC(iLocal_59[iVar0], 2);
					unk_0xAE6EBBBBD8B9FB30(iLocal_59[iVar0], 50, true);
					unk_0x2C8C730E9565B998(iLocal_59[iVar0], 2);
					unk_0xC87DF3B5D32E898C(iLocal_59[iVar0], 50f, 20);
					unk_0xD1D0B4122585CC63(iLocal_59[iVar0], 1);
					unk_0xBB3CC641B6AED5E5(iLocal_59[iVar0], 13);
					unk_0x41613433DA018B46(iLocal_59[iVar0], 100f);
					unk_0x253DB96AF5D6551B(iLocal_59[iVar0], 100f);
					unk_0xCE93FCB8A8D8DF0B(iLocal_59[iVar0], iLocal_228);
					unk_0x771A86309E0CA47B(iLocal_59[iVar0], true);
					unk_0xB4AF8E4D052DCD63(iLocal_59[iVar0], 3);
					unk_0x35963CCE03600881(iLocal_59[iVar0], 0);
					unk_0x5C5D33A1B2711D21(iLocal_59[iVar0], true);
					unk_0xE0F761CE722765C1(iLocal_59[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x9E058151726E58DE(iLocal_59[iVar0], joaat("weapon_pistol"), -1, true, true);
					}
					else
					{
						unk_0x9E058151726E58DE(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), -1, true, true);
					}
					unk_0x6931076730A4AC5D(&iLocal_62);
					unk_0x87A3E70B0AB01608(0, iLocal_61[2], 966,7098f, 3633,926f, 31,3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xBA54D3D84EF38E3D(0, vLocal_48, 5000, 0, 2);
					unk_0x1B16DD5C115FE009(iLocal_62);
					unk_0xAB30B1CF01A198C1(iLocal_59[2], iLocal_62);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
					unk_0x6931076730A4AC5D(&iLocal_62);
					unk_0x87A3E70B0AB01608(0, iLocal_61[3], 970,6208f, 3636,743f, 31,3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xBA54D3D84EF38E3D(0, vLocal_48, 5000, 0, 2);
					unk_0x1B16DD5C115FE009(iLocal_62);
					unk_0xAB30B1CF01A198C1(iLocal_59[3], iLocal_62);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
					unk_0xE9B3D12A64CC7C1A(iLocal_59[3], true);
					unk_0x6931076730A4AC5D(&iLocal_62);
					unk_0x87A3E70B0AB01608(0, iLocal_61[4], 971,023f, 3631,225f, 31,3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xBA54D3D84EF38E3D(0, vLocal_48, 5000, 0, 2);
					unk_0x1B16DD5C115FE009(iLocal_62);
					unk_0xAB30B1CF01A198C1(iLocal_59[4], iLocal_62);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
					unk_0x6931076730A4AC5D(&iLocal_62);
					unk_0x87A3E70B0AB01608(0, iLocal_61[5], 974,8073f, 3633,771f, 31,3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xBA54D3D84EF38E3D(0, vLocal_48, 5000, 0, 2);
					unk_0x1B16DD5C115FE009(iLocal_62);
					unk_0xAB30B1CF01A198C1(iLocal_59[5], iLocal_62);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
				}
				iVar0++;
			}
			unk_0x14776E43F90DD454(joaat("hexer"));
			unk_0x14776E43F90DD454(joaat("g_m_y_lost_01"));
			unk_0x14776E43F90DD454(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3602
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

void func_58()//Position - 0x369D
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
	{
		unk_0xD68E88A8E0BE8697(iLocal_58, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_58, true);
		if (!unk_0x191BE1BC8F26F3C1(iLocal_59[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_59[1], 0))
		{
			unk_0xE01CE1EBCD7EE551(iLocal_58, 101, 0);
			unk_0x35829E9BFCED1A3F(iLocal_58, false);
			unk_0xDF28F1574E61F9EA(iLocal_59[0], iLocal_58, 1000, 0);
			unk_0xDF28F1574E61F9EA(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_40(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				func_59(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}

void func_59(int iParam0, char* sParam1, int iParam2)//Position - 0x3741
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)//Position - 0x3758
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

void func_61()//Position - 0x394D
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_48() == 0)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_48() == 1)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_48() == 2)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				system::settimera(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
			{
				if ((system::timera() > 5000 && !iLocal_52) && !func_8())
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (system::timera() < 28000)
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 12f, 12f, 2,5f, 0, 1, 0))
					{
						if (((unk_0x46D8E79A1B95ACE2(iLocal_59[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_59[1], unk_0xFC1458A37D98B502())) || unk_0xE56ACE711345F330(iLocal_59[0], unk_0xFC1458A37D98B502())) || unk_0xE56ACE711345F330(iLocal_59[1], unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iLocal_59[0], unk_0xFC1458A37D98B502(), 4000, 2056, 4);
							unk_0x60C06BFD037BB7CF(iLocal_59[1], unk_0xFC1458A37D98B502(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_40(0);
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!unk_0xA5F6598E13F98E08(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0xCA3C40448996C9BA(iLocal_59[0], iLocal_58, 10f))
						{
							unk_0x9627C22EF3C3F4D6(iLocal_59[0], iLocal_58, -1, 0);
						}
					}
				}
				else if (!unk_0x191BE1BC8F26F3C1(iLocal_61[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_61[1], 0))
				{
					func_4();
					func_40(0);
					func_41(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]))
				{
					unk_0x2217C45231E6A537(iLocal_59[iVar0], 156, true);
					unk_0xD7F5B2902EBBD04E(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
					unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
			{
				unk_0xF21E6EBE8EFDCC28(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]))
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_57[iVar0]))
					{
						unk_0xE30CF11C0EE14316(&(iLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (unk_0x3AB6A1A9084FB0A4(iLocal_59[0]) && unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_62()//Position - 0x3CFA
{
	if (!unk_0x9E06F0EE20F58CED(916,4631f, 3601,261f, 31,9327f, 3f))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
		{
			if (unk_0x0C88267282FD588F(unk_0xC733212BF9066BDF(), 916,4631f, 3601,261f, 31,9327f, 2f, 2f, 2f, false, true, 0))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xC733212BF9066BDF(), 915,6531f, 3595,061f, 32,0774f, 1, false, 0, 1);
			}
		}
	}
}

void func_63()//Position - 0x3D62
{
	iLocal_45 = 3;
}

int func_64(int iParam0)//Position - 0x3D6D
{
	if (func_68())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_23(Global_104544))
		{
			func_65(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_23(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)//Position - 0x3DC0
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1)//Position - 0x3EA1
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

char* func_67(int iParam0)//Position - 0x3EB8
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

int func_68()//Position - 0x3EFC
{
	switch (func_69(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3F32
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
		if (func_73(0))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)//Position - 0x406A
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

bool func_71(int iParam0)//Position - 0x40B9
{
	return func_72(iParam0, Global_35861);
}

int func_72(int iParam0, int iParam1)//Position - 0x40CA
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

int func_73(int iParam0)//Position - 0x42AB
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x42CD
{
	int iVar0;
	
	iVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x431F
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_76(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_76(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_76(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x43C3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77()//Position - 0x43DA
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!bLocal_51)
	{
		unk_0xF96119FCCD4D1889(255, iLocal_228, 1862763509);
		if (!unk_0x191BE1BC8F26F3C1(iLocal_59[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_59[1], 0))
		{
			if (unk_0xEBE499597C718EB8(iLocal_59[0], unk_0xFC1458A37D98B502(), 1) || unk_0xEBE499597C718EB8(iLocal_59[1], unk_0xFC1458A37D98B502(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x191BE1BC8F26F3C1(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_59[0], unk_0xC733212BF9066BDF(), 1) || unk_0xEBE499597C718EB8(iLocal_59[1], unk_0xC733212BF9066BDF(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_61[0], 0) && !unk_0x191BE1BC8F26F3C1(iLocal_61[1], 0))
		{
			if (((unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_61[0], 0) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_61[1], 0)) || unk_0xEBE499597C718EB8(iLocal_61[0], unk_0xFC1458A37D98B502(), 1)) || unk_0xEBE499597C718EB8(iLocal_61[1], unk_0xFC1458A37D98B502(), 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[0]) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0x3AB6A1A9084FB0A4(iLocal_59[0]) || unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		vVar0 = { 15f, 15f, 15f };
		vVar1 = { -15f, -15f, -15f };
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[0]))
		{
			if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			vVar0 = { vVar0 + unk_0xD0E00576168D19BB(iLocal_59[0], 31086, 0f, 0f, 0f) };
			vVar1 = { vVar1 + unk_0xD0E00576168D19BB(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_grenadelauncher"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), (973,053f - 30f), (3616,738f - 30f), (32,6181f - 30f), (973,053f + 30f), (3616,738f + 30f), (32,6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0x3AB6A1A9084FB0A4(iLocal_58) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[0])) && !unk_0x3AB6A1A9084FB0A4(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_59[0]) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_59[1])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_59[0])) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_58, 12f, 12f, 2,5f, 0, 1, 0))
			{
				if (((unk_0x46D8E79A1B95ACE2(iLocal_59[0], unk_0xFC1458A37D98B502()) || unk_0x46D8E79A1B95ACE2(iLocal_59[1], unk_0xFC1458A37D98B502())) || unk_0xE56ACE711345F330(iLocal_59[0], unk_0xFC1458A37D98B502())) || unk_0xE56ACE711345F330(iLocal_59[1], unk_0xFC1458A37D98B502()))
				{
					if (!iLocal_50)
					{
						unk_0x9627C22EF3C3F4D6(iLocal_59[0], unk_0xFC1458A37D98B502(), -1, 0);
						iLocal_50 = 1;
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_56))
					{
						unk_0x9C27373CC69ECF87(iLocal_56, true);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_57[0]))
					{
						unk_0x9C27373CC69ECF87(iLocal_57[0], true);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_57[1]))
					{
						unk_0x9C27373CC69ECF87(iLocal_57[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = unk_0x53C562FD2B9E3AB0();
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && unk_0x53C562FD2B9E3AB0() > iLocal_47 + 10000)
			{
				func_4();
				func_40(0);
				func_41(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0xEBE499597C718EB8(iLocal_59[0], unk_0xFC1458A37D98B502(), 1) && !unk_0xEBE499597C718EB8(iLocal_59[1], unk_0xFC1458A37D98B502(), 1))
			{
				if (unk_0xEBE499597C718EB8(iLocal_58, unk_0xFC1458A37D98B502(), 1))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x48F1
{
	if (unk_0xB8DE76287EDC4957(iLocal_60, 0))
	{
		if ((!unk_0x0C88267282FD588F(iLocal_60, 915,7905f, 3603,449f, 31,9111f, 5f, 5f, 5f, false, true, 0) && !unk_0xA8D0477084E86A92(iLocal_58, iLocal_60, 0)) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_60, 1))
		{
			func_58();
		}
	}
	else
	{
		func_58();
	}
}

int func_79()//Position - 0x494D
{
	int iVar0;
	
	if (((((!unk_0x6ADD12BF4D6D2587(iLocal_58) && !unk_0x6ADD12BF4D6D2587(iLocal_59[0])) && !unk_0x6ADD12BF4D6D2587(iLocal_59[1])) && !unk_0x6ADD12BF4D6D2587(iLocal_60)) && !unk_0x6ADD12BF4D6D2587(iLocal_61[0])) && !unk_0x6ADD12BF4D6D2587(iLocal_61[1]))
	{
		unk_0x6FF834D85E2DD4C6(joaat("a_m_m_skidrow_01"));
		unk_0x6FF834D85E2DD4C6(joaat("g_m_y_lost_01"));
		unk_0x6FF834D85E2DD4C6(joaat("g_m_y_lost_02"));
		unk_0x6FF834D85E2DD4C6(joaat("picador"));
		unk_0x6FF834D85E2DD4C6(joaat("hexer"));
		unk_0x6450931B826B49D9("random@countryside_gang_fight");
		unk_0x6450931B826B49D9("veh@drivebystd_ds_grenades");
		unk_0x13A127961044F71B("move_m@gangster@var_i");
		if (((((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_m_skidrow_01")) && unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_lost_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("g_m_y_lost_02"))) && unk_0x9A0B2ED5055D3F0B(joaat("picador"))) && unk_0x9A0B2ED5055D3F0B(joaat("hexer"))) && unk_0x3A801AA34DD821BE("random@countryside_gang_fight")) && unk_0x3A801AA34DD821BE("veh@drivebystd_ds_grenades")) && unk_0xA2B1B9FAFA5BDF26("move_m@gangster@var_i"))
		{
			unk_0x2E4932E63763FE26(joaat("picador"), true);
			unk_0x2E4932E63763FE26(joaat("hexer"), true);
			unk_0xA846A937885EB977(417,901f, 3578,002f, 31,176f, 1305,897f, 3604,306f, 40,1064f, 100,0625f, 0, false, 1);
			unk_0xCB389937EDB1519A(vLocal_48 - Vector(20f, 50f, 80f), vLocal_48 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0x1D29C781A978C4FB(3, false);
			unk_0x1D29C781A978C4FB(5, false);
			unk_0x4DE114E3C7F8B7C2("rghLost", &iLocal_228);
			unk_0xF96119FCCD4D1889(5, iLocal_228, 1862763509);
			iLocal_58 = unk_0xAC992EFAD62C33BF(26, joaat("a_m_m_skidrow_01"), 973,053f, 3616,738f, 31,6181f, 110,2753f, 1, true);
			unk_0x03924C68EFCBC511(iLocal_58, 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_58, 2, 1, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_58, 3, 1, 2, 0);
			unk_0x03924C68EFCBC511(iLocal_58, 4, 0, 0, 0);
			unk_0x14776E43F90DD454(joaat("a_m_m_skidrow_01"));
			unk_0x771A86309E0CA47B(iLocal_58, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_58, 17, true);
			unk_0x5C5D33A1B2711D21(iLocal_58, false);
			unk_0x35829E9BFCED1A3F(iLocal_58, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_58, 185, true);
			unk_0x66698545014E2F21(iLocal_58, 16);
			unk_0x350CEE66BDF90273(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_57(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			unk_0x8BB5ECF21DDE505B(iLocal_58, 1);
			unk_0x12C9D41D52A560D6(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x60C54803C97FDAAB(iLocal_58, "move_m@gangster@var_i", 1048576000);
			iLocal_60 = unk_0xEA60F3B426BB095B(joaat("picador"), 915,7905f, 3603,449f, 31,9111f, 111,9593f, true, true, false);
			unk_0x1E7A8525FB41AAFE(iLocal_60, 37, 0);
			unk_0xB1AB9FD8B4959960(iLocal_60, 4, 0);
			unk_0x55B1BF6B77028A46(iLocal_60, 1);
			unk_0xE58BC5B025017AE2(iLocal_60, "WDU 696");
			iLocal_59[0] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_y_lost_01"), 970,2217f, 3614,821f, 31,6909f, 297,4345f, 1, true);
			func_57(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = unk_0xAC992EFAD62C33BF(22, joaat("g_m_y_lost_02"), 971,504f, 3618,054f, 31,5565f, 216,9967f, 1, true);
			func_57(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			unk_0x14776E43F90DD454(joaat("g_m_y_lost_01"));
			unk_0x14776E43F90DD454(joaat("g_m_y_lost_02"));
			iLocal_61[0] = unk_0xEA60F3B426BB095B(joaat("hexer"), 968,2626f, 3611,717f, 31,7874f, 296,8978f, true, true, false);
			iLocal_61[1] = unk_0xEA60F3B426BB095B(joaat("hexer"), 970,8362f, 3625,563f, 31,3415f, 212,3456f, true, true, false);
			unk_0x14776E43F90DD454(joaat("hexer"));
			unk_0x12C9D41D52A560D6(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					unk_0x230697B667C63948(iLocal_59[iVar0], 0);
					unk_0xCE93FCB8A8D8DF0B(iLocal_59[iVar0], iLocal_228);
					unk_0x4F9A62E773100FDC(iLocal_59[iVar0], 2);
					unk_0xAE6EBBBBD8B9FB30(iLocal_59[iVar0], 50, true);
					unk_0xD1D0B4122585CC63(iLocal_59[iVar0], 0);
					unk_0x9E058151726E58DE(iLocal_59[0], joaat("weapon_pistol"), -1, true, true);
					unk_0x9E058151726E58DE(iLocal_59[1], joaat("weapon_sawnoffshotgun"), -1, true, true);
					unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar0], true);
					unk_0x771A86309E0CA47B(iLocal_59[iVar0], true);
					unk_0xCFF0CD14B439821D(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = unk_0x53C562FD2B9E3AB0() + 1500;
			if (func_48() == 0)
			{
				func_57(&uLocal_63, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
			}
			else if (func_48() == 1)
			{
				func_57(&uLocal_63, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
			}
			else if (func_48() == 2)
			{
				func_57(&uLocal_63, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x4E08
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_81(float fParam0, bool bParam1)//Position - 0x4E8E
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
		if (func_31(func_48()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_82(iVar1, &Var0);
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

void func_82(int iParam0, var uParam1)//Position - 0x4F45
{
	switch (iParam0)
	{
		case 0:
			func_83(uParam1, "Abigail1", func_85(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 1:
			func_83(uParam1, "Abigail2", func_85(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 2:
			func_83(uParam1, "Barry1", func_85(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 3:
			func_83(uParam1, "Barry2", func_85(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 4:
			func_83(uParam1, "Barry3", func_85(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 5:
			func_83(uParam1, "Barry3A", func_85(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 6:
			func_83(uParam1, "Barry3C", func_85(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 7:
			func_83(uParam1, "Barry4", func_85(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_84(iParam0), 0, 0);
			break;
		
		case 8:
			func_83(uParam1, "Dreyfuss1", func_85(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 9:
			func_83(uParam1, "Epsilon1", func_85(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 10:
			func_83(uParam1, "Epsilon2", func_85(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 11:
			func_83(uParam1, "Epsilon3", func_85(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 12:
			func_83(uParam1, "Epsilon4", func_85(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 13:
			func_83(uParam1, "Epsilon5", func_85(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 14:
			func_83(uParam1, "Epsilon6", func_85(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 15:
			func_83(uParam1, "Epsilon7", func_85(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 16:
			func_83(uParam1, "Epsilon8", func_85(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 17:
			func_83(uParam1, "Extreme1", func_85(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 18:
			func_83(uParam1, "Extreme2", func_85(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 19:
			func_83(uParam1, "Extreme3", func_85(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 20:
			func_83(uParam1, "Extreme4", func_85(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 21:
			func_83(uParam1, "Fanatic1", func_85(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 22:
			func_83(uParam1, "Fanatic2", func_85(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 23:
			func_83(uParam1, "Fanatic3", func_85(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_84(iParam0), 0, 1);
			break;
		
		case 24:
			func_83(uParam1, "Hao1", func_85(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_84(iParam0), 0, 1);
			break;
		
		case 25:
			func_83(uParam1, "Hunting1", func_85(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 26:
			func_83(uParam1, "Hunting2", func_85(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 27:
			func_83(uParam1, "Josh1", func_85(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 28:
			func_83(uParam1, "Josh2", func_85(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 29:
			func_83(uParam1, "Josh3", func_85(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 30:
			func_83(uParam1, "Josh4", func_85(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 31:
			func_83(uParam1, "Maude1", func_85(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 32:
			func_83(uParam1, "Minute1", func_85(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 33:
			func_83(uParam1, "Minute2", func_85(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 34:
			func_83(uParam1, "Minute3", func_85(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 35:
			func_83(uParam1, "MrsPhilips1", func_85(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 36:
			func_83(uParam1, "MrsPhilips2", func_85(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 37:
			func_83(uParam1, "Nigel1", func_85(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 38:
			func_83(uParam1, "Nigel1A", func_85(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 39:
			func_83(uParam1, "Nigel1B", func_85(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 40:
			func_83(uParam1, "Nigel1C", func_85(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 41:
			func_83(uParam1, "Nigel1D", func_85(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 42:
			func_83(uParam1, "Nigel2", func_85(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 43:
			func_83(uParam1, "Nigel3", func_85(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 44:
			func_83(uParam1, "Omega1", func_85(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 45:
			func_83(uParam1, "Omega2", func_85(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 46:
			func_83(uParam1, "Paparazzo1", func_85(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 47:
			func_83(uParam1, "Paparazzo2", func_85(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 48:
			func_83(uParam1, "Paparazzo3", func_85(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 49:
			func_83(uParam1, "Paparazzo3A", func_85(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 50:
			func_83(uParam1, "Paparazzo3B", func_85(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 51:
			func_83(uParam1, "Paparazzo4", func_85(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 52:
			func_83(uParam1, "Rampage1", func_85(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 54:
			func_83(uParam1, "Rampage3", func_85(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 55:
			func_83(uParam1, "Rampage4", func_85(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 56:
			func_83(uParam1, "Rampage5", func_85(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 53:
			func_83(uParam1, "Rampage2", func_85(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 57:
			func_83(uParam1, "TheLastOne", func_85(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 58:
			func_83(uParam1, "Tonya1", func_85(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 59:
			func_83(uParam1, "Tonya2", func_85(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 60:
			func_83(uParam1, "Tonya3", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 61:
			func_83(uParam1, "Tonya4", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 62:
			func_83(uParam1, "Tonya5", func_85(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_83(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x618C
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

int func_84(int iParam0)//Position - 0x621D
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

struct<2> func_85(int iParam0)//Position - 0x6563
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_86(iParam0) };
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

struct<2> func_86(int iParam0)//Position - 0x659B
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

int func_87()//Position - 0x69E8
{
	if (func_90() && !func_91())
	{
		return 1;
	}
	if (func_89() && func_88())
	{
		return 1;
	}
	return 0;
}

bool func_88()//Position - 0x6A1A
{
	return Global_104273 > 0;
}

int func_89()//Position - 0x6A28
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x6A3D
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_91()//Position - 0x6A63
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

int func_92()//Position - 0x6A80
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x6AE2
{
	if ((Global_104544 == func_37() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x6B0D
{
}

void func_95(int iParam0)//Position - 0x6B15
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_97(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_96();
}

void func_96()//Position - 0x6B4B
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

void func_97(int iParam0)//Position - 0x6B88
{
	Global_104544 = iParam0;
}

int func_98(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6B96
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
		iParam1 = func_37();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_139())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_91())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_87())
		{
			return 0;
		}
		if (func_138())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_81(100f, 1) != -1)
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
		if (!func_137(iParam1))
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_136(func_48()) == 4 || func_136(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_48()))
		{
			if (!func_135(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_134(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_133())
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
		if (!func_124(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_123(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_123(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_137(30) && !func_123(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_48()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_122(iVar4))
				{
					if (func_100(iVar2))
					{
						if (!func_99(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_48() != iVar2)
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

bool func_99(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6F30
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_100(int iParam0)//Position - 0x6F77
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_101(iVar0);
}

int func_101(int iParam0)//Position - 0x6F98
{
	return func_102(iParam0, 1);
}

int func_102(int iParam0, int iParam1)//Position - 0x6FA7
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_122(iParam0))
	{
		return 0;
	}
	func_103(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6FFA
{
	func_104(func_115(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_104(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7018
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113(iParam1);
		iVar1 = func_111(iParam0);
		iVar2 = (func_111(iParam0) - func_111(iParam1));
		iVar3 = (func_113(iParam0) - func_113(iParam1));
		iVar4 = (func_110(iParam0) - func_110(iParam1));
		iVar5 = (func_109(iParam0) - func_109(iParam1));
		iVar6 = (func_108(iParam0) - func_108(iParam1));
		iVar7 = (func_107(iParam0) - func_107(iParam1));
	}
	else
	{
		iVar0 = func_113(iParam0);
		iVar1 = func_111(iParam1);
		iVar2 = (func_111(iParam1) - func_111(iParam0));
		iVar3 = (func_113(iParam1) - func_113(iParam0));
		iVar4 = (func_110(iParam1) - func_110(iParam0));
		iVar5 = (func_109(iParam1) - func_109(iParam0));
		iVar6 = (func_108(iParam1) - func_108(iParam0));
		iVar7 = (func_107(iParam1) - func_107(iParam0));
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
		iVar4 = (iVar4 + func_106(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_105(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_105(float fParam0, float fParam1, float fParam2)//Position - 0x7219
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

int func_106(int iParam0, int iParam1)//Position - 0x725B
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

int func_107(int iParam0)//Position - 0x72FD
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_108(int iParam0)//Position - 0x7310
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_109(int iParam0)//Position - 0x7323
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_110(int iParam0)//Position - 0x7336
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_111(int iParam0)//Position - 0x7348
{
	return (system::shift_right(iParam0, 26) & 31 * func_112(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_112(bool bParam0, int iParam1, int iParam2)//Position - 0x736D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_113(int iParam0)//Position - 0x7384
{
	return iParam0 & 15;
}

int func_114(int iParam0, int iParam1)//Position - 0x7391
{
	int iVar0;
	int iVar1;
	
	if (!func_122(iParam1) || !func_122(iParam0))
	{
		return 1;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x749D
{
	var uVar0;
	
	func_121(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_120(&uVar0, unk_0x95327550F0F2BE7C());
	func_119(&uVar0, unk_0x674C9438180770FE());
	func_118(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_117(&uVar0, unk_0xEAF455949B108589());
	func_116(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_116(var uParam0, int iParam1)//Position - 0x74E3
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

void func_117(var uParam0, int iParam1)//Position - 0x7569
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)//Position - 0x759C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(*uParam0);
	iVar1 = func_111(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_119(var uParam0, int iParam1)//Position - 0x75ED
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_120(var uParam0, int iParam1)//Position - 0x7627
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_121(var uParam0, int iParam1)//Position - 0x7662
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_122(int iParam0)//Position - 0x769E
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
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_108(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_109(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_111(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_113(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_110(iParam0);
	if (iVar5 < 1 || iVar5 > func_106(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0, int iParam1)//Position - 0x777A
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x779D
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_48();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_132()) || Global_103602) || Global_25235) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_128()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_132()) || Global_25235) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_132()) || Global_103602) || Global_25235) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_132()) || Global_103602) || Global_25235) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_132() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_50(8, -1)) || func_127()) || func_126()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_130()) || func_129()) || func_126()) || func_125())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_132()) || Global_25235) || func_131()) || func_50(8, -1)) || func_129()) || func_128()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_132()) || func_129()) || Global_103602) || Global_25235) || func_131()) || Global_36993) || func_50(8, -1)) || func_128()) || func_126()) || func_127()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_132()) || Global_103602) || Global_25235) || func_131()) || func_50(8, -1)) || func_128()) || func_126()) || func_130()) || func_129()) || func_127())
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

var func_125()//Position - 0x7EBA
{
	return Global_92872.f_1;
}

int func_126()//Position - 0x7EC8
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_127()//Position - 0x7EEE
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7F08
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

bool func_129()//Position - 0x7F32
{
	return Global_92885.f_316 > 0;
}

bool func_130()//Position - 0x7F43
{
	return Global_92885.f_315 > 0;
}

var func_131()//Position - 0x7F54
{
	return Global_1312854;
}

int func_132()//Position - 0x7F60
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_133()//Position - 0x7F7C
{
	func_47();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0)//Position - 0x7FA4
{
	return func_114(func_115(), iParam0);
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x7FB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
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

int func_136(int iParam0)//Position - 0x80AB
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_137(int iParam0)//Position - 0x80CF
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_139())
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

int func_138()//Position - 0x812D
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

int func_139()//Position - 0x8171
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

void func_140()//Position - 0x822C
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_56))
		{
			unk_0xE30CF11C0EE14316(&iLocal_56);
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_58))
		{
			unk_0xAE01EF4BC84AFE7C(iLocal_58, 317, true);
			unk_0x35829E9BFCED1A3F(iLocal_58, false);
			unk_0x771A86309E0CA47B(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_57[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(iLocal_57[iVar0]));
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_59[iVar0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
					{
						unk_0xD2C269DBF147B406(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xFC1458A37D98B502(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xE9B3D12A64CC7C1A(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0xD68E88A8E0BE8697(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xD68E88A8E0BE8697(iLocal_59[iVar0], unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
				}
				unk_0x771A86309E0CA47B(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_61[iVar0], 0))
			{
				unk_0x5380482A432E314E(&(iLocal_61[iVar0]));
				if (unk_0x771D0F8F56A5FE6C("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xE02E32C69260FBB7("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x94BD6F0436473406(1f);
		unk_0x8A4311269B560FDF(417,901f, 3578,002f, 31,176f, 1305,897f, 3604,306f, 40,1064f, 100,0625f, 1);
		unk_0x3CDDC4760DBA4651();
		unk_0x1D29C781A978C4FB(3, true);
		unk_0x1D29C781A978C4FB(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_141(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_141(int iParam0)//Position - 0x83ED
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_93())
	{
		func_145(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_144(30000);
		StringCopy(&cVar0, func_143(Global_104544, 1), 64);
		if (func_36(Global_104544) > 0)
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
	func_142(&Global_25292);
	Global_104545 = 0;
	func_97(-1);
}

void func_142(var uParam0)//Position - 0x84A2
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

char* func_143(int iParam0, bool bParam1)//Position - 0x84DF
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

void func_144(int iParam0)//Position - 0x8728
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_145(int iParam0)//Position - 0x873A
{
	func_146(iParam0, 0, func_151(iParam0));
}

void func_146(int iParam0, int iParam1, int iParam2)//Position - 0x874F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_115();
	func_149(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_148(iParam0, &uVar0);
	Var1 = { func_147(&uVar0) };
}

struct<16> func_147(var uParam0)//Position - 0x877E
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_109(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_108(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_111(*uParam0), 64);
	return Var0;
}

void func_148(int iParam0, var uParam1)//Position - 0x884F
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8867
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_111(*uParam0);
	iVar1 = func_113(*uParam0);
	iVar2 = func_110(*uParam0);
	iVar3 = func_109(*uParam0);
	iVar4 = func_108(*uParam0);
	iVar5 = func_107(*uParam0);
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
	iVar6 = func_106(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_106(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_150(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x89E9
{
	func_121(uParam0, iParam1);
	func_120(uParam0, iParam2);
	func_119(uParam0, iParam3);
	func_117(uParam0, iParam5);
	func_118(uParam0, iParam4);
	func_116(uParam0, iParam6);
}

int func_151(int iParam0)//Position - 0x8A21
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

