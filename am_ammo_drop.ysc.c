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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
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
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_140(ScriptParam_237))
		{
			func_134();
		}
	}
	while (true)
	{
		func_133();
		if (func_123())
		{
			func_134();
		}
		if (unk_0xB01117EF93F91860() != iLocal_67)
		{
			func_134();
		}
		if (unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71()) != Local_60.f_17)
		{
			func_134();
		}
		unk_0x938EE52364C18007();
		switch (func_122(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_120())
				{
					if (func_119() == 1)
					{
						func_118();
						vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 1;
					}
					else if (func_119() == 4)
					{
						vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_119() == 1)
				{
					func_100();
				}
				else if (func_119() == 4)
				{
					vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_99(&(Local_60.f_21));
				if (func_98(&(Local_60.f_21)))
				{
					vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 4;
			
			case 4:
				func_134();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_119())
			{
				case 0:
					if (func_71())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_35();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1B7
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1CB
{
	if (unk_0xC80D31E4B587871C(iLocal_63, 8))
	{
		if (!func_34(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0xC80D31E4B587871C(Local_60.f_1, 9))
			{
				unk_0x872F1C1F8587CCC7(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (unk_0xC80D31E4B587871C(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!unk_0x918CA1BFFAA03556(Local_60.f_4))
		{
			if (!func_32(Local_60.f_2))
			{
				return 1;
			}
			if (func_31(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_63, 8))
		{
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(unk_0x9EB17624F44A8DA4()) && func_8() != 151) || func_6(unk_0x9EB17624F44A8DA4(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x93C304998B457C45(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)//Position - 0x306
{
	var uVar0;
	
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (!unk_0xE53FD7AF7F25C0A8(*uParam0))
		{
		}
	}
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0xFA8AA9E856FCF99B(&uVar0);
	}
}

var func_4()//Position - 0x33F
{
	return Global_1312416;
}

var func_5()//Position - 0x34B
{
	return Global_2512808.f_4853;
}

int func_6(int iParam0, int iParam1)//Position - 0x35A
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x37A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_8()//Position - 0x3A0
{
	return Global_1644563;
}

int func_9(int iParam0)//Position - 0x3AC
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)//Position - 0x3CF
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)//Position - 0x3DF
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_12(var uParam0)//Position - 0x3FA
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

void func_13()//Position - 0x420
{
	if (unk_0x93C304998B457C45(Local_60.f_4))
	{
		if (Global_262145.f_19113 > 0)
		{
			func_28(Global_262145.f_19113, 0);
			func_14(Global_262145.f_19113, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x459
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_27(iParam1), 16);
	StringCopy(&Var1, func_26(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_25())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4261865[iVar3 /*80*/].f_8.f_43 = { Var0 };
		Global_4261865[iVar3 /*80*/].f_8.f_47 = { Var1 };
	}
	else
	{
		unk_0xB55903868EC9248F(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5D5
{
	int iVar0;
	
	if (!func_25())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xA5F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_24()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_22(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC03
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)//Position - 0xC3B
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_19(var uParam0)//Position - 0xC8D
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
	func_20(&(uParam0->f_8.f_3));
	func_20(&(uParam0->f_8.f_16));
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

void func_20(var uParam0)//Position - 0xD7F
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

int func_21(int iParam0)//Position - 0xDC7
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)//Position - 0xDEF
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_23(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xE03
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_25())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
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

int func_24()//Position - 0xEFC
{
	return Global_1312736;
}

int func_25()//Position - 0xF08
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

char* func_26(int iParam0)//Position - 0xF1F
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_27(int iParam0)//Position - 0xFA8
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

void func_28(int iParam0, int iParam1)//Position - 0x1080
{
	func_30(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_29(iParam0, 0);
	}
}

void func_29(int iParam0, bool bParam1)//Position - 0x109E
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_30(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x10AF
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_4 = iVar1;
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 = (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_29(iVar1, 0);
	}
}

int func_31(var uParam0)//Position - 0x1132
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

int func_32(var uParam0)//Position - 0x1151
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_33(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1171
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

int func_34(int iParam0, bool bParam1, bool bParam2)//Position - 0x11AA
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

void func_35()//Position - 0x11F4
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_70();
			}
			else
			{
				func_65();
			}
			if (func_39())
			{
				func_38();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x93C304998B457C45(Local_60.f_4))
			{
				func_37(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!unk_0x93C304998B457C45(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (unk_0x93C304998B457C45(Local_60.f_2))
				{
					func_36(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (unk_0x93C304998B457C45(Local_60.f_3))
				{
					func_36(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_36(var uParam0)//Position - 0x12B6
{
	var uVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&uVar0);
	}
}

void func_37(var uParam0, int iParam1)//Position - 0x12DA
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0x31758B9A51671C43(iParam1, &uVar3, &uVar4, &uVar5, &uVar6);
	fVar2 = 0,5f;
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(unk_0xE8BC72FED1586931(uParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0,1f))
	{
		fVar2 = (fVar8 + 0,4f);
	}
	unk_0xBDD6765E5846A7DE(2, unk_0xB3328BA8976B416C(unk_0xE8BC72FED1586931(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0,5f, 0,5f, 0,5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_38()//Position - 0x1380
{
	if (!unk_0xA6DECE14FC9A8C51(iLocal_64))
	{
		iLocal_64 = unk_0xCA43F0FC44D9B846(unk_0xE8BC72FED1586931(Local_60.f_4));
		if (Local_60.f_18)
		{
			unk_0x4B4040A0EC7DBA81(iLocal_64, 84);
			unk_0xA5D25D3F884FF516(iLocal_64, 1,2f);
			unk_0x62BD54E491535B76(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0x4B4040A0EC7DBA81(iLocal_64, 351);
			unk_0x62BD54E491535B76(iLocal_64, "AMD_BLIPN");
			unk_0xA5D25D3F884FF516(iLocal_64, 0,7f);
		}
		unk_0x0C71C8E276E3EC54(iLocal_64, 2);
		unk_0xF20857E4CB32A2B7(iLocal_64, 120);
	}
}

int func_39()//Position - 0x13F4
{
	if (!unk_0xC80D31E4B587871C(Local_60.f_1, 7))
	{
		if (func_32(Local_60.f_2))
		{
			if (unk_0x0C88267282FD588F(unk_0xF32FBF2453AC1753(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_120())
	{
		if (func_42())
		{
			if (func_40())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_40()//Position - 0x1459
{
	unk_0x6FF834D85E2DD4C6(Local_60.f_19.f_1);
	if (unk_0x9A0B2ED5055D3F0B(Local_60.f_19.f_1))
	{
		if (!unk_0x93C304998B457C45(Local_60.f_19) && unk_0x93C304998B457C45(Local_60.f_4))
		{
			if (unk_0x1887812F0A3EB4F6(1))
			{
				if (func_41(&(Local_60.f_19), Local_60.f_19.f_1, unk_0xB3328BA8976B416C(unk_0xE8BC72FED1586931(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0))
				{
					unk_0x9CE66BFF230839CE(Local_60.f_19, 1);
					unk_0x48ED7B2293A96722(unk_0xE8BC72FED1586931(Local_60.f_19), unk_0xF0371FE6E2BF9599(unk_0xE8BC72FED1586931(Local_60.f_4)));
					unk_0xA9D382E7BA095148(unk_0xE8BC72FED1586931(Local_60.f_4), unk_0xE8BC72FED1586931(Local_60.f_19), 0, 0f, 0f, 0,25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					unk_0xE322818CF08D3198(unk_0xE8BC72FED1586931(Local_60.f_19), 1);
					unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(Local_60.f_19), 0);
					unk_0x764B52EA8B8FFFA3(unk_0xE8BC72FED1586931(Local_60.f_19));
					unk_0xD91B0600CD72C5F7(unk_0xE8BC72FED1586931(Local_60.f_19), 0f, 0f, -0,2f);
					unk_0x86C66B2AA0BF4656(unk_0xE8BC72FED1586931(Local_60.f_19), 1);
				}
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_41(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x155D
{
	if (!unk_0x1887812F0A3EB4F6(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x02E026B1C5CE86B4(unk_0x5E35CF35E65D69B9(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(*uParam0), iParam6);
		if (unk_0x0D4BF24EE51A419A(unk_0xE8BC72FED1586931(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42()//Position - 0x15DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6FF834D85E2DD4C6(joaat("p_cargo_chute_s"));
	if (unk_0x9A0B2ED5055D3F0B(iVar0) && unk_0x9A0B2ED5055D3F0B(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x93C304998B457C45(Local_60.f_4) && !unk_0x93C304998B457C45(Local_60.f_5))
		{
			if (func_32(Local_60.f_2) && unk_0xF51EA69EE19061E6(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x93C304998B457C45(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						unk_0x872F1C1F8587CCC7(&iVar2, 12);
					}
					else
					{
						unk_0x872F1C1F8587CCC7(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x02E026B1C5CE86B4(unk_0x88A6626A005F30E3(iVar3, unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_18 == 1)
					{
						func_64(unk_0xE8BC72FED1586931(Local_60.f_4));
						unk_0xF6A03465FF2E4928(0);
					}
					unk_0x1A0806871323CD16(unk_0xE8BC72FED1586931(Local_60.f_4), 1);
					unk_0x4C1CD9E51E95280C(unk_0xE8BC72FED1586931(Local_60.f_4), 1);
					unk_0xE322818CF08D3198(unk_0xE8BC72FED1586931(Local_60.f_4), 1);
					unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(Local_60.f_4), 0);
					unk_0x764B52EA8B8FFFA3(unk_0xE8BC72FED1586931(Local_60.f_4));
					func_63();
					iVar4 = unk_0xD0CA83418A236CB4();
					unk_0x7CC4363AEEF7EF34(iVar4, "Crate_Beeps", unk_0xE8BC72FED1586931(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_16 = unk_0xC865BADB3DD52C38(iVar4);
				}
				if (unk_0x93C304998B457C45(Local_60.f_4) && !unk_0x93C304998B457C45(Local_60.f_5))
				{
					if (func_41(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0x9CE66BFF230839CE(Local_60.f_5, 1);
						unk_0xA9D382E7BA095148(unk_0xE8BC72FED1586931(Local_60.f_5), unk_0xE8BC72FED1586931(Local_60.f_4), 0, 0f, 0f, 0,1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0xE322818CF08D3198(unk_0xE8BC72FED1586931(Local_60.f_5), 1);
						unk_0xFBA991D3A851E195(unk_0xE8BC72FED1586931(Local_60.f_5), 0);
						unk_0x90CD41CAEBB68E99(unk_0xE8BC72FED1586931(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
						unk_0x753D9A01DBBC17B5(unk_0xE8BC72FED1586931(Local_60.f_5));
					}
				}
				func_61();
				if (!unk_0xC80D31E4B587871C(iLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						func_60(&uLocal_72, 3, unk_0x47BA76CE3C825A08(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_43(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_63, 15);
				}
			}
		}
	}
	if (unk_0x93C304998B457C45(Local_60.f_4) && unk_0x93C304998B457C45(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_43(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x185E
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_44(sParam2, iParam3, 0);
}

int func_44(char* sParam0, int iParam1, bool bParam2)//Position - 0x18AC
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
					func_58();
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
		if (func_57(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_56();
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
				func_49();
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
				if (func_48())
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
			if (func_47())
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
			func_46();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_45();
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
		func_58();
	}
	return 0;
}

void func_45()//Position - 0x1B78
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

void func_46()//Position - 0x1BA8
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

int func_47()//Position - 0x1C3D
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x1C64
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

void func_49()//Position - 0x1CFD
{
	if (func_55(14))
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
		Global_14453 = func_50();
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

var func_50()//Position - 0x1D9F
{
	func_51();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_51()//Position - 0x1DB8
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_54(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_53(unk_0xFC1458A37D98B502());
			if (func_52(iVar0) && (!func_55(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_52(Global_104555.f_2353.f_539.f_4301))
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

bool func_52(int iParam0)//Position - 0x1EB5
{
	return iParam0 < 3;
}

int func_53(int iParam0)//Position - 0x1EC1
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)//Position - 0x1EFE
{
	if (func_52(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_55(int iParam0)//Position - 0x1F28
{
	return Global_35861 == iParam0;
}

void func_56()//Position - 0x1F36
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

bool func_57(int iParam0, int iParam1)//Position - 0x1F8C
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

void func_58()//Position - 0x1FC7
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x201E
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

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2074
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

int func_61()//Position - 0x210F
{
	if (func_62())
	{
		if (!unk_0xE0B0126B4689CB72(iLocal_66))
		{
			iLocal_66 = unk_0x71169ADA5940CC01("scr_crate_drop_beacon", unk_0xE8BC72FED1586931(Local_60.f_4), 0f, 0f, 0,2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0xBCEA363B5EFB935C(iLocal_66, 0,8f, 0,18f, 0,19f, 0);
		}
	}
	if (!unk_0xE0B0126B4689CB72(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_62()//Position - 0x2181
{
	unk_0x36905B9EE07F38CC();
	if (unk_0xFEDD99169EC73AA6())
	{
		return 1;
	}
	return 0;
}

void func_63()//Position - 0x2199
{
	if (unk_0x07673A93547BBC28(Local_60.f_16) != -1)
	{
		if (unk_0x93C304998B457C45(Local_60.f_4))
		{
			if (!unk_0xCCCA18C9A006FF83(unk_0x07673A93547BBC28(Local_60.f_16)))
			{
				unk_0x0B9D04994D02CC2F(unk_0x07673A93547BBC28(Local_60.f_16));
			}
			unk_0xB94964861C6B4D3C(unk_0x07673A93547BBC28(Local_60.f_16));
		}
		else
		{
			if (!unk_0xCCCA18C9A006FF83(unk_0x07673A93547BBC28(Local_60.f_16)))
			{
				unk_0x0B9D04994D02CC2F(unk_0x07673A93547BBC28(Local_60.f_16));
			}
			unk_0xB94964861C6B4D3C(unk_0x07673A93547BBC28(Local_60.f_16));
		}
	}
}

void func_64(var uParam0)//Position - 0x220B
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, unk_0xF19B3230511B7F9F());
	unk_0xEB94969E4C16EB84(uParam0, uVar0);
}

void func_65()//Position - 0x2225
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(iLocal_63, 11))
	{
		if (!unk_0xF491DD47B88AA84E())
		{
			iVar0 = func_69(1187, -1, 0);
			if (!unk_0xC80D31E4B587871C(iVar0, 10))
			{
				func_68("AMD_HELP1", -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 10);
				func_66(1187, iVar0, -1, 1, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_63, 11);
			}
			else if (!unk_0xC80D31E4B587871C(iVar0, 11))
			{
				func_68("AMD_HELP2", -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 11);
				func_66(1187, iVar0, -1, 1, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_63, 11);
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_63, 11);
			}
		}
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x22BC
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_67(var uParam0)//Position - 0x22EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

void func_68(char* sParam0, int iParam1)//Position - 0x2320
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x2337
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70()//Position - 0x2369
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(iLocal_63, 17))
	{
		if (!unk_0xF491DD47B88AA84E())
		{
			iVar0 = func_69(1187, -1, 0);
			if (!unk_0xC80D31E4B587871C(iVar0, 24))
			{
				func_68("BALD_HELP1", -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 24);
				func_66(1187, iVar0, -1, 1, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_63, 17);
			}
			else if (!unk_0xC80D31E4B587871C(iVar0, 25))
			{
				func_68("BALD_HELP2", -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 25);
				func_66(1187, iVar0, -1, 1, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_63, 17);
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_63, 17);
			}
		}
	}
}

int func_71()//Position - 0x2400
{
	if (func_97(joaat("cuban800")) && func_97(joaat("s_m_m_pilot_02")))
	{
		if (func_95(&uLocal_70, 4000, 0))
		{
			if (func_74() && func_72())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72()//Position - 0x2444
{
	if ((!unk_0x93C304998B457C45(Local_60.f_3) && func_97(joaat("s_m_m_pilot_02"))) && unk_0x93C304998B457C45(Local_60.f_2))
	{
		if (func_32(Local_60.f_2))
		{
			if (func_73(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_60.f_3), 1);
				unk_0xCE93FCB8A8D8DF0B(unk_0x47BA76CE3C825A08(Local_60.f_3), Global_1574758);
				unk_0x230697B667C63948(unk_0x47BA76CE3C825A08(Local_60.f_3), 0);
				unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_60.f_3), 1);
				unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_60.f_3), system::round((200f * Global_262145.f_153)), 0);
				func_118();
				unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_60.f_3), uLocal_65);
				unk_0x23C906EF22FD3A29(unk_0xF32FBF2453AC1753(Local_60.f_2), system::round(50f));
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_60.f_3))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_73(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x252D
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

int func_74()//Position - 0x25B5
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x93C304998B457C45(Local_60.f_2))
	{
		if (func_97(joaat("cuban800")))
		{
			func_92(&vVar0, &fVar1);
			if (func_76(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_75(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_60.f_2), 2);
					unk_0xEDC33A771FAEB393(unk_0xF32FBF2453AC1753(Local_60.f_2), false);
					unk_0x42B3DBD52AED7B7D(unk_0xF32FBF2453AC1753(Local_60.f_2), 1);
					unk_0x764B52EA8B8FFFA3(unk_0xF32FBF2453AC1753(Local_60.f_2));
					unk_0xFB2E9855F95E3BD3(unk_0xF32FBF2453AC1753(Local_60.f_2), 60f);
					unk_0xFDAFE1354D61AE41(unk_0xF32FBF2453AC1753(Local_60.f_2));
					unk_0xA15269351F50F113(unk_0xF32FBF2453AC1753(Local_60.f_2), 1, 1, 0);
					unk_0x8C224CD34D64FA01(unk_0xF32FBF2453AC1753(Local_60.f_2), 0);
					unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_60.f_2), 0);
					unk_0x39748EEC52404AFA(unk_0xF32FBF2453AC1753(Local_60.f_2), 3);
					unk_0xE8F6B4FEEC285633(unk_0xF32FBF2453AC1753(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						unk_0xD38F266C132F2897(unk_0xF32FBF2453AC1753(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_60.f_2))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(joaat("cuban800"));
	return 1;
}

int func_75(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x26E4
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

int func_76(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x27DE
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
		if (func_85(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_77(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_77(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x28EF
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_34(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_81(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_34(iVar1, 1, 1))
		{
			if (!func_79(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_78(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
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
								if (unk_0xBE3C4023003180FC(func_81(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xBE3C4023003180FC(func_81(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_78(int iParam0)//Position - 0x2AA7
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_79(int iParam0, int iParam1)//Position - 0x2AD3
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_80(-1, 0) == 8;
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

int func_80(int iParam0, bool bParam1)//Position - 0x2B1E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

Vector3 func_81(int iParam0)//Position - 0x2B5F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_84() && Global_1595693[iVar0 /*680*/].f_673) && !func_83(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_82(iParam0);
}

Vector3 func_82(int iParam0)//Position - 0x2BB2
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_83(vector3 vParam0)//Position - 0x2BC5
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_84()//Position - 0x2BEF
{
	return Global_2447174.f_16;
}

int func_85(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2BFD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_34(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_78(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_86(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_82(iVar1), vParam0, 1) < fParam1)
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

int func_86(int iParam0)//Position - 0x2CF9
{
	if (func_91(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_90(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_87(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x2D40
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	if (!iVar0 == func_88())
	{
		if (iVar0 == func_89(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x2D6B
{
	return -1;
}

int func_89(int iParam0)//Position - 0x2D74
{
	if (iParam0 != func_88())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_88();
}

struct<13> func_90(int iParam0)//Position - 0x2D97
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_91(int iParam0, int iParam1)//Position - 0x2DAE
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_90(iParam0) };
		Global_2492170 = { func_90(iParam1) };
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

void func_92(var uParam0, var uParam1)//Position - 0x2E1B
{
	float fVar0;
	
	*uParam0 = { func_93(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0xA67DD8488EBA5F6D((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x357310BDD94111AA((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_93(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2EA2
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_94(vVar0, unk_0x5B811202FCBE9E9D(fParam1, fParam2)) };
	vVar0.z = unk_0x5B811202FCBE9E9D(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_94(vector3 vParam0, float fParam1)//Position - 0x2EEB
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_95(var uParam0, int iParam1, bool bParam2)//Position - 0x2F22
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_96(uParam0, bParam2, 0);
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

void func_96(var uParam0, bool bParam1, bool bParam2)//Position - 0x2F80
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

bool func_97(int iParam0)//Position - 0x2FC5
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_98(var uParam0)//Position - 0x2FE3
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_99(var uParam0)//Position - 0x300C
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_96(uParam0, 0, 0);
		}
	}
}

void func_100()//Position - 0x302B
{
	func_109();
	switch (vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_105();
			func_101();
			break;
		
		case 2:
			func_134();
			break;
	}
}

void func_101()//Position - 0x3080
{
	int iVar0;
	int iVar1;
	
	if (unk_0x93C304998B457C45(Local_60.f_4))
	{
		if (func_34(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			iVar1 = func_104(unk_0xFC1458A37D98B502());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312415;
			}
			unk_0x6407D3750DB405F3(unk_0xFC1458A37D98B502(), iVar1, &iVar0);
			if ((func_103(iVar1) && func_102(iVar1)) && unk_0x5088CF774DF6D935(unk_0xFC1458A37D98B502(), iVar1) < iVar0)
			{
			}
			else if (unk_0x8E1421E2A2A2FBD4())
			{
				if (!unk_0xC80D31E4B587871C(iLocal_63, 12))
				{
					if (!unk_0xF491DD47B88AA84E())
					{
						if (Local_60.f_18)
						{
							func_68("BALD_HELP3", -1);
						}
						else
						{
							func_68("AMD_HELP3", -1);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_63, 12);
					}
				}
				else if (!unk_0xC80D31E4B587871C(iLocal_63, 13))
				{
					if (!unk_0xF491DD47B88AA84E())
					{
						if (unk_0x918CA1BFFAA03556(Local_60.f_4))
						{
							if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), unk_0xE8BC72FED1586931(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_95(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_68("AMD_HELP3", -1);
									}
									unk_0x872F1C1F8587CCC7(&iLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_102(int iParam0)//Position - 0x328B
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_103(int iParam0)//Position - 0x332F
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_104(int iParam0)//Position - 0x3346
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

void func_105()//Position - 0x335A
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0x918CA1BFFAA03556(Local_60.f_4))
	{
		if (unk_0xE53FD7AF7F25C0A8(Local_60.f_4) || (!unk_0x0070DE1A1E73C71C(Local_60.f_4) && unk_0x8E1421E2A2A2FBD4()))
		{
			if (unk_0x918CA1BFFAA03556(Local_60.f_5))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_60.f_5) || (!unk_0x0070DE1A1E73C71C(Local_60.f_5) && unk_0x8E1421E2A2A2FBD4()))
				{
					if (func_108(Local_60.f_4) && func_108(Local_60.f_5))
					{
						if (!unk_0xC80D31E4B587871C(iLocal_63, 8))
						{
							if (unk_0xC80D31E4B587871C(iLocal_63, 7))
							{
								if (!unk_0xA5F6598E13F98E08(unk_0xE8BC72FED1586931(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x872F1C1F8587CCC7(&iLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_64(unk_0xE8BC72FED1586931(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0xC80D31E4B587871C(iLocal_63, 7))
						{
							if (unk_0xC80D31E4B587871C(iLocal_63, 6))
							{
								if (unk_0xA5F6598E13F98E08(unk_0xE8BC72FED1586931(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x872F1C1F8587CCC7(&iLocal_63, 7);
								}
							}
						}
						if (!unk_0xC80D31E4B587871C(iLocal_63, 6))
						{
							unk_0xE99CAC27ABD8B77B(unk_0xE8BC72FED1586931(Local_60.f_4), 2, 0,0245f);
							if (func_106())
							{
								unk_0x90CD41CAEBB68E99(unk_0xE8BC72FED1586931(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
								unk_0x872F1C1F8587CCC7(&iLocal_63, 6);
								if (unk_0xA6DECE14FC9A8C51(iLocal_64))
								{
									unk_0xF20857E4CB32A2B7(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iLocal_63, 14))
			{
				if (unk_0x918CA1BFFAA03556(Local_60.f_19))
				{
					if (unk_0xE53FD7AF7F25C0A8(Local_60.f_19) || (!unk_0x0070DE1A1E73C71C(Local_60.f_19) && unk_0x8E1421E2A2A2FBD4()))
					{
						if (func_108(Local_60.f_19))
						{
							unk_0xE99CAC27ABD8B77B(unk_0xE8BC72FED1586931(Local_60.f_19), 2, 0,1f);
							if (unk_0xEE6BA6C2ABB48CC3(unk_0xE8BC72FED1586931(Local_60.f_19)))
							{
								if (unk_0x918CA1BFFAA03556(Local_60.f_4))
								{
									unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_60.f_4), 1, 1);
									if (Local_60.f_18 == 1)
									{
										func_64(unk_0xE8BC72FED1586931(Local_60.f_4));
									}
								}
								unk_0x872F1C1F8587CCC7(&iLocal_63, 14);
							}
						}
						if (!unk_0xC80D31E4B587871C(Local_60.f_1, 8) && unk_0xC80D31E4B587871C(iLocal_63, 8))
						{
							if (func_108(Local_60.f_19))
							{
								if (!unk_0xFC27C6A251089B18(unk_0xE8BC72FED1586931(Local_60.f_19)) && unk_0xEF563B5489921133(unk_0xE8BC72FED1586931(Local_60.f_19)))
								{
									if (unk_0x9479D23F28CA059C(unk_0xE8BC72FED1586931(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0x0ACC2116170FA204(unk_0xE8BC72FED1586931(Local_60.f_19)) && unk_0xA73DEC876598C594(unk_0xE8BC72FED1586931(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x86C66B2AA0BF4656(unk_0xE8BC72FED1586931(Local_60.f_19), 0);
										unk_0x872F1C1F8587CCC7(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_64(unk_0xE8BC72FED1586931(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xE8BC72FED1586931(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !unk_0x0BA31FF7931F3DD3(unk_0xE8BC72FED1586931(Local_60.f_4)))
			{
				if (func_108(Local_60.f_4))
				{
					unk_0xBD8D47FDC6902B2D(unk_0xE8BC72FED1586931(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_18 == 1)
					{
						func_64(unk_0xE8BC72FED1586931(Local_60.f_4));
					}
				}
			}
			if (unk_0x918CA1BFFAA03556(Local_60.f_4))
			{
				if (unk_0x918CA1BFFAA03556(Local_60.f_19) && unk_0xDFFD5F8C8ABCB7EF(unk_0xE8BC72FED1586931(Local_60.f_4)))
				{
					iVar2 = unk_0xE8BC72FED1586931(Local_60.f_19);
				}
				else
				{
					iVar2 = unk_0xE8BC72FED1586931(Local_60.f_4);
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iVar2))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_63, 16))
				{
					if (unk_0x8AA8CAD184F4332C(iVar2) >= 0,9f)
					{
						if (unk_0x07673A93547BBC28(Local_60.f_16) != -1)
						{
							unk_0x922FC70048B5A79D(unk_0x07673A93547BBC28(Local_60.f_16), "Crate_Underwater", 1f);
						}
						unk_0x872F1C1F8587CCC7(&iLocal_63, 16);
					}
				}
				else if (unk_0x8AA8CAD184F4332C(iVar2) < 0,9f)
				{
					if (unk_0x07673A93547BBC28(Local_60.f_16) != -1)
					{
						unk_0x922FC70048B5A79D(unk_0x07673A93547BBC28(Local_60.f_16), "Crate_Underwater", 0f);
					}
					unk_0x0EE72DB1CD8A3B86(&iLocal_63, 16);
				}
			}
		}
	}
}

int func_106()//Position - 0x3726
{
	int iVar0;
	
	if (unk_0x918CA1BFFAA03556(Local_60.f_19))
	{
		if (!unk_0x0ACC2116170FA204(unk_0xE8BC72FED1586931(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0xEE6BA6C2ABB48CC3(unk_0xE8BC72FED1586931(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x0BA31FF7931F3DD3(unk_0xE8BC72FED1586931(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_107())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_108(Local_60.f_19))
			{
				unk_0x86C66B2AA0BF4656(unk_0xE8BC72FED1586931(Local_60.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_107()//Position - 0x379D
{
	float fVar0;
	
	fVar0 = unk_0xA265D8071CA2777B(unk_0xE8BC72FED1586931(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x733545A84ECFD808(unk_0xE8BC72FED1586931(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_108(var uParam0)//Position - 0x37FC
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

void func_109()//Position - 0x381E
{
	int iVar0;
	
	iVar0 = unk_0x9E883378D9B4735D(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !unk_0x93C304998B457C45(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_117(Local_60.f_13, 0, 1))
			{
				unk_0x7BC094E5B24A760D(Local_60.f_13);
			}
		}
	}
	iVar0 = unk_0x3930B0AA9F6A0C8C(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !unk_0x93C304998B457C45(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_116(Local_60.f_14, 0, 1))
			{
				unk_0xBC60D873F181A18E(Local_60.f_14);
			}
		}
	}
	iVar0 = unk_0x5A9A3A92F1F0B182(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_110(Local_60.f_15, 0, 1))
		{
			unk_0xB66EA47EE710E67F(Local_60.f_15);
		}
	}
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x38EF
{
	return func_111(2, iParam0, 1, bParam1, bParam2);
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3903
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_115(iParam0) - func_114(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_113(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_114(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_112(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x39CC
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

int func_113(int iParam0)//Position - 0x3A06
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

int func_114(int iParam0, bool bParam1)//Position - 0x3A4C
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

int func_115(int iParam0)//Position - 0x3AE9
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

int func_116(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B29
{
	return func_111(0, iParam0, 1, bParam1, bParam2);
}

int func_117(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B3D
{
	return func_111(1, iParam0, 1, bParam1, bParam2);
}

void func_118()//Position - 0x3B51
{
	if (!unk_0xC80D31E4B587871C(iLocal_63, 10))
	{
		if (func_32(Local_60.f_2))
		{
			unk_0x6931076730A4AC5D(&uLocal_65);
			unk_0x87A3E70B0AB01608(0, unk_0xF32FBF2453AC1753(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0x87A3E70B0AB01608(0, unk_0xF32FBF2453AC1753(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x1B16DD5C115FE009(uLocal_65);
			unk_0x872F1C1F8587CCC7(&iLocal_63, 10);
		}
	}
}

int func_119()//Position - 0x3BD8
{
	return Local_60;
}

int func_120()//Position - 0x3BE2
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6FF834D85E2DD4C6(joaat("p_cargo_chute_s"));
	if ((unk_0x9A0B2ED5055D3F0B(iVar0) && unk_0x9A0B2ED5055D3F0B(joaat("p_cargo_chute_s"))) && func_121())
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x3C34
{
	unk_0x6450931B826B49D9("P_cargo_chute_S");
	if (unk_0x3A801AA34DD821BE("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x3C54
{
	return vLocal_62[iParam0 /*3*/];
}

int func_123()//Position - 0x3C62
{
	var uVar0;
	
	func_130(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_129())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_128())
	{
		return 1;
	}
	if (func_127(157))
	{
		if (!func_126())
		{
			return 1;
		}
	}
	if (func_127(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_124() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_124()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()//Position - 0x3CEC
{
	switch (func_125())
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

int func_125()//Position - 0x3D20
{
	return Global_25233;
}

bool func_126()//Position - 0x3D2B
{
	return Global_2447174.f_586;
}

int func_127(int iParam0)//Position - 0x3D3A
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128()//Position - 0x3D51
{
	return Global_2456830;
}

bool func_129()//Position - 0x3D5D
{
	return Global_2447174.f_581;
}

void func_130(var uParam0)//Position - 0x3D6C
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
					func_131(iVar0);
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

void func_131(int iParam0)//Position - 0x3DDF
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_34(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_132(iVar2, &bVar3))
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

int func_132(int iParam0, var uParam1)//Position - 0x3E60
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

void func_133()//Position - 0x3EBF
{
	system::wait(0);
}

void func_134()//Position - 0x3ECC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA6DECE14FC9A8C51(iLocal_64))
	{
		unk_0xE30CF11C0EE14316(&iLocal_64);
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x918CA1BFFAA03556(Local_60.f_19))
				{
					if (unk_0xEE6BA6C2ABB48CC3(unk_0xE8BC72FED1586931(Local_60.f_19)))
					{
						if (func_108(Local_60.f_19))
						{
							unk_0x86C66B2AA0BF4656(unk_0xE8BC72FED1586931(Local_60.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x918CA1BFFAA03556(Local_60.f_4))
				{
					if (unk_0xDFFD5F8C8ABCB7EF(unk_0xE8BC72FED1586931(Local_60.f_4)))
					{
						if (func_108(Local_60.f_4))
						{
							unk_0x6B7C10B19928914F(unk_0xE8BC72FED1586931(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x918CA1BFFAA03556(Local_60.f_5))
				{
					if (func_108(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				system::wait(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_138(func_139(1, 1), 8, func_88());
	}
	func_137();
	func_63();
	func_136();
	func_135();
}

void func_135()//Position - 0x4003
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_136()//Position - 0x400F
{
	if (unk_0xC80D31E4B587871C(iLocal_63, 10))
	{
		unk_0xFAA3EF7FF92E1F9E(&uLocal_65);
	}
}

void func_137()//Position - 0x4028
{
	if (iLocal_66 != 0)
	{
		if (unk_0xE0B0126B4689CB72(iLocal_66))
		{
			unk_0x990DE45B7A2B6426(iLocal_66, 0);
			iLocal_66 = 0;
		}
	}
}

void func_138(int iParam0, int iParam1, var uParam2)//Position - 0x404F
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

int func_139(int iParam0, bool bParam1)//Position - 0x4087
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_34(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_79(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_140(struct<21> Param0)//Position - 0x40EC
{
	int iVar0;
	
	func_144(func_145(Param0), Param0);
	unk_0xBC60D873F181A18E(1);
	unk_0x7BC094E5B24A760D(1);
	unk_0xB66EA47EE710E67F(2);
	func_142(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_60, 23);
	unk_0xE7BC983D1386C9EE(&vLocal_62, 97);
	if (!func_141())
	{
		return 0;
	}
	unk_0x941BE77305BB5695(0);
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_60.f_17 = unk_0x9EB17624F44A8DA4();
		Local_60.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, (5f * 1,5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = unk_0x63A6486593EC7EC3(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x63A6486593EC7EC3(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_67 = unk_0xB01117EF93F91860();
	if (unk_0x3A711520F83BAE98())
	{
		vLocal_62[unk_0x622FF3AE4B1D07C3() /*3*/] = 0;
	}
	return 1;
}

int func_141()//Position - 0x4222
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
		if (func_129())
		{
			return 0;
		}
		if (func_127(155))
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

int func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x427B
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_135();
			}
			else
			{
				return 0;
			}
		}
		if (!func_143())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_135();
					}
					else
					{
						return 0;
					}
				}
				if (func_129())
				{
					if (!bParam2)
					{
						func_135();
					}
					else
					{
						return 0;
					}
				}
				if (func_127(155))
				{
					if (!bParam2)
					{
						func_135();
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
					func_135();
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
				func_135();
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
			func_135();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()//Position - 0x4390
{
	return Global_1312831;
}

void func_144(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x439C
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_135();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_145(int iParam0)//Position - 0x43BB
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

