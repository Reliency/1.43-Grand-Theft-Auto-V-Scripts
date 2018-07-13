#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_1();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_5))
		{
			if (unk_0xC8F310BD22DD910A(iScriptParam_5) && unk_0x8F38E94BBF3404CD(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
						{
							iVar0 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
							if (unk_0x2C2E1E35924B9FF2(iVar0))
							{
								if (unk_0x1A595E6882473810(iVar0))
								{
									if (unk_0x44D4288AF355A8D8())
									{
										unk_0x36905B9EE07F38CC();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xFEDD99169EC73AA6())
						{
							if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
							{
								if (!unk_0x6ADD12BF4D6D2587(iLocal_4))
								{
									iLocal_4 = unk_0xCBD07018689DF383(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xE0B0126B4689CB72(iLocal_3))
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_4))
									{
										iVar0 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
										if (unk_0x2C2E1E35924B9FF2(iVar0))
										{
											if (unk_0x1A595E6882473810(iVar0))
											{
												if (unk_0x44D4288AF355A8D8())
												{
													iLocal_3 = unk_0x1E3116EEB28D5F17("scr_obfoundry_cauldron_steam", iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
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

void func_1()//Position - 0x135
{
	if (unk_0xE0B0126B4689CB72(iLocal_3))
	{
		unk_0x990DE45B7A2B6426(iLocal_3, 0);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_4))
	{
		unk_0x3A703774620FDB42(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_2(char* sParam0)//Position - 0x167
{
	func_3(sParam0);
}

void func_3(char* sParam0)//Position - 0x175
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

