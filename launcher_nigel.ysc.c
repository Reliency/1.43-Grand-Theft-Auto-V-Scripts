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
	int iLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
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
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<2> Local_71 = { 0, 5 } ;
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
	var uLocal_87 = 5;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	int iVar4[7];
	bool bVar5;
	
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
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = unk_0x5354F72E0D8D7E53();
	iLocal_48 = unk_0x526A9A6B1B39C5F0();
	uLocal_52 = func_314(64);
	uLocal_53 = func_314(63);
	iLocal_54 = joaat("u_m_m_aldinapoli");
	iLocal_55 = joaat("premier");
	iLocal_68 = -1;
	unk_0xB8E96DD2D2EF0BC3(1);
	func_313();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar1 = { 0f, 0f, 0f };
	uVar2 = 15;
	func_312(&Var0);
	vVar1 = { ScriptParam_71.f_1[0 /*3*/] };
	Var3.f_1 = -1;
	iVar4[0] = 37;
	iVar4[1] = 38;
	iVar4[2] = 39;
	iVar4[3] = 40;
	iVar4[4] = 41;
	iVar4[5] = 42;
	iVar4[6] = 43;
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_311("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_103642[Var0 /*10*/].f_9 != -1)
			{
				func_311("Relinquishing candidate id...");
				func_310(&(Global_103642[Var0 /*10*/].f_9));
			}
		}
		func_292(&Var0, &Var3, 1);
	}
	if (!func_289(&iVar4, &Var0, vVar1, 1f))
	{
		func_288();
		func_311("SCRIPT TERMINATED");
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (!func_280(Var0))
	{
		func_288();
		func_311("SCRIPT TERMINATED");
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_279(Var0))
	{
		func_288();
		func_311("SCRIPT TERMINATED");
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (!func_245(&Var0, &uVar2))
	{
		system::wait(0);
		if (!unk_0x42F1FE4C7EC5F51E())
		{
			func_311("Player out of range [TERMINATING]");
			func_292(&Var0, &Var3, 1);
		}
	}
	if (Var0 == 43)
	{
		Var3 = 0;
	}
	unk_0x247EAA2E93D4A021(vVar1, Var0.f_15, 1, 0, 0, false);
	while (true)
	{
		system::wait(0);
		if (!func_211(&Var0, 1))
		{
			func_292(&Var0, &Var3, 1);
		}
		func_210(Var0);
		func_203(&iLocal_68, &(Var0.f_9), vVar1);
		if (Var0 == 42)
		{
			if (unk_0x8AD07B6FC24F47C4())
			{
				unk_0xEDB61F1ADC509416(func_202(), 4, 0, 0, func_201());
				func_311("Nigel 2 : set Di Napoli's cutscene trousers variation in launcher");
			}
		}
		if (func_200(&uLocal_56) && Var0 == 37)
		{
			func_197(Var0.f_28[1], &uLocal_56, Var0);
		}
		if (Var0 == 37)
		{
			func_193(&Var0, vVar1, "NIG1AAU", "NIG1A_AMB", 0, "NIGEL", 1, "MRSTHORNHILL", &uLocal_70);
		}
		else if (Var0 == 42)
		{
			func_188(&Var0, vVar1, "NIG2AUD", "NIG2_AMB", 4, "NIGEL", 5000, 14f);
		}
		else if (Var0 == 43)
		{
			func_186(&Var3, &(Var0.f_35[0]), &(Var0.f_28[1]));
			func_188(&Var0, -44,75f, -1289,86f, 29,16f, "NIGE3AU", "NIGEL3_AMB", 4, "NIGEL", 8000, 1101004800);
		}
		bVar5 = false;
		if (Var0 == 41)
		{
			if (func_184(&Var0, &uVar2) || func_183(&Var0))
			{
				bVar5 = true;
			}
		}
		else if (func_168(&Var0, 0))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			if (Var0 == 42)
			{
				func_167(1, 0, 1, 0);
			}
			if (func_166(Var0))
			{
				func_163(Var0, &iLocal_69);
			}
			if (!func_2(&Var0))
			{
				func_292(&Var0, &Var3, 1);
			}
			if (func_1(&Var0))
			{
				func_292(&Var0, &Var3, 0);
			}
		}
	}
}

int func_1(int iParam0)//Position - 0x37F
{
	while (!Global_103642[*iParam0 /*10*/])
	{
		system::wait(0);
	}
	return 1;
}

int func_2(int iParam0)//Position - 0x39D
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_162())
	{
		while (!func_153(*iParam0))
		{
			if (func_152(*iParam0))
			{
				func_143();
			}
			if (!func_211(iParam0, *iParam0 != 2))
			{
				func_311("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			system::wait(0);
		}
	}
	if (func_142())
	{
		func_140();
	}
	if (!func_110(iParam0))
	{
		func_311("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_107(*iParam0, &Var0);
	MemCopy(&sVar1, {func_106(*iParam0)}, 4);
	func_104(&sVar1, Var0.f_3, 0);
	func_103(*iParam0);
	if (!func_162())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0);
	return 1;
}

void func_3(int iParam0, char* sParam1)//Position - 0x45F
{
	func_21(sParam1);
	unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_18544[iParam0 /*6*/]), 5);
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			system::wait(0);
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) < 1)
	{
		Global_55904 = 0;
		unk_0xD9E2C360120FEB7C("mission_stat_watcher");
		while (!unk_0x3B6F9DF9C5FEB3A4("mission_stat_watcher"))
		{
			system::wait(0);
		}
		system::start_new_script("mission_stat_watcher", 1828);
		unk_0x9D2418D7FC697249("mission_stat_watcher");
	}
	while (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 5))
	{
		if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_18544[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)//Position - 0x51E
{
	int iVar0;
	int iVar1;
	
	if (Global_55901 == 1)
	{
		func_18();
		Global_55901 = 0;
		if (Global_55896)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55904 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_55918, {func_9(iParam0)}, 4);
	Global_55906 = 0;
	Global_55905 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55893 = 1;
			Global_55896 = 1;
			Global_55899 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_55904 = 1;
			Global_55905 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_68148;
	Global_68148 = 1;
	iVar1 = Global_68149;
	Global_68149 = iParam0;
	if (!Global_55893)
	{
		if ((Global_68149 != iVar1 || Global_67998 == 0) || iVar0 != Global_68148)
		{
			Global_25483 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_55896 = 1;
		}
	}
	Global_55931 = unk_0x53C562FD2B9E3AB0();
	func_5();
	Global_55903 = 0;
}

void func_5()//Position - 0x678
{
	int iVar0;
	
	if (!Global_55900)
	{
		return;
	}
	if (Global_67998 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		switch (Global_56128[Global_67999[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67999[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55911)
				{
					Global_67999[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67999[iVar0 /*9*/].f_1 != 0)
					{
						Global_67999[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55900 = 0;
}

void func_6(int iParam0)//Position - 0x72B
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)//Position - 0xB13
{
	Global_55896 = 1;
	Global_55899 = 1;
	if (Global_67998 > 15)
	{
		return;
	}
	func_8(Global_67998);
	Global_67999[Global_67998 /*9*/] = iParam0;
	Global_67998++;
	if (Global_56128[iParam0 /*13*/] == 16)
	{
		Global_68150 = 1;
	}
}

void func_8(int iParam0)//Position - 0xB5E
{
	Global_67999[iParam0 /*9*/].f_1 = 0;
	Global_67999[iParam0 /*9*/].f_2 = 0f;
	Global_67999[iParam0 /*9*/].f_3 = 0;
	Global_67999[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)//Position - 0xB92
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_106(iParam0) };
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

void func_10()//Position - 0xBCA
{
	if (Global_55903)
	{
		return;
	}
	Global_55912 = 0;
	Global_67998 = 0;
	Global_55914 = 0;
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	func_17(0);
	func_16();
	Global_68150 = 0;
	Global_55902 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_55893 = 0;
	Global_55923 = 0;
	Global_55931 = -1;
}

void func_11()//Position - 0xC20
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68185[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68194 = 0;
}

void func_12()//Position - 0xC4D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_68151[iVar0 /*2*/] = 0;
		Global_68151[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68184 = 0;
}

void func_13()//Position - 0xC84
{
	Global_56062 = 0;
}

void func_14()//Position - 0xC90
{
	Global_55922 = 0;
	Global_55926 = func_15(joaat("sp0_shots"));
	Global_55925 = func_15(joaat("sp0_hits"));
	Global_55928 = func_15(joaat("sp1_shots"));
	Global_55927 = func_15(joaat("sp1_hits"));
	Global_55930 = func_15(joaat("sp2_shots"));
	Global_55929 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)//Position - 0xCE4
{
	var uVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()//Position - 0xCF8
{
	int iVar0;
	
	Global_55932 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55933[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)//Position - 0xD22
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_18()//Position - 0xD36
{
	int iVar0;
	
	Global_55901 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		Global_67999[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55911)
	{
	}
	Global_55911 = 0;
}

void func_19()//Position - 0xD6F
{
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_55898 && !Global_55897)
			{
				Global_55898 = 0;
				unk_0xB78F9271050618A3("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xB78F9271050618A3("mission_stat_watcher");
		}
	}
}

int func_20()//Position - 0xDB1
{
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55896)
	{
		return 0;
	}
	return Global_55908;
}

void func_21(char* sParam0)//Position - 0xDDB
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)//Position - 0xDEE
{
	unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0xE0B
{
	if (Global_92833 != 10 && Global_92833 != 9)
	{
		StringCopy(&Global_95141, cParam0, 32);
		func_25(&Global_95149, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_87156 = 0;
	}
}

void func_24()//Position - 0xE50
{
	int iVar0;
	int iVar1;
	
	Global_98118 = Global_95149;
	Global_98118.f_1 = Global_95149.f_1;
	Global_98118.f_6 = Global_95149.f_6;
	Global_98118.f_7 = Global_95149.f_7;
	Global_98118.f_8 = Global_95149.f_8;
	Global_98118.f_2 = Global_95149.f_2;
	Global_98118.f_3 = Global_95149.f_3;
	Global_98118.f_4 = Global_95149.f_4;
	Global_98118.f_5 = Global_95149.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_98118.f_9[iVar1] = Global_95149.f_9[iVar1];
		Global_98118.f_13[iVar1] = Global_95149.f_13[iVar1];
		Global_98118.f_17[iVar1] = Global_95149.f_17[iVar1];
		Global_98118.f_21[iVar1] = Global_95149.f_21[iVar1];
		Global_98118.f_25[0 /*295*/][iVar1 /*98*/] = { Global_95149.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_98118.f_25[1 /*295*/][iVar1 /*98*/] = { Global_95149.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_98118.f_616[iVar1 /*65*/][iVar0] = Global_95149.f_616[iVar1 /*65*/][iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_13[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_26[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_98118.f_616[iVar1 /*65*/].f_59 = Global_95149.f_616[iVar1 /*65*/].f_59;
		Global_98118.f_616[iVar1 /*65*/].f_60 = Global_95149.f_616[iVar1 /*65*/].f_60;
		Global_98118.f_616[iVar1 /*65*/].f_61 = Global_95149.f_616[iVar1 /*65*/].f_61;
		Global_98118.f_616[iVar1 /*65*/].f_62 = Global_95149.f_616[iVar1 /*65*/].f_62;
		Global_98118.f_616[iVar1 /*65*/].f_63 = Global_95149.f_616[iVar1 /*65*/].f_63;
		Global_98118.f_616[iVar1 /*65*/].f_64 = Global_95149.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_98118.f_616[iVar1 /*65*/].f_39[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_98118.f_616[iVar1 /*65*/].f_49[iVar0] = Global_95149.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_98118.f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_95149.f_812[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_98118.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_95149.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_98118.f_2229[iVar1 /*32*/][iVar0] = Global_95149.f_2229[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_98118.f_2229[iVar1 /*32*/].f_5[iVar0] = Global_95149.f_2229[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_98118.f_2229[iVar1 /*32*/].f_16[iVar0] = Global_95149.f_2229[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_98118.f_2326[iVar1] = Global_95149.f_2326[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_98118.f_2823[iVar1 /*15*/][iVar0] = Global_95149.f_2823[iVar1 /*15*/][iVar0];
			Global_98118.f_2823[iVar1 /*15*/].f_5[iVar0] = Global_95149.f_2823[iVar1 /*15*/].f_5[iVar0];
			Global_98118.f_2823[iVar1 /*15*/].f_10[iVar0] = Global_95149.f_2823[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_98118.f_2330[iVar1 /*164*/][iVar0] = Global_95149.f_2330[iVar1 /*164*/][iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_4[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_4[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_8[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_8[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_12[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_12[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_16[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_16[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_20[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_20[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_24[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_24[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_28[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_28[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_32[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_32[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_36[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_36[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_40[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_40[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_44[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_44[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_48[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_48[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_52[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_52[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_56[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_56[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_60[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_60[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_64[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_64[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_68[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_68[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_72[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_72[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_76[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_76[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_80[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_80[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_84[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_84[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_88[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_88[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_92[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_92[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_96[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_96[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_100[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_100[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_104[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_104[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_108[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_108[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_112[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_112[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_116[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_116[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_120[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_120[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_124[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_124[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_128[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_128[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_132[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_132[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_136[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_136[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_140[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_140[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_144[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_144[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_148[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_148[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_152[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_152[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_156[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_156[iVar0];
			Global_98118.f_2330[iVar1 /*164*/].f_160[iVar0] = Global_95149.f_2330[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_98118.f_2869 = { Global_95149.f_2869 };
	Global_98118.f_2869.f_3 = Global_95149.f_2869.f_3;
	Global_98118.f_2875 = { Global_95149.f_2875 };
	Global_98118.f_2875.f_3 = { Global_95149.f_2875.f_3 };
	Global_98118.f_2875.f_6 = Global_95149.f_2875.f_6;
	Global_98118.f_2875.f_8 = Global_98118.f_2875.f_8;
	Global_98118.f_2875.f_7 = Global_95149.f_2875.f_7;
	Global_98118.f_2875.f_9 = Global_95149.f_2875.f_9;
	Global_98118.f_2875.f_11 = Global_95149.f_2875.f_11;
	Global_98118.f_2875.f_10 = Global_95149.f_2875.f_10;
	Global_98118.f_2875.f_12 = Global_95149.f_2875.f_12;
	Global_98118.f_2875.f_12.f_1 = { Global_95149.f_2875.f_12.f_1 };
	Global_98118.f_2875.f_12.f_5 = Global_95149.f_2875.f_12.f_5;
	Global_98118.f_2875.f_12.f_6 = Global_95149.f_2875.f_12.f_6;
	Global_98118.f_2875.f_12.f_7 = Global_95149.f_2875.f_12.f_7;
	Global_98118.f_2875.f_12.f_8 = Global_95149.f_2875.f_12.f_8;
	Global_98118.f_2875.f_12.f_9 = { Global_95149.f_2875.f_12.f_9 };
	Global_98118.f_2875.f_12.f_59 = { Global_95149.f_2875.f_12.f_59 };
	Global_98118.f_2875.f_12.f_62 = Global_95149.f_2875.f_12.f_62;
	Global_98118.f_2875.f_12.f_63 = Global_95149.f_2875.f_12.f_63;
	Global_98118.f_2875.f_12.f_64 = Global_95149.f_2875.f_12.f_64;
	Global_98118.f_2875.f_12.f_65 = Global_95149.f_2875.f_12.f_65;
	Global_98118.f_2875.f_12.f_77 = Global_95149.f_2875.f_12.f_77;
	Global_98118.f_2875.f_12.f_66 = Global_95149.f_2875.f_12.f_66;
	Global_98118.f_2875.f_12.f_67 = Global_95149.f_2875.f_12.f_67;
	Global_98118.f_2875.f_12.f_68 = Global_95149.f_2875.f_12.f_68;
	Global_98118.f_2875.f_12.f_69 = Global_95149.f_2875.f_12.f_69;
	Global_98118.f_2875.f_12.f_71 = Global_95149.f_2875.f_12.f_71;
	Global_98118.f_2875.f_12.f_72 = Global_95149.f_2875.f_12.f_72;
	Global_98118.f_2875.f_12.f_73 = Global_95149.f_2875.f_12.f_73;
	Global_98118.f_2875.f_12.f_74 = Global_95149.f_2875.f_12.f_74;
	Global_98118.f_2875.f_12.f_75 = Global_95149.f_2875.f_12.f_75;
	Global_98118.f_2875.f_12.f_76 = Global_95149.f_2875.f_12.f_76;
	Global_98118.f_2965 = Global_95149.f_2965;
	Global_98118.f_2965.f_1 = Global_95149.f_2965.f_1;
	Global_98118.f_2965.f_2 = Global_95149.f_2965.f_2;
	Global_98118.f_2965.f_3 = Global_95149.f_2965.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1AE4
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_102();
	uParam0->f_1 = func_91();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_65(&(uParam0->f_2869), 0);
		func_64(unk_0xFC1458A37D98B502());
		func_57(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_54())
		{
			func_47(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2965));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)//Position - 0x296C
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x298E
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2A16
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x2A56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)//Position - 0x2A84
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)//Position - 0x2B60
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2BA2
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x2C05
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)//Position - 0x2C93
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)//Position - 0x2CD5
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

bool func_36(int iParam0)//Position - 0x2F31
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)//Position - 0x2F3D
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_41(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)//Position - 0x31E8
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x3298
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x3372
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_41(var uParam0)//Position - 0x3392
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3443
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_102(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, bool bParam2)//Position - 0x3572
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x35E3
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x36BC
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x36F9
{
	if (func_36(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_47(int iParam0, var uParam1, int iParam2)//Position - 0x3723
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_53(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_52(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_51(161, -1))
			{
				uParam1->f_59 = func_48(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_48(749, Global_70668, 0);
			}
			uParam1->f_60 = func_48(750, Global_70668, 0);
			uParam1->f_61 = func_48(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_51(161, -1))
			{
				uParam1->f_59 = func_48(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_48(749, Global_70668, 0);
			}
		}
	}
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x38CD
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(var uParam0)//Position - 0x38FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_50();
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

int func_50()//Position - 0x3933
{
	return Global_1312736;
}

int func_51(int iParam0, int iParam1)//Position - 0x393F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x396B
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3EB3
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_54()//Position - 0x40F6
{
	func_55();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_55()//Position - 0x410F
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_46(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_45(unk_0xFC1458A37D98B502());
			if (func_36(iVar0) && (!func_56(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_36(Global_104555.f_2353.f_539.f_4301))
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

bool func_56(int iParam0)//Position - 0x420C
{
	return Global_35861 == iParam0;
}

void func_57(int iParam0, bool bParam1)//Position - 0x421A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_58(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_58(int iParam0, var uParam1)//Position - 0x430D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_63(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_63(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_61(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_61(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x359D12B4F89DA5D6();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_60(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar5))
					{
						if (unk_0x768809DD20D4F552(iVar5, iVar1, &Var8))
						{
							if (!func_59(Var8.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, Var8.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_59(int iParam0)//Position - 0x4597
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x4632
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)//Position - 0x47A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_62(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_59(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_62(int iParam0, var uParam1)//Position - 0x5317
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)//Position - 0x5352
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_64(int iParam0)//Position - 0x55C6
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_65(var uParam0, int iParam1)//Position - 0x5602
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, true, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_69(&iVar0))
		{
			if (func_67(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0))
		{
			iVar3 = func_102();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, true, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_66(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5B5D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(vParam0))
	{
		iVar0 = unk_0xC0765AFBFA616644(vParam2, sParam1);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(int iParam0, var uParam1, var uParam2)//Position - 0x5BA1
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f, 0);
}

bool func_68(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6258
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_69(var uParam0)//Position - 0x629F
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_90())
		{
			*uParam0 = func_75(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_74(*uParam0) && !func_70(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_70(int iParam0)//Position - 0x62FA
{
	return func_71(iParam0, 0, 1);
}

int func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x630A
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_73() == 0)
		{
			return unk_0xC80D31E4B587871C(func_48(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x636A
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

int func_73()//Position - 0x664F
{
	return Global_25233;
}

int func_74(int iParam0)//Position - 0x665A
{
	return func_71(iParam0, 5, 1);
}

int func_75(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x666A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_89(iVar0))
		{
			if (!bParam3 || func_88(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_76(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_76(int iParam0, bool bParam1)//Position - 0x670C
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_87(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_86())
			{
				if (func_85(Global_1595538))
				{
					return func_78(2, 2);
				}
				else if (func_77(Global_1595538))
				{
					return func_78(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_77(int iParam0)//Position - 0x6CAB
{
	if (iParam0 != func_86())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_78(int iParam0, int iParam1)//Position - 0x6D09
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_86())
	{
		if (iParam1 == 3)
		{
			if (func_79(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_79(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_79(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_79(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x6DB7
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_84(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_84(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_82(iParam0) };
	}
	else
	{
		Var2 = { func_81(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_80(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_80(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_80(vector3 vParam0, float fParam1)//Position - 0x6E4C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_81(int iParam0)//Position - 0x6E90
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_82(int iParam0)//Position - 0x7014
{
	return func_83(iParam0);
}

struct<6> func_83(int iParam0)//Position - 0x7022
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_84(int iParam0, var uParam1)//Position - 0x7AE9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x7B6B
{
	if (iParam0 != func_86())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_86()//Position - 0x7BC9
{
	return -1;
}

Vector3 func_87(int iParam0)//Position - 0x7BD2
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_88(int iParam0)//Position - 0x7D6F
{
	return func_71(iParam0, 0, 0);
}

int func_89(int iParam0)//Position - 0x7D7F
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_90()//Position - 0x800E
{
	return Global_92885.f_315 > 0;
}

var func_91()//Position - 0x801F
{
	var uVar0;
	
	func_101(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_100(&uVar0, unk_0x95327550F0F2BE7C());
	func_99(&uVar0, unk_0x674C9438180770FE());
	func_94(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_93(&uVar0, unk_0xEAF455949B108589());
	func_92(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_92(var uParam0, int iParam1)//Position - 0x8065
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

void func_93(var uParam0, int iParam1)//Position - 0x80EB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_94(var uParam0, int iParam1)//Position - 0x811E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_98(*uParam0);
	iVar1 = func_96(*uParam0);
	if (iParam1 < 1 || iParam1 > func_95(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_95(int iParam0, int iParam1)//Position - 0x816F
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

var func_96(int iParam0)//Position - 0x8211
{
	return (system::shift_right(iParam0, 26) & 31 * func_97(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_97(bool bParam0, int iParam1, int iParam2)//Position - 0x8236
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_98(var uParam0)//Position - 0x824D
{
	return uParam0 & 15;
}

void func_99(var uParam0, int iParam1)//Position - 0x825A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_100(var uParam0, int iParam1)//Position - 0x8294
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_101(var uParam0, int iParam1)//Position - 0x82CF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_102()//Position - 0x830B
{
	func_55();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_103(int iParam0)//Position - 0x8324
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		uVar0 = iParam0;
		unk_0x9C6C754DD3BC5452(9, &uVar0, 1, 1);
	}
	else if (unk_0x8A81E55A71641BC1() || unk_0xFD6215BABFD843F2())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x84CCB9DCA385196F(9, &cVar1);
	}
}

void func_104(char* sParam0, int iParam1, int iParam2)//Position - 0x837D
{
	if (!unk_0xAB019B170BF1309C(&Global_90048))
	{
		unk_0x8119B12F6588AF71(&Global_90048, 0, 0, 0, 1, 0);
		StringCopy(&Global_90048, "", 64);
	}
	StringCopy(&Global_90048, sParam0, 64);
	unk_0xE828B31F48018963(sParam0, iParam1, iParam2, func_105(0));
}

bool func_105(bool bParam0)//Position - 0x83BF
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

struct<2> func_106(int iParam0)//Position - 0x83EA
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

void func_107(int iParam0, var uParam1)//Position - 0x8837
{
	switch (iParam0)
	{
		case 0:
			func_108(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 1:
			func_108(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 2:
			func_108(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 3:
			func_108(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 4:
			func_108(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 5:
			func_108(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 6:
			func_108(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 7:
			func_108(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_109(iParam0), 0, 0);
			break;
		
		case 8:
			func_108(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 9:
			func_108(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 10:
			func_108(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 11:
			func_108(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 12:
			func_108(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 13:
			func_108(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 14:
			func_108(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 15:
			func_108(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 16:
			func_108(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 17:
			func_108(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 18:
			func_108(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 19:
			func_108(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 20:
			func_108(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 21:
			func_108(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 22:
			func_108(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 23:
			func_108(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_109(iParam0), 0, 1);
			break;
		
		case 24:
			func_108(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_109(iParam0), 0, 1);
			break;
		
		case 25:
			func_108(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 26:
			func_108(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 27:
			func_108(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 28:
			func_108(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 29:
			func_108(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 30:
			func_108(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 31:
			func_108(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 32:
			func_108(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 33:
			func_108(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 34:
			func_108(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 35:
			func_108(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 36:
			func_108(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 37:
			func_108(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 38:
			func_108(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 39:
			func_108(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 40:
			func_108(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 41:
			func_108(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 42:
			func_108(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 43:
			func_108(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 44:
			func_108(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 45:
			func_108(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 46:
			func_108(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 47:
			func_108(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 48:
			func_108(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 49:
			func_108(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 50:
			func_108(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 51:
			func_108(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 52:
			func_108(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 54:
			func_108(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 55:
			func_108(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 56:
			func_108(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 53:
			func_108(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 57:
			func_108(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 58:
			func_108(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 59:
			func_108(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 60:
			func_108(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 61:
			func_108(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 62:
			func_108(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_108(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9A7E
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

int func_109(int iParam0)//Position - 0x9B0F
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

int func_110(int iParam0)//Position - 0x9E55
{
	int iVar0;
	
	if (func_139(&(iParam0->f_1)))
	{
		if (!unk_0xAB019B170BF1309C(&(iParam0->f_9)))
		{
			func_130(1);
			func_128(iParam0, 1, func_129(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_127(*iParam0))
			{
				while (!unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
				{
					func_143();
					system::wait(0);
				}
			}
		}
		func_111(*iParam0);
		iVar0 = system::start_new_script_with_args(&(iParam0->f_1), iParam0, 61, 23000);
		unk_0x9D2418D7FC697249(&(iParam0->f_1));
		if (unk_0xA3DDC3767EC660CD())
		{
			func_311("Initial cutscene loaded and passing to RC mission.");
			unk_0x2605C2C9668F9186(iVar0);
		}
		else
		{
			func_311("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xA6C03E3E2533F8F3();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)//Position - 0x9EF9
{
	struct<2> Var0;
	
	func_126();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, false);
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 250, false);
	}
	if (func_125(iParam0))
	{
		unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 0);
	}
	unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
	unk_0xF40900F61CC88931(0, true);
	unk_0xF40900F61CC88931(3, true);
	unk_0xF40900F61CC88931(2, true);
	if (Global_36993 == 1)
	{
		if (func_123(unk_0xFC1458A37D98B502()))
		{
			func_114(unk_0xFC1458A37D98B502());
		}
	}
	if (!func_162())
	{
		if (iParam0 < 63)
		{
			func_112(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0x218409883979C46E(1, &Var0);
		}
	}
}

void func_112(int iParam0)//Position - 0x9F94
{
	if (iParam0 < 63)
	{
		func_113();
		Global_71111 = iParam0;
		Global_71110 = 0;
		Global_71113 = 7;
	}
}

void func_113()//Position - 0x9FBA
{
	if (Global_71110 != 6)
	{
	}
	if (Global_71115)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_71115 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71110 = 6;
	Global_71112 = -1;
	Global_71111 = -1;
}

void func_114(int iParam0)//Position - 0x9FF2
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
	iVar0 = func_122(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36796[iVar0 /*5*/];
		func_117(1, iVar1, 1);
		return;
	}
	iVar2 = func_116(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_115(iVar2);
}

void func_115(int iParam0)//Position - 0xA04B
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

int func_116(int iParam0)//Position - 0xA0CE
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

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0xA0FF
{
	func_118(iParam0, iParam1, iParam2, 0, 0);
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA113
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
	if (func_120(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_119();
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

int func_119()//Position - 0xA18A
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

int func_120(int iParam0, int iParam1, int iParam2)//Position - 0xA1BB
{
	if (func_121(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0xA1D6
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

int func_122(int iParam0)//Position - 0xA222
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

int func_123(int iParam0)//Position - 0xA26B
{
	if (func_124(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)//Position - 0xA28B
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

int func_125(int iParam0)//Position - 0xA2AC
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_126()//Position - 0xA2FF
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 25);
	unk_0x872F1C1F8587CCC7(&Global_2324, 11);
}

int func_127(int iParam0)//Position - 0xA37C
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_128(var uParam0, bool bParam1, bool bParam2)//Position - 0xA3CF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_28[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_124(uParam0->f_35[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_41[iVar0]))
		{
			unk_0xD38F266C132F2897(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xD38F266C132F2897(unk_0xFC1458A37D98B502(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), bParam1);
		if (bParam2)
		{
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_129(int iParam0)//Position - 0xA4C4
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_130(bool bParam0)//Position - 0xA52F
{
	int iVar0;
	
	iVar0 = unk_0x98EC0789D9F0703B();
	if (!unk_0xC445AB6B86A2138E(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x59F2A26BF856E30A(iVar0, bParam0, 16);
		unk_0x59F2A26BF856E30A(iVar0, bParam0, 32);
	}
	func_131(1, 1, 0, 0);
}

void func_131(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA56B
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_138(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_137())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_167(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_138(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_167(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_135(unk_0x9EB17624F44A8DA4())) && !func_133(unk_0x9EB17624F44A8DA4(), 0)) && !func_132())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_135(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_132()//Position - 0xA684
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_133(int iParam0, int iParam1)//Position - 0xA6A1
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_134(-1, 0) == 8;
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

int func_134(int iParam0, bool bParam1)//Position - 0xA6EC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_50();
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

int func_135(int iParam0)//Position - 0xA72D
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_136())
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

bool func_136()//Position - 0xA76F
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_137()//Position - 0xA780
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0)//Position - 0xA7A7
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

int func_139(char* sParam0)//Position - 0xA7CA
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		unk_0xD9E2C360120FEB7C(sParam0);
		while (!unk_0x3B6F9DF9C5FEB3A4(sParam0))
		{
			unk_0xD9E2C360120FEB7C(sParam0);
			system::wait(0);
		}
		return 1;
	}
	func_311("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_140()//Position - 0xA807
{
	Global_14622 = 0;
	func_141();
}

void func_141()//Position - 0xA817
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

int func_142()//Position - 0xA86E
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

void func_143()//Position - 0xA890
{
	func_148(0);
	func_147();
	func_144();
}

void func_144()//Position - 0xA8A5
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (func_145(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 10,5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1)
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				}
			}
		}
	}
}

int func_145(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA8FD
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
	func_146(iParam0);
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

void func_146(int iParam0)//Position - 0xAA8C
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

void func_147()//Position - 0xAAB8
{
	unk_0x4FB260623DD93924(0, 21, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 25, 1);
	unk_0x4FB260623DD93924(0, 141, 1);
	unk_0x4FB260623DD93924(0, 140, 1);
	unk_0x4FB260623DD93924(0, 24, 1);
	unk_0x4FB260623DD93924(0, 257, 1);
	unk_0x4FB260623DD93924(0, 22, 1);
	unk_0x4FB260623DD93924(0, 23, 1);
}

void func_148(int iParam0)//Position - 0xAB09
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_151(0))
		{
			func_149(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_149(int iParam0)//Position - 0xAB32
{
	if (Global_14615)
	{
		func_150(0, 0);
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
	if (!func_137())
	{
		Global_14453.f_1 = 3;
	}
}

void func_150(bool bParam0, bool bParam1)//Position - 0xABA2
{
	if (bParam0)
	{
		if (func_151(0))
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

int func_151(int iParam0)//Position - 0xAC16
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

int func_152(int iParam0)//Position - 0xAC70
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)//Position - 0xACB1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_160();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_155(&(Global_103642[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_154(iParam0);
	return 1;
}

void func_154(int iParam0)//Position - 0xACF6
{
	Global_103642[iParam0 /*10*/].f_4 = 1;
	Global_103642[iParam0 /*10*/].f_5 = 0;
	Global_103642[iParam0 /*10*/].f_6 = 0;
	Global_103642[iParam0 /*10*/] = 0;
}

int func_155(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xAD28
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
		if (func_159(0))
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
		if (!func_157(iParam2))
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
			func_156(uParam0, iParam4);
		}
	}
	return 2;
}

void func_156(var uParam0, int iParam1)//Position - 0xAE5F
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

bool func_157(int iParam0)//Position - 0xAEAE
{
	return func_158(iParam0, Global_35861);
}

int func_158(int iParam0, int iParam1)//Position - 0xAEBF
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

int func_159(int iParam0)//Position - 0xB0A0
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_157(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160()//Position - 0xB0C2
{
	return func_161(unk_0x436287B7DB306165(), 0);
}

int func_161(char* sParam0, int iParam1)//Position - 0xB0D3
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x8B948C59217A295D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_107(iVar0, &sVar1);
		if (unk_0x8B948C59217A295D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_162()//Position - 0xB11C
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1)//Position - 0xB140
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = func_164(-1604,668f, 5239,1f, 3,01f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			unk_0x0C71C8E276E3EC54(*iParam1, 42);
			break;
		
		case 1:
			*iParam1 = func_164(-1592,84f, 5214,04f, 3,01f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 400);
			unk_0x0C71C8E276E3EC54(*iParam1, 42);
			break;
		
		case 2:
		case 3:
			*iParam1 = func_164(190,26f, -956,35f, 29,63f, 0);
			if ((unk_0xC80D31E4B587871C(Global_104555.f_18544[2 /*6*/], 3) || unk_0xC80D31E4B587871C(Global_104555.f_18544[4 /*6*/], 3)) || unk_0xC80D31E4B587871C(Global_104555.f_18544[4 /*6*/], 3))
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 381);
			}
			else
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0x0C71C8E276E3EC54(*iParam1, 42);
			}
			else
			{
				unk_0x0C71C8E276E3EC54(*iParam1, 44);
			}
			break;
		
		case 4:
			*iParam1 = func_164(414f, -761f, 29f, 0);
			if (unk_0xC80D31E4B587871C(Global_104555.f_18544[2 /*6*/], 3) || unk_0xC80D31E4B587871C(Global_104555.f_18544[3 /*6*/], 3))
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 381);
			}
			else
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			}
			unk_0x0C71C8E276E3EC54(*iParam1, 43);
			break;
		
		case 9:
			*iParam1 = func_164(-1622,89f, 4204,87f, 83,3f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			unk_0x0C71C8E276E3EC54(*iParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*iParam1 = func_164(1835,53f, 4705,86f, 38,1f, 0);
			}
			else if (iParam0 == 12)
			{
				*iParam1 = func_164(1826,13f, 4698,88f, 38,92f, 0);
			}
			else
			{
				*iParam1 = func_164(637,02f, 119,7093f, 89,5f, 0);
			}
			unk_0x4B4040A0EC7DBA81(*iParam1, 206);
			unk_0x0C71C8E276E3EC54(*iParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*iParam1 = func_164(-954,19f, -2760,05f, 14,64f, 0);
			}
			else
			{
				*iParam1 = func_164(-63,8f, -809,5f, 321,8f, 0);
			}
			unk_0x4B4040A0EC7DBA81(*iParam1, 382);
			unk_0x0C71C8E276E3EC54(*iParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*iParam1 = func_164(-1877,82f, -440,649f, 45,05f, 0);
			}
			else
			{
				*iParam1 = func_164(-915,6f, 6139,2f, 5,5f, 0);
			}
			if ((unk_0xC80D31E4B587871C(Global_104555.f_18544[21 /*6*/], 3) || unk_0xC80D31E4B587871C(Global_104555.f_18544[22 /*6*/], 3)) || unk_0xC80D31E4B587871C(Global_104555.f_18544[23 /*6*/], 3))
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 405);
			}
			else
			{
				unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0x0C71C8E276E3EC54(*iParam1, 42);
			}
			else
			{
				unk_0x0C71C8E276E3EC54(*iParam1, 43);
			}
			break;
		
		case 27:
			*iParam1 = func_164(-1104,93f, 291,25f, 64,3f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			unk_0x0C71C8E276E3EC54(*iParam1, 44);
			break;
		
		case 30:
			*iParam1 = func_164(-1104,93f, 291,25f, 64,3f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 385);
			unk_0x0C71C8E276E3EC54(*iParam1, 44);
			break;
		
		case 34:
			*iParam1 = func_164(-303,82f, 6211,29f, 31,05f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 386);
			unk_0x0C71C8E276E3EC54(*iParam1, 44);
			break;
		
		case 43:
			*iParam1 = func_164(-44,75f, -1288,67f, 28,21f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 149);
			unk_0x0C71C8E276E3EC54(*iParam1, 44);
			break;
		
		case 46:
			*iParam1 = func_164(-149,75f, 285,81f, 93,67f, 0);
			unk_0x4B4040A0EC7DBA81(*iParam1, 66);
			unk_0x0C71C8E276E3EC54(*iParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*iParam1 = func_164(-70,71f, 301,43f, 106,79f, 0);
			}
			else
			{
				*iParam1 = func_164(-257,22f, 292,85f, 90,63f, 0);
			}
			unk_0x4B4040A0EC7DBA81(*iParam1, 389);
			unk_0x0C71C8E276E3EC54(*iParam1, 43);
			break;
	}
}

int func_164(vector3 vParam0, bool bParam1)//Position - 0xB5C7
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_165(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

float func_165(bool bParam0, float fParam1, float fParam2)//Position - 0xB5F3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_166(int iParam0)//Position - 0xB60A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB699
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

int func_168(int iParam0, int iParam1)//Position - 0xB6CC
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 1826,631f, 4699,115f, 35,38089f, 1812,878f, 4710,457f, 42,05354f, 23,75f, 0, true, 0))
				{
					if (func_124(iParam0->f_28[0]))
					{
						if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0->f_28[0], 1), true) < 3f)
						{
							if (func_174(2))
							{
								if (func_172(iParam0->f_27))
								{
									func_171(iParam0->f_27, *iParam0);
									func_311("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_124(iParam0->f_28[0]))
				{
					if (func_170(iParam0))
					{
						if (func_174(2))
						{
							if (func_172(iParam0->f_27))
							{
								func_171(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1895,788f, -434,0192f, 40,30126f, -1883,038f, -444,0811f, 50,24509f, 8,5f, 0, true, 0) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1883,576f, -443,6434f, 36,40581f, -1874,826f, -448,0797f, 49,15162f, 8,5f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1876,343f, -446,2214f, 35,64637f, -1866,952f, -456,5601f, 49,0442f, 8,5f, 0, true, 0)) && !unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1882,997f, -438,9922f, 44,17246f, -1874,079f, -443,342f, 48,69179f, 0,75f, 0, true, 0)) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1878,822f, -441,7655f, 44,9175f, -1877,941f, -439,9522f, 47,28982f, 1,25f, 0, true, 0))
				{
					if (func_124(iParam0->f_28[0]))
					{
						if (func_170(iParam0))
						{
							if (func_174(2))
							{
								if (func_172(iParam0->f_27))
								{
									func_171(iParam0->f_27, *iParam0);
									return 1;
								}
							}
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
			else if (*iParam0 == 22)
			{
				if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 837,0731f, 1261,086f, 366,1592f, 780,8383f, 1260,829f, 351,405f, 17,75f, 0, true, 0))
				{
					if (func_124(iParam0->f_28[0]))
					{
						if (func_170(iParam0))
						{
							if (func_174(2))
							{
								if (func_172(iParam0->f_27))
								{
									func_171(iParam0->f_27, *iParam0);
									return 1;
								}
							}
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
			else if (func_124(iParam0->f_28[0]))
			{
				if (func_170(iParam0))
				{
					if (func_174(2))
					{
						if (func_172(iParam0->f_27))
						{
							func_171(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_124(iParam0->f_35[0]))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0->f_35[0], 0))
				{
					if (func_174(3))
					{
						func_171(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_169();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iParam0->f_35[0]))
			{
				if (!unk_0x191BE1BC8F26F3C1(iParam0->f_35[0], 0))
				{
					if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0->f_35[0], 1), true) < iParam0->f_15)
					{
						if (func_174(2))
						{
							if (func_172(iParam0->f_27))
							{
								func_171(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), iParam0->f_17[0 /*3*/], true) < iParam0->f_15)
			{
				if (func_174(2))
				{
					if (func_172(iParam0->f_27))
					{
						func_171(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_174(2))
				{
					if (func_172(iParam0->f_27))
					{
						func_171(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (func_124(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("towtruck2")))
						{
							if (unk_0x03760B63FE11B718(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iParam0->f_35[0]))
							{
								if (func_174(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob2"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("cargobob3")))
						{
							if (unk_0xBB68E30A8B450E14(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) && unk_0x61888377B3AC43E7(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iParam0->f_35[0]))
							{
								if (func_174(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (unk_0xD2B032DC10620ECA(unk_0xFC1458A37D98B502()) >= 2f)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 245,8885f, 371,9034f, 103,9884f, 241,5898f, 359,6458f, 107,3461f, 1,25f, 0, true, 0))
					{
						if (func_174(2))
						{
							if (func_172(iParam0->f_27))
							{
								func_171(iParam0->f_27, *iParam0);
								func_311("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -164,2046f, 277,4866f, 91,55322f, -153,6f, 277,4061f, 97,33813f, 10f, 0, true, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2728,948f, 4143,44f, 42,29295f, 2722,213f, 4144,521f, 45,43182f, 10f, 0, true, 0))
				{
					if (func_174(2))
					{
						if (func_172(1))
						{
							func_171(1, *iParam0);
							func_311("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -992,4995f, 358,7455f, 96,3735f, -1021,94f, 361,8888f, 65,36148f, 30f, 0, true, 0))
				{
					if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -983,5426f, 369,1104f, 68,46017f, -1028,566f, 395,4613f, 94,57245f, 15f, 0, true, 0))
					{
						if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -983,875f, 346,7556f, 68,02096f, -1021,451f, 336,3458f, 93,18714f, 14,5f, 0, true, 0))
						{
							if (func_174(2))
							{
								if (func_172(iParam0->f_27))
								{
									func_171(iParam0->f_27, *iParam0);
									func_311("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 2338,697f, 2597,037f, 45,39052f, 2324,003f, 2597,185f, 47,74961f, 8,5f, 0, true, 0))
					{
						return 0;
					}
				}
				if (func_174(2))
				{
					if (func_172(iParam0->f_27))
					{
						func_171(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_169()//Position - 0xBEAF
{
	func_27(&(Global_95149.f_2875), &Global_95149, 0, 1, 1, 0);
}

int func_170(var uParam0)//Position - 0xBECA
{
	float fVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_28[0], 1), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uParam0->f_28[0], 1), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_171(int iParam0, int iParam1)//Position - 0xBF58
{
	if (iParam0 == 1)
	{
		if (!func_127(iParam1))
		{
			return;
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			func_311("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				func_311("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xA15269351F50F113(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, true, 0);
			}
			func_143();
		}
	}
}

int func_172(bool bParam0)//Position - 0xBFBC
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xC733212BF9066BDF();
				if (func_173(iVar0))
				{
					if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
					{
						if ((!unk_0x9A3C64A7BB4588B3(iVar0) && !unk_0x0ACC2116170FA204(iVar0)) && unk_0x90D5DFB054818BA7(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x0ACC2116170FA204(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_173(int iParam0)//Position - 0xC055
{
	if (func_124(iParam0))
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

int func_174(int iParam0)//Position - 0xC07F
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_102();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_182()) || Global_103602) || Global_25235) || func_181()) || func_180(8, -1)) || func_90()) || func_179()) || func_178()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_182()) || Global_25235) || func_181()) || func_180(8, -1)) || func_178()) || func_90()) || func_179()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_182()) || Global_103602) || Global_25235) || func_181()) || func_180(8, -1)) || func_178()) || func_90()) || func_179()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_182()) || Global_103602) || Global_25235) || func_181()) || func_180(8, -1)) || func_90()) || func_179()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_182() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_180(8, -1)) || func_177()) || func_176()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_180(8, -1) || func_90()) || func_179()) || func_176()) || func_175())
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
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_182()) || Global_25235) || func_181()) || func_180(8, -1)) || func_179()) || func_178()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_182()) || func_179()) || Global_103602) || Global_25235) || func_181()) || Global_36993) || func_180(8, -1)) || func_178()) || func_176()) || func_177()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_182()) || Global_103602) || Global_25235) || func_181()) || func_180(8, -1)) || func_178()) || func_176()) || func_90()) || func_179()) || func_177())
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

var func_175()//Position - 0xC79C
{
	return Global_92872.f_1;
}

int func_176()//Position - 0xC7AA
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_177()//Position - 0xC7D0
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_178()//Position - 0xC7EA
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

bool func_179()//Position - 0xC814
{
	return Global_92885.f_316 > 0;
}

bool func_180(int iParam0, int iParam1)//Position - 0xC825
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

var func_181()//Position - 0xC860
{
	return Global_1312854;
}

int func_182()//Position - 0xC86C
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xC888
{
	int iVar0;
	
	iVar0 = 0;
	if (func_124(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iParam0->f_28[iVar0]))
			{
				if (func_124(iParam0->f_28[iVar0]))
				{
					if (unk_0xEBE499597C718EB8(iParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 1) || unk_0x5679106BC7ED79EE(unk_0xB3328BA8976B416C(iParam0->f_28[iVar0], 1), 7,5f, 1))
					{
						if (func_174(2))
						{
							func_171(iParam0->f_27, *iParam0);
							return 1;
						}
						else
						{
							func_311("Player damaged the N1D peds but it's not safe to trigger the mission!");
						}
					}
				}
				else if (func_174(2))
				{
					func_171(iParam0->f_27, *iParam0);
					return 1;
				}
				else
				{
					func_311("Player killed a N1D ped but it's not safe to trigger the mission!");
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_184(int iParam0, var uParam1)//Position - 0xC94C
{
	if (func_185(uParam1, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)))
	{
		if (func_174(2))
		{
			if (func_172(iParam0->f_27))
			{
				func_171(iParam0->f_27, *iParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_185(var uParam0, struct<2> Param1, float fParam2)//Position - 0xC989
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_186(int iParam0, var uParam1, var uParam2)//Position - 0xCA45
{
	if (func_124(*uParam1))
	{
		switch (*iParam0)
		{
			case 0:
				if (unk_0x1CF95440F1970B4F("CAR_TRUNK_THUMPS", false, -1))
				{
					iParam0->f_1 = unk_0xD0CA83418A236CB4();
					iParam0->f_2 = unk_0x53C562FD2B9E3AB0();
					iParam0->f_3 = unk_0x63A6486593EC7EC3(6000, 12000);
					*iParam0 = 1;
				}
				break;
			
			case 1:
				if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_2) > iParam0->f_3)
				{
					unk_0x23A4CE7F9EBB02D4(iParam0->f_1, "TRUNK_THUMPS", unk_0x3F90543934DCD7E6(*uParam1, 0f, -2,2f, 0,5f), 0, 0, 0, 0);
					unk_0xE44A9E63DC81244A(*uParam2, "NIGE3_CXAA", "DINAPOLI", func_187(0), 0);
					iParam0->f_4 = unk_0x63A6486593EC7EC3(3, 7);
					iParam0->f_5 = 0;
					iParam0->f_6 = unk_0x53C562FD2B9E3AB0();
					iParam0->f_7 = unk_0x63A6486593EC7EC3(100, 250);
					*iParam0 = 2;
				}
				break;
			
			case 2:
				if ((unk_0x53C562FD2B9E3AB0() - iParam0->f_6) > iParam0->f_7)
				{
					iParam0->f_8 = unk_0x63A6486593EC7EC3(-200, -120);
					iParam0->f_9 = (0,5f * system::to_float(unk_0x63A6486593EC7EC3(-2, 3)));
					unk_0xB8D9F55BA414128D(*uParam1, 1, 0f, 0f, IntToFloat(iParam0->f_8), iParam0->f_9, -1,5f, 0f, 0, 1, 1, 0, 1, 1);
					iParam0->f_5++;
					if (iParam0->f_5 < iParam0->f_4)
					{
						iParam0->f_6 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_7 = unk_0x63A6486593EC7EC3(150, 280);
					}
					else
					{
						iParam0->f_2 = unk_0x53C562FD2B9E3AB0();
						iParam0->f_3 = unk_0x63A6486593EC7EC3(6000, 12000);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

int func_187(int iParam0)//Position - 0xCBB0
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

int func_188(int iParam0, vector3 vParam1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0xCDA5
{
	var uVar0;
	
	if ((((func_124(unk_0xFC1458A37D98B502()) && func_124(iParam0->f_28[0])) && !func_142()) && (unk_0x53C562FD2B9E3AB0() - iParam0->f_60) > iParam6) && func_192(unk_0xFC1458A37D98B502(), vParam1, 1) < fParam7)
	{
		uVar0 = 16;
		func_191(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
		func_189(&uVar0, cParam2, sParam3, 7, 0, 0);
		iParam0->f_60 = unk_0x53C562FD2B9E3AB0();
		return 1;
	}
	return 0;
}

void func_189(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCE2D
{
	func_190(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x872F1C1F8587CCC7(&Global_14622, 0);
	Global_15759 = iParam3;
	StringCopy(&Global_15746, sParam2, 24);
}

void func_190(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCE68
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

void func_191(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xCEBE
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

float func_192(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xCF59
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

int func_193(int iParam0, vector3 vParam1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, var uParam8)//Position - 0xCF93
{
	var uVar0;
	
	if (!*uParam8 == 3)
	{
		if (func_174(2))
		{
			if (!func_142())
			{
				if (((func_124(unk_0xFC1458A37D98B502()) && func_124(iParam0->f_28[0])) && func_124(iParam0->f_28[1])) && func_192(unk_0xFC1458A37D98B502(), vParam1, 1) < 20f)
				{
					func_311("start conversation");
					uVar0 = 16;
					if (*uParam8 == 0)
					{
						func_191(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
						func_191(&uVar0, iParam6, iParam0->f_28[1], sParam7, 0, 1);
						func_189(&uVar0, cParam2, sParam3, 7, 0, 0);
						*uParam8 = 2;
					}
					else if (*uParam8 == 2)
					{
						func_311("conversation ended");
						*uParam8 = 3;
						return 1;
					}
				}
			}
			else if (((func_195(sParam3) && !*uParam8 == 1) && func_124(unk_0xFC1458A37D98B502())) && func_192(unk_0xFC1458A37D98B502(), vParam1, 1) >= 20f)
			{
				func_311("pause conversation");
				func_194(1);
				*uParam8 = 1;
			}
			if (func_192(unk_0xFC1458A37D98B502(), vParam1, 1) < 20f && *uParam8 == 1)
			{
				func_311("unpause conversation");
				func_194(0);
				*uParam8 = 2;
			}
		}
	}
	return 0;
}

void func_194(int iParam0)//Position - 0xD0DE
{
	Global_16767 = iParam0;
}

int func_195(char* sParam0)//Position - 0xD0EB
{
	struct<6> Var0;
	
	Var0 = { func_196() };
	if (unk_0x74C475EB8E73D398(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_196()//Position - 0xD10B
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_197(int iParam0, var uParam1, int iParam2)//Position - 0xD12F
{
	int iVar0;
	int iVar1;
	
	if (func_124(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_200(uParam1))
				{
					if (unk_0x3A801AA34DD821BE(*uParam1))
					{
						unk_0x957CEE967C939968(iParam0);
						if (iParam2 != 21)
						{
							if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x12C9D41D52A560D6(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x6931076730A4AC5D(&iVar0);
								if (func_199(uParam1))
								{
									unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x1B16DD5C115FE009(iVar0);
								unk_0xAB30B1CF01A198C1(iParam0, iVar0);
								unk_0xFAA3EF7FF92E1F9E(&iVar0);
							}
						}
						else
						{
							unk_0x22F63D02D1D91EBC(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_199(uParam1) || !unk_0xA5F6598E13F98E08(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_198(iParam2) && !unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 25f))
					{
						unk_0xAC838A977FB6E6BC(iParam0, unk_0xFC1458A37D98B502(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_199(uParam1) && uParam1->f_4 == 0) && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x6931076730A4AC5D(&iVar1);
				if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x12C9D41D52A560D6(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x22F63D02D1D91EBC(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x1B16DD5C115FE009(iVar1);
				unk_0xAB30B1CF01A198C1(iParam0, iVar1);
				unk_0xFAA3EF7FF92E1F9E(&iVar1);
				uParam1->f_4 = 1;
				if (func_198(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_198(iParam2) || unk_0xCA3C40448996C9BA(iParam0, unk_0xFC1458A37D98B502(), 10f))
				{
					if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x12C9D41D52A560D6(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x22F63D02D1D91EBC(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_198(int iParam0)//Position - 0xD487
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_199(var uParam0)//Position - 0xD4A7
{
	if (unk_0xAB019B170BF1309C(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_200(var uParam0)//Position - 0xD4BF
{
	if (unk_0xAB019B170BF1309C(*uParam0) || unk_0xAB019B170BF1309C(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_201()//Position - 0xD4E4
{
	return joaat("u_m_m_aldinapoli");
}

char* func_202()//Position - 0xD4F1
{
	return "Al_DiNapoli";
}

void func_203(int iParam0, char* sParam1, vector3 vParam2)//Position - 0xD4FD
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xAB019B170BF1309C(sParam1))
		{
			if (Global_35861 == 17)
			{
				if (*iParam0 != -1)
				{
					func_208(iParam0);
				}
			}
			else if (func_207())
			{
				if (*iParam0 != -1)
				{
					func_208(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_192(unk_0xFC1458A37D98B502(), vParam2, 1) <= 100f)
				{
					func_206(iParam0, 1);
				}
			}
			else
			{
				switch (func_205(*iParam0))
				{
					case 1:
						if (unk_0x74C475EB8E73D398(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x79E39A06DE88EFE2(sParam1, 14, 8);
						}
						else
						{
							unk_0x393584863A2F304E(sParam1, 8);
						}
						unk_0x86B828AE0E423AF2(2);
						func_204(*iParam0, 1);
						break;
					
					case 2:
						unk_0x7042DDDE71665936(0);
						unk_0xA6C03E3E2533F8F3();
						unk_0x86B828AE0E423AF2(0);
						func_204(*iParam0, 0);
						break;
				}
				if (func_192(unk_0xFC1458A37D98B502(), vParam2, 1) > 120f)
				{
					func_208(iParam0);
				}
			}
		}
	}
}

void func_204(int iParam0, bool bParam1)//Position - 0xD5EE
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_70852 == iParam0)
		{
			Global_70853 = iParam0;
		}
	}
	else if (Global_70853 == iParam0)
	{
		Global_70853 = -1;
	}
}

int func_205(int iParam0)//Position - 0xD62A
{
	if (Global_70852 == iParam0)
	{
		if (Global_70853 == -1)
		{
			if (Global_70851 < unk_0x4B64A8D052027742())
			{
				return 1;
			}
		}
	}
	else if (Global_70853 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_206(int iParam0, int iParam1)//Position - 0xD663
{
	bool bVar0;
	int iVar1;
	
	if (Global_70849 < 5)
	{
		Global_70838[Global_70849 /*2*/] = 0;
		Global_70838[Global_70849 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_70849)
			{
				if (Global_70838[iVar1 /*2*/] == Global_70838[Global_70849 /*2*/])
				{
					Global_70838[Global_70849 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_70838[Global_70849 /*2*/];
		Global_70849++;
		Global_70850 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_207()//Position - 0xD701
{
	return Global_90287;
}

void func_208(int iParam0)//Position - 0xD70D
{
	unk_0x7042DDDE71665936(0);
	unk_0xA6C03E3E2533F8F3();
	func_209(iParam0);
}

void func_209(int iParam0)//Position - 0xD724
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_70853 == *iParam0)
	{
		func_204(*iParam0, 0);
	}
	if (Global_70852 == *iParam0)
	{
		Global_70852 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_70849)
	{
		if (Global_70838[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_70849 - 2))
	{
		Global_70838[iVar2 /*2*/] = Global_70838[iVar2 + 1 /*2*/];
		Global_70838[iVar2 /*2*/].f_1 = Global_70838[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_70838[(Global_70849 - 1) /*2*/] = -1;
	Global_70838[(Global_70849 - 1) /*2*/].f_1 = 3;
	Global_70849 = (Global_70849 - 1);
	Global_70850 = 1;
	Global_70851 = unk_0x4B64A8D052027742();
	*iParam0 = -1;
}

void func_210(int iParam0)//Position - 0xD80C
{
	if (iParam0 == -1)
	{
		iParam0 = func_160();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_103642[iParam0 /*10*/].f_1 = 1;
}

int func_211(var uParam0, bool bParam1)//Position - 0xD834
{
	struct<27> Var0;
	
	if (Global_70856)
	{
		func_311("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_107(*uParam0, &Var0);
	if ((func_244(*uParam0) || func_242(*uParam0)) || Global_71101 == 1)
	{
		return 1;
	}
	if (!unk_0x42F1FE4C7EC5F51E())
	{
		func_311("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_238(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_237(uParam0->f_28[0]);
		}
		func_311("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_217(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_217(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_215(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_214(uParam0);
			}
			else
			{
				func_212(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_215(uParam0, 0, 1))
		{
			func_212(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_215(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_215(uParam0, 1, 0))
		{
			func_212(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_215(uParam0, 0, 0))
		{
			func_212(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_124(uParam0->f_35[0]))
		{
			if (!unk_0x0C88267282FD588F(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x4E69510C44147A5C(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_311("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xC80D31E4B587871C(Var0.f_26, func_102()))
		{
			func_311("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_200(&(uParam0->f_48)) && bParam1)
	{
		func_197(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_212(var uParam0)//Position - 0xDAA7
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_213(&(uParam0->f_41[1]));
		func_213(&(uParam0->f_41[2]));
	}
	if (func_124(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_123(uParam0->f_28[iVar0]))
			{
				if (!unk_0x88DDBE9908752BF0(uParam0->f_28[iVar0], 0))
				{
					unk_0xB18E1DBC397238E1(uParam0->f_28[iVar0], true, 0);
					unk_0xEDC33A771FAEB393(uParam0->f_28[0], false);
				}
				unk_0xE9B3D12A64CC7C1A(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_124(uParam0->f_41[0]))
					{
						unk_0xB18E1DBC397238E1(uParam0->f_41[0], true, 0);
						unk_0xEDC33A771FAEB393(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_237(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x6450931B826B49D9("rcmcollect_paperleadinout@");
						while (!unk_0x3A801AA34DD821BE("rcmcollect_paperleadinout@"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 0:
					case 1:
						unk_0x6450931B826B49D9("rcmabigail");
						while (!unk_0x3A801AA34DD821BE("rcmabigail"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 32:
						unk_0x6450931B826B49D9("rcmminute1");
						while (!unk_0x3A801AA34DD821BE("rcmminute1"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						if (iVar0 == 0)
						{
							unk_0x12C9D41D52A560D6(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x12C9D41D52A560D6(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					case 24:
						unk_0x6450931B826B49D9("special_ped@hao@base");
						while (!unk_0x3A801AA34DD821BE("special_ped@hao@base"))
						{
							system::wait(0);
						}
						unk_0x6931076730A4AC5D(&iVar1);
						unk_0x12C9D41D52A560D6(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						unk_0x1B16DD5C115FE009(iVar1);
						unk_0xAB30B1CF01A198C1(uParam0->f_28[iVar0], iVar1);
						unk_0xFAA3EF7FF92E1F9E(&iVar1);
						break;
					
					default:
						unk_0x2CEA76A7F93740C6(uParam0->f_28[iVar0]);
						unk_0xD68E88A8E0BE8697(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_213(int iParam0)//Position - 0xDDAB
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		unk_0x452336926718D62A(iParam0);
	}
}

void func_214(var uParam0)//Position - 0xDDD6
{
	int iVar0;
	
	if (func_124(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_123(uParam0->f_28[iVar0]))
			{
				unk_0xAE6EBBBBD8B9FB30(uParam0->f_28[iVar0], 1, false);
				unk_0x771A86309E0CA47B(uParam0->f_28[iVar0], false);
				unk_0xE9B3D12A64CC7C1A(uParam0->f_28[iVar0], true);
				unk_0xD7F5B2902EBBD04E(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x486F346ADFE56674(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_215(var uParam0, bool bParam1, bool bParam2)//Position - 0xDE56
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_123(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_35[iVar0]))
			{
				if (unk_0x191BE1BC8F26F3C1(uParam0->f_35[iVar0], 0))
				{
					func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xB8DE76287EDC4957(uParam0->f_35[iVar0], 0))
				{
					func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0xEBE499597C718EB8(uParam0->f_35[iVar0], unk_0xFC1458A37D98B502(), 0))
				{
					func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0xDE523AF6F7B269AB(uParam0->f_35[iVar0]) < 850)
				{
					func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (unk_0x9A213A2345825783(uParam0->f_35[iVar0], unk_0xFC1458A37D98B502()) && unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 5f)
						{
							func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = unk_0xC733212BF9066BDF();
						if (func_173(iVar2))
						{
							if (unk_0x82FF3DFBC3965CC0(iVar2) == joaat("towtruck") || unk_0x82FF3DFBC3965CC0(iVar2) == joaat("towtruck2"))
							{
								if (func_173(uParam0->f_35[iVar0]))
								{
									if (unk_0x03760B63FE11B718(iVar2, uParam0->f_35[iVar0]))
									{
										func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xC733212BF9066BDF();
						if (func_173(iVar3))
						{
							if (unk_0x9A213A2345825783(uParam0->f_35[iVar0], iVar3) && unk_0x90D5DFB054818BA7(iVar3) > 6f)
							{
								func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_216(unk_0xFC1458A37D98B502(), uParam0->f_35[iVar0]))
							{
								func_311("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_216(int iParam0, int iParam1)//Position - 0xE014
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			iVar0 = unk_0xC6757F745366DB47(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_217(var uParam0, bool bParam1, int iParam2)//Position - 0xE044
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_123(unk_0xFC1458A37D98B502()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_28[iVar0]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(uParam0->f_28[iVar0]))
				{
					if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
					{
						if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							if (func_142())
							{
								func_140();
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x9479D23F28CA059C(uParam0->f_28[iVar0]) || unk_0xC545C64D901C635F(uParam0->f_28[iVar0])) || unk_0x55ABE3023BD038CC(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_212(uParam0);
						}
						else
						{
							func_214(uParam0);
						}
						func_311("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x9F887157983E8EFC(uParam0->f_28[iVar0]))
					{
						if (unk_0x21B6FFFD04C9FF3A(uParam0->f_28[iVar0], unk_0xFC1458A37D98B502(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_236(*uParam0))
					{
						if (!func_152(*uParam0))
						{
							if (func_231(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_212(uParam0);
								}
								else
								{
									func_214(uParam0);
								}
								func_311("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_219(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_218(*uParam0))
					{
						if (unk_0x4E69510C44147A5C(-1, unk_0xB3328BA8976B416C(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0)
						{
							if (iParam2 == 0)
							{
								func_212(uParam0);
							}
							else
							{
								func_214(uParam0);
							}
							func_311("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_311("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_124(uParam0->f_41[0]))
						{
							unk_0xB18E1DBC397238E1(uParam0->f_41[0], true, 0);
							unk_0xEDC33A771FAEB393(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_218(int iParam0)//Position - 0xE300
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0, float fParam1)//Position - 0xE334
{
	float fVar0;
	
	if (func_124(unk_0xFC1458A37D98B502()) && func_124(iParam0))
	{
		if (func_230(iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
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
				if (func_220(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_220(int iParam0, float fParam1)//Position - 0xE3AA
{
	return func_221(iParam0, unk_0xFC1458A37D98B502(), fParam1, 1, 250, 7);
}

bool func_221(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE3C2
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_229(iParam0, iParam1);
	if (!func_124(iParam0) || !func_124(iParam1))
	{
		if (iVar2 != -1)
		{
			func_228(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_225(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_224();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_222(&(Local_49[iVar2 /*4*/]), vVar1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x53C562FD2B9E3AB0() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_222(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xE483
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_124(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_223(iParam2, iParam5) };
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
		func_124(iVar3);
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
		func_124(iVar3);
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

Vector3 func_223(int iParam0, int iParam1)//Position - 0xE5AF
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

int func_224()//Position - 0xE674
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

int func_225(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xE6BE
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_227(unk_0xB3328BA8976B416C(iParam1, 1) - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_227(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_226(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_226(vector3 vParam0, vector3 vParam1)//Position - 0xE74F
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_227(vector3 vParam0)//Position - 0xE770
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

void func_228(var uParam0)//Position - 0xE7AF
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_229(int iParam0, int iParam1)//Position - 0xE7CA
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

int func_230(int iParam0)//Position - 0xE809
{
	if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE831
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
	if (func_124(unk_0xFC1458A37D98B502()) && func_124(iParam0))
	{
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_235(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_232(iParam0, fVar1, bParam3, bParam4))
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
				if (func_235(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_232(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_232(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xE92C
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
				if (func_233(iParam0, fParam1))
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
			if (func_233(iParam0, fParam1))
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

int func_233(int iParam0, float fParam1)//Position - 0xEA38
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x5CF89B89C04D5D46(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_234(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xEACD
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_227(vParam1 - unk_0xB3328BA8976B416C(iParam0, 1)) };
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
		vVar1 = { func_227(unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 5f, 0f) - unk_0xD0E00576168D19BB(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_226(vVar1, vVar0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xEB5B
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

int func_236(int iParam0)//Position - 0xEBA3
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_237(int iParam0)//Position - 0xEBED
{
	int iVar0;
	
	if (func_124(unk_0xFC1458A37D98B502()) && func_124(iParam0))
	{
		unk_0x6450931B826B49D9("rcmextreme3");
		while (!unk_0x3A801AA34DD821BE("rcmextreme3"))
		{
			system::wait(0);
		}
		unk_0x6931076730A4AC5D(&iVar0);
		unk_0x12C9D41D52A560D6(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0xD40A6DFCC31D221A(0, 1);
		unk_0xC052DCF18935534A(0, 64,6f, -737,8f, 44,2f);
		unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 10000f, -1, 0, 0);
		unk_0x1B16DD5C115FE009(iVar0);
		unk_0xAB30B1CF01A198C1(iParam0, iVar0);
		unk_0xFAA3EF7FF92E1F9E(&iVar0);
	}
}

int func_238(int iParam0)//Position - 0xEC8A
{
	if (iParam0 == -1)
	{
		iParam0 = func_160();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_244(iParam0))
	{
		return 0;
	}
	if (!func_157(4))
	{
		if (func_242(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_241() && !func_240())
	{
		return 1;
	}
	if (!func_239(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)//Position - 0xED22
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_240()//Position - 0xED61
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

int func_241()//Position - 0xED7E
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_242(int iParam0)//Position - 0xEDA4
{
	if ((func_243() && Global_92833.f_11 == 6) && iParam0 == func_161(&(Global_92833.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_243()//Position - 0xEDD8
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0)//Position - 0xEE16
{
	if (func_105(0))
	{
		if (Global_71102.f_1 == 7)
		{
			if (Global_71102 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_245(int iParam0, var uParam1)//Position - 0xEE3E
{
	switch (*iParam0)
	{
		case 37:
			if (!func_278(iParam0))
			{
				return 0;
			}
			break;
		
		case 38:
			if (!func_270(iParam0))
			{
				return 0;
			}
			break;
		
		case 39:
			if (!func_266(iParam0))
			{
				return 0;
			}
			break;
		
		case 40:
			if (!func_265(iParam0))
			{
				return 0;
			}
			break;
		
		case 41:
			if (!func_261(iParam0, uParam1))
			{
				return 0;
			}
			break;
		
		case 42:
			if (!func_256(iParam0))
			{
				return 0;
			}
			break;
		
		case 43:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
	}
	func_311("Created initial scene");
	return 1;
}

int func_246(var uParam0)//Position - 0xEEFA
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_54;
	iVar0[2] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_3_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			func_255(&(uParam0->f_48), "rcmnigel3", "base", 0);
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_254(&iVar0) || !func_253(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_28[0]))
			{
				if (!func_250(&(uParam0->f_28[0]), 64, -44,6f, -1289,86f, 29,16f, 22,9f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iLocal_55, -39,9688f, -1285,962f, 28,3505f, 181,02f);
				if (func_124(uParam0->f_35[0]))
				{
					unk_0x1E7A8525FB41AAFE(uParam0->f_35[0], 65, 0);
					unk_0x6F861F183C9CF6FB(uParam0->f_35[0], 5, false);
					unk_0xE58BC5B025017AE2(uParam0->f_35[0], "28BNT310");
					unk_0xFD5736F667C70A28(uParam0->f_35[0], 0);
					unk_0x4BEFCD5DAE410A90(uParam0->f_35[0], 10);
					unk_0x20B0D48F18AD9178(uParam0->f_35[0], 0);
					unk_0x36C7B6DDA53E2DAF(uParam0->f_35[0], false);
					unk_0x36A50B92F547633A(uParam0->f_35[0], false);
				}
			}
			if (!func_247(&(uParam0->f_28[1]), &(uParam0->f_35[0])))
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_247(var uParam0, var uParam1)//Position - 0xF0E1
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0x6ADD12BF4D6D2587(*uParam1) && unk_0x9A0B2ED5055D3F0B(iLocal_54))
	{
		*uParam0 = unk_0xAC992EFAD62C33BF(26, joaat("u_m_m_aldinapoli"), -59,7094f, -1330,129f, 32,1963f, 0f, 1, true);
		unk_0x296D39391436DC64(*uParam0, "NI3_LNCH_CELEB");
		unk_0x03924C68EFCBC511(*uParam0, 4, 0, 0, 0);
		unk_0x771A86309E0CA47B(*uParam0, true);
		vVar0 = { unk_0x3F90543934DCD7E6(*uParam1, -0,2f, -1,8f, -1f) };
		fVar2 = (-90f + unk_0xF0371FE6E2BF9599(*uParam1));
		vVar1 = { 0f, 0f, fVar2 };
		unk_0xAA93B7B448E10E40(*uParam0, vVar0, 0, 0, 1);
		unk_0x59AF3B40AE222194(*uParam0, vVar1, 2, 1);
		unk_0xA9D382E7BA095148(*uParam0, *uParam1, 0, 0,2f, -1,8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		unk_0xB3A8974D2C811672(*uParam0, false, 0);
		return 1;
	}
	return 0;
}

void func_248(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0xF1B5
{
	func_249(iParam0);
	*iParam0 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, true, true, false);
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		unk_0xACE486395AA1867D(*iParam0, 1084227584);
		unk_0xE01CE1EBCD7EE551(*iParam0, 1000, 0);
	}
}

void func_249(int iParam0)//Position - 0xF1F7
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		if (func_173(*iParam0))
		{
			if (unk_0x9761C10D57B68069(*iParam0) && unk_0xCB234F3DD6FF9368(*iParam0, 1))
			{
				if (func_124(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
					{
						unk_0x5380482A432E314E(iParam0);
						return;
					}
				}
				unk_0xC91FE17AD7353B70(iParam0);
			}
		}
		else
		{
			if (func_124(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *iParam0, 0))
				{
					unk_0x5380482A432E314E(iParam0);
					return;
				}
			}
			unk_0xC91FE17AD7353B70(iParam0);
		}
	}
}

int func_250(int iParam0, int iParam1, vector3 vParam2, float fParam3, char* sParam4, int iParam5)//Position - 0xF293
{
	if (func_251(iParam0, iParam1, vParam2, fParam3, 1))
	{
		if (unk_0x6ADD12BF4D6D2587(*iParam0))
		{
			if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
			{
				unk_0x771A86309E0CA47B(*iParam0, true);
				unk_0x6D624C6A284D7D07(*iParam0, 0);
				if (iParam5 == 1)
				{
					unk_0x5C5D33A1B2711D21(*iParam0, false);
				}
			}
			unk_0x296D39391436DC64(*iParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0xF2EF
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_314(iParam1);
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x6ADD12BF4D6D2587(*iParam0))
			{
				unk_0x68433819717660CF(iParam0);
			}
			*iParam0 = unk_0xAC992EFAD62C33BF(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xE537629E02E8DA21(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x4CDD2D1D66ED1DE4(*iParam0, 3) == 0)
				{
					unk_0x03924C68EFCBC511(*iParam0, 5, 2, 0, 0);
				}
			}
			func_252(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x14776E43F90DD454(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_252(var uParam0, int iParam1)//Position - 0xF37D
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_88812[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_253(var uParam0)//Position - 0xF3C3
{
	if (func_200(uParam0))
	{
		unk_0x6450931B826B49D9(*uParam0);
		if (unk_0x3A801AA34DD821BE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)//Position - 0xF3ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x9A0B2ED5055D3F0B((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_255(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0xF41E
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	unk_0x6450931B826B49D9(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_256(var uParam0)//Position - 0xF45A
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_55;
	iVar0[2] = joaat("dubsta");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 9f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_2_RCM", 24);
			func_257(42, 1);
			func_255(&(uParam0->f_48), "rcmnigel2", "base_nigel", "base_nigel");
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_254(&iVar0) || !func_253(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_28[0]))
			{
				if (!func_250(&(uParam0->f_28[0]), 64, -1310,65f, -640,17f, 26,52f, 153,43f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iLocal_55, -1304,01f, -644,58f, 25,91f, 127,67f);
				if (func_124(uParam0->f_35[0]))
				{
					unk_0x1E7A8525FB41AAFE(uParam0->f_35[0], 65, 0);
					unk_0x6F861F183C9CF6FB(uParam0->f_35[0], 5, false);
					unk_0xE58BC5B025017AE2(uParam0->f_35[0], "28BNT310");
					unk_0xFD5736F667C70A28(uParam0->f_35[0], 0);
					unk_0x4BEFCD5DAE410A90(uParam0->f_35[0], 10);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_35[1]))
			{
				func_248(&(uParam0->f_35[1]), iVar0[2], -1290,73f, -634,603f, 26,1004f, 126,961f);
				if (func_124(uParam0->f_35[1]))
				{
					unk_0x1E7A8525FB41AAFE(uParam0->f_35[1], 0, 0);
					unk_0x4BEFCD5DAE410A90(uParam0->f_35[1], 10);
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_257(int iParam0, bool bParam1)//Position - 0xF675
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				iLocal_67 = func_260();
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
				func_259();
				unk_0x60225D4F755DFDB1(-1100,5f, 789,8f, 164,34f, 20f, 0);
				func_258(0);
			}
			else
			{
				unk_0xCA107A9AAF17E75F(iLocal_67, 0);
				unk_0xD581373770173F1F();
				func_258(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				iLocal_67 = unk_0xCB389937EDB1519A(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 0, 1, 1, 1);
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 0);
				unk_0xBB0951717202666D(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f);
				unk_0xDF1ACFD53102CEB0(joaat("s_m_y_doorman_01"), true);
				unk_0xDF1ACFD53102CEB0(joaat("s_m_m_bouncer_01"), true);
				unk_0x60225D4F755DFDB1(-558,2858f, 284,4073f, 81,1764f, 15f, 0);
				unk_0x60225D4F755DFDB1(-573,394f, 289,3696f, 79,06918f, 15f, 0);
				unk_0x247EAA2E93D4A021(-554,17f, 307,68f, 82,84f, 2f, 1, 0, 0, false);
				unk_0x4C15495E88D71C61(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, false, 1);
				unk_0x2EB451A3616DA1F8(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, 0);
				unk_0x2E4932E63763FE26(joaat("gauntlet"), true);
			}
			else
			{
				unk_0xCA107A9AAF17E75F(iLocal_67, 0);
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_GUARD_STAND", 1);
				unk_0xFA85ECEE588094C7("WORLD_HUMAN_CLIPBOARD", 1);
				unk_0xFA85ECEE588094C7("WORLD_VEHICLE_DRIVE_SOLO", 1);
				unk_0xD581373770173F1F();
				unk_0xDF1ACFD53102CEB0(joaat("s_m_y_doorman_01"), false);
				unk_0xDF1ACFD53102CEB0(joaat("s_m_m_bouncer_01"), false);
				unk_0x4C15495E88D71C61(-577,274f, 270,6505f, 77f, -543,1793f, 315,2973f, 94f, true, 1);
				unk_0x2E4932E63763FE26(joaat("gauntlet"), false);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				iLocal_67 = unk_0xCB389937EDB1519A(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 0, 1, 1, 1);
				unk_0xBB0951717202666D(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f);
				unk_0x4C15495E88D71C61(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, false, 1);
				unk_0x2EB451A3616DA1F8(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, 0);
				unk_0x247EAA2E93D4A021(-1035,73f, 365,44f, 68,91f, 35f, 1, 0, 0, false);
				unk_0x9B8406983378711E(-1035,73f, 365,44f, 68,91f, 27f, 0, 0, 0, 0, false, 0);
				unk_0x60225D4F755DFDB1(-1035,73f, 365,44f, 68,91f, 27f, 0);
			}
			else
			{
				unk_0xCA107A9AAF17E75F(iLocal_67, 0);
				unk_0xD581373770173F1F();
				unk_0x4C15495E88D71C61(-1073,19f, 342,05f, 63,32832f, -966,24f, 411,05f, 84,82043f, true, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				iLocal_67 = unk_0xCB389937EDB1519A(-1122,202f, 48,5724f, 51,4652f, -1076,233f, 92,1041f, 60,0617f, 0, 1, 1, 1);
				unk_0xBB0951717202666D(-1122,202f, 48,5724f, 51,4652f, -1076,233f, 92,1041f, 60,0617f);
				unk_0x247EAA2E93D4A021(-1096,855f, 67,6858f, 52,952f, 15f, 1, 0, 0, false);
			}
			else
			{
				unk_0xCA107A9AAF17E75F(iLocal_67, 0);
				unk_0xD581373770173F1F();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				iLocal_67 = unk_0xCB389937EDB1519A(-1319,566f, -650,077f, 23,53715f, -1301,789f, -634,0721f, 38,18122f, 0, 1, 1, 1);
				unk_0xBB0951717202666D(-1319,566f, -650,077f, 23,53715f, -1301,789f, -634,0721f, 38,18122f);
			}
			else
			{
				unk_0xCA107A9AAF17E75F(iLocal_67, 0);
				unk_0xD581373770173F1F();
			}
			break;
	}
}

void func_258(bool bParam0)//Position - 0xFA8A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { -1212,164f, 634,8231f, 100,5055f };
	vVar1 = { -1010,083f, 830,9487f, 250,4705f };
	vVar2 = { vVar0 };
	vVar3 = { vVar1 };
	unk_0xA846A937885EB977(vVar2, vVar3, 25f, 0, bParam0, 1);
	unk_0x4C15495E88D71C61(vVar0, vVar1, bParam0, 1);
	if (!bParam0)
	{
		unk_0x2EB451A3616DA1F8(vVar0, vVar1, 0);
		unk_0x247EAA2E93D4A021(-1100,5f, 789,8f, 164,34f, 40f, 1, 0, 0, false);
	}
}

void func_259()//Position - 0xFB1B
{
	unk_0xBB0951717202666D(-1112,99f, 774,12f, 151,77f, -1077,99f, 853,65f, 187,66f);
}

int func_260()//Position - 0xFB45
{
	return unk_0xCB389937EDB1519A(-1212,16f, 634,82f, 138,5f, -1010,08f, 830,94f, 180,47f, 0, 1, 1, 1);
}

int func_261(var uParam0, var uParam1)//Position - 0xFB73
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	int iVar3;
	
	sVar1 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			func_264(uParam1);
			func_263(uParam1, -1313,714f, -27,2202f, 48,0314f);
			func_263(uParam1, -1294,066f, -27,0136f, 47,5724f);
			func_263(uParam1, -1069,844f, -143,769f, 39,7493f);
			func_263(uParam1, -925,2529f, -89,9079f, 38,3457f);
			func_263(uParam1, -1010,948f, 40,0643f, 49,9277f);
			func_263(uParam1, -1122,838f, 233,7037f, 64,7587f);
			func_263(uParam1, -1282,578f, 188,8798f, 59,2769f);
			func_263(uParam1, -1328,153f, 192,0178f, 57,8136f);
			func_263(uParam1, -1386,75f, 167,32f, 57,11f);
			func_263(uParam1, -1411,5f, 109,64f, 51,49f);
			func_263(uParam1, -1379,52f, 111,05f, 54,28f);
			func_263(uParam1, -1371,77f, 24,07f, 52,88f);
			func_263(uParam1, -1342,27f, 16,92f, 52,16f);
			func_262(uParam1);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar2]);
				iVar2++;
			}
			unk_0x6450931B826B49D9(uParam0->f_48);
			unk_0x6450931B826B49D9(sVar1);
			iLocal_51 = 1;
			break;
		
		case 1:
			if ((!func_254(&iVar0) || !unk_0x3A801AA34DD821BE(uParam0->f_48)) || !unk_0x3A801AA34DD821BE(sVar1))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			func_257(41, 1);
			uParam0->f_28[0] = unk_0xAC992EFAD62C33BF(26, iVar0[3], -1096,855f, 67,6858f, 52,952f, 112f, 1, true);
			unk_0x0B652E456D6A7E32(uParam0->f_28[0], 0, 0, 0, false);
			unk_0x771A86309E0CA47B(uParam0->f_28[0], true);
			unk_0x35829E9BFCED1A3F(uParam0->f_28[0], true);
			unk_0xCFF0CD14B439821D(uParam0->f_28[0], true, 1);
			unk_0x5C5D33A1B2711D21(uParam0->f_28[0], true);
			uParam0->f_41[0] = unk_0x5E35CF35E65D69B9(iVar0[1], -1096,855f, 67,6858f, 52,952f, true, true, false);
			unk_0xA9D382E7BA095148(uParam0->f_41[0], uParam0->f_28[0], unk_0xDD09837E5235FE91(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			unk_0x6931076730A4AC5D(&iVar3);
			unk_0x12C9D41D52A560D6(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xDFD7CAAA70F1F7D2(iVar3, 1);
			unk_0x1B16DD5C115FE009(iVar3);
			unk_0xAB30B1CF01A198C1(uParam0->f_28[0], iVar3);
			unk_0xFAA3EF7FF92E1F9E(&iVar3);
			uParam0->f_28[1] = unk_0xAC992EFAD62C33BF(26, iVar0[4], -1096,258f, 69,723f, 53,0107f, 163f, 1, true);
			unk_0x12C9D41D52A560D6(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x771A86309E0CA47B(uParam0->f_28[1], true);
			uParam0->f_41[1] = unk_0x5E35CF35E65D69B9(iVar0[2], -1096,258f, 69,723f, 53,0107f, true, true, false);
			unk_0xA9D382E7BA095148(uParam0->f_41[1], uParam0->f_28[1], unk_0xDD09837E5235FE91(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_28[2] = unk_0xAC992EFAD62C33BF(26, iVar0[0], -1105,622f, 66,4609f, 53,07f, 118f, 1, true);
			uParam0->f_28[3] = unk_0xAC992EFAD62C33BF(26, iVar0[0], -1090,09f, 64,3905f, 52,5607f, 238f, 1, true);
			uParam0->f_28[4] = unk_0xAC992EFAD62C33BF(26, iVar0[0], -1093,736f, 73,8568f, 53,0388f, 319f, 1, true);
			iVar2 = 2;
			while (iVar2 <= 4)
			{
				unk_0x771A86309E0CA47B(uParam0->f_28[iVar2], true);
				unk_0x9E058151726E58DE(uParam0->f_28[iVar2], joaat("weapon_pistol"), -1, false, true);
				unk_0x35829E9BFCED1A3F(uParam0->f_28[iVar2], true);
				unk_0x5C5D33A1B2711D21(uParam0->f_28[iVar2], true);
				unk_0xA37FFE314E45ED5D(uParam0->f_28[iVar2], true);
				unk_0x94926085D8EF8443(uParam0->f_28[iVar2], 1);
				unk_0xDF1ACFD53102CEB0(iVar0[0], true);
				iVar2++;
			}
			uParam0->f_35[0] = unk_0xEA60F3B426BB095B(iVar0[5], -1099,91f, 61,2608f, 52,8124f, 243f, true, true, false);
			unk_0xACE486395AA1867D(uParam0->f_35[0], 1084227584);
			unk_0xA15269351F50F113(uParam0->f_35[0], true, true, 0);
			unk_0xE01CE1EBCD7EE551(uParam0->f_35[0], 1200, 0);
			unk_0x2E4932E63763FE26(iVar0[5], true);
			uParam0->f_41[2] = unk_0x5E35CF35E65D69B9(iVar0[6], -1099,91f, 63,2608f, 52,8124f, true, true, false);
			unk_0xA9D382E7BA095148(uParam0->f_41[2], uParam0->f_35[0], 0, 0,2f, -1,3f, 0,5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_35[1] = unk_0xEA60F3B426BB095B(iVar0[5], -1102,335f, 75,7757f, 53,2591f, 293f, true, true, false);
			uParam0->f_35[2] = unk_0xEA60F3B426BB095B(iVar0[5], -1103,023f, 65,6267f, 53,056f, 203f, true, true, false);
			iVar2 = 1;
			while (iVar2 <= 2)
			{
				unk_0xACE486395AA1867D(uParam0->f_35[iVar2], 1084227584);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_262(var uParam0)//Position - 0x10164
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(system::to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = system::vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = system::sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_263(var uParam0, vector3 vParam1)//Position - 0x10204
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_264(var uParam0)//Position - 0x10235
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_265(var uParam0)//Position - 0x1025C
{
	int iVar0[2];
	int iVar1;
	char* sVar2;
	int iVar3;
	
	sVar2 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("ig_kerrymcintosh");
	iVar0[1] = joaat("a_c_rottweiler");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650,5558f, -217,0627f, 35,55435f };
			uParam0->f_17[1 /*3*/] = { -601,4099f, -300,3887f, 64,24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x6450931B826B49D9(sVar2);
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_254(&iVar0) || !unk_0x3A801AA34DD821BE(sVar2))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			uParam0->f_28[0] = unk_0xAC992EFAD62C33BF(26, iVar0[0], -626,87f, -268,85f, 38f, 121f, 1, true);
			unk_0x03924C68EFCBC511(uParam0->f_28[0], 0, 1, 1, 0);
			unk_0x03924C68EFCBC511(uParam0->f_28[0], 2, 1, 2, 0);
			unk_0x03924C68EFCBC511(uParam0->f_28[0], 3, 0, 0, 0);
			unk_0x03924C68EFCBC511(uParam0->f_28[0], 4, 0, 0, 0);
			unk_0xAE6EBBBBD8B9FB30(uParam0->f_28[0], 17, true);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_28[0], 132, true);
			unk_0x35829E9BFCED1A3F(uParam0->f_28[0], true);
			unk_0xB89BC60EFF7F2571(uParam0->f_28[0], 0);
			unk_0x8BB5ECF21DDE505B(uParam0->f_28[0], 1);
			unk_0x6931076730A4AC5D(&iVar3);
			unk_0x12C9D41D52A560D6(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "dexy_stay_there", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "price_tag", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "such_a_good", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "this_looks", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x12C9D41D52A560D6(0, sVar2, "who_would", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xDFD7CAAA70F1F7D2(iVar3, 1);
			unk_0x1B16DD5C115FE009(iVar3);
			unk_0xAB30B1CF01A198C1(uParam0->f_28[0], iVar3);
			unk_0xFAA3EF7FF92E1F9E(&iVar3);
			uParam0->f_28[1] = unk_0xAC992EFAD62C33BF(26, iVar0[1], -627,4f, -267,12f, 38,23f, -59,95f, 1, true);
			unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 0, 3, 0);
			unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 1, 0);
			unk_0xAE01EF4BC84AFE7C(uParam0->f_28[1], 132, true);
			unk_0x35829E9BFCED1A3F(uParam0->f_28[1], true);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_266(var uParam0)//Position - 0x1058A
{
	int iVar0[6];
	int iVar1;
	char* sVar2;
	float fVar3;
	
	sVar2 = "rcmnigel1b";
	iVar0[0] = joaat("ig_tylerdix");
	iVar0[1] = joaat("a_f_y_beach_01");
	iVar0[2] = joaat("s_m_m_gardener_01");
	iVar0[3] = joaat("speedo");
	iVar0[4] = joaat("comet2");
	iVar0[5] = joaat("prop_nigel_bag_pickup");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1065,12f, 366,3438f, 97,59101f };
			uParam0->f_17[1 /*3*/] = { -1020,775f, 364,7596f, 65,23878f };
			uParam0->f_24 = 40f;
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1bnmt_1b";
			func_257(39, 1);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x6450931B826B49D9(uParam0->f_48);
			unk_0x6450931B826B49D9(sVar2);
			iLocal_51 = 1;
			break;
		
		case 1:
			if ((!func_254(&iVar0) || !unk_0x3A801AA34DD821BE(uParam0->f_48)) || !unk_0x3A801AA34DD821BE(sVar2))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iVar0[3], -1010,97f, 359,91f, 70,65f, 331,46f);
				if (func_124(uParam0->f_35[0]))
				{
					unk_0xACE486395AA1867D(uParam0->f_35[0], 1084227584);
					unk_0x1E7A8525FB41AAFE(uParam0->f_35[0], 97, 97);
					unk_0xF95D8D0BCEC9D59A(uParam0->f_35[0], 13,5f);
					unk_0x6F861F183C9CF6FB(uParam0->f_35[0], 2, false);
					unk_0x6D4A70E9DE82B24B(uParam0->f_35[0], 2, 0, 1);
					unk_0x30C37143C720F2AA(uParam0->f_35[0], 2, 0, 1f);
					unk_0x753D9A01DBBC17B5(uParam0->f_35[0]);
					return 0;
				}
			}
			if (func_124(uParam0->f_35[0]))
			{
				fVar3 = unk_0x8212F63113683BF7(uParam0->f_35[0], 2);
				if (!unk_0xC7F842A65EE9BC16(uParam0->f_35[0], 2) && fVar3 < 0,8f)
				{
					unk_0x30C37143C720F2AA(uParam0->f_35[0], 2, 0, 1f);
				}
				else
				{
					iLocal_51 = 3;
				}
			}
			break;
		
		case 3:
			if (func_124(uParam0->f_35[0]))
			{
				if (!unk_0xA5F6598E13F98E08(uParam0->f_35[0], sVar2, "idle_speedo", 3))
				{
					if (unk_0x3A801AA34DD821BE(sVar2))
					{
						unk_0x62DBF3A19FB053B1(uParam0->f_35[0], sVar2, "idle_speedo");
						return 0;
					}
					else
					{
						unk_0x6450931B826B49D9(sVar2);
						return 0;
					}
				}
			}
			func_248(&(uParam0->f_35[1]), iVar0[4], -1018,26f, 357,76f, 70,2f, 339,52f);
			if (func_124(uParam0->f_35[1]))
			{
				unk_0x1E7A8525FB41AAFE(uParam0->f_35[1], 27, 27);
			}
			func_268(&(uParam0->f_28[0]), iVar0[0], -1054,7f, 355,94f, 68,35f, 23,67f, 26);
			if (func_123(uParam0->f_28[0]))
			{
				unk_0xFF96DC2FA12B7785(uParam0->f_28[0], 0);
				unk_0xAA93B7B448E10E40(uParam0->f_28[0], -1054,7f, 355,94f, 68,35f, 0, 0, 1);
				unk_0x48ED7B2293A96722(uParam0->f_28[0], 23,67f);
				unk_0x12C9D41D52A560D6(uParam0->f_28[0], sVar2, "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			func_268(&(uParam0->f_28[1]), iVar0[1], -1058,43f, 362,78f, 69,86f, 130,45f, 26);
			if (func_123(uParam0->f_28[1]))
			{
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 0, 2, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 0, 1, 0);
				unk_0xFF96DC2FA12B7785(uParam0->f_28[1], 0);
				uParam0->f_59 = unk_0x8383F9C605E523B7(-1059f, 360,976f, 69f, 0f, 0f, -1,08f, 2);
				unk_0xD0E12C501EE26329(uParam0->f_59, true);
				unk_0x7122D672EBE0EA6E(uParam0->f_59, false);
				unk_0x8E628F774C748D93(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "base_girl", 1000f, -8f, 592, 0, 1148846080, 0);
			}
			func_268(&(uParam0->f_28[2]), iVar0[2], -1012,57f, 357,48f, 70,62f, -28,55f, 26);
			if (func_123(uParam0->f_28[2]))
			{
				unk_0xE537629E02E8DA21(uParam0->f_28[2]);
				unk_0xAA93B7B448E10E40(uParam0->f_28[2], -1012,57f, 357,48f, 70,62f, 0, 0, 1);
				unk_0xE01CE1EBCD7EE551(uParam0->f_28[2], 160, 0);
				if (unk_0x3A801AA34DD821BE(sVar2))
				{
					unk_0x12C9D41D52A560D6(uParam0->f_28[2], sVar2, "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
				}
			}
			func_267(&(uParam0->f_41[0]), iVar0[5], -1050,03f, 368,95f, 69,29f, -11,27f);
			if (func_124(uParam0->f_41[0]))
			{
				unk_0x59AF3B40AE222194(uParam0->f_41[0], 0f, 0f, -11,27f, 2, 1);
				unk_0x94433067C90B34A5(uParam0->f_41[0], false);
				unk_0x1A0806871323CD16(uParam0->f_41[0], true);
				unk_0x590186D6EB4E75D0(uParam0->f_41[0], 0);
				unk_0xAC62CE49044A35B9(uParam0->f_41[0], 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			unk_0xFCCDDE0E48CF9588(uParam0->f_48);
			unk_0xFCCDDE0E48CF9588(sVar2);
			return 1;
			break;
	}
	return 0;
}

void func_267(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x10AEC
{
	func_213(iParam0);
	*iParam0 = unk_0x5E35CF35E65D69B9(iParam1, vParam2, true, true, false);
	unk_0x48ED7B2293A96722(*iParam0, fParam3);
}

void func_268(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x10B13
{
	func_269(iParam0);
	*iParam0 = unk_0xAC992EFAD62C33BF(iParam4, iParam1, vParam2, fParam3, 0, false);
}

void func_269(int iParam0)//Position - 0x10B34
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*iParam0, false, 1);
		}
		if (!unk_0x9761C10D57B68069(*iParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*iParam0, true, 0);
		}
		unk_0x68433819717660CF(iParam0);
	}
}

int func_270(var uParam0)//Position - 0x10B75
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	
	iVar0[0] = joaat("u_m_m_willyfist");
	iVar0[1] = joaat("a_f_y_bevhills_03");
	iVar0[2] = joaat("a_f_y_bevhills_03");
	iVar0[3] = joaat("a_f_y_bevhills_03");
	iVar0[4] = joaat("a_m_y_vinewood_04");
	iVar0[5] = joaat("a_m_y_gay_01");
	iVar0[6] = joaat("gauntlet");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -565,5146f, 269,6139f, 81,02081f };
			uParam0->f_17[1 /*3*/] = { -562,2337f, 306,5382f, 94,13258f };
			uParam0->f_24 = 30f;
			uParam0->f_27 = 1;
			func_271(4, 0);
			func_311(" SetupScene_NIGEL_1A - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, FALSE)	");
			uParam0->f_48 = "rcmnigel1aig_1";
			uParam0->f_59 = -1;
			func_257(38, 1);
			iVar2 = unk_0xC0765AFBFA616644(-555,5934f, 285,7738f, 81,1763f, "v_rockclub");
			if (unk_0x2C2E1E35924B9FF2(iVar2))
			{
				unk_0x9CAF59533FADA559(iVar2);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x6450931B826B49D9(uParam0->f_48);
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_254(&iVar0) || !unk_0x3A801AA34DD821BE(uParam0->f_48))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			func_268(&(uParam0->f_28[0]), iVar0[0], -552,66f, 287,75f, 82,18f, 123,75f, 26);
			func_268(&(uParam0->f_28[1]), iVar0[1], -553,46f, 287,34f, 82,18f, -65,86f, 26);
			if (func_123(uParam0->f_28[1]))
			{
				unk_0x5C5D33A1B2711D21(uParam0->f_28[1], false);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 0, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 2, 0, 2, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 3, 1, 2, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 7, 0, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[1], 8, 1, 0, 0);
			}
			uParam0->f_59 = unk_0x8383F9C605E523B7(-552,18f, 285,476f, 81,976f, 0f, 0f, 79,5f, 2);
			unk_0xD0E12C501EE26329(uParam0->f_59, true);
			unk_0x7122D672EBE0EA6E(uParam0->f_59, false);
			if (func_123(uParam0->f_28[0]))
			{
				unk_0x8E628F774C748D93(uParam0->f_28[0], uParam0->f_59, uParam0->f_48, "BASE_02_Willie", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			if (func_123(uParam0->f_28[1]))
			{
				unk_0x8E628F774C748D93(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "BASE_02_GIRL", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			func_268(&(uParam0->f_28[2]), iVar0[2], -559,94f, 285,99f, 85,38f, -59,06f, 26);
			func_268(&(uParam0->f_28[3]), iVar0[3], -558,87f, 289,79f, 85,38f, 162,44f, 26);
			func_268(&(uParam0->f_28[4]), iVar0[4], -559f, 286,09f, 85,38f, 65,92f, 26);
			func_268(&(uParam0->f_28[5]), iVar0[5], -558,84f, 288,97f, 85,38f, -7,72f, 26);
			if (func_123(uParam0->f_28[2]))
			{
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 2, 1, 2, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 3, 1, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 4, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 7, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[2], 8, 1, 0, 0);
			}
			if (func_123(uParam0->f_28[3]))
			{
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 0, 1, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 4, 1, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 7, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[3], 8, 1, 0, 0);
			}
			if (func_123(uParam0->f_28[4]))
			{
				unk_0x03924C68EFCBC511(uParam0->f_28[4], 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[4], 2, 0, 2, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[4], 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[4], 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[4], 8, 0, 0, 0);
			}
			if (func_123(uParam0->f_28[5]))
			{
				unk_0x03924C68EFCBC511(uParam0->f_28[5], 0, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[5], 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[5], 3, 0, 3, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[5], 4, 1, 0, 0);
				unk_0x03924C68EFCBC511(uParam0->f_28[5], 8, 0, 2, 0);
			}
			func_248(&(uParam0->f_35[0]), iVar0[6], -553,55f, 308,61f, 82,81f, 202,78f);
			if (func_124(uParam0->f_35[0]))
			{
				unk_0x207466E78DA21033(uParam0->f_35[0], 1);
				unk_0x4BEFCD5DAE410A90(uParam0->f_35[0], 1);
				unk_0x590186D6EB4E75D0(uParam0->f_35[0], 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			unk_0xFCCDDE0E48CF9588(uParam0->f_48);
			return 1;
			break;
	}
	return 0;
}

void func_271(int iParam0, bool bParam1)//Position - 0x110C3
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_275(iParam0, &iVar1);
	if (!unk_0x74C475EB8E73D398("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x9E0125A2D9D9A6F8(iVar1))
		{
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iVar1)
			{
				func_274(iParam0, 1);
				return;
			}
			unk_0x1B16E13F2B83CDD4(iVar1, 1);
		}
		else if (!bParam1 && unk_0x9E0125A2D9D9A6F8(iVar1))
		{
			if (func_272(iParam0))
			{
				func_274(iParam0, 0);
			}
			unk_0x1B16E13F2B83CDD4(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_272(iParam0))
			{
				func_274(iParam0, 0);
			}
		}
	}
}

int func_272(int iParam0)//Position - 0x11169
{
	struct<2> Var0;
	
	Var0 = { func_273(iParam0) };
	if (Var0.f_1 != -1 && unk_0xC80D31E4B587871C(Global_31632[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_273(var uParam0)//Position - 0x1119D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_274(int iParam0, bool bParam1)//Position - 0x111EF
{
	struct<2> Var0;
	
	Var0 = { func_273(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31632[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31632[Var0.f_1]), Var0);
	}
}

var func_275(int iParam0, int iParam1)//Position - 0x11232
{
	struct<5> Var0;
	
	Var0 = { func_276(iParam0) };
	*iParam1 = unk_0xC0765AFBFA616644(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_276(int iParam0)//Position - 0x11257
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_277(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_277(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_277(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_277(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_277(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_277(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_277(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_277(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_277(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_277(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_277(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_277(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_277(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_277(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_277(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_277(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_277(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_277(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_277(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_277(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_277(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_277(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_277(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_277(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_277(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_277(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_277(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_277(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_277(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_277(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_277(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_277(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_277(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_277(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_277(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_277(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_277(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_277(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_277(int iParam0, bool bParam1)//Position - 0x134C5
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_278(var uParam0)//Position - 0x1407C
{
	int iVar0[3];
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0[0] = uLocal_52;
	iVar0[1] = uLocal_53;
	iVar0[2] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x6FF834D85E2DD4C6(iVar0[iVar1]);
				iVar1++;
			}
			func_255(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			func_255(&uLocal_56, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_254(&iVar0) || !func_253(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar3 = true;
			if (!func_250(&(uParam0->f_28[0]), 64, -1100,5f, 789,8f, 164,34f, 1,82f, "RC: NIGEL", 1))
			{
				bVar3 = false;
			}
			if (!func_250(&(uParam0->f_28[1]), 63, -1099,35f, 789,15f, 164,47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar3 = false;
			}
			if (!unk_0x6ADD12BF4D6D2587(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iLocal_55, -1077,959f, 793,9361f, 164,6374f, 172,8563f);
				if (func_124(uParam0->f_35[0]))
				{
					unk_0x1E7A8525FB41AAFE(uParam0->f_35[0], 65, 0);
					unk_0x6F861F183C9CF6FB(uParam0->f_35[0], 5, false);
					unk_0xE58BC5B025017AE2(uParam0->f_35[0], "28BNT310");
					unk_0xFD5736F667C70A28(uParam0->f_35[0], 0);
					unk_0x4BEFCD5DAE410A90(uParam0->f_35[0], 10);
					unk_0x20B0D48F18AD9178(uParam0->f_35[0], 0);
					unk_0x36C7B6DDA53E2DAF(uParam0->f_35[0], false);
					unk_0x36A50B92F547633A(uParam0->f_35[0], false);
				}
			}
			if (bVar3)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			if (func_124(uParam0->f_28[0]) && func_124(uParam0->f_28[1]))
			{
				unk_0x771A86309E0CA47B(uParam0->f_28[0], true);
				unk_0x771A86309E0CA47B(uParam0->f_28[1], true);
				iVar2 = unk_0x8383F9C605E523B7(-1100,558f, 789,8862f, 163,3285f, 0f, 0f, 0f, 2);
				unk_0x8E628F774C748D93(uParam0->f_28[0], iVar2, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0x8E628F774C748D93(uParam0->f_28[1], iVar2, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x14776E43F90DD454(iVar0[iVar1]);
				iVar1++;
			}
			func_257(37, 1);
			return 1;
			break;
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x1431D
{
	struct<27> Var0;
	int iVar1;
	
	func_107(iParam0, &Var0);
	iVar1 = func_102();
	if (iVar1 == 145)
	{
		return 1;
	}
	else if ((iVar1 != 1 && iVar1 != 0) && iVar1 != 2)
	{
		return 1;
	}
	if (!unk_0xC80D31E4B587871C(Var0.f_26, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0)//Position - 0x14371
{
	char* sVar0;
	
	if (Global_70856)
	{
		func_311("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_104555.f_9055 && !func_105(1))
	{
		func_311("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_281(iParam0))
	{
		Global_103642[iParam0 /*10*/].f_1 = 1;
		func_311("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_92833.f_11 == 6)
	{
		if (Global_92833 < 9)
		{
			func_107(iParam0, &sVar0);
			if (unk_0x74C475EB8E73D398(&(Global_92833.f_3), sVar0))
			{
				func_311("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("candidate_controller")) == 0)
	{
		Global_103642[iParam0 /*10*/].f_1 = 1;
		func_311("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_281(int iParam0)//Position - 0x1442A
{
	var uVar0;
	
	func_107(iParam0, &uVar0);
	if (!func_157(4))
	{
		if (func_242(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_241() && !func_240())
	{
		return 0;
	}
	if (func_287(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_160();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_244(iParam0))
	{
		if (!func_286(iParam0))
		{
			return 0;
		}
		if (!func_285(iParam0))
		{
			return 0;
		}
		if (func_284(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_282(5))
		{
			Global_103642[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_103642[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0)//Position - 0x144EB
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_92885.f_313 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_282(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_283(iParam0, &sVar1);
		iVar2 = unk_0xC0765AFBFA616644(Global_88016[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_92885.f_313 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_283(int iParam0, char* sParam1)//Position - 0x14570
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xAB84FBE3AB3FFAD3("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x74C475EB8E73D398(sParam1, "");
}

bool func_284(int iParam0)//Position - 0x14652
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 3);
}

bool func_285(int iParam0)//Position - 0x14680
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 2);
}

bool func_286(int iParam0)//Position - 0x146AE
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 0);
}

int func_287(int iParam0)//Position - 0x146DC
{
	if (func_239(iParam0))
	{
		return 0;
	}
	else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_288()//Position - 0x14711
{
	func_311("Running end routines.");
	Global_104273 = (Global_104273 - 1);
}

int func_289(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x1472B
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_290((*iParam0)[0], vParam2, fParam3, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_290((*iParam0)[iVar0], vParam2, fParam3, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_311("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_290(int iParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x14790
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_107(iParam0, &Var1);
	if (func_291(Var1.f_6, vParam1, fParam2, 0))
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 0))
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_18544[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_244(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_291(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1480E
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

void func_292(int iParam0, int iParam1, bool bParam2)//Position - 0x14889
{
	char* sVar0;
	
	if (*iParam0 == 43)
	{
		func_269(&(iParam0->f_28[1]));
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_69))
	{
		unk_0xE30CF11C0EE14316(&iLocal_69);
	}
	if (bParam2)
	{
		func_311("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 38)
		{
			func_271(4, 1);
			func_309(iParam0);
			func_311(" Script_Cleanup - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, TRUE)");
		}
		else if (*iParam0 == 39)
		{
			func_307(iParam0);
		}
		func_297(iParam0, 0, 0, 0);
	}
	func_257(*iParam0, 0);
	switch (*iParam0)
	{
		case 43:
			if (iParam1->f_1 != -1)
			{
				unk_0xB94964861C6B4D3C(iParam1->f_1);
			}
			break;
	}
	func_296(&(iParam0->f_48));
	if (iLocal_68 != -1)
	{
		func_311("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_209(&iLocal_68);
	}
	switch (*iParam0)
	{
		case 37:
			sVar0 = "NIG1A_AMB";
			break;
	}
	func_293(sVar0);
	if (bParam2)
	{
		func_210(*iParam0);
	}
	func_288();
	func_311("SCRIPT TERMINATED");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_293(char* sParam0)//Position - 0x14973
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (func_195(sParam0))
		{
			func_294();
		}
	}
}

void func_294()//Position - 0x14992
{
	Global_14622 = 0;
	func_295();
}

void func_295()//Position - 0x149A2
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

int func_296(var uParam0)//Position - 0x149C3
{
	if (func_200(uParam0))
	{
		if (unk_0x3A801AA34DD821BE(*uParam0))
		{
			unk_0xFCCDDE0E48CF9588(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x149F9
{
	func_304(uParam0, iParam1);
	func_301(uParam0, bParam2);
	func_298(uParam0, bParam3);
}

void func_298(var uParam0, bool bParam1)//Position - 0x14A19
{
	func_299(&(uParam0->f_41), bParam1);
}

void func_299(var uParam0, bool bParam1)//Position - 0x14A2B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_213(uParam0[iVar0]);
		}
		else
		{
			func_300(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_300(int iParam0, bool bParam1)//Position - 0x14A69
{
	if (unk_0x6ADD12BF4D6D2587(*iParam0))
	{
		if (unk_0x6049C20F5D5C185B(*iParam0))
		{
			unk_0x6B7C10B19928914F(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(iParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*iParam0);
		}
	}
}

void func_301(var uParam0, bool bParam1)//Position - 0x14AA4
{
	func_302(&(uParam0->f_35), bParam1);
}

void func_302(var uParam0, bool bParam1)//Position - 0x14AB6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_249(uParam0[iVar0]);
		}
		else
		{
			func_303(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_303(int iParam0)//Position - 0x14AF3
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

void func_304(var uParam0, int iParam1)//Position - 0x14B2B
{
	func_305(&(uParam0->f_28), iParam1);
}

void func_305(var uParam0, int iParam1)//Position - 0x14B3D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_269(uParam0[iVar0]);
		}
		else
		{
			func_306(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_306(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x14B7E
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

void func_307(var uParam0)//Position - 0x14BCE
{
	if (unk_0xD56F740235B1E8F0(uParam0->f_59))
	{
		if (func_123(uParam0->f_28[1]))
		{
			if (func_308(uParam0->f_28[1], 1785177548))
			{
				unk_0xB8E08BD5B184DF4E(uParam0->f_28[1]);
			}
			unk_0xBD1486160AB0661B(uParam0->f_28[1], -1000f, 1);
		}
	}
}

int func_308(int iParam0, int iParam1)//Position - 0x14C1F
{
	if (func_123(iParam0))
	{
		if (unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 1 || unk_0x78F50AA8F955BEFC(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_309(var uParam0)//Position - 0x14C52
{
	if (unk_0xD56F740235B1E8F0(uParam0->f_59))
	{
		if (func_123(uParam0->f_28[0]))
		{
			if (func_308(uParam0->f_28[0], 1785177548))
			{
				unk_0xB8E08BD5B184DF4E(uParam0->f_28[0]);
			}
			unk_0xBD1486160AB0661B(uParam0->f_28[0], -1000f, 1);
		}
		if (func_123(uParam0->f_28[1]))
		{
			if (func_308(uParam0->f_28[1], 1785177548))
			{
				unk_0xB8E08BD5B184DF4E(uParam0->f_28[1]);
			}
			unk_0xBD1486160AB0661B(uParam0->f_28[1], -1000f, 1);
		}
	}
}

void func_310(var uParam0)//Position - 0x14CE1
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

void func_311(char* sParam0)//Position - 0x14D1E
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
	}
}

void func_312(var uParam0)//Position - 0x14D30
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_313()//Position - 0x14D63
{
	func_311("Running start routines.");
	Global_104273++;
}

int func_314(int iParam0)//Position - 0x14D7D
{
	if (!func_36(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

