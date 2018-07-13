#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0x8F38E94BBF3404CD(joaat("wp_partyboombox")) > 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (unk_0x7D9C4B359376D38A(18))
	{
		func_1();
	}
	while (true)
	{
		system::wait(0);
		if (!unk_0x42F1FE4C7EC5F51E())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x674C9438180770FE() >= 22 || unk_0x674C9438180770FE() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xAB84FBE3AB3FFAD3("ID2_21_G_Night"))
				{
					unk_0xBC469A15B0FBB2B3("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x40189ECE75CF9724() && !unk_0x1E06D00B67177A18())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()//Position - 0xB1
{
	if (unk_0xAB84FBE3AB3FFAD3("ID2_21_G_Night"))
	{
		unk_0x990A0EC8D6FEA4BB("ID2_21_G_Night");
	}
	unk_0x96A3D9A8A4C7AFD4();
}

