#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_1();
	}
	if (unk_0x6ADD12BF4D6D2587(iScriptParam_3))
	{
		unk_0xEDC33A771FAEB393(iScriptParam_3, true);
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_3))
		{
			if (unk_0xC8F310BD22DD910A(iScriptParam_3) && unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(iScriptParam_3))
						{
							unk_0x6450931B826B49D9("MISSMIC2");
							if (unk_0x3A801AA34DD821BE("MISSMIC2"))
							{
								unk_0x90CD41CAEBB68E99(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
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

void func_1()//Position - 0xAF
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xFCCDDE0E48CF9588("MISSMIC2");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_2(char* sParam0)//Position - 0xC8
{
	func_3(sParam0);
}

void func_3(char* sParam0)//Position - 0xD6
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

