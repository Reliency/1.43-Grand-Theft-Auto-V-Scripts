#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0x252CDD3D0F299441();
	unk_0xBC469A15B0FBB2B3("prologue06_int");
	unk_0xBC469A15B0FBB2B3("prologue01");
	unk_0xBC469A15B0FBB2B3("prologue02");
	unk_0xBC469A15B0FBB2B3("prologue03");
	unk_0xBC469A15B0FBB2B3("prologue04");
	unk_0xBC469A15B0FBB2B3("prologue05");
	unk_0xBC469A15B0FBB2B3("prologue06");
	unk_0xBC469A15B0FBB2B3("prologuerd");
	unk_0xBC469A15B0FBB2B3("Prologue01c");
	unk_0xBC469A15B0FBB2B3("Prologue01d");
	unk_0xBC469A15B0FBB2B3("Prologue01e");
	unk_0xBC469A15B0FBB2B3("Prologue01f");
	unk_0xBC469A15B0FBB2B3("Prologue01g");
	unk_0xBC469A15B0FBB2B3("prologue01h");
	unk_0xBC469A15B0FBB2B3("prologue01i");
	unk_0xBC469A15B0FBB2B3("prologue01j");
	unk_0xBC469A15B0FBB2B3("prologue01k");
	unk_0xBC469A15B0FBB2B3("prologue01z");
	unk_0xBC469A15B0FBB2B3("prologue03b");
	unk_0xBC469A15B0FBB2B3("prologue04b");
	unk_0xBC469A15B0FBB2B3("prologue05b");
	unk_0xBC469A15B0FBB2B3("prologue06b");
	unk_0xBC469A15B0FBB2B3("prologuerdb");
	unk_0xBC469A15B0FBB2B3("prologue_occl");
	unk_0xBC469A15B0FBB2B3("DES_ProTree_start");
	unk_0xBC469A15B0FBB2B3("DES_ProTree_start_lod");
	unk_0xBC469A15B0FBB2B3("prologue04_cover");
	unk_0xBC469A15B0FBB2B3("prologue03_grv_fun");
	unk_0x990A0EC8D6FEA4BB("prologue03_grv_dug");
	unk_0x990A0EC8D6FEA4BB("prologue_grv_torch");
	unk_0xECC5BEFBB2567F40("prologue", 1);
	unk_0x6FF834D85E2DD4C6(joaat("csb_prolsec"));
	while (!unk_0x9A0B2ED5055D3F0B(joaat("csb_prolsec")))
	{
		system::wait(0);
	}
	unk_0xDB01234233A0E282(unk_0x9EB17624F44A8DA4(), joaat("csb_prolsec"));
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 5313,8f, -5207,2f, 83,5f, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 169,2f);
	}
	unk_0x9B47B379EE749C38(false);
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
	unk_0x32C900DD9B686F75(5312,996f, -5208,671f, 83,90526f, 10f, 0);
	iVar0 = unk_0x53C562FD2B9E3AB0() + 10000;
	while (!unk_0x64D098EABB2F6F13() && unk_0x53C562FD2B9E3AB0() < iVar0)
	{
		system::wait(0);
	}
	unk_0xFC924B6303467FD8();
	unk_0xE859EF37EA7362D3("MISSION_FAILED_SCENE");
	unk_0x59C3AC31C7544A28(2500);
	unk_0x81BCCFFE3F019672();
	unk_0xBCBC53983EC3B1BA("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(0);
		}
		unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0x09C2CBFA4CD804AC(0,5f, 0,5f, 0,8f, 0,8f, 20, 20, 20, 255, 0);
		unk_0x8D95497078BC0E3B(0,5f, 0,5f);
		unk_0x0BC5BE26BB7006D2(1);
		if (system::timera() > 10000 && unk_0x9F0887BCBFCF3C2F(0))
		{
			iLocal_0 = unk_0x63A6486593EC7EC3(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				system::settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0,5f, 0,4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0,5f, 0,4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0,5f, 0,4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0,5f, 0,4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0,5f, 0,4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x7D709D41AE28CA49();
		if (unk_0x73D9A48F35E60F4B())
		{
			unk_0x100BA7CD8CCF7563();
			return;
		}
		system::wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x2F8
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam3);
}

