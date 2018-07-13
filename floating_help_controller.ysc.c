void __EntryFunction__()//Position - 0x0
{
	unk_0x252CDD3D0F299441();
	while (true)
	{
		system::wait(0);
		func_1();
	}
}

void func_1()//Position - 0x1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_103207)
	{
		if (Global_103207[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x53C562FD2B9E3AB0() > Global_103207[iVar0 /*28*/].f_21 && Global_103207[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xCF14F4421582B24A(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_103207[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xC80D31E4B587871C(Global_103207[iVar0 /*28*/].f_27, 0))
					{
						Global_103207[iVar0 /*28*/].f_21 = (Global_103207[iVar0 /*28*/].f_21 + system::round((unk_0x46C19C2753391FBF() * 1000f)));
						if (unk_0x3F8C838BBFC828F7(iVar1))
						{
							unk_0x872F1C1F8587CCC7(&(Global_103207[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_103207[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_103207[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x191BE1BC8F26F3C1(Global_103207[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xC80D31E4B587871C(Global_103207[iVar0 /*28*/].f_27, 3))
							{
								unk_0x612E6794681E0B71(iVar1, unk_0x3F90543934DCD7E6(Global_103207[iVar0 /*28*/].f_23, Global_103207[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x397890BF2262F407(iVar1, Global_103207[iVar0 /*28*/].f_23, Global_103207[iVar0 /*28*/].f_24, Global_103207[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_103207[iVar0 /*28*/].f_24 != 0f || Global_103207[iVar0 /*28*/].f_24.f_1 != 0f) || Global_103207[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x612E6794681E0B71(iVar1, Global_103207[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x82BC03F6D35ED684(iVar1, Global_103207[iVar0 /*28*/].f_24, Global_103207[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x53C562FD2B9E3AB0() - Global_103207[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x20A
{
	Global_103207[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103207[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103207[iParam0 /*28*/].f_4), "", 64);
	Global_103207[iParam0 /*28*/].f_23 = 0;
	Global_103207[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103207[iParam0 /*28*/].f_27 = 0;
	Global_103207[iParam0 /*28*/].f_20 = 0;
	Global_103207[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)//Position - 0x272
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x74C475EB8E73D398(&(Global_103207[iParam0 /*28*/]), "") && !unk_0x8C1C362CA8299475(&(Global_103207[iParam0 /*28*/])))
	{
		if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4), Global_103207[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_103207[iParam0 /*28*/]), &(Global_103207[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_103207[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_103207[iParam0 /*28*/]), Global_103207[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_103207[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)//Position - 0x34E
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)//Position - 0x364
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0x6223D539BCD39E76(iParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, char* sParam2)//Position - 0x380
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	return unk_0x0683D2027E169355((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x39C
{
	unk_0x5BE7193BC62CE2CE(sParam1);
	unk_0xA6D2B267C377D7B2(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	return unk_0x0683D2027E169355((1 + iParam0));
}

