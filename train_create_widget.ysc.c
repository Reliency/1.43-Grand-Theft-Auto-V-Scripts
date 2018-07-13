#region Local Var
	int iLocal_0 = 0;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	iLocal_4 = 1;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_1();
	}
	unk_0x6BE2D690B08DD645(0);
	unk_0x0F95E29516E7C457();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 626,68f, 6442,31f, 30,88f, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), -177f);
		unk_0xBB9A3C553EECB180(0f);
	}
	unk_0x6FF834D85E2DD4C6(joaat("freight"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcar"));
	unk_0x6FF834D85E2DD4C6(joaat("freightgrain"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcont1"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcont2"));
	unk_0x6FF834D85E2DD4C6(joaat("tankercar"));
	unk_0x6FF834D85E2DD4C6(868868440);
	while ((((((!unk_0x9A0B2ED5055D3F0B(joaat("freight")) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcar"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightgrain"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcont1"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcont2"))) || !unk_0x9A0B2ED5055D3F0B(joaat("tankercar"))) || !unk_0x9A0B2ED5055D3F0B(868868440))
	{
		system::wait(0);
	}
	while (true)
	{
		system::wait(0);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (iLocal_5)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_0))
				{
					unk_0x2162E5CB22F7BDDD(&iLocal_0);
				}
				iLocal_0 = unk_0xE966A9B472713914(iLocal_2, vLocal_1, iLocal_4);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				vLocal_1 = { unk_0x9D1DE9B1332BAA49() };
				iLocal_7 = 0;
			}
			if (unk_0xB8DE76287EDC4957(iLocal_0, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_0, 0))
			{
				unk_0x3ACAE4819D3B4F08(iLocal_0, fLocal_3);
				unk_0x8647AB1A2F1D3D58(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x1A5
{
	unk_0x6BE2D690B08DD645(1);
	unk_0x96A3D9A8A4C7AFD4();
}

