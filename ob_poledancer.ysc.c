#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0x6ADD12BF4D6D2587(iScriptParam_8))
	{
		unk_0xEDC33A771FAEB393(iScriptParam_8, true);
		vLocal_2 = { unk_0x3F90543934DCD7E6(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = unk_0xF0371FE6E2BF9599(iScriptParam_8);
		unk_0xB18E1DBC397238E1(iScriptParam_8, false, 0);
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_8))
		{
			if (unk_0xC8F310BD22DD910A(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0xB18E1DBC397238E1(iScriptParam_8, true, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_1))
						{
							unk_0xF21E6EBE8EFDCC28(iLocal_1, -1);
							unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
							unk_0xE9B3D12A64CC7C1A(iLocal_1, true);
							unk_0x96A3D9A8A4C7AFD4();
						}
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

void func_1()//Position - 0xDC
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_1, 0))
	{
		if (!unk_0x841ED61760A7D07B(iLocal_1))
		{
			unk_0x68433819717660CF(&iLocal_1);
		}
		else
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_1, true);
		}
	}
	unk_0x96A3D9A8A4C7AFD4();
}

int func_2()//Position - 0x10D
{
	vector3 vVar0;
	
	vVar0 = { 2f, 2f, 0,5f };
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_1))
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_1, vVar0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xEBE499597C718EB8(iLocal_1, unk_0xFC1458A37D98B502(), 1))
			{
				return 1;
			}
			if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x181
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_1))
	{
		if (unk_0x78F50AA8F955BEFC(iLocal_1, -2017877118) == 7)
		{
			unk_0x12C9D41D52A560D6(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x0F89A4E8C59BFAAF(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			unk_0x12C9D41D52A560D6(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_7)
		{
			if (unk_0xA5F6598E13F98E08(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				unk_0xCBF5827EA5303F2B(iLocal_1, sLocal_6, sLocal_4, unk_0x5B811202FCBE9E9D(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()//Position - 0x215
{
	if (unk_0x191BE1BC8F26F3C1(iLocal_1, 0))
	{
		iLocal_1 = unk_0xAC992EFAD62C33BF(5, iLocal_5, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_3, 1, true);
		unk_0x230697B667C63948(iLocal_1, 0);
		unk_0x5C5D33A1B2711D21(iLocal_1, false);
		unk_0x771A86309E0CA47B(iLocal_1, true);
	}
}

int func_5()//Position - 0x253
{
	unk_0x6FF834D85E2DD4C6(iLocal_5);
	unk_0x6450931B826B49D9(sLocal_6);
	if (unk_0x9A0B2ED5055D3F0B(iLocal_5) && unk_0x3A801AA34DD821BE(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0x6FF834D85E2DD4C6(iLocal_5);
		unk_0x6450931B826B49D9(sLocal_6);
	}
	return 0;
}

