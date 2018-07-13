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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	float fLocal_48 = 0f;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409,1539f, -1626,677f, 28,2928f };
	vLocal_45 = { 409,2747f, -1623,022f, 28,29278f };
	fLocal_46 = 202,6928f;
	vLocal_47 = { 415,6071f, -1647,604f, 28,2928f };
	fLocal_48 = 85,7173f;
	if (unk_0x7D9C4B359376D38A(18))
	{
		func_27();
	}
	if (unk_0x8F38E94BBF3404CD(joaat("ambient_tonyacall2")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			vLocal_44 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		}
		if (system::vdist2(vLocal_44, vLocal_43) > fLocal_42)
		{
			func_27();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_22())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x6450931B826B49D9("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x6450931B826B49D9("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x6450931B826B49D9("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x6FF834D85E2DD4C6(joaat("prop_phone_ing"));
				if (((unk_0x9A0B2ED5055D3F0B(joaat("prop_phone_ing")) && unk_0x3A801AA34DD821BE("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0x3A801AA34DD821BE("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0x3A801AA34DD821BE("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_27();
				break;
		}
		system::wait(0);
	}
}

int func_1()//Position - 0x1BA
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iLocal_38, 1) };
	}
	else
	{
		vVar1 = { 408,5002f, -1624,583f, 29,2928f };
	}
	if ((system::vdist2(vVar0, vVar1) > 10000f || unk_0x191BE1BC8F26F3C1(iLocal_38, 0)) || func_21())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x6ADD12BF4D6D2587(iLocal_38) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
			{
				if (unk_0x0C88267282FD588F(iLocal_38, vLocal_49, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0xFAA3EF7FF92E1F9E(&uVar3);
					unk_0x6931076730A4AC5D(&uVar3);
					unk_0x2DAC3448B66448E8(0, fLocal_50, 0);
					unk_0x12C9D41D52A560D6(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(uVar3);
					unk_0xAB30B1CF01A198C1(iLocal_38, uVar3);
					unk_0xFAA3EF7FF92E1F9E(&uVar3);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(iLocal_38) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
			{
				if (unk_0x2332DC2174507412(iLocal_38) == 1)
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_39))
					{
						if (unk_0xA5F6598E13F98E08(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar4 = unk_0x7A70772AE40E3821(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar4 >= 0,157f)
							{
								iLocal_39 = unk_0x5E35CF35E65D69B9(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0xA9D382E7BA095148(iLocal_39, iLocal_38, unk_0xDD09837E5235FE91(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x2332DC2174507412(iLocal_38) == 2)
				{
					iVar2 = (unk_0x63A6486593EC7EC3(0, 65535) % 2);
					if (iVar2 == 0)
					{
						if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL3", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL4", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0xFAA3EF7FF92E1F9E(&uVar3);
					unk_0x6931076730A4AC5D(&uVar3);
					unk_0x12C9D41D52A560D6(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x2EA90674750EA01E(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x1B16DD5C115FE009(uVar3);
					unk_0xAB30B1CF01A198C1(iLocal_38, uVar3);
					unk_0xFAA3EF7FF92E1F9E(&uVar3);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (system::vdist2(vVar0, vVar1) < 25f)
			{
				if (unk_0x8E8C94609BA4BEA9(0) != 4)
				{
					if (func_4(&uLocal_53, "TOWAUD", "TOW_MESS2", 8, 0, 0, 0))
					{
						system::settimera(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (system::timera() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()//Position - 0x464
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_38) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
	{
		if (unk_0x2332DC2174507412(iLocal_38) == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_39))
			{
				unk_0x452336926718D62A(&iLocal_39);
				unk_0x60C06BFD037BB7CF(iLocal_38, unk_0xFC1458A37D98B502(), -1, 0, 2);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_38) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_39))
		{
			if (unk_0x78F50AA8F955BEFC(iLocal_38, 993674639) == 1)
			{
				unk_0x452336926718D62A(&iLocal_39);
			}
		}
	}
}

int func_3()//Position - 0x4DC
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4FE
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x54C
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()//Position - 0x818
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

void func_7()//Position - 0x849
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

int func_8()//Position - 0x8DE
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x905
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

void func_10()//Position - 0x99E
{
	if (func_16(14))
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

var func_11()//Position - 0xA40
{
	func_12();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_12()//Position - 0xA59
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_15(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_14(unk_0xFC1458A37D98B502());
			if (func_13(iVar0) && (!func_16(14) || Global_103506))
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

bool func_13(int iParam0)//Position - 0xB56
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0xB62
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

int func_15(int iParam0)//Position - 0xB9F
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

bool func_16(int iParam0)//Position - 0xBC9
{
	return Global_35861 == iParam0;
}

void func_17()//Position - 0xBD7
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

bool func_18(int iParam0, int iParam1)//Position - 0xC2E
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

void func_19()//Position - 0xC69
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xCC0
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

int func_21()//Position - 0xD16
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
	{
		if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_38) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_39))
			{
				unk_0x6B7C10B19928914F(iLocal_39, 1, 1);
			}
			unk_0xB31CEFB00C146C91(false);
			if (unk_0x78F50AA8F955BEFC(iLocal_38, 1805844857) != 1)
			{
				unk_0xE9B3D12A64CC7C1A(iLocal_38, 1);
				unk_0xD68E88A8E0BE8697(iLocal_38, unk_0xFC1458A37D98B502(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()//Position - 0xD97
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	unk_0xB7AF4220260C2ACD(vVar0, fLocal_41, 1, 1, &iVar1, 0, 1, -1);
	if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			iLocal_38 = iVar1;
			unk_0xDD29FF4BAB8AFF9C(iLocal_38, 1, 0);
			unk_0x6D624C6A284D7D07(iLocal_38, 0);
			unk_0x5C5D33A1B2711D21(iLocal_38, false);
			unk_0x296D39391436DC64(iLocal_38, "TONYA");
			unk_0xCE93FCB8A8D8DF0B(iLocal_38, 1862763509);
			func_25(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(vLocal_49))
			{
				if (unk_0x78F50AA8F955BEFC(iLocal_38, 713668775) != 1)
				{
					unk_0x380C1E7B7740D618(iLocal_38, vLocal_49, 1f, -1, 0,25f, 0, fLocal_50);
					unk_0xE9B3D12A64CC7C1A(iLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(vector3 vParam0)//Position - 0xE6E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0xE98
{
	vector3 vVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_38) && !unk_0x191BE1BC8F26F3C1(iLocal_38, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iLocal_38, 1) };
		if (func_23(vLocal_49))
		{
			fLocal_51 = system::vdist(vVar0, vLocal_45);
			fLocal_52 = system::vdist(vVar0, vLocal_47);
			if (fLocal_51 < fLocal_52)
			{
				vLocal_49 = { vLocal_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				vLocal_49 = { vLocal_47 };
				fLocal_50 = fLocal_48;
			}
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 407,4285f, -1626,572f, 27,29278f, 412,8245f, -1620,167f, 33,29278f, 6f, 0, 1, 0))
				{
					vLocal_49 = { vLocal_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_25(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF51
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

bool func_26(int iParam0, int iParam1)//Position - 0xFEC
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_27()//Position - 0x1039
{
	unk_0xFCCDDE0E48CF9588("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xFCCDDE0E48CF9588("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xFCCDDE0E48CF9588("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x14776E43F90DD454(joaat("prop_phone_ing"));
	if (unk_0x6ADD12BF4D6D2587(iLocal_38))
	{
		if (unk_0xEC211A86AB3726B6(iLocal_38))
		{
			unk_0x68433819717660CF(&iLocal_38);
		}
		else
		{
			unk_0x486F346ADFE56674(&iLocal_38);
		}
	}
	unk_0x96A3D9A8A4C7AFD4();
}

