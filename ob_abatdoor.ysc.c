#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_4();
	}
	if (unk_0x6ADD12BF4D6D2587(iScriptParam_6))
	{
		unk_0xEDC33A771FAEB393(iScriptParam_6, true);
		vLocal_4 = { unk_0xB3328BA8976B416C(iScriptParam_6, 1) };
		vLocal_5 = { unk_0xDB824D597B53CC40(iScriptParam_6, 2) };
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x6ADD12BF4D6D2587(iScriptParam_6))
		{
			if (unk_0xC8F310BD22DD910A(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(iScriptParam_6))
						{
							unk_0x6FF834D85E2DD4C6(joaat("p_abat_roller_1_col"));
							if (unk_0x9A0B2ED5055D3F0B(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0x5E35CF35E65D69B9(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									unk_0x59AF3B40AE222194(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD5BF96615F17406E(iScriptParam_6))
						{
							if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
							{
								unk_0x6450931B826B49D9("map_objects");
								if (unk_0x3A801AA34DD821BE("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xD5BF96615F17406E(iScriptParam_6))
						{
							if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
							{
								if (Global_89409)
								{
									if (unk_0x3A801AA34DD821BE("map_objects"))
									{
										unk_0x90CD41CAEBB68E99(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0,35f;
						vVar0 = { vLocal_4 + Vector(3,45f, 0f, 0f) };
						if (unk_0x6ADD12BF4D6D2587(iLocal_3))
						{
							vVar1 = { unk_0xB3328BA8976B416C(iLocal_3, 1) };
							if (!func_2(vVar1, vVar0, 0,1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								unk_0xBD8D47FDC6902B2D(iLocal_3, vVar1 + func_1(vVar2) * FtoV(unk_0x46C19C2753391FBF()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_89410 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)//Position - 0x1C6
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x205
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0xE97272C977DEADD3((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x280
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()//Position - 0x2C7
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_3))
	{
		unk_0x452336926718D62A(&iLocal_3);
	}
	unk_0x14776E43F90DD454(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_5(char* sParam0)//Position - 0x2F2
{
	func_6(sParam0);
}

void func_6(char* sParam0)//Position - 0x300
{
	if (unk_0x74C475EB8E73D398(sParam0, sParam0))
	{
	}
}

