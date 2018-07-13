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
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
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
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	char* sLocal_134 = NULL;
	char* sLocal_135 = NULL;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	vector3 vLocal_161[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
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
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_183 = 0f;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	vector3 vLocal_185 = { 0f, 0f, 0f };
	float fLocal_186 = 0f;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	vector3 vLocal_188 = { 0f, 0f, 0f };
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
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
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_44 = -1f;
	vLocal_49 = { 226,6825f, 681,0297f, 188,4987f };
	vLocal_50 = { 231,8002f, 672,5261f, 188,9459f };
	fLocal_51 = 32,0905f;
	StringCopy(&Local_61, "", 24);
	vLocal_68 = { 259,4603f, 125,8718f, 100,9754f };
	fLocal_69 = 283,0367f;
	vLocal_71 = { 245,1998f, 76,8231f, 90,7069f };
	fLocal_72 = -18,4743f;
	cLocal_133 = "REPAPAU";
	sLocal_134 = "random@escape_paparazzi@standing@";
	sLocal_135 = "random@escape_paparazzi@incar@";
	iLocal_146 = 4000;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	vLocal_154 = { 272,6356f, 155,5618f, 103,3306f };
	vLocal_155 = { 247,5795f, 88,7094f, 92,9859f };
	vLocal_156 = { 259,0348f, 114,0369f, 98,9984f };
	vLocal_157 = { 255,4971f, 116,8744f, 99,8162f };
	vLocal_158 = { 266,8217f, 139,7698f, 103,2269f };
	vLocal_159 = { 270,0174f, 139,1181f, 103,2195f };
	vLocal_160 = { 265,4954f, 144,6143f, 103,3326f };
	sLocal_177 = "left_";
	vLocal_178 = { 261,9341f, 126,2429f, 95,15405f };
	vLocal_179 = { 270,6759f, 152,4763f, 109,2356f };
	fLocal_180 = 16f;
	vLocal_181 = { 261,9341f, 126,2429f, 107,6541f };
	vLocal_182 = { 248,354f, 87,01792f, 92,389f };
	fLocal_183 = 16f;
	vLocal_184 = { 256,6779f, 126,573f, 99,54784f };
	vLocal_185 = { 266,4471f, 123,412f, 105,6728f };
	fLocal_186 = 5,75f;
	vLocal_187 = { 260,242f, 127,423f, 101,65f };
	vLocal_188 = { 0f, 0f, -20f };
	vLocal_48 = { ScriptParam_204.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_274();
	}
	func_273(&uLocal_74, 3);
	if (!Global_3)
	{
		if (func_231(vLocal_48, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	iLocal_126 = unk_0xCB389937EDB1519A(Vector(93,3633f, 82,5239f, 276,3459f) + Vector(10f, 10f, 10f), Vector(93,3633f, 82,5239f, 276,3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_127 = unk_0xCB389937EDB1519A(Vector(188,5935f, 675,8706f, 227,8598f) + Vector(4f, 4f, 4f), Vector(188,5935f, 675,8706f, 227,8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_128 = unk_0xCB389937EDB1519A(Vector(93,8361f, 92,1704f, 246,1673f) + Vector(6f, 6f, 6f), Vector(93,8361f, 92,1704f, 246,1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x247EAA2E93D4A021(246,1673f, 92,1704f, 93,8361f, 6f, 1, 0, 0, false);
	}
	unk_0x4C15495E88D71C61(Vector(93,8361f, 92,1704f, 246,1673f) + Vector(6f, 6f, 6f), Vector(93,8361f, 92,1704f, 246,1673f) - Vector(6f, 6f, 6f), false, 1);
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		system::wait(0);
		func_225(&uLocal_74);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		unk_0x48D75120C879E65E("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_108[iVar0 /*18*/]) && !unk_0x191BE1BC8F26F3C1(Local_108[iVar0 /*18*/], 0))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0xB3328BA8976B416C(Local_108[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x191BE1BC8F26F3C1(Local_109[iVar0 /*18*/], 0))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0xB3328BA8976B416C(Local_109[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vLocal_52 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
		{
			vLocal_53 = { unk_0xB3328BA8976B416C(iLocal_67, 1) };
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_70) && !unk_0x191BE1BC8F26F3C1(iLocal_70, 0))
		{
			vLocal_54 = { unk_0xB3328BA8976B416C(iLocal_70, 1) };
		}
		if (!func_224())
		{
			if (unk_0x42F1FE4C7EC5F51E())
			{
				switch (iLocal_130)
				{
					case 0:
						if (func_214())
						{
							func_204();
							iLocal_130++;
						}
						else if (func_192())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_191() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || !unk_0xB8DE76287EDC4957(iLocal_70, 0))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_190();
								func_274();
							}
						}
						else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 281,0074f, 192,4805f, 58,08817f, 228,8291f, 50,88667f, 111,6104f, 82,75f, 0, true, 0))
						{
							func_181(1);
							iLocal_121 = func_180(iLocal_67, 0, 145);
							func_179("MAG_2_ESCAPE_PAP_GET_CAR");
							func_178(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			switch (iLocal_45)
			{
				case 0:
					func_175();
					break;
				
				case 1:
					func_172();
					break;
				
				case 2:
					func_150();
					break;
				
				case 3:
					func_138();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_132);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_67))
						{
							unk_0x68433819717660CF(&iLocal_67);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_53, 210f, 210f, 210f, false, true, 0))
			{
				func_190();
				func_274();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_68(iLocal_67, 1, 1) || func_67())
					{
						if (iLocal_45 > 0)
						{
							func_178(5);
						}
						else
						{
							func_190();
							func_178(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_63())
						{
							func_178(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_60 || func_19() != 0))
			{
				if ((!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 243,6443f, 123,7193f, 97,59898f, 262,4353f, 116,8746f, 107,4762f, 32,25f, 0, true, 0) && (unk_0x53C562FD2B9E3AB0() - iLocal_145) > 5000) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar1 /*18*/]))
				{
					if (system::vdist2(unk_0xB3328BA8976B416C(Local_109[iVar1 /*18*/], 1), vLocal_52) < (30,5f * 30,5f) && system::vdist2(vLocal_53, vLocal_52) > (22,5f * 22,5f))
					{
						if (func_224())
						{
							if (Local_139[4 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_18(&Local_139, 4);
								func_17(&Local_139, 4, Local_109[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_145 = unk_0x53C562FD2B9E3AB0();
									iLocal_193 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, unk_0x63A6486593EC7EC3(1, 13), 24);
							func_3(Local_109[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_145 = unk_0x53C562FD2B9E3AB0();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x85F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502());
		if (unk_0xB8DE76287EDC4957(iVar0, 0))
		{
			iVar1 = unk_0x317536BCEA8FA6B0(iVar0, 0, 0);
			if (!unk_0x3AB6A1A9084FB0A4(iVar1))
			{
				if (iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						if (!unk_0xABF985A1AF8C953F(iVar1, unk_0xFC1458A37D98B502()))
						{
							unk_0x60C06BFD037BB7CF(iVar1, unk_0xFC1458A37D98B502(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xDE523AF6F7B269AB(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_17)
			{
				if (unk_0xEBE499597C718EB8(Local_109[iVar0 /*18*/], unk_0xFC1458A37D98B502(), 1))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_17 - unk_0xDE523AF6F7B269AB(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_17 - unk_0xDE523AF6F7B269AB(Local_109[iVar0 /*18*/])));
					unk_0x2B0DDE3D071497AD(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_17 = unk_0xDE523AF6F7B269AB(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x988
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x9A1
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB93
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBE1
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()//Position - 0xEAD
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

void func_8()//Position - 0xEDD
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

int func_9()//Position - 0xF72
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xF99
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

void func_11()//Position - 0x1032
{
	if (func_12(14))
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
		Global_14453 = func_19();
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

bool func_12(int iParam0)//Position - 0x10D4
{
	return Global_35861 == iParam0;
}

void func_13()//Position - 0x10E2
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

bool func_14(int iParam0, int iParam1)//Position - 0x1138
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

void func_15()//Position - 0x1173
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11CA
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1220
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

void func_18(var uParam0, int iParam1)//Position - 0x12BB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()//Position - 0x12D8
{
	func_20();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_20()//Position - 0x12F1
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_23(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_22(unk_0xFC1458A37D98B502());
			if (func_21(iVar0) && (!func_12(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_21(Global_104555.f_2353.f_539.f_4301))
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

bool func_21(int iParam0)//Position - 0x13EE
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x13FA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x1437
{
	if (func_21(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()//Position - 0x1461
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/])) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
		{
			if (system::vdist2(vLocal_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = system::vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()//Position - 0x14E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_165 = 0;
			unk_0x6FF834D85E2DD4C6(joaat("a_m_y_genstreet_02"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_pap_camera_01"));
			unk_0x6FF834D85E2DD4C6(joaat("cavalcade2"));
			unk_0x6FF834D85E2DD4C6(joaat("vader"));
			unk_0x6450931B826B49D9(sLocal_134);
			unk_0x6450931B826B49D9("random@paparazzi@pap_anims");
			if (((((unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_genstreet_02")) && unk_0x9A0B2ED5055D3F0B(joaat("prop_pap_camera_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("cavalcade2"))) && unk_0x9A0B2ED5055D3F0B(joaat("vader"))) && unk_0x3A801AA34DD821BE(sLocal_134)) && unk_0x3A801AA34DD821BE("random@paparazzi@pap_anims"))
			{
				vLocal_161[0 /*3*/] = { 266,6049f, 157,7677f, 104,2417f };
				vLocal_161[1 /*3*/] = { 280,2455f, 152,1227f, 103,7096f };
				vLocal_161[2 /*3*/] = { 223,2588f, 50,6347f, 83,6598f };
				vLocal_161[3 /*3*/] = { 244,1302f, 37,4709f, 83,4804f };
				fLocal_162[0] = -111,1625f;
				fLocal_162[1] = 68,857f;
				fLocal_162[2] = -108,2056f;
				fLocal_162[3] = 50,8189f;
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_163 = 0;
				func_58(func_61(1), 274,9306f, 147,164f, 103,3794f, 2,2109f);
				func_58(func_59(1), 275,6894f, 148,1107f, 103,3723f, 117,9416f);
				func_58(func_59(2), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_58(func_59(3), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_57(0, vLocal_161[0 /*3*/], fLocal_162[0], 1);
				func_57(1, vLocal_161[1 /*3*/], fLocal_162[1], 0);
				unk_0xBD8D47FDC6902B2D(func_56(0, 1), 265,408f, 151,2875f, 103,5673f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(func_56(0, 1), 217,1033f);
				unk_0xBD8D47FDC6902B2D(func_56(2, 1), 245,9477f, 72,661f, 89,1067f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(func_56(2, 1), 38,6283f);
				unk_0xBD8D47FDC6902B2D(func_56(3, 1), 244,1872f, 73,3336f, 89,0917f, 1, false, 0, 1);
				unk_0x48ED7B2293A96722(func_56(3, 1), 272,9875f);
				unk_0x12C9D41D52A560D6(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265,408f, 151,2875f, 103,5673f, 217,1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274,9306f, 147,164f, 103,3794f, 2,2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277,1364f, 148,4023f, 103,3493f, 104,6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245,9477f, 72,661f, 89,1067f, 38,6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244,1872f, 73,3336f, 89,0917f, 272,9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x6ADD12BF4D6D2587(Local_109[2 /*18*/].f_2))
			{
				if (!unk_0xDE3C98B57A41E603(Local_109[2 /*18*/].f_2))
				{
					unk_0xB3A8974D2C811672(Local_109[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_165)
			{
				case 0:
					if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 0)))
					{
						unk_0xB8E08BD5B184DF4E(func_56(1, 0));
					}
					if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 1)))
					{
						unk_0xB8E08BD5B184DF4E(func_56(1, 1));
					}
					if (!unk_0x6ADD12BF4D6D2587(Local_108[2 /*18*/]))
					{
						func_57(2, vLocal_161[2 /*3*/], fLocal_162[2], 0);
						if (unk_0xB8DE76287EDC4957(Local_108[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0xB3328BA8976B416C(Local_108[2 /*18*/], 1), 0f);
							unk_0xBB0358802AA14401(func_56(2, 0), Local_108[2 /*18*/], -1);
						}
					}
					if (!unk_0x6ADD12BF4D6D2587(Local_108[3 /*18*/]))
					{
						func_57(3, vLocal_161[3 /*3*/], fLocal_162[3], 0);
					}
					if (!unk_0x3AB6A1A9084FB0A4(func_56(2, 1)))
					{
						unk_0x380C1E7B7740D618(func_56(2, 1), vLocal_156, 2f, -1, 0,25f, 0, 1193033728);
					}
					if (!unk_0x3AB6A1A9084FB0A4(func_56(3, 1)))
					{
						unk_0x380C1E7B7740D618(func_56(3, 1), vLocal_157, 2f, -1, 0,25f, 0, 1193033728);
					}
					if (!unk_0x6ADD12BF4D6D2587(func_56(3, 0)))
					{
						func_58(func_61(3), 253,8376f, 85,4544f, 92,8933f, 85,1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 0)))
						{
							unk_0x380C1E7B7740D618(func_56(1, 0), vLocal_158, 2f, 20000, 0,25f, 0, 1193033728);
						}
						if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 1)))
						{
							unk_0x380C1E7B7740D618(func_56(1, 1), vLocal_159, 2f, 20000, 0,25f, 0, 1193033728);
						}
						if (!unk_0x3AB6A1A9084FB0A4(func_56(0, 1)))
						{
							unk_0x380C1E7B7740D618(func_56(0, 1), vLocal_160, 2f, 20000, 0,25f, 0, 1193033728);
						}
					}
					system::settimerb(0);
					iVar1 = 0;
					while (iVar1 < Local_109)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_109[iVar1 /*18*/]))
						{
							unk_0x6CF99BCE94E6F07C(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_108)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_108[iVar1 /*18*/]))
						{
							unk_0x6CF99BCE94E6F07C(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xB8DE76287EDC4957(Local_108[0 /*18*/], 0) && !unk_0x3AB6A1A9084FB0A4(func_56(0, 0))) && !unk_0x3AB6A1A9084FB0A4(func_56(0, 1)))
					{
						if (!iLocal_152[1])
						{
							iLocal_152[1] = 1;
							unk_0x87A3E70B0AB01608(func_56(0, 0), Local_108[0 /*18*/], vLocal_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xB8DE76287EDC4957(Local_108[2 /*18*/], 0) && !unk_0x3AB6A1A9084FB0A4(func_56(2, 0))) && !unk_0x3AB6A1A9084FB0A4(func_56(2, 1)))
					{
						if (!iLocal_152[0])
						{
							unk_0x87A3E70B0AB01608(func_56(2, 0), Local_108[2 /*18*/], vLocal_155, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_152[0] = 1;
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_67) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
					{
						func_46(iLocal_67, 6);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 0)))
							{
								if (unk_0x0C88267282FD588F(func_56(1, 0), vLocal_158, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_61(1));
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(func_56(1, 1)))
							{
								if (unk_0x0C88267282FD588F(func_56(1, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(1));
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(func_56(0, 1)))
							{
								if (unk_0x0C88267282FD588F(func_56(0, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_67, func_61(1));
							func_46(iLocal_67, func_59(1));
							if (system::timerb() > 1000)
							{
								func_46(iLocal_67, func_61(1));
							}
						}
					}
					if (system::vdist2(unk_0xB3328BA8976B416C(iLocal_70, 1), vLocal_68) < 9f)
					{
						if (unk_0x0C88267282FD588F(func_56(2, 1), vLocal_156, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(2));
						}
						if (unk_0x0C88267282FD588F(func_56(3, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(3));
						}
						if (unk_0x0C88267282FD588F(func_56(0, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(0));
						}
					}
					else
					{
						if (!unk_0xC80D31E4B587871C(iLocal_168, 3))
						{
							unk_0xB8E08BD5B184DF4E(Local_109[func_59(3) /*18*/]);
							unk_0x872F1C1F8587CCC7(&iLocal_168, 3);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_168, 2))
						{
							unk_0xB8E08BD5B184DF4E(Local_109[func_59(2) /*18*/]);
							unk_0x872F1C1F8587CCC7(&iLocal_168, 2);
						}
						if (!unk_0xC80D31E4B587871C(iLocal_168, 0))
						{
							unk_0xB8E08BD5B184DF4E(Local_109[func_59(0) /*18*/]);
							unk_0x872F1C1F8587CCC7(&iLocal_168, 0);
						}
						if (Global_3 || bLocal_56)
						{
							func_45(iLocal_67, func_59(3));
						}
						else
						{
							func_46(iLocal_67, func_59(3));
						}
						func_46(iLocal_67, func_59(2));
						func_46(iLocal_67, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
			{
				if (unk_0x90D5DFB054818BA7(iLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0x46C19C2753391FBF());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_108[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_163 || !unk_0x6ADD12BF4D6D2587(Local_108[0 /*18*/])) || !unk_0x6ADD12BF4D6D2587(Local_108[1 /*18*/]))) && (unk_0x53C562FD2B9E3AB0() - iLocal_164) > 500)
					{
						if (system::vdist2(vLocal_52, vLocal_68) > 400f)
						{
							if (system::vdist2(vLocal_52, vLocal_68) < 62500f || (unk_0x53C562FD2B9E3AB0() - iLocal_131) < 30000)
							{
								func_40(Local_108[iVar0 /*18*/], iLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_15), &(Local_108[iVar0 /*18*/].f_11), &(Local_108[iVar0 /*18*/].f_14), &(Local_108[iVar0 /*18*/].f_16), Local_108[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
							{
								if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_108[iVar0 /*18*/], 0))
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar2 /*18*/]))
									{
										if (!unk_0xA8D0477084E86A92(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
										{
											if (unk_0x78F50AA8F955BEFC(Local_109[iVar2 /*18*/], -1794415470) != 1 && unk_0x8EE3A848975DDF21(Local_108[iVar0 /*18*/], -1, 0))
											{
												unk_0x6F8C8278B7C06889(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar3 /*18*/]))
										{
											if (!unk_0xA8D0477084E86A92(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
											{
												if (unk_0x78F50AA8F955BEFC(Local_109[iVar3 /*18*/], -1794415470) != 1 && unk_0x8EE3A848975DDF21(Local_108[iVar0 /*18*/], 0, 0))
												{
													unk_0x6F8C8278B7C06889(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar3 /*18*/])))
										{
											if ((unk_0xA8D0477084E86A92(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0xA8D0477084E86A92(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0xB8DE76287EDC4957(iLocal_70, 0))
											{
												if (unk_0x78F50AA8F955BEFC(Local_109[iVar2 /*18*/], -1273030092) != 1 && unk_0x78F50AA8F955BEFC(Local_109[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0xAE6EBBBBD8B9FB30(Local_109[iVar2 /*18*/], 3, false);
													unk_0xAE6EBBBBD8B9FB30(Local_109[iVar2 /*18*/], 1, true);
													unk_0xAE6EBBBBD8B9FB30(Local_109[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														unk_0x6F03491E8F9F397C(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x6F03491E8F9F397C(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x6F03491E8F9F397C(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x6F03491E8F9F397C(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x77142E6A702D63D1(Local_109[iVar2 /*18*/], func_39((3f * unk_0xBE3C4023003180FC(vLocal_54, Local_108[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && system::vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar2 /*18*/]))
								{
									if (!unk_0xA6FA9E5D08F067AD(Local_109[iVar2 /*18*/]))
									{
										unk_0xE17958D3FD0F9EE9(Local_109[iVar2 /*18*/], 2, false);
										unk_0xD68E88A8E0BE8697(Local_109[iVar2 /*18*/], unk_0xFC1458A37D98B502(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar3 /*18*/]))
									{
										if (!unk_0xA6FA9E5D08F067AD(Local_109[iVar3 /*18*/]))
										{
											unk_0xE17958D3FD0F9EE9(Local_109[iVar3 /*18*/], 2, false);
											unk_0xD68E88A8E0BE8697(Local_109[iVar3 /*18*/], unk_0xFC1458A37D98B502(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x88DDBE9908752BF0(Local_109[iVar2 /*18*/], 0))
							{
								unk_0x16416C5B54FDBCBB(Local_109[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_67, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar3 /*18*/]))
								{
									if (unk_0x88DDBE9908752BF0(Local_109[iVar3 /*18*/], 0))
									{
										unk_0x16416C5B54FDBCBB(Local_109[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_67, iVar3);
									}
								}
							}
							if (unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
							{
								if (system::vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x3AB6A1A9084FB0A4(Local_109[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x3AB6A1A9084FB0A4(Local_109[iVar3 /*18*/]))) && unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xEC211A86AB3726B6(Local_109[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xEC211A86AB3726B6(Local_109[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xEC211A86AB3726B6(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && system::vdist(vLocal_52, Local_108[iVar0 /*18*/].f_8) > 25f) && system::vdist(vLocal_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xA8D0477084E86A92(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								unk_0xBB0358802AA14401(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xA8D0477084E86A92(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									unk_0xBB0358802AA14401(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_167)
			{
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xA8D0477084E86A92(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								if (unk_0x78F50AA8F955BEFC(Local_109[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x6F8C8278B7C06889(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xA8D0477084E86A92(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									if (unk_0x78F50AA8F955BEFC(Local_109[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x6F8C8278B7C06889(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar6 /*18*/])))
							{
								if ((unk_0xA8D0477084E86A92(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0xA8D0477084E86A92(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0xB8DE76287EDC4957(iLocal_70, 0))
								{
									fVar7 = func_39((70f - (system::to_float((unk_0x53C562FD2B9E3AB0() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x53C562FD2B9E3AB0() - iLocal_66) > 4000)
									{
										unk_0x805A84321414E5A9(Local_109[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_108)
										{
											if ((unk_0xB8DE76287EDC4957(Local_108[iVar8 /*18*/], 0) && !unk_0x3AB6A1A9084FB0A4(func_56(iVar8, 0))) && unk_0xA8D0477084E86A92(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0))
											{
												unk_0xB8E08BD5B184DF4E(func_56(iVar8, 0));
												unk_0x6F03491E8F9F397C(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_167 = 1;
									}
									else if (unk_0x78F50AA8F955BEFC(Local_109[iVar5 /*18*/], -1273030092) != 1 && unk_0x78F50AA8F955BEFC(Local_109[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0xAE6EBBBBD8B9FB30(Local_109[iVar5 /*18*/], 3, false);
										unk_0xAE6EBBBBD8B9FB30(Local_109[iVar5 /*18*/], 1, true);
										unk_0xAE6EBBBBD8B9FB30(Local_109[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											unk_0x6F03491E8F9F397C(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x6F03491E8F9F397C(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x6F03491E8F9F397C(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x6F03491E8F9F397C(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xA6FA9E5D08F067AD(Local_109[iVar5 /*18*/]))
							{
								unk_0xE17958D3FD0F9EE9(Local_109[iVar5 /*18*/], 2, false);
								unk_0xD68E88A8E0BE8697(Local_109[iVar5 /*18*/], unk_0xFC1458A37D98B502(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xA6FA9E5D08F067AD(Local_109[iVar6 /*18*/]))
								{
									unk_0xE17958D3FD0F9EE9(Local_109[iVar6 /*18*/], 2, false);
									unk_0xD68E88A8E0BE8697(Local_109[iVar6 /*18*/], unk_0xFC1458A37D98B502(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_166, 10f))
				{
					func_37(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 3)
				{
					iLocal_166 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_166, 1125515264))
			{
				func_37(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 3)
			{
				iLocal_166 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!unk_0xAB019B170BF1309C(sLocal_134))
				{
					func_28(iVar0);
					if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/].f_2) && unk_0xDFFD5F8C8ABCB7EF(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0x88DDBE9908752BF0(Local_109[iVar0 /*18*/], 0))
						{
							if (unk_0xDE3C98B57A41E603(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0x7CE28D2DD2AF0F42(Local_109[iVar0 /*18*/]))
								{
									unk_0xB3A8974D2C811672(Local_109[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!unk_0x7CE28D2DD2AF0F42(Local_109[iVar0 /*18*/]))
							{
								unk_0xB3A8974D2C811672(Local_109[iVar0 /*18*/].f_2, true, 0);
							}
							if (!unk_0xEC211A86AB3726B6(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0xA5F6598E13F98E08(Local_109[iVar0 /*18*/], sLocal_134, func_27(iVar0), 3))
								{
									if (!Local_109[iVar0 /*18*/].f_11)
									{
										if (!unk_0xA5F6598E13F98E08(Local_109[iVar0 /*18*/], sLocal_134, "grip", 3))
										{
											unk_0x12C9D41D52A560D6(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_109[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_11)
								{
									unk_0x12C9D41D52A560D6(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0,99f, 0, 0, 0);
									Local_109[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x13A127961044F71B(sLocal_134);
								if (unk_0xA2B1B9FAFA5BDF26(sLocal_134))
								{
									unk_0x22B03603588D6D33(Local_109[iVar0 /*18*/], sLocal_134);
									Local_109[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_11)
							{
								unk_0x12C9D41D52A560D6(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0,99f, 0, 0, 0);
								Local_109[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x40120540AB543E84(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x1ED974E122CB5C47(Local_109[iVar0 /*18*/]) && func_26(Local_109[iVar0 /*18*/], unk_0xDFD115BB10FE46A9(Local_109[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0xDE3C98B57A41E603(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0xB3A8974D2C811672(Local_109[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!unk_0xDE3C98B57A41E603(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xB3A8974D2C811672(Local_109[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_11)
						{
							unk_0x12C9D41D52A560D6(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0,99f, 0, 0, 0);
							Local_109[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_109[iVar0 /*18*/].f_10)
						{
							unk_0x40120540AB543E84(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (unk_0x27C8A4034A05DC21(Local_109[iVar0 /*18*/]) && unk_0x66488CC6E6AE7348(unk_0xFC1458A37D98B502()))
				{
					func_178(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_108[iVar0 /*18*/]))
			{
				if (unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Local_108[iVar0 /*18*/], 0))
					{
						func_178(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)//Position - 0x2BCB
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
		{
			if (unk_0x317536BCEA8FA6B0(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x317536BCEA8FA6B0(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)//Position - 0x2C3D
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)//Position - 0x2CB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C(Local_109[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_136);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 3))
				{
					if (unk_0x7A70772AE40E3821(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0)) > 0,9f)
					{
						unk_0x0EE72DB1CD8A3B86(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)], 3))
				{
					if (unk_0x7A70772AE40E3821(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)]) > 0,9f)
					{
						unk_0x0EE72DB1CD8A3B86(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sLocal_134, "grip", 3))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_109[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()//Position - 0x2DB0
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		iVar0 = func_59(iLocal_149);
		if (((unk_0x6ADD12BF4D6D2587(Local_108[iLocal_149 /*18*/]) && unk_0xB8DE76287EDC4957(Local_108[iLocal_149 /*18*/], 0)) && unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/])) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xB0DA749C8A7CCBBF(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (system::vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < system::pow(30f, 2f) && unk_0x317536BCEA8FA6B0(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					if (!Local_109[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x53C562FD2B9E3AB0() - Local_109[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0xA5F6598E13F98E08(Local_109[iVar0 /*18*/], sLocal_135, "base", 3))
						{
							unk_0x12C9D41D52A560D6(Local_109[iVar0 /*18*/], sLocal_135, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_109[iVar0 /*18*/].f_9)
			{
				if (system::vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < system::pow(30f, 2f) && unk_0x317536BCEA8FA6B0(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					unk_0xC59ED750185FD281(Local_109[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_67, 1,57f, 0,25f);
					Local_109[iVar0 /*18*/].f_9 = 1;
					Local_109[iVar0 /*18*/].f_13 = unk_0x53C562FD2B9E3AB0();
				}
			}
			else if (Local_109[iVar0 /*18*/].f_9)
			{
				if ((unk_0x53C562FD2B9E3AB0() - Local_109[iVar0 /*18*/].f_13) > 2000)
				{
					Local_109[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108)
		{
			iLocal_149 = 0;
		}
	}
}

void func_30(int iParam0)//Position - 0x2F8E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(Local_109[iParam0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		iVar0 = 15;
		vVar1 = { vLocal_53 - Local_109[iParam0 /*18*/].f_6 };
		vVar2 = { unk_0xCE3B2111021F7234(Local_109[iParam0 /*18*/]) };
		fVar3 = func_34(vVar2, vVar1);
		if (unk_0xE97272C977DEADD3(fVar3) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x307E
{
	if (iParam1 < 15)
	{
		if (!unk_0xC80D31E4B587871C(Local_109[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_109[iParam0 /*18*/].f_15 = 0;
			unk_0x872F1C1F8587CCC7(&(Local_109[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)//Position - 0x3135
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)//Position - 0x3141
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_136));
}

float func_34(vector3 vParam0, vector3 vParam1)//Position - 0x315E
{
	float fVar0;
	
	vParam0 = { func_35(vParam0) };
	vParam1 = { func_35(vParam1) };
	fVar0 = (unk_0xF5596B3A7E5F3C68(vParam1.y, vParam1.x) - unk_0xF5596B3A7E5F3C68(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(vector3 vParam0)//Position - 0x31C4
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

bool func_36(int iParam0)//Position - 0x3203
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xAB019B170BF1309C(sLocal_135))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xC80D31E4B587871C(Local_109[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)//Position - 0x3248
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Local_108[iParam0 /*18*/]) && unk_0xEC211A86AB3726B6(Local_108[iParam0 /*18*/]))
	{
		unk_0xC91FE17AD7353B70(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0xA6DECE14FC9A8C51(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0xE30CF11C0EE14316(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar1 /*18*/]) && unk_0xEC211A86AB3726B6(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x6ADD12BF4D6D2587(Local_109[iVar1 /*18*/]))
			{
				unk_0x452336926718D62A(&(Local_109[iVar1 /*18*/].f_2));
			}
			if (unk_0xA6DECE14FC9A8C51(Local_109[iVar1 /*18*/].f_1))
			{
				unk_0xE30CF11C0EE14316(&(Local_109[iVar1 /*18*/].f_1));
			}
			unk_0x68433819717660CF(&(Local_109[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)//Position - 0x3316
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x6ADD12BF4D6D2587(Local_108[iParam0 /*18*/]))
	{
		if (unk_0xB8DE76287EDC4957(Local_108[iParam0 /*18*/], 0))
		{
			if (system::vdist2(vLocal_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xEC211A86AB3726B6(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(func_56(iParam0, 0)))
	{
		if (!unk_0x3AB6A1A9084FB0A4(func_56(iParam0, 0)))
		{
			if (system::vdist2(vLocal_52, Local_109[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xEC211A86AB3726B6(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(func_56(iParam0, 1)))
	{
		if (!unk_0x3AB6A1A9084FB0A4(func_56(iParam0, 1)))
		{
			if (system::vdist2(vLocal_52, Local_109[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xEC211A86AB3726B6(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)//Position - 0x340F
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)//Position - 0x3436
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (((((unk_0x6ADD12BF4D6D2587(iParam1) && iParam0 != iParam1) && !unk_0x428C7026AD2721BA(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x849A8CFD71854E02(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iParam1))) && !unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam1)))
		{
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam4, true) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_119, unk_0xB3328BA8976B416C(iParam1, 1), unk_0xDB824D597B53CC40(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x9EA50C5EC175E58E(*uParam2, *uParam3, vParam7) };
					*uParam4 = { unk_0xB3328BA8976B416C(iParam1, 1) };
					*uParam5 = unk_0xF0371FE6E2BF9599(iParam1);
				}
			}
			if (!unk_0xEC211A86AB3726B6(iParam0))
			{
				*uParam6 = unk_0x53C562FD2B9E3AB0();
			}
			else if ((unk_0x53C562FD2B9E3AB0() - *uParam6) > iParam8)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam9 && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam1, 1), *uParam2, true) > 20f) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x9E06F0EE20F58CED(*uParam2, 6f))
						{
							unk_0x60225D4F755DFDB1(*uParam2, 6f, 0);
							unk_0x9B8406983378711E(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							unk_0xBD8D47FDC6902B2D(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iParam0, *uParam3);
							unk_0xACE486395AA1867D(iParam0, 1084227584);
							unk_0xFB2E9855F95E3BD3(iParam0, func_39((unk_0x90D5DFB054818BA7(iParam1) + 10f), 10f, 60f));
							unk_0xA15269351F50F113(iParam0, true, true, 0);
							*uParam6 = unk_0x53C562FD2B9E3AB0();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x53C562FD2B9E3AB0();
		}
	}
}

int func_41(vector3 vParam0)//Position - 0x3606
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x3630
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

int func_43(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)//Position - 0x368E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0xE97272C977DEADD3((vVar4.z - vVar3.z));
		fVar8 = unk_0xE97272C977DEADD3((vVar4.x - vVar3.x));
		fVar9 = unk_0xE97272C977DEADD3((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0xE97272C977DEADD3(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0xE97272C977DEADD3(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0xBD8D47FDC6902B2D(iParam2, vParam3, 1, false, 0, 1);
		unk_0x59AF3B40AE222194(iParam2, vParam4, 2, 1);
		vVar1 = { unk_0x3F90543934DCD7E6(iParam2, Vector((fVar11 * 1,25f), ((fVar9 / 2f) - (fVar10 * 0,75f)), 0f) + vVar12) };
		vVar2 = { unk_0x3F90543934DCD7E6(iParam2, Vector((fVar11 * 1,25f), ((-fVar9 / 2f) + (fVar10 * 0,75f)), 0f) + vVar12) };
		iVar17 = unk_0xFF32E7A273D539FD(vVar2, vVar1, fVar10, 19, unk_0xFC1458A37D98B502(), 4);
		if (unk_0x16ACABF450EB00B4(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()//Position - 0x37C4
{
	bool bVar0;
	
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_148) > 100)
	{
		if ((unk_0x53C562FD2B9E3AB0() - Local_109[iLocal_147 /*18*/].f_12) > 500)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_109[iLocal_147 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = true;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0x88DDBE9908752BF0(Local_109[iLocal_147 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0xA5F6598E13F98E08(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147), 3) && unk_0x7A70772AE40E3821(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) > 0,5f) && unk_0x7A70772AE40E3821(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) < 0,75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0xAEB228D978E7ADD1("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0,019f, -0,01f, 0,046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_147 % 3) == 0)
						{
							unk_0x23A4CE7F9EBB02D4(-1, "SHUTTER_FLASH", unk_0xB3328BA8976B416C(Local_109[iLocal_147 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_147 % 3) == 1)
						{
							unk_0x23A4CE7F9EBB02D4(-1, "SHUTTER", unk_0xB3328BA8976B416C(Local_109[iLocal_147 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x23A4CE7F9EBB02D4(-1, "FLASH", unk_0xB3328BA8976B416C(Local_109[iLocal_147 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_109[iLocal_147 /*18*/].f_12 = unk_0x53C562FD2B9E3AB0();
					}
					iLocal_148 = unk_0x53C562FD2B9E3AB0();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109)
			{
				iLocal_147 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x3967
{
	if (!unk_0x3AB6A1A9084FB0A4(Local_109[iParam1 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0xCA3C40448996C9BA(Local_109[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0x78F50AA8F955BEFC(Local_109[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0xAC838A977FB6E6BC(Local_109[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x53C562FD2B9E3AB0() - Local_109[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0xA5F6598E13F98E08(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 3))
			{
				unk_0x12C9D41D52A560D6(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_109[iParam1 /*18*/].f_13 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)//Position - 0x3A17
{
	vector3 vVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(Local_109[iParam1 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		vVar0 = { unk_0x3F90543934DCD7E6(iParam0, func_48(iParam1)) };
		switch (Local_109[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_109[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x78F50AA8F955BEFC(Local_109[iParam1 /*18*/], 713668775) != 1 || system::vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 5f)
				{
					Local_109[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (system::vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_109[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (system::vdist2(vVar0, Local_109[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (unk_0x78F50AA8F955BEFC(Local_109[iParam1 /*18*/], 713668775) != 1)
				{
					Local_109[iParam1 /*18*/].f_16 = (Local_109[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(vector3 vParam0, int iParam1, int iParam2)//Position - 0x3B68
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_35(unk_0xB3328BA8976B416C(iParam2, 1) - vParam0) };
	fVar1 = unk_0xA67DD8488EBA5F6D(vVar0.x, vVar0.y);
	Local_109[iParam1 /*18*/].f_3 = { vParam0 };
	unk_0xB8E08BD5B184DF4E(Local_109[iParam1 /*18*/]);
	if (system::vdist(vParam0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x380C1E7B7740D618(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, -1, 0,5f, 512, fVar1);
	}
	else
	{
		unk_0x380C1E7B7740D618(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, -1, 0,5f, 512, fVar1);
	}
}

Vector3 func_48(int iParam0)//Position - 0x3C02
{
	switch (iParam0)
	{
		case 0:
			return -0,6578f, 3,328f, 0,2129f;
			break;
		
		case 1:
			return 0,5781f, 3,1584f, 0,2203f;
			break;
		
		case 2:
			return 1,6953f, 2,4036f, 0,1413f;
			break;
		
		case 3:
			return 2,2778f, 1,3153f, 0,1534f;
			break;
		
		case 4:
			return 2,0457f, 0,0073f, 0,2707f;
			break;
		
		case 5:
			return 2,097f, -1,2978f, 0,23f;
			break;
		
		case 6:
			return 2,0693f, -3,2216f, 0,3726f;
			break;
		
		case 7:
			return 1,0275f, -3,6726f, 0,155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()//Position - 0x3CEF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
			{
				unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0x88DDBE9908752BF0(Local_109[iVar0 /*18*/], 0))
			{
				unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]) && !unk_0x88DDBE9908752BF0(Local_109[iVar0 /*18*/], 0))
		{
			Local_109[iVar0 /*18*/].f_1 = func_180(Local_109[iVar0 /*18*/], 1, 145);
			unk_0x62BD54E491535B76(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0xB8DE76287EDC4957(Local_108[iVar0 /*18*/], 0))
		{
			if (unk_0xA6DECE14FC9A8C51(Local_108[iVar0 /*18*/].f_1))
			{
				vVar1 = { unk_0x67247AA13B7486A3(Local_108[iVar0 /*18*/].f_1) };
				vVar2 = { Local_108[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar2.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar2.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar2.z - vVar1.z) / 10f));
				unk_0x645FF8D8B599FD84(Local_108[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0xE30CF11C0EE14316(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_108[iVar0 /*18*/].f_1 = func_50(Local_108[iVar0 /*18*/].f_8, 0);
				unk_0x0C71C8E276E3EC54(Local_108[iVar0 /*18*/].f_1, 1);
				unk_0x62BD54E491535B76(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xF27F72CA15E148EE(Local_108[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0xE30CF11C0EE14316(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(vector3 vParam0, bool bParam1)//Position - 0x3ECC
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_51(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)//Position - 0x3EF8
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x3F0F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
	if (iParam4 || !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x6ADD12BF4D6D2587(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xFC1458A37D98B502())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar2))
					{
						if (unk_0x1417A5CC924DE120(iVar2))
						{
							if (unk_0xF5D0CBECCA41314A(unk_0xDF35170AEEFB473B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3FD7
{
	int iVar0;
	
	if (!unk_0x8EE3A848975DDF21(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, iParam1);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iVar0, 451360105) == 1 || unk_0x78F50AA8F955BEFC(iVar0, -828834893) == 1)
				{
					if (system::vdist(unk_0xB3328BA8976B416C(iParam0, 0), unk_0xB3328BA8976B416C(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_54(int iParam0, vector3 vParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x4075
{
	if (!unk_0x3AB6A1A9084FB0A4(Local_109[iParam0 /*18*/]))
	{
		if (system::vdist(unk_0xB3328BA8976B416C(Local_109[iParam0 /*18*/], 1), vParam1) > 1,5f)
		{
			if (unk_0x78F50AA8F955BEFC(Local_109[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x380C1E7B7740D618(Local_109[iParam0 /*18*/], vParam1, 2f, -1, 0,25f, 0, fParam2);
			}
		}
		else if (unk_0xE97272C977DEADD3((func_55(unk_0xF0371FE6E2BF9599(Local_109[iParam0 /*18*/])) - func_55(fParam2))) > 10f)
		{
			if (unk_0x78F50AA8F955BEFC(Local_109[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x2DAC3448B66448E8(Local_109[iParam0 /*18*/], fParam2, 0);
			}
		}
		else
		{
			switch (Local_109[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0xAB019B170BF1309C(sParam5))
					{
						if (!unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
						{
							unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
					{
						unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x7A70772AE40E3821(Local_109[iParam0 /*18*/], sParam3, sParam4) > 0,99f)
					{
						unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0xA5F6598E13F98E08(Local_109[iParam0 /*18*/], sParam3, sParam5, 3))
					{
						unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x7A70772AE40E3821(Local_109[iParam0 /*18*/], sParam3, sParam5) > 0,99f)
					{
						unk_0x12C9D41D52A560D6(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)//Position - 0x424F
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)//Position - 0x4283
{
	if (iParam1 == 0)
	{
		return Local_109[func_61(iParam0) /*18*/];
	}
	return Local_109[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x42AB
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/] = unk_0xEA60F3B426BB095B(joaat("vader"), vParam1, fParam2, true, true, false);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0xEA60F3B426BB095B(joaat("cavalcade2"), vParam1, fParam2, true, true, false);
		unk_0x207466E78DA21033(Local_108[iParam0 /*18*/], 0);
	}
	unk_0xACE486395AA1867D(Local_108[iParam0 /*18*/], 1084227584);
	unk_0x9980244E5DAEFED4(Local_108[iParam0 /*18*/], true);
	if (bParam3)
	{
		if (!unk_0x6ADD12BF4D6D2587(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), vParam1, fParam2);
		}
		if (!unk_0x6ADD12BF4D6D2587(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), vParam1, fParam2);
		}
		if (!unk_0x3AB6A1A9084FB0A4(func_56(iParam0, 0)) && unk_0xB8DE76287EDC4957(Local_108[iParam0 /*18*/], 0))
		{
			unk_0xBB0358802AA14401(func_56(iParam0, 0), Local_108[iParam0 /*18*/], -1);
		}
		if (!unk_0x3AB6A1A9084FB0A4(func_56(iParam0, 1)) && unk_0xB8DE76287EDC4957(Local_108[iParam0 /*18*/], 0))
		{
			unk_0xBB0358802AA14401(func_56(iParam0, 1), Local_108[iParam0 /*18*/], 0);
		}
		unk_0xA15269351F50F113(Local_108[iParam0 /*18*/], true, true, 0);
	}
}

void func_58(int iParam0, vector3 vParam1, float fParam2)//Position - 0x43C6
{
	Local_109[iParam0 /*18*/] = unk_0xAC992EFAD62C33BF(26, joaat("a_m_y_genstreet_02"), vParam1, fParam2, 1, true);
	unk_0xAE6EBBBBD8B9FB30(Local_109[iParam0 /*18*/], 1, false);
	unk_0x771A86309E0CA47B(Local_109[iParam0 /*18*/], true);
	unk_0xAE6EBBBBD8B9FB30(Local_109[iParam0 /*18*/], 0, true);
	unk_0xB4AF8E4D052DCD63(Local_109[iParam0 /*18*/], 3);
	unk_0x35829E9BFCED1A3F(Local_109[iParam0 /*18*/], true);
	unk_0xAE6EBBBBD8B9FB30(Local_109[iParam0 /*18*/], 17, true);
	unk_0xE17958D3FD0F9EE9(Local_109[iParam0 /*18*/], 2, false);
	unk_0xFBA991D3A851E195(Local_109[iParam0 /*18*/], false);
	unk_0xE9B3D12A64CC7C1A(Local_109[iParam0 /*18*/], true);
	unk_0xEA4C3AEAE49593B4(Local_109[iParam0 /*18*/], 100);
	unk_0x9A3DC24536A0767A(Local_109[iParam0 /*18*/], -957453492);
	unk_0xAE01EF4BC84AFE7C(Local_109[iParam0 /*18*/], 101, true);
	unk_0xAE01EF4BC84AFE7C(Local_109[iParam0 /*18*/], 185, false);
	unk_0xE01CE1EBCD7EE551(Local_109[iParam0 /*18*/], 300, 0);
	unk_0x03924C68EFCBC511(Local_109[iParam0 /*18*/], 3, (iParam0 % 2), system::floor((system::to_float(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_56)
	{
		unk_0x1A0806871323CD16(Local_109[iParam0 /*18*/], true);
		unk_0xE01CE1EBCD7EE551(Local_109[iParam0 /*18*/], 500, 0);
	}
	unk_0x3811A0FC01E02FC1(Local_109[iParam0 /*18*/], 1);
	unk_0xAE6EBBBBD8B9FB30(Local_109[iParam0 /*18*/], 2, true);
	unk_0x5C57ECBE59C08573(Local_109[iParam0 /*18*/], 2f);
	unk_0xFBA991D3A851E195(Local_109[iParam0 /*18*/], false);
	unk_0x35963CCE03600881(Local_109[iParam0 /*18*/], 0);
	Local_109[iParam0 /*18*/].f_2 = unk_0x5E35CF35E65D69B9(joaat("prop_pap_camera_01"), unk_0xD0E00576168D19BB(Local_109[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	unk_0xA9D382E7BA095148(Local_109[iParam0 /*18*/].f_2, Local_109[iParam0 /*18*/], unk_0xDD09837E5235FE91(Local_109[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x6ADD12BF4D6D2587(Local_109[0 /*18*/].f_2))
	{
		unk_0xB3A8974D2C811672(Local_109[0 /*18*/].f_2, false, 0);
	}
	Local_109[iParam0 /*18*/].f_17 = unk_0xDE523AF6F7B269AB(Local_109[iParam0 /*18*/]);
}

int func_59(int iParam0)//Position - 0x4589
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)//Position - 0x4597
{
	if ((iParam0 % 2) == 1)
	{
		Local_109[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)//Position - 0x45C4
{
	return iParam0 * 2;
}

void func_62(int iParam0)//Position - 0x45D0
{
	Local_108[iParam0 /*18*/].f_17 = 0;
}

int func_63()//Position - 0x45E1
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0x6ADD12BF4D6D2587(func_65()))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(func_65(), 1), vLocal_53) < 5f && unk_0x90D5DFB054818BA7(iLocal_70) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
		{
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0) && unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
			{
				fLocal_151 = (fLocal_151 + unk_0x46C19C2753391FBF());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0x46C19C2753391FBF());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_57)
		{
			if (!unk_0xAAA8D20859E2D36D(iLocal_67, iLocal_70))
			{
				if (unk_0x9F887157983E8EFC(iLocal_67))
				{
					bVar1 = true;
				}
				iLocal_57 = 0;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0xAAA8D20859E2D36D(iLocal_67, iLocal_70))
			{
				iLocal_57 = 1;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xB8DE76287EDC4957(iLocal_70, 0) && (!bLocal_129 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (system::vdist(vLocal_53, vLocal_52) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xB8DE76287EDC4957(iLocal_70, 0) && func_64(iLocal_70)) && (!bLocal_129 || iLocal_45 == 1)) && system::vdist(unk_0xB3328BA8976B416C(iLocal_67, 1), vLocal_50) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xB8DE76287EDC4957(iLocal_70, 0) && unk_0x0BA31FF7931F3DD3(iLocal_70))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x63A6486593EC7EC3(0, 2) == 1)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x479E
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (((unk_0xB6579D6FEB63269C(iParam0, 0, 7000) || unk_0xB6579D6FEB63269C(iParam0, 3, 30000)) || unk_0xB6579D6FEB63269C(iParam0, 2, 30000)) || unk_0xB6579D6FEB63269C(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_65()//Position - 0x4803
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/])) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
		{
			if (system::vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = system::vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0;
}

int func_66()//Position - 0x4891
{
	if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
		{
			if (unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()//Position - 0x48CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (func_68(Local_109[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]) || unk_0x191BE1BC8F26F3C1(Local_109[iVar0 /*18*/], 0))
			{
				if (iLocal_138[iVar0] > 50)
				{
					iLocal_110++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x4940
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
		if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 7))
		{
			unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		}
		if (!bParam2)
		{
			if (unk_0x5679106BC7ED79EE(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (system::vdist2(vVar0, vLocal_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && !unk_0x9C8F5918B4DF54D8(unk_0xFC1458A37D98B502())) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502())) && system::vdist2(vLocal_52, vVar0) < 9f)
			{
				return 1;
			}
			if (((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0)) && (func_69(vLocal_52, iParam0) && system::vdist2(vLocal_52, unk_0xB3328BA8976B416C(iParam0, 1)) < 100f)) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
			{
				return 1;
			}
			if (iLocal_137 > 150)
			{
				return 1;
			}
		}
		if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x6ADD12BF4D6D2587(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0, int iParam1)//Position - 0x4A99
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	vVar1 = { unk_0x3F90543934DCD7E6(iParam1, 0f, 1f, 0f) - vVar0 };
	vVar2 = { vParam0 - vVar0 };
	fVar3 = func_70(vVar1, vVar2);
	if (fVar3 > 0,5f)
	{
		return 1;
	}
	return 0;
}

float func_70(vector3 vParam0, vector3 vParam1)//Position - 0x4AE9
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_71()//Position - 0x4B0A
{
	if (iLocal_45 != 11)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_123))
		{
			unk_0xE30CF11C0EE14316(&iLocal_123);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_124))
		{
			unk_0xE30CF11C0EE14316(&iLocal_124);
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_121))
		{
			unk_0xE30CF11C0EE14316(&iLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_178(5);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_72(char* sParam0)//Position - 0x4BA3
{
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_197) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_197 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
}

int func_73()//Position - 0x4BDB
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_74()//Position - 0x4BFD
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && system::vdist2(vLocal_52, vLocal_53) < 400f)
	{
		if (!iLocal_111 && (unk_0x53C562FD2B9E3AB0() - iLocal_113) > 5000)
		{
			if (iLocal_63 > 10)
			{
				iLocal_111 = 1;
				iLocal_63 = 0;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0x53C562FD2B9E3AB0() - iLocal_117) > 4000)
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
			{
				if (iLocal_118 > 2)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_178(5);
					}
				}
				else
				{
					iLocal_116 = 1;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0x53C562FD2B9E3AB0() - iLocal_115) > 15000)
		{
			if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iLocal_114 = 1;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_113 = unk_0x53C562FD2B9E3AB0();
					iLocal_111 = 0;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_113 = unk_0x53C562FD2B9E3AB0();
				iLocal_111 = 0;
				iLocal_112 = 1;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_117 = unk_0x53C562FD2B9E3AB0();
				iLocal_116 = 0;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_115 = unk_0x53C562FD2B9E3AB0();
				iLocal_114 = 0;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_75()//Position - 0x4DAD
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		unk_0xE9B3D12A64CC7C1A(iLocal_67, true);
		unk_0xF96119FCCD4D1889(255, iLocal_55, 1862763509);
		if (!Global_3 && !bLocal_56)
		{
			unk_0xAE01EF4BC84AFE7C(iLocal_67, 317, true);
			unk_0x771A86309E0CA47B(iLocal_67, false);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0x2E1F5E4C486A0481(62);
	func_274();
}

void func_76()//Position - 0x4E07
{
	func_77();
}

int func_77()//Position - 0x4E14
{
	if (func_78(0))
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

bool func_78(bool bParam0)//Position - 0x4E5F
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_79(int iParam0, int iParam1)//Position - 0x4E8A
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_80(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)//Position - 0x4F8E
{
	Global_104541 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)//Position - 0x4F9C
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
		func_85((891 + iParam0), 1, -1, 1);
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
		func_82();
	}
}

void func_82()//Position - 0x5084
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
		func_84(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_83() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()//Position - 0x5545
{
	return Global_25233;
}

int func_84(int iParam0, int iParam1)//Position - 0x5550
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

int func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x55A1
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
		iParam2 = func_86();
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

int func_86()//Position - 0x5A6D
{
	return Global_1312736;
}

int func_87(int iParam0, int iParam1)//Position - 0x5A79
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

int func_88(int iParam0)//Position - 0x5DED
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

void func_89(int iParam0)//Position - 0x5E1C
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

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5E5E
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5E7E
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
		func_92();
	}
}

void func_92()//Position - 0x6050
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

int func_93()//Position - 0x6170
{
	func_20();
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

int func_94(int iParam0)//Position - 0x61B6
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

void func_95(int iParam0, int iParam1)//Position - 0x61F9
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)//Position - 0x6214
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

int func_97()//Position - 0x62C5
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_98(Var0);
	return uVar1;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x62E2
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

int func_99()//Position - 0x64BC
{
	if (Global_25469)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()//Position - 0x64D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_121))
	{
		unk_0xE30CF11C0EE14316(&iLocal_121);
	}
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				unk_0xD68E88A8E0BE8697(iLocal_67, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
				{
					if (unk_0xEC211A86AB3726B6(Local_109[iVar0 /*18*/]) && system::vdist2(unk_0xB3328BA8976B416C(Local_109[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 900f)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x452336926718D62A(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x68433819717660CF(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x6ADD12BF4D6D2587(Local_108[iVar0 /*18*/]))
				{
					if (unk_0xEC211A86AB3726B6(Local_108[iVar0 /*18*/]) && system::vdist2(unk_0xB3328BA8976B416C(Local_108[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 900f)
					{
						unk_0xC91FE17AD7353B70(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0xA6DECE14FC9A8C51(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0xE30CF11C0EE14316(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			system::settimera(0);
			iLocal_203 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if ((unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/])) && !unk_0x191BE1BC8F26F3C1(Local_109[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0xFC1458A37D98B502(), iVar0);
					if (unk_0xEC211A86AB3726B6(Local_109[iVar0 /*18*/]) && system::vdist2(unk_0xB3328BA8976B416C(Local_109[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 2500f)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x452336926718D62A(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x68433819717660CF(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(func_65(), 1)) < 100f)
				{
					iVar2 = unk_0x63A6486593EC7EC3(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 7);
						func_18(&Local_139, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[6 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[6 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[7 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[7 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[8 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[8 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x63A6486593EC7EC3(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x63A6486593EC7EC3(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x6ADD12BF4D6D2587(Local_139[iVar2 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_190();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)//Position - 0x6A8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_202)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
			{
				unk_0xB8E08BD5B184DF4E(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_202 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xA6DECE14FC9A8C51(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0xE30CF11C0EE14316(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
				{
					if (unk_0x88DDBE9908752BF0(Local_109[iVar0 /*18*/], 0))
					{
						unk_0x16416C5B54FDBCBB(Local_109[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_67, iVar0);
					}
				}
				else if (unk_0x78F50AA8F955BEFC(Local_109[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x93F12E7D8D931858(Local_109[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xEC211A86AB3726B6(Local_109[iVar0 /*18*/]) && system::vdist2(unk_0xB3328BA8976B416C(Local_109[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 400f) && system::vdist2(unk_0xB3328BA8976B416C(Local_109[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 400f)
			{
				unk_0x68433819717660CF(&(Local_109[iVar0 /*18*/]));
				if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0x452336926718D62A(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0xEC211A86AB3726B6(Local_108[iVar0 /*18*/]) && system::vdist2(unk_0xB3328BA8976B416C(Local_108[iVar0 /*18*/], 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > 2500f) && func_52(Local_108[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0x5380482A432E314E(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0xA6DECE14FC9A8C51(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0xE30CF11C0EE14316(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_67))
	{
		if (unk_0xEC211A86AB3726B6(iLocal_67) && system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_53) > 2500f)
		{
			unk_0x486F346ADFE56674(&iLocal_67);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_67, 1, 1))
	{
		func_178(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0:
			if (unk_0xA6DECE14FC9A8C51(iLocal_121))
			{
				unk_0xE30CF11C0EE14316(&iLocal_121);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_122))
			{
				unk_0xE30CF11C0EE14316(&iLocal_122);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_67);
				unk_0x5C57ECBE59C08573(iLocal_67, 3f);
			}
			func_102();
			if (system::vdist(vLocal_52, vLocal_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_109)
					{
						if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
							{
								unk_0xB8E08BD5B184DF4E(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_109)
				{
					if (unk_0x6ADD12BF4D6D2587(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
						{
							unk_0xB8E08BD5B184DF4E(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 1:
			if (((unk_0xB8DE76287EDC4957(iLocal_70, 0) && unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0)) && !bLocal_129) && unk_0x8EE3A848975DDF21(iLocal_70, -1, 0))
			{
				if (system::vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x6931076730A4AC5D(&iVar2);
					unk_0x09DC36247844A9E1(0, iLocal_70, 0);
					unk_0x87A3E70B0AB01608(0, iLocal_70, vLocal_49, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x9E8EE202E802AC5B(0, iLocal_70, vLocal_49, 288,7089f, 1, 50f, 0);
					unk_0x2931C350CED41AD3(0, iLocal_70, unk_0xB3328BA8976B416C(iLocal_70, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x4F8A35D7CBC17327(0, iLocal_70, 0);
					unk_0x380C1E7B7740D618(0, vLocal_50, 1f, -1, 0,25f, 512, fLocal_51);
					unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x1B16DD5C115FE009(iVar2);
					unk_0xAB30B1CF01A198C1(iLocal_67, iVar2);
					unk_0xFAA3EF7FF92E1F9E(&iVar2);
				}
				else
				{
					unk_0x6931076730A4AC5D(&iVar3);
					unk_0x09DC36247844A9E1(0, iLocal_70, 0);
					unk_0x96247F0EC873C446(0, iLocal_70, 15f, 786468);
					unk_0x1B16DD5C115FE009(iVar3);
					unk_0xAB30B1CF01A198C1(iLocal_67, iVar3);
					unk_0xFAA3EF7FF92E1F9E(&iVar3);
				}
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0x88DDBE9908752BF0(iLocal_67, 0))
				{
					unk_0x16416C5B54FDBCBB(iLocal_67, 0, 0);
				}
				iLocal_130++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xD68E88A8E0BE8697(iLocal_67, unk_0xFC1458A37D98B502(), 3000f, -1, 1, 0);
				iLocal_130 = 1000;
			}
			else
			{
				if (system::vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x6931076730A4AC5D(&iVar4);
					unk_0x380C1E7B7740D618(0, vLocal_50, 1f, -1, 0,25f, 512, fLocal_51);
					unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x1B16DD5C115FE009(iVar4);
					unk_0xAB30B1CF01A198C1(iLocal_67, iVar4);
					unk_0xFAA3EF7FF92E1F9E(&iVar4);
				}
				else
				{
					unk_0x93F12E7D8D931858(iLocal_67, 1193033728, 0);
				}
				iLocal_130 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()//Position - 0x6FF8
{
	Global_14622 = 0;
	func_103();
}

void func_103()//Position - 0x7008
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_104()//Position - 0x7029
{
	func_102();
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && system::vdist2(vLocal_52, vLocal_53) < 900f)
	{
		unk_0xB8E08BD5B184DF4E(iLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_190();
			func_178(10);
		}
		unk_0xCE93FCB8A8D8DF0B(iLocal_67, -2065892691);
	}
	else
	{
		func_190();
		func_178(10);
	}
}

void func_105()//Position - 0x7093
{
	int iVar0;
	
	switch (iLocal_130)
	{
		case 0:
			func_137();
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_124))
				{
					unk_0xE30CF11C0EE14316(&iLocal_124);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_123))
				{
					unk_0xE30CF11C0EE14316(&iLocal_123);
				}
				unk_0xB8E08BD5B184DF4E(iLocal_67);
				unk_0x6931076730A4AC5D(&iVar0);
				unk_0x4F8A35D7CBC17327(0, iLocal_70, 0);
				unk_0x380C1E7B7740D618(0, vLocal_50, 1f, 30000, 0,25f, 512, fLocal_51);
				unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x1B16DD5C115FE009(iVar0);
				unk_0xAB30B1CF01A198C1(iLocal_67, iVar0);
				unk_0xFAA3EF7FF92E1F9E(&iVar0);
				if (unk_0xC816B63289F7A279(iLocal_67))
				{
					unk_0x88235B448509228B(iLocal_67);
				}
				func_102();
				iLocal_130++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				if (unk_0x0C88267282FD588F(iLocal_67, vLocal_50, 3f, 3f, 3f, false, true, 0) && unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_50, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				func_136(0);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				system::settimera(0);
				iLocal_130++;
			}
			break;
		
		case 4:
			if (system::timera() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()//Position - 0x7231
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x723A
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
	func_108(Global_104555.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7321
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_135();
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
					func_134(99, 1);
					func_133(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_119(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_115(5))
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
							func_133(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_115(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_133(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_property"), iParam3);
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
									func_133(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_115(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_114(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_134(95, iParam3);
					break;
				
				case 1:
					func_134(97, iParam3);
					break;
				
				case 2:
					func_134(96, iParam3);
					break;
			}
			func_134(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
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
					func_133(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_total_cash_earned"), iParam3);
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
	func_110(iParam0);
	if (Global_35861 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)//Position - 0x7920
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

void func_110(int iParam0)//Position - 0x7BA2
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

void func_111(int iParam0)//Position - 0x7BFC
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_113() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_113() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_112(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)//Position - 0x7CD1
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

int func_113()//Position - 0x7D57
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0)//Position - 0x7D64
{
	func_134(93, iParam0);
	func_134(29, iParam0);
	func_134(30, iParam0);
}

bool func_115(int iParam0)//Position - 0x7D84
{
	if (iParam0 == 8)
	{
		return func_116(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_113() /*12130*/].f_7676.f_10, iParam0);
}

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x7DD2
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_117(int iParam0)//Position - 0x7E0F
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

int func_118(int iParam0, int iParam1)//Position - 0x80D2
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
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

int func_119(bool bParam0)//Position - 0x8374
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
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_120(27, 1);
	return 1;
}

int func_120(int iParam0, int iParam1)//Position - 0x842B
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_121(iParam0, iParam1);
}

int func_121(int iParam0, int iParam1)//Position - 0x8446
{
	if (func_12(14) && !func_132(iParam0))
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
	if (func_131(&Global_4267379))
	{
		if (func_129(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_122(&Global_4267379, iParam0))
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

int func_122(var uParam0, int iParam1)//Position - 0x84E3
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	func_125(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_123(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_123(var uParam0, int iParam1)//Position - 0x8594
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_124(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)//Position - 0x860F
{
	return (*uParam0)[iParam1] == 78;
}

void func_125(var uParam0)//Position - 0x8620
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_126(uParam0, iVar0);
		iVar0++;
	}
	func_127(uParam0, (Global_4267378 - 0,5f));
}

void func_126(var uParam0, int iParam1)//Position - 0x8654
{
	(*uParam0)[iParam1] = 78;
}

void func_127(var uParam0, float fParam1)//Position - 0x8664
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

float func_128(var uParam0)//Position - 0x8681
{
	return uParam0->f_80;
}

bool func_129(var uParam0, int iParam1)//Position - 0x868D
{
	return func_130(uParam0, iParam1) != -1;
}

int func_130(var uParam0, int iParam1)//Position - 0x869F
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

bool func_131(var uParam0)//Position - 0x86CC
{
	return uParam0->f_79 == 1;
}

int func_132(int iParam0)//Position - 0x86DA
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

void func_133(int iParam0, int iParam1)//Position - 0x872A
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

void func_134(int iParam0, int iParam1)//Position - 0x874D
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

void func_135()//Position - 0x87AA
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

void func_136(bool bParam0)//Position - 0x881F
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		if (iLocal_170 > 1)
		{
			if (!unk_0xCA3C40448996C9BA(iLocal_67, unk_0xFC1458A37D98B502(), 60f))
			{
				iLocal_170 = 0;
				iLocal_171 = 0;
			}
		}
		switch (iLocal_170)
		{
			case 0:
				unk_0xB8E08BD5B184DF4E(iLocal_67);
				unk_0x60C06BFD037BB7CF(iLocal_67, unk_0xFC1458A37D98B502(), -1, 16, 2);
				unk_0x6931076730A4AC5D(&iLocal_169);
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 16, 2);
				unk_0x1B16DD5C115FE009(iLocal_169);
				unk_0xAB30B1CF01A198C1(iLocal_67, iLocal_169);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_169);
				iLocal_170++;
				break;
			
			case 1:
				if (unk_0x78F50AA8F955BEFC(iLocal_67, 242628503) != 1)
				{
					iLocal_170++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0:
							if (!unk_0xA5F6598E13F98E08(iLocal_67, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x7A70772AE40E3821(iLocal_67, "random@paparazzi@wait", "wait_a") > 0,95f)
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 1:
							if (!unk_0xA5F6598E13F98E08(iLocal_67, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x7A70772AE40E3821(iLocal_67, "random@paparazzi@wait", "wait_b") > 0,95f)
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 2:
							if (!unk_0xA5F6598E13F98E08(iLocal_67, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x7A70772AE40E3821(iLocal_67, "random@paparazzi@wait", "wait_c") > 0,95f)
							{
								unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_137()//Position - 0x8A3D
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_125))
	{
		unk_0xE30CF11C0EE14316(&iLocal_125);
	}
}

void func_138()//Position - 0x8A56
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
	{
		switch (iLocal_130)
		{
			case 0:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					func_137();
					func_142(1, 1, 0, 0);
					if (unk_0xA6DECE14FC9A8C51(iLocal_123))
					{
						unk_0xE30CF11C0EE14316(&iLocal_123);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_121))
					{
						unk_0xE30CF11C0EE14316(&iLocal_121);
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_122))
					{
						unk_0xE30CF11C0EE14316(&iLocal_122);
					}
					if (unk_0xC816B63289F7A279(iLocal_67))
					{
						unk_0x88235B448509228B(iLocal_67);
					}
					func_140();
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
					{
						unk_0xBA54D3D84EF38E3D(iLocal_67, unk_0x3F90543934DCD7E6(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 1280);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_139(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							system::wait(0);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
						{
							system::wait(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
					{
						unk_0xBA54D3D84EF38E3D(iLocal_67, unk_0x3F90543934DCD7E6(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
						unk_0x9A0C1F836B24E46E(iLocal_67, 0, 0);
					}
					unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_130++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
				{
					unk_0x6931076730A4AC5D(&iVar0);
					unk_0x4F8A35D7CBC17327(0, iLocal_70, 0);
					unk_0x380C1E7B7740D618(0, vLocal_50, 1f, 30000, 0,25f, 512, fLocal_51);
					unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x1B16DD5C115FE009(iVar0);
					unk_0xAB30B1CF01A198C1(iLocal_67, iVar0);
					unk_0xFAA3EF7FF92E1F9E(&iVar0);
					iLocal_130++;
					system::settimera(0);
				}
				break;
			
			case 2:
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (!unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
					{
						system::settimera(0);
						if (bLocal_129)
						{
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							func_142(0, 1, 0, 0);
							iLocal_130 = 5;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0xB8DE76287EDC4957(iLocal_70, 0)) && system::timera() > 1000)
				{
					unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), iLocal_70, 0);
					unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_70, 10000, 0, 3);
					iLocal_130++;
				}
				break;
			
			case 4:
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0) && !unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
				{
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					func_142(0, 1, 0, 0);
					unk_0x4BEFCD5DAE410A90(iLocal_70, 2);
					system::settimera(0);
					iLocal_130++;
				}
				break;
			
			case 5:
				if (system::timera() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_129)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8D81
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

void func_140()//Position - 0x8DD5
{
	Global_14622 = 0;
	func_141();
}

void func_141()//Position - 0x8DE5
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

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8E09
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_149(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_9())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_149(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_146(unk_0x9EB17624F44A8DA4())) && !func_144(unk_0x9EB17624F44A8DA4(), 0)) && !func_143())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_146(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_143()//Position - 0x8F22
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_144(int iParam0, int iParam1)//Position - 0x8F3F
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_145(-1, 0) == 8;
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

int func_145(int iParam0, bool bParam1)//Position - 0x8F8A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_146(int iParam0)//Position - 0x8FCB
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
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

bool func_147()//Position - 0x900D
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_148(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x901E
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

void func_149(int iParam0)//Position - 0x9051
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

void func_150()//Position - 0x9074
{
	if (Global_3 || bLocal_56)
	{
		unk_0xAD6F3DFB1F960182(0,7f);
	}
	if (bLocal_129 && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		if (!func_171(iLocal_67))
		{
			if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
			{
				iLocal_121 = func_180(iLocal_67, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_124))
				{
					unk_0xE30CF11C0EE14316(&iLocal_124);
				}
			}
			else
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_124))
				{
					iLocal_124 = func_50(vLocal_50, 1);
				}
				if (unk_0xA6DECE14FC9A8C51(iLocal_123))
				{
					unk_0xE30CF11C0EE14316(&iLocal_123);
				}
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_121))
			{
				unk_0xE30CF11C0EE14316(&iLocal_121);
			}
		}
		if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
		{
			if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && func_170(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
			{
				iLocal_70 = 0;
				iLocal_70 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				unk_0xDD29FF4BAB8AFF9C(iLocal_70, true, 1);
				unk_0x4BEFCD5DAE410A90(iLocal_70, 1);
				unk_0x4C44781F822B0B00(iLocal_70, false, 0);
			}
		}
		if (unk_0xA6DECE14FC9A8C51(iLocal_124) && !unk_0x88DDBE9908752BF0(iLocal_67, 0))
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vLocal_50, 15f, 15f, 15f, false, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 231,7982f, 672,7683f, 189,2f, 1f, 1f, 2,5f, true, true, 0))
			{
				func_178(4);
			}
		}
		else if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x0F3033474C49912D(iLocal_70, 225,5938f, 681,1489f, 188,4262f, 232,02f, 681,3113f, 191,9843f, 8,75f, 0, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 226,6788f, 681,0637f, 189f, 1f, 1f, 2,5f, true, true, 0))
				{
					system::settimera(0);
					iLocal_130 = 100;
				}
			}
			else if (!unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_67, -1794415470) != 1)
				{
					unk_0x6F8C8278B7C06889(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x0F3033474C49912D(iLocal_70, 225,5938f, 681,1489f, 188,4262f, 232,02f, 681,3113f, 191,9843f, 8,75f, 0, true, 0) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 226,6788f, 681,0637f, 189f, 1f, 1f, 2,5f, true, true, 0))
				{
					system::settimera(0);
					iLocal_130 = 100;
				}
			}
		}
		func_165(1);
	}
	switch (iLocal_130)
	{
		case 0:
			if (func_66())
			{
				if (unk_0xA5F6598E13F98E08(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xA5F6598E13F98E08(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x94BD6F0436473406(0,5f);
					iLocal_130++;
				}
				if (!func_164())
				{
					func_159();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						system::settimera(0);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 99;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (system::timera() > 7000)
			{
				if (func_155("REPAP_HOME1", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_155("REPAP_HOME1M", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_155("REPAP_HOME1F", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_155("REPAP_HOME1T", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 5:
			if (func_155("REPAP_HOME1L", (func_158() && !func_74())))
			{
				system::settimera(0);
				iLocal_130++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (system::timera() > 7000)
				{
					if (func_158())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 8:
			if (func_155("REPAP_HOME2L", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_RESP2"))
					{
						system::settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 10:
			if (system::timera() > 7000)
			{
				if (func_155("REPAP_HOME3", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME3"))
					{
						system::settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 12:
			if (system::timera() > 7000)
			{
				if (func_155("REPAP_HOME4", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME4"))
					{
						system::settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 14:
			if (system::timera() > 7000)
			{
				if (func_155("REPAP_NOBAN", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_152(iLocal_70, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_179("");
				func_178(3);
			}
			break;
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_151() && !func_164()) && iLocal_45 != 8)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
			{
				if (unk_0x0C88267282FD588F(iLocal_67, -1034,6f, 4918,6f, 205,9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!unk_0x4759A34EB65CCA39(iLocal_67, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
					{
						unk_0x57FB41CABA25835C(iLocal_67, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
					}
					func_102();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_151()//Position - 0x9880
{
	return Global_25468;
}

int func_152(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x988B
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
	func_153(iParam0);
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

void func_153(int iParam0)//Position - 0x9A1A
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

int func_154(char* sParam0)//Position - 0x9A46
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_155(char* sParam0, bool bParam1)//Position - 0x9A9A
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_58 = 1;
				iLocal_59 = 0;
			}
		}
		else if (iLocal_59)
		{
			if (func_157(&Local_139, cLocal_133, sParam0, &Local_61, 4, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == -1)
			{
				if (!func_73())
				{
					iLocal_62 = unk_0x53C562FD2B9E3AB0();
				}
			}
			else if ((unk_0x53C562FD2B9E3AB0() - iLocal_62) > 500)
			{
				iLocal_62 = -1;
				iLocal_58 = 0;
				iLocal_59 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_156() };
		func_140();
		iLocal_59 = 1;
	}
	return 0;
}

struct<6> func_156()//Position - 0x9B4A
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar1 = unk_0xA2F80D03C2F3570D();
		iVar1 = (iVar1 + Global_16766);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xA1800C71952C596F(&(Global_14624[iVar2 /*6*/])))
			{
				return Global_14624[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xA1800C71952C596F(&(Global_14624[iVar3 /*6*/])))
					{
						return Global_14624[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14624[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9BF6
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_158()//Position - 0x9C4A
{
	if (bLocal_129)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x88DDBE9908752BF0(iLocal_67, 0))
		{
			if (system::vdist2(vLocal_52, vLocal_53) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_159()//Position - 0x9CAB
{
	if (func_19() == 2)
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_125))
		{
			func_162();
			iLocal_125 = func_161(-1034,6f, 4918,6f, 205,9f, 0);
			unk_0x4B4040A0EC7DBA81(iLocal_125, 269);
			func_160();
		}
	}
}

void func_160()//Position - 0x9CEF
{
	if (!func_164())
	{
		if (func_19() == 2)
		{
			Global_25468 = 1;
		}
	}
}

int func_161(vector3 vParam0, bool bParam1)//Position - 0x9D0B
{
	return func_50(vParam0, bParam1);
}

void func_162()//Position - 0x9D1D
{
	if (func_19() == 2)
	{
		if (!Global_25470)
		{
			func_163("CULT_BLIP_HELP", -1);
			Global_25470 = 1;
		}
	}
}

void func_163(char* sParam0, int iParam1)//Position - 0x9D41
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_164()//Position - 0x9D58
{
	if (Global_104555.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0)//Position - 0x9D74
{
	if (unk_0xB8DE76287EDC4957(iLocal_70, 0) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_121))
			{
				unk_0xE30CF11C0EE14316(&iLocal_121);
			}
			if (unk_0xA6DECE14FC9A8C51(iLocal_122))
			{
				unk_0xE30CF11C0EE14316(&iLocal_122);
			}
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_123))
			{
				unk_0xE30CF11C0EE14316(&iLocal_123);
			}
			if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_122))
				{
					iLocal_122 = func_166(iLocal_70, 0, 0);
				}
			}
			if (!unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
			{
				if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
			}
			else if (unk_0xA6DECE14FC9A8C51(iLocal_121))
			{
				unk_0xE30CF11C0EE14316(&iLocal_121);
			}
		}
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)//Position - 0x9E48
{
	return func_167(iParam0, !bParam1, bParam2);
}

int func_167(int iParam0, bool bParam1, bool bParam2)//Position - 0x9E5B
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_51(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_51(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_51(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

int func_168(int iParam0)//Position - 0x9EFF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x95EC8AE7E4F33F6E(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x8EE3A848975DDF21(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9F49
{
	int iVar0;
	
	if (unk_0x586321DCB7FEB6F8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		if (bParam0)
		{
			if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) != unk_0xFC1458A37D98B502())
				{
					return 0;
				}
			}
		}
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0x56BEE1F269FB3626(iVar0) < 0,95f || unk_0x56BEE1F269FB3626(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!unk_0x217D75C7503660EC(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)//Position - 0xA02E
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x8EE3A848975DDF21(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x8EE3A848975DDF21(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0xA07E
{
	if (unk_0x4759A34EB65CCA39(iParam0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4())))
	{
		if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x88235B448509228B(iParam0);
		}
		return 1;
	}
	else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x57FB41CABA25835C(iParam0, unk_0x7C65CFD05F3B9CE9(unk_0x9EB17624F44A8DA4()));
	}
	return 0;
}

void func_172()//Position - 0xA0E8
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0xB8DE76287EDC4957(iLocal_70, 0))
	{
		if (!unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 1))
		{
			if (unk_0x78F50AA8F955BEFC(iLocal_67, -1794415470) != 1)
			{
				unk_0x6F8C8278B7C06889(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
			}
		}
		if ((unk_0x6ADD12BF4D6D2587(func_65()) && system::vdist2(unk_0xB3328BA8976B416C(iLocal_67, 1), unk_0xB3328BA8976B416C(func_65(), 1)) < 100f) && (unk_0x90D5DFB054818BA7(iLocal_70) < 5f || !unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0xA5F6598E13F98E08(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xAAA8D20859E2D36D(iLocal_67, iLocal_70))
				{
					unk_0x12C9D41D52A560D6(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0xA5F6598E13F98E08(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xAAA8D20859E2D36D(iLocal_67, iLocal_70))
			{
				unk_0x12C9D41D52A560D6(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0xA5F6598E13F98E08(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xA5F6598E13F98E08(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xAAA8D20859E2D36D(iLocal_67, iLocal_70))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_67);
		}
		switch (iLocal_130)
		{
			case 0:
				if (system::timera() > 2000)
				{
					if (unk_0x6ADD12BF4D6D2587(func_65()) && !unk_0x3AB6A1A9084FB0A4(func_65()))
					{
						func_18(&Local_139, 4);
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_102();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x94BD6F0436473406(0,2f);
						unk_0x771A86309E0CA47B(iLocal_67, true);
						unk_0xF96119FCCD4D1889(1, iLocal_55, 1862763509);
						iLocal_119 = unk_0x5E35CF35E65D69B9(joaat("prop_ld_test_01"), vLocal_68, true, true, false);
						unk_0xB18E1DBC397238E1(iLocal_119, false, 0);
						unk_0xB3A8974D2C811672(iLocal_119, false, 0);
						unk_0xEDC33A771FAEB393(iLocal_119, true);
						iLocal_130++;
					}
				}
				break;
			
			case 1:
				func_174();
				if (!unk_0x0F3033474C49912D(iLocal_67, 243,5571f, 77,51265f, 90,08002f, 268,2083f, 144,2189f, 109,853f, 23,25f, 0, true, 0))
				{
					iLocal_130++;
					iLocal_131 = unk_0x53C562FD2B9E3AB0();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 1 && iLocal_200 != 3) && iLocal_200 != 6) && iLocal_200 != 9) && iLocal_200 != 11) && iLocal_200 != 13)
					{
						bLocal_199 = false;
						if (unk_0x6ADD12BF4D6D2587(func_65()) && unk_0x21B6FFFD04C9FF3A(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_199 = true;
					}
					if (unk_0x6ADD12BF4D6D2587(func_65()))
					{
						if (!unk_0x21B6FFFD04C9FF3A(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = false;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_74())
					{
						if (!func_173())
						{
							func_174();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_154("REPAP_RES1"))
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
									iLocal_200++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
									iLocal_200++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT3M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT3F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT3T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 4)
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
								}
							}
							break;
						
						case 5:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT4M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT4F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT4T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 5)
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
								}
							}
							break;
						
						case 6:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT5M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT5F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT5T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 6)
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
								}
							}
							break;
						
						case 7:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
									iLocal_200++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x53C562FD2B9E3AB0();
									iLocal_200++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0x6ADD12BF4D6D2587(func_65()))
				{
					system::settimera(0);
					iLocal_130++;
					func_140();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 244,2175f, 441,0128f, 126,2767f, 33,5f, 40f, 14,75f, false, true, 0) && func_66())
					{
						iLocal_47 = 4;
						iLocal_66 = unk_0x53C562FD2B9E3AB0();
					}
				}
				break;
			
			case 3:
				if (system::timera() > 3000 && func_66())
				{
					func_179("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_178(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_165(0);
	}
}

int func_173()//Position - 0xAA12
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_196) > 5000)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_70) && unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 1))
			{
				if (iVar0 != -1 && (unk_0x53C562FD2B9E3AB0() - Local_109[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_196 = unk_0x53C562FD2B9E3AB0();
						return 1;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_196 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

void func_174()//Position - 0xAAB4
{
	int iVar0;
	
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_145) > iLocal_146)
	{
		if ((!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0x6ADD12BF4D6D2587(func_65())) && !unk_0x3AB6A1A9084FB0A4(func_65()))
		{
			if (unk_0xBE3C4023003180FC(vLocal_53, unk_0xB3328BA8976B416C(func_65(), 1), true) < 8f)
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 5);
				func_18(&Local_139, 4);
				func_18(&Local_139, 5);
				func_18(&Local_139, 6);
				func_18(&Local_139, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x6ADD12BF4D6D2587(Local_139[4 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
								iLocal_146 = unk_0x63A6486593EC7EC3(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x6ADD12BF4D6D2587(Local_139[4 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
								iLocal_146 = unk_0x63A6486593EC7EC3(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_139, 5, func_65(), "PAP2", 0, 1);
						if (unk_0x6ADD12BF4D6D2587(Local_139[5 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[5 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
								iLocal_146 = unk_0x63A6486593EC7EC3(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_139, 6, func_65(), "PAP3", 0, 1);
						if (unk_0x6ADD12BF4D6D2587(Local_139[6 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[6 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
								iLocal_146 = unk_0x63A6486593EC7EC3(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_139, 7, func_65(), "PAP4", 0, 1);
						if (unk_0x6ADD12BF4D6D2587(Local_139[7 /*10*/]) && !unk_0x3AB6A1A9084FB0A4(Local_139[7 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x53C562FD2B9E3AB0();
								iLocal_146 = unk_0x63A6486593EC7EC3(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_175()//Position - 0xAD1B
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar4;
	vector3 vVar5[24];
	int iVar6;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_121))
		{
			unk_0x9C27373CC69ECF87(iLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0:
				unk_0x6450931B826B49D9("random@paparazzi@peek");
				unk_0x6450931B826B49D9("random@paparazzi@trans");
				unk_0x6450931B826B49D9("random@paparazzi@wait");
				if ((unk_0x3A801AA34DD821BE("random@paparazzi@peek") && unk_0x3A801AA34DD821BE("random@paparazzi@trans")) && unk_0x3A801AA34DD821BE("random@paparazzi@wait"))
				{
					iLocal_174 = unk_0x8383F9C605E523B7(vLocal_187, vLocal_188, 2);
					unk_0x8E628F774C748D93(iLocal_67, iLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x60C06BFD037BB7CF(iLocal_67, unk_0xFC1458A37D98B502(), -1, 4, 4);
					sLocal_175[0] = "peek_a";
					sLocal_175[1] = "peek_b";
					sLocal_175[2] = "peek_c";
					unk_0x94BD6F0436473406(0,2f);
					iLocal_172 = 0;
					iLocal_189 = 0;
					bLocal_194 = false;
					iLocal_60 = 1;
					iLocal_190 = 0;
					iLocal_57 = 0;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 1:
				if (unk_0xC80D31E4B587871C(iLocal_190, 0))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_190, 1))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_190, 1);
					}
					else
					{
						iLocal_190 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_181, vLocal_182, fLocal_183, 0, true, 0);
				bVar1 = unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_178, vLocal_179, fLocal_180, 0, true, 0);
				if (unk_0x74C475EB8E73D398(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						sLocal_177 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_177 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xD56F740235B1E8F0(iLocal_174) && unk_0x463C4747B41E35A3(iLocal_174) > 0,9f) || iVar2)
				{
					if (iLocal_190 == 0)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 3)
						{
							iLocal_176 = 0;
						}
						StringCopy(&cVar3, sLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						iLocal_174 = unk_0x8383F9C605E523B7(vLocal_187, vLocal_188, 2);
						unk_0x8E628F774C748D93(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0x872F1C1F8587CCC7(&iLocal_190, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0x46C19C2753391FBF());
					}
					if ((unk_0x53C562FD2B9E3AB0() - iLocal_173) > 5000 && iLocal_190 == 0)
					{
						if (system::vdist2(vLocal_52, vLocal_53) < (22,2f * 22,2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 4, 0, 0, 0))
							{
								iLocal_192 = 1;
								if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_67, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xB8E08BD5B184DF4E(iLocal_67);
									StringCopy(&cVar5, sLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									iLocal_174 = unk_0x8383F9C605E523B7(vLocal_187, vLocal_188, 2);
									unk_0x8E628F774C748D93(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0x872F1C1F8587CCC7(&iLocal_190, 0);
								}
								iLocal_173 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
				}
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_184, vLocal_185, fLocal_186, 0, true, 0) && iLocal_190 == 0)
				{
					if (unk_0xA6DECE14FC9A8C51(iLocal_120))
					{
						unk_0xE30CF11C0EE14316(&iLocal_120);
						if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					unk_0xB8E08BD5B184DF4E(iLocal_67);
					iLocal_174 = unk_0x8383F9C605E523B7(vLocal_187, vLocal_188, 2);
					if (bVar1)
					{
						unk_0x8E628F774C748D93(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x8E628F774C748D93(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_190, 0);
					iLocal_130++;
				}
				break;
			
			case 2:
				if (unk_0xD56F740235B1E8F0(iLocal_174) && unk_0x463C4747B41E35A3(iLocal_174) > 0,9f)
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_67, 242628503) != 1)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_67);
						unk_0x12C9D41D52A560D6(iLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_170 = 2;
						system::settimera(0);
					}
					iLocal_130++;
				}
				break;
			
			case 3:
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (func_177())
					{
						unk_0x5380482A432E314E(&iLocal_70);
						iLocal_70 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						unk_0xDD29FF4BAB8AFF9C(iLocal_70, true, 1);
						unk_0x4C44781F822B0B00(iLocal_70, false, 0);
						unk_0x4BEFCD5DAE410A90(iLocal_70, 1);
						bLocal_129 = true;
					}
				}
				if (!bLocal_129)
				{
					unk_0x4BEFCD5DAE410A90(iLocal_70, 1);
					if (func_139(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						system::settimera(0);
						bLocal_194 = true;
						iLocal_130 = 100;
					}
				}
				else if (func_139(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					system::settimera(0);
					bLocal_194 = true;
					iLocal_130++;
				}
				if (system::timera() > 2000)
				{
					func_176(vLocal_68, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_70, iLocal_67, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_129)
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_67, 242628503) != 1 && !iLocal_189)
						{
							unk_0x6931076730A4AC5D(&iVar6);
							unk_0x380C1E7B7740D618(0, 259,2552f, 122,2986f, 100,441f, 1f, 20000, 0,25f, 0, 1193033728);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
							unk_0x1B16DD5C115FE009(iVar6);
							unk_0xAB30B1CF01A198C1(iLocal_67, iVar6);
							unk_0x9A0C1F836B24E46E(iLocal_67, 0, 0);
							unk_0xFAA3EF7FF92E1F9E(&iVar6);
							iLocal_189 = 1;
						}
						else
						{
							unk_0x5C57ECBE59C08573(iLocal_67, 1f);
							func_176(259,2552f, 122,2986f, 100,441f, 0);
						}
					}
					else
					{
						func_176(vLocal_68, 1);
					}
					if (!bLocal_129)
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_122))
							{
								unk_0xE30CF11C0EE14316(&iLocal_122);
							}
							if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
							{
								iLocal_121 = func_180(iLocal_67, 0, 145);
							}
						}
					}
					if ((unk_0x21B6FFFD04C9FF3A(iLocal_70, iLocal_67, Global_19, 0, 1, 0) && func_170(iLocal_70)) && (system::timera() > 6000 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_102();
							if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_172 = 1;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = -5;
							}
							else
							{
								iLocal_130++;
							}
							unk_0xB8E08BD5B184DF4E(iLocal_67);
							unk_0x6F8C8278B7C06889(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_129)
				{
					func_176(vLocal_68, 1);
				}
				else
				{
					func_176(259,2552f, 122,2986f, 100,441f, 0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (func_152(iLocal_70, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_130 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_67) && unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_121))
						{
							unk_0xE30CF11C0EE14316(&iLocal_121);
						}
						unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
						func_178(1);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0) && !unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 1)) && !unk_0x0F3033474C49912D(iLocal_70, 225,1779f, 125,6632f, 113,6647f, 262,3032f, 111,8771f, 97,16339f, 37f, 0, true, 0))
							{
								if (bLocal_129)
								{
									unk_0xE17958D3FD0F9EE9(iLocal_67, 2, true);
									sLocal_132 = "REPAP_GUP";
									func_178(6);
								}
								else
								{
									unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 1, 0);
									unk_0xE17958D3FD0F9EE9(iLocal_67, 2, true);
									sLocal_132 = "REPAP_CP";
									func_178(6);
								}
							}
						}
						if (!unk_0xA8D0477084E86A92(iLocal_67, iLocal_70, 0))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_67, -1794415470) != 1)
							{
								unk_0xB8E08BD5B184DF4E(iLocal_67);
								unk_0x6F8C8278B7C06889(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
							}
							else if (system::vdist(vLocal_53, unk_0x3F90543934DCD7E6(iLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0x5C57ECBE59C08573(iLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
							iLocal_60 = 0;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 101)
				{
					fLocal_195 = 0f;
				}
				func_176(vLocal_68, 1);
				break;
			
			case 101:
				if (system::vdist2(vLocal_52, vLocal_53) < 49f && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0x46C19C2753391FBF());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0x46C19C2753391FBF() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0) && func_177())
					{
						bLocal_129 = true;
						iLocal_60 = 1;
						iLocal_70 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
						unk_0xDD29FF4BAB8AFF9C(iLocal_70, true, 1);
					}
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_70, 0))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_122))
						{
							unk_0xE30CF11C0EE14316(&iLocal_122);
						}
						if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					else
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_121))
						{
							unk_0xE30CF11C0EE14316(&iLocal_121);
						}
						if (!unk_0xA6DECE14FC9A8C51(iLocal_122))
						{
							iLocal_122 = func_166(iLocal_70, 0, 0);
						}
					}
					if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_70))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_122))
						{
							unk_0xE30CF11C0EE14316(&iLocal_122);
						}
						if (!unk_0xA6DECE14FC9A8C51(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
						func_179("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 4;
					}
					if (!iLocal_60)
					{
						if (system::vdist2(vLocal_52, vLocal_54) < 9f && func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
							}
						}
					}
				}
				func_176(vLocal_68, 1);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_70, 0))
			{
				if (system::vdist(vLocal_52, vLocal_68) > 75f)
				{
					func_178(6);
				}
				if (func_191())
				{
					func_178(5);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0xB8DE76287EDC4957(iLocal_70, 0))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0xDE523AF6F7B269AB(iLocal_70) < iLocal_64)
						{
							if (unk_0xEBE499597C718EB8(iLocal_70, unk_0xFC1458A37D98B502(), 1))
							{
								iLocal_65 = (iLocal_65 + (iLocal_64 - unk_0xDE523AF6F7B269AB(iLocal_70)));
							}
							unk_0x2B0DDE3D071497AD(iLocal_70);
						}
						if (iLocal_65 > 250)
						{
							if (unk_0xE56ACE711345F330(iLocal_67, iLocal_70) && system::vdist(vLocal_53, vLocal_54) < 25f)
							{
								func_178(5);
							}
						}
					}
				}
				iLocal_64 = unk_0xDE523AF6F7B269AB(iLocal_70);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
		{
			if (unk_0xA6FA9E5D08F067AD(iLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
		}
	}
}

void func_176(vector3 vParam0, bool bParam1)//Position - 0xB9A6
{
	if (system::vdist(vLocal_53, vParam0) > 2,5f)
	{
		if (unk_0x78F50AA8F955BEFC(iLocal_67, 713668775) != 1)
		{
			unk_0x380C1E7B7740D618(iLocal_67, vParam0, 1f, -1, 0,25f, 0, 1193033728);
		}
	}
	else if (unk_0x78F50AA8F955BEFC(iLocal_67, 713668775) != 1)
	{
		func_136(bParam1);
		unk_0x60C06BFD037BB7CF(iLocal_67, unk_0xFC1458A37D98B502(), -1, 16, 2);
	}
}

bool func_177()//Position - 0xBA0F
{
	return (((((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0)) && (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) || unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))))) && unk_0x95EC8AE7E4F33F6E(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 0) && func_170(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))) && !Global_103602);
}

void func_178(int iParam0)//Position - 0xBA90
{
	iLocal_45 = iParam0;
	iLocal_130 = 0;
}

void func_179(char* sParam0)//Position - 0xBAA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0x74C475EB8E73D398(iLocal_144[iVar0], sParam0))
		{
			if (unk_0x771D0F8F56A5FE6C(iLocal_144[iVar0]))
			{
				unk_0xE02E32C69260FBB7(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (unk_0x74C475EB8E73D398(iLocal_144[iVar0], sParam0))
		{
			if (!unk_0x771D0F8F56A5FE6C(iLocal_144[iVar0]))
			{
				unk_0xE859EF37EA7362D3(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_180(int iParam0, bool bParam1, int iParam2)//Position - 0xBB25
{
	int iVar0;
	
	iVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_181(int iParam0)//Position - 0xBB77
{
	if (func_184())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_88(Global_104544))
		{
			func_182(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_88(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_182(int iParam0)//Position - 0xBBCA
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_163(func_183(iParam0), -1);
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
					func_163(func_183(iParam0), -1);
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
					func_163(func_183(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_183(int iParam0)//Position - 0xBCAB
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

int func_184()//Position - 0xBCED
{
	switch (func_185(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xBD23
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
		if (func_189(0))
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
		if (!func_187(iParam2))
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
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)//Position - 0xBE5A
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

bool func_187(int iParam0)//Position - 0xBEA9
{
	return func_188(iParam0, Global_35861);
}

int func_188(int iParam0, int iParam1)//Position - 0xBEBA
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

int func_189(int iParam0)//Position - 0xC0A6
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_187(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()//Position - 0xC0C8
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		unk_0xE17958D3FD0F9EE9(iLocal_67, 2, false);
		unk_0xD68E88A8E0BE8697(iLocal_67, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!unk_0x3AB6A1A9084FB0A4(Local_109[iVar0 /*18*/]))
		{
			unk_0xD68E88A8E0BE8697(Local_109[iVar0 /*18*/], unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			unk_0xCE93FCB8A8D8DF0B(Local_109[iVar0 /*18*/], -2065892691);
			unk_0x771A86309E0CA47B(Local_109[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_191()//Position - 0xC145
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_109)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_109[iVar1 /*18*/]) && !unk_0x3AB6A1A9084FB0A4(Local_109[iVar1 /*18*/]))
		{
			if (unk_0xDE3C98B57A41E603(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0x5679106BC7ED79EE(Local_109[iVar1 /*18*/].f_6, 5f, 1) || unk_0x4E69510C44147A5C(-1, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0xA6FA9E5D08F067AD(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_108)
	{
		if (unk_0x6ADD12BF4D6D2587(Local_108[iVar1 /*18*/]))
		{
			if (unk_0xB8DE76287EDC4957(Local_108[iVar1 /*18*/], 0) && unk_0xDE3C98B57A41E603(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x6B4C37F2EEC636CC(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_192()//Position - 0xC23F
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_199())
	{
		return 1;
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193(float fParam0, bool bParam1)//Position - 0xC2C5
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
		if (func_21(func_19()))
		{
			iVar5 = func_93();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_194(iVar1, &Var0);
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

void func_194(int iParam0, var uParam1)//Position - 0xC37C
{
	switch (iParam0)
	{
		case 0:
			func_195(uParam1, "Abigail1", func_197(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 1:
			func_195(uParam1, "Abigail2", func_197(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 2:
			func_195(uParam1, "Barry1", func_197(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 3:
			func_195(uParam1, "Barry2", func_197(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 4:
			func_195(uParam1, "Barry3", func_197(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 5:
			func_195(uParam1, "Barry3A", func_197(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 6:
			func_195(uParam1, "Barry3C", func_197(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 7:
			func_195(uParam1, "Barry4", func_197(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_196(iParam0), 0, 0);
			break;
		
		case 8:
			func_195(uParam1, "Dreyfuss1", func_197(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 9:
			func_195(uParam1, "Epsilon1", func_197(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 10:
			func_195(uParam1, "Epsilon2", func_197(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 11:
			func_195(uParam1, "Epsilon3", func_197(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 12:
			func_195(uParam1, "Epsilon4", func_197(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 13:
			func_195(uParam1, "Epsilon5", func_197(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 14:
			func_195(uParam1, "Epsilon6", func_197(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 15:
			func_195(uParam1, "Epsilon7", func_197(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 16:
			func_195(uParam1, "Epsilon8", func_197(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 17:
			func_195(uParam1, "Extreme1", func_197(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 18:
			func_195(uParam1, "Extreme2", func_197(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 19:
			func_195(uParam1, "Extreme3", func_197(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 20:
			func_195(uParam1, "Extreme4", func_197(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 21:
			func_195(uParam1, "Fanatic1", func_197(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 22:
			func_195(uParam1, "Fanatic2", func_197(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 23:
			func_195(uParam1, "Fanatic3", func_197(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_196(iParam0), 0, 1);
			break;
		
		case 24:
			func_195(uParam1, "Hao1", func_197(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_196(iParam0), 0, 1);
			break;
		
		case 25:
			func_195(uParam1, "Hunting1", func_197(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 26:
			func_195(uParam1, "Hunting2", func_197(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 27:
			func_195(uParam1, "Josh1", func_197(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 28:
			func_195(uParam1, "Josh2", func_197(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 29:
			func_195(uParam1, "Josh3", func_197(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 30:
			func_195(uParam1, "Josh4", func_197(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 31:
			func_195(uParam1, "Maude1", func_197(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 32:
			func_195(uParam1, "Minute1", func_197(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 33:
			func_195(uParam1, "Minute2", func_197(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 34:
			func_195(uParam1, "Minute3", func_197(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 35:
			func_195(uParam1, "MrsPhilips1", func_197(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 36:
			func_195(uParam1, "MrsPhilips2", func_197(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 37:
			func_195(uParam1, "Nigel1", func_197(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 38:
			func_195(uParam1, "Nigel1A", func_197(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 39:
			func_195(uParam1, "Nigel1B", func_197(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 40:
			func_195(uParam1, "Nigel1C", func_197(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 41:
			func_195(uParam1, "Nigel1D", func_197(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 42:
			func_195(uParam1, "Nigel2", func_197(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 43:
			func_195(uParam1, "Nigel3", func_197(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 44:
			func_195(uParam1, "Omega1", func_197(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 45:
			func_195(uParam1, "Omega2", func_197(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 46:
			func_195(uParam1, "Paparazzo1", func_197(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 47:
			func_195(uParam1, "Paparazzo2", func_197(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 48:
			func_195(uParam1, "Paparazzo3", func_197(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 49:
			func_195(uParam1, "Paparazzo3A", func_197(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 50:
			func_195(uParam1, "Paparazzo3B", func_197(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 51:
			func_195(uParam1, "Paparazzo4", func_197(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 52:
			func_195(uParam1, "Rampage1", func_197(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 54:
			func_195(uParam1, "Rampage3", func_197(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 55:
			func_195(uParam1, "Rampage4", func_197(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 56:
			func_195(uParam1, "Rampage5", func_197(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 53:
			func_195(uParam1, "Rampage2", func_197(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 57:
			func_195(uParam1, "TheLastOne", func_197(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 58:
			func_195(uParam1, "Tonya1", func_197(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 59:
			func_195(uParam1, "Tonya2", func_197(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 60:
			func_195(uParam1, "Tonya3", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 61:
			func_195(uParam1, "Tonya4", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 62:
			func_195(uParam1, "Tonya5", func_197(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_195(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xD4F1
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

int func_196(int iParam0)//Position - 0xD582
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

struct<2> func_197(int iParam0)//Position - 0xD8C8
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_198(iParam0) };
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

struct<2> func_198(int iParam0)//Position - 0xD8FE
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

int func_199()//Position - 0xDD49
{
	if (func_202() && !func_203())
	{
		return 1;
	}
	if (func_201() && func_200())
	{
		return 1;
	}
	return 0;
}

bool func_200()//Position - 0xDD7B
{
	return Global_104273 > 0;
}

int func_201()//Position - 0xDD89
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0xDD9E
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_203()//Position - 0xDDC4
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

void func_204()//Position - 0xDDE1
{
	func_206(39, 1);
	func_206(40, 1);
	func_206(41, 1);
	func_206(42, 1);
	func_206(43, 1);
	func_206(44, 1);
	iLocal_120 = func_205(vLocal_68);
	iLocal_67 = unk_0xAC992EFAD62C33BF(26, joaat("a_f_y_bevhills_03"), vLocal_68, fLocal_69, 1, true);
	unk_0xAE6EBBBBD8B9FB30(iLocal_67, 1, true);
	unk_0xAE6EBBBBD8B9FB30(iLocal_67, 17, true);
	unk_0xE17958D3FD0F9EE9(iLocal_67, 128, true);
	unk_0xE9B3D12A64CC7C1A(iLocal_67, true);
	unk_0xC854D7A2E956B946(iLocal_67, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 0, 0, 1, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 2, 0, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 3, 0, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 4, 0, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 7, 1, 0, 0);
	unk_0x03924C68EFCBC511(iLocal_67, 8, 0, 0, 0);
	unk_0xEB2091818EC5C55E(iLocal_67, 1);
	unk_0x771A86309E0CA47B(iLocal_67, true);
	unk_0x5C5D33A1B2711D21(iLocal_67, false);
	unk_0x350CEE66BDF90273(iLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0x1A0806871323CD16(iLocal_67, true);
	}
	if (unk_0x4DE114E3C7F8B7C2("CELEBRITY", &iLocal_55))
	{
		unk_0xCE93FCB8A8D8DF0B(iLocal_67, iLocal_55);
	}
	iLocal_70 = unk_0xEA60F3B426BB095B(joaat("surano"), vLocal_71, fLocal_72, true, true, false);
	unk_0xAA93B7B448E10E40(iLocal_70, vLocal_71, 0, 0, 1);
	unk_0x47F55B6102CA9143(iLocal_70, 0,1293f, -0,0323f, -0,1606f, 0,978f);
	unk_0x4C44781F822B0B00(iLocal_70, false, 0);
	unk_0x207466E78DA21033(iLocal_70, 10);
	unk_0xACE486395AA1867D(iLocal_70, 1084227584);
	unk_0x4BEFCD5DAE410A90(iLocal_70, 3);
	unk_0xFA87254221D30EB8(iLocal_70, 1);
	unk_0x662185A7CE2038B6(iLocal_70, 1);
	unk_0xDFC63F22B454FFF5(iLocal_70, unk_0xC45B242943C8D6AD(1));
	if (func_19() == 1)
	{
		func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_139, 1, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
	}
	func_17(&Local_139, 3, iLocal_67, "LACEY", 0, 1);
	iLocal_136[0] = "idle_a";
	iLocal_136[1] = "idle_b";
	iLocal_136[2] = "idle_c";
	iLocal_136[3] = "idle_d";
	iLocal_136[4] = "idle_e";
	iLocal_136[5] = "idle_f";
	iLocal_136[6] = "idle_g";
	iLocal_136[7] = "idle_h";
	iLocal_136[8] = "idle_i";
	iLocal_144[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x2E4932E63763FE26(joaat("vader"), true);
	unk_0x2E4932E63763FE26(joaat("surano"), true);
	unk_0x2E4932E63763FE26(joaat("cavalcade2"), true);
}

int func_205(vector3 vParam0)//Position - 0xE04B
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xF20857E4CB32A2B7(iVar0, 0);
	unk_0x3ED68ABD7299EAA3(iVar0, 0);
	return iVar0;
}

void func_206(int iParam0, bool bParam1)//Position - 0xE06D
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_207(iParam0, 2, 1);
	}
}

void func_207(int iParam0, int iParam1, bool bParam2)//Position - 0xE0A4
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE10D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_209(var uParam0)//Position - 0xE13D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

int func_210(int iParam0, int iParam1, int iParam2)//Position - 0xE171
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_209(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xE1A3
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

void func_212(int iParam0, int iParam1, bool bParam2)//Position - 0xE488
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)//Position - 0xE4F1
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_83() == 0)
		{
			return unk_0xC80D31E4B587871C(func_210(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_214()//Position - 0xE551
{
	if (!iLocal_73)
	{
		func_222(&uLocal_74, joaat("surano"));
		func_222(&uLocal_74, joaat("prop_ld_test_01"));
		func_222(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_74, joaat("vader"));
		func_222(&uLocal_74, joaat("cavalcade2"));
		func_222(&uLocal_74, joaat("prop_pap_camera_01"));
		func_219(&uLocal_74);
		iLocal_73 = 1;
	}
	if (!func_215(&uLocal_74))
	{
		return 0;
	}
	unk_0x6450931B826B49D9("random@escape_paparazzi@standing@");
	unk_0x6450931B826B49D9("random@paparazzi@pap_anims");
	unk_0x6450931B826B49D9("random@paparazzi@peek");
	unk_0x6450931B826B49D9("random@paparazzi@trans");
	unk_0x6450931B826B49D9("random@paparazzi@wait");
	unk_0x6450931B826B49D9("veh@std@ps@idle_panic");
	unk_0x6450931B826B49D9("veh@low@front_ps@idle_panic");
	unk_0x6450931B826B49D9(sLocal_135);
	unk_0xBCBC53983EC3B1BA("ESCPAP", 0);
	if (((((((((unk_0x3A801AA34DD821BE("random@escape_paparazzi@standing@") && unk_0x3A801AA34DD821BE("random@paparazzi@pap_anims")) && unk_0x3A801AA34DD821BE("random@paparazzi@peek")) && unk_0x3A801AA34DD821BE("random@paparazzi@trans")) && unk_0x3A801AA34DD821BE("random@paparazzi@wait")) && unk_0x3A801AA34DD821BE("veh@std@ps@idle_panic")) && unk_0x3A801AA34DD821BE("veh@low@front_ps@idle_panic")) && unk_0x3A801AA34DD821BE(sLocal_135)) && unk_0x9F0887BCBFCF3C2F(0)) && unk_0x1CF95440F1970B4F("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)//Position - 0xE68C
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_216(var uParam0)//Position - 0xE6EE
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)//Position - 0xE703
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_218(iParam0))
			{
				case 0:
					return unk_0x9A0B2ED5055D3F0B(iParam2);
					break;
				
				case 1:
					return unk_0x3A801AA34DD821BE(sParam1);
					break;
				
				case 2:
					return unk_0xD9C499EAA1D3F82A(sParam1);
					break;
				
				case 3:
					return unk_0xA51ADD51711B4A15(sParam1);
					break;
				
				case 4:
					return unk_0x0840F461D7BD8859(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xC316B5E3E7ACF515(sParam1);
					break;
				
				case 6:
					return unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x2674C3EBFAFF7678(iParam2);
					break;
				
				case 8:
					return unk_0x9F0887BCBFCF3C2F(iParam2);
					break;
				
				case 9:
					return unk_0xFEDD99169EC73AA6();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xE7F7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC80D31E4B587871C(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(var uParam0)//Position - 0xE823
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE835
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)//Position - 0xE8F8
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)//Position - 0xE997
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()//Position - 0xE9A9
{
	if (!func_187(5))
	{
		return 1;
	}
	if (func_199())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()//Position - 0xEA0B
{
	if ((Global_104544 == func_97() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)//Position - 0xEA36
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_32 + uParam0->f_33) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(int iParam0)//Position - 0xEAC0
{
	func_227(iParam0, "NULL", iParam0->f_1);
}

void func_227(int iParam0, char* sParam1, int iParam2)//Position - 0xEAD4
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_218(*iParam0))
		{
			case 0:
				unk_0x6FF834D85E2DD4C6(iParam2);
				break;
			
			case 1:
				unk_0x6450931B826B49D9(sParam1);
				break;
			
			case 2:
				unk_0x7C0C9D9129095E19(sParam1);
				break;
			
			case 3:
				unk_0x128A5DCCD09CCA17(sParam1, unk_0xC80D31E4B587871C(*iParam0, 28));
				break;
			
			case 4:
				unk_0x0D9525F20FB71C52(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x307EAE14C924E2E7(sParam1);
				break;
			
			case 6:
				unk_0x1CF95440F1970B4F(sParam1, unk_0xC80D31E4B587871C(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8A719502FC5D36F1(iParam2);
				break;
			
			case 8:
				unk_0xBCBC53983EC3B1BA(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x36905B9EE07F38CC();
				break;
			
			default:
				break;
		}
		unk_0x872F1C1F8587CCC7(iParam0, 29);
	}
}

void func_228(int iParam0)//Position - 0xEBAE
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_229();
}

void func_229()//Position - 0xEBE4
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

void func_230(int iParam0)//Position - 0xEC21
{
	Global_104544 = iParam0;
}

int func_231(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEC2F
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
		iParam1 = func_97();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_272())
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
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_203())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_199())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_193(100f, 1) != -1)
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
		if (!func_270(iParam1))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_266())
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
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_187(5))
		{
			return 0;
		}
		if (func_256(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_255(iVar4))
				{
					if (func_233(iVar2))
					{
						if (!func_232(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_19() != iVar2)
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

bool func_232(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xEFC9
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_233(int iParam0)//Position - 0xF010
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)//Position - 0xF031
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)//Position - 0xF040
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF093
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF0B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
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
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_238(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_238(float fParam0, float fParam1, float fParam2)//Position - 0xF2B2
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

int func_239(int iParam0, int iParam1)//Position - 0xF2F4
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

int func_240(int iParam0)//Position - 0xF396
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_241(int iParam0)//Position - 0xF3A9
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_242(int iParam0)//Position - 0xF3BC
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_243(int iParam0)//Position - 0xF3CF
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_244(int iParam0)//Position - 0xF3E1
{
	return (system::shift_right(iParam0, 26) & 31 * func_245(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)//Position - 0xF406
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)//Position - 0xF41D
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)//Position - 0xF42A
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0xF536
{
	var uVar0;
	
	func_254(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_253(&uVar0, unk_0x95327550F0F2BE7C());
	func_252(&uVar0, unk_0x674C9438180770FE());
	func_251(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_250(&uVar0, unk_0xEAF455949B108589());
	func_249(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_249(var uParam0, int iParam1)//Position - 0xF57C
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

void func_250(var uParam0, int iParam1)//Position - 0xF602
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)//Position - 0xF635
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_252(var uParam0, int iParam1)//Position - 0xF686
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_253(var uParam0, int iParam1)//Position - 0xF6C0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_254(var uParam0, int iParam1)//Position - 0xF6FB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_255(int iParam0)//Position - 0xF737
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
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)//Position - 0xF813
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xF836
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_265()) || Global_103602) || Global_25235) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_265()) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_265()) || Global_103602) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_265()) || Global_103602) || Global_25235) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_265()) || Global_25235) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_265()) || func_262()) || Global_103602) || Global_25235) || func_264()) || Global_36993) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_265()) || Global_103602) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
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

var func_258()//Position - 0xFF53
{
	return Global_92872.f_1;
}

int func_259()//Position - 0xFF61
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_260()//Position - 0xFF87
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()//Position - 0xFFA1
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

bool func_262()//Position - 0xFFCB
{
	return Global_92885.f_316 > 0;
}

bool func_263()//Position - 0xFFDC
{
	return Global_92885.f_315 > 0;
}

var func_264()//Position - 0xFFED
{
	return Global_1312854;
}

int func_265()//Position - 0xFFF9
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_266()//Position - 0x10017
{
	func_11();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)//Position - 0x1003F
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x10051
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
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

int func_269(int iParam0)//Position - 0x10135
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_270(int iParam0)//Position - 0x10159
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
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

int func_271()//Position - 0x101B7
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

int func_272()//Position - 0x101FB
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

void func_273(var uParam0, int iParam1)//Position - 0x102B6
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_274()//Position - 0x102CD
{
	func_292(0);
	unk_0xD855BC7E9D7EC87F(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_287(&uLocal_74, 0);
	unk_0xFCCDDE0E48CF9588("random@escape_paparazzi@standing@");
	unk_0xFCCDDE0E48CF9588("random@paparazzi@pap_anims");
	unk_0xFCCDDE0E48CF9588("random@paparazzi@peek");
	unk_0xFCCDDE0E48CF9588("random@paparazzi@trans");
	unk_0xFCCDDE0E48CF9588("random@paparazzi@wait");
	unk_0xFCCDDE0E48CF9588("veh@std@ps@idle_panic");
	unk_0xFCCDDE0E48CF9588("veh@low@front_ps@idle_panic");
	unk_0xFCCDDE0E48CF9588(sLocal_135);
	unk_0x77A208B3324C04F2();
	if (func_224())
	{
		unk_0x94BD6F0436473406(1f);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_67) && !unk_0x3AB6A1A9084FB0A4(iLocal_67))
	{
		if (unk_0xC816B63289F7A279(iLocal_67))
		{
			unk_0x88235B448509228B(iLocal_67);
		}
		if (unk_0x88DDBE9908752BF0(iLocal_67, 1))
		{
			if (!unk_0xA6FA9E5D08F067AD(iLocal_67))
			{
				unk_0x16416C5B54FDBCBB(iLocal_67, 0, 0);
			}
		}
	}
	func_276(-1);
	unk_0x981B8A90686AD23E();
	unk_0xF906FCF8A11CBA9A(0);
	unk_0x2E4932E63763FE26(joaat("vader"), false);
	unk_0x2E4932E63763FE26(joaat("surano"), false);
	unk_0x2E4932E63763FE26(joaat("cavalcade2"), false);
	unk_0xCA107A9AAF17E75F(iLocal_126, 0);
	unk_0xCA107A9AAF17E75F(iLocal_127, 0);
	unk_0xCA107A9AAF17E75F(iLocal_128, 0);
	unk_0x4C15495E88D71C61(Vector(93,8361f, 92,1704f, 246,1673f) + Vector(6f, 6f, 6f), Vector(93,8361f, 92,1704f, 246,1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_25472)
	{
		unk_0x8810DC630928B398("AC_STOP");
	}
	func_275();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_275()//Position - 0x10421
{
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
	Global_25473 = 0;
}

void func_276(int iParam0)//Position - 0x1043D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_104544, 1), 64);
		if (func_96(Global_104544) > 0)
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
	func_277(&Global_25292);
	Global_104545 = 0;
	func_230(-1);
}

void func_277(var uParam0)//Position - 0x104F2
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

char* func_278(int iParam0, bool bParam1)//Position - 0x1052F
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

void func_279(int iParam0)//Position - 0x10778
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_280(int iParam0)//Position - 0x1078A
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)//Position - 0x1079F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)//Position - 0x107CE
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_241(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)//Position - 0x1089D
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x108B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
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
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10A37
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)//Position - 0x10A6F
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

void func_287(var uParam0, bool bParam1)//Position - 0x10C12
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_288(var uParam0)//Position - 0x10C52
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)//Position - 0x10C63
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_290(var uParam0)//Position - 0x10C9C
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, int iParam2)//Position - 0x10CB1
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_218(iParam0))
		{
			case 0:
				unk_0x14776E43F90DD454(iParam2);
				break;
			
			case 1:
				unk_0xFCCDDE0E48CF9588(sParam1);
				break;
			
			case 2:
				unk_0x736CC1A30C230950(sParam1);
				break;
			
			case 3:
				unk_0x137FC8E0F58D9E0B(sParam1);
				break;
			
			case 4:
				unk_0x9E6ACDF1473CD846(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD22D83D359390CC6(sParam1);
				break;
			
			case 6:
				unk_0x77A208B3324C04F2();
				break;
			
			case 7:
				unk_0x7A0F3E22D109C816(iParam2);
				break;
			
			case 8:
				unk_0xF40900F61CC88931(iParam2, unk_0xC80D31E4B587871C(iParam0, 26));
				break;
			
			case 9:
				unk_0x74FDC371ED12544B();
				break;
			
			default:
				break;
		}
	}
}

void func_292(bool bParam0)//Position - 0x10D71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_206(iVar0, bParam0);
		iVar0++;
	}
}

