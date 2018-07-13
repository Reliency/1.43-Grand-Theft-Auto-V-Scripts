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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	vector3 vLocal_136 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	
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
	iLocal_46 = unk_0x5354F72E0D8D7E53();
	iLocal_47 = unk_0x526A9A6B1B39C5F0();
	iLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	vLocal_53 = { ScriptParam_166.f_1[0 /*3*/] };
	fLocal_54 = ScriptParam_166.f_17[0];
	if (unk_0x7D9C4B359376D38A(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_284(0);
		}
		else
		{
			func_266();
		}
	}
	if (system::vdist(vLocal_53, -203,758f, -861,738f, 29,2684f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (system::vdist(vLocal_53, -2957,61f, 488,29f, 14,47f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (system::vdist(vLocal_53, 288,973f, -1256,79f, 28,4407f) < 5f)
	{
		iLocal_65 = 2;
	}
	else if (system::vdist(vLocal_53, -3043,93f, 594,84f, 6,6115f) < 5f)
	{
		iLocal_65 = 3;
	}
	else if (system::vdist(vLocal_53, 174,715f, 6637,77f, 30,5733f) < 5f)
	{
		iLocal_65 = 4;
	}
	else
	{
		iLocal_65 = 5;
	}
	if (func_224(vLocal_53, 1, iLocal_65, 1, 0))
	{
		func_221(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	system::settimera(0);
	func_220();
	while (true)
	{
		system::wait(0);
		func_219();
		func_218(iLocal_58, &uLocal_64);
		func_215(&Local_164);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		}
		if (!func_212())
		{
			if (func_211())
			{
				func_266();
			}
			if (unk_0x42F1FE4C7EC5F51E())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_185())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_184();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0xB71774863B890B76(99, vLocal_53, 30000f);
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_55))
						{
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_56))
						{
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
						{
							if (unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								unk_0xFC5999E8B820470E(iLocal_55, vLocal_53, 200f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_55, true);
								system::wait(0);
								func_266();
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								if (unk_0x9E06F0EE20F58CED(vLocal_53, 2,5f))
								{
									if (iLocal_65 == 2)
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_183())
										{
											func_174();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (system::vdist(vLocal_53, -203,758f, -861,738f, 29,2684f) < 5f)
										{
											if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_183())
											{
												func_174();
											}
										}
										else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_183())
										{
											func_174();
										}
									}
									else if (system::vdist(vLocal_53, -3044,06f, 594,93f, 6,74f) < 5f)
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_183())
										{
											func_174();
										}
									}
									else if (unk_0xBE3C4023003180FC(vLocal_53, -712,9f, -819,32f, 22,73f, true) < 5f)
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_183())
										{
											func_174();
										}
									}
									else if (unk_0xBE3C4023003180FC(vLocal_53, 24,13f, -946,84f, 28,36f, true) < 5f)
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_183())
										{
											func_174();
										}
									}
									else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_183())
									{
										func_174();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_173(&Local_107, 2);
							}
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								unk_0xFC5999E8B820470E(iLocal_56, vLocal_53, 200f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_56, true);
								system::wait(0);
							}
							func_266();
						}
						break;
				}
			}
			else
			{
				func_171("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_266();
			}
		}
		else
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_55))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
				{
					if (func_170(iLocal_55, -251125078))
					{
						if (func_169(iLocal_55, vLocal_53, 1) >= 190f)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_55);
							unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
						}
					}
					else if (func_170(iLocal_55, -982327190))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_55);
						unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_56))
			{
			}
			if (unk_0x53C562FD2B9E3AB0() > iLocal_66 + 3000)
			{
				func_140();
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (!func_120() && !func_117())
				{
					unk_0x42CFB57FD9628646(unk_0x9EB17624F44A8DA4());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_56))
						{
							if (system::vdist(unk_0xB3328BA8976B416C(iLocal_56, 0), -2956,26f, 487,97f, 15,46f) < 5f)
							{
								if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xBE3C4023003180FC(vLocal_53, -203,72f, -861,8f, 29,27f, true) < 5f)
							{
								if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xBE3C4023003180FC(vLocal_53, 288,46f, -1256,71f, 28,44f, true) < 5f)
							{
								if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0xA6DECE14FC9A8C51(iLocal_59))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0x21B6FFFD04C9FF3A(iLocal_55, unk_0xFC1458A37D98B502(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0x88DDBE9908752BF0(iLocal_55, 0))
									{
										if (system::timera() > 1000)
										{
											if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_55))
											{
												fLocal_132 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_55, 1));
												fLocal_132 = (fLocal_132 * 1,5f);
												system::settimera(0);
											}
											unk_0xAE6EBBBBD8B9FB30(iLocal_55, 17, false);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x88DDBE9908752BF0(iLocal_55, 0))
										{
											unk_0xAE6EBBBBD8B9FB30(iLocal_55, 17, true);
											unk_0xAE6EBBBBD8B9FB30(iLocal_55, 13, false);
											func_114();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_55) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_55)) || unk_0xEBE499597C718EB8(iLocal_55, unk_0xFC1458A37D98B502(), 0))
								{
									func_115(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									system::settimera(0);
									fLocal_132 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_55, 1));
									fLocal_132 = (fLocal_132 * 1,5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
								{
									if (unk_0xEBE499597C718EB8(iLocal_73, unk_0xFC1458A37D98B502(), 1))
									{
										unk_0xAE6EBBBBD8B9FB30(iLocal_55, 17, false);
										if (unk_0x1ED974E122CB5C47(iLocal_55))
										{
											unk_0xD2C269DBF147B406(iLocal_55, iLocal_73, unk_0xFC1458A37D98B502(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
										}
										func_115(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										system::settimera(0);
										fLocal_132 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_55, 1));
										fLocal_132 = (fLocal_132 * 1,5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0xA6DECE14FC9A8C51(iLocal_59))
								{
									if (unk_0x054F3EDDF5178FA5(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0xDB6E56C09E5CF0AA(iLocal_59, false);
										unk_0x0C71C8E276E3EC54(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_114();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0x7ED4D0E480A6EC43(iLocal_55, unk_0xFC1458A37D98B502()))
								{
									bLocal_130 = true;
								}
								func_112(iLocal_59, &uLocal_70);
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_115(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0x6931076730A4AC5D(&iLocal_61);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x1B16DD5C115FE009(iLocal_61);
											unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
											unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
											system::settimera(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_55) && !unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_55)) && !unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502())) && func_111(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_115(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												system::settimera(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0xAFFA17B5D5E2F248(iLocal_56))
								{
									func_109(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_107())
							{
								func_106();
								if (unk_0x6ADD12BF4D6D2587(iLocal_56))
								{
									vVar0 = { unk_0xB3328BA8976B416C(iLocal_56, 1) };
								}
								if (!unk_0x0C88267282FD588F(iLocal_55, vVar0, 25f, 25f, 25f, false, true, 0) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (system::timera() > 20000)
									{
										if (func_105(iLocal_55) && !unk_0x9F887157983E8EFC(iLocal_55))
										{
											if (func_115(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												system::settimera(0);
											}
										}
									}
								}
							}
							else if (func_105(iLocal_56))
							{
								if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, Global_19, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0x6931076730A4AC5D(&iLocal_61);
										unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 3000);
										unk_0x93F12E7D8D931858(0, 1193033728, 0);
										unk_0x1B16DD5C115FE009(iLocal_61);
										unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
										unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
										bLocal_127 = true;
										func_266();
									}
								}
								else if (bLocal_130)
								{
									if (func_115(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0x93F12E7D8D931858(iLocal_56, 1193033728, 0);
										unk_0x31BBD48AA2503617(iLocal_56, -668482597, false, 0, 0);
										bLocal_127 = true;
										func_266();
									}
								}
								else
								{
									unk_0x93F12E7D8D931858(iLocal_56, 1193033728, 0);
									unk_0x31BBD48AA2503617(iLocal_56, -668482597, false, 0, 0);
									bLocal_127 = true;
									func_266();
								}
							}
							else
							{
								bLocal_127 = true;
								func_266();
							}
						}
						else if (func_107())
						{
							if ((unk_0x3AB6A1A9084FB0A4(iLocal_55) || unk_0xA7E3B4C3A60721A5(iLocal_55, 1)) || func_170(iLocal_55, -1899872703))
							{
								func_115(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_102();
								func_173(&Local_107, 2);
								unk_0xE30CF11C0EE14316(&iLocal_59);
							}
						}
					}
					else if (!unk_0xA6DECE14FC9A8C51(iLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_60))
							{
								unk_0xE30CF11C0EE14316(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
							iLocal_58 = func_98(iLocal_56, 0, 0);
							func_97(&uLocal_64);
							if (unk_0x6ADD12BF4D6D2587(iLocal_56))
							{
								fLocal_82 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_56, 0));
								unk_0x2B0DDE3D071497AD(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_284(0);
							}
						}
						else
						{
							func_94();
						}
					}
					else
					{
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
						{
							if (bLocal_95)
							{
								func_284(0);
							}
							else
							{
								func_266();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_56, 0)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_284(0);
									}
									else
									{
										unk_0xD68E88A8E0BE8697(iLocal_56, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
										func_266();
									}
								}
								else if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_56, 0)) < fLocal_82)
								{
									fLocal_82 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_56, 0));
								}
								if (unk_0xEBE499597C718EB8(iLocal_56, unk_0xFC1458A37D98B502(), 1))
								{
									if (bLocal_95)
									{
										func_284(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0xDBF
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
	{
		unk_0xD68E88A8E0BE8697(iLocal_56, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
		func_109(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0xE9B3D12A64CC7C1A(iLocal_56, true);
		unk_0x771A86309E0CA47B(iLocal_56, false);
		unk_0x5C5D33A1B2711D21(iLocal_56, true);
		unk_0x486F346ADFE56674(&iLocal_56);
	}
	func_94();
	if (bLocal_90)
	{
		if (unk_0xA6DECE14FC9A8C51(iLocal_60))
		{
			if (unk_0xB8B3E5529EDB87D4(iLocal_89))
			{
				if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iLocal_89)) > 100f)
				{
					func_266();
				}
			}
		}
		else if (bLocal_95)
		{
			func_284(0);
		}
		else if (unk_0x3AB6A1A9084FB0A4(iLocal_55))
		{
			func_266();
		}
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_59))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_55))
		{
			unk_0xE30CF11C0EE14316(&iLocal_59);
		}
		else if (!func_107())
		{
			func_266();
		}
	}
}

void func_2()//Position - 0xE88
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_109(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0xBE3C4023003180FC(vLocal_53, 296,13f, -894,01f, 28,23f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0xBE3C4023003180FC(vLocal_53, -2072,88f, -317,19f, 12,32f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_93())
				{
					if (func_90(2))
					{
						unk_0x3E80C2F7BC665259(1);
					}
					if (!func_117())
					{
						if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
						{
							if (func_89(1, 0, 1))
							{
								if (!unk_0xC80D31E4B587871C(Global_2323, 11) || func_88())
								{
									if (!unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
									{
										unk_0x3E80C2F7BC665259(1);
										if (func_87())
										{
											func_86();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x5E35CF35E65D69B9(iLocal_102, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true, true, false);
										}
										else
										{
											iLocal_57 = unk_0x5E35CF35E65D69B9(iLocal_101, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true, true, false);
										}
										if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
										{
											unk_0xA9D382E7BA095148(iLocal_57, unk_0xFC1458A37D98B502(), unk_0xDD09837E5235FE91(unk_0xFC1458A37D98B502(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0xB3A8974D2C811672(iLocal_57, false, 0);
										func_78(1, 1, 1, 0);
										if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
										{
											if (unk_0x6ADD12BF4D6D2587(iLocal_57))
											{
												while ((!func_76(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fLocal_84, 1, 1056964608, 0, 1, 0) || func_87()) || !unk_0xD5BF96615F17406E(iLocal_57))
												{
													if (!func_76(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_87())
													{
													}
													if (!unk_0xD5BF96615F17406E(iLocal_57))
													{
													}
													system::wait(0);
												}
												if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
												{
													unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
												}
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iLocal_57))
										{
											while (func_87() || !unk_0xD5BF96615F17406E(iLocal_57))
											{
												system::wait(0);
											}
										}
										unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
										{
											unk_0x5718F894FDA63A9E(iLocal_56, 0);
										}
										unk_0xC83821A7ED01F9E9(0);
										unk_0x15AAE2A89BBE596D(iLocal_69);
										unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
										func_74();
										func_70(0);
										system::wait(0);
										if (func_105(iLocal_56))
										{
											if (unk_0x6668BA66B78B4E7C(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x7C0C9D9129095E19(sLocal_94);
										bLocal_99 = true;
										system::settimera(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_68(unk_0xB3328BA8976B416C(iLocal_56, 1), &fLocal_83, &fLocal_84);
					if (!func_93())
					{
						if (!func_170(iLocal_56, 1227113341) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_56);
							unk_0x4C7AF3B2BE8C3193(iLocal_56, unk_0xFC1458A37D98B502(), 20000, 0,5f, 1f, 1073741824, 0);
						}
					}
					else if (func_170(iLocal_56, 1227113341))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_56);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
						unk_0x6931076730A4AC5D(&iLocal_61);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
						unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_61);
						unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
						unk_0x9A0C1F836B24E46E(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_93())
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_56);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
						unk_0x6931076730A4AC5D(&iLocal_61);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
						unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), 20000, 0,5f, 1f, 1073741824, 0);
						unk_0x1B16DD5C115FE009(iLocal_61);
						unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) && !unk_0x5E06F14AF78392CF(unk_0xFC1458A37D98B502())) && !unk_0x7CE28D2DD2AF0F42(unk_0xFC1458A37D98B502()))
					{
						if (bLocal_80)
						{
							if (unk_0xBE3C4023003180FC(vLocal_53, -712,9f, -819,32f, 22,73f, true) < 5f && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -709,9229f, -824,0863f, 22,0751f, -715,2137f, -824,2247f, 25,01217f, 3,25f, 0, true, 0))
							{
								vLocal_78 = { -710,1279f, -821,3084f, 22,6169f };
								vLocal_79 = { 0f, 0f, 266,962f };
							}
							else if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								vVar7 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
								func_65(iLocal_56, &vLocal_78, &vLocal_79, cLocal_142, sLocal_144);
								if ((vLocal_78.z - vVar7.z) > 20f)
								{
									vLocal_78 = { vVar7 };
								}
								vLocal_78.z = (vLocal_78.z + 2f);
								unk_0x7367FB97975F1E29(vLocal_78, &(vLocal_78.f_2), 0, 0);
								if (vLocal_78.z == 0f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.z = fLocal_139;
								}
								if (unk_0xBE3C4023003180FC(vLocal_53, -203,72f, -861,8f, 29,27f, true) < 5f)
								{
									if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -202,4218f, -864,449f, 27,88059f, -211,4486f, -861,5274f, 31,75401f, 9,5f, 0, true, 0))
									{
										if (vLocal_79.z > 315f && vLocal_79.z < 360f)
										{
											vLocal_79.z = 251,4238f;
										}
										else if (vLocal_79.z > 120f && vLocal_79.z < 212f)
										{
											vLocal_79.z = 67,2304f;
										}
										vLocal_78 = { -205,81f, -865,2f, 28,5f };
									}
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, -821,33f, -1082,43f, 10,14f, true) < 5f && unk_0x8AE9E5E8F6DC40C9(vLocal_78, -826,1744f, -1083,943f, 9,137519f, -811,6559f, -1075,567f, 13,88779f, 6f, 0, true))
								{
									vLocal_78 = { -814,0593f, -1082,483f, 10,0671f };
									vLocal_79.z = 275,5752f;
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, -387,12f, 6045,79f, 30,5f, true) < 5f && unk_0x8AE9E5E8F6DC40C9(vLocal_78, -377,5788f, 6033,821f, 29,29119f, -373,0138f, 6029,14f, 33,75382f, 4,75f, 0, true))
								{
									vLocal_78 = { -375,0627f, 6030,533f, 30,5313f };
									vLocal_79.z = 222,9049f;
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, -387,12f, 6045,79f, 30,5f, true) < 5f && unk_0x8AE9E5E8F6DC40C9(vLocal_78, -381,4607f, 6031,481f, 29,24971f, -376,6766f, 6026,68f, 33,76656f, 3f, 0, true))
								{
									vLocal_78 = { -379,7835f, 6029,472f, 30,5014f };
									vLocal_79.z = 213,2611f;
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, 89,39f, 2f, 67,34f, true) < 5f)
								{
									if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 73,30347f, 4,781172f, 66,79439f, 107,6572f, -8,330787f, 69,16833f, 9,75f, 0, true, 0))
									{
										if (vLocal_79.z > 128f && vLocal_79.z < 195f)
										{
											if (vLocal_79.z > 162f)
											{
												vLocal_79.z = 220f;
											}
											else
											{
												vLocal_79.z = 107f;
											}
										}
									}
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, 174,53f, 6637,64f, 30,57f, true) < 5f)
								{
									if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 176,3895f, 6635,983f, 29,87799f, 181,7585f, 6641,302f, 33,556f, 7,75f, 0, true, 0))
									{
										if (vLocal_79.z > 244,444f && vLocal_79.z < 326,2103f)
										{
											vLocal_79.z = 343,1367f;
										}
									}
								}
								else if (unk_0xBE3C4023003180FC(vLocal_53, -3044,11f, 594,34f, 6,73f, true) < 5f)
								{
									if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -3042,549f, 597,1118f, 6,612578f, -3046,965f, 595,6973f, 9,065809f, 5f, 0, true, 0))
									{
										vLocal_78 = { -3045,4f, 598,65f, 6,51f };
									}
								}
								vVar4 = { unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
								vVar5 = { vVar4 - vLocal_78 };
								vVar5.z = 0f;
								fVar10 = system::vmag(vVar5);
								unk_0x7367FB97975F1E29(vVar4, &(vVar4.f_2), 0, 0);
								fVar9 = (vLocal_78.z - vVar4.z);
								vLocal_79.x = unk_0xF5596B3A7E5F3C68(fVar9, fVar10);
								if (vLocal_79.x > 20f || vLocal_79.x < -330f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.x = 0f;
									vLocal_79.z = fLocal_139;
									vVar4 = { unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
									vVar5 = { vVar4 - vLocal_78 };
									vVar5.z = 0f;
									fVar10 = system::vmag(vVar5);
									unk_0x7367FB97975F1E29(vVar4, &(vVar4.f_2), 0, 0);
									fVar9 = (vLocal_78.z - vVar4.z);
								}
							}
							if (func_64(vLocal_53, -526,58f, -1222,79f, 17,46f, 10f, 0))
							{
								if (unk_0x8AE9E5E8F6DC40C9(vLocal_78, -538,4412f, -1214,903f, 16,79794f, -520,3268f, -1223,249f, 20,556f, 6,5f, 0, true))
								{
									if (vLocal_79.z < 35f || vLocal_79.z > 275f)
									{
										if (vLocal_79.z < 335f)
										{
											vLocal_79.z = 260f;
										}
										else
										{
											vLocal_79.z = 55f;
										}
									}
									else if (vLocal_79.z > 107,2072f && vLocal_79.z < 210f)
									{
										if (vLocal_79.z > 154,6742f)
										{
											vLocal_79.z = 233f;
										}
										else
										{
											vLocal_79.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 4)
						{
							if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 183,6065f, 6636,653f, 30,6299f) < system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 172,2291f, 6631,007f, 30,7398f))
							{
								vLocal_78 = { 183,6065f, 6636,653f, 30,6299f };
								vLocal_79 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_78 = { 172,2291f, 6631,007f, 30,7398f };
								vLocal_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
							{
								vVar2 = { unk_0xB3328BA8976B416C(iLocal_56, 1) };
							}
							vVar3 = { vVar1 - vVar2 };
							vLocal_78 = { vVar1 };
							vLocal_78 = { vLocal_78.x, vLocal_78.y, (vLocal_78.z - 1f) };
							vLocal_79 = { 0f, 0f, unk_0xA67DD8488EBA5F6D(vVar3.x, vVar3.y) };
						}
						if (unk_0xBE3C4023003180FC(vLocal_78, -535,795f, -1222,23f, 17,4567f, true) < 5f)
						{
							vLocal_78 = { -521,475f, -1210,47f, 17,1848f };
							vLocal_79 = { 0f, 0f, 308,502f };
						}
						if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
						{
							unk_0x5380482A432E314E(&iLocal_73);
						}
						if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
						{
							if (!unk_0xB8DE76287EDC4957(iVar0, 0))
							{
								iVar0 = unk_0xC733212BF9066BDF();
								unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iVar0), &vLocal_136, &vLocal_137);
								if (unk_0x0C88267282FD588F(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0) || unk_0x0C88267282FD588F(iVar0, unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0))
								{
									if (func_64(vLocal_53, -526,58f, -1222,79f, 17,46f, 10f, 0) && (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -529,7477f, -1218,399f, 16,78482f, -538,9778f, -1213,756f, 20,53685f, 7,5f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -529,7477f, -1218,399f, 16,78482f, -520,9798f, -1222,305f, 20,55204f, 7,5f, 0, true, 0)))
									{
										if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -529,7477f, -1218,399f, 16,78482f, -538,9778f, -1213,756f, 20,53685f, 7,5f, 0, true, 0))
										{
											vVar6 = { 2,9f, 12f, 8f };
											vLocal_75 = { -543,34f, -1216,8f, 17,96f };
											fLocal_77 = 337,5f;
											bVar8 = true;
										}
										else
										{
											vVar6 = { 2,9f, 12f, 8f };
											vLocal_75 = { -522,4418f, -1214,57f, 17,1848f };
											fLocal_77 = 246,7714f;
											bVar8 = true;
										}
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0x193F4218CC4CF4BB(iVar0, 0, 1, 1, 1);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
									else if (unk_0xBE3C4023003180FC(vLocal_53, -203,72f, -861,8f, 29,27f, true) < 5f && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -197,7616f, -865,9772f, 27,31116f, -191,161f, -849,0546f, 32,89275f, 10,25f, 0, true, 0))
									{
										vVar6 = { 2,9f, 12f, 8f };
										vLocal_75 = { -187f, -855,51f, 29,02f };
										fLocal_77 = 158,28f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
									else if (unk_0xBE3C4023003180FC(vLocal_53, -387,12f, 6045,79f, 30,5f, true) < 5f && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -390,4536f, 6044,05f, 29,99868f, -380,4771f, 6032,985f, 33,24879f, 6f, 0, true, 0))
									{
										vVar6 = { 2,9f, 12f, 8f };
										vLocal_75 = { -395,84f, 6051,16f, 31,19f };
										fLocal_77 = 139,92f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
									else if (unk_0xBE3C4023003180FC(vLocal_53, -2956,78f, 488,19f, 14,47f, true) < 5f && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2955,234f, 492,4626f, 13,80307f, -2967,116f, 493,0511f, 17,05663f, 9,75f, 0, true, 0))
									{
										vVar6 = { 2,9f, 12f, 8f };
										vLocal_75 = { -2972,31f, 490,07f, 15,03f };
										fLocal_77 = 357,64f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
									else if ((unk_0xBE3C4023003180FC(vLocal_53, 174,53f, 6637,64f, 30,57f, true) < 5f && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 178,246f, 6638,824f, 30,5274f, 173,4713f, 6634,083f, 33,6823f, 6f, 0, true, 0)) && unk_0x0F3033474C49912D(iVar0, 180,1225f, 6640,33f, 30,78129f, 171,623f, 6631,794f, 33,69934f, 8f, 0, true, 0))
									{
										vVar6 = { 2,9f, 12f, 8f };
										vLocal_75 = { 184,05f, 6628,75f, 31,27f };
										fLocal_77 = 89,37f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
									else
									{
										vVar6 = { 2,9f, 12f, 8f };
										fLocal_77 = unk_0xF0371FE6E2BF9599(iVar0);
										vLocal_75 = { func_61(vLocal_78, unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2)) };
										if (func_60(0f, 0f, 0f, vLocal_75, 0))
										{
											vLocal_75 = { unk_0xB3328BA8976B416C(iVar0, 1) };
										}
										if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iVar0)))
										{
											vLocal_137.x = (vLocal_137.x + 3f);
											vLocal_137.y = (vLocal_137.y + 3f);
										}
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0xBD8D47FDC6902B2D(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iVar0, fLocal_77);
												unk_0xACE486395AA1867D(iVar0, 1084227584);
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iVar0))
										{
											if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
											{
												unk_0xC91FE17AD7353B70(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_63(iVar0))
						{
							unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iVar0), &vLocal_136, &vLocal_137);
							if (unk_0x0C88267282FD588F(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0) || unk_0x0C88267282FD588F(iVar0, unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0))
							{
								unk_0xBD8D47FDC6902B2D(iVar0, vLocal_140, 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iVar0, fLocal_141);
								unk_0xACE486395AA1867D(iVar0, 1084227584);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_57))
						{
							unk_0xB3A8974D2C811672(iLocal_57, true, 0);
						}
						unk_0x2EB451A3616DA1F8(vLocal_78 - Vector(10f, 10f, 10f), vLocal_78 + Vector(10f, 10f, 10f), 0);
						unk_0xA896149A4DE38DEA(vLocal_78, 20f, 0);
						unk_0x60225D4F755DFDB1(vLocal_78, 10f, 0);
						unk_0x247EAA2E93D4A021(vLocal_78, (vLocal_137.y + 1f), 1, 0, 0, false);
						unk_0x49779D62887BC4A2(vLocal_78, 25f);
						unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), true);
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
						iLocal_68 = unk_0x8383F9C605E523B7(vLocal_78, vLocal_79, 2);
						unk_0x7122D672EBE0EA6E(iLocal_68, false);
						iLocal_97 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xE43C573FE3C5D758(iLocal_97, 15f);
						unk_0xEFF56C7BDABBF39B(iLocal_97, iLocal_68, sLocal_145, cLocal_142);
						unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
						unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
						unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
						{
							unk_0x957CEE967C939968(iLocal_56);
							unk_0x8E628F774C748D93(iLocal_56, iLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x7849794435F39D49(iLocal_97, true);
						unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_48(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						system::settimera(0);
						unk_0xC83821A7ED01F9E9(0);
						func_47(joaat("rc_wallets_returned"), 1);
						unk_0xFA3CE529DBB66C85(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
						{
						}
						if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
						{
						}
						if (unk_0x5E06F14AF78392CF(unk_0xFC1458A37D98B502()))
						{
						}
						if (unk_0x7CE28D2DD2AF0F42(unk_0xFC1458A37D98B502()))
						{
						}
					}
					unk_0x36853D5037847BF3();
					break;
				
				case 1:
					if ((unk_0xD56F740235B1E8F0(iLocal_68) && unk_0x463C4747B41E35A3(iLocal_68) == 1f) || func_44())
					{
						unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
						unk_0xA94D4506CF328732(unk_0x9EB17624F44A8DA4(), 0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
						{
							unk_0x6D624C6A284D7D07(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0x771A86309E0CA47B(iLocal_56, false);
							unk_0x60C54803C97FDAAB(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0x3E9CABD07B829173())
						{
							unk_0x957CEE967C939968(iLocal_56);
							vVar4 = { unk_0x09E51060F59912ED(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x7367FB97975F1E29(vVar4, &(vVar4.f_2), 0, 0);
							unk_0xBD8D47FDC6902B2D(iLocal_56, vVar4, 1, false, 0, 1);
							vVar4 = { unk_0x4AA2C5A4980B3F34(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x48ED7B2293A96722(iLocal_56, vVar4.z);
						}
						vVar4 = { unk_0x4AA2C5A4980B3F34(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
						if (func_64(vLocal_53, -526,58f, -1222,79f, 17,46f, 10f, 0))
						{
							if (func_43(unk_0xFC1458A37D98B502(), 215,68f, 60f))
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x380C1E7B7740D618(0, -503,46f, -1199,39f, 19,02f, 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
							else if (func_43(unk_0xFC1458A37D98B502(), 122,0371f, 60f))
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x380C1E7B7740D618(0, -543,35f, -1208,09f, 16,73f, 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
							else
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
						}
						else if (unk_0xBE3C4023003180FC(vLocal_53, 288,46f, -1256,71f, 28,44f, true) < 5f)
						{
							if (func_43(unk_0xFC1458A37D98B502(), 200,8887f, 60f))
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x380C1E7B7740D618(0, 289,08f, -1286,56f, 28,68f, 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
							else if (func_43(unk_0xFC1458A37D98B502(), 347,8599f, 60f))
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x380C1E7B7740D618(0, 241,22f, -1236,76f, 28,26f, 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
							else
							{
								unk_0x6931076730A4AC5D(&iLocal_61);
								unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 3,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
								unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
								unk_0x1B16DD5C115FE009(iLocal_61);
								unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
							}
						}
						else
						{
							unk_0x6931076730A4AC5D(&iLocal_61);
							unk_0x380C1E7B7740D618(0, unk_0x3F90543934DCD7E6(iLocal_56, 0f, 2,5f, 0f), 1f, 20000, 0,25f, 5, 1193033728);
							unk_0x93F12E7D8D931858(0, unk_0xF0371FE6E2BF9599(iLocal_56), 1);
							unk_0x1B16DD5C115FE009(iLocal_61);
							unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
						}
						unk_0x31BBD48AA2503617(iLocal_56, -668482597, true, 0, 0);
						unk_0x5718F894FDA63A9E(iLocal_56, 1);
						unk_0xE9B3D12A64CC7C1A(iLocal_56, true);
						func_42(&iLocal_73);
						system::settimerb(0);
						unk_0x2C5E25A27FEE0F8A(0);
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
							if (!func_41())
							{
								unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_57))
						{
							unk_0x452336926718D62A(&iLocal_57);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
						{
							unk_0x6D624C6A284D7D07(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x28B42081D6BEFFF2(unk_0xFC1458A37D98B502(), false);
						unk_0xBB9A3C553EECB180(0f);
						unk_0x7849794435F39D49(iLocal_97, false);
						func_40();
						unk_0x02934BABFD4CD384(iLocal_97, 0);
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
						if (unk_0x3E9CABD07B829173())
						{
							unk_0x59C3AC31C7544A28(500);
							while (unk_0x9BB64DDCD9C7B076())
							{
								system::wait(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						system::wait(0);
						unk_0x90CE99E954B80CFF(0, 0, 3, 0);
						func_78(0, 1, 1, 0);
						func_3(func_35(), 1, iVar14);
						func_284(1);
					}
					else
					{
						unk_0x36853D5037847BF3();
						if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -3856156))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_56) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (unk_0x5D67DB68EF61B3E1(iLocal_57, unk_0xFC1458A37D98B502()))
								{
									unk_0x6B7C10B19928914F(iLocal_57, 0, true);
									if (unk_0x6668BA66B78B4E7C(iLocal_56))
									{
										unk_0xA9D382E7BA095148(iLocal_57, iLocal_56, unk_0xDD09837E5235FE91(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0xA9D382E7BA095148(iLocal_57, iLocal_56, unk_0xDD09837E5235FE91(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
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

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29ED
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_104555.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_104555.f_28020[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A36
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_34();
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
					func_33(99, 1);
					func_47(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_47(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_47(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_property"), iParam3);
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
									func_47(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, iParam3);
					break;
				
				case 1:
					func_33(97, iParam3);
					break;
				
				case 2:
					func_33(96, iParam3);
					break;
			}
			func_33(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor((fVar0 * system::to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_47(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_35861 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0x3035
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

void func_6(int iParam0)//Position - 0x32B7
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

void func_7(int iParam0)//Position - 0x3311
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
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
	else if (unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0) || unk_0xC80D31E4B587871C(Global_2097152[func_9() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_20534.f_471), iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_2097152[func_9() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xE3C33644878DCCFD("COUP_RED");
		unk_0xA6D2B267C377D7B2(func_8(iParam0));
		unk_0x9F42263EE935D84B(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0x33E5
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

int func_9()//Position - 0x3468
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_10(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3475
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
		iParam2 = func_11();
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

int func_11()//Position - 0x3941
{
	return Global_1312736;
}

void func_12(int iParam0)//Position - 0x394D
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
}

bool func_13(int iParam0)//Position - 0x396D
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x3A711520F83BAE98())
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20534.f_471, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2097152[func_9() /*12130*/].f_7676.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)//Position - 0x39BB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x39F8
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

int func_16(int iParam0, int iParam1)//Position - 0x3CB8
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
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

int func_17(bool bParam0)//Position - 0x3F5A
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
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)//Position - 0x4013
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)//Position - 0x402E
{
	if (func_31(14) && !func_30(iParam0))
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
	if (func_29(&Global_4267379))
	{
		if (func_27(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_4267379, iParam0))
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

int func_20(var uParam0, int iParam1)//Position - 0x40CB
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)//Position - 0x417C
{
	int iVar0;
	
	if (unk_0xF9F3676C0864728D(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x41F7
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)//Position - 0x4208
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_4267378 - 0,5f));
}

void func_24(var uParam0, int iParam1)//Position - 0x423C
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)//Position - 0x424C
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

float func_26(var uParam0)//Position - 0x4269
{
	return uParam0->f_80;
}

bool func_27(var uParam0, int iParam1)//Position - 0x4275
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)//Position - 0x4287
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

bool func_29(var uParam0)//Position - 0x42B4
{
	return uParam0->f_79 == 1;
}

int func_30(int iParam0)//Position - 0x42C2
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

bool func_31(int iParam0)//Position - 0x4312
{
	return Global_35861 == iParam0;
}

int func_32(int iParam0, int iParam1)//Position - 0x4320
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

void func_33(int iParam0, int iParam1)//Position - 0x4371
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

void func_34()//Position - 0x43CE
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

int func_35()//Position - 0x4443
{
	func_36();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_36()//Position - 0x445C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_39(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_38(unk_0xFC1458A37D98B502());
			if (func_37(iVar0) && (!func_31(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_37(Global_104555.f_2353.f_539.f_4301))
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

bool func_37(int iParam0)//Position - 0x4559
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x4565
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)//Position - 0x45A2
{
	if (func_37(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()//Position - 0x45CC
{
	int iVar0;
	
	iVar0 = unk_0x5AC38B4D80D4E352(26379945, unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0,5f, -1f, 0,5f), 0f, 0f, unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), 65f, 1, 2);
	unk_0x7849794435F39D49(iVar0, true);
}

int func_41()//Position - 0x460A
{
	if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0)//Position - 0x4623
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

int func_43(int iParam0, float fParam1, float fParam2)//Position - 0x465B
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xF0371FE6E2BF9599(iParam0) < fVar0 && unk_0xF0371FE6E2BF9599(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0xF0371FE6E2BF9599(iParam0) < fVar0 || unk_0xF0371FE6E2BF9599(iParam0) > fVar1)
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

int func_44()//Position - 0x46FC
{
	if (func_45(1000))
	{
		unk_0xAE83ED4C9081AE6F(500);
		while (unk_0x2D0EF1D268F33F25())
		{
			unk_0x36853D5037847BF3();
			system::wait(0);
		}
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x472D
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_46())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_46()//Position - 0x4777
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

void func_47(int iParam0, int iParam1)//Position - 0x47A9
{
	int iVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xBFFF62F75445099D(iParam0, iVar0, 1);
}

int func_48(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)//Position - 0x47CC
{
	var uVar0;
	var uVar1;
	
	func_59(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_58(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_49(&uVar0, &uVar1, iParam6, 0);
}

int func_49(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x4825
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_55();
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
				func_54();
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
				if (func_53())
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
			if (func_52())
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
			func_51();
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
		func_50();
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
		func_57();
	}
	return 0;
}

void func_50()//Position - 0x4B8F
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

void func_51()//Position - 0x4BC0
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

int func_52()//Position - 0x4C55
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_53()//Position - 0x4C7C
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

void func_54()//Position - 0x4D15
{
	if (func_31(14))
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
		Global_14453 = func_35();
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

void func_55()//Position - 0x4DB7
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

bool func_56(int iParam0, int iParam1)//Position - 0x4E0E
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

void func_57()//Position - 0x4E49
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

void func_58(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x4EA0
{
	Global_15753 = iParam0;
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4F28
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

bool func_60(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x4F7E
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_61(vector3 vParam0, vector3 vParam1)//Position - 0x4FC5
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0xC733212BF9066BDF();
	if (!unk_0x9761C10D57B68069(iVar0))
	{
		unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iVar0), &vVar3, &vVar4);
	unk_0x49A7AD0000D6AF17(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (system::vdist(vParam0, -3039,655f, 602,4346f, 6,5719f) <= 25f)
	{
		vVar1 = { -3045,49f, 604,46f, 7,02f };
		iVar5 = 8;
	}
	else if (system::vdist(vParam0, 288,06f, -1257,1f, 28,44f) <= 25f)
	{
		vVar1 = { 278,97f, -1255,06f, 28,88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < system::vdist(vVar2, unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x3F90543934DCD7E6(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0x8941008352A0F66A(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0x16ACABF450EB00B4(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0xBE3C4023003180FC(vVar1, vParam0, true) <= 5f || unk_0xBE3C4023003180FC(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		system::wait(0);
	}
	return vVar1;
}

Vector3 func_62(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x55C6
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

int func_63(int iParam0)//Position - 0x5613
{
	if (func_105(iParam0))
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

int func_64(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x563D
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

void func_65(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x56B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	uParam2->f_2 = func_67(iParam0, unk_0xFC1458A37D98B502(), 1);
	fVar3 = func_67(iParam0, unk_0xFC1458A37D98B502(), 1);
	fVar4 = func_67(iParam0, unk_0xFC1458A37D98B502(), 1);
	vVar10 = { unk_0xB3328BA8976B416C(iParam0, 0) - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
	if (unk_0x3A801AA34DD821BE(sParam3))
	{
		vVar9 = { unk_0x09E51060F59912ED(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_66(unk_0xB3328BA8976B416C(iParam0, 0), *uParam1, 1);
					*uParam1 = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(iParam0, 0), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0xFF32E7A273D539FD(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0,5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x16ACABF450EB00B4(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8,5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7,5f);
							}
							else
							{
								fVar4 = (fVar3 - (7,5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x9EA50C5EC175E58E(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_66(vVar9 + Vector(-0,75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		system::wait(0);
	}
}

float func_66(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x5870
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

float func_67(int iParam0, int iParam1, int iParam2)//Position - 0x58D5
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	return func_66(vVar0, vVar1, iParam2);
}

void func_68(vector3 vParam0, float fParam1, float fParam2)//Position - 0x5901
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - vParam0 };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_69(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_69(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1,33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1,33f) - 1f);
	}
}

int func_69(int iParam0, float fParam1, float fParam2)//Position - 0x5A02
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		fVar0 = unk_0xF0371FE6E2BF9599(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_70(int iParam0)//Position - 0x5A89
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_71(int iParam0)//Position - 0x5AB2
{
	if (Global_14615)
	{
		func_72(0, 0);
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
	if (!func_52())
	{
		Global_14453.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)//Position - 0x5B22
{
	if (bParam0)
	{
		if (func_73(0))
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

int func_73(int iParam0)//Position - 0x5B96
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

void func_74()//Position - 0x5BF0
{
	Global_14622 = 0;
	func_75();
}

void func_75()//Position - 0x5C00
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_76(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5C21
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
	func_77(iParam0);
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

void func_77(int iParam0)//Position - 0x5DB0
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

void func_78(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5DDC
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_85(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_52())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_84(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_85(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_84(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_82(unk_0x9EB17624F44A8DA4())) && !func_80(unk_0x9EB17624F44A8DA4(), 0)) && !func_79())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_82(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_79()//Position - 0x5EF5
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_80(int iParam0, int iParam1)//Position - 0x5F12
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_81(-1, 0) == 8;
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

int func_81(int iParam0, bool bParam1)//Position - 0x5F5D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_11();
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

int func_82(int iParam0)//Position - 0x5F9E
{
	if (func_80(iParam0, 0))
	{
		return 1;
	}
	if (func_83())
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

bool func_83()//Position - 0x5FE0
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_84(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5FF1
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

void func_85(int iParam0)//Position - 0x6024
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

void func_86()//Position - 0x6047
{
	Global_14622 = 0;
	func_57();
}

int func_87()//Position - 0x6057
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x6079
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_87())
		{
			return 1;
		}
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, bool bParam2)//Position - 0x609A
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

bool func_90(int iParam0)//Position - 0x617F
{
	return func_91(func_92(iParam0));
}

int func_91(char* sParam0)//Position - 0x6191
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

char* func_92(int iParam0)//Position - 0x61A4
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

int func_93()//Position - 0x61E7
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -190,8152f, -801,3224f, 25,45401f, -214,8212f, -866,6472f, 35,0318f, 40f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 270,5801f, -1290,954f, 24,16572f, 270,499f, -1238,311f, 34,52738f, 58,25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -3038,987f, 606,4774f, 2,589385f, -3057,039f, 599,7103f, 12,70948f, 19,25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 170,8581f, 6619,894f, 30,31941f, 183,9522f, 6632,882f, 34,06088f, 22,25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -9,663248f, -938,2167f, 24,29024f, 48,12534f, -959,4428f, 34,60982f, 7,5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 283,0487f, -923,3091f, 24,13956f, 301,367f, -871,6924f, 34,4707f, 6,75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1053,799f, -772,7601f, 53,31232f, 1112,018f, -772,2864f, 60,16156f, 14,75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2097,21f, -292,7766f, 8,141721f, -2101,908f, -345,41f, 18,23235f, 54,25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -799,6841f, -1117,781f, 5,659806f, -820,5555f, -1080,585f, 16,38764f, 29,5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -731,1746f, -820,053f, 18,06713f, -670,6583f, -821,2724f, 29,66125f, 8f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -379,9555f, 6033,261f, 29,74875f, -394,2914f, 6047,678f, 33,9986f, 7f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -393,6422f, 6056,547f, 29,75011f, -402,4834f, 6047,817f, 33,99312f, 17,5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -294,338f, -833,5905f, 26,65178f, -330,661f, -827,2508f, 38,64983f, 16,5f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -294,1309f, -836,8602f, 26,72095f, -284,6938f, -814,233f, 37,38612f, 11f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -253,9362f, -689,096f, 28,56934f, -278,4698f, -682,0773f, 38,52502f, 9,5f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -253,3138f, -687,6628f, 28,5611f, -247,2367f, -703,1184f, 38,8144f, 9,5f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -255,6709f, -726,2742f, 28,5187f, -247,2367f, -703,1184f, 38,8144f, 9,5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 114,2641f, -9,324284f, 62,78819f, 75,47891f, 4,897117f, 73,96004f, 7f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -544,5211f, -1200,006f, 12,87966f, -509,3911f, -1216,772f, 23,72543f, 41f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2945,132f, 491,4792f, 13,2899f, -2971,825f, 492,9101f, 18,0671f, 10f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x66C2
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_102();
		}
		else
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
			{
				if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_55) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_55))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_112(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0x58786AA7A9E510C0(iLocal_89))
				{
					func_47(joaat("rc_wallets_recovered"), 1);
					unk_0xFA3CE529DBB66C85(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0xC4803EF57E953FF3(0, 200, 250);
					func_95(2);
					bLocal_95 = true;
				}
				else if (unk_0xA6DECE14FC9A8C51(iLocal_60))
				{
					if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0x20752E4B9ABBF6F5(iLocal_89)) > 150f)
					{
						if (unk_0x3AB6A1A9084FB0A4(iLocal_56))
						{
							func_266();
						}
						else if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_56, 1)) > 100f)
						{
							func_266();
						}
					}
				}
			}
		}
	}
}

void func_95(int iParam0)//Position - 0x67CB
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_96(char* sParam0, int iParam1)//Position - 0x68AC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

void func_97(var uParam0)//Position - 0x68C3
{
	*uParam0 = -99;
}

int func_98(int iParam0, bool bParam1, int iParam2)//Position - 0x68D1
{
	iParam2 = iParam2;
	return func_99(iParam0, bParam1, 145);
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x68E7
{
	int iVar0;
	
	iVar0 = func_100(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x6939
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_101(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_101(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_101(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_101(bool bParam0, float fParam1, float fParam2)//Position - 0x69DD
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_102()//Position - 0x69F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0x872F1C1F8587CCC7(&iVar1, 3);
		unk_0x872F1C1F8587CCC7(&iVar1, 4);
		unk_0x872F1C1F8587CCC7(&iVar1, 1);
		iLocal_89 = unk_0x06583789B8C15A6C(iVar0, unk_0x1478170665DA3CEC(iLocal_55, 1067030938, 1069547520), iVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_103(iLocal_89);
		func_115(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0xA6DECE14FC9A8C51(iLocal_59))
		{
			unk_0xE30CF11C0EE14316(&iLocal_59);
		}
		if (func_105(iLocal_56))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_170(iLocal_56, 242628503) && !unk_0x3AB6A1A9084FB0A4(iLocal_56))
			{
				unk_0x6931076730A4AC5D(&iLocal_61);
				if (!unk_0x0C88267282FD588F(iLocal_56, vLocal_138, 0,5f, 0,5f, 0,5f, false, true, 0))
				{
					unk_0x6EF694689373EE8D(0, vLocal_138, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
				unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_61);
				unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
				{
					if (unk_0xA5F6598E13F98E08(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0x7A70772AE40E3821(iLocal_56, cLocal_93, "pickup_low") > 0,35f)
						{
							if (unk_0xB8B3E5529EDB87D4(iLocal_89))
							{
								func_115(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0x60727D07B2D72C82(iLocal_89);
								unk_0x6D624C6A284D7D07(iLocal_56, iLocal_133);
								unk_0x771A86309E0CA47B(iLocal_56, false);
								unk_0x486F346ADFE56674(&iLocal_56);
								func_284(1);
							}
						}
					}
					else if (unk_0x78F50AA8F955BEFC(iLocal_56, 242628503) == 7)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_56);
						unk_0x6931076730A4AC5D(&iLocal_61);
						unk_0x12C9D41D52A560D6(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 2048, 2);
						unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 3000);
						unk_0x93F12E7D8D931858(0, 1193033728, 0);
						unk_0x1B16DD5C115FE009(iLocal_61);
						unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
						unk_0xE9B3D12A64CC7C1A(iLocal_56, true);
					}
				}
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
		{
			if (unk_0xB8B3E5529EDB87D4(iLocal_89))
			{
				if (unk_0x0C88267282FD588F(iLocal_56, unk_0x20752E4B9ABBF6F5(iLocal_89), 10f, 10f, 7f, false, true, 0))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_56);
					unk_0x6931076730A4AC5D(&iLocal_61);
					unk_0x380C1E7B7740D618(0, unk_0x20752E4B9ABBF6F5(iLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0x7FC89099E65488E2(0, unk_0x20752E4B9ABBF6F5(iLocal_89), 0);
					unk_0x12C9D41D52A560D6(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), 3000, 2048, 2);
					unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 3000);
					unk_0x93F12E7D8D931858(0, 1193033728, 0);
					unk_0x1B16DD5C115FE009(iLocal_61);
					unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
					unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
					unk_0xE9B3D12A64CC7C1A(iLocal_56, true);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_103(int iParam0)//Position - 0x6CFD
{
	return func_104(iParam0);
}

int func_104(int iParam0)//Position - 0x6D0B
{
	int iVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4DFBD39F0EACA5CC(iParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_101(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	return iVar0;
}

int func_105(int iParam0)//Position - 0x6D43
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

void func_106()//Position - 0x6D64
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xEBE499597C718EB8(iLocal_55, unk_0xFC1458A37D98B502(), 1))
			{
				unk_0x2B0DDE3D071497AD(iLocal_55);
				bVar0 = true;
			}
			if (unk_0xB8DE76287EDC4957(iLocal_73, 0) && unk_0xA8D0477084E86A92(iLocal_55, iLocal_73, 0))
			{
				if (unk_0xD081A26A065EE87B(iLocal_73))
				{
					if (unk_0x1ECACBE8459041A9(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xB8DE76287EDC4957(iLocal_73, 0) || !func_170(iLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0xA6FA9E5D08F067AD(iLocal_55))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0xA8D0477084E86A92(iLocal_55, iLocal_73, 0))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_55, 242628503) != 1 && unk_0x78F50AA8F955BEFC(iLocal_55, 242628503) != 0)
						{
							unk_0x6931076730A4AC5D(&iLocal_62);
							unk_0x16416C5B54FDBCBB(0, 0, 0);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_62);
							unk_0xAB30B1CF01A198C1(iLocal_55, iLocal_62);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
						}
					}
					else if (unk_0x78F50AA8F955BEFC(iLocal_55, 242628503) != 1 && unk_0x78F50AA8F955BEFC(iLocal_55, 242628503) != 0)
					{
						unk_0x6931076730A4AC5D(&iLocal_62);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_62);
						unk_0xAB30B1CF01A198C1(iLocal_55, iLocal_62);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_62);
					}
					iVar1 = unk_0x3F16BDDA53C396EE(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0xB8E08BD5B184DF4E(iLocal_55);
						if (func_105(unk_0xFC1458A37D98B502()))
						{
							unk_0xD7F5B2902EBBD04E(iLocal_55, unk_0xFC1458A37D98B502(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_107()//Position - 0x6EF2
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0xEC211A86AB3726B6(iLocal_55))
		{
			func_108(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_173(&Local_107, 2);
			}
			unk_0x68433819717660CF(&iLocal_55);
			if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
			{
				if (unk_0xEC211A86AB3726B6(iLocal_73))
				{
					unk_0xC91FE17AD7353B70(&iLocal_73);
				}
			}
		}
	}
	else if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), unk_0xB3328BA8976B416C(iLocal_55, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x6F9F
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if ((unk_0x6ADD12BF4D6D2587(iParam1) && unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502())) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x8A3FF8E81B40BB75(iParam1))
			{
				if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam1), 0))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, 1);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, 0);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
			else if (unk_0x52C56492660097C7(iParam1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam1)))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, 1);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, 0);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_109(int iParam0, char* sParam1, int iParam2)//Position - 0x70F8
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_110(iParam2), 1);
}

int func_110(int iParam0)//Position - 0x710F
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

float func_111(int iParam0, int iParam1, bool bParam2)//Position - 0x7304
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

void func_112(int iParam0, var uParam1)//Position - 0x7362
{
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if (unk_0x53C562FD2B9E3AB0() > *uParam1 + 500)
		{
			if (unk_0x054F3EDDF5178FA5(iParam0) == 1)
			{
				unk_0xDB6E56C09E5CF0AA(iParam0, true);
			}
			else
			{
				unk_0xDB6E56C09E5CF0AA(iParam0, false);
				unk_0x0C71C8E276E3EC54(iParam0, 1);
			}
			*uParam1 = unk_0x53C562FD2B9E3AB0();
		}
		if (!unk_0xF491DD47B88AA84E() && func_113(0))
		{
			func_95(1);
		}
	}
}

bool func_113(int iParam0)//Position - 0x73C0
{
	return unk_0xC80D31E4B587871C(Global_104551, iParam0);
}

void func_114()//Position - 0x73D2
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0xAAA8D20859E2D36D(iLocal_55, iLocal_73) || unk_0x78F50AA8F955BEFC(iLocal_55, -1273030092) == 1)
					{
						unk_0x2931C350CED41AD3(iLocal_55, iLocal_73, vLocal_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0xD081A26A065EE87B(iLocal_73))
					{
						unk_0xB69E9345974B021E(iLocal_73, 0,1f, 1000, 0, 0, 0, -1);
					}
					unk_0x2931C350CED41AD3(iLocal_55, iLocal_73, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0x6931076730A4AC5D(&iLocal_61);
				unk_0x380C1E7B7740D618(0, 182,61f, 6637,91f, 30,54f, 3f, 20000, 0,25f, 1, 1193033728);
				unk_0x380C1E7B7740D618(0, 240,53f, 6694,1f, 28,62f, 3f, 20000, 0,25f, 1, 1193033728);
				unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_61);
				unk_0xAB30B1CF01A198C1(iLocal_55, iLocal_61);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
			}
			else
			{
				unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0xBE3C4023003180FC(vLocal_53, -3044,11f, 594,34f, 6,73f, true) < 5f)
			{
				unk_0xFC5999E8B820470E(iLocal_55, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 300f, -1, 0, 0);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0xFC5999E8B820470E(iLocal_55, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
	{
		unk_0xE9B3D12A64CC7C1A(iLocal_55, true);
	}
}

bool func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x75C9
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
	Global_2621441 = 0;
	return func_116(sParam2, iParam3, 0);
}

int func_116(char* sParam0, int iParam1, bool bParam2)//Position - 0x7617
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_55();
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
				func_54();
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
				if (func_53())
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
			if (func_52())
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
			func_51();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_50();
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
		func_57();
	}
	return 0;
}

bool func_117()//Position - 0x78E3
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + unk_0xD0E00576168D19BB(iLocal_56, 31086, 0f, 0f, 0f) };
		vVar2 = { vVar2 + unk_0xD0E00576168D19BB(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0x4E69510C44147A5C(-1, unk_0xD0E00576168D19BB(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_119())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0x78F50AA8F955BEFC(iLocal_56, 474215631) != 1)
			{
				if (func_118(iLocal_56))
				{
					unk_0xF21E6EBE8EFDCC28(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_118(int iParam0)//Position - 0x7A34
{
	if (func_105(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x7A54
{
	if (func_105(iLocal_55))
	{
		if (func_111(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_120()//Position - 0x7A7C
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x6ADD12BF4D6D2587(iLocal_56))
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xEBE499597C718EB8(iLocal_56, unk_0xFC1458A37D98B502(), 1) && unk_0x9F887157983E8EFC(iLocal_56))
			{
				bVar0 = true;
				unk_0x2B0DDE3D071497AD(iLocal_56);
			}
			if (unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iLocal_56, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_121(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_119())
		{
			bVar0 = false;
			if (unk_0x78F50AA8F955BEFC(iLocal_56, 474215631) != 1)
			{
				if (func_118(iLocal_56))
				{
					unk_0xF21E6EBE8EFDCC28(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
		{
			if (unk_0x78F50AA8F955BEFC(iLocal_55, 1805844857) == 7)
			{
				unk_0xAE6EBBBBD8B9FB30(iLocal_55, 17, true);
				unk_0xAE6EBBBBD8B9FB30(iLocal_55, 13, false);
				unk_0xD68E88A8E0BE8697(iLocal_55, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7B61
{
	vector3 vVar0;
	
	if (func_105(unk_0xFC1458A37D98B502()) && func_105(iParam0))
	{
		if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
		if (func_135(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
		{
			if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
			{
				vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - unk_0xB3328BA8976B416C(iParam0, 1) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_134(unk_0xFC1458A37D98B502(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_122(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1)//Position - 0x7C1C
{
	float fVar0;
	
	if (func_105(unk_0xFC1458A37D98B502()) && func_105(iParam0))
	{
		if (func_133(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
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
				if (func_123(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_123(int iParam0, float fParam1)//Position - 0x7C92
{
	return func_124(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

bool func_124(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7CAA
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_132(iParam0, iParam1);
	if (!func_105(iParam0) || !func_105(iParam1))
	{
		if (iVar2 != -1)
		{
			func_131(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_128(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_127();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_125(&(Local_49[iVar2 /*4*/]), vVar1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_125(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7D6B
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_105(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_126(iParam2, iParam5) };
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
		func_105(iVar3);
		if (unk_0x07F64790D10D1DB5(iVar3) == iParam2)
		{
			if (bLocal_50)
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
		func_105(iVar3);
		if (unk_0x88DDBE9908752BF0(iParam2, 0))
		{
			if (unk_0x79A6CD762DCCABE4(iVar3) == unk_0xDFD115BB10FE46A9(iParam2, 0))
			{
				if (bLocal_50)
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

Vector3 func_126(int iParam0, int iParam1)//Position - 0x7E97
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

int func_127()//Position - 0x7F5C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x7FA6
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_130(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_130(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_129(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_129(vector3 vParam0, vector3 vParam1)//Position - 0x8039
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_130(vector3 vParam0)//Position - 0x805A
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

void func_131(var uParam0)//Position - 0x8099
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x80B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0)//Position - 0x80F3
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0, int iParam1, float fParam2)//Position - 0x811B
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xCE3B2111021F7234(iParam0) };
	vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / system::vdist(vVar1, 0f, 0f, 0f)) > system::cos(fParam2);
}

int func_135(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8162
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
	if (func_105(unk_0xFC1458A37D98B502()) && func_105(iParam0))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_139(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
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
				if (func_139(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x825D
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
				if (func_137(iParam0, fParam1))
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
			if (func_137(iParam0, fParam1))
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

int func_137(int iParam0, float fParam1)//Position - 0x8369
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_138(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x83FE
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_130(vParam1 - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_130(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_129(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x848C
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

void func_140()//Position - 0x84D4
{
	if (bLocal_90 || unk_0x191BE1BC8F26F3C1(iLocal_55, 0))
	{
		func_168(&uLocal_152, 0, 0);
	}
	else
	{
		func_141(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_141(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x850B
{
	func_142(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_142(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x8525
{
	func_143(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_143(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8542
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_168(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_144(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_144(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x857A
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x38DF88792E2574E5())
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x8C1C362CA8299475(iVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_91(iVar0))
	{
		func_167();
	}
	if (func_166(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
	{
		iVar1 = 0;
		if (unk_0x52C56492660097C7(iParam1))
		{
			unk_0x2BBAE63213C46A53(unk_0x07F64790D10D1DB5(iParam1));
			unk_0xCD0F114AD6BF60EF(unk_0x07F64790D10D1DB5(iParam1), 1);
			if (unk_0xE5DC4C97F224C40D(unk_0x07F64790D10D1DB5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8A3FF8E81B40BB75(iParam1))
		{
			unk_0xCCC628BF28A8DFAA(unk_0x79A6CD762DCCABE4(iParam1));
			if (unk_0xCBEBCF7C9A28DE5C(unk_0x79A6CD762DCCABE4(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam1))
		{
			unk_0x18D4723323F29A6F(unk_0xE5D69D5333979D8B(iParam1));
			if (unk_0x28F138D7B5EE3C9A(unk_0xE5D69D5333979D8B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x38DF88792E2574E5())
		{
			if (func_161(uParam0, bParam5, bParam7, 0))
			{
				func_158(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_148(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_91(iVar0))
							{
								func_96(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_147(1);
								}
							}
						}
					}
				}
			}
			else if (func_148(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_91(iVar0))
						{
							func_96(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_147(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x8C1C362CA8299475(sParam3))
			{
				if (func_91(sParam3))
				{
					unk_0x3E80C2F7BC665259(1);
				}
			}
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
			{
				if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
					{
						func_168(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_168(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_168(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_168(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_168(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_168(uParam0, iVar0, 1);
				}
			}
			if (!func_161(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_146(uParam0))
				{
					func_145(uParam0);
				}
			}
		}
	}
	else
	{
		func_168(uParam0, iVar0, 0);
	}
}

void func_145(var uParam0)//Position - 0x88E7
{
	if (func_166(unk_0xFC1458A37D98B502()))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0xBC3B7443617858A0(true);
		unk_0x2C5E25A27FEE0F8A(0);
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		unk_0x704F5ADD5B29DB63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_146(var uParam0)//Position - 0x8950
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x53C562FD2B9E3AB0()
		{
			return 1;
		}
	}
	return 0;
}

int func_147(bool bParam0)//Position - 0x897B
{
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104555.f_10019.f_100++;
			}
			return Global_104555.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104555.f_10019.f_101++;
			}
			return Global_104555.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104555.f_10019.f_102++;
			}
			return Global_104555.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_148(char* sParam0)//Position - 0x8A25
{
	if (!func_149(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_147(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8ABE
{
	if (bParam0)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 0;
	}
	if (func_73(0))
	{
		return 0;
	}
	if (func_157())
	{
		return 0;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				return 0;
			}
			if (unk_0x213F4DB5EC433017())
			{
				return 0;
			}
		}
	}
	if ((func_156() || func_155(Global_4456448.f_143970)) || func_154())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_153(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_153(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_153(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_150(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0)//Position - 0x8CE9
{
	if (iParam0 != func_152())
	{
		if (func_151(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_151(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_151(int iParam0, bool bParam1, bool bParam2)//Position - 0x8D4F
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

int func_152()//Position - 0x8D99
{
	return -1;
}

int func_153(int iParam0, int iParam1)//Position - 0x8DA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_154()//Position - 0x8E27
{
	return Global_2447174.f_16;
}

bool func_155(int iParam0)//Position - 0x8E35
{
	return iParam0 == 51;
}

var func_156()//Position - 0x8E42
{
	return Global_2447174.f_15;
}

bool func_157()//Position - 0x8E50
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_158(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x8E65
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316747 == 1)
	{
		return;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		func_168(uParam0, 0, 0);
	}
	if (func_60(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_159())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6668BA66B78B4E7C(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xBC3B7443617858A0(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xCDB72D70019A533E(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iParam1, -1, iVar3, iVar4);
	unk_0xA91E83FF512776B6("FocusIn", 0, 0);
	unk_0xE859EF37EA7362D3("HINT_CAM_SCENE");
	unk_0x4AFBCBFDE748D4E0(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_159()//Position - 0x8F75
{
	return func_160(unk_0x9EB17624F44A8DA4());
}

int func_160(int iParam0)//Position - 0x8F85
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_161(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x8FA4
{
	if (uParam0->f_1)
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_164(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_164(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_146(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (!func_165(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_164(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_164(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (func_163(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_162(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_162(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_146(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_149(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_167();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_162(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9310
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9362
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)//Position - 0x93AB
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)//Position - 0x940A
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x9460
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x8A3FF8E81B40BB75(iParam0))
		{
			if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x52C56492660097C7(iParam0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0423B20CB20B7901(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_167()//Position - 0x94BB
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

void func_168(var uParam0, int iParam1, int iParam2)//Position - 0x94CB
{
	char* sVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0x2C5E25A27FEE0F8A(iParam2);
		unk_0x704F5ADD5B29DB63("FocusIn");
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBC3B7443617858A0(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8C1C362CA8299475(sVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8C1C362CA8299475(uParam0->f_3))
	{
		if (func_91(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

float func_169(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x95A8
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

int func_170(int iParam0, int iParam1)//Position - 0x95E2
{
	if (func_118(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_171(char* sParam0)//Position - 0x9615
{
	func_172(sParam0);
}

void func_172(char* sParam0)//Position - 0x9623
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

void func_173(var uParam0, int iParam1)//Position - 0x9636
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_174()//Position - 0x9653
{
	unk_0x6931076730A4AC5D(&iLocal_61);
	unk_0xAC838A977FB6E6BC(0, iLocal_55, 750);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x12C9D41D52A560D6(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x1B16DD5C115FE009(iLocal_61);
	unk_0xAB30B1CF01A198C1(iLocal_56, iLocal_61);
	unk_0xFAA3EF7FF92E1F9E(&iLocal_61);
	if (unk_0xA6DECE14FC9A8C51(iLocal_58))
	{
		unk_0xE30CF11C0EE14316(&iLocal_58);
	}
	if (!unk_0xA6DECE14FC9A8C51(iLocal_59))
	{
		iLocal_59 = func_98(iLocal_55, 1, 0);
	}
	unk_0x9C27373CC69ECF87(iLocal_59, true);
	unk_0xC1CEF375B44856F4(0);
	unk_0x94BD6F0436473406(0,1f);
	func_114();
	if ((system::vdist(unk_0xB3328BA8976B416C(iLocal_56, 0), -2956,26f, 487,97f, 15,46f) > 5f && unk_0xBE3C4023003180FC(vLocal_53, -203,72f, -861,8f, 29,27f, true) > 5f) && unk_0xBE3C4023003180FC(vLocal_53, 288,46f, -1256,71f, 28,44f, true) > 5f)
	{
		if (func_111(unk_0xFC1458A37D98B502(), iLocal_56, 1) < 50f)
		{
			func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0x53C562FD2B9E3AB0();
	system::settimera(0);
	if (func_105(unk_0xFC1458A37D98B502()))
	{
		unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 1);
	}
	func_175(1);
}

int func_175(int iParam0)//Position - 0x980A
{
	if (func_177())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_176(Global_104544))
		{
			func_95(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_176(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x985D
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

int func_177()//Position - 0x988C
{
	switch (func_178(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_178(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x98C2
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
		if (func_182(0))
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
		if (!func_180(iParam2))
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
			func_179(uParam0, iParam4);
		}
	}
	return 2;
}

void func_179(var uParam0, int iParam1)//Position - 0x99F9
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

bool func_180(int iParam0)//Position - 0x9A48
{
	return func_181(iParam0, Global_35861);
}

int func_181(int iParam0, int iParam1)//Position - 0x9A59
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

int func_182(int iParam0)//Position - 0x9C3A
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_180(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_183()//Position - 0x9C5C
{
	if (iLocal_134 == -1)
	{
		if (unk_0x43E3A4534ED4A79C())
		{
			if (unk_0x841ED61760A7D07B(iLocal_55))
			{
				iLocal_134 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
	else if (unk_0x53C562FD2B9E3AB0() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0x4E69510C44147A5C(-1, vLocal_53, 50f))
	{
		return 1;
	}
	if ((unk_0x53C562FD2B9E3AB0() - iLocal_135) > 30000)
	{
		if (!unk_0xEC211A86AB3726B6(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_266();
		}
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_59))
	{
		if ((unk_0xBE3C4023003180FC(vLocal_53, -3044,11f, 594,34f, 6,73f, true) > 5f && unk_0xBE3C4023003180FC(vLocal_53, -712,9f, -819,32f, 22,73f, true) > 5f) && unk_0xBE3C4023003180FC(vLocal_53, 24,13f, -946,84f, 28,36f, true) > 5f)
		{
			if (unk_0x9E06F0EE20F58CED(unk_0xB3328BA8976B416C(iLocal_55, 0), 2,5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184()//Position - 0x9D4A
{
	if (system::vdist(vLocal_53, -3044,06f, 594,93f, 6,74f) < 5f)
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_59))
		{
			if (func_105(iLocal_56) && func_105(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_98(iLocal_55, 1, 0);
					unk_0x9C27373CC69ECF87(iLocal_59, false);
				}
			}
		}
		else
		{
			func_112(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0xA6DECE14FC9A8C51(iLocal_59))
	{
		if (func_105(iLocal_56) && func_105(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_98(iLocal_55, 1, 0);
				unk_0x9C27373CC69ECF87(iLocal_59, false);
			}
		}
	}
	else
	{
		func_112(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_185()//Position - 0x9E35
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { vLocal_53 };
	vVar1 = { 0f, 0f, fLocal_54 };
	vVar2 = { 10f, 10f, 5f };
	if (iLocal_65 == 1)
	{
		func_209();
		if (system::vdist(vLocal_53, -203,758f, -861,738f, 29,2684f) < 5f)
		{
			vLocal_74 = { -197,9643f, -868,5554f, 28,2738f };
			fLocal_76 = 196f;
			vLocal_75 = { -187,5415f, -858,1728f, 28,1863f };
			fLocal_77 = 160,391f;
			vLocal_136 = { -259,0351f, -865,7119f, 28f };
			vLocal_137 = { -130,3981f, -908,8096f, 40f };
			unk_0x5A5C7C96638EAA3E("ATM_1");
			unk_0x6FF834D85E2DD4C6(iLocal_106);
			while (!unk_0x9A0B2ED5055D3F0B(iLocal_106))
			{
				if (func_196())
				{
					func_266();
				}
				system::wait(0);
			}
			unk_0x2E4932E63763FE26(iLocal_106, true);
		}
		else
		{
			vLocal_74 = { -2968,5f, 494,48f, 14,82f };
			fLocal_76 = 55,24f;
			vLocal_75 = { -2973,03f, 496,38f, 14,96f };
			fLocal_77 = 3,18f;
			vLocal_136 = { -259,0351f, -865,7119f, 28f };
			vLocal_137 = { -130,3981f, -908,8096f, 40f };
			unk_0x6FF834D85E2DD4C6(iLocal_106);
			while (!unk_0x9A0B2ED5055D3F0B(iLocal_106))
			{
				if (func_196())
				{
					func_266();
				}
				system::wait(0);
			}
			unk_0x2E4932E63763FE26(iLocal_106, true);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_209();
		vLocal_74 = { 283,31f, -1249,51f, 28,95f };
		fLocal_76 = 78,25f;
		vLocal_75 = { 288,9906f, -1248,443f, 28,2847f };
		fLocal_77 = 75,9756f;
		vLocal_136 = { 266,3643f, -1313,829f, 28,59103f };
		vLocal_137 = { 265,1489f, -1215,932f, 36,20192f };
		unk_0x6FF834D85E2DD4C6(iLocal_106);
		while (!unk_0x9A0B2ED5055D3F0B(iLocal_106))
		{
			if (func_196())
			{
				func_266();
			}
			system::wait(0);
		}
		unk_0x2E4932E63763FE26(iLocal_106, true);
	}
	else if (iLocal_65 == 3)
	{
		func_209();
		vLocal_75 = { -1587,15f, -539,9152f, 34,3644f };
		fLocal_77 = 327f;
		vLocal_136 = { -1596,203f, -474,8844f, 32f };
		vLocal_137 = { -1595,572f, -565,8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_209();
		vLocal_74 = { 181,2355f, 6632,627f, 30,5732f };
		fLocal_76 = 182f;
		vLocal_75 = { 200,0727f, 6630,587f, 30,517f };
		fLocal_77 = 165f;
		vLocal_136 = { 178,1817f, 6660,375f, 31f };
		vLocal_137 = { 179,1249f, 6530,043f, 38f };
		unk_0x4EA8EA06C66E352C(0);
		unk_0x4C15495E88D71C61(179,5463f, 6625,689f, 30,2739f, 184,245f, 6635,661f, 31,5188f, false, 1);
		unk_0x6FF834D85E2DD4C6(iLocal_106);
		while (!unk_0x9A0B2ED5055D3F0B(iLocal_106))
		{
			if (func_196())
			{
				func_266();
			}
			system::wait(0);
		}
		unk_0x2E4932E63763FE26(iLocal_106, true);
	}
	else if (iLocal_65 == 5)
	{
		func_209();
	}
	if (func_187())
	{
		unk_0x247EAA2E93D4A021(vLocal_53, vVar2.x, 0, 0, 0, false);
		iLocal_63 = unk_0xCB389937EDB1519A(vLocal_53 - vVar2, vLocal_53 + vVar2, 0, 1, 1, 1);
		iLocal_56 = unk_0xAC992EFAD62C33BF(5, iLocal_105, vLocal_53, fLocal_54, 1, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_56, 13, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_56, 11, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_56, 17, false);
		unk_0x03924C68EFCBC511(iLocal_56, 6, 1, 0, 0);
		unk_0xCFF0CD14B439821D(iLocal_56, true, 1);
		unk_0x35829E9BFCED1A3F(iLocal_56, true);
		unk_0x5C5D33A1B2711D21(iLocal_56, false);
		unk_0x350CEE66BDF90273(iLocal_56, sLocal_147);
		unk_0x6D624C6A284D7D07(iLocal_56, 0);
		if (iLocal_71 == 1)
		{
			unk_0x03924C68EFCBC511(iLocal_56, 0, 0, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_56, 2, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_56, 3, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0xAC992EFAD62C33BF(22, iLocal_104, vLocal_53, 0f, 1, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_55, 17, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_55, 13, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_55, 6, true);
		unk_0xE17958D3FD0F9EE9(iLocal_55, 128, true);
		unk_0xCFF0CD14B439821D(iLocal_55, true, 1);
		unk_0x771A86309E0CA47B(iLocal_55, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_55, 42, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_55, 281, true);
		unk_0xAE01EF4BC84AFE7C(iLocal_55, 172, false);
		unk_0xAE01EF4BC84AFE7C(iLocal_55, 137, true);
		unk_0xDD88BF2396D7A4E8(iLocal_55);
		unk_0x350CEE66BDF90273(iLocal_55, sLocal_146);
		unk_0x3811A0FC01E02FC1(iLocal_55, 1);
		unk_0xAA93B7B448E10E40(iLocal_55, unk_0x09E51060F59912ED(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0, 2), 0, 0, 1);
		vVar3 = { unk_0x4AA2C5A4980B3F34(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0f, 2) };
		unk_0x48ED7B2293A96722(iLocal_55, vVar3.z);
		if (func_105(iLocal_56))
		{
			if (unk_0x6668BA66B78B4E7C(iLocal_56))
			{
				unk_0xAA93B7B448E10E40(iLocal_56, unk_0x09E51060F59912ED("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0x4AA2C5A4980B3F34("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0f, 2) };
			}
			else
			{
				unk_0xAA93B7B448E10E40(iLocal_56, unk_0x09E51060F59912ED("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0x4AA2C5A4980B3F34("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0f, 2) };
			}
			unk_0x48ED7B2293A96722(iLocal_56, vVar3.z);
		}
		unk_0x12C9D41D52A560D6(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0x6668BA66B78B4E7C(iLocal_56))
		{
			unk_0x12C9D41D52A560D6(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xFCCDDE0E48CF9588("random@atmrobberygen@female");
		}
		else
		{
			unk_0x12C9D41D52A560D6(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xFCCDDE0E48CF9588("random@atmrobberygen@male");
		}
		unk_0x66C1F257A00B2D4E(iLocal_55, 1);
		unk_0x771A86309E0CA47B(iLocal_56, true);
		unk_0x9E058151726E58DE(iLocal_55, joaat("weapon_pistol"), -1, true, true);
		unk_0xF28A81E331A3F337(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x385A213BEB355C2B(iLocal_55, joaat("weapon_pistol"), false);
		unk_0xE0F761CE722765C1(iLocal_55, 1, 0);
		switch (func_35())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_186(&Local_107, 0, unk_0xFC1458A37D98B502(), sLocal_112, 0, 1);
		func_186(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_186(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			iLocal_73 = unk_0xEA60F3B426BB095B(iLocal_106, vLocal_74, fLocal_76, true, true, false);
			unk_0xA15269351F50F113(iLocal_73, true, true, 0);
			unk_0x695BF4E9032C8B89(iLocal_73);
			unk_0xC7ED915AB706A5D8(iLocal_73, 1);
			if (iLocal_65 == 2)
			{
				unk_0x6D4A70E9DE82B24B(iLocal_73, 0, 0, 0);
			}
			else if (iLocal_65 == 1)
			{
				unk_0x35963CCE03600881(iLocal_55, 0);
				unk_0xB4AF8E4D052DCD63(iLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				unk_0x4BEFCD5DAE410A90(iLocal_73, 3);
			}
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		return 1;
	}
	else if (func_196())
	{
		func_266();
	}
	return 0;
}

void func_186(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA4F1
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

int func_187()//Position - 0xA58C
{
	unk_0x6450931B826B49D9("random@atmrobberygen@male");
	unk_0x6450931B826B49D9("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_195(&Local_164, 3);
		Local_164.f_146 = unk_0x4B64A8D052027742();
		func_194(&Local_164, iLocal_104);
		func_194(&Local_164, iLocal_105);
		func_194(&Local_164, iLocal_101);
		func_194(&Local_164, iLocal_102);
		func_192(&Local_164, cLocal_92);
		func_192(&Local_164, cLocal_148);
		func_192(&Local_164, cLocal_142);
		func_192(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0x3A801AA34DD821BE("random@atmrobberygen@male") && unk_0x3A801AA34DD821BE("random@atmrobberygen@female")) && func_188(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_188(var uParam0)//Position - 0xA631
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_189(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_189(var uParam0)//Position - 0xA693
{
	return func_190(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_190(int iParam0, char* sParam1, int iParam2)//Position - 0xA6AA
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		if (unk_0xC80D31E4B587871C(iParam0, 29))
		{
			switch (func_191(iParam0))
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

int func_191(int iParam0)//Position - 0xA79E
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

void func_192(var uParam0, char* sParam1)//Position - 0xA7CA
{
	func_193(uParam0, 1, -1, sParam1, 0);
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA7DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x74C475EB8E73D398(sParam3, "NULL"))
					{
						if (unk_0x74C475EB8E73D398(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
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
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], iParam1);
			unk_0x872F1C1F8587CCC7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1)//Position - 0xA8C5
{
	func_193(uParam0, 0, iParam1, "NULL", 0);
}

void func_195(var uParam0, int iParam1)//Position - 0xA8D9
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_196()//Position - 0xA8F0
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_51) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_208())
		{
			return 0;
		}
	}
	if (func_204())
	{
		return 1;
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_197(float fParam0, bool bParam1)//Position - 0xA976
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
		if (func_37(func_35()))
		{
			iVar5 = func_203();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_198(iVar1, &Var0);
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

void func_198(int iParam0, var uParam1)//Position - 0xAA2D
{
	switch (iParam0)
	{
		case 0:
			func_199(uParam1, "Abigail1", func_201(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 1:
			func_199(uParam1, "Abigail2", func_201(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 2:
			func_199(uParam1, "Barry1", func_201(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 3:
			func_199(uParam1, "Barry2", func_201(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 4:
			func_199(uParam1, "Barry3", func_201(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 5:
			func_199(uParam1, "Barry3A", func_201(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 6:
			func_199(uParam1, "Barry3C", func_201(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 7:
			func_199(uParam1, "Barry4", func_201(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_200(iParam0), 0, 0);
			break;
		
		case 8:
			func_199(uParam1, "Dreyfuss1", func_201(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 9:
			func_199(uParam1, "Epsilon1", func_201(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 10:
			func_199(uParam1, "Epsilon2", func_201(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 11:
			func_199(uParam1, "Epsilon3", func_201(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 12:
			func_199(uParam1, "Epsilon4", func_201(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 13:
			func_199(uParam1, "Epsilon5", func_201(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 14:
			func_199(uParam1, "Epsilon6", func_201(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 15:
			func_199(uParam1, "Epsilon7", func_201(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 16:
			func_199(uParam1, "Epsilon8", func_201(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 17:
			func_199(uParam1, "Extreme1", func_201(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 18:
			func_199(uParam1, "Extreme2", func_201(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 19:
			func_199(uParam1, "Extreme3", func_201(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 20:
			func_199(uParam1, "Extreme4", func_201(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 21:
			func_199(uParam1, "Fanatic1", func_201(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 22:
			func_199(uParam1, "Fanatic2", func_201(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 23:
			func_199(uParam1, "Fanatic3", func_201(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_200(iParam0), 0, 1);
			break;
		
		case 24:
			func_199(uParam1, "Hao1", func_201(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_200(iParam0), 0, 1);
			break;
		
		case 25:
			func_199(uParam1, "Hunting1", func_201(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 26:
			func_199(uParam1, "Hunting2", func_201(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 27:
			func_199(uParam1, "Josh1", func_201(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 28:
			func_199(uParam1, "Josh2", func_201(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 29:
			func_199(uParam1, "Josh3", func_201(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 30:
			func_199(uParam1, "Josh4", func_201(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 31:
			func_199(uParam1, "Maude1", func_201(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 32:
			func_199(uParam1, "Minute1", func_201(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 33:
			func_199(uParam1, "Minute2", func_201(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 34:
			func_199(uParam1, "Minute3", func_201(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 35:
			func_199(uParam1, "MrsPhilips1", func_201(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 36:
			func_199(uParam1, "MrsPhilips2", func_201(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 37:
			func_199(uParam1, "Nigel1", func_201(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 38:
			func_199(uParam1, "Nigel1A", func_201(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 39:
			func_199(uParam1, "Nigel1B", func_201(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 40:
			func_199(uParam1, "Nigel1C", func_201(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 41:
			func_199(uParam1, "Nigel1D", func_201(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 42:
			func_199(uParam1, "Nigel2", func_201(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 43:
			func_199(uParam1, "Nigel3", func_201(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 44:
			func_199(uParam1, "Omega1", func_201(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 45:
			func_199(uParam1, "Omega2", func_201(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 46:
			func_199(uParam1, "Paparazzo1", func_201(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 47:
			func_199(uParam1, "Paparazzo2", func_201(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 48:
			func_199(uParam1, "Paparazzo3", func_201(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 49:
			func_199(uParam1, "Paparazzo3A", func_201(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 50:
			func_199(uParam1, "Paparazzo3B", func_201(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 51:
			func_199(uParam1, "Paparazzo4", func_201(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 52:
			func_199(uParam1, "Rampage1", func_201(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 54:
			func_199(uParam1, "Rampage3", func_201(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 55:
			func_199(uParam1, "Rampage4", func_201(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 56:
			func_199(uParam1, "Rampage5", func_201(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 53:
			func_199(uParam1, "Rampage2", func_201(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 57:
			func_199(uParam1, "TheLastOne", func_201(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 58:
			func_199(uParam1, "Tonya1", func_201(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 59:
			func_199(uParam1, "Tonya2", func_201(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 60:
			func_199(uParam1, "Tonya3", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 61:
			func_199(uParam1, "Tonya4", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 62:
			func_199(uParam1, "Tonya5", func_201(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_199(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xBBE2
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

int func_200(int iParam0)//Position - 0xBC73
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

struct<2> func_201(int iParam0)//Position - 0xBFB9
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_202(iParam0) };
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

struct<2> func_202(int iParam0)//Position - 0xBFF0
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

int func_203()//Position - 0xC43E
{
	func_36();
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

int func_204()//Position - 0xC484
{
	if (func_207() && !func_208())
	{
		return 1;
	}
	if (func_206() && func_205())
	{
		return 1;
	}
	return 0;
}

bool func_205()//Position - 0xC4B6
{
	return Global_104273 > 0;
}

int func_206()//Position - 0xC4C4
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xC4D9
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_208()//Position - 0xC4FF
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

void func_209()//Position - 0xC51C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = unk_0x63A6486593EC7EC3(1, 5);
	}
	else if (iLocal_65 != 5)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_210();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_210();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x63A6486593EC7EC3(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_210();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0xBE3C4023003180FC(vLocal_53, -203,72f, -861,8f, 29,27f, true) < 5f)
	{
		vLocal_138 = { -197,64f, -863,25f, 28,33f };
		fLocal_139 = 334,5007f;
		vLocal_140 = { -187,24f, -856,77f, 28,97f };
		fLocal_141 = 162,69f;
		iLocal_72 = 1;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 288,46f, -1256,71f, 28,44f, true) < 5f)
	{
		vLocal_138 = { 286,5f, -1256,73f, 28,29f };
		fLocal_139 = 167,3216f;
		vLocal_140 = { 250,55f, -1239,27f, 28,84f };
		fLocal_141 = 265,51f;
		iLocal_72 = 2;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -3044,11f, 594,34f, 6,73f, true) < 5f)
	{
		vLocal_138 = { -3044,66f, 595,7f, 6,59f };
		fLocal_139 = 296,7338f;
		vLocal_140 = { -3037,55f, 608,53f, 7,34f };
		fLocal_141 = 202,3f;
		iLocal_72 = 3;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 174,53f, 6637,64f, 30,57f, true) < 5f)
	{
		vLocal_138 = { 175,57f, 6636,58f, 30,57f };
		fLocal_139 = 260,4868f;
		vLocal_140 = { 188,97f, 6616,2f, 31,48f };
		fLocal_141 = 93,97f;
		iLocal_72 = 4;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 24,13f, -946,84f, 28,36f, true) < 5f)
	{
		vLocal_138 = { 23,65f, -948,26f, 28,36f };
		fLocal_139 = 258,8732f;
		vLocal_140 = { 22,19f, -955,82f, 28,94f };
		fLocal_141 = 70,66f;
		iLocal_72 = 6;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 296,13f, -894,01f, 28,23f, true) < 5f)
	{
		vLocal_138 = { 294,64f, -893,6f, 28,18f };
		fLocal_139 = 156,7222f;
		vLocal_140 = { 286,4f, -897,28f, 28,57f };
		fLocal_141 = 341,97f;
		iLocal_72 = 8;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 1077,69f, -775,73f, 57,21f, true) < 5f)
	{
		vLocal_138 = { 1077,64f, -773,86f, 57,09f };
		fLocal_139 = 275,6593f;
		vLocal_140 = { 1081,93f, -764,08f, 57,35f };
		fLocal_141 = 268,57f;
		iLocal_72 = 11;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -2072,88f, -317,19f, 12,32f, true) < 5f)
	{
		vLocal_138 = { -2074,93f, -316,75f, 12,16f };
		fLocal_139 = 157,3363f;
		vLocal_140 = { -2101,2f, -293,74f, 12,74f };
		fLocal_141 = 263,12f;
		iLocal_72 = 16;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -821,33f, -1082,43f, 10,14f, true) < 5f)
	{
		vLocal_138 = { -819,39f, -1084,12f, 10,03f };
		fLocal_139 = 236,6294f;
		vLocal_140 = { -803,18f, -1075,91f, 11,13f };
		fLocal_141 = 209,53f;
		iLocal_72 = 17;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -712,9f, -819,32f, 22,73f, true) < 5f)
	{
		vLocal_138 = { -712,88f, -820,47f, 22,61f };
		fLocal_139 = 268,2568f;
		vLocal_140 = { -721,63f, -826,84f, 22,82f };
		fLocal_141 = 93,14f;
		iLocal_72 = 18;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -387,12f, 6045,79f, 30,5f, true) < 5f)
	{
		vLocal_138 = { -389,5633f, 6042,153f, 30,4989f };
		fLocal_139 = 223,2838f;
		vLocal_140 = { -406,23f, 6045,69f, 31,06f };
		fLocal_141 = 229,52f;
		iLocal_72 = 19;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -301,84f, -830,39f, 31,38f, true) < 5f)
	{
		vLocal_138 = { -304,1459f, -837,4778f, 30,6799f };
		fLocal_139 = 286,139f;
		vLocal_140 = { -304,56f, -840,76f, 31,26f };
		fLocal_141 = 77,59f;
		iLocal_72 = 22;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -254,3f, -691,96f, 32,61f, true) < 5f)
	{
		vLocal_138 = { -253,51f, -689,26f, 32,57f };
		fLocal_139 = 209,9227f;
		vLocal_140 = { -250,91f, -684,01f, 33f };
		fLocal_141 = 230,65f;
		iLocal_72 = 23;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, 89,39f, 2f, 67,34f, true) < 5f)
	{
		vLocal_138 = { 88,7f, 0,01f, 67,38f };
		fLocal_139 = 71,0114f;
		vLocal_140 = { 91,35f, -7,07f, 67,82f };
		fLocal_141 = 70,28f;
		iLocal_72 = 25;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -526,42f, -1222,51f, 17,46f, true) < 5f)
	{
		vLocal_138 = { -530,11f, -1217,33f, 17,26f };
		fLocal_139 = 53,768f;
		vLocal_140 = { -522,45f, -1196,35f, 18,45f };
		fLocal_141 = 297,22f;
		iLocal_72 = 30;
	}
	else if (unk_0xBE3C4023003180FC(vLocal_53, -2956,78f, 488,19f, 14,47f, true) < 5f)
	{
		vLocal_138 = { -2956,78f, 488,19f, 14,47f };
		fLocal_139 = 80,0912f;
		vLocal_140 = { -2974,34f, 491,96f, 15f };
		fLocal_141 = 1,95f;
		iLocal_72 = 31;
	}
	else
	{
		vLocal_138 = { vLocal_53 };
	}
}

int func_210()//Position - 0xD075
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_211()//Position - 0xD096
{
	if (!func_180(5))
	{
		return 1;
	}
	if (func_204())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_208())
		{
			return 0;
		}
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xD0F8
{
	if ((Global_104544 == func_213() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0xD123
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_214(Var0);
	return uVar1;
}

int func_214(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xD140
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

void func_215(var uParam0)//Position - 0xD31A
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x4B64A8D052027742() >= (uParam0->f_146 + uParam0->f_147) || unk_0xC80D31E4B587871C(Global_92833.f_20, 2)) || unk_0xC80D31E4B587871C(Global_92833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_216(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x4B64A8D052027742();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_216(int iParam0)//Position - 0xD3A4
{
	func_217(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_217(int iParam0, char* sParam1, int iParam2)//Position - 0xD3BA
{
	if (unk_0xC80D31E4B587871C(*iParam0, 30))
	{
		switch (func_191(*iParam0))
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

void func_218(int iParam0, var uParam1)//Position - 0xD494
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x53C562FD2B9E3AB0();
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		iVar0 = (unk_0x53C562FD2B9E3AB0() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = system::ceil((system::to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x94540F498465F1A2(iParam0) != 255)
				{
					unk_0xF20857E4CB32A2B7(iParam0, 255);
				}
			}
			else if (unk_0x94540F498465F1A2(iParam0) != 0)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x94540F498465F1A2(iParam0) != 255)
			{
				unk_0xF20857E4CB32A2B7(iParam0, 255);
			}
		}
	}
}

void func_219()//Position - 0xD533
{
}

void func_220()//Position - 0xD53B
{
}

void func_221(int iParam0)//Position - 0xD543
{
	if (iParam0 == -1)
	{
		iParam0 = func_213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_223(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_222();
}

void func_222()//Position - 0xD579
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

void func_223(int iParam0)//Position - 0xD5B6
{
	Global_104544 = iParam0;
}

int func_224(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD5C4
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
		iParam1 = func_213();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_265())
		{
			return 0;
		}
	}
	vLocal_51 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_208())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_264(0))
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (func_263())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_197(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_51.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_262(iParam1))
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_261(func_35()) == 4 || func_261(func_35()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_35()))
		{
			if (!func_260(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_259(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_258())
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
		if (!func_249(4))
		{
			return 0;
		}
		if (!func_180(5))
		{
			return 0;
		}
		if (func_248(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_248(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_262(30) && !func_248(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_35()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_247(iVar4))
				{
					if (func_225(iVar2))
					{
						if (!func_60(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_35() != iVar2)
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

bool func_225(int iParam0)//Position - 0xD95E
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_226(iVar0);
}

int func_226(int iParam0)//Position - 0xD97F
{
	return func_227(iParam0, 1);
}

int func_227(int iParam0, int iParam1)//Position - 0xD98E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_247(iParam0))
	{
		return 0;
	}
	func_228(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xD9E1
{
	func_229(func_240(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_229(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xD9FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_239(iParam0, iParam1))
	{
		iVar0 = func_238(iParam1);
		iVar1 = func_236(iParam0);
		iVar2 = (func_236(iParam0) - func_236(iParam1));
		iVar3 = (func_238(iParam0) - func_238(iParam1));
		iVar4 = (func_235(iParam0) - func_235(iParam1));
		iVar5 = (func_234(iParam0) - func_234(iParam1));
		iVar6 = (func_233(iParam0) - func_233(iParam1));
		iVar7 = (func_232(iParam0) - func_232(iParam1));
	}
	else
	{
		iVar0 = func_238(iParam0);
		iVar1 = func_236(iParam1);
		iVar2 = (func_236(iParam1) - func_236(iParam0));
		iVar3 = (func_238(iParam1) - func_238(iParam0));
		iVar4 = (func_235(iParam1) - func_235(iParam0));
		iVar5 = (func_234(iParam1) - func_234(iParam0));
		iVar6 = (func_233(iParam1) - func_233(iParam0));
		iVar7 = (func_232(iParam1) - func_232(iParam0));
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
		iVar4 = (iVar4 + func_231(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_230(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_230(float fParam0, float fParam1, float fParam2)//Position - 0xDC00
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

int func_231(int iParam0, int iParam1)//Position - 0xDC42
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

int func_232(int iParam0)//Position - 0xDCE4
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_233(int iParam0)//Position - 0xDCF7
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_234(int iParam0)//Position - 0xDD0A
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_235(int iParam0)//Position - 0xDD1D
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_236(int iParam0)//Position - 0xDD2F
{
	return (system::shift_right(iParam0, 26) & 31 * func_237(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_237(bool bParam0, int iParam1, int iParam2)//Position - 0xDD54
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_238(int iParam0)//Position - 0xDD6B
{
	return iParam0 & 15;
}

int func_239(int iParam0, int iParam1)//Position - 0xDD78
{
	int iVar0;
	int iVar1;
	
	if (!func_247(iParam1) || !func_247(iParam0))
	{
		return 1;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_232(iParam0);
	iVar1 = func_232(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_240()//Position - 0xDE84
{
	var uVar0;
	
	func_246(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_245(&uVar0, unk_0x95327550F0F2BE7C());
	func_244(&uVar0, unk_0x674C9438180770FE());
	func_243(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_242(&uVar0, unk_0xEAF455949B108589());
	func_241(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_241(var uParam0, int iParam1)//Position - 0xDECA
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

void func_242(var uParam0, int iParam1)//Position - 0xDF50
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_243(var uParam0, int iParam1)//Position - 0xDF83
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_238(*uParam0);
	iVar1 = func_236(*uParam0);
	if (iParam1 < 1 || iParam1 > func_231(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_244(var uParam0, int iParam1)//Position - 0xDFD4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_245(var uParam0, int iParam1)//Position - 0xE00E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_246(var uParam0, int iParam1)//Position - 0xE049
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_247(int iParam0)//Position - 0xE085
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
	iVar0 = func_232(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_233(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_234(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_236(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_238(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_235(iParam0);
	if (iVar5 < 1 || iVar5 > func_231(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_248(int iParam0, int iParam1)//Position - 0xE161
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0xE184
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_257()) || Global_103602) || Global_25235) || func_256()) || func_56(8, -1)) || func_255()) || func_254()) || func_253()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_257()) || Global_25235) || func_256()) || func_56(8, -1)) || func_253()) || func_255()) || func_254()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_257()) || Global_103602) || Global_25235) || func_256()) || func_56(8, -1)) || func_253()) || func_255()) || func_254()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_257()) || Global_103602) || Global_25235) || func_256()) || func_56(8, -1)) || func_255()) || func_254()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_257() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_56(8, -1)) || func_252()) || func_251()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_255()) || func_254()) || func_251()) || func_250())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_257()) || Global_25235) || func_256()) || func_56(8, -1)) || func_254()) || func_253()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_257()) || func_254()) || Global_103602) || Global_25235) || func_256()) || Global_36993) || func_56(8, -1)) || func_253()) || func_251()) || func_252()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_257()) || Global_103602) || Global_25235) || func_256()) || func_56(8, -1)) || func_253()) || func_251()) || func_255()) || func_254()) || func_252())
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

var func_250()//Position - 0xE8A1
{
	return Global_92872.f_1;
}

int func_251()//Position - 0xE8AF
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_252()//Position - 0xE8D5
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_253()//Position - 0xE8EF
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

bool func_254()//Position - 0xE919
{
	return Global_92885.f_316 > 0;
}

bool func_255()//Position - 0xE92A
{
	return Global_92885.f_315 > 0;
}

var func_256()//Position - 0xE93B
{
	return Global_1312854;
}

int func_257()//Position - 0xE947
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_258()//Position - 0xE963
{
	func_54();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_259(int iParam0)//Position - 0xE98B
{
	return func_239(func_240(), iParam0);
}

int func_260(int iParam0, int iParam1, int iParam2)//Position - 0xE99D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_35();
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

int func_261(int iParam0)//Position - 0xEA81
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_262(int iParam0)//Position - 0xEAA5
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_265())
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

int func_263()//Position - 0xEB03
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

bool func_264(bool bParam0)//Position - 0xEB47
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

int func_265()//Position - 0xEB72
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

void func_266()//Position - 0xEC2D
{
	if (bLocal_127)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_73, 0))
		{
			if (unk_0xD081A26A065EE87B(iLocal_73))
			{
				unk_0x68130C56528B2CAD(iLocal_73);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_55))
	{
		unk_0x486F346ADFE56674(&iLocal_55);
	}
	unk_0xC83821A7ED01F9E9(0);
	if (iLocal_69 != 0)
	{
		unk_0x15AAE2A89BBE596D(iLocal_69);
	}
	unk_0xC83821A7ED01F9E9(0);
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_56))
	{
		unk_0x771A86309E0CA47B(iLocal_56, false);
		unk_0x5C5D33A1B2711D21(iLocal_56, true);
		unk_0x486F346ADFE56674(&iLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0x4C15495E88D71C61(179,5463f, 6625,689f, 30,2739f, 184,245f, 6635,661f, 31,5188f, true, 1);
	}
	func_168(&uLocal_152, 0, 0);
	if (func_212())
	{
		unk_0x94BD6F0436473406(1f);
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0x8BB5ECF21DDE505B(unk_0xFC1458A37D98B502(), 0);
	}
	func_279(&Local_164, 0);
	func_267(-1);
	unk_0x4EA8EA06C66E352C(1);
	unk_0xCA107A9AAF17E75F(iLocal_63, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_267(int iParam0)//Position - 0xED09
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_212())
	{
		func_272(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_271(30000);
		StringCopy(&cVar0, func_270(Global_104544, 1), 64);
		if (func_269(Global_104544) > 0)
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
	func_268(&Global_25292);
	Global_104545 = 0;
	func_223(-1);
}

void func_268(var uParam0)//Position - 0xEDBE
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

int func_269(int iParam0)//Position - 0xEDFB
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

char* func_270(int iParam0, bool bParam1)//Position - 0xEEAC
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

void func_271(int iParam0)//Position - 0xF0F5
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_272(int iParam0)//Position - 0xF107
{
	func_273(iParam0, 0, func_278(iParam0));
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0xF11C
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_240();
	func_276(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_275(iParam0, &uVar0);
	Var1 = { func_274(&uVar0) };
}

struct<16> func_274(var uParam0)//Position - 0xF14B
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_234(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_233(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_232(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_235(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_238(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_236(*uParam0), 64);
	return Var0;
}

void func_275(int iParam0, var uParam1)//Position - 0xF21B
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_276(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF233
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_236(*uParam0);
	iVar1 = func_238(*uParam0);
	iVar2 = func_235(*uParam0);
	iVar3 = func_234(*uParam0);
	iVar4 = func_233(*uParam0);
	iVar5 = func_232(*uParam0);
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
	iVar6 = func_231(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_231(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_277(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF3B5
{
	func_246(uParam0, iParam1);
	func_245(uParam0, iParam2);
	func_244(uParam0, iParam3);
	func_242(uParam0, iParam5);
	func_243(uParam0, iParam4);
	func_241(uParam0, iParam6);
}

int func_278(int iParam0)//Position - 0xF3ED
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

void func_279(var uParam0, bool bParam1)//Position - 0xF590
{
	int iVar0;
	
	if (!bParam1)
	{
		func_281(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_280(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_280(var uParam0)//Position - 0xF5CB
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_281(var uParam0)//Position - 0xF5E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xC80D31E4B587871C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_282(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_282(var uParam0)//Position - 0xF61D
{
	func_283(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_283(int iParam0, char* sParam1, int iParam2)//Position - 0xF634
{
	if (unk_0xC80D31E4B587871C(iParam0, 30))
	{
		switch (func_191(iParam0))
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

void func_284(bool bParam0)//Position - 0xF6F4
{
	Global_104547 = { vLocal_53 };
	if (bParam0)
	{
		func_299(3);
	}
	func_288(1, 0);
	if (!bLocal_96)
	{
		func_287();
	}
	func_285();
	func_266();
}

void func_285()//Position - 0xF729
{
	func_286();
}

int func_286()//Position - 0xF736
{
	if (func_264(0))
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

int func_287()//Position - 0xF781
{
	return 1;
}

void func_288(int iParam0, int iParam1)//Position - 0xF78A
{
	if (iParam0 == -1)
	{
		iParam0 = func_213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_269(iParam0))
	{
		func_298(iParam0, iParam1);
		if (!func_297(51))
		{
			func_294("RE_REWARD", 1, 0, 4000, 10000, func_203(), 0, 138, 0);
			func_293(51);
		}
		if (func_176(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_292(iParam0, iParam1) != 322)
		{
			func_289(func_292(iParam0, iParam1), vLocal_51.x, vLocal_51.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_299(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_299(7);
			}
			else
			{
				func_299(1);
			}
		}
	}
}

void func_289(int iParam0, var uParam1, var uParam2)//Position - 0xF88E
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
		func_10((891 + iParam0), 1, -1, 1);
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
		func_290();
	}
}

void func_290()//Position - 0xF976
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
		func_32(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_291() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_286();
				}
			}
		}
	}
}

int func_291()//Position - 0xFE37
{
	return Global_25233;
}

int func_292(int iParam0, int iParam1)//Position - 0xFE42
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

void func_293(int iParam0)//Position - 0x101B8
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

void func_294(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x101FA
{
	func_295(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_295(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1021B
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
		func_296();
	}
}

void func_296()//Position - 0x103EE
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

int func_297(int iParam0)//Position - 0x1050E
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

void func_298(int iParam0, int iParam1)//Position - 0x10551
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

void func_299(int iParam0)//Position - 0x1056C
{
	Global_104541 = iParam0;
}

