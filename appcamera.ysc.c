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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
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
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0,7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0,5f;
	fLocal_108 = 0,85f;
	fLocal_109 = 0,5f;
	fLocal_110 = -0,25f;
	fLocal_111 = 0,25f;
	fLocal_112 = 0,3f;
	fLocal_113 = 0,3f;
	fLocal_114 = 0,075f;
	unk_0x252CDD3D0F299441();
	if (unk_0xC45D692E0BD4797B() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0,7f;
	}
	if (!func_141())
	{
		Global_4265867 = 99;
		Global_4265868 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4265867 = 0;
		Global_4265868 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_140();
	if (func_139(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_138();
	iLocal_63 = unk_0xD0CA83418A236CB4();
	if (Global_14398 == 0)
	{
		fLocal_47 = 0,207f;
		fLocal_48 = 0,158f;
		fLocal_49 = 0,207f;
		fLocal_50 = 0,335f;
	}
	else
	{
		fLocal_47 = 0,24f;
		fLocal_48 = 0,258f;
		fLocal_49 = 0,24f;
		fLocal_50 = 0,435f;
	}
	Global_16789 = 0;
	Global_16790 = 0;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xDB23CAEFCB1F2719(unk_0xFC1458A37D98B502()))
		{
			Global_16789 = 1;
		}
		if (unk_0xDCED0EBAB4961A9E())
		{
			Global_16789 = 1;
		}
		if (unk_0xB8DE76287EDC4957(unk_0x0191A52225EFA665(unk_0xFC1458A37D98B502()), 0))
		{
			Global_16789 = 1;
		}
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
		{
			Global_16789 = 1;
		}
		if (unk_0xEA52493C36DC9AB2(unk_0xFC1458A37D98B502()))
		{
			Global_16789 = 1;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_16789 = 1;
			}
			iLocal_99 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if ((((unk_0x82FF3DFBC3965CC0(iLocal_99) == joaat("rhino") || unk_0x82FF3DFBC3965CC0(iLocal_99) == joaat("cutter")) || unk_0x82FF3DFBC3965CC0(iLocal_99) == joaat("submersible")) || unk_0x82FF3DFBC3965CC0(iLocal_99) == -1435527158) || (unk_0x82FF3DFBC3965CC0(iLocal_99) == -212993243 && unk_0x841136DE070DD9F6(iLocal_99, func_137(unk_0xFC1458A37D98B502(), 1))))
			{
				Global_16789 = 1;
			}
			else if (unk_0x317536BCEA8FA6B0(iLocal_99, -1, 0) == unk_0xFC1458A37D98B502())
			{
				if (unk_0x56BEE1F269FB3626(iLocal_99) > 0f)
				{
					if (!Global_70856)
					{
						if (!func_136())
						{
							unk_0x181B5054237CD6BD(unk_0xFC1458A37D98B502(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_70856)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 0);
		}
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 21);
	func_135(0);
	unk_0x872F1C1F8587CCC7(&Global_2323, 17);
	if (Global_14395 == 0)
	{
		func_134();
	}
	else
	{
		uLocal_91 = unk_0xD704C81492296A37("camera_gallery");
		uLocal_92 = unk_0xD704C81492296A37("instructional_buttons");
		while (!unk_0x34D11AB5BA7922C2(uLocal_91) || !unk_0x34D11AB5BA7922C2(uLocal_92))
		{
			system::wait(0);
			unk_0x9B16F08390FCC31C();
			unk_0x4FB260623DD93924(0, 25, 1);
		}
		if (Global_70856)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_133())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_132(uLocal_91, "DISPLAY_VIEW", system::to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_91, "CLOSE_SHUTTER");
		unk_0x008F3E3CC076EA0E(Global_14434, "DISPLAY_VIEW");
		unk_0xD07D5CD276368D36(16);
		unk_0x271AA5469AF471B3();
	}
	vLocal_41 = { Global_14413 };
	vLocal_42 = { Global_14406[Global_14398 /*3*/] };
	Global_16790 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2325, 3);
	}
	func_129();
	unk_0x5A66A86A47AC3B57(4);
	if (unk_0xA7960B1F4BE472D6())
	{
	}
	if (Global_4456448.f_138520)
	{
	}
	if (Global_4456448.f_138522 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		system::wait(0);
		unk_0x01B48CB2F72AE113(0, Global_14422);
		unk_0x01B48CB2F72AE113(0, 186);
		unk_0x9B16F08390FCC31C();
		unk_0x4FB260623DD93924(0, 25, 1);
		unk_0x4FB260623DD93924(0, 0, 1);
		if (!Global_104555.f_14021.f_81)
		{
			if (!unk_0xC80D31E4B587871C(Global_4267143, 13))
			{
				if (!unk_0xF491DD47B88AA84E())
				{
					if (!unk_0xC80D31E4B587871C(Global_2324, 28))
					{
						if (iLocal_79 && iLocal_82 == 0)
						{
							unk_0x872F1C1F8587CCC7(&Global_4267143, 13);
							Global_104555.f_14021.f_81 = 1;
							func_128("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x0F30C1F1717A6437())
		{
			if (Global_4456448.f_138519 == 0 && Global_4456448.f_138520 == 0)
			{
				unk_0x76F7AB2157E33DD9(15, 0f, -0,0375f);
			}
			unk_0x553231E7FC3C570D(7);
			func_127();
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 200, 1);
			}
			unk_0x4FB260623DD93924(0, 44, 1);
			unk_0x4FB260623DD93924(0, 47, 1);
			unk_0x4FB260623DD93924(0, 91, 1);
			unk_0x4FB260623DD93924(0, 92, 1);
			unk_0x4FB260623DD93924(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0x01B48CB2F72AE113(0, Global_14426);
			}
			unk_0x01B48CB2F72AE113(0, Global_14423);
			if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
			{
				iLocal_81 = 1;
				Global_14453.f_1 = 3;
				unk_0x6ACDC20166AA3FAC(0);
			}
			if (unk_0x6ECA49C17C28C1BD())
			{
				Global_14453.f_1 = 3;
				unk_0x6ACDC20166AA3FAC(0);
			}
			if (unk_0xC80D31E4B587871C(Global_2324, 3))
			{
				Global_14453.f_1 = 3;
				unk_0x6ACDC20166AA3FAC(0);
			}
			if (unk_0x3A711520F83BAE98())
			{
				if (func_116())
				{
					Global_14453.f_1 = 3;
					unk_0x6ACDC20166AA3FAC(0);
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
				{
					Global_14453.f_1 = 3;
					unk_0x6ACDC20166AA3FAC(0);
				}
				if ((unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()))
				{
					if (func_115())
					{
					}
					else
					{
						Global_14453.f_1 = 3;
						unk_0x6ACDC20166AA3FAC(0);
					}
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					if (Global_70856 == 1)
					{
						Global_14453.f_1 = 3;
					}
				}
				if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
				{
					if (unk_0x8AA8CAD184F4332C(unk_0xFC1458A37D98B502()) > 0,3f)
					{
						Global_14453.f_1 = 3;
					}
				}
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					func_114();
					iLocal_99 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					if (unk_0x56BEE1F269FB3626(iLocal_99) < 0f)
					{
						func_112(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0xD3D1635355B11EC7())
							{
								func_112(0);
							}
						}
						else if (!unk_0xD3D1635355B11EC7())
						{
							iLocal_67 = 1;
							system::wait(0);
							unk_0x9B16F08390FCC31C();
						}
					}
				}
				else if (Global_70856 == 0)
				{
					if (unk_0xC80D31E4B587871C(Global_2323, 18))
					{
						func_111();
						if ((Global_14453 == 0 || Global_14453 == 1) || Global_14453 == 2)
						{
							if (!unk_0x908FD398D7712D05(unk_0xFC1458A37D98B502()))
							{
								if (unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
								{
								}
								else
								{
									Global_14453.f_1 = 3;
									unk_0x6ACDC20166AA3FAC(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_110();
			}
			if (Global_14453.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_14453.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_108();
									if (Global_16794 == 0 && Global_16791 == 6)
									{
										unk_0xCF14F4421582B24A(0, 1);
										unk_0x6F9D12DB7F437EA4();
										iLocal_100 = 0;
										func_107();
										if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
										{
											vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
										}
										func_106();
										iLocal_60++;
										if (func_141())
										{
											func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_101();
									}
									if (Global_16791 == 0)
									{
										iLocal_100 = 0;
										unk_0x6F9D12DB7F437EA4();
										if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
										{
											vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
										}
										func_100();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_101();
										if (func_141())
										{
											if (Global_4265868 == 0)
											{
												if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
												{
													func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
										{
											func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_99();
										func_98(1);
									}
								}
								else if (Global_14453.f_1 != 9)
								{
									if (Global_16790 == 1)
									{
										if (Global_16789 == 0)
										{
											func_97();
										}
									}
									else if ((Global_2931 - Global_2930) > Global_2932)
									{
										if (func_96(2, Global_14421, 0))
										{
											if (func_95() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x6ACDC20166AA3FAC(0);
												unk_0x0B9D04994D02CC2F(iLocal_63);
												iLocal_94 = 0;
												if (Global_16789 == 0)
												{
													func_106();
													Global_16789 = 1;
													unk_0xCF14F4421582B24A(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_94(0, 0);
													func_98(0);
													iLocal_66 = 0;
													func_93();
													iLocal_93 = 0;
													func_91(0, 1);
													func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0xF491DD47B88AA84E())
										{
											func_90();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0xF491DD47B88AA84E())
									{
										func_90();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0xC80D31E4B587871C(Global_2323, 28))
										{
											func_90();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0xC80D31E4B587871C(Global_2323, 28))
									{
										func_90();
										iLocal_53 = 0;
									}
									if (Global_16789 == 1)
									{
										func_83();
									}
									else if (Global_14453.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_79();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_100();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
												{
													if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
													{
														func_131(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x53C562FD2B9E3AB0();
														while (unk_0x53C562FD2B9E3AB0() < (iLocal_86 + iLocal_88) && Global_14453.f_1 > 3)
														{
															func_127();
															func_110();
															func_78();
															unk_0x9B16F08390FCC31C();
															system::wait(0);
														}
													}
												}
												if (func_141())
												{
													if (Global_4265868 == 0)
													{
														if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
														{
															func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
												{
													func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_110();
												func_127();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_101();
												iLocal_87 = 0;
												func_131(uLocal_91, "OPEN_SHUTTER");
											}
											func_99();
											func_98(1);
											func_77();
										}
									}
									if (iLocal_94 == 1)
									{
										func_74();
									}
									if (iLocal_80)
									{
										if (system::timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0x872F1C1F8587CCC7(&Global_2323, 18);
											if (Global_16789 == 0)
											{
												func_91(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_16789 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_16792 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_78();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14453.f_1 > 3)
					{
						if (Global_16790 == 1)
						{
							if (Global_16789 == 0)
							{
								func_97();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					ui::_set_warning_message_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					ui::_set_warning_message_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					ui::_set_warning_message_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
					{
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
					{
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0x22718DDD09E0D966();
					switch (iVar0)
					{
						case -1:
							ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0xE8C126B7ADBB9D63(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_91(0, 1);
					}
					if (unk_0xE8C126B7ADBB9D63(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x58F436C557A0FD7A(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							iLocal_104 = 0;
							unk_0x044AC83D5E68F69D("Gallery");
							unk_0x3F6B83DFF8858BEA();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0xFD6215BABFD843F2())
					{
						if (unk_0xE8C126B7ADBB9D63(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0xE8C126B7ADBB9D63(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_91(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0xFD6215BABFD843F2())
					{
						if (unk_0xE8C126B7ADBB9D63(2, Global_14425))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							if (unk_0xC80D31E4B587871C(Global_2324, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x53C562FD2B9E3AB0();
							unk_0xB50D7608173794C6(1);
						}
					}
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_91(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x53C562FD2B9E3AB0();
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			Global_16789 = 0;
			Global_16790 = 0;
			Global_16792 = 0;
			unk_0xA68F7B004463AB6F(&uLocal_91);
			unk_0xA68F7B004463AB6F(&uLocal_92);
			unk_0x6ACDC20166AA3FAC(0);
			if (Global_14617 == 1)
			{
				unk_0x872F1C1F8587CCC7(&Global_2323, 17);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			unk_0xCF14F4421582B24A(0, 1);
			unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 3);
			unk_0x0EE72DB1CD8A3B86(&Global_4267143, 3);
			unk_0x3B235F54BDEDFCB5(15);
			Global_16793 = 1;
			unk_0x0B9D04994D02CC2F(iLocal_63);
			unk_0xB94964861C6B4D3C(iLocal_63);
			unk_0x6F9D12DB7F437EA4();
			func_93();
			unk_0x52AB33DB51F32B00(0);
			unk_0x664AEB6171452572(0);
			unk_0x65EA6278D5DCA362(1f);
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), "Mood_Normal_1", 0);
				unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
			}
			if (Global_4265868 > 0 && Global_4265868 < 13)
			{
				unk_0x137FC8E0F58D9E0B(sLocal_20[Global_4265868]);
			}
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 18);
			func_91(0, 1);
			if (func_139(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
}

void func_1(int iParam0)//Position - 0x109F
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x028D73DDA7D4E908(1);
		}
		else if (Global_14453.f_1 > 3)
		{
			unk_0x028D73DDA7D4E908(0);
		}
	}
}

int func_2()//Position - 0x10CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x1111
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1154
{
	iLocal_57 = unk_0x15A3997A02E7BA70(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0xAF619D80F9B52010();
			iLocal_61 = unk_0x566B497C185AB513();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0x34D11AB5BA7922C2(uLocal_91))
					{
						if (func_141())
						{
							if (Global_4265868 == 0)
							{
								if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
								{
									func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
							{
								func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x34D11AB5BA7922C2(uLocal_91))
				{
					func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0x6F9D12DB7F437EA4();
			break;
		
		case 1:
			if (!unk_0xE9EED03C22BB897C())
			{
				unk_0xD4D18C50DC965157("CELL_SPINNER2");
				unk_0xC268E592F3FB57EE(1);
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Global_2324, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_14453.f_1 = 3;
				Global_16793 = 1;
			}
			unk_0x6F9D12DB7F437EA4();
			break;
	}
}

void func_5()//Position - 0x12EF
{
	if (func_96(2, Global_14422, 0))
	{
		func_1(0);
		if (unk_0xC80D31E4B587871C(Global_2324, 28))
		{
			unk_0x6ACDC20166AA3FAC(0);
			system::settimerb(0);
			func_107();
			iLocal_78 = 0;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			}
			func_106();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0xC80D31E4B587871C(Global_2324, 14))
			{
				func_128("CELL_299", -1);
			}
			else
			{
				func_106();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_91(1, 1);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2323, 22))
	{
		func_1(0);
		while (system::timera() < 2000)
		{
			system::wait(0);
			func_127();
			unk_0x9B16F08390FCC31C();
			func_78();
			func_114();
			func_110();
		}
		unk_0x6ACDC20166AA3FAC(0);
		func_107();
		system::settimerb(0);
		iLocal_78 = 0;
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		func_101();
		func_106();
	}
	if (func_96(2, Global_14426, 0))
	{
		func_1(0);
		if (func_95() || unk_0xC80D31E4B587871C(Global_2324, 28))
		{
		}
		else
		{
			unk_0x6ACDC20166AA3FAC(0);
			system::settimerb(0);
			iLocal_87 = 1;
			func_107();
			iLocal_78 = 0;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			}
			func_106();
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2323, 28))
	{
		if (func_96(2, Global_14425, 0))
		{
			func_1(0);
			unk_0x6ACDC20166AA3FAC(0);
			unk_0x80485B1B75A39F6B(0, 0);
			system::wait(0);
			unk_0x9B16F08390FCC31C();
			func_127();
			system::wait(0);
			unk_0x9B16F08390FCC31C();
			func_127();
			unk_0xA8B0F4D8824FE590();
			unk_0xABD956822F3AC9E5();
			Global_16793 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_91(0, 1);
			Global_16789 = 1;
			unk_0xCF14F4421582B24A(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			if (!Global_2512808.f_5832)
			{
				unk_0x872F1C1F8587CCC7(&Global_2323, 9);
			}
			iLocal_93 = 0;
			func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()//Position - 0x1529
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Accept", &Global_14442, 1);
		func_7();
	}
}

void func_7()//Position - 0x154F
{
	if (func_2())
	{
		unk_0x4EF44BE7DE3DC97E(5);
	}
}

void func_8()//Position - 0x1563
{
	iLocal_100 = 1;
	Global_16794 = 1;
	unk_0xCF14F4421582B24A(0, 1);
}

int func_9()//Position - 0x1578
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_14453.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()//Position - 0x15C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x4C4813CAAD70E814(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_69();
		func_65();
		func_64();
		fLocal_36 = unk_0x528C6143A0EC0F0A();
		fLocal_37 = unk_0xA9569B87348EF766();
		if (iLocal_84 == 0)
		{
			if (unk_0xF2B58F79D29425B4(2, iVar0) && !unk_0xF2B58F79D29425B4(2, iVar1))
			{
				iLocal_84 = 1;
				func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xC80D31E4B587871C(Global_2323, 28))
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
					func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_280");
					func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
				unk_0x9499D7329FB840A2(fLocal_40);
				unk_0x271AA5469AF471B3();
				func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF2B58F79D29425B4(2, iVar0) || unk_0xF2B58F79D29425B4(2, iVar1))
		{
			iLocal_84 = 0;
			func_101();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0xF2B58F79D29425B4(2, iVar1) && !unk_0xF2B58F79D29425B4(2, iVar0))
			{
				iLocal_85 = 1;
				func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xC80D31E4B587871C(Global_2323, 28))
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
					func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_280");
					func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
				}
				func_59();
				unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
				unk_0x9499D7329FB840A2(fLocal_40);
				unk_0x271AA5469AF471B3();
				func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF2B58F79D29425B4(2, iVar1) || unk_0xF2B58F79D29425B4(2, iVar0))
		{
			iLocal_85 = 0;
			func_101();
		}
	}
	else
	{
		unk_0x2DB625A7D089C175(0, 2, 1);
		unk_0x2DB625A7D089C175(0, 1, 1);
	}
	if (unk_0x8CFF76532FEF34D4(2))
	{
		func_101();
	}
	func_114();
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 200, 1);
	}
	if (unk_0xE8C126B7ADBB9D63(2, 183) && iLocal_106 == 0)
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
			{
				if (unk_0xC80D31E4B587871C(Global_4267143, 2))
				{
					unk_0x0EE72DB1CD8A3B86(&Global_4267143, 2);
					if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
					{
						func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&Global_4267143, 2);
					func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0x008F3E3CC076EA0E(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1869584A8A72FEDD(false);
			func_58("CELL_FOCUS");
			unk_0x1869584A8A72FEDD(true);
			unk_0x271AA5469AF471B3();
		}
		if (!func_57(14))
		{
			if (unk_0xC80D31E4B587871C(Global_4267143, 10))
			{
				if ((Global_70856 == 0 && unk_0x8F38E94BBF3404CD(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x008F3E3CC076EA0E(uLocal_91, "SET_FOCUS_LOCK");
					unk_0x1869584A8A72FEDD(true);
					unk_0x7E099EB35339C80D("CELL_ACTTL");
					unk_0x854FACC4E5F40C82(unk_0xB2E1B414DD88808E(&Global_4268059));
					unk_0x9748595E4799A2CF();
					unk_0x1869584A8A72FEDD(false);
					unk_0x271AA5469AF471B3();
					unk_0x0EE72DB1CD8A3B86(&Global_4267143, 10);
				}
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_4267143, 10))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_4267143, 10);
		}
		iLocal_33 = unk_0x53C562FD2B9E3AB0();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vLocal_35 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				if (unk_0xBE3C4023003180FC(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_14453.f_1 = 3;
					unk_0x6ACDC20166AA3FAC(0);
				}
				iLocal_32 = unk_0x53C562FD2B9E3AB0();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0xF2B58F79D29425B4(0, 182))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
			iLocal_83 = 0;
			unk_0x008F3E3CC076EA0E(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1869584A8A72FEDD(false);
			func_58("CELL_FOCUS");
			unk_0x1869584A8A72FEDD(true);
			unk_0x271AA5469AF471B3();
		}
	}
	else if (unk_0xF2B58F79D29425B4(0, 182))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
		iLocal_83 = 1;
		if (!func_57(14))
		{
			unk_0x008F3E3CC076EA0E(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1869584A8A72FEDD(true);
			func_58("CELL_FOCUS");
			unk_0x1869584A8A72FEDD(true);
			unk_0x271AA5469AF471B3();
		}
	}
	if (func_141())
	{
		if (unk_0xE8C126B7ADBB9D63(2, 186) && iLocal_106 == 0)
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
						unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), "Mood_Normal_1", 0);
						unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
						if (Global_14453 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x742D2DEFFDC66EB8(unk_0xFC1458A37D98B502(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x742D2DEFFDC66EB8(unk_0xFC1458A37D98B502(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), "Mood_Normal_1", 0);
						unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
						unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
					}
				}
			}
		}
		if (unk_0xE8C126B7ADBB9D63(2, 185) && iLocal_106 == 0)
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x74C475EB8E73D398(sLocal_19[Global_4265867], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x52AB33DB51F32B00(1);
							unk_0x664AEB6171452572(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0x52AB33DB51F32B00(0);
						unk_0x664AEB6171452572(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0x52AB33DB51F32B00(1);
					unk_0x664AEB6171452572(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0x52AB33DB51F32B00(0);
					unk_0x664AEB6171452572(0);
				}
			}
		}
	}
	if (iLocal_26 == 1)
	{
		if (unk_0xE8C126B7ADBB9D63(0, 172) && iLocal_106 == 0)
		{
			if (func_141())
			{
				Global_4265868++;
				unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
			}
			if (Global_4265868 == 13)
			{
				func_98(0);
				unk_0x65EA6278D5DCA362(1f);
				unk_0x137FC8E0F58D9E0B(sLocal_20[(Global_4265868 - 1)]);
				Global_4265868 = 0;
				func_55();
				if (iLocal_21 == 1)
				{
					unk_0x0EE72DB1CD8A3B86(&Global_4267143, 2);
					iLocal_21 = 0;
					func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4265868 > 0 && Global_4265868 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0x128A5DCCD09CCA17(sLocal_20[Global_4265868], 0);
			}
		}
	}
	if (Global_4265868 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0xA51ADD51711B4A15(sLocal_20[Global_4265868]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xE42B64273B3869F2())
				{
					func_98(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0x872F1C1F8587CCC7(&Global_4267143, 2);
				func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x65EA6278D5DCA362(0,25f);
				unk_0x6118C4980BA825A2(sLocal_20[Global_4265868], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4265868 == 1 || Global_4265868 == 3)
			{
			}
			if (Global_4265868 == 2 || Global_4265868 == 4)
			{
			}
		}
	}
	if (unk_0xE8C126B7ADBB9D63(0, 173) && iLocal_106 == 0)
	{
		if (func_141())
		{
			func_93();
			Global_4265867++;
			unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
		}
		if (Global_4265867 == 13)
		{
			Global_4265867 = 0;
		}
		if (Global_4265867 == 0)
		{
			if (func_141())
			{
				func_93();
			}
		}
		else
		{
			func_99();
		}
		func_54();
	}
	if (unk_0x4CD14B4B1E8BD8BA(0, 184) && iLocal_106 == 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
			{
				vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				unk_0x4AFBCBFDE748D4E0(-1, "Menu_Navigate", &Global_14442, 1);
				func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x53C562FD2B9E3AB0();
				while (unk_0x53C562FD2B9E3AB0() < (iLocal_86 + iLocal_90) && Global_14453.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x9B16F08390FCC31C();
					system::wait(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0x0B9D04994D02CC2F(iLocal_63);
					iLocal_82 = 1;
					func_53(1);
					func_52();
					unk_0x872F1C1F8587CCC7(&Global_2325, 3);
					iLocal_32 = unk_0x53C562FD2B9E3AB0();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_53(0);
					iLocal_82 = 0;
					unk_0x0EE72DB1CD8A3B86(&Global_2325, 3);
				}
				iLocal_86 = unk_0x53C562FD2B9E3AB0();
				while (unk_0x53C562FD2B9E3AB0() < (iLocal_86 + iLocal_88) && Global_14453.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x9B16F08390FCC31C();
					system::wait(0);
				}
				func_131(uLocal_91, "OPEN_SHUTTER");
				if (func_141())
				{
					if (Global_4265868 == 0)
					{
						if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
						{
							func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
				{
					func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_110();
				func_127();
				if (unk_0xC80D31E4B587871C(Global_2323, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_50();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0xE8C126B7ADBB9D63(0, 40) || unk_0xE8C126B7ADBB9D63(0, 41))
			{
				fLocal_65 = unk_0x2FBB8C7F5671878C();
				if (fLocal_65 > 1f && fLocal_65 < 4,5f)
				{
					if (unk_0xCCCA18C9A006FF83(iLocal_63))
					{
						unk_0x4AFBCBFDE748D4E0(iLocal_63, "Camera_Zoom", &Global_14442, 1);
					}
				}
				else
				{
					unk_0x0B9D04994D02CC2F(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0xF2B58F79D29425B4(0, 40) || unk_0xF2B58F79D29425B4(0, 41))
		{
			fLocal_65 = unk_0x2FBB8C7F5671878C();
			if (fLocal_65 > 1f && fLocal_65 < 4,5f)
			{
				if (unk_0xCCCA18C9A006FF83(iLocal_63))
				{
					unk_0x4AFBCBFDE748D4E0(iLocal_63, "Camera_Zoom", &Global_14442, 1);
				}
			}
			else
			{
				unk_0x0B9D04994D02CC2F(iLocal_63);
			}
		}
		else
		{
			unk_0x0B9D04994D02CC2F(iLocal_63);
		}
	}
	if (func_96(2, Global_14422, 0))
	{
		fLocal_38 = unk_0x528C6143A0EC0F0A();
		fLocal_39 = unk_0xA9569B87348EF766();
		unk_0x80485B1B75A39F6B(0, 0);
		unk_0x872F1C1F8587CCC7(&Global_2323, 21);
		unk_0x0B9D04994D02CC2F(iLocal_63);
		iLocal_78 = 1;
		func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x4AFBCBFDE748D4E0(-1, "Camera_Shoot", &Global_14442, 1);
		func_131(uLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90,3f, 0f, 90f };
		unk_0x59F9FBA80E3B1114(vLocal_43, 0);
		if (!func_141())
		{
			func_93();
		}
		Global_16792 = 1;
		unk_0xCF14F4421582B24A(0, 1);
		while (Global_16791 < 6 && Global_14453.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			func_114();
			unk_0x9B16F08390FCC31C();
			system::wait(0);
		}
		unk_0x8CB04F0E1C1B11A9(0, 0);
		if (Global_14395)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x53C562FD2B9E3AB0();
		while (unk_0x53C562FD2B9E3AB0() < (iLocal_86 + iLocal_89) && Global_14453.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			unk_0x9B16F08390FCC31C();
			system::wait(0);
		}
		system::settimera(0);
		func_131(uLocal_91, "OPEN_SHUTTER");
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 21);
		func_101();
		if (Global_14453.f_1 > 3)
		{
			if (Global_70856)
			{
				func_20(1083, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0xA28FBFF41378592F(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xA28FBFF41378592F(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xA28FBFF41378592F(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_98(0);
		}
		func_110();
	}
	if (unk_0xC80D31E4B587871C(Global_2323, 28))
	{
		if (func_96(2, Global_14425, 0))
		{
			unk_0x80485B1B75A39F6B(0, 0);
			system::wait(0);
			unk_0x9B16F08390FCC31C();
			func_127();
			system::wait(0);
			unk_0x9B16F08390FCC31C();
			func_127();
			unk_0xA8B0F4D8824FE590();
			unk_0xABD956822F3AC9E5();
			Global_16793 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_16789 = 1;
			unk_0xCF14F4421582B24A(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			if (!Global_2512808.f_5832)
			{
				unk_0x872F1C1F8587CCC7(&Global_2323, 9);
			}
			unk_0x6ACDC20166AA3FAC(0);
			iLocal_93 = 0;
			func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()//Position - 0x2403
{
	func_12();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_12()//Position - 0x241C
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_15(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_14(unk_0xFC1458A37D98B502());
			if (func_13(iVar0) && (!func_57(14) || Global_103506))
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

bool func_13(int iParam0)//Position - 0x2519
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x2525
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

int func_15(int iParam0)//Position - 0x2562
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

void func_16(int iParam0, int iParam1)//Position - 0x258C
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_17()//Position - 0x25AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)//Position - 0x25E4
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x266A
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_14390 = { Global_14406[Global_14398 /*3*/] };
	func_91(0, 1);
	func_94(0, 0);
	func_98(0);
	iLocal_66 = 0;
	func_93();
	if (!unk_0xC80D31E4B587871C(Global_2324, 28))
	{
		if (unk_0xA7960B1F4BE472D6() == 0)
		{
			if (unk_0x04E8D1E1170F25E1())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x26CD
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x270F
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_25(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_25(uParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_25(uParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_25(uParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_25(uParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_25(uParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_25(uParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_25(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_25(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_25(uParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_25(uParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_25(uParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_25(uParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_25(uParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_25(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2DDA
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)//Position - 0x2E0A
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)//Position - 0x2FC0
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)//Position - 0x2FF2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

var func_26()//Position - 0x3026
{
	return Global_1312736;
}

void func_27()//Position - 0x3032
{
	if (iLocal_106 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_280");
		if (iLocal_82)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
				{
					if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_70856 == 0 && unk_0x8F38E94BBF3404CD(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
					func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_62(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_62(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
			{
				if (!unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
					func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_30)
						{
							func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 182, true), "CELL_FOCUS");
						}
						func_62(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
				}
				if (!unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
					func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					func_62(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_30)
						{
							func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 182, true), "CELL_FOCUS");
						}
						func_62(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
		unk_0x9499D7329FB840A2(fLocal_40);
		unk_0x271AA5469AF471B3();
		func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)//Position - 0x3495
{
	func_62(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xC9C4B2A22DE54C69(0, 174, true), "CELL_ACTION");
}

int func_29(int iParam0)//Position - 0x34B5
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_44(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_30(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x34F5
{
	return func_31(unk_0xFC1458A37D98B502(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x350F
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = 4;
	uVar1 = 4;
	uVar2 = 5;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_38(iParam0);
			if (!iVar3 == -1)
			{
				if (func_37(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_36(iParam0);
			if (!iVar4 == -1)
			{
				if (func_34(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x3A711520F83BAE98())
		{
			iVar5 = func_33(iParam0);
			if (!iVar5 == 0)
			{
				if (func_32(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)//Position - 0x35DE
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x361F
{
	int iVar0;
	
	iVar0 = unk_0x4CDD2D1D66ED1DE4(iParam0, 1);
	return iVar0;
}

bool func_34(var uParam0, int iParam1)//Position - 0x3632
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)//Position - 0x3642
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x3683
{
	int iVar0;
	
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, 0);
	return iVar0;
}

bool func_37(var uParam0, int iParam1)//Position - 0x3696
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)//Position - 0x36A6
{
	int iVar0;
	
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, 0);
	return iVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x36B9
{
	func_43(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 5, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 7, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 10:
					func_43(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_43(uParam4, 2, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_43(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 29:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 30:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					break;
				
				case 31:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					break;
				
				case 32:
				case 33:
				case 34:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_43(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 29, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 30, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)//Position - 0xAEF9
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)//Position - 0xAF0B
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)//Position - 0xAF5C
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)//Position - 0xAF6E
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_44(int iParam0, int iParam1)//Position - 0xAFC0
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_45(float fParam0)//Position - 0xB0AB
{
	func_62(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xC9C4B2A22DE54C69(0, 172, true), "CELL_BORDER");
}

void func_46(float fParam0)//Position - 0xB0CB
{
	if (Global_1665547 == 1)
	{
		fParam0 = -1f;
	}
	func_62(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xC9C4B2A22DE54C69(0, 173, true), "CELL_FILTER");
}

void func_47()//Position - 0xB0F6
{
	if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 183, true), "CELL_GRID");
	func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_29)
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_70856 == 0 && unk_0x8F38E94BBF3404CD(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x008F3E3CC076EA0E(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1869584A8A72FEDD(true);
			unk_0x7E099EB35339C80D("CELL_ACTTL");
			unk_0x854FACC4E5F40C82(unk_0xB2E1B414DD88808E(&Global_4268059));
			unk_0x9748595E4799A2CF();
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_48(float fParam0)//Position - 0xB203
{
	func_62(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xC9C4B2A22DE54C69(0, 175, true), "CELL_ACCYC");
}

void func_49()//Position - 0xB223
{
	func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
	func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
	func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
	func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_280");
	unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
	unk_0x9499D7329FB840A2(fLocal_40);
	unk_0x271AA5469AF471B3();
	func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()//Position - 0xB2FC
{
	if (iLocal_106 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
		func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
		if (iLocal_82)
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
				{
					if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_70856 == 0 && unk_0x8F38E94BBF3404CD(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
					func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_62(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_62(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
			{
				if (!unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
					func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						func_62(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502()) == 2)
			{
				if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
				}
				func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xC9C4B2A22DE54C69(2, 183, true), "CELL_GRID");
				func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
				func_62(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
				if (func_141())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_30)
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 182, true), "CELL_FOCUS");
					}
					func_62(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_1NP_XB");
					}
					func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(4f);
						func_45(5f);
						func_62(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xC9C4B2A22DE54C69(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
		unk_0x9499D7329FB840A2(fLocal_40);
		unk_0x271AA5469AF471B3();
		func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()//Position - 0xB793
{
	func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_284");
	func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0x715308393E136EA8(0, 1, true), "CELL_285");
	func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
	func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 177, true), "CELL_281");
	unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
	unk_0x9499D7329FB840A2(fLocal_40);
	unk_0x271AA5469AF471B3();
	func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()//Position - 0xB86C
{
	if (iLocal_82)
	{
		unk_0x7C9705890EF6612E(fLocal_36, 1065353216);
		unk_0xBB9A3C553EECB180(fLocal_37);
	}
}

void func_53(int iParam0)//Position - 0xB88A
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_138519 == 1)
	{
	}
	else if (Global_4456448.f_138520 == 1)
	{
	}
	else
	{
		unk_0xEFED9FB37EE14491(iParam0);
	}
}

void func_54()//Position - 0xB8C3
{
	if (iLocal_28 == 1)
	{
		if (unk_0x74C475EB8E73D398(sLocal_19[Global_4265867], "phone_cam12DUMMY"))
		{
			unk_0x52AB33DB51F32B00(0);
			unk_0x664AEB6171452572(0);
		}
		else
		{
			unk_0x52AB33DB51F32B00(1);
			unk_0x664AEB6171452572(1);
		}
	}
}

void func_55()//Position - 0xB8FB
{
	func_132(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_141())
	{
		if (Global_1665547 == 0)
		{
			unk_0x9959F25A51B74017("phone_cam");
		}
	}
}

int func_56()//Position - 0xB93A
{
	if (func_57(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/] || unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/]) || unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
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
	return 1;
}

bool func_57(int iParam0)//Position - 0xB9B6
{
	return Global_35861 == iParam0;
}

void func_58(char* sParam0)//Position - 0xB9C4
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_59()//Position - 0xB9D6
{
	if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 30, true), "CELL_RT_RSTICK");
		func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 1, true), "CELL_RT_RSTICK");
		func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_60()//Position - 0xBA85
{
	if (unk_0x4C4813CAAD70E814(2) || unk_0xFD6215BABFD843F2())
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xC9C4B2A22DE54C69(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_92, "SET_DATA_SLOT", 4f, unk_0x715308393E136EA8(0, 1, true), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xC9C4B2A22DE54C69(0, 39, true), "CELL_LT_LSTICKZ");
		func_62(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xC9C4B2A22DE54C69(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_61()//Position - 0xBB37
{
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_33 == 233 && Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_62(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0xBB76
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (!unk_0xAB019B170BF1309C(sParam3))
	{
		func_63(sParam3);
	}
	if (!unk_0xAB019B170BF1309C(sParam4))
	{
		func_58(sParam4);
	}
	unk_0x271AA5469AF471B3();
}

void func_63(char* sParam0)//Position - 0xBBB5
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_64()//Position - 0xBBC3
{
	if (Global_70856)
	{
		switch (Global_16873)
		{
			case 0:
				if (unk_0x4C4813CAAD70E814(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16873++;
				break;
			
			case 1:
				if (!unk_0xF491DD47B88AA84E())
				{
					if (unk_0x4C4813CAAD70E814(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16873++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16872)
		{
			case 0:
				if (unk_0x4C4813CAAD70E814(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16872++;
				break;
			
			case 1:
				if (!unk_0xF491DD47B88AA84E())
				{
					if (unk_0x4C4813CAAD70E814(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16872++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_65()//Position - 0xBCBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x4C4813CAAD70E814(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xF2B58F79D29425B4(2, iVar10) && !unk_0xF2B58F79D29425B4(2, iVar9))
	{
		unk_0x4FB260623DD93924(0, 2, 1);
		unk_0x4FB260623DD93924(0, 1, 1);
		iVar0 = system::floor(unk_0xBAE4B95B10A2442D(0, 30)) * 127;
		iVar1 = system::floor(unk_0xBAE4B95B10A2442D(0, 31)) * 127;
		iVar2 = system::floor(unk_0xBAE4B95B10A2442D(0, 1)) * 127;
		iVar3 = system::floor(unk_0xBAE4B95B10A2442D(0, 2)) * 127;
		if (unk_0x4C4813CAAD70E814(2))
		{
			if (unk_0xB89BB11E0945F6F0(iVar0) > 28 || unk_0xB89BB11E0945F6F0(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0xB89BB11E0945F6F0(iVar2) > 28 || unk_0xB89BB11E0945F6F0(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x4C4813CAAD70E814(2))
		{
			fVar7 = unk_0xBAE4B95B10A2442D(0, 290);
			fVar8 = unk_0xBAE4B95B10A2442D(0, 291);
			if (unk_0x7A3414CFDD1FDFA8())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xB89BB11E0945F6F0(iVar0) > 28 || unk_0xB89BB11E0945F6F0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_68(fVar5);
		func_67(fVar6);
		func_66(fVar4);
	}
	else if (!unk_0xF2B58F79D29425B4(2, iVar9))
	{
		unk_0x2DB625A7D089C175(0, 2, 1);
		unk_0x2DB625A7D089C175(0, 1, 1);
	}
}

void func_66(float fParam0)//Position - 0xBE3E
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0x3E06D8FBCF25FCE9(fLocal_111);
}

void func_67(float fParam0)//Position - 0xBE6A
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0x8A08A394E6250C39(fLocal_112);
}

void func_68(float fParam0)//Position - 0xBE96
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x10D7452BF50EA4BD(fLocal_113);
}

void func_69()//Position - 0xBEC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x4C4813CAAD70E814(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xF2B58F79D29425B4(2, iVar10))
		{
			if (unk_0xE8C126B7ADBB9D63(2, 178))
			{
				unk_0x0B348C9F76349218(0,5f);
				unk_0x6F13E60B59C26DA5(0,85f);
				unk_0xB9C5D17C19A6C51D(0,5f);
				unk_0x9546C394F33B69D5(-0,25f);
				fLocal_107 = 0,5f;
				fLocal_108 = 0,85f;
				fLocal_109 = 0,5f;
				fLocal_110 = -0,25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xF2B58F79D29425B4(2, iVar10) && !unk_0xF2B58F79D29425B4(2, iVar11))
	{
		if (unk_0xE8C126B7ADBB9D63(2, 178))
		{
			unk_0x0B348C9F76349218(0,5f);
			unk_0x6F13E60B59C26DA5(0,85f);
			unk_0xB9C5D17C19A6C51D(0,5f);
			unk_0x9546C394F33B69D5(-0,25f);
			fLocal_107 = 0,5f;
			fLocal_108 = 0,85f;
			fLocal_109 = 0,5f;
			fLocal_110 = -0,25f;
		}
		unk_0x4FB260623DD93924(0, 2, 1);
		unk_0x4FB260623DD93924(0, 1, 1);
		iVar0 = system::floor(unk_0xBAE4B95B10A2442D(0, 30)) * 127;
		iVar1 = system::floor(unk_0xBAE4B95B10A2442D(0, 31)) * 127;
		iVar2 = system::floor(unk_0xBAE4B95B10A2442D(0, 1)) * 127;
		iVar3 = system::floor(unk_0xBAE4B95B10A2442D(0, 2)) * 127;
		if (unk_0x4C4813CAAD70E814(2))
		{
			iVar1 = system::floor(unk_0xBAE4B95B10A2442D(0, 39)) * 127;
			fVar8 = unk_0xBAE4B95B10A2442D(0, 290);
			fVar9 = unk_0xBAE4B95B10A2442D(0, 291);
			if (unk_0x7A3414CFDD1FDFA8())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xB89BB11E0945F6F0(iVar2) > 15 || unk_0xB89BB11E0945F6F0(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0xB89BB11E0945F6F0(iVar0) > 28 || unk_0xB89BB11E0945F6F0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_73(fVar6);
		func_72(fVar7);
		func_71(fVar4);
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
	else if (!unk_0x5A632962B08A1872(2, iVar11))
	{
		unk_0x2DB625A7D089C175(0, 2, 1);
		unk_0x2DB625A7D089C175(0, 1, 1);
	}
	if (!unk_0x5A632962B08A1872(2, iVar10) && !unk_0x5A632962B08A1872(2, iVar11))
	{
		iVar0 = system::floor(unk_0xBAE4B95B10A2442D(0, 30)) * 127;
		iVar1 = system::floor(unk_0xBAE4B95B10A2442D(0, 31)) * 127;
		iVar2 = system::floor(unk_0xBAE4B95B10A2442D(0, 290)) * 127;
		iVar3 = system::floor(unk_0xBAE4B95B10A2442D(0, 291)) * 127;
		iVar2 = system::floor(unk_0xBAE4B95B10A2442D(0, 294)) * 127;
		iVar2 = system::floor(unk_0xBAE4B95B10A2442D(0, 295)) * 127;
		iVar3 = system::floor(unk_0xBAE4B95B10A2442D(0, 292)) * 127;
		iVar3 = system::floor(unk_0xBAE4B95B10A2442D(0, 293)) * 127;
		if (unk_0xB89BB11E0945F6F0(iVar2) > 28 || unk_0xB89BB11E0945F6F0(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0xB89BB11E0945F6F0(iVar0) > 28 || unk_0xB89BB11E0945F6F0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
}

void func_70(float fParam0)//Position - 0xC1EF
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0xB9C5D17C19A6C51D(fLocal_109);
}

void func_71(float fParam0)//Position - 0xC21B
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x9546C394F33B69D5(fLocal_110);
}

void func_72(float fParam0)//Position - 0xC247
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1,5f)
	{
		fLocal_108 = 1,5f;
	}
	else if (fLocal_108 < 0,5f)
	{
		fLocal_108 = 0,5f;
	}
	unk_0x6F13E60B59C26DA5(fLocal_108);
}

void func_73(float fParam0)//Position - 0xC283
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1,7f)
	{
		fLocal_107 = -1,7f;
	}
	unk_0x0B348C9F76349218(fLocal_107);
}

void func_74()//Position - 0xC2B7
{
	if (Global_71116 || Global_71117)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_138519 == 0 && Global_4456448.f_138520 == 0)
			{
				unk_0x28E092B1E386EB67(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_14395)
		{
			if (Global_14615)
			{
				if (iLocal_100 == 0)
				{
					if (Global_14453.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_76(255, 255, 255, 255);
			func_75(0,059f, 0,644f, "CELL_284", 0);
			func_76(255, 255, 255, 255);
			func_75(0,165f, 0,644f, "CELL_285", 0);
			func_76(255, 255, 255, 255);
			func_75(0,275f, 0,75f, "CELL_280", 0);
			func_76(255, 255, 255, 255);
			func_75(0,275f, 0,83f, "CELL_281", 0);
		}
	}
	else if (Global_14395)
	{
	}
	else
	{
		func_76(255, 255, 255, 255);
		func_75(0,275f, 0,75f, func_61(), 0);
		func_76(255, 255, 255, 255);
		func_75(0,275f, 0,79f, "CELL_286", 0);
		func_76(255, 255, 255, 255);
		func_75(0,275f, 0,83f, "CELL_281", 0);
	}
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xC406
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC41E
{
	unk_0x8D95497078BC0E3B(0,4f, 0,4f);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(1, 0, 0, 0, 205);
	unk_0xAF68647DC2E954D9(1);
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0xA54B8BFDEBB2AF89(iParam0, iParam1, iParam2, iParam3);
}

void func_77()//Position - 0xC45D
{
	unk_0x7C9705890EF6612E(fLocal_38, 1065353216);
	unk_0xBB9A3C553EECB180(fLocal_39);
}

void func_78()//Position - 0xC476
{
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0x4FB260623DD93924(0, 44, 1);
	unk_0x4FB260623DD93924(0, 3, 1);
	unk_0x4FB260623DD93924(0, 4, 1);
	unk_0x4FB260623DD93924(0, 5, 1);
	unk_0x4FB260623DD93924(0, 6, 1);
	unk_0x4FB260623DD93924(0, 1, 1);
	unk_0x4FB260623DD93924(0, 2, 1);
	unk_0x4FB260623DD93924(0, 39, 1);
	unk_0x4FB260623DD93924(0, 47, 1);
	unk_0x4FB260623DD93924(0, 56, 1);
}

void func_79()//Position - 0xC4D0
{
	vLocal_44 = { Global_14406[Global_14398 /*3*/] };
	if (Global_14395)
	{
		if (func_82())
		{
			unk_0x494F5FA1BF017D58(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (unk_0xC80D31E4B587871C(Global_2325, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_82() == 0)
		{
			if (unk_0xC80D31E4B587871C(Global_2325, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_14399[Global_14398 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x0D75BB9393CE608D(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90,3f, 0f, 90f };
			unk_0x59F9FBA80E3B1114(vLocal_43, 0);
			if (!unk_0xC80D31E4B587871C(Global_2323, 22))
			{
				if (unk_0xC80D31E4B587871C(Global_2323, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_80();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_80()//Position - 0xC6CF
{
	func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xC80D31E4B587871C(Global_2324, 28))
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_286");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 178, true), "CELL_277");
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
	unk_0x9499D7329FB840A2(fLocal_40);
	unk_0x271AA5469AF471B3();
	func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_81()//Position - 0xC7A1
{
	func_132(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xC80D31E4B587871C(Global_2324, 28))
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_286");
	}
	else
	{
		func_62(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xC9C4B2A22DE54C69(2, 179, true), func_61());
		func_62(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xC9C4B2A22DE54C69(2, 178, true), "CELL_277");
		func_62(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xC9C4B2A22DE54C69(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x008F3E3CC076EA0E(uLocal_92, "SET_MAX_WIDTH");
	unk_0x9499D7329FB840A2(fLocal_40);
	unk_0x271AA5469AF471B3();
	func_132(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_82()//Position - 0xC8A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_57(14))
		{
			return 0;
		}
		if (unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
		{
			return 0;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0xBABB179B9D27EF62())
			{
				if (unk_0x0BA31FF7931F3DD3(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502()) || unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502())) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x6CCC46F395931037(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
		if (Global_103603)
		{
			return 0;
		}
	}
	if (Global_70856)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x666DEE82C2B4C5B5();
	iVar1 = unk_0x8E8C94609BA4BEA9(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xBABB179B9D27EF62()))
	{
		iVar2 = 1;
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar3 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if ((((((((unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar3)) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iVar3))) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("seashark2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("rhino")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("submersible2")) || unk_0x82FF3DFBC3965CC0(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("apptrackify")) > 0 || Global_104555.f_14021.f_89)
		{
			if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0xCAC8
{
	unk_0x4FB260623DD93924(0, 47, 1);
	unk_0x01B48CB2F72AE113(0, Global_14423);
	vLocal_43 = { Global_14413 };
	vLocal_44 = { Global_14406[Global_14398 /*3*/] };
	if (func_82())
	{
		unk_0x61E6BFC0C93FDD65(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		unk_0x494F5FA1BF017D58(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_14395)
	{
		func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_82 = 0;
		if (unk_0xC80D31E4B587871C(Global_2323, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_84();
		}
		if (iLocal_72)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_82() == 0)
			{
				unk_0x59F9FBA80E3B1114(vLocal_41, 0);
				unk_0x0D75BB9393CE608D(vLocal_42);
			}
			func_91(0, 1);
		}
		else if (func_82() == 0)
		{
			unk_0x59F9FBA80E3B1114(vLocal_41, 0);
			unk_0x0D75BB9393CE608D(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_84();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_84();
		}
	}
	unk_0x59F9FBA80E3B1114(vLocal_41, 0);
}

void func_84()//Position - 0xCDD2
{
	func_1(0);
	if (func_82() == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 30))
		{
			unk_0x0D75BB9393CE608D(Global_14399[Global_14398 /*3*/]);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14406[Global_14398 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		unk_0x59F9FBA80E3B1114(vLocal_41, 0);
	}
	Global_16789 = 0;
	func_94(0, 0);
	func_98(0);
	iLocal_66 = 0;
	func_93();
	Global_14440 = 1;
	Global_16792 = 0;
	if (Global_14453.f_1 > 4)
	{
		Global_14453.f_1 = 6;
		Global_14431 = 1;
		func_85();
	}
	if (unk_0x34D11AB5BA7922C2(uLocal_91))
	{
		func_131(uLocal_91, "SHUTDOWN_MOVIE");
	}
	system::wait(0);
	unk_0x9B16F08390FCC31C();
	unk_0xA68F7B004463AB6F(&uLocal_92);
	unk_0xA68F7B004463AB6F(&uLocal_91);
	if (Global_14617 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 17);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 18);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 21);
	unk_0xCF14F4421582B24A(0, 1);
	unk_0x0EE72DB1CD8A3B86(&Global_2325, 3);
	unk_0x0EE72DB1CD8A3B86(&Global_4267143, 3);
	unk_0x6ACDC20166AA3FAC(0);
	unk_0x673813CA895142E3(unk_0x9EB17624F44A8DA4(), 1);
	unk_0x3B235F54BDEDFCB5(15);
	Global_16793 = 1;
	unk_0x0B9D04994D02CC2F(iLocal_63);
	unk_0xB94964861C6B4D3C(iLocal_63);
	unk_0x6F9D12DB7F437EA4();
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xFC5E55B45BF47418(unk_0xFC1458A37D98B502(), "Mood_Normal_1", 0);
		unk_0x7473BE00BC5FB4E3(unk_0xFC1458A37D98B502());
	}
	func_93();
	unk_0x52AB33DB51F32B00(0);
	unk_0x664AEB6171452572(0);
	unk_0x65EA6278D5DCA362(1f);
	if (Global_4265868 > 0 && Global_4265868 < 13)
	{
		unk_0x137FC8E0F58D9E0B(sLocal_20[Global_4265868]);
	}
	func_91(0, 1);
	if (func_139(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_85()//Position - 0xCF5C
{
	vector3 vVar0[24];
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x34D11AB5BA7922C2(Global_14434))
	{
		system::wait(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_2928);
			if (Global_2928 == 1)
			{
				func_132(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_132(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else if (Global_70856)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x872F1C1F8587CCC7(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_87();
				func_132(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0x271AA5469AF471B3();
				}
				else if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_88(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_88(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_132(Global_14434, "SET_THEME", system::to_float(Global_104555.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_87();
				if (Global_15769)
				{
					unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(4);
					unk_0xD07D5CD276368D36(0);
					unk_0xD07D5CD276368D36(2);
					unk_0x7E099EB35339C80D("CELL_CONDFON");
					unk_0x854FACC4E5F40C82(&Global_15771);
					unk_0x9748595E4799A2CF();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0x271AA5469AF471B3();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_104555.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14434, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), &(Global_104555.f_28020[Global_1638 /*29*/].f_7), &cVar0, &(Global_104555.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()//Position - 0xD537
{
	if (unk_0x34D11AB5BA7922C2(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
		}
		else
		{
			func_88(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
			if (unk_0xC80D31E4B587871C(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()//Position - 0xD6C7
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104555.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 0);
					break;
				
				case 2:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 1);
					break;
				
				case 3:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 2);
					break;
				
				case 4:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 3);
					break;
				
				case 5:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 4);
					break;
				
				case 6:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 5);
					break;
				
				case 7:
					unk_0x40730450A953ECE6(unk_0x9EB17624F44A8DA4(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_88(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xD93E
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_58(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_58(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_58(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_58(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_89(int iParam0)//Position - 0xD9F1
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_57(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_88(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_90()//Position - 0xDF97
{
	switch (iLocal_51)
	{
		case 1:
			unk_0xCF14F4421582B24A(0, 1);
			if (unk_0xC80D31E4B587871C(Global_2323, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Global_2323, 22))
			{
				unk_0xCF14F4421582B24A(0, 1);
				if (unk_0xC80D31E4B587871C(Global_2323, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_80();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_91(bool bParam0, bool bParam1)//Position - 0xE025
{
	if (bParam0)
	{
		if (func_92(0))
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

int func_92(int iParam0)//Position - 0xE099
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

void func_93()//Position - 0xE0F3
{
	if ((Global_4456448.f_138519 == 0 && Global_4456448.f_138520 == 0) && Global_1665547 == 0)
	{
		unk_0xBAD7096AD4E946DE();
	}
}

void func_94(int iParam0, int iParam1)//Position - 0xE12A
{
	if (Global_4456448.f_138519 == 1)
	{
	}
	else if (Global_4456448.f_138520 == 1)
	{
	}
	else
	{
		unk_0x8CB04F0E1C1B11A9(iParam0, iParam1);
	}
}

int func_95()//Position - 0xE15C
{
	if (unk_0xC80D31E4B587871C(Global_2323, 15))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0xE178
{
	if (unk_0xE8C126B7ADBB9D63(iParam0, iParam1) || (iParam2 == 1 && unk_0x4CD14B4B1E8BD8BA(iParam0, iParam1)))
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xE59B25D23E4C4B3E() == 0 || (unk_0x02BBA5FDE77816B9() && unk_0x4C4813CAAD70E814(2)))
			{
				return 0;
			}
		}
		if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_97()//Position - 0xE1EA
{
	if (Global_14395)
	{
		vLocal_43 = { -90,3f, 0f, 90f };
		vLocal_44 = { 1,5f, 0f, -17f };
		if (func_82())
		{
			unk_0x61E6BFC0C93FDD65(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			unk_0x494F5FA1BF017D58(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0,5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_82() == 0)
		{
			unk_0x59F9FBA80E3B1114(vLocal_41, 0);
			unk_0x0D75BB9393CE608D(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93,9f, 4,9f, 90,7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		unk_0x59F9FBA80E3B1114(vLocal_41, 0);
	}
	if (Global_14395)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_82())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				unk_0x59F9FBA80E3B1114(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				unk_0x0D75BB9393CE608D(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_16790 = 0;
				func_94(1, 1);
				iLocal_66 = 1;
				func_98(1);
				func_55();
				func_99();
				func_53(0);
				system::settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_110();
				func_132(uLocal_91, "DISPLAY_VIEW", system::to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
				{
					func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_134();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		unk_0x59F9FBA80E3B1114(vLocal_41, 0);
		Global_16790 = 0;
	}
}

void func_98(bool bParam0)//Position - 0xE562
{
	if (func_141())
	{
		if (bParam0)
		{
			if (!unk_0xE42B64273B3869F2())
			{
				unk_0x89AB7FAE44D20AEF(1);
				if (Global_4265868 > 0 && Global_4265868 < 99)
				{
					unk_0x6118C4980BA825A2(sLocal_20[Global_4265868], 0);
					unk_0x65EA6278D5DCA362(0,25f);
				}
			}
		}
		else if (unk_0xE42B64273B3869F2())
		{
			unk_0x89AB7FAE44D20AEF(0);
		}
	}
}

void func_99()//Position - 0xE5C0
{
	if (Global_4265867 > 0 && Global_4265867 < 99)
	{
		if (Global_1665547 == 0)
		{
			unk_0x9959F25A51B74017(sLocal_19[Global_4265867]);
		}
	}
}

void func_100()//Position - 0xE5F1
{
	if (Global_14395)
	{
		iLocal_76 = 0;
		func_55();
		func_91(1, 1);
		func_94(1, 1);
		iLocal_66 = 1;
		Global_16793 = 1;
	}
}

void func_101()//Position - 0xE619
{
	if (Global_4456448.f_138519 == 1 && func_102(1))
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_27();
		}
		if (unk_0x74C475EB8E73D398(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_102(int iParam0)//Position - 0xE68A
{
	if ((func_105() || func_104()) || (func_103() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_103()//Position - 0xE6B9
{
	return Global_2447174.f_16;
}

var func_104()//Position - 0xE6C7
{
	return Global_2447174.f_15;
}

var func_105()//Position - 0xE6D5
{
	return Global_2447174.f_14;
}

void func_106()//Position - 0xE6E3
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

void func_107()//Position - 0xE705
{
	unk_0x80485B1B75A39F6B(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_108()//Position - 0xE722
{
	func_109();
}

void func_109()//Position - 0xE72E
{
	if (iLocal_101)
	{
		if (system::timera() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_110()//Position - 0xE74D
{
	if (Global_14453.f_1 > 3)
	{
		if (!unk_0x0F30C1F1717A6437())
		{
			unk_0x0EB9853DF8BC0D87(uLocal_91, 0,5f, 0,5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_111()//Position - 0xE77F
{
	if (func_57(14))
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
		Global_14453 = func_11();
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

void func_112(int iParam0)//Position - 0xE821
{
	if (Global_14615)
	{
		func_91(0, 0);
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
	if (!func_113())
	{
		Global_14453.f_1 = 3;
	}
}

int func_113()//Position - 0xE891
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_114()//Position - 0xE8B8
{
	unk_0x4FB260623DD93924(0, 0, 1);
	unk_0x4FB260623DD93924(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0x01B48CB2F72AE113(0, Global_14426);
		unk_0x01B48CB2F72AE113(0, Global_14423);
		unk_0x4FB260623DD93924(0, 278, 1);
		unk_0x4FB260623DD93924(0, 279, 1);
		unk_0x4FB260623DD93924(0, 280, 1);
		unk_0x4FB260623DD93924(0, 281, 1);
		unk_0x4FB260623DD93924(0, 282, 1);
		unk_0x4FB260623DD93924(0, 282, 1);
		unk_0x4FB260623DD93924(0, 284, 1);
		unk_0x4FB260623DD93924(0, 285, 1);
		unk_0x4FB260623DD93924(0, 69, 1);
		unk_0x4FB260623DD93924(0, 70, 1);
		unk_0x4FB260623DD93924(0, 114, 1);
		unk_0x4FB260623DD93924(0, 71, 1);
		unk_0x4FB260623DD93924(0, 72, 1);
		unk_0x4FB260623DD93924(0, 74, 1);
		unk_0x4FB260623DD93924(0, 75, 1);
		unk_0x4FB260623DD93924(0, 76, 1);
		unk_0x4FB260623DD93924(0, 73, 1);
		unk_0x4FB260623DD93924(0, 77, 1);
		unk_0x4FB260623DD93924(0, 78, 1);
		unk_0x4FB260623DD93924(0, 286, 1);
		unk_0x4FB260623DD93924(0, 287, 1);
		unk_0x4FB260623DD93924(0, 79, 1);
		unk_0x4FB260623DD93924(0, 80, 1);
		unk_0x4FB260623DD93924(0, 81, 1);
		unk_0x4FB260623DD93924(0, 82, 1);
		unk_0x4FB260623DD93924(0, 86, 1);
		unk_0x4FB260623DD93924(0, 59, 1);
		unk_0x4FB260623DD93924(0, 60, 1);
		unk_0x4FB260623DD93924(0, 61, 1);
		unk_0x4FB260623DD93924(0, 62, 1);
		unk_0x4FB260623DD93924(0, 63, 1);
		unk_0x4FB260623DD93924(0, 64, 1);
		unk_0x4FB260623DD93924(0, 87, 1);
		unk_0x4FB260623DD93924(0, 88, 1);
		unk_0x4FB260623DD93924(0, 89, 1);
		unk_0x4FB260623DD93924(0, 90, 1);
		unk_0x4FB260623DD93924(0, 107, 1);
		unk_0x4FB260623DD93924(0, 108, 1);
		unk_0x4FB260623DD93924(0, 109, 1);
		unk_0x4FB260623DD93924(0, 110, 1);
		unk_0x4FB260623DD93924(0, 111, 1);
		unk_0x4FB260623DD93924(0, 112, 1);
		unk_0x4FB260623DD93924(0, 113, 1);
		unk_0x4FB260623DD93924(0, 114, 1);
		unk_0x4FB260623DD93924(0, 91, 1);
		unk_0x4FB260623DD93924(0, 92, 1);
		unk_0x4FB260623DD93924(0, 68, 1);
		unk_0x4FB260623DD93924(0, 102, 1);
		unk_0x4FB260623DD93924(0, 136, 1);
		unk_0x4FB260623DD93924(0, 137, 1);
		unk_0x4FB260623DD93924(0, 138, 1);
		unk_0x4FB260623DD93924(0, 139, 1);
		unk_0x4FB260623DD93924(0, 102, 1);
	}
}

int func_115()//Position - 0xEA97
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x8EE3A848975DDF21(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116()//Position - 0xEAEA
{
	var uVar0;
	
	func_123(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (func_120(157))
	{
		if (!func_119())
		{
			return 1;
		}
	}
	if (func_120(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()//Position - 0xEB74
{
	switch (func_118())
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

int func_118()//Position - 0xEBA8
{
	return Global_25233;
}

bool func_119()//Position - 0xEBB3
{
	return Global_2447174.f_586;
}

int func_120(int iParam0)//Position - 0xEBC2
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_121()//Position - 0xEBD9
{
	return Global_2456830;
}

bool func_122()//Position - 0xEBE5
{
	return Global_2447174.f_581;
}

void func_123(var uParam0)//Position - 0xEBF4
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
					func_124(iVar0);
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

void func_124(int iParam0)//Position - 0xEC67
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_126(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_125(iVar2, &bVar3))
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

int func_125(int iParam0, var uParam1)//Position - 0xECE8
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, false, 1);
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

int func_126(int iParam0, bool bParam1, bool bParam2)//Position - 0xED47
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

void func_127()//Position - 0xED91
{
	if (iLocal_106 == 1)
	{
		unk_0x553231E7FC3C570D(7);
		unk_0x553231E7FC3C570D(1);
		unk_0x553231E7FC3C570D(3);
		unk_0x553231E7FC3C570D(4);
		unk_0x553231E7FC3C570D(6);
		unk_0x553231E7FC3C570D(8);
		unk_0x553231E7FC3C570D(9);
		unk_0x553231E7FC3C570D(2);
	}
	else
	{
		unk_0x36853D5037847BF3();
	}
}

void func_128(char* sParam0, int iParam1)//Position - 0xEDD0
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_129()//Position - 0xEDE7
{
	if (func_130())
	{
		unk_0x1F1F32B1F6EBFC17();
		if (unk_0x5584B9099CE4A9B0(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_16793 = 1;
			Global_14453.f_1 = 3;
			unk_0x6F9D12DB7F437EA4();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0x34D11AB5BA7922C2(uLocal_91))
				{
					if (func_141())
					{
						if (Global_4265868 == 0)
						{
							if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
							{
								func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xC80D31E4B587871C(Global_4267143, 2))
						{
							func_132(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x34D11AB5BA7922C2(uLocal_91))
			{
				func_132(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_91, "SET_REMAINING_PHOTOS", system::to_float(iLocal_60), system::to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0x6F9D12DB7F437EA4();
	}
}

int func_130()//Position - 0xEF45
{
	if (Global_4456448.f_138519 == 1)
	{
		if (Global_70856)
		{
			return 0;
		}
	}
	if (Global_4456448.f_138520 == 1)
	{
		if (Global_70856)
		{
			return 0;
		}
	}
	if (unk_0x04E8D1E1170F25E1() || unk_0x8A81E55A71641BC1())
	{
		if (unk_0xC80D31E4B587871C(Global_2324, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_131(var uParam0, char* sParam1)//Position - 0xEFA1
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0x271AA5469AF471B3();
}

void func_132(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xEFB6
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

int func_133()//Position - 0xF019
{
	if (Global_70856)
	{
		Global_14453 = 3;
	}
	else
	{
		Global_14453 = func_11();
	}
	if (Global_14453 > 3)
	{
		Global_14453 = 3;
	}
	return Global_104555.f_14021[Global_14453 /*20*/].f_7;
}

void func_134()//Position - 0xF04F
{
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 8;
	}
	Global_16792 = 0;
	iLocal_78 = 0;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vLocal_34 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (Global_14395)
	{
		while (system::timera() < iLocal_88)
		{
			system::wait(0);
			func_110();
			func_78();
			unk_0x9B16F08390FCC31C();
		}
		func_131(uLocal_91, "OPEN_SHUTTER");
		func_127();
		func_101();
		iLocal_80 = 1;
		system::settimerb(0);
	}
	else
	{
		func_94(1, 1);
		func_98(1);
		func_55();
		func_99();
		func_53(0);
		iLocal_66 = 1;
	}
}

void func_135(int iParam0)//Position - 0xF0E3
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 15);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 15);
	}
}

bool func_136()//Position - 0xF106
{
	return Global_1312831;
}

int func_137(int iParam0, int iParam1)//Position - 0xF112
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

void func_138()//Position - 0xF197
{
}

int func_139(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xF19F
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && bParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_140()//Position - 0xF1D2
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x16700A5CF29C1FC1(unk_0xFC1458A37D98B502()))
		{
			unk_0x995BFC92D2115309(unk_0xFC1458A37D98B502(), 0, 0);
			unk_0x0B348C9F76349218(fLocal_107);
			unk_0x6F13E60B59C26DA5(fLocal_108);
			unk_0xB9C5D17C19A6C51D(fLocal_109);
		}
		else
		{
			unk_0x0B348C9F76349218(fLocal_107);
			unk_0x6F13E60B59C26DA5(fLocal_108);
			unk_0xB9C5D17C19A6C51D(fLocal_109);
		}
	}
	unk_0x9546C394F33B69D5(fLocal_110);
	unk_0x3E06D8FBCF25FCE9(fLocal_111);
	unk_0x8A08A394E6250C39(fLocal_112);
	unk_0x10D7452BF50EA4BD(fLocal_113);
	func_52();
}

int func_141()//Position - 0xF23F
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

