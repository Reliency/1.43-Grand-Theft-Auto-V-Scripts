#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1(int iParam0)//Position - 0xBA
{
	if (unk_0x20D9FFF82447C263("DISPLAY_DATA_SLOT"))
	{
		unk_0xD07D5CD276368D36(iParam0);
		unk_0x271AA5469AF471B3();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)//Position - 0xD6
{
	if (unk_0x20D9FFF82447C263("SET_DATA_SLOT"))
	{
		unk_0xD07D5CD276368D36(iParam0);
		unk_0xD07D5CD276368D36(iParam1);
		unk_0xD07D5CD276368D36(iParam2);
		unk_0xD07D5CD276368D36(iParam3);
		unk_0xD07D5CD276368D36(iParam7);
		unk_0xD07D5CD276368D36(0);
		if (bParam4)
		{
			unk_0xD07D5CD276368D36(1);
		}
		else
		{
			unk_0xD07D5CD276368D36(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x8686005F83E832AE(sParam5);
		}
		unk_0x271AA5469AF471B3();
	}
}

void func_3(char* sParam0)//Position - 0x136
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

