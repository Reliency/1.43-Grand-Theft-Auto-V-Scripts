void __EntryFunction__()//Position - 0x0
{
	unk_0x252CDD3D0F299441();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)//Position - 0x15
{
	unk_0xD9E2C360120FEB7C(sParam0);
	while (!unk_0x3B6F9DF9C5FEB3A4(sParam0))
	{
		system::wait(0);
		unk_0xD9E2C360120FEB7C(sParam0);
	}
	system::start_new_script(sParam0, iParam1);
}

