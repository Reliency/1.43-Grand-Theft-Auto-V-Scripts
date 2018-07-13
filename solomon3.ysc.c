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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	vector3 vLocal_173[175] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_174[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_175[35] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_176 = { 0f, 0f, 0f };
	vector3 vLocal_177 = { 0f, 0f, 0f };
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	vector3 vLocal_180 = { 0f, 0f, 0f };
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	vector3 vLocal_183 = { 0f, 0f, 0f };
	vector3 vLocal_184 = { 0f, 0f, 0f };
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	int iLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_307 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	int iLocal_667[3] = { 0, 0, 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = unk_0x5354F72E0D8D7E53();
	iLocal_74 = unk_0x526A9A6B1B39C5F0();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	fLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0,3f;
	fLocal_147 = 0,5f;
	fLocal_148 = 50f;
	iLocal_159 = -1;
	iLocal_167 = -1;
	iLocal_168 = -1;
	vLocal_306 = { -1024,1f, -485,3321f, 35,9816f };
	vLocal_307 = { -428,0263f, -2153,577f, 9,2997f };
	vLocal_308 = { -498,7f, -2136,5f, 8,4f };
	vLocal_316 = { -272,8615f, -2186,932f, 9,3174f };
	fLocal_319 = 209,7233f;
	fLocal_320 = 90,947f;
	fLocal_323 = 46,7161f;
	if (func_422(0))
	{
		func_415(24, 0);
	}
	unk_0xA3A57BA8F775CAFF(0);
	unk_0xD941F8E30D7231AD("EXTRASUNNY", 20f);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_413(unk_0xFC1458A37D98B502(), 0);
		unk_0x8810DC630928B398("TRV4_FAIL");
		func_411();
		func_409();
	}
	func_408(1);
	unk_0xBC03901A15107317(1);
	iLocal_223 = 0;
	iLocal_222 = 0;
	while (true)
	{
		unk_0x48D75120C879E65E("M_LegalTrouble", 0);
		if (iLocal_249 > unk_0x53C562FD2B9E3AB0())
		{
			unk_0x391612227A0274F1();
		}
		func_404();
		func_403();
		func_401();
		func_397();
		func_396();
		switch (iLocal_222)
		{
			case 0:
				func_392();
				break;
			
			case 1:
				func_347();
				break;
			
			case 2:
				func_341();
				break;
			
			case 3:
				func_338();
				break;
			
			case 4:
				func_244();
				break;
			
			case 5:
				func_232();
				break;
			
			case 6:
				func_226();
				break;
			
			case 7:
				func_216();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		system::wait(0);
		func_1();
	}
}

void func_1()//Position - 0x28A
{
	if (iLocal_411 == 0)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			func_4(unk_0xFC1458A37D98B502(), 476);
			iLocal_411 = 1;
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (iLocal_412 == 0)
			{
				iLocal_289 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_289))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_289, 0))
					{
						func_3(iLocal_289, -1);
						func_4(iLocal_289, 479);
						iLocal_412 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_412 == 1)
			{
				iLocal_412 = 0;
			}
		}
	}
	if (iLocal_413[0] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_267[0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(uLocal_267[0]))
			{
				iLocal_233++;
				iLocal_413[0] = 1;
			}
		}
	}
	if (iLocal_413[1] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_267[1]))
		{
			if (unk_0x3AB6A1A9084FB0A4(uLocal_267[1]))
			{
				iLocal_233++;
				iLocal_413[1] = 1;
			}
		}
	}
	if (iLocal_413[2] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_267[2]))
		{
			if (unk_0x3AB6A1A9084FB0A4(uLocal_267[2]))
			{
				iLocal_233++;
				iLocal_413[2] = 1;
			}
		}
	}
	if (iLocal_413[3] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[0]))
			{
				iLocal_233++;
				iLocal_413[3] = 1;
			}
		}
	}
	if (iLocal_413[4] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[1]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[1]))
			{
				iLocal_233++;
				iLocal_413[4] = 1;
			}
		}
	}
	if (iLocal_413[5] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[2]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[2]))
			{
				iLocal_233++;
				iLocal_413[5] = 1;
			}
		}
	}
	if (iLocal_413[6] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[3]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[3]))
			{
				iLocal_233++;
				iLocal_413[6] = 1;
			}
		}
	}
	if (iLocal_413[7] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[4]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[4]))
			{
				iLocal_233++;
				iLocal_413[7] = 1;
			}
		}
	}
	if (iLocal_413[8] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[5]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[5]))
			{
				iLocal_233++;
				iLocal_413[8] = 1;
			}
		}
	}
	if (iLocal_413[9] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[6]))
			{
				iLocal_233++;
				iLocal_413[9] = 1;
			}
		}
	}
	if (iLocal_413[10] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[7]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[7]))
			{
				iLocal_233++;
				iLocal_413[10] = 1;
			}
		}
	}
	if (iLocal_413[11] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[8]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[8]))
			{
				iLocal_233++;
				iLocal_413[11] = 1;
			}
		}
	}
	if (iLocal_413[12] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[9]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[9]))
			{
				iLocal_233++;
				iLocal_413[12] = 1;
			}
		}
	}
	if (iLocal_413[13] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[10]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_268[10]))
			{
				iLocal_233++;
				iLocal_413[13] = 1;
			}
		}
	}
	if (iLocal_413[14] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_272))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_272))
			{
				iLocal_233++;
				iLocal_413[14] = 1;
			}
		}
	}
	if (iLocal_413[15] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_273))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_273))
			{
				iLocal_233++;
				iLocal_413[15] = 1;
			}
		}
	}
	if (iLocal_413[16] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_274))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_274))
			{
				iLocal_233++;
				iLocal_413[16] = 1;
			}
		}
	}
	if (iLocal_413[17] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_275[0]))
			{
				iLocal_233++;
				iLocal_413[17] = 1;
			}
		}
	}
	if (iLocal_222 == 8)
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
		{
			if (iLocal_414 == 0)
			{
				func_2(482, 0);
				iLocal_414 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)//Position - 0x6EB
{
	int iVar0;
	
	Global_55913 = iParam0;
	if (!Global_55911)
	{
		Global_55911 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] == iParam0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x735
{
	Global_55914 = iParam0;
	Global_55915 = iParam1;
}

void func_4(int iParam0, int iParam1)//Position - 0x747
{
	int iVar0;
	
	Global_55916 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (iParam1 == -1 || Global_67999[iVar0 /*9*/] == iParam1)
		{
			if (Global_67999[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67999[iVar0 /*9*/].f_6 = iParam0;
				Global_67999[iVar0 /*9*/].f_7 = 1;
				Global_67999[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()//Position - 0x7B2
{
	if (unk_0x3E9CABD07B829173())
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_285))
		{
			unk_0x6D4A70E9DE82B24B(iLocal_285, 0, 0, 1);
		}
	}
	if (iLocal_223 > 0)
	{
		func_214();
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_423 = 0;
		iLocal_426 = 0;
		iLocal_227 = 0;
		unk_0x6450931B826B49D9("Misssolomon_3");
		unk_0x6FF834D85E2DD4C6(joaat("oracle2"));
		unk_0x6FF834D85E2DD4C6(joaat("baller2"));
		if (unk_0xA6DECE14FC9A8C51(iLocal_297))
		{
			unk_0xE30CF11C0EE14316(&iLocal_297);
		}
		if (unk_0xC316B5E3E7ACF515("Trev4_5"))
		{
			unk_0x3794E4CC2803099A("Trev4_5", 0, 1f, 1f);
			unk_0xD22D83D359390CC6("Trev4_5");
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_279))
		{
			unk_0x5380482A432E314E(&iLocal_279);
		}
		system::settimera(0);
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_24())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_266))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
			{
				unk_0x5C5D33A1B2711D21(iLocal_266, true);
				unk_0x771A86309E0CA47B(iLocal_266, false);
			}
		}
		unk_0x8810DC630928B398("TRV4_LOSE_COPS");
		if (!unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS"))
		{
			unk_0xE859EF37EA7362D3("SOL_3_LOSE_COPS");
		}
		unk_0x84CDD933AFA470D2();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x771D0F8F56A5FE6C("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xE02E32C69260FBB7("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_263 = unk_0x068179DC75448F03(-948,4f, -2992,6f, 13,3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0x6ADD12BF4D6D2587(iLocal_284))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
			{
				unk_0x4518C09B36F3559B(iLocal_284, 0);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_285))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_285, 0))
			{
				unk_0x4518C09B36F3559B(iLocal_285, 0);
			}
		}
		unk_0xC0EBC1452FCAB15C(5);
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 3, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		unk_0x1B5A255BF0D63005("PoliceScannerDisabled", 0);
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_418 == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("oracle2")))
				{
					iLocal_293[0] = unk_0xEA60F3B426BB095B(joaat("oracle2"), -1025,596f, -2869,237f, 12,9585f, 241,0686f, true, true, false);
					unk_0xCFF0CD14B439821D(iLocal_293[0], true, 1);
					unk_0xACE486395AA1867D(iLocal_293[0], 1084227584);
					unk_0x14776E43F90DD454(joaat("oracle2"));
					iLocal_418 = 1;
				}
			}
		}
		if (iLocal_419 == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("baller2")))
				{
					iLocal_293[1] = unk_0xEA60F3B426BB095B(joaat("baller2"), -971,4223f, -2903,354f, 12,9652f, 61,0213f, true, true, false);
					unk_0xCFF0CD14B439821D(iLocal_293[1], true, 1);
					unk_0xACE486395AA1867D(iLocal_293[1], 1084227584);
					unk_0x14776E43F90DD454(joaat("baller2"));
					iLocal_419 = 1;
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_293[0], 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_293[0], 0))
				{
					if (!unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xE859EF37EA7362D3("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xFC1458A37D98B502(), iLocal_293[0], 1) > 200f || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_293[0], 0))
			{
				unk_0x5380482A432E314E(&(iLocal_293[0]));
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_293[1], 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_293[1], 0))
				{
					if (!unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xE859EF37EA7362D3("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xFC1458A37D98B502(), iLocal_293[1], 1) > 200f || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_293[1], 0))
			{
				unk_0x5380482A432E314E(&(iLocal_293[1]));
			}
		}
		if (iLocal_398 == 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[0]))
			{
				func_14(iLocal_268[0], "SURROUNDED", 24);
				iLocal_398 = 1;
			}
		}
		if (iLocal_367 == 0)
		{
			if (system::timera() > 8000)
			{
				if (unk_0xB8DE76287EDC4957(iLocal_286[0], 0))
				{
					unk_0x8D7ABC97ED508270(iLocal_286[0], 68, "BB_Chase", 1);
					unk_0xB426CADC4A19964C(iLocal_286[0], 0f, 0f, 0,15f);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_286[1], 0))
				{
					unk_0x8D7ABC97ED508270(iLocal_286[1], 69, "BB_Chase", 1);
					unk_0xB426CADC4A19964C(iLocal_286[1], 0f, 0f, 0,15f);
				}
				iLocal_367 = 1;
			}
		}
		else
		{
			if (unk_0xB8DE76287EDC4957(iLocal_286[0], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_286[0]))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_286[0]) > 5000f)
					{
						if (unk_0x9EC5112BB1C4047A(iLocal_286[0]))
						{
							unk_0x7674774BB9279265(iLocal_286[0]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[6]))
					{
						unk_0x771A86309E0CA47B(iLocal_268[6], false);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[7]))
					{
						unk_0x771A86309E0CA47B(iLocal_268[7], false);
					}
					iLocal_368 = 1;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_286[1], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_286[1]))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_286[1]) > 5000f)
					{
						if (unk_0x9EC5112BB1C4047A(iLocal_286[1]))
						{
							unk_0x7674774BB9279265(iLocal_286[1]);
						}
					}
				}
				else if (iLocal_369 == 0)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[8]))
					{
						unk_0x771A86309E0CA47B(iLocal_268[8], false);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[9]))
					{
						unk_0x771A86309E0CA47B(iLocal_268[9], false);
					}
					iLocal_369 = 1;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_285))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_285, 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_285, 0))
					{
						unk_0x8810DC630928B398("TRV4_JET_ENTERED");
						if (!unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xE859EF37EA7362D3("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x1267474D9A69CA37(4f, 15f, 4);
						unk_0x5380482A432E314E(&iLocal_285);
						iLocal_423 = 1;
					}
					else if (func_16(unk_0xFC1458A37D98B502(), iLocal_285, 1) > 200f)
					{
						unk_0x5380482A432E314E(&iLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_285))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_285, 0))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_285, 0))
					{
						if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x8810DC630928B398("TRV4_LOSE_COPS");
						iLocal_423 = 0;
					}
				}
			}
		}
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
		{
			if (iLocal_426 == 0)
			{
				iLocal_235 = unk_0x53C562FD2B9E3AB0();
				iLocal_426 = 1;
			}
		}
		if (iLocal_426 == 1)
		{
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_235 + 3500)
				{
					if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS"))
					{
						unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS");
					}
					if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x8810DC630928B398("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0;
			}
		}
	}
}

void func_6()//Position - 0xE96
{
	func_10(481, iLocal_233, 0);
	func_7(0, 0);
	func_409();
}

void func_7(bool bParam0, int iParam1)//Position - 0xEB3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55905)
	{
		Global_55905 = iParam1;
	}
	if (bParam0)
	{
		if ((func_422(0) && Global_71102.f_1 == 1) && func_9(Global_71102))
		{
		}
		else
		{
			Global_55903 = 1;
		}
	}
	if (Global_104555.f_9055 || func_422(0))
	{
		iVar0 = func_8();
		iVar1 = Global_83730[iVar0 /*5*/];
		uVar2 = Global_71125.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104555.f_9055)
			{
			}
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 4);
		unk_0x872F1C1F8587CCC7(&Global_71104, 1);
		Global_71120 = uVar2;
		Global_71121 = unk_0x53C562FD2B9E3AB0();
	}
}

int func_8()//Position - 0xF89
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xC80D31E4B587871C(Global_83730[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)//Position - 0xFBE
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)//Position - 0xFFC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67998)
	{
		if (Global_67999[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67999[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67999[iVar0 /*9*/].f_1 = (Global_67999[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67999[iVar0 /*9*/] != -1)
	{
		if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67999[iVar0 /*9*/].f_1 > 1)
			{
				Global_67999[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67999[iVar0 /*9*/].f_1 < 0)
			{
				Global_67999[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)//Position - 0x10A6
{
	int iVar0;
	
	if (Global_55911)
	{
	}
	Global_55911 = 0;
	if (bParam0)
	{
		Global_55912 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_56128[Global_67999[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67999[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67998)
		{
			if (Global_67999[iVar0 /*9*/] > 0)
			{
				if (Global_67999[iVar0 /*9*/] == iParam1)
				{
					Global_67999[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()//Position - 0x1140
{
	iLocal_231 = 0;
	while (iLocal_231 <= 9)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[iLocal_231]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[iLocal_231]))
			{
				if (!unk_0x88DDBE9908752BF0(iLocal_268[iLocal_231], 0))
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[iLocal_231]) > 200f)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_268[iLocal_231]);
							unk_0x486F346ADFE56674(&(iLocal_268[iLocal_231]));
						}
						else if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[iLocal_231]) > 20f)
						{
							if (unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], -1207174364) != 1 && unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], -1207174364) != 0)
							{
								unk_0x2C85E478535743C1(iLocal_268[iLocal_231], unk_0xFC1458A37D98B502(), unk_0xFC1458A37D98B502(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], 780511057) != 1 && unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], 780511057) != 0)
						{
							unk_0xD7F5B2902EBBD04E(iLocal_268[iLocal_231], unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xAE6EBBBBD8B9FB30(iLocal_268[iLocal_231], 50, true);
						}
					}
					else if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[iLocal_231]) > 200f)
					{
						unk_0x486F346ADFE56674(&(iLocal_268[iLocal_231]));
					}
					else if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[iLocal_231]) > 5f)
					{
						if (unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], -1207174364) != 1 && unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], -1207174364) != 0)
						{
							unk_0x2C85E478535743C1(iLocal_268[iLocal_231], unk_0xFC1458A37D98B502(), unk_0xFC1458A37D98B502(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], 780511057) != 1 && unk_0x78F50AA8F955BEFC(iLocal_268[iLocal_231], 780511057) != 0)
					{
						unk_0xD7F5B2902EBBD04E(iLocal_268[iLocal_231], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xAE6EBBBBD8B9FB30(iLocal_268[iLocal_231], 50, true);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_286[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_286[0], 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_286[0]))
					{
					}
					else
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[6]))
							{
								unk_0x771A86309E0CA47B(iLocal_268[6], false);
								unk_0xB8E08BD5B184DF4E(iLocal_268[6]);
								unk_0x6931076730A4AC5D(&iLocal_304);
								unk_0x4F8A35D7CBC17327(0, iLocal_286[0], 256);
								unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
								unk_0x1B16DD5C115FE009(iLocal_304);
								unk_0xAB30B1CF01A198C1(iLocal_268[6], iLocal_304);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_268[7]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[7]))
							{
								unk_0x771A86309E0CA47B(iLocal_268[7], false);
								unk_0xB8E08BD5B184DF4E(iLocal_268[7]);
								unk_0x6931076730A4AC5D(&iLocal_304);
								unk_0x4F8A35D7CBC17327(0, iLocal_286[0], 256);
								unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
								unk_0x1B16DD5C115FE009(iLocal_304);
								unk_0xAB30B1CF01A198C1(iLocal_268[7], iLocal_304);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
		else if (iLocal_399 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_286[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_286[0], 0))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[6]))
						{
							if (!unk_0xA8D0477084E86A92(iLocal_268[6], iLocal_286[0], 0))
							{
								if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[6]) < 20f)
								{
									func_14(iLocal_268[6], "DRAW_GUN", 24);
									iLocal_399 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_286[1]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_286[1], 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_286[1]))
					{
					}
					else
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_268[8]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[8]))
							{
								unk_0x771A86309E0CA47B(iLocal_268[8], false);
								unk_0xB8E08BD5B184DF4E(iLocal_268[8]);
								unk_0x6931076730A4AC5D(&iLocal_304);
								unk_0x4F8A35D7CBC17327(0, iLocal_286[1], 256);
								unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
								unk_0x1B16DD5C115FE009(iLocal_304);
								unk_0xAB30B1CF01A198C1(iLocal_268[8], iLocal_304);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							}
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_268[9]))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[9]))
							{
								unk_0x771A86309E0CA47B(iLocal_268[9], false);
								unk_0xB8E08BD5B184DF4E(iLocal_268[9]);
								unk_0x6931076730A4AC5D(&iLocal_304);
								unk_0x4F8A35D7CBC17327(0, iLocal_286[1], 256);
								unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
								unk_0x1B16DD5C115FE009(iLocal_304);
								unk_0xAB30B1CF01A198C1(iLocal_268[9], iLocal_304);
								unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							}
						}
						iLocal_345 = 1;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_268[10]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[10]))
			{
				if (func_13(unk_0xFC1458A37D98B502(), iLocal_268[10]) > 200f)
				{
					unk_0x486F346ADFE56674(&(iLocal_268[iLocal_231]));
					unk_0xFCCDDE0E48CF9588("misssolomon_3");
				}
				else if (unk_0x3A801AA34DD821BE("misssolomon_3"))
				{
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -923,2303f, -2948,004f, 12,9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[10]))
						{
							unk_0xB8E08BD5B184DF4E(iLocal_268[10]);
							unk_0x6931076730A4AC5D(&iLocal_304);
							unk_0x12C9D41D52A560D6(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0x1B16DD5C115FE009(iLocal_304);
							unk_0xAB30B1CF01A198C1(iLocal_268[10], iLocal_304);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							iLocal_346 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)//Position - 0x170E
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(int iParam0, char* sParam1, int iParam2)//Position - 0x171F
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)//Position - 0x1736
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x192B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vVar1, bParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1989
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_18(int iParam0, bool bParam1)//Position - 0x1A24
{
	if (unk_0xC80D31E4B587871C(Global_25391, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_25391, iParam0);
			StringCopy(&(Global_25392[iParam0 /*6*/]), "NULL", 24);
			Global_25447[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)//Position - 0x1A5B
{
	if (unk_0xC80D31E4B587871C(Global_25391, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)//Position - 0x1A74
{
	iParam2 = iParam2;
	unk_0xCFFAC52CF8717D56(sParam0);
	unk_0x4D0B431E65A53BFC(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0x1A8D
{
	if (func_23() && func_24())
	{
		while (Global_92828 != 6)
		{
			system::wait(0);
		}
		unk_0x6ACDC20166AA3FAC(0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x6ADD12BF4D6D2587(iParam0))
				{
					if (unk_0xB8DE76287EDC4957(iParam0, 0))
					{
						if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iParam0, 0))
						{
							unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iParam0, iParam1);
							unk_0x7C9705890EF6612E(0f, 1065353216);
							unk_0xBB9A3C553EECB180(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		unk_0x10DF8268B3B64093();
		func_22(0);
	}
}

void func_22(int iParam0)//Position - 0x1B51
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 13);
	}
}

int func_23()//Position - 0x1B7A
{
	if (Global_92833 == 10 || Global_92833 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0x1B9E
{
	return unk_0xC80D31E4B587871C(Global_92833.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1BB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x74C475EB8E73D398("FinaleC2", unk_0x436287B7DB306165()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_116(1);
		if (iParam0 <= Global_92870)
		{
		}
		iVar1 = func_114(unk_0x436287B7DB306165(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104555.f_9055.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_112(iVar1);
			cVar3 = { Global_83766[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104555.f_9055.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xEBDD0888F628D3FB(&cVar3, iVar2, Global_92870, iParam0);
		}
		else
		{
			iVar4 = func_107(unk_0x436287B7DB306165(), 1);
			if (iVar4 != -1)
			{
				Global_104555.f_18544[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_106(iVar4)}, 4);
				unk_0xEBDD0888F628D3FB(&uVar5, 0, Global_92870, iParam0);
			}
			else
			{
				iVar6 = func_105(&(Global_92833.f_3));
				if (iVar6 > -1)
				{
					Global_104555.f_24956.f_4[iVar6] = 0;
				}
			}
		}
		Global_87156 = iParam2;
		Global_92870 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x74C475EB8E73D398(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92870)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1D28
{
	func_27(&Global_98118, unk_0x436287B7DB306165(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x1D44
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_104();
	uParam0->f_1 = func_93();
	unk_0xFEA5CA2D657FCB82(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		func_67(&(uParam0->f_2869), 0);
		func_66(unk_0xFC1458A37D98B502());
		func_59(unk_0xFC1458A37D98B502(), 0);
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104555.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0xFC1458A37D98B502(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92623[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92623[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92623[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92623[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92623[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92623[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92623[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92623[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92623[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92623[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104555.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFA3CE529DBB66C85(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104555.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53077[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104555.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104555.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104555.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104555.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFA3CE529DBB66C85(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xFA3CE529DBB66C85(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)//Position - 0x2BCC
{
	*uParam0 = Global_88827;
	uParam0->f_1 = Global_88828;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BEE
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xFC1458A37D98B502();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
		{
			if (unk_0xB0DA749C8A7CCBBF(iVar0, joaat("skylift")) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2C76
{
	if (unk_0xB8DE76287EDC4957(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x2CB6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)//Position - 0x2CE4
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		uParam0->f_6 = unk_0xF0371FE6E2BF9599(iParam1);
		uParam0->f_3 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
		if (unk_0x0F3033474C49912D(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_70583 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)//Position - 0x2DC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if (iParam0 == Global_69678.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x2E02
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 145;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				return Global_90319[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x2E65
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (Global_90309[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90319[iVar0])
				{
					if (iParam2 == 0 || unk_0x82FF3DFBC3965CC0(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)//Position - 0x2EF3
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x2F35
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104555.f_9055.f_99.f_58[128] && !Global_104555.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104555.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104555.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)//Position - 0x3191
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)//Position - 0x319D
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_40(int iParam0)//Position - 0x3448
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_41(int iParam0, var uParam1, var uParam2)//Position - 0x34F8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x35D2
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)//Position - 0x35F2
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x36A3
{
	char* sVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			if (iParam0 == unk_0xFC1458A37D98B502())
			{
				*uParam1 = unk_0xC733212BF9066BDF();
			}
			else
			{
				*uParam1 = unk_0xDFD115BB10FE46A9(iParam0, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(*uParam1))
			{
				if (unk_0xB8DE76287EDC4957(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(*uParam1, 1), unk_0xB3328BA8976B416C(iParam0, 1), true) < 100f)
					{
						if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("taxi")))
						{
							if (unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != iParam0 && unk_0x317536BCEA8FA6B0(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_104(), 1))
						{
							sVar0 = unk_0x436287B7DB306165();
							if (!unk_0x74C475EB8E73D398(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x88DDBE9908752BF0(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB80A4DA4C06A76F1(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD5736BCB654EA8FC(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xB0DA749C8A7CCBBF(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)//Position - 0x37D2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xC80D31E4B587871C(Global_104555.f_7199[iVar2], 0))
		{
			if (unk_0x7840B5C83A85E7C6(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3843
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x391C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x3959
{
	if (func_38(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, var uParam1, int iParam2)//Position - 0x3983
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104555.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x3A711520F83BAE98() && unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_50(749, Global_70668, 0);
			}
			uParam1->f_60 = func_50(750, Global_70668, 0);
			uParam1->f_61 = func_50(751, Global_70668, 0);
		}
		if (unk_0x3A711520F83BAE98() && iParam0 == unk_0xFC1458A37D98B502())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2048, Global_70668, 0);
			}
			else
			{
				uParam1->f_59 = func_50(749, Global_70668, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x3B2D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)//Position - 0x3B5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_52()//Position - 0x3B93
{
	return Global_1312736;
}

int func_53(int iParam0, int iParam1)//Position - 0x3B9F
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2547365[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3BCB
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
		*uParam3 = unk_0xC563C871267881C4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x97610277C0BBC6FC(iParam0) && unk_0x928EC8A04257C833(iParam0) != -1)
				{
					*uParam2 = unk_0x928EC8A04257C833(iParam0);
					*uParam3 = unk_0xDA2D990A7F8DFA7E(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x4114
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x4CDD2D1D66ED1DE4(iParam0, iParam1);
		*uParam3 = unk_0xDCC2BD4C56470D10(iParam0, iParam1);
		*uParam4 = unk_0x6AC6F0502D04B9F9(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_56()//Position - 0x4355
{
	func_57();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_57()//Position - 0x436E
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_48(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_47(unk_0xFC1458A37D98B502());
			if (func_38(iVar0) && (!func_58(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_38(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_58(int iParam0)//Position - 0x446B
{
	return Global_35861 == iParam0;
}

void func_59(int iParam0, bool bParam1)//Position - 0x4479
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam0 == unk_0xFC1458A37D98B502())
		{
			func_60(iParam0, &(Global_104555.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB29211B2B4084E43(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x7F23DDBA3ACA51BC();
					if (Global_104555.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104555.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8475A4404BC86972(unk_0x9EB17624F44A8DA4(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xBFFF62F75445099D(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xBFFF62F75445099D(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xBFFF62F75445099D(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1)//Position - 0x456C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_65(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xB50B73D3F4DD1613(iParam0, func_65(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
					Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_63(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, iVar2))
						{
							unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_63(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x359D12B4F89DA5D6();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xD10DDFA63A9D9BDA(iVar5, &Var7) && !func_62(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0x42683C90F2D005ED(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x5088CF774DF6D935(iParam0, Var4);
					if (unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x3CC6ABB1D2EC7E28(iParam0, Var4);
						Var4.f_4 = unk_0x483852B06034011D(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6407D3750DB405F3(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x16DE9AAC68A15A81(iVar5))
					{
						if (unk_0x768809DD20D4F552(iVar5, iVar1, &Var8))
						{
							if (!func_61(Var8.f_3))
							{
								if (unk_0xB1C7BCEE5648EB7D(iParam0, Var4, Var8.f_3))
								{
									unk_0x872F1C1F8587CCC7(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xA8388473C755363D(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_61(int iParam0)//Position - 0x47F6
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x4891
{
	if (unk_0x3A711520F83BAE98())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)//Position - 0x4A05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_64(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_61(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_64(int iParam0, var uParam1)//Position - 0x5576
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_65(int iParam0)//Position - 0x55B1
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_66(int iParam0)//Position - 0x5825
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		Global_104555.f_2353.f_539.f_294[iVar0] = unk_0x8027E7B955FF320D(iParam0);
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x5861
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	uParam0->f_3 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	uParam0->f_5 = unk_0x7D187A62A99ED071(unk_0xFC1458A37D98B502());
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		uParam0->f_4 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x8F38E94BBF3404CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (unk_0xC80D31E4B587871C(Global_71104, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xC0765AFBFA616644(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, true, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, true, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_71(&iVar0))
		{
			if (func_69(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, true, 0))
		{
			iVar3 = func_104();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, true, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_68(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_68(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5DBC
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD42907FA80A6F327(vParam0))
	{
		iVar0 = unk_0xC0765AFBFA616644(vParam2, sParam1);
		if (!unk_0x2C2E1E35924B9FF2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x54EA77341255C23C(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_69(int iParam0, var uParam1, var uParam2)//Position - 0x5E00
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_70(*uParam1, 0f, 0f, 0f, 0);
}

bool func_70(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x64B7
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_71(var uParam0)//Position - 0x64FE
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (func_92())
		{
			*uParam0 = func_77(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), 6, -1, 0, 1, -1);
			if (func_76(*uParam0) && !func_72(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x6559
{
	return func_73(iParam0, 0, 1);
}

int func_73(int iParam0, int iParam1, bool bParam2)//Position - 0x6569
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_75() == 0)
		{
			return unk_0xC80D31E4B587871C(func_50(func_74(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x65C9
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

int func_75()//Position - 0x68AE
{
	return Global_25233;
}

int func_76(int iParam0)//Position - 0x68B9
{
	return func_73(iParam0, 5, 1);
}

int func_77(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x68C9
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam1 == 6 || iParam1 == func_91(iVar0))
		{
			if (!bParam3 || func_90(iVar0))
			{
				fVar1 = unk_0xBE3C4023003180FC(vParam0, func_78(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_78(int iParam0, bool bParam1)//Position - 0x696B
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_89(Global_94374);
			break;
		
		case 46:
			if (Global_1595538 != func_88())
			{
				if (func_87(Global_1595538))
				{
					return func_80(2, 2);
				}
				else if (func_79(Global_1595538))
				{
					return func_80(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_79(int iParam0)//Position - 0x6F0A
{
	if (iParam0 != func_88())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 0) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 1)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0, int iParam1)//Position - 0x6F68
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595538 != func_88())
	{
		if (iParam1 == 3)
		{
			if (func_81(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 4))
			{
				if (func_81(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_1595693[Global_1595538 /*680*/].f_266.f_236, 5))
			{
				if (func_81(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_81(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x7016
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_86(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_86(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_84(iParam0) };
	}
	else
	{
		Var2 = { func_83(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_82(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_82(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_82(vector3 vParam0, float fParam1)//Position - 0x70AB
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_83(int iParam0)//Position - 0x70EF
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_84(int iParam0)//Position - 0x7273
{
	return func_85(iParam0);
}

struct<6> func_85(int iParam0)//Position - 0x7281
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_86(int iParam0, var uParam1)//Position - 0x7D48
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x7DCA
{
	if (iParam0 != func_88())
	{
		if ((unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 3) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 4)) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x7E28
{
	return -1;
}

Vector3 func_89(int iParam0)//Position - 0x7E31
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_90(int iParam0)//Position - 0x7FCE
{
	return func_73(iParam0, 0, 0);
}

int func_91(int iParam0)//Position - 0x7FDE
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_92()//Position - 0x8286
{
	return Global_92885.f_315 > 0;
}

var func_93()//Position - 0x8297
{
	var uVar0;
	
	func_103(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_102(&uVar0, unk_0x95327550F0F2BE7C());
	func_101(&uVar0, unk_0x674C9438180770FE());
	func_96(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_95(&uVar0, unk_0xEAF455949B108589());
	func_94(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_94(var uParam0, int iParam1)//Position - 0x82DD
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_95(var uParam0, int iParam1)//Position - 0x8363
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_96(var uParam0, int iParam1)//Position - 0x8396
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(*uParam0);
	iVar1 = func_98(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_97(int iParam0, int iParam1)//Position - 0x83E7
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_98(int iParam0)//Position - 0x8489
{
	return (system::shift_right(iParam0, 26) & 31 * func_99(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_99(bool bParam0, int iParam1, int iParam2)//Position - 0x84AE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_100(int iParam0)//Position - 0x84C5
{
	return iParam0 & 15;
}

void func_101(var uParam0, int iParam1)//Position - 0x84D2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_102(var uParam0, int iParam1)//Position - 0x850C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_103(var uParam0, int iParam1)//Position - 0x8547
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_104()//Position - 0x8583
{
	func_57();
	return Global_104555.f_2353.f_539.f_4301;
}

int func_105(char* sParam0)//Position - 0x859C
{
	if (unk_0x74C475EB8E73D398("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x74C475EB8E73D398("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x74C475EB8E73D398("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_106(int iParam0)//Position - 0x85F2
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_107(char* sParam0, int iParam1)//Position - 0x8A3F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x8B948C59217A295D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_108(iVar0, &sVar1);
		if (unk_0x8B948C59217A295D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_108(int iParam0, var uParam1)//Position - 0x8A88
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9CCF
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_110(int iParam0)//Position - 0x9D60
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_111(int iParam0)//Position - 0xA0A6
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_106(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_112(int iParam0)//Position - 0xA0DE
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_113(Global_104555.f_9055.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_113(Global_104555.f_9055.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_113(Global_104555.f_9055.f_99.f_205[11]);
			break;
		
		case 90:
			return func_113(Global_104555.f_9055.f_99.f_205[7]);
			break;
		
		case 93:
			return func_113(Global_104555.f_9055.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0xA19A
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_114(char* sParam0, bool bParam1)//Position - 0xA1EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8B948C59217A295D(sParam0);
	iVar1 = func_115(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_115(int iParam0, bool bParam1)//Position - 0xA218
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83766[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_116(bool bParam0)//Position - 0xA24E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_117()//Position - 0xA4D0
{
	unk_0x454CF500961BA1F5("EXTRASUNNY");
	func_213();
	func_185();
	func_119();
	if (!func_24())
	{
		func_118();
	}
	iLocal_349 = 1;
	unk_0xBB9A3C553EECB180(0f);
}

void func_118()//Position - 0xA4FF
{
	switch (iLocal_222)
	{
		case 2:
			unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1019,579f, -484,872f, 36,0795f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 93,7701f);
			break;
		
		case 3:
			if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
			{
				if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_279, 0))
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), iLocal_279, -1);
				}
				unk_0xE01CE1EBCD7EE551(iLocal_279, 3000, 0);
				unk_0xD38F266C132F2897(iLocal_279, false, true, false, false, false, false, 0, false);
			}
			break;
		
		case 5:
			unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -935,4413f, -2928,061f, 12,9451f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 178,466f);
			unk_0xCFF0CD14B439821D(unk_0xFC1458A37D98B502(), true, 1);
			break;
		
		case 8:
			unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -937,5466f, -2968,713f, 12,9451f, 1, false, 0, 1);
			unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 111,5016f);
			unk_0xCFF0CD14B439821D(unk_0xFC1458A37D98B502(), true, 1);
			break;
	}
}

void func_119()//Position - 0xA618
{
	switch (iLocal_222)
	{
		case 2:
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x247EAA2E93D4A021(-1026,8f, -492,1f, 36f, 18f, 1, 0, 0, false);
			unk_0x4C15495E88D71C61(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, false, 1);
			unk_0x2EB451A3616DA1F8(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, 0);
			unk_0x6FF834D85E2DD4C6(joaat("rapidgt"));
			unk_0x6FF834D85E2DD4C6(joaat("surano"));
			unk_0x6FF834D85E2DD4C6(joaat("carbonizzare"));
			while ((!unk_0x9A0B2ED5055D3F0B(joaat("rapidgt")) || !unk_0x9A0B2ED5055D3F0B(joaat("surano"))) || !unk_0x9A0B2ED5055D3F0B(joaat("carbonizzare")))
			{
				system::wait(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				unk_0x247EAA2E93D4A021(vLocal_306, 5f, 1, 0, 0, false);
				iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), vLocal_306, fLocal_319, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
				unk_0xE01CE1EBCD7EE551(iLocal_279, 3000, 0);
				unk_0x9980244E5DAEFED4(iLocal_279, true);
				unk_0x14776E43F90DD454(joaat("rapidgt"));
				unk_0x2E4932E63763FE26(joaat("rapidgt"), true);
				unk_0xFBA991D3A851E195(iLocal_279, true);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_290))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("surano")))
				{
					unk_0x247EAA2E93D4A021(-1037,398f, -491,6539f, 35,5545f, 5f, 1, 0, 0, false);
					iLocal_290 = unk_0xEA60F3B426BB095B(joaat("surano"), -1037,398f, -491,6539f, 35,5545f, 208,889f, true, true, false);
					unk_0x1E7A8525FB41AAFE(iLocal_290, 0, 0);
					unk_0xE01CE1EBCD7EE551(iLocal_290, 3000, 0);
					unk_0x9980244E5DAEFED4(iLocal_290, true);
					unk_0x14776E43F90DD454(joaat("surano"));
					unk_0x2E4932E63763FE26(joaat("surano"), true);
					unk_0x438D30A195B65156(iLocal_290, true);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_291))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("carbonizzare")))
				{
					unk_0x247EAA2E93D4A021(vLocal_306, 5f, 1, 0, 0, false);
					iLocal_291 = unk_0xEA60F3B426BB095B(joaat("carbonizzare"), -1033,938f, -489,7475f, 35,8323f, 207,1758f, true, true, false);
					unk_0x1E7A8525FB41AAFE(iLocal_291, 89, 89);
					unk_0xE01CE1EBCD7EE551(iLocal_291, 3000, 0);
					unk_0x9980244E5DAEFED4(iLocal_291, true);
					unk_0x14776E43F90DD454(joaat("carbonizzare"));
					unk_0x2E4932E63763FE26(joaat("carbonizzare"), true);
					unk_0x438D30A195B65156(iLocal_291, true);
				}
			}
			break;
		
		case 3:
			unk_0xAAB7D68F04F8C8BA("TRV4_CHASE");
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			func_182();
			unk_0x247EAA2E93D4A021(vLocal_307, 200f, 1, 0, 0, false);
			if (!unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				iLocal_278 = unk_0xEA60F3B426BB095B(joaat("cogcabrio"), vLocal_307, fLocal_320, true, true, false);
				unk_0xD38F266C132F2897(iLocal_278, true, true, true, true, true, false, 0, false);
				unk_0x1E7A8525FB41AAFE(iLocal_278, 27, 27);
				unk_0x14776E43F90DD454(joaat("cogcabrio"));
				unk_0x6CF99BCE94E6F07C(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				iLocal_264 = unk_0x00D1A9572426E8DD(iLocal_278, 26, joaat("ig_molly"), -1, 1, true);
				unk_0xD38F266C132F2897(iLocal_264, true, true, true, true, true, false, 0, false);
				unk_0x1A0806871323CD16(iLocal_264, true);
				unk_0x5C5D33A1B2711D21(iLocal_264, false);
				unk_0x14776E43F90DD454(joaat("ig_molly"));
				unk_0xCE93FCB8A8D8DF0B(iLocal_264, 1862763509);
			}
			if (func_23())
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
				{
					if (func_181())
					{
						if (!unk_0xF9DDB1C0875FD9E0(func_180()) && !unk_0x849A8CFD71854E02(func_180()))
						{
							iLocal_279 = func_140(vLocal_316, fLocal_323);
							unk_0x14776E43F90DD454(func_180());
							unk_0x438D30A195B65156(iLocal_279, true);
						}
						else
						{
							iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
							unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
						}
					}
					else
					{
						iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
						unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
					}
					unk_0xE01CE1EBCD7EE551(iLocal_279, 3000, 0);
					unk_0x9980244E5DAEFED4(iLocal_279, true);
					unk_0xD38F266C132F2897(iLocal_279, false, true, false, false, false, false, 0, false);
					unk_0xFBA991D3A851E195(iLocal_279, true);
					unk_0x14776E43F90DD454(joaat("rapidgt"));
					unk_0x438D30A195B65156(iLocal_279, true);
				}
			}
			else if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
				unk_0x14776E43F90DD454(joaat("rapidgt"));
				unk_0xE01CE1EBCD7EE551(iLocal_279, 3000, 0);
				unk_0x9980244E5DAEFED4(iLocal_279, true);
				unk_0xD38F266C132F2897(iLocal_279, false, true, false, false, false, false, 0, false);
				unk_0xFBA991D3A851E195(iLocal_279, true);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
			break;
		
		case 5:
			iLocal_350 = 0;
			unk_0x247EAA2E93D4A021(-973,3f, -2967,7f, 13,5f, 100f, 1, 0, 0, false);
			system::settimera(0);
			unk_0x6FF834D85E2DD4C6(joaat("jet"));
			unk_0x6FF834D85E2DD4C6(joaat("shamal"));
			unk_0x307EAE14C924E2E7("BB_MOLLY_2");
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_airworker"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_cop_01"));
			unk_0x6FF834D85E2DD4C6(joaat("police3"));
			unk_0x6FF834D85E2DD4C6(joaat("ig_molly"));
			unk_0x6FF834D85E2DD4C6(joaat("cogcabrio"));
			unk_0x6FF834D85E2DD4C6(joaat("rapidgt"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_cs_film_reel_01"));
			unk_0x0D9525F20FB71C52(68, "BB_Chase");
			unk_0x0D9525F20FB71C52(69, "BB_Chase");
			unk_0x307EAE14C924E2E7("Trev4_5");
			unk_0x36905B9EE07F38CC();
			unk_0x6450931B826B49D9("move_f@film_reel_arms");
			unk_0x6450931B826B49D9("misssolomon_3");
			while (((((((((((((((!unk_0x9A0B2ED5055D3F0B(joaat("jet")) || !unk_0x9A0B2ED5055D3F0B(joaat("shamal"))) || !unk_0xC316B5E3E7ACF515("BB_MOLLY_2")) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_airworker"))) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_cop_01"))) || !unk_0x9A0B2ED5055D3F0B(joaat("police3"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_molly"))) || !unk_0x9A0B2ED5055D3F0B(joaat("cogcabrio"))) || !unk_0x9A0B2ED5055D3F0B(joaat("rapidgt"))) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_film_reel_01"))) || !unk_0x0840F461D7BD8859(68, "BB_Chase")) || !unk_0x0840F461D7BD8859(69, "BB_Chase")) || !unk_0xC316B5E3E7ACF515("Trev4_5")) || !unk_0xFEDD99169EC73AA6()) || !unk_0x3A801AA34DD821BE("move_f@film_reel_arms")) || !unk_0x3A801AA34DD821BE("misssolomon_3"))
			{
				system::wait(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				iLocal_264 = unk_0xAC992EFAD62C33BF(26, joaat("ig_molly"), -920,5093f, -2943,93f, 12,9451f, 157,6203f, 1, true);
				unk_0x1A0806871323CD16(iLocal_264, true);
				unk_0x5C5D33A1B2711D21(iLocal_264, false);
				unk_0x771A86309E0CA47B(iLocal_264, true);
				unk_0x14776E43F90DD454(joaat("ig_molly"));
				unk_0xCFF0CD14B439821D(iLocal_264, true, 1);
				unk_0xCE93FCB8A8D8DF0B(iLocal_264, 1862763509);
			}
			iLocal_295 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
			unk_0xA9D382E7BA095148(iLocal_295, iLocal_264, unk_0xDD09837E5235FE91(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0x6ADD12BF4D6D2587(iLocal_284))
			{
				iLocal_284 = unk_0xEA60F3B426BB095B(joaat("jet"), -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0xC7BF27112709A906(iLocal_284, 2);
				unk_0xCF5EB2CB1B30F02C(iLocal_284, 0);
				unk_0xEDC33A771FAEB393(iLocal_284, true);
				unk_0xD38F266C132F2897(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x14776E43F90DD454(joaat("jet"));
				unk_0xCFB385D0FF082808(iLocal_284, 500);
			}
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						system::wait(0);
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
				{
					if (func_181())
					{
						iLocal_279 = func_140(-918,6263f, -2926,631f, 12,9666f, 43,1705f);
						unk_0xFBA991D3A851E195(iLocal_279, true);
						unk_0x14776E43F90DD454(func_180());
						unk_0x438D30A195B65156(iLocal_279, true);
					}
					else
					{
						iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
						unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
						unk_0xFBA991D3A851E195(iLocal_279, true);
						unk_0x14776E43F90DD454(joaat("rapidgt"));
						unk_0x438D30A195B65156(iLocal_279, true);
					}
				}
			}
			else if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
				unk_0x14776E43F90DD454(joaat("rapidgt"));
				unk_0xFBA991D3A851E195(iLocal_279, true);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				iLocal_278 = unk_0xEA60F3B426BB095B(joaat("cogcabrio"), -928,3279f, -2916,16f, 12,945f, 61,7688f, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_278, 27, 27);
				unk_0x14776E43F90DD454(joaat("cogcabrio"));
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_281))
			{
				iLocal_281 = unk_0xEA60F3B426BB095B(joaat("police3"), -924,2796f, -2914,371f, 12,945f, 86,6188f, true, true, false);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_272))
			{
				iLocal_272 = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), -922,942f, -2912,509f, 12,945f, 156,2652f, 1, true);
				unk_0x9E058151726E58DE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_124(iLocal_272, 0);
				unk_0x14776E43F90DD454(joaat("s_m_y_cop_01"));
			}
			system::settimera(0);
			func_123(2, 1);
			iLocal_358 = 1;
			break;
		
		case 8:
			unk_0x247EAA2E93D4A021(-973,3f, -2967,7f, 13,5f, 100f, 1, 0, 0, false);
			system::settimera(0);
			iLocal_350 = 0;
			iLocal_358 = 0;
			iLocal_337 = 0;
			unk_0x6FF834D85E2DD4C6(joaat("jet"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_airworker"));
			unk_0x6FF834D85E2DD4C6(joaat("shamal"));
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_cop_01"));
			unk_0x6FF834D85E2DD4C6(joaat("police3"));
			unk_0x6FF834D85E2DD4C6(joaat("cogcabrio"));
			unk_0x6FF834D85E2DD4C6(joaat("rapidgt"));
			unk_0x6FF834D85E2DD4C6(joaat("prop_jet_bloodsplat_01"));
			unk_0x0D9525F20FB71C52(68, "BB_Chase");
			unk_0x0D9525F20FB71C52(69, "BB_Chase");
			unk_0x36905B9EE07F38CC();
			while ((((((((((!unk_0x9A0B2ED5055D3F0B(joaat("jet")) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_airworker"))) || !unk_0x9A0B2ED5055D3F0B(joaat("shamal"))) || !unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_cop_01"))) || !unk_0x9A0B2ED5055D3F0B(joaat("police3"))) || !unk_0x9A0B2ED5055D3F0B(joaat("cogcabrio"))) || !unk_0x9A0B2ED5055D3F0B(joaat("rapidgt"))) || !unk_0x9A0B2ED5055D3F0B(joaat("prop_jet_bloodsplat_01"))) || !unk_0x0840F461D7BD8859(68, "BB_Chase")) || !unk_0x0840F461D7BD8859(69, "BB_Chase")) || !unk_0xFEDD99169EC73AA6())
			{
				system::wait(0);
			}
			func_122();
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						system::wait(0);
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
				{
					if (func_181())
					{
						iLocal_279 = func_140(-918,6263f, -2926,631f, 12,9666f, 43,1705f);
						unk_0xFBA991D3A851E195(iLocal_279, true);
						unk_0x14776E43F90DD454(func_180());
						unk_0x438D30A195B65156(iLocal_279, true);
					}
					else
					{
						iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
						unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
						unk_0xFBA991D3A851E195(iLocal_279, true);
						unk_0x14776E43F90DD454(joaat("rapidgt"));
						unk_0x438D30A195B65156(iLocal_279, true);
					}
				}
			}
			else if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), -918,6263f, -2926,631f, 12,9666f, 43,1705f, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
				unk_0x14776E43F90DD454(joaat("rapidgt"));
				unk_0xFBA991D3A851E195(iLocal_279, true);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				iLocal_278 = unk_0xEA60F3B426BB095B(joaat("cogcabrio"), -928,3279f, -2916,16f, 12,945f, 61,7688f, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_278, 27, 27);
				unk_0x14776E43F90DD454(joaat("cogcabrio"));
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_281))
			{
				iLocal_281 = unk_0xEA60F3B426BB095B(joaat("police3"), -924,2796f, -2914,371f, 12,945f, 86,6188f, true, true, false);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_272))
			{
				iLocal_272 = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), -922,942f, -2912,509f, 12,945f, 156,2652f, 1, true);
				unk_0x9E058151726E58DE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_124(iLocal_272, 0);
				unk_0x14776E43F90DD454(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_294))
			{
				iLocal_294 = unk_0x5E35CF35E65D69B9(joaat("prop_jet_bloodsplat_01"), -946,4231f, -2979,826f, 12,9264f, true, true, false);
				unk_0x59AF3B40AE222194(iLocal_294, 0f, 0f, -121,5948f, 2, 1);
				unk_0x47F55B6102CA9143(iLocal_294, 0f, 0f, 0,8729f, -0,4879f);
				unk_0x14776E43F90DD454(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_284))
			{
				iLocal_284 = unk_0xEA60F3B426BB095B(joaat("jet"), -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0xC7BF27112709A906(iLocal_284, 2);
				unk_0xCF5EB2CB1B30F02C(iLocal_284, 0);
				unk_0xEDC33A771FAEB393(iLocal_284, true);
				unk_0xD38F266C132F2897(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x14776E43F90DD454(joaat("jet"));
				iLocal_672 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_damage", iLocal_284, -11,956f, 10,528f, -7,657f, 0f, 2f, 0f, 1f, 0, 0, 0);
				unk_0xCFB385D0FF082808(iLocal_284, 500);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_266))
			{
				iLocal_266 = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_airworker"), -933,8942f, -2965,785f, 12,9451f, 331,7339f, 1, true);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				unk_0x14776E43F90DD454(joaat("s_m_y_airworker"));
				unk_0x5C5D33A1B2711D21(iLocal_266, true);
				unk_0x771A86309E0CA47B(iLocal_266, true);
				unk_0xD68E88A8E0BE8697(iLocal_266, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_266, true);
				unk_0xD38F266C132F2897(iLocal_266, false, false, false, false, false, false, 0, false);
				unk_0x486F346ADFE56674(&iLocal_266);
			}
			if (func_121(0) == 0 || func_121(0) == joaat("weapon_unarmed"))
			{
				func_120(1);
			}
			break;
	}
}

void func_120(bool bParam0)//Position - 0xB3AB
{
	int iVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0x69EFDF3384995190(unk_0xFC1458A37D98B502(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), iVar0, bParam0);
		}
	}
}

int func_121(int iParam0)//Position - 0xB3E0
{
	if (Global_92870 > 0)
	{
		return Global_98118.f_21[iParam0];
	}
	return Global_95149.f_21[iParam0];
}

void func_122()//Position - 0xB40A
{
	if (iLocal_337 == 0)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_286[0]))
		{
			iLocal_286[0] = unk_0xEA60F3B426BB095B(joaat("police3"), -994,5278f, -2903,285f, 12,9447f, 158,7951f, true, true, false);
			unk_0x1F0117F8A8E4EC12(iLocal_286[0], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
		{
			iLocal_268[0] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), -969,06f, -2955,186f, 12,945f, 241,1703f, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[0], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[0], true, 1);
			unk_0x9627C22EF3C3F4D6(iLocal_268[0], unk_0xFC1458A37D98B502(), -1, 1);
			func_124(iLocal_268[0], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_285))
		{
			iLocal_285 = unk_0xEA60F3B426BB095B(joaat("shamal"), -968,3718f, -2952,298f, 12,9451f, 114,9439f, true, true, false);
			unk_0xACE486395AA1867D(iLocal_285, 1084227584);
			unk_0x14776E43F90DD454(joaat("shamal"));
			unk_0xE01CE1EBCD7EE551(iLocal_285, 2000, 0);
			unk_0x6D4A70E9DE82B24B(iLocal_285, 0, 0, 1);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
		{
			iLocal_268[6] = unk_0x00D1A9572426E8DD(iLocal_286[0], 6, joaat("s_m_y_cop_01"), 0, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[6], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[6], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[6], true, 1);
			unk_0x771A86309E0CA47B(iLocal_268[6], true);
			func_124(iLocal_268[6], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[7]))
		{
			iLocal_268[7] = unk_0x00D1A9572426E8DD(iLocal_286[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[7], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[7], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[7], true, 1);
			unk_0x771A86309E0CA47B(iLocal_268[7], true);
			func_124(iLocal_268[7], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_286[1]))
		{
			iLocal_286[1] = unk_0xEA60F3B426BB095B(joaat("police3"), -962,2432f, -2864,16f, 12,9447f, 149,5586f, true, true, false);
			unk_0x1F0117F8A8E4EC12(iLocal_286[1], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[8]))
		{
			iLocal_268[8] = unk_0x00D1A9572426E8DD(iLocal_286[1], 6, joaat("s_m_y_cop_01"), 0, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[8], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[8], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[8], true, 1);
			unk_0x771A86309E0CA47B(iLocal_268[8], true);
			func_124(iLocal_268[8], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[9]))
		{
			iLocal_268[9] = unk_0x00D1A9572426E8DD(iLocal_286[1], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[9], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[9], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[9], true, 1);
			unk_0x771A86309E0CA47B(iLocal_268[9], true);
			func_124(iLocal_268[9], 0);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[10]))
		{
			iLocal_268[10] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), -922,1185f, -2939,595f, 12,9451f, 156,1408f, 1, true);
			unk_0x9E058151726E58DE(iLocal_268[10], joaat("weapon_pistol"), 1000, true, true);
			unk_0xBB3CC641B6AED5E5(iLocal_268[10], 20);
			unk_0xCFF0CD14B439821D(iLocal_268[10], true, 1);
			unk_0x771A86309E0CA47B(iLocal_268[10], true);
			func_124(iLocal_268[10], 0);
			unk_0xB8755FBF960E8752(iLocal_268[10], 1);
		}
		iLocal_337 = 1;
	}
}

void func_123(int iParam0, int iParam1)//Position - 0xB7AA
{
	unk_0x872F1C1F8587CCC7(&Global_25391, iParam0);
	StringCopy(&(Global_25392[iParam0 /*6*/]), unk_0x436287B7DB306165(), 24);
	Global_25447[iParam0] = iParam1;
}

void func_124(int iParam0, bool bParam1)//Position - 0xB7D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55933[iVar0 /*2*/] != 0)
			{
				if (Global_55933[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55932)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55933[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55933[iVar1 /*2*/] = iParam0;
	Global_55933[iVar1 /*2*/].f_1 = 7;
	Global_55932++;
}

bool func_125()//Position - 0xB86C
{
	return func_126(&(Global_98118.f_2875));
}

int func_126(var uParam0)//Position - 0xB87F
{
	if (func_127(uParam0))
	{
		if (unk_0x9A0B2ED5055D3F0B(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_127(var uParam0)//Position - 0xB8B4
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_128(*uParam0, 1694,62f, 3276,27f, 41,31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_128(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xB913
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

int func_129(int iParam0, bool bParam1)//Position - 0xB98E
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_137())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_136() && !func_135()) && !func_134()) && !func_133()) && !func_137())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_134())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_132(iParam0))
		{
			return 0;
		}
	}
	if (!func_130(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)//Position - 0xBB1C
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_131())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_131()//Position - 0xBBE8
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_132(int iParam0)//Position - 0xBBFF
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_133()//Position - 0xD489
{
	return 0;
}

int func_134()//Position - 0xD492
{
	return 1;
}

int func_135()//Position - 0xD49B
{
	return 1;
}

int func_136()//Position - 0xD4A4
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0xD4BD
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_138()//Position - 0xD578
{
	func_139(&(Global_98118.f_2875));
}

void func_139(var uParam0)//Position - 0xD58B
{
	if (func_127(uParam0))
	{
		unk_0x6FF834D85E2DD4C6(uParam0->f_12.f_66);
	}
}

int func_140(vector3 vParam0, float fParam1)//Position - 0xD5A9
{
	return func_141(&(Global_98118.f_2875), vParam0, fParam1, 0);
}

int func_141(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD5C3
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_127(uParam0))
	{
		if (func_70(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x8AE9E5E8F6DC40C9(vParam1, -816,8716f, 185,6238f, 71,40275f, -807,4894f, 189,3762f, 75,27323f, 6,5f, 0, true))
			{
				vParam1 = { -850,93f, 158,82f, 65,7f };
				fParam2 = 89,5f;
			}
		}
		if (func_126(uParam0))
		{
			unk_0x247EAA2E93D4A021(vParam1, 5f, 1, 0, 0, false);
			func_179(vParam1, 5f, 0);
			iVar0 = unk_0xEA60F3B426BB095B(uParam0->f_12.f_66, vParam1, fParam2, true, true, false);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
				if (system::vdist2(vVar1, -1151,15f, -1530,32f, 7,48925f) <= 3f)
				{
					unk_0xAA93B7B448E10E40(iVar0, vParam1, 0, 0, 1);
				}
				func_162(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x428C7026AD2721BA(uParam0->f_12.f_66) || unk_0x38171AD35981A393(uParam0->f_12.f_66))
				{
					if (!unk_0xA275371ED0902FCB(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xACE486395AA1867D(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_161(uParam0->f_11, 1);
						}
						else if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iVar0)))
						{
							func_161(uParam0->f_11, 2);
						}
					}
					unk_0xD8D940C0BFD3E1EC(iVar0, 0);
					unk_0x1F0117F8A8E4EC12(iVar0, 0);
					unk_0x438D30A195B65156(iVar0, true);
					func_160(iVar0, uParam0->f_11);
				}
				else if ((!func_158(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "startup_positioning"))
				{
					iVar4 = func_157(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_152(iVar4);
					}
				}
				if (((Global_92833 != 13 && Global_92833 != 10) && Global_92833 != 11) && Global_92833 != 12)
				{
					if (unk_0x8B948C59217A295D(&(Global_92833.f_3)) == Global_70666)
					{
						if (uParam0->f_12.f_66 == Global_104555.f_32429.f_69[21 /*78*/].f_66)
						{
							func_149(24, 0);
							func_152(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_142(iVar0, uParam0->f_11);
				}
				unk_0x14776E43F90DD454(uParam0->f_12.f_66);
				vVar1 = { unk_0xB3328BA8976B416C(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1)//Position - 0xD875
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_143(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, -1);
		}
		if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x3AB6A1A9084FB0A4(iVar0))
		{
			if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104555.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104555.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104555.f_32429.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x82FF3DFBC3965CC0(iParam0) == Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB019B170BF1309C(&(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x74C475EB8E73D398(unk_0xF2D2D6860D636A58(iParam0), &(Global_104555.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104555.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104555.f_32429.f_5590 = iParam1;
	Global_70583 = iParam0;
	Global_104555.f_32429.f_5588 = 1;
	func_39(iParam0, &(Global_104555.f_32429.f_5510));
}

int func_143(int iParam0)//Position - 0xDA77
{
	if ((((((((((!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_148(iParam0)) || func_147(iParam0)) || func_146(iParam0)) || func_145(iParam0)) || !func_144(unk_0x82FF3DFBC3965CC0(iParam0)))
	{
		if (func_147(iParam0))
		{
		}
		if (func_147(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_144(int iParam0)//Position - 0xDB54
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x428C7026AD2721BA(iParam0) || unk_0x849A8CFD71854E02(iParam0)) || unk_0xF9DDB1C0875FD9E0(iParam0)) || unk_0x3C4FA7AE145B3F72(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_145(int iParam0)//Position - 0xDD05
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	sVar1 = unk_0xF2D2D6860D636A58(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x74C475EB8E73D398(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0xDD4B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90339[iVar0]))
		{
			if (Global_90339[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0xDD86
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]) && unk_0xB8DE76287EDC4957(Global_90309[iVar0], 0))
			{
				if (Global_90309[iVar0] == iParam0 && unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == unk_0x82FF3DFBC3965CC0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0xDE02
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[24]))
	{
		if (iParam0 == Global_69678.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69678.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)//Position - 0xDEEA
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_151(iParam0, 0))
		{
			func_150(iParam0, 1, 0);
			func_150(iParam0, 2, 0);
			func_150(iParam0, 3, 0);
			func_150(iParam0, 4, 0);
			func_150(iParam0, 0, 1);
			Global_69678[iParam0] = 1;
		}
	}
	else
	{
		func_150(iParam0, 0, 0);
	}
}

void func_150(int iParam0, int iParam1, bool bParam2)//Position - 0xDF47
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_32429[iParam0]), iParam1);
	}
}

bool func_151(int iParam0, int iParam1)//Position - 0xDF82
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_104555.f_32429[iParam0], iParam1);
}

void func_152(int iParam0)//Position - 0xDFA5
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xB8DE76287EDC4957(Global_69678.f_139[iParam0], 0))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_69678.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
				unk_0xC91FE17AD7353B70(&(Global_69678.f_139[iParam0]));
			}
		}
		Global_69678[iParam0] = 1;
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_151(iParam0, 0)) && Global_70587.f_66 == 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] != 0) && Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] > 3) && (!func_154(0, Global_69678.f_555[0 /*21*/].f_12) || !func_154(1, Global_69678.f_555[0 /*21*/].f_12)))
			{
				func_153(&(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]), &Global_70587);
				Global_70665 = Global_104555.f_32429.f_5591;
			}
			func_149(iParam0, 0);
		}
	}
}

void func_153(var uParam0, var uParam1)//Position - 0xE117
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_154(int iParam0, int iParam1)//Position - 0xE1E3
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_155(&(Global_104555.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_129(Global_104555.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_155(var uParam0)//Position - 0xE255
{
	return *uParam0;
}

int func_156(var uParam0, int iParam1)//Position - 0xE260
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 19);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 20);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 14);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 28);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 7);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 27);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 24);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 10);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 11);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 9);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = 1938952078;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 22);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 13);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 2);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 0);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 21);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 30);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 23);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104555.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_70(Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104555.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104555.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xC80D31E4B587871C(uParam0->f_9, 19))
	{
		if (!func_70(Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_9, 20))
	{
		if (!func_70(Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104555.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104555.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_157(int iParam0)//Position - 0xF958
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[iVar0]) && !unk_0x191BE1BC8F26F3C1(Global_69678.f_484[iVar0], 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[iVar0], 0))
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar1, &iVar2);
			unk_0xAEC96F2E5A91C606(Global_69678.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x82FF3DFBC3965CC0(iParam0) == unk_0x82FF3DFBC3965CC0(Global_69678.f_484[iVar0]) && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_158(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xFA1B
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_159(iParam0, Global_69678.f_139[38], 0))
			{
				func_152(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_159(iParam0, Global_69678.f_139[43], 1))
			{
				func_152(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x3689C35A674B0772(unk_0xFC1458A37D98B502(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_159(iParam0, uVar1[iVar3], 1) && func_128(unk_0xB3328BA8976B416C(uVar1[iVar3], 1), 2136,133f, 4780,563f, 39,9702f, 5f, 0))
				{
					if ((!bParam2 || func_70(vParam1, 0f, 0f, 0f, 0)) || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(uVar1[iVar3], 1), true) < 10f)
					{
						unk_0xC91FE17AD7353B70(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[14]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[14], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[14]) == joaat("luxor2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[14]))
				{
					func_152(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x6ADD12BF4D6D2587(Global_69678.f_484[20]) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0xB8DE76287EDC4957(Global_69678.f_484[20], 0))
			{
				if (unk_0x82FF3DFBC3965CC0(Global_69678.f_484[20]) == joaat("swift2") && unk_0x7E3C3BFAB9ADD960(iParam0) == unk_0x7E3C3BFAB9ADD960(Global_69678.f_484[20]))
				{
					func_152(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, bool bParam2)//Position - 0xFC23
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0)) && unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xAEC96F2E5A91C606(iParam0, &iVar0, &iVar1);
			unk_0xAEC96F2E5A91C606(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1)//Position - 0xFC84
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			Global_90309[iVar0] = iParam0;
			Global_90319[iVar0] = iParam1;
			Global_90329[iVar0] = unk_0x82FF3DFBC3965CC0(iParam0);
			if (unk_0xC1514CFCEC68CA4A(Global_90329[iVar0]))
			{
				Global_90357[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90357[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_161(int iParam0, int iParam1)//Position - 0xFD06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x6ADD12BF4D6D2587(Global_90309[iVar0]))
		{
			if (iParam0 == 145 || Global_90319[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x82FF3DFBC3965CC0(Global_90309[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), Global_90309[iVar0], 0))
					{
						unk_0xDD29FF4BAB8AFF9C(Global_90309[iVar0], false, 1);
						unk_0xC91FE17AD7353B70(&(Global_90309[iVar0]));
						Global_90319[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_162(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xFDA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_171(iParam0))
		{
			if (unk_0x8B948C59217A295D(&(uParam1->f_1)) != 0)
			{
				unk_0xE58BC5B025017AE2(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xD559B6108233E114())
			{
				unk_0xFD5736F667C70A28(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF6744C962F375B94(iParam0, 0);
			if (unk_0xF928889F6E5C7677(iParam0, 5) != -1)
			{
				unk_0xF6744C962F375B94(iParam0, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 13))
		{
			unk_0xFAE216A82B56EEF2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE154D705D18ED685(iParam0);
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 12))
		{
			unk_0x4852153449AFF07A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7FAF16725A6EE5F0(iParam0);
		}
		unk_0x1E7A8525FB41AAFE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB1AB9FD8B4959960(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_170(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_169())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x94D4C393A9825924(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
		}
		else
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
			unk_0xDAA5C9C59AF4D4EB(iParam0, uParam1->f_65);
		}
		unk_0x4D7D93C6E0C1063B(iParam0, !unk_0xC80D31E4B587871C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, uParam1->f_70);
		}
		unk_0x7F254E8C9247E923(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x9D1E2B17CE94D0B9(iParam0, 2, unk_0xC80D31E4B587871C(uParam1->f_77, 28));
		unk_0x9D1E2B17CE94D0B9(iParam0, 3, unk_0xC80D31E4B587871C(uParam1->f_77, 29));
		unk_0x9D1E2B17CE94D0B9(iParam0, 0, unk_0xC80D31E4B587871C(uParam1->f_77, 30));
		unk_0x9D1E2B17CE94D0B9(iParam0, 1, unk_0xC80D31E4B587871C(uParam1->f_77, 31));
		unk_0xD2557AC67FBCFB9D(iParam0, unk_0xC80D31E4B587871C(uParam1->f_77, 10));
		if (unk_0xAFB4F670EC043D01(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xC7BF27112709A906(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_168(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_168(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x4B004F11F16CA872(iParam0, 1);
			}
			else
			{
				unk_0x54DFCB9F4F68A288(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_163(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_40(iVar2 + 1)))
				{
					if (!unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
					{
						unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
				{
					unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sheava") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("omnis")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("le7b"))
		{
			if (unk_0xF928889F6E5C7677(iParam0, 0) == -1)
			{
				unk_0x7B3133EBCD34B431(iParam0, 1, false);
			}
		}
		if (((unk_0x849A8CFD71854E02(uParam1->f_66) && unk_0x256C25369C3811D6(iParam0)) && !unk_0xB0DA749C8A7CCBBF(iParam0, -2118308144)) && !((((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_77, 23))
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, 22))
				{
					unk_0x39748EEC52404AFA(iParam0, 2);
				}
				else
				{
					unk_0x39748EEC52404AFA(iParam0, 3);
				}
			}
			else
			{
				unk_0x39748EEC52404AFA(iParam0, 4);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 27))
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_163(int iParam0, var uParam1, var uParam2)//Position - 0x102F7
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_167(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_166(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_166(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_165(iParam0);
	if (func_164(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, true);
		unk_0x438D30A195B65156(*iParam0, true);
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x10475
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_165(var uParam0)//Position - 0x10551
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case -1700874274:
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_166(int iParam0, int iParam1)//Position - 0x10591
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)//Position - 0x10676
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_168(int iParam0, int iParam1)//Position - 0x108E9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = unk_0xF928889F6E5C7677(iParam0, 24);
		iVar1 = unk_0x8D462BB6E4814682(iParam0, 24);
		unk_0xC195F0A7CE73E810(iParam0, iParam1);
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x75F267954030DBEB(iParam0, 24);
		}
		else
		{
			unk_0xA9EF3F93CBFFF6D0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_169()//Position - 0x1094E
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_170(int iParam0)//Position - 0x1095F
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				return unk_0xC80D31E4B587871C(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x109AA
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_177(unk_0x9EB17624F44A8DA4(), -1))
		{
			iParam0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_173(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_172(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x10A31
{
	if (unk_0x6C5223DB5E5CFD9B("FMDeliverableID", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "FMDeliverableID"))
		{
			return unk_0x2786E663D1846FFC(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_173(int iParam0)//Position - 0x10A60
{
	if (func_176(iParam0) == 233)
	{
		return func_174(iParam0);
	}
	return -1;
}

int func_174(int iParam0)//Position - 0x10A7D
{
	if (func_175(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_175(int iParam0, int iParam1)//Position - 0x10AA0
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x10ADB
{
	if (func_175(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)//Position - 0x10AFE
{
	int iVar0;
	
	if (func_178(iParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, bool bParam2)//Position - 0x10B4B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_179(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x10B95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_156(&(Global_69678.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xBE3C4023003180FC(vParam0, Global_69678.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

var func_180()//Position - 0x10BE5
{
	return Global_98118.f_2875.f_12.f_66;
}

bool func_181()//Position - 0x10BF8
{
	return func_127(&(Global_98118.f_2875));
}

void func_182()//Position - 0x10C0B
{
	iLocal_305 = unk_0xD704C81492296A37("BREAKING_NEWS");
	unk_0x6FF834D85E2DD4C6(joaat("jet"));
	unk_0x6FF834D85E2DD4C6(joaat("police3"));
	unk_0x6FF834D85E2DD4C6(joaat("maverick"));
	unk_0x6FF834D85E2DD4C6(joaat("bison"));
	unk_0x6FF834D85E2DD4C6(joaat("blista"));
	unk_0x6FF834D85E2DD4C6(joaat("ig_molly"));
	unk_0x6FF834D85E2DD4C6(joaat("cogcabrio"));
	unk_0x6FF834D85E2DD4C6(joaat("rapidgt"));
	unk_0x0D9525F20FB71C52(45, "BB_Chase");
	unk_0x0D9525F20FB71C52(35, "BB_Chase");
	unk_0x0D9525F20FB71C52(2, "BB_Chase");
	unk_0x0D9525F20FB71C52(54, "BB_Chase");
	unk_0x0D9525F20FB71C52(55, "BB_Chase");
	unk_0x0D9525F20FB71C52(67, "BB_Chase");
	func_184(1, "BB_Chase");
	if (func_23())
	{
		if (func_181())
		{
			if (!unk_0xF9DDB1C0875FD9E0(func_180()) && !unk_0x849A8CFD71854E02(func_180()))
			{
				func_138();
				while (!func_125())
				{
					system::wait(0);
				}
			}
		}
	}
	while (((((((!unk_0x9A0B2ED5055D3F0B(joaat("jet")) || !unk_0x9A0B2ED5055D3F0B(joaat("police3"))) || !unk_0x9A0B2ED5055D3F0B(joaat("maverick"))) || !unk_0x9A0B2ED5055D3F0B(joaat("bison"))) || !unk_0x9A0B2ED5055D3F0B(joaat("blista"))) || !unk_0x9A0B2ED5055D3F0B(joaat("ig_molly"))) || !unk_0x9A0B2ED5055D3F0B(joaat("cogcabrio"))) || !unk_0x9A0B2ED5055D3F0B(joaat("rapidgt")))
	{
		system::wait(0);
	}
	while (!unk_0x34D11AB5BA7922C2(iLocal_305) || !func_183(1, "BB_Chase"))
	{
		system::wait(0);
	}
	while (((((!unk_0x0840F461D7BD8859(45, "BB_Chase") || !unk_0x0840F461D7BD8859(35, "BB_Chase")) || !unk_0x0840F461D7BD8859(2, "BB_Chase")) || !unk_0x0840F461D7BD8859(54, "BB_Chase")) || !unk_0x0840F461D7BD8859(55, "BB_Chase")) || !unk_0x0840F461D7BD8859(67, "BB_Chase"))
	{
		system::wait(0);
	}
}

bool func_183(int iParam0, char* sParam1)//Position - 0x10DE0
{
	return unk_0x0840F461D7BD8859(iParam0, sParam1);
}

void func_184(int iParam0, char* sParam1)//Position - 0x10DF0
{
	unk_0x0D9525F20FB71C52(iParam0, sParam1);
}

void func_185()//Position - 0x10E00
{
	func_211();
	func_209();
	unk_0x84CDD933AFA470D2();
	unk_0xC234848D21B6064E(0);
	unk_0xFB4AD069EFD0869A(0);
	unk_0xBC3B7443617858A0(true);
	if (unk_0x546F10CBA6C484DA(iLocal_262))
	{
		unk_0x907562D8313A11C1(iLocal_262);
	}
	if (unk_0xA12FA3F7428EE798(iLocal_263))
	{
		unk_0x7DC528E86B55C67E(iLocal_263);
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1019,579f, -484,872f, 36,0795f, 1, false, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 93,7701f);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_279))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_279))
			{
				unk_0x7674774BB9279265(iLocal_279);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_278))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
		{
			unk_0xF0037A481D043FE1(iLocal_278, 0);
			if (unk_0x8DDE799D31A3D099(iLocal_278))
			{
				unk_0x7674774BB9279265(iLocal_278);
			}
		}
	}
	if (unk_0xE0B0126B4689CB72(iLocal_668))
	{
		unk_0x990DE45B7A2B6426(iLocal_668, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_669))
	{
		unk_0x990DE45B7A2B6426(iLocal_669, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_670))
	{
		unk_0x990DE45B7A2B6426(iLocal_670, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_671))
	{
		unk_0x990DE45B7A2B6426(iLocal_671, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_672))
	{
		unk_0x990DE45B7A2B6426(iLocal_672, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_667[0]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[0], 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_667[1]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[1], 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_667[2]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[2], 0);
	}
	unk_0x74FDC371ED12544B();
	if (unk_0x6ADD12BF4D6D2587(iLocal_264))
	{
		unk_0x68433819717660CF(&iLocal_264);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_266))
	{
		unk_0x68433819717660CF(&iLocal_266);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_269))
	{
		unk_0x68433819717660CF(&iLocal_269);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_270))
	{
		unk_0x68433819717660CF(&iLocal_270);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_271))
	{
		unk_0x68433819717660CF(&iLocal_271);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_272))
	{
		unk_0x68433819717660CF(&iLocal_272);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_273))
	{
		unk_0x68433819717660CF(&iLocal_273);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_274))
	{
		unk_0x68433819717660CF(&iLocal_274);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[0]))
	{
		unk_0x68433819717660CF(&(iLocal_265[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[1]))
	{
		unk_0x68433819717660CF(&(iLocal_265[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[2]))
	{
		unk_0x68433819717660CF(&(iLocal_265[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[3]))
	{
		unk_0x68433819717660CF(&(iLocal_265[3]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[0]))
	{
		unk_0x68433819717660CF(&(uLocal_267[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[1]))
	{
		unk_0x68433819717660CF(&(uLocal_267[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[2]))
	{
		unk_0x68433819717660CF(&(uLocal_267[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
	{
		unk_0x68433819717660CF(&(iLocal_268[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[1]))
	{
		unk_0x68433819717660CF(&(iLocal_268[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[2]))
	{
		unk_0x68433819717660CF(&(iLocal_268[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[3]))
	{
		unk_0x68433819717660CF(&(iLocal_268[3]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[4]))
	{
		unk_0x68433819717660CF(&(iLocal_268[4]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[5]))
	{
		unk_0x68433819717660CF(&(iLocal_268[5]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
	{
		unk_0x68433819717660CF(&(iLocal_268[6]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[7]))
	{
		unk_0x68433819717660CF(&(iLocal_268[7]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[8]))
	{
		unk_0x68433819717660CF(&(iLocal_268[8]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[9]))
	{
		unk_0x68433819717660CF(&(iLocal_268[9]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[10]))
	{
		unk_0x68433819717660CF(&(iLocal_268[10]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
	{
		unk_0x68433819717660CF(&(iLocal_275[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_276[0]))
	{
		unk_0x68433819717660CF(&(iLocal_276[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_276[1]))
	{
		unk_0x68433819717660CF(&(iLocal_276[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_278))
	{
		unk_0xC91FE17AD7353B70(&iLocal_278);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_279))
	{
		if (!unk_0x9761C10D57B68069(iLocal_279))
		{
			unk_0xDD29FF4BAB8AFF9C(iLocal_279, true, 0);
		}
		unk_0xC91FE17AD7353B70(&iLocal_279);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_282))
	{
		unk_0xC91FE17AD7353B70(&iLocal_282);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_283))
	{
		unk_0xC91FE17AD7353B70(&iLocal_283);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_284))
	{
		unk_0xC91FE17AD7353B70(&iLocal_284);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_285))
	{
		unk_0xC91FE17AD7353B70(&iLocal_285);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_287))
	{
		unk_0xC91FE17AD7353B70(&iLocal_287);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_289))
	{
		unk_0xC91FE17AD7353B70(&iLocal_289);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_293[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_293[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_280[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[1]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_280[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_293[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_293[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_286[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_286[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_286[1]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_286[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_288[0]))
	{
		unk_0xC91FE17AD7353B70(&(iLocal_288[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_281))
	{
		unk_0xC91FE17AD7353B70(&iLocal_281);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_294))
	{
		unk_0x452336926718D62A(&iLocal_294);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_295))
	{
		unk_0x452336926718D62A(&iLocal_295);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_296))
	{
		unk_0x452336926718D62A(&iLocal_296);
	}
	unk_0x77A208B3324C04F2();
	if (unk_0x771D0F8F56A5FE6C("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_MAIN_CHASE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_MAIN_CHASE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_CHOPPER_CAM"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x771D0F8F56A5FE6C("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xE02E32C69260FBB7("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x0B9D04994D02CC2F(iLocal_253);
	unk_0x0B9D04994D02CC2F(iLocal_255);
	unk_0x0B9D04994D02CC2F(iLocal_256);
	unk_0x0B9D04994D02CC2F(iLocal_257);
	unk_0x0B9D04994D02CC2F(iLocal_258);
	unk_0x0B9D04994D02CC2F(iLocal_259);
	unk_0x0B9D04994D02CC2F(iLocal_260);
	unk_0x0B9D04994D02CC2F(iLocal_261);
	unk_0x0B9D04994D02CC2F(iLocal_254);
	func_207(&uLocal_28, 0, 0);
	if (unk_0x8EA3C8E091EA5BA4(iLocal_301))
	{
		unk_0x02934BABFD4CD384(iLocal_301, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(iLocal_302))
	{
		unk_0x02934BABFD4CD384(iLocal_302, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(iLocal_303))
	{
		unk_0x02934BABFD4CD384(iLocal_303, 0);
	}
	func_186(1, 1);
	unk_0xFCCDDE0E48CF9588("misssolomon_3");
	unk_0xFCCDDE0E48CF9588("amb@world_human_clipboard@male@base");
	unk_0xFCCDDE0E48CF9588("missheist_agency3aig_lift_waitped_a");
	unk_0x9E6ACDF1473CD846(1, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(2, "BB_Chase");
	unk_0x9E6ACDF1473CD846(9, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(35, "BB_Chase");
	unk_0x9E6ACDF1473CD846(45, "BB_Chase");
	unk_0x9E6ACDF1473CD846(54, "BB_Chase");
	unk_0x9E6ACDF1473CD846(55, "BB_Chase");
	unk_0x9E6ACDF1473CD846(61, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(63, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(64, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(67, "BB_Chase");
	unk_0x9E6ACDF1473CD846(68, "BB_CHASE");
	unk_0x9E6ACDF1473CD846(69, "BB_Chase");
	unk_0xA68F7B004463AB6F(&iLocal_305);
	unk_0x137FC8E0F58D9E0B("digitalOverlay");
}

void func_186(bool bParam0, bool bParam1)//Position - 0x115CC
{
	if (!unk_0xAB019B170BF1309C(&cLocal_185))
	{
		iLocal_91 = 0;
		func_206();
		unk_0x9EA1BA1DD45771B3(iLocal_194);
		unk_0xD855BC7E9D7EC87F(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, true);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xCD867A0CCB4311BC(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0x512840F67B7219D4(unk_0x9EB17624F44A8DA4(), 1);
			unk_0xC1CEF375B44856F4(true);
		}
		if (bLocal_107)
		{
			unk_0x14776E43F90DD454(func_205());
		}
		unk_0x14776E43F90DD454(func_204());
		unk_0x14776E43F90DD454(func_203());
		unk_0x14776E43F90DD454(func_202());
		if (!unk_0x3E9CABD07B829173() && !bParam0)
		{
			func_201();
			func_200();
			func_197();
		}
		else
		{
			func_193();
			func_192();
		}
		if (bParam1)
		{
			func_187(0);
		}
	}
}

void func_187(bool bParam0)//Position - 0x11688
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_188(iVar0, bParam0);
		iVar0++;
	}
}

void func_188(int iParam0, bool bParam1)//Position - 0x116AB
{
	if (bParam1)
	{
		if (!func_73(iParam0, 2, 1))
		{
			func_191(iParam0, 2, 1);
		}
	}
	else if (func_73(iParam0, 2, 1))
	{
		func_189(iParam0, 2, 1);
	}
}

void func_189(int iParam0, int iParam1, bool bParam2)//Position - 0x116E2
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_75() == 0)
		{
			iVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0x0EE72DB1CD8A3B86(&iVar0, iParam1);
			func_190(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1174B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_191(int iParam0, int iParam1, bool bParam2)//Position - 0x1177B
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x872F1C1F8587CCC7(&(Global_92885.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_75() == 0)
		{
			iVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0x872F1C1F8587CCC7(&iVar0, iParam1);
			func_190(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_668[iParam0]), iParam1);
	}
}

void func_192()//Position - 0x117E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_201[iVar0] = 0;
		vLocal_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_202[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_203[iVar0] = 0;
		vLocal_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iLocal_158 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_204[iVar0] = 0;
		vLocal_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
}

void func_193()//Position - 0x11971
{
	func_196();
	func_195();
	func_194();
}

void func_194()//Position - 0x11985
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[iVar0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_204[iVar0]))
				{
					unk_0x7674774BB9279265(iLocal_204[iVar0]);
				}
				iVar1 = unk_0x317536BCEA8FA6B0(iLocal_204[iVar0], -1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar1) && iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						unk_0x68433819717660CF(&iVar1);
					}
				}
			}
			if (unk_0x9761C10D57B68069(iLocal_204[iVar0]))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x9E6ACDF1473CD846(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_195()//Position - 0x11A7C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_203[iVar0]))
		{
			if (unk_0x9761C10D57B68069(iLocal_203[iVar0]))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_196()//Position - 0x11AF9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_201[iVar0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_201[iVar0], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_201[iVar0]))
				{
					unk_0x7674774BB9279265(iLocal_201[iVar0]);
				}
				iVar1 = unk_0x317536BCEA8FA6B0(iLocal_201[iVar0], -1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar1) && iVar1 != unk_0xFC1458A37D98B502())
				{
					if (unk_0x9761C10D57B68069(iVar1))
					{
						unk_0x68433819717660CF(&iVar1);
					}
				}
			}
			if (unk_0x9761C10D57B68069(iLocal_201[iVar0]))
			{
				unk_0xC91FE17AD7353B70(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x9E6ACDF1473CD846(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_197()//Position - 0x11BF8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[iVar0]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_204[iVar0]))
				{
					unk_0x7674774BB9279265(iLocal_204[iVar0]);
				}
			}
			func_199(iLocal_204[iVar0]);
			func_198(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x9E6ACDF1473CD846(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0;
}

void func_198(int iParam0)//Position - 0x11CC5
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		unk_0x5380482A432E314E(&iParam0);
	}
}

void func_199(int iParam0)//Position - 0x11CDC
{
	float fVar0;
	int iVar1;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar1 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
		if (!unk_0x3AB6A1A9084FB0A4(iVar1))
		{
			if (!iVar1 == unk_0xFC1458A37D98B502())
			{
				fVar0 = unk_0x90D5DFB054818BA7(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62,9f)
				{
					fVar0 = 62,9f;
				}
				unk_0x6F03491E8F9F397C(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xE17958D3FD0F9EE9(iVar1, 8192, true);
				if (bLocal_108)
				{
					unk_0xE17958D3FD0F9EE9(iVar1, 65536, true);
					unk_0xE17958D3FD0F9EE9(iVar1, 2, false);
				}
				unk_0xAE6EBBBBD8B9FB30(iVar1, 6, false);
			}
		}
	}
}

void func_200()//Position - 0x11D76
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_203[iVar0]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_203[iVar0], 0))
			{
				unk_0xB18E1DBC397238E1(iLocal_203[iVar0], true, 0);
			}
			func_198(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_201()//Position - 0x11DFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_201[iVar0]))
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_201[iVar0], 0))
			{
				unk_0xB18E1DBC397238E1(iLocal_201[iVar0], true, 0);
			}
			if (unk_0xB8DE76287EDC4957(iLocal_201[iVar0], 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_201[iVar0]))
				{
					unk_0x7674774BB9279265(iLocal_201[iVar0]);
				}
			}
			func_199(iLocal_201[iVar0]);
			func_198(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x9E6ACDF1473CD846(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x14776E43F90DD454(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

int func_202()//Position - 0x11EE8
{
	return joaat("s_m_y_cop_01");
}

int func_203()//Position - 0x11EF5
{
	return joaat("police");
}

int func_204()//Position - 0x11F02
{
	return joaat("sultan");
}

int func_205()//Position - 0x11F0F
{
	if (iLocal_198 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_198;
}

void func_206()//Position - 0x11F2C
{
	unk_0x087BB7BACBB5FD0B();
	unk_0xD93B76E9A81FFF74(-1);
	unk_0x8409C7020FBD68B5(1);
	unk_0xFA9A14EC24D6967F(1);
	unk_0xAD6F3DFB1F960182(1f);
	unk_0x1E56F4F04588C11A(3);
	unk_0x1D60449E9FA475EF(3);
}

void func_207(var uParam0, int iParam1, int iParam2)//Position - 0x11F56
{
	char* sVar0;
	
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x38DF88792E2574E5())
	{
		unk_0x2C5E25A27FEE0F8A(iParam2);
		unk_0x704F5ADD5B29DB63("FocusIn");
		unk_0xE02E32C69260FBB7("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xA91E83FF512776B6("FocusOut", 0, 0);
			unk_0x4AFBCBFDE748D4E0(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xBC3B7443617858A0(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8C1C362CA8299475(sVar0))
	{
		if (!unk_0x3A711520F83BAE98())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8C1C362CA8299475(uParam0->f_3))
	{
		if (func_208(uParam0->f_3))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
	if (!unk_0x8C1C362CA8299475(sVar0))
	{
		if (func_208(sVar0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
	}
}

int func_208(char* sParam0)//Position - 0x12033
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_209()//Position - 0x12046
{
	Global_14622 = 0;
	func_210();
}

void func_210()//Position - 0x12056
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
	}
}

void func_211()//Position - 0x12077
{
	Global_14622 = 0;
	func_212();
}

void func_212()//Position - 0x12087
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(true);
		Global_15756 = 6;
		return;
	}
}

void func_213()//Position - 0x120DE
{
	if (unk_0xA6DECE14FC9A8C51(iLocal_297))
	{
		unk_0xE30CF11C0EE14316(&iLocal_297);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_298))
	{
		unk_0xE30CF11C0EE14316(&iLocal_298);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_299))
	{
		unk_0xE30CF11C0EE14316(&iLocal_299);
	}
	if (unk_0xA6DECE14FC9A8C51(iLocal_300))
	{
		unk_0xE30CF11C0EE14316(&iLocal_300);
	}
}

void func_214()//Position - 0x1212A
{
	if (iLocal_486 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_266))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
			{
				if (unk_0xEBE499597C718EB8(iLocal_266, unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_486 = 1;
				}
			}
		}
	}
	if (iLocal_486 == 0)
	{
		if (iLocal_456 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_266))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_264))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
						{
							if (unk_0x4B2B9484BBAA2F31(iLocal_264))
							{
								if (unk_0x0732FE63BEBCD919(iLocal_264) > 18)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_296))
									{
										if (unk_0xDFFD5F8C8ABCB7EF(iLocal_296))
										{
											unk_0x6B7C10B19928914F(iLocal_296, 1, true);
										}
									}
									iLocal_252 = unk_0x8383F9C605E523B7(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
									unk_0x8E628F774C748D93(iLocal_266, iLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x60C06BFD037BB7CF(iLocal_266, unk_0xFC1458A37D98B502(), 9000, 1024, 3);
									iLocal_456 = 1;
									iLocal_457 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 1 && iLocal_458 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_266))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
				{
					if (unk_0xD56F740235B1E8F0(iLocal_252))
					{
						if (!iLocal_457)
						{
							if (unk_0x463C4747B41E35A3(iLocal_252) > 0,25f)
							{
								func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
								func_215(iLocal_266, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_457 = 1;
							}
						}
						if (unk_0x463C4747B41E35A3(iLocal_252) > 0,99f)
						{
							iLocal_252 = unk_0x8383F9C605E523B7(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
							unk_0x8E628F774C748D93(iLocal_266, iLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1,5f, 3, 16, 1148846080, 0);
							iLocal_458 = 1;
						}
					}
				}
			}
		}
		if (iLocal_458 == 1 && iLocal_461 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_266))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
				{
					if (unk_0xD56F740235B1E8F0(iLocal_252))
					{
						if (unk_0x7B82209ED5D8E168(iLocal_266, unk_0x8B948C59217A295D("ENDS_IN_RUN")))
						{
							unk_0x6931076730A4AC5D(&iLocal_304);
							unk_0xC505EF2B5C34851E(0, -1115154469, 0);
							unk_0x6EF694689373EE8D(0, -1001,9f, -2954,3f, 13,1f, 3f, -1, 40000f, 3f);
							unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
							unk_0x1B16DD5C115FE009(iLocal_304);
							unk_0xAB30B1CF01A198C1(iLocal_266, iLocal_304);
							unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
							unk_0x31BBD48AA2503617(iLocal_266, -1115154469, false, 0, 0);
							iLocal_461 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_266))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
			{
				unk_0x6931076730A4AC5D(&iLocal_304);
				unk_0x6EF694689373EE8D(0, -1001,9f, -2954,3f, 13,1f, 3f, -1, 40000f, 3f);
				unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(iLocal_304);
				unk_0xAB30B1CF01A198C1(iLocal_266, iLocal_304);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
				iLocal_461 = 1;
			}
		}
	}
}

void func_215(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1240A
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_216()//Position - 0x12423
{
	if (iLocal_223 == 0)
	{
		iLocal_225 = 0;
		iLocal_253 = unk_0xD0CA83418A236CB4();
		unk_0x393584863A2F304E("TRV_4_MCS_2", 8);
		unk_0x6FF834D85E2DD4C6(joaat("prop_jet_bloodsplat_01"));
		if (unk_0xC316B5E3E7ACF515("Trev4_5"))
		{
			unk_0x3794E4CC2803099A("Trev4_5", 0, 0,5f, 1f);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		switch (iLocal_225)
		{
			case 0:
				while (!unk_0xA3DDC3767EC660CD())
				{
					system::wait(0);
				}
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					unk_0x4982ECE0928DA13D(iLocal_264, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
				{
					unk_0x4982ECE0928DA13D(iLocal_266, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
				{
					unk_0x4982ECE0928DA13D(iLocal_284, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_217(1, 1, 1, 0);
				unk_0x8810DC630928B398("TRV4_SUCK_CS");
				unk_0xD0BFA95B279C174F(0);
				iLocal_225++;
				break;
			
			case 1:
				func_122();
				if (unk_0xBBC745B9F75E27D0("JET_TRV4", joaat("jet")))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
					{
						if (!unk_0x191BE1BC8F26F3C1(iLocal_284, 0))
						{
							unk_0xEDC33A771FAEB393(iLocal_284, true);
						}
					}
				}
				if (unk_0xBBC745B9F75E27D0("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
					{
						unk_0x771A86309E0CA47B(iLocal_266, true);
						unk_0xD68E88A8E0BE8697(iLocal_266, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
						unk_0x1A0806871323CD16(iLocal_266, false);
						unk_0x5C5D33A1B2711D21(iLocal_266, true);
						unk_0xD38F266C132F2897(iLocal_266, false, false, false, false, false, false, 0, false);
					}
				}
				if (unk_0xBBC745B9F75E27D0("Michael", 0))
				{
					func_122();
					func_120(1);
				}
				if (!unk_0x6C97EEC6339FB45C())
				{
					iLocal_336 = 1;
					if (!unk_0x6ADD12BF4D6D2587(iLocal_294))
					{
						if (unk_0x9A0B2ED5055D3F0B(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_294 = unk_0x5E35CF35E65D69B9(joaat("prop_jet_bloodsplat_01"), -946,4231f, -2979,826f, 12,9264f, true, true, false);
							unk_0x59AF3B40AE222194(iLocal_294, 0f, 0f, -121,5948f, 2, 1);
							unk_0x47F55B6102CA9143(iLocal_294, 0f, 0f, 0,8729f, -0,4879f);
							unk_0x14776E43F90DD454(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0xAE3DF717857FE7CA(0);
					func_217(0, 1, 1, 0);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					if (!unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), 0, 2))
					{
						unk_0x9E058151726E58DE(unk_0xFC1458A37D98B502(), joaat("weapon_smg"), 150, true, true);
					}
					iLocal_223 = 2;
				}
				break;
			}
	}
	if (iLocal_223 == 2)
	{
		iLocal_223 = 0;
		iLocal_222 = 8;
	}
}

void func_217(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1267F
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_225(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_224())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_223(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_225(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_223(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_221(unk_0x9EB17624F44A8DA4())) && !func_219(unk_0x9EB17624F44A8DA4(), 0)) && !func_218())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_221(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_218()//Position - 0x12798
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

bool func_219(int iParam0, int iParam1)//Position - 0x127B5
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_220(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_220(int iParam0, bool bParam1)//Position - 0x12800
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_221(int iParam0)//Position - 0x12841
{
	if (func_219(iParam0, 0))
	{
		return 1;
	}
	if (func_222())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_222()//Position - 0x12883
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12894
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_224()//Position - 0x128C7
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x128EE
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 13);
	}
}

void func_226()//Position - 0x12911
{
	if (iLocal_442 == 0)
	{
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -926,0258f, -2958,615f, 12,46467f, -930,6525f, -2956,061f, 16,45945f, 2,75f, 0, true, 0))
		{
			iLocal_442 = 1;
		}
	}
	else if (iLocal_446 == 0)
	{
		unk_0x4FB260623DD93924(0, 22, 1);
		unk_0x4FB260623DD93924(0, 25, 1);
		if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -938,5178f, -2972,022f, 12,46715f, -934,1034f, -2974,613f, 15,96715f, 5,25f, 0, true, 0))
		{
			unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0,975f);
			unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), fLocal_324);
		}
	}
	if (iLocal_223 > 0)
	{
		func_214();
	}
	if (iLocal_223 == 0)
	{
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_342 = 0;
		iLocal_358 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_428 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447[0] = 0;
		iLocal_448[0] = 0;
		iLocal_447[1] = 0;
		iLocal_448[1] = 0;
		iLocal_447[2] = 0;
		iLocal_456 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_464 = 0;
		iLocal_484 = 0;
		iLocal_486 = 0;
		iLocal_487[3] = 0;
		unk_0x6FF834D85E2DD4C6(joaat("prop_jet_bloodsplat_01"));
		unk_0x5AA4315C366E622D("V_60_HangerRm");
		unk_0xC0EBC1452FCAB15C(5);
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 3, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		if (unk_0x6ADD12BF4D6D2587(iLocal_264))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
			{
				if (unk_0x4B2B9484BBAA2F31(iLocal_264))
				{
					unk_0x970F7CCF4BBD78AA(iLocal_264, 3f, 1);
				}
			}
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_428 == 0)
		{
			if (unk_0x1CF95440F1970B4F("Trv_4_747", false, -1))
			{
				iLocal_428 = 1;
			}
		}
		if (iLocal_420 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (unk_0x4B2B9484BBAA2F31(iLocal_264))
					{
						if (unk_0x0732FE63BEBCD919(iLocal_264) > 20)
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_284))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
								{
									func_231(&iLocal_284);
									unk_0x23A4CE7F9EBB02D4(iLocal_253, "Trevor_4_747_Jet_Engine", -937,77f, -2981,36f, 15,44f, 0, 0, 0, 0);
									unk_0xA15269351F50F113(iLocal_284, true, false, 0);
									iLocal_420 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (unk_0x4B2B9484BBAA2F31(iLocal_264))
					{
						if (unk_0x0732FE63BEBCD919(iLocal_264) > 23)
						{
							unk_0xB8E08BD5B184DF4E(iLocal_264);
							if (unk_0x6ADD12BF4D6D2587(iLocal_284))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
								{
									if (!unk_0x771D0F8F56A5FE6C("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xE859EF37EA7362D3("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_251 = unk_0x8383F9C605E523B7(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x56FEE2DE0493113C(iLocal_251, iLocal_284, unk_0xD323488FDDE4A80F(iLocal_284, "chassis_Control"));
									unk_0x8E628F774C748D93(iLocal_264, iLocal_251, "MISSSOLOMON_3", "molly_death", 1,5f, -8f, 4, 0, 1148846080, 0);
									unk_0x7122D672EBE0EA6E(iLocal_251, true);
									iLocal_443 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (iLocal_443 == 1)
					{
						vLocal_318 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						if (vLocal_318.y < -2965f)
						{
							unk_0xCDB72D70019A533E(iLocal_264, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
							unk_0xAC838A977FB6E6BC(unk_0xFC1458A37D98B502(), iLocal_264, 0);
							unk_0x60C06BFD037BB7CF(unk_0xFC1458A37D98B502(), iLocal_264, 4000, 48, 4);
							iLocal_444 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				unk_0x2C5E25A27FEE0F8A(0);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
				if (unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_268[0]);
						unk_0x771A86309E0CA47B(iLocal_268[0], false);
					}
				}
				iLocal_445 = 1;
			}
		}
		if (iLocal_422 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_295))
					{
						if (unk_0x5D67DB68EF61B3E1(iLocal_295, iLocal_264))
						{
							if (unk_0xA5F6598E13F98E08(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0x463C4747B41E35A3(iLocal_251) > 0,59f)
								{
									unk_0x6B7C10B19928914F(iLocal_295, 1, true);
									if (unk_0xA6DECE14FC9A8C51(iLocal_297))
									{
										unk_0xE30CF11C0EE14316(&iLocal_297);
									}
									if (!unk_0xA6DECE14FC9A8C51(iLocal_300))
									{
										func_215(iLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x771D0F8F56A5FE6C("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xE02E32C69260FBB7("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x771D0F8F56A5FE6C("SOL_3_LOSE_COPS"))
										{
											unk_0xE859EF37EA7362D3("SOL_3_LOSE_COPS");
										}
										system::settimerb(0);
										iLocal_422 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0)
		{
			if (iLocal_422 == 1 && system::timerb() > 2500)
			{
				iLocal_300 = func_228(iLocal_295);
				func_20("SOL3_GOD1", 7500, -1);
				system::settimerb(0);
				iLocal_446 = 1;
			}
		}
		if (iLocal_487[3] == 0)
		{
			if (iLocal_446 == 1 && iLocal_445 == 1)
			{
				if (system::timerb() > 2500)
				{
					unk_0x1267474D9A69CA37(10f, 1073741824, 3);
					iLocal_487[3] = 1;
				}
			}
		}
		if (iLocal_421 == 0)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
			{
				if (unk_0xA5F6598E13F98E08(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0x463C4747B41E35A3(iLocal_251) > 0,89f)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_284))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
							{
								unk_0x68433819717660CF(&iLocal_264);
								unk_0xAEB228D978E7ADD1("scr_trev4_747_blood_impact", iLocal_284, -12,5793f, 12,2f, -7,09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_673 = unk_0x1E3116EEB28D5F17("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0x23A4CE7F9EBB02D4(iLocal_254, "Trevor_4_747_Man_Sucked_In", -938,6f, -2984,13f, 15,47f, 0, 0, 0, 0);
								iLocal_234 = unk_0x53C562FD2B9E3AB0();
								iLocal_421 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 574)
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_294))
				{
					if (unk_0x9A0B2ED5055D3F0B(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_294 = unk_0x5E35CF35E65D69B9(joaat("prop_jet_bloodsplat_01"), -946,4231f, -2979,826f, 12,9264f, true, true, false);
						unk_0x59AF3B40AE222194(iLocal_294, 0f, 0f, -121,5948f, 2, 1);
						unk_0x47F55B6102CA9143(iLocal_294, 0f, 0f, 0,8729f, -0,4879f);
						unk_0x14776E43F90DD454(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_284))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
						{
							unk_0xAEB228D978E7ADD1("scr_trev4_747_engine_debris", iLocal_284, -12,6286f, 6,85353f, -7,13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0xA15269351F50F113(iLocal_284, false, false, 0);
							func_227();
							unk_0x0B9D04994D02CC2F(iLocal_253);
							iLocal_484 = 1;
						}
					}
				}
			}
			if (iLocal_447[0] == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 300)
				{
					if (unk_0xE0B0126B4689CB72(iLocal_673))
					{
						unk_0x990DE45B7A2B6426(iLocal_673, 0);
					}
					iLocal_447[0] = 1;
				}
			}
			else if (iLocal_448[0] == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 700)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_284))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
						{
							iLocal_673 = unk_0x1E3116EEB28D5F17("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_448[0] = 1;
						}
					}
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 1000)
				{
					if (unk_0xE0B0126B4689CB72(iLocal_673))
					{
						unk_0x990DE45B7A2B6426(iLocal_673, 0);
					}
					iLocal_447[1] = 1;
				}
			}
			else if (iLocal_448[1] == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 1400)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_284))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
						{
							iLocal_673 = unk_0x1E3116EEB28D5F17("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12,6323f, 8,1153f, -7,0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_672 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_damage", iLocal_284, -11,956f, 10,528f, -7,657f, 0f, 2f, 0f, 1f, 0, 0, 0);
							iLocal_448[1] = 1;
						}
					}
				}
			}
			else if (iLocal_447[2] == 0)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_234 + 3500)
				{
					if (unk_0xE0B0126B4689CB72(iLocal_673))
					{
						unk_0x990DE45B7A2B6426(iLocal_673, 0);
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_284))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_284, 0))
						{
							unk_0xD38F266C132F2897(iLocal_284, false, false, false, false, false, false, 0, false);
						}
					}
					iLocal_447[2] = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if (iLocal_422 == 1)
			{
				if (iLocal_460 == 0)
				{
					if (!unk_0x0ACC2116170FA204(iLocal_295))
					{
						iLocal_244 = unk_0x53C562FD2B9E3AB0();
						iLocal_460 = 1;
					}
				}
				else if (unk_0x53C562FD2B9E3AB0() > iLocal_244 + 2000)
				{
					unk_0xEDC33A771FAEB393(iLocal_295, true);
					iLocal_459 = 1;
				}
			}
		}
		if (iLocal_464 == 0)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_284))
				{
					unk_0xEDC33A771FAEB393(iLocal_284, false);
					iLocal_464 = 1;
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_295))
		{
			if (unk_0xA6DECE14FC9A8C51(iLocal_300))
			{
				if (func_16(unk_0xFC1458A37D98B502(), iLocal_295, 1) < 1,5f && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x4AFBCBFDE748D4E0(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					unk_0xE30CF11C0EE14316(&iLocal_300);
					unk_0x452336926718D62A(&iLocal_295);
					func_122();
					iLocal_223 = 0;
					iLocal_222 = 8;
				}
			}
		}
	}
}

void func_227()//Position - 0x1320F
{
	if (unk_0xE0B0126B4689CB72(iLocal_668))
	{
		unk_0x990DE45B7A2B6426(iLocal_668, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_669))
	{
		unk_0x990DE45B7A2B6426(iLocal_669, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_670))
	{
		unk_0x990DE45B7A2B6426(iLocal_670, 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_671))
	{
		unk_0x990DE45B7A2B6426(iLocal_671, 0);
	}
}

int func_228(int iParam0)//Position - 0x1325F
{
	return func_229(iParam0, 1, 0);
}

int func_229(int iParam0, bool bParam1, bool bParam2)//Position - 0x1326F
{
	int iVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_230(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(iVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_230(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
		unk_0xDB6E56C09E5CF0AA(iVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(iVar0, func_230(unk_0x3A711520F83BAE98(), 0,7f, 0,7f));
	}
	return iVar0;
}

float func_230(bool bParam0, float fParam1, float fParam2)//Position - 0x13313
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_231(int iParam0)//Position - 0x1332A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x191BE1BC8F26F3C1(*iParam0, 0))
	{
		vVar0 = { 22,6057f, -2,10018f, -6,22841f };
		vVar1 = { 12,6349f, 7,89711f, -7,09742f };
		vVar2 = { -22,5879f, -2,2931f, -6,22542f };
		vVar3 = { -12,6675f, 8,15519f, -6,98833f };
		vVar4 = { 180f, 0f, 0f };
		iLocal_668 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_heathaze", *iParam0, vVar0, vVar4, 1f, 0, 0, 0);
		iLocal_669 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_heathaze", *iParam0, vVar1, vVar4, 1f, 0, 0, 0);
		iLocal_670 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_heathaze", *iParam0, vVar2, vVar4, 1f, 0, 0, 0);
		iLocal_671 = unk_0x1E3116EEB28D5F17("scr_trev4_747_engine_heathaze", *iParam0, vVar3, vVar4, 1f, 0, 0, 0);
	}
}

void func_232()//Position - 0x1340D
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_264))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
		{
			if (unk_0x4B2B9484BBAA2F31(iLocal_264))
			{
				if (func_16(unk_0xFC1458A37D98B502(), iLocal_264, 1) < 17f)
				{
					unk_0x970F7CCF4BBD78AA(iLocal_264, 3f, 1);
				}
				if (func_16(unk_0xFC1458A37D98B502(), iLocal_264, 1) < 22f && func_16(unk_0xFC1458A37D98B502(), iLocal_264, 1) > 17f)
				{
					unk_0x970F7CCF4BBD78AA(iLocal_264, 2f, 1);
				}
				if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -921,7f, -2946,4f, 13,4f, true) > 8f && !unk_0x841ED61760A7D07B(iLocal_264))
				{
					if (func_16(unk_0xFC1458A37D98B502(), iLocal_264, 1) > 22f)
					{
						unk_0x970F7CCF4BBD78AA(iLocal_264, 1f, 1);
					}
				}
				else if (func_16(unk_0xFC1458A37D98B502(), iLocal_264, 1) > 22f)
				{
					unk_0x970F7CCF4BBD78AA(iLocal_264, 2f, 1);
				}
			}
		}
	}
	if (iLocal_223 > 0)
	{
		if (iLocal_442 == 0)
		{
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -926,0258f, -2958,615f, 12,46467f, -930,6525f, -2956,061f, 16,45945f, 2,75f, 0, true, 0))
			{
				iLocal_442 = 1;
			}
		}
		else
		{
			unk_0x4FB260623DD93924(0, 22, 1);
			unk_0x4FB260623DD93924(0, 25, 1);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0,98f);
			unk_0x5C57ECBE59C08573(unk_0xFC1458A37D98B502(), fLocal_324);
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_284))
		{
			unk_0x6FF834D85E2DD4C6(joaat("jet"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("jet")))
			{
				iLocal_284 = unk_0xEA60F3B426BB095B(joaat("jet"), -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
				unk_0xC7BF27112709A906(iLocal_284, 2);
				unk_0xCF5EB2CB1B30F02C(iLocal_284, 0);
				unk_0xEDC33A771FAEB393(iLocal_284, true);
				unk_0xD38F266C132F2897(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x14776E43F90DD454(joaat("jet"));
				unk_0xCFB385D0FF082808(iLocal_284, 500);
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_266))
		{
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_airworker"));
			unk_0x6450931B826B49D9("misssolomon_3");
			unk_0x6FF834D85E2DD4C6(joaat("p_amb_clipboard_01"));
			if ((unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_airworker")) && unk_0x3A801AA34DD821BE("misssolomon_3")) && unk_0x9A0B2ED5055D3F0B(joaat("p_amb_clipboard_01")))
			{
				iLocal_266 = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_airworker"), -932,1812f, -2967,947f, 12,9451f, 170,7182f, 1, true);
				unk_0xD38F266C132F2897(iLocal_266, false, false, false, false, false, false, 0, false);
				unk_0x5C5D33A1B2711D21(iLocal_266, false);
				unk_0x771A86309E0CA47B(iLocal_266, true);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				iLocal_296 = unk_0x5E35CF35E65D69B9(joaat("p_amb_clipboard_01"), -932,1812f, -2967,947f, 12,9451f, true, true, false);
				unk_0xA9D382E7BA095148(iLocal_296, iLocal_266, unk_0xDD09837E5235FE91(iLocal_264, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_252 = unk_0x8383F9C605E523B7(-932,847f, -2978,498f, 13,946f, 0f, 0f, 16,56f, 2);
				unk_0x8E628F774C748D93(iLocal_266, iLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x14776E43F90DD454(joaat("s_m_y_airworker"));
				unk_0x14776E43F90DD454(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
		{
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_cop_01"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_cop_01")))
			{
				iLocal_268[0] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_cop_01"), -969,06f, -2955,186f, 12,945f, 241,1703f, 1, true);
				unk_0x9E058151726E58DE(iLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
				unk_0xBB3CC641B6AED5E5(iLocal_268[0], 20);
				unk_0xCFF0CD14B439821D(iLocal_268[0], true, 1);
				unk_0x771A86309E0CA47B(iLocal_268[0], true);
				unk_0x9627C22EF3C3F4D6(iLocal_268[0], unk_0xFC1458A37D98B502(), -1, 1);
				func_124(iLocal_268[0], 0);
			}
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_285))
		{
			unk_0x6FF834D85E2DD4C6(joaat("shamal"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("shamal")))
			{
				iLocal_285 = unk_0xEA60F3B426BB095B(joaat("shamal"), -968,3718f, -2952,298f, 12,9451f, 114,9439f, true, true, false);
				unk_0x6D4A70E9DE82B24B(iLocal_285, 0, 0, 1);
				unk_0xACE486395AA1867D(iLocal_285, 1084227584);
				unk_0x14776E43F90DD454(joaat("shamal"));
				unk_0xE01CE1EBCD7EE551(iLocal_285, 2000, 0);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_285))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_285, 0))
			{
				if (func_16(unk_0xFC1458A37D98B502(), iLocal_285, 1) > 5f)
				{
					unk_0x6D4A70E9DE82B24B(iLocal_285, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_223 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_343 == 1)
		{
			if (!unk_0x3E9CABD07B829173())
			{
				unk_0xAE83ED4C9081AE6F(0);
			}
			func_117();
			func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
			iLocal_343 = 0;
		}
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_442 = 0;
		fLocal_324 = 3f;
		iLocal_227 = 0;
		func_186(0, 1);
		unk_0x9E6ACDF1473CD846(45, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(35, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(2, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(54, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(1, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(9, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(61, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(63, "BB_CHASE");
		unk_0x9E6ACDF1473CD846(64, "BB_CHASE");
		unk_0xA68F7B004463AB6F(&iLocal_305);
		unk_0x137FC8E0F58D9E0B("digitalOverlay");
		if (unk_0x6ADD12BF4D6D2587(iLocal_278))
		{
			unk_0xF0037A481D043FE1(iLocal_278, 0);
			unk_0x5380482A432E314E(&iLocal_278);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_287))
		{
			unk_0xC91FE17AD7353B70(&iLocal_287);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_276[0]))
		{
			unk_0x68433819717660CF(&(iLocal_276[0]));
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
		{
			unk_0xC91FE17AD7353B70(&(iLocal_280[0]));
		}
		unk_0x37CCA92597E1747D(0);
		unk_0x687903C882D93029(1);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
		{
			if (!unk_0xA6DECE14FC9A8C51(iLocal_297))
			{
				iLocal_297 = unk_0xCA43F0FC44D9B846(iLocal_264);
				unk_0xDB6E56C09E5CF0AA(iLocal_297, true);
			}
		}
		unk_0x1B5A255BF0D63005("PoliceScannerDisabled", 1);
		if (iLocal_363[2] == 1)
		{
			if (!unk_0xCCCA18C9A006FF83(iLocal_261))
			{
				unk_0x0B9D04994D02CC2F(iLocal_261);
			}
			unk_0xB94964861C6B4D3C(iLocal_261);
			iLocal_390 = 0;
			iLocal_363[2] = 0;
		}
		unk_0xC0EBC1452FCAB15C(5);
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 3, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x8810DC630928B398("TRV4_RUN");
		if (!unk_0x6ADD12BF4D6D2587(iLocal_284))
		{
			unk_0x6FF834D85E2DD4C6(joaat("jet"));
		}
		if (!unk_0x6ADD12BF4D6D2587(iLocal_266))
		{
			unk_0x6FF834D85E2DD4C6(joaat("s_m_y_airworker"));
		}
		unk_0x6FF834D85E2DD4C6(joaat("shamal"));
		unk_0x6FF834D85E2DD4C6(joaat("s_m_y_cop_01"));
		unk_0x6FF834D85E2DD4C6(joaat("police3"));
		unk_0x6FF834D85E2DD4C6(joaat("p_amb_clipboard_01"));
		unk_0x0D9525F20FB71C52(68, "BB_Chase");
		unk_0x0D9525F20FB71C52(69, "BB_Chase");
		unk_0x6450931B826B49D9("misssolomon_3");
		system::settimera(0);
		if (unk_0xC316B5E3E7ACF515("Trev4_5"))
		{
			unk_0x3794E4CC2803099A("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_24())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -880,365f, -2942,26f, 14f, 9,55f, 15,69f, 5f, false, true, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -945,725f, -2893,15f, 14f, 4,5f, 9,56f, 5f, false, true, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (system::timera() > 15000)
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -932,1196f, -2934,317f, 12,9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
			{
				if (!unk_0x4B2B9484BBAA2F31(iLocal_264))
				{
					unk_0xFB02C50CC0E93FAA(iLocal_264, "BB_MOLLY_2", 10, 4, -1);
					unk_0x12C9D41D52A560D6(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			system::settimera(0);
			iLocal_223 = 3;
		}
	}
	if (iLocal_223 == 3)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
		{
			if (unk_0x4B2B9484BBAA2F31(iLocal_264))
			{
				if (unk_0x0732FE63BEBCD919(iLocal_264) > 18 && iLocal_405 == 0)
				{
					iLocal_350 = 0;
					unk_0x970F7CCF4BBD78AA(iLocal_264, 3f, 1);
					iLocal_223 = 0;
					iLocal_222 = 6;
				}
			}
		}
		if (system::timera() > 50000)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
			{
				unk_0x957CEE967C939968(iLocal_264);
				unk_0xBD8D47FDC6902B2D(iLocal_264, -932,5f, -2964,1f, 13,4f, 1, false, 0, 1);
				unk_0xFB02C50CC0E93FAA(iLocal_264, "BB_MOLLY_2", 18, 4, -1);
				unk_0x12C9D41D52A560D6(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_350 = 0;
				iLocal_223 = 0;
				iLocal_222 = 6;
			}
		}
	}
}

void func_233(char* sParam0)//Position - 0x13C6A
{
	if (iLocal_405 == 0)
	{
		if (iLocal_334)
		{
			func_223(0, 1, 1, 0);
			unk_0x7849794435F39D49(iLocal_301, false);
			unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
			unk_0x9B47B379EE749C38(true);
			if (unk_0x771D0F8F56A5FE6C("SOL_3_CHOPPER_CAM"))
			{
				unk_0xE02E32C69260FBB7("SOL_3_CHOPPER_CAM");
			}
			unk_0x0B9D04994D02CC2F(iLocal_261);
			func_243();
			unk_0x687903C882D93029(1);
			iLocal_363[2] = 0;
			iLocal_334 = 0;
		}
		unk_0x8810DC630928B398("TRV4_FAIL");
		sLocal_489 = sParam0;
		unk_0x84CDD933AFA470D2();
		func_211();
		func_209();
		func_234(sLocal_489);
		iLocal_405 = 1;
	}
}

void func_234(char* sParam0)//Position - 0x13CF3
{
	func_242(sParam0);
	func_235(0);
}

void func_235(int iParam0)//Position - 0x13D06
{
	int iVar0;
	
	if (Global_104555.f_9055 || func_422(0))
	{
		iVar0 = func_8();
		if (!func_236(iVar0))
		{
			return;
		}
		unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
		Global_92869 = iParam0;
	}
}

int func_236(int iParam0)//Position - 0x13D4B
{
	int iVar0;
	int iVar1;
	
	func_241();
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xFFC4F532496D6427(5000);
	}
	iVar0 = Global_83730[iParam0 /*5*/];
	iVar1 = Global_71125.f_109[iVar0 /*4*/];
	func_240(iVar1, 1);
	unk_0xEC27A5F45CFF069F(unk_0x9EB17624F44A8DA4());
	unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
	func_237(&(Global_104555.f_2353.f_539), iVar1);
	if (Global_87153 == Global_92870)
	{
		Global_104555.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xC80D31E4B587871C(Global_83766[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0xC623E2691C004001(0);
		}
	}
	Global_104555.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87153 = Global_92870;
	if (iParam0 == -1)
	{
		if (Global_104555.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_83730[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_237(var uParam0, int iParam1)//Position - 0x13E62
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104555.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xC80D31E4B587871C(Global_104555.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_239(Global_104555.f_18503[iVar0], &vVar2, &fVar3))
			{
				Global_104555.f_18503[iVar0] = 318;
				func_238(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90368[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_9 = 0f;
				Global_90368[iVar0 /*29*/].f_12 = 0f;
				Global_90368[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_10 = 0f;
				Global_90368[iVar0 /*29*/].f_13 = 0f;
				Global_90368[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_11 = 0f;
				Global_90368[iVar0 /*29*/].f_14 = 0f;
				Global_90368[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_26 = 0f;
				Global_90368[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_27 = 0f;
				Global_90368[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90368[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_238(var uParam0)//Position - 0x1402E
{
	*uParam0 = -15;
}

int func_239(int iParam0, var uParam1, float fParam2)//Position - 0x1403C
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_239(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_239(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_240(int iParam0, bool bParam1)//Position - 0x149AB
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
	}
}

void func_241()//Position - 0x149E9
{
	Global_92868 = 1;
	if (unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
	}
	else if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(&Global_71088))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_71088, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71088, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71088, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71092, "", 16);
		}
		Global_92868 = 0;
		unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 25);
	}
}

void func_242(char* sParam0)//Position - 0x14AD8
{
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		if (unk_0x96AAAC172E3B9680(sParam0) <= 16)
		{
			StringCopy(&Global_71088, sParam0, 16);
			StringCopy(&Global_71092, "", 16);
			if (unk_0x2D8BD7F773A1EA2C())
			{
				unk_0xBA895E5C4D5B8B12();
			}
		}
	}
}

void func_243()//Position - 0x14B18
{
	Global_55910 = 0;
}

void func_244()//Position - 0x14B24
{
	if (!unk_0x6ADD12BF4D6D2587(iLocal_284))
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_278))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 30000f)
					{
						unk_0x6FF834D85E2DD4C6(joaat("jet"));
						if (unk_0x9A0B2ED5055D3F0B(joaat("jet")))
						{
							iLocal_284 = unk_0xEA60F3B426BB095B(joaat("jet"), -952,1345f, -2990,269f, 12,9451f, 240,7726f, true, true, false);
							unk_0xC7BF27112709A906(iLocal_284, 2);
							unk_0xCF5EB2CB1B30F02C(iLocal_284, 0);
							unk_0xEDC33A771FAEB393(iLocal_284, true);
							unk_0xD38F266C132F2897(iLocal_284, true, true, true, true, true, false, 0, false);
							unk_0x14776E43F90DD454(joaat("jet"));
							unk_0xCFB385D0FF082808(iLocal_284, 500);
						}
					}
				}
			}
		}
	}
	func_337();
	if (unk_0xA6DECE14FC9A8C51(iLocal_297))
	{
		func_336(iLocal_297, iLocal_264, 300f, 0,9f, 0);
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_224 < 2)
		{
			unk_0x2252CB8A0F955D1D(unk_0xFC1458A37D98B502(), 0);
		}
		func_335();
		func_303();
		if (iLocal_395 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[20]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_204[20], 0))
				{
					unk_0xA15269351F50F113(iLocal_204[20], true, true, 0);
					unk_0xFDAFE1354D61AE41(iLocal_204[20]);
					iLocal_395 = 1;
				}
			}
		}
		func_302();
		func_301();
		if (iLocal_347 == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						func_300(iLocal_301, iLocal_287, "BB_Chase", 1);
						iLocal_347 = 1;
					}
				}
			}
		}
		else if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_278))
			{
				func_299(iLocal_301, iLocal_287, fLocal_321);
				unk_0xE43C573FE3C5D758(iLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if ((unk_0x9DC40A4E8D2F7969(iLocal_278) > 15000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 125464f) && func_292(1, 0, 0))
					{
						iLocal_350 = 1;
						if (iLocal_405 == 0)
						{
							unk_0x3E80C2F7BC665259(1);
							func_291("TRV4_HELP1", -1);
							func_286(1);
							func_207(&uLocal_28, 0, 0);
							unk_0xBC3B7443617858A0(false);
							iLocal_335 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_278))
			{
				if (unk_0x34D11AB5BA7922C2(iLocal_305) && func_183(1, "BB_Chase"))
				{
					if (((unk_0x9DC40A4E8D2F7969(iLocal_278) > 15000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 125464f) && iLocal_405 == 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						func_264();
					}
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 125464f || !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						if (iLocal_334)
						{
							unk_0x3E80C2F7BC665259(1);
							func_223(0, 1, 1, 0);
							unk_0x7849794435F39D49(iLocal_301, false);
							unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
							unk_0x9B47B379EE749C38(true);
							if (unk_0x771D0F8F56A5FE6C("SOL_3_CHOPPER_CAM"))
							{
								unk_0xE02E32C69260FBB7("SOL_3_CHOPPER_CAM");
							}
							unk_0x0B9D04994D02CC2F(iLocal_261);
							func_243();
							unk_0x687903C882D93029(1);
							iLocal_363[2] = 0;
							iLocal_334 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_487[0] == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 44255f && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1187,3f, -2847,8f, 13,6f, true) < 100f)
							{
								unk_0x1267474D9A69CA37(10f, 1073741824, 3);
								iLocal_487[0] = 1;
							}
						}
					}
				}
				if (iLocal_487[1] == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 52875f && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1349f, -2720f, 14f, true) < 50f)
							{
								unk_0x1267474D9A69CA37(6f, 1073741824, 3);
								iLocal_487[1] = 1;
							}
						}
					}
				}
				if (iLocal_487[2] == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 87085f && unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1507f, -2520f, 14f, true) < 70f)
							{
								unk_0x1267474D9A69CA37(10f, 1073741824, 3);
								iLocal_487[2] = 1;
							}
						}
					}
				}
				func_263();
				func_262();
				if (!unk_0x771D0F8F56A5FE6C("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 64280f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 72000f)
								{
									if (unk_0xBE3C4023003180FC(-1149,6f, -2323,7f, 22,5f, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true) < 130f)
									{
										unk_0xE859EF37EA7362D3("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 72500f)
							{
								unk_0xE02E32C69260FBB7("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 78000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 85000f)
								{
									unk_0xE859EF37EA7362D3("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 85500f)
							{
								unk_0xE02E32C69260FBB7("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 100000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 107000f)
								{
									unk_0xE859EF37EA7362D3("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 107500f)
							{
								unk_0xE02E32C69260FBB7("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 10000f)
							{
								func_261();
							}
						}
					}
				}
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 30000f)
						{
							func_260(iLocal_278, unk_0x9DC40A4E8D2F7969(iLocal_278));
						}
					}
				}
				if (iLocal_408 == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 22000f)
							{
								unk_0xAAB7D68F04F8C8BA("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 1;
							}
						}
					}
				}
				else if (iLocal_409 == 0)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -940,8253f, -2858,602f, 11,94482f, -1001,272f, -2823,764f, 21,00674f, 5,75f, 0, true, 0))
					{
						unk_0x8810DC630928B398("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 1;
					}
				}
				if (iLocal_341 == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (func_16(iLocal_278, unk_0xFC1458A37D98B502(), 1) < 170f && unk_0x841ED61760A7D07B(iLocal_278))
						{
							if (unk_0xA6DECE14FC9A8C51(iLocal_299))
							{
								unk_0xE30CF11C0EE14316(&iLocal_299);
							}
							if (unk_0x771D0F8F56A5FE6C("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xE02E32C69260FBB7("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x771D0F8F56A5FE6C("SOL_3_MAIN_CHASE"))
							{
								unk_0xE859EF37EA7362D3("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xA6DECE14FC9A8C51(iLocal_297))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
								{
									iLocal_297 = unk_0xCA43F0FC44D9B846(iLocal_264);
									unk_0xDB6E56C09E5CF0AA(iLocal_297, true);
								}
							}
							unk_0x981B8A90686AD23E();
							if (!unk_0x23F2F89E3D1CB7C4())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x8810DC630928B398("TRV4_CHASE");
								iLocal_341 = 1;
							}
						}
					}
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -536,0366f, -2102,793f, 5,672412f, -464,5755f, -2165,133f, 14,75182f, 65,25f, 0, true, 0))
					{
						if (unk_0xA6DECE14FC9A8C51(iLocal_299))
						{
							unk_0xE30CF11C0EE14316(&iLocal_299);
						}
						if (!unk_0xA6DECE14FC9A8C51(iLocal_297))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
							{
								iLocal_297 = unk_0xCA43F0FC44D9B846(iLocal_264);
								unk_0xDB6E56C09E5CF0AA(iLocal_297, true);
							}
						}
						unk_0x981B8A90686AD23E();
						if (!unk_0x23F2F89E3D1CB7C4())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x8810DC630928B398("TRV4_CHASE");
							iLocal_341 = 1;
						}
					}
				}
				else if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0)
				{
					unk_0x6FF834D85E2DD4C6(joaat("jet"));
					if (unk_0x9A0B2ED5055D3F0B(joaat("jet")))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 18490f)
								{
									iLocal_280[1] = unk_0xEA60F3B426BB095B(joaat("jet"), -441,3117f, -3435,736f, 409,9454f, 148,3975f, true, true, false);
									unk_0x8D7ABC97ED508270(iLocal_280[1], 2, "BB_Chase", 1);
									unk_0x14776E43F90DD454(joaat("jet"));
									iLocal_326 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_280[1]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_280[1], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_280[1]))
						{
							unk_0x3998782E46B46C7F(iLocal_280[1], fLocal_321);
							if (unk_0x9DC40A4E8D2F7969(iLocal_280[1]) > 20000f)
							{
								if (func_16(unk_0xFC1458A37D98B502(), iLocal_280[1], 1) > 200f && !unk_0x841ED61760A7D07B(iLocal_280[1]))
								{
									unk_0x7674774BB9279265(iLocal_280[1]);
									if (unk_0x6ADD12BF4D6D2587(iLocal_276[1]))
									{
										unk_0x68433819717660CF(&(iLocal_276[1]));
									}
									unk_0xC91FE17AD7353B70(&(iLocal_280[1]));
									iLocal_249 = unk_0x53C562FD2B9E3AB0() + 1000;
								}
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_280[1]))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_280[1]) > 31543f)
								{
									unk_0x7674774BB9279265(iLocal_280[1]);
									unk_0xEDC33A771FAEB393(iLocal_280[1], true);
								}
							}
						}
						else if (func_16(unk_0xFC1458A37D98B502(), iLocal_280[1], 1) > 200f && !unk_0x841ED61760A7D07B(iLocal_280[1]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_276[1]))
							{
								unk_0x68433819717660CF(&(iLocal_276[1]));
							}
							unk_0xC91FE17AD7353B70(&(iLocal_280[1]));
							iLocal_249 = unk_0x53C562FD2B9E3AB0() + 1000;
						}
					}
				}
				if (iLocal_432 == 0)
				{
					if (!unk_0x6ADD12BF4D6D2587(iLocal_283))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 23000f)
								{
									unk_0x6FF834D85E2DD4C6(joaat("tanker"));
									if (unk_0x9A0B2ED5055D3F0B(joaat("tanker")))
									{
										iLocal_283 = unk_0xEA60F3B426BB095B(joaat("tanker"), -1325f, -2779f, 14f, 233,9563f, true, true, false);
										unk_0x14776E43F90DD454(joaat("tanker"));
										unk_0x1E7A8525FB41AAFE(iLocal_283, 57, 57);
										iLocal_432 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[1]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[1], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[1]))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_204[1]) > 13000f)
							{
								if (iLocal_370 == 0)
								{
									fLocal_123[1] = 0,5f;
									iLocal_269 = unk_0x317536BCEA8FA6B0(iLocal_204[1], -1, 0);
									iLocal_370 = 1;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0)
				{
					unk_0x566B32CA90C28D2C(-1325f, -2779f, 14f);
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[1]))
					{
						if (iLocal_361 == 0)
						{
							unk_0x1E7A8525FB41AAFE(iLocal_204[1], 57, 57);
							iLocal_361 = 1;
						}
						if (unk_0x6ADD12BF4D6D2587(iLocal_283))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_204[1], 0))
							{
								if (!unk_0x191BE1BC8F26F3C1(iLocal_283, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_204[1]))
									{
										unk_0x7A23B5BE4EB8A66F(iLocal_204[1], iLocal_283, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_283))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_278))
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 41430f)
									{
										unk_0x6B7C10B19928914F(iLocal_283, 1, true);
										iLocal_332 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[1], 0))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 42700f)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_269))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_269))
										{
											unk_0xE01CE1EBCD7EE551(iLocal_269, 0, 0);
										}
									}
									if (unk_0x8DDE799D31A3D099(iLocal_204[1]))
									{
										unk_0x7674774BB9279265(iLocal_204[1]);
										iLocal_373 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (iLocal_467 == 0)
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 38000f)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_204[1]) && unk_0xB8DE76287EDC4957(iLocal_204[1], 0))
									{
										unk_0x7CC4363AEEF7EF34(-1, "Trevor_4_747_Tanker_Horn", iLocal_204[1], 0, 0, 0);
										iLocal_467 = 1;
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 39000f)
								{
									if (!unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xE859EF37EA7362D3("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0xD38F266C132F2897(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, true, true, false, false, false, 0, false);
									}
									iLocal_363[1] = 1;
								}
							}
							if (iLocal_403 == 0)
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 41611f)
								{
									if (unk_0x6ADD12BF4D6D2587(iLocal_283))
									{
										if (!unk_0x191BE1BC8F26F3C1(iLocal_283, 0))
										{
											if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
											{
												if (!unk_0x191BE1BC8F26F3C1(iLocal_204[7], 0))
												{
													unk_0x7CC4363AEEF7EF34(-1, "Trevor_4_747_Tanker_Explosion", iLocal_283, 0, 0, 0);
													unk_0x7674774BB9279265(iLocal_204[7]);
													unk_0xD1DE05EA2C437098(iLocal_204[7], 1, 0);
													unk_0xD1DE05EA2C437098(iLocal_283, 1, 0);
													unk_0x91C52DAA1CBF6F0B(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1f, 0);
													unk_0x91C52DAA1CBF6F0B(-1212f, -2855f, 14,34f, 14, 1f, 1, 0, 1f, 0);
													unk_0x5380482A432E314E(&iLocal_283);
													unk_0x5380482A432E314E(&(iLocal_204[1]));
													iLocal_403 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[1] == 0)
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 43204f)
								{
									if (unk_0x771D0F8F56A5FE6C("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xE02E32C69260FBB7("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x751FF861325F816B("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0xD38F266C132F2897(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), false, false, false, false, false, false, 0, false);
									}
									iLocal_364[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x771D0F8F56A5FE6C("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[0]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[0], 0))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 36000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 40000f)
										{
											unk_0xE859EF37EA7362D3("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_204[0]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[0], 0))
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_278))
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 43204f)
									{
										unk_0xE02E32C69260FBB7("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 60500f)
							{
								unk_0x6FF834D85E2DD4C6(joaat("jet"));
							}
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 66500f)
							{
								if (unk_0x9A0B2ED5055D3F0B(joaat("jet")))
								{
									iLocal_280[0] = unk_0xEA60F3B426BB095B(joaat("jet"), -1119,072f, -1864,548f, -8,2205f, 148,3975f, true, true, false);
									unk_0x1A0806871323CD16(iLocal_280[0], true);
									unk_0xC7BF27112709A906(iLocal_280[0], 2);
									unk_0x8D7ABC97ED508270(iLocal_280[0], 35, "BB_Chase", 1);
									unk_0x7A1DBB5E36EE3379(iLocal_280[0], 3491f);
									unk_0x14776E43F90DD454(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_280[0], 0))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_280[0]))
								{
									unk_0x3998782E46B46C7F(iLocal_280[0], fLocal_321);
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 80000f)
									{
										if (func_16(iLocal_280[0], unk_0xFC1458A37D98B502(), 1) > 200f)
										{
											unk_0x7674774BB9279265(iLocal_280[0]);
										}
									}
								}
								else if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 80000f)
								{
									if (func_16(iLocal_280[0], unk_0xFC1458A37D98B502(), 1) > 200f && !unk_0x841ED61760A7D07B(iLocal_280[0]))
									{
										if (unk_0x6ADD12BF4D6D2587(iLocal_276[0]))
										{
											unk_0x68433819717660CF(&(iLocal_276[0]));
										}
										unk_0xC91FE17AD7353B70(&(iLocal_280[0]));
										iLocal_249 = unk_0x53C562FD2B9E3AB0() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0)
				{
					if (iLocal_391 == 0)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_278))
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 50000f)
									{
										unk_0x6FF834D85E2DD4C6(joaat("s_m_y_airworker"));
										unk_0x6450931B826B49D9("misstrevor4");
										if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_airworker")))
										{
											iLocal_270 = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_airworker"), -1170,541f, -2507,111f, 12,9455f, 218,3035f, 1, true);
											iLocal_271 = unk_0xAC992EFAD62C33BF(26, joaat("s_m_y_airworker"), -1168,264f, -2508,715f, 12,9455f, 70,7735f, 1, true);
											unk_0x771A86309E0CA47B(iLocal_270, true);
											unk_0x771A86309E0CA47B(iLocal_271, true);
											unk_0x14776E43F90DD454(joaat("s_m_y_airworker"));
											iLocal_391 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 58000f)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_270))
									{
										if (unk_0x3A801AA34DD821BE("misstrevor4"))
										{
											if (!unk_0xA5F6598E13F98E08(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0x12C9D41D52A560D6(iLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_271))
									{
										if (unk_0x3A801AA34DD821BE("misstrevor4"))
										{
											if (!unk_0xA5F6598E13F98E08(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0x12C9D41D52A560D6(iLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_392 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x6ADD12BF4D6D2587(iLocal_270))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_270))
					{
						if (!unk_0xA5F6598E13F98E08(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_271))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_271))
								{
									if (!unk_0xA5F6598E13F98E08(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0xFCCDDE0E48CF9588("misstrevor4");
										unk_0x486F346ADFE56674(&iLocal_270);
										unk_0x486F346ADFE56674(&iLocal_271);
									}
								}
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[8]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 50200f)
										{
											if (iLocal_328 == 0)
											{
												unk_0x3998782E46B46C7F(iLocal_204[8], 1f);
												if (func_16(unk_0xFC1458A37D98B502(), iLocal_204[8], 1) < 100f)
												{
													unk_0x41390D2B41D5502D(0,3f);
													iLocal_366 = 0;
													if (!unk_0x771D0F8F56A5FE6C("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xE859EF37EA7362D3("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xFE45742ED70F5BA3(iLocal_204[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0xCFF0CD14B439821D(iLocal_204[8], true, 1);
												unk_0x9B61DD542916B30C(iLocal_204[8], 1, 0);
												unk_0x7CC4363AEEF7EF34(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[8], 0, 0, 0);
												system::settimerb(0);
												iLocal_328 = 1;
											}
										}
										if (iLocal_328 == 1)
										{
											if (system::timerb() > 662)
											{
												if (unk_0x771D0F8F56A5FE6C("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xE02E32C69260FBB7("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x41390D2B41D5502D(1f);
												iLocal_366 = 1;
											}
											if (system::timerb() > 1872)
											{
												unk_0x7674774BB9279265(iLocal_204[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (unk_0x8DDE799D31A3D099(iLocal_278))
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 50200f)
									{
										if (!unk_0x0ACC2116170FA204(iLocal_204[8]))
										{
											if (iLocal_378 == 0)
											{
												unk_0x7CC4363AEEF7EF34(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[8], 0, 0, 0);
												unk_0xD1DE05EA2C437098(iLocal_204[8], 1, 0);
												iLocal_378 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0)
					{
						if (iLocal_328 == 1)
						{
							if (system::timerb() > 662)
							{
								if (unk_0x771D0F8F56A5FE6C("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xE02E32C69260FBB7("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x41390D2B41D5502D(1f);
								iLocal_366 = 1;
							}
						}
					}
				}
				else if (iLocal_366 == 0)
				{
					if (iLocal_328 == 1)
					{
						if (system::timerb() > 662)
						{
							if (unk_0x771D0F8F56A5FE6C("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xE02E32C69260FBB7("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x41390D2B41D5502D(1f);
							iLocal_366 = 1;
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[11]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[11], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[11]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 82683f)
										{
											if (iLocal_329 == 0)
											{
												unk_0x7CC4363AEEF7EF34(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[11], 0, 0, 0);
												iLocal_329 = 1;
												system::settimerb(0);
											}
											if (iLocal_329 == 1)
											{
												if (system::timerb() > 1872)
												{
													if (!unk_0x0ACC2116170FA204(iLocal_204[11]))
													{
														unk_0x7674774BB9279265(iLocal_204[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!unk_0x0ACC2116170FA204(iLocal_204[11]))
								{
									unk_0x7CC4363AEEF7EF34(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[11], 0, 0, 0);
									unk_0xD1DE05EA2C437098(iLocal_204[11], 1, 0);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[12]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[12], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[12]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 82463f)
										{
											if (iLocal_330 == 0)
											{
												unk_0x7CC4363AEEF7EF34(iLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[12], 0, 0, 0);
												iLocal_330 = 1;
												system::settimerb(0);
											}
											if (iLocal_330 == 1)
											{
												if (system::timerb() > 1000)
												{
													if (!unk_0x0ACC2116170FA204(iLocal_204[12]))
													{
														unk_0x7674774BB9279265(iLocal_204[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0)
							{
								if (unk_0x8DDE799D31A3D099(iLocal_204[12]))
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_204[12]) > 22216f && func_16(iLocal_279, iLocal_204[12], 1) < 90f)
									{
										unk_0x41390D2B41D5502D(0,3f);
										unk_0xFE45742ED70F5BA3(iLocal_204[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_245 = unk_0x53C562FD2B9E3AB0();
										iLocal_463 = 1;
									}
								}
							}
						}
						else if (iLocal_330 == 1)
						{
							if (iLocal_380 == 0)
							{
								if (!unk_0x0ACC2116170FA204(iLocal_204[12]))
								{
									unk_0x7CC4363AEEF7EF34(iLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[12], 0, 0, 0);
									unk_0xD1DE05EA2C437098(iLocal_204[12], 1, 0);
									iLocal_380 = 1;
								}
							}
						}
					}
				}
				if (iLocal_463 == 1)
				{
				}
				if (iLocal_462 == 0 && iLocal_463 == 1)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[12]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[12], 0))
						{
							vLocal_317 = { unk_0xB3328BA8976B416C(iLocal_204[12], 1) };
						}
					}
					vLocal_318 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					if (unk_0x53C562FD2B9E3AB0() > iLocal_245 + 1579 || vLocal_318.y < vLocal_317.y)
					{
						unk_0x41390D2B41D5502D(1f);
						unk_0x2C5E25A27FEE0F8A(0);
						iLocal_462 = 1;
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 105000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 113000f)
							{
								unk_0x566B32CA90C28D2C(-1172,3f, -3027,5f, 13,3f);
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[13]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[13], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[13]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 108830f)
										{
											unk_0x5022A3FC14F87EA0(iLocal_204[13], false);
											unk_0xCFF0CD14B439821D(iLocal_204[13], true, 1);
											unk_0xFBA991D3A851E195(iLocal_204[13], false);
											system::settimera(0);
											iLocal_431 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 1)
						{
							unk_0xE01CE1EBCD7EE551(iLocal_204[13], 0, 0);
							unk_0xC922F3465B0ABFC6(iLocal_204[13], true);
							unk_0xE01CE1EBCD7EE551(unk_0x317536BCEA8FA6B0(iLocal_204[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_427 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[5]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[5], 0))
						{
							unk_0xC7BF27112709A906(iLocal_204[5], 0);
							unk_0x1A0806871323CD16(iLocal_204[5], true);
							iLocal_427 = 1;
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_204[15]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[15], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[15]))
						{
							if (unk_0x6ADD12BF4D6D2587(iLocal_278))
							{
								if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
								{
									if (unk_0x8DDE799D31A3D099(iLocal_278))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 104989f)
										{
											unk_0x7674774BB9279265(iLocal_204[15]);
											func_258(iLocal_204[15], -0,04f, -2,21f, 0,887f, 0f, -1f, 0f, 5f, 1);
											func_258(iLocal_204[15], 0,44f, -0,802f, 15,303f, 0f, 0f, 0f, 12f, 1);
											unk_0xD1DE05EA2C437098(iLocal_204[15], 1, 0);
											unk_0x1267474D9A69CA37(4f, 4f, 4);
											unk_0x7CC4363AEEF7EF34(-1, "Trevor_4_747_Carsplosion", iLocal_204[15], 0, 0, 0);
											unk_0x751FF861325F816B("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_278))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 112000f)
							{
								unk_0x307EAE14C924E2E7("BB_MOLLY_2");
								unk_0x6450931B826B49D9("misssolomon_3");
								unk_0x6450931B826B49D9("move_f@film_reel_arms");
								iLocal_224 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_439 == 0)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -887,1561f, -2957,106f, 12,46766f, -848,108f, -2997,588f, 18,23435f, 5f, 0, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_288[0]))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_288[0], 0))
					{
						unk_0xF0037A481D043FE1(iLocal_288[0], 0);
						unk_0x5380482A432E314E(&(iLocal_288[0]));
					}
				}
				if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_275[0]))
					{
						unk_0xB8E08BD5B184DF4E(iLocal_275[0]);
						unk_0x486F346ADFE56674(&(iLocal_275[0]));
					}
				}
				if (iLocal_394 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 115000f)
								{
									unk_0x307EAE14C924E2E7("Trev4_5");
									unk_0x6FF834D85E2DD4C6(joaat("prop_cs_film_reel_01"));
									if (!unk_0x40189ECE75CF9724())
									{
										unk_0x32C900DD9B686F75(-930,7f, -2916,9f, 13,4f, 10f, 0);
									}
									iLocal_394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 120000f)
								{
									if (!unk_0x771D0F8F56A5FE6C("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xE859EF37EA7362D3("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x9F56269A319F960A(iLocal_278);
								}
								if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 125513f)
								{
									unk_0x7674774BB9279265(iLocal_278);
									unk_0xEDC33A771FAEB393(iLocal_278, true);
									func_257();
									unk_0xD581373770173F1F();
									unk_0x8D3373CFE9542320(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f, true, 0);
									unk_0xE02E32C69260FBB7("TREVOR_4_MAIN_CHASE");
									if (!unk_0x8EA3C8E091EA5BA4(iLocal_303))
									{
										iLocal_303 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!unk_0x8EA3C8E091EA5BA4(iLocal_302))
									{
										iLocal_302 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_236 = unk_0x53C562FD2B9E3AB0();
									unk_0xBC3B7443617858A0(true);
									unk_0xC234848D21B6064E(0);
									iLocal_224 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				vLocal_318 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				unk_0x9F56269A319F960A(iLocal_278);
				if (iLocal_439 == 0)
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -887,1561f, -2957,106f, 12,46766f, -848,108f, -2997,588f, 18,23435f, 5f, 0, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0xBE3C4023003180FC(vLocal_318, -930,7f, -2916,9f, 13,4f, true) < 45f)
					{
						iLocal_224 = 3;
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0x841ED61760A7D07B(iLocal_278))
						{
							if (iLocal_439 == 1)
							{
								iLocal_224 = 3;
							}
						}
					}
					if (unk_0x53C562FD2B9E3AB0() > iLocal_236 + 5000 && iLocal_439 == 1)
					{
						iLocal_224 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x40189ECE75CF9724())
				{
					unk_0x81BCCFFE3F019672();
				}
				unk_0x9F56269A319F960A(iLocal_278);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_415 == 0)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (!unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (unk_0x3A801AA34DD821BE("misssolomon_3"))
								{
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
									{
										if (!unk_0x6ADD12BF4D6D2587(iLocal_295))
										{
											if (unk_0x9A0B2ED5055D3F0B(joaat("prop_cs_film_reel_01")))
											{
												iLocal_295 = unk_0x5E35CF35E65D69B9(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
												unk_0xA9D382E7BA095148(iLocal_295, iLocal_264, unk_0xDD09837E5235FE91(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0xEDC33A771FAEB393(iLocal_278, false);
											iLocal_250 = unk_0x8383F9C605E523B7(-929,492f, -2913,472f, 14,16f, 0f, 0f, -28,96f, 2);
											unk_0xEBB74134CCA3442E(iLocal_278, iLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0x8E628F774C748D93(iLocal_264, iLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0x7122D672EBE0EA6E(iLocal_250, false);
											unk_0x8810DC630928B398("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0)
				{
					if (iLocal_415 == 1)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
						{
							if (unk_0x0F3033474C49912D(iLocal_264, -937,6656f, -2927,864f, 12,77007f, -934,8479f, -2929,484f, 14,46523f, 1,5f, 0, true, 0))
							{
								if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0xBD1486160AB0661B(iLocal_264, -1000f, 1);
								}
								unk_0x957CEE967C939968(iLocal_264);
								unk_0x771A86309E0CA47B(iLocal_264, true);
								unk_0xBD8D47FDC6902B2D(iLocal_264, -934,8388f, -2932,831f, 12,9649f, 1, false, 0, 1);
								unk_0x48ED7B2293A96722(iLocal_264, 236,5739f);
								unk_0xFB02C50CC0E93FAA(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0x3A801AA34DD821BE("move_f@film_reel_arms"))
								{
									unk_0x12C9D41D52A560D6(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_417 = 1;
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (iLocal_425 == 0)
					{
						if (iLocal_424 == 0)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
							{
								if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0x463C4747B41E35A3(iLocal_250) > 0,18f || unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -930,7f, -2916,9f, 13,4f, true) < 10f)
									{
										iLocal_225 = 0;
										iLocal_424 = 1;
									}
								}
							}
						}
						while (iLocal_424 == 1)
						{
							unk_0x48D75120C879E65E("M_LegalTrouble", 0);
							switch (iLocal_225)
							{
								case 0:
									unk_0xA6DE0FBA9218D7F0(iLocal_303, -927,0851f, -2921,173f, 13,66304f, 1,738541f, 1,294743f, 28,05799f, 34,66404f, 0, 1, 1, 2);
									unk_0xA6DE0FBA9218D7F0(iLocal_302, -927,0851f, -2921,173f, 13,66304f, 1,738541f, 1,294742f, 32,59915f, 34,66404f, 0, 1, 1, 2);
									unk_0xF10DA1539629CC3F(iLocal_302, iLocal_303, 4000, 1, 1);
									unk_0x9B47B379EE749C38(false);
									unk_0x4255E93FCCDE108E(false);
									unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
									if (unk_0x6ADD12BF4D6D2587(iLocal_287))
									{
										unk_0xC91FE17AD7353B70(&iLocal_287);
									}
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										unk_0xBD8D47FDC6902B2D(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), -918,6157f, -2926,646f, 12,9667f, 1, false, 0, 1);
										unk_0x48ED7B2293A96722(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 47,9465f);
									}
									else
									{
										unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -918,6157f, -2926,646f, 12,9667f, 1, false, 0, 1);
										unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 47,9465f);
									}
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
									{
										func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
										unk_0x59E44AF726705D19(iLocal_264, 1);
									}
									unk_0x1267474D9A69CA37(4f, 0f, 3);
									unk_0x0662098C9EF126B4(4);
									unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
									iLocal_451 = 0;
									iLocal_225++;
									break;
								
								case 1:
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
									{
										if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_451 == 0)
											{
												if (unk_0x463C4747B41E35A3(iLocal_250) > 0,3f)
												{
													if (func_256(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x1267474D9A69CA37(6f, 7f, 4);
														iLocal_451 = 1;
													}
												}
											}
											if (unk_0x463C4747B41E35A3(iLocal_250) > 0,5f)
											{
												unk_0xA6DE0FBA9218D7F0(iLocal_303, -926,0932f, -2916,891f, 14,47074f, -3,471637f, 1,294743f, 125,8315f, 34,66404f, 0, 1, 1, 2);
												unk_0xA6DE0FBA9218D7F0(iLocal_302, -926,0932f, -2916,891f, 14,47074f, -3,471636f, 1,294743f, 135,4584f, 34,66404f, 0, 1, 1, 2);
												unk_0xF10DA1539629CC3F(iLocal_302, iLocal_303, 4000, 1, 1);
												iLocal_248 = unk_0x53C562FD2B9E3AB0();
												iLocal_225++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
									{
										if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_248 != -1 && unk_0x8E8C94609BA4BEA9(0) == 4) && (unk_0x53C562FD2B9E3AB0() - iLocal_248) >= 2230)
											{
												unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
												unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_248 = -1;
											}
											if (unk_0x463C4747B41E35A3(iLocal_250) > 0,85f)
											{
												unk_0x4255E93FCCDE108E(true);
												unk_0x9B47B379EE749C38(true);
												unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
												unk_0xBB9A3C553EECB180(0f);
												iLocal_262 = 346732587;
												unk_0x050E4C90F7375618(iLocal_262, joaat("v_ilev_ss_door5_r"), -935,641f, -2927,185f, 14,0945f, 1, 1, 0);
												unk_0x99B6EAC23065A02E(iLocal_262, 1f, 0, 1);
												unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
												if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
												{
													unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0);
													if (unk_0x8E8C94609BA4BEA9(1) != 4 && unk_0x8E8C94609BA4BEA9(0) == 4)
													{
														unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 1, 0);
													}
												}
												unk_0x59E44AF726705D19(iLocal_264, 0);
												unk_0x61635C0A7950C875();
												unk_0x1267474D9A69CA37(0f, 4f, 3);
												iLocal_237 = unk_0x53C562FD2B9E3AB0();
												iLocal_424 = 0;
												iLocal_425 = 1;
												iLocal_225++;
											}
										}
									}
									break;
							}
							system::wait(0);
						}
					}
				}
				if (iLocal_425 == 1)
				{
					unk_0xB94AAB49E0BB01DB(iLocal_262, 5, 0, 1);
					if (iLocal_468 == 0)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_264))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
							{
								if (unk_0x0C88267282FD588F(iLocal_264, -935,3f, -2927,3f, 13f, 1,5f, 1,5f, 2f, false, true, 0))
								{
									unk_0x23A4CE7F9EBB02D4(-1, "Trevor_4_747_Molly_Open_Doors", -935,1f, -2927,6f, 13,2f, 0, 0, 0, 0);
									iLocal_468 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x771D0F8F56A5FE6C("SOL_3_MAIN_CHASE"))
					{
						unk_0xE02E32C69260FBB7("SOL_3_MAIN_CHASE");
					}
					if (unk_0x771D0F8F56A5FE6C("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xE02E32C69260FBB7("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x771D0F8F56A5FE6C("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xE859EF37EA7362D3("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					func_245();
				}
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -929,7908f, -2928,213f, 12,19499f, -935,7283f, -2924,685f, 15,44832f, 4,75f, 0, true, 1))
				{
					if (iLocal_417 == 0)
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
						{
							if (unk_0xA5F6598E13F98E08(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0xBD1486160AB0661B(iLocal_264, -1000f, 1);
							}
							unk_0x957CEE967C939968(iLocal_264);
							unk_0x771A86309E0CA47B(iLocal_264, true);
							unk_0xBD8D47FDC6902B2D(iLocal_264, -934,8388f, -2932,831f, 12,9649f, 1, false, 0, 1);
							unk_0x48ED7B2293A96722(iLocal_264, 236,5739f);
							unk_0xFB02C50CC0E93FAA(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0x3A801AA34DD821BE("move_f@film_reel_arms"))
							{
								unk_0x12C9D41D52A560D6(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_417 = 1;
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_284))
					{
						unk_0xC91FE17AD7353B70(&iLocal_284);
					}
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 5;
				}
				break;
			}
	}
}

void func_245()//Position - 0x16FF0
{
	if (iLocal_401 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[14]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[14], 0))
			{
				iLocal_272 = unk_0x317536BCEA8FA6B0(iLocal_204[14], -1, 0);
				unk_0x9E058151726E58DE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				unk_0xDD29FF4BAB8AFF9C(iLocal_272, true, 0);
				unk_0x771A86309E0CA47B(iLocal_272, true);
				unk_0xBB3CC641B6AED5E5(iLocal_272, 5);
				unk_0xE01CE1EBCD7EE551(iLocal_272, 150, 0);
				func_17(&uLocal_490, 3, iLocal_272, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_401 = 1;
	}
	else if (iLocal_400 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_272))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_272))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_272);
				unk_0x4EC2D0046891F1C5(iLocal_272, unk_0xB3328BA8976B416C(iLocal_272, 1), 5f, 0, 0);
				unk_0x6931076730A4AC5D(&iLocal_304);
				unk_0x16416C5B54FDBCBB(0, 0, 0);
				unk_0x8702B5F35BDDD0C1(0, unk_0xFC1458A37D98B502(), 5000, 1);
				unk_0xD7F5B2902EBBD04E(0, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x1B16DD5C115FE009(iLocal_304);
				unk_0xAB30B1CF01A198C1(iLocal_272, iLocal_304);
				unk_0xFAA3EF7FF92E1F9E(&iLocal_304);
				iLocal_400 = 1;
			}
		}
	}
	else if (iLocal_434 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_272))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_272))
			{
				if (!unk_0x88DDBE9908752BF0(iLocal_272, 0) && func_13(unk_0xFC1458A37D98B502(), iLocal_272) < 20f)
				{
					if (!func_255())
					{
						if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
						{
							func_17(&uLocal_490, 4, iLocal_272, "SOL3COP", 0, 1);
							if (func_246(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_434 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1717A
{
	func_254(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_247(sParam2, iParam4, 0);
}

int func_247(char* sParam0, int iParam1, bool bParam2)//Position - 0x171CE
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_212();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_253(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_252();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_251();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_250())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_224())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_249();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_248();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_212();
	}
	return 0;
}

void func_248()//Position - 0x1749A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(false);
	Global_15756 = 1;
}

void func_249()//Position - 0x174CC
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_250()//Position - 0x17561
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_251()//Position - 0x175FA
{
	if (func_58(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_104();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_252()//Position - 0x1769C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_253(int iParam0, int iParam1)//Position - 0x176F4
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_254(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1772F
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_255()//Position - 0x17785
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x177A7
{
	func_254(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_247(sParam2, iParam3, 0);
}

void func_257()//Position - 0x177F5
{
	if (unk_0xE0B0126B4689CB72(iLocal_667[0]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[0], 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_667[1]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[1], 0);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_667[2]))
	{
		unk_0x990DE45B7A2B6426(iLocal_667[2], 0);
	}
	if (iLocal_381 == 1)
	{
		unk_0xB94964861C6B4D3C(iLocal_259);
		iLocal_389 = 0;
	}
}

void func_258(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x17857
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x8DDE799D31A3D099(iParam0))
		{
			unk_0x7674774BB9279265(iParam0);
		}
		vVar1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
		if (bParam4)
		{
			vVar0 = { unk_0x3F90543934DCD7E6(iParam0, vParam1) };
		}
		else
		{
			vVar0 = { vParam1 };
		}
		vVar2 = { func_259(vVar0 - vVar1) };
		vVar2 = { vVar2 * Vector(fParam3, fParam3, fParam3) };
		unk_0xB8D9F55BA414128D(iParam0, 3, vVar2, vParam2, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_259(vector3 vParam0)//Position - 0x178D4
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

void func_260(int iParam0, float fParam1)//Position - 0x17913
{
	int iVar0;
	vector3 vVar1;
	
	if (iLocal_166 < 15)
	{
		if (iLocal_166 == 0)
		{
			vLocal_181 = { 99999,9f, 99999,9f, 99999,9f };
			vLocal_182 = { -99999,9f, -99999,9f, -99999,9f };
		}
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x8DDE799D31A3D099(iParam0))
			{
				iVar0 = unk_0xF9832BA856338268(iParam0);
				vVar1 = { unk_0xADCBC459AA10697F(iVar0, (fParam1 + (system::to_float((iLocal_166 - 1)) * 2000f))) };
				if (vVar1.x < vLocal_181.x)
				{
					vLocal_181.x = vVar1.x;
				}
				if (vVar1.y < vLocal_181.y)
				{
					vLocal_181.y = vVar1.y;
				}
				if (vVar1.z < vLocal_181.z)
				{
					vLocal_181.z = vVar1.z;
				}
				if (vVar1.x > vLocal_182.x)
				{
					vLocal_182.x = vVar1.x;
				}
				if (vVar1.y > vLocal_182.y)
				{
					vLocal_182.y = vVar1.y;
				}
				if (vVar1.z > vLocal_182.z)
				{
					vLocal_182.z = vVar1.z;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		unk_0xD855BC7E9D7EC87F(-9999,9f, -9999,9f, -9999,9f, 9999,9f, 9999,9f, 9999,9f, true);
		vLocal_181 = { vLocal_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		vLocal_179 = { vLocal_181 };
		vLocal_180 = { vLocal_182 };
		unk_0xBF98CCF1EA4B13E9(vLocal_179, vLocal_180, false, 0);
		iLocal_166 = 0;
	}
}

void func_261()//Position - 0x17A87
{
	iLocal_89 = 1;
}

void func_262()//Position - 0x17A92
{
	if (iLocal_331 == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_278))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_278))
			{
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 55000f)
				{
					unk_0x6FF834D85E2DD4C6(1938952078);
					unk_0x6FF834D85E2DD4C6(joaat("s_m_y_fireman_01"));
					unk_0x6450931B826B49D9("missheist_agency3aig_lift_waitped_a");
					if ((unk_0x9A0B2ED5055D3F0B(1938952078) && unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_fireman_01"))) && unk_0x3A801AA34DD821BE("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x6ADD12BF4D6D2587(iLocal_282))
						{
							unk_0x247EAA2E93D4A021(-1129,566f, -2319,888f, 12,9445f, 10f, 0, 0, 0, false);
							iLocal_282 = unk_0xEA60F3B426BB095B(1938952078, -1129,566f, -2319,888f, 12,9445f, 16,5423f, true, true, false);
						}
						iLocal_667[0] = unk_0x6E3E7F8171A00784("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_381 == 0)
						{
							unk_0x23A4CE7F9EBB02D4(iLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_381 = 1;
						}
						iLocal_667[1] = unk_0x6E3E7F8171A00784("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_667[2] = unk_0x6E3E7F8171A00784("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0x6ADD12BF4D6D2587(iLocal_265[0]))
						{
							iLocal_265[0] = unk_0x00D1A9572426E8DD(iLocal_282, 21, joaat("s_m_y_fireman_01"), -1, 1, true);
							unk_0x771A86309E0CA47B(iLocal_265[0], true);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[0], true);
							unk_0x625AA718234B4CEB(iLocal_265[0], -1147,07f, -2320,65f, 18,93f, 1101004800);
						}
						if (!unk_0x6ADD12BF4D6D2587(iLocal_265[1]))
						{
							iLocal_265[1] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), -1138,313f, -2313,277f, 12,9445f, 155,4271f, 1, true);
							unk_0x12C9D41D52A560D6(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x771A86309E0CA47B(iLocal_265[1], true);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[1], true);
						}
						if (!unk_0x6ADD12BF4D6D2587(iLocal_265[2]))
						{
							iLocal_265[2] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), -1145,362f, -2309,387f, 12,9445f, 96,0786f, 1, true);
							unk_0x12C9D41D52A560D6(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x771A86309E0CA47B(iLocal_265[2], true);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[2], true);
						}
						if (!unk_0x6ADD12BF4D6D2587(iLocal_265[3]))
						{
							iLocal_265[3] = unk_0xAC992EFAD62C33BF(21, joaat("s_m_y_fireman_01"), -1147,461f, -2314,511f, 13,1518f, 57,8707f, 1, true);
							unk_0x12C9D41D52A560D6(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x771A86309E0CA47B(iLocal_265[3], true);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[3], true);
						}
						unk_0x14776E43F90DD454(joaat("s_m_y_fireman_01"));
						unk_0x14776E43F90DD454(1938952078);
						iLocal_331 = 1;
					}
				}
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (iLocal_465[0] == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_265[1]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[1]))
				{
					if (iLocal_466[0] == 0)
					{
						if (unk_0xA5F6598E13F98E08(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_466[0] = 1;
						}
					}
					if (iLocal_466[0] == 1)
					{
						if (!unk_0xA5F6598E13F98E08(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0xF21E6EBE8EFDCC28(iLocal_265[1], -1);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[1], true);
							unk_0x771A86309E0CA47B(iLocal_265[1], false);
							iLocal_465[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[1] == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_265[2]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[2]))
				{
					if (iLocal_466[1] == 0)
					{
						if (unk_0xA5F6598E13F98E08(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_466[1] = 1;
						}
					}
					if (iLocal_466[1] == 1)
					{
						if (!unk_0xA5F6598E13F98E08(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0xF21E6EBE8EFDCC28(iLocal_265[2], -1);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[2], true);
							unk_0x771A86309E0CA47B(iLocal_265[2], false);
							iLocal_465[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[2] == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_265[3]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[3]))
				{
					if (iLocal_466[2] == 0)
					{
						if (unk_0xA5F6598E13F98E08(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_466[2] = 1;
						}
					}
					if (iLocal_466[2] == 1)
					{
						if (!unk_0xA5F6598E13F98E08(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0xF21E6EBE8EFDCC28(iLocal_265[3], -1);
							unk_0xE9B3D12A64CC7C1A(iLocal_265[3], true);
							unk_0x771A86309E0CA47B(iLocal_265[3], false);
							iLocal_465[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_263()//Position - 0x17F73
{
	if (iLocal_402 == 0)
	{
		unk_0x6FF834D85E2DD4C6(joaat("police3"));
		unk_0x6FF834D85E2DD4C6(joaat("s_m_y_cop_01"));
		unk_0x0D9525F20FB71C52(1, "BB_AIChase");
		if (unk_0x9A0B2ED5055D3F0B(joaat("police3")) && unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_cop_01")))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 15500f)
					{
						unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 2, 0);
						unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
						iLocal_288[0] = unk_0xEA60F3B426BB095B(joaat("police3"), -847,2593f, -2379,987f, 15,9304f, 196,4921f, true, true, false);
						iLocal_275[0] = unk_0x00D1A9572426E8DD(iLocal_288[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
						unk_0x771A86309E0CA47B(iLocal_275[0], true);
						unk_0x6CF99BCE94E6F07C(iLocal_288[0], "SOL_3_POLICE_CARS_Group", 0);
						func_124(iLocal_275[0], 0);
						unk_0xA15269351F50F113(iLocal_288[0], true, true, 0);
						unk_0x8D7ABC97ED508270(iLocal_288[0], 1, "BB_AIChase", 1);
						unk_0x9E058151726E58DE(iLocal_275[0], joaat("weapon_pistol"), 1000, true, true);
						unk_0xBB4910CCAB2BEDFA(iLocal_288[0], true);
						unk_0x14776E43F90DD454(joaat("police3"));
						unk_0x14776E43F90DD454(joaat("s_m_y_cop_01"));
						iLocal_402 = 1;
					}
				}
			}
		}
	}
	if (iLocal_402 == 1)
	{
		if (iLocal_429[0] == 0)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_288[0]))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_288[0], 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_288[0]))
					{
						unk_0x3998782E46B46C7F(iLocal_288[0], fLocal_321);
						if (unk_0x9DC40A4E8D2F7969(iLocal_288[0]) > 13000f)
						{
							unk_0x7674774BB9279265(iLocal_288[0]);
						}
					}
					else if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_275[0]))
						{
							unk_0x771A86309E0CA47B(iLocal_275[0], true);
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								unk_0x23E30E165964B11A(iLocal_275[0], unk_0xFC1458A37D98B502());
								unk_0xE9B3D12A64CC7C1A(iLocal_275[0], true);
							}
							else
							{
								unk_0xD7F5B2902EBBD04E(iLocal_275[0], unk_0xFC1458A37D98B502(), 0, 16);
								unk_0xE9B3D12A64CC7C1A(iLocal_275[0], true);
							}
							unk_0x9E6ACDF1473CD846(1, "BB_AIChase");
							iLocal_238 = unk_0x53C562FD2B9E3AB0();
							iLocal_429[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_430[0] == 0)
		{
			if (iLocal_429[0] == 1)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_238 + 500)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_275[0]))
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								unk_0xCEE184F0AF1715AC(iLocal_275[0], 16, 1);
								unk_0xCEE184F0AF1715AC(iLocal_275[0], 1, 1);
								iLocal_430[0] = 1;
							}
							else
							{
								iLocal_430[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_264()//Position - 0x18203
{
	if (!iLocal_333)
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[20], 0))
		{
			iLocal_301 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", false);
			unk_0x7849794435F39D49(iLocal_301, true);
			iLocal_334 = 0;
			iLocal_333 = 1;
		}
	}
	else if (func_279(&uLocal_28, 1, 0, 0) && iLocal_405 == 0)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x3E80C2F7BC665259(1);
		}
		if (func_255())
		{
			unk_0x84CDD933AFA470D2();
			func_209();
		}
		if (iLocal_363[2] == 0)
		{
			if (!unk_0x771D0F8F56A5FE6C("SOL_3_CHOPPER_CAM"))
			{
				unk_0xE859EF37EA7362D3("SOL_3_CHOPPER_CAM");
			}
			unk_0x4AFBCBFDE748D4E0(iLocal_261, "Trevor_4_747_TV", 0, true);
			iLocal_363[2] = 1;
		}
		func_270(1, 1, 30, 5, 0);
		if (iLocal_352 == 0)
		{
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_TEXT");
			func_269("TRV4_NEWS1");
			func_269("");
			unk_0x271AA5469AF471B3();
			iLocal_352 = 1;
		}
		if (iLocal_353 == 0)
		{
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(1f);
			unk_0x9499D7329FB840A2(0f);
			func_269("TRV4_NEWS2");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(0f);
			unk_0x9499D7329FB840A2(0f);
			func_269("TRV4_NEWS6");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(0f);
			unk_0x9499D7329FB840A2(1f);
			func_269("TRV4_NEWS7");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(0f);
			unk_0x9499D7329FB840A2(2f);
			func_269("TRV4_NEWS8");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(0f);
			unk_0x9499D7329FB840A2(3f);
			func_269("TRV4_NEWS9");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(0f);
			unk_0x9499D7329FB840A2(4f);
			func_269("TRV4_NEWS10");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(iLocal_305, "DISPLAY_SCROLL_TEXT");
			unk_0x9499D7329FB840A2(1f);
			unk_0x9499D7329FB840A2(0f);
			unk_0x271AA5469AF471B3();
			iLocal_243 = (unk_0x53C562FD2B9E3AB0() - 5000);
			iLocal_353 = 1;
		}
		if (unk_0x53C562FD2B9E3AB0() > iLocal_243 + 5000)
		{
			func_268();
			iLocal_243 = unk_0x53C562FD2B9E3AB0();
		}
		if (iLocal_354 == 0)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 25000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 50000f)
					{
						unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(1f);
						func_269("TRV4_NEWS5");
						unk_0x271AA5469AF471B3();
						unk_0x008F3E3CC076EA0E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(1f);
						unk_0x271AA5469AF471B3();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 77600f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 115000f)
					{
						unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(2f);
						func_269("TRV4_NEWS3");
						unk_0x271AA5469AF471B3();
						unk_0x008F3E3CC076EA0E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(2f);
						unk_0x271AA5469AF471B3();
						iLocal_355 = 1;
					}
				}
			}
		}
		if (iLocal_356 == 0)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 115000f)
					{
						unk_0x008F3E3CC076EA0E(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(3f);
						func_269("TRV4_NEWS4");
						unk_0x271AA5469AF471B3();
						unk_0x008F3E3CC076EA0E(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x9499D7329FB840A2(1f);
						unk_0x9499D7329FB840A2(3f);
						unk_0x271AA5469AF471B3();
						iLocal_356 = 1;
					}
				}
			}
		}
		unk_0x7913685BF7335C7B(iLocal_226);
		unk_0x28E092B1E386EB67(iLocal_305, 255, 255, 255, 0, 0);
		if (iLocal_334 == 0)
		{
			func_223(1, 1, 1, 0);
			unk_0x7E4FCDC8BAD0CF6D(iLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x7849794435F39D49(iLocal_301, true);
			unk_0x3458550DF8E9B453(true, false, 3000, 1, 0, 0);
			unk_0x9B47B379EE749C38(false);
			unk_0x54F90CB32317E720(unk_0x9EB17624F44A8DA4());
			func_267();
			iLocal_334 = 1;
		}
		func_265();
		unk_0x553231E7FC3C570D(6);
		unk_0x553231E7FC3C570D(7);
		unk_0x553231E7FC3C570D(8);
		unk_0x553231E7FC3C570D(9);
		unk_0x553231E7FC3C570D(1);
		unk_0x553231E7FC3C570D(2);
		unk_0x553231E7FC3C570D(15);
		unk_0x553231E7FC3C570D(3);
		unk_0x4FB260623DD93924(0, 85, 1);
		unk_0x687903C882D93029(0);
	}
	else if (iLocal_334)
	{
		func_223(0, 1, 1, 0);
		unk_0x7849794435F39D49(iLocal_301, false);
		unk_0x3458550DF8E9B453(false, false, 3000, 1, 0, 0);
		unk_0x9B47B379EE749C38(true);
		if (unk_0x771D0F8F56A5FE6C("SOL_3_CHOPPER_CAM"))
		{
			unk_0xE02E32C69260FBB7("SOL_3_CHOPPER_CAM");
		}
		unk_0x0B9D04994D02CC2F(iLocal_261);
		func_243();
		unk_0x687903C882D93029(1);
		iLocal_363[2] = 0;
		iLocal_334 = 0;
	}
}

void func_265()//Position - 0x18643
{
	unk_0x9B16F08390FCC31C();
	func_266();
}

void func_266()//Position - 0x18653
{
	Global_17162.f_134 = 1;
}

void func_267()//Position - 0x18661
{
	Global_55910 = 1;
}

void func_268()//Position - 0x1866D
{
	if (iLocal_228 > 4)
	{
		iLocal_228 = 0;
	}
	unk_0x008F3E3CC076EA0E(iLocal_305, "DISPLAY_SCROLL_TEXT");
	unk_0xD07D5CD276368D36(0);
	unk_0xD07D5CD276368D36(iLocal_228);
	unk_0x271AA5469AF471B3();
	iLocal_228++;
}

void func_269(char* sParam0)//Position - 0x186A4
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_270(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x186B6
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_277(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_274(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0x63A6486593EC7EC3(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_274(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_271(1, 40, 1, 1, 1);
		}
	}
}

void func_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x18784
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_273(0))
			{
				func_272(0);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "nscuzz1", 0,5f, fLocal_51, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0,01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_273(1))
			{
				func_272(1);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "nscuzz2", 0,5f, fLocal_52, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0,02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_273(2))
			{
				func_272(2);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "nscuzz3", 0,5f, fLocal_53, 1f, 0,2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0,028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_272(int iParam0)//Position - 0x1888B
{
	if (iParam0 < 32)
	{
		unk_0x872F1C1F8587CCC7(&iLocal_54, iParam0);
	}
}

int func_273(int iParam0)//Position - 0x188A5
{
	if (unk_0xC80D31E4B587871C(iLocal_54, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_274(bool bParam0, int iParam1)//Position - 0x188BD
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		iLocal_46 = func_276(5);
		iLocal_45 = unk_0x63A6486593EC7EC3(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_276(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_273(3))
			{
				func_272(3);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "Static1", 0,5f, 0,5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_273(4))
			{
				func_272(4);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "Static2", 0,5f, 0,5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_273(5))
			{
				func_272(5);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "Static3", 0,5f, 0,5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_273(6))
			{
				func_272(6);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "Static4", 0,5f, 0,5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_273(7))
			{
				func_272(7);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "Static5", 0,5f, 0,5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_275(bool bParam0)//Position - 0x18A53
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_276(int iParam0)//Position - 0x18A6C
{
	if (unk_0x63A6486593EC7EC3(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0x63A6486593EC7EC3(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0x63A6486593EC7EC3(0, iParam0);
}

void func_277(bool bParam0, int iParam1)//Position - 0x18AA5
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "nscanline1", 0,5f, 0,5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0xEFB3EC0CDCC33841("digitalOverlay", "nscanline1", 0,5f, 0,5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_278()//Position - 0x18B36
{
	unk_0x128A5DCCD09CCA17("digitalOverlay", false);
	if (unk_0xA51ADD51711B4A15("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_279(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x18B57
{
	if (uParam0->f_1)
	{
		if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_283(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (!func_285(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_284(bParam1, bParam2, bParam3) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x53C562FD2B9E3AB0() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
					{
						if (func_282(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1) || unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_282(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_283(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_292(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_280();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_280()//Position - 0x18EC3
{
	unk_0x872F1C1F8587CCC7(&Global_2324, 4);
}

int func_281(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18ED3
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18F25
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x3D96C1C362D3E31D(0, 80))
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_283(var uParam0)//Position - 0x18F6E
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x53C562FD2B9E3AB0()
		{
			return 1;
		}
	}
	return 0;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18F99
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x4FB260623DD93924(0, 140, 1);
			unk_0x4FB260623DD93924(0, 80, 1);
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_285(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18FF8
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4FB260623DD93924(0, 80, 1);
		if (unk_0x06A32CFD60F8BCE6())
		{
			if (unk_0x5A632962B08A1872(0, 80) && unk_0x53C562FD2B9E3AB0() > Global_116)
			{
				unk_0xBC3B7443617858A0(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_286(bool bParam0)//Position - 0x1904E
{
	if (bParam0)
	{
		func_290();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_289(0))
		{
			func_287(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_287(int iParam0)//Position - 0x190B1
{
	if (Global_14615)
	{
		func_288(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_224())
	{
		Global_14453.f_1 = 3;
	}
}

void func_288(bool bParam0, bool bParam1)//Position - 0x19121
{
	if (bParam0)
	{
		if (func_289(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_289(int iParam0)//Position - 0x19195
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_290()//Position - 0x191EF
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_291(char* sParam0, int iParam1)//Position - 0x19218
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, true, iParam1);
}

int func_292(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1922F
{
	if (bParam0)
	{
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x1E06D00B67177A18())
	{
		return 0;
	}
	if (func_289(0))
	{
		return 0;
	}
	if (func_298())
	{
		return 0;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x8F38E94BBF3404CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x42CEF0F4671324EA(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(3) == 3 || unk_0x8E8C94609BA4BEA9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(6) == 3 || unk_0x8E8C94609BA4BEA9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(4) == 3 || unk_0x8E8C94609BA4BEA9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x6A8C186343D0924D(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(5) == 3 || unk_0x8E8C94609BA4BEA9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8C82A58D7895B29C(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x8E8C94609BA4BEA9(2) == 3 || unk_0x8E8C94609BA4BEA9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x60584F41FBCE28CD() == 3 || unk_0x60584F41FBCE28CD() == 4)
			{
				return 0;
			}
			if (unk_0x213F4DB5EC433017())
			{
				return 0;
			}
		}
	}
	if ((func_297() || func_296(Global_4456448.f_143970)) || func_295())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if ((unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_294(unk_0xFC1458A37D98B502(), 0)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 562680400 && func_294(unk_0xFC1458A37D98B502(), 0) != -1)) || (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == 1181327175 && func_294(unk_0xFC1458A37D98B502(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_293(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)//Position - 0x1945A
{
	if (iParam0 != func_88())
	{
		if (func_178(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_178(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1)//Position - 0x194C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_295()//Position - 0x19545
{
	return Global_2447174.f_16;
}

bool func_296(int iParam0)//Position - 0x19553
{
	return iParam0 == 51;
}

var func_297()//Position - 0x19560
{
	return Global_2447174.f_15;
}

bool func_298()//Position - 0x1956E
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

void func_299(int iParam0, int iParam1, float fParam2)//Position - 0x19583
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (unk_0x8DDE799D31A3D099(iParam1))
		{
			unk_0x3998782E46B46C7F(iParam1, fParam2);
			vVar0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
			vVar1 = { unk_0xDB824D597B53CC40(iParam1, 2) };
			unk_0xA215B2F25E63FA31(iParam0, vVar0);
			unk_0xBEBD5CAE3510CD2A(iParam0, vVar1, 2);
		}
	}
}

void func_300(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x195D2
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		unk_0xB3A8974D2C811672(iParam1, false, 0);
		unk_0xB18E1DBC397238E1(iParam1, false, 0);
		unk_0x1A0806871323CD16(iParam1, true);
		unk_0xD38F266C132F2897(iParam1, true, true, true, true, true, false, 0, false);
		unk_0x8D7ABC97ED508270(iParam1, iParam3, sParam2, 1);
		vVar0 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		unk_0xA215B2F25E63FA31(iParam0, vVar0);
		unk_0xBEBD5CAE3510CD2A(iParam0, unk_0xDB824D597B53CC40(iParam1, 2), 2);
	}
}

void func_301()//Position - 0x1963B
{
	if (iLocal_260 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_374 == 0)
			{
				unk_0xB94964861C6B4D3C(iLocal_260);
				iLocal_384 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (iLocal_255 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_376 == 0)
			{
				unk_0xB94964861C6B4D3C(iLocal_255);
				iLocal_385 = 0;
				iLocal_376 = 1;
			}
		}
	}
	if (iLocal_256 != -1)
	{
		if (iLocal_383 == 1)
		{
			if (iLocal_365 == 0)
			{
				unk_0xB94964861C6B4D3C(iLocal_256);
				iLocal_386 = 0;
				iLocal_365 = 1;
			}
		}
	}
	if (iLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_375 == 0)
			{
				unk_0xB94964861C6B4D3C(iLocal_257);
				iLocal_387 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (iLocal_258 != -1)
	{
		if (iLocal_380 == 1)
		{
			if (iLocal_377 == 0)
			{
				unk_0xB94964861C6B4D3C(iLocal_258);
				iLocal_388 = 0;
				iLocal_377 = 1;
			}
		}
	}
}

void func_302()//Position - 0x196F7
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[19]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[19], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[19]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[19], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[7], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[7]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[7], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[8], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[8]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[8], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[9]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[9], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[9]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[9], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[10]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[10], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[10]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[10], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[11]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[11], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[11]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[11], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[13]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[13], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[13]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[13], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[14]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[14], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[14]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[14], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[15]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[15], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[15]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[15], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[16]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[16], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[16]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[16], true);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[17]))
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_204[17], 0))
		{
			if (!unk_0x44C4B08A935F2D8D(iLocal_204[17]))
			{
				unk_0xBB4910CCAB2BEDFA(iLocal_204[17], true);
			}
		}
	}
}

void func_303()//Position - 0x1996E
{
	if (func_334())
	{
		fLocal_322 = 0,5f;
	}
	else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x617EA99D340A37ED(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 40f)
		{
			fLocal_322 = 0,85f;
		}
		else
		{
			fLocal_322 = 0,9f;
		}
	}
	else
	{
		fLocal_322 = 0,9f;
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_278, 0))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_278))
			{
				if (iLocal_357 == 0)
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 10000f)
					{
						if (func_16(unk_0xFC1458A37D98B502(), iLocal_278, 1) < 100f || unk_0x841ED61760A7D07B(iLocal_278))
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 40f, 55f, 100f, 1,7f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
						else
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 0,6f, 40f, 50f, 60f, 1,7f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
					}
				}
				else if (func_16(unk_0xFC1458A37D98B502(), iLocal_278, 1) > 175f)
				{
					fLocal_321 = 0,6f;
					unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
					func_304(iLocal_278, fLocal_321);
				}
				else if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 10000f)
				{
					func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 180f, 1,7f, 1f, fLocal_322, 0);
					unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
					func_304(iLocal_278, fLocal_321);
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 10000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 23000f)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
					{
						func_330(iLocal_204[8], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 30f, 50f, 1,7f, 0,5f, fLocal_322, 1);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 35f, 180f, 1,7f, 0,5f, fLocal_322, 1);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 23000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 32000f)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0))
						{
							func_330(iLocal_204[7], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 20f, 30f, 100f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
						else if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
							{
								func_330(iLocal_204[8], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 10f, 20f, 40f, 1,8f, 1f, fLocal_322, 0);
								unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
								func_304(iLocal_278, fLocal_321);
							}
							else
							{
								func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_322, 0);
								unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
								func_304(iLocal_278, fLocal_321);
							}
						}
						else
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
					}
					else if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
						{
							func_330(iLocal_204[8], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 10f, 20f, 40f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
						else
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 32000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 39000f)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0))
						{
							func_330(iLocal_204[7], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 22f, 25f, 100f, 1,8f, 0,5f, fLocal_322, 1);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
						else
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 35f, 150f, 1,8f, 0,5f, fLocal_322, 1);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 35f, 150f, 1,8f, 0,5f, fLocal_322, 1);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 39000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 56000f)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
					{
						func_330(iLocal_204[8], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 40f, 100f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 35f, 150f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 56000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 65000f)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[11], 0))
					{
						func_330(iLocal_204[11], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 30f, 100f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 25f, 35f, 100f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 65000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 90000f)
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_204[13]))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[13], 0))
						{
							func_330(iLocal_204[13], unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 30f, 35f, 50f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
						else
						{
							func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 45f, 55f, 150f, 1,8f, 1f, fLocal_322, 0);
							unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
							func_304(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 45f, 55f, 150f, 1,8f, 1f, fLocal_322, 0);
						unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
						func_304(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 90000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 110000f)
				{
					func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 60f, 70f, 150f, 1,5f, 0,5f, fLocal_322, 1);
					unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
					func_304(iLocal_278, fLocal_321);
				}
				if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 110000f)
				{
					func_330(iLocal_278, unk_0xFC1458A37D98B502(), &fLocal_321, 1f, 100f, 120f, 150f, 1,6f, 1f, fLocal_322, 0);
					unk_0x3998782E46B46C7F(iLocal_278, fLocal_321);
					func_304(iLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_304(int iParam0, float fParam1)//Position - 0x1A225
{
	float fVar0;
	vector3 vVar1;
	int iVar2;
	
	fVar0 = unk_0x46C19C2753391FBF();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_329();
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				unk_0x247EAA2E93D4A021(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_206();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0xAD6F3DFB1F960182(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x8DDE799D31A3D099(iParam0))
			{
				if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
				{
					if (func_328(unk_0xFC1458A37D98B502(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_130 = unk_0x9DC40A4E8D2F7969(iParam0);
				unk_0x3998782E46B46C7F(iParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_327(iParam0, fLocal_130);
					func_326(iParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0)
						{
							func_325(iParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (system::to_float(iLocal_172) * 2000f));
						func_324(iParam0, fVar0, fLocal_134);
						iLocal_172++;
						if (iLocal_172 > 2)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						iLocal_172 = 0;
						fLocal_135 = (fLocal_135 + (unk_0x46C19C2753391FBF() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x8DDE799D31A3D099(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_130 == 0f || unk_0x3E9CABD07B829173())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_321(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_320(iParam0);
			}
			if (!iLocal_75)
			{
				func_307(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					iLocal_206 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
					vLocal_176 = { unk_0xB3328BA8976B416C(iLocal_206, 1) };
					unk_0xFD697A76D5D50C54(iLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_206))
			{
				func_198(iLocal_207);
				iLocal_207 = iLocal_206;
			}
			if (unk_0xB8DE76287EDC4957(iLocal_207, 0))
			{
				unk_0xBD8D47FDC6902B2D(iLocal_207, vLocal_176, 1, false, 0, 1);
				unk_0x47F55B6102CA9143(iLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_305(&iParam0, fLocal_129))
			{
				system::wait(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_305(int iParam0, float fParam1)//Position - 0x1A4C0
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_193();
		if (unk_0xB8DE76287EDC4957(*iParam0, 0))
		{
			if (unk_0x8DDE799D31A3D099(*iParam0))
			{
				unk_0x7674774BB9279265(*iParam0);
				unk_0xB3C8DB09F4A4DE89(*iParam0);
			}
			if (!iLocal_159 == -1)
			{
				while (!func_306(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0))
				{
					system::wait(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_133 = 0f;
					iLocal_160 = 0;
					iLocal_162 = 0;
					iLocal_161 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_158 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
					iLocal_165 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xB8DE76287EDC4957(*iParam0, 0))
		{
			if (unk_0x8DDE799D31A3D099(*iParam0))
			{
				unk_0x3998782E46B46C7F(*iParam0, ((1f * fLocal_131) * fLocal_133));
				func_306(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0;
		iLocal_169 = 0;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_307(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_321(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_320(*iParam0);
		if ((iLocal_163 == 0 && iLocal_164 == 0) && iLocal_165 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_306(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1A5F2
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x0D9525F20FB71C52(iParam1, &cLocal_185);
		if (unk_0x0840F461D7BD8859(iParam1, &cLocal_185))
		{
			if (unk_0xB8DE76287EDC4957(*uParam0, 0))
			{
				if (!unk_0x8DDE799D31A3D099(*uParam0))
				{
					unk_0xEDC33A771FAEB393(*uParam0, false);
					if (bParam4)
					{
						unk_0x5CA96D6783EE6897(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
						{
							if (bParam7)
							{
								unk_0xEBACB44A11FA743B(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xEBACB44A11FA743B(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x8D7ABC97ED508270(*uParam0, iParam1, &cLocal_185, 1);
							}
						}
						else
						{
							unk_0x8D7ABC97ED508270(*uParam0, iParam1, &cLocal_185, 1);
						}
						unk_0x7A1DBB5E36EE3379(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x62429167B5AEF353(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0xF9832BA856338268(*uParam0) == unk_0xBAFDD5E72D902333(iParam1, &cLocal_185))
				{
					fVar0 = unk_0x9DC40A4E8D2F7969(*uParam0);
					unk_0x7A1DBB5E36EE3379(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x7674774BB9279265(*uParam0);
						unk_0x0D9525F20FB71C52(iParam1, &cLocal_185);
					}
					if (bParam5)
					{
						unk_0x62429167B5AEF353(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x7674774BB9279265(*uParam0);
					unk_0xEDC33A771FAEB393(*uParam0, false);
					if (bParam4)
					{
						unk_0x5CA96D6783EE6897(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
					{
						if (bParam7)
						{
							unk_0xEBACB44A11FA743B(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xEBACB44A11FA743B(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x8D7ABC97ED508270(*uParam0, iParam1, &cLocal_185, 1);
						}
					}
					else
					{
						unk_0x8D7ABC97ED508270(*uParam0, iParam1, &cLocal_185, 1);
					}
					unk_0x7A1DBB5E36EE3379(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x62429167B5AEF353(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_307(int iParam0, float fParam1, bool bParam2)//Position - 0x1A7D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4());
	bVar10 = unk_0x48CECF1C35C11EC9();
	uVar11 = unk_0x8E8B931681DE06E3();
	bVar12 = false;
	if (bVar9)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		vVar5 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 35)
		{
			if (iLocal_153[iVar0] != 99)
			{
				if (iLocal_153[iVar0] == 0)
				{
					if (iLocal_152[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (func_319(iLocal_197[iVar0]))
								{
									unk_0x872F1C1F8587CCC7(&(iLocal_154[iVar0]), 0);
								}
								else if (unk_0x125CDF69FA6EF560(iLocal_197[iVar0]))
								{
									unk_0x872F1C1F8587CCC7(&(iLocal_154[iVar0]), 2);
								}
								unk_0x0EE72DB1CD8A3B86(&(iLocal_154[iVar0]), 1);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_318(iLocal_152[iVar0]))
								{
									if (func_319(iLocal_197[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_154[iVar0]), 0);
									}
									else if (unk_0x125CDF69FA6EF560(iLocal_197[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_154[iVar0]), 2);
									}
									unk_0x0EE72DB1CD8A3B86(&(iLocal_154[iVar0]), 1);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 99;
					}
				}
				else if (iLocal_153[iVar0] == 1)
				{
					bVar8 = false;
					unk_0x0D9525F20FB71C52(iLocal_152[iVar0], &cLocal_185);
					if (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 0))
					{
						unk_0x6FF834D85E2DD4C6(func_202());
						bVar8 = unk_0x9A0B2ED5055D3F0B(func_202());
					}
					else if (!bLocal_102 && ((!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 2) && bVar10) || (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						unk_0x6FF834D85E2DD4C6(func_205());
						bVar8 = unk_0x9A0B2ED5055D3F0B(func_205());
					}
					if (bVar8)
					{
						if (!unk_0x6ADD12BF4D6D2587(iLocal_204[iVar0]))
						{
							unk_0x6FF834D85E2DD4C6(iLocal_197[iVar0]);
							if (unk_0x9A0B2ED5055D3F0B(iLocal_197[iVar0]) && unk_0x0840F461D7BD8859(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_317(vLocal_175[iVar0 /*3*/], vVar5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_316(vLocal_175[iVar0 /*3*/], vVar5, fLocal_134);
										}
										iLocal_204[iVar0] = unk_0xEA60F3B426BB095B(iLocal_197[iVar0], vLocal_175[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											unk_0xC7BF27112709A906(iLocal_204[iVar0], 0);
										}
										if (uLocal_98 && !unk_0xC80D31E4B587871C(iLocal_154[iVar0], 0))
										{
											func_315(iLocal_204[iVar0]);
										}
										if (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 3))
										{
											unk_0xFBA991D3A851E195(iLocal_204[iVar0], true);
										}
										unk_0xAA93B7B448E10E40(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0, 0, 1);
										unk_0x47F55B6102CA9143(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (unk_0xC1514CFCEC68CA4A(iLocal_197[iVar0]) || unk_0x125CDF69FA6EF560(iLocal_197[iVar0]))
										{
											unk_0xACE486395AA1867D(iLocal_204[iVar0], 1084227584);
										}
										if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 0))
										{
											unk_0xA15269351F50F113(iLocal_204[iVar0], true, true, 0);
											if (unk_0x674C9438180770FE() > 19 || unk_0x674C9438180770FE() < 7)
											{
												unk_0xBAB8785EE2F06BBE(iLocal_204[iVar0], 3);
											}
										}
										unk_0xEDC33A771FAEB393(iLocal_204[iVar0], true);
										unk_0x14776E43F90DD454(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 1);
										iLocal_153[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x191BE1BC8F26F3C1(iLocal_204[iVar0], 0) && unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
						{
							unk_0xAA93B7B448E10E40(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0, 0, 1);
							unk_0x47F55B6102CA9143(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (unk_0xC1514CFCEC68CA4A(iLocal_197[iVar0]) || unk_0x125CDF69FA6EF560(iLocal_197[iVar0]))
							{
								unk_0xACE486395AA1867D(iLocal_204[iVar0], 1084227584);
							}
							unk_0xEDC33A771FAEB393(iLocal_204[iVar0], true);
							unk_0x14776E43F90DD454(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 1);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 2)
				{
					unk_0x0D9525F20FB71C52(iLocal_152[iVar0], &cLocal_185);
					if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
					{
						bVar8 = false;
						if (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 0))
						{
							unk_0x6FF834D85E2DD4C6(func_202());
							bVar8 = unk_0x9A0B2ED5055D3F0B(func_202());
							iVar13 = 2;
						}
						else if (!bLocal_102 && ((!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 2) && bVar10) || (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							unk_0x6FF834D85E2DD4C6(func_205());
							bVar8 = unk_0x9A0B2ED5055D3F0B(func_205());
							iVar13 = 0;
						}
						if (!unk_0x191BE1BC8F26F3C1(iLocal_204[iVar0], 0))
						{
							if (!bLocal_106 && unk_0x8EE3A848975DDF21(iLocal_204[iVar0], -1, 0))
							{
								if (bVar8)
								{
									if ((system::vdist2(unk_0xB3328BA8976B416C(iLocal_204[iVar0], 1), vVar5) < 10000f || bParam2) || iLocal_89)
									{
										func_313(&(iLocal_204[iVar0]), iVar13, 1);
										unk_0x872F1C1F8587CCC7(&(iLocal_154[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (14 > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (unk_0x0840F461D7BD8859(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < unk_0x3413A86ABE2F138E(iLocal_152[iVar0], &cLocal_185))
									{
										vVar3 = { unk_0xB3328BA8976B416C(iLocal_204[iVar0], 1) };
										vVar4 = { unk_0xE0236CBCD003C392(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_317(vVar3, vVar5, 5f, fLocal_141) && func_317(vVar4, vVar5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
											{
												func_313(&(iLocal_204[iVar0]), iVar13, 1);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_306(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0x3998782E46B46C7F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
												{
													if (unk_0xC80D31E4B587871C(iLocal_154[iVar0], 0))
													{
														unk_0xA15269351F50F113(iLocal_204[iVar0], true, true, 0);
														unk_0xBB4910CCAB2BEDFA(iLocal_204[iVar0], true);
														unk_0xBAB8785EE2F06BBE(iLocal_204[iVar0], 2);
														if (!unk_0x125CDF69FA6EF560(iLocal_197[iVar0]))
														{
															unk_0x4AC93B6A8825F105(iLocal_204[iVar0], 1);
														}
													}
												}
												if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
												{
													func_313(&(iLocal_204[iVar0]), iVar13, 1);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
										{
											func_313(&(iLocal_204[iVar0]), iVar13, 1);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
								{
									func_313(&(iLocal_204[iVar0]), iVar13, 1);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xC80D31E4B587871C(iLocal_154[iVar0], 1))
						{
							func_313(&(iLocal_204[iVar0]), iVar13, 1);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 3)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_204[iVar0]))
						{
							iVar1 = unk_0x317536BCEA8FA6B0(iLocal_204[iVar0], -1, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_204[iVar0])) || func_312(iLocal_204[iVar0])))
									{
										if (unk_0x6ADD12BF4D6D2587(iVar2))
										{
											bVar8 = false;
											if (bLocal_97)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = unk_0x90D5DFB054818BA7(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (unk_0xE97272C977DEADD3((fVar7 - unk_0x90D5DFB054818BA7(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_311(iLocal_204[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_309(iVar2, iLocal_204[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_308(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x3998782E46B46C7F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 4)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
					{
						if (!unk_0x8DDE799D31A3D099(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							iVar1 = unk_0x317536BCEA8FA6B0(iLocal_204[iVar0], -1, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iVar1))
							{
								unk_0x3998782E46B46C7F(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_204[iVar0]);
							}
							if (unk_0x0840F461D7BD8859(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + unk_0x3413A86ABE2F138E(iLocal_152[iVar0], &cLocal_185)))
								{
									unk_0x7674774BB9279265(iLocal_204[iVar0]);
								}
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 5)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_204[iVar0], 0))
						{
							iVar1 = unk_0x317536BCEA8FA6B0(iLocal_204[iVar0], -1, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iVar1))
							{
								iVar14 = unk_0x78F50AA8F955BEFC(iVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = unk_0x90D5DFB054818BA7(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62,9f)
									{
										fVar7 = 62,9f;
									}
									unk_0x77142E6A702D63D1(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0)
							{
								unk_0x9E6ACDF1473CD846(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_198(iLocal_204[iVar0]);
							}
						}
						else if (unk_0x6ADD12BF4D6D2587(iLocal_204[iVar0]))
						{
							unk_0xC91FE17AD7353B70(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 1);
					iLocal_153[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_197();
	}
}

void func_308(int iParam0)//Position - 0x1B3E9
{
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_199(iParam0);
		unk_0xD6B1A8B2DA10C9B7(iParam0, 786603);
	}
}

int func_309(int iParam0, int iParam1, bool bParam2)//Position - 0x1B40B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	if (unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		if (bParam2)
		{
			vVar5 = { unk_0x8FD9FCCB6E4BD999(iParam1) };
			vVar4 = { vVar5 / FtoV(system::vmag(vVar5)) };
		}
		else
		{
			vVar2 = { unk_0x3F90543934DCD7E6(iParam1, 0f, 5f, 0f) };
			vVar4 = { vVar2 - vVar1 };
		}
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	if (func_310(vVar3, vVar4) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_310(vector3 vParam0, vector3 vParam1)//Position - 0x1B4A8
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_311(int iParam0, int iParam1, float fParam2)//Position - 0x1B4C9
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		vVar1 = { unk_0x90CB8A0A47B8D830(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_310(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = unk_0xAF3D7D969F2C195C(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_312(int iParam0)//Position - 0x1B54C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0xC733212BF9066BDF();
		if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			iVar2 = unk_0x82FF3DFBC3965CC0(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0xC9CE174229996043(iVar1))
				{
					if (unk_0xFCCAE5538E490D17(iVar1, &iVar0))
					{
						if (unk_0xB8DE76287EDC4957(iVar0, 0))
						{
							if (unk_0x9A213A2345825783(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_313(var uParam0, int iParam1, bool bParam2)//Position - 0x1B5AA
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(*uParam0, 0))
	{
		if (unk_0x8EE3A848975DDF21(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x00D1A9572426E8DD(*uParam0, 6, func_202(), -1, 0, false);
				unk_0xCE93FCB8A8D8DF0B(iVar0, iLocal_194);
				unk_0x14776E43F90DD454(func_202());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x8573622903A28127(*uParam0, 1);
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(*uParam0)))
				{
					unk_0x622387450247E90D(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x00D1A9572426E8DD(*uParam0, 4, func_205(), -1, 0, false);
				if (bLocal_107)
				{
					unk_0x14776E43F90DD454(func_205());
				}
			}
			if (bParam2)
			{
				unk_0x35829E9BFCED1A3F(iVar0, true);
				unk_0xD1980BC8CFFBF0B9(iVar0, 0);
				unk_0xAE01EF4BC84AFE7C(iVar0, 32, false);
			}
			if (bLocal_108)
			{
				unk_0xE17958D3FD0F9EE9(iVar0, 8192, true);
				unk_0xE17958D3FD0F9EE9(iVar0, 65536, true);
				unk_0xE17958D3FD0F9EE9(iVar0, 2, false);
				unk_0xC7ED915AB706A5D8(*uParam0, 1);
			}
			unk_0x771A86309E0CA47B(iVar0, true);
			func_314(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_314(int iParam0)//Position - 0x1B6A1
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		unk_0x486F346ADFE56674(&iParam0);
	}
}

void func_315(int iParam0)//Position - 0x1B6B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 12);
	if (iLocal_199 >= -1 && iLocal_200 >= -1)
	{
		while (iVar0 == iLocal_199 || iVar0 == iLocal_200)
		{
			iVar0++;
		}
	}
	else if (iLocal_199 >= -1)
	{
		if (iVar0 == iLocal_199)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0x1E7A8525FB41AAFE(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x1E7A8525FB41AAFE(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x1E7A8525FB41AAFE(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x1E7A8525FB41AAFE(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x1E7A8525FB41AAFE(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x1E7A8525FB41AAFE(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x1E7A8525FB41AAFE(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x1E7A8525FB41AAFE(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x1E7A8525FB41AAFE(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x1E7A8525FB41AAFE(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x1E7A8525FB41AAFE(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x1E7A8525FB41AAFE(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x1E7A8525FB41AAFE(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x1E7A8525FB41AAFE(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x1E7A8525FB41AAFE(iParam0, 95, 95);
			break;
		
		default:
			unk_0x1E7A8525FB41AAFE(iParam0, 73, 73);
			break;
	}
}

void func_316(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x1B831
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_317(vParam0, vParam1, fParam2, 200f))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				iVar1 = unk_0xC733212BF9066BDF();
				if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
				{
					if (unk_0x0C88267282FD588F(iVar1, vParam0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x9B8406983378711E(vParam0, fParam2, 0, 0, 0, 0, false, 0);
			}
		}
	}
}

int func_317(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0x1B8A3
{
	if (!unk_0x3E9CABD07B829173())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (system::vmag2(vParam1 - vParam0) - fParam2) < (fParam3 * fParam3)
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_318(int iParam0)//Position - 0x1B8EA
{
	float fVar0;
	
	unk_0x0D9525F20FB71C52(iParam0, &cLocal_185);
	while (!unk_0x0840F461D7BD8859(iParam0, &cLocal_185))
	{
		system::wait(0);
	}
	fVar0 = unk_0x3413A86ABE2F138E(iParam0, &cLocal_185);
	unk_0x9E6ACDF1473CD846(iParam0, &cLocal_185);
	return fVar0;
}

int func_319(int iParam0)//Position - 0x1B926
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_320(int iParam0)//Position - 0x1B9A0
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_161;
		while (iVar0 < 15)
		{
			switch (iLocal_155[iVar0])
			{
				case 0:
					if (!iLocal_196[iVar0] == 0)
					{
						if (unk_0x0C88267282FD588F(iParam0, vLocal_174[iVar0 /*3*/], fLocal_128, fLocal_128, fLocal_128, false, true, 0))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_158)
					{
						if (!unk_0x6ADD12BF4D6D2587(iLocal_203[iVar0]))
						{
							unk_0x6FF834D85E2DD4C6(iLocal_196[iVar0]);
							if (unk_0x9A0B2ED5055D3F0B(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_317(vLocal_174[iVar0 /*3*/], vVar1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_316(vLocal_174[iVar0 /*3*/], vVar1, fLocal_134);
									}
									iLocal_203[iVar0] = unk_0xEA60F3B426BB095B(iLocal_196[iVar0], vLocal_174[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										unk_0xC7BF27112709A906(iLocal_203[iVar0], 0);
									}
									unk_0x47F55B6102CA9143(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									unk_0x14776E43F90DD454(iLocal_196[iVar0]);
									if (unk_0xB0DA749C8A7CCBBF(iLocal_203[iVar0], func_203()))
									{
										unk_0xBB4910CCAB2BEDFA(iLocal_203[iVar0], true);
										if (!unk_0x125CDF69FA6EF560(iLocal_196[iVar0]))
										{
											unk_0x4AC93B6A8825F105(iLocal_203[iVar0], 1);
										}
									}
									if (unk_0xB0DA749C8A7CCBBF(iLocal_203[iVar0], func_204()))
									{
										unk_0x1E7A8525FB41AAFE(iLocal_203[iVar0], 0, 0);
									}
									unk_0xFBA991D3A851E195(iLocal_203[iVar0], true);
									iLocal_163 = (iLocal_163 - 1);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 1);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (unk_0xB8DE76287EDC4957(iLocal_203[iVar0], 0))
						{
							vVar2 = { unk_0xB3328BA8976B416C(iLocal_203[iVar0], 1) };
						}
						if (fLocal_142 == 0f || system::vdist2(vVar1, vVar2) < (fLocal_142 * fLocal_142))
						{
							if (!func_309(iLocal_203[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_198(iLocal_203[iVar0]);
								}
								else
								{
									unk_0xC91FE17AD7353B70(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 1);
								iLocal_155[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_321(int iParam0, float fParam1, int iParam2)//Position - 0x1BC97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	
	iVar5 = 0;
	bVar12 = unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4());
	bVar13 = unk_0x48CECF1C35C11EC9();
	uVar14 = unk_0x8E8B931681DE06E3();
	if (bVar12)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iVar5 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
		vVar8 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	iVar1 = 0;
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x8DDE799D31A3D099(iParam0))
		{
			fLocal_130 = unk_0x9DC40A4E8D2F7969(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_150[iVar0] != 99)
			{
				if (iLocal_150[iVar0] == 0)
				{
					if (iLocal_149[iVar0] > 0 && iLocal_195[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (func_319(iLocal_195[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_151[iVar0]), 0);
									}
									else if (unk_0x125CDF69FA6EF560(iLocal_195[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_151[iVar0]), 2);
									}
									unk_0x0EE72DB1CD8A3B86(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_323(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_318(iLocal_149[iVar0]))
								{
									if (func_319(iLocal_195[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_151[iVar0]), 0);
									}
									else if (unk_0x125CDF69FA6EF560(iLocal_195[iVar0]))
									{
										unk_0x872F1C1F8587CCC7(&(iLocal_151[iVar0]), 2);
									}
									unk_0x0EE72DB1CD8A3B86(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_323(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_323(iVar0, 1090519040);
					}
				}
				else if (iLocal_150[iVar0] == 1)
				{
					unk_0x0D9525F20FB71C52(iLocal_149[iVar0], &cLocal_185);
					bVar11 = false;
					if (unk_0xC80D31E4B587871C(iLocal_151[iVar0], 0))
					{
						unk_0x6FF834D85E2DD4C6(func_202());
						if (unk_0x9A0B2ED5055D3F0B(func_202()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 2) && bVar13) || (unk_0xC80D31E4B587871C(iLocal_151[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						unk_0x6FF834D85E2DD4C6(func_205());
						bVar11 = unk_0x9A0B2ED5055D3F0B(func_205());
					}
					if (!unk_0x6ADD12BF4D6D2587(iLocal_201[iVar0]))
					{
						unk_0x6FF834D85E2DD4C6(iLocal_195[iVar0]);
						if ((unk_0x9A0B2ED5055D3F0B(iLocal_195[iVar0]) && unk_0x0840F461D7BD8859(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_317(vLocal_173[iVar0 /*3*/], vVar8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_316(vLocal_173[iVar0 /*3*/], vVar8, fLocal_134);
									}
									iLocal_201[iVar0] = unk_0xEA60F3B426BB095B(iLocal_195[iVar0], vLocal_173[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										unk_0xC7BF27112709A906(iLocal_201[iVar0], 0);
									}
									if (uLocal_98 && !unk_0xC80D31E4B587871C(iLocal_151[iVar0], 0))
									{
										func_315(iLocal_201[iVar0]);
									}
									unk_0xAA93B7B448E10E40(iLocal_201[iVar0], vLocal_173[iVar0 /*3*/], 0, 0, 1);
									unk_0x47F55B6102CA9143(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (unk_0xC1514CFCEC68CA4A(iLocal_195[iVar0]) || unk_0x125CDF69FA6EF560(iLocal_195[iVar0]))
									{
										unk_0xACE486395AA1867D(iLocal_201[iVar0], 1084227584);
									}
									if (unk_0xC80D31E4B587871C(iLocal_151[iVar0], 3))
									{
										unk_0xFBA991D3A851E195(iLocal_201[iVar0], true);
									}
									if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 0))
									{
										unk_0xA15269351F50F113(iLocal_201[iVar0], true, true, 0);
										if (unk_0x674C9438180770FE() > 19 || unk_0x674C9438180770FE() < 7)
										{
											unk_0xBAB8785EE2F06BBE(iLocal_201[iVar0], 3);
										}
									}
									unk_0xEDC33A771FAEB393(iLocal_201[iVar0], true);
									unk_0x35829E9BFCED1A3F(iLocal_201[iVar0], true);
									unk_0x14776E43F90DD454(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 1);
									iLocal_150[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 1);
									func_323(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_171 || iLocal_171 == 0)) || iLocal_89) || iParam2)
					{
						if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
						{
							if (unk_0xC80D31E4B587871C(iLocal_151[iVar0], 0))
							{
								unk_0x6FF834D85E2DD4C6(func_202());
								bVar11 = unk_0x9A0B2ED5055D3F0B(func_202());
								iVar15 = 2;
							}
							else if (!bLocal_102 && ((!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 2) && bVar13) || (unk_0xC80D31E4B587871C(iLocal_151[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								unk_0x6FF834D85E2DD4C6(func_205());
								bVar11 = unk_0x9A0B2ED5055D3F0B(func_205());
								iVar15 = 0;
							}
							if (!unk_0x191BE1BC8F26F3C1(iLocal_201[iVar0], 0))
							{
								if (!bLocal_106 && unk_0x8EE3A848975DDF21(iLocal_201[iVar0], -1, 0))
								{
									if (bVar11)
									{
										if ((system::vdist2(unk_0xB3328BA8976B416C(iLocal_201[iVar0], 1), vVar8) < 10000f || iParam2) || iLocal_89)
										{
											func_313(&(iLocal_201[iVar0]), iVar15, 0);
											unk_0x872F1C1F8587CCC7(&(iLocal_151[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xB8DE76287EDC4957(iLocal_201[iVar0], 0))
						{
							unk_0x0D9525F20FB71C52(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (12 > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (unk_0x0840F461D7BD8859(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < unk_0x3413A86ABE2F138E(iLocal_149[iVar0], &cLocal_185))
										{
											vVar6 = { unk_0xB3328BA8976B416C(iLocal_201[iVar0], 1) };
											vVar7 = { unk_0xE0236CBCD003C392(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_317(vVar6, vVar8, 5f, fLocal_141) && func_317(vVar7, vVar8, 5f, fLocal_141))
											{
												if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
												{
													func_313(&(iLocal_201[iVar0]), iVar15, 0);
												}
												func_323(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_306(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
													{
														func_313(&(iLocal_201[iVar0]), iVar15, 0);
													}
													unk_0xB18E1DBC397238E1(iLocal_201[iVar0], true, 0);
													unk_0x3998782E46B46C7F(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
											{
												func_313(&(iLocal_201[iVar0]), iVar15, 0);
											}
											func_323(iVar0, 1090519040);
										}
									}
									else if (fVar9 > unk_0x3413A86ABE2F138E(iLocal_149[iVar0], &cLocal_185))
									{
										if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
										{
											func_313(&(iLocal_201[iVar0]), iVar15, 0);
										}
										func_323(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
									{
										func_313(&(iLocal_201[iVar0]), iVar15, 0);
									}
									func_323(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
								{
									func_313(&(iLocal_201[iVar0]), iVar15, 0);
								}
								func_323(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xC80D31E4B587871C(iLocal_151[iVar0], 1))
							{
								func_313(&(iLocal_201[iVar0]), iVar15, 0);
							}
							func_323(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 3)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_201[iVar0], 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_201[iVar0]))
						{
							iVar4 = unk_0x317536BCEA8FA6B0(iLocal_201[iVar0], -1, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_312(iLocal_201[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_170 || iLocal_170 == 0))
											{
												if (!unk_0x191BE1BC8F26F3C1(iVar5, 0))
												{
													bVar11 = false;
													if (!func_322(iLocal_201[iVar0], iVar5) || func_309(iVar5, iLocal_201[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xC80D31E4B587871C(iLocal_151[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_170 || iLocal_170 == 0))
										{
											vVar19 = { unk_0xA05DDB968587006B(iParam0, unk_0xB3328BA8976B416C(iLocal_201[iVar0], 1)) };
											if (vVar19.y < 0f)
											{
												if (unk_0xE97272C977DEADD3(vVar19.y) > unk_0xE97272C977DEADD3(vVar19.x))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_308(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										unk_0x3998782E46B46C7F(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 4)
				{
					if (unk_0xB8DE76287EDC4957(iLocal_201[iVar0], 0))
					{
						if (!unk_0x8DDE799D31A3D099(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							iVar4 = unk_0x317536BCEA8FA6B0(iLocal_201[iVar0], -1, 0);
							if (!unk_0x3AB6A1A9084FB0A4(iVar4))
							{
								unk_0x3998782E46B46C7F(iLocal_201[iVar0], fParam1);
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_201[iVar0]);
							}
							if (unk_0x0840F461D7BD8859(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + unk_0x3413A86ABE2F138E(iLocal_149[iVar0], &cLocal_185)))
								{
									unk_0x7674774BB9279265(iLocal_201[iVar0]);
								}
							}
							else
							{
								unk_0x7674774BB9279265(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 5)
				{
					if (!unk_0x191BE1BC8F26F3C1(iLocal_201[iVar0], 0))
					{
						fVar10 = unk_0x90D5DFB054818BA7(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 1);
					func_323(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_170 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_171 = 0;
		}
	}
	else
	{
		func_201();
	}
}

int func_322(int iParam0, int iParam1)//Position - 0x1C80E
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		vVar0 = { unk_0x90CB8A0A47B8D830(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		vVar1 = { unk_0x90CB8A0A47B8D830(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_310(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_323(int iParam0, float fParam1)//Position - 0x1C872
{
	int iVar0;
	
	if (!iLocal_195[iParam0] == 0)
	{
		unk_0x14776E43F90DD454(iLocal_195[iParam0]);
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_201[iParam0], 0))
	{
		unk_0xB18E1DBC397238E1(iLocal_201[iParam0], true, 0);
		unk_0xEDC33A771FAEB393(iLocal_201[iParam0], false);
		iVar0 = unk_0x317536BCEA8FA6B0(iLocal_201[iParam0], -1, 0);
		if (!unk_0x3AB6A1A9084FB0A4(iVar0) && iVar0 != unk_0xFC1458A37D98B502())
		{
			unk_0x771A86309E0CA47B(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62,9f)
			{
				fParam1 = 62,9f;
			}
			unk_0x6F03491E8F9F397C(iVar0, iLocal_201[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xE17958D3FD0F9EE9(iVar0, 8192, true);
			if (bLocal_108)
			{
				unk_0xE17958D3FD0F9EE9(iVar0, 65536, true);
				unk_0xE17958D3FD0F9EE9(iVar0, 2, false);
			}
			unk_0xAE6EBBBBD8B9FB30(iVar0, 6, false);
			unk_0x77142E6A702D63D1(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_314(iVar0);
			func_198(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			unk_0x68433819717660CF(&iVar0);
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_201[iParam0]))
		{
			unk_0xC91FE17AD7353B70(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0)
		{
			unk_0x9E6ACDF1473CD846(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 99;
}

void func_324(int iParam0, float fParam1, float fParam2)//Position - 0x1C9CD
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		vVar4 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	}
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x8DDE799D31A3D099(iParam0))
		{
			iVar0 = unk_0xF9832BA856338268(iParam0);
			vVar1 = { unk_0xADCBC459AA10697F(iVar0, fParam1) };
			vVar2 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			vVar3 = { vVar2 - vVar1 };
			fVar5 = system::vmag(vVar3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_316(vVar1, vVar4, fVar5);
		}
	}
}

void func_325(int iParam0, float fParam1)//Position - 0x1CA50
{
	if (!bLocal_88)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > (fParam1 * fParam1))
				{
					unk_0x1E56F4F04588C11A(1);
				}
				else
				{
					unk_0x1E56F4F04588C11A(0);
				}
			}
		}
	}
}

void func_326(int iParam0, float fParam1)//Position - 0x1CA9E
{
	if (!bLocal_88)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (system::vdist2(unk_0xB3328BA8976B416C(iParam0, 1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > (fParam1 * fParam1))
				{
					unk_0xAD6F3DFB1F960182(1f);
				}
				else
				{
					unk_0xAD6F3DFB1F960182(0f);
				}
			}
		}
	}
}

void func_327(int iParam0, float fParam1)//Position - 0x1CAEC
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && unk_0x8DDE799D31A3D099(iParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0xF9832BA856338268(iParam0);
			if (fVar1 <= unk_0x427EA9CECEE401A6(iVar0))
			{
				if (iLocal_166 == 0)
				{
					vLocal_181 = { unk_0xADCBC459AA10697F(iVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 1)
				{
					vLocal_182 = { unk_0xADCBC459AA10697F(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (vLocal_181.x > vLocal_182.x)
					{
						fVar3 = vLocal_181.x;
						vLocal_181.x = vLocal_182.x;
						vLocal_182.x = fVar3;
					}
					if (vLocal_181.y > vLocal_182.y)
					{
						fVar3 = vLocal_181.y;
						vLocal_181.y = vLocal_182.y;
						vLocal_182.y = fVar3;
					}
					if (vLocal_181.z > vLocal_182.z)
					{
						fVar3 = vLocal_181.z;
						vLocal_181.z = vLocal_182.z;
						vLocal_182.z = fVar3;
					}
					vLocal_181 = { vLocal_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					unk_0xBF98CCF1EA4B13E9(vLocal_181, vLocal_182, false, 0);
					fLocal_144 = fVar1;
					iLocal_166 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0xF9832BA856338268(iParam0);
			if (iLocal_169 == 0)
			{
				vLocal_183 = { unk_0xADCBC459AA10697F(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 1)
			{
				vLocal_184 = { unk_0xADCBC459AA10697F(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (vLocal_183.x > vLocal_184.x)
				{
					fVar3 = vLocal_183.x;
					vLocal_183.x = vLocal_184.x;
					vLocal_184.x = fVar3;
				}
				if (vLocal_183.y > vLocal_184.y)
				{
					fVar3 = vLocal_183.y;
					vLocal_183.y = vLocal_184.y;
					vLocal_184.y = fVar3;
				}
				if (vLocal_183.z > vLocal_184.z)
				{
					fVar3 = vLocal_183.z;
					vLocal_183.z = vLocal_184.z;
					vLocal_184.z = fVar3;
				}
				vLocal_183 = { vLocal_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				vLocal_184 = { vLocal_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				unk_0xD855BC7E9D7EC87F(vLocal_183, vLocal_184, true);
				fLocal_145 = fVar2;
				iLocal_169 = 0;
			}
		}
	}
}

int func_328(int iParam0, int iParam1)//Position - 0x1CD3A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xA8D0477084E86A92(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	if (unk_0xB8DE76287EDC4957(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		vVar2 = { unk_0x3F90543934DCD7E6(iParam1, 0f, 5f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_310(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_329()//Position - 0x1CDDD
{
	unk_0x4C15495E88D71C61(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	unk_0xD93B76E9A81FFF74(0);
	unk_0x8409C7020FBD68B5(0);
	unk_0xFA9A14EC24D6967F(0);
	unk_0xAD6F3DFB1F960182(0f);
	unk_0x1E56F4F04588C11A(0);
	unk_0x1D60449E9FA475EF(3);
}

void func_330(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x1CE27
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0,1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0,4f) + fParam5);
	fVar2 = func_333(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (func_328(iParam1, iParam0))
		{
			if (unk_0x88DDBE9908752BF0(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_332(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_331(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x46C19C2753391FBF();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x46C19C2753391FBF();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam1))
		{
			if (unk_0x88DDBE9908752BF0(iParam1, 0))
			{
				iVar9 = unk_0xDFD115BB10FE46A9(iParam1, 0);
				if (!unk_0x191BE1BC8F26F3C1(iVar9, 0))
				{
					iVar10 = unk_0x82FF3DFBC3965CC0(iVar9);
					if (unk_0xC1514CFCEC68CA4A(iVar10) || unk_0x125CDF69FA6EF560(iVar10))
					{
						if (unk_0xB8DE76287EDC4957(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							unk_0xCD867A0CCB4311BC(unk_0x9EB17624F44A8DA4(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

float func_331(int iParam0, int iParam1)//Position - 0x1D0DE
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		Var0 = unk_0x54ACD32C7CE738B8(iParam0);
		Var0.f_1 = unk_0xFF9D3EC7294AEF3B(iParam0);
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
		if (unk_0x88DDBE9908752BF0(iParam1, 0))
		{
			iVar5 = unk_0xDFD115BB10FE46A9(iParam1, 0);
			vVar3.x = unk_0x54ACD32C7CE738B8(iVar5);
			vVar3.y = unk_0xFF9D3EC7294AEF3B(iVar5);
		}
		else
		{
			vVar2 = { unk_0x3F90543934DCD7E6(iParam1, 0f, 5f, 0f) };
			vVar3 = { vVar2 - vVar1 };
		}
	}
	fVar4 = unk_0xAF3D7D969F2C195C(Var0, Var0.f_1, vVar3.x, vVar3.y);
	return fVar4;
}

float func_332(int iParam0, int iParam1)//Position - 0x1D16F
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar1 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	vVar2 = { vVar1 - vVar0 };
	vVar2.z = 0f;
	fVar3 = system::vmag(vVar2);
	return fVar3;
}

float func_333(int iParam0, int iParam1)//Position - 0x1D1C1
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		Var0 = unk_0x54ACD32C7CE738B8(iParam0);
		Var0.f_1 = unk_0xFF9D3EC7294AEF3B(iParam0);
		vVar2 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		vVar3 = { unk_0xB3328BA8976B416C(iParam1, 1) };
	}
	vVar1 = { vVar3 - vVar2 };
	fVar4 = unk_0xAF3D7D969F2C195C(vVar1.x, vVar1.y, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	vVar1.z = 0f;
	return (system::vmag(vVar1) * system::sin(fVar4));
}

int func_334()//Position - 0x1D250
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_278))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
		{
			if (!unk_0x841ED61760A7D07B(iLocal_278))
			{
				iLocal_396 = 1;
			}
			else
			{
				iLocal_396 = 0;
			}
		}
		else
		{
			iLocal_396 = 1;
		}
	}
	else
	{
		iLocal_396 = 1;
	}
	iLocal_232 = 0;
	while (iLocal_232 <= 24)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[iLocal_232]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[iLocal_232], 0))
			{
				if (!unk_0x841ED61760A7D07B(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 1;
				}
				else
				{
					iLocal_397[iLocal_232] = 0;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 1;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 1;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 1 && iLocal_397[0] == 1) && iLocal_397[1] == 1) && iLocal_397[2] == 1) && iLocal_397[3] == 1) && iLocal_397[4] == 1) && iLocal_397[5] == 1) && iLocal_397[6] == 1) && iLocal_397[7] == 1) && iLocal_397[8] == 1) && iLocal_397[9] == 1) && iLocal_397[10] == 1) && iLocal_397[11] == 1) && iLocal_397[12] == 1) && iLocal_397[13] == 1) && iLocal_397[14] == 1) && iLocal_397[15] == 1) && iLocal_397[16] == 1) && iLocal_397[17] == 1) && iLocal_397[18] == 1) && iLocal_397[19] == 1) && iLocal_397[20] == 1) && iLocal_397[21] == 1) && iLocal_397[22] == 1) && iLocal_397[23] == 1) && iLocal_397[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_335()//Position - 0x1D46A
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[4]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[4], 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_204[4]))
			{
				vLocal_309 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				vVar1 = { unk_0xB3328BA8976B416C(iLocal_204[4], 1) };
				if (vLocal_309.x < (vVar1.x - 10f) && !unk_0x841ED61760A7D07B(iLocal_204[4]))
				{
					unk_0x7674774BB9279265(iLocal_204[4]);
					unk_0x5380482A432E314E(&(iLocal_204[4]));
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[3]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[3], 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_204[3]))
			{
				vLocal_309 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				vVar0 = { unk_0xB3328BA8976B416C(iLocal_204[3], 1) };
				if (vLocal_309.x < (vVar0.x - 10f) && !unk_0x841ED61760A7D07B(iLocal_204[3]))
				{
					unk_0x7674774BB9279265(iLocal_204[3]);
					unk_0x5380482A432E314E(&(iLocal_204[3]));
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[21]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[21], 0))
		{
			if (unk_0x8DDE799D31A3D099(iLocal_204[21]))
			{
				vLocal_309 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
				vVar2 = { unk_0xB3328BA8976B416C(iLocal_204[21], 1) };
				if (vLocal_309.x < (vVar2.x - 10f) && !unk_0x841ED61760A7D07B(iLocal_204[21]))
				{
					unk_0x7674774BB9279265(iLocal_204[21]);
					unk_0x5380482A432E314E(&(iLocal_204[21]));
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[0]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[0], 0))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 50000f && !unk_0x841ED61760A7D07B(iLocal_204[0]))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_204[0]))
							{
								unk_0x7674774BB9279265(iLocal_204[0]);
							}
							unk_0x5380482A432E314E(&(iLocal_204[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_282))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_282, 0))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 90000f && !unk_0x841ED61760A7D07B(iLocal_282))
						{
							unk_0x990DE45B7A2B6426(iLocal_667[0], 0);
							unk_0x990DE45B7A2B6426(iLocal_667[1], 0);
							unk_0x990DE45B7A2B6426(iLocal_667[2], 0);
							if (unk_0x6ADD12BF4D6D2587(iLocal_265[0]))
							{
								unk_0x486F346ADFE56674(&(iLocal_265[0]));
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_265[1]))
							{
								unk_0x486F346ADFE56674(&(iLocal_265[1]));
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_265[2]))
							{
								unk_0x486F346ADFE56674(&(iLocal_265[2]));
							}
							if (unk_0x6ADD12BF4D6D2587(iLocal_265[3]))
							{
								unk_0x486F346ADFE56674(&(iLocal_265[3]));
							}
							unk_0x5380482A432E314E(&iLocal_282);
							unk_0xFCCDDE0E48CF9588("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_336(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x1D739
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DECE14FC9A8C51(iParam0))
	{
		if ((unk_0x6ADD12BF4D6D2587(iParam1) && unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502())) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x8A3FF8E81B40BB75(iParam1))
			{
				if (unk_0xB8DE76287EDC4957(unk_0x79A6CD762DCCABE4(iParam1), 0))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, true);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, false);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
			else if (unk_0x52C56492660097C7(iParam1))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x07F64790D10D1DB5(iParam1)))
				{
					fVar1 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0A8FD2D5529E1737(iParam0, true);
						unk_0xF20857E4CB32A2B7(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0A8FD2D5529E1737(iParam0, false);
						unk_0xF20857E4CB32A2B7(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_337()//Position - 0x1D892
{
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[2]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[2], 0))
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 50530f)
						{
							if (!unk_0xAC6FC114B15F95EC(iLocal_204[2]))
							{
								unk_0xA15269351F50F113(iLocal_204[2], true, true, 0);
							}
						}
						else if (unk_0xAC6FC114B15F95EC(iLocal_204[2]))
						{
							unk_0xA15269351F50F113(iLocal_204[2], false, false, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_204[5]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_204[5], 0))
		{
			if (!unk_0xAC6FC114B15F95EC(iLocal_204[5]))
			{
				unk_0xA15269351F50F113(iLocal_204[5], true, true, 0);
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_280[0], 0))
		{
			if (!unk_0xAC6FC114B15F95EC(iLocal_280[0]))
			{
				unk_0xA15269351F50F113(iLocal_280[0], true, true, 0);
			}
			if (unk_0x8EE3A848975DDF21(iLocal_280[0], -1, 0))
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_276[0]))
				{
					unk_0x6FF834D85E2DD4C6(joaat("s_m_m_gentransport"));
					if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0] = unk_0x00D1A9572426E8DD(iLocal_280[0], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						unk_0x14776E43F90DD454(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[1]))
	{
		if (unk_0xB8DE76287EDC4957(iLocal_280[1], 0))
		{
			if (!unk_0xAC6FC114B15F95EC(iLocal_280[1]))
			{
				unk_0xA15269351F50F113(iLocal_280[1], true, true, 0);
			}
			if (unk_0x8EE3A848975DDF21(iLocal_280[1], -1, 0))
			{
				if (!unk_0x6ADD12BF4D6D2587(iLocal_276[1]))
				{
					unk_0x6FF834D85E2DD4C6(joaat("s_m_m_gentransport"));
					if (unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_gentransport")))
					{
						iLocal_276[1] = unk_0x00D1A9572426E8DD(iLocal_280[1], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						unk_0x14776E43F90DD454(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_338()//Position - 0x1DA68
{
	if (iLocal_223 == 0)
	{
		unk_0x1CF95440F1970B4F("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		unk_0x1CF95440F1970B4F("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		unk_0x1CF95440F1970B4F("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		unk_0x1CF95440F1970B4F("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_385 == 0)
		{
			iLocal_255 = unk_0xD0CA83418A236CB4();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			iLocal_256 = unk_0xD0CA83418A236CB4();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			iLocal_257 = unk_0xD0CA83418A236CB4();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			iLocal_258 = unk_0xD0CA83418A236CB4();
			iLocal_388 = 1;
		}
		if (iLocal_389 == 0)
		{
			iLocal_259 = unk_0xD0CA83418A236CB4();
			iLocal_389 = 1;
		}
		if (iLocal_384 == 0)
		{
			iLocal_260 = unk_0xD0CA83418A236CB4();
			iLocal_384 = 1;
		}
		if (iLocal_390 == 0)
		{
			iLocal_261 = unk_0xD0CA83418A236CB4();
			iLocal_390 = 1;
		}
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		if (!unk_0x8EA3C8E091EA5BA4(iLocal_301))
		{
			iLocal_301 = unk_0x4562AC7F06CD71B3("DEFAULT_SCRIPTED_CAMERA", true);
			unk_0xE43C573FE3C5D758(iLocal_301, 40f);
		}
		iLocal_341 = 0;
		iLocal_335 = 0;
		iLocal_347 = 0;
		iLocal_331 = 0;
		iLocal_326 = 0;
		iLocal_332 = 0;
		iLocal_325 = 0;
		iLocal_361 = 0;
		iLocal_363[0] = 0;
		iLocal_364[0] = 0;
		iLocal_363[1] = 0;
		iLocal_364[1] = 0;
		iLocal_363[2] = 0;
		iLocal_365 = 0;
		iLocal_366 = 0;
		iLocal_329 = 0;
		iLocal_330 = 0;
		iLocal_328 = 0;
		iLocal_370 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_376 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_383 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_467 = 0;
		iLocal_349 = 1;
		iLocal_350 = 1;
		iLocal_358 = 1;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_415 = 0;
		iLocal_417 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_427 = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430[0] = 0;
		iLocal_430[1] = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_434 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_468 = 0;
		iLocal_227 = 0;
		iLocal_240 = 0;
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_465[iLocal_231] = 0;
			iLocal_466[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_487[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 6)
		{
			iLocal_435[iLocal_231] = 0;
			iLocal_436[iLocal_231] = 0;
			iLocal_231++;
		}
		unk_0x36905B9EE07F38CC();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_278();
		iLocal_226 = unk_0x01AB8D4D92922004();
		unk_0x247EAA2E93D4A021(-823,71f, -2548,2f, 13,75f, 20f, 1, 0, 0, false);
		unk_0xBB0951717202666D(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f);
		unk_0x8D3373CFE9542320(-833,86f, -2564,17f, 13,43f, -814,37f, -2521,04f, 12,94f, false, 0);
		unk_0xBF98CCF1EA4B13E9(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, 1);
		func_123(2, 1);
		func_340("BB_Chase", 45, 0, 1);
		unk_0xC0EBC1452FCAB15C(3);
		func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_24())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_21(iLocal_279, -1, 1);
		}
		iLocal_224 = 0;
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
		func_339();
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iLocal_287))
		{
			iLocal_287 = unk_0xEA60F3B426BB095B(joaat("blista"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!unk_0x0840F461D7BD8859(45, "BB_Chase"))
		{
			system::wait(0);
		}
		if (unk_0x3E9CABD07B829173())
		{
			if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
			{
				unk_0xA15269351F50F113(iLocal_279, true, true, 0);
				unk_0xFB2E9855F95E3BD3(iLocal_279, 30f);
				unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_278))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				unk_0x8D7ABC97ED508270(iLocal_278, 45, "BB_Chase", 1);
				system::settimerb(0);
				func_261();
				unk_0xC234848D21B6064E(2);
				if (unk_0x6ADD12BF4D6D2587(iLocal_279))
				{
					if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
					{
						unk_0x5380482A432E314E(&iLocal_279);
					}
				}
				if (!unk_0x9F7B586A14398C40())
				{
					unk_0x59C3AC31C7544A28(800);
				}
				iLocal_223 = 0;
				iLocal_222 = 4;
			}
		}
	}
}

void func_339()//Position - 0x1DEA7
{
	vLocal_174[0 /*3*/] = { -583,6427f, -2157,497f, 5,7947f };
	fLocal_124[0] = -0,0003f;
	fLocal_125[0] = -0,0085f;
	fLocal_126[0] = 0,9998f;
	fLocal_127[0] = 0,0158f;
	iLocal_196[0] = joaat("blista");
	vLocal_173[4 /*3*/] = { -827,2035f, -2575,697f, 13,5688f };
	fLocal_109[4] = 0,0004f;
	fLocal_110[4] = -0,0003f;
	fLocal_111[4] = -0,2526f;
	fLocal_112[4] = 0,9676f;
	iLocal_149[4] = 50;
	fLocal_113[4] = 20310f;
	iLocal_195[4] = joaat("manana");
	vLocal_174[1 /*3*/] = { -1033,717f, -2949,014f, 13,4922f };
	fLocal_124[1] = 0,0032f;
	fLocal_125[1] = -0,0003f;
	fLocal_126[1] = -0,0255f;
	fLocal_127[1] = 0,9997f;
	iLocal_196[1] = joaat("bison2");
	vLocal_175[0 /*3*/] = { -1178,365f, -2845,981f, 13,9027f };
	fLocal_118[0] = 0,0018f;
	fLocal_119[0] = 0,0123f;
	fLocal_120[0] = 0,9644f;
	fLocal_121[0] = 0,2642f;
	iLocal_152[0] = 9;
	fLocal_122[0] = 22357f;
	fLocal_123[0] = 1f;
	iLocal_197[0] = joaat("buzzard");
	vLocal_175[1 /*3*/] = { -1376,197f, -2755,167f, 14,0646f };
	fLocal_118[1] = -0,0012f;
	fLocal_119[1] = 0,0013f;
	fLocal_120[1] = 0,8439f;
	fLocal_121[1] = -0,5365f;
	iLocal_152[1] = 10;
	fLocal_122[1] = 27135f;
	fLocal_123[1] = 1f;
	iLocal_197[1] = joaat("packer");
	vLocal_175[2 /*3*/] = { -1342,543f, -2688,482f, 22,8254f };
	fLocal_118[2] = 0,0057f;
	fLocal_119[2] = -0,0014f;
	fLocal_120[2] = -0,2451f;
	fLocal_121[2] = 0,9695f;
	iLocal_152[2] = 11;
	fLocal_122[2] = 35135f;
	fLocal_123[2] = 1f;
	iLocal_197[2] = joaat("jet");
	vLocal_175[3 /*3*/] = { -898,3506f, -2698,965f, 20,159f };
	fLocal_118[3] = 0,0065f;
	fLocal_119[3] = 0,0191f;
	fLocal_120[3] = -0,2629f;
	fLocal_121[3] = 0,9646f;
	iLocal_152[3] = 3;
	fLocal_122[3] = 6764f;
	fLocal_123[3] = 1f;
	iLocal_197[3] = joaat("bus");
	vLocal_175[4 /*3*/] = { -576,655f, -2231,905f, 5,2834f };
	fLocal_118[4] = 0,0043f;
	fLocal_119[4] = 0,0331f;
	fLocal_120[4] = -0,3125f;
	fLocal_121[4] = 0,9493f;
	iLocal_152[4] = 4;
	fLocal_122[4] = 2102f;
	fLocal_123[4] = 1f;
	iLocal_197[4] = joaat("bison");
	vLocal_175[5 /*3*/] = { -994,9925f, -3154,125f, 23,1145f };
	fLocal_118[5] = 0,0056f;
	fLocal_119[5] = 0,0029f;
	fLocal_120[5] = 0,4915f;
	fLocal_121[5] = 0,8708f;
	iLocal_152[5] = 21;
	fLocal_122[5] = 92500f;
	fLocal_123[5] = 1f;
	iLocal_197[5] = joaat("jet");
	vLocal_175[7 /*3*/] = { -553,3315f, -2073,951f, 6,8909f };
	fLocal_118[7] = 0,0072f;
	fLocal_119[7] = 0,0176f;
	fLocal_120[7] = 0,9739f;
	fLocal_121[7] = -0,2263f;
	iLocal_152[7] = 54;
	fLocal_122[7] = 0f;
	fLocal_123[7] = 1f;
	iLocal_197[7] = joaat("police3");
	vLocal_175[8 /*3*/] = { -561,7264f, -2076,761f, 6,7664f };
	fLocal_118[8] = -0,027f;
	fLocal_119[8] = 0,0016f;
	fLocal_120[8] = 0,9169f;
	fLocal_121[8] = -0,3981f;
	iLocal_152[8] = 108;
	fLocal_122[8] = 150f;
	fLocal_123[8] = 1f;
	iLocal_197[8] = joaat("police3");
	vLocal_175[11 /*3*/] = { -1563,918f, -2745,409f, 13,5643f };
	fLocal_118[11] = -0,0022f;
	fLocal_119[11] = -0,0019f;
	fLocal_120[11] = 0,928f;
	fLocal_121[11] = -0,3726f;
	iLocal_152[11] = 111;
	fLocal_122[11] = 36000f;
	fLocal_123[11] = 1f;
	iLocal_197[11] = joaat("police3");
	vLocal_175[12 /*3*/] = { -1026,024f, -2336,396f, 13,5678f };
	fLocal_118[12] = -0,0083f;
	fLocal_119[12] = -0,0054f;
	fLocal_120[12] = 0,55f;
	fLocal_121[12] = 0,8351f;
	iLocal_152[12] = 112;
	fLocal_122[12] = 60000f;
	fLocal_123[12] = 1f;
	iLocal_197[12] = joaat("police3");
	vLocal_175[13 /*3*/] = { -1013,316f, -2340,457f, 13,5678f };
	fLocal_118[13] = -0,0086f;
	fLocal_119[13] = -0,005f;
	fLocal_120[13] = 0,5052f;
	fLocal_121[13] = 0,8629f;
	iLocal_152[13] = 113;
	fLocal_122[13] = 60000f;
	fLocal_123[13] = 1f;
	iLocal_197[13] = joaat("police3");
	vLocal_175[14 /*3*/] = { -1221,049f, -2731,169f, 13,5681f };
	fLocal_118[14] = -0,0083f;
	fLocal_119[14] = -0,0057f;
	fLocal_120[14] = 0,6469f;
	fLocal_121[14] = 0,7625f;
	iLocal_152[14] = 61;
	fLocal_122[14] = 80000f;
	fLocal_123[14] = 1f;
	iLocal_197[14] = joaat("police3");
	vLocal_175[15 /*3*/] = { -1227,203f, -2735,872f, 13,568f };
	fLocal_118[15] = -0,0041f;
	fLocal_119[15] = -0,0091f;
	fLocal_120[15] = 0,9133f;
	fLocal_121[15] = 0,4072f;
	iLocal_152[15] = 62;
	fLocal_122[15] = 80000f;
	fLocal_123[15] = 1f;
	iLocal_197[15] = joaat("police3");
	vLocal_175[19 /*3*/] = { -1240,048f, -2203,457f, 14,0347f };
	fLocal_118[19] = 0,0002f;
	fLocal_119[19] = 0,0018f;
	fLocal_120[19] = 0,9611f;
	fLocal_121[19] = -0,2763f;
	iLocal_152[19] = 66;
	fLocal_122[19] = 55125f;
	fLocal_123[19] = 1f;
	iLocal_197[19] = 1938952078;
	vLocal_175[20 /*3*/] = { -438,0192f, -2060,751f, 73,6354f };
	fLocal_118[20] = -0,0005f;
	fLocal_119[20] = 0,0018f;
	fLocal_120[20] = 0,9559f;
	fLocal_121[20] = 0,2938f;
	iLocal_152[20] = 67;
	fLocal_122[20] = 0f;
	fLocal_123[20] = 1f;
	iLocal_197[20] = joaat("maverick");
	vLocal_175[21 /*3*/] = { -546,8047f, -2187,925f, 5,8819f };
	fLocal_118[21] = -0,0252f;
	fLocal_119[21] = -0,0034f;
	fLocal_120[21] = 0,9369f;
	fLocal_121[21] = 0,3487f;
	iLocal_152[21] = 5;
	fLocal_122[21] = 3834f;
	fLocal_123[21] = 1f;
	iLocal_197[21] = joaat("blista");
	vLocal_175[22 /*3*/] = { -1001,674f, -2947,732f, 13,3947f };
	fLocal_118[22] = 0,001f;
	fLocal_119[22] = -0,0004f;
	fLocal_120[22] = 0,8616f;
	fLocal_121[22] = 0,5075f;
	iLocal_152[22] = 6;
	fLocal_122[22] = 20176f;
	fLocal_123[22] = 1f;
	iLocal_197[22] = joaat("airtug");
	vLocal_175[23 /*3*/] = { -1249,588f, -2525,9f, 13,3942f };
	fLocal_118[23] = 0,001f;
	fLocal_119[23] = -0,0001f;
	fLocal_120[23] = 0,9749f;
	fLocal_121[23] = -0,2228f;
	iLocal_152[23] = 7;
	fLocal_122[23] = 48538f;
	fLocal_123[23] = 1f;
	iLocal_197[23] = joaat("airtug");
	vLocal_175[24 /*3*/] = { -1362,538f, -2625,609f, 13,3895f };
	fLocal_118[24] = -0,0001f;
	fLocal_119[24] = 0,0018f;
	fLocal_120[24] = 0,5344f;
	fLocal_121[24] = 0,8452f;
	iLocal_152[24] = 8;
	fLocal_122[24] = 75112f;
	fLocal_123[24] = 1f;
	iLocal_197[24] = joaat("airtug");
}

void func_340(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1E7B9
{
	vector3 vVar0;
	
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = iParam1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_166 = 0;
	iLocal_169 = 0;
	iLocal_167 = -1;
	iLocal_168 = -1;
	iLocal_170 = 0;
	iLocal_171 = 0;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0;
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		vVar0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		vLocal_177.x = (vVar0.x - 100f);
		vLocal_177.y = (vVar0.y - 100f);
		vLocal_177.z = (vVar0.z - 100f);
		vLocal_178.x = (vVar0.x + 100f);
		vLocal_178.y = (vVar0.y + 100f);
		vLocal_178.z = (vVar0.z + 100f);
		unk_0xBF98CCF1EA4B13E9(vLocal_177, vLocal_178, false, 0);
		if (bParam2)
		{
			unk_0x9B8406983378711E(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	unk_0x4DE114E3C7F8B7C2("rgh_traffic", &iLocal_194);
	func_329();
	if (bParam3)
	{
		func_187(1);
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x512840F67B7219D4(unk_0x9EB17624F44A8DA4(), 0);
		unk_0xC1CEF375B44856F4(false);
	}
	func_192();
}

void func_341()//Position - 0x1E8DB
{
	if (iLocal_223 == 0)
	{
		unk_0x1267474D9A69CA37(0f, 14f, 4);
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_372 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_329 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_341 = 0;
		iLocal_350 = 0;
		iLocal_348 = 0;
		iLocal_407 = 0;
		iLocal_410 = 0;
		iLocal_449 = 0;
		iLocal_371 = 0;
		iLocal_349 = 1;
		iLocal_227 = 0;
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_359 = 1;
		}
		else
		{
			iLocal_359 = 0;
		}
		func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		unk_0xFB4AD069EFD0869A(1);
		unk_0xBF98CCF1EA4B13E9(-617f, -2274f, 0f, -406,01f, -2044f, 15f, false, 1);
		iLocal_230 = unk_0x53C562FD2B9E3AB0();
		if (unk_0x3E9CABD07B829173())
		{
			if (!func_24())
			{
				unk_0x3D34B699E4F36612(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1));
			}
			func_21(0, -1, 1);
			unk_0x5380482A432E314E(&iLocal_279);
			unk_0x5380482A432E314E(&iLocal_290);
			unk_0x5380482A432E314E(&iLocal_291);
		}
		if (!unk_0x9F7B586A14398C40())
		{
			unk_0x59C3AC31C7544A28(800);
		}
		if (!unk_0xA6DECE14FC9A8C51(iLocal_299))
		{
			iLocal_299 = func_346(vLocal_308, 0);
		}
		unk_0x8810DC630928B398("TRV4_GAMEPLAY_START");
		vLocal_318 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_348 == 0 && iLocal_362 == 1)
		{
			if (!func_255() || !unk_0x248C9865A96D3EA4())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_348 = 1;
			}
		}
		if (iLocal_371 == 0 && !func_345())
		{
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_308, true) < 800f)
			{
				iLocal_229 = unk_0x63A6486593EC7EC3(0, 2);
				if (iLocal_229 == 0)
				{
					unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x1267474D9A69CA37(0f, 6f, 3);
					iLocal_371 = 1;
				}
				if (iLocal_229 == 1)
				{
					unk_0xBF7C231271431D6C("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x1267474D9A69CA37(0f, 6f, 3);
					iLocal_371 = 1;
				}
			}
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_308, true) < 600f)
		{
			if (!unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				unk_0x6FF834D85E2DD4C6(joaat("cogcabrio"));
				if (unk_0x9A0B2ED5055D3F0B(joaat("cogcabrio")))
				{
					iLocal_278 = unk_0xEA60F3B426BB095B(joaat("cogcabrio"), -428,0226f, -2153,558f, 9,2992f, 90,9098f, true, true, false);
					unk_0xD38F266C132F2897(iLocal_278, false, true, true, true, false, false, 0, false);
					unk_0x1E7A8525FB41AAFE(iLocal_278, 27, 27);
					unk_0x14776E43F90DD454(joaat("cogcabrio"));
					unk_0x6CF99BCE94E6F07C(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				unk_0x6FF834D85E2DD4C6(joaat("ig_molly"));
				if (unk_0x9A0B2ED5055D3F0B(joaat("ig_molly")))
				{
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							iLocal_264 = unk_0x00D1A9572426E8DD(iLocal_278, 26, joaat("ig_molly"), -1, 1, true);
							unk_0x1A0806871323CD16(iLocal_264, true);
							unk_0x5C5D33A1B2711D21(iLocal_264, false);
							unk_0x14776E43F90DD454(joaat("cogcabrio"));
							unk_0x14776E43F90DD454(joaat("ig_molly"));
							unk_0xCE93FCB8A8D8DF0B(iLocal_264, 1862763509);
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				unk_0x68433819717660CF(&iLocal_264);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				unk_0xC91FE17AD7353B70(&iLocal_278);
			}
		}
		if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vLocal_308, true) < 500f)
		{
			if (iLocal_360 == 0)
			{
				iLocal_305 = unk_0xD704C81492296A37("BREAKING_NEWS");
				unk_0x6FF834D85E2DD4C6(joaat("police3"));
				unk_0x6FF834D85E2DD4C6(joaat("maverick"));
				unk_0x6FF834D85E2DD4C6(joaat("bison"));
				unk_0x6FF834D85E2DD4C6(joaat("blista"));
				unk_0x0D9525F20FB71C52(45, "BB_Chase");
				unk_0x0D9525F20FB71C52(35, "BB_Chase");
				unk_0x0D9525F20FB71C52(2, "BB_Chase");
				unk_0x0D9525F20FB71C52(54, "BB_Chase");
				unk_0x0D9525F20FB71C52(55, "BB_Chase");
				unk_0x0D9525F20FB71C52(67, "BB_Chase");
				func_184(1, "BB_Chase");
				unk_0xAAB7D68F04F8C8BA("TRV4_CHASE");
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			unk_0x14776E43F90DD454(joaat("police3"));
			unk_0x14776E43F90DD454(joaat("maverick"));
			unk_0x14776E43F90DD454(joaat("bison"));
			unk_0x14776E43F90DD454(joaat("blista"));
			unk_0x9E6ACDF1473CD846(45, "BB_Chase");
			unk_0x9E6ACDF1473CD846(35, "BB_Chase");
			unk_0x9E6ACDF1473CD846(2, "BB_Chase");
			unk_0x9E6ACDF1473CD846(54, "BB_Chase");
			unk_0x9E6ACDF1473CD846(55, "BB_Chase");
			unk_0x9E6ACDF1473CD846(67, "BB_Chase");
			func_344(1, "BB_Chase");
			unk_0xF4D9AAA3F4BCC684("TRV4_CHASE");
			iLocal_360 = 0;
		}
		if (iLocal_372 == 0)
		{
			if (unk_0x53C562FD2B9E3AB0() > (iLocal_230 + 135000))
			{
				unk_0x84CDD933AFA470D2();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_230 = unk_0x53C562FD2B9E3AB0();
				iLocal_372 = 1;
			}
		}
		if (iLocal_372 == 1)
		{
			if (unk_0x53C562FD2B9E3AB0() > (iLocal_230 + 135000))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0x771D0F8F56A5FE6C("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xE859EF37EA7362D3("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0)
			{
				unk_0x8810DC630928B398("TRV4_CAR_ENTERED");
				iLocal_407 = 1;
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				iLocal_279 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				unk_0xD38F266C132F2897(iLocal_279, false, true, false, false, false, false, 0, false);
				unk_0x695BF4E9032C8B89(iLocal_279);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
		}
		else if (unk_0x6ADD12BF4D6D2587(iLocal_279))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
			{
				if (iLocal_359 == 0)
				{
					unk_0xD38F266C132F2897(iLocal_279, false, false, false, false, false, false, 0, false);
					iLocal_359 = 1;
				}
				if (iLocal_351 == 1)
				{
					unk_0x7E447606AE486B36(iLocal_279);
					iLocal_351 = 0;
				}
				if (unk_0xCB234F3DD6FF9368(iLocal_279, 1))
				{
					unk_0x5380482A432E314E(&iLocal_279);
				}
			}
		}
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (iLocal_410 == 0)
			{
				unk_0x57EA9A1F94FD1E76(156, 1, 0);
				unk_0x497E80F9DC66C571(-244f, -1842,74f, 28,48f);
				unk_0x497E80F9DC66C571(-1,5f, -2014,4f, 11,5f);
				unk_0x497E80F9DC66C571(-498,7f, -2136,5f, 8,4f);
				unk_0xF906FCF8A11CBA9A(1);
				iLocal_410 = 1;
			}
		}
		else if (iLocal_410 == 1)
		{
			unk_0xF906FCF8A11CBA9A(0);
			iLocal_410 = 0;
		}
		if ((iLocal_360 == 1 && unk_0x6ADD12BF4D6D2587(iLocal_278)) && unk_0x6ADD12BF4D6D2587(iLocal_264))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x613CDAB05D8C57C8(iLocal_278, func_343(unk_0xFC1458A37D98B502()), 0))
				{
					func_342();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_278))
				{
					func_342();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_278, 1), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_357 = 0;
					func_342();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -577f, -2051,5f, 7f, 84f, 87,5f, 15f, false, true, 0))
				{
					iLocal_357 = 1;
					func_342();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), -703,5f, -1969,5f, 10f, 53,5f, 62,5f, 10f, false, true, 0))
				{
					unk_0x981B8A90686AD23E();
					unk_0xFB4AD069EFD0869A(0);
					iLocal_357 = 1;
					func_342();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
		}
	}
}

void func_342()//Position - 0x1EFEB
{
	while (((!unk_0x9A0B2ED5055D3F0B(joaat("police3")) || !unk_0x9A0B2ED5055D3F0B(joaat("maverick"))) || !unk_0x9A0B2ED5055D3F0B(joaat("bison"))) || !unk_0x9A0B2ED5055D3F0B(joaat("blista")))
	{
		system::wait(0);
	}
	while (((((!unk_0x0840F461D7BD8859(45, "BB_Chase") || !unk_0x0840F461D7BD8859(35, "BB_Chase")) || !unk_0x0840F461D7BD8859(2, "BB_Chase")) || !unk_0x0840F461D7BD8859(54, "BB_Chase")) || !unk_0x0840F461D7BD8859(55, "BB_Chase")) || !unk_0x0840F461D7BD8859(67, "BB_Chase"))
	{
		system::wait(0);
	}
}

var func_343(int iParam0)//Position - 0x1F097
{
	var uVar0;
	
	unk_0x5AD8564EFD5BEC2E(iParam0, &uVar0, 1);
	return uVar0;
}

void func_344(int iParam0, char* sParam1)//Position - 0x1F0AB
{
	unk_0x9E6ACDF1473CD846(iParam0, sParam1);
}

int func_345()//Position - 0x1F0BB
{
	if (Global_15756 == 4)
	{
		if (unk_0x0DBDCC9C5537E157())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_346(vector3 vParam0, bool bParam1)//Position - 0x1F0E0
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_230(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, bParam1);
	return iVar0;
}

void func_347()//Position - 0x1F10C
{
	if (iLocal_223 == 0)
	{
		iLocal_336 = 1;
		iLocal_416 = 0;
		iLocal_433 = 0;
		iLocal_437 = 0;
		while (iLocal_336 == 1)
		{
			unk_0x48D75120C879E65E("M_LegalTrouble", 0);
			switch (iLocal_225)
			{
				case 0:
					unk_0x393584863A2F304E("sol_3_int", 8);
					if (func_391())
					{
						while (!func_363(61, &uLocal_655, 0, 1, 0, 0, 0))
						{
							system::wait(0);
						}
						iLocal_406 = 0;
						unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
						func_217(1, 1, 1, 0);
						unk_0x4982ECE0928DA13D(unk_0xFC1458A37D98B502(), "Michael", 0, 0, 0);
						if (unk_0x6ADD12BF4D6D2587(Global_89475[0]))
						{
							if (unk_0xB8DE76287EDC4957(Global_89475[0], 0))
							{
								unk_0xDD29FF4BAB8AFF9C(Global_89475[0], true, 1);
								iLocal_279 = Global_89475[0];
							}
						}
						if (unk_0x6ADD12BF4D6D2587(Global_89475[1]))
						{
							if (unk_0xB8DE76287EDC4957(Global_89475[1], 0))
							{
								unk_0xDD29FF4BAB8AFF9C(Global_89475[1], true, 1);
								iLocal_290 = Global_89475[1];
							}
						}
						if (unk_0x6ADD12BF4D6D2587(Global_89475[2]))
						{
							if (unk_0xB8DE76287EDC4957(Global_89475[2], 0))
							{
								unk_0xDD29FF4BAB8AFF9C(Global_89475[2], true, 1);
								iLocal_291 = Global_89475[2];
							}
						}
						if (unk_0x6ADD12BF4D6D2587(Global_89475[3]))
						{
							if (unk_0xB8DE76287EDC4957(Global_89475[3], 0))
							{
								unk_0xDD29FF4BAB8AFF9C(Global_89475[3], true, 1);
								iLocal_292 = Global_89475[3];
							}
						}
						unk_0xD0BFA95B279C174F(0);
						unk_0x0662098C9EF126B4(4);
						func_362();
						if (!unk_0x9F7B586A14398C40())
						{
							unk_0x59C3AC31C7544A28(250);
						}
						iLocal_225++;
					}
					break;
				
				case 1:
					if (iLocal_416 == 0)
					{
						if (unk_0x6C97EEC6339FB45C())
						{
							if (iLocal_437 == 0)
							{
								if (unk_0x6ADD12BF4D6D2587(iLocal_292))
								{
									if (unk_0xB8DE76287EDC4957(iLocal_292, 0))
									{
										if (unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_292)))
										{
											unk_0x39748EEC52404AFA(iLocal_292, 2);
											unk_0xBD8D47FDC6902B2D(iLocal_292, -1048,722f, -506,8387f, 35,0386f, 1, false, 0, 1);
											unk_0x48ED7B2293A96722(iLocal_292, 357,1288f);
											unk_0x6147908AB85766AA(iLocal_292, 1);
											unk_0xACE486395AA1867D(iLocal_292, 1084227584);
											func_352(-1048,722f, -506,8387f, 35,0386f, 357,1288f, 0, 145);
											iLocal_437 = 1;
										}
										if (((unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iLocal_292)) || unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iLocal_292))) || unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iLocal_292))) || unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iLocal_292)))
										{
											if ((((((((unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("bus") && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("pounder")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("packer")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("airbus")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("ambulance")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("barracks")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("barracks2")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("benson")) && unk_0x82FF3DFBC3965CC0(iLocal_292) != joaat("biff"))
											{
												unk_0xBD8D47FDC6902B2D(iLocal_292, -1027,657f, -486,6945f, 35,9571f, 1, false, 0, 1);
												unk_0x48ED7B2293A96722(iLocal_292, 207,7515f);
												unk_0xACE486395AA1867D(iLocal_292, 1084227584);
												func_352(-1027,657f, -486,6945f, 35,9571f, 207,7515f, 0, 145);
												iLocal_437 = 1;
											}
										}
										if ((((!unk_0xF9DDB1C0875FD9E0(unk_0x82FF3DFBC3965CC0(iLocal_292)) && !unk_0xC1514CFCEC68CA4A(unk_0x82FF3DFBC3965CC0(iLocal_292))) && !unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iLocal_292))) && !unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iLocal_292))) && !unk_0x49A1CABC032F7E16(unk_0x82FF3DFBC3965CC0(iLocal_292)))
										{
											unk_0xC91FE17AD7353B70(&iLocal_292);
											iLocal_437 = 1;
										}
									}
								}
							}
							func_350(&uLocal_655, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_416 = 1;
						}
					}
					if (iLocal_406 == 0)
					{
						unk_0x4DE114E3C7F8B7C2("SecGuards", &iLocal_488);
						unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_488);
						unk_0xF96119FCCD4D1889(5, iLocal_488, 1862763509);
						unk_0xBCBC53983EC3B1BA("TREV4", 0);
						iLocal_406 = 1;
					}
					if (iLocal_433 == 0)
					{
						if (unk_0xA8113D347D14630F())
						{
							unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
							unk_0xD9A09B3208B810A7(unk_0xFC1458A37D98B502());
							unk_0x8D51CB86D43D591E(unk_0xFC1458A37D98B502());
							if (unk_0xE57A999388F7FD02() > 120000)
							{
								unk_0x8810DC630928B398("TRV4_START");
								iLocal_433 = 1;
							}
						}
					}
					if (unk_0xBBC745B9F75E27D0("Michael", 0))
					{
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1012,268f, -480,0742f, 38,9757f, 1, false, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), 121,4087f);
						unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 2f, 3000, 0, 1, 0);
						unk_0x9A0C1F836B24E46E(unk_0xFC1458A37D98B502(), 0, 0);
						unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), -530524, false, 0, 0);
					}
					if (unk_0x65E1868AA01313FF(0))
					{
						unk_0xBB9A3C553EECB180(0f);
					}
					if (!unk_0x6C97EEC6339FB45C())
					{
						func_349(61);
						if (iLocal_433 == 0)
						{
							unk_0x8810DC630928B398("TRV4_START_CS_SKIP");
							iLocal_433 = 1;
						}
						unk_0x61635C0A7950C875();
						func_217(0, 1, 1, 0);
						iLocal_225++;
					}
					break;
				
				case 2:
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
					if (unk_0x6ADD12BF4D6D2587(iLocal_279))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_279, 0))
						{
							if (unk_0xCB234F3DD6FF9368(iLocal_279, 1))
							{
								unk_0x5380482A432E314E(&iLocal_279);
							}
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_290))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_290, 0))
						{
							if (unk_0xCB234F3DD6FF9368(iLocal_290, 1))
							{
								unk_0x5380482A432E314E(&iLocal_290);
							}
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_291))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_291, 0))
						{
							if (unk_0xCB234F3DD6FF9368(iLocal_291, 1))
							{
								unk_0x5380482A432E314E(&iLocal_291);
							}
						}
					}
					func_348();
					iLocal_336 = 0;
					iLocal_225 = 0;
					iLocal_223 = 0;
					iLocal_222 = 2;
					break;
			}
			system::wait(0);
		}
	}
}

void func_348()//Position - 0x1F694
{
	Global_55909 = 0;
}

void func_349(int iParam0)//Position - 0x1F6A0
{
	if (Global_89900 != -1)
	{
		if (iParam0 == Global_89900)
		{
			Global_89904 = 1;
			return;
		}
	}
}

void func_350(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1F6C4
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()), 64);
	}
	if (!unk_0xA8113D347D14630F())
	{
		unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x6EC874A9FE87276C(unk_0xFC1458A37D98B502(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x90CE99E954B80CFF(0, 0, 3, 0);
	}
	else
	{
		unk_0x3458550DF8E9B453(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x3E80C2F7BC665259(1);
	}
	else
	{
		if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4))
		{
			if (unk_0xD85097DDDA5447BE(uParam0->f_4))
			{
				unk_0x7849794435F39D49(uParam0->f_4, false);
			}
			unk_0x02934BABFD4CD384(uParam0->f_4, 1);
		}
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), true, 0);
		}
		iVar0 = unk_0xC733212BF9066BDF();
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			unk_0xB3A8974D2C811672(iVar0, true, 0);
		}
		unk_0x751FF861325F816B("TIME_LAPSE");
		if (unk_0x771D0F8F56A5FE6C("TOD_SHIFT_SCENE"))
		{
			unk_0x0B9D04994D02CC2F(uParam0->f_10);
			unk_0x751FF861325F816B("TIME_LAPSE");
			unk_0xE02E32C69260FBB7("TOD_SHIFT_SCENE");
		}
	}
	func_217(bParam1, 1, 0, 0);
	func_351();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x3E9CABD07B829173())
		{
			unk_0x59C3AC31C7544A28(250);
		}
	}
	if (!bParam1)
	{
		if (Global_104555.f_32429.f_4801 != -15)
		{
			Global_104555.f_32429.f_4801 = func_93();
		}
	}
}

void func_351()//Position - 0x1F835
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x4B1D93E1A14A667F(Global_104555.f_14111[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_352(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1F861
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x6ADD12BF4D6D2587(Global_95149.f_4))
	{
		if (unk_0xB8DE76287EDC4957(Global_95149.f_4, 0))
		{
			if (func_361(24) != Global_95149.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_358(unk_0xB3328BA8976B416C(Global_95149.f_4, 1), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_353(Global_95149.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_353(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x1F8DC
{
	struct<60> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x6ADD12BF4D6D2587(Global_69678.f_484[25]) && unk_0xB8DE76287EDC4957(Global_69678.f_484[25], 0))
			{
				if (Global_69678.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x8F1CCD9A61E026D8(iParam0) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("bus")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_357(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_70(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xB3328BA8976B416C(iParam0, 1) };
			fParam2 = unk_0xF0371FE6E2BF9599(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) != joaat("vehicle_gen_controller"))
			{
				Global_70666 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
			}
		}
		func_355(iParam3, &Var0, vParam1, fParam2, func_34(iParam0));
		func_354(iParam3, iParam0, 0);
	}
}

void func_354(int iParam0, int iParam1, int iParam2)//Position - 0x1FA05
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 12) && !unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69678.f_555[0 /*21*/].f_4 != unk_0x82FF3DFBC3965CC0(iParam1))
		{
			return;
		}
	}
	if (Global_70585 != -1 && Global_70585 != iParam0)
	{
		return;
	}
	if (unk_0x6ADD12BF4D6D2587(iParam1))
	{
		if (unk_0xB8DE76287EDC4957(iParam1, 0))
		{
			if (!unk_0x9761C10D57B68069(iParam1))
			{
				unk_0xDD29FF4BAB8AFF9C(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_104555.f_32429.f_4801 = func_93();
			}
			if (iParam1 != Global_69678.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_361(iParam0);
					if ((unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xB8DE76287EDC4957(iVar0, 0)) && iParam1 != iVar0)
					{
						func_142(iVar0, 145);
					}
				}
				Global_70584 = iParam1;
				Global_70585 = iParam0;
				Global_70586 = iParam2;
			}
		}
	}
}

void func_355(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x1FB22
{
	if (func_156(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 10))
		{
			func_356(iParam0);
			func_153(uParam1, &(Global_104555.f_32429.f_69[Global_69678.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 11))
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_104555.f_32429.f_1864[Global_69678.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104555.f_32429.f_1934[Global_69678.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104555.f_32429.f_1958[Global_69678.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_149(iParam0, 1);
		}
	}
}

void func_356(int iParam0)//Position - 0x1FC21
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_69678.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_69678.f_139[iParam0]))
		{
			unk_0xDD29FF4BAB8AFF9C(Global_69678.f_139[iParam0], true, 1);
			unk_0x5380482A432E314E(&(Global_69678.f_139[iParam0]));
			Global_69678.f_139[iParam0] = 0;
		}
		if (unk_0xC80D31E4B587871C(Global_69678.f_555[0 /*21*/].f_9, 13))
		{
			func_149(iParam0, 0);
		}
	}
}

void func_357(int iParam0)//Position - 0x1FC9B
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_356(iParam0);
	func_149(iParam0, 0);
}

int func_358(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1FCC2
{
	int iVar0;
	
	iVar0 = func_359(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827,351f, 157,785f, 68,2143f };
			*uParam3 = 85,1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992,523f, 3813,916f, 31,1008f };
			*uParam3 = 122,1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184,258f, -1496,556f, 3,3895f };
			*uParam3 = 303,2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118,1067f, -1325,906f, 28,3706f };
			*uParam3 = 123,5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18,118f, -1455,126f, 29,5004f };
			*uParam3 = 273,2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1,5947f, 543,4017f, 173,4644f };
			*uParam3 = 310,7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_359(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1FDD8
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88016[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88016[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_360(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xBE3C4023003180FC(vParam0, Global_88016[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_360(int iParam0)//Position - 0x1FE67
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_361(int iParam0)//Position - 0x1FE7F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69678.f_139[iParam0];
}

void func_362()//Position - 0x1FE9B
{
	Global_55909 = 1;
}

bool func_363(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1FEA7
{
	struct<2> Var0;
	
	func_390(iParam0, &Var0);
	func_389(iParam0, &Var0, &(Var0.f_1));
	return func_364(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_364(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1FED5
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_422(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x7FF44F2CA1AA5702(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_387(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x56A9DDE5521F38CB("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0x36853D5037847BF3();
	unk_0x553231E7FC3C570D(7);
	unk_0x72CB9F3FA10C599B(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x02934BABFD4CD384(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
			unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xE43C573FE3C5D758(uParam0->f_4, uParam1->f_14);
			unk_0x7849794435F39D49(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
				}
				iVar0 = unk_0xC733212BF9066BDF();
				if (unk_0x6ADD12BF4D6D2587(iVar0))
				{
					if (!unk_0x9761C10D57B68069(iVar0))
					{
						unk_0xDD29FF4BAB8AFF9C(iVar0, true, 0);
					}
					unk_0xB3A8974D2C811672(iVar0, false, 0);
				}
			}
			fVar1 = unk_0xC1AA9FCA9226A807(uParam0->f_4);
			unk_0x6C56BECCEC2EDFBF();
			unk_0x665CE8DB16170355(uParam1->f_2, fVar1, 0);
			unk_0x2A3035DE2B139D39(uParam1->f_2, fVar1);
			unk_0xF4A2B3ABAFAEF9EE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 1, 1, 0, false);
			}
			func_386(&(uParam0->f_1), 0, 0, 0, unk_0xD3ECC7A5C90D3AA4(), unk_0xEAF455949B108589(), unk_0x93F322D6E98835CC());
			func_350(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_387(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x02934BABFD4CD384(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xE43C573FE3C5D758(uParam0->f_4, uParam1->f_14);
				unk_0x7849794435F39D49(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
					}
					iVar2 = unk_0xC733212BF9066BDF();
					if (unk_0x6ADD12BF4D6D2587(iVar2))
					{
						if (!unk_0x9761C10D57B68069(iVar2))
						{
							unk_0xDD29FF4BAB8AFF9C(iVar2, true, 0);
						}
						unk_0xB3A8974D2C811672(iVar2, false, 0);
					}
				}
				fVar3 = unk_0xC1AA9FCA9226A807(uParam0->f_4);
				unk_0x6C56BECCEC2EDFBF();
				unk_0x665CE8DB16170355(uParam1->f_2, fVar3, 0);
				unk_0x2A3035DE2B139D39(uParam1->f_2, fVar3);
				unk_0xF4A2B3ABAFAEF9EE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 1, 1, 0, false);
				}
				func_386(&(uParam0->f_1), 0, 0, 8, unk_0xD3ECC7A5C90D3AA4(), unk_0xEAF455949B108589(), unk_0x93F322D6E98835CC());
				func_350(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x751FF861325F816B("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x02934BABFD4CD384(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
			unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xE43C573FE3C5D758(uParam0->f_4, uParam1->f_14);
			unk_0x6ED5DDE95A2ACDCB(uParam0->f_4, 3);
			unk_0x7849794435F39D49(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xB3A8974D2C811672(unk_0xFC1458A37D98B502(), false, 0);
				}
				iVar4 = unk_0xC733212BF9066BDF();
				if (unk_0x6ADD12BF4D6D2587(iVar4))
				{
					if (!unk_0x9761C10D57B68069(iVar4))
					{
						unk_0xDD29FF4BAB8AFF9C(iVar4, true, 0);
					}
					unk_0xB3A8974D2C811672(iVar4, false, 0);
				}
			}
			fVar5 = unk_0xC1AA9FCA9226A807(uParam0->f_4);
			unk_0x6C56BECCEC2EDFBF();
			unk_0x665CE8DB16170355(uParam1->f_2, fVar5, 0);
			unk_0x2A3035DE2B139D39(uParam1->f_2, fVar5);
			unk_0xF4A2B3ABAFAEF9EE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 0, 1, 0, false);
			}
			func_386(&(uParam0->f_1), 0, 0, 0, unk_0xD3ECC7A5C90D3AA4(), unk_0xEAF455949B108589(), unk_0x93F322D6E98835CC());
			func_350(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x751FF861325F816B("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (!uParam0->f_5)
		{
			if (func_367(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
					unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xE43C573FE3C5D758(uParam0->f_4, uParam1->f_14);
					unk_0x6ED5DDE95A2ACDCB(uParam0->f_4, 3);
					unk_0x7849794435F39D49(uParam0->f_4, true);
					uParam0->f_9 = unk_0x53C562FD2B9E3AB0();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_367(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x4562AC7F06CD71B3("DEFAULT_SPLINE_CAMERA", false);
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0xD2EF93491605005F(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xE43C573FE3C5D758(uParam0->f_4, uParam1->f_14);
				unk_0x6ED5DDE95A2ACDCB(uParam0->f_4, 3);
				unk_0x7849794435F39D49(uParam0->f_4, true);
				uParam0->f_9 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_365(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x2D0EF1D268F33F25())
				{
					unk_0xAE83ED4C9081AE6F(250);
				}
				if (!unk_0x3E9CABD07B829173())
				{
					unk_0x36853D5037847BF3();
					unk_0x553231E7FC3C570D(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_367(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4) && unk_0xCED06F4C77332FC6(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x53C562FD2B9E3AB0();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_365(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x2D0EF1D268F33F25())
				{
					unk_0xAE83ED4C9081AE6F(250);
				}
				if (!unk_0x3E9CABD07B829173())
				{
					unk_0x36853D5037847BF3();
					unk_0x553231E7FC3C570D(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x247EAA2E93D4A021(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (uParam0->f_9 + 1000 > unk_0x53C562FD2B9E3AB0())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x2068A
{
	if (unk_0x9F7B586A14398C40())
	{
		if ((unk_0x53C562FD2B9E3AB0() - Global_28) > iParam0)
		{
			Global_27 = unk_0x53C562FD2B9E3AB0();
		}
		Global_28 = unk_0x53C562FD2B9E3AB0();
		if ((unk_0x53C562FD2B9E3AB0() - Global_27) > iParam0)
		{
			if (func_366())
			{
				Global_27 = unk_0x53C562FD2B9E3AB0();
				return 1;
			}
		}
	}
	return 0;
}

int func_366()//Position - 0x206D4
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (unk_0xE8C126B7ADBB9D63(0, 18) || unk_0xE8C126B7ADBB9D63(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x20706
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_93();
			iVar5 = func_93();
			func_101(&iVar5, iParam0);
			func_102(&iVar5, iParam1);
			func_103(&iVar5, 0);
			if (func_384(*uParam4, iVar5))
			{
				func_383(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_381(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_374((system::to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x633236B25E1A5942(0,6f);
				unk_0xD55F04EF19C13160(0);
				unk_0x0AD5B4F1F90CE447(0);
			}
			func_373();
			uParam4->f_10 = unk_0xD0CA83418A236CB4();
			unk_0x4AFBCBFDE748D4E0(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			unk_0xE859EF37EA7362D3("TOD_SHIFT_SCENE");
			func_351();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x8EA3C8E091EA5BA4(uParam4->f_4) && unk_0xCED06F4C77332FC6(uParam4->f_4)) || !(fParam5 >= 0,99f || fParam5 == -1f))
			{
				if (unk_0x8EA3C8E091EA5BA4(uParam4->f_4) && unk_0xCED06F4C77332FC6(uParam4->f_4))
				{
					fVar0 = unk_0x08EF81FC0762478A(uParam4->f_4);
				}
				else if (!(fParam5 >= 0,99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0,5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x8B948C59217A295D(sParam2) != 0)
						{
							unk_0xD941F8E30D7231AD(sParam2, fParam8);
						}
						if (unk_0x8B948C59217A295D(sParam3) != 0)
						{
							unk_0x7E674434FF907A39();
							unk_0xC11C778BD74C52F2(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0,99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_383(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x7FF44F2CA1AA5702(func_372(iVar5), func_371(iVar5), func_370(iVar5));
				if (bParam7)
				{
					unk_0x7B2E201667AAB144();
				}
				unk_0x0B9D04994D02CC2F(uParam4->f_10);
				unk_0x751FF861325F816B("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x0AD5B4F1F90CE447(1);
					unk_0xD55F04EF19C13160(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0,1f;
			fVar10 = 0,9f;
			fVar12 = func_369(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = system::round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_383(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x7FF44F2CA1AA5702(func_372(iVar5), func_371(iVar5), func_370(iVar5));
			if (func_368(iVar5) != unk_0xD3ECC7A5C90D3AA4())
			{
				unk_0x4823DE67A74DCD67(func_368(iVar5), func_100(iVar5), func_98(iVar5));
			}
			func_265();
			unk_0x283AC66D956F6B0E(6);
			break;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0x2099B
{
	return system::shift_right(iParam0, 4) & 31;
}

float func_369(float fParam0, float fParam1, float fParam2)//Position - 0x209AD
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_370(int iParam0)//Position - 0x209D4
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_371(int iParam0)//Position - 0x209E7
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_372(int iParam0)//Position - 0x209FA
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_373()//Position - 0x20A0D
{
	int iVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	unk_0xDFC63F22B454FFF5(iVar0, "OFF");
	return 1;
}

void func_374(float fParam0)//Position - 0x20A5B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_380(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5)))
		{
			func_375(&(Global_104555.f_18073.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_380(&(Global_104555.f_18073.f_362[iVar1 /*3*/])))
		{
			func_375(&(Global_104555.f_18073.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x6E21EFDC4146D718();
}

void func_375(int iParam0, float fParam1)//Position - 0x20AEC
{
	if (func_380(iParam0))
	{
		func_376(iParam0, (func_378(iParam0) + fParam1));
	}
}

void func_376(int iParam0, float fParam1)//Position - 0x20B0F
{
	iParam0->f_1 = (func_377(unk_0xC80D31E4B587871C(*iParam0, 4)) - fParam1);
	unk_0x872F1C1F8587CCC7(iParam0, 1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_377(bool bParam0)//Position - 0x20B3D
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x53C562FD2B9E3AB0());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x3A711520F83BAE98())
	{
		iVar2 = unk_0xD1952A425B78FFC0();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x53C562FD2B9E3AB0()) / 1000f);
}

float func_378(var uParam0)//Position - 0x20B95
{
	if (func_380(uParam0))
	{
		if (func_379(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_377(unk_0xC80D31E4B587871C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_379(var uParam0)//Position - 0x20BD4
{
	return unk_0xC80D31E4B587871C(*uParam0, 2);
}

bool func_380(var uParam0)//Position - 0x20BE4
{
	return unk_0xC80D31E4B587871C(*uParam0, 1);
}

void func_381(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x20BF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_384(iParam0, iParam1))
	{
		iVar0 = func_100(iParam1);
		iVar1 = func_98(iParam0);
		iVar2 = (func_98(iParam0) - func_98(iParam1));
		iVar3 = (func_100(iParam0) - func_100(iParam1));
		iVar4 = (func_368(iParam0) - func_368(iParam1));
		iVar5 = (func_372(iParam0) - func_372(iParam1));
		iVar6 = (func_371(iParam0) - func_371(iParam1));
		iVar7 = (func_370(iParam0) - func_370(iParam1));
	}
	else
	{
		iVar0 = func_100(iParam0);
		iVar1 = func_98(iParam1);
		iVar2 = (func_98(iParam1) - func_98(iParam0));
		iVar3 = (func_100(iParam1) - func_100(iParam0));
		iVar4 = (func_368(iParam1) - func_368(iParam0));
		iVar5 = (func_372(iParam1) - func_372(iParam0));
		iVar6 = (func_371(iParam1) - func_371(iParam0));
		iVar7 = (func_370(iParam1) - func_370(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_382(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_382(float fParam0, float fParam1, float fParam2)//Position - 0x20DF5
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x20E37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_98(*iParam0);
	iVar1 = func_100(*iParam0);
	iVar2 = func_368(*iParam0);
	iVar3 = func_372(*iParam0);
	iVar4 = func_371(*iParam0);
	iVar5 = func_370(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_386(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_384(int iParam0, int iParam1)//Position - 0x20FB9
{
	int iVar0;
	int iVar1;
	
	if (!func_385(iParam1) || !func_385(iParam0))
	{
		return 1;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x210C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_370(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_371(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_372(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_98(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_100(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_368(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x211A1
{
	func_103(uParam0, iParam1);
	func_102(uParam0, iParam2);
	func_101(uParam0, iParam3);
	func_95(uParam0, iParam5);
	func_96(uParam0, iParam4);
	func_94(uParam0, iParam6);
}

bool func_387(int iParam0, int iParam1)//Position - 0x211D9
{
	return func_388(unk_0x674C9438180770FE(), iParam0, iParam1);
}

int func_388(int iParam0, int iParam1, int iParam2)//Position - 0x211ED
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_389(int iParam0, var uParam1, var uParam2)//Position - 0x21296
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_83766[iParam0 /*34*/].f_14;
			*uParam2 = Global_83766[iParam0 /*34*/].f_13;
			break;
	}
}

void func_390(int iParam0, var uParam1)//Position - 0x212E8
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58,1338f, -1115,653f, 25,8856f };
			uParam1->f_5 = { 18,4907f, 0f, 3,566f };
			uParam1->f_8 = { -58,3857f, -1115,083f, 26,0824f };
			uParam1->f_11 = { 18,4907f, 0f, 2,0628f };
			uParam1->f_14 = 40,0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830,1f, 171,4f, 71,5f };
			uParam1->f_5 = { 17,5f, 0f, -76f };
			uParam1->f_8 = { -829,5f, 171,6f, 71,7f };
			uParam1->f_11 = { 17,9f, 0f, -75,4f };
			uParam1->f_14 = 47,9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776,5807f, 181,1033f, 72,2059f };
			uParam1->f_5 = { 11,8135f, 0f, 95,7275f };
			uParam1->f_8 = { -776,8288f, 181,0926f, 72,2551f };
			uParam1->f_11 = { 11,8134f, 0f, 95,7284f };
			uParam1->f_14 = 46,7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_104())
			{
				case 0:
					uParam1->f_2 = { -846,3013f, 186,777f, 72,0316f };
					uParam1->f_5 = { 4,202026f, 0f, -111,2882f };
					uParam1->f_8 = { -846,1907f, 186,7339f, 72,0403f };
					uParam1->f_11 = { 4,202f, 0f, -111,2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846,3013f, 186,777f, 72,0316f };
					uParam1->f_5 = { 4,202026f, 0f, -111,2882f };
					uParam1->f_8 = { -846,1907f, 186,7339f, 72,0403f };
					uParam1->f_11 = { 4,202f, 0f, -111,2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8,0845f, -1450,367f, 36,8585f };
			uParam1->f_5 = { 13,3776f, 0f, 4,513f };
			uParam1->f_8 = { -9,0519f, -1450,444f, 36,8585f };
			uParam1->f_11 = { 13,3776f, 0f, 4,513f };
			uParam1->f_14 = 39,9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576,132f, 5160,888f, 24,1175f };
			uParam1->f_5 = { 4,8389f, -0,011f, 92,1057f };
			uParam1->f_8 = { -1576,132f, 5160,888f, 24,1175f };
			uParam1->f_11 = { 4,8389f, -0,011f, 92,1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7,205f, -1471,656f, 31,1614f };
			uParam1->f_5 = { 9,3776f, 0f, 11,4737f };
			uParam1->f_8 = { -7,2909f, -1471,232f, 31,2546f };
			uParam1->f_11 = { 9,3776f, 0f, 11,4737f };
			uParam1->f_14 = 38,5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060,658f, -464,0052f, 44,994f };
			uParam1->f_5 = { 5,6441f, 0f, -138,7474f };
			uParam1->f_8 = { -1060,658f, -464,0052f, 44,994f };
			uParam1->f_11 = { 4,8242f, 0f, -118,3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406,112f, 3590,231f, 34,4113f };
			uParam1->f_5 = { 17,5005f, 0f, 55,9579f };
			uParam1->f_8 = { 1405,673f, 3590,525f, 34,4113f };
			uParam1->f_11 = { 18,4979f, 0f, 55,9579f };
			uParam1->f_14 = 56,3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739,1493f, -990,3961f, 29,85194f };
			uParam1->f_5 = { 17,19917f, 0f, 44,21184f };
			uParam1->f_8 = { 738,4197f, -989,6462f, 30,17581f };
			uParam1->f_11 = { 17,19917f, 0f, 44,21184f };
			uParam1->f_14 = 47,56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503,9f, -288,8f, 112,8f };
			uParam1->f_5 = { -0,2f, 0f, -169,6f };
			uParam1->f_8 = { 2503,9f, -288,8f, 112,8f };
			uParam1->f_11 = { -0,2f, 0f, -169,6f };
			uParam1->f_14 = 47,6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458,5666f, 1010,097f, 316,3736f };
			uParam1->f_5 = { 14,47186f, 0f, -18,28884f };
			uParam1->f_8 = { -457,3f, 1011,6f, 316,9f };
			uParam1->f_11 = { 14,5f, 0f, -18,5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723,9982f, -155,7184f, 38,12362f };
			uParam1->f_5 = { 30,12048f, 0f, -99,11243f };
			uParam1->f_8 = { -722,4385f, -155,7817f, 37,4443f };
			uParam1->f_11 = { 2,0429f, 0f, -101,5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_104())
			{
				case 2:
					uParam1->f_2 = { 416,3221f, -960,2586f, 30,6696f };
					uParam1->f_5 = { 21,5747f, 0f, -135,2969f };
					uParam1->f_8 = { 416,8894f, -960,832f, 30,9887f };
					uParam1->f_11 = { 21,9916f, 0f, -135,2969f };
					uParam1->f_14 = 47,1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393,363f, -2052,581f, 65,4054f };
					uParam1->f_5 = { 2,5107f, 0f, 51,1167f };
					uParam1->f_8 = { 1393,456f, -2052,656f, 68,146f };
					uParam1->f_11 = { 2,5107f, 0f, 51,1167f };
					uParam1->f_14 = 35,9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59,3f, -751,7f, 46,8f };
			uParam1->f_5 = { 61,9f, 0f, -63,8f };
			uParam1->f_8 = { 59,3f, -751,7f, 46,8f };
			uParam1->f_11 = { 61,9f, 0f, -63,8f };
			uParam1->f_14 = 46,6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841,93f, 4464,658f, 2,6587f };
			uParam1->f_5 = { 8,4859f, 0,0024f, 143,0775f };
			uParam1->f_8 = { 3842,54f, 4464,184f, 2,6587f };
			uParam1->f_11 = { 8,4859f, 0,0024f, 142,0089f };
			uParam1->f_14 = 34,1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193,1f, -1525,3f, 4,4f };
			uParam1->f_5 = { 9,4f, 0f, -78,8f };
			uParam1->f_8 = { -1192,2f, -1525,1f, 4,4f };
			uParam1->f_11 = { 9,4f, 0f, -78,5f };
			uParam1->f_14 = 30,4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24,2f, -2417,6f, 7,8f };
			uParam1->f_5 = { 10,4f, 0f, 80,4f };
			uParam1->f_8 = { -23,8f, -2414,8f, 7,8f };
			uParam1->f_11 = { 10,4f, 0f, 81,4f };
			uParam1->f_14 = 48,1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146,9733f, -1310,644f, 30,85177f };
			uParam1->f_5 = { 16,26885f, -2,1E-05f, 45,00475f };
			uParam1->f_8 = { 146,9733f, -1310,644f, 30,85177f };
			uParam1->f_11 = { 16,26885f, -2,1E-05f, 45,00475f };
			uParam1->f_14 = 39,4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998,215f, 3816,983f, 33,0117f };
			uParam1->f_5 = { 5,9088f, 0f, 89,1989f };
			uParam1->f_8 = { 1997,154f, 3817,004f, 33,1215f };
			uParam1->f_11 = { 5,9088f, 0f, 89,1989f };
			uParam1->f_14 = 36,8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_104() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363,9f, 55,5f };
			uParam1->f_5 = { 0,5f, 0f, -123,8f };
			uParam1->f_8 = { 1575,2f, 3364,4f, 49,2f };
			uParam1->f_11 = { -4,3f, 0f, -124,1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378,8f, 42,8f };
			uParam1->f_5 = { -2,4f, 0f, -126,3f };
			uParam1->f_8 = { 1567,6f, 3376,9f, 45f };
			uParam1->f_11 = { 1,6f, 0f, -124,6f };
			uParam1->f_14 = 34,7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339,573f, -2550,873f, 56,28254f };
			uParam1->f_5 = { -2,348373f, -2,1E-05f, 159,736f };
			uParam1->f_8 = { 1334,491f, -2549,345f, 47,69109f };
			uParam1->f_11 = { 2,789334f, -2,1E-05f, -156,4397f };
			uParam1->f_14 = 25,66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383,651f, 2624,787f, 46,9527f };
			uParam1->f_5 = { 14,6191f, 0f, 64,366f };
			uParam1->f_8 = { 2383,929f, 2622,802f, 47,2707f };
			uParam1->f_11 = { 33,17714f, -0,13073f, 12,31436f };
			uParam1->f_14 = 35,31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755,519f, -1474,981f, 126,1743f };
			uParam1->f_5 = { 4,5341f, 0f, 89,6405f };
			uParam1->f_8 = { 1772,26f, -1475,085f, 125,9465f };
			uParam1->f_11 = { 5,8327f, 0f, 89,6405f };
			uParam1->f_14 = 32,7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514,257f, -947,7281f, 15,0253f };
			uParam1->f_5 = { -3,5807f, -0,0001f, -46,3209f };
			uParam1->f_8 = { -1512,601f, -949,2796f, 14,8827f };
			uParam1->f_11 = { -4,7682f, -0,0001f, -34,1393f };
			uParam1->f_14 = 29,9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698,2578f, -934,4238f, 31,6909f };
			uParam1->f_5 = { -22,0467f, 0f, 32,1888f };
			uParam1->f_8 = { -697,8695f, -935,0406f, 31,9861f };
			uParam1->f_11 = { -20,6093f, 0f, 32,1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221,8613f, -830,6434f, 45,3154f };
			uParam1->f_5 = { -13,9263f, 0f, 140,7092f };
			uParam1->f_8 = { 227,5233f, -832,8285f, 45,3154f };
			uParam1->f_11 = { -13,9263f, 0f, 140,7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23,3747f, -120,3161f, 64,139f };
			uParam1->f_5 = { -5,7232f, 0f, 5,1015f };
			uParam1->f_8 = { -22,5824f, -122,52f, 64,139f };
			uParam1->f_11 = { -5,7232f, 0f, 6,6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803,5977f, -1075,869f, 37,1981f };
			uParam1->f_5 = { -10,7685f, 0f, -38,1705f };
			uParam1->f_8 = { 803,5977f, -1075,869f, 32,7981f };
			uParam1->f_11 = { -10,7685f, 0f, -38,1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x8B948C59217A295D("RAIN") == unk_0x7C6D975B8F662D79())
	{
		if (unk_0xAB019B170BF1309C(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xAB019B170BF1309C(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_391()//Position - 0x221D1
{
	bool bVar0;
	
	bVar0 = unk_0xA3DDC3767EC660CD();
	if (!Global_70855)
	{
		if (!bVar0)
		{
			Global_70855 = 1;
		}
	}
	return bVar0;
}

void func_392()//Position - 0x221F4
{
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	if (!func_23())
	{
		if (func_422(0))
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x6FF834D85E2DD4C6(joaat("rapidgt"));
			unk_0x6FF834D85E2DD4C6(joaat("surano"));
			unk_0x6FF834D85E2DD4C6(joaat("carbonizzare"));
			while ((!unk_0x9A0B2ED5055D3F0B(joaat("rapidgt")) || !unk_0x9A0B2ED5055D3F0B(joaat("surano"))) || !unk_0x9A0B2ED5055D3F0B(joaat("carbonizzare")))
			{
				system::wait(0);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_279))
			{
				unk_0x247EAA2E93D4A021(vLocal_306, 5f, 1, 0, 0, false);
				iLocal_279 = unk_0xEA60F3B426BB095B(joaat("rapidgt"), vLocal_306, fLocal_319, true, true, false);
				unk_0x1E7A8525FB41AAFE(iLocal_279, 112, 112);
				unk_0xE01CE1EBCD7EE551(iLocal_279, 3000, 0);
				unk_0x9980244E5DAEFED4(iLocal_279, true);
				unk_0x14776E43F90DD454(joaat("rapidgt"));
				unk_0x2E4932E63763FE26(joaat("rapidgt"), true);
				unk_0xFBA991D3A851E195(iLocal_279, true);
				unk_0x438D30A195B65156(iLocal_279, true);
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_290))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("surano")))
				{
					unk_0x247EAA2E93D4A021(-1037,398f, -491,6539f, 35,5545f, 5f, 1, 0, 0, false);
					iLocal_290 = unk_0xEA60F3B426BB095B(joaat("surano"), -1037,398f, -491,6539f, 35,5545f, 208,889f, true, true, false);
					unk_0x1E7A8525FB41AAFE(iLocal_290, 0, 0);
					unk_0xE01CE1EBCD7EE551(iLocal_290, 3000, 0);
					unk_0x9980244E5DAEFED4(iLocal_290, true);
					unk_0x14776E43F90DD454(joaat("surano"));
					unk_0x2E4932E63763FE26(joaat("surano"), true);
					unk_0x438D30A195B65156(iLocal_290, true);
				}
			}
			if (!unk_0x6ADD12BF4D6D2587(iLocal_291))
			{
				if (unk_0x9A0B2ED5055D3F0B(joaat("carbonizzare")))
				{
					unk_0x247EAA2E93D4A021(vLocal_306, 5f, 1, 0, 0, false);
					iLocal_291 = unk_0xEA60F3B426BB095B(joaat("carbonizzare"), -1033,938f, -489,7475f, 35,8323f, 207,1758f, true, true, false);
					unk_0x1E7A8525FB41AAFE(iLocal_291, 89, 89);
					unk_0xE01CE1EBCD7EE551(iLocal_291, 3000, 0);
					unk_0x9980244E5DAEFED4(iLocal_291, true);
					unk_0x14776E43F90DD454(joaat("carbonizzare"));
					unk_0x2E4932E63763FE26(joaat("carbonizzare"), true);
					unk_0x438D30A195B65156(iLocal_291, true);
				}
			}
		}
		iLocal_223 = 0;
		iLocal_225 = 0;
		iLocal_343 = 0;
		iLocal_222 = 1;
	}
	else
	{
		unk_0x4DE114E3C7F8B7C2("SecGuards", &iLocal_488);
		unk_0xF96119FCCD4D1889(5, 1862763509, iLocal_488);
		unk_0xF96119FCCD4D1889(5, iLocal_488, 1862763509);
		if (Global_87155 == 1)
		{
			if (func_395() == 0)
			{
				func_394(vLocal_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_395() == 1)
			{
				func_394(-935,4413f, -2928,061f, 12,9451f, 178,466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_395() == 2)
			{
				func_394(-937,5466f, -2968,713f, 12,9451f, 111,5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
			if (func_395() == 3)
			{
				func_394(-920,0547f, -2744,661f, 12,9322f, 357,1374f, 1, 0);
				func_393();
			}
		}
		else
		{
			if (func_395() == 0)
			{
				func_394(-1019,579f, -484,872f, 36,0795f, 93,7701f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_START_RT");
				iLocal_222 = 2;
			}
			if (func_395() == 1)
			{
				func_394(vLocal_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_395() == 2)
			{
				func_394(-935,4413f, -2928,061f, 12,9451f, 178,466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_395() == 3)
			{
				func_394(-937,5466f, -2968,713f, 12,9451f, 111,5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x8810DC630928B398("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
		}
		unk_0xBCBC53983EC3B1BA("TREV4", 0);
		while (!unk_0x9F0887BCBFCF3C2F(0))
		{
			system::wait(0);
		}
	}
}

void func_393()//Position - 0x225E1
{
	if (iLocal_223 == 0)
	{
		unk_0x247EAA2E93D4A021(-920,0547f, -2744,662f, 12,8434f, 20f, 1, 0, 0, false);
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		iLocal_223++;
	}
	if (iLocal_223 == 1)
	{
		unk_0x3D34B699E4F36612(-920,0547f, -2744,662f, 12,8434f);
		if (!unk_0x9F7B586A14398C40())
		{
			func_21(0, -1, 1);
			unk_0x59C3AC31C7544A28(800);
		}
		func_6();
	}
}

void func_394(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x2265B
{
	if (func_23())
	{
		unk_0x941BE77305BB5695(0);
		unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		unk_0x6ACDC20166AA3FAC(1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
		}
		Global_92829 = { vParam0 };
		Global_92832 = fParam1;
		Global_92828 = 1;
		if (iParam2 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 14);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 24);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 24);
		}
		func_22(1);
	}
}

int func_395()//Position - 0x226F0
{
	if (!Global_92833 == 10 && !Global_92833 == 9)
	{
		return 0;
	}
	return Global_92833.f_2;
}

void func_396()//Position - 0x2271A
{
	if (iLocal_435[0] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_436[0] == 0)
	{
		if (iLocal_435[0] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[7]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[7], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
			}
			else
			{
				iLocal_436[0] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_436[1] == 0)
	{
		if (iLocal_435[1] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[8]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
			}
			else
			{
				iLocal_436[1] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[11]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[11], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_436[2] == 0)
	{
		if (iLocal_435[2] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[11]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[11], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
			}
			else
			{
				iLocal_436[2] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[12]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[12], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_436[3] == 0)
	{
		if (iLocal_435[3] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[12]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[12], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
			}
			else
			{
				iLocal_436[3] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[13]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[13], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_436[4] == 0)
	{
		if (iLocal_435[4] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[13]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[13], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
			}
			else
			{
				iLocal_436[4] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[14]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[14], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_436[5] == 0)
	{
		if (iLocal_435[5] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[14]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[14], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
			}
			else
			{
				iLocal_436[5] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_204[15]))
		{
			if (unk_0xB8DE76287EDC4957(iLocal_204[15], 0))
			{
				unk_0x6CF99BCE94E6F07C(iLocal_204[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[6] = 1;
			}
		}
	}
	if (iLocal_436[6] == 0)
	{
		if (iLocal_435[6] == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_204[15]))
			{
				if (!unk_0xB8DE76287EDC4957(iLocal_204[15], 0))
				{
					unk_0xF0037A481D043FE1(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0xF0037A481D043FE1(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
			}
			else
			{
				iLocal_436[6] = 1;
			}
		}
	}
}

void func_397()//Position - 0x22BC1
{
	switch (iLocal_222)
	{
		case 2:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_362 = 0;
					iLocal_449 = 0;
					iLocal_472 = 0;
					iLocal_473 = 0;
					func_17(&uLocal_490, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_362 == 0)
					{
						if (unk_0xBE3C4023003180FC(vLocal_318, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true) > 2f)
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_449 == 0)
					{
						if (unk_0xBE3C4023003180FC(vLocal_318, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), true) > 100f)
						{
							if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
							{
								if (func_400(&uLocal_490, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x1267474D9A69CA37(4f, 10f, 4);
									iLocal_449 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0 && iLocal_449 == 1)
					{
						if (func_399())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_472 = 1;
								}
							}
						}
					}
					if (iLocal_473 == 0)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (func_16(unk_0xFC1458A37D98B502(), iLocal_278, 1) < 200f && unk_0x841ED61760A7D07B(iLocal_278))
								{
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x1267474D9A69CA37(3f, 12f, 4);
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_223 >= 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_450[0] = 0;
					iLocal_450[1] = 0;
					iLocal_450[2] = 0;
					iLocal_450[3] = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_471 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_478 = 0;
					iLocal_241 = unk_0x53C562FD2B9E3AB0();
					func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "Michael", 0, 1);
					func_17(&uLocal_490, 4, 0, "SOL3COP", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_278))
						{
							if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
							{
								if (func_16(unk_0xFC1458A37D98B502(), iLocal_278, 1) < 200f && unk_0x841ED61760A7D07B(iLocal_278))
								{
									if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x6ADD12BF4D6D2587(iLocal_278))
					{
						if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
						{
							if (unk_0x8DDE799D31A3D099(iLocal_278))
							{
								if (iLocal_450[0] == 0)
								{
									if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0) || unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 7000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 28000f)
										{
											if (!func_255())
											{
												if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_450[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[1] == 0)
								{
									if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0) || unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 28000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 34500f)
										{
											if (!func_255())
											{
												if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x1267474D9A69CA37(4f, 4f, 4);
														iLocal_450[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[2] == 0)
								{
									if (unk_0xB8DE76287EDC4957(iLocal_204[7], 0) || unk_0xB8DE76287EDC4957(iLocal_204[8], 0))
									{
										if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 36000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 41000f)
										{
											if (!func_255())
											{
												if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x1267474D9A69CA37(2f, 4f, 4);
														iLocal_450[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 41000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 43500f)
									{
										if (unk_0x6ADD12BF4D6D2587(iLocal_283) && unk_0x841ED61760A7D07B(iLocal_283))
										{
											if (!func_255())
											{
												if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x1267474D9A69CA37(4f, 4f, 4);
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 50509f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 50872f)
									{
										if (unk_0x6ADD12BF4D6D2587(iLocal_283) && unk_0x841ED61760A7D07B(iLocal_283))
										{
											if (!func_255())
											{
												if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_471 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[3] == 0)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 58000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 68000f)
									{
										if (!func_255())
										{
											if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_450[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0 && iLocal_450[3] == 1)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 76000f)
									{
										if (!func_255())
										{
											if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_474 = 1;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 80000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 82000f)
									{
										if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
										{
											if (unk_0xB8DE76287EDC4957(iLocal_280[0], 0))
											{
												if (unk_0x841ED61760A7D07B(iLocal_280[0]))
												{
													if (!func_255())
													{
														if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
														{
															if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x1267474D9A69CA37(3f, 10f, 4);
																iLocal_469 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0)
								{
									if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 82100f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 83500f)
									{
										if (unk_0x6ADD12BF4D6D2587(iLocal_204[11]))
										{
											if (unk_0x841ED61760A7D07B(iLocal_204[11]))
											{
												if (!func_255())
												{
													if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
													{
														if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x6ADD12BF4D6D2587(iLocal_204[12]))
										{
											if (unk_0x841ED61760A7D07B(iLocal_204[12]))
											{
												if (!func_255())
												{
													if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
													{
														if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0)
								{
									if ((unk_0x9DC40A4E8D2F7969(iLocal_278) > 101891f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 105000f) && unk_0x841ED61760A7D07B(iLocal_278))
									{
										if (!func_255())
										{
											if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x1267474D9A69CA37(3f, 10f, 4);
													iLocal_478 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x9DC40A4E8D2F7969(iLocal_278) > 105500f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 119000f) && unk_0x53C562FD2B9E3AB0() > iLocal_241 + 7000) && iLocal_477 == 0)
								{
									if (!func_255())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x53C562FD2B9E3AB0();
												iLocal_477 = 1;
											}
										}
									}
								}
								if (iLocal_476 == 0 && iLocal_477 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_476 = 1;
											}
										}
									}
								}
								if (((unk_0x9DC40A4E8D2F7969(iLocal_278) > 105500f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 119000f) && unk_0x53C562FD2B9E3AB0() > iLocal_241 + 7000) && iLocal_476 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x53C562FD2B9E3AB0();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_452 = 0;
					iLocal_479 = 0;
					iLocal_485 = 0;
					iLocal_480 = 1;
					iLocal_246 = unk_0x53C562FD2B9E3AB0();
					func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "Michael", 0, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_485 == 0)
					{
						unk_0xE6BF9A487FAD5757("T1M4_BBAA", "AIRPORTANNO", -939,5f, -2932,2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 1;
					}
					if (iLocal_480 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (!func_255())
							{
								if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1267474D9A69CA37(4f, 6f, 4);
										iLocal_242 = unk_0x53C562FD2B9E3AB0();
										iLocal_452 = 1;
										iLocal_479 = 1;
										iLocal_480 = 0;
									}
								}
							}
						}
						if (unk_0x53C562FD2B9E3AB0() > iLocal_242 + 5000)
						{
							if (!func_255())
							{
								if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1267474D9A69CA37(4f, 6f, 4);
										iLocal_242 = unk_0x53C562FD2B9E3AB0();
									}
								}
							}
						}
					}
					if (iLocal_479 == 1 && unk_0x53C562FD2B9E3AB0() > iLocal_246 + 4000)
					{
						if (!func_255())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x1267474D9A69CA37(4f, 6f, 4);
									iLocal_246 = unk_0x53C562FD2B9E3AB0();
									iLocal_480 = 1;
									iLocal_479 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
					iLocal_481 = 0;
					iLocal_482 = 0;
					func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "Michael", 0, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_453 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 1 && iLocal_455 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_455 = 1;
								}
							}
						}
					}
					if (iLocal_454 == 0)
					{
						if (unk_0x6ADD12BF4D6D2587(iLocal_264))
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
							{
								if (unk_0xD56F740235B1E8F0(iLocal_251))
								{
									if (unk_0x463C4747B41E35A3(iLocal_251) > 0,65f && unk_0x463C4747B41E35A3(iLocal_251) < 0,835f)
									{
										if (!func_255())
										{
											if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x1267474D9A69CA37(8f, 8f, 4);
													iLocal_454 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0)
					{
						if (!unk_0x6ADD12BF4D6D2587(iLocal_264))
						{
							if (!func_255())
							{
								if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_481 = 1;
									}
								}
							}
						}
					}
					if (iLocal_481 == 1 && iLocal_482 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_482 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_483 = 0;
					iLocal_247 = unk_0x53C562FD2B9E3AB0();
					func_17(&uLocal_490, 0, unk_0xFC1458A37D98B502(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_483 == 0)
					{
						if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iLocal_277 = func_398(unk_0xFC1458A37D98B502(), -1533126372, 0, 0, 28);
							if (unk_0x6ADD12BF4D6D2587(iLocal_277))
							{
								if (func_16(unk_0xFC1458A37D98B502(), iLocal_277, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_483 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 1 && unk_0x53C562FD2B9E3AB0() > iLocal_247 + 5000)
					{
						if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							iLocal_277 = func_398(unk_0xFC1458A37D98B502(), -1533126372, 0, 0, 28);
							if (unk_0x6ADD12BF4D6D2587(iLocal_277))
							{
								if (func_16(unk_0xFC1458A37D98B502(), iLocal_277, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x23F2F89E3D1CB7C4() || !unk_0x248C9865A96D3EA4())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_247 = unk_0x53C562FD2B9E3AB0();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x239D7
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		unk_0xD1A659E6867D8FF6(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x6ADD12BF4D6D2587(iVar0[iVar1]))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iVar0[iVar1]))
				{
					if (unk_0x1479B36DFB6174A5(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x841ED61760A7D07B(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x6ADD12BF4D6D2587(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x3AB6A1A9084FB0A4(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x1479B36DFB6174A5(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x841ED61760A7D07B(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_399()//Position - 0x23ADE
{
	if (Global_15756 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_400(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x23AF5
{
	func_254(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_247(sParam3, iParam4, bParam7);
}

void func_401()//Position - 0x23B43
{
	if (((iLocal_222 == 4 || iLocal_222 == 5) || iLocal_222 == 8) || iLocal_222 == 6)
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_402(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2, 200, 0))
			{
				unk_0x464D8E07EBE7360A(unk_0x9EB17624F44A8DA4());
				unk_0x2A20836DCD45A0B0(unk_0x9EB17624F44A8DA4());
			}
		}
	}
	if (iLocal_441 == 0)
	{
		if (iLocal_222 == 4)
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (func_402(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2, 200, 0))
				{
					unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 3, 0);
					unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
					iLocal_441 = 1;
				}
			}
		}
	}
}

int func_402(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x23BEA
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			vVar1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			vVar0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			vVar1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			vVar1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			vVar1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			vVar1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			vVar1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			vVar0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			vVar1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			vVar1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			vVar0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			vVar1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			vVar0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			vVar1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			vVar1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			vVar1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			vVar1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			vVar0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			vVar1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			vVar1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			vVar0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			vVar1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			vVar1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			vVar1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			vVar1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			vVar1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			vVar0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			vVar1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			vVar0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			vVar1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			vVar0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			vVar1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			vVar1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			vVar1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			vVar0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			vVar1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			vVar1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 127,25f;
			vVar0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			vVar1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			vVar1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			vVar0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			vVar1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			vVar1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			vVar1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			vVar0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			vVar1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			vVar0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			vVar1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			vVar0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			vVar1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			vVar0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			vVar1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			vVar0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			vVar1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			vVar0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			vVar1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			vVar0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			vVar1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			vVar1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			vVar1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			vVar0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			vVar1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			vVar1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			vVar1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			vVar1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			vVar1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			vVar0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			vVar1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			vVar1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			vVar1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			vVar1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			vVar1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			vVar1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			vVar0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			vVar1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			vVar0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			vVar1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			vVar0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			vVar1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			vVar0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			vVar1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x8AE9E5E8F6DC40C9(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_403()//Position - 0x2493F
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_279 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
}

void func_404()//Position - 0x2496B
{
	if (iLocal_349 == 1)
	{
		if (iLocal_222 == 4)
		{
			if (iLocal_224 > 1 && iLocal_424 == 0)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -828,6987f, -2938,073f, 12,21745f, -807,6911f, -2905,148f, 16,35626f, 28f, 0, true, 0))
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 6)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_295))
			{
				if (unk_0xA6DECE14FC9A8C51(iLocal_300))
				{
					if (func_16(unk_0xFC1458A37D98B502(), iLocal_295, 1) > 100f)
					{
						func_233("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_224 == 2)
			{
				if (unk_0x53C562FD2B9E3AB0() > iLocal_236 + 7000 && iLocal_439 == 0)
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_278))
			{
				if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
				{
					if (unk_0x8DDE799D31A3D099(iLocal_278))
					{
						if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 62000f && unk_0x9DC40A4E8D2F7969(iLocal_278) < 77000f)
						{
							if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -1219f, -2570f, 13f, true) < 210f)
							{
								if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
								{
									if (unk_0xF0371FE6E2BF9599(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) < 200f && unk_0xF0371FE6E2BF9599(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) > 125f)
									{
										if (iLocal_438 == 0)
										{
											iLocal_239 = unk_0x53C562FD2B9E3AB0();
											iLocal_438 = 1;
										}
										if (iLocal_438 == 1 && unk_0x53C562FD2B9E3AB0() > iLocal_239 + 4000)
										{
											func_233("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 1)
									{
										iLocal_438 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 5 || iLocal_222 == 6)
		{
			if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -928,9f, -2935f, 13f, true) < 5f && !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502()))
			{
				if (func_402(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 2, 200, 0))
				{
					func_233("TRV4_FAIL2");
				}
				else if (!func_208("TRV4_HELP3"))
				{
					func_407("TRV4_HELP3");
				}
			}
			else if (func_208("TRV4_HELP3"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_278))
		{
			if (!unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_264))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
					{
						unk_0x1A0806871323CD16(iLocal_264, false);
						unk_0xE01CE1EBCD7EE551(iLocal_264, 0, 0);
					}
				}
			}
		}
		if (iLocal_358 == 1)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_264))
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					func_233("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_350 == 1)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
				{
					if (func_13(unk_0xFC1458A37D98B502(), iLocal_264) > 300f)
					{
						if (iLocal_404 == 1)
						{
							unk_0x84CDD933AFA470D2();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_404 = 0;
						}
					}
					else if (iLocal_404 == 0)
					{
						iLocal_404 = 1;
					}
					if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
					{
						if (unk_0x8DDE799D31A3D099(iLocal_278))
						{
							if (unk_0x9DC40A4E8D2F7969(iLocal_278) < 40000f)
							{
								if (func_13(unk_0xFC1458A37D98B502(), iLocal_264) > 400f)
								{
									func_233("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0xFC1458A37D98B502(), iLocal_264) > 350f)
							{
								func_233("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 3)
			{
				if (iLocal_425 == 1)
				{
					if (unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), -934,4f, -2927,2f, 13,2f, true) > 25f || unk_0x53C562FD2B9E3AB0() > iLocal_237 + 12000)
					{
						func_233("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0x574DEF26BB3B7DF0(unk_0xFC1458A37D98B502()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0xB8DE76287EDC4957(iLocal_278, 0))
			{
				if (unk_0x8DDE799D31A3D099(iLocal_278))
				{
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 111509f)
					{
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1070,838f, -2942,241f, 12,19534f, -1009,038f, -2977,609f, 17,44443f, 89,5f, 0, true, 0))
						{
							func_233("TRV4_FAIL1");
						}
					}
					if (unk_0x9DC40A4E8D2F7969(iLocal_278) > 122000f)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0xF69AD934E7664A7C(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
							{
								if (iLocal_440 == 0)
								{
									iLocal_240 = unk_0x53C562FD2B9E3AB0();
									iLocal_440 = 1;
								}
								if (iLocal_440 == 1)
								{
									if (unk_0x53C562FD2B9E3AB0() > iLocal_240 + 4000)
									{
										func_233("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 2)
		{
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -803,4108f, -2173,417f, -1,911488f, -605,6846f, -2358,229f, 27,32842f, 250f, 0, true, 0))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 1)
		{
			if (func_406())
			{
				func_405();
			}
		}
	}
}

void func_405()//Position - 0x24E7A
{
	func_413(unk_0xFC1458A37D98B502(), 0);
	func_409();
}

int func_406()//Position - 0x24E8F
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92833 == 7 || Global_92833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_407(char* sParam0)//Position - 0x24EBC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, true, -1);
}

void func_408(bool bParam0)//Position - 0x24ED2
{
	if (bParam0)
	{
		StringCopy(&Global_103611, unk_0x436287B7DB306165(), 24);
		Global_103605 = 1;
	}
	else
	{
		StringCopy(&Global_103611, "NULL", 24);
		Global_103605 = 0;
	}
}

void func_409()//Position - 0x24EFE
{
	func_415(24, 1);
	unk_0x1B5A255BF0D63005("PoliceScannerDisabled", 0);
	unk_0x4C15495E88D71C61(-1042,5f, -500f, 41f, -1019,5f, -475f, 34f, true, 1);
	func_410();
	func_207(&uLocal_28, 0, 0);
	unk_0xC234848D21B6064E(0);
	unk_0xFB4AD069EFD0869A(0);
	unk_0x77A208B3324C04F2();
	if (unk_0x6ADD12BF4D6D2587(iLocal_287))
	{
		unk_0xC91FE17AD7353B70(&iLocal_287);
	}
	func_408(0);
	if (unk_0xA12FA3F7428EE798(iLocal_263))
	{
		unk_0x7DC528E86B55C67E(iLocal_263);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_264))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_264))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_264, true);
		}
		unk_0x486F346ADFE56674(&iLocal_264);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_266))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_266))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_266, true);
		}
		unk_0x486F346ADFE56674(&iLocal_266);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_269))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_269))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_269, true);
		}
		unk_0x486F346ADFE56674(&iLocal_269);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_270))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_270))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_270, true);
		}
		unk_0x486F346ADFE56674(&iLocal_270);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_271))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_271))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_271, true);
		}
		unk_0x486F346ADFE56674(&iLocal_271);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_272))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_272))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_272, true);
		}
		unk_0x486F346ADFE56674(&iLocal_272);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_273))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_273))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_273, true);
		}
		unk_0x486F346ADFE56674(&iLocal_273);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_274))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_274))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_274, true);
		}
		unk_0x486F346ADFE56674(&iLocal_274);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[0]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_265[0], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_265[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[1]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[1]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_265[1], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_265[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[2]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[2]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_265[2], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_265[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_265[3]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_265[3]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_265[3], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_265[3]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uLocal_267[0]))
		{
			unk_0xE9B3D12A64CC7C1A(uLocal_267[0], true);
		}
		unk_0x486F346ADFE56674(&(uLocal_267[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[1]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uLocal_267[1]))
		{
			unk_0xE9B3D12A64CC7C1A(uLocal_267[1], true);
		}
		unk_0x486F346ADFE56674(&(uLocal_267[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_267[2]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(uLocal_267[2]))
		{
			unk_0xE9B3D12A64CC7C1A(uLocal_267[2], true);
		}
		unk_0x486F346ADFE56674(&(uLocal_267[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[0]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[0], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[1]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[1]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[1], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[2]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[2]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[2], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[2]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[3]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[3]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[3], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[3]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[4]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[4]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[4], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[4]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[5]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[5]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[5], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[5]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[6]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[6]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[6], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[6]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[7]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[7]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[7], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[7]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[8]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[8]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[8], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[8]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[9]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[9]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[9], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[9]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_268[10]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_268[10]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_268[10], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_268[10]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_275[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_275[0]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_275[0], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_275[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_276[0]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_276[0]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_276[0], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_276[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_276[1]))
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_276[1]))
		{
			unk_0xE9B3D12A64CC7C1A(iLocal_276[1], true);
		}
		unk_0x486F346ADFE56674(&(iLocal_276[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_278))
	{
		unk_0x5380482A432E314E(&iLocal_278);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_279))
	{
		if (unk_0xCB234F3DD6FF9368(iLocal_279, 0))
		{
			unk_0x5380482A432E314E(&iLocal_279);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_282))
	{
		unk_0x5380482A432E314E(&iLocal_282);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_283))
	{
		unk_0x5380482A432E314E(&iLocal_283);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_284))
	{
		unk_0x5380482A432E314E(&iLocal_284);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_285))
	{
		unk_0x5380482A432E314E(&iLocal_285);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_287))
	{
		unk_0x5380482A432E314E(&iLocal_287);
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_289))
	{
		if (unk_0xCB234F3DD6FF9368(iLocal_289, 0))
		{
			unk_0x5380482A432E314E(&iLocal_289);
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_293[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
	{
		unk_0x5380482A432E314E(&(iLocal_293[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_280[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_280[1]))
	{
		unk_0x5380482A432E314E(&(iLocal_280[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_293[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_293[1]))
	{
		unk_0x5380482A432E314E(&(iLocal_293[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_286[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_286[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_286[1]))
	{
		unk_0x5380482A432E314E(&(iLocal_286[1]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_288[0]))
	{
		unk_0x5380482A432E314E(&(iLocal_288[0]));
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_281))
	{
		unk_0x5380482A432E314E(&iLocal_281);
	}
	unk_0xF4D9AAA3F4BCC684("TRV4_START");
	unk_0xF4D9AAA3F4BCC684("TRV4_GAMEPLAY_START");
	unk_0xF4D9AAA3F4BCC684("TRV4_START_CS_SKIP");
	unk_0xF4D9AAA3F4BCC684("TRV4_START_RT");
	unk_0xF4D9AAA3F4BCC684("TRV4_FOOT_CHASE_RT");
	unk_0xF4D9AAA3F4BCC684("TRV4_EVADE_RT");
	unk_0xF4D9AAA3F4BCC684("TRV4_CAR_ENTERED");
	unk_0xF4D9AAA3F4BCC684("TRV4_AIRPORT_ENTERED");
	unk_0xF4D9AAA3F4BCC684("TRV4_CHASE");
	unk_0xF4D9AAA3F4BCC684("TRV4_JET_ENTERED");
	if (unk_0x546F10CBA6C484DA(iLocal_262))
	{
		unk_0x907562D8313A11C1(iLocal_262);
	}
	if (unk_0xE0B0126B4689CB72(iLocal_672))
	{
		unk_0x3D0A9CA1789BF40D(iLocal_672, 0);
	}
	unk_0x981B8A90686AD23E();
	unk_0xA68F7B004463AB6F(&iLocal_305);
	unk_0x137FC8E0F58D9E0B("digitalOverlay");
	unk_0xBF98CCF1EA4B13E9(-617f, -2274f, 0f, -406,01f, -2044f, 15f, true, 1);
	unk_0xBF98CCF1EA4B13E9(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, 1);
	if (unk_0xC316B5E3E7ACF515("Trev4_5"))
	{
		unk_0x3794E4CC2803099A("Trev4_5", 0, 0,5f, 1f);
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	unk_0x41390D2B41D5502D(1f);
	unk_0x9B47B379EE749C38(true);
	unk_0x4255E93FCCDE108E(true);
	unk_0xFCCDDE0E48CF9588("missheist_agency3aig_lift_waitped_a");
	func_286(0);
	unk_0xBC3B7443617858A0(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_410()//Position - 0x25738
{
	int iVar0;
	
	Global_55932 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55933[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_411()//Position - 0x25762
{
	int iVar0;
	
	if (unk_0x3B6F9DF9C5FEB3A4("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_104555.f_9055 || func_422(0))
	{
		if (!func_412())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_236(iVar0))
				{
					return;
				}
				unk_0x872F1C1F8587CCC7(&(Global_83730[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_241();
		}
	}
}

int func_412()//Position - 0x257D3
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

void func_413(int iParam0, int iParam1)//Position - 0x25811
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_414(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_92870 > 0)
	{
		Global_98118.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_95149.f_21[iParam1] = iVar0;
	}
}

int func_414(int iParam0, int iParam1)//Position - 0x25877
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_92870 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_98118.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_98118.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_98118.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_98118.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95149.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_95149.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95149.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_95149.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_415(int iParam0, bool bParam1)//Position - 0x259AA
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_419(iParam0, &iVar1);
	if (!unk_0x74C475EB8E73D398("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == iVar1)
			{
				func_418(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x3E2AFE2AD370D62E(iVar1))
			{
				return;
			}
			if (func_416(iParam0))
			{
				func_418(iParam0, 0);
			}
		}
		unk_0xF041CE5E4A02F602(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_416(int iParam0)//Position - 0x25A35
{
	struct<2> Var0;
	
	Var0 = { func_417(iParam0) };
	if (Var0.f_1 != -1 && unk_0xC80D31E4B587871C(Global_31639[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_417(var uParam0)//Position - 0x25A69
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_418(int iParam0, bool bParam1)//Position - 0x25ABB
{
	struct<2> Var0;
	
	Var0 = { func_417(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_31639[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_31639[Var0.f_1]), Var0);
	}
}

var func_419(int iParam0, int iParam1)//Position - 0x25AFE
{
	struct<5> Var0;
	
	Var0 = { func_420(iParam0) };
	*iParam1 = unk_0xC0765AFBFA616644(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_420(int iParam0)//Position - 0x25B23
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_421(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_421(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_421(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_421(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_421(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_421(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_421(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_421(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_421(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_421(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_421(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_421(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_421(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_421(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_421(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_421(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_421(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_421(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_421(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_421(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_421(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_421(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_421(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_421(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_421(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_421(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_421(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_421(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_421(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_421(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_421(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_421(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_421(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_421(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_421(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_421(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_421(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_421(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199,9716f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173,1165f, -1003,28f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_421(int iParam0, bool bParam1)//Position - 0x27D91
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_422(bool bParam0)//Position - 0x2894A
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

