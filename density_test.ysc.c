#region Local Var
	bool bLocal_0 = 0;
	bool bLocal_1 = 0;
	float fLocal_2 = 0f;
	float fLocal_3 = 0f;
	float fLocal_4 = 0f;
	float fLocal_5 = 0f;
	float fLocal_6 = 0f;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bLocal_0 = true;
	bLocal_1 = true;
	fLocal_2 = 1f;
	fLocal_3 = 1f;
	fLocal_4 = 1f;
	fLocal_5 = 1f;
	fLocal_6 = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_1();
	}
	while (true)
	{
		system::wait(0);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (bLocal_0)
			{
				unk_0xAD6F3DFB1F960182(fLocal_2);
			}
			unk_0xFE7F7D5F6A3A7D31(fLocal_3);
			unk_0xC30831CEA364158C(fLocal_4);
			unk_0x3E4E5F3FCC25674C(fLocal_5);
			if (bLocal_1)
			{
				unk_0x72CB9F3FA10C599B(fLocal_6);
			}
			unk_0xC39DDDC969581586(fLocal_7, fLocal_8);
		}
	}
}

void func_1()//Position - 0x7C
{
	unk_0x6BE2D690B08DD645(1);
	unk_0x96A3D9A8A4C7AFD4();
}

