#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				system::wait(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1(int iParam0)//Position - 0x8A
{
	if (unk_0x20D9FFF82447C263("DISPLAY_DATA_SLOT"))
	{
		unk_0xD07D5CD276368D36(iParam0);
		unk_0x271AA5469AF471B3();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)//Position - 0xA6
{
	if (unk_0x20D9FFF82447C263("SET_DATA_SLOT"))
	{
		unk_0xD07D5CD276368D36(iParam0);
		unk_0xD07D5CD276368D36(iParam1);
		unk_0xD07D5CD276368D36(iParam2);
		unk_0xD07D5CD276368D36(iParam3);
		unk_0xD07D5CD276368D36(0);
		unk_0xD07D5CD276368D36(0);
		if (bParam4)
		{
			unk_0xD07D5CD276368D36(1);
		}
		else
		{
			unk_0xD07D5CD276368D36(0);
		}
		func_3(sParam5);
		unk_0x271AA5469AF471B3();
	}
}

void func_3(char* sParam0)//Position - 0xF6
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

