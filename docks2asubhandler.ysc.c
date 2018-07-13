#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	
	if (unk_0x7D9C4B359376D38A(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xC80D31E4B587871C(iLocal_2, 1))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_2, 0))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_0))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_0, 0))
				{
					unk_0xDD29FF4BAB8AFF9C(iLocal_0, false, 1);
					unk_0xEDC33A771FAEB393(iLocal_0, true);
					unk_0xD38F266C132F2897(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0x6ADD12BF4D6D2587(iLocal_1))
					{
						unk_0xDD29FF4BAB8AFF9C(iLocal_1, false, 1);
						unk_0xEDC33A771FAEB393(iLocal_1, true);
						unk_0xD38F266C132F2897(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0x872F1C1F8587CCC7(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_0, 0))
			{
				fVar0 = system::vdist2(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x872F1C1F8587CCC7(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x841ED61760A7D07B(iLocal_0))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_2, 1);
			}
		}
		system::wait(0);
	}
	func_1();
}

void func_1()//Position - 0x10B
{
	unk_0x5380482A432E314E(&iLocal_0);
	unk_0x83E70C4C5D45C754(&iLocal_1);
	unk_0x96A3D9A8A4C7AFD4();
}

