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
	char* sLocal_20 = NULL;
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
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	sLocal_20 = "NULL";
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
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (unk_0x8F38E94BBF3404CD(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	Global_55897 = 0;
	Global_55904 = 0;
	iVar0 = 1;
	if (unk_0x7D9C4B359376D38A(18))
	{
		func_109();
		Global_67998 = 0;
		Global_55898 = 0;
		Global_55924 = 0;
		unk_0x96A3D9A8A4C7AFD4();
	}
	iVar1 = 0;
	system::wait(0);
	func_107();
	while (!Global_55896)
	{
		system::wait(200);
		if (Global_55904)
		{
			func_109();
			unk_0x96A3D9A8A4C7AFD4();
		}
	}
	Global_55911 = 0;
	Global_55898 = 1;
	while (!Global_55897)
	{
		if (Global_67998 > 0)
		{
			func_101();
			if (Global_55931 == -1)
			{
				Global_55931 = unk_0x53C562FD2B9E3AB0();
			}
			else if ((unk_0x53C562FD2B9E3AB0() - Global_55931) > 1000)
			{
				func_100();
			}
		}
		if (Global_55904)
		{
			func_109();
			Global_55898 = 0;
			unk_0x96A3D9A8A4C7AFD4();
		}
		system::wait(0);
	}
	Global_55898 = 0;
	if (func_99())
	{
		while (func_99())
		{
			system::wait(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_55899 == iLocal_70)
		{
			if (Global_55899)
			{
				system::settimerb(0);
				iLocal_60 = 0;
				Global_55914 = 0;
			}
			iLocal_70 = Global_55899;
		}
		while (Global_55903)
		{
			system::wait(1000);
		}
		if (Global_55897 && !Global_55904)
		{
			if (Global_55896 || iLocal_72)
			{
				Global_55901 = 0;
				if (bLocal_71)
				{
				}
				if (Global_55897)
				{
				}
				if (!bLocal_71 == Global_55897)
				{
					func_98(&Local_45);
					Local_45.f_562 = 1;
					func_97();
					func_96();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_67998)
					{
						if (Global_67999[iVar3 /*9*/] > 0)
						{
							if (Global_56128[Global_67999[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_56128[Global_67999[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_56128[Global_67999[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_67999[iVar3 /*9*/].f_1 == 0)
										{
											Global_67999[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_71116 && !Global_55893) || Global_55905)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x9F7B586A14398C40() || unk_0x9BB64DDCD9C7B076())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_92872.f_8)
						{
							bVar5 = true;
						}
						if (Global_55923)
						{
							bVar5 = true;
						}
					}
					if (func_95(0))
					{
						bVar5 = true;
						Global_55923 = 1;
					}
					iVar6 = Global_68149;
					if (Global_55906)
					{
						func_92(Global_55907);
						iVar0 = 2;
						func_91(&Local_45, "HISHPA", &Global_55918, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_90(&Local_45, 3, "ACTATAKE_AG", "", Global_104555.f_1.f_126[Global_55907 /*23*/], 0, 0, 0);
						}
						else
						{
							func_90(&Local_45, 3, "POTATAKE", "", Global_104555.f_1.f_126[Global_55907 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_89208[Global_55907 /*38*/].f_37)
						{
							if (Global_89208[Global_55907 /*38*/].f_31[iVar7] > 0)
							{
								func_90(&Local_45, 3, func_89(Global_89208[Global_55907 /*38*/].f_25[iVar7]), "", (-1 * Global_89208[Global_55907 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_90(&Local_45, 3, "ACTATAKE_M", "", Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_90(&Local_45, 3, "ACTATAKE_F", "", Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_90(&Local_45, 3, "ACTATAKE_T", "", Global_104555.f_1.f_126[Global_55907 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_89198.f_7 > 0)
						{
							func_90(&Local_45, 3, "ACTATAKE_L", "", Global_89198.f_7, 0, 0, 0);
						}
						iVar8 = func_87(func_88(Global_55907));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_89007[iVar8 /*19*/])
						{
							if (!func_86(Global_104555.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_104555.f_1.f_126[Global_55907 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_104555.f_1.f_126[Global_55907 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_90(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_90(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_95(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0xBFFF62F75445099D(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0xBFFF62F75445099D(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0xBFFF62F75445099D(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0xBFFF62F75445099D(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_90(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_91(&Local_45, "MISHPA", &Global_55918, 0);
					}
					if (Global_67998 > 0)
					{
						func_71(&Local_45);
					}
					if (!Global_55893)
					{
						func_65();
					}
					while (!bVar5)
					{
						if (unk_0x9F7B586A14398C40() || unk_0x9BB64DDCD9C7B076())
						{
							bVar5 = true;
						}
						system::wait(0);
					}
					if ((bVar5 || Global_55923) && !bVar4)
					{
						if (!Global_55905)
						{
							func_61(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_68148)
						{
							switch (Global_68149)
							{
								case 50:
								case 51:
								case 52:
									unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 1);
									func_57(1);
									bVar11 = true;
									break;
								
								default:
									unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 1);
									func_57(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 1);
							func_57(1);
							bVar11 = true;
						}
						iVar1 = func_56();
						unk_0xBCBC53983EC3B1BA("MISHSTA", 3);
						while (!unk_0x9F0887BCBFCF3C2F(3))
						{
							system::wait(0);
						}
						bLocal_73 = true;
						while (unk_0xA8113D347D14630F())
						{
							system::wait(0);
						}
						while (unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
						{
							system::wait(0);
						}
						func_61(&Local_45, 1, 0);
						unk_0x1B5A255BF0D63005("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0xEB55C9C28A1E0326())
							{
								system::wait(0);
							}
						}
						unk_0xF960DC0A7CFDD155();
					}
					if (Global_55896)
					{
						iLocal_72 = 1;
						Global_55896 = 0;
					}
					system::settimera(0);
				}
				if (bLocal_73 && !Global_55904)
				{
					if (unk_0x8F38E94BBF3404CD(joaat("appcamera")) > 0)
					{
						func_53(0);
					}
					if (Global_67998 > 0 || Global_55893)
					{
						if (Global_55923)
						{
							unk_0x5A66A86A47AC3B57(7);
						}
						if (iVar1 && !Global_55893)
						{
							Global_36765 = 1;
						}
						if (!Global_55905)
						{
							if (func_21(&Local_45, 0, system::to_float(iVar0), 0, 0, 0))
							{
								Global_55904 = 1;
							}
							func_20();
						}
						if (Global_55923)
						{
							unk_0x5A66A86A47AC3B57(7);
						}
					}
					func_19(1);
					if (!unk_0x9F7B586A14398C40())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_55897;
				if (Global_55894)
				{
				}
				else
				{
					unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B());
					if (unk_0xDE523AF6F7B269AB(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())) < 1)
					{
						Global_55905 = 1;
					}
					if (((((func_99() || func_9()) || Global_55904) || Global_71125) || Global_55905) || !bLocal_73)
					{
						Global_55893 = 0;
						Global_55897 = 0;
						iLocal_72 = 0;
						Global_55900 = 0;
						Global_55901 = 0;
						Global_55911 = 0;
						Global_55914 = 0;
						func_19(0);
						func_2();
						Global_55904 = 0;
						bVar2 = true;
					}
				}
			}
		}
		system::wait(0);
	}
	func_1(&Local_45);
	Global_25483 = 0;
	Global_55908 = 0;
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1(var uParam0)//Position - 0x8BD
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_95(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()//Position - 0x963
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
	func_19(0);
	func_8();
	Global_68150 = 0;
	Global_55902 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_55893 = 0;
	Global_55923 = 0;
	Global_55931 = -1;
}

void func_3()//Position - 0x9B9
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

void func_4()//Position - 0x9E6
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

void func_5()//Position - 0xA1D
{
	Global_56062 = 0;
}

void func_6()//Position - 0xA29
{
	Global_55922 = 0;
	Global_55926 = func_7(joaat("sp0_shots"));
	Global_55925 = func_7(joaat("sp0_hits"));
	Global_55928 = func_7(joaat("sp1_shots"));
	Global_55927 = func_7(joaat("sp1_hits"));
	Global_55930 = func_7(joaat("sp2_shots"));
	Global_55929 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)//Position - 0xA7D
{
	var uVar0;
	
	unk_0xFA3CE529DBB66C85(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()//Position - 0xA91
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

var func_9()//Position - 0xABB
{
	return Global_1312854;
}

void func_10(int iParam0)//Position - 0xAC7
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

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB09
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xB2A
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
		func_13();
	}
}

void func_13()//Position - 0xCFD
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

int func_14(char* sParam0)//Position - 0xE1D
{
	if (unk_0x74C475EB8E73D398(sParam0, &Global_103198))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)//Position - 0xE44
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0xE7F
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

void func_17()//Position - 0xEC2
{
	unk_0x9B16F08390FCC31C();
	func_18();
}

void func_18()//Position - 0xED2
{
	Global_17162.f_134 = 1;
}

void func_19(int iParam0)//Position - 0xEE0
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

void func_20()//Position - 0xEF4
{
	Global_17162.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xF02
{
	bool bVar0;
	
	if (unk_0x4B64A8D052027742() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0x4B64A8D052027742();
	if (!unk_0x3A711520F83BAE98())
	{
		if (unk_0xA7E3B4C3A60721A5(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x12A8D89D51ADF8A6(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x7635EA803CE40962(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			}
		}
	}
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(19);
	unk_0x4FB260623DD93924(2, 19, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
	unk_0x4FB260623DD93924(0, 21, 1);
	unk_0x4FB260623DD93924(0, 28, 1);
	unk_0x4FB260623DD93924(0, 29, 1);
	unk_0x4FB260623DD93924(0, 171, 1);
	func_51(0);
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xABB93C2E6C591375() || (unk_0x3E9CABD07B829173() && !unk_0x9BB64DDCD9C7B076()))
		{
			unk_0x15F5D3F996CB934F();
		}
	}
	Global_36411 = 1;
	if (!uParam0->f_563)
	{
		switch (func_48(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B())))
		{
			case 1:
				unk_0xA91E83FF512776B6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xA91E83FF512776B6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xA91E83FF512776B6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + system::floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_47(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_47(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_47((25f * 0,5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_47(30f) - func_47(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + system::round((0f + (1000f * system::timestep()))));
		func_26(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0,225f) * system::timestep())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1,215f) * system::timestep())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0,7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_OUT");
			unk_0x271AA5469AF471B3();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0,3f) * system::timestep())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x8CFF76532FEF34D4(2))
			{
				if (unk_0x34D11AB5BA7922C2(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xE8C126B7ADBB9D63(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x34D11AB5BA7922C2(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x271AA5469AF471B3();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0,75f;
				}
				func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0,75f;
					unk_0x008F3E3CC076EA0E(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x271AA5469AF471B3();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0,3f) * uParam0->f_573) * system::timestep())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0,3f) * uParam0->f_573) * 0,01f) * system::timestep())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0,07f), 0,75f, 1,15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xE8C126B7ADBB9D63(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			system::wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)//Position - 0x1555
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_24(unk_0xC9C4B2A22DE54C69(2, 215, true));
	func_23("ES_HELP");
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x1869584A8A72FEDD(true);
		unk_0xD07D5CD276368D36(215);
	}
	unk_0x271AA5469AF471B3();
	if (bParam1)
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xD07D5CD276368D36(1);
		func_24(unk_0xC9C4B2A22DE54C69(2, 216, true));
		func_23("ES_XPAND");
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x1869584A8A72FEDD(true);
			unk_0xD07D5CD276368D36(216);
		}
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

void func_23(char* sParam0)//Position - 0x1618
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_24(char* sParam0)//Position - 0x162A
{
	unk_0x8686005F83E832AE(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)//Position - 0x1638
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

void func_26(var uParam0, float fParam1, bool bParam2)//Position - 0x165F
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = system::round((uParam0->f_547 * 255f));
	fVar1 = (func_46() * 0,25f);
	if (unk_0x34D11AB5BA7922C2(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_45(&(uParam0->f_13));
				}
				else
				{
					func_23(&(uParam0->f_13));
				}
				if (unk_0x3A711520F83BAE98())
				{
					unk_0xD07D5CD276368D36(150);
				}
				else
				{
					unk_0xD07D5CD276368D36(100);
				}
				unk_0x1869584A8A72FEDD(true);
				if (uParam0->f_556 == 4)
				{
					unk_0xD07D5CD276368D36((uParam0->f_56 - 1));
				}
				else
				{
					unk_0xD07D5CD276368D36(uParam0->f_56);
				}
				unk_0x1869584A8A72FEDD(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0xD07D5CD276368D36(2);
				}
				else
				{
					unk_0xD07D5CD276368D36(69);
				}
				unk_0x271AA5469AF471B3();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x008F3E3CC076EA0E(uParam0->f_1, "TRANSITION_UP");
				unk_0x9499D7329FB840A2(0,15f);
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
				uParam0->f_3 = 1;
			}
		}
		func_44();
		unk_0x28E092B1E386EB67(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0,1388889f + func_47((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0,975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0,3f * func_46());
	if (uParam0->f_12)
	{
		fVar1 = 0,5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_43(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0,006f));
		}
		if (unk_0xB6936205ED728A9D(0) < 1,4f)
		{
			fVar6 = (fVar6 * 1,3f);
		}
		fVar7 = func_43(&(uParam0->f_550));
		fVar8 = (((0,119f + 0,05f) / func_46()) / 2,5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2,6f * fVar8)))
			{
				fVar6 = (fVar7 + (2,6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1,9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0,499f - (fVar6 / 2f)) + 0,006f);
	fVar10 = ((0,499f + (fVar6 / 2f)) - 0,006f);
	unk_0x01B48CB2F72AE113(2, 215);
	unk_0x01B48CB2F72AE113(2, 216);
	unk_0x01B48CB2F72AE113(2, 200);
	unk_0x4FB260623DD93924(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0,95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_40((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0,166f) * system::timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x2F18DFDBFA4AA0E4();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0,1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x28E092B1E386EB67(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				unk_0x4FB260623DD93924(2, 188, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 188))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x4FB260623DD93924(2, 187, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 187))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0x4FB260623DD93924(2, 202, 1);
				if (unk_0x4CD14B4B1E8BD8BA(2, 202))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x553231E7FC3C570D(7);
				unk_0x553231E7FC3C570D(8);
				unk_0x553231E7FC3C570D(9);
				unk_0x553231E7FC3C570D(6);
				unk_0x4FB260623DD93924(0, 140, 1);
				unk_0x4FB260623DD93924(0, 141, 1);
				unk_0x4FB260623DD93924(0, 142, 1);
				if (unk_0xE8C126B7ADBB9D63(2, 215) || unk_0x4CD14B4B1E8BD8BA(2, 200))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x4AFBCBFDE748D4E0(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0x31758B9A51671C43(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, iVar0);
	unk_0xEDC290CB1C56B732(fVar9, fVar10);
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, 0,4f);
	fVar1 = (fVar1 - func_47(6f));
	fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
	fVar11 = (fVar2 - func_47((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0,6f * func_47(25f))), 0f, 1f);
		func_44();
		unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 - (func_47((2f - 0,5f)) - 0,001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_47((2f * 0,3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0,2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0,8f * func_47(25f))), 0f, 1f);
			func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, system::round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_47(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_47((25f * 0,2f)));
				fVar11 = (fVar2 - (fVar1 - (0,3f * func_46())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_47(2f));
					fVar12 = func_25((fVar11 / (0,6f * func_47(25f))), 0f, 1f);
					func_44();
					unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_47((2f * 0,5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_47((2f * 0,3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_47((25f * 0,2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_47(2f));
			fVar12 = func_25((fVar11 / (0,6f * func_47(25f))), 0f, 1f);
			func_44();
			unk_0x09C2CBFA4CD804AC(0,5f, (fVar1 + func_47((2f * 0,5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_47((25f * 0,2f)));
		fVar11 = (fVar2 - (fVar1 - (0,3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0,8f * func_47(25f))), 0f, 1f);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xC45D692E0BD4797B() == 0)
			{
				fVar20 = (fVar9 + ((0,119f / func_46()) / 2,5f));
				fVar21 = (fVar10 - ((0,119f / func_46()) / 2,5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0,119f + 0,05f) / func_46()) / 2,5f));
					fVar21 = (fVar10 - (((0,119f + 0,05f) / func_46()) / 2,5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0,28f) + 0,006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0,28f) + 0,006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0xEDC290CB1C56B732(fVar20, fVar21);
				unk_0xA2E2179985C59E40(1);
			}
			else
			{
				fVar20 = 0,5f;
				unk_0xA2E2179985C59E40(0);
			}
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_47((2f * 2f))), 0, 0, 0);
			unk_0xEDC290CB1C56B732(fVar20, fVar21);
			unk_0xA2E2179985C59E40(2);
			unk_0x8D95497078BC0E3B(1f, 0,4f);
			unk_0x0BC5BE26BB7006D2(0);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0,28f) + 0,006f));
			unk_0xEDC290CB1C56B732(fVar20, fVar22);
			unk_0xA54B8BFDEBB2AF89(iVar13, iVar14, iVar15, system::round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x76CCD673085CBF57("PERCENTAGE");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x76CCD673085CBF57("FO_TWO_NUM");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0x6223D539BCD39E76(uParam0->f_555);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x76CCD673085CBF57("MTPHPER_XPNO");
					unk_0x6223D539BCD39E76(uParam0->f_554);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x76CCD673085CBF57("ESDOLLA");
					unk_0xC4DA7D522991B465(uParam0->f_554, 1);
					unk_0xD3DA9EADE295C3C5(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x31758B9A51671C43(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x31758B9A51671C43(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x31758B9A51671C43(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0,001388889f * 5f);
				fVar30 = ((0,00078125f * 16f) * 2f);
				fVar31 = ((0,001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0,006f);
				fVar33 = ((fVar1 + func_47(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0,006f * 6f));
				}
				fVar30 = (fVar30 * 0,65f);
				fVar31 = (fVar31 * 0,65f);
				unk_0xEFB3EC0CDCC33841(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, system::round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_47(30f) - 2f));
		}
	}
}

float func_27(float fParam0)//Position - 0x22EF
{
	return (fParam0 * 0,00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x22FF
{
	unk_0x0BC5BE26BB7006D2(iParam3);
	unk_0x8F5DFDE59FA7D0D0(iParam5);
	func_44();
	if (bParam4)
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(sParam0);
	}
	else
	{
		unk_0x76CCD673085CBF57(sParam0);
	}
	unk_0xD3DA9EADE295C3C5(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x233C
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar2, &iVar3);
			fVar5 = unk_0xB6936205ED728A9D(0);
			if (func_31())
			{
				iVar2 = system::round((system::to_float(iVar3) * fVar5));
			}
			fVar6 = (system::to_float(iVar2) / system::to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			if (unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
			{
				unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
			}
			iVar2 = system::round((system::to_float(iVar2) / fVar4));
			iVar3 = system::round((system::to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x9A72C8F89A53C2D1(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x62415D7FD7ADB9EE(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x41226DC6540EC9AA() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_30(int iParam0)//Position - 0x24ED
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0,5f;
			break;
	}
	return 1f;
}

int func_31()//Position - 0x258C
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (system::to_float(iVar0) / system::to_float(iVar1));
	if (fVar2 > 3,5f)
	{
		return 1;
	}
	return 0;
}

var func_32(int iParam0, bool bParam1)//Position - 0x25BE
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_34(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var2, &uVar1))
			{
				return func_33(&uVar1);
			}
		}
		else
		{
			return func_33(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_33(var uParam0)//Position - 0x2A0E
{
	return uParam0;
}

struct<13> func_34(int iParam0)//Position - 0x2A18
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

char* func_35(int iParam0)//Position - 0x2A2F
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_34(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var1, &uVar0);
			return func_33(&uVar0);
		}
		else
		{
			return func_33(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x2AA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	unk_0xEDC290CB1C56B732(fParam3, fParam4);
	unk_0xA2E2179985C59E40(1);
	unk_0x8D95497078BC0E3B(1f, func_38(14f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_44();
	if (uParam0->f_531[iParam1])
	{
		unk_0x76CCD673085CBF57("STRING");
		unk_0x854FACC4E5F40C82(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x76CCD673085CBF57(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x6223D539BCD39E76(uParam0->f_489[iParam1]);
		}
	}
	unk_0xD3DA9EADE295C3C5(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_32(7, 0), (fParam4 - 0,006f), ((fParam2 + func_47(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_32(5, 0), (fParam4 - 0,006f), ((fParam2 + func_47(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", func_32(6, 0), (fParam4 - 0,006f), ((fParam2 + func_47(2f)) + (0,25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0,38f) + 0,006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xA2E2179985C59E40(1);
	}
	else
	{
		unk_0xA2E2179985C59E40(2);
	}
	unk_0x8D95497078BC0E3B(1f, func_38(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 - (0,00078125f * 3f)));
	}
	else
	{
		unk_0xEDC290CB1C56B732(fParam3, (fVar4 + (0,00078125f * 2f)));
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x2D2F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x8F5DFDE59FA7D0D0(0);
	func_44();
	fVar1 = 0f;
	fVar2 = (8f * 0,00078125f);
	fVar3 = (16f * 0,001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_38(18f));
			unk_0x8F5DFDE59FA7D0D0(4);
			if (iParam0 < 0)
			{
				unk_0x0792909D8327DAEA("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			else
			{
				unk_0x0792909D8327DAEA("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
				fVar1 = unk_0xF2A1AF58CC57C564(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0,00078125f));
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0,5f)) - (0,00078125f * 2f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), (fVar1 - (fVar2 * 0,5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEFB3EC0CDCC33841("CommonMenu", "BettingBox_Right", (fParam2 - (0,00078125f * 4f)), ((fParam3 + (fVar3 * 0,6f)) + (0,001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x8D95497078BC0E3B(1f, func_38(14f));
			break;
	}
	unk_0xF92B835A141C6BDD(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x76CCD673085CBF57("PERCENTAGE");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 1:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 2:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("FO_TWO_NUM");
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x8D95497078BC0E3B(1f, func_38(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x76CCD673085CBF57("ESMINDOLLA");
				unk_0xC4DA7D522991B465((-1 * iParam0), 1);
			}
			else
			{
				unk_0x76CCD673085CBF57("ESDOLLA");
				unk_0xC4DA7D522991B465(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x76CCD673085CBF57(sParam4);
			break;
		
		case 7:
			unk_0x76CCD673085CBF57("STRING");
			unk_0x854FACC4E5F40C82(sParam4);
			break;
		
		case 8:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 14);
			break;
		
		case 9:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 6);
			break;
		
		case 10:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8F5DFDE59FA7D0D0(5);
			unk_0x76CCD673085CBF57("STRING");
			unk_0xFD1DB5DD208735A3(iParam0, 2055);
			break;
		
		case 12:
			unk_0x76CCD673085CBF57("AHD_DIST");
			unk_0x6223D539BCD39E76(iParam0);
			break;
		
		case 13:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam0);
			unk_0x6223D539BCD39E76(iParam1);
			break;
		
		case 16:
			unk_0x76CCD673085CBF57(sParam4);
			unk_0x6223D539BCD39E76(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xD3DA9EADE295C3C5((fParam2 - (0,00078125f * 4f)), fParam3, 0);
			unk_0x8D95497078BC0E3B(1f, func_38(14f));
		}
		else
		{
			unk_0xD3DA9EADE295C3C5(fParam2, fParam3, 0);
		}
	}
}

float func_38(float fParam0)//Position - 0x30A8
{
	return (fParam0 * 0,025f);
}

float func_39(float fParam0)//Position - 0x30B8
{
	return (fParam0 * 0,0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x30C8
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_41(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x3216
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)//Position - 0x322F
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

float func_43(char* sParam0)//Position - 0x3248
{
	unk_0x0792909D8327DAEA(sParam0);
	return (unk_0xF2A1AF58CC57C564(1) / 2f);
}

void func_44()//Position - 0x325D
{
	unk_0x5A66A86A47AC3B57(1);
	if (unk_0x2D0EF1D268F33F25() || unk_0x3E9CABD07B829173())
	{
		unk_0x5A66A86A47AC3B57(7);
	}
	unk_0xAE8C92295C8F2D18(0);
}

void func_45(char* sParam0)//Position - 0x3285
{
	unk_0x8686005F83E832AE(sParam0);
}

float func_46()//Position - 0x3293
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xB9D80B12FE4456A5())
	{
	}
	return fVar0;
}

float func_47(float fParam0)//Position - 0x32A7
{
	return (fParam0 * 0,001388889f);
}

int func_48(int iParam0)//Position - 0x32B7
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)//Position - 0x32F4
{
	if (func_50(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_50(int iParam0)//Position - 0x331E
{
	return iParam0 < 3;
}

void func_51(int iParam0)//Position - 0x332A
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_52(0))
		{
			func_53(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

int func_52(int iParam0)//Position - 0x3353
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

void func_53(int iParam0)//Position - 0x33AD
{
	if (Global_14615)
	{
		func_55(0, 0);
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
	if (!func_54())
	{
		Global_14453.f_1 = 3;
	}
}

int func_54()//Position - 0x341D
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)//Position - 0x3444
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_56()//Position - 0x34B8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] > 0)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57(bool bParam0)//Position - 0x34FC
{
	char* sVar0;
	
	unk_0xA3A57BA8F775CAFF(0);
	switch (func_58())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xA212266606E6ECA8(sVar0);
}

int func_58()//Position - 0x356F
{
	func_59();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_59()//Position - 0x3588
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_49(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_48(unk_0xFC1458A37D98B502());
			if (func_50(iVar0) && (!func_60(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_50(Global_104555.f_2353.f_539.f_4301))
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

bool func_60(int iParam0)//Position - 0x3685
{
	return Global_35861 == iParam0;
}

int func_61(var uParam0, bool bParam1, int iParam2)//Position - 0x3693
{
	uParam0->f_12 = iParam2;
	func_64(uParam0);
	func_63(uParam0);
	if (unk_0x74C475EB8E73D398(&(uParam0->f_550), "SPR_RESULT") || (unk_0x74C475EB8E73D398(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x128A5DCCD09CCA17("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x128A5DCCD09CCA17("CommonMenu", false);
		unk_0x128A5DCCD09CCA17("MPLeaderboard", false);
		unk_0x128A5DCCD09CCA17("MPHud", false);
		uParam0->f_1 = unk_0xD704C81492296A37("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4A8BF4917A66587B("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			system::wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				system::wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x34D11AB5BA7922C2(uParam0->f_1) || !unk_0xA51ADD51711B4A15("CommonMenu")) || !unk_0xA51ADD51711B4A15("MPLeaderboard")) || !unk_0xA51ADD51711B4A15("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x34D11AB5BA7922C2(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_62(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_71117 = 1;
	return 1;
}

void func_62(var uParam0)//Position - 0x3832
{
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "CLEAR_ALL");
	unk_0x271AA5469AF471B3();
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1869584A8A72FEDD(true);
		unk_0x271AA5469AF471B3();
	}
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(2);
	func_24(unk_0xC9C4B2A22DE54C69(2, 188, true));
	func_23("ES_HELP_TU");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(1);
	func_24(unk_0xC9C4B2A22DE54C69(2, 187, true));
	func_23("ES_HELP_TD");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(0);
	func_24(unk_0xC9C4B2A22DE54C69(2, 202, true));
	func_23("ES_HELP_AB");
	unk_0x271AA5469AF471B3();
	unk_0x008F3E3CC076EA0E(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x271AA5469AF471B3();
}

void func_63(var uParam0)//Position - 0x38F6
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xA2E2179985C59E40(0);
	unk_0x8D95497078BC0E3B(1f, func_38(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x0792909D8327DAEA("STRING");
			unk_0x854FACC4E5F40C82(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
		else
		{
			unk_0x0792909D8327DAEA(&(uParam0->f_13));
			fVar0 = unk_0xF2A1AF58CC57C564(1);
		}
	}
	else
	{
		unk_0x0792909D8327DAEA("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x6223D539BCD39E76(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xA6D2B267C377D7B2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x854FACC4E5F40C82(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0xF2A1AF58CC57C564(1);
	}
	if (fVar0 > ((0,1125f * 2f) - (0,006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0,006f * 2f));
	}
}

void func_64(var uParam0)//Position - 0x39FE
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_65()//Position - 0x3A7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (Global_67998 == 0)
	{
		return;
	}
	if (Global_68149 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		iVar3 = Global_67999[iVar0 /*9*/];
		bVar4 = !Global_56128[iVar3 /*13*/].f_7;
		bVar5 = Global_56128[iVar3 /*13*/].f_8;
		uVar6 = Global_56128[iVar3 /*13*/].f_12;
		fVar7 = Global_56128[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_70(iVar3, Global_67999[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_67999[iVar0 /*9*/].f_1;
			iVar10 = system::floor((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_68144 = iVar1;
	Global_68145 = iVar2;
	if (unk_0xDEC0EB6EAE9BC575())
	{
		if (Global_68148 == 0)
		{
			iVar11 = Global_68149;
			if (iVar11 == 90)
			{
				if (Global_104555.f_9055.f_99.f_205[func_69(0)] == 2)
				{
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					unk_0x9EE3C5408D4CD343(&vVar12);
					unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
					unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
					unk_0xEC4FA25E0FA458DA(126, 1, 0f);
					unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
					unk_0xEC4FA25E0FA458DA(135, func_68(810), 0f);
					unk_0xEC4FA25E0FA458DA(136, func_68(811), 0f);
					unk_0xEC4FA25E0FA458DA(132, func_68(812), 0f);
					unk_0xEC4FA25E0FA458DA(2, func_68(813), 0f);
					unk_0xEC4FA25E0FA458DA(141, func_68(814), 0f);
					unk_0xEC4FA25E0FA458DA(127, func_68(815), 0f);
					unk_0xEC4FA25E0FA458DA(137, func_68(816), 0f);
					unk_0xEC4FA25E0FA458DA(7, func_68(817), 0f);
					unk_0xEC4FA25E0FA458DA(133, func_68(818), 0f);
					unk_0xEC4FA25E0FA458DA(90, func_68(819), 0f);
					vVar12.x = 717;
					unk_0x9EE3C5408D4CD343(&vVar12);
					unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
					unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
					unk_0xEC4FA25E0FA458DA(126, 1, 0f);
					unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
					unk_0xEC4FA25E0FA458DA(135, func_68(810), 0f);
					unk_0xEC4FA25E0FA458DA(136, func_68(811), 0f);
					unk_0xEC4FA25E0FA458DA(132, func_68(812), 0f);
					unk_0xEC4FA25E0FA458DA(2, func_68(813), 0f);
					unk_0xEC4FA25E0FA458DA(141, func_68(814), 0f);
					unk_0xEC4FA25E0FA458DA(127, func_68(815), 0f);
					unk_0xEC4FA25E0FA458DA(137, func_68(816), 0f);
					unk_0xEC4FA25E0FA458DA(7, func_68(817), 0f);
					unk_0xEC4FA25E0FA458DA(133, func_68(818), 0f);
					unk_0xEC4FA25E0FA458DA(90, func_68(819), 0f);
				}
				else
				{
					func_67(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				vVar13.f_2.f_1 = 4;
				vVar13.x = 673;
				unk_0x9EE3C5408D4CD343(&vVar13);
				unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
				unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
				unk_0xEC4FA25E0FA458DA(126, 1, 0f);
				unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
				unk_0xEC4FA25E0FA458DA(142, func_68(413), 0f);
				unk_0xEC4FA25E0FA458DA(1, func_68(414), 0f);
				unk_0xEC4FA25E0FA458DA(87, func_68(415), 0f);
				unk_0xEC4FA25E0FA458DA(138, func_68(416), 0f);
				unk_0xEC4FA25E0FA458DA(133, func_68(417), 0f);
				unk_0xEC4FA25E0FA458DA(7, func_68(418), 0f);
				unk_0xEC4FA25E0FA458DA(90, func_68(419), 0f);
				unk_0xEC4FA25E0FA458DA(92, func_68(420), 0f);
				unk_0xEC4FA25E0FA458DA(5, func_68(421), 0f);
				unk_0xEC4FA25E0FA458DA(127, func_68(422), 0f);
				unk_0xEC4FA25E0FA458DA(139, func_68(423), 0f);
				unk_0xEC4FA25E0FA458DA(134, func_68(424), 0f);
				unk_0xEC4FA25E0FA458DA(141, func_68(425), 0f);
				unk_0xEC4FA25E0FA458DA(137, func_68(426), 0f);
				unk_0xEC4FA25E0FA458DA(132, func_68(427), 0f);
				unk_0xEC4FA25E0FA458DA(2, func_68(428), 0f);
				unk_0xEC4FA25E0FA458DA(140, 0, 0f);
				vVar13.x = 672;
				unk_0x9EE3C5408D4CD343(&vVar13);
				unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
				unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
				unk_0xEC4FA25E0FA458DA(126, 1, 0f);
				unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
				unk_0xEC4FA25E0FA458DA(142, func_68(413), 0f);
				unk_0xEC4FA25E0FA458DA(1, func_68(414), 0f);
				unk_0xEC4FA25E0FA458DA(87, func_68(415), 0f);
				unk_0xEC4FA25E0FA458DA(138, func_68(416), 0f);
				unk_0xEC4FA25E0FA458DA(133, func_68(417), 0f);
				unk_0xEC4FA25E0FA458DA(7, func_68(418), 0f);
				unk_0xEC4FA25E0FA458DA(90, func_68(419), 0f);
				unk_0xEC4FA25E0FA458DA(92, func_68(420), 0f);
				unk_0xEC4FA25E0FA458DA(5, func_68(421), 0f);
				unk_0xEC4FA25E0FA458DA(127, func_68(422), 0f);
				unk_0xEC4FA25E0FA458DA(139, func_68(423), 0f);
				unk_0xEC4FA25E0FA458DA(134, func_68(424), 0f);
				unk_0xEC4FA25E0FA458DA(141, func_68(425), 0f);
				unk_0xEC4FA25E0FA458DA(135, func_68(426), 0f);
				unk_0xEC4FA25E0FA458DA(132, func_68(427), 0f);
				unk_0xEC4FA25E0FA458DA(2, func_68(428), 0f);
				unk_0xEC4FA25E0FA458DA(140, 0, 0f);
			}
			else
			{
				func_67(iVar11);
			}
			Global_104555.f_9055.f_330[iVar11 /*6*/].f_4 = Global_68144;
		}
		else
		{
			func_66(Global_68149);
		}
	}
}

void func_66(var uParam0)//Position - 0x3FB7
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_67(int iParam0)//Position - 0x3FC7
{
	vector3 vVar0;
	struct<13> Var1;
	var uVar2;
	
	vVar0.f_2.f_1 = 4;
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return;
	}
	if (unk_0x15DBBAF9E2085C7A())
	{
		Var1 = { func_34(unk_0x9EB17624F44A8DA4()) };
		if (unk_0xA84F967541249268(&Var1))
		{
			if (unk_0x5CF21D71A8C4CFA6(&uVar2, 35, &Var1))
			{
				vVar0.y = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			vVar0.x = 577;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(0), 0f);
			unk_0xEC4FA25E0FA458DA(148, func_68(1), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(2), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(3), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(4), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(5), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(6), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(7), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(8), 0f);
			vVar0.x = 913;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(0), 0f);
			unk_0xEC4FA25E0FA458DA(148, func_68(1), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(2), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(3), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(4), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(5), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(6), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(7), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(8), 0f);
			return;
		
		case 1:
			vVar0.x = 576;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(9), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(10), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(11), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(12), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(13), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(14), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(15), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(16), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(17), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(18), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(19), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(20), 0f);
			vVar0.x = 575;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(9), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(10), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(11), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(12), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(13), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(14), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(15), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(16), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(17), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(18), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(19), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(20), 0f);
			return;
		
		case 2:
			vVar0.x = 579;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(21), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(22), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(23), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(24), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(25), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(26), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(27), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(28), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(29), 0f);
			vVar0.x = 578;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(21), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(22), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(23), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(24), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(25), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(26), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(27), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(28), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(29), 0f);
			return;
		
		case 3:
			vVar0.x = 797;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(30), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(31), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(32), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(33), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(34), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(35), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(36), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(37), 0f);
			vVar0.x = 796;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(30), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(31), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(32), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(33), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(34), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(35), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(36), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(37), 0f);
			return;
		
		case 4:
			vVar0.x = 799;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(43), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(44), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(45), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(46), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(47), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(48), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(49), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(50), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(51), 0f);
			vVar0.x = 798;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(43), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(44), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(45), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(46), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(47), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(48), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(49), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(50), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(51), 0f);
			return;
		
		case 5:
			vVar0.x = 801;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(57), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(58), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(59), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(60), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(61), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(62), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(63), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(64), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(65), 0f);
			vVar0.x = 800;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(57), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(58), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(59), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(60), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(61), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(62), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(63), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(64), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(65), 0f);
			return;
		
		case 6:
			vVar0.x = 803;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(71), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(72), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(73), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(74), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(75), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(76), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(77), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(78), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(79), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(80), 0f);
			vVar0.x = 802;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(71), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(72), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(73), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(74), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(75), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(76), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(77), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(78), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(79), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(80), 0f);
			return;
		
		case 7:
			vVar0.x = 805;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(86), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(87), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(88), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(89), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(90), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(91), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(92), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(93), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(94), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(95), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(96), 0f);
			vVar0.x = 804;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(86), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(87), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(88), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(89), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(90), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(91), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(92), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(93), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(94), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(95), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(96), 0f);
			return;
		
		case 9:
			vVar0.x = 639;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(102), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(103), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(104), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(105), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(106), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(107), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(108), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(109), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(110), 0f);
			vVar0.x = 638;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(102), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(103), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(104), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(105), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(106), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(107), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(108), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(109), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(110), 0f);
			return;
		
		case 8:
			vVar0.x = 641;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(111), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(112), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(113), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(114), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(115), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(116), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(117), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(118), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(119), 0f);
			vVar0.x = 640;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(111), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(112), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(113), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(114), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(115), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(116), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(117), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(118), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(119), 0f);
			return;
		
		case 10:
			vVar0.x = 646;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(120), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(121), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(122), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(123), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(124), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(125), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(126), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(127), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(128), 0f);
			vVar0.x = 645;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(120), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(121), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(122), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(123), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(124), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(125), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(126), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(127), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(128), 0f);
			return;
		
		case 11:
			vVar0.x = 671;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(129), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(130), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(131), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(132), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(133), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(134), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(135), 0f);
			vVar0.x = 670;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(129), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(130), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(131), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(132), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(133), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(134), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(135), 0f);
			return;
		
		case 12:
			vVar0.x = 603;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(136), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(137), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(138), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(139), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(140), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(141), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(142), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(143), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(144), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(145), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(146), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(147), 0f);
			vVar0.x = 602;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(136), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(137), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(138), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(139), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(140), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(141), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(142), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(143), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(144), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(145), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(146), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(147), 0f);
			return;
		
		case 13:
			vVar0.x = 605;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(148), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(149), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(150), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(151), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(152), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(153), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(154), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(155), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(156), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(157), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(158), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(159), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(160), 0f);
			vVar0.x = 604;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(148), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(149), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(150), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(151), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(152), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(153), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(154), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(155), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(156), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(157), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(158), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(159), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(160), 0f);
			return;
		
		case 14:
			vVar0.x = 648;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(161), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(162), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(163), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(164), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(165), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(166), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(167), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(168), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(169), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(170), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(171), 0f);
			vVar0.x = 647;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(161), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(162), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(163), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(164), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(165), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(166), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(167), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(168), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(169), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(170), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(171), 0f);
			return;
		
		case 15:
			vVar0.x = 650;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(172), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(173), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(174), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(175), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(176), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(177), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(178), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(179), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(180), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(181), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(182), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(183), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(184), 0f);
			vVar0.x = 649;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(172), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(173), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(174), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(175), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(176), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(177), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(178), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(179), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(180), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(181), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(182), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(183), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(184), 0f);
			return;
		
		case 16:
			vVar0.x = 656;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(185), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(186), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(187), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(188), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(189), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(190), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(191), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(192), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(193), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(194), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(195), 0f);
			vVar0.x = 655;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(185), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(186), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(187), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(188), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(189), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(190), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(191), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(192), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(193), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(194), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(195), 0f);
			return;
		
		case 17:
			vVar0.x = 583;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(196), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(197), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(198), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(199), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(200), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(201), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(202), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(203), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(204), 0f);
			vVar0.x = 582;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(196), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(197), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(198), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(199), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(200), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(201), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(202), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(203), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(204), 0f);
			return;
		
		case 18:
			vVar0.x = 585;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(205), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(206), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(207), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(208), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(209), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(210), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(211), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(212), 0f);
			unk_0xEC4FA25E0FA458DA(140, func_68(213), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(214), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(215), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(216), 0f);
			vVar0.x = 584;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(205), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(206), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(207), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(208), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(209), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(210), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(211), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(212), 0f);
			unk_0xEC4FA25E0FA458DA(140, func_68(213), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(214), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(215), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(216), 0f);
			return;
		
		case 19:
			vVar0.x = 587;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(217), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(218), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(219), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(220), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(221), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(222), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(223), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(224), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(225), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(226), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(227), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(228), 0f);
			vVar0.x = 586;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(217), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(218), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(219), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(220), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(221), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(222), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(223), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(224), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(225), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(226), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(227), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(228), 0f);
			return;
		
		case 20:
			vVar0.x = 609;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(229), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(230), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(231), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(232), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(233), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(234), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(235), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(236), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(237), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(238), 0f);
			vVar0.x = 608;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(229), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(230), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(231), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(232), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(233), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(234), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(235), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(236), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(237), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(238), 0f);
			return;
		
		case 21:
			vVar0.x = 621;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(239), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(240), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(241), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(242), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(243), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(244), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(245), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(246), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(247), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(248), 0f);
			vVar0.x = 620;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(239), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(240), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(241), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(242), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(243), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(244), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(245), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(246), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(247), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(248), 0f);
			return;
		
		case 22:
			vVar0.x = 675;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(249), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(250), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(251), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(252), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(253), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(254), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(255), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(256), 0f);
			vVar0.x = 674;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(249), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(250), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(251), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(252), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(253), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(254), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(255), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(256), 0f);
			return;
		
		case 26:
			vVar0.x = 712;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(257), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(258), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(259), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(260), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(261), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(262), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(263), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(264), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(265), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(266), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(267), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(268), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(269), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(270), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(271), 0f);
			unk_0xEC4FA25E0FA458DA(103, func_68(272), 0f);
			vVar0.x = 711;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(257), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(258), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(259), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(260), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(261), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(262), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(263), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(264), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(265), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(266), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(267), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(268), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(269), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(270), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(271), 0f);
			unk_0xEC4FA25E0FA458DA(103, func_68(272), 0f);
			return;
		
		case 29:
			vVar0.x = 611;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(273), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(274), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(275), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(276), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(277), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(278), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(279), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(280), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(281), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(282), 0f);
			vVar0.x = 610;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(273), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(274), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(275), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(276), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(277), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(278), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(279), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(280), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(281), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			vVar0.x = 615;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(283), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(284), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(285), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(286), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(287), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(288), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(289), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(290), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(291), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(292), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(293), 0f);
			vVar0.x = 614;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(283), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(284), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(285), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(286), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(287), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(288), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(289), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(290), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(291), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(292), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(293), 0f);
			return;
		
		case 31:
			vVar0.x = 623;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(294), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(295), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(296), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(297), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(298), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(299), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(300), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(301), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(302), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(303), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(304), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(305), 0f);
			vVar0.x = 622;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(294), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(295), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(296), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(297), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(298), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(299), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(300), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(301), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(302), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(303), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(304), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(305), 0f);
			return;
		
		case 38:
			vVar0.x = 627;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(306), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(307), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(308), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(309), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(310), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(311), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(312), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(313), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(314), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(315), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(316), 0f);
			vVar0.x = 626;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(306), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(307), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(308), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(309), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(310), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(311), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(312), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(313), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(314), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(315), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(316), 0f);
			return;
		
		case 33:
			vVar0.x = 741;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(317), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(318), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(319), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(320), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(321), 0f);
			vVar0.x = 740;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(317), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(318), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(319), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(320), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(321), 0f);
			return;
		
		case 34:
			vVar0.x = 745;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(322), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(323), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(324), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(325), 0f);
			vVar0.x = 742;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(322), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(323), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(324), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(325), 0f);
			return;
		
		case 39:
			vVar0.x = 658;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(326), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(327), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(328), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(329), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(330), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(331), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(332), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(333), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(334), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(335), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(336), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(337), 0f);
			vVar0.x = 657;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(326), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(327), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(328), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(329), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(330), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(331), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(332), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(333), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(334), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(335), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(336), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(337), 0f);
			return;
		
		case 40:
			vVar0.x = 581;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(338), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(339), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(340), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(341), 0f);
			unk_0xEC4FA25E0FA458DA(140, func_68(342), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(343), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(344), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(345), 0f);
			vVar0.x = 580;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(338), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(339), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(340), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(341), 0f);
			unk_0xEC4FA25E0FA458DA(140, func_68(342), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(343), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(344), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(345), 0f);
			return;
		
		case 41:
			vVar0.x = 619;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(346), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(347), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(348), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(349), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(350), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(351), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(352), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(353), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(354), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(355), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(356), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(357), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(358), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(359), 0f);
			vVar0.x = 618;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(346), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(347), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(348), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(349), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(350), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(351), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(352), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(353), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(354), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(355), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(356), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(357), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(358), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(359), 0f);
			return;
		
		case 42:
			vVar0.x = 704;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(360), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(361), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(362), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(363), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(364), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(365), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(366), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(367), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(368), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(369), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(370), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(371), 0f);
			vVar0.x = 703;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(360), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(361), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(362), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(363), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(364), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(365), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(366), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(367), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(368), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(369), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(370), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(371), 0f);
			return;
		
		case 43:
			vVar0.x = 593;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(372), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(373), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(374), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(375), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(376), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(377), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(378), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(379), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(380), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(381), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(382), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(383), 0f);
			vVar0.x = 592;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(372), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(373), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(374), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(375), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(376), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(377), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(378), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(379), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(380), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(381), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(382), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(383), 0f);
			return;
		
		case 44:
			vVar0.x = 589;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(384), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(385), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(386), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(387), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(388), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(389), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(390), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(391), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(392), 0f);
			vVar0.x = 588;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(384), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(385), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(386), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(387), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(388), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(389), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(390), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(391), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(392), 0f);
			return;
		
		case 45:
			vVar0.x = 635;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(393), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(394), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(395), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(396), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(397), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(398), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(399), 0f);
			vVar0.x = 634;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(393), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(394), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(395), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(396), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(397), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(398), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(399), 0f);
			return;
		
		case 46:
			vVar0.x = 669;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(400), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(401), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(402), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(403), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(404), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(405), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(406), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(407), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(408), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(409), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(410), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(411), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(412), 0f);
			vVar0.x = 668;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(400), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(401), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(402), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(403), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(404), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(405), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(406), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(407), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(408), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(409), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(410), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(411), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(412), 0f);
			return;
		
		case 47:
			vVar0.x = 673;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(413), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(414), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(415), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(416), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(417), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(418), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(419), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(420), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(421), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(422), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(423), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(424), 0f);
			unk_0xEC4FA25E0FA458DA(141, func_68(425), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(426), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(427), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(428), 0f);
			vVar0.x = 672;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(413), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(414), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(415), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(416), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(417), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(418), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(419), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(420), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(421), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(422), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(423), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(424), 0f);
			unk_0xEC4FA25E0FA458DA(141, func_68(425), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(426), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(427), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(428), 0f);
			return;
		
		case 48:
			vVar0.x = 694;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(429), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(430), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(431), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(432), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(433), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(434), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(435), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(436), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(437), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(438), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(439), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(440), 0f);
			vVar0.x = 693;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(429), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(430), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(431), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(432), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(433), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(434), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(435), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(436), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(437), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(438), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(439), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(440), 0f);
			return;
		
		case 49:
			vVar0.x = 702;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(441), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(442), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(443), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(444), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(445), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(446), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(447), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(448), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(449), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(450), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(451), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(452), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(453), 0f);
			vVar0.x = 701;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(441), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(442), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(443), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(444), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(445), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(446), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(447), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(448), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(449), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(450), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(451), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(452), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(453), 0f);
			return;
		
		case 53:
			vVar0.x = 714;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(454), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(455), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(456), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(457), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(458), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(459), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(460), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(461), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(462), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(463), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(464), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(465), 0f);
			vVar0.x = 713;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(454), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(455), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(456), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(457), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(458), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(459), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(460), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(461), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(462), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(463), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(464), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(465), 0f);
			return;
		
		case 60:
			vVar0.x = 809;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(466), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(467), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(468), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(469), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(470), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(471), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(472), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(473), 0f);
			vVar0.x = 808;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(466), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(467), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(468), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(469), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(470), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(471), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(472), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(473), 0f);
			return;
		
		case 61:
			vVar0.x = 637;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(474), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(475), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(476), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(477), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(478), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(479), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(480), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(481), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(482), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(483), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(484), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(485), 0f);
			vVar0.x = 636;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(474), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(475), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(476), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(477), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(478), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(479), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(480), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(481), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(482), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(483), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(484), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(485), 0f);
			return;
		
		case 62:
			vVar0.x = 599;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(486), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(487), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(488), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(489), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(490), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(491), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(492), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(493), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(494), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(495), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(496), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(497), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(498), 0f);
			vVar0.x = 598;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(486), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(487), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(488), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(489), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(490), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(491), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(492), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(493), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(494), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(495), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(496), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(497), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(498), 0f);
			return;
		
		case 63:
			vVar0.x = 601;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(499), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(500), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(501), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(502), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(503), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(504), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(505), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(506), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(507), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(508), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(509), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(510), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(511), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(512), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(513), 0f);
			unk_0xEC4FA25E0FA458DA(9, func_68(514), 0f);
			vVar0.x = 600;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(499), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(500), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(501), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(502), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(503), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(504), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(505), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(506), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(507), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(508), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(509), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(510), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(511), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(512), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(513), 0f);
			unk_0xEC4FA25E0FA458DA(9, func_68(514), 0f);
			return;
		
		case 64:
			vVar0.x = 607;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(515), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(516), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(517), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(518), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(519), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(520), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(521), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(522), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(523), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(524), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(525), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(526), 0f);
			vVar0.x = 606;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(515), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(516), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(517), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(518), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(519), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(520), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(521), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(522), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(523), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(524), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(525), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(526), 0f);
			return;
		
		case 66:
			vVar0.x = 680;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(527), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(528), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(529), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(530), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(531), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(532), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(533), 0f);
			vVar0.x = 676;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(527), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(528), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(529), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(530), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(531), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(532), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(533), 0f);
			return;
		
		case 67:
			vVar0.x = 679;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(534), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(535), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(536), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(537), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(538), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(539), 0f);
			vVar0.x = 678;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(534), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(535), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(536), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(537), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(538), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(539), 0f);
			return;
		
		case 68:
			vVar0.x = 725;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(540), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(541), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(542), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(543), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(544), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(545), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(546), 0f);
			vVar0.x = 724;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(540), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(541), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(542), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(543), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(544), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(545), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			vVar0.x = 686;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(547), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(548), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(549), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(550), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(551), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(552), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(553), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(554), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(555), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(556), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(557), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(558), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(559), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(560), 0f);
			vVar0.x = 681;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(547), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(548), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(549), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(550), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(551), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(552), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(553), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(554), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(555), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(556), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(557), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(558), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(559), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(560), 0f);
			return;
		
		case 70:
			vVar0.x = 721;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(561), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(562), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(563), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(564), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(565), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(566), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(567), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(568), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(569), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(570), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(571), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(572), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(573), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(574), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(575), 0f);
			vVar0.x = 720;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(561), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(562), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(563), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(564), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(565), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(566), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(567), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(568), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(569), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(570), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(571), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(572), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(573), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(574), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(575), 0f);
			return;
		
		case 71:
			vVar0.x = 617;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(576), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(577), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(578), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(579), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(580), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(581), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(582), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(583), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(584), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(585), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(586), 0f);
			vVar0.x = 616;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(576), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(577), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(578), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(579), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(580), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(581), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(582), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(583), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(584), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(585), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(586), 0f);
			return;
		
		case 72:
			vVar0.x = 727;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(587), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(588), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(589), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(590), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(591), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(592), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(593), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(594), 0f);
			vVar0.x = 726;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(587), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(588), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(589), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(590), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(591), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(592), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(593), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(594), 0f);
			return;
		
		case 73:
			vVar0.x = 729;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(595), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(596), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(597), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(598), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(599), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(600), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(601), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(602), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(603), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(604), 0f);
			vVar0.x = 728;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(595), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(596), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(597), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(598), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(599), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(600), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(601), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(602), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(603), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(604), 0f);
			return;
		
		case 74:
			vVar0.x = 625;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(605), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(606), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(607), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(608), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(609), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(610), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(611), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(612), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(613), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(614), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(615), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(616), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(617), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(618), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(619), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(620), 0f);
			vVar0.x = 624;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(605), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(606), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(607), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(608), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(609), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(610), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(611), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(612), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(613), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(614), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(615), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(616), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(617), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(618), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(619), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(620), 0f);
			return;
		
		case 75:
			vVar0.x = 719;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(621), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(622), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(623), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(624), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(625), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(626), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(627), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(628), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(629), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(630), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(631), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(632), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(633), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(634), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(635), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(636), 0f);
			vVar0.x = 718;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(621), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(622), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(623), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(624), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(625), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(626), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(627), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(628), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(629), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(630), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(631), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(632), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(633), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(634), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(635), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(636), 0f);
			return;
		
		case 76:
			vVar0.x = 667;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(637), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(638), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(639), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(640), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(641), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(642), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(643), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(644), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(645), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(646), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(647), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(648), 0f);
			vVar0.x = 666;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(637), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(638), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(639), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(640), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(641), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(642), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(643), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(644), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(645), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(646), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(647), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(648), 0f);
			return;
		
		case 78:
			vVar0.x = 735;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(649), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(650), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(651), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(652), 0f);
			vVar0.x = 734;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(649), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(650), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(651), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(652), 0f);
			return;
		
		case 79:
			vVar0.x = 737;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(653), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(654), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(655), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(656), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(657), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(658), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(659), 0f);
			vVar0.x = 736;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(653), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(654), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(655), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(656), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(657), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(658), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(659), 0f);
			return;
		
		case 84:
			vVar0.x = 706;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(660), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(661), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(662), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(663), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(664), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(665), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(666), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(667), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(668), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(669), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(670), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(671), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(672), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(673), 0f);
			vVar0.x = 705;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(660), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(661), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(662), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(663), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(664), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(665), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(666), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(667), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(668), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(669), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(670), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(671), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(672), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(673), 0f);
			return;
		
		case 85:
			vVar0.x = 723;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(674), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(675), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(676), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(677), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(678), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(679), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(680), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(681), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(682), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(683), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(684), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(685), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(686), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(687), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(688), 0f);
			vVar0.x = 722;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(674), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(675), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(676), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(677), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(678), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(679), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(680), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(681), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(682), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(683), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(684), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(685), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(686), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(687), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(688), 0f);
			return;
		
		case 86:
			vVar0.x = 595;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(689), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(690), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(691), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(692), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(693), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(694), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(695), 0f);
			vVar0.x = 594;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(689), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(690), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(691), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(692), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(693), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(694), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(695), 0f);
			return;
		
		case 87:
			vVar0.x = 731;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(696), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(697), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(698), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(699), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(700), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(701), 0f);
			vVar0.x = 730;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(696), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(697), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(698), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(699), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(700), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(701), 0f);
			return;
		
		case 88:
			vVar0.x = 733;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(702), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(703), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(704), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(705), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(706), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(707), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(708), 0f);
			vVar0.x = 732;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(702), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(703), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(704), 0f);
			unk_0xEC4FA25E0FA458DA(139, func_68(705), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(706), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(707), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(708), 0f);
			return;
		
		case 91:
			vVar0.x = 652;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(709), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(710), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(711), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(712), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(713), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(714), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(715), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(716), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(717), 0f);
			vVar0.x = 651;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(709), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(710), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(711), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(712), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(713), 0f);
			unk_0xEC4FA25E0FA458DA(142, func_68(714), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(715), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(716), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(717), 0f);
			return;
		
		case 92:
			vVar0.x = 739;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(718), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(719), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(720), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(721), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(722), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(723), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(724), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(725), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(726), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(727), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(728), 0f);
			vVar0.x = 738;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(718), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(719), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(720), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(721), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(722), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(723), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(724), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(725), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(726), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(727), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(728), 0f);
			return;
		
		case 93:
			vVar0.x = 654;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(729), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(730), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(731), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(732), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(733), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(734), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(735), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(736), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(737), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(738), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(739), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(740), 0f);
			vVar0.x = 653;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(729), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(730), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(731), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(732), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(733), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(734), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(735), 0f);
			unk_0xEC4FA25E0FA458DA(87, func_68(736), 0f);
			unk_0xEC4FA25E0FA458DA(1, func_68(737), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(738), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(739), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(740), 0f);
			return;
		
		case 90:
			vVar0.x = 597;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(810), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(811), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(812), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(813), 0f);
			unk_0xEC4FA25E0FA458DA(141, func_68(814), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(815), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(816), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(817), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(818), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(819), 0f);
			vVar0.x = 596;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(810), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(811), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(812), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(813), 0f);
			unk_0xEC4FA25E0FA458DA(141, func_68(814), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(815), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(816), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(817), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(818), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(819), 0f);
			return;
		
		case 36:
			vVar0.x = 831;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(820), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(821), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(822), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(823), 0f);
			vVar0.x = 832;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(820), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(821), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(822), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(823), 0f);
			return;
		
		case 37:
			vVar0.x = 833;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(824), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(825), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(826), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(827), 0f);
			vVar0.x = 834;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(824), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(825), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(826), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(827), 0f);
			return;
		
		case 24:
			vVar0.x = 848;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(846), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(847), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(848), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(849), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(850), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(851), 0f);
			vVar0.x = 847;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(846), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(847), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(848), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(849), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(850), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(851), 0f);
			return;
		
		case 25:
			vVar0.x = 846;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(852), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(853), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(854), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(855), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(856), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(857), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(858), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(859), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(860), 0f);
			vVar0.x = 845;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(852), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(853), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(854), 0f);
			unk_0xEC4FA25E0FA458DA(5, func_68(855), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(856), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(857), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(858), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(859), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(860), 0f);
			return;
		
		case 59:
			vVar0.x = 807;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(861), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(862), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(863), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(864), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(865), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(866), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(867), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(868), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(869), 0f);
			vVar0.x = 806;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(861), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(862), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(863), 0f);
			unk_0xEC4FA25E0FA458DA(135, func_68(864), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(865), 0f);
			unk_0xEC4FA25E0FA458DA(136, func_68(866), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(867), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(868), 0f);
			unk_0xEC4FA25E0FA458DA(137, func_68(869), 0f);
			return;
		
		case 65:
			vVar0.x = 838;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(870), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(871), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(872), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(873), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(874), 0f);
			vVar0.x = 837;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(870), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(871), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(872), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(873), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			vVar0.x = 917;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(875), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(876), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(877), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(878), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(879), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(880), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(881), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(882), 0f);
			vVar0.x = 916;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(875), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(876), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(877), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(878), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(879), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(880), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(881), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(882), 0f);
			return;
		
		case 81:
			vVar0.x = 919;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(883), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(884), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(885), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(886), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(887), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(888), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(889), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(890), 0f);
			vVar0.x = 918;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(883), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(884), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(885), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(886), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(887), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(888), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(889), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(890), 0f);
			return;
		
		case 82:
			vVar0.x = 921;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(891), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(892), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(893), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(894), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(895), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(896), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(897), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(898), 0f);
			vVar0.x = 920;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(891), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(892), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(893), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(894), 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(895), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(896), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(897), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(898), 0f);
			return;
		
		case 83:
			vVar0.x = 923;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(899), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(900), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(901), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(902), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(903), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(904), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(905), 0f);
			vVar0.x = 922;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(899), 0f);
			unk_0xEC4FA25E0FA458DA(134, func_68(900), 0f);
			unk_0xEC4FA25E0FA458DA(92, func_68(901), 0f);
			unk_0xEC4FA25E0FA458DA(133, func_68(902), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(903), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(904), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(905), 0f);
			return;
		
		case 89:
			vVar0.x = 925;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(906), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(907), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(908), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(909), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(910), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(911), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(912), 0f);
			vVar0.x = 924;
			unk_0x9EE3C5408D4CD343(&vVar0);
			unk_0xEC4FA25E0FA458DA(131, Global_68144, 0f);
			unk_0xEC4FA25E0FA458DA(162, Global_68145, 0f);
			unk_0xEC4FA25E0FA458DA(126, 1, 0f);
			unk_0xEC4FA25E0FA458DA(161, Global_68147, 0f);
			unk_0xEC4FA25E0FA458DA(138, func_68(906), 0f);
			unk_0xEC4FA25E0FA458DA(2, func_68(907), 0f);
			unk_0xEC4FA25E0FA458DA(7, func_68(908), 0f);
			unk_0xEC4FA25E0FA458DA(127, func_68(909), 0f);
			unk_0xEC4FA25E0FA458DA(95, func_68(910), 0f);
			unk_0xEC4FA25E0FA458DA(90, func_68(911), 0f);
			unk_0xEC4FA25E0FA458DA(132, func_68(912), 0f);
			return;
		
		default:
	}
}

int func_68(int iParam0)//Position - 0xB6E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_104555.f_1.f_126[Global_55907 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_104555.f_1.f_126[Global_55907 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] == iParam0)
		{
			return Global_67999[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0xB77B
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)//Position - 0xB7D0
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_56128[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_104555.f_24874[4 /*4*/] == func_58())
	{
		Global_56128[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_56128[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_56128[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_56128[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0)//Position - 0xB89A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_55893)
	{
		Global_55908 = 0;
		return;
	}
	iLocal_61 = 0;
	iLocal_62 = 0;
	iVar0 = 0;
	if (func_95(0))
	{
		unk_0x11C4A185C1E96BD1();
		Global_55895 = 1;
		unk_0xFB2E94CEEEC70C3B(33, 33);
	}
	iVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		switch (Global_67999[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_67999[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_82(uParam0, iVar0))
		{
		}
		if (Global_67999[iVar0 /*9*/] >= 0)
		{
			if (!Global_56128[Global_67999[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_67999[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_67999[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_67999[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_68147 = iLocal_61;
	fVar3 = func_77(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_95(0))
	{
		unk_0x8BC81FBAA8C71BD3(Global_68149);
		unk_0x8BC81FBAA8C71BD3(system::round(fVar3));
		if (bVar2)
		{
			unk_0x8BC81FBAA8C71BD3(1);
		}
		else
		{
			unk_0x8BC81FBAA8C71BD3(0);
		}
		if (Global_68148)
		{
			unk_0x8BC81FBAA8C71BD3(1);
		}
		else
		{
			unk_0x8BC81FBAA8C71BD3(0);
		}
		unk_0x4BFCAF0C1279D821();
		Global_55895 = 0;
	}
	Global_55908 = 0;
	if (iVar1 > -1)
	{
		fVar3 = system::to_float(iVar1);
	}
	func_72(fVar3, bVar2);
}

void func_72(float fParam0, bool bParam1)//Position - 0xBA0D
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68148)
	{
		iVar1 = Global_68149;
		fVar0 = func_76(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_104555.f_9986.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_75(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_68149 == -1)
	{
	}
	else
	{
		iVar2 = Global_68149;
		fVar0 = func_74(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_104555.f_9986.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_73(iVar2, fParam0, bParam1);
		}
	}
}

void func_73(int iParam0, float fParam1, bool bParam2)//Position - 0xBABE
{
	if (bParam2)
	{
		Global_104555.f_9055.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_104555.f_9055.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25242 = 1;
}

float func_74(int iParam0)//Position - 0xBAF9
{
	return Global_104555.f_9055.f_330[iParam0 /*6*/].f_5;
}

void func_75(int iParam0, float fParam1, bool bParam2)//Position - 0xBB11
{
	if (bParam2)
	{
		Global_104555.f_18544[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_104555.f_18544[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25242 = 1;
}

var func_76(int iParam0)//Position - 0xBB46
{
	return Global_104555.f_18544[iParam0 /*6*/].f_5;
}

float func_77(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBB5B
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_81(iParam1, iParam2, 0);
	iVar1 = func_80(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_79(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_78(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_78(iVar1))
	{
		case 109:
			func_79(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_79(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_79(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2, 0);
			break;
	}
	return fVar0;
}

int func_78(int iParam0)//Position - 0xBC3D
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBC79
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

int func_80(float fParam0)//Position - 0xBCB4
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0xBCE9
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (system::to_float(iParam0) / system::to_float(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = system::to_float(system::ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_82(var uParam0, int iParam1)//Position - 0xBD48
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_67999[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_56128[Global_67999[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_67999[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 9)
	{
		Global_67999[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 14)
	{
		Global_67999[iParam1 /*9*/].f_1 = system::floor(Global_67999[iParam1 /*9*/].f_2);
	}
	if (func_70(Global_67999[iParam1 /*9*/], Global_67999[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_67999[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = system::to_float(system::floor(((system::to_float(Global_67999[iParam1 /*9*/].f_1) / system::to_float(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_85(Var2.f_4);
	iVar4 = 0;
	switch (Global_67999[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_67999[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_67999[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_84(Global_67999[iParam1 /*9*/].f_1, Global_67999[iParam1 /*9*/]);
			}
		}
		else if ((Global_67999[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_84(Global_67999[iParam1 /*9*/].f_1, Global_67999[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_67999[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_83(Global_67999[iParam1 /*9*/]);
	if (Global_67999[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_95(0))
		{
			func_84(-1, Global_67999[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_67999[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_67999[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_67999[iParam1 /*9*/].f_3;
		func_90(uParam0, 6, sVar7, sVar8, Global_67999[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2)
		{
			case 1:
				func_90(uParam0, 8, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_90(uParam0, 9, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_90(uParam0, 0, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_90(uParam0, 9, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_90(uParam0, 11, sVar7, "", system::ceil(((system::to_float(Global_67999[iParam1 /*9*/].f_1) / system::to_float(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_90(uParam0, 0, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_90(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				iVar9 = Global_67999[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_90(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_90(uParam0, 11, sVar7, "", system::round(Global_67999[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_90(uParam0, 1, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_90(uParam0, 11, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_90(uParam0, 12, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_90(uParam0, 3, sVar7, "", Global_67999[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_83(int iParam0)//Position - 0xC249
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_84(int iParam0, int iParam1)//Position - 0xD3FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_56128[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_56128[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	unk_0xBFFF62F75445099D(iVar0, iVar1, 1);
	if (func_95(0) && Global_55895)
	{
		unk_0x8BC81FBAA8C71BD3(iVar0);
		unk_0x8BC81FBAA8C71BD3(iParam0);
		unk_0x8BC81FBAA8C71BD3(iParam1);
	}
}

int func_85(int iParam0)//Position - 0xD453
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0xFA3CE529DBB66C85(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_86(int iParam0)//Position - 0xD47C
{
	return unk_0xC80D31E4B587871C(Global_104555.f_1.f_118, iParam0);
}

int func_87(int iParam0)//Position - 0xD492
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_205[iParam0];
}

int func_88(int iParam0)//Position - 0xD4BF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_89(int iParam0)//Position - 0xD510
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_90(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD57E
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_91(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xD5F1
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_92(int iParam0)//Position - 0xD614
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
	
	if (Global_89198.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_104555.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_104555.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_104555.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_104555.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_104555.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_104555.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_87(func_69(iParam0));
	iVar1 = Global_104555.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_94(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_94(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_104555.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_89208[iParam0 /*38*/].f_37)
	{
		if (Global_89208[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_89208[iParam0 /*38*/].f_31[iVar2]);
			Global_104555.f_1.f_126[iParam0 /*23*/].f_1 = (Global_104555.f_1.f_126[iParam0 /*23*/].f_1 - Global_89208[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = system::floor((system::to_float(Global_104555.f_1.f_126[iParam0 /*23*/].f_1) * 0,78f));
		func_94(iParam0, 3, iVar4);
		Global_104555.f_1.f_126[iParam0 /*23*/].f_1 = (Global_104555.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_104555.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_104555.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_104555.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = system::ceil(((system::to_float(Global_88853[iVar5 /*5*/].f_1) * 0,01f) * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_104555.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = system::ceil(((system::to_float(Global_88853[iVar5 /*5*/].f_1) * 0,015f) * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_89007[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_104555.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_104555.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_104555.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_104555.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_89198.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_104555.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_104555.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_104555.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_104555.f_1.f_126[0 /*23*/].f_2[1] = system::ceil((0,12f * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_104555.f_1.f_126[0 /*23*/].f_2[1]);
			Global_89198.f_7 = system::ceil((0,14f * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89198.f_7);
			Global_89198.f_6 = 14f;
			Global_104555.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_104555.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_104555.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_104555.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_104555.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_104555.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_104555.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_89198.f_6 = -1f;
			break;
		
		case 2:
			Global_104555.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_104555.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_104555.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_89198.f_7 = system::ceil((0,12f * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89198.f_7);
			Global_89198.f_6 = 12f;
			Global_104555.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_104555.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_104555.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_89198.f_6 = 0f;
			break;
		
		case 3:
			Global_104555.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_104555.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_104555.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_89198.f_7 = system::ceil((0,12f * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89198.f_7);
			Global_89198.f_6 = 12f;
			Global_104555.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_104555.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_104555.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_104555.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_89198.f_7 = system::ceil((0,12f * IntToFloat(Global_104555.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_89198.f_7);
			Global_89198.f_6 = 12f;
			Global_104555.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_104555.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_104555.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_89198.f_6 = 0f;
			break;
	}
	iVar6 = Global_104555.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_104555.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_104555.f_1.f_126[iParam0 /*23*/].f_6[0] = ((system::to_float(Global_104555.f_1.f_126[iParam0 /*23*/].f_2[0]) / system::to_float(iVar6)) * 100f);
	}
	if (Global_104555.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_104555.f_1.f_126[iParam0 /*23*/].f_6[1] = ((system::to_float(Global_104555.f_1.f_126[iParam0 /*23*/].f_2[1]) / system::to_float(iVar6)) * 100f);
	}
	if (Global_104555.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_104555.f_1.f_126[iParam0 /*23*/].f_6[2] = ((system::to_float(Global_104555.f_1.f_126[iParam0 /*23*/].f_2[2]) / system::to_float(iVar6)) * 100f);
	}
	if (Global_89198.f_6 != -1f)
	{
		Global_89198.f_6 = ((system::to_float(Global_89198.f_7) / system::to_float(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0xBFFF62F75445099D(joaat("jewel_heist_raw_take"), Global_104555.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_104555.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_93(810, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_93(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_87(8))
			{
				case 3:
					func_93(610, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_93(611, iVar7, 1);
					break;
				
				case 4:
					func_93(622, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_93(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_93(734, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_93(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_87(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_87(11))
			{
				case 8:
					func_93(664, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_93(671, iVar7, 1);
					break;
				
				case 9:
					func_93(674, Global_104555.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_93(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_89198.f_3 = 1;
	Global_55903 = 0;
}

void func_93(int iParam0, int iParam1, bool bParam2)//Position - 0xDF15
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67999[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67999[iVar0 /*9*/].f_1 = (Global_67999[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67999[iVar0 /*9*/] != -1)
	{
		if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67999[iVar0 /*9*/].f_1 > 1)
			{
				Global_67999[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67999[iVar0 /*9*/].f_1 < 0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_94(int iParam0, int iParam1, int iParam2)//Position - 0xDFBF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_89208[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_89208[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_89208[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_89208[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_89208[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0xBFFF62F75445099D(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0xBFFF62F75445099D(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0xBFFF62F75445099D(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0xBFFF62F75445099D(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_89208[iParam0 /*38*/].f_25[Global_89208[iParam0 /*38*/].f_37] = iParam1;
	Global_89208[iParam0 /*38*/].f_31[Global_89208[iParam0 /*38*/].f_37] = iVar0;
	Global_89208[iParam0 /*38*/].f_37++;
}

bool func_95(bool bParam0)//Position - 0xE177
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_96()//Position - 0xE1A2
{
	int iVar0;
	int iVar1;
	
	if (Global_67998 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_67999[iVar0 /*9*/].f_2 != 0f)
			{
				Global_67999[iVar0 /*9*/].f_1 = system::floor(Global_67999[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_67999[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_56128[iVar1 /*13*/] == 9)
			{
				Global_67999[iVar0 /*9*/].f_1 = system::round(fLocal_68);
			}
			if (Global_56128[iVar1 /*13*/] == 15)
			{
				Global_67999[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_97()//Position - 0xE249
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_55922)
	{
		return;
	}
	Global_55922 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_55926);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_55925);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_55928));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_55927));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_55930));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_55929));
	system::wait(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = system::to_float(iVar0);
		fVar4 = system::to_float(iVar1);
		fVar2 = system::to_float(system::floor(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_98(var uParam0)//Position - 0xE31F
{
	func_64(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_99()//Position - 0xE349
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_100()//Position - 0xE365
{
	int iVar0;
	
	if (Global_25479 == 0 && !Global_25483)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		Global_67999[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_101()//Position - 0xE3A4
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_102();
	if (((Global_55909 && unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B())) && !unk_0x6C97EEC6339FB45C()) && !unk_0x0F30C1F1717A6437())
	{
		Global_55909 = 0;
	}
	if (Global_55902)
	{
		Global_55902 = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0x0F30C1F1717A6437())
	{
		bVar0 = false;
	}
	if (!unk_0x6F1392C5F51B32A4())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_55909)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x036D7C18EE783AB5(unk_0x98EC0789D9F0703B()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = system::round((unk_0x46C19C2753391FBF() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_67998)
	{
		if (Global_67999[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_56128[Global_67999[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_67999[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_67999[iVar2 /*9*/].f_7 == 1)
						{
							Global_67999[iVar2 /*9*/].f_8 = 0;
							Global_67999[iVar2 /*9*/].f_1 = 0;
							Global_67999[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0x6ADD12BF4D6D2587(Global_67999[iVar2 /*9*/].f_6))
						{
							if (!unk_0x191BE1BC8F26F3C1(Global_67999[iVar2 /*9*/].f_6, 0))
							{
								iLocal_64 = Global_67999[iVar2 /*9*/].f_8;
								iLocal_63 = unk_0xDE523AF6F7B269AB(Global_67999[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0)
								{
									Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_67999[iVar2 /*9*/].f_1 < 0)
									{
										Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_67999[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_67999[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_55910)
					{
						Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_55911)
					{
						if (Global_55913 == -1 || Global_67999[iVar2 /*9*/] == Global_55913)
						{
							if (((Global_67999[iVar2 /*9*/] == 339 || Global_67999[iVar2 /*9*/] == 179) || Global_67999[iVar2 /*9*/] == 342) || Global_67999[iVar2 /*9*/] == 234)
							{
								Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + system::round((unk_0x46C19C2753391FBF() * 1000f)));
							}
							else
							{
								Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_55915 == -1 || Global_55915 == Global_67999[iVar2 /*9*/])
						{
							if (!Global_55914 == 0)
							{
								if (unk_0x6ADD12BF4D6D2587(Global_55914))
								{
									if (!unk_0x191BE1BC8F26F3C1(Global_55914, 0))
									{
										if (unk_0x8A3FF8E81B40BB75(Global_55914))
										{
											fVar3 = unk_0x90D5DFB054818BA7(Global_55914);
											if (fVar3 > Global_67999[iVar2 /*9*/].f_2)
											{
												Global_67999[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_50(func_58()))
					{
						if (unk_0x8E1DC2E7000CD6A1(unk_0x98EC0789D9F0703B()) && unk_0x329B85FFF5E9EF10(unk_0x98EC0789D9F0703B()))
						{
							Global_67999[iVar2 /*9*/].f_1 = (Global_67999[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_102()//Position - 0xE77D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_68194 == 0 && Global_68184 == 0) && Global_56062 == 0) && Global_55932 == 0) && !Global_68150)
	{
		return;
	}
	iVar10 = 0;
	if (Global_55932 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55933[iVar0 /*2*/] != 0)
			{
				if (!unk_0x6ADD12BF4D6D2587(Global_55933[iVar0 /*2*/]))
				{
					Global_55933[iVar0 /*2*/] = 0;
					Global_55932 = (Global_55932 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(0))
	{
		iVar3 = unk_0xA387B84DA2EB1BEE(0, iVar0);
		switch (iVar3)
		{
			case 140:
				unk_0x575EF325DA5E3F04(0, iVar0, &iVar4, 1);
				if (unk_0x6ADD12BF4D6D2587(iVar4))
				{
					unk_0x191BE1BC8F26F3C1(iVar4, 0);
					if (Global_56062 > 0)
					{
						iVar7 = unk_0x82FF3DFBC3965CC0(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_56062)
						{
							if (Global_56063[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_56063[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x52C56492660097C7(iVar4) && unk_0x07F64790D10D1DB5(iVar4) != unk_0xFC1458A37D98B502())
					{
						iVar5 = unk_0x5E179DD73A268E57(unk_0x07F64790D10D1DB5(iVar4));
						iVar14 = 0;
						if (unk_0x6ADD12BF4D6D2587(iVar5))
						{
							if (unk_0x8A3FF8E81B40BB75(iVar5))
							{
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									iVar15 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
								}
								else
								{
									iVar15 = unk_0xC733212BF9066BDF();
								}
								if (unk_0x6ADD12BF4D6D2587(iVar15) && unk_0x79A6CD762DCCABE4(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x52C56492660097C7(iVar5) && unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()) == unk_0x07F64790D10D1DB5(iVar5)) || iVar14)
						{
							if (unk_0x52C56492660097C7(iVar5))
							{
								iVar6 = unk_0x4050C3F752DDC5B3(unk_0x07F64790D10D1DB5(iVar4));
								if (Global_55932 > 0)
								{
									iVar11 = func_106(iVar4);
									if (iVar11 != -1)
									{
										unk_0x57153CFD44684CFA(unk_0x07F64790D10D1DB5(Global_55933[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_105();
												Global_55933[iVar11 /*2*/] = 0;
												Global_55932 = (Global_55932 - 1);
											}
										}
									}
								}
								if (Global_68194 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_68194)
									{
										if (Global_68185[iVar1 /*2*/] == iVar6)
										{
											func_93(Global_68185[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_68150)
							{
								iVar12 = unk_0x07F64790D10D1DB5(iVar4);
								iVar13 = unk_0x68CB21BAC509FAD1(iVar12);
								if (!unk_0x9761C10D57B68069(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0xFD5B43B6DEB65FFB(unk_0x25D049AAC4603E65(unk_0x98EC0789D9F0703B()), unk_0x07F64790D10D1DB5(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0x4A080575DBB2F7DF(unk_0x07F64790D10D1DB5(iVar4)))
											{
												func_104();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_68184 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_68184;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_68151[iVar1 /*2*/] != 0)
									{
										if (unk_0x6ADD12BF4D6D2587(Global_68151[iVar1 /*2*/]))
										{
											if (unk_0x191BE1BC8F26F3C1(Global_68151[iVar1 /*2*/], 0))
											{
												if (Global_68151[iVar1 /*2*/] == iVar4)
												{
													func_93(Global_68151[iVar1 /*2*/].f_1, 1, 0);
													Global_68151[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_68151[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_68184 > 0)
								{
									while (Global_68151[(Global_68184 - 1) /*2*/] == 0 && Global_68184 > 1)
									{
										if (Global_68184 > 1)
										{
											Global_68184 = (Global_68184 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_103(iVar10);
	}
}

void func_103(int iParam0)//Position - 0xEB86
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		iVar1 = Global_67999[iVar0 /*9*/];
		if (Global_56128[iVar1 /*13*/] == 13)
		{
			Global_67999[iVar0 /*9*/].f_1 = (Global_67999[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_104()//Position - 0xEBD3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		iVar1 = Global_67999[iVar0 /*9*/];
		if (Global_56128[iVar1 /*13*/] == 16)
		{
			Global_67999[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_105()//Position - 0xEC1F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_55932 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_67998)
	{
		iVar2 = Global_67999[iVar1 /*9*/];
		if (Global_56128[iVar2 /*13*/] == 7)
		{
			Global_67999[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_106(int iParam0)//Position - 0xEC7D
{
	int iVar0;
	
	if (Global_55932 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_55933[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_107()//Position - 0xECB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x3E2E4B7D82D38C8E())
	{
		if (unk_0x95409B1966592261() == 33)
		{
			if (unk_0x2CD3CAF8B6C1E152() == 33)
			{
				iVar0 = unk_0x3AFE8A57E69F12A1();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0xF2EDA0662381AF03(iVar3 * 3 + 1);
						iVar5 = unk_0xF2EDA0662381AF03(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_84(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = unk_0xF2EDA0662381AF03(iVar2);
					iVar7 = unk_0xF2EDA0662381AF03(iVar2 + 1);
					bVar8 = false;
					if (unk_0xF2EDA0662381AF03(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0xF2EDA0662381AF03(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_68148 = iVar9;
					Global_68149 = iVar6;
					if (iVar1 == -1)
					{
						func_72(system::to_float(iVar7), bVar8);
					}
					else
					{
						func_72(system::to_float(iVar1), bVar8);
					}
				}
				func_108();
			}
		}
		if (unk_0x95409B1966592261() == 13)
		{
			if (unk_0x2CD3CAF8B6C1E152() == 37)
			{
				iVar10 = unk_0x3AFE8A57E69F12A1();
				if (iVar10 == 3)
				{
					iVar11 = unk_0xF2EDA0662381AF03(0);
					iVar12 = unk_0xF2EDA0662381AF03(1);
					iVar13 = unk_0xF2EDA0662381AF03(2);
					Global_104555.f_2342[iVar11 /*2*/] = iVar12;
					Global_104555.f_2342[iVar11 /*2*/].f_1 = iVar13;
					func_108();
				}
			}
		}
	}
}

int func_108()//Position - 0xEE18
{
	if (func_95(0))
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

void func_109()//Position - 0xEE63
{
	Global_71116 = 0;
	Global_71117 = 0;
	Global_55903 = 0;
	system::settimera(0);
	system::settimerb(0);
	unk_0xC67DD237DAB62CE2();
	iLocal_60 = 0;
	Global_55899 = 0;
	Global_55913 = -1;
	iLocal_70 = 0;
	Global_55897 = 0;
	Global_55896 = 0;
	iLocal_72 = 0;
	Global_55914 = 0;
	Global_55912 = 0;
	Global_55893 = 0;
	Global_68194 = 0;
	Global_68184 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	Global_55908 = 0;
	Global_55904 = 0;
}

