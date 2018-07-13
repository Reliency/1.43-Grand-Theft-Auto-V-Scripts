#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_20[2] = { 0f, 0f };
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_1();
	}
	unk_0xBC03901A15107317(1);
	unk_0x6FF834D85E2DD4C6(joaat("cuban800"));
	while (!unk_0x9A0B2ED5055D3F0B(joaat("cuban800")))
	{
		system::wait(0);
	}
	vLocal_19[0 /*3*/] = { 1169,976f, 3592,572f, 32,6481f };
	vLocal_19[1 /*3*/] = { 1215,738f, 3586,608f, 33,5131f };
	fLocal_20[0] = 277,7043f;
	fLocal_20[1] = 77,1113f;
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 1220,202f, 3596,281f, 33,259f, 1, false, 0, 1);
	}
	unk_0x3D34B699E4F36612(1220,202f, 3596,281f, 33,259f);
	iLocal_18 = unk_0xEA60F3B426BB095B(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_20[0], true, true, false);
	unk_0xACE486395AA1867D(iLocal_18, 1084227584);
	unk_0x14776E43F90DD454(joaat("cuban800"));
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		system::wait(0);
	}
}

void func_1()//Position - 0x136
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_18))
	{
		unk_0xC91FE17AD7353B70(&iLocal_18);
	}
	unk_0x14776E43F90DD454(joaat("cuban800"));
	unk_0x96A3D9A8A4C7AFD4();
}

