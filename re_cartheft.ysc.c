#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
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
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	int iLocal_132 = 0;
	vector3 vLocal_133 = { 0f, 0f, 0f };
	vector3 vLocal_134 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_136 = { 0f, 0f, 0f };
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0,001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0,0375f;
	fLocal_28 = 0,17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	vLocal_50 = { ScriptParam_151.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_151.f_17[0];
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_229();
	}
	func_228();
	if (iLocal_121 == 2)
	{
		if (func_227(34))
		{
			unk_0x96A3D9A8A4C7AFD4();
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
			{
				vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				if (vVar0.z > 23f || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -743,3924f, -2129,82f, 12,07619f, -708,892f, -2160,705f, 19,7035f, 124,5f, 0, true, 0))
				{
					unk_0x96A3D9A8A4C7AFD4();
				}
			}
		}
	}
	if (func_186(vLocal_50, 17, iLocal_121, 0, 0))
	{
		func_183(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		system::wait(0);
		func_182();
		func_181(iLocal_59, &uLocal_62);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x7112798C2D20E78A(unk_0x9EB17624F44A8DA4());
		}
		func_180();
		if (!func_179())
		{
			if (func_178())
			{
				func_229();
			}
			if (unk_0x42F1FE4C7EC5F51E())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_161())
						{
							unk_0xC1CEF375B44856F4(0);
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
						{
							if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x3AB6A1A9084FB0A4(iLocal_71)) && func_160(iLocal_73)) && !func_159(0))
							{
								if (func_158())
								{
									if (func_160(iLocal_76))
									{
										unk_0x4D7D93C6E0C1063B(iLocal_76, false);
									}
									func_149(1);
									unk_0x94BD6F0436473406(0,1f);
									func_144(39, 1);
									func_144(40, 1);
									func_144(41, 1);
									func_144(42, 1);
									func_144(43, 1);
									func_144(44, 1);
									system::settimera(0);
								}
							}
							else
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
								{
									unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
									unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
									system::wait(0);
								}
								func_229();
							}
						}
						else
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && func_160(iLocal_73))
							{
								unk_0x96247F0EC873C446(iLocal_71, iLocal_73, 20f, iLocal_119);
								unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
								system::wait(0);
							}
							func_112(0);
						}
						break;
				}
			}
			else
			{
				func_229();
			}
		}
		else
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					func_111(&Local_102, 2);
				}
			}
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
			func_103();
			if (func_160(iLocal_73) && !func_102())
			{
				if (func_100())
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
								{
									if (unk_0xA8D0477084E86A92(iLocal_72, iLocal_73, 0))
									{
										if (iLocal_121 == 2)
										{
											unk_0xCFF0CD14B439821D(iLocal_72, true, 1);
											unk_0xCFF0CD14B439821D(iLocal_73, true, 1);
											unk_0x6931076730A4AC5D(&iLocal_74);
											unk_0xD2C269DBF147B406(0, iLocal_73, unk_0xFC1458A37D98B502(), 8, 30f, iLocal_120, 200f, 10f, 0);
											unk_0x1B16DD5C115FE009(iLocal_74);
											unk_0xAB30B1CF01A198C1(iLocal_72, iLocal_74);
											unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
										}
										else
										{
											unk_0xCFF0CD14B439821D(iLocal_72, true, 1);
											unk_0x6931076730A4AC5D(&iLocal_74);
											unk_0x181B5054237CD6BD(0, iLocal_73, 30, 1000);
											unk_0xD2C269DBF147B406(0, iLocal_73, unk_0xFC1458A37D98B502(), 8, 40f, iLocal_120, 200f, 10f, 1);
											unk_0x1B16DD5C115FE009(iLocal_74);
											unk_0xAB30B1CF01A198C1(iLocal_72, iLocal_74);
											unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
										}
										vLocal_133 = { unk_0xDCD8BDD2E10C660E(iLocal_73, unk_0xD323488FDDE4A80F(iLocal_73, "wheel_lr")) };
										vLocal_134 = { unk_0xA05DDB968587006B(iLocal_73, vLocal_133) };
										unk_0xAEB228D978E7ADD1("scr_wheel_burnout", iLocal_73, vLocal_134 + Vector(-0,5f, -1f, 0f), 0f, 180f, 0f, 0,25f, 0, 0, 0);
										vLocal_135 = { unk_0xDCD8BDD2E10C660E(iLocal_73, unk_0xD323488FDDE4A80F(iLocal_73, "wheel_rr")) };
										vLocal_136 = { unk_0xA05DDB968587006B(iLocal_73, vLocal_135) };
										unk_0xAEB228D978E7ADD1("scr_wheel_burnout", iLocal_73, vLocal_136 + Vector(-0,5f, -1f, 0f), 0f, 180f, 0f, 0,25f, 0, 0, 0);
										system::settimera(0);
										if (!unk_0xA6DECE14FC9A8C51(iLocal_60))
										{
											iLocal_60 = func_98(iLocal_73, 1, 0);
										}
										unk_0xC234848D21B6064E(2);
										iLocal_47 = 1;
									}
									else if (unk_0xEBE499597C718EB8(iLocal_73, unk_0xFC1458A37D98B502(), 1))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
										{
											unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
											unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
											system::wait(0);
										}
										func_229();
									}
								}
								else
								{
									unk_0x96247F0EC873C446(iLocal_71, iLocal_73, 20f, iLocal_119);
									unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
									system::wait(0);
									func_112(0);
								}
								break;
							
							case 1:
								if (func_160(iLocal_73))
								{
									if (iLocal_121 == 1)
									{
										if (system::timera() < 5000)
										{
											if (system::timera() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0,4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0,2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											unk_0xFB2E9855F95E3BD3(iLocal_73, fLocal_99);
											iVar1 = unk_0x87889570F3396ABD(unk_0xB3328BA8976B416C(iLocal_73, 1), 5f, 0, 4);
											if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
											{
												if (func_160(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
												{
													if (unk_0x9A213A2345825783(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_73))
													{
														system::settimera(5000);
													}
												}
												if (func_160(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (unk_0x9A213A2345825783(iVar1, iLocal_73))
														{
															system::settimera(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0x32DFD9C17763ABE0(iLocal_73) < 700f)
									{
										func_229();
									}
								}
								func_68();
								if ((((((func_67() || func_66()) || unk_0xF69AD934E7664A7C(iLocal_73)) || unk_0xB6579D6FEB63269C(iLocal_73, 1, 5000)) || unk_0x6B4C37F2EEC636CC(iLocal_73)) || unk_0x3AB6A1A9084FB0A4(iLocal_72)) || !unk_0xA8D0477084E86A92(iLocal_72, iLocal_73, 0))
								{
									if (unk_0x771D0F8F56A5FE6C("RE_CAR_STEAL_SCENE"))
									{
										if (func_160(iLocal_73))
										{
											unk_0xF0037A481D043FE1(iLocal_73, 0);
										}
										unk_0xE02E32C69260FBB7("RE_CAR_STEAL_SCENE");
									}
									if (unk_0xA6DECE14FC9A8C51(iLocal_60))
									{
										unk_0xE30CF11C0EE14316(&iLocal_60);
									}
									func_65();
									if (unk_0xA6DECE14FC9A8C51(iLocal_59))
									{
										unk_0xE30CF11C0EE14316(&iLocal_59);
									}
									unk_0x2B0DDE3D071497AD(iLocal_71);
									unk_0xA1AA40A93CA0F40D(iLocal_73, 50f, 5, 0);
									iLocal_61 = func_98(iLocal_73, 0, 0);
									fLocal_93 = system::vdist(unk_0xB3328BA8976B416C(iLocal_73, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
									fLocal_91 = system::vdist(unk_0xB3328BA8976B416C(iLocal_73, 1), unk_0xB3328BA8976B416C(iLocal_71, 1));
									fLocal_92 = system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_71, 1));
									func_63(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if (func_160(iLocal_73))
								{
									if (unk_0x32DFD9C17763ABE0(iLocal_73) < 700f)
									{
										func_229();
									}
								}
								if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
								{
									func_229();
								}
								if (!unk_0x191BE1BC8F26F3C1(iLocal_72, 0))
								{
									if (!unk_0xA8D0477084E86A92(iLocal_72, iLocal_73, 0))
									{
										func_62(iLocal_72, &iLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_61(&iLocal_63);
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
								{
									if (!unk_0x7ED4D0E480A6EC43(iLocal_72, unk_0xFC1458A37D98B502()))
									{
										unk_0xD7F5B2902EBBD04E(iLocal_72, unk_0xFC1458A37D98B502(), 0, 16);
										unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
									}
								}
								if ((system::vdist(unk_0xB3328BA8976B416C(iLocal_73, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > (fLocal_93 + 220f) || system::vdist(unk_0xB3328BA8976B416C(iLocal_73, 1), unk_0xB3328BA8976B416C(iLocal_71, 1)) > (fLocal_91 + 220f)) || system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_71, 1)) > (fLocal_92 + 220f))
								{
									if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_73, 0))
									{
										func_112(0);
									}
									else
									{
										func_229();
									}
								}
								if (unk_0xA6DECE14FC9A8C51(iLocal_61))
								{
									if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_73, 0))
									{
										unk_0xE30CF11C0EE14316(&iLocal_61);
										iLocal_59 = func_57(iLocal_71, 0, 0);
										func_56(&uLocal_62);
										func_63(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (iLocal_121 == 1)
											{
												vLocal_85 = { -2258,759f, 4274,059f, 45,9166f };
											}
											else if (bLocal_57)
											{
												vLocal_85 = { -483,4162f, -2160,874f, 8,359f };
											}
											else
											{
												vLocal_85 = { -485,9905f, -2153,542f, 8,1999f };
											}
											if (!unk_0x9E06F0EE20F58CED(vLocal_85, 2f) && !unk_0x841ED61760A7D07B(iLocal_71))
											{
												unk_0xBD8D47FDC6902B2D(iLocal_71, vLocal_85, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = unk_0x53C562FD2B9E3AB0();
									}
									else if (unk_0x21B6FFFD04C9FF3A(iLocal_73, iLocal_71, 20f, 20f, 7f, 0, 1, 0))
									{
										func_55();
										if (func_54())
										{
											if (unk_0x8EA8060A1C856203(iLocal_71, iLocal_73, -1, 0, false))
											{
												if (!bLocal_116)
												{
													if (func_44(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												unk_0x96247F0EC873C446(iLocal_71, iLocal_73, 35f, iLocal_119);
												unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
												func_112(1);
											}
										}
									}
								}
								else if (unk_0xA6DECE14FC9A8C51(iLocal_59))
								{
									if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_73, 0))
									{
										if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, 0, 1, 0))
										{
											if (func_43(1, 0, 1))
											{
												unk_0xE30CF11C0EE14316(&iLocal_59);
												if (iLocal_121 == 1)
												{
													if (func_42(unk_0xF0371FE6E2BF9599(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x6450931B826B49D9(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_40(unk_0xB3328BA8976B416C(iLocal_71, 1), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0xE30CF11C0EE14316(&iLocal_59);
										iLocal_61 = func_98(iLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_121 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_71))
										{
											unk_0x2217C45231E6A537(iLocal_71, 310, true);
										}
										func_112(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_71))
									{
										unk_0x2217C45231E6A537(iLocal_71, 310, true);
									}
									func_112(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
						{
							if (unk_0xA8D0477084E86A92(iLocal_72, iLocal_73, 0))
							{
								unk_0xD2C269DBF147B406(iLocal_72, iLocal_73, unk_0xFC1458A37D98B502(), 8, 50f, iLocal_120, 10f, 10f, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
								unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
							}
							else
							{
								unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
								unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
								unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
							}
						}
						system::wait(0);
						func_229();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_160(iLocal_73))
						{
							unk_0xC91FE17AD7353B70(&iLocal_73);
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
						{
							unk_0x68433819717660CF(&iLocal_72);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						if (unk_0xA5F6598E13F98E08(iLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							unk_0x9C16A63EBDA5A08E(iLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(iLocal_71, "GENERIC_CURSE_HIGH", 24);
						unk_0x6931076730A4AC5D(&iLocal_74);
						unk_0x6EF694689373EE8D(0, vLocal_88, 1f, 20000, 1193033728, 1056964608);
						unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_74);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
					}
					func_229();
				}
			}
			else
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_73))
				{
					unk_0xB38E13EF2EC6F0E9(iLocal_73, 50f);
				}
				func_229();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)//Position - 0xB85
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)//Position - 0xB9C
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

int func_3(int iParam0)//Position - 0xD91
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

int func_4()//Position - 0xDB2
{
	vector3 vVar0;
	char* sVar1;
	vector3 vVar2;
	float fVar3;
	
	sVar1 = "chassis";
	func_55();
	if (((!unk_0x3AB6A1A9084FB0A4(iLocal_71) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && func_160(iLocal_73)) && unk_0x3A801AA34DD821BE(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
				{
					if (func_43(1, 0, 1))
					{
						if (!unk_0xC80D31E4B587871C(Global_2323, 11))
						{
							if (!unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
							{
								func_32(1, 1, 1, 0);
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									unk_0x3E80C2F7BC665259(1);
									while (!func_30(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										unk_0x36853D5037847BF3();
										system::wait(0);
									}
									func_30(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								unk_0x36853D5037847BF3();
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
								{
									unk_0x5718F894FDA63A9E(iLocal_71, 0);
								}
								func_28();
								func_23(0);
								unk_0x36853D5037847BF3();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				unk_0x30C37143C720F2AA(iLocal_73, 0, 0, 0f);
				unk_0x193F4218CC4CF4BB(iLocal_73, 0, 1, 1, 1);
				unk_0x36853D5037847BF3();
				if (iLocal_121 == 1)
				{
					if (func_160(iLocal_73))
					{
						if (func_42(unk_0xF0371FE6E2BF9599(iLocal_73), 336f, 90f))
						{
							vLocal_84 = { -2254,3f, 4273,361f, 44,9697f };
							fLocal_89 = 336,6557f;
							vLocal_83 = { -2252,683f, 4274,16f, 45,0612f };
							vLocal_85 = { -2257,825f, 4269,189f, 44,6334f };
							fLocal_90 = 272,8688f;
							vLocal_97 = { -2254,588f, 4277,307f, 45,6133f };
							vLocal_98 = { 6,6248f, 0,0369f, 179,5595f };
						}
						else
						{
							vLocal_84 = { -2254,223f, 4272,33f, 44,9193f };
							fLocal_89 = 148,0287f;
							vLocal_85 = { -2255,733f, 4271,32f, 44,8166f };
							fLocal_90 = 179,4774f;
							vLocal_83 = { -2257,088f, 4268,938f, 44,6456f };
							vLocal_97 = { -2255,775f, 4274,144f, 46,0666f };
							vLocal_98 = { 2,8781f, 0,3464f, -146,6097f };
						}
					}
					vVar2 = { -2269,34f, 4279,89f, 45,47f };
					fVar3 = 53,23f;
					fLocal_96 = 50f;
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vLocal_83, 1, false, 0, 1);
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
					unk_0xBD8D47FDC6902B2D(iLocal_71, vLocal_85, 1, false, 0, 1);
					unk_0x48ED7B2293A96722(iLocal_73, fLocal_89);
					unk_0xBD8D47FDC6902B2D(iLocal_73, vLocal_84, 1, false, 0, 1);
				}
				else
				{
					if (!func_42(unk_0xF0371FE6E2BF9599(iLocal_73), 64,6764f, 90f))
					{
						vLocal_97 = { -478,7095f, -2163,598f, 10,3091f };
						vLocal_98 = { -7,4391f, 0,0006f, 35,6865f };
						vLocal_84 = { -484,9581f, -2155,266f, 8,248f };
						fLocal_89 = 243,308f;
						fLocal_96 = 22f;
					}
					else
					{
						vLocal_97 = { -488,0143f, -2149,419f, 9,9817f };
						vLocal_98 = { -11,7475f, 0,0006f, -145,0045f };
						vLocal_84 = { -484,3195f, -2154,188f, 8,2182f };
						fLocal_89 = 64,6764f;
						fLocal_96 = 36,9289f;
					}
					vVar2 = { -486,92f, -2169,01f, 8,89f };
					fVar3 = 63,1f;
					unk_0xBD8D47FDC6902B2D(iLocal_73, vLocal_84, 1, false, 0, 1);
					unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
					unk_0x48ED7B2293A96722(iLocal_73, fLocal_89);
				}
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				if (func_160(iLocal_73))
				{
					unk_0xACE486395AA1867D(iLocal_73, 1084227584);
					if (unk_0x6ADD12BF4D6D2587(iLocal_72))
					{
						if (unk_0xA8D0477084E86A92(iLocal_72, iLocal_73, 0))
						{
							unk_0x68433819717660CF(&iLocal_72);
						}
					}
				}
				vLocal_130 = { 0f, 0f, 0f };
				vLocal_131 = { 0f, 0f, 0f };
				iLocal_122 = unk_0x8383F9C605E523B7(vLocal_130, vLocal_131, 2);
				unk_0x56FEE2DE0493113C(iLocal_122, iLocal_73, unk_0xD323488FDDE4A80F(iLocal_73, sVar1));
				unk_0xF3EF2C77B895F716(iLocal_122, vLocal_130, vLocal_131, 2);
				unk_0x8E628F774C748D93(iLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1148846080, 0);
				iLocal_75 = unk_0xC84BA58897A54045("DEFAULT_ANIMATED_CAMERA", vLocal_97, vLocal_98, fLocal_96, 0, 2);
				unk_0xEFF56C7BDABBF39B(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				unk_0x90CD41CAEBB68E99(iLocal_73, sLocal_127, sLocal_126, 1000f, 0, 0, 0, 0f, 262144);
				vLocal_130 = { unk_0xB3328BA8976B416C(iLocal_73, 1) };
				vLocal_131 = { unk_0xDB824D597B53CC40(iLocal_73, 2) };
				if (func_160(iLocal_76))
				{
					if (func_22(iLocal_76, vLocal_84, 1) <= 11f)
					{
						unk_0xBD8D47FDC6902B2D(iLocal_76, vVar2, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(iLocal_76, fVar3);
						unk_0xACE486395AA1867D(iLocal_76, 1084227584);
						unk_0xDD29FF4BAB8AFF9C(iLocal_76, true, 0);
					}
				}
				unk_0x247EAA2E93D4A021(vLocal_84, 10f, 1, 0, 0, false);
				system::settimera(0);
				if (iLocal_121 == 2)
				{
					unk_0x25468B15C0A526A9(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x25468B15C0A526A9(joaat("peyote"), 15);
				}
				unk_0x49779D62887BC4A2(vLocal_84, 15f);
				unk_0x7849794435F39D49(iLocal_75, true);
				unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
				iLocal_49 = 3;
				unk_0x79B05894D06FFAF8(1f);
				break;
			
			case 3:
				unk_0x36853D5037847BF3();
				if (func_19())
				{
					iLocal_49 = 4;
				}
				if (iLocal_121 == 1)
				{
					if (system::timera() > 1500 && !bLocal_150)
					{
						if (func_44(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (unk_0xD56F740235B1E8F0(iLocal_122) && !bLocal_150)
				{
					if (unk_0x463C4747B41E35A3(iLocal_122) >= 0,2f)
					{
						if (func_44(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				unk_0x79B05894D06FFAF8(1f);
				break;
			
			case 4:
				unk_0x36853D5037847BF3();
				if (iLocal_121 == 2)
				{
					if (!func_18())
					{
						if (iLocal_58 == 0)
						{
							if (func_44(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				unk_0x79B05894D06FFAF8(1f);
				if (iLocal_121 == 1)
				{
					if (unk_0xD56F740235B1E8F0(iLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (unk_0x463C4747B41E35A3(iLocal_122) >= 0,83f)
							{
								unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
								unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x463C4747B41E35A3(iLocal_122), 0, 0, 0);
								unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
								iLocal_132 = 1;
							}
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
						{
							if (unk_0x463C4747B41E35A3(iLocal_122) >= 0,83f)
							{
								if (unk_0xA5F6598E13F98E08(iLocal_71, sLocal_126, sLocal_128, 2))
								{
									unk_0xBD1486160AB0661B(iLocal_71, -1000f, 0);
									if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
									{
										if (func_160(iLocal_73))
										{
											unk_0xBB0358802AA14401(iLocal_71, iLocal_73, -1);
											unk_0x2217C45231E6A537(iLocal_71, 310, true);
										}
									}
									unk_0x9A0C1F836B24E46E(iLocal_71, 1, 0);
								}
								else
								{
									unk_0x2217C45231E6A537(iLocal_71, 310, true);
								}
							}
						}
					}
				}
				else if (unk_0xD56F740235B1E8F0(iLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (unk_0x463C4747B41E35A3(iLocal_122) >= 0,86f)
						{
							unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
							unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x463C4747B41E35A3(iLocal_122), 0, 0, 0);
							unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
							iLocal_132 = 1;
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						if (unk_0x463C4747B41E35A3(iLocal_122) > 0,847f)
						{
							if (unk_0xA5F6598E13F98E08(iLocal_71, sLocal_126, sLocal_128, 2))
							{
								unk_0xBD1486160AB0661B(iLocal_71, -1000f, 0);
								if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
								{
									if (func_160(iLocal_73))
									{
										unk_0xBB0358802AA14401(iLocal_71, iLocal_73, -1);
										unk_0x2217C45231E6A537(iLocal_71, 310, true);
									}
								}
								unk_0x9A0C1F836B24E46E(iLocal_71, 1, 0);
							}
							else
							{
								unk_0x2217C45231E6A537(iLocal_71, 310, true);
							}
						}
					}
				}
				if (((unk_0xD56F740235B1E8F0(iLocal_122) && unk_0x463C4747B41E35A3(iLocal_122) >= 0,99f) || !unk_0xD56F740235B1E8F0(iLocal_122)) || func_19())
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_73, 0) && unk_0xA5F6598E13F98E08(iLocal_73, sLocal_126, sLocal_127, 3))
					{
						unk_0xCBF5827EA5303F2B(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (unk_0xD56F740235B1E8F0(iLocal_122))
					{
						unk_0x0ADADE14A7CF26EF(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						vVar0 = { unk_0x09E51060F59912ED(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x7367FB97975F1E29(vVar0, &(vVar0.f_2), 0, 0);
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, false, 0, 1);
						vVar0 = { unk_0x4AA2C5A4980B3F34(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), vVar0.z);
						unk_0x7C9705890EF6612E(0f, 1065353216);
						unk_0xBB9A3C553EECB180(0f);
					}
					unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -1871534317, true, 0, 1);
					if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
					{
						if (func_160(iLocal_73))
						{
							unk_0xBB0358802AA14401(iLocal_71, iLocal_73, -1);
							unk_0x2217C45231E6A537(iLocal_71, 310, true);
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
					{
						if (unk_0x88DDBE9908752BF0(iLocal_71, 0))
						{
							if (func_160(iLocal_73))
							{
								unk_0x30C37143C720F2AA(iLocal_73, 0, 0, 0f);
								unk_0x193F4218CC4CF4BB(iLocal_73, 0, 1, 1, 1);
								iLocal_125 = unk_0x53C562FD2B9E3AB0();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0x36853D5037847BF3();
				if ((unk_0x53C562FD2B9E3AB0() - iLocal_125) > 100)
				{
					if (func_3(iLocal_71) && func_160(iLocal_73))
					{
						unk_0x6931076730A4AC5D(&iLocal_74);
						unk_0x181B5054237CD6BD(0, iLocal_73, 9, 1000);
						unk_0x96247F0EC873C446(0, iLocal_73, 25f, iLocal_119);
						unk_0x1B16DD5C115FE009(iLocal_74);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
						unk_0x2217C45231E6A537(iLocal_71, 310, true);
					}
					func_32(0, 1, 1, 0);
					if (bLocal_150)
					{
						if (unk_0x8EA3C8E091EA5BA4(iLocal_75))
						{
							unk_0x7849794435F39D49(iLocal_75, false);
							unk_0x02934BABFD4CD384(iLocal_75, 0);
						}
						unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
						system::wait(750);
						unk_0x7C9705890EF6612E(0f, 1065353216);
						unk_0xBB9A3C553EECB180(0f);
						func_17(500, 1);
					}
					else
					{
						unk_0x90CE99E954B80CFF(0, 0, 3, 0);
						unk_0x7849794435F39D49(iLocal_75, false);
					}
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					func_16(&iLocal_73);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_71))
				{
					unk_0x2217C45231E6A537(iLocal_71, 310, true);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)//Position - 0x17C1
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104555.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7872;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7872)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x18B1
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)//Position - 0x18E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()//Position - 0x1915
{
	return Global_1312736;
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x1921
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()//Position - 0x1953
{
	func_11();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_11()//Position - 0x196C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_15(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_14(unk_0xFC1458A37D98B502());
			if (func_13(iVar0) && (!func_12(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_13(Global_104555.f_2353.f_539.f_4301))
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

bool func_12(int iParam0)//Position - 0x1A69
{
	return Global_35861 == iParam0;
}

bool func_13(int iParam0)//Position - 0x1A77
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x1A83
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x1AC0
{
	if (func_13(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)//Position - 0x1AEA
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

void func_17(int iParam0, bool bParam1)//Position - 0x1B22
{
	if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
	{
		if (!unk_0x9BB64DDCD9C7B076())
		{
			unk_0x59C3AC31C7544A28(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x9F7B586A14398C40())
		{
			system::wait(0);
		}
	}
}

int func_18()//Position - 0x1B5E
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0x1B80
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (unk_0xCAF0B12123EF5181(iVar0))
		{
			unk_0x7849794435F39D49(iLocal_75, false);
			unk_0xAE83ED4C9081AE6F(500);
			while (unk_0x2D0EF1D268F33F25())
			{
				unk_0x36853D5037847BF3();
				system::wait(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (unk_0x3E9CABD07B829173())
	{
		if (unk_0xCAF0B12123EF5181(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x1BF2
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
			if (func_21())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()//Position - 0x1C3C
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

float func_22(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1C6E
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

void func_23(int iParam0)//Position - 0x1CA8
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_24(int iParam0)//Position - 0x1CD1
{
	if (Global_14615)
	{
		func_26(0, 0);
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
	if (!func_25())
	{
		Global_14453.f_1 = 3;
	}
}

int func_25()//Position - 0x1D41
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)//Position - 0x1D68
{
	if (bParam0)
	{
		if (func_27(0))
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

int func_27(int iParam0)//Position - 0x1DDC
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

void func_28()//Position - 0x1E36
{
	Global_14622 = 0;
	func_29();
}

void func_29()//Position - 0x1E46
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1E67
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
	func_31(iParam0);
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

void func_31(int iParam0)//Position - 0x1FF6
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

void func_32(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2022
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_39(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_25())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_39(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_36(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4(), 0)) && !func_33())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_36(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_33()//Position - 0x213B
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_34(int iParam0, int iParam1)//Position - 0x2158
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)//Position - 0x21A3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_36(int iParam0)//Position - 0x21E4
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_37())
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

bool func_37()//Position - 0x2226
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_38(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2237
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

void func_39(int iParam0)//Position - 0x226A
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

void func_40(vector3 vParam0, float fParam1, float fParam2)//Position - 0x228D
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - vParam0 };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_41(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		fVar2 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
		if (func_41(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar2, 15f))
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

int func_41(int iParam0, float fParam1, float fParam2)//Position - 0x238E
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

int func_42(float fParam0, float fParam1, float fParam2)//Position - 0x2415
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_43(bool bParam0, bool bParam1, bool bParam2)//Position - 0x248A
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

bool func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x256F
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_45(sParam2, iParam3, 0);
}

int func_45(char* sParam0, int iParam1, bool bParam2)//Position - 0x25BD
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_50();
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
			if (func_25())
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
			func_47();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_46();
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
		func_52();
	}
	return 0;
}

void func_46()//Position - 0x2889
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

void func_47()//Position - 0x28BB
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

int func_48()//Position - 0x2950
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

void func_49()//Position - 0x29E9
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
		Global_14453 = func_10();
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

void func_50()//Position - 0x2A8B
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

bool func_51(int iParam0, int iParam1)//Position - 0x2AE3
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

void func_52()//Position - 0x2B1E
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2B75
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

int func_54()//Position - 0x2BCB
{
	if (unk_0x3AB6A1A9084FB0A4(iLocal_72))
	{
		return 1;
	}
	else if (func_160(iLocal_73))
	{
		if (!unk_0x21B6FFFD04C9FF3A(iLocal_72, iLocal_73, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()//Position - 0x2C0F
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_160(iLocal_73))
	{
		fVar0 = unk_0xA7B0253B80B52B2B(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0x50BDEF5D23EBD3D4(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_56(var uParam0)//Position - 0x2C8A
{
	*uParam0 = -99;
}

int func_57(int iParam0, bool bParam1, int iParam2)//Position - 0x2C98
{
	iParam2 = iParam2;
	return func_58(iParam0, bParam1, 145);
}

int func_58(int iParam0, bool bParam1, int iParam2)//Position - 0x2CAE
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(iVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(iVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D00
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_60(unk_0x3A711520F83BAE98(), 1f, 1f));
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
		unk_0xA5D25D3F884FF516(iVar0, func_60(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_60(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)//Position - 0x2DA4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0)//Position - 0x2DBB
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DECE14FC9A8C51(iParam0->f_1))
	{
		unk_0xE30CF11C0EE14316(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0->f_7))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0->f_7, 0))
		{
			if (unk_0x48253D71C3FC0054(iParam0->f_7))
			{
				unk_0x36EE765E851207BF(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2E2D
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x98EC0789D9F0703B();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x48253D71C3FC0054(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x36EE765E851207BF(iParam0, 1);
			}
			else
			{
				unk_0xDE82468C21A54EFA(iParam0, 1, iParam8);
			}
			iParam1->f_7 = iParam0;
			unk_0xFC583ECBA11F5D22(iParam0, iParam2);
			unk_0xC1D7C47530C3F5D1(iParam0, fParam6);
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0xF27F72CA15E148EE(*iParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x0BAF2928041A6C65(iParam0, iParam9);
		}
		unk_0xA0BF5158BEAE8C9B(iParam0, bParam4);
		unk_0xD73FCB9663FBC508(iParam0, iParam5);
		*iParam1 = unk_0x0B2160EA38790943(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0C71C8E276E3EC54(*iParam1, iParam8);
				}
				if (!unk_0xAB019B170BF1309C(sParam7))
				{
					unk_0xDFC5BBDAEC7D6330("STRING");
					if (bParam10)
					{
						unk_0x854FACC4E5F40C82(sParam7);
					}
					else
					{
						unk_0xA6D2B267C377D7B2(sParam7);
					}
					unk_0x476C008681363650(*iParam1);
				}
				unk_0xF27F72CA15E148EE(*iParam1, 7);
			}
		}
		if (!unk_0xC80D31E4B587871C(iParam1->f_6, 2))
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam1))
			{
				unk_0x872F1C1F8587CCC7(&(iParam1->f_6), 2);
			}
		}
		if (unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			iParam1->f_1 = unk_0xB683B450B8E9F408(iParam0);
			if (!unk_0xC80D31E4B587871C(iParam1->f_6, 3))
			{
				if (unk_0xA6DECE14FC9A8C51(iParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0C71C8E276E3EC54(iParam1->f_1, iParam8);
					}
					if (!unk_0xAB019B170BF1309C(sParam7))
					{
						unk_0xDFC5BBDAEC7D6330("STRING");
						if (bParam10)
						{
							unk_0x854FACC4E5F40C82(sParam7);
						}
						else
						{
							unk_0xA6D2B267C377D7B2(sParam7);
						}
						unk_0x476C008681363650(iParam1->f_1);
					}
					unk_0xF27F72CA15E148EE(iParam1->f_1, 7);
					unk_0x872F1C1F8587CCC7(&(iParam1->f_6), 3);
				}
			}
			else if (!unk_0xA6DECE14FC9A8C51(iParam1->f_1))
			{
				iParam1->f_1 = 0;
				unk_0x0EE72DB1CD8A3B86(&(iParam1->f_6), 3);
			}
		}
		else if (unk_0xA6DECE14FC9A8C51(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			unk_0x0EE72DB1CD8A3B86(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2)//Position - 0x3004
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
		if (func_64(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_64(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_64(char* sParam0)//Position - 0x30E1
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_65()//Position - 0x30F4
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
	{
		unk_0xAE6EBBBBD8B9FB30(iLocal_72, 2, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_72, 6, false);
		unk_0xAE6EBBBBD8B9FB30(iLocal_72, 3, true);
		unk_0xAE6EBBBBD8B9FB30(iLocal_72, 1, false);
		unk_0xD7F5B2902EBBD04E(iLocal_72, unk_0xFC1458A37D98B502(), 0, 16);
		unk_0x771A86309E0CA47B(iLocal_72, false);
		unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
	}
	else
	{
		unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
	}
	if (func_160(iLocal_73))
	{
		unk_0x4BEFCD5DAE410A90(iLocal_73, 1);
	}
}

int func_66()//Position - 0x3161
{
	if (func_160(iLocal_73))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_77)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!unk_0xC545C64D901C635F(iLocal_73))
						{
							unk_0x3D625AB3CFE71DF3(iLocal_72, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_118 = 1;
						}
					}
					if (unk_0x53C562FD2B9E3AB0() > iLocal_123 + 7000)
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_44(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = unk_0x53C562FD2B9E3AB0();
							}
						}
					}
					unk_0x2B0DDE3D071497AD(iLocal_73);
					unk_0xD4A6AC63B8FE6D1A(iLocal_73);
					iLocal_77 = 0;
				}
			}
			if (unk_0xEBE499597C718EB8(iLocal_73, unk_0xFC1458A37D98B502(), 1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
				{
					func_44(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_67()//Position - 0x326D
{
	if (func_160(iLocal_73))
	{
		if (((unk_0x36CA14E4AEA7AA81(iLocal_73, 0, 0) || unk_0x36CA14E4AEA7AA81(iLocal_73, 1, 0)) || unk_0x36CA14E4AEA7AA81(iLocal_73, 4, 0)) || unk_0x36CA14E4AEA7AA81(iLocal_73, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68()//Position - 0x32B8
{
	if (func_160(iLocal_73) && unk_0xA6DECE14FC9A8C51(iLocal_60))
	{
		func_69(&uLocal_138, iLocal_73, 0, 0, 1, 1, 1);
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x32E2
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_70(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x32FF
{
	func_71(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x331D
{
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
	{
		func_63(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_72(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_72(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3355
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
	if (func_64(iVar0))
	{
		func_97();
	}
	if (func_96(iParam1) && unk_0xDE3C98B57A41E603(iParam1))
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
			if (func_91(uParam0, bParam5, bParam7, 0))
			{
				func_87(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(iVar0))
				{
					if ((unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0)) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if ((iVar1 && !unk_0xF491DD47B88AA84E()) && uParam6)
						{
							if (!func_64(iVar0))
							{
								func_76(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
								{
									func_75(1);
								}
							}
						}
					}
				}
			}
			else if (func_77(iVar0))
			{
				if (unk_0x8C1C362CA8299475(uParam0->f_3) && !unk_0x8C1C362CA8299475(iVar0))
				{
					if (((unk_0x841ED61760A7D07B(iParam1) && iVar1) && !unk_0xF491DD47B88AA84E()) && uParam6)
					{
						if (!func_64(iVar0))
						{
							func_76(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x74C475EB8E73D398("CMN_HINT", iVar0))
							{
								func_75(1);
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
				if (func_64(sParam3))
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
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
				{
					func_63(uParam0, iVar0, 1);
				}
			}
			if (!func_91(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_74(uParam0))
				{
					func_73(uParam0);
				}
			}
		}
	}
	else
	{
		func_63(uParam0, iVar0, 0);
	}
}

void func_73(var uParam0)//Position - 0x36C2
{
	if (func_96(unk_0xFC1458A37D98B502()))
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

int func_74(var uParam0)//Position - 0x372B
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

int func_75(bool bParam0)//Position - 0x3756
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

void func_76(char* sParam0, int iParam1)//Position - 0x3800
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_77(char* sParam0)//Position - 0x3817
{
	if (!func_78(1, 1, 0))
	{
		if ((!unk_0xAB019B170BF1309C(sParam0) && func_64(sParam0)) || func_64("CMN_HINT"))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		return 0;
	}
	switch (Global_35861)
	{
		case 0:
		case 3:
			if (func_75(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)//Position - 0x38B0
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
	if (func_27(0))
	{
		return 0;
	}
	if (func_86())
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
	if ((func_85() || func_84(Global_4456448.f_143970)) || func_83())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_82(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_82(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_82(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_79(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x3ADB
{
	if (iParam0 != func_81())
	{
		if (func_80(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_80(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B41
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

int func_81()//Position - 0x3B8B
{
	return -1;
}

int func_82(int iParam0, int iParam1)//Position - 0x3B94
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

var func_83()//Position - 0x3C19
{
	return Global_2447174.f_16;
}

bool func_84(int iParam0)//Position - 0x3C27
{
	return iParam0 == 51;
}

var func_85()//Position - 0x3C34
{
	return Global_2447174.f_15;
}

bool func_86()//Position - 0x3C42
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_87(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x3C57
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
		func_63(uParam0, 0, 0);
	}
	if (func_90(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x52C56492660097C7(iParam1))
		{
			iVar0 = unk_0x07F64790D10D1DB5(iParam1);
			if (!unk_0x88DDBE9908752BF0(iVar0, 0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					if (!func_88())
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

bool func_88()//Position - 0x3D67
{
	return func_89(unk_0x9EB17624F44A8DA4());
}

int func_89(int iParam0)//Position - 0x3D77
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_90(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x3D96
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_91(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x3DDD
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
					if (func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_74(uParam0))
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
						if (!func_95(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_95(bParam1, bParam2, bParam3))
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
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_94(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_94(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
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
				else if (!func_95(bParam1, bParam2, bParam3))
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
						if (func_93(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_92(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_92(bParam1, bParam2, bParam3))
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
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_74(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_97();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_92(bool bParam0, bool bParam1, bool bParam2)//Position - 0x414B
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_93(bool bParam0, bool bParam1, bool bParam2)//Position - 0x419D
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_94(bool bParam0, bool bParam1, bool bParam2)//Position - 0x41E6
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_95(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4245
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_96(int iParam0)//Position - 0x429B
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

void func_97()//Position - 0x42F6
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_98(int iParam0, bool bParam1, int iParam2)//Position - 0x4306
{
	iParam2 = iParam2;
	return func_99(iParam0, bParam1, 0);
}

int func_99(int iParam0, bool bParam1, bool bParam2)//Position - 0x431B
{
	return func_59(iParam0, !bParam1, bParam2);
}

int func_100()//Position - 0x432E
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (func_160(iLocal_73))
	{
		func_101(iLocal_60, iLocal_73, fVar0, 1061158912, 0);
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_73, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0xEC211A86AB3726B6(iLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x4393
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

int func_102()//Position - 0x44EC
{
	if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_73, 0) && unk_0x1ECACBE8459041A9(iLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_103()//Position - 0x4512
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_71) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!unk_0x88DDBE9908752BF0(iLocal_71, 0))
				{
					if (iLocal_121 == 1)
					{
						if (func_110())
						{
							iLocal_48 = 1;
						}
					}
					else if (!unk_0x9F887157983E8EFC(iLocal_71) && !unk_0x7CE28D2DD2AF0F42(iLocal_71))
					{
						unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), -1, 0, 2);
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -539,4566f, -2094,491f, 6,967173f, -468,4296f, -2152,549f, 18,99127f, 26,75f, 0, true, 0))
						{
							unk_0x2DAC3448B66448E8(iLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							unk_0x6931076730A4AC5D(&iLocal_74);
							unk_0x12C9D41D52A560D6(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(0, sLocal_80, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x12C9D41D52A560D6(0, sLocal_80, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_74);
							unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
							iLocal_124 = unk_0x53C562FD2B9E3AB0();
							iLocal_48 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_121 == 1)
				{
					unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), -1, 0, 2);
					if (unk_0x78F50AA8F955BEFC(iLocal_71, 242628503) != 1)
					{
						unk_0x6931076730A4AC5D(&iLocal_74);
						unk_0x12C9D41D52A560D6(0, sLocal_80, sLocal_82, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x1B16DD5C115FE009(iLocal_74);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 60f))
				{
					if (unk_0x78F50AA8F955BEFC(iLocal_71, 242628503) != 1)
					{
						unk_0x6931076730A4AC5D(&iLocal_74);
						unk_0x12C9D41D52A560D6(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_57 == 0)
						{
							unk_0x12C9D41D52A560D6(0, sLocal_80, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x1B16DD5C115FE009(iLocal_74);
						unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
						unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_110())
				{
					if (func_109())
					{
					}
				}
				break;
			
			case 2:
				if (func_110())
				{
					if (func_109())
					{
					}
				}
				if (iLocal_121 == 2)
				{
					if (!unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 60f) && !func_107(iLocal_71, -875674219))
					{
						unk_0xAC838A977FB6E6BC(iLocal_71, unk_0xFC1458A37D98B502(), 0);
					}
					if (func_106(iLocal_71, unk_0xFC1458A37D98B502(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x53C562FD2B9E3AB0() - iLocal_124) > 6000)
							{
								func_105();
							}
						}
					}
				}
				if (unk_0x78F50AA8F955BEFC(iLocal_71, 242628503) != 1 && !func_107(iLocal_71, -875674219))
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260,1f, 4274,24f, 44,9f };
						if (!unk_0x0C88267282FD588F(iLocal_71, vLocal_85, 1,5f, 1,5f, 1,5f, false, true, 0))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_71, 242628503) == 7)
							{
								unk_0x6931076730A4AC5D(&iLocal_74);
								unk_0x6EF694689373EE8D(0, vLocal_85, 1f, 20000, fLocal_90, 1056964608);
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x1B16DD5C115FE009(iLocal_74);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
							}
						}
						else if (!unk_0xA5F6598E13F98E08(iLocal_71, sLocal_79, "waiting", 3))
						{
							unk_0x12C9D41D52A560D6(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_106(iLocal_71, unk_0xFC1458A37D98B502(), 1) < 25f)
							{
								func_105();
							}
						}
					}
					else if (!unk_0xA5F6598E13F98E08(iLocal_71, sLocal_79, "waiting", 3))
					{
						unk_0x12C9D41D52A560D6(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x013B3F0AF8FD2A6A(iLocal_71, unk_0xFC1458A37D98B502()))
				{
					unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), -1, 0, 2);
				}
				if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, 40f, 40f, 10f, 0, 1, 0) && !unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_71, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_104())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 1)
							{
								unk_0x6931076730A4AC5D(&iLocal_74);
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x12C9D41D52A560D6(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x1B16DD5C115FE009(iLocal_74);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x53C562FD2B9E3AB0();
							}
							else
							{
								unk_0x6931076730A4AC5D(&iLocal_74);
								unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
								unk_0x12C9D41D52A560D6(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x1B16DD5C115FE009(iLocal_74);
								unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x53C562FD2B9E3AB0();
							}
						}
						else if (!unk_0xA5F6598E13F98E08(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_71, 242628503) == 7)
							{
								if (!unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 45f))
								{
									unk_0x6931076730A4AC5D(&iLocal_74);
									unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
									unk_0x1B16DD5C115FE009(iLocal_74);
									unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
									unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
								}
								else if ((unk_0x53C562FD2B9E3AB0() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 70f))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_71);
							unk_0x6931076730A4AC5D(&iLocal_74);
							unk_0xAC838A977FB6E6BC(0, unk_0xFC1458A37D98B502(), 0);
							unk_0x1B16DD5C115FE009(iLocal_74);
							unk_0xAB30B1CF01A198C1(iLocal_71, iLocal_74);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_72))
					{
						unk_0xD68E88A8E0BE8697(iLocal_72, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_72, true);
						unk_0x486F346ADFE56674(&iLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260,1f, 4274,24f, 44,9f };
					}
					else if (bLocal_57)
					{
						vLocal_85 = { -483,4162f, -2160,874f, 8,359f };
					}
					else
					{
						vLocal_85 = { -485,9905f, -2153,542f, 8,1999f };
					}
					if (!unk_0x0C88267282FD588F(iLocal_71, vLocal_85, 4f, 4f, 4f, false, true, 0))
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_71, 2106541073) == 7)
						{
							unk_0x6EF694689373EE8D(iLocal_71, vLocal_85, 1f, 20000, fLocal_90, 1056964608);
						}
					}
					else if (!unk_0xCA3C40448996C9BA(iLocal_71, unk_0xFC1458A37D98B502(), 50f))
					{
						unk_0xAC838A977FB6E6BC(iLocal_71, unk_0xFC1458A37D98B502(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_159(1))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			unk_0xD68E88A8E0BE8697(iLocal_71, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_71, true);
			system::wait(0);
		}
		func_229();
	}
}

bool func_104()//Position - 0x4B7E
{
	if (!bLocal_116)
	{
		if (func_44(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_105()//Position - 0x4BA7
{
	if (!iLocal_117)
	{
		if (func_44(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

float func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x4BD0
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

int func_107(int iParam0, int iParam1)//Position - 0x4C2E
{
	if (func_108(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x4C61
{
	if (func_3(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109()//Position - 0x4C81
{
	if (!iLocal_115)
	{
		if (system::timera() > 2000)
		{
			if (func_44(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_110()//Position - 0x4CB4
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_72) && !unk_0x3AB6A1A9084FB0A4(iLocal_71))
	{
		if (func_160(iLocal_73))
		{
			if (unk_0xAAA8D20859E2D36D(iLocal_72, iLocal_73))
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

void func_111(var uParam0, int iParam1)//Position - 0x4CF2
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_112(bool bParam0)//Position - 0x4D0F
{
	int iVar0;
	
	if (iLocal_121 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_135(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2217C45231E6A537(iLocal_71, 310, true);
					}
					system::wait(0);
				}
				break;
			
			case 1:
				while (!func_135(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2217C45231E6A537(iLocal_71, 310, true);
					}
					system::wait(0);
				}
				break;
			
			case 2:
				while (!func_135(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2217C45231E6A537(iLocal_71, 310, true);
					}
					system::wait(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_134(8);
	}
	func_116(17, iLocal_121);
	func_113();
	func_229();
}

void func_113()//Position - 0x4E0A
{
	func_114();
}

int func_114()//Position - 0x4E17
{
	if (func_115(0))
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

bool func_115(bool bParam0)//Position - 0x4E62
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_116(int iParam0, int iParam1)//Position - 0x4E8D
{
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_131(iParam0))
	{
		func_130(iParam0, iParam1);
		if (!func_129(51))
		{
			func_125("RE_REWARD", 1, 0, 4000, 10000, func_128(), 0, 138, 0);
			func_124(51);
		}
		if (func_123(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_122(iParam0, iParam1) != 322)
		{
			func_117(func_122(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_134(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_134(7);
			}
			else
			{
				func_134(1);
			}
		}
	}
}

void func_117(int iParam0, var uParam1, var uParam2)//Position - 0x4F91
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
		func_121((891 + iParam0), 1, -1, 1);
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
		func_118();
	}
}

void func_118()//Position - 0x5079
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
		func_120(13, system::floor(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_119() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_114();
				}
			}
		}
	}
}

int func_119()//Position - 0x553A
{
	return Global_25233;
}

int func_120(int iParam0, int iParam1)//Position - 0x5545
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

int func_121(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5596
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
		iParam2 = func_8();
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

int func_122(int iParam0, int iParam1)//Position - 0x5A62
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

int func_123(int iParam0)//Position - 0x5DD6
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

void func_124(int iParam0)//Position - 0x5E05
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

void func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5E47
{
	func_126(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_126(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5E69
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
		func_127();
	}
}

void func_127()//Position - 0x603D
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

int func_128()//Position - 0x615D
{
	func_11();
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

int func_129(int iParam0)//Position - 0x61A3
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

void func_130(int iParam0, int iParam1)//Position - 0x61E6
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_131(int iParam0)//Position - 0x6201
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

int func_132()//Position - 0x62B2
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar1 = func_133(Var0);
	return uVar1;
}

int func_133(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x62CF
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

void func_134(int iParam0)//Position - 0x64A9
{
	Global_104541 = iParam0;
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x64B7
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_115(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xC80D31E4B587871C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_143(iParam1);
		Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
		Global_104555.f_7658.f_765[Global_104555.f_7658.f_866 /*10*/] = { Var0 };
		Global_104555.f_7658.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_142(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_141(&iVar2);
		iVar3 = func_140(Var1, Global_104555.f_7658.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_138(Global_104555.f_7658.f_765[iVar2 /*10*/]);
			Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
			func_137(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_136(Var1))
			{
				func_138(Global_104555.f_7658.f_765[iVar2 /*10*/]);
				Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
				func_137(&Var1);
				return 1;
			}
			else
			{
				if (!func_136(Global_104555.f_7658.f_765[iVar2 /*10*/]))
				{
					Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
					func_137(&Var1);
					return 1;
				}
				func_137(&Var1);
				return 1;
			}
		}
		else
		{
			func_138(Var1);
			func_137(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_136(struct<9> Param0, var uParam1)//Position - 0x66D9
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_137(var uParam0)//Position - 0x66F1
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_138(struct<10> Param0)//Position - 0x6703
{
	if (func_136(Param0))
	{
		func_139(Param0.f_8, 0);
	}
}

void func_139(int iParam0, int iParam1)//Position - 0x6720
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (unk_0x53C562FD2B9E3AB0() + iParam1);
}

int func_140(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x675D
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_141(int iParam0)//Position - 0x678E
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_866)
	{
		if (func_140(Global_104555.f_7658.f_765[iVar0 /*10*/], Global_104555.f_7658.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_142(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x67E5
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_143(iParam1);
	Var0.f_4 = (unk_0x53C562FD2B9E3AB0() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x0EE72DB1CD8A3B86(&(Var0.f_1), 0);
	return Var0;
}

int func_143(int iParam0)//Position - 0x683E
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_144(int iParam0, bool bParam1)//Position - 0x68A8
{
	if (bParam1)
	{
		if (!func_148(iParam0, 2, 1))
		{
			func_147(iParam0, 2, 1);
		}
	}
	else if (func_148(iParam0, 2, 1))
	{
		func_145(iParam0, 2, 1);
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)//Position - 0x68DF
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_119() == 0)
		{
			iVar0 = func_9(func_146(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_6(func_146(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_146(int iParam0)//Position - 0x6948
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

void func_147(int iParam0, int iParam1, bool bParam2)//Position - 0x6C2D
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_119() == 0)
		{
			iVar0 = func_9(func_146(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_6(func_146(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)//Position - 0x6C96
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_119() == 0)
		{
			return unk_0xC80D31E4B587871C(func_9(func_146(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x6CF6
{
	if (func_152())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_123(Global_104544))
		{
			func_150(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_123(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0)//Position - 0x6D49
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_76(func_151(iParam0), -1);
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
					func_76(func_151(iParam0), -1);
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
					func_76(func_151(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

char* func_151(int iParam0)//Position - 0x6E2A
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

int func_152()//Position - 0x6E6E
{
	switch (func_153(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6EA4
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
		if (func_157(0))
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
		if (!func_155(iParam2))
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
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(var uParam0, int iParam1)//Position - 0x6FDB
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

bool func_155(int iParam0)//Position - 0x702A
{
	return func_156(iParam0, Global_35861);
}

int func_156(int iParam0, int iParam1)//Position - 0x703B
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

int func_157(int iParam0)//Position - 0x721C
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_155(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_158()//Position - 0x723E
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 1:
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -2300,317f, 4179,612f, 36,98159f, -2191,317f, 4368,794f, 74,89676f, 70,75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -487,5048f, -2157,99f, 8,2627f, fVar0, fVar0, 40f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (unk_0x841ED61760A7D07B(iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_159(int iParam0)//Position - 0x72F4
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_71))
		{
			if (iParam0 == 0 || func_106(iLocal_71, iLocal_72, 1) > 15f)
			{
				if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_71, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				vVar1 = { vVar1 + unk_0xD0E00576168D19BB(iLocal_71, 31086, 0f, 0f, 0f) };
				vVar2 = { vVar2 + unk_0xD0E00576168D19BB(iLocal_71, 31086, 0f, 0f, 0f) };
				if ((unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0x4E69510C44147A5C(-1, unk_0xD0E00576168D19BB(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xEBE499597C718EB8(iLocal_71, unk_0xFC1458A37D98B502(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_160(int iParam0)//Position - 0x741B
{
	if (func_3(iParam0))
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

int func_161()//Position - 0x7445
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	vVar1 = { vLocal_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 1:
			vLocal_86 = { -2257,482f, 4266,638f, 44,5095f };
			fLocal_94 = 293,9091f;
			vLocal_87 = { -2253,763f, 4273,17f, 44,977f };
			fLocal_95 = 185,5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			vLocal_88 = { -2270,632f, 4287,437f, 44,9008f };
			fLocal_53 = 3f;
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_86) < system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_87))
			{
				vVar1 = { vLocal_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				vVar1 = { vLocal_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 2:
			vLocal_87 = { -538,6718f, -2183,442f, 5,2336f };
			vLocal_86 = { -365,7f, -2179,26f, 9,3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_88 = { -505,1966f, -2159,228f, 7,6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_86) < system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	unk_0x6FF834D85E2DD4C6(iVar3);
	unk_0x6FF834D85E2DD4C6(iVar4);
	unk_0x6FF834D85E2DD4C6(iVar5);
	unk_0x6450931B826B49D9(sLocal_79);
	unk_0x6450931B826B49D9(sLocal_80);
	unk_0x6450931B826B49D9(sLocal_81);
	unk_0x6450931B826B49D9("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0x36905B9EE07F38CC();
	if (((((((unk_0x9A0B2ED5055D3F0B(iVar3) && unk_0x9A0B2ED5055D3F0B(iVar4)) && unk_0x9A0B2ED5055D3F0B(iVar5)) && unk_0x3A801AA34DD821BE(sLocal_79)) && unk_0x3A801AA34DD821BE(sLocal_80)) && unk_0x3A801AA34DD821BE(sLocal_81)) && unk_0x3A801AA34DD821BE("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0xFEDD99169EC73AA6())
	{
		if (iLocal_121 == 1)
		{
			func_175("re_cartheft - Distance to vTop = ", system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_86));
			func_175("re_cartheft - Distance to vBottom = ", system::vdist(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_87));
			iLocal_73 = unk_0xEA60F3B426BB095B(iVar5, vVar1, fVar2, true, true, false);
			unk_0x6F861F183C9CF6FB(iLocal_73, 0, false);
			unk_0x4D7D93C6E0C1063B(iLocal_73, false);
			unk_0x438D30A195B65156(iLocal_73, true);
			unk_0x36C7B6DDA53E2DAF(iLocal_73, false);
			unk_0x36A50B92F547633A(iLocal_73, false);
			unk_0x7B3133EBCD34B431(iLocal_73, 2, false);
			iLocal_72 = unk_0x00D1A9572426E8DD(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0xAE01EF4BC84AFE7C(iLocal_72, 42, true);
			unk_0xAE6EBBBBD8B9FB30(iLocal_72, 3, true);
			unk_0x9E058151726E58DE(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_72, 10);
			unk_0x0F07FAE596C56D61(iLocal_72, 1f);
			unk_0xD2C4EA8476FCBB2E(iLocal_72, 1f);
			unk_0x1E7A8525FB41AAFE(iLocal_73, 135, 135);
			unk_0x4DE114E3C7F8B7C2("re_cartheft relGroupThief", &iLocal_137);
			unk_0xF96119FCCD4D1889(5, iLocal_137, 1862763509);
			unk_0xF96119FCCD4D1889(2, iLocal_137, 45677184);
			unk_0xF96119FCCD4D1889(2, 45677184, iLocal_137);
			unk_0xCE93FCB8A8D8DF0B(iLocal_72, iLocal_137);
			unk_0x35829E9BFCED1A3F(iLocal_73, true);
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - vLocal_50 };
				fLocal_51 = unk_0xA67DD8488EBA5F6D(vVar0.x, vVar0.y);
			}
			iLocal_71 = unk_0xAC992EFAD62C33BF(5, iVar3, vLocal_50, fLocal_51, 1, true);
			unk_0x350CEE66BDF90273(iLocal_71, sVar7);
			unk_0x60C06BFD037BB7CF(iLocal_71, unk_0xFC1458A37D98B502(), -1, 2048, 2);
			unk_0x03924C68EFCBC511(iLocal_71, 0, 0, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 2, 2, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 3, 1, 1, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 4, 1, 1, 0);
			unk_0x8BB5ECF21DDE505B(iLocal_71, 1);
			if (bLocal_57)
			{
				vLocal_84 = { -2254,413f, 4270,227f, 44,8028f };
				fLocal_89 = 124,6557f;
				vLocal_83 = { -2252,683f, 4274,16f, 45,0612f };
				vLocal_85 = { -2257,825f, 4269,189f, 44,6334f };
				fLocal_90 = 272,8688f;
				vLocal_97 = { -2258,04f, 4272,244f, 45,75466f };
				vLocal_98 = { 1,729481f, 0f, -114,9352f };
			}
			else
			{
				vLocal_84 = { -2253,634f, 4269,119f, 44,7686f };
				fLocal_89 = 336,143f;
				vLocal_85 = { -2255,733f, 4271,32f, 44,8166f };
				fLocal_90 = 179,4774f;
				vLocal_83 = { -2257,088f, 4268,938f, 44,6456f };
				vLocal_97 = { -2254,886f, 4273,539f, 46,2282f };
				vLocal_98 = { -7,492095f, 0f, -168,1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = unk_0xEA60F3B426BB095B(iVar5, -488,7506f, -2159,325f, 8,2581f, 15,0886f, true, true, false);
			}
			else
			{
				iLocal_73 = unk_0xEA60F3B426BB095B(iVar5, -486,3563f, -2159,942f, 8,2887f, 288,8187f, true, true, false);
			}
			unk_0x6F861F183C9CF6FB(iLocal_73, 0, false);
			unk_0x4D7D93C6E0C1063B(iLocal_73, false);
			unk_0x207466E78DA21033(iLocal_73, 3);
			unk_0x438D30A195B65156(iLocal_73, true);
			unk_0xA0A6811A3E4062D1(iLocal_73, 0);
			unk_0xA9EF3F93CBFFF6D0(iLocal_73, 11, 2, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_73, 16, 3, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_73, 12, 1, false);
			unk_0xA9EF3F93CBFFF6D0(iLocal_73, 13, 1, false);
			unk_0xC195F0A7CE73E810(iLocal_73, 3);
			unk_0xA9EF3F93CBFFF6D0(iLocal_73, 23, 6, false);
			unk_0xDAA5C9C59AF4D4EB(iLocal_73, 3);
			unk_0x4705D420368126DF(iLocal_73, 18, true);
			unk_0x4705D420368126DF(iLocal_73, 22, true);
			unk_0x1E7A8525FB41AAFE(iLocal_73, 143, 0);
			unk_0xB1AB9FD8B4959960(iLocal_73, 31, 2);
			unk_0x36C7B6DDA53E2DAF(iLocal_73, false);
			unk_0x36A50B92F547633A(iLocal_73, false);
			if (bLocal_57)
			{
				iLocal_71 = unk_0xAC992EFAD62C33BF(5, iVar3, -490,4008f, -2160,755f, 8,2498f, 314,0037f, 1, true);
			}
			else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -583,0884f, -2234,249f, 4,523423f, -685,1817f, -2350,904f, 17,07073f, 178f, 0, true, 0))
			{
				iLocal_71 = unk_0xAC992EFAD62C33BF(5, iVar3, -486,81f, -2156,99f, 8,27f, -172,34f, 1, true);
			}
			else
			{
				iLocal_71 = unk_0xAC992EFAD62C33BF(5, iVar3, -486,2511f, -2161,808f, 8,3041f, 353,4264f, 1, true);
			}
			unk_0x03924C68EFCBC511(iLocal_71, 0, 0, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 2, 1, 0, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 3, 1, 2, 0);
			unk_0x03924C68EFCBC511(iLocal_71, 4, 1, 2, 0);
			iLocal_72 = unk_0x00D1A9572426E8DD(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0x9E058151726E58DE(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_72, 10);
			unk_0x0F07FAE596C56D61(iLocal_72, 1f);
			unk_0xD2C4EA8476FCBB2E(iLocal_72, 1f);
			unk_0xAE01EF4BC84AFE7C(iLocal_72, 42, true);
			unk_0x350CEE66BDF90273(iLocal_72, sVar8);
			vLocal_84 = { -501,9105f, -2148,019f, 8,0392f };
			fLocal_89 = 294,4744f;
			vLocal_83 = { -501,0442f, -2150,799f, 8,139f };
			vLocal_85 = { -493,8062f, -2156,036f, 8,1978f };
			vLocal_97 = { -504,365f, -2144,534f, 9,8585f };
			vLocal_98 = { -6,6935f, 0f, -127,8147f };
		}
		unk_0x5C5D33A1B2711D21(iLocal_71, false);
		unk_0xAE01EF4BC84AFE7C(iLocal_71, 185, true);
		unk_0x0C01F019F929B010(iLocal_73, 0);
		unk_0xA15269351F50F113(iLocal_73, true, true, 0);
		unk_0x771A86309E0CA47B(iLocal_71, true);
		unk_0x771A86309E0CA47B(iLocal_72, true);
		unk_0x60C06BFD037BB7CF(iLocal_71, iLocal_72, -1, 0, 2);
		unk_0x695BF4E9032C8B89(iLocal_73);
		unk_0x35829E9BFCED1A3F(iLocal_73, true);
		unk_0x4C44781F822B0B00(iLocal_73, false, 0);
		unk_0x2E4932E63763FE26(iVar5, true);
		unk_0xE859EF37EA7362D3("RE_CAR_STEAL_SCENE");
		unk_0x6CF99BCE94E6F07C(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xC7ED915AB706A5D8(iLocal_73, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_71, 17, false);
		unk_0xE17958D3FD0F9EE9(iLocal_71, 512, true);
		switch (func_10())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		func_174(&Local_102, 0, unk_0xFC1458A37D98B502(), sLocal_100, 0, 1);
		func_174(&Local_102, 1, iLocal_71, sVar6, 0, 1);
		func_174(&Local_102, 2, iLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_162())
	{
		func_229();
	}
	return 0;
}

int func_162()//Position - 0x7C75
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_45) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_169())
	{
		return 1;
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_163(float fParam0, bool bParam1)//Position - 0x7CFB
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
		if (func_13(func_10()))
		{
			iVar5 = func_128();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar1 /*6*/], 3))
				{
					func_164(iVar1, &Var0);
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

void func_164(int iParam0, var uParam1)//Position - 0x7DB2
{
	switch (iParam0)
	{
		case 0:
			func_165(uParam1, "Abigail1", func_167(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 1:
			func_165(uParam1, "Abigail2", func_167(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 2:
			func_165(uParam1, "Barry1", func_167(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 3:
			func_165(uParam1, "Barry2", func_167(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 4:
			func_165(uParam1, "Barry3", func_167(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 5:
			func_165(uParam1, "Barry3A", func_167(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 6:
			func_165(uParam1, "Barry3C", func_167(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 7:
			func_165(uParam1, "Barry4", func_167(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_166(iParam0), 0, 0);
			break;
		
		case 8:
			func_165(uParam1, "Dreyfuss1", func_167(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 9:
			func_165(uParam1, "Epsilon1", func_167(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 10:
			func_165(uParam1, "Epsilon2", func_167(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 11:
			func_165(uParam1, "Epsilon3", func_167(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 12:
			func_165(uParam1, "Epsilon4", func_167(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 13:
			func_165(uParam1, "Epsilon5", func_167(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 14:
			func_165(uParam1, "Epsilon6", func_167(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 15:
			func_165(uParam1, "Epsilon7", func_167(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 16:
			func_165(uParam1, "Epsilon8", func_167(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 17:
			func_165(uParam1, "Extreme1", func_167(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 18:
			func_165(uParam1, "Extreme2", func_167(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 19:
			func_165(uParam1, "Extreme3", func_167(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 20:
			func_165(uParam1, "Extreme4", func_167(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 21:
			func_165(uParam1, "Fanatic1", func_167(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 22:
			func_165(uParam1, "Fanatic2", func_167(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 23:
			func_165(uParam1, "Fanatic3", func_167(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_166(iParam0), 0, 1);
			break;
		
		case 24:
			func_165(uParam1, "Hao1", func_167(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_166(iParam0), 0, 1);
			break;
		
		case 25:
			func_165(uParam1, "Hunting1", func_167(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 26:
			func_165(uParam1, "Hunting2", func_167(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 27:
			func_165(uParam1, "Josh1", func_167(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 28:
			func_165(uParam1, "Josh2", func_167(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 29:
			func_165(uParam1, "Josh3", func_167(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 30:
			func_165(uParam1, "Josh4", func_167(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 31:
			func_165(uParam1, "Maude1", func_167(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 32:
			func_165(uParam1, "Minute1", func_167(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 33:
			func_165(uParam1, "Minute2", func_167(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 34:
			func_165(uParam1, "Minute3", func_167(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 35:
			func_165(uParam1, "MrsPhilips1", func_167(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 36:
			func_165(uParam1, "MrsPhilips2", func_167(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 37:
			func_165(uParam1, "Nigel1", func_167(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 38:
			func_165(uParam1, "Nigel1A", func_167(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 39:
			func_165(uParam1, "Nigel1B", func_167(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 40:
			func_165(uParam1, "Nigel1C", func_167(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 41:
			func_165(uParam1, "Nigel1D", func_167(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 42:
			func_165(uParam1, "Nigel2", func_167(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 43:
			func_165(uParam1, "Nigel3", func_167(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 44:
			func_165(uParam1, "Omega1", func_167(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 45:
			func_165(uParam1, "Omega2", func_167(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 46:
			func_165(uParam1, "Paparazzo1", func_167(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 47:
			func_165(uParam1, "Paparazzo2", func_167(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 48:
			func_165(uParam1, "Paparazzo3", func_167(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 49:
			func_165(uParam1, "Paparazzo3A", func_167(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 50:
			func_165(uParam1, "Paparazzo3B", func_167(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 51:
			func_165(uParam1, "Paparazzo4", func_167(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 52:
			func_165(uParam1, "Rampage1", func_167(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 54:
			func_165(uParam1, "Rampage3", func_167(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 55:
			func_165(uParam1, "Rampage4", func_167(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 56:
			func_165(uParam1, "Rampage5", func_167(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 53:
			func_165(uParam1, "Rampage2", func_167(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 57:
			func_165(uParam1, "TheLastOne", func_167(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 58:
			func_165(uParam1, "Tonya1", func_167(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 59:
			func_165(uParam1, "Tonya2", func_167(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 60:
			func_165(uParam1, "Tonya3", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 61:
			func_165(uParam1, "Tonya4", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 62:
			func_165(uParam1, "Tonya5", func_167(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_165(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x8FF9
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

int func_166(int iParam0)//Position - 0x908A
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

struct<2> func_167(int iParam0)//Position - 0x93D0
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_168(iParam0) };
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

struct<2> func_168(int iParam0)//Position - 0x9408
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

int func_169()//Position - 0x9855
{
	if (func_172() && !func_173())
	{
		return 1;
	}
	if (func_171() && func_170())
	{
		return 1;
	}
	return 0;
}

bool func_170()//Position - 0x9887
{
	return Global_104273 > 0;
}

int func_171()//Position - 0x9895
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0x98AA
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_173()//Position - 0x98D0
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

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x98ED
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

void func_175(char* sParam0, float fParam1)//Position - 0x9988
{
	func_177(sParam0);
	func_176(fParam1);
}

void func_176(float fParam0)//Position - 0x999C
{
	if (fParam0 != 0f)
	{
	}
}

void func_177(char* sParam0)//Position - 0x99AB
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

int func_178()//Position - 0x99BE
{
	if (!func_155(5))
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_179()//Position - 0x9A20
{
	if ((Global_104544 == func_132() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_180()//Position - 0x9A4B
{
	if (func_108(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) != iLocal_73 && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) != iLocal_76)
			{
				iLocal_76 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			}
		}
	}
}

void func_181(int iParam0, var uParam1)//Position - 0x9A95
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

void func_182()//Position - 0x9B34
{
}

void func_183(int iParam0)//Position - 0x9B3C
{
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_185(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_184();
}

void func_184()//Position - 0x9B72
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

void func_185(int iParam0)//Position - 0x9BAF
{
	Global_104544 = iParam0;
}

int func_186(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9BBD
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
		iParam1 = func_132();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (system::vmag2(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_173())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_115(0))
		{
			return 0;
		}
		if (func_169())
		{
			return 0;
		}
		if (func_225())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_163(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam4)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_224(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_223(func_10()) == 4 || func_223(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_222(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_221(Global_104555.f_24965.f_43[iParam1]))
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
		if (func_220())
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
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_155(5))
		{
			return 0;
		}
		if (func_210(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_224(30) && !func_210(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(vVar1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_104555.f_2353.f_539.f_2280[iVar2 /*3*/] };
				iVar4 = Global_104555.f_2353.f_539.f_2276[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_90(vVar3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_187(int iParam0)//Position - 0x9F57
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)//Position - 0x9F78
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)//Position - 0x9F87
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9FDA
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x9FF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_192(system::to_float(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)//Position - 0xA1F9
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

int func_193(int iParam0, int iParam1)//Position - 0xA23B
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

int func_194(int iParam0)//Position - 0xA2DD
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_195(int iParam0)//Position - 0xA2F0
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_196(int iParam0)//Position - 0xA303
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_197(int iParam0)//Position - 0xA316
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_198(int iParam0)//Position - 0xA328
{
	return (system::shift_right(iParam0, 26) & 31 * func_199(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)//Position - 0xA34D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)//Position - 0xA364
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)//Position - 0xA371
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0xA47D
{
	var uVar0;
	
	func_208(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_207(&uVar0, unk_0x95327550F0F2BE7C());
	func_206(&uVar0, unk_0x674C9438180770FE());
	func_205(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_204(&uVar0, unk_0xEAF455949B108589());
	func_203(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_203(var uParam0, int iParam1)//Position - 0xA4C3
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

void func_204(var uParam0, int iParam1)//Position - 0xA549
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)//Position - 0xA57C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_206(var uParam0, int iParam1)//Position - 0xA5CD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_207(var uParam0, int iParam1)//Position - 0xA607
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_208(var uParam0, int iParam1)//Position - 0xA642
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_209(int iParam0)//Position - 0xA67E
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)//Position - 0xA75A
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xA77D
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_219()) || Global_103602) || Global_25235) || func_218()) || func_51(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_219()) || Global_25235) || func_218()) || func_51(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_219()) || Global_103602) || Global_25235) || func_218()) || func_51(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_219()) || Global_103602) || Global_25235) || func_218()) || func_51(8, -1)) || func_217()) || func_216()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_219() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_51(8, -1)) || func_214()) || func_213()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_219()) || Global_25235) || func_218()) || func_51(8, -1)) || func_216()) || func_215()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_219()) || func_216()) || Global_103602) || Global_25235) || func_218()) || Global_36993) || func_51(8, -1)) || func_215()) || func_213()) || func_214()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_219()) || Global_103602) || Global_25235) || func_218()) || func_51(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()//Position - 0xAE9A
{
	return Global_92872.f_1;
}

int func_213()//Position - 0xAEA8
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()//Position - 0xAECE
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()//Position - 0xAEE8
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

bool func_216()//Position - 0xAF12
{
	return Global_92885.f_316 > 0;
}

bool func_217()//Position - 0xAF23
{
	return Global_92885.f_315 > 0;
}

var func_218()//Position - 0xAF34
{
	return Global_1312854;
}

int func_219()//Position - 0xAF40
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_220()//Position - 0xAF5C
{
	func_49();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)//Position - 0xAF84
{
	return func_201(func_202(), iParam0);
}

int func_222(int iParam0, int iParam1, int iParam2)//Position - 0xAF96
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_223(int iParam0)//Position - 0xB07A
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_224(int iParam0)//Position - 0xB09E
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_226())
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

int func_225()//Position - 0xB0FC
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

int func_226()//Position - 0xB140
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

int func_227(int iParam0)//Position - 0xB1FB
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

void func_228()//Position - 0xB263
{
	if (system::vdist(vLocal_50, -2255,21f, 4271,04f, 44,875f) < 5f)
	{
		iLocal_121 = 1;
	}
	else if (system::vdist(vLocal_50, -500,924f, -2165,36f, 7,6988f) < 5f)
	{
		iLocal_121 = 2;
	}
}

void func_229()//Position - 0xB2AE
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_72) && !unk_0x191BE1BC8F26F3C1(iLocal_72, 0))
	{
		unk_0x771A86309E0CA47B(iLocal_72, false);
		unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iLocal_72));
		func_241(&iLocal_72, 1, 0, 1);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_71) && !unk_0x191BE1BC8F26F3C1(iLocal_71, 0))
	{
		unk_0x2217C45231E6A537(iLocal_71, 310, true);
		unk_0x771A86309E0CA47B(iLocal_71, false);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_60))
	{
		unk_0xE30CF11C0EE14316(&iLocal_60);
	}
	func_61(&iLocal_63);
	if (unk_0xA6DECE14FC9A8C51(iLocal_61))
	{
		unk_0xE30CF11C0EE14316(&iLocal_61);
	}
	if (unk_0x771D0F8F56A5FE6C("RE_CAR_STEAL_SCENE"))
	{
		if (func_160(iLocal_73))
		{
			unk_0xF0037A481D043FE1(iLocal_73, 0);
		}
		unk_0xE02E32C69260FBB7("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 2)
	{
		unk_0x3A3E253FC4F98014(joaat("rocoto"));
	}
	else
	{
		unk_0x3A3E253FC4F98014(joaat("peyote"));
	}
	func_16(&iLocal_73);
	if (func_160(iLocal_76))
	{
		unk_0x4D7D93C6E0C1063B(iLocal_76, true);
	}
	unk_0xC234848D21B6064E(0);
	unk_0x94BD6F0436473406(1f);
	func_144(39, 0);
	func_144(40, 0);
	func_144(41, 0);
	func_144(42, 0);
	func_144(43, 0);
	func_144(44, 0);
	func_230(-1);
	func_63(&uLocal_138, 0, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_230(int iParam0)//Position - 0xB3CA
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_132();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_179())
	{
		func_234(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_233(30000);
		StringCopy(&cVar0, func_232(Global_104544, 1), 64);
		if (func_131(Global_104544) > 0)
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
	func_231(&Global_25292);
	Global_104545 = 0;
	func_185(-1);
}

void func_231(var uParam0)//Position - 0xB47F
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

char* func_232(int iParam0, bool bParam1)//Position - 0xB4BC
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

void func_233(int iParam0)//Position - 0xB705
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_234(int iParam0)//Position - 0xB717
{
	func_235(iParam0, 0, func_240(iParam0));
}

void func_235(int iParam0, int iParam1, int iParam2)//Position - 0xB72C
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_238(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_237(iParam0, &uVar0);
	Var1 = { func_236(&uVar0) };
}

struct<16> func_236(var uParam0)//Position - 0xB75B
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_237(int iParam0, var uParam1)//Position - 0xB82C
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB844
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_239(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB9C6
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_240(int iParam0)//Position - 0xB9FE
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

void func_241(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xBBA1
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*iParam0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*iParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*iParam0, false);
			}
		}
		unk_0x486F346ADFE56674(iParam0);
	}
}

