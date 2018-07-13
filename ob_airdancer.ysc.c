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
			if (unk_0xC8F310BD22DD910A(iScriptParam_3))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(iScriptParam_3))
						{
							unk_0x6450931B826B49D9("map_objects");
							if (unk_0x3A801AA34DD821BE("map_objects"))
							{
								unk_0x90CD41CAEBB68E99(iScriptParam_3, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0f, 0);
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

void func_1()//Position - 0x9F
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_2(char* sParam0)//Position - 0xB2
{
	func_3(sParam0);
}

void func_3(char* sParam0)//Position - 0xC0
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

