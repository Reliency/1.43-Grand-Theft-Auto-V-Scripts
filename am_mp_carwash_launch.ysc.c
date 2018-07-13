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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 5;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	int iVar4;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0,0375f;
	fLocal_36 = 0,17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	vVar3 = { ScriptParam_50.f_1[0 /*3*/] };
	if (unk_0x8F38E94BBF3404CD(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x3A711520F83BAE98())
	{
		unk_0x252CDD3D0F299441();
		unk_0x941BE77305BB5695(0);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (Global_2621550)
	{
		if (unk_0x8F38E94BBF3404CD(131838674) == 0)
		{
			unk_0x8A719502FC5D36F1(131838674);
			while (!unk_0x2674C3EBFAFF7678(131838674))
			{
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(131838674, &ScriptParam_50, 23, 1424);
		}
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_8(unk_0xFC1458A37D98B502()))
	{
	}
	iVar4 = 0;
	while (iVar4 == 0)
	{
		if (((func_5(unk_0x9EB17624F44A8DA4(), 1) || func_4()) || !func_3(unk_0x9EB17624F44A8DA4())) || func_2())
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = 1;
		}
		system::wait(0);
	}
	if (system::vdist2(vVar3, func_1(157)) < system::vdist2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x53C562FD2B9E3AB0();
	iVar1 = unk_0x8B948C59217A295D(sVar2);
	if (unk_0x8F38E94BBF3404CD(iVar1) == 0)
	{
		unk_0xD9E2C360120FEB7C(sVar2);
		while (!unk_0x3B6F9DF9C5FEB3A4(sVar2))
		{
			unk_0xD9E2C360120FEB7C(sVar2);
			system::wait(0);
			if (unk_0x53C562FD2B9E3AB0() > iVar0 + 20000)
			{
				unk_0x96A3D9A8A4C7AFD4();
			}
		}
		if (unk_0x3B6F9DF9C5FEB3A4(sVar2))
		{
			system::start_new_script(sVar2, 1424);
			unk_0x9D2418D7FC697249(sVar2);
		}
	}
	unk_0x96A3D9A8A4C7AFD4();
}

Vector3 func_1(int iParam0)//Position - 0x1D4
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_25578[iVar0 /*23*/][0 /*3*/];
}

bool func_2()//Position - 0x1EC
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_3(int iParam0)//Position - 0x208
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 6);
}

int func_4()//Position - 0x220
{
	int iVar0;
	
	iVar0 = Global_2436181;
	if (unk_0xC80D31E4B587871C(Global_1626416[iVar0 /*35*/].f_13, 0) && Global_1626416[iVar0 /*35*/].f_22 == 2)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x256
{
	if (bParam1)
	{
		if (func_6(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_6(int iParam0)//Position - 0x282
{
	return func_7(iParam0);
}

bool func_7(int iParam0)//Position - 0x290
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_8(int iParam0)//Position - 0x2AA
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(iParam0, 0);
}

